// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/water_spirit_activity.cpp

// Line 27: range 00000000161C795E-00000000161C7ACC
int32_t __cdecl WaterSpiritActivity::fromScheduleBin(
        WaterSpiritActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  uint32_t v2; // ecx
  char v3; // dl
  __int64 v4; // rdx
  __int64 v5; // rdx
  char v6; // al
  uint32_t v7; // ecx
  char v8; // dl
  __int64 v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rdx
  char v12; // al
  const proto::WaterSpiritScheduleBin *water_spirit_bin; // [rsp+18h] [rbp-8h]

  water_spirit_bin = proto::ActivityScheduleBin::water_spirit_bin(bin);
  v2 = proto::WaterSpiritScheduleBin::spirit_coin(water_spirit_bin);
  v3 = *(_BYTE *)(((unsigned __int64)&this->spirit_coin_ >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)((((_BYTE)this - 92) & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->spirit_coin_, bin, v4);
  this->spirit_coin_ = v2;
  v5 = proto::WaterSpiritScheduleBin::region_search_play_id(water_spirit_bin);
  v6 = *(_BYTE *)(((unsigned __int64)&this->region_search_play_id_ >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(bin) = v6 != 0;
    __asan_report_store4(&this->region_search_play_id_, bin, v5);
  }
  this->region_search_play_id_ = v5;
  v7 = proto::WaterSpiritScheduleBin::scene_play_id(water_spirit_bin);
  v8 = *(_BYTE *)(((unsigned __int64)&this->scene_play_id_ >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((char)((((_BYTE)this - 84) & 7) + 3) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store4(&this->scene_play_id_, bin, v9);
  this->scene_play_id_ = v7;
  LOBYTE(v10) = proto::WaterSpiritScheduleBin::is_phase_finish(water_spirit_bin);
  v11 = v10;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_phase_finish_ >> 3) + 0x7FFF8000);
  if ( v12 < 0 )
  {
    LOBYTE(bin) = v12 != 0;
    __asan_report_store1(&this->is_phase_finish_, bin, v11);
  }
  this->is_phase_finish_ = v11;
  return 0;
};

// Line 37: range 00000000161C7ACE-00000000161C7C3C
int32_t __cdecl WaterSpiritActivity::toScheduleBin(
        const WaterSpiritActivity *const this,
        proto::ActivityScheduleBin *bin)
{
  proto::WaterSpiritScheduleBin *water_spirit_bin; // [rsp+18h] [rbp-8h]

  water_spirit_bin = proto::ActivityScheduleBin::mutable_water_spirit_bin(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->spirit_coin_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->spirit_coin_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->spirit_coin_);
  }
  proto::WaterSpiritScheduleBin::set_spirit_coin(water_spirit_bin, this->spirit_coin_);
  if ( *(_BYTE *)(((unsigned __int64)&this->region_search_play_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->region_search_play_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->region_search_play_id_);
  }
  proto::WaterSpiritScheduleBin::set_region_search_play_id(water_spirit_bin, this->region_search_play_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_play_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_play_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->scene_play_id_);
  }
  proto::WaterSpiritScheduleBin::set_scene_play_id(water_spirit_bin, this->scene_play_id_);
  if ( *(char *)(((unsigned __int64)&this->is_phase_finish_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_phase_finish_);
  proto::WaterSpiritScheduleBin::set_is_phase_finish(water_spirit_bin, this->is_phase_finish_);
  return 0;
};

// Line 47: range 00000000161C7C3E-00000000161C80D1
int32_t __cdecl WaterSpiritActivity::toClient(WaterSpiritActivity *const this, proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v6; // rax
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v7; // rsi
  unsigned int *v8; // rax
  uint32_t *v9; // rdx
  char v10; // cl
  unsigned int val; // [rsp+1Ch] [rbp-A4h] BYREF
  uint32_t search_begin_time; // [rsp+20h] [rbp-A0h]
  uint32_t begin_time; // [rsp+24h] [rbp-9Ch]
  uint32_t time_offset; // [rsp+28h] [rbp-98h]
  uint32_t begin_day; // [rsp+2Ch] [rbp-94h]
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-90h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-88h] BYREF
  proto::WaterSpiritActivityDetailInfo *water_spirit_info; // [rsp+40h] [rbp-80h]
  const std::map<unsigned int,unsigned int> *search_map; // [rsp+48h] [rbp-78h]
  const NewActivityExcelConfigMgr *conf_mgr; // [rsp+50h] [rbp-70h]
  google::protobuf::Map<unsigned int,unsigned int> *search_time_map; // [rsp+58h] [rbp-68h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+60h] [rbp-60h]
  const std::pair<unsigned int const,unsigned int> *v23; // [rsp+68h] [rbp-58h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *search_id; // [rsp+70h] [rbp-50h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *days; // [rsp+78h] [rbp-48h]
  std::shared_ptr<Config> v26; // [rsp+80h] [rbp-40h] BYREF
  common::milog::MiLogStream v27; // [rsp+90h] [rbp-30h] BYREF

  if ( BaseActivity::toClient((BaseActivity *const)this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/water_spirit_activity.cpp",
      "toClient",
      50);
    v2 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v27,
           (const char (*)[51])"[WATER_SPIRIT] BaseActivity::toClient failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v27);
    return -1;
  }
  else
  {
    water_spirit_info = proto::ActivityInfo::mutable_water_spirit_info(activity_info);
    if ( *(_BYTE *)(((unsigned __int64)&this->region_search_play_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->region_search_play_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->region_search_play_id_);
    }
    proto::WaterSpiritActivityDetailInfo::set_region_search_id(water_spirit_info, this->region_search_play_id_);
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_play_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_play_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->scene_play_id_);
    }
    proto::WaterSpiritActivityDetailInfo::set_mp_play_id(water_spirit_info, this->scene_play_id_);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v26);
    v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
    search_map = ConstValueExcelConfigMgr::getWaterSpriteSearchMap(&v4->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v26);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v26);
    conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.new_activity_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v26);
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->schedule_id_);
    }
    begin_time = NewActivityExcelConfigMgr::getScheduleBeginTime(conf_mgr, this->schedule_id_);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v26);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
    time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v5->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v26);
    begin_day = common::tools::TimeUtils::getTimeDay(begin_time, time_offset);
    search_time_map = proto::WaterSpiritActivityDetailInfo::mutable_search_time_map(water_spirit_info);
    __for_range = search_map;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(search_map)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(search_map)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v23 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      search_id = std::get<0ul,unsigned int const,unsigned int>(v23);
      v6 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v23);
      days = v6;
      search_begin_time = begin_time;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      if ( *days > 1 )
        search_begin_time = common::tools::TimeUtils::getDailyStartTime(*days + begin_day - 1, time_offset);
      v7 = search_id;
      v8 = google::protobuf::Map<unsigned int,unsigned int>::operator[](search_time_map, search_id);
      v9 = v8;
      v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
      if ( v10 != 0 && (char)(((unsigned __int8)v8 & 7) + 3) >= v10 )
      {
        LOBYTE(v7) = v10 != 0;
        __asan_report_store4(v8, v7, v8);
      }
      *v9 = search_begin_time;
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 75: range 00000000161C80D2-00000000161C8187
void __cdecl WaterSpiritActivity::fillActivityCoinInfo(
        WaterSpiritActivity *const this,
        google::protobuf::Map<unsigned int,unsigned int> *activity_coin_map)
{
  uint32_t spirit_coin; // ebx
  google::protobuf::Map<unsigned int,unsigned int>::key_type *v3; // rsi
  unsigned int *v4; // rax
  uint32_t *v5; // rdx
  char v6; // cl
  google::protobuf::Map<unsigned int,unsigned int>::key_type key[5]; // [rsp+1Ch] [rbp-14h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->spirit_coin_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->spirit_coin_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->spirit_coin_);
  }
  spirit_coin = this->spirit_coin_;
  key[0] = 120;
  v3 = key;
  v4 = google::protobuf::Map<unsigned int,unsigned int>::operator[](activity_coin_map, key);
  v5 = v4;
  v6 = *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)(((unsigned __int8)v4 & 7) + 3) >= v6 )
  {
    LOBYTE(v3) = v6 != 0;
    __asan_report_store4(v4, v3, v4);
  }
  *v5 = spirit_coin;
};

// Line 80: range 00000000161C8188-00000000161C81A6
int32_t __cdecl WaterSpiritActivity::init(WaterSpiritActivity *const this)
{
  WaterSpiritActivity::initEventObservers(this);
  return 0;
};

// Line 86: range 00000000161C81A8-00000000161C824B
void __cdecl WaterSpiritActivity::onLogin(WaterSpiritActivity *const this)
{
  WaterSpiritActivity *v1; // rdx
  unsigned __int64 v2; // rax
  char v3; // al

  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0) )
    goto LABEL_7;
  v1 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v2 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(this->_vptr_DescribalBase + 17);
  if ( (*(unsigned __int8 (__fastcall **)(WaterSpiritActivity *))v2)(v1) )
LABEL_7:
    v3 = 1;
  else
    v3 = 0;
  if ( !v3 )
    BaseActivity::onLogin((BaseActivity *const)this);
};

// Line 96: range 00000000161C824C-00000000161C8280
void __cdecl WaterSpiritActivity::onDailyRefresh(WaterSpiritActivity *const this)
{
  if ( BaseActivity::isOpening((const BaseActivity *const)this, 0) )
    BaseActivity::notifyClientData((BaseActivity *const)this, 0);
};

// Line 104: range 00000000161C8282-00000000161C829C
void __cdecl WaterSpiritActivity::onStart(WaterSpiritActivity *const this)
{
  WaterSpiritActivity::initEventObservers(this);
};

// Line 109: range 00000000161C829E-00000000161C863D
void __cdecl WaterSpiritActivity::onClear(WaterSpiritActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  PlayerRegionSearchComp *RegionSearchComp; // rcx
  __int64 region_search_play_id; // rsi
  __int64 v6; // rsi
  PlayerScenePlayComp *ScenePlayComp; // rcx
  __int64 v8; // rdx
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 14 sub_reason:111";
  *(_QWORD *)(v1 + 16) = WaterSpiritActivity::onClear;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  SubItemReason::SubItemReason((SubItemReason *const)(v1 + 32), ACTION_REASON_ACTIVITY_EXPIRE_ITEM);
  if ( *(_BYTE *)(((unsigned __int64)&this->spirit_coin_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->spirit_coin_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->spirit_coin_);
  }
  if ( this->spirit_coin_ )
    WaterSpiritActivity::subSpiritCoin(this, this->spirit_coin_, (const SubItemReason *)(v1 + 32), 0);
  if ( *(_BYTE *)(((unsigned __int64)&this->region_search_play_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->region_search_play_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->region_search_play_id_);
  }
  if ( this->region_search_play_id_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    RegionSearchComp = Player::getRegionSearchComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&this->region_search_play_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->region_search_play_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->region_search_play_id_);
    }
    region_search_play_id = this->region_search_play_id_;
    PlayerRegionSearchComp::delRegionSearchPlay(RegionSearchComp, region_search_play_id);
    if ( *(_BYTE *)(((unsigned __int64)&this->region_search_play_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->region_search_play_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->region_search_play_id_, region_search_play_id, &this->region_search_play_id_);
    }
    this->region_search_play_id_ = 0;
  }
  v6 = (((_BYTE)this - 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_play_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_play_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->scene_play_id_);
  }
  if ( this->scene_play_id_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    ScenePlayComp = Player::getScenePlayComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_play_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_play_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->scene_play_id_);
    }
    PlayerScenePlayComp::closeScenePlay(ScenePlayComp, this->scene_play_id_);
    v6 = (((_BYTE)this - 84) & 7u) + 3;
    v8 = (*(_BYTE *)(((unsigned __int64)&this->scene_play_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_play_id_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v8 )
      __asan_report_store4(&this->scene_play_id_, v6, v8);
    this->scene_play_id_ = 0;
  }
  if ( *(char *)(((unsigned __int64)&this->is_phase_finish_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_phase_finish_, v6, &this->is_phase_finish_);
  this->is_phase_finish_ = 0;
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 130: range 00000000161C863E-00000000161C8F18
int32_t __cdecl WaterSpiritActivity::execAction(
        WaterSpiritActivity *const this,
        const data::NewActivityExec *action_exec)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // r14
  int32_t result; // eax
  data::NewActivityActionType type; // eax
  common::milog::MiLogStream *v8; // rax
  PlayerRegionSearchComp *RegionSearchComp; // rcx
  const std::string *v10; // rax
  uint32_t v12; // ecx
  char v13; // al
  const std::string *v14; // rax
  char v15; // al
  char *scene_play_id; // rsi
  common::milog::MiLogStream *v17; // rax
  PlayerScenePlayComp *ScenePlayComp; // rcx
  const std::string *v19; // rax
  uint32_t v21; // ecx
  char v22; // dl
  __int64 v23; // rdx
  const std::string *v24; // rax
  char v25; // al
  __int64 v26; // rdx
  const data::NewActivityExec *action_execa; // [rsp+0h] [rbp-B0h]
  bool need_notify; // [rsp+1Bh] [rbp-95h]
  int32_t ret; // [rsp+1Ch] [rbp-94h]
  common::milog::MiLogStream v30; // [rsp+20h] [rbp-90h] BYREF
  char v31[112]; // [rsp+40h] [rbp-70h] BYREF

  action_execa = action_exec;
  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 play_id:181";
  *(_QWORD *)(v2 + 16) = WaterSpiritActivity::execAction;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  ret = BaseActivity::execAction((BaseActivity *const)this, action_exec);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/water_spirit_activity.cpp",
      "execAction",
      134);
    v5 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           &v30,
           (const char (*)[53])"[WATER_SPIRIT] BaseActivity::execAction failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v2 + 32) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v30);
    result = ret;
    goto LABEL_74;
  }
  need_notify = 1;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&action_exec->type);
  }
  type = action_exec->type;
  if ( type == NEW_ACTIVITY_ACTION_CLOSE_REGION_SEARCH )
  {
    *(_DWORD *)(v2 + 32) = 0;
    if ( !std::vector<std::string>::size(&action_exec->param) )
      goto LABEL_38;
    v14 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
    action_exec = (const data::NewActivityExec *)(v2 + 32);
    if ( common::tools::StringUtils::strToNum<unsigned int>(v14, (unsigned int *)(v2 + 32), 1) )
      goto LABEL_38;
    if ( *(_BYTE *)(((unsigned __int64)&this->region_search_play_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->region_search_play_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->region_search_play_id_);
    }
    if ( this->region_search_play_id_ == *(_DWORD *)(v2 + 32) )
      v15 = 1;
    else
LABEL_38:
      v15 = 0;
    if ( v15 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->region_search_play_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->region_search_play_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->region_search_play_id_, action_exec, &this->region_search_play_id_);
      }
      this->region_search_play_id_ = 0;
    }
    goto LABEL_71;
  }
  if ( type > NEW_ACTIVITY_ACTION_CLOSE_REGION_SEARCH )
    goto LABEL_70;
  switch ( type )
  {
    case NEW_ACTIVITY_ACTION_OPEN_REGION_SEARCH:
      if ( *(_BYTE *)(((unsigned __int64)&this->region_search_play_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->region_search_play_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->region_search_play_id_);
      }
      if ( this->region_search_play_id_ )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/water_spirit_activity.cpp",
          "execAction",
          145);
        v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
               &v30,
               (const char (*)[42])"[WATER_SPIRIT] has already region_search=");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->region_search_play_id_);
        common::milog::MiLogStream::~MiLogStream(&v30);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        RegionSearchComp = Player::getRegionSearchComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&this->region_search_play_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->region_search_play_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->region_search_play_id_);
        }
        action_exec = (const data::NewActivityExec *)this->region_search_play_id_;
        PlayerRegionSearchComp::delRegionSearchPlay(RegionSearchComp, (uint32_t)action_exec);
      }
      *(_DWORD *)(v2 + 32) = 0;
      if ( std::vector<std::string>::size(&action_execa->param) )
      {
        v10 = std::vector<std::string>::operator[](&action_execa->param, 0LL);
        action_exec = (const data::NewActivityExec *)(v2 + 32);
        if ( !common::tools::StringUtils::strToNum<unsigned int>(v10, (unsigned int *)(v2 + 32), 1) )
        {
          v12 = *(_DWORD *)(v2 + 32);
          v13 = *(_BYTE *)(((unsigned __int64)&this->region_search_play_id_ >> 3) + 0x7FFF8000);
          if ( v13 != 0 && v13 <= 3 )
          {
            LOBYTE(action_exec) = v13 != 0;
            __asan_report_store4(&this->region_search_play_id_, action_exec, &this->region_search_play_id_);
          }
          this->region_search_play_id_ = v12;
        }
      }
      break;
    case NEW_ACTIVITY_ACTION_OPEN_SCENE_MP_PLAY:
      scene_play_id = (char *)((((_BYTE)this - 84) & 7u) + 3);
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_play_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_play_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->scene_play_id_);
      }
      if ( this->scene_play_id_ )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/water_spirit_activity.cpp",
          "execAction",
          169);
        v17 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v30,
                (const char (*)[39])"[WATER_SPIRIT] has already scene_play=");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->scene_play_id_);
        common::milog::MiLogStream::~MiLogStream(&v30);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        ScenePlayComp = Player::getScenePlayComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_play_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_play_id_ >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&this->scene_play_id_);
        }
        scene_play_id = (char *)this->scene_play_id_;
        PlayerScenePlayComp::closeScenePlay(ScenePlayComp, (uint32_t)scene_play_id);
      }
      *(_DWORD *)(v2 + 32) = 0;
      if ( std::vector<std::string>::size(&action_execa->param) )
      {
        v19 = std::vector<std::string>::operator[](&action_execa->param, 0LL);
        scene_play_id = (char *)(v2 + 32);
        if ( !common::tools::StringUtils::strToNum<unsigned int>(v19, (unsigned int *)(v2 + 32), 1) )
        {
          v21 = *(_DWORD *)(v2 + 32);
          v22 = *(_BYTE *)(((unsigned __int64)&this->scene_play_id_ >> 3) + 0x7FFF8000);
          LOBYTE(scene_play_id) = v22 != 0;
          v23 = (v22 != 0) & (unsigned __int8)((char)((((_BYTE)this - 84) & 7) + 3) >= v22);
          if ( (_BYTE)v23 )
            __asan_report_store4(&this->scene_play_id_, scene_play_id, v23);
          this->scene_play_id_ = v21;
        }
      }
      break;
    case NEW_ACTIVITY_ACTION_CLOSE_SCENE_MP_PLAY:
      *(_DWORD *)(v2 + 32) = 0;
      if ( !std::vector<std::string>::size(&action_exec->param) )
        goto LABEL_65;
      v24 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v24, (unsigned int *)(v2 + 32), 1) )
        goto LABEL_65;
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_play_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_play_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->scene_play_id_);
      }
      if ( this->scene_play_id_ == *(_DWORD *)(v2 + 32) )
        v25 = 1;
      else
LABEL_65:
        v25 = 0;
      if ( v25 )
      {
        v26 = (*(_BYTE *)(((unsigned __int64)&this->scene_play_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_play_id_ >> 3) + 0x7FFF8000));
        if ( (_BYTE)v26 )
          __asan_report_store4(&this->scene_play_id_, (((_BYTE)this - 84) & 7u) + 3, v26);
        this->scene_play_id_ = 0;
      }
      break;
    default:
LABEL_70:
      need_notify = 0;
      break;
  }
LABEL_71:
  if ( need_notify )
    BaseActivity::notifyClientData((BaseActivity *const)this, 0);
  result = 0;
LABEL_74:
  if ( v31 == (char *)v2 )
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

// Line 203: range 00000000161C8F1A-00000000161C918D
__int64 __fastcall WaterSpiritActivity::checkAddSpiritCoin(const WaterSpiritActivity *const this, uint32_t add_num)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-80h] BYREF
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 add_num:202";
  *(_QWORD *)(v2 + 16) = WaterSpiritActivity::checkAddSpiritCoin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = add_num;
  if ( *(_DWORD *)(v2 + 32) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->spirit_coin_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->spirit_coin_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->spirit_coin_);
    }
    if ( this->spirit_coin_ && *(_DWORD *)(v2 + 32) + this->spirit_coin_ < *(_DWORD *)(v2 + 32) )
      goto LABEL_14;
  }
  if ( *(_DWORD *)(v2 + 32) )
    goto LABEL_15;
  if ( *(_BYTE *)(((unsigned __int64)&this->spirit_coin_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->spirit_coin_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->spirit_coin_);
  }
  if ( this->spirit_coin_ || *(_DWORD *)(v2 + 32) + this->spirit_coin_ <= *(_DWORD *)(v2 + 32) )
  {
LABEL_15:
    result = 0LL;
  }
  else
  {
LABEL_14:
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/water_spirit_activity.cpp",
      "checkAddSpiritCoin",
      206);
    v5 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v9,
           (const char (*)[39])"[WATER_SPIRIT] coin overflow, cur_num:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->spirit_coin_);
    v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v6, (const char (*)[10])" add_num:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 9120LL;
  }
  if ( v10 == (char *)v2 )
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

// Line 213: range 00000000161C918E-00000000161C9579
int32_t __cdecl WaterSpiritActivity::addSpiritCoin(
        WaterSpiritActivity *const this,
        uint32_t add_num,
        const ActionReason *reason,
        bool is_notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int32_t v7; // r14d
  PlayerBasicComp *BasicComp; // rax
  SelectType v9; // ecx
  char v10; // dl
  __int64 v11; // rsi
  __int64 v12; // rdx
  PlayerItemComp *ItemComp; // rdi
  data::ItemLimitType vptr_PlayerCompBase_high; // ecx
  uint32_t vptr_PlayerCompBase; // r10d
  int32_t result; // eax
  std::string v17; // [rsp+0h] [rbp-C0h]
  PlayerItemComp *reasona; // [rsp+8h] [rbp-B8h]
  bool is_notifya; // [rsp+10h] [rbp-B0h]
  unsigned int add_numa; // [rsp+14h] [rbp-ACh]
  WaterSpiritActivity *thisa; // [rsp+18h] [rbp-A8h]
  int32_t ret; // [rsp+28h] [rbp-98h]
  unsigned int old_coin; // [rsp+2Ch] [rbp-94h]
  std::string v24; // [rsp+30h] [rbp-90h] BYREF
  char v25[112]; // [rsp+50h] [rbp-70h] BYREF

  *(&v17._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v17._anon_0._M_allocated_capacity) = add_num;
  v17._M_string_length = (std::string::size_type)reason;
  v17._anon_0._M_local_buf[0] = is_notify;
  v4 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 1 22 log_context_holder:219";
  *(_QWORD *)(v4 + 16) = WaterSpiritActivity::addSpiritCoin;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  ret = WaterSpiritActivity::checkAddSpiritCoin(this, add_num);
  if ( ret )
  {
    v7 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v24, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0x67u, v17);
    std::string::~string(&v24);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->spirit_coin_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->spirit_coin_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&thisa->spirit_coin_);
    }
    old_coin = thisa->spirit_coin_;
    v11 = add_numa;
    v9 = SAFE_ADD<unsigned int,unsigned int>(old_coin, add_numa);
    v10 = *(_BYTE *)(((unsigned __int64)&thisa->spirit_coin_ >> 3) + 0x7FFF8000);
    LOBYTE(v11) = v10 != 0;
    v12 = (v10 != 0) & (unsigned __int8)((char)((((_BYTE)thisa - 92) & 7) + 3) >= v10);
    if ( (_BYTE)v12 )
      __asan_report_store4(&thisa->spirit_coin_, v11, v12);
    thisa->spirit_coin_ = v9;
    if ( is_notifya )
      BaseActivity::notifyActivityCoinInfo((BaseActivity *const)thisa);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    ItemComp = Player::getItemComp(thisa->player_);
    if ( *(_BYTE *)((((unsigned __int64)&reasona->_vptr_PlayerCompBase + 4) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)reasona + 4) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)&reasona->_vptr_PlayerCompBase + 4) >> 3)
                                                            + 0x7FFF8000) )
    {
      ItemComp = (PlayerItemComp *)((char *)&reasona->_vptr_PlayerCompBase + 4);
      __asan_report_load4((char *)&reasona->_vptr_PlayerCompBase + 4);
    }
    vptr_PlayerCompBase_high = HIDWORD(reasona->_vptr_PlayerCompBase);
    if ( *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)reasona & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) )
    {
      ItemComp = reasona;
      __asan_report_load4(reasona);
    }
    vptr_PlayerCompBase = (uint32_t)reasona->_vptr_PlayerCompBase;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->spirit_coin_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->spirit_coin_ >> 3) + 0x7FFF8000) )
    {
      ItemComp = (PlayerItemComp *)&thisa->spirit_coin_;
      __asan_report_load4(&thisa->spirit_coin_);
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      ITEM_VIRTUAL_WATER_SPIRIT_COIN,
      old_coin,
      thisa->spirit_coin_,
      vptr_PlayerCompBase,
      vptr_PlayerCompBase_high,
      0);
    v7 = 0;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
  }
  result = v7;
  if ( v25 == (char *)v4 )
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

// Line 232: range 00000000161C957A-00000000161C974A
__int64 __fastcall WaterSpiritActivity::checkSubSpiritCoin(const WaterSpiritActivity *const this, uint32_t sub_num)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-80h] BYREF
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 sub_num:231";
  *(_QWORD *)(v2 + 16) = WaterSpiritActivity::checkSubSpiritCoin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = sub_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->spirit_coin_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->spirit_coin_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->spirit_coin_);
  }
  if ( this->spirit_coin_ >= *(_DWORD *)(v2 + 32) )
  {
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/water_spirit_activity.cpp",
      "checkSubSpiritCoin",
      235);
    v5 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v9,
           (const char (*)[41])"[WATER_SPIRIT] coin not enough, cur_num:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->spirit_coin_);
    v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v6, (const char (*)[10])" sub_num:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 9121LL;
  }
  if ( v10 == (char *)v2 )
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

// Line 242: range 00000000161C974C-00000000161C9A9F
int32_t __cdecl WaterSpiritActivity::subSpiritCoin(
        WaterSpiritActivity *const this,
        uint32_t sub_num,
        const SubItemReason *reason,
        bool is_notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int32_t v7; // r14d
  PlayerBasicComp *BasicComp; // rax
  PlayerItemComp *ItemComp; // rdi
  uint32_t vptr_PlayerCompBase; // r8d
  int32_t result; // eax
  std::string v12; // [rsp+0h] [rbp-C0h]
  PlayerItemComp *reasona; // [rsp+8h] [rbp-B8h]
  bool is_notifya; // [rsp+10h] [rbp-B0h]
  uint32_t sub_numa; // [rsp+14h] [rbp-ACh]
  WaterSpiritActivity *thisa; // [rsp+18h] [rbp-A8h]
  int32_t ret; // [rsp+28h] [rbp-98h]
  uint32_t old_coin; // [rsp+2Ch] [rbp-94h]
  std::string v19; // [rsp+30h] [rbp-90h] BYREF
  char v20[112]; // [rsp+50h] [rbp-70h] BYREF

  *(&v12._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v12._anon_0._M_allocated_capacity) = sub_num;
  v12._M_string_length = (std::string::size_type)reason;
  v12._anon_0._M_local_buf[0] = is_notify;
  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 1 22 log_context_holder:248";
  *(_QWORD *)(v4 + 16) = WaterSpiritActivity::subSpiritCoin;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  ret = WaterSpiritActivity::checkSubSpiritCoin(this, sub_num);
  if ( ret )
  {
    v7 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v19, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0x67u, v12);
    std::string::~string(&v19);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->spirit_coin_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->spirit_coin_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&thisa->spirit_coin_);
    }
    old_coin = thisa->spirit_coin_;
    thisa->spirit_coin_ = old_coin - sub_numa;
    if ( is_notifya )
      BaseActivity::notifyActivityCoinInfo((BaseActivity *const)thisa);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    ItemComp = Player::getItemComp(thisa->player_);
    if ( *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)reasona & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) )
    {
      ItemComp = reasona;
      __asan_report_load4(reasona);
    }
    vptr_PlayerCompBase = (uint32_t)reasona->_vptr_PlayerCompBase;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->spirit_coin_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->spirit_coin_ >> 3) + 0x7FFF8000) )
    {
      ItemComp = (PlayerItemComp *)&thisa->spirit_coin_;
      __asan_report_load4(&thisa->spirit_coin_);
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      ITEM_VIRTUAL_WATER_SPIRIT_COIN,
      old_coin,
      thisa->spirit_coin_,
      vptr_PlayerCompBase,
      ITEM_LIMIT_NONE,
      0);
    v7 = 0;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
  }
  result = v7;
  if ( v20 == (char *)v4 )
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

// Line 260: range 00000000161C9AA0-00000000161C9E31
void __cdecl WaterSpiritActivity::initEventObservers(WaterSpiritActivity *const this)
{
  unsigned __int64 p_pending_que; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // [rsp+10h] [rbp-F0h]
  unsigned int val; // [rsp+24h] [rbp-DCh] BYREF
  PlayerEventComp *event_comp; // [rsp+28h] [rbp-D8h]
  std::weak_ptr<WaterSpiritActivity> v7; // [rsp+30h] [rbp-D0h] BYREF
  PlayerEventComp varC0; // [rsp+40h] [rbp-C0h] BYREF

  p_pending_que = (unsigned __int64)&varC0.event_center_.context_.pending_que_;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_pending_que = v2;
  }
  *(_QWORD *)p_pending_que = 1102416563LL;
  *(_QWORD *)(p_pending_que + 8) = "2 32 16 12 this_ptr:263 64 16 12 this_wtr:269";
  *(_QWORD *)(p_pending_que + 16) = WaterSpiritActivity::initEventObservers;
  v3 = (_DWORD *)(p_pending_que >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&varC0._M_weak_this._M_refcount,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/water_spirit_activity.cpp",
    "initEventObservers",
    261);
  v4 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
         (common::milog::MiLogStream *const)&varC0._M_weak_this._M_refcount,
         (const char (*)[18])"initObservers....");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&varC0._M_weak_this._M_refcount);
  toThisPtr<WaterSpiritActivity>((WaterSpiritActivity *)(p_pending_que + 32));
  if ( std::operator==<WaterSpiritActivity>(0LL, (const std::shared_ptr<WaterSpiritActivity> *)(p_pending_que + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&varC0._M_weak_this._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/water_spirit_activity.cpp",
      "initEventObservers",
      266);
    common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
      (common::milog::MiLogStream *const)&varC0._M_weak_this._M_refcount,
      (const char (*)[51])"dynamic_pointer_cast to WaterSpiritActivity failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&varC0._M_weak_this._M_refcount);
  }
  else
  {
    std::weak_ptr<WaterSpiritActivity>::weak_ptr<WaterSpiritActivity,void>(
      (std::weak_ptr<WaterSpiritActivity> *const)(p_pending_que + 64),
      (const std::shared_ptr<WaterSpiritActivity> *)(p_pending_que + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    event_comp = Player::getEventComp(this->player_);
    std::weak_ptr<WaterSpiritActivity>::weak_ptr(&v7, (const std::weak_ptr<WaterSpiritActivity> *)(p_pending_que + 64));
    PlayerEventComp::registerObserver<WaterSpiritActivity,ScenePlayBattleSettleResultEvent>(
      &varC0,
      (std::weak_ptr<WaterSpiritActivity> *)event_comp,
      (void (*)(WaterSpiritActivity *, const ScenePlayBattleSettleResultEvent *))&v7);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&varC0);
    std::weak_ptr<WaterSpiritActivity>::~weak_ptr(&v7);
    std::weak_ptr<WaterSpiritActivity>::~weak_ptr((std::weak_ptr<WaterSpiritActivity> *const)(p_pending_que + 64));
  }
  std::shared_ptr<WaterSpiritActivity>::~shared_ptr((std::shared_ptr<WaterSpiritActivity> *const)(p_pending_que + 32));
  if ( &varC0.event_center_.context_.pending_que_ == (std::queue<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >> *)p_pending_que )
  {
    *(_QWORD *)((p_pending_que >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_pending_que >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_pending_que = 1172321806LL;
    *(_QWORD *)((p_pending_que >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_pending_que >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 276: range 00000000161C9E32-00000000161CA245
void __cdecl WaterSpiritActivity::onScenePlayBattleEnd(
        WaterSpiritActivity *const this,
        const ScenePlayBattleSettleResultEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t mp_play_id; // ecx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t QuestComp; // eax
  std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  char v9[176]; // [rsp+20h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 quest_ptr:291 64 24 10 notify:303";
  *(_QWORD *)(v2 + 16) = WaterSpiritActivity::onScenePlayBattleEnd;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  if ( *(char *)(((unsigned __int64)&this->is_phase_finish_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_phase_finish_);
  if ( !this->is_phase_finish_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->mp_play_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->mp_play_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->mp_play_id);
    }
    mp_play_id = event->mp_play_id;
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_play_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_play_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->scene_play_id_);
    }
    if ( mp_play_id == this->scene_play_id_ )
    {
      if ( *(char *)(((unsigned __int64)&event->is_win >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&event->is_win);
      if ( event->is_win )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v2 + 32));
        v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        ConstValueExcelConfigMgr::getWaterSpiritFinishPhaseQuest(&v6->design_config.txt_config_mgr.const_value_config_mgr);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        QuestComp = (unsigned int)Player::getQuestComp(this->player_);
        PlayerQuestComp::findQuest((const PlayerQuestComp *const)(v2 + 32), QuestComp);
        if ( !std::operator==<Quest>(0LL, (const std::shared_ptr<Quest> *)(v2 + 32)) )
        {
          v8 = std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          if ( Quest::getState(v8) == QUEST_STATE_UNFINISHED )
          {
            if ( *(char *)(((unsigned __int64)&this->is_phase_finish_ >> 3) + 0x7FFF8000) < 0 )
              __asan_report_store1(&this->is_phase_finish_, v2 + 32, &this->is_phase_finish_);
            this->is_phase_finish_ = 1;
            proto::WaterSpritePhaseFinishNotify::WaterSpritePhaseFinishNotify((proto::WaterSpritePhaseFinishNotify *const)(v2 + 64));
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 64));
            BaseActivity::updateAllConds((BaseActivity *const)this);
            proto::WaterSpritePhaseFinishNotify::~WaterSpritePhaseFinishNotify((proto::WaterSpritePhaseFinishNotify *const)(v2 + 64));
          }
        }
        std::shared_ptr<Quest>::~shared_ptr((std::shared_ptr<Quest> *const)(v2 + 32));
      }
    }
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 311: range 00000000161CA246-00000000161CA2EB
bool __cdecl WaterSpiritActivity::checkCondIsMeet(WaterSpiritActivity *const this, const data::NewActivityCond *cond)
{
  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&cond->type);
  }
  if ( cond->type != NEW_ACTIVITY_COND_FINISH_WATER_SPIRIT_PHASE )
    return BaseActivity::checkCondIsMeet((BaseActivity *const)this, cond);
  if ( *(char *)(((unsigned __int64)&this->is_phase_finish_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_phase_finish_);
  return this->is_phase_finish_;
};
