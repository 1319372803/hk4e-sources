// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/robot/src/scene/npc.cpp

// Line 17: range 0000000000482EFC-0000000000482FB3
common::milog::MiLogStream *__cdecl operator<<(common::milog::MiLogStream *stream, const Npc *npc)
{
  unsigned __int64 v2; // rax
  std::string val; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)npc >> 3) + 0x7FFF8000) )
    __asan_report_load8(npc);
  v2 = (unsigned __int64)(npc->_vptr_Entity + 3);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(npc->_vptr_Entity + 3);
  (*(void (__fastcall **)(std::string *, const Npc *))v2)(&val, npc);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(stream, &val);
  std::string::~string(&val);
  return stream;
};

// Line 23: range 0000000000482FB4-0000000000483189
std::string *__cdecl Npc::getDesc[abi:cxx11](std::string *retstr, const Npc *const this)
{
  std::string __lhs; // [rsp+10h] [rbp-90h] BYREF
  std::string v4; // [rsp+30h] [rbp-70h] BYREF
  std::string __rhs; // [rsp+50h] [rbp-50h] BYREF
  std::string v6; // [rsp+70h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->npc_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->npc_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->npc_id_);
  }
  common::tools::StringUtils::numToStr<unsigned int>(&__rhs, this->npc_id_);
  Entity::getDesc[abi:cxx11](&__lhs, this);
  std::operator+<char>(&v4, &__lhs, "[npc_id:");
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

// Line 28: range 000000000048318A-0000000000483293
int32_t __cdecl Npc::fromProto(Npc *const this, const proto::SceneEntityInfo *entity_info)
{
  uint32_t v3; // edx
  const proto::SceneNpcInfo *npc_info; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( Creature::fromProto(this, entity_info) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/npc.cpp",
      "fromProto",
      31);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v5, (const char (*)[16])"fromProto fails");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return -1;
  }
  else
  {
    npc_info = proto::SceneEntityInfo::npc(entity_info);
    v3 = proto::SceneNpcInfo::npc_id(npc_info);
    if ( *(_BYTE *)(((unsigned __int64)&this->npc_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->npc_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->npc_id_);
    }
    this->npc_id_ = v3;
    return 0;
  }
};

// Line 40: range 0000000000483294-000000000048336A
__int64 __fastcall Npc::addTalk(Npc *const this, uint32_t talk_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 10 talk_id:39";
  *(_QWORD *)(v2 + 16) = Npc::addTalk;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = talk_id;
  std::vector<unsigned int>::push_back(&this->talk_id_vec_, (const std::vector<unsigned int>::value_type *)(v2 + 32));
  result = 0LL;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
