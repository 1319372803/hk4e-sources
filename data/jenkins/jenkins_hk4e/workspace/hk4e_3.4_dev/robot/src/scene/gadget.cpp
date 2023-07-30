// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/robot/src/scene/gadget.cpp

// Line 17: range 0000000000482664-000000000048271B
common::milog::MiLogStream *__cdecl operator<<(common::milog::MiLogStream *stream, const Gadget *gadget)
{
  unsigned __int64 v2; // rax
  std::string val; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)gadget >> 3) + 0x7FFF8000) )
    __asan_report_load8(gadget);
  v2 = (unsigned __int64)(gadget->_vptr_Entity + 3);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(gadget->_vptr_Entity + 3);
  (*(void (__fastcall **)(std::string *, const Gadget *))v2)(&val, gadget);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(stream, &val);
  std::string::~string(&val);
  return stream;
};

// Line 23: range 000000000048271C-00000000004828F1
std::string *__cdecl Gadget::getDesc[abi:cxx11](std::string *retstr, const Gadget *const this)
{
  std::string __lhs; // [rsp+10h] [rbp-90h] BYREF
  std::string v4; // [rsp+30h] [rbp-70h] BYREF
  std::string __rhs; // [rsp+50h] [rbp-50h] BYREF
  std::string v6; // [rsp+70h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->gadget_id_);
  }
  std::to_string(&__rhs, this->gadget_id_);
  Entity::getDesc[abi:cxx11](&__lhs, this);
  std::operator+<char>(&v4, &__lhs, "[gadget_id:");
  std::operator+<char>(&v6, &v4, &__rhs);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::operator+<char>(retstr, &v6, "]");
  std::string::~string(&v6);
  std::string::~string(&v4);
  std::string::~string(&__lhs);
  std::string::~string(&__rhs);
  return retstr;
};

// Line 28: range 00000000004828F2-0000000000482AC9
int32_t __cdecl Gadget::fromProto(Gadget *const this, const proto::SceneEntityInfo *entity_info)
{
  uint32_t v3; // edx
  uint32_t v4; // ecx
  uint32_t v5; // edx
  const proto::Item *v6; // rax
  const proto::SceneGadgetInfo *gadget_info; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  if ( Entity::fromProto(this, entity_info) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/gadget.cpp",
      "fromProto",
      31);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v8, (const char (*)[16])"fromProto fails");
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
  else
  {
    gadget_info = proto::SceneEntityInfo::gadget(entity_info);
    v3 = proto::SceneGadgetInfo::gadget_id(gadget_info);
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->gadget_id_);
    }
    this->gadget_id_ = v3;
    v4 = proto::SceneGadgetInfo::group_id(gadget_info);
    if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->group_id_);
    }
    this->group_id_ = v4;
    v5 = proto::SceneGadgetInfo::config_id(gadget_info);
    if ( *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->config_id_);
    }
    this->config_id_ = v5;
    if ( proto::SceneGadgetInfo::has_trifle_item(gadget_info) )
    {
      v6 = proto::SceneGadgetInfo::trifle_item(gadget_info);
      proto::Item::operator=(&this->item_, v6);
    }
    return 0;
  }
};
