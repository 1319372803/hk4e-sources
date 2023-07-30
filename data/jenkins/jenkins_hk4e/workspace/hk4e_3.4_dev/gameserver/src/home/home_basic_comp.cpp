// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_basic_comp.cpp

// Line 31: range 0000000014582964-0000000014582B7C
int32_t __cdecl HomeBasicComp::fromBin(HomeBasicComp *const this, const proto::HomeDataBin *home_data_bin)
{
  uint64_t v2; // rax
  uint32_t v3; // edx
  const std::string *v4; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t v6; // esi
  common::milog::MiLogStream *v7; // rax
  uint64_t v8; // rax
  const proto::HomeBasicCompBin *proto_comp; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v11; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-30h] BYREF

  proto_comp = proto::HomeDataBin::basic_bin(home_data_bin);
  v2 = proto::HomeBasicCompBin::exp(proto_comp);
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
    v2 = __asan_report_store8(&this->exp_);
  this->exp_ = v2;
  v3 = proto::HomeBasicCompBin::level(proto_comp);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_);
  }
  this->level_ = v3;
  v4 = proto::HomeBasicCompBin::owner_nick_name[abi:cxx11](proto_comp);
  std::string::operator=(&this->owner_nick_name_, v4);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
  v6 = (int)(float)(ConstValueExcelConfigMgr::getInitHomeTime(&v5->design_config.txt_config_mgr.const_value_config_mgr)
                  * 60.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->game_time_);
  }
  this->game_time_ = v6;
  std::shared_ptr<Config>::~shared_ptr(&v11);
  common::milog::MiLogStream::create(
    &v12,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/home/home_basic_comp.cpp",
    "fromBin",
    40);
  v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v12, (const char (*)[14])" [HOME TIME]:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->game_time_);
  common::milog::MiLogStream::~MiLogStream(&v12);
  v8 = proto::HomeBasicCompBin::home_time_ms(proto_comp);
  if ( *(_BYTE *)(((unsigned __int64)&this->home_time_ms_ >> 3) + 0x7FFF8000) )
    v8 = __asan_report_store8(&this->home_time_ms_);
  this->home_time_ms_ = v8;
  return 0;
};

// Line 49: range 0000000014582B7E-0000000014582C7B
int32_t __cdecl HomeBasicComp::toBin(HomeBasicComp *const this, proto::HomeDataBin *home_data_bin)
{
  proto::HomeBasicCompBin *proto_comp; // [rsp+18h] [rbp-8h]

  proto_comp = proto::HomeDataBin::mutable_basic_bin(home_data_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  proto::HomeBasicCompBin::set_exp(proto_comp, this->exp_);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeBasicCompBin::set_level(proto_comp, this->level_);
  proto::HomeBasicCompBin::set_owner_nick_name(proto_comp, &this->owner_nick_name_);
  if ( *(_BYTE *)(((unsigned __int64)&this->home_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  proto::HomeBasicCompBin::set_home_time_ms(proto_comp, this->home_time_ms_);
  return 0;
};

// Line 63: range 0000000014582C7C-0000000014582D26
int32_t __cdecl HomeBasicComp::toSnapshotBin(HomeBasicComp *const this, proto::HomeSnapshotBin *snapshot_bin)
{
  proto::HomeBasicCompSnapshotBin *basic_bin; // [rsp+18h] [rbp-8h]

  basic_bin = proto::HomeSnapshotBin::mutable_basic_snapshot(snapshot_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeBasicCompSnapshotBin::set_level(basic_bin, this->level_);
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  proto::HomeBasicCompSnapshotBin::set_exp(basic_bin, this->exp_);
  return 0;
};

// Line 72: range 0000000014582D28-0000000014582E6D
int32_t __cdecl HomeBasicComp::init(HomeBasicComp *const this)
{
  __int64 HomeUid; // rcx
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( !this->level_ )
  {
    this->level_ = 1;
    common::milog::MiLogStream::create(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/home/home_basic_comp.cpp",
      "init",
      76);
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    HomeUid = Home::getHomeUid(this->home_);
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    common::milog::MiLogStream::operator()(&v3, "[HOME] init level to %u. home_uid:%u", this->level_, HomeUid);
    common::milog::MiLogStream::~MiLogStream(&v3);
  }
  return 0;
};

// Line 84: range 0000000014582E6E-0000000014582E7C
int32_t __cdecl HomeBasicComp::start(HomeBasicComp *const this)
{
  return 0;
};

// Line 89: range 0000000014582E7E-0000000014582E88
void __cdecl HomeBasicComp::onDailyRefresh(HomeBasicComp *const this)
{
  ;
};

// Line 93: range 0000000014582EFE-0000000014583B32
void __cdecl HomeBasicComp::addExp(
        HomeBasicComp *const this,
        uint64_t add_exp,
        proto_log::HomeAddExpReasonType reason_type,
        uint32_t reason_param)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  HomeWorldExcelConfigMgr *p_home_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  unsigned __int64 v12; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  uint32_t exp; // ecx
  __int64 v19; // rdi
  Home *v20; // r14
  Player *v21; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  Player *v31; // r14
  common::milog::MiLogStream *v32; // r14
  std::string v33; // [rsp+0h] [rbp-150h]
  __int64 reason_parama; // [rsp+8h] [rbp-148h]
  google::protobuf::uint64 add_expa; // [rsp+10h] [rbp-140h]
  HomeBasicComp *thisa; // [rsp+18h] [rbp-138h]
  unsigned int val; // [rsp+28h] [rbp-128h] BYREF
  uint32_t need_levelup_exp; // [rsp+2Ch] [rbp-124h]
  uint32_t level_before; // [rsp+30h] [rbp-120h]
  uint32_t max_home_level; // [rsp+34h] [rbp-11Ch]
  uint64_t real_add_exp; // [rsp+38h] [rbp-118h]
  uint64_t remain_exp; // [rsp+40h] [rbp-110h]
  uint64_t exp_before; // [rsp+48h] [rbp-108h]
  const data::HomeworldLevelExcelConfig *level_config_ptr; // [rsp+50h] [rbp-100h]
  uint64_t old_remain_exp; // [rsp+58h] [rbp-F8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+60h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> v47; // [rsp+70h] [rbp-E0h] BYREF
  common::milog::MiLogStream v48; // [rsp+80h] [rbp-D0h] BYREF
  char v49[176]; // [rsp+A0h] [rbp-B0h] BYREF

  *(&v33._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v33._anon_0._M_allocated_capacity = add_exp;
  HIDWORD(v33._M_string_length) = reason_type;
  LODWORD(v33._M_string_length) = reason_param;
  v4 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 1 10 holder:149 48 4 11 home_uid:99 64 16 20 owner_player_ptr:146 96 16 11 log_ptr:151";
  *(_QWORD *)(v4 + 16) = HomeBasicComp::addExp;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556927;
  v6[536862722] = -219021312;
  v6[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  level_before = this->level_;
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  exp_before = this->exp_;
  real_add_exp = 0LL;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v47);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v47);
  max_home_level = HomeWorldExcelConfigMgr::getMaxHomeLevel(&v7->design_config.txt_config_mgr.home_config_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v47);
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v4 + 48) = Home::getHomeUid(this->home_);
  remain_exp = add_exp;
  while ( remain_exp )
  {
    if ( *(_BYTE *)(((*(&v33._anon_0._M_allocated_capacity + 1) + 40) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((*(&v33._anon_0._M_allocated_capacity + 1) + 40) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( max_home_level <= *(_DWORD *)(*(&v33._anon_0._M_allocated_capacity + 1) + 40) )
      break;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v47);
    p_home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v47)->design_config.txt_config_mgr.home_config_mgr;
    if ( *(_BYTE *)(((*(&v33._anon_0._M_allocated_capacity + 1) + 40) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((*(&v33._anon_0._M_allocated_capacity + 1) + 40) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    level_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeworldLevelExcelConfig(
                         p_home_config_mgr,
                         *(_DWORD *)(*(&v33._anon_0._M_allocated_capacity + 1) + 40));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v47);
    if ( !level_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_basic_comp.cpp",
        "addExp",
        106);
      v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v48,
             (const char (*)[33])"level_config_ptr is null. level:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v9,
              (const unsigned int *)(*(&v33._anon_0._M_allocated_capacity + 1) + 40));
      v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" home_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v48);
      goto LABEL_55;
    }
    need_levelup_exp = 0;
    if ( *(_BYTE *)(((*(&v33._anon_0._M_allocated_capacity + 1) + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v12 = *(_QWORD *)(*(&v33._anon_0._M_allocated_capacity + 1) + 32);
    if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( v12 <= level_config_ptr->exp )
    {
      if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      exp = level_config_ptr->exp;
      if ( *(_BYTE *)(((*(&v33._anon_0._M_allocated_capacity + 1) + 32) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      need_levelup_exp = exp - *(_QWORD *)(*(&v33._anon_0._M_allocated_capacity + 1) + 32);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_basic_comp.cpp",
        "addExp",
        113);
      v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v48, (const char (*)[9])"cur_exp:");
      v14 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v13,
              (const unsigned __int64 *)(*(&v33._anon_0._M_allocated_capacity + 1) + 32));
      v15 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              v14,
              (const char (*)[26])" > level_config_ptr->exp:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &level_config_ptr->exp);
      v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v16, (const char (*)[11])" home_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v48);
    }
    old_remain_exp = remain_exp;
    if ( remain_exp < need_levelup_exp )
    {
      if ( *(_BYTE *)(((*(&v33._anon_0._M_allocated_capacity + 1) + 32) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_QWORD *)(*(&v33._anon_0._M_allocated_capacity + 1) + 32) += remain_exp;
      remain_exp = 0LL;
    }
    else
    {
      remain_exp -= need_levelup_exp;
      HomeBasicComp::levelUp(*((HomeBasicComp *const *)&v33._anon_0._M_allocated_capacity + 1));
    }
    real_add_exp += old_remain_exp - remain_exp;
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/home/home_basic_comp.cpp",
      "addExp",
      134);
    if ( *(_BYTE *)(((*(&v33._anon_0._M_allocated_capacity + 1) + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v19 = *(_QWORD *)(*(&v33._anon_0._M_allocated_capacity + 1) + 32);
    if ( *(_BYTE *)(((*(&v33._anon_0._M_allocated_capacity + 1) + 40) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((*(&v33._anon_0._M_allocated_capacity + 1) + 40) >> 3) + 0x7FFF8000) <= 3 )
    {
      v19 = *(&v33._anon_0._M_allocated_capacity + 1) + 40;
      __asan_report_load4();
    }
    common::milog::MiLogStream::operator()(
      &v48,
      "home add exp. home_uid:%u add_exp:%ld cur_level:%u cur_exp:%lu remain_exp:%lu",
      *(unsigned int *)(v4 + 48),
      old_remain_exp - remain_exp,
      *(unsigned int *)(*(&v33._anon_0._M_allocated_capacity + 1) + 40),
      v19,
      remain_exp);
    common::milog::MiLogStream::~MiLogStream(&v48);
  }
  if ( real_add_exp )
  {
    if ( *(_BYTE *)(((*(&v33._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v20 = *(Home **)(*(&v33._anon_0._M_allocated_capacity + 1) + 24);
    std::function<ForeachPolicy ()(Player &)>::function<HomeBasicComp::addExp(unsigned long,proto_log::HomeAddExpReasonType,unsigned int)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v48,
      (HomeBasicComp::addExp::<lambda(Player&)>)*(&v33._anon_0._M_allocated_capacity + 1));
    Home::foreachPlayer(v20, (std::function<ForeachPolicy(Player&)> *)&v48);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v48);
    if ( *(_BYTE *)(((*(&v33._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Home::findOwnerPlayer((Home *const)(v4 + 64));
    if ( std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::operator bool((const std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2> *const)(v4 + 64)) )
    {
      v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      BasicComp = Player::getBasicComp(v21);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v48, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0xCEBu, v33);
      std::string::~string(&v48);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyHomeAddExp>();
      v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAddExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      proto_log::PlayerLogBodyHomeAddExp::set_expected_add_exp(v23, add_expa);
      v24 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAddExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      proto_log::PlayerLogBodyHomeAddExp::set_real_add_exp(v24, real_add_exp);
      v25 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAddExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      proto_log::PlayerLogBodyHomeAddExp::set_level_before(v25, level_before);
      v26 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAddExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      proto_log::PlayerLogBodyHomeAddExp::set_exp_before(v26, exp_before);
      v27 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAddExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->level_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->level_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyHomeAddExp::set_level_after(v27, thisa->level_);
      v28 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAddExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->exp_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      proto_log::PlayerLogBodyHomeAddExp::set_exp_after(v28, thisa->exp_);
      v29 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAddExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      proto_log::PlayerLogBodyHomeAddExp::set_reason_type(v29, HIDWORD(reason_parama));
      v30 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAddExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      proto_log::PlayerLogBodyHomeAddExp::set_reason_param(v30, reason_parama);
      v31 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&v47, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyHomeAddExp,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyHomeAddExp> *)(v4 + 96));
      Player::printStatLog(v31, &p_body_ptr, &v47, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v47);
      std::shared_ptr<proto_log::PlayerLogBodyHomeAddExp>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyHomeAddExp> *const)(v4 + 96));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_basic_comp.cpp",
        "addExp",
        164);
      v32 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v48,
              (const char (*)[40])"[HOME] not find owner player. home_uid:");
      if ( *(_BYTE *)(((*(&v33._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Home::getHomeUid(*(const Home *const *)(*(&v33._anon_0._M_allocated_capacity + 1) + 24));
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &val);
      common::milog::MiLogStream::~MiLogStream(&v48);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 64));
  }
LABEL_55:
  if ( v49 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 140: range 0000000014582E8A-0000000014582EFC
ForeachPolicy __cdecl HomeBasicComp::addExp(unsigned long,proto_log::HomeAddExpReasonType,unsigned int)::{lambda(Player &)#1}::operator()(
        const HomeBasicComp::addExp::<lambda(Player&)> *const __closure,
        Player *player)
{
  __int64 this; // rax

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this = (__int64)__closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->home_ >> 3) + 0x7FFF8000) )
    this = __asan_report_load8();
  Home::notifyHomeBasicInfo(*(Home *const *)(this + 24), player);
  return 0;
};

// Line 170: range 0000000014583BA8-000000001458431F
// local variable allocation has failed, the output may be wrong!
void __cdecl HomeBasicComp::levelUp(HomeBasicComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // r14
  Home *v7; // r14
  HomeSceneComp *SceneComp; // rcx
  Player *v9; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLevelUp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLevelUp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  uint32_t CurModuleId; // eax
  Player *v14; // r14
  Player *v15; // rax
  PlayerEventComp *EventComp; // r14
  common::milog::MiLogStream *v17; // r14
  std::string v18; // [rsp+0h] [rbp-110h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-D0h] BYREF
  char v22[176]; // [rsp+60h] [rbp-B0h] BYREF

  v18._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 10 holder:188 64 16 20 owner_player_ptr:185 96 16 11 log_ptr:190";
  *(_QWORD *)(v1 + 16) = HomeBasicComp::levelUp;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  if ( *(_BYTE *)(((v18._M_string_length + 40) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v18._M_string_length + 40) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *((_DWORD *)&v18._anon_0._M_allocated_capacity + 3) = (*(_DWORD *)(v18._M_string_length + 40))++;
  if ( *(_BYTE *)(((v18._M_string_length + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v18._M_string_length + 32);
  *(_QWORD *)(v18._M_string_length + 32) = 0LL;
  common::milog::MiLogStream::create(
    &v21,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/home/home_basic_comp.cpp",
    "levelUp",
    175);
  v4 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
         &v21,
         (const char (*)[27])"[HOME] levelup. new_level:");
  v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
         v4,
         (const unsigned int *)(v18._M_string_length + 40));
  v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v5, (const char (*)[11])" home_uid:");
  if ( *(_BYTE *)(((v18._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *((_DWORD *)&v18._anon_0._M_allocated_capacity + 2) = Home::getHomeUid(*(const Home *const *)(v18._M_string_length + 24));
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
    v6,
    (const unsigned int *)&v18._anon_0._M_allocated_capacity + 2);
  common::milog::MiLogStream::~MiLogStream(&v21);
  if ( *(_BYTE *)(((v18._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = *(Home **)(v18._M_string_length + 24);
  std::function<ForeachPolicy ()(Player &)>::function<HomeBasicComp::levelUp(void)::{lambda(Player &)#1},void,void>(
    (std::function<ForeachPolicy(Player&)> *const)&v21,
    (HomeBasicComp::levelUp::<lambda(Player&)>)v18._M_string_length);
  Home::foreachPlayer(v7, (std::function<ForeachPolicy(Player&)> *)&v21);
  std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v21);
  if ( *(_BYTE *)(((v18._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Home::getSceneComp(*(Home *const *)(v18._M_string_length + 24));
  if ( *(_BYTE *)(((v18._M_string_length + 40) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v18._M_string_length + 40) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  HomeSceneComp::onHomeLevelChange(
    SceneComp,
    *((uint32_t *)&v18._anon_0._M_allocated_capacity + 3),
    *(_DWORD *)(v18._M_string_length + 40));
  if ( *(_BYTE *)(((v18._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Home::findOwnerPlayer((Home *const)(v1 + 64));
  if ( std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::operator bool((const std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2> *const)(v1 + 64)) )
  {
    v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    BasicComp = Player::getBasicComp(v9);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v21, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0xCECu, v18);
    std::string::~string(&v21);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyHomeLevelUp>();
    v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLevelUp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLevelUp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( *(_BYTE *)(((v18._M_string_length + 40) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v18._M_string_length + 40) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyHomeLevelUp::set_level_after(v11, *(_DWORD *)(v18._M_string_length + 40));
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLevelUp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLevelUp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( *(_BYTE *)(((v18._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    CurModuleId = Home::getCurModuleId(*(Home *const *)(v18._M_string_length + 24));
    proto_log::PlayerLogBodyHomeLevelUp::set_module_id(v12, CurModuleId);
    v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyHomeLevelUp,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyHomeLevelUp> *)(v1 + 96));
    Player::printStatLog(v14, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    EventComp = Player::getEventComp(v15);
    common::tools::perf::make_shared<HomeLevelEvent,unsigned int &>(
      (unsigned int *)&p_body_ptr,
      (unsigned int *)(v18._M_string_length + 40));
    std::shared_ptr<BaseEvent>::shared_ptr<HomeLevelEvent,void>(
      (std::shared_ptr<BaseEvent> *const)&p_body_ext_ptr,
      (std::shared_ptr<HomeLevelEvent> *)&p_body_ptr);
    PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&p_body_ext_ptr);
    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&p_body_ext_ptr);
    std::shared_ptr<HomeLevelEvent>::~shared_ptr((std::shared_ptr<HomeLevelEvent> *const)&p_body_ptr);
    std::shared_ptr<proto_log::PlayerLogBodyHomeLevelUp>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyHomeLevelUp> *const)(v1 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_basic_comp.cpp",
      "levelUp",
      199);
    v17 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            &v21,
            (const char (*)[40])"[HOME] not find owner player. home_uid:");
    if ( *(_BYTE *)(((v18._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *((_DWORD *)&v18._anon_0._M_allocated_capacity + 2) = Home::getHomeUid(*(const Home *const *)(v18._M_string_length
                                                                                                + 24));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v17,
      (const unsigned int *)&v18._anon_0._M_allocated_capacity + 2);
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
  if ( v22 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 177: range 0000000014583B34-0000000014583BA6
ForeachPolicy __cdecl HomeBasicComp::levelUp(void)::{lambda(Player &)#1}::operator()(
        const HomeBasicComp::levelUp::<lambda(Player&)> *const __closure,
        Player *player)
{
  __int64 this; // rax

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this = (__int64)__closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->home_ >> 3) + 0x7FFF8000) )
    this = __asan_report_load8();
  Home::notifyHomeBasicInfo(*(Home *const *)(this + 24), player);
  return 0;
};

// Line 204: range 0000000014584394-00000000145847D5
__int64 __fastcall HomeBasicComp::setLevelByGm(HomeBasicComp *const this, uint32_t level)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  Home *home; // r14
  HomeSceneComp *SceneComp; // rax
  Player *v10; // rax
  PlayerEventComp *EventComp; // r14
  __int64 result; // rax
  uint32_t old_level; // [rsp+14h] [rbp-DCh]
  const data::HomeworldLevelExcelConfig *level_config_ptr; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<HomeLevelEvent> __r; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<Config> v16; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 9 level:203 64 16 20 owner_player_ptr:222";
  *(_QWORD *)(v2 + 16) = HomeBasicComp::setLevelByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = level;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
  level_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeworldLevelExcelConfig(
                       &v5->design_config.txt_config_mgr.home_config_mgr,
                       *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v16);
  if ( level_config_ptr )
  {
    old_level = HomeBasicComp::getLevel(this);
    HomeBasicComp::setLevel(this, *(_DWORD *)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    home = this->home_;
    std::function<ForeachPolicy ()(Player &)>::function<HomeBasicComp::setLevelByGm(unsigned int)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v17,
      (HomeBasicComp::setLevelByGm::<lambda(Player&)>)this);
    Home::foreachPlayer(home, (std::function<ForeachPolicy(Player&)> *)&v17);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v17);
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = Home::getSceneComp(this->home_);
    HomeSceneComp::onHomeLevelChange(SceneComp, old_level, *(_DWORD *)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Home::findOwnerPlayer((Home *const)(v2 + 64));
    if ( std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::operator bool((const std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2> *const)(v2 + 64)) )
    {
      v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      EventComp = Player::getEventComp(v10);
      common::tools::perf::make_shared<HomeLevelEvent,unsigned int &>((unsigned int *)&__r, &this->level_);
      std::shared_ptr<BaseEvent>::shared_ptr<HomeLevelEvent,void>((std::shared_ptr<BaseEvent> *const)&v16, &__r);
      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v16);
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v16);
      std::shared_ptr<HomeLevelEvent>::~shared_ptr(&__r);
    }
    v7 = 0;
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/home/home_basic_comp.cpp",
      "setLevelByGm",
      208);
    v6 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v17,
           (const char (*)[50])"[HOME] gm setLevelByGm can not find config level:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v17);
    v7 = -1;
  }
  result = v7;
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 215: range 0000000014584320-0000000014584392
ForeachPolicy __cdecl HomeBasicComp::setLevelByGm(unsigned int)::{lambda(Player &)#1}::operator()(
        const HomeBasicComp::setLevelByGm::<lambda(Player&)> *const __closure,
        Player *player)
{
  __int64 this; // rax

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this = (__int64)__closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->home_ >> 3) + 0x7FFF8000) )
    this = __asan_report_load8();
  Home::notifyHomeBasicInfo(*(Home *const *)(this + 24), player);
  return 0;
};

// Line 231: range 00000000145847D6-00000000145849C4
void __cdecl HomeBasicComp::notifyGameTime(const HomeBasicComp *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<proto::PlayerGameTimeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rcx
  std::__shared_ptr_access<proto::PlayerGameTimeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  uint32_t HomeUid; // eax
  std::shared_ptr<proto::PlayerGameTimeNotify> __r; // [rsp+10h] [rbp-80h] BYREF
  char v9[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 19 time_notify_ptr:232";
  *(_QWORD *)(v2 + 16) = HomeBasicComp::notifyGameTime;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::PlayerGameTimeNotify>();
  v5 = std::__shared_ptr_access<proto::PlayerGameTimeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerGameTimeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::PlayerGameTimeNotify::set_game_time(v5, this->game_time_);
  v6 = std::__shared_ptr_access<proto::PlayerGameTimeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerGameTimeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  HomeUid = Home::getHomeUid(this->home_);
  proto::PlayerGameTimeNotify::set_uid(v6, HomeUid);
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::PlayerGameTimeNotify>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::PlayerGameTimeNotify>::~shared_ptr((std::shared_ptr<proto::PlayerGameTimeNotify> *const)(v2 + 32));
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 239: range 00000000145849C6-00000000145849D9
void __cdecl HomeBasicComp::notifyHomeTime(const HomeBasicComp *const this, bool is_paused, uint64_t pausable_time_ms)
{
  ;
};

// Line 244: range 00000000145849DA-0000000014584A15
void __cdecl HomeBasicComp::onGameTimer(HomeBasicComp *const this, uint64_t now_ms)
{
  HomeBasicComp::getGameTime(this);
  HomeBasicComp::notifyGameTimeChange(this);
  HomeBasicComp::tryStartGameTimer(this, 0);
};

// Line 251: range 0000000014584A16-0000000014584B4F
void __cdecl HomeBasicComp::updateGameTime(HomeBasicComp *const this)
{
  uint32_t v1; // edx
  uint32_t now; // [rsp+18h] [rbp-8h]
  unsigned int diff_time; // [rsp+1Ch] [rbp-4h]

  now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_game_time_update_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_game_time_update_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->last_game_time_update_time_ && now > this->last_game_time_update_time_ )
  {
    diff_time = now - this->last_game_time_update_time_;
    if ( *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v1 = SAFE_ADD<unsigned int,unsigned int>(this->game_time_, diff_time);
    if ( *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->game_time_);
    }
    this->game_time_ = v1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->last_game_time_update_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_game_time_update_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_game_time_update_time_);
  }
  this->last_game_time_update_time_ = now;
};

// Line 262: range 0000000014584B50-0000000014584B5A
void __cdecl HomeBasicComp::onNewHome(HomeBasicComp *const this)
{
  ;
};

// Line 266: range 0000000014584B5C-0000000014585135
__int64 __fastcall HomeBasicComp::setGameTime(
        HomeBasicComp *const this,
        uint32_t game_time,
        uint32_t extra_days,
        bool is_force_set)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  unsigned int v15; // eax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  uint32_t v20; // ecx
  uint32_t Now; // esi
  uint32_t new_game_time; // [rsp+2Ch] [rbp-E4h]
  std::shared_ptr<Config> v24; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-D0h] BYREF
  char v26[176]; // [rsp+60h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 20 game_day_seconds:267 64 4 19 cur_day_seconds:276 80 4 19 new_day_seconds:277 96 4 13 game_time:265";
  *(_QWORD *)(v4 + 16) = HomeBasicComp::setGameTime;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -202116348;
  *(_DWORD *)(v4 + 96) = game_time;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v24);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
  *(_DWORD *)(v4 + 48) = ConstValueExcelConfigMgr::getGameDaySeconds(&v7->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v24);
  if ( *(_DWORD *)(v4 + 48) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->game_time_ > *(_DWORD *)(v4 + 96) )
    {
      *(_DWORD *)(v4 + 64) = this->game_time_ % *(_DWORD *)(v4 + 48);
      *(_DWORD *)(v4 + 80) = *(_DWORD *)(v4 + 96) % *(_DWORD *)(v4 + 48);
      if ( *(_DWORD *)(v4 + 80) < *(_DWORD *)(v4 + 64) )
        *(_DWORD *)(v4 + 80) += *(_DWORD *)(v4 + 48);
      if ( *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      new_game_time = *(_DWORD *)(v4 + 80) - *(_DWORD *)(v4 + 64) + this->game_time_;
      if ( new_game_time < this->game_time_ )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/home/home_basic_comp.cpp",
          "setGameTime",
          287);
        v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v25, (const char (*)[12])"game_time_:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->game_time_);
        v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v11,
                (const char (*)[18])" cur_day_seconds:");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v4 + 64));
        v14 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v13,
                (const char (*)[18])" new_day_seconds:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream(&v25);
      }
      else
      {
        *(_DWORD *)(v4 + 96) = new_game_time;
      }
    }
    v15 = SAFE_MULTIPLY<unsigned int,unsigned int>(extra_days, *(_DWORD *)(v4 + 48));
    *(_DWORD *)(v4 + 96) = SAFE_ADD<unsigned int,unsigned int>(*(_DWORD *)(v4 + 96), v15);
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/home/home_basic_comp.cpp",
      "setGameTime",
      292);
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(&v25, &this->game_time_);
    v17 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v16, (const char (*)[6])" ==> ");
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 96));
    v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v4 + 80) = Home::getHomeUid(this->home_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v4 + 80));
    common::milog::MiLogStream::~MiLogStream(&v25);
    v20 = *(_DWORD *)(v4 + 96);
    if ( *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->game_time_);
    }
    this->game_time_ = v20;
    Now = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&this->last_game_time_update_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_game_time_update_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->last_game_time_update_time_);
    }
    this->last_game_time_update_time_ = Now;
    HomeBasicComp::notifyGameTimeChange(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    HomeBasicComp::tryStartGameTimer(this, this->game_time_);
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_basic_comp.cpp",
      "setGameTime",
      270);
    v8 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v25, (const char (*)[19])" game_day_seconds:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v25);
    result = 0xFFFFFFFFLL;
  }
  if ( v26 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 303: range 0000000014585136-000000001458532D
void __cdecl HomeBasicComp::notifyGameTimeChange(const HomeBasicComp *const this)
{
  proto::PlayerGameTimeNotify *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  uint32_t HomeUid; // eax
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (proto::PlayerGameTimeNotify *)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = (proto::PlayerGameTimeNotify *)v2;
  }
  v1->_vptr_MessageLite = (int (**)(...))1102416563;
  v1->_internal_metadata_.ptr_ = "1 32 32 15 time_notify:304";
  *(_QWORD *)&v1->is_home_ = HomeBasicComp::notifyGameTimeChange;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  proto::PlayerGameTimeNotify::PlayerGameTimeNotify(v1 + 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::PlayerGameTimeNotify::set_game_time(v1 + 1, this->game_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  HomeUid = Home::getHomeUid(this->home_);
  proto::PlayerGameTimeNotify::set_uid(v1 + 1, HomeUid);
  proto::PlayerGameTimeNotify::set_is_home(v1 + 1, 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Home::notifyAllPlayer<proto::PlayerGameTimeNotify>(this->home_, v1 + 1, 0);
  proto::PlayerGameTimeNotify::~PlayerGameTimeNotify(v1 + 1);
  if ( v5 == (char *)v1 )
  {
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v1->_vptr_MessageLite = (int (**)(...))1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 314: range 000000001458532E-00000000145856D1
void __cdecl HomeBasicComp::tryStartGameTimer(HomeBasicComp *const this, uint32_t game_time)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  uint32_t game_timea; // [rsp+4h] [rbp-CCh]
  std::shared_ptr<Config> v12; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-A0h] BYREF
  char v14[128]; // [rsp+50h] [rbp-80h] BYREF

  game_timea = game_time;
  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 20 game_day_seconds:321 64 4 21 game_hour_seconds:322";
  *(_QWORD *)(v2 + 16) = HomeBasicComp::tryStartGameTimer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  if ( HomeBasicComp::isGameTimeRunnable(this) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v12);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
    *(_DWORD *)(v2 + 48) = ConstValueExcelConfigMgr::getGameDaySeconds(&v5->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v12);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v12);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
    *(_DWORD *)(v2 + 64) = ConstValueExcelConfigMgr::getGameHourSeconds(&v6->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v12);
    if ( *(_DWORD *)(v2 + 48) && *(_DWORD *)(v2 + 64) )
    {
      HomeBasicComp::stopGameTimer(this);
      if ( !game_time )
        game_timea = HomeBasicComp::getGameTime(this);
      if ( HomeUnixTimer::startS(
             &this->gametime_timer_,
             *(_DWORD *)(v2 + 64) - game_timea % *(_DWORD *)(v2 + 64),
             0,
             "./src/home/home_basic_comp.cpp",
             "tryStartGameTimer",
             336) )
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/home/home_basic_comp.cpp",
          "tryStartGameTimer",
          338);
        v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                &v13,
                (const char (*)[15])"addTimer fails");
        if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::milog::MiLogStream::operator<<<Home,(Home*)0>(v10, this->home_);
        common::milog::MiLogStream::~MiLogStream(&v13);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_basic_comp.cpp",
        "tryStartGameTimer",
        325);
      v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             &v13,
             (const char (*)[18])"game_day_seconds:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      v9 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
             v8,
             (const char (*)[20])" game_hour_seconds:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 344: range 00000000145856D2-00000000145856F0
void __cdecl HomeBasicComp::stopGameTimer(HomeBasicComp *const this)
{
  common::tools::MiTimer::cancel(&this->gametime_timer_);
};

// Line 349: range 00000000145856F2-0000000014585742
bool __cdecl HomeBasicComp::isGameTimeRunnable(const HomeBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_paused_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_paused_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_paused_);
  }
  return !this->is_paused_;
};

// Line 355: range 0000000014585744-00000000145857A7
uint32_t __cdecl HomeBasicComp::getGameTime(HomeBasicComp *const this)
{
  if ( HomeBasicComp::isGameTimeRunnable(this) )
    HomeBasicComp::updateGameTime(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->game_time_;
};
