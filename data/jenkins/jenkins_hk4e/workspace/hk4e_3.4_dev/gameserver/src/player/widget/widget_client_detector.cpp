// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/widget/widget_client_detector.cpp

// Line 23: range 0000000016206C8E-0000000016206E1D
int32_t __cdecl WidgetClientDetector::init(
        WidgetClientDetector *const this,
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
  *(_QWORD *)(v2 + 8) = "1 32 16 22 detector_config_ptr:24";
  *(_QWORD *)(v2 + 16) = WidgetClientDetector::init;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<data::ConfigWidgetToyClintDetector,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v2 + 32));
  if ( std::operator!=<data::ConfigWidgetToyClintDetector>(
         0LL,
         (const std::shared_ptr<data::ConfigWidgetToyClintDetector> *)(v2 + 32)) )
  {
    v5 = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_client_detector.cpp",
      "init",
      29);
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
      &v7,
      (const char (*)[49])"convert ConfigWidgetToyClintDetector ptr failed.");
    common::milog::MiLogStream::~MiLogStream(&v7);
    v5 = 5;
  }
  std::shared_ptr<data::ConfigWidgetToyClintDetector>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyClintDetector> *const)(v2 + 32));
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

// Line 34: range 0000000016206E1E-0000000016207624
int32_t __cdecl WidgetClientDetector::onQuickUse(
        WidgetClientDetector *const this,
        const proto::QuickUseWidgetReq *req,
        proto::QuickUseWidgetRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t WidgetNewConfig; // ecx
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  std::__shared_ptr_access<data::ConfigWidgetToyClintDetector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<data::ConfigWidgetToyClintDetector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rdx
  bool *p_is_consume_material; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rcx
  PlayerWidgetComp *WidgetComp; // r14
  std::__shared_ptr_access<data::ConfigWidgetToyClintDetector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<data::ConfigWidgetToyClintDetector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rdx
  bool *v22; // rax
  PlayerItemComp *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  int32_t result; // eax
  uint32_t material_id; // [rsp+28h] [rbp-118h]
  int32_t ret; // [rsp+2Ch] [rbp-114h]
  common::milog::MiLogStream v31; // [rsp+30h] [rbp-110h] BYREF
  char v32[240]; // [rsp+50h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 6 ret:74 64 8 9 reason:73 96 16 25 widget_base_config_ptr:35 128 16 22 detector_config_pt"
                        "r:41 160 16 13 item_param:49";
  *(_QWORD *)(v3 + 16) = WidgetClientDetector::onQuickUse;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 160));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
  WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v6->design_config.json_config_mgr);
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->material_id_);
  }
  WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)(v3 + 96), WidgetNewConfig);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 160));
  if ( std::operator==<data::ConfigBaseWidgetToy>(0LL, (const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/widget/widget_client_detector.cpp",
      "onQuickUse",
      38);
    v8 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v31,
           (const char (*)[38])"widget config not found, material_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->material_id_);
    common::milog::MiLogStream::~MiLogStream(&v31);
    v9 = 5;
    goto LABEL_38;
  }
  std::dynamic_pointer_cast<data::ConfigWidgetToyClintDetector,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v3 + 128));
  if ( std::operator==<data::ConfigWidgetToyClintDetector>(
         0LL,
         (const std::shared_ptr<data::ConfigWidgetToyClintDetector> *)(v3 + 128)) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_client_detector.cpp",
      "onQuickUse",
      44);
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
      &v31,
      (const char (*)[49])"convert ConfigWidgetToyClintDetector ptr failed.");
    common::milog::MiLogStream::~MiLogStream(&v31);
    v9 = 5;
  }
  else
  {
    v10 = std::__shared_ptr_access<data::ConfigWidgetToyClintDetector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyClintDetector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    if ( *(_BYTE *)(((unsigned __int64)&v10->material_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v10->material_id >> 3) + 0x7FFF8000) <= 3 )
    {
      v10 = (std::__shared_ptr_access<data::ConfigWidgetToyClintDetector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v10->material_id);
    }
    material_id = v10->material_id;
    *(_DWORD *)(v3 + 160) = 0;
    *(_DWORD *)(v3 + 164) = 0;
    *(_DWORD *)(v3 + 168) = 0;
    *(_DWORD *)(v3 + 172) = 0;
    *(_DWORD *)(v3 + 160) = material_id;
    *(_DWORD *)(v3 + 164) = 1;
    v11 = std::__shared_ptr_access<data::ConfigWidgetToyClintDetector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyClintDetector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    p_is_consume_material = &v11->is_consume_material;
    if ( *(_BYTE *)(((unsigned __int64)p_is_consume_material >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_consume_material & 7) >= *(_BYTE *)(((unsigned __int64)p_is_consume_material >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_consume_material);
    }
    if ( !v11->is_consume_material )
      goto LABEL_43;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    ItemComp = Player::getItemComp(this->player_);
    *(_DWORD *)(v3 + 48) = PlayerItemComp::checkSubItem(ItemComp, (const ItemParam *)(v3 + 160));
    if ( *(_DWORD *)(v3 + 48) )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/widget/widget_client_detector.cpp",
        "onQuickUse",
        59);
      v14 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v31,
              (const char (*)[31])"checkSubItem fail, item_param:");
      v15 = operator<<(v14, (const ItemParam *)(v3 + 160));
      v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" ret:");
      v17 = common::milog::MiLogStream::operator<<<int,(int *)0>(v16, (const int *)(v3 + 48));
      v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v17, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    else
    {
LABEL_43:
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      WidgetComp = Player::getWidgetComp(this->player_);
      v20 = std::__shared_ptr_access<data::ConfigWidgetToyClintDetector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyClintDetector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&v20->cd_group >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v20->cd_group >> 3) + 0x7FFF8000) <= 3 )
      {
        v20 = (std::__shared_ptr_access<data::ConfigWidgetToyClintDetector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v20->cd_group);
      }
      ret = PlayerWidgetComp::checkWidgetGroupCoolDown(WidgetComp, v20->cd_group);
      if ( ret )
      {
        v9 = ret;
        goto LABEL_37;
      }
      v21 = std::__shared_ptr_access<data::ConfigWidgetToyClintDetector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyClintDetector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      v22 = &v21->is_consume_material;
      if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v22 & 7) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v22);
      }
      if ( !v21->is_consume_material )
        goto LABEL_36;
      SubItemReason::SubItemReason((SubItemReason *const)(v3 + 64), ACTION_REASON_USE_WIDGET_CLIENT_DETECTOR);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v23 = Player::getItemComp(this->player_);
      *(_DWORD *)(v3 + 48) = PlayerItemComp::subItem(
                               v23,
                               (const ItemParam *)(v3 + 160),
                               (const SubItemReason *)(v3 + 64));
      if ( !*(_DWORD *)(v3 + 48) )
      {
LABEL_36:
        v9 = 0;
        goto LABEL_37;
      }
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/widget/widget_client_detector.cpp",
        "onQuickUse",
        77);
      v24 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v31,
              (const char (*)[26])"subItem fail, item_param:");
      v25 = operator<<(v24, (const ItemParam *)(v3 + 160));
      v26 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v25, (const char (*)[6])" ret:");
      v27 = common::milog::MiLogStream::operator<<<int,(int *)0>(v26, (const int *)(v3 + 48));
      v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v27, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    operator<<(v18, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v31);
    v9 = *(_DWORD *)(v3 + 48);
  }
LABEL_37:
  std::shared_ptr<data::ConfigWidgetToyClintDetector>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyClintDetector> *const)(v3 + 128));
LABEL_38:
  std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr((std::shared_ptr<data::ConfigBaseWidgetToy> *const)(v3 + 96));
  result = v9;
  if ( v32 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
