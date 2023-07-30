// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/player_login_comp.cpp

// Line 26: range 00000000179A3454-00000000179A35D3
int32_t __cdecl PlayerLoginComp::fromBin(PlayerLoginComp *const this, const proto::PlayerDataBin *player_data_bin)
{
  int v2; // eax
  __int64 login_refresh_time; // rdx
  char v4; // al
  int v5; // eax
  __int64 recv_questionnaire_mail_time; // rdx
  char v7; // al
  std::unordered_set<unsigned int>::value_type __x; // [rsp+1Ch] [rbp-24h] BYREF
  int32_t idx; // [rsp+20h] [rbp-20h]
  int32_t idx_0; // [rsp+24h] [rbp-1Ch]
  const proto::PlayerLoginCompBin *proto_comp; // [rsp+28h] [rbp-18h]

  proto_comp = proto::PlayerDataBin::login_bin(player_data_bin);
  std::unordered_set<unsigned int>::clear(&this->taken_login_reward_config_set_);
  for ( idx = 0; ; ++idx )
  {
    v2 = proto::PlayerLoginCompBin::taken_login_reward_config_list_size(proto_comp);
    if ( idx >= v2 )
      break;
    __x = proto::PlayerLoginCompBin::taken_login_reward_config_list(proto_comp, idx);
    player_data_bin = (const proto::PlayerDataBin *)&__x;
    std::unordered_set<unsigned int>::insert(&this->taken_login_reward_config_set_, &__x);
  }
  login_refresh_time = proto::PlayerLoginCompBin::last_login_refresh_time(proto_comp);
  v4 = *(_BYTE *)(((unsigned __int64)&this->last_login_refresh_time_ >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(player_data_bin) = v4 != 0;
    __asan_report_store4(&this->last_login_refresh_time_, player_data_bin, login_refresh_time);
  }
  this->last_login_refresh_time_ = login_refresh_time;
  std::unordered_set<unsigned int>::clear(&this->recv_questionnaire_mail_config_set_);
  for ( idx_0 = 0; ; ++idx_0 )
  {
    v5 = proto::PlayerLoginCompBin::recv_questionnaire_mail_config_list_size(proto_comp);
    if ( idx_0 >= v5 )
      break;
    __x = proto::PlayerLoginCompBin::recv_questionnaire_mail_config_list(proto_comp, idx_0);
    player_data_bin = (const proto::PlayerDataBin *)&__x;
    std::unordered_set<unsigned int>::insert(&this->recv_questionnaire_mail_config_set_, &__x);
  }
  recv_questionnaire_mail_time = proto::PlayerLoginCompBin::last_recv_questionnaire_mail_time(proto_comp);
  v7 = *(_BYTE *)(((unsigned __int64)&this->last_recv_questionnaire_mail_time_ >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(player_data_bin) = v7 != 0;
    __asan_report_store4(&this->last_recv_questionnaire_mail_time_, player_data_bin, recv_questionnaire_mail_time);
  }
  this->last_recv_questionnaire_mail_time_ = recv_questionnaire_mail_time;
  return 0;
};

// Line 46: range 00000000179A35D4-00000000179A37EF
int32_t __cdecl PlayerLoginComp::toBin(PlayerLoginComp *const this, proto::PlayerDataBin *player_data_bin)
{
  unsigned int *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  unsigned int *v4; // rax
  google::protobuf::uint32 *v5; // rdx
  std::unordered_set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-28h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-20h] BYREF
  proto::PlayerLoginCompBin *proto_comp; // [rsp+28h] [rbp-18h]
  std::unordered_set<unsigned int> *__for_range; // [rsp+30h] [rbp-10h]
  std::unordered_set<unsigned int> *__for_range_0; // [rsp+38h] [rbp-8h]

  proto_comp = proto::PlayerDataBin::mutable_login_bin(player_data_bin);
  __for_range = &this->taken_login_reward_config_set_;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&this->taken_login_reward_config_set_)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&this->taken_login_reward_config_set_)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v2 = (unsigned int *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::PlayerLoginCompBin::add_taken_login_reward_config_list(proto_comp, *v3);
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->last_login_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_login_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_login_refresh_time_);
  }
  proto::PlayerLoginCompBin::set_last_login_refresh_time(proto_comp, this->last_login_refresh_time_);
  __for_range_0 = &this->recv_questionnaire_mail_config_set_;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&this->recv_questionnaire_mail_config_set_)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v4 = (unsigned int *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    proto::PlayerLoginCompBin::add_recv_questionnaire_mail_config_list(proto_comp, *v5);
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->last_recv_questionnaire_mail_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_recv_questionnaire_mail_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_recv_questionnaire_mail_time_);
  }
  proto::PlayerLoginCompBin::set_last_recv_questionnaire_mail_time(proto_comp, this->last_recv_questionnaire_mail_time_);
  return 0;
};

// Line 67: range 00000000179A37F0-00000000179A380E
void __cdecl PlayerLoginComp::clearLoginRewardHistoryGm(PlayerLoginComp *const this)
{
  std::unordered_set<unsigned int>::clear(&this->taken_login_reward_config_set_);
};

// Line 72: range 00000000179A3810-00000000179A3871
void __cdecl PlayerLoginComp::clearRecvQuestionnaireMailHistoryByGM(PlayerLoginComp *const this)
{
  __int64 v1; // rsi
  uint32_t *p_last_recv_questionnaire_mail_time; // rdx

  std::unordered_set<unsigned int>::clear(&this->recv_questionnaire_mail_config_set_);
  p_last_recv_questionnaire_mail_time = &this->last_recv_questionnaire_mail_time_;
  if ( *(_BYTE *)(((unsigned __int64)p_last_recv_questionnaire_mail_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_last_recv_questionnaire_mail_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_recv_questionnaire_mail_time_, v1, p_last_recv_questionnaire_mail_time);
  }
  this->last_recv_questionnaire_mail_time_ = 0;
};

// Line 78: range 00000000179A3872-00000000179A38E8
int32_t __cdecl PlayerLoginComp::onLogin(PlayerLoginComp *const this, bool is_new_player)
{
  PlayerLoginComp::refreshLoginReward(this, 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !Player::isRelogin(this->player_) )
    PlayerLoginComp::refreshQuestionnaireMail(this, is_new_player);
  return 0;
};

// Line 92: range 00000000179A38EA-00000000179A3BA8
int32_t __cdecl PlayerLoginComp::init(PlayerLoginComp *const this)
{
  unsigned __int64 p_pending_que; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t result; // eax
  std::weak_ptr<PlayerLoginComp> *p_this_wtr; // [rsp+10h] [rbp-E0h]
  std::weak_ptr<PlayerLoginComp> v6; // [rsp+20h] [rbp-D0h] BYREF
  PlayerEventComp varC0; // [rsp+30h] [rbp-C0h] BYREF

  p_pending_que = (unsigned __int64)&varC0.event_center_.context_.pending_que_;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_pending_que = v2;
  }
  *(_QWORD *)p_pending_que = 1102416563LL;
  *(_QWORD *)(p_pending_que + 8) = "2 32 16 11 this_ptr:93 64 16 11 this_wtr:99";
  *(_QWORD *)(p_pending_que + 16) = PlayerLoginComp::init;
  v3 = (_DWORD *)(p_pending_que >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  toThisPtr<PlayerLoginComp>((PlayerLoginComp *)(p_pending_que + 32));
  if ( std::operator==<PlayerLoginComp>(0LL, (const std::shared_ptr<PlayerLoginComp> *)(p_pending_que + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&varC0._M_weak_this._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_login_comp.cpp",
      "init",
      96);
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
      (common::milog::MiLogStream *const)&varC0._M_weak_this._M_refcount,
      (const char (*)[47])"dynamic_pointer_cast to PlayerLoginComp failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&varC0._M_weak_this._M_refcount);
  }
  else
  {
    std::weak_ptr<PlayerLoginComp>::weak_ptr<PlayerLoginComp,void>(
      (std::weak_ptr<PlayerLoginComp> *const)(p_pending_que + 64),
      (const std::shared_ptr<PlayerLoginComp> *)(p_pending_que + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    p_this_wtr = (std::weak_ptr<PlayerLoginComp> *)Player::getEventComp(this->player_);
    std::weak_ptr<PlayerLoginComp>::weak_ptr(&v6, (const std::weak_ptr<PlayerLoginComp> *)(p_pending_que + 64));
    PlayerEventComp::registerObserver<PlayerLoginComp,NaturalDailyRefreshEvent>(
      &varC0,
      p_this_wtr,
      (void (*)(PlayerLoginComp *, const NaturalDailyRefreshEvent *))&v6);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&varC0);
    std::weak_ptr<PlayerLoginComp>::~weak_ptr(&v6);
    std::weak_ptr<PlayerLoginComp>::~weak_ptr((std::weak_ptr<PlayerLoginComp> *const)(p_pending_que + 64));
  }
  std::shared_ptr<PlayerLoginComp>::~shared_ptr((std::shared_ptr<PlayerLoginComp> *const)(p_pending_que + 32));
  result = 0;
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
  return result;
};

// Line 105: range 00000000179A3BAA-00000000179A3BC9
void __cdecl PlayerLoginComp::onDailyRefresh(PlayerLoginComp *const this)
{
  PlayerLoginComp::refreshLoginReward(this, 0);
};

// Line 110: range 00000000179A3BCA-00000000179A3BED
void __cdecl PlayerLoginComp::onNaturlaDailyRefreshEvent(
        PlayerLoginComp *const this,
        const NaturalDailyRefreshEvent *a2)
{
  PlayerLoginComp::refreshLoginReward(this, 0);
};

// Line 115: range 00000000179A3BEE-00000000179A47CC
void __cdecl PlayerLoginComp::refreshLoginReward(PlayerLoginComp *const this, bool is_login)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  uint32_t last_login_refresh_time; // ecx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  unsigned int val; // [rsp+18h] [rbp-1A8h] BYREF
  uint32_t now; // [rsp+1Ch] [rbp-1A4h]
  std::map<unsigned int,data::DbLoginRewardConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-1A0h] BYREF
  std::map<unsigned int,data::DbLoginRewardConfig>::const_iterator __for_end; // [rsp+28h] [rbp-198h] BYREF
  std::__detail::_Node_iterator_base<unsigned int,false> __x; // [rsp+30h] [rbp-190h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __rhs; // [rsp+38h] [rbp-188h] BYREF
  const std::map<unsigned int,data::DbLoginRewardConfig> *__for_range; // [rsp+40h] [rbp-180h]
  const std::pair<unsigned int const,data::DbLoginRewardConfig> *v28; // [rsp+48h] [rbp-178h]
  std::tuple_element<0,const std::pair<unsigned int const,data::DbLoginRewardConfig> >::type *config_id; // [rsp+50h] [rbp-170h]
  std::tuple_element<1,const std::pair<unsigned int const,data::DbLoginRewardConfig> >::type *config; // [rsp+58h] [rbp-168h]
  std::shared_ptr<Config> v31; // [rsp+60h] [rbp-160h] BYREF
  common::milog::MiLogStream v32; // [rsp+70h] [rbp-150h] BYREF
  char v33[304]; // [rsp+90h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 16 account_type:124 48 8 8 iter:134 80 48 19 param_value_map:116 160 56 8 node:164";
  *(_QWORD *)(v2 + 16) = PlayerLoginComp::refreshLoginReward;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862724] = -218959118;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  std::map<std::string,float>::map((std::map<std::string,float> *const)(v2 + 80));
  if ( PlayerLoginComp::generateParamValue(this, (std::map<std::string,float> *)(v2 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_login_comp.cpp",
      "refreshLoginReward",
      119);
    v5 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v32,
           (const char (*)[32])"generateParamValue failed uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v32);
    goto LABEL_47;
  }
  common::milog::MiLogStream::create(
    &v32,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/player_login_comp.cpp",
    "refreshLoginReward",
    122);
  v6 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v32, (const char (*)[18])"param_value_map: ");
  common::milog::MiLogStream::operator<<<std::string,float>(v6, (const std::map<std::string,float> *)(v2 + 80));
  common::milog::MiLogStream::~MiLogStream(&v32);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v2 + 32) = Player::getAccountType(this->player_);
  now = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v31);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31)->design_config.db_config_mgr.db_local_config_mgr.login_reward_config_map;
  std::shared_ptr<Config>::~shared_ptr(&v31);
  __for_begin._M_node = std::map<unsigned int,data::DbLoginRewardConfig>::begin(__for_range)._M_node;
  __for_end._M_node = std::map<unsigned int,data::DbLoginRewardConfig>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v28 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DbLoginRewardConfig>>::operator*(&__for_begin);
    config_id = std::get<0ul,unsigned int const,data::DbLoginRewardConfig>(v28);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::DbLoginRewardConfig> >::type *)std::get<1ul,unsigned int const,data::DbLoginRewardConfig>(v28);
    if ( *(_BYTE *)(((unsigned __int64)&config->begin_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->begin_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->begin_time);
    }
    if ( now >= config->begin_time )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->end_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->end_time >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->end_time);
      }
      if ( now <= config->end_time )
      {
        M_current = std::vector<unsigned int>::cend(&config->effective_account_type_vec)._M_current;
        v8._M_current = std::vector<unsigned int>::cbegin(&config->effective_account_type_vec)._M_current;
        *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 48) = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(v8, (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current, (const unsigned int *)(v2 + 32));
        __rhs._M_current = std::vector<unsigned int>::cend(&config->effective_account_type_vec)._M_current;
        if ( __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(
               (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 48),
               &__rhs) )
        {
          common::milog::MiLogStream::create(
            &v32,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/player_login_comp.cpp",
            "refreshLoginReward",
            137);
          v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v32, (const char (*)[12])"config_id: ");
          v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, config_id);
          common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            v10,
            (const char (*)[23])" account_type not fit!");
          common::milog::MiLogStream::~MiLogStream(&v32);
          goto LABEL_42;
        }
        if ( *(_BYTE *)(((unsigned __int64)&config->config_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->config_type >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&config->config_type);
        }
        if ( config->config_type != LOGIN_REWARD_FIRST )
          goto LABEL_31;
        if ( !is_login )
        {
          common::milog::MiLogStream::create(
            &v32,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/player_login_comp.cpp",
            "refreshLoginReward",
            146);
          v11 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(&v32, (const char (*)[31])off_2625F860);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, config_id);
          common::milog::MiLogStream::~MiLogStream(&v32);
          goto LABEL_42;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->last_login_refresh_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->last_login_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->last_login_refresh_time_);
        }
        last_login_refresh_time = this->last_login_refresh_time_;
        if ( *(_BYTE *)(((unsigned __int64)&config->begin_time >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->begin_time >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->begin_time);
        }
        if ( last_login_refresh_time >= config->begin_time )
        {
          common::milog::MiLogStream::create(
            &v32,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/player_login_comp.cpp",
            "refreshLoginReward",
            153);
          v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(&v32, (const char (*)[33])off_2625F8A0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, config_id);
          common::milog::MiLogStream::~MiLogStream(&v32);
        }
        else
        {
LABEL_31:
          __rhs._M_current = (const unsigned int *)std::unordered_set<unsigned int>::end(&this->taken_login_reward_config_set_)._M_cur;
          __x._M_cur = std::unordered_set<unsigned int>::find(&this->taken_login_reward_config_set_, config_id)._M_cur;
          if ( std::__detail::operator!=<unsigned int,false>(
                 &__x,
                 (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__rhs) )
          {
            common::milog::MiLogStream::create(
              &v32,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/player_login_comp.cpp",
              "refreshLoginReward",
              160);
            v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    &v32,
                    (const char (*)[12])"config_id: ");
            v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, config_id);
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v15, (const char (*)[17])" has been taken!");
            common::milog::MiLogStream::~MiLogStream(&v32);
          }
          else
          {
            common::tools::MathExpression::compute(
              (common::tools::MathExpressionNode *)(v2 + 160),
              &config->reward_expression,
              0,
              0.0,
              (std::map<std::string,float> *)(v2 + 80));
            if ( !common::tools::MathExpressionNode::isBool((common::tools::MathExpressionNode *const)(v2 + 160)) )
            {
              common::milog::MiLogStream::create(
                &v32,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/player_login_comp.cpp",
                "refreshLoginReward",
                167);
              v16 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                      &v32,
                      (const char (*)[37])"math expression not bool config_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, config_id);
              common::milog::MiLogStream::~MiLogStream(&v32);
            }
            else if ( common::tools::MathExpressionNode::getBoolValue((const common::tools::MathExpressionNode *const)(v2 + 160)) )
            {
              if ( PlayerLoginComp::takeLoginReward(this, config) )
              {
                common::milog::MiLogStream::create(
                  &v32,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/player_login_comp.cpp",
                  "refreshLoginReward",
                  175);
                v17 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                        &v32,
                        (const char (*)[36])"takeLoginReward failed, config_id: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, config_id);
                common::milog::MiLogStream::~MiLogStream(&v32);
              }
              common::milog::MiLogStream::create(
                &v32,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/player_login_comp.cpp",
                "refreshLoginReward",
                178);
              v18 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                      &v32,
                      (const char (*)[18])"taken config_id: ");
              v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, config_id);
              v20 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])" uid: ");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              val = Player::getUid(this->player_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
              common::milog::MiLogStream::~MiLogStream(&v32);
              std::unordered_set<unsigned int>::insert(&this->taken_login_reward_config_set_, config_id);
            }
            common::tools::MathExpressionNode::~MathExpressionNode((common::tools::MathExpressionNode *const)(v2 + 160));
          }
        }
      }
    }
LABEL_42:
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DbLoginRewardConfig>>::operator++(&__for_begin);
  }
  if ( is_login )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->last_login_refresh_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_login_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->last_login_refresh_time_, &__for_end, &this->last_login_refresh_time_);
    }
    this->last_login_refresh_time_ = now;
  }
LABEL_47:
  std::map<std::string,float>::~map((std::map<std::string,float> *const)(v2 + 80));
  if ( v33 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 190: range 00000000179A47CE-00000000179A5557
void __cdecl PlayerLoginComp::refreshQuestionnaireMail(PlayerLoginComp *const this, bool is_new_player)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rcx
  int v25; // ecx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  const data::DbQuestionnaireMailConfig *v32; // rsi
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  uint32_t v36; // ecx
  char v37; // al
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  uint32_t recv_questionnaire_mail_diff_time; // [rsp+14h] [rbp-12Ch]
  std::vector<data::DbQuestionnaireMailConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::vector<data::DbQuestionnaireMailConfig>::const_iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  std::__detail::_Node_iterator_base<unsigned int,false> __y; // [rsp+28h] [rbp-118h] BYREF
  const data::DbQuestionnaireMailConfig *find_config_ptr; // [rsp+30h] [rbp-110h]
  const std::vector<data::DbQuestionnaireMailConfig> *questionnaire_mail_config_vec; // [rsp+38h] [rbp-108h]
  const std::vector<data::DbQuestionnaireMailConfig> *__for_range; // [rsp+40h] [rbp-100h]
  const data::DbQuestionnaireMailConfig *config; // [rsp+48h] [rbp-F8h]
  std::shared_ptr<Config> v51; // [rsp+50h] [rbp-F0h] BYREF
  common::milog::MiLogStream v52; // [rsp+60h] [rbp-E0h] BYREF
  char v53[192]; // [rsp+80h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 7 now:191 64 4 20 last_logout_time:203 80 4 22 curr_logout_second:213 96 4 22 need_logout"
                        "_second:216 112 4 11 cd_time:237 128 8 39 recv_questionnaire_mail_config_iter:257";
  *(_QWORD *)(v2 + 16) = PlayerLoginComp::refreshQuestionnaireMail;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -202116352;
  *(_DWORD *)(v2 + 48) = common::tools::TimeUtils::getNow();
  if ( is_new_player )
  {
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_login_comp.cpp",
      "refreshQuestionnaireMail",
      198);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      &v52,
      (const char (*)[35])"[QUESTIONNAIRE] is_new_player true");
    common::milog::MiLogStream::~MiLogStream(&v52);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    *(_DWORD *)(v2 + 64) = PlayerBasicComp::getLastLogoutTime(BasicComp);
    if ( *(_DWORD *)(v2 + 48) >= *(_DWORD *)(v2 + 64) )
    {
      *(_DWORD *)(v2 + 80) = *(_DWORD *)(v2 + 48) - *(_DWORD *)(v2 + 64);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v51);
      v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v51);
      *(_DWORD *)(v2 + 96) = ConstValueExcelConfigMgr::getSendQuestionnaireMailLogoutTime(&v11->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v51);
      if ( *(_DWORD *)(v2 + 80) >= *(_DWORD *)(v2 + 96) )
      {
        common::milog::MiLogStream::create(
          &v52,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/player_login_comp.cpp",
          "refreshQuestionnaireMail",
          224);
        v15 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v52,
                (const char (*)[34])"[QUESTIONNAIRE] last_logout_time=");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v2 + 64));
        v17 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                v16,
                (const char (*)[22])", curr_logout_second=");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v2 + 80));
        v19 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                v18,
                (const char (*)[22])", need_logout_second=");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v2 + 96));
        common::milog::MiLogStream::~MiLogStream(&v52);
        if ( *(_BYTE *)(((unsigned __int64)&this->last_recv_questionnaire_mail_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->last_recv_questionnaire_mail_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->last_recv_questionnaire_mail_time_);
        }
        if ( this->last_recv_questionnaire_mail_time_ <= *(_DWORD *)(v2 + 48) )
        {
          v25 = *(_DWORD *)(v2 + 48);
          if ( *(_BYTE *)(((unsigned __int64)&this->last_recv_questionnaire_mail_time_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->last_recv_questionnaire_mail_time_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->last_recv_questionnaire_mail_time_);
          }
          recv_questionnaire_mail_diff_time = v25 - this->last_recv_questionnaire_mail_time_;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v51);
          v26 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v51);
          *(_DWORD *)(v2 + 112) = ConstValueExcelConfigMgr::getSendQuestionnaireMailCDTime(&v26->design_config.txt_config_mgr.const_value_config_mgr);
          std::shared_ptr<Config>::~shared_ptr(&v51);
          if ( recv_questionnaire_mail_diff_time > *(_DWORD *)(v2 + 112) )
          {
            find_config_ptr = 0LL;
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v51);
            questionnaire_mail_config_vec = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v51)->design_config.db_config_mgr.db_local_config_mgr.questionnaire_mail_config_vec;
            std::shared_ptr<Config>::~shared_ptr(&v51);
            __for_range = questionnaire_mail_config_vec;
            __for_begin._M_current = std::vector<data::DbQuestionnaireMailConfig>::begin(questionnaire_mail_config_vec)._M_current;
            __for_end._M_current = std::vector<data::DbQuestionnaireMailConfig>::end(questionnaire_mail_config_vec)._M_current;
            while ( __gnu_cxx::operator!=<data::DbQuestionnaireMailConfig const*,std::vector<data::DbQuestionnaireMailConfig>>(
                      &__for_begin,
                      &__for_end) )
            {
              config = __gnu_cxx::__normal_iterator<data::DbQuestionnaireMailConfig const*,std::vector<data::DbQuestionnaireMailConfig>>::operator*(&__for_begin);
              if ( *(_BYTE *)(((unsigned __int64)&config->begin_time >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&config->begin_time >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&config->begin_time);
              }
              if ( config->begin_time <= *(_DWORD *)(v2 + 48) )
              {
                if ( *(_BYTE *)(((unsigned __int64)&config->end_time >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)config - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->end_time >> 3)
                                                                         + 0x7FFF8000) )
                {
                  __asan_report_load4(&config->end_time);
                }
                if ( config->end_time >= *(_DWORD *)(v2 + 48) )
                {
                  *(std::unordered_set<unsigned int>::iterator *)(v2 + 128) = std::unordered_set<unsigned int>::find(
                                                                                &this->recv_questionnaire_mail_config_set_,
                                                                                &config->config_id);
                  __y._M_cur = std::unordered_set<unsigned int>::end(&this->recv_questionnaire_mail_config_set_)._M_cur;
                  if ( !std::__detail::operator!=<unsigned int,false>(
                          (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v2 + 128),
                          &__y) )
                  {
                    find_config_ptr = config;
                    break;
                  }
                  common::milog::MiLogStream::create(
                    &v52,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/player_login_comp.cpp",
                    "refreshQuestionnaireMail",
                    260);
                  v30 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                          &v52,
                          (const char (*)[28])"[QUESTIONNAIRE] config_id: ");
                  v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &config->config_id);
                  common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    v31,
                    (const char (*)[36])" questionnaire mail already recved!");
                  common::milog::MiLogStream::~MiLogStream(&v52);
                }
              }
              __gnu_cxx::__normal_iterator<data::DbQuestionnaireMailConfig const*,std::vector<data::DbQuestionnaireMailConfig>>::operator++(&__for_begin);
            }
            if ( find_config_ptr )
            {
              v32 = find_config_ptr;
              v33 = std::unordered_set<unsigned int>::insert(
                      &this->recv_questionnaire_mail_config_set_,
                      &find_config_ptr->config_id);
              if ( !v33.second )
              {
                common::milog::MiLogStream::create(
                  &v52,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/player_login_comp.cpp",
                  "refreshQuestionnaireMail",
                  281);
                v34 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                        &v52,
                        (const char (*)[28])"[QUESTIONNAIRE] config_id: ");
                v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v34,
                        &find_config_ptr->config_id);
                common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                  v35,
                  (const char (*)[57])" find duplication in recv_questionnaire_mail_config_set_");
                common::milog::MiLogStream::~MiLogStream(&v52);
              }
              else
              {
                v36 = *(_DWORD *)(v2 + 48);
                v37 = *(_BYTE *)(((unsigned __int64)&this->last_recv_questionnaire_mail_time_ >> 3) + 0x7FFF8000);
                if ( v37 != 0 && v37 <= 3 )
                {
                  LOBYTE(v32) = v37 != 0;
                  __asan_report_store4(
                    &this->last_recv_questionnaire_mail_time_,
                    v32,
                    &this->last_recv_questionnaire_mail_time_);
                }
                this->last_recv_questionnaire_mail_time_ = v36;
                common::milog::MiLogStream::create(
                  &v52,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/player_login_comp.cpp",
                  "refreshQuestionnaireMail",
                  287);
                v38 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                        &v52,
                        (const char (*)[60])"[QUESTIONNAIRE] update last_recv_questionnaire_mail_time_: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v38,
                  &this->last_recv_questionnaire_mail_time_);
                common::milog::MiLogStream::~MiLogStream(&v52);
                if ( PlayerLoginComp::sendQuestionnaireMail(this, find_config_ptr) )
                {
                  common::milog::MiLogStream::create(
                    &v52,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/player/player_login_comp.cpp",
                    "refreshQuestionnaireMail",
                    292);
                  v39 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                          &v52,
                          (const char (*)[28])"[QUESTIONNAIRE] config_id: ");
                  v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v39,
                          &find_config_ptr->config_id);
                  common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    v40,
                    (const char (*)[30])" sendQuestionnaireMail failed");
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v52,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/player_login_comp.cpp",
                    "refreshQuestionnaireMail",
                    296);
                  v41 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                          &v52,
                          (const char (*)[28])"[QUESTIONNAIRE] config_id: ");
                  v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v41,
                          &find_config_ptr->config_id);
                  common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    v42,
                    (const char (*)[28])" sendQuestionnaireMail succ");
                }
                common::milog::MiLogStream::~MiLogStream(&v52);
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v52,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/player_login_comp.cpp",
                "refreshQuestionnaireMail",
                273);
              common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                &v52,
                (const char (*)[58])"[QUESTIONNAIRE] cannot find any questionnaire mail config");
              common::milog::MiLogStream::~MiLogStream(&v52);
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v52,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/player_login_comp.cpp",
              "refreshQuestionnaireMail",
              240);
            v27 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                    &v52,
                    (const char (*)[60])"[QUESTIONNAIRE] cding! last_recv_questionnaire_mail_time_: ");
            v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v27,
                    &this->last_recv_questionnaire_mail_time_);
            v29 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v28, (const char (*)[11])" cd_time: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v29,
              (const unsigned int *)(v2 + 112));
            common::milog::MiLogStream::~MiLogStream(&v52);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v52,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/player_login_comp.cpp",
            "refreshQuestionnaireMail",
            229);
          v20 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                  &v52,
                  (const char (*)[59])"[QUESTIONNAIRE] now is less then last recv mail time. now=");
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v20,
                  (const unsigned int *)(v2 + 48));
          v22 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  v21,
                  (const char (*)[38])", last_recv_questionnaire_mail_time_=");
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v22,
                  (const unsigned int *)(v2 + 64));
          v24 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v23, (const char (*)[11])", player_=");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          operator<<(v24, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v52);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v52,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/player_login_comp.cpp",
          "refreshQuestionnaireMail",
          219);
        v12 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                &v52,
                (const char (*)[60])"[QUESTIONNAIRE] logout time not enough. need_logout_second=");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v2 + 96));
        v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                v13,
                (const char (*)[22])", curr_logout_second=");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 80));
        common::milog::MiLogStream::~MiLogStream(&v52);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v52,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_login_comp.cpp",
        "refreshQuestionnaireMail",
        208);
      v6 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
             &v52,
             (const char (*)[56])"[QUESTIONNAIRE] now is less then last logout time. now=");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
      v8 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
             v7,
             (const char (*)[20])", last_logout_time=");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 64));
      v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])", player_=");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v10, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v52);
    }
  }
  if ( v53 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 301: range 00000000179A5558-00000000179A58B5
int32_t __cdecl PlayerLoginComp::generateParamValue(
        PlayerLoginComp *const this,
        std::map<std::string,float> *param_value_map)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::string *v5; // rax
  float *v6; // r8
  int32_t result; // eax
  int32_t idx; // [rsp+14h] [rbp-ACh]
  PlayerBasicComp *basic_comp; // [rsp+18h] [rbp-A8h]
  char v10[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 9 value:308 64 32 8 name:307";
  *(_QWORD *)(v2 + 16) = PlayerLoginComp::generateParamValue;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  basic_comp = Player::getBasicComp(this->player_);
  PlayerBasicComp::updateTotalLoginDays(basic_comp);
  for ( idx = 0; idx <= 5; ++idx )
  {
    v5 = proto::MathExpressionType_Name[abi:cxx11]((proto::MathExpressionType)idx);
    std::string::basic_string(v2 + 64, v5);
    *(_DWORD *)(v2 + 48) = 0;
    switch ( idx )
    {
      case 1:
        *(float *)(v2 + 48) = (float)(int)PlayerBasicComp::getLevel(basic_comp);
        break;
      case 2:
        *(float *)(v2 + 48) = (float)(int)PlayerBasicComp::getRegisterTime(basic_comp);
        break;
      case 3:
        *(float *)(v2 + 48) = (float)(int)PlayerBasicComp::getLastLoginTime(basic_comp);
        break;
      case 4:
        *(float *)(v2 + 48) = (float)(int)PlayerBasicComp::getTotalLoginDays(basic_comp);
        break;
      case 5:
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(float *)(v2 + 48) = (float)(int)Player::getPlatformType(this->player_);
        break;
      default:
        break;
    }
    std::map<std::string,float>::emplace<std::string&,float &>(
      param_value_map,
      (std::string *)(v2 + 64),
      (float *)(v2 + 48),
      (std::string *)(v2 + 64),
      v6);
    std::string::~string((void *)(v2 + 64));
  }
  result = 0;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 334: range 00000000179A58B6-00000000179A6483
int32_t __cdecl PlayerLoginComp::takeLoginReward(
        PlayerLoginComp *const this,
        const data::DbLoginRewardConfig *login_reward_config)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  const std::string *p_email_title; // rdi
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::remove_reference<std::string&>::type *v12; // rax
  const std::string *p_email_sender; // rdi
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::remove_reference<std::string&>::type *v18; // rax
  const std::string *p_email_content; // rdi
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  std::remove_reference<std::string&>::type *v24; // rax
  const google::protobuf::RepeatedPtrField<proto::EquipParam> *v25; // rax
  std::vector<ItemParam> *v26; // rax
  int v27; // eax
  PlayerMailComp *MailComp; // r14
  common::milog::MiLogStream *v29; // r14
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rdx
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+27h] [rbp-239h] BYREF
  unsigned int val; // [rsp+28h] [rbp-238h] BYREF
  uint32_t now; // [rsp+2Ch] [rbp-234h]
  common::milog::MiLogStream v40; // [rsp+30h] [rbp-230h] BYREF
  char v41[528]; // [rsp+50h] [rbp-210h] BYREF

  v2 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 24 18 item_param_vec:371 112 32 11 textmap:348 176 232 13 mail_data:341";
  *(_QWORD *)(v2 + 16) = PlayerLoginComp::takeLoginReward;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218959360;
  v4[536862723] = 62194;
  v4[536862724] = -219021312;
  v4[536862725] = 62194;
  v4[536862732] = -218103808;
  v4[536862733] = -202116109;
  v4[536862734] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&login_reward_config->email_valid_days >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&login_reward_config->email_valid_days >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&login_reward_config->email_valid_days);
  }
  if ( login_reward_config->email_valid_days )
  {
    MailData::MailData((MailData *const)(v2 + 176));
    *(_DWORD *)(v2 + 356) = 2;
    now = common::tools::TimeUtils::getNow();
    *(_DWORD *)(v2 + 312) = now;
    if ( *(_BYTE *)(((unsigned __int64)&login_reward_config->email_valid_days >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&login_reward_config->email_valid_days >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&login_reward_config->email_valid_days);
    }
    *(_DWORD *)(v2 + 316) = 86400 * login_reward_config->email_valid_days + now;
    std::string::basic_string(v2 + 112);
    p_email_title = &login_reward_config->email_title;
    if ( *(_BYTE *)(((unsigned __int64)&login_reward_config->email_title_text_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&login_reward_config->email_title_text_id >> 3) + 0x7FFF8000) <= 3 )
    {
      p_email_title = (const std::string *)&login_reward_config->email_title_text_id;
      __asan_report_load4(&login_reward_config->email_title_text_id);
    }
    if ( PlayerLoginComp::findTextmap(
           this,
           login_reward_config->email_title_text_id,
           p_email_title,
           (std::string *)(v2 + 112)) )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_login_comp.cpp",
        "takeLoginReward",
        351);
      v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v40, (const char (*)[13])"findTextmap ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
             v8,
             &login_reward_config->email_title_text_id);
      v10 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v9, (const char (*)[2])":");
      v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &login_reward_config->email_title);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream(&v40);
      v6 = -1;
    }
    else
    {
      v12 = std::move<std::string &>((std::string *)(v2 + 112));
      std::string::operator=(v2 + 192, v12);
      p_email_sender = &login_reward_config->email_sender;
      if ( *(_BYTE *)(((unsigned __int64)&login_reward_config->email_sender_text_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)login_reward_config - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&login_reward_config->email_sender_text_id >> 3)
                                                                            + 0x7FFF8000) )
      {
        p_email_sender = (const std::string *)&login_reward_config->email_sender_text_id;
        __asan_report_load4(&login_reward_config->email_sender_text_id);
      }
      if ( PlayerLoginComp::findTextmap(
             this,
             login_reward_config->email_sender_text_id,
             p_email_sender,
             (std::string *)(v2 + 112)) )
      {
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player_login_comp.cpp",
          "takeLoginReward",
          358);
        v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v40, (const char (*)[13])"findTextmap ");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                &login_reward_config->email_sender_text_id);
        v16 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v15, (const char (*)[2])":");
        v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                v16,
                &login_reward_config->email_sender);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v17, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream(&v40);
        v6 = -1;
      }
      else
      {
        v18 = std::move<std::string &>((std::string *)(v2 + 112));
        std::string::operator=(v2 + 256, v18);
        p_email_content = &login_reward_config->email_content;
        if ( *(_BYTE *)(((unsigned __int64)&login_reward_config->email_content_text_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&login_reward_config->email_content_text_id >> 3) + 0x7FFF8000) <= 3 )
        {
          p_email_content = (const std::string *)&login_reward_config->email_content_text_id;
          __asan_report_load4(&login_reward_config->email_content_text_id);
        }
        if ( PlayerLoginComp::findTextmap(
               this,
               login_reward_config->email_content_text_id,
               p_email_content,
               (std::string *)(v2 + 112)) )
        {
          common::milog::MiLogStream::create(
            &v40,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/player_login_comp.cpp",
            "takeLoginReward",
            365);
          v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                  &v40,
                  (const char (*)[13])"findTextmap ");
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v20,
                  &login_reward_config->email_content_text_id);
          v22 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v21, (const char (*)[2])":");
          v23 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                  v22,
                  &login_reward_config->email_content);
          common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v23, (const char (*)[8])" failed");
          common::milog::MiLogStream::~MiLogStream(&v40);
          v6 = -1;
        }
        else
        {
          v24 = std::move<std::string &>((std::string *)(v2 + 112));
          std::string::operator=(v2 + 224, v24);
          std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v2 + 48));
          v25 = proto::EquipParamList::item_list(&login_reward_config->reward_item_list);
          common::tools::MiscUtils::repeatedToVector<ItemParam,proto::EquipParam,void (ItemParam::*)(proto::EquipParam const&)>(
            v25,
            (std::vector<ItemParam> *)(v2 + 48),
            (void (*)(ItemParam *, const proto::EquipParam *))ItemParam::fromEquipParam);
          v26 = std::move<std::vector<ItemParam> &>((std::vector<ItemParam> *)(v2 + 48));
          std::vector<ItemParam>::operator=((std::vector<ItemParam> *const)(v2 + 288), v26);
          *(_DWORD *)(v2 + 352) = 41;
          std::string::operator=(v2 + 360, &login_reward_config->tag);
          if ( *(_BYTE *)(((unsigned __int64)&login_reward_config->importance >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&login_reward_config->importance >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&login_reward_config->importance);
          }
          *(_DWORD *)(v2 + 320) = login_reward_config->importance;
          if ( *(_BYTE *)(((unsigned __int64)&login_reward_config->is_collectible >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)login_reward_config - 60) & 7) >= *(_BYTE *)(((unsigned __int64)&login_reward_config->is_collectible >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load1(&login_reward_config->is_collectible);
          }
          if ( login_reward_config->is_collectible )
            v27 = 2;
          else
            v27 = 1;
          *(_DWORD *)(v2 + 400) = v27;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          MailComp = Player::getMailComp(this->player_);
          std::allocator<char>::allocator(&__a);
          std::string::basic_string<std::allocator<char>>((std::string *const)&v40, byte_261E1600, &__a);
          LOBYTE(MailComp) = PlayerMailComp::addNewMail(MailComp, (const MailData *)(v2 + 176), (std::string *)&v40) != 0;
          std::string::~string(&v40);
          std::allocator<char>::~allocator(&__a);
          if ( (_BYTE)MailComp )
          {
            common::milog::MiLogStream::create(
              &v40,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/player_login_comp.cpp",
              "takeLoginReward",
              382);
            v29 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                    &v40,
                    (const char (*)[24])"addNewMail failed uid: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &val);
            common::milog::MiLogStream::~MiLogStream(&v40);
            v6 = -1;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v40,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/player_login_comp.cpp",
              "takeLoginReward",
              386);
            v30 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    &v40,
                    (const char (*)[29])"takeLoginReward addNewMail: ");
            v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v30,
                    (const unsigned int *)(v2 + 184));
            v32 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v31,
                    (const char (*)[13])" config_id: ");
            v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v32,
                    &login_reward_config->config_id);
            v34 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v33, (const char (*)[7])" uid: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &val);
            common::milog::MiLogStream::~MiLogStream(&v40);
            v6 = 0;
          }
          std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v2 + 48));
        }
      }
    }
    std::string::~string((void *)(v2 + 112));
    MailData::~MailData((MailData *const)(v2 + 176));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_login_comp.cpp",
      "takeLoginReward",
      337);
    v5 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v40,
           (const char (*)[55])"DbLoginRewardConfig email_valid_days == 0, config_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &login_reward_config->config_id);
    common::milog::MiLogStream::~MiLogStream(&v40);
    v6 = -1;
  }
  result = v6;
  if ( v41 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 392: range 00000000179A6484-00000000179A7088
int32_t __cdecl PlayerLoginComp::sendQuestionnaireMail(
        PlayerLoginComp *const this,
        const data::DbQuestionnaireMailConfig *questionnaire_mail_config)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  unsigned int v7; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  const std::string *p_email_title; // rdi
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::remove_reference<std::string&>::type *v16; // rax
  const std::string *p_email_sender; // rdi
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  std::remove_reference<std::string&>::type *v22; // rax
  const std::string *p_email_content; // rdi
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  std::remove_reference<std::string&>::type *v28; // rax
  const google::protobuf::RepeatedPtrField<proto::EquipParam> *v29; // rax
  std::vector<ItemParam> *v30; // rax
  PlayerMailComp *MailComp; // r14
  common::milog::MiLogStream *v32; // r14
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rdx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // r14
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+27h] [rbp-239h] BYREF
  unsigned int val; // [rsp+28h] [rbp-238h] BYREF
  uint32_t now; // [rsp+2Ch] [rbp-234h]
  common::milog::MiLogStream v43; // [rsp+30h] [rbp-230h] BYREF
  char v44[528]; // [rsp+50h] [rbp-210h] BYREF

  v2 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 24 18 item_param_vec:431 112 32 11 textmap:408 176 232 13 mail_data:399";
  *(_QWORD *)(v2 + 16) = PlayerLoginComp::sendQuestionnaireMail;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218959360;
  v4[536862723] = 62194;
  v4[536862724] = -219021312;
  v4[536862725] = 62194;
  v4[536862732] = -218103808;
  v4[536862733] = -202116109;
  v4[536862734] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&questionnaire_mail_config->email_valid_days >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)questionnaire_mail_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&questionnaire_mail_config->email_valid_days >> 3)
                                                                            + 0x7FFF8000) )
  {
    __asan_report_load4(&questionnaire_mail_config->email_valid_days);
  }
  if ( questionnaire_mail_config->email_valid_days )
  {
    MailData::MailData((MailData *const)(v2 + 176));
    *(_DWORD *)(v2 + 356) = 19;
    now = common::tools::TimeUtils::getNow();
    *(_DWORD *)(v2 + 312) = now;
    if ( *(_BYTE *)(((unsigned __int64)&questionnaire_mail_config->email_valid_days >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)questionnaire_mail_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&questionnaire_mail_config->email_valid_days >> 3)
                                                                              + 0x7FFF8000) )
    {
      __asan_report_load4(&questionnaire_mail_config->email_valid_days);
    }
    v7 = SAFE_MULTIPLY<unsigned int,unsigned int>(0x15180u, questionnaire_mail_config->email_valid_days);
    *(_DWORD *)(v2 + 316) = SAFE_ADD<unsigned int,unsigned int>(now, v7);
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_login_comp.cpp",
      "sendQuestionnaireMail",
      406);
    v8 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v43,
           (const char (*)[46])"[QUESTIONNAIRE] questionnaire mail send_time=");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 312));
    v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])", expire_time=");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 316));
    common::milog::MiLogStream::~MiLogStream(&v43);
    std::string::basic_string(v2 + 112);
    p_email_title = &questionnaire_mail_config->email_title;
    if ( *(_BYTE *)(((unsigned __int64)&questionnaire_mail_config->email_title_text_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&questionnaire_mail_config->email_title_text_id >> 3) + 0x7FFF8000) <= 3 )
    {
      p_email_title = (const std::string *)&questionnaire_mail_config->email_title_text_id;
      __asan_report_load4(&questionnaire_mail_config->email_title_text_id);
    }
    if ( PlayerLoginComp::findTextmap(
           this,
           questionnaire_mail_config->email_title_text_id,
           p_email_title,
           (std::string *)(v2 + 112)) )
    {
      common::milog::MiLogStream::create(
        &v43,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_login_comp.cpp",
        "sendQuestionnaireMail",
        411);
      v12 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v43,
              (const char (*)[29])"[QUESTIONNAIRE] findTextmap ");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v12,
              &questionnaire_mail_config->email_title_text_id);
      v14 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v13, (const char (*)[2])":");
      v15 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
              v14,
              &questionnaire_mail_config->email_title);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v15, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream(&v43);
      v6 = -1;
    }
    else
    {
      v16 = std::move<std::string &>((std::string *)(v2 + 112));
      std::string::operator=(v2 + 192, v16);
      p_email_sender = &questionnaire_mail_config->email_sender;
      if ( *(_BYTE *)(((unsigned __int64)&questionnaire_mail_config->email_sender_text_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)questionnaire_mail_config - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&questionnaire_mail_config->email_sender_text_id >> 3)
                                                                                 + 0x7FFF8000) )
      {
        p_email_sender = (const std::string *)&questionnaire_mail_config->email_sender_text_id;
        __asan_report_load4(&questionnaire_mail_config->email_sender_text_id);
      }
      if ( PlayerLoginComp::findTextmap(
             this,
             questionnaire_mail_config->email_sender_text_id,
             p_email_sender,
             (std::string *)(v2 + 112)) )
      {
        common::milog::MiLogStream::create(
          &v43,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player_login_comp.cpp",
          "sendQuestionnaireMail",
          418);
        v18 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v43,
                (const char (*)[29])"[QUESTIONNAIRE] findTextmap ");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                &questionnaire_mail_config->email_sender_text_id);
        v20 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v19, (const char (*)[2])":");
        v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                v20,
                &questionnaire_mail_config->email_sender);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v21, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream(&v43);
        v6 = -1;
      }
      else
      {
        v22 = std::move<std::string &>((std::string *)(v2 + 112));
        std::string::operator=(v2 + 256, v22);
        p_email_content = &questionnaire_mail_config->email_content;
        if ( *(_BYTE *)(((unsigned __int64)&questionnaire_mail_config->email_content_text_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&questionnaire_mail_config->email_content_text_id >> 3) + 0x7FFF8000) <= 3 )
        {
          p_email_content = (const std::string *)&questionnaire_mail_config->email_content_text_id;
          __asan_report_load4(&questionnaire_mail_config->email_content_text_id);
        }
        if ( PlayerLoginComp::findTextmap(
               this,
               questionnaire_mail_config->email_content_text_id,
               p_email_content,
               (std::string *)(v2 + 112)) )
        {
          common::milog::MiLogStream::create(
            &v43,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/player_login_comp.cpp",
            "sendQuestionnaireMail",
            425);
          v24 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  &v43,
                  (const char (*)[29])"[QUESTIONNAIRE] findTextmap ");
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v24,
                  &questionnaire_mail_config->email_content_text_id);
          v26 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v25, (const char (*)[2])":");
          v27 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                  v26,
                  &questionnaire_mail_config->email_content);
          common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v27, (const char (*)[8])" failed");
          common::milog::MiLogStream::~MiLogStream(&v43);
          v6 = -1;
        }
        else
        {
          v28 = std::move<std::string &>((std::string *)(v2 + 112));
          std::string::operator=(v2 + 224, v28);
          std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v2 + 48));
          v29 = proto::EquipParamList::item_list(&questionnaire_mail_config->reward_item_list);
          common::tools::MiscUtils::repeatedToVector<ItemParam,proto::EquipParam,void (ItemParam::*)(proto::EquipParam const&)>(
            v29,
            (std::vector<ItemParam> *)(v2 + 48),
            (void (*)(ItemParam *, const proto::EquipParam *))ItemParam::fromEquipParam);
          v30 = std::move<std::vector<ItemParam> &>((std::vector<ItemParam> *)(v2 + 48));
          std::vector<ItemParam>::operator=((std::vector<ItemParam> *const)(v2 + 288), v30);
          *(_DWORD *)(v2 + 352) = 2702;
          std::string::operator=(v2 + 360, &questionnaire_mail_config->tag);
          *(_DWORD *)(v2 + 320) = 1;
          *(_DWORD *)(v2 + 400) = 1;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          MailComp = Player::getMailComp(this->player_);
          std::allocator<char>::allocator(&__a);
          std::string::basic_string<std::allocator<char>>((std::string *const)&v43, byte_261E1600, &__a);
          LOBYTE(MailComp) = PlayerMailComp::addNewMail(MailComp, (const MailData *)(v2 + 176), (std::string *)&v43) != 0;
          std::string::~string(&v43);
          std::allocator<char>::~allocator(&__a);
          if ( (_BYTE)MailComp )
          {
            common::milog::MiLogStream::create(
              &v43,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/player_login_comp.cpp",
              "sendQuestionnaireMail",
              442);
            v32 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                    &v43,
                    (const char (*)[40])"[QUESTIONNAIRE] addNewMail failed uid: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &val);
            common::milog::MiLogStream::~MiLogStream(&v43);
            v6 = -1;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v43,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/player_login_comp.cpp",
              "sendQuestionnaireMail",
              446);
            v33 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                    &v43,
                    (const char (*)[51])"[QUESTIONNAIRE] sendQuestionnaireMail addNewMail: ");
            v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v33,
                    (const unsigned int *)(v2 + 184));
            v35 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v34,
                    (const char (*)[13])" config_id: ");
            v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v35,
                    &questionnaire_mail_config->config_id);
            v37 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v36, (const char (*)[7])" uid: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &val);
            common::milog::MiLogStream::~MiLogStream(&v43);
            v6 = 0;
          }
          std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v2 + 48));
        }
      }
    }
    std::string::~string((void *)(v2 + 112));
    MailData::~MailData((MailData *const)(v2 + 176));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_login_comp.cpp",
      "sendQuestionnaireMail",
      395);
    v5 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
           &v43,
           (const char (*)[77])"[QUESTIONNAIRE] DbQuestionnaireMailConfig email_valid_days == 0, config_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &questionnaire_mail_config->config_id);
    common::milog::MiLogStream::~MiLogStream(&v43);
    v6 = -1;
  }
  result = v6;
  if ( v44 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 452: range 00000000179A708A-00000000179A734A
__int64 __fastcall PlayerLoginComp::findTextmap(
        PlayerLoginComp *const this,
        uint32_t text_id,
        const std::string *original_text,
        std::string *textmap)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  bool v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  __int64 result; // rax
  std::shared_ptr<Config> v17; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 17 language_type:453 64 4 11 text_id:451";
  *(_QWORD *)(v4 + 16) = PlayerLoginComp::findTextmap;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 64) = text_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  *(_DWORD *)(v4 + 48) = PlayerBasicComp::getLanguageType(BasicComp);
  if ( *(_DWORD *)(v4 + 64) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v17);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
    v9 = DbLocalConfigMgr::findTextmap(
           &v8->design_config.db_config_mgr.db_local_config_mgr,
           *(_DWORD *)(v4 + 64),
           *(_DWORD *)(v4 + 48),
           textmap) != 0;
    std::shared_ptr<Config>::~shared_ptr(&v17);
    if ( v9 )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_login_comp.cpp",
        "findTextmap",
        458);
      v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v18, (const char (*)[13])"findTextmap ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 64));
      v12 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v11, (const char (*)[2])":");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v13, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream(&v18);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      result = 0LL;
    }
  }
  else
  {
    std::string::operator=(textmap, original_text);
    result = 0LL;
  }
  if ( v19 == (char *)v4 )
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
