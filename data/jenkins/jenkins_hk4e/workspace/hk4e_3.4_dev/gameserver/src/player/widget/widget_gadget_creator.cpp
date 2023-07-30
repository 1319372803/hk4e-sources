// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/widget/widget_gadget_creator.cpp

// Line 21: range 0000000016209C0A-0000000016209D99
int32_t __cdecl WidgetGadgetCreator::init(
        WidgetGadgetCreator *const this,
        data::ConfigBaseWidgetToyPtr *p_base_config_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-90h] BYREF
  char v8[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 22 detector_config_ptr:22";
  *(_QWORD *)(v2 + 16) = WidgetGadgetCreator::init;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<data::ConfigWidgetToyCreateGadgetBase,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v2 + 32));
  if ( std::operator==<data::ConfigWidgetToyCreateGadgetBase>(
         0LL,
         (const std::shared_ptr<data::ConfigWidgetToyCreateGadgetBase> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_gadget_creator.cpp",
      "init",
      25);
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
      &v7,
      (const char (*)[49])"convert ConfigWidgetToyClintDetector ptr failed.");
    common::milog::MiLogStream::~MiLogStream(&v7);
    v5 = 5;
  }
  else
  {
    v5 = 0;
  }
  std::shared_ptr<data::ConfigWidgetToyCreateGadgetBase>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyCreateGadgetBase> *const)(v2 + 32));
  result = v5;
  if ( v8 == (char *)v2 )
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

// Line 32: range 0000000016209D9A-0000000016209E60
int32_t __cdecl WidgetGadgetCreator::onQuickUse(
        WidgetGadgetCreator *const this,
        const proto::QuickUseWidgetReq *req,
        proto::QuickUseWidgetRsp *rsp_0)
{
  const proto::WidgetCreatorInfo *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+30h] [rbp-30h] BYREF

  if ( proto::QuickUseWidgetReq::param_case(req) == kCreatorInfo )
  {
    v4 = proto::QuickUseWidgetReq::creator_info(req);
    return WidgetGadgetCreator::doAction(this, v4);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_gadget_creator.cpp",
      "onQuickUse",
      35);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v5, (const char (*)[21])"invalid client param");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return -1;
  }
};

// Line 43: range 0000000016209E62-0000000016209F28
int32_t __cdecl WidgetGadgetCreator::onDoBagUse(
        WidgetGadgetCreator *const this,
        const proto::WidgetDoBagReq *req,
        proto::WidgetDoBagRsp *rsp_0)
{
  const proto::WidgetCreatorInfo *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+30h] [rbp-30h] BYREF

  if ( proto::WidgetDoBagReq::op_info_case(req) == kWidgetCreatorInfo )
  {
    v4 = proto::WidgetDoBagReq::widget_creator_info(req);
    return WidgetGadgetCreator::doAction(this, v4);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_gadget_creator.cpp",
      "onDoBagUse",
      46);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v5, (const char (*)[21])"invalid client param");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return -1;
  }
};

// Line 54: range 0000000016209F2A-000000001620A5F4
int32_t __cdecl WidgetGadgetCreator::doAction(WidgetGadgetCreator *const this, const proto::WidgetCreatorInfo *info)
{
  proto::WidgetCreatorOpType v2; // eax
  WidgetGadgetMgr *v3; // rcx
  common::milog::MiLogStream *v4; // rax
  unsigned __int64 v6; // rax
  __int64 (__fastcall *v7)(WidgetGadgetCreator *const, Vector3 *, Vector3 *); // rbx
  const proto::WidgetCreateLocationInfo *v8; // rax
  const proto::Vector *v9; // rax
  const proto::WidgetCreateLocationInfo *v10; // rax
  const proto::Vector *v11; // rax
  common::milog::MiLogStream *v12; // rax
  WidgetGadgetMgr *v13; // rcx
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(WidgetGadgetCreator *const, _QWORD); // rbx
  google::protobuf::uint32 v16; // edx
  WidgetGadgetMgr *WidgetGadgetMgr; // rcx
  common::milog::MiLogStream *v18; // rax
  unsigned __int64 v19; // rax
  __int64 (__fastcall *v20)(WidgetGadgetCreator *const, __int64, Vector3 *, Vector3 *); // rbx
  const proto::WidgetCreateLocationInfo *v21; // rax
  const proto::Vector *v22; // rax
  const proto::WidgetCreateLocationInfo *v23; // rax
  const proto::Vector *v24; // rax
  __int64 v25; // rsi
  int32_t ret; // [rsp+14h] [rbp-4Ch]
  int32_t reta; // [rsp+14h] [rbp-4Ch]
  int32_t retb; // [rsp+14h] [rbp-4Ch]
  Vector3 v29; // [rsp+18h] [rbp-48h] BYREF
  Vector3 v30; // [rsp+24h] [rbp-3Ch] BYREF
  common::milog::MiLogStream v31; // [rsp+30h] [rbp-30h] BYREF

  ret = -1;
  v2 = proto::WidgetCreatorInfo::op_type(info);
  if ( v2 == WIDGET_CREATOR_TYPE_RETRACT_AND_CREATE )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->widget_comp_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->widget_comp_);
    WidgetGadgetMgr = PlayerWidgetComp::getWidgetGadgetMgr(this->widget_comp_);
    if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->material_id_);
    }
    retb = WidgetGadgetMgr::checkWidgetGroupCoolDown(WidgetGadgetMgr, this->material_id_);
    if ( retb )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/widget/widget_gadget_creator.cpp",
        "doAction",
        90);
      v18 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v31,
              (const char (*)[46])"checkWidgetGroupCoolDown failed, material_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &this->material_id_);
      common::milog::MiLogStream::~MiLogStream(&v31);
      return retb;
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v19 = (unsigned __int64)(this->_vptr_WidgetBase + 23);
    if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
      v19 = __asan_report_load8(this->_vptr_WidgetBase + 23);
    v20 = *(__int64 (__fastcall **)(WidgetGadgetCreator *const, __int64, Vector3 *, Vector3 *))v19;
    v21 = proto::WidgetCreatorInfo::location_info(info);
    v22 = proto::WidgetCreateLocationInfo::rot(v21);
    Vector3::Vector3(&v30, v22);
    v23 = proto::WidgetCreatorInfo::location_info(info);
    v24 = proto::WidgetCreateLocationInfo::pos(v23);
    Vector3::Vector3(&v29, v24);
    v25 = proto::WidgetCreatorInfo::entity_id(info);
    ret = v20(this, v25, &v29, &v30);
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/widget/widget_gadget_creator.cpp",
        "doAction",
        96);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v31,
        (const char (*)[26])"onRetractAndCreate failed");
      common::milog::MiLogStream::~MiLogStream(&v31);
      return ret;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->widget_comp_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->widget_comp_);
    v13 = PlayerWidgetComp::getWidgetGadgetMgr(this->widget_comp_);
    if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->material_id_);
    }
LABEL_22:
    WidgetGadgetMgr::updateWidgetGroupCoolDown(v13, this->material_id_);
    return ret;
  }
  if ( v2 <= WIDGET_CREATOR_TYPE_RETRACT_AND_CREATE )
  {
    if ( v2 )
    {
      if ( v2 == WIDGET_CREATOR_TYPE_RETRACT )
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v14 = (unsigned __int64)(this->_vptr_WidgetBase + 22);
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
          v14 = __asan_report_load8(this->_vptr_WidgetBase + 22);
        v15 = *(__int64 (__fastcall **)(WidgetGadgetCreator *const, _QWORD))v14;
        v16 = proto::WidgetCreatorInfo::entity_id(info);
        ret = v15(this, v16);
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/widget/widget_gadget_creator.cpp",
            "doAction",
            80);
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v31, (const char (*)[17])"onRetract failed");
          common::milog::MiLogStream::~MiLogStream(&v31);
          return ret;
        }
      }
      return ret;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->widget_comp_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->widget_comp_);
    v3 = PlayerWidgetComp::getWidgetGadgetMgr(this->widget_comp_);
    if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->material_id_);
    }
    reta = WidgetGadgetMgr::checkWidgetGroupCoolDown(v3, this->material_id_);
    if ( reta )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/widget/widget_gadget_creator.cpp",
        "doAction",
        63);
      v4 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             &v31,
             (const char (*)[46])"checkWidgetGroupCoolDown failed, material_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->material_id_);
      common::milog::MiLogStream::~MiLogStream(&v31);
      return reta;
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v6 = (unsigned __int64)(this->_vptr_WidgetBase + 21);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8(this->_vptr_WidgetBase + 21);
    v7 = *(__int64 (__fastcall **)(WidgetGadgetCreator *const, Vector3 *, Vector3 *))v6;
    v8 = proto::WidgetCreatorInfo::location_info(info);
    v9 = proto::WidgetCreateLocationInfo::rot(v8);
    Vector3::Vector3(&v30, v9);
    v10 = proto::WidgetCreatorInfo::location_info(info);
    v11 = proto::WidgetCreateLocationInfo::pos(v10);
    Vector3::Vector3(&v29, v11);
    ret = v7(this, &v29, &v30);
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/widget/widget_gadget_creator.cpp",
        "doAction",
        69);
      v12 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v31,
              (const char (*)[46])"getWidgetGadgetMgr onUse failed, material_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->material_id_);
      common::milog::MiLogStream::~MiLogStream(&v31);
      return ret;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->widget_comp_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->widget_comp_);
    v13 = PlayerWidgetComp::getWidgetGadgetMgr(this->widget_comp_);
    if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->material_id_);
    }
    goto LABEL_22;
  }
  return ret;
};

// Line 109: range 000000001620A5F6-000000001620A692
int32_t __cdecl WidgetGadgetCreator::onCreate(WidgetGadgetCreator *const this, const Vector3 *pos, const Vector3 *rot)
{
  WidgetGadgetMgr *widget_gadget_mgr; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->widget_comp_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->widget_comp_);
  widget_gadget_mgr = PlayerWidgetComp::getWidgetGadgetMgr(this->widget_comp_);
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->material_id_);
  }
  return WidgetGadgetMgr::onCreate(widget_gadget_mgr, this->material_id_, pos, rot);
};

// Line 115: range 000000001620A694-000000001620A76A
int32_t __cdecl WidgetGadgetCreator::onRetract(WidgetGadgetCreator *const this, uint32_t entity_id)
{
  WidgetGadgetMgr *widget_gadget_mgr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  if ( entity_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->widget_comp_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->widget_comp_);
    widget_gadget_mgr = PlayerWidgetComp::getWidgetGadgetMgr(this->widget_comp_);
    return WidgetGadgetMgr::onRetract(widget_gadget_mgr, entity_id);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_gadget_creator.cpp",
      "onRetract",
      118);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v4, (const char (*)[12])"entity is 0");
    common::milog::MiLogStream::~MiLogStream(&v4);
    return -1;
  }
};

// Line 126: range 000000001620A76C-000000001620ABF4
int32_t __cdecl WidgetGadgetCreator::onRetractAndCreate(
        WidgetGadgetCreator *const this,
        uint32_t entity_id,
        const Vector3 *pos,
        const Vector3 *rot)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  uint32_t v7; // ecx
  int32_t v8; // r14d
  std::__shared_ptr_access<data::ConfigWidgetToyCreateGadgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  WidgetGadgetMgr *WidgetGadgetMgr; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  common::milog::MiLogStream *v13; // rax
  int32_t result; // eax
  uint32_t entity_ida; // [rsp+14h] [rbp-BCh]
  uint32_t gadget_id; // [rsp+28h] [rbp-A8h]
  int32_t ret; // [rsp+2Ch] [rbp-A4h]
  int32_t reta; // [rsp+2Ch] [rbp-A4h]
  std::shared_ptr<Config> v21; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-90h] BYREF
  char v23[112]; // [rsp+60h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 21 gadget_config_ptr:127";
  *(_QWORD *)(v4 + 16) = WidgetGadgetCreator::onRetractAndCreate;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  v7 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)
     + 93080;
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->material_id_);
  }
  JsonConfigMgr::findWidgetToyCreateGadgetConfig((const JsonConfigMgr *const)(v4 + 32), v7);
  std::shared_ptr<Config>::~shared_ptr(&v21);
  if ( std::operator==<data::ConfigWidgetToyCreateGadgetBase>(
         (const std::shared_ptr<data::ConfigWidgetToyCreateGadgetBase> *)(v4 + 32),
         0LL) )
  {
    v8 = 5;
  }
  else
  {
    v9 = std::__shared_ptr_access<data::ConfigWidgetToyCreateGadgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyCreateGadgetBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v9->gadget_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v9->gadget_id >> 3) + 0x7FFF8000) <= 3 )
    {
      v9 = (std::__shared_ptr_access<data::ConfigWidgetToyCreateGadgetBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v9->gadget_id);
    }
    gadget_id = v9->gadget_id;
    if ( *(_BYTE *)(((unsigned __int64)&this->widget_comp_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->widget_comp_);
    WidgetGadgetMgr = PlayerWidgetComp::getWidgetGadgetMgr(this->widget_comp_);
    entity_ida = WidgetGadgetMgr::findOldestEntityId(WidgetGadgetMgr, gadget_id);
    if ( !entity_ida )
      goto LABEL_31;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v11 = (unsigned __int64)(this->_vptr_WidgetBase + 22);
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(this->_vptr_WidgetBase + 22);
    ret = (*(__int64 (__fastcall **)(WidgetGadgetCreator *const, _QWORD))v11)(this, entity_ida);
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/widget_gadget_creator.cpp",
        "onRetractAndCreate",
        140);
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v22, (const char (*)[17])"onRetract failed");
      common::milog::MiLogStream::~MiLogStream(&v22);
      v8 = ret;
    }
    else
    {
LABEL_31:
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v12 = (unsigned __int64)(this->_vptr_WidgetBase + 21);
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        v12 = __asan_report_load8(this->_vptr_WidgetBase + 21);
      reta = (*(__int64 (__fastcall **)(WidgetGadgetCreator *const, const Vector3 *, const Vector3 *))v12)(
               this,
               pos,
               rot);
      if ( reta )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/widget/widget_gadget_creator.cpp",
          "onRetractAndCreate",
          147);
        v13 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v22,
                (const char (*)[35])"onCreate gadget fail. material_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->material_id_);
        common::milog::MiLogStream::~MiLogStream(&v22);
        v8 = reta;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<data::ConfigWidgetToyCreateGadgetBase>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyCreateGadgetBase> *const)(v4 + 32));
  result = v8;
  if ( v23 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 153: range 000000001623CEB6-000000001623CEF1
std::type_index __cdecl WidgetTeapotCreator::getTypeIndex(const WidgetTeapotCreator *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&WidgetTeapotCreator::widget_type >> 3) + 0x7FFF8000) )
    __asan_report_load8(&WidgetTeapotCreator::widget_type);
  return WidgetTeapotCreator::widget_type;
};

// Line 153: range 000000001634CCDA-000000001634CDE5
void __fastcall ZN19WidgetTeapotCreatorCI210WidgetBaseER16PlayerWidgetCompR6Playerj(
        WidgetTeapotCreator *const this,
        PlayerWidgetComp *a2,
        Player *a3,
        int a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int (**v7)(...); // rdx
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ZN19WidgetTeapotCreatorCI210WidgetBaseER16PlayerWidgetCompR6Playerj;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = a4;
  ZN19WidgetGadgetCreatorCI210WidgetBaseER16PlayerWidgetCompR6Playerj(this, a2, a3, *(_DWORD *)(v4 + 32));
  v7 = (int (**)(...))(&`vtable for'WidgetTeapotCreator + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WidgetBase = v7;
  if ( v10 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 153: range 000000001635A7D2-000000001635A81F
void __cdecl WidgetTeapotCreator::~WidgetTeapotCreator(WidgetTeapotCreator *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WidgetTeapotCreator + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WidgetBase = v2;
  WidgetGadgetCreator::~WidgetGadgetCreator(this);
};

// Line 153: range 000000001635A820-000000001635A84A
void __cdecl WidgetTeapotCreator::~WidgetTeapotCreator(WidgetTeapotCreator *const this)
{
  WidgetTeapotCreator::~WidgetTeapotCreator(this);
  operator delete(this, 0x98uLL);
};
