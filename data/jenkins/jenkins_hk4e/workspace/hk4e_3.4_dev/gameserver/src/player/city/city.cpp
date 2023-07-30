// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/city/city.cpp

// Line 27: range 00000000175C9516-00000000175C95CE
int32_t __cdecl City::fromBin(City *const this, const proto::CityBin *city_bin)
{
  uint32_t v2; // ecx
  char v3; // dl
  __int64 v4; // rdx
  uint32_t v5; // ecx
  char v6; // dl
  __int64 v7; // rdx
  const proto::CityBin *city_bina; // [rsp+0h] [rbp-10h]

  city_bina = city_bin;
  v2 = proto::CityBin::level(city_bin);
  v3 = *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000);
  LOBYTE(city_bin) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->level_, city_bin, v4);
  this->level_ = v2;
  v5 = proto::CityBin::crystal_num(city_bina);
  v6 = *(_BYTE *)(((unsigned __int64)&this->crystal_num_ >> 3) + 0x7FFF8000);
  LOBYTE(city_bin) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->crystal_num_, city_bin, v7);
  this->crystal_num_ = v5;
  return 0;
};

// Line 34: range 00000000175C95D0-00000000175C9686
int32_t __cdecl City::toBin(const City *const this, proto::CityBin *city_bin)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  proto::CityBin::set_level(city_bin, this->level_);
  if ( *(_BYTE *)(((unsigned __int64)&this->crystal_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->crystal_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->crystal_num_);
  }
  proto::CityBin::set_crystal_num(city_bin, this->crystal_num_);
  return 0;
};

// Line 42: range 00000000175C9688-00000000175C9B0B
int32_t __cdecl City::levelupWithCrystal(City *const this, Player *player, uint32_t scene_id, uint32_t num)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  PlayerBasicComp *BasicComp; // rax
  WorldAreaExcelConfigMgr *p_world_area_config_mgr; // rcx
  uint32_t v9; // esi
  uint32_t crystal_num; // ecx
  int32_t result; // eax
  std::string v12; // [rsp+0h] [rbp-D0h]
  uint32_t numa; // [rsp+8h] [rbp-C8h]
  uint32_t scene_ida; // [rsp+Ch] [rbp-C4h]
  Player *playera; // [rsp+10h] [rbp-C0h]
  City *thisa; // [rsp+18h] [rbp-B8h]
  const data::CityLevelupConfig *levelup_config_ptr; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<Config> v18; // [rsp+30h] [rbp-A0h] BYREF
  std::string v19; // [rsp+40h] [rbp-90h] BYREF
  char v20[112]; // [rsp+60h] [rbp-70h] BYREF

  *(&v12._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v12._anon_0._M_allocated_capacity = (std::string::size_type)player;
  HIDWORD(v12._M_string_length) = scene_id;
  LODWORD(v12._M_string_length) = num;
  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 1 9 holder:45";
  *(_QWORD *)(v4 + 16) = City::levelupWithCrystal;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  BasicComp = Player::getBasicComp(player);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v19, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0x5E7u, v12);
  std::string::~string(&v19);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->crystal_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->crystal_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&thisa->crystal_num_);
  }
  thisa->crystal_num_ += numa;
  while ( 1 )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v18);
    p_world_area_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.world_area_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&thisa->level_);
    }
    v9 = thisa->level_ + 1;
    if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)thisa & 7) + 3) >= *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(thisa);
    }
    levelup_config_ptr = WorldAreaExcelConfigMgr::findCityLevelupConfig(p_world_area_config_mgr, thisa->city_id_, v9);
    std::shared_ptr<Config>::~shared_ptr(&v18);
    if ( !levelup_config_ptr )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->crystal_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->crystal_num_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&thisa->crystal_num_);
    }
    crystal_num = thisa->crystal_num_;
    if ( *(_BYTE *)(((unsigned __int64)&levelup_config_ptr->consume_item.item_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)levelup_config_ptr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&levelup_config_ptr->consume_item.item_num >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&levelup_config_ptr->consume_item.item_num);
    }
    if ( crystal_num < levelup_config_ptr->consume_item.item_num )
      break;
    thisa->crystal_num_ -= levelup_config_ptr->consume_item.item_num;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&thisa->level_);
    }
    City::logLevelupCity(thisa, scene_ida, playera, thisa->level_++);
    City::onLevelup(thisa, scene_ida, playera, levelup_config_ptr);
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
  result = 0;
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

// Line 67: range 00000000175C9B0C-00000000175C9C70
int32_t __cdecl City::returnLeftCrystalWhenFullLevel(City *const this)
{
  WorldAreaExcelConfigMgr *p_world_area_config_mgr; // rcx
  uint32_t v2; // esi
  int32_t left_crystal; // [rsp+14h] [rbp-2Ch]
  const data::CityLevelupConfig *levelup_config_ptr; // [rsp+18h] [rbp-28h]
  std::shared_ptr<Config> v6[2]; // [rsp+20h] [rbp-20h] BYREF

  left_crystal = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v6);
  p_world_area_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v6)->design_config.txt_config_mgr.world_area_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  v2 = this->level_ + 1;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  levelup_config_ptr = WorldAreaExcelConfigMgr::findCityLevelupConfig(p_world_area_config_mgr, this->city_id_, v2);
  std::shared_ptr<Config>::~shared_ptr(v6);
  if ( !levelup_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->crystal_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->crystal_num_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->crystal_num_);
    }
    left_crystal = this->crystal_num_;
    this->crystal_num_ = 0;
  }
  return left_crystal;
};

// Line 81: range 00000000175C9C72-00000000175CA0B8
int32_t __cdecl City::levelupByGm(City *const this, Player *player, uint32_t scene_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  PlayerBasicComp *BasicComp; // rax
  WorldAreaExcelConfigMgr *p_world_area_config_mgr; // rcx
  uint32_t v8; // esi
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  int32_t v14; // r14d
  int32_t result; // eax
  std::string v16; // [rsp+0h] [rbp-D0h]
  uint32_t scene_ida; // [rsp+Ch] [rbp-C4h]
  Player *playera; // [rsp+10h] [rbp-C0h]
  City *thisa; // [rsp+18h] [rbp-B8h]
  unsigned int val; // [rsp+20h] [rbp-B0h] BYREF
  uint32_t old_level; // [rsp+24h] [rbp-ACh]
  const data::CityLevelupConfig *levelup_config_ptr; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<Config> v23; // [rsp+30h] [rbp-A0h] BYREF
  std::string v24; // [rsp+40h] [rbp-90h] BYREF
  char v25[112]; // [rsp+60h] [rbp-70h] BYREF

  *(&v16._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v16._anon_0._M_allocated_capacity = (std::string::size_type)player;
  HIDWORD(v16._M_string_length) = scene_id;
  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 1 9 holder:82";
  *(_QWORD *)(v3 + 16) = City::levelupByGm;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116351;
  BasicComp = Player::getBasicComp(player);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v24, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0x5E7u, v16);
  std::string::~string(&v24);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v23);
  p_world_area_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.txt_config_mgr.world_area_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&thisa->level_);
  }
  v8 = thisa->level_ + 1;
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)thisa & 7) + 3) >= *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(thisa);
  }
  levelup_config_ptr = WorldAreaExcelConfigMgr::findCityLevelupConfig(p_world_area_config_mgr, thisa->city_id_, v8);
  std::shared_ptr<Config>::~shared_ptr(&v23);
  if ( levelup_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&thisa->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&thisa->level_);
    }
    old_level = thisa->level_++;
    City::onLevelup(thisa, scene_ida, playera, levelup_config_ptr);
    City::logLevelupCity(thisa, scene_ida, playera, old_level);
    v14 = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/city/city.cpp",
      "levelupByGm",
      86);
    v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           (common::milog::MiLogStream *const)&v24,
           (const char (*)[38])"findCityLevelupConfig fails, city_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &thisa->city_id_);
    v11 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])" level:");
    if ( *(_BYTE *)(((unsigned __int64)&thisa->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&thisa->level_);
    }
    val = thisa->level_ + 1;
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
    v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" player:");
    operator<<(v13, playera);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v24);
    v14 = -1;
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
  result = v14;
  if ( v25 == (char *)v3 )
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

// Line 98: range 00000000175CA0BA-00000000175CA4C1
void __fastcall City::onLevelup(
        City *const this,
        uint32_t scene_id,
        Player *player,
        data::CityLevelupConfig *levelup_config)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  PlayerQuestComp *QuestComp; // rax
  PlayerEventComp *EventComp; // r14
  unsigned int *v15; // r9
  const data::CityLevelupConfig *levelup_configb; // [rsp+0h] [rbp-F0h]
  Player *playerb; // [rsp+8h] [rbp-E8h]
  std::shared_ptr<CityLevelupEvent> __r; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 14 last_level:109 64 4 11 scene_id:97";
  *(_QWORD *)(v4 + 16) = City::onLevelup;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 64) = scene_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  if ( this->level_ > 1 )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/city/city.cpp",
      "onLevelup",
      105);
    v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v22, (const char (*)[7])"city: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->city_id_);
    v10 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v9, (const char (*)[10])" level_: ");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->level_);
    v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" crystal: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->crystal_num_);
    common::milog::MiLogStream::~MiLogStream(&v22);
    QuestComp = Player::getQuestComp(player);
    PlayerQuestComp::tryAcceptQuestByCond(QuestComp, QUEST_COND_CITY_LEVEL_EQUAL_GREATER, 1, 0);
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->level_);
    }
    *(_DWORD *)(v4 + 48) = this->level_ - 1;
    EventComp = Player::getEventComp(player);
    common::tools::perf::make_shared<CityLevelupEvent,unsigned int &,unsigned int &,unsigned int &,unsigned int &>(
      (unsigned int *)&__r,
      (unsigned int *)(v4 + 64),
      &this->city_id_,
      &this->level_,
      (unsigned int *)(v4 + 48),
      v15,
      (unsigned int *)levelup_config,
      (unsigned int *)player);
    std::shared_ptr<BaseEvent>::shared_ptr<CityLevelupEvent,void>(&p_event_ptr, &__r);
    PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
    std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
    std::shared_ptr<CityLevelupEvent>::~shared_ptr(&__r);
    City::executeCityLevelupAction(this, playerb, levelup_configb);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/city/city.cpp",
      "onLevelup",
      101);
    v7 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v22, (const char (*)[19])"onLevelup level_: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->level_);
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  if ( v23 == (char *)v4 )
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
};

// Line 116: range 00000000175CA4C2-00000000175CACBA
void __cdecl City::executeCityLevelupAction(
        City *const this,
        Player *player,
        const data::CityLevelupConfig *levelup_config)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerItemComp *ItemComp; // rdi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  PlayerBasicComp *BasicComp; // r13
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v10; // rax
  int *v11; // rdx
  PlayerSceneComp *SceneComp; // rdi
  std::vector<unsigned int> *p_param1_vec; // rsi
  uint32_t city_id; // ecx
  uint32_t v15; // ecx
  common::milog::MiLogStream *v16; // rax
  std::vector<data::WorldAreaLevelupAction>::const_iterator __for_begin; // [rsp+20h] [rbp-C0h] BYREF
  std::vector<data::WorldAreaLevelupAction>::const_iterator __for_end; // [rsp+28h] [rbp-B8h] BYREF
  const std::vector<data::WorldAreaLevelupAction> *__for_range; // [rsp+30h] [rbp-B0h]
  const data::WorldAreaLevelupAction *action; // [rsp+38h] [rbp-A8h]
  common::milog::MiLogStream v24; // [rsp+40h] [rbp-A0h] BYREF
  char v25[128]; // [rsp+60h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 17 action_reason:120";
  *(_QWORD *)(v3 + 16) = City::executeCityLevelupAction;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&levelup_config->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&levelup_config->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&levelup_config->reward_id);
  }
  if ( levelup_config->reward_id )
  {
    ActionReason::ActionReason(
      (ActionReason *const)(v3 + 32),
      ACTION_REASON_CITY_LEVELUP_REWARD,
      ITEM_LIMIT_CITY_UPGRADE);
    ItemComp = Player::getItemComp(player);
    if ( *(_BYTE *)(((unsigned __int64)&levelup_config->reward_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&levelup_config->reward_id >> 3) + 0x7FFF8000) <= 3 )
    {
      ItemComp = (PlayerItemComp *)&levelup_config->reward_id;
      __asan_report_load4(&levelup_config->reward_id);
    }
    PlayerItemComp::grantReward(ItemComp, levelup_config->reward_id, (const ActionReason *)(v3 + 32), 0LL);
  }
  __for_range = &levelup_config->action_vec;
  __for_begin._M_current = std::vector<data::WorldAreaLevelupAction>::begin(&levelup_config->action_vec)._M_current;
  __for_end._M_current = std::vector<data::WorldAreaLevelupAction>::end(&levelup_config->action_vec)._M_current;
  while ( __gnu_cxx::operator!=<data::WorldAreaLevelupAction const*,std::vector<data::WorldAreaLevelupAction>>(
            &__for_begin,
            &__for_end) )
  {
    action = __gnu_cxx::__normal_iterator<data::WorldAreaLevelupAction const*,std::vector<data::WorldAreaLevelupAction>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)&action->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&action->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&action->type);
    }
    if ( action->type )
    {
      if ( *(_BYTE *)(((unsigned __int64)&action->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&action->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&action->type);
      }
      switch ( action->type )
      {
        case WORLD_AREA_ACTION_IMPROVE_STAMINA:
          if ( std::vector<unsigned int>::size(&action->param1_vec) == 1 )
          {
            BasicComp = Player::getBasicComp(player);
            v10 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&action->param1_vec, 0LL);
            v11 = (int *)v10;
            if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v10);
            }
            PlayerBasicComp::addPersistStaminaLimit(BasicComp, (float)*v11, 1, PROP_CHANGE_CITY_LEVELUP);
          }
          else
          {
            common::milog::MiLogStream::create(
              &v24,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/city/city.cpp",
              "executeCityLevelupAction",
              134);
            v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v24, (const char (*)[10])"city_id: ");
            v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &levelup_config->city_id);
            common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              v8,
              (const char (*)[47])" IMPROVE_STAMINA param1 just need one integral");
            common::milog::MiLogStream::~MiLogStream(&v24);
          }
          break;
        case WORLD_AREA_ACTION_UNLOCK_FORCE:
          if ( std::vector<unsigned int>::empty(&action->param1_vec) )
          {
            common::milog::MiLogStream::create(
              &v24,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/city/city.cpp",
              "executeCityLevelupAction",
              142);
            common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v24,
              (const char (*)[29])"action.param1_vec is empty()");
            common::milog::MiLogStream::~MiLogStream(&v24);
          }
          else
          {
            SceneComp = Player::getSceneComp(player);
            p_param1_vec = &action->param1_vec;
            if ( *(_BYTE *)(((unsigned __int64)&levelup_config->scene_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&levelup_config->scene_id >> 3) + 0x7FFF8000) <= 3 )
            {
              SceneComp = (PlayerSceneComp *)&levelup_config->scene_id;
              __asan_report_load4(&levelup_config->scene_id);
            }
            PlayerSceneComp::unlockForce(SceneComp, levelup_config->scene_id, p_param1_vec, 1);
          }
          break;
        case WORLD_AREA_ACTION_UNLOCK_DUNGEON_ENTRANCE:
          if ( *(_BYTE *)(((unsigned __int64)&levelup_config->scene_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&levelup_config->scene_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&levelup_config->scene_id);
          }
          City::levelupActionUnlockDungeonEntry(this, player, levelup_config->scene_id, action);
          break;
        case WORLD_AREA_ACTION_ACTIVATE_ITEM:
          if ( *(_BYTE *)(((unsigned __int64)&levelup_config->city_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)levelup_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&levelup_config->city_id >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4(&levelup_config->city_id);
          }
          city_id = levelup_config->city_id;
          if ( *(_BYTE *)(((unsigned __int64)&levelup_config->scene_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&levelup_config->scene_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&levelup_config->scene_id);
          }
          City::levelupActionActiveItem(this, player, levelup_config->scene_id, city_id, action);
          break;
        case WORLD_AREA_ACTION_UNLOCK_DYNAMIC_HARD:
          break;
        case WORLD_AREA_ACTION_UNLOCK_AIR_PORTAL:
          if ( *(_BYTE *)(((unsigned __int64)&levelup_config->scene_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&levelup_config->scene_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&levelup_config->scene_id);
          }
          City::levelupActionUnlockAirPortal(this, player, levelup_config->scene_id, action);
          break;
        case WORLD_AREA_ACTION_NOTIFY_GROUP:
          if ( *(_BYTE *)(((unsigned __int64)&levelup_config->city_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)levelup_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&levelup_config->city_id >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4(&levelup_config->city_id);
          }
          v15 = levelup_config->city_id;
          if ( *(_BYTE *)(((unsigned __int64)&levelup_config->scene_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&levelup_config->scene_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&levelup_config->scene_id);
          }
          City::levelupActionNotifyGroup(this, player, levelup_config->scene_id, v15, action);
          break;
        default:
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/city/city.cpp",
            "executeCityLevelupAction",
            164);
          v16 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(&v24, (const char (*)[36])off_26159CE0);
          common::milog::MiLogStream::operator<<<data::WorldAreaLevelupActionType,(data::WorldAreaLevelupActionType*)0>(
            v16,
            &action->type);
          common::milog::MiLogStream::~MiLogStream(&v24);
          break;
      }
    }
    __gnu_cxx::__normal_iterator<data::WorldAreaLevelupAction const*,std::vector<data::WorldAreaLevelupAction>>::operator++(&__for_begin);
  }
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 171: range 00000000175CACBC-00000000175CB7A6
void __fastcall City::levelupActionUnlockDungeonEntry(
        City *const this,
        Player *player,
        uint32_t scene_id,
        const data::WorldAreaLevelupAction *action)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  uint32_t v10; // esi
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // r14d
  std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  PlayerSceneComp *v17; // rdi
  common::milog::MiLogStream *v18; // rax
  uint32_t v19; // eax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  int v24; // r14d
  char *v25; // rsi
  int v26; // r14d
  uint32_t CityId; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rdx
  char v29; // cl
  uint32_t Level; // r14d
  __int64 v31; // rax
  char v32; // dl
  __int64 v33; // rdx
  __int64 v34; // rsi
  unsigned int v35; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rdx
  char v37; // cl
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rdx
  char v40; // cl
  Group *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-140h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-138h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-130h]
  const unsigned int *point_id; // [rsp+38h] [rbp-128h]
  std::shared_ptr<Config> v53; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v54; // [rsp+50h] [rbp-110h] BYREF
  char v55[240]; // [rsp+70h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 32 4 20 worktop_group_id:192 48 4 12 scene_id:170 64 16 13 scene_ptr:177 96 16 13 entry_ptr:18"
                        "6 128 16 13 group_ptr:202 160 16 11 evt_ptr:208";
  *(_QWORD *)(v4 + 16) = City::levelupActionUnlockDungeonEntry;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -202178560;
  *(_DWORD *)(v4 + 48) = scene_id;
  if ( std::vector<unsigned int>::empty(&action->param1_vec) )
  {
    common::milog::MiLogStream::create(
      &v54,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/city/city.cpp",
      "levelupActionUnlockDungeonEntry",
      174);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v54,
      (const char (*)[27])"action.param1_vec is empty");
    common::milog::MiLogStream::~MiLogStream(&v54);
  }
  else
  {
    SceneComp = (unsigned int)Player::getSceneComp(player);
    PlayerSceneComp::findScene((const PlayerSceneComp *const)(v4 + 64), SceneComp);
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v54,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/city/city.cpp",
        "levelupActionUnlockDungeonEntry",
        180);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             &v54,
             (const char (*)[21])"findScene scene_id: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream(&v54);
    }
    else
    {
      __for_range = &action->param1_vec;
      __for_begin._M_current = std::vector<unsigned int>::begin(&action->param1_vec)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(&action->param1_vec)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        point_id = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v53);
        v10 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v53)
            + 93080;
        if ( *(_BYTE *)(((unsigned __int64)point_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)point_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)point_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(point_id);
        }
        JsonConfigMgr::findScenePoint<data::DungeonEntry>(
          (const JsonConfigMgr *const)(v4 + 96),
          v10,
          *(_DWORD *)(v4 + 48));
        std::shared_ptr<Config>::~shared_ptr(&v53);
        if ( std::operator==<data::DungeonEntry>(0LL, (const std::shared_ptr<data::DungeonEntry> *)(v4 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v54,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/city/city.cpp",
            "levelupActionUnlockDungeonEntry",
            189);
          v11 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                  &v54,
                  (const char (*)[40])"findScenePoint<DungeonEntry> scene_id: ");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v11,
                  (const unsigned int *)(v4 + 48));
          v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])" point_id: ");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, point_id);
          common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v14, (const char (*)[8])" failed");
          common::milog::MiLogStream::~MiLogStream(&v54);
          v15 = 0;
        }
        else
        {
          v16 = std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          if ( *(_BYTE *)(((unsigned __int64)&v16->worktop_group_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v16->worktop_group_id >> 3) + 0x7FFF8000) <= 3 )
          {
            v16 = (std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v16->worktop_group_id);
          }
          *(_DWORD *)(v4 + 32) = v16->worktop_group_id;
          if ( *(_DWORD *)(v4 + 32) )
          {
            v19 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            Scene::findGroup((Scene *const)(v4 + 128), v19);
            if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v4 + 128), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v54,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/city/city.cpp",
                "levelupActionUnlockDungeonEntry",
                205);
              v20 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                      &v54,
                      (const char (*)[21])"findGroup scene_id: ");
              v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v20,
                      (const unsigned int *)(v4 + 48));
              v22 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v21,
                      (const char (*)[12])" group_id: ");
              v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v22,
                      (const unsigned int *)(v4 + 32));
              common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v23, (const char (*)[8])" failed");
              common::milog::MiLogStream::~MiLogStream(&v54);
              v24 = 0;
            }
            else
            {
              EventUtil::createEvent((data::EventType)(v4 + 160));
              v25 = (char *)(v4 + 160);
              if ( std::operator==<Event>(0LL, (const std::shared_ptr<Event> *)(v4 + 160)) )
              {
                common::milog::MiLogStream::create(
                  &v54,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/city/city.cpp",
                  "levelupActionUnlockDungeonEntry",
                  211);
                common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  &v54,
                  (const char (*)[18])"createEvent fails");
                common::milog::MiLogStream::~MiLogStream(&v54);
                v26 = 0;
              }
              else
              {
                CityId = City::getCityId(this);
                v28 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
                v29 = *(_BYTE *)(((unsigned __int64)&v28->param1 >> 3) + 0x7FFF8000);
                if ( v29 != 0 && (char)((((_BYTE)v28 + 44) & 7) + 3) >= v29 )
                {
                  LOBYTE(v25) = v29 != 0;
                  __asan_report_store4(&v28->param1, v25, v28);
                }
                v28->param1 = CityId;
                Level = City::getLevel(this);
                v31 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
                v32 = *(_BYTE *)(((unsigned __int64)(v31 + 48) >> 3) + 0x7FFF8000);
                LOBYTE(v25) = v32 != 0;
                v33 = (v32 != 0) & (unsigned __int8)(v32 <= 3);
                if ( (_BYTE)v33 )
                  v31 = __asan_report_store4(v31 + 48, v25, v33);
                *(_DWORD *)(v31 + 48) = Level;
                v34 = ((unsigned __int8)point_id & 7u) + 3;
                if ( *(_BYTE *)(((unsigned __int64)point_id >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)point_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)point_id >> 3)
                                                                             + 0x7FFF8000) )
                {
                  __asan_report_load4(point_id);
                }
                v35 = *point_id;
                v36 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
                v37 = *(_BYTE *)(((unsigned __int64)&v36->param3 >> 3) + 0x7FFF8000);
                if ( v37 != 0 && (char)((((_BYTE)v36 + 52) & 7) + 3) >= v37 )
                {
                  LOBYTE(v34) = v37 != 0;
                  __asan_report_store4(&v36->param3, v34, v36);
                }
                v36->param3 = v35;
                Uid = Player::getUid(player);
                v39 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
                v40 = *(_BYTE *)(((unsigned __int64)&v39->uid >> 3) + 0x7FFF8000);
                if ( v40 != 0 && (char)((((_BYTE)v39 + 60) & 7) + 3) >= v40 )
                {
                  LOBYTE(v34) = v40 != 0;
                  __asan_report_store4(&v39->uid, v34, v39);
                }
                v39->uid = Uid;
                v41 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                Group::handleEvent(v41, (EventPtr *)(v4 + 160));
                common::milog::MiLogStream::create(
                  &v54,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/city/city.cpp",
                  "levelupActionUnlockDungeonEntry",
                  220);
                v42 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        &v54,
                        (const char (*)[13])"unlockPoint ");
                v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, point_id);
                v44 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                        v43,
                        (const char (*)[19])" Event --> group: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v44,
                  (const unsigned int *)(v4 + 32));
                common::milog::MiLogStream::~MiLogStream(&v54);
                v26 = 1;
              }
              std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v4 + 160));
              v24 = v26 == 1 ? 2 : 1;
            }
            std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v4 + 128));
            if ( v24 )
              v15 = v24 == 2 ? 2 : 1;
            else
              v15 = 0;
          }
          else
          {
            v17 = Player::getSceneComp(player);
            if ( *(_BYTE *)(((unsigned __int64)point_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)point_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)point_id >> 3) + 0x7FFF8000) )
            {
              v17 = (PlayerSceneComp *)point_id;
              __asan_report_load4(point_id);
            }
            PlayerSceneComp::unlockPoint(v17, *(_DWORD *)(v4 + 48), *point_id, 1);
            common::milog::MiLogStream::create(
              &v54,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/city/city.cpp",
              "levelupActionUnlockDungeonEntry",
              197);
            v18 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    &v54,
                    (const char (*)[13])"unlockPoint ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, point_id);
            common::milog::MiLogStream::~MiLogStream(&v54);
            v15 = 0;
          }
        }
        std::shared_ptr<data::DungeonEntry>::~shared_ptr((std::shared_ptr<data::DungeonEntry> *const)(v4 + 96));
        if ( v15 )
        {
          if ( v15 != 2 )
            break;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 64));
  }
  if ( v55 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 225: range 00000000175CB7A8-00000000175CBF2F
void __fastcall City::levelupActionUnlockAirPortal(
        City *const this,
        Player *player,
        uint32_t scene_id,
        const data::WorldAreaLevelupAction *action)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v7; // rax
  _DWORD *v8; // rdx
  unsigned int v9; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // r14d
  std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  bool *p_unlocked; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v27; // r14
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-D8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-D0h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Config> v39; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v40; // [rsp+50h] [rbp-B0h] BYREF
  char v41[144]; // [rsp+70h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 12 point_id:231 48 4 12 scene_id:224 64 16 13 point_ptr:233";
  *(_QWORD *)(v4 + 16) = City::levelupActionUnlockAirPortal;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202178560;
  *(_DWORD *)(v4 + 48) = scene_id;
  if ( std::vector<unsigned int>::empty(&action->param1_vec) )
  {
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/city/city.cpp",
      "levelupActionUnlockAirPortal",
      228);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(&v40, (const char (*)[38])byte_2615A080);
    common::milog::MiLogStream::~MiLogStream(&v40);
  }
  else
  {
    __for_range = &action->param1_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(&action->param1_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&action->param1_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v7 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      *(_DWORD *)(v4 + 32) = *v8;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v39);
      v9 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
      JsonConfigMgr::findScenePoint<data::SceneTransPoint>(
        (const JsonConfigMgr *const)(v4 + 64),
        v9 + 93080,
        *(_DWORD *)(v4 + 48));
      std::shared_ptr<Config>::~shared_ptr(&v39);
      if ( std::operator==<data::SceneTransPoint>(0LL, (const std::shared_ptr<data::SceneTransPoint> *)(v4 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/city/city.cpp",
          "levelupActionUnlockAirPortal",
          236);
        v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v40, (const char (*)[11])"scene_id: ");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v4 + 48));
        v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])" point_id: ");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v4 + 32));
        common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v13, (const char (*)[17])byte_2615A120);
        common::milog::MiLogStream::~MiLogStream(&v40);
        v14 = 0;
      }
      else
      {
        v15 = std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        p_unlocked = &v15->unlocked;
        if ( *(_BYTE *)(((unsigned __int64)p_unlocked >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)p_unlocked & 7) >= *(_BYTE *)(((unsigned __int64)p_unlocked >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(p_unlocked);
        }
        if ( v15->unlocked )
        {
          common::milog::MiLogStream::create(
            &v40,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/city/city.cpp",
            "levelupActionUnlockAirPortal",
            241);
          v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v40, (const char (*)[11])"scene_id: ");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  (const unsigned int *)(v4 + 48));
          v19 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v18, (const char (*)[12])" point_id: ");
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v19,
                  (const unsigned int *)(v4 + 32));
          common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v20, (const char (*)[23])byte_2615A160);
          common::milog::MiLogStream::~MiLogStream(&v40);
          v14 = 0;
        }
        else
        {
          v21 = std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&v21->type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v21->type >> 3) + 0x7FFF8000) <= 3 )
          {
            v21 = (std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v21->type);
          }
          if ( v21->type == PORTAL )
          {
            v14 = 1;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v40,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/city/city.cpp",
              "levelupActionUnlockAirPortal",
              246);
            v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    &v40,
                    (const char (*)[11])"scene_id: ");
            v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v22,
                    (const unsigned int *)(v4 + 48));
            v24 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v23,
                    (const char (*)[12])" point_id: ");
            v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v24,
                    (const unsigned int *)(v4 + 32));
            common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v25, (const char (*)[23])byte_2615A1A0);
            common::milog::MiLogStream::~MiLogStream(&v40);
            v14 = 0;
          }
        }
      }
      std::shared_ptr<data::SceneTransPoint>::~shared_ptr((std::shared_ptr<data::SceneTransPoint> *const)(v4 + 64));
      if ( v14 != 1 )
        goto LABEL_26;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    SceneComp = Player::getSceneComp(player);
    if ( PlayerSceneComp::unlockPoint(SceneComp, *(_DWORD *)(v4 + 48), &action->param1_vec, 1) )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/city/city.cpp",
        "levelupActionUnlockAirPortal",
        253);
      v27 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v40, (const char (*)[6])"uid: ");
      *(_DWORD *)(v4 + 32) = Player::getUid(player);
      v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v4 + 32));
      v29 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              v28,
              (const char (*)[24])" unlockPoint scene_id: ");
      v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v4 + 48));
      v31 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v30, (const char (*)[10])" points: ");
      v32 = common::milog::MiLogStream::operator<<<unsigned int>(v31, &action->param1_vec);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v32, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream(&v40);
    }
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/city/city.cpp",
      "levelupActionUnlockAirPortal",
      255);
    v33 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v40, (const char (*)[18])"UnlockAirPortal: ");
    common::milog::MiLogStream::operator<<<unsigned int>(v33, &action->param1_vec);
    common::milog::MiLogStream::~MiLogStream(&v40);
  }
LABEL_26:
  if ( v41 == (char *)v4 )
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
};

// Line 259: range 00000000175CBF30-00000000175CC2B6
void __fastcall City::levelupActionActiveItem(
        City *const this,
        Player *player,
        uint32_t scene_id,
        uint32_t city_id,
        const data::WorldAreaLevelupAction *action)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v14; // rax
  uint32_t *v15; // rdx
  Scene *v16; // rax
  SceneBlockGroupComp *BlockGroupComp; // rax
  unsigned int val; // [rsp+28h] [rbp-B8h] BYREF
  uint32_t old_gadget_id; // [rsp+2Ch] [rbp-B4h]
  common::milog::MiLogStream v23; // [rsp+30h] [rbp-B0h] BYREF
  char v24[144]; // [rsp+50h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 12 scene_id:258 64 16 13 scene_ptr:260";
  *(_QWORD *)(v5 + 16) = City::levelupActionActiveItem;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202178560;
  *(_DWORD *)(v5 + 48) = scene_id;
  SceneComp = (unsigned int)Player::getSceneComp(player);
  PlayerSceneComp::findScene((const PlayerSceneComp *const)(v5 + 64), SceneComp);
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v5 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/city/city.cpp",
      "levelupActionActiveItem",
      263);
    v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v23, (const char (*)[6])"uid: ");
    val = Player::getUid(player);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" findScene ");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v12, (const char (*)[8])" failed");
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  else if ( std::vector<unsigned int>::size(&action->param1_vec) != 1
         && std::vector<unsigned int>::size(&action->param2_vec) != 1 )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/city/city.cpp",
      "levelupActionActiveItem",
      268);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(&v23, (const char (*)[35])byte_2615A360);
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  else
  {
    v14 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                &action->param1_vec,
                                                                                                0LL);
    v15 = v14;
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v14);
    }
    old_gadget_id = *v15;
    v16 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
    BlockGroupComp = Scene::getBlockGroupComp(v16);
    SceneBlockGroupComp::replaceAmberWindWithNewGadgetId(BlockGroupComp, city_id, old_gadget_id);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v5 + 64));
  if ( v24 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 276: range 00000000175CC2B8-00000000175CC84A
void __cdecl City::levelupActionNotifyGroup(
        City *const this,
        Player *player,
        uint32_t scene_id,
        uint32_t area_id,
        const data::WorldAreaLevelupAction *action)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  uint32_t SceneComp; // eax
  uint32_t v9; // eax
  char *v10; // rsi
  uint32_t CityId; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  char v13; // cl
  uint32_t Level; // r14d
  __int64 v15; // rax
  char v16; // dl
  __int64 v17; // rdx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v18; // rax
  _DWORD *v19; // rdx
  uint32_t v20; // eax
  common::milog::MiLogStream *v21; // rax
  Group *v22; // rax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-128h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-120h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-118h]
  common::milog::MiLogStream v27; // [rsp+40h] [rbp-110h] BYREF
  char v28[240]; // [rsp+60h] [rbp-F0h] BYREF

  v5 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "5 48 4 12 group_id:295 64 16 13 scene_ptr:277 96 16 12 area_ptr:282 128 16 11 evt_ptr:287 160 16"
                        " 13 group_ptr:297";
  *(_QWORD *)(v5 + 16) = City::levelupActionNotifyGroup;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -219021312;
  v7[536862723] = -219021312;
  v7[536862724] = -219021312;
  v7[536862725] = -202178560;
  SceneComp = (unsigned int)Player::getSceneComp(player);
  PlayerSceneComp::findScene((const PlayerSceneComp *const)(v5 + 64), SceneComp);
  if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v5 + 64)) )
  {
    v9 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
    Scene::findArea((Scene *const)(v5 + 96), v9);
    if ( !std::operator==<Area>(0LL, (const std::shared_ptr<Area> *)(v5 + 96)) )
    {
      EventUtil::createEvent((data::EventType)(v5 + 128));
      v10 = (char *)(v5 + 128);
      if ( std::operator==<Event>(0LL, (const std::shared_ptr<Event> *)(v5 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/city/city.cpp",
          "levelupActionNotifyGroup",
          290);
        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
          &v27,
          (const char (*)[38])"createEvent EVENT_NOTIFY_GROUP failed");
        common::milog::MiLogStream::~MiLogStream(&v27);
      }
      else
      {
        CityId = City::getCityId(this);
        v12 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
        v13 = *(_BYTE *)(((unsigned __int64)&v12->param1 >> 3) + 0x7FFF8000);
        if ( v13 != 0 && (char)((((_BYTE)v12 + 44) & 7) + 3) >= v13 )
        {
          LOBYTE(v10) = v13 != 0;
          __asan_report_store4(&v12->param1, v10, v12);
        }
        v12->param1 = CityId;
        Level = City::getLevel(this);
        v15 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
        v16 = *(_BYTE *)(((unsigned __int64)(v15 + 48) >> 3) + 0x7FFF8000);
        LOBYTE(v10) = v16 != 0;
        v17 = (v16 != 0) & (unsigned __int8)(v16 <= 3);
        if ( (_BYTE)v17 )
          v15 = __asan_report_store4(v15 + 48, v10, v17);
        *(_DWORD *)(v15 + 48) = Level;
        __for_range = &action->param1_vec;
        __for_begin._M_current = std::vector<unsigned int>::begin(&action->param1_vec)._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(&action->param1_vec)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v18 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
          v19 = v18;
          if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v18);
          }
          *(_DWORD *)(v5 + 48) = *v19;
          v20 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
          Scene::findGroup((Scene *const)(v5 + 160), v20);
          if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v5 + 160), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v27,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/city/city.cpp",
              "levelupActionNotifyGroup",
              300);
            v21 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    &v27,
                    (const char (*)[19])"findGroup failed: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v5 + 48));
            common::milog::MiLogStream::~MiLogStream(&v27);
          }
          else
          {
            v22 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
            Group::handleEvent(v22, (EventPtr *)(v5 + 128));
          }
          std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v5 + 160));
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
        }
      }
      std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v5 + 128));
    }
    std::shared_ptr<Area>::~shared_ptr((std::shared_ptr<Area> *const)(v5 + 96));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v5 + 64));
  if ( v28 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 309: range 00000000175CC84C-00000000175CCB38
void __cdecl City::logLevelupCity(City *const this, uint32_t scene_id, Player *player, uint32_t old_level)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  std::__shared_ptr_access<proto_log::PlayerLogBodyLevelupCity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyLevelupCity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyLevelupCity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyLevelupCity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyLevelupCity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  PlayerSceneComp *SceneComp; // rax
  uint32_t Level1AreaId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyLevelupCity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  PlayerSceneComp *v15; // rax
  uint32_t Level2AreaId; // eax
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-90h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-80h] BYREF
  char v21[112]; // [rsp+40h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 24 levelup_city_log_ptr:310";
  *(_QWORD *)(v4 + 16) = City::logLevelupCity;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto_log::PlayerLogBodyLevelupCity>();
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyLevelupCity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLevelupCity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto_log::PlayerLogBodyLevelupCity::set_city_id(v7, this->city_id_);
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyLevelupCity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLevelupCity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  proto_log::PlayerLogBodyLevelupCity::set_old_level(v8, old_level);
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyLevelupCity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLevelupCity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  proto_log::PlayerLogBodyLevelupCity::set_cur_level(v9, this->level_);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyLevelupCity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLevelupCity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  proto_log::PlayerLogBodyLevelupCity::set_scene_id(v10, scene_id);
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyLevelupCity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLevelupCity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  SceneComp = Player::getSceneComp(player);
  Level1AreaId = PlayerSceneComp::getLevel1AreaId(SceneComp);
  proto_log::PlayerLogBodyLevelupCity::set_level1_area_id(v11, Level1AreaId);
  v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyLevelupCity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLevelupCity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  v15 = Player::getSceneComp(player);
  Level2AreaId = PlayerSceneComp::getLevel2AreaId(v15);
  proto_log::PlayerLogBodyLevelupCity::set_level2_area_id(v14, Level2AreaId);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyLevelupCity,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyLevelupCity> *)(v4 + 32));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyLevelupCity>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyLevelupCity> *const)(v4 + 32));
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
