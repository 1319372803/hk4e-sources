// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/widget/widget_oneoff_gather_point_detector.cpp

// Line 29: range 000000001621790E-0000000016217ADE
int32_t __cdecl WidgetOneoffGatherPointDetector::fromDetailBin(
        WidgetOneoffGatherPointDetector *const this,
        const proto::WidgetDetailBin *detail_bin,
        const proto::WidgetBin *widget_bin)
{
  const proto::WidgetDetailBin *v3; // rax
  bool is_hint_valid; // cl
  char v5; // dl
  __int64 v6; // rdx
  const proto::VectorBin *v7; // rax
  char v8; // dl
  __int64 v9; // rsi
  uint32_t v10; // edx
  char v11; // al
  uint32_t v12; // ecx
  char v13; // dl
  bool v14; // dl
  const proto::WidgetOneoffGatherPointDetectorBin *bin; // [rsp+28h] [rbp-18h]
  Vector3 v17; // [rsp+34h] [rbp-Ch] BYREF

  v3 = proto::WidgetBin::detail_bin(widget_bin);
  bin = proto::WidgetDetailBin::oneoff_gather_point_detector(v3);
  is_hint_valid = proto::WidgetOneoffGatherPointDetectorBin::is_hint_valid(bin);
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000);
  LOBYTE(detail_bin) = v5 != 0;
  v6 = (v5 != 0) & (unsigned __int8)((((unsigned __int8)this - 111) & 7) >= v5);
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_hint_valid_, detail_bin, v6);
  this->is_hint_valid_ = is_hint_valid;
  v7 = proto::WidgetOneoffGatherPointDetectorBin::hint_center_pos(bin);
  Vector3::Vector3(&v17, v7);
  v8 = *(_BYTE *)((((unsigned __int64)&this->hint_center_pos_.z + 3) >> 3) + 0x7FFF8000);
  v9 = v8 != 0;
  if ( ((((unsigned __int8)this - 108) & 7) >= *(_BYTE *)(((unsigned __int64)&this->hint_center_pos_ >> 3) + 0x7FFF8000)
     && *(_BYTE *)(((unsigned __int64)&this->hint_center_pos_ >> 3) + 0x7FFF8000) != 0) | (unsigned __int8)v9 & ((((unsigned __int8)this - 97) & 7) >= v8) )
  {
    v9 = 12LL;
    __asan_report_store_n(&this->hint_center_pos_, 12LL);
  }
  this->hint_center_pos_ = v17;
  v10 = proto::WidgetOneoffGatherPointDetectorBin::group_id(bin);
  v11 = *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(v9) = v11 != 0;
    __asan_report_store4(&this->group_id_, v9, v10);
  }
  this->group_id_ = v10;
  v12 = proto::WidgetOneoffGatherPointDetectorBin::config_id(bin);
  v13 = *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v13 != 0;
  v14 = v13 != 0 && (char)((((_BYTE)this - 92) & 7) + 3) >= v13;
  if ( v14 )
    __asan_report_store4(&this->config_id_, v9, v14);
  this->config_id_ = v12;
  return 0;
};

// Line 39: range 0000000016217AE0-0000000016217C32
int32_t __cdecl WidgetOneoffGatherPointDetector::toDetailBin(
        const WidgetOneoffGatherPointDetector *const this,
        proto::WidgetDetailBin *detail_bin,
        proto::WidgetBin *widget_bin)
{
  proto::WidgetDetailBin *v3; // rax
  proto::VectorBin *v4; // rax
  proto::WidgetOneoffGatherPointDetectorBin *bin; // [rsp+28h] [rbp-18h]

  v3 = proto::WidgetBin::mutable_detail_bin(widget_bin);
  bin = proto::WidgetDetailBin::mutable_oneoff_gather_point_detector(v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 111) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_hint_valid_);
  }
  proto::WidgetOneoffGatherPointDetectorBin::set_is_hint_valid(bin, this->is_hint_valid_);
  v4 = proto::WidgetOneoffGatherPointDetectorBin::mutable_hint_center_pos(bin);
  Vector3::toBin(&this->hint_center_pos_, v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->group_id_);
  }
  proto::WidgetOneoffGatherPointDetectorBin::set_group_id(bin, this->group_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->config_id_);
  }
  proto::WidgetOneoffGatherPointDetectorBin::set_config_id(bin, this->config_id_);
  return 0;
};

// Line 49: range 0000000016217C34-0000000016217DC3
int32_t __cdecl WidgetOneoffGatherPointDetector::init(
        WidgetOneoffGatherPointDetector *const this,
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
  *(_QWORD *)(v2 + 8) = "1 32 16 13 config_ptr:50";
  *(_QWORD *)(v2 + 16) = WidgetOneoffGatherPointDetector::init;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<data::ConfigWidgetToyOneoffGatherPointDetector,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v2 + 32));
  if ( std::operator!=<data::ConfigWidgetToyOneoffGatherPointDetector>(
         0LL,
         (const std::shared_ptr<data::ConfigWidgetToyOneoffGatherPointDetector> *)(v2 + 32)) )
  {
    v5 = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_oneoff_gather_point_detector.cpp",
      "init",
      55);
    common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
      &v7,
      (const char (*)[61])"convert ConfigWidgetToyOneoffGatherPointDetector ptr failed.");
    common::milog::MiLogStream::~MiLogStream(&v7);
    v5 = 5;
  }
  std::shared_ptr<data::ConfigWidgetToyOneoffGatherPointDetector>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyOneoffGatherPointDetector> *const)(v2 + 32));
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

// Line 60: range 0000000016217DC4-0000000016217DF9
void __cdecl WidgetOneoffGatherPointDetector::fillAllWidgetNotifyData(
        const WidgetOneoffGatherPointDetector *const this,
        proto::AllWidgetDataNotify *notify)
{
  proto::OneoffGatherPointDetectorData *v2; // rdx

  v2 = proto::AllWidgetDataNotify::add_oneoff_gather_point_detector_data_list(notify);
  WidgetOneoffGatherPointDetector::fillClientData(this, v2);
};

// Line 66: range 0000000016217DFA-00000000162183FB
void __cdecl WidgetOneoffGatherPointDetector::onLogin(WidgetOneoffGatherPointDetector *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t WidgetNewConfig; // ecx
  uint32_t config_id; // r15d
  uint32_t group_id; // r14d
  std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  uint32_t *p_gather_point_type; // rax
  uint32_t v10; // r15d
  uint32_t v11; // r14d
  std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  uint32_t *v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  const PlayerSceneComp *SceneComp; // [rsp+10h] [rbp-C0h]
  std::shared_ptr<Config> v17; // [rsp+20h] [rbp-B0h] BYREF
  std::shared_ptr<data::ConfigBaseWidgetToy> v18; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-90h] BYREF
  char v20[112]; // [rsp+60h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 42 oneoff_gather_point_detector_config_ptr:69";
  *(_QWORD *)(v1 + 16) = WidgetOneoffGatherPointDetector::onLogin;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  WidgetBase::onLogin((WidgetBase *const)this);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
  WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v4->design_config.json_config_mgr);
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->material_id_);
  }
  WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)&v18, WidgetNewConfig);
  std::dynamic_pointer_cast<data::ConfigWidgetToyOneoffGatherPointDetector,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v1 + 32));
  std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr(&v18);
  std::shared_ptr<Config>::~shared_ptr(&v17);
  if ( std::operator==<data::ConfigWidgetToyOneoffGatherPointDetector>(
         0LL,
         (const std::shared_ptr<data::ConfigWidgetToyOneoffGatherPointDetector> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_oneoff_gather_point_detector.cpp",
      "onLogin",
      72);
    if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->material_id_);
    }
    common::milog::MiLogStream::operator()(
      &v19,
      "ConfigWidgetToyOneoffGatherPointDetector config %u was deleted !",
      this->material_id_);
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 111) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_hint_valid_);
    }
    if ( this->is_hint_valid_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      SceneComp = Player::getSceneComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->config_id_);
      }
      config_id = this->config_id_;
      if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->group_id_);
      }
      group_id = this->group_id_;
      v8 = std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      p_gather_point_type = &v8->gather_point_type;
      if ( *(_BYTE *)(((unsigned __int64)p_gather_point_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_gather_point_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gather_point_type >> 3)
                                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(p_gather_point_type);
      }
      if ( PlayerSceneComp::isGotOneoffGatherPointByGroupConfigId(SceneComp, v8->gather_point_type, group_id, config_id) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/widget/widget_oneoff_gather_point_detector.cpp",
          "onLogin",
          86);
        if ( *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->config_id_);
        }
        v10 = this->config_id_;
        if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->group_id_);
        }
        v11 = this->group_id_;
        v12 = std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        v13 = &v12->gather_point_type;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        common::milog::MiLogStream::operator()(
          &v19,
          "already got gather point<%u> @ group_id=%u config_id=%u. auto clear hint",
          v12->gather_point_type,
          v11,
          v10);
        common::milog::MiLogStream::~MiLogStream(&v19);
        v14 = ((_BYTE)this - 111) & 7;
        v15 = (*(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000));
        if ( (_BYTE)v15 )
          __asan_report_store1(&this->is_hint_valid_, v14, v15);
        this->is_hint_valid_ = 0;
      }
    }
  }
  std::shared_ptr<data::ConfigWidgetToyOneoffGatherPointDetector>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyOneoffGatherPointDetector> *const)(v1 + 32));
  if ( v20 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 91: range 00000000162183FC-00000000162184BE
int32_t __cdecl WidgetOneoffGatherPointDetector::onClientReport(
        WidgetOneoffGatherPointDetector *const this,
        const proto::WidgetReportReq *req)
{
  __int64 v3; // rsi
  __int64 v4; // rdx

  if ( proto::WidgetReportReq::is_clear_hint(req) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 111) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_hint_valid_);
    }
    if ( !this->is_hint_valid_ )
      return 685;
    v3 = ((_BYTE)this - 111) & 7;
    v4 = (*(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v4 )
      __asan_report_store1(&this->is_hint_valid_, v3, v4);
    this->is_hint_valid_ = 0;
  }
  return 0;
};

// Line 104: range 00000000162184C0-000000001621891F
void __cdecl WidgetOneoffGatherPointDetector::fillClientData(
        const WidgetOneoffGatherPointDetector *const this,
        proto::OneoffGatherPointDetectorData *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  proto::Vector *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t WidgetNewConfig; // ecx
  std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::shared_ptr<Config> v10; // [rsp+10h] [rbp-B0h] BYREF
  std::shared_ptr<data::ConfigBaseWidgetToy> v11; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-90h] BYREF
  char v13[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 21 widget_config_ptr:111";
  *(_QWORD *)(v2 + 16) = WidgetOneoffGatherPointDetector::fillClientData;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->material_id_);
  }
  proto::OneoffGatherPointDetectorData::set_material_id(proto, this->material_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 111) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_hint_valid_);
  }
  proto::OneoffGatherPointDetectorData::set_is_hint_valid(proto, this->is_hint_valid_);
  v5 = proto::OneoffGatherPointDetectorData::mutable_hint_center_pos(proto);
  Vector3::toClient(&this->hint_center_pos_, v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->group_id_);
  }
  proto::OneoffGatherPointDetectorData::set_group_id(proto, this->group_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->config_id_);
  }
  proto::OneoffGatherPointDetectorData::set_config_id(proto, this->config_id_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10);
  WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v6->design_config.json_config_mgr);
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->material_id_);
  }
  WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)&v11, WidgetNewConfig);
  std::dynamic_pointer_cast<data::ConfigWidgetToyOneoffGatherPointDetector,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v2 + 32));
  std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr(&v11);
  std::shared_ptr<Config>::~shared_ptr(&v10);
  if ( std::operator!=<data::ConfigWidgetToyOneoffGatherPointDetector>(
         0LL,
         (const std::shared_ptr<data::ConfigWidgetToyOneoffGatherPointDetector> *)(v2 + 32)) )
  {
    v8 = std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v8->hint_radius >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v8->hint_radius >> 3) + 0x7FFF8000) <= 3 )
    {
      v8 = (std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v8->hint_radius);
    }
    proto::OneoffGatherPointDetectorData::set_hint_radius(proto, v8->hint_radius);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_oneoff_gather_point_detector.cpp",
      "fillClientData",
      118);
    v9 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
           &v12,
           (const char (*)[66])"ConfigWidgetToyOneoffGatherPointDetector not found for material: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->material_id_);
    common::milog::MiLogStream::~MiLogStream(&v12);
    proto::OneoffGatherPointDetectorData::set_hint_radius(proto, 0x64u);
  }
  std::shared_ptr<data::ConfigWidgetToyOneoffGatherPointDetector>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyOneoffGatherPointDetector> *const)(v2 + 32));
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 124: range 0000000016219522-0000000016219D52
std::pair<bool,bool> __cdecl WidgetOneoffGatherPointDetector::searchNeareastAvailableOneoffGatherPoint(
        WidgetOneoffGatherPointDetector *const this,
        const data::ConfigWidgetToyOneoffGatherPointDetector *detector_config)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rcx
  std::pair<bool,bool> v6; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 Position; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t gather_point_type; // ecx
  unsigned int v13; // eax
  std::pair<bool,bool> v14; // ax
  WidgetOneoffGatherPointDetector::searchNeareastAvailableOneoffGatherPoint::<lambda(uint32_t, uint32_t)> v15; // [rsp-30h] [rbp-190h]
  const SceneScriptConfig *scene_script_config_ptr; // [rsp+10h] [rbp-150h]
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-140h] BYREF
  WidgetOneoffGatherPointDetector::searchNeareastAvailableOneoffGatherPoint::<lambda(uint32_t, uint32_t)> __f; // [rsp+40h] [rbp-120h]
  char v19[240]; // [rsp+70h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 2 10 result:125 48 4 16 min_distance:155 64 12 14 player_pos:133 96 16 14 avatar_ptr:127 12"
                        "8 16 13 scene_ptr:136 160 16 9 timer:151";
  *(_QWORD *)(v2 + 16) = WidgetOneoffGatherPointDetector::searchNeareastAvailableOneoffGatherPoint;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556926;
  v4[536862722] = -219020288;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  *(_WORD *)(v2 + 32) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getAvatarComp(this->player_);
  PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v2 + 96));
  if ( !std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 96)) )
  {
    v7 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    Position = (unsigned __int64)Entity::getPosition((const Entity *const)v7);
    if ( (char)(Position & 7) >= *(_BYTE *)((Position >> 3) + 0x7FFF8000)
      && *(_BYTE *)((Position >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((Position + 11) & 7) >= *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) )
    {
      Position = __asan_report_load_n(Position, 12LL);
    }
    *(_QWORD *)(v2 + 64) = *(_QWORD *)Position;
    *(_DWORD *)(v2 + 72) = *(_DWORD *)(Position + 8);
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/widget/widget_oneoff_gather_point_detector.cpp",
      "searchNeareastAvailableOneoffGatherPoint",
      134);
    v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v17, (const char (*)[13])"player pos: ");
    operator<<(v9, (const Vector3 *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v17);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 128));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/widget_oneoff_gather_point_detector.cpp",
        "searchNeareastAvailableOneoffGatherPoint",
        139);
      v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(&v17, (const char (*)[32])off_25BA12A0);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    else
    {
      v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      scene_script_config_ptr = Scene::getScriptConfig(v11);
      if ( scene_script_config_ptr )
      {
        common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 160));
        common::tools::TimeUtils::Timer::reset((common::tools::TimeUtils::Timer *const)(v2 + 160));
        *(_DWORD *)(v2 + 48) = 2139095039;
        __f.__this = this;
        __f.__result = (std::pair<bool,bool> *)(v2 + 32);
        __f.__detector_config = detector_config;
        __f.__scene_script_config = scene_script_config_ptr;
        __f.__player_pos = (Vector3 *)(v2 + 64);
        __f.__min_distance = (float *)(v2 + 48);
        v15.__min_distance = (float *)(v2 + 48);
        v15.__player_pos = (Vector3 *)(v2 + 64);
        v15.__scene_script_config = scene_script_config_ptr;
        v15.__detector_config = detector_config;
        v15.__result = (std::pair<bool,bool> *)(v2 + 32);
        v15.__this = this;
        std::function<bool ()(unsigned int,unsigned int)>::function<WidgetOneoffGatherPointDetector::searchNeareastAvailableOneoffGatherPoint(data::ConfigWidgetToyOneoffGatherPointDetector const&)::{lambda(unsigned int,unsigned int)#1},void,void>(
          (std::function<bool(unsigned int,unsigned int)> *const)&v17,
          v15);
        if ( *(_BYTE *)(((unsigned __int64)&detector_config->gather_point_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)detector_config + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&detector_config->gather_point_type >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(&detector_config->gather_point_type);
        }
        gather_point_type = detector_config->gather_point_type;
        if ( *(_BYTE *)(((unsigned __int64)&detector_config->grid_search_range >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&detector_config->grid_search_range >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&detector_config->grid_search_range);
        }
        SceneScriptConfig::foreachOneoffGatherPointTypeNearPos(
          scene_script_config_ptr,
          (const Vector3 *)(v2 + 64),
          detector_config->grid_search_range,
          gather_point_type,
          (const std::function<bool(unsigned int,unsigned int)> *)&v17);
        std::function<bool ()(unsigned int,unsigned int)>::~function((std::function<bool(unsigned int,unsigned int)> *const)&v17);
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/widget/widget_oneoff_gather_point_detector.cpp",
          "searchNeareastAvailableOneoffGatherPoint",
          200);
        v13 = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 160));
        common::milog::MiLogStream::operator()(&v17, "[PERF] cost time[%d].", v13);
        common::milog::MiLogStream::~MiLogStream(&v17);
        if ( *(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this - 111) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3)
                                                             + 0x7FFF8000) )
        {
          __asan_report_load1(&this->is_hint_valid_);
        }
        *(_BYTE *)(v2 + 32) = this->is_hint_valid_;
        v6 = *(std::pair<bool,bool> *)(v2 + 32);
        common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 160));
        goto LABEL_29;
      }
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/widget_oneoff_gather_point_detector.cpp",
        "searchNeareastAvailableOneoffGatherPoint",
        145);
      v10 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v17,
              (const char (*)[36])"main scene script config null ptr. ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    operator<<(v10, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v6 = *(std::pair<bool,bool> *)(v2 + 32);
LABEL_29:
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 128));
    goto LABEL_30;
  }
  common::milog::MiLogStream::create(
    &v17,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/widget/widget_oneoff_gather_point_detector.cpp",
    "searchNeareastAvailableOneoffGatherPoint",
    130);
  v5 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v17, (const char (*)[22])off_25BA1220);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  operator<<(v5, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v17);
  v6 = *(std::pair<bool,bool> *)(v2 + 32);
LABEL_30:
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 96));
  v14 = v6;
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v14;
};

// Line 157: range 0000000016218920-0000000016219520
__int64 __fastcall WidgetOneoffGatherPointDetector::searchNeareastAvailableOneoffGatherPoint(data::ConfigWidgetToyOneoffGatherPointDetector const&)::{lambda(unsigned int,unsigned int)#1}::operator()(
        unsigned __int64 __closure,
        uint32_t group_id,
        uint32_t config_id,
        __m128i a4)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdi
  WidgetOneoffGatherPointDetector *v10; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  WidgetOneoffGatherPointDetector *v16; // rax
  PlayerSceneComp *SceneComp; // r8
  uint32_t v18; // edi
  uint32_t v19; // esi
  const data::ConfigWidgetToyOneoffGatherPointDetector *v20; // rdx
  unsigned int v21; // edi
  unsigned int v22; // esi
  const data::ConfigWidgetToyOneoffGatherPointDetector *v23; // rdx
  const Vector3 *p_pos; // rdx
  const Vector3 *v25; // rsi
  const data::ConfigWidgetToyOneoffGatherPointDetector *v26; // rdx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rcx
  uint32_t *v30; // rsi
  std::pair<bool,bool> *v31; // rdx
  char v32; // cl
  float *v33; // rdx
  float *v34; // rdx
  char v35; // cl
  WidgetOneoffGatherPointDetector *n; // rax
  char v37; // cl
  bool v38; // r8
  char v39; // cl
  __int64 v40; // rax
  __int64 v41; // rsi
  char v42; // dl
  bool v43; // dl
  WidgetOneoffGatherPointDetector *v44; // rdx
  __int64 v45; // rsi
  char v46; // cl
  WidgetOneoffGatherPointDetector *v47; // rdx
  char v48; // cl
  common::milog::MiLogStream *v49; // rcx
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  float distance; // [rsp+1Ch] [rbp-B4h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+20h] [rbp-B0h]
  const GadgetScriptConfig *gadget_config_ptr; // [rsp+28h] [rbp-A8h]
  common::milog::MiLogStream v61; // [rsp+30h] [rbp-A0h] BYREF
  char v62[128]; // [rsp+50h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v62;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 12 group_id:157 64 4 13 config_id:157";
  *(_QWORD *)(v4 + 16) = WidgetOneoffGatherPointDetector::searchNeareastAvailableOneoffGatherPoint(data::ConfigWidgetToyOneoffGatherPointDetector const&)::{lambda(unsigned int,unsigned int)#1}::operator();
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 48) = group_id;
  *(_DWORD *)(v4 + 64) = config_id;
  if ( *(_BYTE *)(((__closure + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure + 24);
  group_script_config_ptr = SceneScriptConfig::findGroupScriptConfig(
                              *(const SceneScriptConfig *const *)(__closure + 24),
                              *(_DWORD *)(v4 + 48));
  if ( !group_script_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v61,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_oneoff_gather_point_detector.cpp",
      "operator()",
      162);
    v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v61,
           (const char (*)[43])"findGroupScriptConfig null ptr for group: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v8, (const char (*)[10])" player: ");
    if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
    {
      v9 = (common::milog::MiLogStream *)__closure;
      __asan_report_load8(__closure);
    }
    v10 = *(WidgetOneoffGatherPointDetector **)__closure;
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)__closure + 32LL) >> 3) + 0x7FFF8000) )
    {
      v9 = (common::milog::MiLogStream *)(*(_QWORD *)__closure + 32LL);
      v10 = (WidgetOneoffGatherPointDetector *)__asan_report_load8(v9);
    }
LABEL_11:
    operator<<(v9, v10->player_);
    common::milog::MiLogStream::~MiLogStream(&v61);
    result = 1LL;
    goto LABEL_71;
  }
  gadget_config_ptr = GroupScriptConfig::findGadgetConfig(group_script_config_ptr, *(_DWORD *)(v4 + 64));
  if ( !gadget_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v61,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_oneoff_gather_point_detector.cpp",
      "operator()",
      169);
    v12 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            &v61,
            (const char (*)[38])"findGadgetConfig null ptr for group: ");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
    v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])" config_id: ");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 64));
    v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v15, (const char (*)[10])" player: ");
    if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
    {
      v9 = (common::milog::MiLogStream *)__closure;
      __asan_report_load8(__closure);
    }
    v10 = *(WidgetOneoffGatherPointDetector **)__closure;
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)__closure + 32LL) >> 3) + 0x7FFF8000) )
    {
      v9 = (common::milog::MiLogStream *)(*(_QWORD *)__closure + 32LL);
      v10 = (WidgetOneoffGatherPointDetector *)__asan_report_load8(v9);
    }
    goto LABEL_11;
  }
  if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  v16 = *(WidgetOneoffGatherPointDetector **)__closure;
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)__closure + 32LL) >> 3) + 0x7FFF8000) )
    v16 = (WidgetOneoffGatherPointDetector *)__asan_report_load8(*(_QWORD *)__closure + 32LL);
  SceneComp = Player::getSceneComp(v16->player_);
  v18 = *(_DWORD *)(v4 + 64);
  v19 = *(_DWORD *)(v4 + 48);
  if ( *(_BYTE *)(((__closure + 16) >> 3) + 0x7FFF8000) )
  {
    v18 = __closure + 16;
    __asan_report_load8(__closure + 16);
  }
  v20 = *(const data::ConfigWidgetToyOneoffGatherPointDetector **)(__closure + 16);
  if ( *(_BYTE *)(((unsigned __int64)&v20->gather_point_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->gather_point_type >> 3) + 0x7FFF8000) )
  {
    v18 = (_DWORD)v20 + 92;
    __asan_report_load4(&v20->gather_point_type);
  }
  if ( PlayerSceneComp::isGotOneoffGatherPointByGroupConfigId(SceneComp, v20->gather_point_type, v19, v18) )
  {
    common::milog::MiLogStream::create(
      &v61,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/widget/widget_oneoff_gather_point_detector.cpp",
      "operator()",
      175);
    v21 = *(_DWORD *)(v4 + 64);
    v22 = *(_DWORD *)(v4 + 48);
    if ( *(_BYTE *)(((__closure + 16) >> 3) + 0x7FFF8000) )
    {
      v21 = __closure + 16;
      __asan_report_load8(__closure + 16);
    }
    v23 = *(const data::ConfigWidgetToyOneoffGatherPointDetector **)(__closure + 16);
    if ( *(_BYTE *)(((unsigned __int64)&v23->gather_point_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v23 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->gather_point_type >> 3) + 0x7FFF8000) )
    {
      v21 = (_DWORD)v23 + 92;
      __asan_report_load4(&v23->gather_point_type);
    }
    common::milog::MiLogStream::operator()(
      &v61,
      "already got gather point<%u> @ group_id=%u config_id=%u.",
      v23->gather_point_type,
      v22,
      v21);
    common::milog::MiLogStream::~MiLogStream(&v61);
    result = 1LL;
  }
  else
  {
    p_pos = &gadget_config_ptr->pos;
    if ( *(_BYTE *)(((__closure + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure + 32);
    v25 = p_pos;
    *(float *)a4.m128i_i32 = getPlaneDistance(*(const Vector3 **)(__closure + 32), p_pos);
    distance = COERCE_FLOAT(_mm_cvtsi128_si32(a4));
    if ( *(_BYTE *)(((__closure + 16) >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure + 16);
    v26 = *(const data::ConfigWidgetToyOneoffGatherPointDetector **)(__closure + 16);
    if ( *(_BYTE *)(((unsigned __int64)&v26->nearby_radius >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v26 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v26->nearby_radius >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&v26->nearby_radius);
    }
    if ( (float)(int)v26->nearby_radius <= distance )
    {
      if ( *(_BYTE *)(((__closure + 40) >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure + 40);
      v33 = *(float **)(__closure + 40);
      if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v33 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(*(_QWORD *)(__closure + 40));
      }
      if ( *v33 > distance )
      {
        v34 = *(float **)(__closure + 40);
        v35 = *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000);
        if ( v35 != 0 && (char)(((unsigned __int8)v34 & 7) + 3) >= v35 )
        {
          LOBYTE(v25) = v35 != 0;
          __asan_report_store4(*(_QWORD *)(__closure + 40), v25, (_BYTE)v34);
        }
        *v34 = distance;
        if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
          __asan_report_load8(__closure);
        n = *(WidgetOneoffGatherPointDetector **)__closure;
        v37 = *(_BYTE *)(((unsigned __int64)(*(_QWORD *)__closure + 148LL) >> 3) + 0x7FFF8000);
        v38 = ((*(_BYTE *)__closure - 108) & 7) >= v37 && v37 != 0;
        v39 = *(_BYTE *)(((unsigned __int64)(*(_QWORD *)__closure + 159LL) >> 3) + 0x7FFF8000);
        if ( v38 || v39 != 0 && ((*(_BYTE *)__closure - 97) & 7) >= v39 )
          n = (WidgetOneoffGatherPointDetector *)__asan_report_store_n(*(_QWORD *)__closure + 148LL, 12LL);
        if ( (((unsigned __int8)gadget_config_ptr + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->pos >> 3)
                                                                         + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->pos >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&gadget_config_ptr->pos.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)gadget_config_ptr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&gadget_config_ptr->pos.z
                                                                           + 3) >> 3)
                                                                         + 0x7FFF8000) )
        {
          n = (WidgetOneoffGatherPointDetector *)__asan_report_load_n(&gadget_config_ptr->pos, 12LL);
        }
        *(_QWORD *)&n->hint_center_pos_.x = *(_QWORD *)&gadget_config_ptr->pos.x;
        n->hint_center_pos_.z = gadget_config_ptr->pos.z;
        v40 = *(_QWORD *)__closure;
        v41 = *(unsigned int *)(v4 + 48);
        v42 = *(_BYTE *)(((unsigned __int64)(*(_QWORD *)__closure + 160LL) >> 3) + 0x7FFF8000);
        v43 = v42 != 0 && v42 <= 3;
        if ( v43 )
          v40 = __asan_report_store4(*(_QWORD *)__closure + 160LL, v41, v43);
        *(_DWORD *)(v40 + 160) = v41;
        v44 = *(WidgetOneoffGatherPointDetector **)__closure;
        v45 = *(unsigned int *)(v4 + 64);
        v46 = *(_BYTE *)(((unsigned __int64)(*(_QWORD *)__closure + 164LL) >> 3) + 0x7FFF8000);
        if ( v46 != 0 && (char)(((*(_BYTE *)__closure - 92) & 7) + 3) >= v46 )
          __asan_report_store4(*(_QWORD *)__closure + 164LL, v45, (_BYTE)v44);
        v44->config_id_ = v45;
        v47 = *(WidgetOneoffGatherPointDetector **)__closure;
        v48 = *(_BYTE *)(((unsigned __int64)(*(_QWORD *)__closure + 145LL) >> 3) + 0x7FFF8000);
        if ( v48 != 0 && ((*(_BYTE *)__closure - 111) & 7) >= v48 )
        {
          LOBYTE(v45) = v48 != 0;
          __asan_report_store1(*(_QWORD *)__closure + 145LL, v45, v47);
        }
        v47->is_hint_valid_ = 1;
        common::milog::MiLogStream::create(
          &v61,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/widget/widget_oneoff_gather_point_detector.cpp",
          "operator()",
          194);
        v49 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                &v61,
                (const char (*)[15])"nearest dist: ");
        if ( *(_BYTE *)(((__closure + 40) >> 3) + 0x7FFF8000) )
          __asan_report_load8(__closure + 40);
        v50 = common::milog::MiLogStream::operator<<<float,(float *)0>(v49, *(const float **)(__closure + 40));
        v51 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v50, (const char (*)[7])" pos: ");
        v52 = operator<<(v51, &gadget_config_ptr->pos);
        v53 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v52, (const char (*)[12])" group_id: ");
        v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v53,
                (const unsigned int *)(v4 + 48));
        v55 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v54, (const char (*)[13])" config_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, (const unsigned int *)(v4 + 64));
        common::milog::MiLogStream::~MiLogStream(&v61);
      }
      result = 1LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v61,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/widget/widget_oneoff_gather_point_detector.cpp",
        "operator()",
        182);
      v27 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v61, (const char (*)[15])"neareast pos: ");
      v28 = operator<<(v27, &gadget_config_ptr->pos);
      v29 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v28, (const char (*)[27])off_25BA1060);
      if ( *(_BYTE *)(((__closure + 16) >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure + 16);
      v30 = (uint32_t *)(*(_QWORD *)(__closure + 16) + 76LL);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, v30);
      common::milog::MiLogStream::~MiLogStream(&v61);
      if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      WidgetOneoffGatherPointDetector::reset(*(WidgetOneoffGatherPointDetector *const *)__closure);
      if ( *(_BYTE *)(((__closure + 8) >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure + 8);
      v31 = *(std::pair<bool,bool> **)(__closure + 8);
      v32 = *(_BYTE *)(((unsigned __int64)&v31->second >> 3) + 0x7FFF8000);
      if ( v32 != 0 && (((unsigned __int8)v31 + 1) & 7) >= v32 )
      {
        LOBYTE(v30) = v32 != 0;
        __asan_report_store1(&v31->second, v30, v31);
      }
      v31->second = 1;
      result = 0LL;
    }
  }
LABEL_71:
  if ( v62 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 208: range 0000000016219D54-000000001621A3FA
void __cdecl WidgetOneoffGatherPointDetector::procHintGroup(
        WidgetOneoffGatherPointDetector *const this,
        const data::ConfigWidgetToyOneoffGatherPointDetector *detector_config)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  const WidgetJsonNewConfig *WidgetNewConfig; // rcx
  unsigned int *v7; // rax
  unsigned int *v8; // rdx
  char *v9; // rsi
  std::__shared_ptr_access<WidgetOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  std::__shared_ptr_access<WidgetOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rdx
  char v12; // cl
  uint32_t v13; // esi
  bool is_notify; // [rsp+13h] [rbp-10Dh]
  unsigned int material_id; // [rsp+14h] [rbp-10Ch]
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-108h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-100h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-F8h]
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-F0h] BYREF
  char v21[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 widget_ptr:228 64 56 23 detector_id_set_opt:214";
  *(_QWORD *)(v2 + 16) = WidgetOneoffGatherPointDetector::procHintGroup;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 111) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_hint_valid_);
  }
  if ( this->is_hint_valid_ )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 32));
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    WidgetNewConfig = JsonConfigMgr::getWidgetNewConfig(&v5->design_config.json_config_mgr);
    if ( *(_BYTE *)(((unsigned __int64)&detector_config->hint_group >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&detector_config->hint_group >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&detector_config->hint_group);
    }
    WidgetJsonNewConfig::queryDetectorIdSetByHintGroup(
      (std::optional<std::set<unsigned int> > *)(v2 + 64),
      WidgetNewConfig,
      detector_config->hint_group);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 32));
    if ( !std::optional<std::set<unsigned int>>::has_value((const std::optional<std::set<unsigned int> > *const)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/widget_oneoff_gather_point_detector.cpp",
        "procHintGroup",
        217);
      if ( *(_BYTE *)(((unsigned __int64)&detector_config->hint_group >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&detector_config->hint_group >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&detector_config->hint_group);
      }
      common::milog::MiLogStream::operator()(&v20, "id set nullopt for hint group %u", detector_config->hint_group);
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
    else
    {
      is_notify = 0;
      __for_range = std::optional<std::set<unsigned int>>::value((std::optional<std::set<unsigned int> > *const)(v2 + 64));
      __for_begin._M_node = std::set<unsigned int>::begin(__for_range)._M_node;
      __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v7 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
        v8 = v7;
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v7);
        }
        material_id = *v8;
        if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->material_id_);
        }
        if ( material_id != this->material_id_ )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->widget_comp_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->widget_comp_);
          PlayerWidgetComp::findWidget<WidgetOneoffGatherPointDetector>(
            (PlayerWidgetComp *const)(v2 + 32),
            (uint32_t)this->widget_comp_);
          v9 = (char *)(v2 + 32);
          if ( !std::operator==<WidgetOneoffGatherPointDetector>(
                  0LL,
                  (const std::shared_ptr<WidgetOneoffGatherPointDetector> *)(v2 + 32)) )
          {
            v10 = std::__shared_ptr_access<WidgetOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
            if ( *(_BYTE *)(((unsigned __int64)&v10->is_hint_valid_ >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)v10 - 111) & 7) >= *(_BYTE *)(((unsigned __int64)&v10->is_hint_valid_ >> 3)
                                                                + 0x7FFF8000) )
            {
              __asan_report_load1(&v10->is_hint_valid_);
            }
            if ( v10->is_hint_valid_ )
            {
              is_notify = 1;
              v11 = std::__shared_ptr_access<WidgetOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
              v12 = *(_BYTE *)(((unsigned __int64)&v11->is_hint_valid_ >> 3) + 0x7FFF8000);
              if ( v12 != 0 && (((unsigned __int8)v11 - 111) & 7) >= v12 )
              {
                LOBYTE(v9) = v12 != 0;
                __asan_report_store1(&v11->is_hint_valid_, v9, v11);
              }
              v11->is_hint_valid_ = 0;
              common::milog::MiLogStream::create(
                &v20,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/widget/widget_oneoff_gather_point_detector.cpp",
                "procHintGroup",
                237);
              if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->material_id_);
              }
              v13 = this->material_id_;
              if ( *(_BYTE *)(((unsigned __int64)&detector_config->hint_group >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&detector_config->hint_group >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&detector_config->hint_group);
              }
              common::milog::MiLogStream::operator()(
                &v20,
                "detector=%u of hint group=%u cleared hint by detector=%u",
                material_id,
                detector_config->hint_group,
                v13);
              common::milog::MiLogStream::~MiLogStream(&v20);
            }
          }
          std::shared_ptr<WidgetOneoffGatherPointDetector>::~shared_ptr((std::shared_ptr<WidgetOneoffGatherPointDetector> *const)(v2 + 32));
        }
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
      }
      if ( is_notify )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->widget_comp_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->widget_comp_);
        PlayerWidgetComp::notifyAllOneoffGatherPointDetectorData(this->widget_comp_);
      }
    }
    std::optional<std::set<unsigned int>>::~optional((std::optional<std::set<unsigned int> > *const)(v2 + 64));
  }
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 248: range 000000001621A3FC-000000001621B890
int32_t __cdecl WidgetOneoffGatherPointDetector::onQuickUse(
        WidgetOneoffGatherPointDetector *const this,
        const proto::QuickUseWidgetReq *req,
        proto::QuickUseWidgetRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t WidgetNewConfig; // ecx
  int32_t v8; // r14d
  std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  bool *p_is_consume_material; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rcx
  PlayerWidgetComp *widget_comp; // r14
  std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v20; // rcx
  common::milog::MiLogStream *v21; // rax
  proto::OneoffGatherPointDetectorData *v22; // rdx
  common::milog::MiLogStream *v23; // rcx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  common::milog::MiLogStream *v25; // rax
  PlayerSceneComp *v26; // r14
  std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rdx
  uint32_t *p_gather_point_type; // rax
  common::milog::MiLogStream *v29; // r14
  std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rcx
  proto::OneoffGatherPointDetectorData *v33; // rax
  std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rdx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rcx
  __m128i v38; // xmm0
  std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  float v40; // xmm0_4
  float v41; // xmm1_4
  float v42; // xmm1_4
  __m128i v43; // xmm0
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // r14
  std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rdx
  common::milog::MiLogStream *v50; // rcx
  proto::OneoffGatherPointDetectorData *v51; // rdx
  std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rdx
  bool *v53; // rax
  char v54; // al
  PlayerItemComp *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rcx
  PlayerWidgetComp *v61; // r14
  char v62; // r15
  std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v63; // rax
  int32_t result; // eax
  float v65; // [rsp+14h] [rbp-1ACh]
  bool is_consume; // [rsp+35h] [rbp-18Bh]
  std::pair<bool,bool> __in; // [rsp+36h] [rbp-18Ah] BYREF
  int32_t ret_code; // [rsp+38h] [rbp-188h]
  int32_t ret; // [rsp+3Ch] [rbp-184h]
  float rand_angle; // [rsp+40h] [rbp-180h]
  float r; // [rsp+44h] [rbp-17Ch]
  float x; // [rsp+48h] [rbp-178h]
  float z; // [rsp+4Ch] [rbp-174h]
  const Vector3 *player_pos; // [rsp+50h] [rbp-170h]
  proto::OneoffGatherPointDetectorData *rsp_data; // [rsp+58h] [rbp-168h]
  std::shared_ptr<data::ConfigBaseWidgetToy> v77; // [rsp+60h] [rbp-160h] BYREF
  common::milog::MiLogStream v78; // [rsp+70h] [rbp-150h] BYREF
  char v79[304]; // [rsp+90h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v79;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 1 21 is_detect_success:278 64 1 13 is_nearby:315 80 4 7 ret:361 96 8 10 reason:360 128 12 1"
                        "1 new_pos:343 160 16 23 detector_config_ptr:250 192 16 14 item_param:257 224 16 14 avatar_ptr:304";
  *(_QWORD *)(v3 + 16) = WidgetOneoffGatherPointDetector::onQuickUse;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556927;
  v5[536862723] = -218959360;
  v5[536862724] = -219020288;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 224));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
  WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v6->design_config.json_config_mgr);
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->material_id_);
  }
  WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)&v77, WidgetNewConfig);
  std::dynamic_pointer_cast<data::ConfigWidgetToyOneoffGatherPointDetector,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v3 + 160));
  std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr(&v77);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 224));
  if ( std::operator==<data::ConfigWidgetToyOneoffGatherPointDetector>(
         0LL,
         (const std::shared_ptr<data::ConfigWidgetToyOneoffGatherPointDetector> *)(v3 + 160)) )
  {
    common::milog::MiLogStream::create(
      &v78,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_oneoff_gather_point_detector.cpp",
      "onQuickUse",
      253);
    if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->material_id_);
    }
    common::milog::MiLogStream::operator()(
      &v78,
      "ConfigWidgetToyOneoffGatherPointDetector config %u was deleted !",
      this->material_id_);
    common::milog::MiLogStream::~MiLogStream(&v78);
    v8 = 5;
  }
  else
  {
    *(_DWORD *)(v3 + 192) = 0;
    *(_DWORD *)(v3 + 196) = 0;
    *(_DWORD *)(v3 + 200) = 0;
    *(_DWORD *)(v3 + 204) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->material_id_);
    }
    *(_DWORD *)(v3 + 192) = this->material_id_;
    *(_DWORD *)(v3 + 196) = 1;
    v9 = std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    p_is_consume_material = &v9->is_consume_material;
    if ( *(_BYTE *)(((unsigned __int64)p_is_consume_material >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_consume_material & 7) >= *(_BYTE *)(((unsigned __int64)p_is_consume_material >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_consume_material);
    }
    if ( !v9->is_consume_material )
      goto LABEL_98;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    ItemComp = Player::getItemComp(this->player_);
    *(_DWORD *)(v3 + 80) = PlayerItemComp::checkSubItem(ItemComp, (const ItemParam *)(v3 + 192));
    if ( *(_DWORD *)(v3 + 80) )
    {
      common::milog::MiLogStream::create(
        &v78,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/widget/widget_oneoff_gather_point_detector.cpp",
        "onQuickUse",
        267);
      v12 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v78,
              (const char (*)[31])"checkSubItem fail, item_param:");
      v13 = operator<<(v12, (const ItemParam *)(v3 + 192));
      v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" ret:");
      v15 = common::milog::MiLogStream::operator<<<int,(int *)0>(v14, (const int *)(v3 + 80));
      v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v16, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v78);
      v8 = *(_DWORD *)(v3 + 80);
    }
    else
    {
LABEL_98:
      if ( *(_BYTE *)(((unsigned __int64)&this->widget_comp_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->widget_comp_);
      widget_comp = this->widget_comp_;
      v18 = std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      if ( *(_BYTE *)(((unsigned __int64)&v18->cd_group >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v18->cd_group >> 3) + 0x7FFF8000) <= 3 )
      {
        v18 = (std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v18->cd_group);
      }
      ret = PlayerWidgetComp::checkWidgetGroupCoolDown(widget_comp, v18->cd_group);
      if ( ret )
      {
        v8 = ret;
      }
      else
      {
        *(_BYTE *)(v3 + 48) = 0;
        is_consume = 1;
        ret_code = 0;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        SceneComp = Player::getSceneComp(this->player_);
        if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
        {
          common::milog::MiLogStream::create(
            &v78,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/widget/widget_oneoff_gather_point_detector.cpp",
            "onQuickUse",
            286);
          v20 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(&v78, (const char (*)[26])off_25BA15A0);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          operator<<(v20, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v78);
          rsp_data = proto::QuickUseWidgetRsp::mutable_detector_data(rsp_0);
          if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->material_id_);
          }
          proto::OneoffGatherPointDetectorData::set_material_id(rsp_data, this->material_id_);
          proto::OneoffGatherPointDetectorData::set_is_hint_valid(rsp_data, 0);
          is_consume = 0;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)this - 111) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3)
                                                               + 0x7FFF8000) )
          {
            __asan_report_load1(&this->is_hint_valid_);
          }
          if ( this->is_hint_valid_ )
          {
            common::milog::MiLogStream::create(
              &v78,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/widget/widget_oneoff_gather_point_detector.cpp",
              "onQuickUse",
              296);
            v21 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                    &v78,
                    (const char (*)[40])" already detected but NOT reached @pos ");
            operator<<(v21, &this->hint_center_pos_);
            common::milog::MiLogStream::~MiLogStream(&v78);
            v22 = proto::QuickUseWidgetRsp::mutable_detector_data(rsp_0);
            WidgetOneoffGatherPointDetector::fillClientData(this, v22);
            ret_code = 682;
            is_consume = 0;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            Player::getAvatarComp(this->player_);
            PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v3 + 224));
            if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 224)) )
            {
              common::milog::MiLogStream::create(
                &v78,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/widget/widget_oneoff_gather_point_detector.cpp",
                "onQuickUse",
                307);
              v23 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      &v78,
                      (const char (*)[22])off_25BA1220);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              operator<<(v23, this->player_);
              common::milog::MiLogStream::~MiLogStream(&v78);
              ret_code = 103;
              is_consume = 0;
            }
            else
            {
              v24 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
              player_pos = Entity::getPosition((const Entity *const)v24);
              common::milog::MiLogStream::create(
                &v78,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/widget/widget_oneoff_gather_point_detector.cpp",
                "onQuickUse",
                313);
              v25 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      &v78,
                      (const char (*)[13])"player pos: ");
              operator<<(v25, player_pos);
              common::milog::MiLogStream::~MiLogStream(&v78);
              *(_BYTE *)(v3 + 64) = 0;
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              v26 = Player::getSceneComp(this->player_);
              v27 = std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              p_gather_point_type = &v27->gather_point_type;
              if ( *(_BYTE *)(((unsigned __int64)p_gather_point_type >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p_gather_point_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gather_point_type >> 3)
                                                                                      + 0x7FFF8000) )
              {
                __asan_report_load4(p_gather_point_type);
              }
              if ( PlayerSceneComp::isGotAllOneoffGatherByPointType(v26, v27->gather_point_type, 0) )
              {
                common::milog::MiLogStream::create(
                  &v78,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/widget/widget_oneoff_gather_point_detector.cpp",
                  "onQuickUse",
                  318);
                v29 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                        &v78,
                        (const char (*)[33])off_25BA1640);
                v30 = std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v29,
                        &v30->gather_point_type);
                v32 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                        v31,
                        (const char (*)[10])" player: ");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                operator<<(v32, this->player_);
                common::milog::MiLogStream::~MiLogStream(&v78);
                v33 = proto::QuickUseWidgetRsp::mutable_detector_data(rsp_0);
                proto::OneoffGatherPointDetectorData::set_is_all_collected(v33, 1);
                is_consume = 0;
              }
              else
              {
                v34 = std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                __in = WidgetOneoffGatherPointDetector::searchNeareastAvailableOneoffGatherPoint(this, v34);
                std::tie<bool,bool>((bool *)&v77, (bool *)(v3 + 48), (bool *)(v3 + 64), (bool *)(v3 + 48));
                std::tuple<bool &,bool &>::operator=<bool,bool>((std::tuple<bool&,bool&> *const)&v77, &__in);
              }
              if ( *(_BYTE *)(v3 + 64) )
              {
                ret_code = 686;
                is_consume = 0;
              }
              else
              {
                if ( *(_BYTE *)(v3 + 48) )
                {
                  common::milog::MiLogStream::create(
                    &v78,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/widget/widget_oneoff_gather_point_detector.cpp",
                    "onQuickUse",
                    337);
                  v35 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                          &v78,
                          (const char (*)[27])"search success. find pos: ");
                  v36 = operator<<(v35, &this->hint_center_pos_);
                  v37 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                          v36,
                          (const char (*)[10])" player: ");
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->player_);
                  operator<<(v37, this->player_);
                  common::milog::MiLogStream::~MiLogStream(&v78);
                  v38 = 0LL;
                  *(float *)v38.m128i_i32 = common::tools::RandomUtils::rand<float>(0.0, 6.2831855);
                  LODWORD(rand_angle) = _mm_cvtsi128_si32(v38);
                  v39 = std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                  if ( *(_BYTE *)(((unsigned __int64)&v39->hint_radius >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&v39->hint_radius >> 3) + 0x7FFF8000) <= 3 )
                  {
                    v39 = (std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v39->hint_radius);
                  }
                  v65 = (float)(int)v39->hint_radius * 0.5;
                  v40 = common::tools::RandomUtils::rand<float>(0.0, 1.0);
                  r = std::sqrt(v40) * v65;
                  v41 = std::cos(rand_angle) * r;
                  if ( *(_BYTE *)(((unsigned __int64)&this->hint_center_pos_ >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hint_center_pos_ >> 3)
                                                                         + 0x7FFF8000) )
                  {
                    __asan_report_load4(&this->hint_center_pos_);
                  }
                  x = this->hint_center_pos_.x + v41;
                  v42 = std::sin(rand_angle) * r;
                  if ( *(_BYTE *)(((unsigned __int64)&this->hint_center_pos_.z >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hint_center_pos_.z >> 3)
                                                                         + 0x7FFF8000) )
                  {
                    __asan_report_load4(&this->hint_center_pos_.z);
                  }
                  z = this->hint_center_pos_.z + v42;
                  if ( *(_BYTE *)(((unsigned __int64)&this->hint_center_pos_.y >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&this->hint_center_pos_.y >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&this->hint_center_pos_.y);
                  }
                  v43 = _mm_cvtsi32_si128(LODWORD(x));
                  Vector3::Vector3((Vector3 *const)(v3 + 128), *(float *)v43.m128i_i32, this->hint_center_pos_.y, z);
                  common::milog::MiLogStream::create(
                    &v78,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/widget/widget_oneoff_gather_point_detector.cpp",
                    "onQuickUse",
                    344);
                  v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          &v78,
                          (const char (*)[16])"random center: ");
                  v45 = operator<<(v44, (const Vector3 *)(v3 + 128));
                  v46 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                          v45,
                          (const char (*)[19])" from origin pos: ");
                  v47 = operator<<(v46, &this->hint_center_pos_);
                  v48 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                          v47,
                          (const char (*)[14])" with delta: ");
                  *(float *)v43.m128i_i32 = getPlaneDistance((const Vector3 *)(v3 + 128), &this->hint_center_pos_);
                  *(_DWORD *)(v3 + 80) = _mm_cvtsi128_si32(v43);
                  common::milog::MiLogStream::operator<<<float,(float *)0>(v48, (const float *)(v3 + 80));
                  common::milog::MiLogStream::~MiLogStream(&v78);
                  if ( (((unsigned __int8)this - 108) & 7) >= *(_BYTE *)(((unsigned __int64)&this->hint_center_pos_ >> 3)
                                                                       + 0x7FFF8000)
                    && *(_BYTE *)(((unsigned __int64)&this->hint_center_pos_ >> 3) + 0x7FFF8000) != 0
                    || *(_BYTE *)((((unsigned __int64)&this->hint_center_pos_.z + 3) >> 3) + 0x7FFF8000) != 0
                    && (((unsigned __int8)this - 97) & 7) >= *(_BYTE *)((((unsigned __int64)&this->hint_center_pos_.z + 3) >> 3)
                                                                      + 0x7FFF8000) )
                  {
                    __asan_report_store_n(&this->hint_center_pos_, 12LL);
                  }
                  this->hint_center_pos_ = *(Vector3 *)(v3 + 128);
                  v49 = std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                  WidgetOneoffGatherPointDetector::procHintGroup(this, v49);
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v78,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/widget/widget_oneoff_gather_point_detector.cpp",
                    "onQuickUse",
                    350);
                  v50 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                          &v78,
                          (const char (*)[24])"search failed. player: ");
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->player_);
                  operator<<(v50, this->player_);
                  common::milog::MiLogStream::~MiLogStream(&v78);
                  is_consume = 0;
                }
                v51 = proto::QuickUseWidgetRsp::mutable_detector_data(rsp_0);
                WidgetOneoffGatherPointDetector::fillClientData(this, v51);
              }
            }
            std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 224));
          }
        }
        if ( !is_consume )
          goto LABEL_80;
        v52 = std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        v53 = &v52->is_consume_material;
        if ( *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)v53 & 7) >= *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(v53);
        }
        if ( v52->is_consume_material )
          v54 = 1;
        else
LABEL_80:
          v54 = 0;
        if ( !v54 )
          goto LABEL_99;
        SubItemReason::SubItemReason(
          (SubItemReason *const)(v3 + 96),
          ACTION_REASON_USE_WIDGET_ONEOFF_GATHER_POINT_DETECTOR);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v55 = Player::getItemComp(this->player_);
        *(_DWORD *)(v3 + 80) = PlayerItemComp::subItem(
                                 v55,
                                 (const ItemParam *)(v3 + 192),
                                 (const SubItemReason *)(v3 + 96));
        if ( *(_DWORD *)(v3 + 80) )
        {
          common::milog::MiLogStream::create(
            &v78,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/widget/widget_oneoff_gather_point_detector.cpp",
            "onQuickUse",
            364);
          v56 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  &v78,
                  (const char (*)[26])"subItem fail, item_param:");
          v57 = operator<<(v56, (const ItemParam *)(v3 + 192));
          v58 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v57, (const char (*)[6])" ret:");
          v59 = common::milog::MiLogStream::operator<<<int,(int *)0>(v58, (const int *)(v3 + 80));
          v60 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v59, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          operator<<(v60, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v78);
          v8 = *(_DWORD *)(v3 + 80);
        }
        else
        {
LABEL_99:
          if ( *(_BYTE *)(((unsigned __int64)&this->widget_comp_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->widget_comp_);
          v61 = this->widget_comp_;
          v62 = *(_BYTE *)(v3 + 48);
          v63 = std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          if ( *(_BYTE *)(((unsigned __int64)&v63->cd_group >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v63->cd_group >> 3) + 0x7FFF8000) <= 3 )
          {
            v63 = (std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v63->cd_group);
          }
          PlayerWidgetComp::updateWidgetGroupCoolDown(v61, v63->cd_group, v62);
          v8 = ret_code;
        }
      }
    }
  }
  std::shared_ptr<data::ConfigWidgetToyOneoffGatherPointDetector>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyOneoffGatherPointDetector> *const)(v3 + 160));
  result = v8;
  if ( v79 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 374: range 000000001621B892-000000001621BDD9
void __cdecl WidgetOneoffGatherPointDetector::onOneoffGatherCollected(
        WidgetOneoffGatherPointDetector *const this,
        uint32_t group_id,
        uint32_t config_id,
        uint32_t point_type,
        bool *is_notify)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t WidgetNewConfig; // ecx
  std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  uint32_t *p_gather_point_type; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  std::shared_ptr<Config> v19; // [rsp+20h] [rbp-B0h] BYREF
  std::shared_ptr<data::ConfigBaseWidgetToy> v20; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-90h] BYREF
  char v22[112]; // [rsp+60h] [rbp-70h] BYREF

  v5 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 16 14 config_ptr:376";
  *(_QWORD *)(v5 + 16) = WidgetOneoffGatherPointDetector::onOneoffGatherCollected;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
  WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v8->design_config.json_config_mgr);
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->material_id_);
  }
  WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)&v20, WidgetNewConfig);
  std::dynamic_pointer_cast<data::ConfigWidgetToyOneoffGatherPointDetector,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v5 + 32));
  std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr(&v20);
  std::shared_ptr<Config>::~shared_ptr(&v19);
  if ( std::operator==<data::ConfigWidgetToyOneoffGatherPointDetector>(
         0LL,
         (const std::shared_ptr<data::ConfigWidgetToyOneoffGatherPointDetector> *)(v5 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_oneoff_gather_point_detector.cpp",
      "onOneoffGatherCollected",
      379);
    if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->material_id_);
    }
    common::milog::MiLogStream::operator()(
      &v21,
      "ConfigWidgetToyOneoffGatherPointDetector config %u was deleted !",
      this->material_id_);
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 111) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_hint_valid_);
    }
    if ( this->is_hint_valid_ )
    {
      v10 = std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyOneoffGatherPointDetector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
      p_gather_point_type = &v10->gather_point_type;
      if ( *(_BYTE *)(((unsigned __int64)p_gather_point_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_gather_point_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gather_point_type >> 3)
                                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(p_gather_point_type);
      }
      if ( point_type == v10->gather_point_type )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->group_id_);
        }
        if ( group_id == this->group_id_ )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&this->config_id_);
          }
          if ( config_id == this->config_id_ )
          {
            common::milog::MiLogStream::create(
              &v21,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/widget/widget_oneoff_gather_point_detector.cpp",
              "onOneoffGatherCollected",
              403);
            common::milog::MiLogStream::operator()(
              &v21,
              "point<%u> @ group_id=%u config_id=%u. auto clear hint",
              point_type,
              group_id,
              config_id);
            common::milog::MiLogStream::~MiLogStream(&v21);
            v12 = ((_BYTE)this - 111) & 7;
            v13 = (*(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000));
            if ( (_BYTE)v13 )
              __asan_report_store1(&this->is_hint_valid_, v12, v13);
            this->is_hint_valid_ = 0;
            v14 = (unsigned __int8)is_notify & 7;
            v15 = (*(_BYTE *)(((unsigned __int64)is_notify >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)is_notify >> 3) + 0x7FFF8000));
            if ( (_BYTE)v15 )
              __asan_report_store1(is_notify, v14, v15);
            *is_notify = 1;
          }
        }
      }
    }
  }
  std::shared_ptr<data::ConfigWidgetToyOneoffGatherPointDetector>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyOneoffGatherPointDetector> *const)(v5 + 32));
  if ( v22 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
