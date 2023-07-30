// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/widget/widget_client_collector.cpp

// Line 24: range 000000001620519C-000000001620521C
int32_t __cdecl WidgetClientCollector::fromDetailBin(
        WidgetClientCollector *const this,
        const proto::WidgetDetailBin *detail_bin,
        const proto::WidgetBin *widget_bin)
{
  uint32_t v3; // ecx
  char v4; // dl
  bool v5; // dl
  const proto::WidgetClientCollectorBin *bin; // [rsp+28h] [rbp-8h]

  bin = proto::WidgetDetailBin::client_collector(detail_bin);
  v3 = proto::WidgetClientCollectorBin::curr_points(bin);
  v4 = *(_BYTE *)(((unsigned __int64)&this->curr_points_ >> 3) + 0x7FFF8000);
  LOBYTE(detail_bin) = v4 != 0;
  v5 = v4 != 0 && (char)((((_BYTE)this - 108) & 7) + 3) >= v4;
  if ( v5 )
    __asan_report_store4(&this->curr_points_, detail_bin, v5);
  this->curr_points_ = v3;
  return 0;
};

// Line 31: range 000000001620521E-000000001620529D
int32_t __cdecl WidgetClientCollector::toDetailBin(
        const WidgetClientCollector *const this,
        proto::WidgetDetailBin *detail_bin,
        proto::WidgetBin *widget_bin)
{
  proto::WidgetClientCollectorBin *bin; // [rsp+28h] [rbp-8h]

  bin = proto::WidgetDetailBin::mutable_client_collector(detail_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->curr_points_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->curr_points_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->curr_points_);
  }
  proto::WidgetClientCollectorBin::set_curr_points(bin, this->curr_points_);
  return 0;
};

// Line 38: range 000000001620529E-000000001620542D
int32_t __cdecl WidgetClientCollector::init(
        WidgetClientCollector *const this,
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
  *(_QWORD *)(v2 + 8) = "1 32 16 22 detector_config_ptr:39";
  *(_QWORD *)(v2 + 16) = WidgetClientCollector::init;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<data::ConfigWidgetToyClintCollector,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v2 + 32));
  if ( std::operator!=<data::ConfigWidgetToyClintCollector>(
         0LL,
         (const std::shared_ptr<data::ConfigWidgetToyClintCollector> *)(v2 + 32)) )
  {
    v5 = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_client_collector.cpp",
      "init",
      44);
    common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
      &v7,
      (const char (*)[50])"convert ConfigWidgetToyClintCollector ptr failed.");
    common::milog::MiLogStream::~MiLogStream(&v7);
    v5 = 5;
  }
  std::shared_ptr<data::ConfigWidgetToyClintCollector>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyClintCollector> *const)(v2 + 32));
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

// Line 49: range 000000001620542E-00000000162057BC
void __cdecl WidgetClientCollector::fillAllWidgetNotifyData(
        const WidgetClientCollector *const this,
        proto::AllWidgetDataNotify *notify)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t WidgetNewConfig; // ecx
  std::__shared_ptr_access<data::ConfigWidgetToyClintCollector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  uint32_t *p_max_points; // rax
  common::milog::MiLogStream *v9; // rax
  proto::ClientCollectorData *proto; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Config> v11; // [rsp+20h] [rbp-A0h] BYREF
  std::shared_ptr<data::ConfigBaseWidgetToy> v12; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-80h] BYREF
  char v14[96]; // [rsp+60h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 20 widget_config_ptr:53";
  *(_QWORD *)(v2 + 16) = WidgetClientCollector::fillAllWidgetNotifyData;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  proto = proto::AllWidgetDataNotify::add_client_collector_data_list(notify);
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->material_id_);
  }
  proto::ClientCollectorData::set_material_id(proto, this->material_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->curr_points_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->curr_points_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->curr_points_);
  }
  proto::ClientCollectorData::set_curr_points(proto, this->curr_points_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
  WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v5->design_config.json_config_mgr);
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->material_id_);
  }
  WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)&v12, WidgetNewConfig);
  std::dynamic_pointer_cast<data::ConfigWidgetToyClintCollector,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v2 + 32));
  std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr(&v12);
  std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( std::operator!=<data::ConfigWidgetToyClintCollector>(
         0LL,
         (const std::shared_ptr<data::ConfigWidgetToyClintCollector> *)(v2 + 32)) )
  {
    v7 = std::__shared_ptr_access<data::ConfigWidgetToyClintCollector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyClintCollector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    p_max_points = &v7->max_points;
    if ( *(_BYTE *)(((unsigned __int64)p_max_points >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_max_points & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_max_points >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_max_points);
    }
    proto::ClientCollectorData::set_max_points(proto, v7->max_points);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_client_collector.cpp",
      "fillAllWidgetNotifyData",
      60);
    v9 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v13,
           (const char (*)[55])"ConfigWidgetToyClintCollector not found for material: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->material_id_);
    common::milog::MiLogStream::~MiLogStream(&v13);
    proto::ClientCollectorData::set_max_points(proto, 5u);
  }
  std::shared_ptr<data::ConfigWidgetToyClintCollector>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyClintCollector> *const)(v2 + 32));
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 66: range 00000000162057BE-0000000016205C04
void __cdecl WidgetClientCollector::notifyData(const WidgetClientCollector *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // rbx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t WidgetNewConfig; // ecx
  std::__shared_ptr_access<data::ConfigWidgetToyClintCollector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  uint32_t *p_max_points; // rax
  common::milog::MiLogStream *v8; // rax
  proto::ClientCollectorData *data; // [rsp+18h] [rbp-108h]
  std::shared_ptr<Config> v10; // [rsp+20h] [rbp-100h] BYREF
  std::shared_ptr<data::ConfigBaseWidgetToy> v11; // [rsp+30h] [rbp-F0h] BYREF
  common::milog::MiLogStream v12; // [rsp+40h] [rbp-E0h] BYREF
  char v13[192]; // [rsp+60h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 16 20 widget_config_ptr:72 80 48 9 notify:67";
  *(_QWORD *)(v1 + 16) = WidgetClientCollector::notifyData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862724] = -202116109;
  proto::ClientCollectorDataNotify::ClientCollectorDataNotify((proto::ClientCollectorDataNotify *const)(v1 + 80));
  data = proto::ClientCollectorDataNotify::add_client_collector_data_list((proto::ClientCollectorDataNotify *const)(v1 + 80));
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->material_id_);
  }
  proto::ClientCollectorData::set_material_id(data, this->material_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->curr_points_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->curr_points_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->curr_points_);
  }
  proto::ClientCollectorData::set_curr_points(data, this->curr_points_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10);
  WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v4->design_config.json_config_mgr);
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->material_id_);
  }
  WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)&v11, WidgetNewConfig);
  std::dynamic_pointer_cast<data::ConfigWidgetToyClintCollector,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v1 + 48));
  std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr(&v11);
  std::shared_ptr<Config>::~shared_ptr(&v10);
  if ( std::operator!=<data::ConfigWidgetToyClintCollector>(
         0LL,
         (const std::shared_ptr<data::ConfigWidgetToyClintCollector> *)(v1 + 48)) )
  {
    v6 = std::__shared_ptr_access<data::ConfigWidgetToyClintCollector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyClintCollector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
    p_max_points = &v6->max_points;
    if ( *(_BYTE *)(((unsigned __int64)p_max_points >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_max_points & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_max_points >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_max_points);
    }
    proto::ClientCollectorData::set_max_points(data, v6->max_points);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_client_collector.cpp",
      "notifyData",
      79);
    v8 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v12,
           (const char (*)[55])"ConfigWidgetToyClintCollector not found for material: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->material_id_);
    common::milog::MiLogStream::~MiLogStream(&v12);
    proto::ClientCollectorData::set_max_points(data, 5u);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 80));
  std::shared_ptr<data::ConfigWidgetToyClintCollector>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyClintCollector> *const)(v1 + 48));
  proto::ClientCollectorDataNotify::~ClientCollectorDataNotify((proto::ClientCollectorDataNotify *const)(v1 + 80));
  if ( v13 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 86: range 0000000016205C06-0000000016206272
int32_t __cdecl WidgetClientCollector::onClientReport(
        WidgetClientCollector *const this,
        const proto::WidgetReportReq *req)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  PlayerWidgetComp *widget_comp; // rdx
  PlayerItemComp *ItemComp; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t WidgetNewConfig; // ecx
  int v10; // r15d
  std::__shared_ptr_access<data::ConfigWidgetToyClintCollector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  unsigned int recharge_points; // ecx
  uint32_t v13; // ecx
  char v14; // dl
  __int64 v15; // rsi
  bool v16; // dl
  uint32_t *p_max_points; // rsi
  uint32_t *v18; // rax
  uint32_t *v19; // rdx
  uint32_t v20; // ecx
  char v21; // dl
  bool v22; // dl
  uint32_t curr_points; // esi
  unsigned __int64 v24; // rax
  int32_t result; // eax
  uint32_t old_points; // [rsp+2Ch] [rbp-B4h]
  std::shared_ptr<Config> v27; // [rsp+30h] [rbp-B0h] BYREF
  std::shared_ptr<data::ConfigBaseWidgetToy> v28; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v29; // [rsp+50h] [rbp-90h] BYREF
  char v30[112]; // [rsp+70h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 config_ptr:99";
  *(_QWORD *)(v3 + 16) = WidgetClientCollector::onClientReport;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( !proto::WidgetReportReq::is_client_collect(req) )
    goto LABEL_41;
  if ( *(_BYTE *)(((unsigned __int64)&this->widget_comp_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->widget_comp_);
  widget_comp = this->widget_comp_;
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->material_id_);
  }
  if ( !PlayerWidgetComp::isOnQuickUse(widget_comp, this->material_id_) )
  {
    v2 = 689;
    goto LABEL_42;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  ItemComp = Player::getItemComp(this->player_);
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->material_id_);
  }
  if ( !PlayerItemComp::hasItemById(ItemComp, this->material_id_) )
  {
    v2 = 684;
    goto LABEL_42;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v27);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27);
  WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v8->design_config.json_config_mgr);
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->material_id_);
  }
  WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)&v28, WidgetNewConfig);
  std::dynamic_pointer_cast<data::ConfigWidgetToyClintCollector,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v3 + 32));
  std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr(&v28);
  std::shared_ptr<Config>::~shared_ptr(&v27);
  if ( std::operator==<data::ConfigWidgetToyClintCollector>(
         0LL,
         (const std::shared_ptr<data::ConfigWidgetToyClintCollector> *)(v3 + 32)) )
  {
    v2 = 5;
    v10 = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->curr_points_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->curr_points_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->curr_points_);
    }
    old_points = this->curr_points_;
    v11 = std::__shared_ptr_access<data::ConfigWidgetToyClintCollector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyClintCollector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v11->recharge_points >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v11->recharge_points >> 3) + 0x7FFF8000) <= 3 )
    {
      v11 = (std::__shared_ptr_access<data::ConfigWidgetToyClintCollector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v11->recharge_points);
    }
    recharge_points = v11->recharge_points;
    if ( *(_BYTE *)(((unsigned __int64)&this->curr_points_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->curr_points_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->curr_points_);
    }
    v15 = recharge_points;
    v13 = SAFE_ADD<unsigned int,unsigned int>(this->curr_points_, recharge_points);
    v14 = *(_BYTE *)(((unsigned __int64)&this->curr_points_ >> 3) + 0x7FFF8000);
    LOBYTE(v15) = v14 != 0;
    v16 = v14 != 0 && (char)((((_BYTE)this - 108) & 7) + 3) >= v14;
    if ( v16 )
      __asan_report_store4(&this->curr_points_, v15, v16);
    this->curr_points_ = v13;
    p_max_points = &std::__shared_ptr_access<data::ConfigWidgetToyClintCollector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyClintCollector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32))->max_points;
    v18 = (uint32_t *)std::min<unsigned int>(&this->curr_points_, p_max_points);
    v19 = v18;
    if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v18);
    }
    v20 = *v19;
    v21 = *(_BYTE *)(((unsigned __int64)&this->curr_points_ >> 3) + 0x7FFF8000);
    LOBYTE(p_max_points) = v21 != 0;
    v22 = v21 != 0 && (char)((((_BYTE)this - 108) & 7) + 3) >= v21;
    if ( v22 )
      __asan_report_store4(&this->curr_points_, p_max_points, v22);
    this->curr_points_ = v20;
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/widget/widget_client_collector.cpp",
      "onClientReport",
      109);
    curr_points = this->curr_points_;
    if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->material_id_);
    }
    common::milog::MiLogStream::operator()(
      &v29,
      "client collector %u recharge points %u ==> %u",
      this->material_id_,
      old_points,
      curr_points);
    common::milog::MiLogStream::~MiLogStream(&v29);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v24 = (unsigned __int64)(this->_vptr_WidgetBase + 7);
    if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
      v24 = __asan_report_load8(this->_vptr_WidgetBase + 7);
    (*(void (__fastcall **)(WidgetClientCollector *const))v24)(this);
    v10 = 1;
  }
  std::shared_ptr<data::ConfigWidgetToyClintCollector>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyClintCollector> *const)(v3 + 32));
  if ( v10 == 1 )
LABEL_41:
    v2 = -1;
LABEL_42:
  result = v2;
  if ( v30 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 118: range 0000000016206274-0000000016206C8C
int32_t __cdecl WidgetClientCollector::onQuickUse(
        WidgetClientCollector *const this,
        const proto::QuickUseWidgetReq *req,
        proto::QuickUseWidgetRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t WidgetNewConfig; // ecx
  int32_t v8; // r14d
  std::__shared_ptr_access<data::ConfigWidgetToyClintCollector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  bool *p_is_consume_material; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rcx
  PlayerWidgetComp *widget_comp; // r14
  std::__shared_ptr_access<data::ConfigWidgetToyClintCollector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<data::ConfigWidgetToyClintCollector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rdx
  uint32_t *v20; // rax
  __int64 max_points; // rcx
  std::__shared_ptr_access<data::ConfigWidgetToyClintCollector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rdx
  bool *v23; // rax
  PlayerItemComp *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  std::__shared_ptr_access<data::ConfigWidgetToyClintCollector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rdx
  uint32_t *p_max_points; // rax
  PlayerWidgetComp *v31; // r14
  std::__shared_ptr_access<data::ConfigWidgetToyClintCollector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+24h] [rbp-10Ch]
  proto::ClientCollectorData *rsp_data; // [rsp+28h] [rbp-108h]
  std::shared_ptr<Config> v37; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v38; // [rsp+40h] [rbp-F0h] BYREF
  char v39[208]; // [rsp+60h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 7 ret:157 64 8 10 reason:156 96 16 14 config_ptr:119 128 16 14 item_param:125";
  *(_QWORD *)(v3 + 16) = WidgetClientCollector::onQuickUse;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v37);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37);
  WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v6->design_config.json_config_mgr);
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->material_id_);
  }
  WidgetJsonNewConfig::findWidgetConfigById((const WidgetJsonNewConfig *const)(v3 + 128), WidgetNewConfig);
  std::dynamic_pointer_cast<data::ConfigWidgetToyClintCollector,data::ConfigBaseWidgetToy>((const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v3 + 96));
  std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr((std::shared_ptr<data::ConfigBaseWidgetToy> *const)(v3 + 128));
  std::shared_ptr<Config>::~shared_ptr(&v37);
  if ( std::operator==<data::ConfigWidgetToyClintCollector>(
         0LL,
         (const std::shared_ptr<data::ConfigWidgetToyClintCollector> *)(v3 + 96)) )
  {
    v8 = 5;
    goto LABEL_55;
  }
  *(_DWORD *)(v3 + 128) = 0;
  *(_DWORD *)(v3 + 132) = 0;
  *(_DWORD *)(v3 + 136) = 0;
  *(_DWORD *)(v3 + 140) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->material_id_);
  }
  *(_DWORD *)(v3 + 128) = this->material_id_;
  *(_DWORD *)(v3 + 132) = 1;
  v9 = std::__shared_ptr_access<data::ConfigWidgetToyClintCollector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyClintCollector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
  p_is_consume_material = &v9->is_consume_material;
  if ( *(_BYTE *)(((unsigned __int64)p_is_consume_material >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)p_is_consume_material & 7) >= *(_BYTE *)(((unsigned __int64)p_is_consume_material >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load1(p_is_consume_material);
  }
  if ( v9->is_consume_material )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    ItemComp = Player::getItemComp(this->player_);
    *(_DWORD *)(v3 + 48) = PlayerItemComp::checkSubItem(ItemComp, (const ItemParam *)(v3 + 128));
    if ( *(_DWORD *)(v3 + 48) )
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/widget/widget_client_collector.cpp",
        "onQuickUse",
        135);
      v12 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v38,
              (const char (*)[31])"checkSubItem fail, item_param:");
      v13 = operator<<(v12, (const ItemParam *)(v3 + 128));
      v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" ret:");
      v15 = common::milog::MiLogStream::operator<<<int,(int *)0>(v14, (const int *)(v3 + 48));
      v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
LABEL_18:
      operator<<(v16, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v38);
      v8 = *(_DWORD *)(v3 + 48);
      goto LABEL_55;
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->widget_comp_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->widget_comp_);
  widget_comp = this->widget_comp_;
  v18 = std::__shared_ptr_access<data::ConfigWidgetToyClintCollector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyClintCollector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
  if ( *(_BYTE *)(((unsigned __int64)&v18->cd_group >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->cd_group >> 3) + 0x7FFF8000) <= 3 )
  {
    v18 = (std::__shared_ptr_access<data::ConfigWidgetToyClintCollector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v18->cd_group);
  }
  ret = PlayerWidgetComp::checkWidgetGroupCoolDown(widget_comp, v18->cd_group);
  if ( ret )
  {
    v8 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->curr_points_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->curr_points_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->curr_points_);
    }
    if ( this->curr_points_ )
    {
      v22 = std::__shared_ptr_access<data::ConfigWidgetToyClintCollector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyClintCollector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      v23 = &v22->is_consume_material;
      if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v23 & 7) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v23);
      }
      if ( v22->is_consume_material )
      {
        SubItemReason::SubItemReason((SubItemReason *const)(v3 + 64), ACTION_REASON_USE_WIDGET_CLIENT_COLLECTOR);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v24 = Player::getItemComp(this->player_);
        *(_DWORD *)(v3 + 48) = PlayerItemComp::subItem(
                                 v24,
                                 (const ItemParam *)(v3 + 128),
                                 (const SubItemReason *)(v3 + 64));
        if ( *(_DWORD *)(v3 + 48) )
        {
          common::milog::MiLogStream::create(
            &v38,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/widget/widget_client_collector.cpp",
            "onQuickUse",
            160);
          v25 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  &v38,
                  (const char (*)[26])"subItem fail, item_param:");
          v26 = operator<<(v25, (const ItemParam *)(v3 + 128));
          v27 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v26, (const char (*)[6])" ret:");
          v28 = common::milog::MiLogStream::operator<<<int,(int *)0>(v27, (const int *)(v3 + 48));
          v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          goto LABEL_18;
        }
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->curr_points_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->curr_points_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->curr_points_);
      }
      --this->curr_points_;
      rsp_data = proto::QuickUseWidgetRsp::mutable_client_collector_data(rsp_0);
      if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->material_id_);
      }
      proto::ClientCollectorData::set_material_id(rsp_data, this->material_id_);
      v29 = std::__shared_ptr_access<data::ConfigWidgetToyClintCollector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyClintCollector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      p_max_points = &v29->max_points;
      if ( *(_BYTE *)(((unsigned __int64)p_max_points >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_max_points & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_max_points >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(p_max_points);
      }
      proto::ClientCollectorData::set_max_points(rsp_data, v29->max_points);
      if ( *(_BYTE *)(((unsigned __int64)&this->curr_points_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->curr_points_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->curr_points_);
      }
      proto::ClientCollectorData::set_curr_points(rsp_data, this->curr_points_);
      if ( *(_BYTE *)(((unsigned __int64)&this->widget_comp_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->widget_comp_);
      v31 = this->widget_comp_;
      v32 = std::__shared_ptr_access<data::ConfigWidgetToyClintCollector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyClintCollector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v32->cd_group >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v32->cd_group >> 3) + 0x7FFF8000) <= 3 )
      {
        v32 = (std::__shared_ptr_access<data::ConfigWidgetToyClintCollector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v32->cd_group);
      }
      PlayerWidgetComp::updateWidgetGroupCoolDown(v31, v32->cd_group, 1);
      v8 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/widget/widget_client_collector.cpp",
        "onQuickUse",
        149);
      v19 = std::__shared_ptr_access<data::ConfigWidgetToyClintCollector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyClintCollector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      v20 = &v19->max_points;
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v20);
      }
      max_points = v19->max_points;
      if ( *(_BYTE *)(((unsigned __int64)&this->curr_points_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->curr_points_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->curr_points_);
      }
      common::milog::MiLogStream::operator()(
        &v38,
        " points NOT enough. curr [%u] vs max [%u]",
        this->curr_points_,
        max_points);
      common::milog::MiLogStream::~MiLogStream(&v38);
      v8 = 687;
    }
  }
LABEL_55:
  std::shared_ptr<data::ConfigWidgetToyClintCollector>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyClintCollector> *const)(v3 + 96));
  result = v8;
  if ( v39 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};
