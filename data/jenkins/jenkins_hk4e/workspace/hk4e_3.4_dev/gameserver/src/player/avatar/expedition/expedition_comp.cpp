// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/avatar/expedition/expedition_comp.cpp

// Line 33: range 00000000150A405C-00000000150A41D1
int32_t __cdecl ExpeditionComp::onLogin(ExpeditionComp *const this)
{
  google::protobuf::uint32 started; // ebx
  float v3; // xmm0_4
  google::protobuf::uint32 v4; // ebx
  float v5; // xmm0_4
  uint32_t v6; // edx
  float shorten_ratio; // [rsp+4h] [rbp-2Ch]
  float shorten_ratioa; // [rsp+4h] [rbp-2Ch]
  uint32_t now_sec; // [rsp+18h] [rbp-18h]
  int32_t ret; // [rsp+1Ch] [rbp-14h]

  now_sec = ExpeditionComp::getNowSec(this);
  if ( ExpeditionComp::getState(this) == AVATAR_EXPEDITION_DOING )
  {
    if ( ExpeditionComp::isExpeditionTimerActive(this) )
      return 0;
    started = proto::AvatarExpeditionBin::start_time(&this->bin_data_);
    shorten_ratio = proto::AvatarExpeditionBin::shorten_ratio(&this->bin_data_);
    v3 = (float)(int)proto::AvatarExpeditionBin::hour_time(&this->bin_data_);
    if ( now_sec >= started + ExpeditionComp::hourToSec(this, v3, shorten_ratio) )
    {
      ExpeditionComp::finishExpedition(this, 0);
    }
    else
    {
      v4 = proto::AvatarExpeditionBin::start_time(&this->bin_data_);
      shorten_ratioa = proto::AvatarExpeditionBin::shorten_ratio(&this->bin_data_);
      v5 = (float)(int)proto::AvatarExpeditionBin::hour_time(&this->bin_data_);
      v6 = v4 + ExpeditionComp::hourToSec(this, v5, shorten_ratioa) - now_sec;
      ret = ExpeditionComp::startExpeditionTimer(this, v6);
      if ( ret )
        return ret;
    }
  }
  return 0;
};

// Line 60: range 00000000150A41D2-00000000150A41E0
int32_t __cdecl ExpeditionComp::onDisconnect(ExpeditionComp *const this)
{
  return 0;
};

// Line 65: range 00000000150A41E2-00000000150A421A
int32_t __cdecl ExpeditionComp::fromFormalAvatarBin(
        ExpeditionComp *const this,
        const proto::FormalAvatarBin *formal_avatar_bin)
{
  const proto::AvatarExpeditionBin *v2; // rax

  v2 = proto::FormalAvatarBin::expedition_data(formal_avatar_bin);
  proto::AvatarExpeditionBin::operator=(&this->bin_data_, v2);
  return 0;
};

// Line 71: range 00000000150A421C-00000000150A4257
int32_t __cdecl ExpeditionComp::toFormalAvatarBin(
        const ExpeditionComp *const this,
        proto::FormalAvatarBin *formal_avatar_bin)
{
  proto::AvatarExpeditionBin *v2; // rax

  v2 = proto::FormalAvatarBin::mutable_expedition_data(formal_avatar_bin);
  proto::AvatarExpeditionBin::operator=(v2, &this->bin_data_);
  return 0;
};

// Line 78: range 00000000150A4258-00000000150A4306
int32_t __cdecl ExpeditionComp::toClientInfo(const ExpeditionComp *const this, proto::AvatarExpeditionInfo *info)
{
  proto::AvatarExpeditionState State; // edx
  google::protobuf::uint32 v3; // edx
  google::protobuf::uint32 v4; // edx
  google::protobuf::uint32 started; // edx
  float v6; // xmm0_4

  State = ExpeditionComp::getState(this);
  proto::AvatarExpeditionInfo::set_state(info, State);
  v3 = proto::AvatarExpeditionBin::exp_id(&this->bin_data_);
  proto::AvatarExpeditionInfo::set_exp_id(info, v3);
  v4 = proto::AvatarExpeditionBin::hour_time(&this->bin_data_);
  proto::AvatarExpeditionInfo::set_hour_time(info, v4);
  started = proto::AvatarExpeditionBin::start_time(&this->bin_data_);
  proto::AvatarExpeditionInfo::set_start_time(info, started);
  v6 = proto::AvatarExpeditionBin::shorten_ratio(&this->bin_data_);
  proto::AvatarExpeditionInfo::set_shorten_ratio(info, v6);
  return 0;
};

// Line 88: range 00000000150A4308-00000000150A433A
int32_t __cdecl ExpeditionComp::toClient(const ExpeditionComp *const this, proto::AvatarInfo *avatar_info)
{
  proto::AvatarExpeditionState State; // edx

  State = ExpeditionComp::getState(this);
  proto::AvatarInfo::set_expedition_state(avatar_info, State);
  return 0;
};

// Line 94: range 00000000150A433C-00000000150A434A
int32_t __cdecl ExpeditionComp::init(ExpeditionComp *const this)
{
  return 0;
};

// Line 99: range 00000000150A434C-00000000150A4FC5
__int64 __fastcall ExpeditionComp::startExpedition(ExpeditionComp *const this, uint32_t ID, uint32_t hour_time)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  unsigned int v9; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  FormalAvatar *formal_avatar; // rsi
  FormalAvatar *v13; // rax
  unsigned __int64 v14; // rax
  bool v15; // r14
  common::milog::MiLogStream *v16; // rax
  std::vector<data::ExpeditionReward>::const_reference v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  FormalAvatar *v21; // rsi
  FormalAvatar *v22; // rax
  unsigned __int64 v23; // rax
  TalentComp *TalentComp; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v25; // rax
  _DWORD *v26; // rdx
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput> >,false,false>::pointer v27; // rax
  uint32_t city_id; // ecx
  const float *v29; // rax
  _DWORD *v30; // rdx
  const float *v31; // rax
  _DWORD *v32; // rdx
  uint32_t v33; // eax
  uint32_t NowSec; // eax
  uint64_t Transaction; // rax
  Player *v36; // rax
  PlayerEventComp *EventComp; // r14
  __int64 result; // rax
  bool find_flag; // [rsp+1Fh] [rbp-171h]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-170h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-168h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput> >,false> __y; // [rsp+30h] [rbp-160h] BYREF
  size_t i; // [rsp+38h] [rbp-158h]
  const data::ExpeditionDataExcelConfig *expedition_config_ptr; // [rsp+40h] [rbp-150h]
  std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-148h]
  const std::unordered_map<unsigned int,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput>> *proud_expedition_config_map; // [rsp+50h] [rbp-140h]
  const LifeEffectExpeditionShortenTime *config_ptr; // [rsp+58h] [rbp-138h]
  std::shared_ptr<AvatarExpeditionStartEvent> __r; // [rsp+60h] [rbp-130h] BYREF
  std::shared_ptr<Player> v50; // [rsp+70h] [rbp-120h] BYREF
  std::vector<unsigned int> v51; // [rsp+80h] [rbp-110h] BYREF
  common::milog::MiLogStream v52; // [rsp+A0h] [rbp-F0h] BYREF
  char v53[208]; // [rsp+C0h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 17 shorten_ratio:139 48 4 18 proud_skill_id:140 64 4 5 ID:98 80 4 12 hour_time:98 96 8 8 "
                        "iter:143 128 16 14 player_ptr:132";
  *(_QWORD *)(v3 + 16) = ExpeditionComp::startExpedition;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -202178560;
  *(_DWORD *)(v3 + 64) = ID;
  *(_DWORD *)(v3 + 80) = hour_time;
  if ( ExpeditionComp::getState(this) )
  {
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/avatar/expedition/expedition_comp.cpp",
      "startExpedition",
      102);
    v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v52,
           (const char (*)[34])"start expedition state error ID: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 64));
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" state: ");
    *(_DWORD *)(v3 + 48) = ExpeditionComp::getState(this);
    common::milog::MiLogStream::operator<<<proto::AvatarExpeditionState,(proto::AvatarExpeditionState*)0>(
      v8,
      (const proto::AvatarExpeditionState *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v52);
    v9 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v50);
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v50);
    expedition_config_ptr = ExpeditionDataExcelConfigMgr::findExpeditionConfigByID(
                              &v10->design_config.txt_config_mgr.expedition_config_mgr,
                              *(_DWORD *)(v3 + 64));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v50);
    if ( expedition_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->formal_avatar_);
      formal_avatar = this->formal_avatar_;
      v13 = formal_avatar;
      if ( *(_BYTE *)(((unsigned __int64)formal_avatar >> 3) + 0x7FFF8000) )
        v13 = (FormalAvatar *)__asan_report_load8(this->formal_avatar_);
      v14 = *(_QWORD *)v13->baseclass_0 + 152LL;
      if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        v14 = __asan_report_load8(v14);
      (*(void (__fastcall **)(std::shared_ptr<Player> *, FormalAvatar *))v14)(&v50, formal_avatar);
      v15 = !ExpeditionComp::isExpeditionOpened(expedition_config_ptr, &v50);
      std::shared_ptr<Player>::~shared_ptr(&v50);
      if ( v15 )
      {
        common::milog::MiLogStream::create(
          &v52,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/avatar/expedition/expedition_comp.cpp",
          "startExpedition",
          114);
        v16 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                &v52,
                (const char (*)[27])"expedition not opened ID: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream(&v52);
        v9 = -1;
      }
      else
      {
        find_flag = 0;
        for ( i = 0LL; i < std::vector<data::ExpeditionReward>::size(&expedition_config_ptr->time_reward_vec); ++i )
        {
          v17 = std::vector<data::ExpeditionReward>::operator[](&expedition_config_ptr->time_reward_vec, i);
          if ( *(_BYTE *)(((unsigned __int64)&v17->htime >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v17->htime >> 3) + 0x7FFF8000) <= 3 )
          {
            v17 = (std::vector<data::ExpeditionReward>::const_reference)__asan_report_load4(&v17->htime);
          }
          if ( v17->htime == *(_DWORD *)(v3 + 80) )
          {
            find_flag = 1;
            break;
          }
        }
        if ( !find_flag )
        {
          common::milog::MiLogStream::create(
            &v52,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/avatar/expedition/expedition_comp.cpp",
            "startExpedition",
            128);
          v18 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                  &v52,
                  (const char (*)[32])"expedition time_hour error ID: ");
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v18,
                  (const unsigned int *)(v3 + 64));
          v20 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v19, (const char (*)[8])" hour: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream(&v52);
          v9 = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->formal_avatar_);
          v21 = this->formal_avatar_;
          v22 = v21;
          if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
            v22 = (FormalAvatar *)__asan_report_load8(this->formal_avatar_);
          v23 = *(_QWORD *)v22->baseclass_0 + 152LL;
          if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
            v23 = __asan_report_load8(v23);
          (*(void (__fastcall **)(unsigned __int64, FormalAvatar *))v23)(v3 + 128, v21);
          if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 128), 0LL) )
          {
            v9 = -1;
          }
          else
          {
            *(_DWORD *)(v3 + 32) = 0;
            if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->formal_avatar_);
            TalentComp = Avatar::getTalentComp(this->formal_avatar_);
            TalentComp::getProudSkills(&v51, TalentComp);
            __for_range = &v51;
            __for_begin._M_current = std::vector<unsigned int>::begin(&v51)._M_current;
            __for_end._M_current = std::vector<unsigned int>::end(&v51)._M_current;
            while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
            {
              v25 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
              v26 = v25;
              if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v25);
              }
              *(_DWORD *)(v3 + 48) = *v26;
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v50);
              proud_expedition_config_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v50)->design_config.txt_config_mgr.avatar_talent_config_mgr.proud_expedition_config_map;
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v50);
              *(std::unordered_map<unsigned int,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput>>::find(proud_expedition_config_map, (const std::unordered_map<unsigned int,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput>>::key_type *)(v3 + 48));
              __y._M_cur = std::unordered_map<unsigned int,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput>>::end(proud_expedition_config_map)._M_cur;
              if ( !std::__detail::operator==<std::pair<unsigned int const,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput>>,false>(
                      (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput> >,false> *)(v3 + 96),
                      &__y) )
              {
                v27 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput> >,false,false> *const)(v3 + 96));
                config_ptr = std::get_if<LifeEffectExpeditionShortenTime,LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput>(&v27->second);
                if ( config_ptr )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&expedition_config_ptr->city_id >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)expedition_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&expedition_config_ptr->city_id >> 3)
                                                                                         + 0x7FFF8000) )
                  {
                    __asan_report_load4(&expedition_config_ptr->city_id);
                  }
                  city_id = expedition_config_ptr->city_id;
                  if ( *(_BYTE *)(((unsigned __int64)config_ptr >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)config_ptr & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_ptr >> 3)
                                                                                 + 0x7FFF8000) )
                  {
                    __asan_report_load4(config_ptr);
                  }
                  if ( city_id == config_ptr->city_id )
                  {
                    v29 = std::max<float>((const float *)(v3 + 32), &config_ptr->shorten_ratio);
                    v30 = v29;
                    if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v29);
                    }
                    *(_DWORD *)(v3 + 32) = *v30;
                  }
                }
              }
              __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
            }
            std::vector<unsigned int>::~vector(&v51);
            *(_DWORD *)(v3 + 48) = 1065353216;
            v31 = std::min<float>((const float *)(v3 + 48), (const float *)(v3 + 32));
            v32 = v31;
            if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v31);
            }
            *(_DWORD *)(v3 + 32) = *v32;
            v33 = ExpeditionComp::hourToSec(this, (float)*(int *)(v3 + 80), *(float *)(v3 + 32));
            if ( ExpeditionComp::startExpeditionTimer(this, v33) )
            {
              v9 = -1;
            }
            else
            {
              proto::AvatarExpeditionBin::set_state(&this->bin_data_, 1u);
              proto::AvatarExpeditionBin::set_exp_id(&this->bin_data_, *(_DWORD *)(v3 + 64));
              proto::AvatarExpeditionBin::set_hour_time(&this->bin_data_, *(_DWORD *)(v3 + 80));
              NowSec = ExpeditionComp::getNowSec(this);
              proto::AvatarExpeditionBin::set_start_time(&this->bin_data_, NowSec);
              Transaction = ExpeditionComp::createTransaction(this);
              proto::AvatarExpeditionBin::set_transaction(&this->bin_data_, Transaction);
              proto::AvatarExpeditionBin::set_shorten_ratio(&this->bin_data_, *(float *)(v3 + 32));
              ExpeditionComp::logExpeditionStart(this, 0);
              v36 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              EventComp = Player::getEventComp(v36);
              if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->formal_avatar_);
              __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput> >,false>::__node_type *)Avatar::getGuid(this->formal_avatar_);
              *(_DWORD *)(v3 + 48) = proto::AvatarExpeditionBin::exp_id(&this->bin_data_);
              common::tools::perf::make_shared<AvatarExpeditionStartEvent,unsigned int,unsigned long>(
                (unsigned int *)&__r,
                (unsigned __int64 *)(v3 + 48),
                (unsigned int *)&__y,
                (unsigned __int64 *)(v3 + 48));
              std::shared_ptr<BaseEvent>::shared_ptr<AvatarExpeditionStartEvent,void>(
                (std::shared_ptr<BaseEvent> *const)&v50,
                &__r);
              PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v50);
              std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v50);
              std::shared_ptr<AvatarExpeditionStartEvent>::~shared_ptr(&__r);
              v9 = 0;
            }
          }
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 128));
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v52,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/expedition/expedition_comp.cpp",
        "startExpedition",
        109);
      v11 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(&v52, (const char (*)[44])off_256F6A80);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v52);
      v9 = -1;
    }
  }
  result = v9;
  if ( v53 == (char *)v3 )
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

// Line 180: range 00000000150A4FC6-00000000150A5EE8
int __cdecl ExpeditionComp::takeReward(ExpeditionComp *const this, proto::AvatarExpeditionGetRewardRsp *rsp_0)
{
  float extra_ratio; // xmm1_4
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int v7; // r14d
  FormalAvatar *formal_avatar; // rsi
  FormalAvatar *v9; // rax
  unsigned __int64 v10; // rax
  uint32_t v11; // eax
  common::milog::MiLogStream *v12; // r14
  std::vector<data::ExpeditionReward>::const_reference v13; // rax
  std::vector<data::ExpeditionReward>::const_reference v14; // rdx
  uint32_t *p_reward_drop_id; // rax
  Player *v16; // rax
  PlayerItemComp *ItemComp; // rax
  Player *v18; // rax
  uint32_t LogLevel; // eax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  google::protobuf::RepeatedPtrField<proto::ItemParam> *v23; // rax
  TalentComp *TalentComp; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v25; // rax
  _DWORD *v26; // rdx
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput> >,false,false>::pointer v27; // rax
  uint32_t city_id; // ecx
  common::milog::MiLogStream *v29; // rax
  const float *v30; // rax
  _DWORD *v31; // rdx
  Player *v32; // rax
  google::protobuf::RepeatedPtrField<proto::ItemParam> *v33; // rax
  Player *v34; // rax
  PlayerItemComp *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  int result; // eax
  ExpeditionDataExcelConfigMgr *drop_id; // [rsp+8h] [rbp-2B8h]
  uint32_t drop_ida; // [rsp+8h] [rbp-2B8h]
  float mem_func; // [rsp+10h] [rbp-2B0h]
  int ret; // [rsp+38h] [rbp-288h]
  uint32_t htime; // [rsp+3Ch] [rbp-284h]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+40h] [rbp-280h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+48h] [rbp-278h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput> >,false> __y; // [rsp+50h] [rbp-270h] BYREF
  size_t i; // [rsp+58h] [rbp-268h]
  const data::ExpeditionDataExcelConfig *config_ptr; // [rsp+60h] [rbp-260h]
  std::vector<unsigned int> *__for_range; // [rsp+68h] [rbp-258h]
  const std::unordered_map<unsigned int,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput>> *proud_expedition_config_map; // [rsp+70h] [rbp-250h]
  const LifeEffectExpeditionExtraOutput *life_effect_config_ptr; // [rsp+78h] [rbp-248h]
  std::shared_ptr<Config> v55; // [rsp+80h] [rbp-240h] BYREF
  std::vector<unsigned int> v56; // [rsp+90h] [rbp-230h] BYREF
  common::milog::MiLogStream v57; // [rsp+B0h] [rbp-210h] BYREF
  char v58[496]; // [rsp+D0h] [rbp-1F0h] BYREF

  v3 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(448LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 32 4 11 drop_id:199 48 4 19 max_extra_ratio:226 64 4 18 proud_skill_id:227 80 8 8 iter:230 11"
                        "2 8 17 output_result:213 144 16 14 player_ptr:186 176 24 18 item_param_vec:200 240 24 17 action_"
                        "reason:206 304 24 18 extra_item_vec:260 368 48 19 output_item_map:259";
  *(_QWORD *)(v3 + 16) = ExpeditionComp::takeReward;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = -218959360;
  v5[536862727] = 62194;
  v5[536862728] = -218959360;
  v5[536862729] = 62194;
  v5[536862730] = -218959360;
  v5[536862731] = 62194;
  v5[536862733] = -202116109;
  if ( ExpeditionComp::getState(this) != AVATAR_EXPEDITION_FINISH_WAIT_REWARD
    && ExpeditionComp::getState(this) != AVATAR_EXPEDITION_CALLBACK_WAIT_REWARD )
  {
    v7 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->formal_avatar_);
    formal_avatar = this->formal_avatar_;
    v9 = formal_avatar;
    if ( *(_BYTE *)(((unsigned __int64)formal_avatar >> 3) + 0x7FFF8000) )
      v9 = (FormalAvatar *)__asan_report_load8(this->formal_avatar_);
    v10 = *(_QWORD *)v9->baseclass_0 + 152LL;
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8(v10);
    (*(void (__fastcall **)(unsigned __int64, FormalAvatar *))v10)(v3 + 144, formal_avatar);
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 144), 0LL) )
    {
      v7 = -1;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v55);
      drop_id = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v55)->design_config.txt_config_mgr.expedition_config_mgr;
      v11 = proto::AvatarExpeditionBin::exp_id(&this->bin_data_);
      config_ptr = ExpeditionDataExcelConfigMgr::findExpeditionConfigByID(drop_id, v11);
      std::shared_ptr<Config>::~shared_ptr(&v55);
      if ( config_ptr )
      {
        ret = -1;
        *(_DWORD *)(v3 + 32) = 0;
        std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 176));
        for ( i = 0LL; i < std::vector<data::ExpeditionReward>::size(&config_ptr->time_reward_vec); ++i )
        {
          v13 = std::vector<data::ExpeditionReward>::operator[](&config_ptr->time_reward_vec, i);
          if ( *(_BYTE *)(((unsigned __int64)&v13->htime >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v13->htime >> 3) + 0x7FFF8000) <= 3 )
          {
            v13 = (std::vector<data::ExpeditionReward>::const_reference)__asan_report_load4(&v13->htime);
          }
          htime = v13->htime;
          if ( htime == proto::AvatarExpeditionBin::hour_time(&this->bin_data_) )
          {
            ActionReason::ActionReason((ActionReason *const)(v3 + 240), ACTION_REASON_EXPEDITION, ITEM_LIMIT_EXPEDITION);
            v14 = std::vector<data::ExpeditionReward>::operator[](&config_ptr->time_reward_vec, i);
            p_reward_drop_id = &v14->reward_drop_id;
            if ( *(_BYTE *)(((unsigned __int64)p_reward_drop_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_reward_drop_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_reward_drop_id >> 3)
                                                                                 + 0x7FFF8000) )
            {
              __asan_report_load4(p_reward_drop_id);
            }
            *(_DWORD *)(v3 + 32) = v14->reward_drop_id;
            v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
            ItemComp = Player::getItemComp(v16);
            ret = PlayerItemComp::checkFrontLooseGrantDropItems(
                    ItemComp,
                    *(_DWORD *)(v3 + 32),
                    1u,
                    (const ActionReason *)(v3 + 240),
                    0LL);
            if ( ret )
            {
              v7 = ret;
              goto LABEL_71;
            }
            drop_ida = *(_DWORD *)(v3 + 32);
            v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
            *(OutputResult *)(v3 + 112) = DropUtils::dropItems(
                                            v18,
                                            drop_ida,
                                            1u,
                                            (const ActionReason *)(v3 + 240),
                                            (std::vector<ItemParam> *)(v3 + 176));
            if ( *(_DWORD *)(v3 + 112) )
            {
              LogLevel = OutputResult::getLogLevel((const OutputResult *const)(v3 + 112));
              common::milog::MiLogStream::create(
                &v57,
                &common::milog::MiLogDefault::default_log_obj_,
                LogLevel,
                "./src/player/avatar/expedition/expedition_comp.cpp",
                "takeReward",
                216);
              v20 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                      &v57,
                      (const char (*)[27])"dropItems failed, drop_id:");
              v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v20,
                      (const unsigned int *)(v3 + 32));
              v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      v21,
                      (const char (*)[16])" expedition_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &config_ptr->id);
              common::milog::MiLogStream::~MiLogStream(&v57);
              v7 = *(_DWORD *)(v3 + 112);
              goto LABEL_71;
            }
            if ( !std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v3 + 176)) )
            {
              v23 = proto::AvatarExpeditionGetRewardRsp::mutable_item_list(rsp_0);
              common::tools::MiscUtils::vectorToRepeated<ItemParam,proto::ItemParam,int (ItemParam::*)(proto::ItemParam&)const>(
                (const std::vector<ItemParam> *)(v3 + 176),
                v23,
                (int (*)(const ItemParam *, proto::ItemParam *))ItemParam::toClient);
              *(_DWORD *)(v3 + 48) = 0;
              if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->formal_avatar_);
              TalentComp = Avatar::getTalentComp(this->formal_avatar_);
              TalentComp::getProudSkills(&v56, TalentComp);
              __for_range = &v56;
              __for_begin._M_current = std::vector<unsigned int>::begin(&v56)._M_current;
              __for_end._M_current = std::vector<unsigned int>::end(&v56)._M_current;
              while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
              {
                v25 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
                v26 = v25;
                if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v25);
                }
                *(_DWORD *)(v3 + 64) = *v26;
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)&v55);
                proud_expedition_config_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v55)->design_config.txt_config_mgr.avatar_talent_config_mgr.proud_expedition_config_map;
                std::shared_ptr<Config>::~shared_ptr(&v55);
                *(std::unordered_map<unsigned int,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput>>::const_iterator *)(v3 + 80) = std::unordered_map<unsigned int,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput>>::find(proud_expedition_config_map, (const std::unordered_map<unsigned int,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput>>::key_type *)(v3 + 64));
                __y._M_cur = std::unordered_map<unsigned int,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput>>::end(proud_expedition_config_map)._M_cur;
                if ( !std::__detail::operator==<std::pair<unsigned int const,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput>>,false>(
                        (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput> >,false> *)(v3 + 80),
                        &__y) )
                {
                  v27 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput> >,false,false> *const)(v3 + 80));
                  life_effect_config_ptr = std::get_if<LifeEffectExpeditionExtraOutput,LifeEffectExpeditionShortenTime,LifeEffectExpeditionExtraOutput>(&v27->second);
                  if ( life_effect_config_ptr )
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->city_id >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->city_id >> 3)
                                                                                + 0x7FFF8000) )
                    {
                      __asan_report_load4(&config_ptr->city_id);
                    }
                    city_id = config_ptr->city_id;
                    if ( *(_BYTE *)(((unsigned __int64)life_effect_config_ptr >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)life_effect_config_ptr & 7) + 3) >= *(_BYTE *)(((unsigned __int64)life_effect_config_ptr >> 3)
                                                                                               + 0x7FFF8000) )
                    {
                      __asan_report_load4(life_effect_config_ptr);
                    }
                    if ( city_id == life_effect_config_ptr->city_id )
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&life_effect_config_ptr->effective_expedition_hour_count >> 3)
                                    + 0x7FFF8000) != 0
                        && (char)((((_BYTE)life_effect_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&life_effect_config_ptr->effective_expedition_hour_count >> 3)
                                                                                             + 0x7FFF8000) )
                      {
                        __asan_report_load4(&life_effect_config_ptr->effective_expedition_hour_count);
                      }
                      if ( htime == life_effect_config_ptr->effective_expedition_hour_count )
                      {
                        if ( *(_BYTE *)(((unsigned __int64)&life_effect_config_ptr->probability >> 3) + 0x7FFF8000) != 0
                          && (char)((((_BYTE)life_effect_config_ptr + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&life_effect_config_ptr->probability >> 3)
                                                                                               + 0x7FFF8000) )
                        {
                          __asan_report_load4(&life_effect_config_ptr->probability);
                        }
                        if ( common::tools::RandomUtils::randomTestProbability(extra_ratio) )
                        {
                          if ( *(_BYTE *)(((unsigned __int64)&life_effect_config_ptr->extra_ratio >> 3) + 0x7FFF8000) != 0
                            && (char)((((_BYTE)life_effect_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&life_effect_config_ptr->extra_ratio >> 3)
                                                                                                  + 0x7FFF8000) )
                          {
                            __asan_report_load4(&life_effect_config_ptr->extra_ratio);
                          }
                          extra_ratio = life_effect_config_ptr->extra_ratio;
                          if ( extra_ratio > 0.0 && (extra_ratio = 1.0, life_effect_config_ptr->extra_ratio < 1.0) )
                          {
                            v30 = std::max<float>((const float *)(v3 + 48), &life_effect_config_ptr->extra_ratio);
                            v31 = v30;
                            if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
                              && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3)
                                                                                    + 0x7FFF8000) )
                            {
                              __asan_report_load4(v30);
                            }
                            *(_DWORD *)(v3 + 48) = *v31;
                          }
                          else
                          {
                            common::milog::MiLogStream::create(
                              &v57,
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/player/avatar/expedition/expedition_comp.cpp",
                              "takeReward",
                              251);
                            v29 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                    &v57,
                                    (const char (*)[21])"invalid extra_ratio:");
                            common::milog::MiLogStream::operator<<<float,(float *)0>(
                              v29,
                              &life_effect_config_ptr->extra_ratio);
                            common::milog::MiLogStream::~MiLogStream(&v57);
                          }
                        }
                      }
                    }
                  }
                }
                __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
              }
              std::vector<unsigned int>::~vector(&v56);
              if ( *(float *)(v3 + 48) > 0.0 && *(float *)(v3 + 48) < 1.0 )
              {
                ItemParam::vecToItemCountMap(
                  (std::map<unsigned int,unsigned int> *)(v3 + 368),
                  (const std::vector<ItemParam> *)(v3 + 176));
                std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 304));
                mem_func = *(float *)(v3 + 48);
                v32 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
                if ( !DropUtils::randomExtraItemsForLifeEffectTalent(
                        v32,
                        (const std::map<unsigned int,unsigned int> *)(v3 + 368),
                        1u,
                        mem_func,
                        (std::vector<ItemParam> *)(v3 + 304),
                        1) )
                {
                  v33 = proto::AvatarExpeditionGetRewardRsp::mutable_extra_item_list(rsp_0);
                  common::tools::MiscUtils::vectorToRepeated<ItemParam,proto::ItemParam,int (ItemParam::*)(proto::ItemParam&)const>(
                    (const std::vector<ItemParam> *)(v3 + 304),
                    v33,
                    (int (*)(const ItemParam *, proto::ItemParam *))ItemParam::toClient);
                  ItemParam::addVecToItemCountMap(
                    (const std::vector<ItemParam> *)(v3 + 304),
                    (std::map<unsigned int,unsigned int> *)(v3 + 368));
                  ItemParam::vecFromItemCountMap(
                    (std::vector<ItemParam> *)&v56,
                    (const std::map<unsigned int,unsigned int> *)(v3 + 368));
                  std::vector<ItemParam>::operator=(
                    (std::vector<ItemParam> *const)(v3 + 176),
                    (std::vector<ItemParam> *)&v56);
                  std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)&v56);
                }
                std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 304));
                std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 368));
              }
              v34 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
              v35 = Player::getItemComp(v34);
              ret = PlayerItemComp::addItemBatch(
                      v35,
                      (const std::vector<ItemParam> *)(v3 + 176),
                      (const ActionReason *)(v3 + 240),
                      0LL);
              if ( ret )
              {
                common::milog::MiLogStream::create(
                  &v57,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/avatar/expedition/expedition_comp.cpp",
                  "takeReward",
                  272);
                v36 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                        &v57,
                        (const char (*)[34])"addItemBatch fail item_param_vec:");
                v37 = common::milog::MiLogStream::operator<<<ItemParam>(v36, (const std::vector<ItemParam> *)(v3 + 176));
                v38 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                        v37,
                        (const char (*)[10])" player: ");
                v39 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
                operator<<(v38, v39);
                common::milog::MiLogStream::~MiLogStream(&v57);
                v7 = ret;
                goto LABEL_71;
              }
            }
            break;
          }
        }
        if ( !ret )
        {
          proto::AvatarExpeditionBin::set_state(&this->bin_data_, 0);
          ExpeditionComp::logExpeditionTakeReward(
            this,
            *(_DWORD *)(v3 + 32),
            (const std::vector<ItemParam> *)(v3 + 176));
        }
        v7 = ret;
LABEL_71:
        std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 176));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v57,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/avatar/expedition/expedition_comp.cpp",
          "takeReward",
          194);
        v12 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v57,
                (const char (*)[35])"find expedition config failed ID: ");
        *(_DWORD *)(v3 + 64) = proto::AvatarExpeditionBin::exp_id(&this->bin_data_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream(&v57);
        v7 = -1;
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 144));
  }
  result = v7;
  if ( v58 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8034) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 290: range 00000000150A5EEA-00000000150A600D
int __cdecl ExpeditionComp::callBack(ExpeditionComp *const this)
{
  common::milog::MiLogStream *v1; // rbx
  proto::AvatarExpeditionState val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  if ( ExpeditionComp::getState(this) == AVATAR_EXPEDITION_DOING )
  {
    proto::AvatarExpeditionBin::set_state(&this->bin_data_, 0);
    ExpeditionComp::stopExpeditionTimer(this);
    ExpeditionComp::logExpeditionFinish(this, 1u);
  }
  else
  {
    if ( ExpeditionComp::getState(this) != AVATAR_EXPEDITION_FINISH_WAIT_REWARD )
    {
      common::milog::MiLogStream::create(
        &v4,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/expedition/expedition_comp.cpp",
        "callBack",
        303);
      v1 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
             &v4,
             (const char (*)[25])"call back failed state: ");
      val = ExpeditionComp::getState(this);
      common::milog::MiLogStream::operator<<<proto::AvatarExpeditionState,(proto::AvatarExpeditionState*)0>(v1, &val);
      common::milog::MiLogStream::~MiLogStream(&v4);
      return -1;
    }
    proto::AvatarExpeditionBin::set_state(&this->bin_data_, 3u);
  }
  return 0;
};

// Line 311: range 00000000150A615C-00000000150A65A1
int __cdecl ExpeditionComp::startExpeditionTimer(ExpeditionComp *const this, uint32_t left_sec)
{
  int v2; // r14d
  std::weak_ptr<FormalAvatar> *v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  FormalAvatar *formal_avatar; // rsi
  FormalAvatar *v7; // rax
  unsigned __int64 v8; // rax
  int v9; // r15d
  PlayerUnixTimer *v10; // rax
  int result; // eax
  ExpeditionComp::startExpeditionTimer::<lambda(uint64_t)> __args_1; // [rsp+20h] [rbp-C0h] BYREF
  std::weak_ptr<FormalAvatar> v14; // [rsp+30h] [rbp-B0h] BYREF
  std::shared_ptr<FormalAvatar> __r; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v16; // [rsp+50h] [rbp-90h] BYREF
  char v17[112]; // [rsp+70h] [rbp-70h] BYREF

  v3 = (std::weak_ptr<FormalAvatar> *)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = (std::weak_ptr<FormalAvatar> *)v4;
  }
  v3->_M_ptr = (std::__weak_ptr<FormalAvatar,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v3->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 21 formal_avatar_wtr:314";
  v3[1]._M_ptr = (std::__weak_ptr<FormalAvatar,(__gnu_cxx::_Lock_policy)2>::element_type *)ExpeditionComp::startExpeditionTimer;
  v5 = (unsigned __int64)v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( !std::operator==<PlayerUnixTimer>(&this->expedition_timer_ptr_, 0LL) )
    goto LABEL_17;
  if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->formal_avatar_);
  toThisPtr<FormalAvatar>((FormalAvatar *)&__r);
  std::weak_ptr<FormalAvatar>::weak_ptr<FormalAvatar,void>(v3 + 2, &__r);
  std::shared_ptr<FormalAvatar>::~shared_ptr(&__r);
  std::weak_ptr<FormalAvatar>::weak_ptr(&v14, v3 + 2);
  if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->formal_avatar_);
  formal_avatar = this->formal_avatar_;
  v7 = formal_avatar;
  if ( *(_BYTE *)(((unsigned __int64)formal_avatar >> 3) + 0x7FFF8000) )
    v7 = (FormalAvatar *)__asan_report_load8(this->formal_avatar_);
  v8 = *(_QWORD *)v7->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8(v8);
  (*(void (__fastcall **)(ExpeditionComp::startExpeditionTimer::<lambda(uint64_t)> *, FormalAvatar *))v8)(
    &__args_1,
    formal_avatar);
  common::tools::perf::make_shared<PlayerUnixTimer,std::shared_ptr<Player>,ExpeditionComp::startExpeditionTimer(unsigned int)::{lambda(unsigned long)#1}>(
    (std::shared_ptr<Player> *)&__r,
    &__args_1,
    (std::shared_ptr<Player> *)&v14,
    &__args_1);
  std::shared_ptr<PlayerUnixTimer>::operator=(&this->expedition_timer_ptr_, (std::shared_ptr<PlayerUnixTimer> *)&__r);
  std::shared_ptr<PlayerUnixTimer>::~shared_ptr((std::shared_ptr<PlayerUnixTimer> *const)&__r);
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&__args_1);
  ExpeditionComp::startExpeditionTimer(unsigned int)::{lambda(unsigned long)#1}::~startExpeditionTimer((ExpeditionComp::startExpeditionTimer::<lambda(uint64_t)> *const)&v14);
  if ( std::operator==<PlayerUnixTimer>(&this->expedition_timer_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/avatar/expedition/expedition_comp.cpp",
      "startExpeditionTimer",
      325);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v16, (const char (*)[20])"create timer failed");
    common::milog::MiLogStream::~MiLogStream(&v16);
    v2 = -1;
    v9 = 0;
  }
  else
  {
    v9 = 1;
  }
  std::weak_ptr<FormalAvatar>::~weak_ptr(v3 + 2);
  if ( v9 == 1 )
  {
LABEL_17:
    if ( !left_sec )
      left_sec = 1;
    v10 = std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->expedition_timer_ptr_);
    if ( PlayerUnixTimer::startS(
           v10,
           left_sec,
           0,
           "./src/player/avatar/expedition/expedition_comp.cpp",
           "startExpeditionTimer",
           334) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/avatar/expedition/expedition_comp.cpp",
        "startExpeditionTimer",
        336);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v16, (const char (*)[19])"start timer failed");
      common::milog::MiLogStream::~MiLogStream(&v16);
      v2 = -1;
    }
    else
    {
      v2 = 0;
    }
  }
  result = v2;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v3->_M_ptr = (std::__weak_ptr<FormalAvatar,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 315: range 00000000150A600E-00000000150A613E
void __cdecl ExpeditionComp::startExpeditionTimer(unsigned int)::{lambda(unsigned long)#1}::operator()(
        const ExpeditionComp::startExpeditionTimer::<lambda(uint64_t)> *const __closure,
        uint64_t player_time_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  ExpeditionComp *ExpeditionComp; // rdx
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 21 formal_avatar_ptr:317";
  *(_QWORD *)(v2 + 16) = ExpeditionComp::startExpeditionTimer(unsigned int)::{lambda(unsigned long)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<FormalAvatar>::lock((const std::weak_ptr<FormalAvatar> *const)(v2 + 32));
  if ( std::operator!=<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v2 + 32)) )
  {
    v5 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    ExpeditionComp = FormalAvatar::getExpeditionComp(v5);
    ExpeditionComp::onExpeditionTimer(ExpeditionComp, player_time_ms);
  }
  std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v2 + 32));
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 315: range 000000001516B692-000000001516B6B7
void __cdecl ExpeditionComp::startExpeditionTimer(unsigned int)::{lambda(unsigned long)#1}::startExpeditionTimer(
        ExpeditionComp::startExpeditionTimer::<lambda(uint64_t)> *const this,
        ExpeditionComp::startExpeditionTimer::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<FormalAvatar>::weak_ptr(&this->__formal_avatar_wtr, &a2->__formal_avatar_wtr);
};

// Line 315: range 000000001516C164-000000001516C189
void __cdecl ExpeditionComp::startExpeditionTimer(unsigned int)::{lambda(unsigned long)#1}::startExpeditionTimer(
        ExpeditionComp::startExpeditionTimer::<lambda(uint64_t)> *const this,
        const ExpeditionComp::startExpeditionTimer::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<FormalAvatar>::weak_ptr(&this->__formal_avatar_wtr, &a2->__formal_avatar_wtr);
};

// Line 315: range 00000000150A6140-00000000150A615A
void __cdecl ExpeditionComp::startExpeditionTimer(unsigned int)::{lambda(unsigned long)#1}::~startExpeditionTimer(
        ExpeditionComp::startExpeditionTimer::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<FormalAvatar>::~weak_ptr(&this->__formal_avatar_wtr);
};

// Line 345: range 00000000150A65A2-00000000150A660D
void __cdecl ExpeditionComp::stopExpeditionTimer(ExpeditionComp *const this)
{
  std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax

  if ( std::operator!=<PlayerUnixTimer>(&this->expedition_timer_ptr_, 0LL) )
  {
    v1 = std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->expedition_timer_ptr_);
    if ( common::tools::MiTimer::isActive(v1) )
    {
      v3 = std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->expedition_timer_ptr_);
      common::tools::MiTimer::cancel(v3);
    }
  }
};

// Line 353: range 00000000150A660E-00000000150A666C
bool __cdecl ExpeditionComp::isExpeditionTimerActive(ExpeditionComp *const this)
{
  std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  bool v2; // al

  v2 = 0;
  if ( std::operator!=<PlayerUnixTimer>(&this->expedition_timer_ptr_, 0LL) )
  {
    v1 = std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->expedition_timer_ptr_);
    if ( common::tools::MiTimer::isActive(v1) )
      return 1;
  }
  return v2;
};

// Line 363: range 00000000150A666E-00000000150A6744
void __cdecl ExpeditionComp::onExpeditionTimer(ExpeditionComp *const this, uint64_t player_time_ms)
{
  common::milog::MiLogStream *v2; // rbx
  proto::AvatarExpeditionState val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  if ( ExpeditionComp::getState(this) == AVATAR_EXPEDITION_DOING )
  {
    ExpeditionComp::finishExpedition(this, 1);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/expedition/expedition_comp.cpp",
      "onExpeditionTimer",
      366);
    v2 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v4,
           (const char (*)[25])" state error cur_state: ");
    val = ExpeditionComp::getState(this);
    common::milog::MiLogStream::operator<<<proto::AvatarExpeditionState,(proto::AvatarExpeditionState*)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v4);
    ExpeditionComp::stopExpeditionTimer(this);
  }
};

// Line 377: range 00000000150A6746-00000000150A6A7C
void __cdecl ExpeditionComp::finishExpedition(ExpeditionComp *const this, bool notify)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  FormalAvatar *formal_avatar; // rsi
  FormalAvatar *v6; // rax
  unsigned __int64 v7; // rax
  Player *v8; // rax
  PlayerAvatarComp *AvatarComp; // rax
  Player *v10; // rax
  PlayerAvatarComp *v11; // rax
  Player *v12; // rax
  PlayerEventComp *EventComp; // r14
  unsigned __int64 __args_1; // [rsp+10h] [rbp-A0h] BYREF
  unsigned int __args_0[2]; // [rsp+18h] [rbp-98h] BYREF
  std::shared_ptr<AvatarExpeditionFinishEvent> __r; // [rsp+20h] [rbp-90h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+30h] [rbp-80h] BYREF
  char v18[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 player_ptr:385";
  *(_QWORD *)(v2 + 16) = ExpeditionComp::finishExpedition;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  proto::AvatarExpeditionBin::set_state(&this->bin_data_, 2u);
  ExpeditionComp::stopExpeditionTimer(this);
  if ( notify )
    ExpeditionComp::notifyClient(this);
  ExpeditionComp::logExpeditionFinish(this, 2u);
  if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->formal_avatar_);
  formal_avatar = this->formal_avatar_;
  v6 = formal_avatar;
  if ( *(_BYTE *)(((unsigned __int64)formal_avatar >> 3) + 0x7FFF8000) )
    v6 = (FormalAvatar *)__asan_report_load8(this->formal_avatar_);
  v7 = *(_QWORD *)v6->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(v7);
  (*(void (__fastcall **)(unsigned __int64, FormalAvatar *))v7)(v2 + 32, formal_avatar);
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
  {
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    AvatarComp = Player::getAvatarComp(v8);
    HIDWORD(__args_1) = PlayerAvatarComp::getTotalExpeditionNum(AvatarComp);
    v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v11 = Player::getAvatarComp(v10);
    PlayerAvatarComp::setTotalExpeditionNum(v11, HIDWORD(__args_1) + 1);
    v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    EventComp = Player::getEventComp(v12);
    if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->formal_avatar_);
    *(_QWORD *)__args_0 = Avatar::getGuid(this->formal_avatar_);
    LODWORD(__args_1) = proto::AvatarExpeditionBin::exp_id(&this->bin_data_);
    common::tools::perf::make_shared<AvatarExpeditionFinishEvent,unsigned int,unsigned long>(
      (unsigned int *)&__r,
      &__args_1,
      __args_0,
      &__args_1);
    std::shared_ptr<BaseEvent>::shared_ptr<AvatarExpeditionFinishEvent,void>(&p_event_ptr, &__r);
    PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
    std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
    std::shared_ptr<AvatarExpeditionFinishEvent>::~shared_ptr(&__r);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 395: range 00000000150A6A7E-00000000150A6BD4
void __cdecl ExpeditionComp::getAllOpenedExpedition(std::vector<unsigned int> *opened_id_vec, PlayerPtr *p_player_ptr)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  bool isExpeditionOpened; // bl
  std::unordered_map<unsigned int,data::ExpeditionDataExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,data::ExpeditionDataExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  const std::unordered_map<unsigned int,data::ExpeditionDataExcelConfig> *config_map; // [rsp+28h] [rbp-38h]
  const std::unordered_map<unsigned int,data::ExpeditionDataExcelConfig> *__for_range; // [rsp+30h] [rbp-30h]
  const std::pair<unsigned int const,data::ExpeditionDataExcelConfig> *config; // [rsp+38h] [rbp-28h]
  PlayerPtr v9[2]; // [rsp+40h] [rbp-20h] BYREF

  std::vector<unsigned int>::clear(opened_id_vec);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v9);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v9);
  config_map = ExpeditionDataExcelConfigMgr::getAllExpeditionConfig(&v2->design_config.txt_config_mgr.expedition_config_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)v9);
  __for_range = config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::ExpeditionDataExcelConfig>::begin(config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::ExpeditionDataExcelConfig>::end(config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ExpeditionDataExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    config = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ExpeditionDataExcelConfig>,false,false>::operator*(&__for_begin);
    std::shared_ptr<Player>::shared_ptr(v9, p_player_ptr);
    isExpeditionOpened = ExpeditionComp::isExpeditionOpened(&config->second, v9);
    std::shared_ptr<Player>::~shared_ptr(v9);
    if ( isExpeditionOpened )
      std::vector<unsigned int>::push_back(opened_id_vec, &config->first);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ExpeditionDataExcelConfig>,false,false>::operator++(&__for_begin);
  }
};

// Line 408: range 00000000150A6BD6-00000000150A6F47
bool __cdecl ExpeditionComp::isExpeditionOpened(
        const data::ExpeditionDataExcelConfig *config_ptr,
        PlayerPtr *p_player_ptr)
{
  Player *v4; // rax
  PlayerGmComp *GmComp; // rax
  bool v6; // bl
  uint32_t *p_para; // rax
  int type; // eax
  Player *v9; // rax
  PlayerBasicComp *BasicComp; // rax
  uint32_t Level; // ecx
  Player *v12; // rax
  PlayerSceneComp *SceneComp; // rdi
  uint32_t para; // edx
  Player *v15; // rax
  PlayerQuestComp *QuestComp; // rcx
  size_t i; // [rsp+10h] [rbp-60h]
  const data::ExpeditionOpenCondition *cond; // [rsp+18h] [rbp-58h]
  std::unordered_set<unsigned int> v20; // [rsp+20h] [rbp-50h] BYREF

  if ( !config_ptr || std::operator==<Player>(p_player_ptr, 0LL) )
    return 0;
  v4 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
  GmComp = Player::getGmComp(v4);
  PlayerGmComp::getGmSetValue<std::unordered_set<unsigned int>>(&v20, GmComp, 1u);
  v6 = std::unordered_set<unsigned int>::count(&v20, &config_ptr->id) != 0;
  std::unordered_set<unsigned int>::~unordered_set(&v20);
  if ( v6 )
    return 1;
  for ( i = 0LL; i < std::vector<data::ExpeditionOpenCondition>::size(&config_ptr->open_condition_vec); ++i )
  {
    cond = std::vector<data::ExpeditionOpenCondition>::at(&config_ptr->open_condition_vec, i);
    p_para = &cond->para;
    if ( *(_BYTE *)(((unsigned __int64)p_para >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_para & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_para >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_para);
    }
    if ( cond->para )
    {
      if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&cond->type);
      }
      type = cond->type;
      if ( type == 2 )
      {
        v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
        QuestComp = Player::getQuestComp(v15);
        if ( *(_BYTE *)(((unsigned __int64)&cond->para >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->para >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&cond->para);
        }
        if ( PlayerQuestComp::getQuestState(QuestComp, cond->para) != QUEST_STATE_FINISHED )
          return 0;
      }
      else if ( type <= 2 )
      {
        if ( type )
        {
          if ( type == 1 )
          {
            v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
            SceneComp = Player::getSceneComp(v12);
            if ( *(_BYTE *)(((unsigned __int64)&cond->para >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->para >> 3) + 0x7FFF8000) )
            {
              SceneComp = (PlayerSceneComp *)&cond->para;
              __asan_report_load4(&cond->para);
            }
            para = cond->para;
            if ( *(_BYTE *)(((unsigned __int64)&cond->para2 >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&cond->para2 >> 3) + 0x7FFF8000) <= 3 )
            {
              SceneComp = (PlayerSceneComp *)&cond->para2;
              __asan_report_load4(&cond->para2);
            }
            if ( !PlayerSceneComp::isPointUnlocked(SceneComp, cond->para2, para) )
              return 0;
          }
        }
        else
        {
          v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
          BasicComp = Player::getBasicComp(v9);
          Level = PlayerBasicComp::getLevel(BasicComp);
          if ( *(_BYTE *)(((unsigned __int64)&cond->para >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->para >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&cond->para);
          }
          if ( Level < cond->para )
            return 0;
        }
      }
    }
  }
  return 1;
};

// Line 461: range 00000000150A6F48-00000000150A6F83
void __cdecl ExpeditionComp::resetStateGM(ExpeditionComp *const this)
{
  proto::AvatarExpeditionBin::set_state(&this->bin_data_, 0);
  ExpeditionComp::stopExpeditionTimer(this);
  ExpeditionComp::notifyClient(this);
};

// Line 469: range 00000000150A6F84-00000000150A716A
void __cdecl ExpeditionComp::notifyClient(ExpeditionComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<proto::AvatarExpeditionDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  google::protobuf::Map<long unsigned int,proto::AvatarExpeditionInfo> *v5; // r14
  proto::AvatarExpeditionInfo *v6; // rdx
  FormalAvatar *formal_avatar; // r14
  google::protobuf::Map<long unsigned int,proto::AvatarExpeditionInfo>::key_type key; // [rsp+18h] [rbp-88h] BYREF
  std::shared_ptr<proto::AvatarExpeditionDataNotify> __r; // [rsp+20h] [rbp-80h] BYREF
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 notify_ptr:470";
  *(_QWORD *)(v1 + 16) = ExpeditionComp::notifyClient;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::AvatarExpeditionDataNotify>();
  v4 = std::__shared_ptr_access<proto::AvatarExpeditionDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::AvatarExpeditionDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  v5 = proto::AvatarExpeditionDataNotify::mutable_expedition_info_map(v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->formal_avatar_);
  key = Avatar::getGuid(this->formal_avatar_);
  v6 = google::protobuf::Map<unsigned long,proto::AvatarExpeditionInfo>::operator[](v5, &key);
  ExpeditionComp::toClientInfo(this, v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->formal_avatar_);
  formal_avatar = this->formal_avatar_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::AvatarExpeditionDataNotify>(&__r);
  Avatar::sendMessage(formal_avatar, (common::minet::ConstMessagePtr *)&__r);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::AvatarExpeditionDataNotify>::~shared_ptr((std::shared_ptr<proto::AvatarExpeditionDataNotify> *const)(v1 + 32));
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 477: range 00000000150A716C-00000000150A718B
uint32_t __cdecl ExpeditionComp::getNowSec(ExpeditionComp *const this)
{
  return common::tools::TimeUtils::getNow() + ExpeditionComp::sec_offset_gm_;
};

// Line 483: range 00000000150A718C-00000000150A71AC
void __cdecl ExpeditionComp::addSecOffsetGM(uint32_t sec)
{
  ExpeditionComp::sec_offset_gm_ += sec;
};

// Line 489: range 00000000150A71AE-00000000150A71E3
void __cdecl ExpeditionComp::finishExpeditionGM(ExpeditionComp *const this)
{
  if ( ExpeditionComp::getState(this) == AVATAR_EXPEDITION_DOING )
    ExpeditionComp::finishExpedition(this, 1);
};

// Line 498: range 00000000150A71E4-00000000150A73B0
__int64 __fastcall ExpeditionComp::hourToSec(ExpeditionComp *const this, float hour, float shorten_ratio)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  const float *v6; // rax
  const float *v7; // rax
  _DWORD *v8; // rdx
  unsigned int *v9; // rax
  unsigned int *v10; // rdx
  __int64 result; // rax
  float __a; // [rsp+18h] [rbp-68h] BYREF
  float v13; // [rsp+1Ch] [rbp-64h] BYREF
  char v14[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 17 shorten_ratio:497";
  *(_QWORD *)(v3 + 16) = ExpeditionComp::hourToSec;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(float *)(v3 + 32) = shorten_ratio;
  __a = 1.0;
  v6 = std::min<float>(&__a, (const float *)(v3 + 32));
  v13 = 0.0;
  v7 = std::max<float>(&v13, v6);
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v7);
  }
  *(_DWORD *)(v3 + 32) = *v8;
  LODWORD(v13) = (int)(float)((float)(1.0 - *(float *)(v3 + 32)) * (float)(hour * 3600.0));
  LODWORD(__a) = 1;
  v9 = (unsigned int *)std::max<unsigned int>((const unsigned int *)&__a, (const unsigned int *)&v13);
  v10 = v9;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v9);
  }
  result = *v10;
  if ( v14 == (char *)v3 )
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

// Line 505: range 00000000150A73B2-00000000150A73E7
uint64_t __cdecl ExpeditionComp::createTransaction(ExpeditionComp *const this)
{
  time_t v1; // rcx
  uint32_t v2; // eax

  v1 = common::tools::TimeUtils::getNow() << 32;
  v2 = ExpeditionComp::createTransaction(void)::seq++;
  return v1 | v2;
};

// Line 513: range 00000000150A73E8-00000000150A7AEC
// local variable allocation has failed, the output may be wrong!
void __cdecl ExpeditionComp::logExpeditionStart(ExpeditionComp *const this, bool is_leave_team)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rsi
  _QWORD *v6; // rax
  unsigned __int64 v7; // rax
  common::milog::MiLogStream *v8; // r14
  ExpeditionDataExcelConfigMgr *p_expedition_config_mgr; // r14
  uint32_t v10; // eax
  common::milog::MiLogStream *v11; // r14
  Player *v12; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  uint32_t AvatarId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // r14
  Player *v20; // rax
  PlayerAvatarComp *AvatarComp; // rax
  uint32_t AvatarExpeditionCountLimit; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // r14
  google::protobuf::uint32 v24; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // r14
  google::protobuf::uint64 v26; // rax
  Player *v27; // r14
  std::string v28; // [rsp+0h] [rbp-120h] OVERLAPPED BYREF
  unsigned __int64 val; // [rsp+20h] [rbp-100h] BYREF
  const data::ExpeditionDataExcelConfig *expedition_config_ptr; // [rsp+28h] [rbp-F8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> v32; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v33; // [rsp+50h] [rbp-D0h] BYREF
  char v34[176]; // [rsp+70h] [rbp-B0h] BYREF

  v28._M_string_length = (std::string::size_type)this;
  BYTE4(v28._M_dataplus._M_p) = is_leave_team;
  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 22 log_context_holder:527 64 16 14 player_ptr:514 96 16 11 log_ptr:529";
  *(_QWORD *)(v2 + 16) = ExpeditionComp::logExpeditionStart;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( *(_BYTE *)(((v28._M_string_length + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v28._M_string_length + 8);
  v5 = *(_QWORD *)(v28._M_string_length + 8);
  v6 = (_QWORD *)v5;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v6 = (_QWORD *)__asan_report_load8(*(_QWORD *)(v28._M_string_length + 8));
  v7 = *v6 + 152LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(v7);
  (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v7)(v2 + 64, v5);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/expedition/expedition_comp.cpp",
      "logExpeditionStart",
      517);
    v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v33,
           (const char (*)[37])" get player_ptr failed avatar_guid: ");
    if ( *(_BYTE *)(((v28._M_string_length + 8) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v28._M_string_length + 8);
    val = Avatar::getGuid(*(const Avatar *const *)(v28._M_string_length + 8));
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v33);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v32);
    p_expedition_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32)->design_config.txt_config_mgr.expedition_config_mgr;
    v10 = proto::AvatarExpeditionBin::exp_id((const proto::AvatarExpeditionBin *const)(v28._M_string_length + 16));
    expedition_config_ptr = ExpeditionDataExcelConfigMgr::findExpeditionConfigByID(p_expedition_config_mgr, v10);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v32);
    if ( expedition_config_ptr )
    {
      v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      BasicComp = Player::getBasicComp(v12);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v33, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0x64Du, v28);
      std::string::~string(&v33);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyAvatarExpeditionStart>();
      v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( *(_BYTE *)(((v28._M_string_length + 8) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v28._M_string_length + 8);
      AvatarId = Avatar::getAvatarId(*(const Avatar *const *)(v28._M_string_length + 8));
      proto_log::PlayerLogBodyAvatarExpeditionStart::set_avatar_id(v14, AvatarId);
      v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( BYTE4(v28._M_dataplus._M_p) )
        proto_log::PlayerLogBodyAvatarExpeditionStart::set_is_leave_team(v16, 1u);
      else
        proto_log::PlayerLogBodyAvatarExpeditionStart::set_is_leave_team(v16, 0);
      v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&expedition_config_ptr->city_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)expedition_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&expedition_config_ptr->city_id >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&expedition_config_ptr->city_id);
      }
      proto_log::PlayerLogBodyAvatarExpeditionStart::set_city_id(v17, expedition_config_ptr->city_id);
      v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&expedition_config_ptr->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&expedition_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&expedition_config_ptr->id);
      }
      proto_log::PlayerLogBodyAvatarExpeditionStart::set_config_id(v18, expedition_config_ptr->id);
      v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      AvatarComp = Player::getAvatarComp(v20);
      AvatarExpeditionCountLimit = PlayerAvatarComp::getAvatarExpeditionCountLimit(AvatarComp);
      proto_log::PlayerLogBodyAvatarExpeditionStart::set_expedition_limit_count(v19, AvatarExpeditionCountLimit);
      v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      v24 = proto::AvatarExpeditionBin::hour_time((const proto::AvatarExpeditionBin *const)(v28._M_string_length + 16));
      proto_log::PlayerLogBodyAvatarExpeditionStart::set_expedition_hour_time(v23, v24);
      v25 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      v26 = proto::AvatarExpeditionBin::transaction((const proto::AvatarExpeditionBin *const)(v28._M_string_length + 16));
      proto_log::PlayerLogBodyAvatarExpeditionStart::set_expedition_no(v25, v26);
      v27 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&v32, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyAvatarExpeditionStart,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyAvatarExpeditionStart> *)(v2 + 96));
      Player::printStatLog(v27, &p_body_ptr, &v32, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v32);
      std::shared_ptr<proto_log::PlayerLogBodyAvatarExpeditionStart>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyAvatarExpeditionStart> *const)(v2 + 96));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/expedition/expedition_comp.cpp",
        "logExpeditionStart",
        523);
      v11 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v33,
              (const char (*)[35])"find expedition config failed ID: ");
      *((_DWORD *)&v28._anon_0._M_allocated_capacity + 3) = proto::AvatarExpeditionBin::exp_id((const proto::AvatarExpeditionBin *const)(v28._M_string_length + 16));
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v11,
        (const unsigned int *)&v28._anon_0._M_allocated_capacity + 3);
      common::milog::MiLogStream::~MiLogStream(&v33);
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  if ( v34 == (char *)v2 )
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

// Line 550: range 00000000150A7AEE-00000000150A8130
void __cdecl ExpeditionComp::logExpeditionTakeReward(
        ExpeditionComp *const this,
        uint32_t drop_id,
        const std::vector<ItemParam> *item_param_vec)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  FormalAvatar *formal_avatar; // rsi
  FormalAvatar *v7; // rax
  unsigned __int64 v8; // rax
  common::milog::MiLogStream *v9; // r14
  Player *v10; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionTakeReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  google::protobuf::uint64 v13; // rax
  __gnu_cxx::__normal_iterator<const ItemParam*,std::vector<ItemParam> >::reference v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionTakeReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionTakeReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  google::protobuf::uint32 v17; // ecx
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionTakeReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  Player *v19; // r14
  std::string v20; // [rsp+0h] [rbp-140h]
  const std::vector<ItemParam> *item_param_veca; // [rsp+8h] [rbp-138h]
  ExpeditionComp *thisa; // [rsp+18h] [rbp-128h]
  std::vector<ItemParam>::const_iterator __for_begin; // [rsp+28h] [rbp-118h] BYREF
  std::vector<ItemParam>::const_iterator __for_end; // [rsp+30h] [rbp-110h] BYREF
  const std::vector<ItemParam> *__for_range; // [rsp+38h] [rbp-108h]
  const uint32_t *p_item_id; // [rsp+40h] [rbp-100h]
  proto_log::AvatarExpeditionReward *log_reward; // [rsp+48h] [rbp-F8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+50h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+60h] [rbp-E0h] BYREF
  common::milog::MiLogStream v30; // [rsp+70h] [rbp-D0h] BYREF
  char v31[176]; // [rsp+90h] [rbp-B0h] BYREF

  *(&v20._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v20._anon_0._M_allocated_capacity) = drop_id;
  v20._M_string_length = (std::string::size_type)item_param_vec;
  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 22 log_context_holder:558 64 16 14 player_ptr:551 96 16 11 log_ptr:560";
  *(_QWORD *)(v3 + 16) = ExpeditionComp::logExpeditionTakeReward;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->formal_avatar_);
  formal_avatar = this->formal_avatar_;
  v7 = formal_avatar;
  if ( *(_BYTE *)(((unsigned __int64)formal_avatar >> 3) + 0x7FFF8000) )
    v7 = (FormalAvatar *)__asan_report_load8(this->formal_avatar_);
  v8 = *(_QWORD *)v7->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8(v8);
  (*(void (__fastcall **)(unsigned __int64, FormalAvatar *))v8)(v3 + 64, formal_avatar);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/expedition/expedition_comp.cpp",
      "logExpeditionTakeReward",
      554);
    v9 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v30,
           (const char (*)[37])" get player_ptr failed avatar_guid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->formal_avatar_);
    __for_end._M_current = (const ItemParam *)Avatar::getGuid(this->formal_avatar_);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v9, (const unsigned __int64 *)&__for_end);
    common::milog::MiLogStream::~MiLogStream(&v30);
  }
  else
  {
    v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    BasicComp = Player::getBasicComp(v10);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v30, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0x64Eu, v20);
    std::string::~string(&v30);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyAvatarExpeditionTakeReward>();
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionTakeReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionTakeReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    v13 = proto::AvatarExpeditionBin::transaction(&thisa->bin_data_);
    proto_log::PlayerLogBodyAvatarExpeditionTakeReward::set_expedition_no(v12, v13);
    __for_range = item_param_veca;
    __for_begin._M_current = std::vector<ItemParam>::begin(item_param_veca)._M_current;
    __for_end._M_current = std::vector<ItemParam>::end(item_param_veca)._M_current;
    while ( __gnu_cxx::operator!=<ItemParam const*,std::vector<ItemParam>>(&__for_begin, &__for_end) )
    {
      v14 = __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator*(&__for_begin);
      p_item_id = &v14->item_id;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v14);
      }
      if ( *p_item_id == 202 )
      {
        v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionTakeReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionTakeReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionTakeReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionTakeReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        v17 = proto_log::PlayerLogBodyAvatarExpeditionTakeReward::scoin_count(v16);
        if ( *(_BYTE *)(((unsigned __int64)(p_item_id + 1) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)p_item_id + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(p_item_id + 1) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_item_id + 1);
        }
        proto_log::PlayerLogBodyAvatarExpeditionTakeReward::set_scoin_count(v15, v17 + p_item_id[1]);
      }
      else
      {
        v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionTakeReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionTakeReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        log_reward = proto_log::PlayerLogBodyAvatarExpeditionTakeReward::add_reward(v18);
        if ( *(_BYTE *)(((unsigned __int64)p_item_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_item_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_item_id);
        }
        proto_log::AvatarExpeditionReward::set_item_id(log_reward, *p_item_id);
        if ( *(_BYTE *)(((unsigned __int64)(p_item_id + 1) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)p_item_id + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(p_item_id + 1) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_item_id + 1);
        }
        proto_log::AvatarExpeditionReward::set_item_count(log_reward, p_item_id[1]);
      }
      __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator++(&__for_begin);
    }
    v19 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyAvatarExpeditionTakeReward,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyAvatarExpeditionTakeReward> *)(v3 + 96));
    Player::printStatLog(v19, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<proto_log::PlayerLogBodyAvatarExpeditionTakeReward>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyAvatarExpeditionTakeReward> *const)(v3 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  if ( v31 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 580: range 00000000150A8132-00000000150A86B4
void __cdecl ExpeditionComp::logExpeditionFinish(ExpeditionComp *const this, uint32_t reason)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  FormalAvatar *formal_avatar; // rsi
  FormalAvatar *v6; // rax
  unsigned __int64 v7; // rax
  common::milog::MiLogStream *v8; // r14
  Player *v9; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  google::protobuf::uint64 v12; // rax
  float v13; // xmm0_4
  uint32_t v14; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // r14
  Player *v18; // r14
  std::string shorten_ratio; // [rsp+0h] [rbp-120h]
  float shorten_ratioa; // [rsp+0h] [rbp-120h]
  uint32_t reasona; // [rsp+4h] [rbp-11Ch]
  ExpeditionComp *thisa; // [rsp+8h] [rbp-118h]
  uint32_t now_sec; // [rsp+1Ch] [rbp-104h]
  uint32_t finish_sec; // [rsp+20h] [rbp-100h]
  uint32_t left_sec; // [rsp+24h] [rbp-FCh]
  unsigned __int64 val; // [rsp+28h] [rbp-F8h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v29; // [rsp+50h] [rbp-D0h] BYREF
  char v30[176]; // [rsp+70h] [rbp-B0h] BYREF

  shorten_ratio._M_string_length = (std::string::size_type)this;
  HIDWORD(shorten_ratio._M_dataplus._M_p) = reason;
  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 22 log_context_holder:588 64 16 14 player_ptr:581 96 16 11 log_ptr:590";
  *(_QWORD *)(v2 + 16) = ExpeditionComp::logExpeditionFinish;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->formal_avatar_);
  formal_avatar = this->formal_avatar_;
  v6 = formal_avatar;
  if ( *(_BYTE *)(((unsigned __int64)formal_avatar >> 3) + 0x7FFF8000) )
    v6 = (FormalAvatar *)__asan_report_load8(this->formal_avatar_);
  v7 = *(_QWORD *)v6->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(v7);
  (*(void (__fastcall **)(unsigned __int64, FormalAvatar *))v7)(v2 + 64, formal_avatar);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/expedition/expedition_comp.cpp",
      "logExpeditionFinish",
      584);
    v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v29,
           (const char (*)[37])" get player_ptr failed avatar_guid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->formal_avatar_);
    val = Avatar::getGuid(this->formal_avatar_);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v29);
  }
  else
  {
    v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    BasicComp = Player::getBasicComp(v9);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v29, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0x64Fu, shorten_ratio);
    std::string::~string(&v29);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyAvatarExpeditionFinish>();
    v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    v12 = proto::AvatarExpeditionBin::transaction(&thisa->bin_data_);
    proto_log::PlayerLogBodyAvatarExpeditionFinish::set_expedition_no(v11, v12);
    now_sec = ExpeditionComp::getNowSec(thisa);
    LODWORD(v11) = proto::AvatarExpeditionBin::start_time(&thisa->bin_data_);
    shorten_ratioa = proto::AvatarExpeditionBin::shorten_ratio(&thisa->bin_data_);
    v13 = (float)(int)proto::AvatarExpeditionBin::hour_time(&thisa->bin_data_);
    finish_sec = (_DWORD)v11 + ExpeditionComp::hourToSec(thisa, v13, shorten_ratioa);
    if ( finish_sec <= now_sec )
      v14 = 0;
    else
      v14 = finish_sec - now_sec;
    left_sec = v14;
    v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto_log::PlayerLogBodyAvatarExpeditionFinish::set_reason(v15, reasona);
    v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto_log::PlayerLogBodyAvatarExpeditionFinish::set_left_time_sec(v16, left_sec);
    v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExpeditionFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)&v29, finish_sec);
    proto_log::PlayerLogBodyAvatarExpeditionFinish::set_normal_finish_time(v17, (std::string *)&v29);
    std::string::~string(&v29);
    v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyAvatarExpeditionFinish,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyAvatarExpeditionFinish> *)(v2 + 96));
    Player::printStatLog(v18, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<proto_log::PlayerLogBodyAvatarExpeditionFinish>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyAvatarExpeditionFinish> *const)(v2 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  if ( v30 == (char *)v2 )
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

// Line 605: range 00000000150A86B6-00000000150A89A2
std::string *__cdecl ExpeditionComp::getDesc[abi:cxx11](std::string *retstr, const ExpeditionComp *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // r14
  unsigned int AvatarId; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // r14
  unsigned __int64 Guid; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // r14
  int State; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v11; // r14
  unsigned int v12; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v13; // r14
  unsigned int v14; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v15; // r14
  unsigned int started; // eax
  char v18[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 6 ss:606";
  *(_QWORD *)(v2 + 16) = ExpeditionComp::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "[avatar_id:");
  if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->formal_avatar_);
  AvatarId = Avatar::getAvatarId(this->formal_avatar_);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, AvatarId);
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "[avatar_guid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->formal_avatar_);
  Guid = Avatar::getGuid(this->formal_avatar_);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, Guid);
  v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         ",state:");
  State = ExpeditionComp::getState(this);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, State);
  v11 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
          (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
          ",ID:");
  v12 = proto::AvatarExpeditionBin::exp_id(&this->bin_data_);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v11, v12);
  v13 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
          (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
          ",hour:");
  v14 = proto::AvatarExpeditionBin::hour_time(&this->bin_data_);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v13, v14);
  v15 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
          (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
          ",start:");
  started = proto::AvatarExpeditionBin::start_time(&this->bin_data_);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v15, started);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
    "]");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    retstr,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};
