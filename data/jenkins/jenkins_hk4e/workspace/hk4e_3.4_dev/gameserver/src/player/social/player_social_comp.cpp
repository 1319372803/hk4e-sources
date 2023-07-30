// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/social/player_social_comp.cpp

// Line 42: range 0000000016D0EF54-0000000016D0EF84
void __cdecl ChatEmojiCollection::toClient(
        const ChatEmojiCollection *const this,
        proto::ChatEmojiCollectionData *proto)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rdx

  v2 = proto::ChatEmojiCollectionData::mutable_emoji_id_list(proto);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->emoji_id_vec, v2);
};

// Line 47: range 0000000016D0EF86-0000000016D0EFB9
void __cdecl ChatEmojiCollection::fromClient(
        ChatEmojiCollection *const this,
        const proto::ChatEmojiCollectionData *proto)
{
  const google::protobuf::RepeatedField<unsigned int> *v2; // rax

  v2 = proto::ChatEmojiCollectionData::emoji_id_list(proto);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v2, &this->emoji_id_vec);
};

// Line 52: range 0000000016D0F008-0000000016D0FB49
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl PlayerSocialComp::onLogin(PlayerSocialComp *const this, bool is_new_player)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v6; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  time_t v12; // rdx
  time_t v13; // rcx
  time_t v14; // rsi
  bool v15; // dl
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v17; // rax
  int32_t result; // eax
  bool is_new_playera; // [rsp+14h] [rbp-15Ch]
  uint32_t now; // [rsp+24h] [rbp-14Ch]
  uint32_t next_day; // [rsp+2Ch] [rbp-144h]
  uint32_t next_day_start_time; // [rsp+30h] [rbp-140h]
  uint32_t time_offset; // [rsp+34h] [rbp-13Ch]
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > __i; // [rsp+38h] [rbp-138h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __first; // [rsp+40h] [rbp-130h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __last; // [rsp+48h] [rbp-128h] BYREF
  std::shared_ptr<Config> v27; // [rsp+50h] [rbp-120h] BYREF
  common::milog::MiLogStream v28; // [rsp+60h] [rbp-110h] BYREF
  char v29[240]; // [rsp+80h] [rbp-F0h] BYREF

  is_new_playera = is_new_player;
  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 23 default_name_card_id:65 48 4 12 time_gap:101 64 8 12 end_iter:125 96 56 12 proc_set:124";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::onLogin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  PlayerSocialComp::requestFriendList(this);
  if ( !common::tools::MiTimer::isActive(&this->request_friend_list_timer_) )
  {
    *(_QWORD *)&is_new_player = 600LL;
    if ( PlayerUnixTimer::startS(
           &this->request_friend_list_timer_,
           0x258u,
           1,
           "./src/player/social/player_social_comp.cpp",
           "onLogin",
           54) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/social/player_social_comp.cpp",
        "onLogin",
        56);
      common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
        &v28,
        (const char (*)[41])"request_friend_list_timer_ starts failed");
      common::milog::MiLogStream::~MiLogStream(&v28);
      v6 = -1;
      goto LABEL_47;
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  if ( Player::isChangePlatFormInfo(this->player_) )
  {
    if ( *(char *)(((unsigned __int64)&this->is_need_notify_info_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_need_notify_info_, is_new_player, &this->is_need_notify_info_);
    this->is_need_notify_info_ = 1;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v27);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27);
  *(_DWORD *)(v2 + 32) = ConstValueExcelConfigMgr::getDefaultNameCardId(&v7->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v27);
  if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
          &this->unlock_name_card_set_,
          (const unsigned int *)(v2 + 32)) )
    std::unordered_set<unsigned int>::emplace<unsigned int &>(
      &this->unlock_name_card_set_,
      (unsigned int *)(v2 + 32),
      (unsigned int *)&this->unlock_name_card_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->name_card_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->name_card_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->name_card_id_);
  }
  if ( !this->name_card_id_ )
    this->name_card_id_ = *(_DWORD *)(v2 + 32);
  now = common::tools::TimeUtils::getNow();
  if ( PlayerSocialComp::isTodayBirthday(this, 0) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/social/player_social_comp.cpp",
      "onLogin",
      78);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v28,
      (const char (*)[32])"[BIRTHDAY] isTodayBirthday true");
    common::milog::MiLogStream::~MiLogStream(&v28);
    v8 = ((_BYTE)this + 84) & 7;
    v9 = (*(_BYTE *)(((unsigned __int64)&this->is_login_on_birthday_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->is_login_on_birthday_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v9 )
      __asan_report_store1(&this->is_login_on_birthday_, v8, v9);
    this->is_login_on_birthday_ = 1;
    if ( PlayerSocialComp::tryGrantBirthdayBenefit(this) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/social/player_social_comp.cpp",
        "onLogin",
        82);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        &v28,
        (const char (*)[30])"grant birthday benefit failed");
      common::milog::MiLogStream::~MiLogStream(&v28);
      v6 = -1;
      goto LABEL_47;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/social/player_social_comp.cpp",
      "onLogin",
      88);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      &v28,
      (const char (*)[33])"[BIRTHDAY] isTodayBirthday false");
    common::milog::MiLogStream::~MiLogStream(&v28);
    if ( PlayerSocialComp::isTimeBirthday(this, now + 86400) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/social/player_social_comp.cpp",
        "onLogin",
        92);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        &v28,
        (const char (*)[32])"[BIRTHDAY] next day is birthday");
      common::milog::MiLogStream::~MiLogStream(&v28);
      next_day = common::tools::TimeUtils::getTimeDay(now + 86400, 0LL);
      next_day_start_time = common::tools::TimeUtils::getDailyStartTime(next_day, 0LL);
      if ( next_day_start_time > now )
      {
        *(_DWORD *)(v2 + 48) = next_day_start_time - now;
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/social/player_social_comp.cpp",
          "onLogin",
          102);
        v10 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v28,
                (const char (*)[43])"[BIRTHDAY] next day is birthday, time_gap:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v28);
        common::tools::MiTimer::cancel(&this->birthday_timer_);
        if ( PlayerUnixTimer::startS(
               &this->birthday_timer_,
               *(_DWORD *)(v2 + 48),
               0,
               "./src/player/social/player_social_comp.cpp",
               "onLogin",
               104) )
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/social/player_social_comp.cpp",
            "onLogin",
            106);
          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v28,
            (const char (*)[30])"birthday_timer_ starts failed");
          common::milog::MiLogStream::~MiLogStream(&v28);
          v6 = -1;
          goto LABEL_47;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/social/player_social_comp.cpp",
          "onLogin",
          97);
        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
          &v28,
          (const char (*)[38])"next_day_start_time earlier than now!");
        common::milog::MiLogStream::~MiLogStream(&v28);
      }
    }
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v27);
  v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27);
  time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v11->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v27);
  v12 = time_offset;
  v13 = now;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_clear_social_request_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_clear_social_request_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_clear_social_request_time_);
  }
  v14 = v13;
  if ( !common::tools::TimeUtils::isSameDay(this->last_clear_social_request_time_, v13, v12) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->last_clear_social_request_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_clear_social_request_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->last_clear_social_request_time_, v14, (_BYTE)this + 104);
    }
    this->last_clear_social_request_time_ = now;
    v14 = (((_BYTE)this + 100) & 7u) + 3;
    v15 = *(_BYTE *)(((unsigned __int64)&this->cur_day_social_request_num_ >> 3) + 0x7FFF8000) != 0
       && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_day_social_request_num_ >> 3)
                                                            + 0x7FFF8000);
    if ( v15 )
      __asan_report_store4(&this->cur_day_social_request_num_, v14, v15);
    this->cur_day_social_request_num_ = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_day_ask_friend_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_day_ask_friend_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->cur_day_ask_friend_num_, v14, (_BYTE)this - 88);
    }
    this->cur_day_ask_friend_num_ = 0;
  }
  if ( is_new_playera )
  {
    if ( *(char *)(((unsigned __int64)&this->is_show_avatar_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_show_avatar_, v14, &this->is_show_avatar_);
    this->is_show_avatar_ = 0;
  }
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v2 + 96));
  M_current = std::vector<unsigned int>::end(&this->show_avatar_id_vec_)._M_current;
  v17._M_current = std::vector<unsigned int>::begin(&this->show_avatar_id_vec_)._M_current;
  *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 64) = std::remove_if<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,PlayerSocialComp::onLogin(bool)::{lambda(unsigned int const&)#1}>(
                                                                                           v17,
                                                                                           (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                                                                                           (PlayerSocialComp::onLogin::<lambda(const uint32_t&)>)(v2 + 96));
  __i._M_current = std::vector<unsigned int>::end(&this->show_avatar_id_vec_)._M_current;
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
    &__last,
    &__i);
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
    &__first,
    (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 64));
  std::vector<unsigned int>::erase(&this->show_avatar_id_vec_, __first, __last);
  v6 = 0;
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v2 + 96));
LABEL_47:
  result = v6;
  if ( v29 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 126: range 0000000016D0EFBA-0000000016D0F007
bool __cdecl PlayerSocialComp::onLogin(bool)::{lambda(unsigned int const&)#1}::operator()(
        const PlayerSocialComp::onLogin::<lambda(const uint32_t&)> *const __closure,
        const uint32_t *avatar_id)
{
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  v2 = std::unordered_set<unsigned int>::insert(__closure->__proc_set, avatar_id);
  return !v2.second;
};

// Line 135: range 0000000016D0FB4A-0000000016D0FD5D
int32_t __cdecl PlayerSocialComp::init(PlayerSocialComp *const this)
{
  std::weak_ptr<PlayerSocialComp> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  int32_t result; // eax
  std::weak_ptr<PlayerSocialComp> *p_this_wtr; // [rsp+10h] [rbp-A0h]
  std::weak_ptr<PlayerSocialComp> v6; // [rsp+20h] [rbp-90h] BYREF
  std::shared_ptr<PlayerSocialComp> __r; // [rsp+30h] [rbp-80h] BYREF
  char v8[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (std::weak_ptr<PlayerSocialComp> *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::weak_ptr<PlayerSocialComp> *)v2;
  }
  v1->_M_ptr = (std::__weak_ptr<PlayerSocialComp,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 12 this_wtr:136";
  v1[1]._M_ptr = (std::__weak_ptr<PlayerSocialComp,(__gnu_cxx::_Lock_policy)2>::element_type *)PlayerSocialComp::init;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  toThisPtr<PlayerSocialComp>((PlayerSocialComp *)&__r);
  std::weak_ptr<PlayerSocialComp>::weak_ptr<PlayerSocialComp,void>(v1 + 2, &__r);
  std::shared_ptr<PlayerSocialComp>::~shared_ptr(&__r);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  p_this_wtr = (std::weak_ptr<PlayerSocialComp> *)Player::getEventComp(this->player_);
  std::weak_ptr<PlayerSocialComp>::weak_ptr(&v6, v1 + 2);
  PlayerEventComp::registerObserver<PlayerSocialComp,EnterMpEvent>(
    (PlayerEventComp *const)&__r,
    p_this_wtr,
    (void (*)(PlayerSocialComp *, const EnterMpEvent *))&v6);
  std::weak_ptr<Observer>::operator=(&this->enter_mp_event_observer_, (std::weak_ptr<Observer> *)&__r);
  std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&__r);
  std::weak_ptr<PlayerSocialComp>::~weak_ptr(&v6);
  std::weak_ptr<PlayerSocialComp>::~weak_ptr(v1 + 2);
  result = 0;
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__weak_ptr<PlayerSocialComp,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 143: range 0000000016D0FD5E-0000000016D106BF
int32_t __cdecl PlayerSocialComp::fromBin(PlayerSocialComp *const this, const proto::PlayerDataBin *player_data_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const std::string *v5; // rax
  const proto::Birthday *v6; // rsi
  uint32_t v7; // edx
  char v8; // al
  uint32_t grant_birthday_benefit_year; // edx
  char v10; // al
  bool is_login_on_birthday; // cl
  char v12; // dl
  __int64 v13; // rdx
  bool have_first_share; // cl
  char v15; // dl
  __int64 v16; // rdx
  uint32_t time_count; // edx
  char v18; // al
  uint32_t limit_time; // ecx
  char v20; // dl
  bool v21; // dl
  uint32_t report_time; // edx
  char v23; // al
  uint32_t v24; // ecx
  char v25; // dl
  bool v26; // dl
  uint32_t clear_social_request_time; // edx
  char v28; // al
  google::protobuf::Map<unsigned int,std::string >::const_iterator *p_for_end_1; // rsi
  std::remove_reference<const std::string&>::type *v30; // rdx
  const unsigned int *v31; // rcx
  const std::string *v32; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::string >,false,false>,bool> v33; // rax
  common::milog::MiLogStream *v34; // rdx
  int32_t result; // eax
  uint32_t v36; // edx
  char v37; // al
  uint32_t ask_friend_time; // ecx
  char v39; // dl
  bool v40; // dl
  const google::protobuf::RepeatedField<unsigned int> *v41; // rax
  std::vector<unsigned int> *p_show_avatar_id_vec; // rsi
  unsigned int v43; // eax
  __int64 v44; // rdx
  char v45; // al
  const google::protobuf::RepeatedField<unsigned int> *v46; // rax
  const proto::ChatEmojiCollectionBin *v47; // rax
  const google::protobuf::RepeatedField<unsigned int> *v48; // rax
  const google::protobuf::RepeatedField<unsigned int> *v49; // rax
  const proto::ContentAuditBin *v50; // rax
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-118h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+20h] [rbp-110h]
  const proto::PlayerSocialCompBin *proto_comp; // [rsp+28h] [rbp-108h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+30h] [rbp-100h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-F8h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+40h] [rbp-F0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+48h] [rbp-E8h]
  const google::protobuf::Map<unsigned int,std::string > *__for_range_1; // [rsp+50h] [rbp-E0h]
  google::protobuf::Map<unsigned int,std::string >::const_reference p_uid; // [rsp+58h] [rbp-D8h]
  google::protobuf::Map<unsigned int,std::string >::const_iterator __for_begin_1; // [rsp+60h] [rbp-D0h] BYREF
  google::protobuf::Map<unsigned int,std::string >::const_iterator __for_end_1; // [rsp+80h] [rbp-B0h] BYREF
  common::milog::MiLogStream v62; // [rsp+A0h] [rbp-90h] BYREF
  char v63[112]; // [rsp+C0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v63;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:155";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  proto_comp = proto::PlayerDataBin::social_bin(player_data_bin);
  std::unordered_set<unsigned int>::clear(&this->unlock_name_card_set_);
  __for_range = proto::PlayerSocialCompBin::unlock_name_card_list(proto_comp);
  __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
  __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin);
    }
    *(_DWORD *)(v2 + 32) = *__for_begin;
    std::unordered_set<unsigned int>::insert(
      &this->unlock_name_card_set_,
      (const std::unordered_set<unsigned int>::value_type *)(v2 + 32));
    ++__for_begin;
  }
  v5 = proto::PlayerSocialCompBin::signature[abi:cxx11](proto_comp);
  std::string::operator=(&this->signature_, v5);
  v6 = proto::PlayerSocialCompBin::birthday(proto_comp);
  proto::Birthday::CopyFrom(&this->birthday_, v6);
  v7 = proto::PlayerSocialCompBin::name_card_id(proto_comp);
  v8 = *(_BYTE *)(((unsigned __int64)&this->name_card_id_ >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->name_card_id_, v6, v7);
  }
  this->name_card_id_ = v7;
  __for_range_0 = proto::PlayerSocialCompBin::recent_mp_player_uid_list(proto_comp);
  __for_begin_0 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_0);
  __for_end_0 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_0);
  while ( __for_begin_0 != __for_end_0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin_0);
    }
    *(_DWORD *)(v2 + 32) = *__for_begin_0;
    std::list<unsigned int>::emplace_back<unsigned int &>(
      &this->recent_mp_player_uid_list_,
      (unsigned int *)(v2 + 32),
      (unsigned int *)&this->recent_mp_player_uid_list_);
    v6 = (const proto::Birthday *)(v2 + 32);
    std::unordered_set<unsigned int>::insert(
      &this->recent_mp_player_uid_set_,
      (const std::unordered_set<unsigned int>::value_type *)(v2 + 32));
    ++__for_begin_0;
  }
  grant_birthday_benefit_year = proto::PlayerSocialCompBin::last_grant_birthday_benefit_year(proto_comp);
  v10 = *(_BYTE *)(((unsigned __int64)&this->last_grant_benefit_year_ >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(v6) = v10 != 0;
    __asan_report_store4(&this->last_grant_benefit_year_, v6, grant_birthday_benefit_year);
  }
  this->last_grant_benefit_year_ = grant_birthday_benefit_year;
  is_login_on_birthday = proto::PlayerSocialCompBin::is_login_on_birthday(proto_comp);
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_login_on_birthday_ >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this + 84) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->is_login_on_birthday_, v6, v13);
  this->is_login_on_birthday_ = is_login_on_birthday;
  have_first_share = proto::PlayerSocialCompBin::is_have_first_share(proto_comp);
  v15 = *(_BYTE *)(((unsigned __int64)&this->is_has_first_share_ >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v15 != 0;
  v16 = (v15 != 0) & (unsigned __int8)((((unsigned __int8)this + 85) & 7) >= v15);
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->is_has_first_share_, v6, v16);
  this->is_has_first_share_ = have_first_share;
  time_count = proto::PlayerSocialCompBin::report_during_last_time_count(proto_comp);
  v18 = *(_BYTE *)(((unsigned __int64)&this->report_during_last_time_count_ >> 3) + 0x7FFF8000);
  if ( v18 != 0 && v18 <= 3 )
  {
    LOBYTE(v6) = v18 != 0;
    __asan_report_store4(&this->report_during_last_time_count_, v6, time_count);
  }
  this->report_during_last_time_count_ = time_count;
  limit_time = proto::PlayerSocialCompBin::report_next_limit_time(proto_comp);
  v20 = *(_BYTE *)(((unsigned __int64)&this->report_next_limit_time_ >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v20 != 0;
  v21 = v20 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v20;
  if ( v21 )
    __asan_report_store4(&this->report_next_limit_time_, v6, v21);
  this->report_next_limit_time_ = limit_time;
  report_time = proto::PlayerSocialCompBin::next_report_time(proto_comp);
  v23 = *(_BYTE *)(((unsigned __int64)&this->next_report_time_ >> 3) + 0x7FFF8000);
  if ( v23 != 0 && v23 <= 3 )
  {
    LOBYTE(v6) = v23 != 0;
    __asan_report_store4(&this->next_report_time_, v6, report_time);
  }
  this->next_report_time_ = report_time;
  v24 = proto::PlayerSocialCompBin::cur_day_social_request_num(proto_comp);
  v25 = *(_BYTE *)(((unsigned __int64)&this->cur_day_social_request_num_ >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v25 != 0;
  v26 = v25 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v25;
  if ( v26 )
    __asan_report_store4(&this->cur_day_social_request_num_, v6, v26);
  this->cur_day_social_request_num_ = v24;
  clear_social_request_time = proto::PlayerSocialCompBin::last_clear_social_request_time(proto_comp);
  v28 = *(_BYTE *)(((unsigned __int64)&this->last_clear_social_request_time_ >> 3) + 0x7FFF8000);
  if ( v28 != 0 && v28 <= 3 )
  {
    LOBYTE(v6) = v28 != 0;
    __asan_report_store4(&this->last_clear_social_request_time_, v6, clear_social_request_time);
  }
  this->last_clear_social_request_time_ = clear_social_request_time;
  __for_range_1 = proto::PlayerSocialCompBin::friend_remark_name_map[abi:cxx11](proto_comp);
  google::protobuf::Map<unsigned int,std::string>::begin(&__for_begin_1, __for_range_1);
  google::protobuf::Map<unsigned int,std::string>::end(&__for_end_1, __for_range_1);
  while ( 1 )
  {
    p_for_end_1 = &__for_end_1;
    if ( !google::protobuf::operator!=(&__for_begin_1, &__for_end_1) )
      break;
    p_uid = google::protobuf::Map<unsigned int,std::string>::const_iterator::operator*(&__for_begin_1);
    v30 = std::move<std::string const&>(&p_uid->second);
    v33 = std::unordered_map<unsigned int,std::string>::emplace<unsigned int const&,std::string const>(
            &this->friend_remark_name_map_,
            &p_uid->first,
            v30,
            v31,
            v32);
    if ( !v33.second )
    {
      common::milog::MiLogStream::create(
        &v62,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/social/player_social_comp.cpp",
        "fromBin",
        172);
      v34 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v62, (const char (*)[15])"duplicate uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &p_uid->first);
      common::milog::MiLogStream::~MiLogStream(&v62);
      result = -1;
      goto LABEL_44;
    }
    google::protobuf::Map<unsigned int,std::string>::const_iterator::operator++(&__for_begin_1);
  }
  v36 = proto::PlayerSocialCompBin::cur_day_ask_friend_num(proto_comp);
  v37 = *(_BYTE *)(((unsigned __int64)&this->cur_day_ask_friend_num_ >> 3) + 0x7FFF8000);
  if ( v37 != 0 && v37 <= 3 )
  {
    LOBYTE(p_for_end_1) = v37 != 0;
    __asan_report_store4(&this->cur_day_ask_friend_num_, p_for_end_1, v36);
  }
  this->cur_day_ask_friend_num_ = v36;
  ask_friend_time = proto::PlayerSocialCompBin::last_ask_friend_time(proto_comp);
  v39 = *(_BYTE *)(((unsigned __int64)&this->last_ask_friend_time_ >> 3) + 0x7FFF8000);
  LOBYTE(p_for_end_1) = v39 != 0;
  v40 = v39 != 0 && (char)((((_BYTE)this - 84) & 7) + 3) >= v39;
  if ( v40 )
    __asan_report_store4(&this->last_ask_friend_time_, p_for_end_1, v40);
  this->last_ask_friend_time_ = ask_friend_time;
  v41 = proto::PlayerSocialCompBin::show_avatar_id_list(proto_comp);
  p_show_avatar_id_vec = &this->show_avatar_id_vec_;
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v41, &this->show_avatar_id_vec_);
  LOBYTE(v43) = proto::PlayerSocialCompBin::is_show_avatar(proto_comp);
  v44 = v43;
  v45 = *(_BYTE *)(((unsigned __int64)&this->is_show_avatar_ >> 3) + 0x7FFF8000);
  if ( v45 < 0 )
  {
    LOBYTE(p_show_avatar_id_vec) = v45 != 0;
    __asan_report_store1(&this->is_show_avatar_, p_show_avatar_id_vec, v44);
  }
  this->is_show_avatar_ = v44;
  v46 = proto::PlayerSocialCompBin::show_name_card_id_list(proto_comp);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v46, &this->show_name_card_id_vec_);
  v47 = proto::PlayerSocialCompBin::chat_emoji_collection(proto_comp);
  v48 = proto::ChatEmojiCollectionBin::emoji_id_list(v47);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v48, &this->chat_emoji_collection_.emoji_id_vec);
  v49 = proto::PlayerSocialCompBin::shield_channel_set(proto_comp);
  common::tools::MiscUtils::setFromRepeated<std::unordered_set<unsigned int>,unsigned int>(
    &this->shield_channel_set_,
    v49);
  v50 = proto::PlayerSocialCompBin::signature_audit_bin(proto_comp);
  ContentAuditData::fromBin(&this->signature_audit_data_, v50);
  result = 0;
LABEL_44:
  if ( v63 == (char *)v2 )
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

// Line 189: range 0000000016D106C0-0000000016D10DD0
int32_t __cdecl PlayerSocialComp::toBin(PlayerSocialComp *const this, proto::PlayerDataBin *player_data_bin)
{
  unsigned int *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  std::_List_iterator<unsigned int>::reference v4; // rax
  google::protobuf::uint32 *v5; // rdx
  std::string *v6; // rax
  google::protobuf::RepeatedField<unsigned int> *v7; // rax
  google::protobuf::RepeatedField<unsigned int> *v8; // rax
  proto::ChatEmojiCollectionBin *v9; // rax
  google::protobuf::RepeatedField<unsigned int> *v10; // rax
  proto::ContentAuditBin *v11; // rax
  google::protobuf::RepeatedField<unsigned int> *v12; // rax
  std::unordered_set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  proto::PlayerSocialCompBin *proto_comp; // [rsp+28h] [rbp-58h]
  std::unordered_set<unsigned int> *__for_range; // [rsp+30h] [rbp-50h]
  proto::Birthday *bin_birthday; // [rsp+38h] [rbp-48h]
  std::list<unsigned int> *__for_range_0; // [rsp+40h] [rbp-40h]
  google::protobuf::Map<unsigned int,std::string > *proto_friend_remark_name_map; // [rsp+48h] [rbp-38h]
  std::unordered_map<unsigned int,std::string> *__for_range_1; // [rsp+50h] [rbp-30h]
  const std::pair<unsigned int const,std::string > *v22; // [rsp+58h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,std::string > >::type *uid_0; // [rsp+60h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,std::string > >::type *remark_name; // [rsp+68h] [rbp-18h]

  proto_comp = proto::PlayerDataBin::mutable_social_bin(player_data_bin);
  __for_range = &this->unlock_name_card_set_;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&this->unlock_name_card_set_)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&this->unlock_name_card_set_)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v2 = (unsigned int *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::PlayerSocialCompBin::add_unlock_name_card_list(proto_comp, *v3);
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  proto::PlayerSocialCompBin::set_signature(proto_comp, &this->signature_);
  bin_birthday = proto::PlayerSocialCompBin::mutable_birthday(proto_comp);
  proto::Birthday::CopyFrom(bin_birthday, &this->birthday_);
  if ( *(_BYTE *)(((unsigned __int64)&this->name_card_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->name_card_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->name_card_id_);
  }
  proto::PlayerSocialCompBin::set_name_card_id(proto_comp, this->name_card_id_);
  __for_range_0 = &this->recent_mp_player_uid_list_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::list<unsigned int>::begin(&this->recent_mp_player_uid_list_)._M_node;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::list<unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_List_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_List_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v4 = std::_List_iterator<unsigned int>::operator*((const std::_List_iterator<unsigned int> *const)&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    proto::PlayerSocialCompBin::add_recent_mp_player_uid_list(proto_comp, *v5);
    std::_List_iterator<unsigned int>::operator++((std::_List_iterator<unsigned int> *const)&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->last_grant_benefit_year_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_grant_benefit_year_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_grant_benefit_year_);
  }
  proto::PlayerSocialCompBin::set_last_grant_birthday_benefit_year(proto_comp, this->last_grant_benefit_year_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_login_on_birthday_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_login_on_birthday_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_login_on_birthday_);
  }
  proto::PlayerSocialCompBin::set_is_login_on_birthday(proto_comp, this->is_login_on_birthday_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_has_first_share_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 85) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_has_first_share_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_has_first_share_);
  }
  proto::PlayerSocialCompBin::set_is_have_first_share(proto_comp, this->is_has_first_share_);
  if ( *(_BYTE *)(((unsigned __int64)&this->report_during_last_time_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->report_during_last_time_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->report_during_last_time_count_);
  }
  proto::PlayerSocialCompBin::set_report_during_last_time_count(proto_comp, this->report_during_last_time_count_);
  if ( *(_BYTE *)(((unsigned __int64)&this->report_next_limit_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->report_next_limit_time_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->report_next_limit_time_);
  }
  proto::PlayerSocialCompBin::set_report_next_limit_time(proto_comp, this->report_next_limit_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->next_report_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->next_report_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->next_report_time_);
  }
  proto::PlayerSocialCompBin::set_next_report_time(proto_comp, this->next_report_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_day_social_request_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_day_social_request_num_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_day_social_request_num_);
  }
  proto::PlayerSocialCompBin::set_cur_day_social_request_num(proto_comp, this->cur_day_social_request_num_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_clear_social_request_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_clear_social_request_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_clear_social_request_time_);
  }
  proto::PlayerSocialCompBin::set_last_clear_social_request_time(proto_comp, this->last_clear_social_request_time_);
  proto_friend_remark_name_map = proto::PlayerSocialCompBin::mutable_friend_remark_name_map[abi:cxx11](proto_comp);
  __for_range_1 = &this->friend_remark_name_map_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::unordered_map<unsigned int,std::string>::begin(&this->friend_remark_name_map_)._M_cur;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::unordered_map<unsigned int,std::string>::end(__for_range_1)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::string>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::string >,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::string >,false> *)&__for_end) )
  {
    v22 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::string>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::string >,false,false> *const)&__for_begin);
    uid_0 = std::get<0ul,unsigned int const,std::string>(v22);
    remark_name = (std::tuple_element<1,const std::pair<unsigned int const,std::string > >::type *)std::get<1ul,unsigned int const,std::string>(v22);
    v6 = google::protobuf::Map<unsigned int,std::string>::operator[](proto_friend_remark_name_map, uid_0);
    std::string::operator=(v6, remark_name);
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::string>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::string >,false,false> *const)&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_day_ask_friend_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_day_ask_friend_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_day_ask_friend_num_);
  }
  proto::PlayerSocialCompBin::set_cur_day_ask_friend_num(proto_comp, this->cur_day_ask_friend_num_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_ask_friend_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_ask_friend_time_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_ask_friend_time_);
  }
  proto::PlayerSocialCompBin::set_last_ask_friend_time(proto_comp, this->last_ask_friend_time_);
  v7 = proto::PlayerSocialCompBin::mutable_show_avatar_id_list(proto_comp);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->show_avatar_id_vec_, v7);
  if ( *(char *)(((unsigned __int64)&this->is_show_avatar_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_show_avatar_);
  proto::PlayerSocialCompBin::set_is_show_avatar(proto_comp, this->is_show_avatar_);
  v8 = proto::PlayerSocialCompBin::mutable_show_name_card_id_list(proto_comp);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->show_name_card_id_vec_, v8);
  v9 = proto::PlayerSocialCompBin::mutable_chat_emoji_collection(proto_comp);
  v10 = proto::ChatEmojiCollectionBin::mutable_emoji_id_list(v9);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->chat_emoji_collection_.emoji_id_vec, v10);
  v11 = proto::PlayerSocialCompBin::mutable_signature_audit_bin(proto_comp);
  ContentAuditData::toBin(&this->signature_audit_data_, v11);
  v12 = proto::PlayerSocialCompBin::mutable_shield_channel_set(proto_comp);
  common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(
    &this->shield_channel_set_,
    v12);
  return 0;
};

// Line 232: range 0000000016D10DD2-0000000016D11118
void __cdecl PlayerSocialComp::onDailyRefresh(PlayerSocialComp *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  bool v3; // dl
  __int64 v4; // rsi
  uint32_t now; // [rsp+1Ch] [rbp-44h]
  uint32_t next_day; // [rsp+24h] [rbp-3Ch]
  uint32_t next_day_start_time; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  if ( PlayerSocialComp::isTodayBirthday(this, 0) )
  {
    v1 = ((_BYTE)this + 84) & 7;
    v2 = (*(_BYTE *)(((unsigned __int64)&this->is_login_on_birthday_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_login_on_birthday_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v2 )
      __asan_report_store1(&this->is_login_on_birthday_, v1, v2);
    this->is_login_on_birthday_ = 1;
    if ( PlayerSocialComp::tryGrantBirthdayBenefit(this) )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/social/player_social_comp.cpp",
        "onDailyRefresh",
        238);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        &v8,
        (const char (*)[30])"grant birthday benefit failed");
      common::milog::MiLogStream::~MiLogStream(&v8);
      return;
    }
  }
  else
  {
    now = common::tools::TimeUtils::getNow();
    if ( PlayerSocialComp::isTimeBirthday(this, now + 86400) )
    {
      next_day = common::tools::TimeUtils::getTimeDay(now + 86400, 0LL);
      next_day_start_time = common::tools::TimeUtils::getDailyStartTime(next_day, 0LL);
      if ( next_day_start_time > now )
      {
        common::tools::MiTimer::cancel(&this->birthday_timer_);
        if ( PlayerUnixTimer::startS(
               &this->birthday_timer_,
               next_day_start_time - now,
               0,
               "./src/player/social/player_social_comp.cpp",
               "onDailyRefresh",
               258) )
        {
          common::milog::MiLogStream::create(
            &v8,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/social/player_social_comp.cpp",
            "onDailyRefresh",
            260);
          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v8,
            (const char (*)[30])"birthday_timer_ starts failed");
          common::milog::MiLogStream::~MiLogStream(&v8);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v8,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/social/player_social_comp.cpp",
          "onDailyRefresh",
          252);
        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
          &v8,
          (const char (*)[38])"next_day_start_time earlier than now!");
        common::milog::MiLogStream::~MiLogStream(&v8);
      }
    }
  }
  v3 = *(_BYTE *)(((unsigned __int64)&this->cur_day_social_request_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_day_social_request_num_ >> 3)
                                                         + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->cur_day_social_request_num_, (((_BYTE)this + 100) & 7u) + 3, v3);
  this->cur_day_social_request_num_ = 0;
  v4 = (unsigned int)common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_clear_social_request_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_clear_social_request_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_clear_social_request_time_, v4, (_BYTE)this + 104);
  }
  this->last_clear_social_request_time_ = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_day_ask_friend_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_day_ask_friend_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_day_ask_friend_num_, v4, (_BYTE)this - 88);
  }
  this->cur_day_ask_friend_num_ = 0;
};

// Line 272: range 0000000016D1111A-0000000016D111FD
int32_t __cdecl PlayerSocialComp::notifyAllData(PlayerSocialComp *const this)
{
  Player *player; // rbx
  proto::PropValue prop_value; // [rsp+10h] [rbp-40h] BYREF

  PlayerSocialComp::notifySignatureAuditData(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_has_first_share_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 85) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_has_first_share_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_has_first_share_);
  }
  buildIntProp(&prop_value, 0x272Cu, this->is_has_first_share_);
  Player::notifyPlayerProp(player, &prop_value);
  proto::PropValue::~PropValue(&prop_value);
  return 0;
};

// Line 279: range 0000000016D111FE-0000000016D11289
void __cdecl PlayerSocialComp::onRequestFriendListTimer(PlayerSocialComp *const this, uint32_t now_ms)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v2,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/social/player_social_comp.cpp",
    "onRequestFriendListTimer",
    280);
  common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
    &v2,
    (const char (*)[34])"[Social] onRequestFriendListTimer");
  common::milog::MiLogStream::~MiLogStream(&v2);
  PlayerSocialComp::requestFriendList(this);
};

// Line 285: range 0000000016D1128A-0000000016D11582
__int64 __fastcall PlayerSocialComp::addFriend(PlayerSocialComp *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  std::__detail::_List_node_base *M_node; // r15
  std::list<unsigned int>::iterator v9; // rax
  __int64 result; // rax
  std::_List_const_iterator<unsigned int>::iterator v11; // [rsp+20h] [rbp-B0h] BYREF
  std::_List_const_iterator<unsigned int>::iterator __x; // [rsp+28h] [rbp-A8h] BYREF
  std::_List_const_iterator<unsigned int> __first; // [rsp+30h] [rbp-A0h] BYREF
  std::_List_const_iterator<unsigned int> __last; // [rsp+38h] [rbp-98h] BYREF
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-90h] BYREF
  char v16[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:284";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::addFriend;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
         &this->friend_set_,
         (const unsigned int *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/social/player_social_comp.cpp",
      "addFriend",
      289);
    v5 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(&v15, (const char (*)[32])off_25F3E060);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  std::unordered_set<unsigned int>::insert(
    &this->friend_set_,
    (const std::unordered_set<unsigned int>::value_type *)(v2 + 32));
  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
         &this->recent_mp_player_uid_set_,
         (const unsigned int *)(v2 + 32)) )
  {
    __x._M_node = std::list<unsigned int>::end(&this->recent_mp_player_uid_list_)._M_node;
    std::_List_const_iterator<unsigned int>::_List_const_iterator(&__last, &__x);
    M_node = std::list<unsigned int>::end(&this->recent_mp_player_uid_list_)._M_node;
    v9._M_node = std::list<unsigned int>::begin(&this->recent_mp_player_uid_list_)._M_node;
    v11._M_node = std::remove<std::_List_iterator<unsigned int>,unsigned int>(
                    v9,
                    (std::_List_iterator<unsigned int>)M_node,
                    (const unsigned int *)(v2 + 32))._M_node;
    std::_List_const_iterator<unsigned int>::_List_const_iterator(&__first, &v11);
    std::list<unsigned int>::erase(&this->recent_mp_player_uid_list_, __first, __last);
    std::unordered_set<unsigned int>::erase(
      &this->recent_mp_player_uid_set_,
      (const std::unordered_set<unsigned int>::key_type *)(v2 + 32));
  }
  result = 0LL;
  if ( v16 == (char *)v2 )
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

// Line 301: range 0000000016D11584-0000000016D1176E
void __fastcall PlayerSocialComp::addPSNFriend(PlayerSocialComp *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__detail::_List_node_base *M_node; // r15
  std::list<unsigned int>::iterator v6; // rax
  std::_List_const_iterator<unsigned int>::iterator v7; // [rsp+20h] [rbp-90h] BYREF
  std::_List_const_iterator<unsigned int>::iterator __x; // [rsp+28h] [rbp-88h] BYREF
  std::_List_const_iterator<unsigned int> __first; // [rsp+30h] [rbp-80h] BYREF
  std::_List_const_iterator<unsigned int> __last; // [rsp+38h] [rbp-78h] BYREF
  char v11[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:300";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::addPSNFriend;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  std::unordered_set<unsigned int>::insert(
    &this->psn_friend_set_,
    (const std::unordered_set<unsigned int>::value_type *)(v2 + 32));
  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
         &this->recent_mp_player_uid_set_,
         (const unsigned int *)(v2 + 32)) )
  {
    __x._M_node = std::list<unsigned int>::end(&this->recent_mp_player_uid_list_)._M_node;
    std::_List_const_iterator<unsigned int>::_List_const_iterator(&__last, &__x);
    M_node = std::list<unsigned int>::end(&this->recent_mp_player_uid_list_)._M_node;
    v6._M_node = std::list<unsigned int>::begin(&this->recent_mp_player_uid_list_)._M_node;
    v7._M_node = std::remove<std::_List_iterator<unsigned int>,unsigned int>(
                   v6,
                   (std::_List_iterator<unsigned int>)M_node,
                   (const unsigned int *)(v2 + 32))._M_node;
    std::_List_const_iterator<unsigned int>::_List_const_iterator(&__first, &v7);
    std::list<unsigned int>::erase(&this->recent_mp_player_uid_list_, __first, __last);
    std::unordered_set<unsigned int>::erase(
      &this->recent_mp_player_uid_set_,
      (const std::unordered_set<unsigned int>::key_type *)(v2 + 32));
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 311: range 0000000016D11770-0000000016D11A6C
void __cdecl PlayerSocialComp::updateFriendBrief(
        PlayerSocialComp *const this,
        const proto::FriendBrief *proto_friend_brief)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  proto::FriendBrief *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r13
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-A0h] BYREF
  std::string val; // [rsp+30h] [rbp-80h] BYREF
  char v14[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 friend_uid:312";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::updateFriendBrief;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = proto::FriendBrief::uid(proto_friend_brief);
  if ( *(_DWORD *)(v2 + 32) )
  {
    v8 = std::unordered_map<unsigned int,proto::FriendBrief>::operator[](
           &this->friend_brief_map_,
           (const std::unordered_map<unsigned int,proto::FriendBrief>::key_type *)(v2 + 32));
    proto::FriendBrief::operator=(v8, proto_friend_brief);
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/social/player_social_comp.cpp",
      "updateFriendBrief",
      319);
    v9 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v12, (const char (*)[19])"update friend_uid:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
    v11 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            v10,
            (const char (*)[21])" proto_friend_brief:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &proto_friend_brief->google::protobuf::Message);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.cpp",
      "updateFriendBrief",
      315);
    v5 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v12,
           (const char (*)[37])"friend_uid is 0, proto_friend_brief:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &proto_friend_brief->google::protobuf::Message);
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &val);
    v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" player;");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v7, this->player_);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
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

// Line 323: range 0000000016D11A6E-0000000016D11CA4
void __fastcall PlayerSocialComp::removeFriendBrief(PlayerSocialComp *const this, uint32_t friend_uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  common::milog::MiLogStream *v8; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 friend_uid:322";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::removeFriendBrief;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = friend_uid;
  if ( !std::unordered_map<unsigned int,proto::FriendBrief>::erase(
          &this->friend_brief_map_,
          (const std::unordered_map<unsigned int,proto::FriendBrief>::key_type *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.cpp",
      "removeFriendBrief",
      326);
    v5 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v9,
           (const char (*)[41])"friend_brief already erased, friend_uid:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  common::milog::MiLogStream::create(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/social/player_social_comp.cpp",
    "removeFriendBrief",
    328);
  v8 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v9, (const char (*)[19])"remove friend_uid:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v9);
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 332: range 0000000016D11CA6-0000000016D11D9B
__int64 __fastcall PlayerSocialComp::deleteFriend(PlayerSocialComp *const this, uint32_t uid)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:331";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::deleteFriend;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  std::unordered_set<unsigned int>::erase(
    &this->friend_set_,
    (const std::unordered_set<unsigned int>::key_type *)(v2 + 32));
  std::unordered_map<unsigned int,std::string>::erase(
    &this->friend_remark_name_map_,
    (const std::unordered_map<unsigned int,std::string>::key_type *)(v2 + 32));
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

// Line 339: range 0000000016D11D9C-0000000016D11EB8
__int64 __fastcall PlayerSocialComp::addAskFriend(PlayerSocialComp *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > __i; // [rsp+10h] [rbp-80h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __position; // [rsp+18h] [rbp-78h] BYREF
  char v8[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:338";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::addAskFriend;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  __i._M_current = std::vector<unsigned int>::begin(&this->ask_add_friend_vec_)._M_current;
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
    &__position,
    &__i);
  std::vector<unsigned int>::insert(
    &this->ask_add_friend_vec_,
    __position,
    (const std::vector<unsigned int>::value_type *)(v2 + 32));
  result = 0LL;
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

// Line 345: range 0000000016D11EBA-0000000016D1207D
void __cdecl PlayerSocialComp::fillPlayerFriendList(
        PlayerSocialComp *const this,
        std::vector<unsigned int> *all_friend_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *M_cur; // r14
  std::unordered_set<unsigned int>::iterator v6; // rax
  std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *v7; // r14
  std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *v8; // rcx
  char v9[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 56 18 all_friend_set:346";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::fillPlayerFriendList;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  std::unordered_set<unsigned int>::unordered_set(
    (std::unordered_set<unsigned int> *const)(v2 + 32),
    &this->friend_set_);
  M_cur = std::unordered_set<unsigned int>::end(&this->psn_friend_set_)._M_cur;
  v6._M_cur = std::unordered_set<unsigned int>::begin(&this->psn_friend_set_)._M_cur;
  std::unordered_set<unsigned int>::insert<std::__detail::_Node_iterator<unsigned int,true,false>>(
    (std::unordered_set<unsigned int> *const)(v2 + 32),
    v6,
    (std::__detail::_Node_iterator<unsigned int,true,false>)M_cur);
  std::vector<unsigned int>::clear(all_friend_vec);
  v7 = std::unordered_set<unsigned int>::end((std::unordered_set<unsigned int> *const)(v2 + 32))._M_cur;
  v8 = std::unordered_set<unsigned int>::begin((std::unordered_set<unsigned int> *const)(v2 + 32))._M_cur;
  std::vector<unsigned int>::assign<std::__detail::_Node_iterator<unsigned int,true,false>,void>(
    all_friend_vec,
    (std::__detail::_Node_iterator<unsigned int,true,false>)v8,
    (std::__detail::_Node_iterator<unsigned int,true,false>)v7);
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v2 + 32));
  if ( v9 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 353: range 0000000016D1207E-0000000016D120EC
void __cdecl PlayerSocialComp::clearPSInfo(PlayerSocialComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  if ( !Player::isPsnPlatform(this->player_) )
  {
    std::unordered_set<unsigned int>::clear(&this->psn_friend_set_);
    std::unordered_set<unsigned int>::clear(&this->psn_blacklist_set_);
  }
};

// Line 362: range 0000000016D120EE-0000000016D122FD
__int64 __fastcall PlayerSocialComp::addBlacklist(PlayerSocialComp *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v5; // rax
  std::__detail::_List_node_base *M_node; // r15
  std::list<unsigned int>::iterator v7; // rax
  __int64 result; // rax
  std::_List_const_iterator<unsigned int>::iterator v9; // [rsp+20h] [rbp-90h] BYREF
  std::_List_const_iterator<unsigned int>::iterator __x; // [rsp+28h] [rbp-88h] BYREF
  std::_List_const_iterator<unsigned int> __first; // [rsp+30h] [rbp-80h] BYREF
  std::_List_const_iterator<unsigned int> __last; // [rsp+38h] [rbp-78h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:361";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::addBlacklist;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  v5 = std::unordered_set<unsigned int>::emplace<unsigned int &>(
         &this->blacklist_set_,
         (unsigned int *)(v2 + 32),
         (unsigned int *)&this->blacklist_set_);
  if ( v5.second )
    PlayerSocialComp::logOperateBlacklist(this, *(_DWORD *)(v2 + 32), 0);
  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
         &this->recent_mp_player_uid_set_,
         (const unsigned int *)(v2 + 32)) )
  {
    __x._M_node = std::list<unsigned int>::end(&this->recent_mp_player_uid_list_)._M_node;
    std::_List_const_iterator<unsigned int>::_List_const_iterator(&__last, &__x);
    M_node = std::list<unsigned int>::end(&this->recent_mp_player_uid_list_)._M_node;
    v7._M_node = std::list<unsigned int>::begin(&this->recent_mp_player_uid_list_)._M_node;
    v9._M_node = std::remove<std::_List_iterator<unsigned int>,unsigned int>(
                   v7,
                   (std::_List_iterator<unsigned int>)M_node,
                   (const unsigned int *)(v2 + 32))._M_node;
    std::_List_const_iterator<unsigned int>::_List_const_iterator(&__first, &v9);
    std::list<unsigned int>::erase(&this->recent_mp_player_uid_list_, __first, __last);
    std::unordered_set<unsigned int>::erase(
      &this->recent_mp_player_uid_set_,
      (const std::unordered_set<unsigned int>::key_type *)(v2 + 32));
  }
  result = 0LL;
  if ( v13 == (char *)v2 )
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

// Line 377: range 0000000016D122FE-0000000016D1240E
__int64 __fastcall PlayerSocialComp::removeBlacklist(PlayerSocialComp *const this, uint32_t uid)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:376";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::removeBlacklist;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
         &this->blacklist_set_,
         (const unsigned int *)(v2 + 32)) )
  {
    PlayerSocialComp::logOperateBlacklist(this, *(_DWORD *)(v2 + 32), 1u);
  }
  std::unordered_set<unsigned int>::erase(
    &this->blacklist_set_,
    (const std::unordered_set<unsigned int>::key_type *)(v2 + 32));
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

// Line 388: range 0000000016D12410-0000000016D1256F
int32_t __cdecl PlayerSocialComp::requestFriendList(PlayerSocialComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t PlayerFriendList; // r14d
  int32_t result; // eax
  char v6[144]; // [rsp+10h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 7 req:389";
  *(_QWORD *)(v1 + 16) = PlayerSocialComp::requestFriendList;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  proto::ServerGetPlayerFriendListReq::ServerGetPlayerFriendListReq((proto::ServerGetPlayerFriendListReq *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  PlayerFriendList = sendProtoToSocialService<proto::ServerGetPlayerFriendListReq>(
                       this->player_,
                       (proto::ServerGetPlayerFriendListReq *)(v1 + 32));
  proto::ServerGetPlayerFriendListReq::~ServerGetPlayerFriendListReq((proto::ServerGetPlayerFriendListReq *const)(v1 + 32));
  result = PlayerFriendList;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 394: range 0000000016D12570-0000000016D129EF
int32_t __cdecl PlayerSocialComp::clientRequstFriendList(PlayerSocialComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  bool isFriendListClosed; // r14
  int32_t v6; // r14d
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v7; // rax
  google::protobuf::uint32 *v8; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-198h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-190h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-188h]
  std::shared_ptr<Config> v13; // [rsp+30h] [rbp-180h] BYREF
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-170h] BYREF
  char v15[336]; // [rsp+60h] [rbp-150h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(288LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 24 18 all_friend_vec:406 96 40 7 req:404 176 72 7 rsp:398";
  *(_QWORD *)(v1 + 16) = PlayerSocialComp::clientRequstFriendList;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234881024;
  v3[536862722] = -218959118;
  v3[536862724] = -218959360;
  v3[536862725] = 62194;
  v3[536862727] = -218103808;
  v3[536862728] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
  isFriendListClosed = FeatureSwitchMgr::isFriendListClosed(&v4->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( isFriendListClosed )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/social/player_social_comp.cpp",
      "clientRequstFriendList",
      397);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v14,
      (const char (*)[27])"friend list feature closed");
    common::milog::MiLogStream::~MiLogStream(&v14);
    proto::GetPlayerFriendListRsp::GetPlayerFriendListRsp((proto::GetPlayerFriendListRsp *const)(v1 + 176));
    proto::GetPlayerFriendListRsp::set_retcode((proto::GetPlayerFriendListRsp *const)(v1 + 176), 142);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 176));
    v6 = 142;
    proto::GetPlayerFriendListRsp::~GetPlayerFriendListRsp((proto::GetPlayerFriendListRsp *const)(v1 + 176));
  }
  else
  {
    proto::ServerGetPlayerFriendBriefReq::ServerGetPlayerFriendBriefReq((proto::ServerGetPlayerFriendBriefReq *const)(v1 + 96));
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 32));
    PlayerSocialComp::fillPlayerFriendList(this, (std::vector<unsigned int> *)(v1 + 32));
    __for_range = (std::vector<unsigned int> *)(v1 + 32);
    __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 32))._M_current;
    __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v1 + 32))._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v7 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      proto::ServerGetPlayerFriendBriefReq::add_friend_uid_list(
        (proto::ServerGetPlayerFriendBriefReq *const)(v1 + 96),
        *v8);
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    sendProtoToSocialService<proto::ServerGetPlayerFriendBriefReq>(
      this->player_,
      (proto::ServerGetPlayerFriendBriefReq *)(v1 + 96));
    v6 = 0;
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 32));
    proto::ServerGetPlayerFriendBriefReq::~ServerGetPlayerFriendBriefReq((proto::ServerGetPlayerFriendBriefReq *const)(v1 + 96));
  }
  result = v6;
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF801C) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 418: range 0000000016D129F0-0000000016D12DDF
int32_t __cdecl PlayerSocialComp::clientRequestAskFriendList(PlayerSocialComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // rbx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  bool isAskAddFriendClosed; // r14
  int32_t v6; // r14d
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v7; // rax
  google::protobuf::uint32 *v8; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-138h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-130h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-128h]
  std::shared_ptr<Config> v13; // [rsp+30h] [rbp-120h] BYREF
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-110h] BYREF
  char v15[240]; // [rsp+60h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 40 7 req:428 112 48 7 rsp:422";
  *(_QWORD *)(v1 + 16) = PlayerSocialComp::clientRequestAskFriendList;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862722] = -218959360;
  v3[536862723] = 62194;
  v3[536862725] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
  isAskAddFriendClosed = FeatureSwitchMgr::isAskAddFriendClosed(&v4->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( isAskAddFriendClosed )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/social/player_social_comp.cpp",
      "clientRequestAskFriendList",
      421);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v14,
      (const char (*)[27])"friend list feature closed");
    common::milog::MiLogStream::~MiLogStream(&v14);
    proto::GetPlayerAskFriendListRsp::GetPlayerAskFriendListRsp((proto::GetPlayerAskFriendListRsp *const)(v1 + 112));
    proto::GetPlayerAskFriendListRsp::set_retcode((proto::GetPlayerAskFriendListRsp *const)(v1 + 112), 142);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 112));
    v6 = 142;
    proto::GetPlayerAskFriendListRsp::~GetPlayerAskFriendListRsp((proto::GetPlayerAskFriendListRsp *const)(v1 + 112));
  }
  else
  {
    proto::ServerGetAskFriendBriefReq::ServerGetAskFriendBriefReq((proto::ServerGetAskFriendBriefReq *const)(v1 + 32));
    __for_range = &this->ask_add_friend_vec_;
    __for_begin._M_current = std::vector<unsigned int>::begin(&this->ask_add_friend_vec_)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&this->ask_add_friend_vec_)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v7 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      proto::ServerGetAskFriendBriefReq::add_ask_add_friend_uid_list(
        (proto::ServerGetAskFriendBriefReq *const)(v1 + 32),
        *v8);
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    sendProtoToSocialService<proto::ServerGetAskFriendBriefReq>(
      this->player_,
      (proto::ServerGetAskFriendBriefReq *)(v1 + 32));
    v6 = 0;
    proto::ServerGetAskFriendBriefReq::~ServerGetAskFriendBriefReq((proto::ServerGetAskFriendBriefReq *const)(v1 + 32));
  }
  result = v6;
  if ( v15 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 438: range 0000000016D12DE0-0000000016D13055
int32_t __cdecl PlayerSocialComp::clientRequstRecentMpPlayerList(PlayerSocialComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::_List_iterator<unsigned int>::reference v4; // rax
  uint32_t *v5; // rdx
  int32_t result; // eax
  google::protobuf::uint32 uid; // [rsp+14h] [rbp-CCh]
  std::list<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::list<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  std::list<unsigned int> *__for_range; // [rsp+28h] [rbp-B8h]
  char v11[176]; // [rsp+30h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 40 7 req:439";
  *(_QWORD *)(v1 + 16) = PlayerSocialComp::clientRequstRecentMpPlayerList;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  proto::ServerGetRecentMpPlayerListReq::ServerGetRecentMpPlayerListReq((proto::ServerGetRecentMpPlayerListReq *const)(v1 + 48));
  __for_range = &this->recent_mp_player_uid_list_;
  __for_begin._M_node = std::list<unsigned int>::begin(&this->recent_mp_player_uid_list_)._M_node;
  __for_end._M_node = std::list<unsigned int>::end(&this->recent_mp_player_uid_list_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v4 = std::_List_iterator<unsigned int>::operator*(&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    uid = *v5;
    if ( !PlayerSocialComp::isPlayerInBlacklist(this, *v5) )
      proto::ServerGetRecentMpPlayerListReq::add_recent_player_uid_list(
        (proto::ServerGetRecentMpPlayerListReq *const)(v1 + 48),
        uid);
    std::_List_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  sendProtoToSocialService<proto::ServerGetRecentMpPlayerListReq>(
    this->player_,
    (proto::ServerGetRecentMpPlayerListReq *)(v1 + 48));
  proto::ServerGetRecentMpPlayerListReq::~ServerGetRecentMpPlayerListReq((proto::ServerGetRecentMpPlayerListReq *const)(v1 + 48));
  result = 0;
  if ( v11 == (char *)v1 )
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
  return result;
};

// Line 454: range 0000000016D13056-0000000016D13365
int32_t __cdecl PlayerSocialComp::clientRequstBlacklist(PlayerSocialComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // rbx
  std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *M_cur; // r14
  std::unordered_set<unsigned int>::iterator v5; // rax
  unsigned int *v6; // rax
  google::protobuf::uint32 *v7; // rdx
  int32_t result; // eax
  std::unordered_set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  std::unordered_set<unsigned int> *__for_range; // [rsp+28h] [rbp-118h]
  char v12[272]; // [rsp+30h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 40 7 req:455 128 56 21 all_blacklist_set:457";
  *(_QWORD *)(v1 + 16) = PlayerSocialComp::clientRequstBlacklist;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = -234881024;
  v3[536862723] = -218959118;
  v3[536862725] = -218103808;
  v3[536862726] = -202116109;
  proto::ServerGetPlayerBlacklistReq::ServerGetPlayerBlacklistReq((proto::ServerGetPlayerBlacklistReq *const)(v1 + 48));
  std::unordered_set<unsigned int>::unordered_set(
    (std::unordered_set<unsigned int> *const)(v1 + 128),
    &this->blacklist_set_);
  M_cur = std::unordered_set<unsigned int>::end(&this->psn_blacklist_set_)._M_cur;
  v5._M_cur = std::unordered_set<unsigned int>::begin(&this->psn_blacklist_set_)._M_cur;
  std::unordered_set<unsigned int>::insert<std::__detail::_Node_iterator<unsigned int,true,false>>(
    (std::unordered_set<unsigned int> *const)(v1 + 128),
    v5,
    (std::__detail::_Node_iterator<unsigned int,true,false>)M_cur);
  __for_range = (std::unordered_set<unsigned int> *)(v1 + 128);
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin((std::unordered_set<unsigned int> *const)(v1 + 128))._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end((std::unordered_set<unsigned int> *const)(v1 + 128))._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    proto::ServerGetPlayerBlacklistReq::add_blacklist_uid_list(
      (proto::ServerGetPlayerBlacklistReq *const)(v1 + 48),
      *v7);
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  sendProtoToSocialService<proto::ServerGetPlayerBlacklistReq>(
    this->player_,
    (proto::ServerGetPlayerBlacklistReq *)(v1 + 48));
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v1 + 128));
  proto::ServerGetPlayerBlacklistReq::~ServerGetPlayerBlacklistReq((proto::ServerGetPlayerBlacklistReq *const)(v1 + 48));
  result = 0;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 471: range 0000000016D13366-0000000016D13C91
int32_t __cdecl PlayerSocialComp::onGetPlayerFriendList(
        PlayerSocialComp *const this,
        const proto::ServerGetPlayerFriendListRsp *rsp_0)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // r14
  const google::protobuf::RepeatedField<unsigned int> *v7; // rax
  const google::protobuf::RepeatedField<unsigned int> *v8; // rax
  common::milog::MiLogStream *v9; // r14
  const google::protobuf::RepeatedField<unsigned int> *v10; // rax
  const google::protobuf::RepeatedField<unsigned int> *v11; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v13; // rax
  _DWORD *v14; // rdx
  const google::protobuf::RepeatedField<unsigned int> *v15; // rax
  const google::protobuf::RepeatedField<unsigned int> *v16; // rax
  int32_t result; // eax
  std::unordered_map<unsigned int,std::string>::iterator __for_begin; // [rsp+20h] [rbp-1F0h] BYREF
  std::unordered_map<unsigned int,std::string>::iterator __for_end; // [rsp+28h] [rbp-1E8h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+30h] [rbp-1E0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_1; // [rsp+38h] [rbp-1D8h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_2; // [rsp+40h] [rbp-1D0h]
  std::unordered_map<unsigned int,std::string> *__for_range; // [rsp+48h] [rbp-1C8h]
  std::vector<unsigned int> *__for_range_0; // [rsp+50h] [rbp-1C0h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_1; // [rsp+58h] [rbp-1B8h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+60h] [rbp-1B0h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_2; // [rsp+68h] [rbp-1A8h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_1; // [rsp+70h] [rbp-1A0h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_3; // [rsp+78h] [rbp-198h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_2; // [rsp+80h] [rbp-190h]
  const std::pair<unsigned int const,std::string > *v31; // [rsp+88h] [rbp-188h]
  std::tuple_element<0,const std::pair<unsigned int const,std::string > >::type *uid; // [rsp+90h] [rbp-180h]
  std::tuple_element<1,const std::pair<unsigned int const,std::string > >::type *_; // [rsp+98h] [rbp-178h]
  common::milog::MiLogStream v34; // [rsp+A0h] [rbp-170h] BYREF
  char v35[336]; // [rsp+C0h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 7 uid:518 64 24 28 to_be_deleted_remark_vec:485 128 48 23 new_friend_list_set:479 208 48 "
                        "27 new_psn_friend_list_set:482";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::onGetPlayerFriendList;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862725] = -219021312;
  v4[536862726] = 62194;
  v4[536862728] = -202116109;
  if ( proto::ServerGetPlayerFriendListRsp::retcode(rsp_0) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.cpp",
      "onGetPlayerFriendList",
      474);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v34,
      (const char (*)[39])"[Social] get player friend list failed");
    common::milog::MiLogStream::~MiLogStream(&v34);
    v5 = -1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/social/player_social_comp.cpp",
      "onGetPlayerFriendList",
      478);
    v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v34,
           (const char (*)[28])"[Social] friend list size: ");
    v7 = proto::ServerGetPlayerFriendListRsp::friend_uid_list(rsp_0);
    *(_DWORD *)(v2 + 48) = google::protobuf::RepeatedField<unsigned int>::size(v7);
    common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v34);
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 128));
    v8 = proto::ServerGetPlayerFriendListRsp::friend_uid_list(rsp_0);
    common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(
      (std::set<unsigned int> *)(v2 + 128),
      v8);
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/social/player_social_comp.cpp",
      "onGetPlayerFriendList",
      481);
    v9 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v34,
           (const char (*)[32])"[Social] psn friend list size: ");
    v10 = proto::ServerGetPlayerFriendListRsp::psn_friend_uid_list(rsp_0);
    *(_DWORD *)(v2 + 48) = google::protobuf::RepeatedField<unsigned int>::size(v10);
    common::milog::MiLogStream::operator<<<int,(int *)0>(v9, (const int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v34);
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 208));
    v11 = proto::ServerGetPlayerFriendListRsp::psn_friend_uid_list(rsp_0);
    common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(
      (std::set<unsigned int> *)(v2 + 208),
      v11);
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
    __for_range = &this->friend_remark_name_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,std::string>::begin(&this->friend_remark_name_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,std::string>::end(&this->friend_remark_name_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,std::string>,false>(&__for_begin, &__for_end) )
    {
      v31 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::string>,false,false>::operator*(&__for_begin);
      uid = std::get<0ul,unsigned int const,std::string>(v31);
      _ = (std::tuple_element<1,const std::pair<unsigned int const,std::string > >::type *)std::get<1ul,unsigned int const,std::string>(v31);
      if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
              (std::set<unsigned int> *)(v2 + 128),
              uid)
        && !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
              (std::set<unsigned int> *)(v2 + 208),
              uid) )
      {
        std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 64), uid);
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::string>,false,false>::operator++(&__for_begin);
    }
    __for_range_0 = (std::vector<unsigned int> *)(v2 + 64);
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::string >,false>::__node_type *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 64))._M_current;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::string >,false>::__node_type *)std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
    {
      v13 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      *(_DWORD *)(v2 + 48) = *v14;
      std::unordered_map<unsigned int,std::string>::erase(
        &this->friend_remark_name_map_,
        (const std::unordered_map<unsigned int,std::string>::key_type *)(v2 + 48));
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
    }
    std::unordered_set<unsigned int>::clear(&this->friend_set_);
    __for_range_1 = proto::ServerGetPlayerFriendListRsp::friend_uid_list(rsp_0);
    __for_begin_0 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_1);
    __for_end_0 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_1);
    while ( __for_begin_0 != __for_end_0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)__for_begin_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(__for_begin_0);
      }
      PlayerSocialComp::addFriend(this, *__for_begin_0++);
    }
    std::unordered_set<unsigned int>::clear(&this->psn_friend_set_);
    __for_range_2 = proto::ServerGetPlayerFriendListRsp::psn_friend_uid_list(rsp_0);
    __for_begin_1 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_2);
    __for_end_1 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_2);
    while ( __for_begin_1 != __for_end_1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)__for_begin_1 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)__for_begin_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_1 >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(__for_begin_1);
      }
      PlayerSocialComp::addPSNFriend(this, *__for_begin_1++);
    }
    std::vector<unsigned int>::clear(&this->ask_add_friend_vec_);
    v15 = proto::ServerGetPlayerFriendListRsp::ask_add_friend_uid_list(rsp_0);
    common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v15, &this->ask_add_friend_vec_);
    std::unordered_set<unsigned int>::clear(&this->blacklist_set_);
    __for_range_3 = proto::ServerGetPlayerFriendListRsp::blacklist_uid_list(rsp_0);
    __for_begin_2 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_3);
    __for_end_2 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_3);
    while ( __for_begin_2 != __for_end_2 )
    {
      if ( *(_BYTE *)(((unsigned __int64)__for_begin_2 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)__for_begin_2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_2 >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(__for_begin_2);
      }
      *(_DWORD *)(v2 + 48) = *__for_begin_2;
      std::unordered_set<unsigned int>::insert(
        &this->blacklist_set_,
        (const std::unordered_set<unsigned int>::value_type *)(v2 + 48));
      ++__for_begin_2;
    }
    std::unordered_set<unsigned int>::clear(&this->psn_blacklist_set_);
    v16 = proto::ServerGetPlayerFriendListRsp::psn_blacklist_uid_list(rsp_0);
    common::tools::MiscUtils::setFromRepeated<std::unordered_set<unsigned int>,unsigned int>(
      &this->psn_blacklist_set_,
      v16);
    PlayerSocialComp::notifyFriendInfoChange(this);
    v5 = 0;
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 208));
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 128));
  }
  result = v5;
  if ( v35 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 534: range 0000000016D13C92-0000000016D1407C
void __cdecl PlayerSocialComp::notifyFriendInfoChange(PlayerSocialComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  uint32_t Uid; // eax
  google::protobuf::RepeatedField<unsigned int> *v5; // rax
  google::protobuf::RepeatedField<unsigned int> *v6; // rax
  NetworkMgrBase *v7; // r14
  uint32_t v8; // r8d
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+10h] [rbp-100h] BYREF
  std::string value; // [rsp+20h] [rbp-F0h] BYREF
  char v11[208]; // [rsp+40h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 21 notify_packet_ptr:544 64 56 10 notify:538";
  *(_QWORD *)(v1 + 16) = PlayerSocialComp::notifyFriendInfoChange;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  if ( *(char *)(((unsigned __int64)&this->is_need_notify_info_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_need_notify_info_);
  if ( this->is_need_notify_info_ )
  {
    this->is_need_notify_info_ = 0;
    proto::ServerFriendInfoChangeNotify::ServerFriendInfoChangeNotify((proto::ServerFriendInfoChangeNotify *const)(v1 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Uid = Player::getUid(this->player_);
    proto::ServerFriendInfoChangeNotify::set_my_uid((proto::ServerFriendInfoChangeNotify *const)(v1 + 64), Uid);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getOnlineId[abi:cxx11](&value, this->player_);
    proto::ServerFriendInfoChangeNotify::set_my_online_id((proto::ServerFriendInfoChangeNotify *const)(v1 + 64), &value);
    std::string::~string(&value);
    v5 = proto::ServerFriendInfoChangeNotify::mutable_notify_uid_list((proto::ServerFriendInfoChangeNotify *const)(v1 + 64));
    common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(&this->friend_set_, v5);
    v6 = proto::ServerFriendInfoChangeNotify::mutable_notify_uid_list((proto::ServerFriendInfoChangeNotify *const)(v1 + 64));
    common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(&this->psn_friend_set_, v6);
    common::minet::PacketUtils::createPacket<proto::ServerFriendInfoChangeNotify>((const proto::ServerFriendInfoChangeNotify *)(v1 + 32));
    if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v1 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&value,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/social/player_social_comp.cpp",
        "notifyFriendInfoChange",
        547);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
        (common::milog::MiLogStream *const)&value,
        (const char (*)[20])"createPacket failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&value);
    }
    else
    {
      v7 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v1 + 32));
      NetworkMgrBase::sendPacketToTargetService(v7, (common::minet::PacketPtr)__PAIR128__(4LL, &packet_ptr), 0, v8);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    }
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v1 + 32));
    proto::ServerFriendInfoChangeNotify::~ServerFriendInfoChangeNotify((proto::ServerFriendInfoChangeNotify *const)(v1 + 64));
  }
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF800C) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 555: range 0000000016D1407E-0000000016D14463
int32_t __cdecl PlayerSocialComp::onServerGetPlayerFriendBrief(
        PlayerSocialComp *const this,
        const proto::ServerGetPlayerFriendBriefRsp *rsp_0)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<proto::GetPlayerFriendListRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // r14
  google::protobuf::int32 v6; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool v8; // r14
  std::__shared_ptr_access<proto::GetPlayerFriendListRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t v10; // edx
  const std::string *v11; // rax
  unsigned int *v12; // rcx
  const proto::FriendBrief *v13; // r8
  Player *player; // r14
  int32_t result; // eax
  bool is_game_source; // [rsp+1Eh] [rbp-B2h]
  bool is_psn_source; // [rsp+1Fh] [rbp-B1h]
  unsigned int v18; // [rsp+20h] [rbp-B0h] BYREF
  uint32_t uid; // [rsp+24h] [rbp-ACh]
  google::protobuf::RepeatedPtrField<proto::FriendBrief>::const_iterator __for_begin; // [rsp+28h] [rbp-A8h] BYREF
  google::protobuf::RepeatedPtrField<proto::FriendBrief>::const_iterator __for_end; // [rsp+30h] [rbp-A0h] BYREF
  const google::protobuf::RepeatedPtrField<proto::FriendBrief> *__for_range; // [rsp+38h] [rbp-98h]
  const proto::FriendBrief *friend_brief; // [rsp+40h] [rbp-90h]
  proto::FriendBrief *client_brief; // [rsp+48h] [rbp-88h]
  std::shared_ptr<const google::protobuf::Message> v25; // [rsp+50h] [rbp-80h] BYREF
  char v26[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 18 client_rsp_ptr:556";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::onServerGetPlayerFriendBrief;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::GetPlayerFriendListRsp>();
  v5 = std::__shared_ptr_access<proto::GetPlayerFriendListRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetPlayerFriendListRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  v6 = proto::ServerGetPlayerFriendBriefRsp::retcode(rsp_0);
  proto::GetPlayerFriendListRsp::set_retcode(v5, v6);
  if ( !proto::ServerGetPlayerFriendBriefRsp::retcode(rsp_0) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v25);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
    v8 = !FeatureSwitchMgr::isFriendListClosed(&v7->feature_switch_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v25);
    if ( v8 )
    {
      std::unordered_map<unsigned int,proto::FriendBrief>::clear(&this->friend_brief_map_);
      __for_range = proto::ServerGetPlayerFriendBriefRsp::friend_brief_list(rsp_0);
      __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::FriendBrief>::begin(__for_range).it_;
      __for_end.it_ = google::protobuf::RepeatedPtrField<proto::FriendBrief>::end(__for_range).it_;
      while ( google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief const>::operator!=(
                &__for_begin,
                &__for_end) )
      {
        friend_brief = google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief const>::operator*(&__for_begin);
        v9 = std::__shared_ptr_access<proto::GetPlayerFriendListRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetPlayerFriendListRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        client_brief = proto::GetPlayerFriendListRsp::add_friend_list(v9);
        proto::FriendBrief::CopyFrom(client_brief, friend_brief);
        v10 = proto::FriendBrief::uid(friend_brief);
        v11 = PlayerSocialComp::findFriendRemarkName[abi:cxx11](this, v10);
        proto::FriendBrief::set_remark_name(client_brief, v11);
        uid = proto::FriendBrief::uid(client_brief);
        is_game_source = PlayerSocialComp::isPlayerFriend(this, uid);
        is_psn_source = PlayerSocialComp::isPlayerPSNFriend(this, uid);
        proto::FriendBrief::set_is_game_source(client_brief, is_game_source);
        proto::FriendBrief::set_is_psn_source(client_brief, is_psn_source);
        v18 = proto::FriendBrief::uid(friend_brief);
        std::unordered_map<unsigned int,proto::FriendBrief>::emplace<unsigned int,proto::FriendBrief const&>(
          &this->friend_brief_map_,
          &v18,
          friend_brief,
          v12,
          v13);
        google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief const>::operator++(&__for_begin);
      }
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::GetPlayerFriendListRsp>((const std::shared_ptr<proto::GetPlayerFriendListRsp> *)&v25);
  LODWORD(player) = Player::sendMessage(player, &v25, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v25);
  std::shared_ptr<proto::GetPlayerFriendListRsp>::~shared_ptr((std::shared_ptr<proto::GetPlayerFriendListRsp> *const)(v2 + 32));
  result = (int)player;
  if ( v26 == (char *)v2 )
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

// Line 581: range 0000000016D14464-0000000016D1472F
int32_t __cdecl PlayerSocialComp::onServerGetAskFriendBrief(
        PlayerSocialComp *const this,
        const proto::ServerGetAskFriendBriefRsp *rsp_0)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  google::protobuf::int32 v5; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r14
  int32_t v8; // r14d
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::FriendBrief>::const_iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  google::protobuf::RepeatedPtrField<proto::FriendBrief>::const_iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  const google::protobuf::RepeatedPtrField<proto::FriendBrief> *__for_range; // [rsp+28h] [rbp-D8h]
  const proto::FriendBrief *ask_friend_brief; // [rsp+30h] [rbp-D0h]
  proto::FriendBrief *client_brief; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Config> v15; // [rsp+40h] [rbp-C0h] BYREF
  char v16[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 48 14 client_rsp:582";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::onServerGetAskFriendBrief;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  proto::GetPlayerAskFriendListRsp::GetPlayerAskFriendListRsp((proto::GetPlayerAskFriendListRsp *const)(v2 + 48));
  v5 = proto::ServerGetAskFriendBriefRsp::retcode(rsp_0);
  proto::GetPlayerAskFriendListRsp::set_retcode((proto::GetPlayerAskFriendListRsp *const)(v2 + 48), v5);
  if ( !proto::ServerGetAskFriendBriefRsp::retcode(rsp_0) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v15);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
    v7 = !FeatureSwitchMgr::isAskAddFriendClosed(&v6->feature_switch_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v15);
    if ( v7 )
    {
      __for_range = proto::ServerGetAskFriendBriefRsp::ask_add_friend_brief_list(rsp_0);
      __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::FriendBrief>::begin(__for_range).it_;
      __for_end.it_ = google::protobuf::RepeatedPtrField<proto::FriendBrief>::end(__for_range).it_;
      while ( google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief const>::operator!=(
                &__for_begin,
                &__for_end) )
      {
        ask_friend_brief = google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief const>::operator*(&__for_begin);
        client_brief = proto::GetPlayerAskFriendListRsp::add_ask_friend_list((proto::GetPlayerAskFriendListRsp *const)(v2 + 48));
        proto::FriendBrief::CopyFrom(client_brief, ask_friend_brief);
        google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief const>::operator++(&__for_begin);
      }
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v8 = Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 48));
  proto::GetPlayerAskFriendListRsp::~GetPlayerAskFriendListRsp((proto::GetPlayerAskFriendListRsp *const)(v2 + 48));
  result = v8;
  if ( v16 == (char *)v2 )
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

// Line 600: range 0000000016D14730-0000000016D14C64
__int64 __fastcall PlayerSocialComp::onAskAddFriend(PlayerSocialComp *const this, uint32_t target_uid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool isAskAddFriendClosed; // r14
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  std::__detail::_Node_iterator_base<unsigned int,false> __x; // [rsp+18h] [rbp-108h] BYREF
  std::__detail::_Node_iterator_base<unsigned int,false> __y; // [rsp+20h] [rbp-100h] BYREF
  std::tuple_element<0,std::pair<proto::Retcode,unsigned int> >::type *retcode; // [rsp+28h] [rbp-F8h]
  std::tuple_element<1,std::pair<proto::Retcode,unsigned int> >::type *param; // [rsp+30h] [rbp-F0h]
  std::pair<proto::Retcode,unsigned int> __in; // [rsp+38h] [rbp-E8h] BYREF
  std::shared_ptr<Config> v15; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v16; // [rsp+50h] [rbp-D0h] BYREF
  char v17[176]; // [rsp+70h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 target_uid:599 64 24 14 server_req:644";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::onAskAddFriend;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = target_uid;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
  isAskAddFriendClosed = FeatureSwitchMgr::isAskAddFriendClosed(&v5->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v15);
  if ( isAskAddFriendClosed )
  {
    PlayerSocialComp::sendAskAddFriendRspToClient(this, 142, *(_DWORD *)(v2 + 48), 0);
    v7 = -1;
  }
  else if ( !PlayerSocialComp::isPlayerCanRequstSocial(this) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/social/player_social_comp.cpp",
      "onAskAddFriend",
      608);
    v8 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
           &v16,
           (const char (*)[73])"Anti harassment limit player social request, cur_day_social_request_num:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->cur_day_social_request_num_);
    common::milog::MiLogStream::~MiLogStream(&v16);
    PlayerSocialComp::sendAskAddFriendRspToClient(this, 0, *(_DWORD *)(v2 + 48), 0);
    PlayerSocialComp::logLimitSocialRequest(this, 0);
    v7 = 0;
  }
  else
  {
    __in = PlayerSocialComp::checkAskAddFriendFrequency(this);
    retcode = std::get<0ul,proto::Retcode,unsigned int>(&__in);
    param = std::get<1ul,proto::Retcode,unsigned int>(&__in);
    if ( *(_BYTE *)(((unsigned __int64)retcode >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retcode >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(retcode);
    }
    if ( *retcode )
    {
      if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(param);
      }
      PlayerSocialComp::sendAskAddFriendRspToClient(this, *retcode, *(_DWORD *)(v2 + 48), *param);
      v7 = -1;
    }
    else if ( *(_DWORD *)(v2 + 48) )
    {
      __y._M_cur = std::unordered_set<unsigned int>::end(&this->pending_ask_friend_uid_set_)._M_cur;
      __x._M_cur = std::unordered_set<unsigned int>::find(
                     &this->pending_ask_friend_uid_set_,
                     (const std::unordered_set<unsigned int>::key_type *)(v2 + 48))._M_cur;
      if ( std::__detail::operator!=<unsigned int,false>(&__x, &__y) )
      {
        PlayerSocialComp::sendAskAddFriendRspToClient(this, 7003, *(_DWORD *)(v2 + 48), 0);
        v7 = 0;
      }
      else if ( PlayerSocialComp::isPlayerFriend(this, *(_DWORD *)(v2 + 48)) )
      {
        PlayerSocialComp::sendAskAddFriendRspToClient(this, 7005, *(_DWORD *)(v2 + 48), 0);
        v7 = 0;
      }
      else if ( PlayerSocialComp::isPlayerInBlacklist(this, *(_DWORD *)(v2 + 48)) )
      {
        PlayerSocialComp::sendAskAddFriendRspToClient(this, 7019, *(_DWORD *)(v2 + 48), 0);
        v7 = 0;
      }
      else
      {
        proto::ServerAskAddFriendReq::ServerAskAddFriendReq((proto::ServerAskAddFriendReq *const)(v2 + 64));
        proto::ServerAskAddFriendReq::set_target_uid(
          (proto::ServerAskAddFriendReq *const)(v2 + 64),
          *(_DWORD *)(v2 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v7 = sendProtoToSocialService<proto::ServerAskAddFriendReq>(
               this->player_,
               (proto::ServerAskAddFriendReq *)(v2 + 64));
        proto::ServerAskAddFriendReq::~ServerAskAddFriendReq((proto::ServerAskAddFriendReq *const)(v2 + 64));
      }
    }
    else
    {
      PlayerSocialComp::sendAskAddFriendRspToClient(this, -1, *(_DWORD *)(v2 + 48), 0);
      v7 = -1;
    }
  }
  result = v7;
  if ( v17 == (char *)v2 )
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
  return result;
};

// Line 651: range 0000000016D14C66-0000000016D14E31
int32_t __cdecl PlayerSocialComp::onServerAskAddFriend(
        PlayerSocialComp *const this,
        const proto::ServerAskAddFriendRsp *rsp_0)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t v5; // r13d
  int32_t v6; // esi
  uint32_t Now; // edi
  bool v8; // dl
  int32_t result; // eax
  char v12[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 target_uid:652";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::onServerAskAddFriend;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = proto::ServerAskAddFriendRsp::target_uid(rsp_0);
  std::unordered_set<unsigned int>::erase(
    &this->pending_ask_friend_uid_set_,
    (const std::unordered_set<unsigned int>::key_type *)(v2 + 32));
  v5 = *(_DWORD *)(v2 + 32);
  v6 = proto::ServerAskAddFriendRsp::retcode(rsp_0);
  PlayerSocialComp::sendAskAddFriendRspToClient(this, v6, v5, 0);
  if ( !proto::ServerAskAddFriendRsp::retcode(rsp_0) )
  {
    PlayerSocialComp::addSocialRequestNum(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_day_ask_friend_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_day_ask_friend_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_day_ask_friend_num_);
    }
    ++this->cur_day_ask_friend_num_;
    Now = common::tools::TimeUtils::getNow();
    v8 = *(_BYTE *)(((unsigned __int64)&this->last_ask_friend_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_ask_friend_time_ >> 3)
                                                          + 0x7FFF8000);
    if ( v8 )
    {
      Now = (_DWORD)this + 940;
      __asan_report_store4(&this->last_ask_friend_time_, (((_BYTE)this - 84) & 7u) + 3, v8);
    }
    this->last_ask_friend_time_ = Now;
  }
  result = 0;
  if ( v12 == (char *)v2 )
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

// Line 665: range 0000000016D14E32-0000000016D15143
int32_t __cdecl PlayerSocialComp::onServerDealAddFriend(
        PlayerSocialComp *const this,
        const proto::ServerDealAddFriendRsp *rsp_0)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<proto::DealAddFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // r14
  google::protobuf::int32 v6; // eax
  std::__shared_ptr_access<proto::DealAddFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  google::protobuf::uint32 v8; // eax
  std::__shared_ptr_access<proto::DealAddFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  proto::DealAddFriendResultType v10; // eax
  uint32_t v11; // edx
  const proto::FriendBrief *v12; // rdx
  uint32_t v13; // r14d
  uint32_t v14; // r15d
  uint32_t v15; // esi
  Player *player; // r14
  int32_t result; // eax
  unsigned int value; // [rsp+28h] [rbp-88h] BYREF
  uint32_t log_operation_type; // [rsp+2Ch] [rbp-84h]
  std::shared_ptr<proto::DealAddFriendRsp> __r; // [rsp+30h] [rbp-80h] BYREF
  char v22[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 18 client_rsp_ptr:666";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::onServerDealAddFriend;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::DealAddFriendRsp>();
  v5 = std::__shared_ptr_access<proto::DealAddFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DealAddFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  v6 = proto::ServerDealAddFriendRsp::retcode(rsp_0);
  proto::DealAddFriendRsp::set_retcode(v5, v6);
  v7 = std::__shared_ptr_access<proto::DealAddFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DealAddFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  v8 = proto::ServerDealAddFriendRsp::target_uid(rsp_0);
  proto::DealAddFriendRsp::set_target_uid(v7, v8);
  v9 = std::__shared_ptr_access<proto::DealAddFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DealAddFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  v10 = proto::ServerDealAddFriendRsp::deal_add_friend_result(rsp_0);
  proto::DealAddFriendRsp::set_deal_add_friend_result(v9, v10);
  if ( !proto::ServerDealAddFriendRsp::retcode(rsp_0) )
  {
    if ( proto::ServerDealAddFriendRsp::deal_add_friend_result(rsp_0) == DEAL_ADD_FRIEND_ACCEPT )
    {
      v11 = proto::ServerDealAddFriendRsp::target_uid(rsp_0);
      PlayerSocialComp::addFriend(this, v11);
      v12 = proto::ServerDealAddFriendRsp::target_friend_brief(rsp_0);
      PlayerSocialComp::updateFriendBrief(this, v12);
      log_operation_type = 0;
      v13 = proto::ServerDealAddFriendRsp::target_friend_num(rsp_0);
      v14 = std::unordered_set<unsigned int>::size(&this->friend_set_);
      v15 = proto::ServerDealAddFriendRsp::target_uid(rsp_0);
      PlayerSocialComp::logOpereateFriend(this, v15, 0, v14, v13);
    }
    value = proto::ServerDealAddFriendRsp::target_uid(rsp_0);
    common::tools::MiscUtils::removeValues<std::vector<unsigned int>,unsigned int>(&this->ask_add_friend_vec_, &value);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::DealAddFriendRsp>(&__r);
  LODWORD(player) = Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::DealAddFriendRsp>::~shared_ptr((std::shared_ptr<proto::DealAddFriendRsp> *const)(v2 + 32));
  result = (int)player;
  if ( v22 == (char *)v2 )
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

// Line 687: range 0000000016D15144-0000000016D15384
int32_t __cdecl PlayerSocialComp::deleteFriendByGm(
        PlayerSocialComp *const this,
        const std::vector<unsigned int> *uid_list)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int *v5; // rax
  uint32_t *v6; // rdx
  int32_t result; // eax
  uint32_t uid; // [rsp+14h] [rbp-9Ch]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-98h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-90h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-88h]
  char v12[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 7 req:690";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::deleteFriendByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  __for_range = uid_list;
  __for_begin._M_current = std::vector<unsigned int>::begin(uid_list)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(uid_list)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    uid = *v6;
    proto::ServerDeleteFriendReq::ServerDeleteFriendReq((proto::ServerDeleteFriendReq *const)(v2 + 32));
    proto::ServerDeleteFriendReq::set_target_uid((proto::ServerDeleteFriendReq *const)(v2 + 32), uid);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    sendProtoToSocialService<proto::ServerDeleteFriendReq>(this->player_, (proto::ServerDeleteFriendReq *)(v2 + 32));
    proto::ServerDeleteFriendReq::~ServerDeleteFriendReq((proto::ServerDeleteFriendReq *const)(v2 + 32));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v12 == (char *)v2 )
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

// Line 699: range 0000000016D15386-0000000016D1561A
int32_t __cdecl PlayerSocialComp::onServerDeleteFriend(
        PlayerSocialComp *const this,
        const proto::ServerDeleteFriendRsp *rsp_0)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<proto::DeleteFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // r14
  google::protobuf::int32 v6; // eax
  std::__shared_ptr_access<proto::DeleteFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  google::protobuf::uint32 v8; // eax
  uint32_t v9; // edx
  uint32_t v10; // edx
  uint32_t v11; // r14d
  uint32_t v12; // r15d
  uint32_t v13; // esi
  Player *player; // r14
  int32_t result; // eax
  std::shared_ptr<proto::DeleteFriendRsp> __r; // [rsp+30h] [rbp-80h] BYREF
  char v17[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 18 client_rsp_ptr:700";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::onServerDeleteFriend;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::DeleteFriendRsp>();
  v5 = std::__shared_ptr_access<proto::DeleteFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DeleteFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  v6 = proto::ServerDeleteFriendRsp::retcode(rsp_0);
  proto::DeleteFriendRsp::set_retcode(v5, v6);
  v7 = std::__shared_ptr_access<proto::DeleteFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DeleteFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  v8 = proto::ServerDeleteFriendRsp::target_uid(rsp_0);
  proto::DeleteFriendRsp::set_target_uid(v7, v8);
  if ( !proto::ServerDeleteFriendRsp::retcode(rsp_0) )
  {
    v9 = proto::ServerDeleteFriendRsp::target_uid(rsp_0);
    PlayerSocialComp::deleteFriend(this, v9);
    v10 = proto::ServerDeleteFriendRsp::target_uid(rsp_0);
    PlayerSocialComp::removeFriendBrief(this, v10);
    v11 = proto::ServerDeleteFriendRsp::target_friend_num(rsp_0);
    v12 = std::unordered_set<unsigned int>::size(&this->friend_set_);
    v13 = proto::ServerDeleteFriendRsp::target_uid(rsp_0);
    PlayerSocialComp::logOpereateFriend(this, v13, 1u, v12, v11);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::DeleteFriendRsp>(&__r);
  LODWORD(player) = Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::DeleteFriendRsp>::~shared_ptr((std::shared_ptr<proto::DeleteFriendRsp> *const)(v2 + 32));
  result = (int)player;
  if ( v17 == (char *)v2 )
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

// Line 716: range 0000000016D1561C-0000000016D1593B
int32_t __cdecl PlayerSocialComp::onSetPlayerHeadImage(PlayerSocialComp *const this, uint32_t avatar_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t AvatarComp; // eax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerBasicComp *BasicComp; // rax
  PlayerBasicComp *v8; // r14
  proto::ProfilePicture *v9; // rax
  int32_t v10; // r14d
  int32_t result; // eax
  uint32_t costume_id; // [rsp+1Ch] [rbp-D4h]
  char v13[208]; // [rsp+20h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 14 avatar_ptr:717 80 40 7 rsp:718";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::onSetPlayerHeadImage;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  AvatarComp = (unsigned int)Player::getAvatarComp(this->player_);
  PlayerAvatarComp::findFormalAvatarByAvatarId((const PlayerAvatarComp *const)(v2 + 48), AvatarComp);
  proto::SetPlayerHeadImageRsp::SetPlayerHeadImageRsp((proto::SetPlayerHeadImageRsp *const)(v2 + 80));
  if ( std::operator==<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v2 + 48)) )
  {
    proto::SetPlayerHeadImageRsp::set_retcode((proto::SetPlayerHeadImageRsp *const)(v2 + 80), 104);
  }
  else
  {
    v6 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    costume_id = Avatar::getCostumeId(v6);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::setProfilePicture(BasicComp, avatar_id, costume_id);
    proto::SetPlayerHeadImageRsp::set_retcode((proto::SetPlayerHeadImageRsp *const)(v2 + 80), 0);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v8 = Player::getBasicComp(this->player_);
  v9 = proto::SetPlayerHeadImageRsp::mutable_profile_picture((proto::SetPlayerHeadImageRsp *const)(v2 + 80));
  PlayerBasicComp::getProfilePictureToClient(v8, v9);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v10 = Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 80));
  proto::SetPlayerHeadImageRsp::~SetPlayerHeadImageRsp((proto::SetPlayerHeadImageRsp *const)(v2 + 80));
  std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v2 + 48));
  result = v10;
  if ( v13 == (char *)v2 )
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
  return result;
};

// Line 735: range 0000000016D1593C-0000000016D15C01
int32_t __cdecl PlayerSocialComp::onGetPS4FriendUid(
        PlayerSocialComp *const this,
        const std::vector<unsigned int> *uid_vec,
        const proto::SeverGetPS4FriendUidRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  const unsigned int *M_current; // r15
  std::vector<unsigned int>::const_iterator v7; // rax
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::FriendBrief>::const_iterator __for_begin; // [rsp+28h] [rbp-D8h] BYREF
  google::protobuf::RepeatedPtrField<proto::FriendBrief>::const_iterator __for_end; // [rsp+30h] [rbp-D0h] BYREF
  const google::protobuf::RepeatedPtrField<proto::FriendBrief> *__for_range; // [rsp+38h] [rbp-C8h]
  const proto::FriendBrief *friend_brief; // [rsp+40h] [rbp-C0h]
  proto::FriendBrief *client_brief; // [rsp+48h] [rbp-B8h]
  char v15[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 48 10 notify:742";
  *(_QWORD *)(v3 + 16) = PlayerSocialComp::onGetPS4FriendUid;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -202116109;
  std::unordered_set<unsigned int>::clear(&this->psn_friend_set_);
  M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
  v7._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
  std::unordered_set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
    &this->psn_friend_set_,
    v7,
    (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
  PlayerSocialComp::syncPSNFriendToRedis(this);
  proto::PSNFriendListNotify::PSNFriendListNotify((proto::PSNFriendListNotify *const)(v3 + 48));
  __for_range = proto::SeverGetPS4FriendUidRsp::friend_brief_list(rsp_0);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::FriendBrief>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::FriendBrief>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    friend_brief = google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief const>::operator*(&__for_begin);
    client_brief = proto::PSNFriendListNotify::add_psn_friend_list((proto::PSNFriendListNotify *const)(v3 + 48));
    proto::FriendBrief::CopyFrom(client_brief, friend_brief);
    proto::FriendBrief::set_is_game_source(client_brief, 0);
    proto::FriendBrief::set_is_psn_source(client_brief, 1);
    google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief const>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v3 + 48));
  proto::PSNFriendListNotify::~PSNFriendListNotify((proto::PSNFriendListNotify *const)(v3 + 48));
  result = 0;
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 755: range 0000000016D15C02-0000000016D15F19
int32_t __cdecl PlayerSocialComp::onGetPS4BlacklistUid(
        PlayerSocialComp *const this,
        const std::vector<unsigned int> *uid_vec,
        const proto::SeverGetPS4FriendUidRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  const unsigned int *M_current; // r15
  std::vector<unsigned int>::const_iterator v7; // rax
  PlayerMatchComp *MatchComp; // rax
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::FriendBrief>::const_iterator __for_begin; // [rsp+28h] [rbp-D8h] BYREF
  google::protobuf::RepeatedPtrField<proto::FriendBrief>::const_iterator __for_end; // [rsp+30h] [rbp-D0h] BYREF
  const google::protobuf::RepeatedPtrField<proto::FriendBrief> *__for_range; // [rsp+38h] [rbp-C8h]
  const proto::FriendBrief *friend_brief; // [rsp+40h] [rbp-C0h]
  proto::FriendBrief *client_brief; // [rsp+48h] [rbp-B8h]
  char v16[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 48 10 notify:764";
  *(_QWORD *)(v3 + 16) = PlayerSocialComp::onGetPS4BlacklistUid;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -202116109;
  std::unordered_set<unsigned int>::clear(&this->psn_blacklist_set_);
  M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
  v7._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
  std::unordered_set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
    &this->psn_blacklist_set_,
    v7,
    (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
  PlayerSocialComp::deletePSNBlackListFriendRelation(this);
  PlayerSocialComp::syncPSNBlacklistToRedis(this);
  proto::PSNBlackListNotify::PSNBlackListNotify((proto::PSNBlackListNotify *const)(v3 + 48));
  __for_range = proto::SeverGetPS4FriendUidRsp::friend_brief_list(rsp_0);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::FriendBrief>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::FriendBrief>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    friend_brief = google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief const>::operator*(&__for_begin);
    client_brief = proto::PSNBlackListNotify::add_psn_blacklist((proto::PSNBlackListNotify *const)(v3 + 48));
    proto::FriendBrief::CopyFrom(client_brief, friend_brief);
    proto::FriendBrief::set_is_game_source(client_brief, 0);
    proto::FriendBrief::set_is_psn_source(client_brief, 1);
    google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief const>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v3 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  MatchComp = Player::getMatchComp(this->player_);
  PlayerMatchComp::updateMatchPlayer(MatchComp);
  proto::PSNBlackListNotify::~PSNBlackListNotify((proto::PSNBlackListNotify *const)(v3 + 48));
  result = 0;
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 780: range 0000000016D15F1A-0000000016D16403
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall PlayerSocialComp::unlockNameCard(
        PlayerSocialComp *const this,
        uint32_t name_card_id,
        uint32_t reason)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r14
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v10; // rax
  std::__shared_ptr_access<proto::UnlockNameCardNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  Player *v12; // r14
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGainNameCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGainNameCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  Player *v16; // r14
  std::string reasona; // [rsp+0h] [rbp-100h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> v18; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+50h] [rbp-B0h] BYREF

  reasona._M_string_length = (std::string::size_type)this;
  reasona._M_dataplus._M_p = (std::string::pointer)__PAIR64__(name_card_id, reason);
  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 1 10 holder:793 48 4 16 name_card_id:779 64 16 14 notify_ptr:789 96 16 11 log_ptr:794";
  *(_QWORD *)(v3 + 16) = PlayerSocialComp::unlockNameCard;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = HIDWORD(reasona._M_dataplus._M_p);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v18);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
  v7 = !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
          &v6->design_config.txt_config_mgr.material_config_mgr.name_card_set,
          (const unsigned int *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v18);
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.cpp",
      "unlockNameCard",
      783);
    v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v19,
           (const char (*)[39])"name_card_id not found, name_card_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v10 = std::unordered_set<unsigned int>::emplace<unsigned int &>(
            (std::unordered_set<unsigned int> *const)(reasona._M_string_length + 416),
            (unsigned int *)(v3 + 48),
            (unsigned int *)(reasona._M_string_length + 416));
    if ( v10.second )
    {
      common::tools::perf::make_shared<proto::UnlockNameCardNotify>();
      v11 = std::__shared_ptr_access<proto::UnlockNameCardNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::UnlockNameCardNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      proto::UnlockNameCardNotify::set_name_card_id(v11, *(_DWORD *)(v3 + 48));
      if ( *(_BYTE *)(((reasona._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(reasona._M_string_length + 24);
      v12 = *(Player **)(reasona._M_string_length + 24);
      std::dynamic_pointer_cast<google::protobuf::Message const,proto::UnlockNameCardNotify>((const std::shared_ptr<proto::UnlockNameCardNotify> *)&v18);
      Player::sendMessage(v12, (common::minet::ConstMessagePtr *)&v18, 0LL);
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&v18);
      if ( *(_BYTE *)(((reasona._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(reasona._M_string_length + 24);
      BasicComp = Player::getBasicComp(*(Player *const *)(reasona._M_string_length + 24));
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v19, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0xA8Eu, reasona);
      std::string::~string(&v19);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyGainNameCard>();
      v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyGainNameCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGainNameCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      proto_log::PlayerLogBodyGainNameCard::set_name_card_id(v14, *(_DWORD *)(v3 + 48));
      v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyGainNameCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGainNameCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      proto_log::PlayerLogBodyGainNameCard::set_gain_reason(v15, (google::protobuf::uint32)reasona._M_dataplus._M_p);
      if ( *(_BYTE *)(((reasona._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(reasona._M_string_length + 24);
      v16 = *(Player **)(reasona._M_string_length + 24);
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&v18, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGainNameCard,void>(
        (std::shared_ptr<google::protobuf::Message> *const)&reasona._anon_0,
        (const std::shared_ptr<proto_log::PlayerLogBodyGainNameCard> *)(v3 + 96));
      Player::printStatLog(v16, (MessagePtr *)&reasona._anon_0, &v18, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&reasona._anon_0);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v18);
      std::shared_ptr<proto_log::PlayerLogBodyGainNameCard>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGainNameCard> *const)(v3 + 96));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
      std::shared_ptr<proto::UnlockNameCardNotify>::~shared_ptr((std::shared_ptr<proto::UnlockNameCardNotify> *const)(v3 + 64));
    }
    result = 0LL;
  }
  if ( v20 == (char *)v3 )
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
  return result;
};

// Line 804: range 0000000016D16404-0000000016D164CC
int32_t __cdecl PlayerSocialComp::getAllUnlockNameCard(
        PlayerSocialComp *const this,
        proto::GetAllUnlockNameCardRsp *rsp_0)
{
  unsigned int *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  std::unordered_set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-18h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-10h] BYREF
  std::unordered_set<unsigned int> *__for_range; // [rsp+28h] [rbp-8h]

  __for_range = &this->unlock_name_card_set_;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&this->unlock_name_card_set_)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&this->unlock_name_card_set_)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v2 = (unsigned int *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::GetAllUnlockNameCardRsp::add_name_card_list(rsp_0, *v3);
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 813: range 0000000016D164CE-0000000016D167F2
void __cdecl PlayerSocialComp::setNameCardId(PlayerSocialComp *const this, uint32_t name_card_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChangeNameCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *player; // r14
  std::string v8; // [rsp+0h] [rbp-F0h]
  google::protobuf::uint32 name_card_ida; // [rsp+4h] [rbp-ECh]
  PlayerSocialComp *thisa; // [rsp+8h] [rbp-E8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-C0h] BYREF
  std::string v13; // [rsp+40h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+60h] [rbp-90h] BYREF

  v8._M_string_length = (std::string::size_type)this;
  HIDWORD(v8._M_dataplus._M_p) = name_card_id;
  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 10 holder:818 64 16 11 log_ptr:819";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::setNameCardId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->name_card_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->name_card_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->name_card_id_);
  }
  *((_DWORD *)&v8._anon_0._M_allocated_capacity + 3) = this->name_card_id_;
  this->name_card_id_ = name_card_id;
  if ( *((_DWORD *)&v8._anon_0._M_allocated_capacity + 3) != this->name_card_id_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v13, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xA8Du, v8);
    std::string::~string(&v13);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyChangeNameCard>();
    v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyChangeNameCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChangeNameCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto_log::PlayerLogBodyChangeNameCard::set_name_card_id(v6, name_card_ida);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    player = thisa->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyChangeNameCard,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyChangeNameCard> *)(v2 + 64));
    Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<proto_log::PlayerLogBodyChangeNameCard>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyChangeNameCard> *const)(v2 + 64));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
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

// Line 826: range 0000000016D167F4-0000000016D16DBB
int32_t __cdecl PlayerSocialComp::setBirthday(
        PlayerSocialComp *const this,
        const proto::SetPlayerBirthdayReq *req,
        proto::SetPlayerBirthdayRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  const proto::Birthday *v6; // rdx
  int32_t result; // eax
  const proto::Birthday *v9; // rax
  uint32_t v10; // r14d
  const proto::Birthday *v11; // rax
  uint32_t v12; // eax
  const proto::Birthday *v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v17; // rax
  uint32_t now; // [rsp+28h] [rbp-A8h]
  uint32_t next_day; // [rsp+30h] [rbp-A0h]
  uint32_t next_day_start_time; // [rsp+34h] [rbp-9Ch]
  proto::Birthday *rsp_birthday; // [rsp+38h] [rbp-98h]
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-90h] BYREF
  char v24[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 12 time_gap:863";
  *(_QWORD *)(v3 + 16) = PlayerSocialComp::setBirthday;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  rsp_birthday = proto::SetPlayerBirthdayRsp::mutable_birthday(rsp_0);
  v6 = proto::SetPlayerBirthdayReq::birthday(req);
  proto::Birthday::CopyFrom(rsp_birthday, v6);
  if ( proto::Birthday::month(&this->birthday_) || proto::Birthday::day(&this->birthday_) )
  {
    result = 7009;
    goto LABEL_24;
  }
  v9 = proto::SetPlayerBirthdayReq::birthday(req);
  v10 = proto::Birthday::day(v9);
  v11 = proto::SetPlayerBirthdayReq::birthday(req);
  v12 = proto::Birthday::month(v11);
  if ( !common::tools::TimeUtils::isMonthDayValid(v12, v10) )
  {
    result = 7022;
    goto LABEL_24;
  }
  v13 = proto::SetPlayerBirthdayReq::birthday(req);
  proto::Birthday::CopyFrom(&this->birthday_, v13);
  if ( PlayerSocialComp::isTodayBirthday(this, 0) )
  {
    v14 = ((_BYTE)this + 84) & 7;
    v15 = (*(_BYTE *)(((unsigned __int64)&this->is_login_on_birthday_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&this->is_login_on_birthday_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v15 )
      __asan_report_store1(&this->is_login_on_birthday_, v14, v15);
    this->is_login_on_birthday_ = 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    AvatarComp = Player::getAvatarComp(this->player_);
    PlayerAvatarComp::refreshAllAvatarFetterOnSetBirthday(AvatarComp);
    PlayerSocialComp::tryGrantBirthdayBenefit(this);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/social/player_social_comp.cpp",
      "setBirthday",
      849);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      &v23,
      (const char (*)[33])"[BIRTHDAY] isTodayBirthday false");
    common::milog::MiLogStream::~MiLogStream(&v23);
    now = common::tools::TimeUtils::getNow();
    if ( PlayerSocialComp::isTimeBirthday(this, now + 86400) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/social/player_social_comp.cpp",
        "setBirthday",
        854);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        &v23,
        (const char (*)[32])"[BIRTHDAY] next day is birthday");
      common::milog::MiLogStream::~MiLogStream(&v23);
      next_day = common::tools::TimeUtils::getTimeDay(now + 86400, 0LL);
      next_day_start_time = common::tools::TimeUtils::getDailyStartTime(next_day, 0LL);
      if ( next_day_start_time > now )
      {
        *(_DWORD *)(v3 + 32) = next_day_start_time - now;
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/social/player_social_comp.cpp",
          "setBirthday",
          864);
        v17 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v23,
                (const char (*)[43])"[BIRTHDAY] next day is birthday, time_gap:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v23);
        common::tools::MiTimer::cancel(&this->birthday_timer_);
        if ( PlayerUnixTimer::startS(
               &this->birthday_timer_,
               *(_DWORD *)(v3 + 32),
               0,
               "./src/player/social/player_social_comp.cpp",
               "setBirthday",
               866) )
        {
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/social/player_social_comp.cpp",
            "setBirthday",
            868);
          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v23,
            (const char (*)[30])"birthday_timer_ starts failed");
          common::milog::MiLogStream::~MiLogStream(&v23);
          result = -1;
          goto LABEL_24;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/social/player_social_comp.cpp",
          "setBirthday",
          859);
        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
          &v23,
          (const char (*)[38])"next_day_start_time earlier than now!");
        common::milog::MiLogStream::~MiLogStream(&v23);
      }
    }
  }
  result = 0;
LABEL_24:
  if ( v24 == (char *)v3 )
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

// Line 878: range 0000000016D16DBC-0000000016D16EF9
void __cdecl PlayerSocialComp::setSignature(PlayerSocialComp *const this, const std::string *signature)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 15 before_sign:879";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::setSignature;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  std::string::basic_string(v2 + 32, &this->signature_);
  std::string::operator=(&this->signature_, signature);
  std::string::~string((void *)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 884: range 0000000016D16EFA-0000000016D1756C
int32_t __cdecl PlayerSocialComp::fillSocialBriefData(
        PlayerSocialComp *const this,
        proto::PlayerSocialBriefData *social_brief)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v5; // rax
  uint32_t *v6; // rdx
  uint32_t AvatarComp; // eax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t Level; // eax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t CostumeId; // eax
  PlayerAchievementComp *AchievementComp; // rax
  uint32_t FinishAchievementNum; // edx
  PlayerTowerComp *TowerComp; // rax
  google::protobuf::RepeatedField<unsigned int> *v15; // rax
  bool v16; // r12
  int32_t result; // eax
  uint32_t avatar_id; // [rsp+1Ch] [rbp-C4h]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-C0h] BYREF
  proto::Birthday *birthday; // [rsp+28h] [rbp-B8h]
  std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-B0h]
  std::tuple_element<0,std::pair<unsigned int,unsigned int> >::type *last_floor_index; // [rsp+38h] [rbp-A8h]
  std::tuple_element<1,std::pair<unsigned int,unsigned int> >::type *last_level_index; // [rsp+40h] [rbp-A0h]
  PlayerBasicComp *basic_comp; // [rsp+48h] [rbp-98h]
  proto::SocialShowAvatarInfo *avatar_info; // [rsp+50h] [rbp-90h]
  std::vector<unsigned int>::iterator __for_end; // [rsp+58h] [rbp-88h] BYREF
  std::string __lhs; // [rsp+60h] [rbp-80h] BYREF
  char v28[96]; // [rsp+80h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 avatar_ptr:892";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::fillSocialBriefData;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->name_card_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->name_card_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->name_card_id_);
  }
  proto::PlayerSocialBriefData::set_name_card_id(social_brief, this->name_card_id_);
  proto::PlayerSocialBriefData::set_signature(social_brief, &this->signature_);
  birthday = proto::PlayerSocialBriefData::mutable_birthday(social_brief);
  proto::Birthday::CopyFrom(birthday, &this->birthday_);
  __for_range = &this->show_avatar_id_vec_;
  __for_begin._M_current = std::vector<unsigned int>::begin(&this->show_avatar_id_vec_)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&this->show_avatar_id_vec_)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    avatar_id = *v6;
    avatar_info = proto::PlayerSocialBriefData::add_show_avatar_info_list(social_brief);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    AvatarComp = (unsigned int)Player::getAvatarComp(this->player_);
    PlayerAvatarComp::findFormalAvatarByAvatarId((const PlayerAvatarComp *const)(v2 + 32), AvatarComp);
    if ( std::operator!=<FormalAvatar>((const std::shared_ptr<FormalAvatar> *)(v2 + 32), 0LL) )
    {
      proto::SocialShowAvatarInfo::set_avatar_id(avatar_info, avatar_id);
      v8 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      Level = Creature::getLevel(v8);
      proto::SocialShowAvatarInfo::set_level(avatar_info, Level);
      v10 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      CostumeId = Avatar::getCostumeId(v10);
      proto::SocialShowAvatarInfo::set_costume_id(avatar_info, CostumeId);
    }
    std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v2 + 32));
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_show_avatar_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_show_avatar_);
  proto::PlayerSocialBriefData::set_is_show_avatar(social_brief, this->is_show_avatar_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  AchievementComp = Player::getAchievementComp(this->player_);
  FinishAchievementNum = PlayerAchievementComp::getFinishAchievementNum(AchievementComp);
  proto::PlayerSocialBriefData::set_finish_achievement_num(social_brief, FinishAchievementNum);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  TowerComp = Player::getTowerComp(this->player_);
  __for_end._M_current = (unsigned int *)PlayerTowerComp::getCurScheduleFloorRecord(TowerComp);
  last_floor_index = std::get<0ul,unsigned int,unsigned int>((std::pair<unsigned int,unsigned int> *)&__for_end);
  last_level_index = std::get<1ul,unsigned int,unsigned int>((std::pair<unsigned int,unsigned int> *)&__for_end);
  if ( *(_BYTE *)(((unsigned __int64)last_floor_index >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)last_floor_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)last_floor_index >> 3)
                                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(last_floor_index);
  }
  proto::PlayerSocialBriefData::set_tower_floor_index(social_brief, *last_floor_index);
  if ( *(_BYTE *)(((unsigned __int64)last_level_index >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)last_level_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)last_level_index >> 3)
                                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(last_level_index);
  }
  proto::PlayerSocialBriefData::set_tower_level_index(social_brief, *last_level_index);
  v15 = proto::PlayerSocialBriefData::mutable_show_name_card_id_list(social_brief);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->show_name_card_id_vec_, v15);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  basic_comp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getIpCountryCode[abi:cxx11](&__lhs, basic_comp);
  v16 = std::operator==<char>(&__lhs, "CN");
  std::string::~string(&__lhs);
  if ( v16 )
    PlayerBasicComp::getIpRegionName[abi:cxx11](&__lhs, basic_comp);
  else
    PlayerBasicComp::getIpCountryCode[abi:cxx11](&__lhs, basic_comp);
  proto::PlayerSocialBriefData::set_ip_code(social_brief, &__lhs);
  std::string::~string(&__lhs);
  result = 0;
  if ( v28 == (char *)v2 )
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

// Line 921: range 0000000016D1756E-0000000016D17E67
int32_t __cdecl PlayerSocialComp::fillSocialDetail(
        PlayerSocialComp *const this,
        proto::SocialDetail *social_detail,
        uint32_t target_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  uint32_t Uid; // edx
  const std::string *v7; // rdx
  uint32_t Level; // edx
  proto::ProfilePicture *v9; // rax
  uint32_t WorldLevel; // edx
  bool v11; // al
  PlayerMpComp *MpComp; // rax
  bool v13; // dl
  bool isPlayerInBlacklist; // dl
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v15; // rax
  uint32_t *v16; // rdx
  uint32_t AvatarComp; // eax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint32_t v19; // eax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  uint32_t CostumeId; // eax
  PlayerAchievementComp *AchievementComp; // rax
  uint32_t FinishAchievementNum; // edx
  PlayerTowerComp *TowerComp; // rax
  google::protobuf::RepeatedField<unsigned int> *v25; // rax
  bool v26; // r12
  int32_t result; // eax
  uint32_t avatar_id; // [rsp+2Ch] [rbp-C4h]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-C0h] BYREF
  PlayerBasicComp *basic_comp; // [rsp+38h] [rbp-B8h]
  proto::Birthday *birthday; // [rsp+40h] [rbp-B0h]
  std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-A8h]
  std::tuple_element<0,std::pair<unsigned int,unsigned int> >::type *last_floor_index; // [rsp+50h] [rbp-A0h]
  std::tuple_element<1,std::pair<unsigned int,unsigned int> >::type *last_level_index; // [rsp+58h] [rbp-98h]
  proto::SocialShowAvatarInfo *avatar_info; // [rsp+60h] [rbp-90h]
  std::vector<unsigned int>::iterator __for_end; // [rsp+68h] [rbp-88h] BYREF
  std::string value; // [rsp+70h] [rbp-80h] BYREF
  char v39[96]; // [rsp+90h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 avatar_ptr:942";
  *(_QWORD *)(v3 + 16) = PlayerSocialComp::fillSocialDetail;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  basic_comp = Player::getBasicComp(this->player_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Uid = Player::getUid(this->player_);
  proto::SocialDetail::set_uid(social_detail, Uid);
  v7 = PlayerBasicComp::getNickName[abi:cxx11](basic_comp);
  proto::SocialDetail::set_nickname(social_detail, v7);
  Level = PlayerBasicComp::getLevel(basic_comp);
  proto::SocialDetail::set_level(social_detail, Level);
  v9 = proto::SocialDetail::mutable_profile_picture(social_detail);
  PlayerBasicComp::getProfilePictureToClient(basic_comp, v9);
  proto::SocialDetail::set_signature(social_detail, &this->signature_);
  birthday = proto::SocialDetail::mutable_birthday(social_detail);
  proto::Birthday::CopyFrom(birthday, &this->birthday_);
  WorldLevel = PlayerBasicComp::getWorldLevel(basic_comp);
  proto::SocialDetail::set_world_level(social_detail, WorldLevel);
  proto::SocialDetail::set_online_state(social_detail, FRIEND_ONLINE);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v11 = target_uid == Player::getUid(this->player_) || PlayerSocialComp::isPlayerFriend(this, target_uid);
  proto::SocialDetail::set_is_friend(social_detail, v11);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  MpComp = Player::getMpComp(this->player_);
  v13 = PlayerMpComp::getMpModeAvailabilty(MpComp) == 0;
  proto::SocialDetail::set_is_mp_mode_available(social_detail, v13);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getOnlineId[abi:cxx11](&value, this->player_);
  proto::SocialDetail::set_online_id(social_detail, &value);
  std::string::~string(&value);
  if ( *(_BYTE *)(((unsigned __int64)&this->name_card_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->name_card_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->name_card_id_);
  }
  proto::SocialDetail::set_name_card_id(social_detail, this->name_card_id_);
  isPlayerInBlacklist = PlayerSocialComp::isPlayerInBlacklist(this, target_uid);
  proto::SocialDetail::set_is_in_blacklist(social_detail, isPlayerInBlacklist);
  if ( *(char *)(((unsigned __int64)&this->is_show_avatar_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_show_avatar_);
  proto::SocialDetail::set_is_show_avatar(social_detail, this->is_show_avatar_);
  __for_range = &this->show_avatar_id_vec_;
  __for_begin._M_current = std::vector<unsigned int>::begin(&this->show_avatar_id_vec_)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&this->show_avatar_id_vec_)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v15 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    v16 = v15;
    if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v15);
    }
    avatar_id = *v16;
    avatar_info = proto::SocialDetail::add_show_avatar_info_list(social_detail);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    AvatarComp = (unsigned int)Player::getAvatarComp(this->player_);
    PlayerAvatarComp::findFormalAvatarByAvatarId((const PlayerAvatarComp *const)(v3 + 32), AvatarComp);
    if ( std::operator!=<FormalAvatar>((const std::shared_ptr<FormalAvatar> *)(v3 + 32), 0LL) )
    {
      proto::SocialShowAvatarInfo::set_avatar_id(avatar_info, avatar_id);
      v18 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v19 = Creature::getLevel(v18);
      proto::SocialShowAvatarInfo::set_level(avatar_info, v19);
      v20 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      CostumeId = Avatar::getCostumeId(v20);
      proto::SocialShowAvatarInfo::set_costume_id(avatar_info, CostumeId);
    }
    std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  AchievementComp = Player::getAchievementComp(this->player_);
  FinishAchievementNum = PlayerAchievementComp::getFinishAchievementNum(AchievementComp);
  proto::SocialDetail::set_finish_achievement_num(social_detail, FinishAchievementNum);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  TowerComp = Player::getTowerComp(this->player_);
  __for_end._M_current = (unsigned int *)PlayerTowerComp::getCurScheduleFloorRecord(TowerComp);
  last_floor_index = std::get<0ul,unsigned int,unsigned int>((std::pair<unsigned int,unsigned int> *)&__for_end);
  last_level_index = std::get<1ul,unsigned int,unsigned int>((std::pair<unsigned int,unsigned int> *)&__for_end);
  if ( *(_BYTE *)(((unsigned __int64)last_floor_index >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)last_floor_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)last_floor_index >> 3)
                                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(last_floor_index);
  }
  proto::SocialDetail::set_tower_floor_index(social_detail, *last_floor_index);
  if ( *(_BYTE *)(((unsigned __int64)last_level_index >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)last_level_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)last_level_index >> 3)
                                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(last_level_index);
  }
  proto::SocialDetail::set_tower_level_index(social_detail, *last_level_index);
  v25 = proto::SocialDetail::mutable_show_name_card_id_list(social_detail);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->show_name_card_id_vec_, v25);
  PlayerBasicComp::getIpCountryCode[abi:cxx11](&value, basic_comp);
  v26 = std::operator==<char>(&value, "CN");
  std::string::~string(&value);
  if ( v26 )
    PlayerBasicComp::getIpRegionName[abi:cxx11](&value, basic_comp);
  else
    PlayerBasicComp::getIpCountryCode[abi:cxx11](&value, basic_comp);
  proto::SocialDetail::set_ip_code(social_detail, &value);
  std::string::~string(&value);
  result = 0;
  if ( v39 == (char *)v3 )
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

// Line 970: range 0000000016D17E68-0000000016D1803D
void __cdecl PlayerSocialComp::sendAskAddFriendRspToClient(
        PlayerSocialComp *const this,
        int32_t retcode,
        uint32_t target_uid,
        uint32_t param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  std::__shared_ptr_access<proto::AskAddFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<proto::AskAddFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<proto::AskAddFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  Player *player; // r14
  std::shared_ptr<proto::AskAddFriendRsp> __r; // [rsp+20h] [rbp-80h] BYREF
  char v14[112]; // [rsp+30h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 11 rsp_ptr:971";
  *(_QWORD *)(v4 + 16) = PlayerSocialComp::sendAskAddFriendRspToClient;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::AskAddFriendRsp>();
  v7 = std::__shared_ptr_access<proto::AskAddFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::AskAddFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  proto::AskAddFriendRsp::set_retcode(v7, retcode);
  v8 = std::__shared_ptr_access<proto::AskAddFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::AskAddFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  proto::AskAddFriendRsp::set_target_uid(v8, target_uid);
  v9 = std::__shared_ptr_access<proto::AskAddFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::AskAddFriendRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  proto::AskAddFriendRsp::set_param(v9, param);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::AskAddFriendRsp>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::AskAddFriendRsp>::~shared_ptr((std::shared_ptr<proto::AskAddFriendRsp> *const)(v4 + 32));
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 980: range 0000000016D1803E-0000000016D18461
void __fastcall PlayerSocialComp::logOpereateFriend(
        PlayerSocialComp *const this,
        __int32 target_uid,
        __int32 operation_type,
        __int32 self_friend_num,
        __int32 target_friend_num)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyOperateFriend,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyOperateFriend,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyOperateFriend,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyOperateFriend,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyOperateFriend,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  Player *player; // r14
  std::string v20; // [rsp+0h] [rbp-120h]
  google::protobuf::uint32 target_friend_numa; // [rsp+8h] [rbp-118h]
  google::protobuf::uint32 target_uida; // [rsp+14h] [rbp-10Ch]
  PlayerSocialComp *thisa; // [rsp+18h] [rbp-108h]
  unsigned int val; // [rsp+2Ch] [rbp-F4h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-E0h] BYREF
  std::string v27; // [rsp+50h] [rbp-D0h] BYREF
  char v28[176]; // [rsp+70h] [rbp-B0h] BYREF

  *(&v20._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v20._anon_0._M_allocated_capacity) = target_uid;
  *(_DWORD *)v20._anon_0._M_local_buf = operation_type;
  HIDWORD(v20._M_string_length) = self_friend_num;
  LODWORD(v20._M_string_length) = target_friend_num;
  v5 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 1 10 holder:981 64 4 18 operation_type:979 80 4 19 self_friend_num:979 96 16 11 log_ptr:983";
  *(_QWORD *)(v5 + 16) = PlayerSocialComp::logOpereateFriend;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -234556924;
  v7[536862723] = -202178560;
  *(_DWORD *)(v5 + 64) = *(_DWORD *)v20._anon_0._M_local_buf;
  *(_DWORD *)(v5 + 80) = HIDWORD(v20._M_string_length);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v27, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0xA8Cu, v20);
  std::string::~string(&v27);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyOperateFriend>();
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyOperateFriend,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyOperateFriend,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
  proto_log::PlayerLogBodyOperateFriend::set_target_uid(v9, target_uida);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyOperateFriend,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyOperateFriend,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
  proto_log::PlayerLogBodyOperateFriend::set_friend_action(v10, *(_DWORD *)(v5 + 64));
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyOperateFriend,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyOperateFriend,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
  proto_log::PlayerLogBodyOperateFriend::set_self_friend_num(v11, *(_DWORD *)(v5 + 80));
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyOperateFriend,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyOperateFriend,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
  proto_log::PlayerLogBodyOperateFriend::set_target_friend_num(v12, target_friend_numa);
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&v27,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/social/player_social_comp.cpp",
    "logOpereateFriend",
    989);
  v13 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
          (common::milog::MiLogStream *const)&v27,
          (const char (*)[28])"[Social] logOpereateFriend ");
  v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyOperateFriend,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyOperateFriend,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
  val = proto_log::PlayerLogBodyOperateFriend::target_uid(v14);
  v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
  v16 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])", type");
  v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v5 + 64));
  v18 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v17, (const char (*)[19])", self friend num ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v5 + 80));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v27);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->player_);
  player = thisa->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyOperateFriend,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyOperateFriend> *)(v5 + 96));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyOperateFriend>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyOperateFriend> *const)(v5 + 96));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
  if ( v28 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 994: range 0000000016D18462-0000000016D18802
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerSocialComp::logOperateBlacklist(
        PlayerSocialComp *const this,
        uint32_t target_uid,
        uint32_t operate_type)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyOperateBlacklist,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyOperateBlacklist,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyOperateBlacklist,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  Player *v11; // r14
  std::string operate_typea; // [rsp+0h] [rbp-100h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-D0h] BYREF
  std::string val; // [rsp+50h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+70h] [rbp-90h] BYREF

  operate_typea._M_string_length = (std::string::size_type)this;
  HIDWORD(operate_typea._M_dataplus._M_p) = target_uid;
  LODWORD(operate_typea._M_dataplus._M_p) = operate_type;
  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 10 holder:995 64 16 11 log_ptr:997";
  *(_QWORD *)(v3 + 16) = PlayerSocialComp::logOperateBlacklist;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((operate_typea._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(operate_typea._M_string_length + 24);
  BasicComp = Player::getBasicComp(*(Player *const *)(operate_typea._M_string_length + 24));
  PlayerBasicComp::getNextTransNo[abi:cxx11](&val, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xA8Fu, operate_typea);
  std::string::~string(&val);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyOperateBlacklist>();
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyOperateBlacklist,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyOperateBlacklist,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  proto_log::PlayerLogBodyOperateBlacklist::set_target_uid(v7, HIDWORD(operate_typea._M_dataplus._M_p));
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyOperateBlacklist,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyOperateBlacklist,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  proto_log::PlayerLogBodyOperateBlacklist::set_operate_type(
    v8,
    (google::protobuf::uint32)operate_typea._M_dataplus._M_p);
  common::milog::MiLogStream::create(
    &v14,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/social/player_social_comp.cpp",
    "logOperateBlacklist",
    1000);
  v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v14, (const char (*)[13])"[BLACKLIST] ");
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyOperateBlacklist,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyOperateBlacklist,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  google::protobuf::Message::ShortDebugString[abi:cxx11](&val, v10);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v14);
  if ( *(_BYTE *)(((operate_typea._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(operate_typea._M_string_length + 24);
  v11 = *(Player **)(operate_typea._M_string_length + 24);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyOperateBlacklist,void>(
    (std::shared_ptr<google::protobuf::Message> *const)&operate_typea._anon_0,
    (const std::shared_ptr<proto_log::PlayerLogBodyOperateBlacklist> *)(v3 + 64));
  Player::printStatLog(v11, (MessagePtr *)&operate_typea._anon_0, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&operate_typea._anon_0);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyOperateBlacklist>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyOperateBlacklist> *const)(v3 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  if ( v16 == (char *)v3 )
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

// Line 1005: range 0000000016D18804-0000000016D18F76
void __cdecl PlayerSocialComp::logOperateChangeSignature(PlayerSocialComp *const this, const std::string *sign_before)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodySignatureNameChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodySignatureNameChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  bool *p_is_ip_port_log_report; // rax
  bool is_ip_port_log_report; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodySignatureNameChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodySignatureNameChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  uint32_t PlayerClientPort; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodySignatureNameChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodySignatureNameChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // r14
  uint32_t PlayerGatePort; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodySignatureNameChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodySignatureNameChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodySignatureNameChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rcx
  Player *player; // r14
  std::string sign_beforea; // [rsp+0h] [rbp-F0h]
  const std::string *sign_beforeb; // [rsp+0h] [rbp-F0h]
  PlayerSocialComp *thisa; // [rsp+8h] [rbp-E8h]
  bool is_audit_open; // [rsp+1Bh] [rbp-D5h]
  uint32_t submit_limit; // [rsp+1Ch] [rbp-D4h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> v29; // [rsp+30h] [rbp-C0h] BYREF
  std::string value; // [rsp+40h] [rbp-B0h] BYREF
  char v31[144]; // [rsp+60h] [rbp-90h] BYREF

  sign_beforea._M_string_length = (std::string::size_type)this;
  sign_beforea._M_dataplus._M_p = (std::string::pointer)sign_before;
  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 11 holder:1006 64 16 12 log_ptr:1008";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::logOperateChangeSignature;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&value, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xA92u, sign_beforea);
  std::string::~string(&value);
  common::tools::perf::make_shared<proto_log::PlayerLogBodySignatureNameChange>();
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodySignatureNameChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySignatureNameChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  proto_log::PlayerLogBodySignatureNameChange::set_sign_before(v6, sign_beforeb);
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodySignatureNameChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySignatureNameChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  PlayerSocialComp::getSignature[abi:cxx11](&value, thisa);
  proto_log::PlayerLogBodySignatureNameChange::set_sign_after(v7, &value);
  std::string::~string(&value);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v29);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
  p_is_ip_port_log_report = &v8->is_ip_port_log_report;
  if ( *(_BYTE *)(((unsigned __int64)p_is_ip_port_log_report >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)p_is_ip_port_log_report & 7) >= *(_BYTE *)(((unsigned __int64)p_is_ip_port_log_report >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load1(p_is_ip_port_log_report);
  }
  is_ip_port_log_report = v8->is_ip_port_log_report;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v29);
  if ( is_ip_port_log_report )
  {
    v11 = std::__shared_ptr_access<proto_log::PlayerLogBodySignatureNameChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySignatureNameChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    Player::getPlayerClientIpForStatLog[abi:cxx11](&value, thisa->player_);
    proto_log::PlayerLogBodySignatureNameChange::set_client_ip(v11, &value);
    std::string::~string(&value);
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodySignatureNameChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySignatureNameChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    PlayerClientPort = Player::getPlayerClientPort(thisa->player_);
    proto_log::PlayerLogBodySignatureNameChange::set_client_port(v12, PlayerClientPort);
    v14 = std::__shared_ptr_access<proto_log::PlayerLogBodySignatureNameChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySignatureNameChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    Player::getPlayerGateIp[abi:cxx11](&value, thisa->player_);
    proto_log::PlayerLogBodySignatureNameChange::set_gate_ip(v14, &value);
    std::string::~string(&value);
    v15 = std::__shared_ptr_access<proto_log::PlayerLogBodySignatureNameChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySignatureNameChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    PlayerGatePort = Player::getPlayerGatePort(thisa->player_);
    proto_log::PlayerLogBodySignatureNameChange::set_gate_port(v15, PlayerGatePort);
  }
  v17 = std::__shared_ptr_access<proto_log::PlayerLogBodySignatureNameChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySignatureNameChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->signature_audit_data_.submit_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->signature_audit_data_.submit_count >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&thisa->signature_audit_data_.submit_count);
  }
  proto_log::PlayerLogBodySignatureNameChange::set_submit_count(v17, thisa->signature_audit_data_.submit_count);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v29);
  v18 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
  is_audit_open = FeatureSwitchMgr::isSignatureAuditEnabled(&v18->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v29);
  v19 = std::__shared_ptr_access<proto_log::PlayerLogBodySignatureNameChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySignatureNameChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  proto_log::PlayerLogBodySignatureNameChange::set_is_audit_open(v19, is_audit_open);
  if ( is_audit_open )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v29);
    v20 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
    submit_limit = FeatureSwitchMgr::getMonthlySubmitSignatureLimit(&v20->feature_switch_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v29);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->signature_audit_data_.submit_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->signature_audit_data_.submit_count >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&thisa->signature_audit_data_.submit_count);
    }
    if ( submit_limit > thisa->signature_audit_data_.submit_count )
    {
      v21 = std::__shared_ptr_access<proto_log::PlayerLogBodySignatureNameChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySignatureNameChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->signature_audit_data_.submit_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)thisa + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->signature_audit_data_.submit_count >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&thisa->signature_audit_data_.submit_count);
      }
      proto_log::PlayerLogBodySignatureNameChange::set_left_submit_count(
        v21,
        submit_limit - thisa->signature_audit_data_.submit_count);
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->player_);
  player = thisa->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&v29, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodySignatureNameChange,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodySignatureNameChange> *)(v2 + 64));
  Player::printStatLog(player, &p_body_ptr, &v29, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v29);
  std::shared_ptr<proto_log::PlayerLogBodySignatureNameChange>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodySignatureNameChange> *const)(v2 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  if ( v31 == (char *)v2 )
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

// Line 1036: range 0000000016D18F78-0000000016D191BF
int32_t __cdecl PlayerSocialComp::getBlacklist(PlayerSocialComp *const this, std::vector<unsigned int> *blacklist_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__detail::_Node_iterator<unsigned int,true,false>::reference v5; // rax
  _DWORD *v6; // rdx
  std::__detail::_Node_iterator<unsigned int,true,false>::reference v7; // rax
  _DWORD *v8; // rdx
  int32_t result; // eax
  std::unordered_set<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-80h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-78h] BYREF
  std::unordered_set<unsigned int> *__for_range; // [rsp+20h] [rbp-70h]
  std::unordered_set<unsigned int> *__for_range_0; // [rsp+28h] [rbp-68h]
  char v14[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 uid:1042";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::getBlacklist;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  std::vector<unsigned int>::clear(blacklist_vec);
  __for_range = &this->blacklist_set_;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&this->blacklist_set_)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&this->blacklist_set_)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v5 = std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v2 + 32) = *v6;
    std::vector<unsigned int>::emplace_back<unsigned int &>(
      blacklist_vec,
      (unsigned int *)(v2 + 32),
      (unsigned int *)(v2 + 32));
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  __for_range_0 = &this->psn_blacklist_set_;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&this->psn_blacklist_set_)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v7 = std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    *(_DWORD *)(v2 + 32) = *v8;
    std::vector<unsigned int>::emplace_back<unsigned int &>(
      blacklist_vec,
      (unsigned int *)(v2 + 32),
      (unsigned int *)(v2 + 32));
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  result = 0;
  if ( v14 == (char *)v2 )
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

// Line 1050: range 0000000016D191C0-0000000016D196C8
void __cdecl PlayerSocialComp::updateRecentMpList(
        PlayerSocialComp *const this,
        const std::vector<unsigned int> *uid_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rax
  _DWORD *v6; // rdx
  std::list<unsigned int>::reference v7; // rax
  _DWORD *v8; // rdx
  char v9; // al
  std::__detail::_List_node_base *M_node; // r15
  std::list<unsigned int>::iterator v11; // rax
  char v12; // r15
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  const std::unordered_set<unsigned int>::key_type *v15; // rax
  std::list<unsigned int>::size_type v16; // [rsp+8h] [rbp-E8h]
  bool v17; // [rsp+8h] [rbp-E8h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-C8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-C0h] BYREF
  std::_List_const_iterator<unsigned int>::iterator v20; // [rsp+38h] [rbp-B8h] BYREF
  std::_List_const_iterator<unsigned int>::iterator __x; // [rsp+40h] [rbp-B0h] BYREF
  std::_List_const_iterator<unsigned int> __first; // [rsp+48h] [rbp-A8h] BYREF
  std::_List_const_iterator<unsigned int> __last; // [rsp+50h] [rbp-A0h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+58h] [rbp-98h]
  std::shared_ptr<Config> v25; // [rsp+60h] [rbp-90h] BYREF
  std::shared_ptr<Config> v26; // [rsp+70h] [rbp-80h] BYREF
  char v27[112]; // [rsp+80h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 uid:1051";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::updateRecentMpList;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  __for_range = uid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v2 + 32) = *v6;
    if ( !PlayerSocialComp::isPlayerFriend(this, *(_DWORD *)(v2 + 32))
      && !PlayerSocialComp::isPlayerInBlacklist(this, *(_DWORD *)(v2 + 32)) )
    {
      if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
             &this->recent_mp_player_uid_set_,
             (const unsigned int *)(v2 + 32)) )
      {
        if ( std::list<unsigned int>::empty(&this->recent_mp_player_uid_list_) )
          goto LABEL_16;
        v7 = std::list<unsigned int>::front(&this->recent_mp_player_uid_list_);
        v8 = v7;
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v7);
        }
        if ( *v8 == *(_DWORD *)(v2 + 32) )
          v9 = 1;
        else
LABEL_16:
          v9 = 0;
        if ( v9 )
          break;
        __x._M_node = std::list<unsigned int>::end(&this->recent_mp_player_uid_list_)._M_node;
        std::_List_const_iterator<unsigned int>::_List_const_iterator(&__last, &__x);
        M_node = std::list<unsigned int>::end(&this->recent_mp_player_uid_list_)._M_node;
        v11._M_node = std::list<unsigned int>::begin(&this->recent_mp_player_uid_list_)._M_node;
        v20._M_node = std::remove<std::_List_iterator<unsigned int>,unsigned int>(
                        v11,
                        (std::_List_iterator<unsigned int>)M_node,
                        (const unsigned int *)(v2 + 32))._M_node;
        std::_List_const_iterator<unsigned int>::_List_const_iterator(&__first, &v20);
        std::list<unsigned int>::erase(&this->recent_mp_player_uid_list_, __first, __last);
        std::list<unsigned int>::emplace_front<unsigned int &>(
          &this->recent_mp_player_uid_list_,
          (unsigned int *)(v2 + 32),
          (unsigned int *)&this->recent_mp_player_uid_list_);
      }
      else
      {
        v12 = 0;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v25);
        v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
        v17 = 0;
        if ( ConstValueExcelConfigMgr::getRecentMpListLimitNum(&v13->design_config.txt_config_mgr.const_value_config_mgr) )
        {
          v16 = std::list<unsigned int>::size(&this->recent_mp_player_uid_list_);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v26);
          v12 = 1;
          v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
          if ( v16 >= ConstValueExcelConfigMgr::getRecentMpListLimitNum(&v14->design_config.txt_config_mgr.const_value_config_mgr) )
            v17 = 1;
        }
        if ( v12 )
          std::shared_ptr<Config>::~shared_ptr(&v26);
        std::shared_ptr<Config>::~shared_ptr(&v25);
        if ( v17 )
        {
          v15 = std::list<unsigned int>::back(&this->recent_mp_player_uid_list_);
          std::unordered_set<unsigned int>::erase(&this->recent_mp_player_uid_set_, v15);
          std::list<unsigned int>::pop_back(&this->recent_mp_player_uid_list_);
        }
        std::list<unsigned int>::emplace_front<unsigned int &>(
          &this->recent_mp_player_uid_list_,
          (unsigned int *)(v2 + 32),
          (unsigned int *)&this->recent_mp_player_uid_list_);
        std::unordered_set<unsigned int>::insert(
          &this->recent_mp_player_uid_set_,
          (const std::unordered_set<unsigned int>::value_type *)(v2 + 32));
      }
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( v27 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1088: range 0000000016D196CA-0000000016D196F3
void __cdecl PlayerSocialComp::onEnterMpEvent(PlayerSocialComp *const this, const EnterMpEvent *event)
{
  PlayerSocialComp::updateRecentMpList(this, &event->uid_vec);
};

// Line 1093: range 0000000016D196F4-0000000016D197B8
void __cdecl PlayerSocialComp::checkRefreshLoginOnBirthday(PlayerSocialComp *const this)
{
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->is_login_on_birthday_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_login_on_birthday_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_login_on_birthday_);
  }
  if ( !this->is_login_on_birthday_ && PlayerSocialComp::isTodayBirthday(this, 0) )
  {
    v2 = ((_BYTE)this + 84) & 7;
    v3 = (*(_BYTE *)(((unsigned __int64)&this->is_login_on_birthday_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_login_on_birthday_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v3 )
      __asan_report_store1(&this->is_login_on_birthday_, v2, v3);
    this->is_login_on_birthday_ = 1;
  }
};

// Line 1101: range 0000000016D197BA-0000000016D19857
bool __cdecl PlayerSocialComp::isTodayBirthday(const PlayerSocialComp *const this, bool is_strict)
{
  uint32_t v4; // r12d
  uint32_t v5; // esi

  if ( !proto::Birthday::day(&this->birthday_) || !proto::Birthday::month(&this->birthday_) )
    return 0;
  v4 = proto::Birthday::day(&this->birthday_);
  v5 = proto::Birthday::month(&this->birthday_);
  return PlayerSocialComp::isTodayBirthday(this, v5, v4, is_strict);
};

// Line 1112: range 0000000016D19858-0000000016D19901
bool __cdecl PlayerSocialComp::isTodayBirthday(
        const PlayerSocialComp *const this,
        uint32_t month,
        uint32_t day,
        bool is_strict)
{
  bool v5; // al
  uint32_t now; // [rsp+24h] [rbp-Ch]
  uint32_t cur_month; // [rsp+28h] [rbp-8h]
  uint32_t cur_month_day; // [rsp+2Ch] [rbp-4h]

  now = common::tools::TimeUtils::getNow();
  cur_month = common::tools::TimeUtils::getTimeYearMonth(now);
  cur_month_day = common::tools::TimeUtils::getTimeMonthDay(now, 0LL);
  if ( day == cur_month_day && month == cur_month )
    return 1;
  v5 = !is_strict && !common::tools::TimeUtils::isTimeLeapYear(now);
  return v5 && month == 2 && day == 29 && cur_month == 2 && cur_month_day == 28;
};

// Line 1133: range 0000000016D19902-0000000016D199E0
bool __cdecl PlayerSocialComp::isTimeBirthday(PlayerSocialComp *const this, uint32_t timestamp)
{
  uint32_t cur_month; // [rsp+18h] [rbp-8h]
  uint32_t cur_month_day; // [rsp+1Ch] [rbp-4h]

  cur_month = common::tools::TimeUtils::getTimeYearMonth(timestamp);
  cur_month_day = common::tools::TimeUtils::getTimeMonthDay(timestamp, 0LL);
  if ( cur_month_day == proto::Birthday::day(&this->birthday_) && cur_month == proto::Birthday::month(&this->birthday_) )
    return 1;
  if ( !common::tools::TimeUtils::isTimeLeapYear(timestamp)
    && proto::Birthday::month(&this->birthday_) == 2
    && proto::Birthday::day(&this->birthday_) == 29
    && cur_month == 2
    && cur_month_day == 28 )
  {
    return 1;
  }
  return 0;
};

// Line 1154: range 0000000016D199E2-0000000016D1A475
int32_t __cdecl PlayerSocialComp::tryGrantBirthdayBenefit(PlayerSocialComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // rbx
  int32_t v4; // r14d
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // eax
  std::string *i; // r14
  PlayerMailComp *MailComp; // rdi
  __int64 mail_id; // rsi
  int v16; // eax
  int32_t result; // eax
  std::initializer_list<unsigned int> __l; // [rsp+10h] [rbp-210h]
  bool v19; // [rsp+27h] [rbp-1F9h]
  std::allocator<unsigned int> __a; // [rsp+32h] [rbp-1EEh] BYREF
  bool is_next_effective_mail; // [rsp+33h] [rbp-1EDh]
  uint32_t reward_id; // [rsp+34h] [rbp-1ECh] BYREF
  uint32_t now; // [rsp+38h] [rbp-1E8h]
  uint32_t cur_year; // [rsp+3Ch] [rbp-1E4h]
  uint32_t cur_month; // [rsp+40h] [rbp-1E0h]
  uint32_t cur_day; // [rsp+44h] [rbp-1DCh]
  uint32_t register_time; // [rsp+48h] [rbp-1D8h]
  uint32_t reg_month; // [rsp+4Ch] [rbp-1D4h]
  uint32_t reg_day; // [rsp+50h] [rbp-1D0h]
  uint32_t next_effective_mail_time; // [rsp+54h] [rbp-1CCh]
  const data::BirthdayMailExcelConfig *birthday_mail_config_ptr; // [rsp+58h] [rbp-1C8h]
  std::shared_ptr<Config> v33; // [rsp+60h] [rbp-1C0h] BYREF
  common::milog::MiLogStream v34; // [rsp+70h] [rbp-1B0h] BYREF
  std::string v35; // [rsp+90h] [rbp-190h] BYREF
  std::string v36; // [rsp+B0h] [rbp-170h] BYREF
  char v37[336]; // [rsp+D0h] [rbp-150h] BYREF

  v1 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(288LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 24 18 item_pram_vec:1203 96 24 18 reward_id_vec:1204 160 24 19 mail_arguments:1211 224 24 11 reason:1212";
  *(_QWORD *)(v1 + 16) = PlayerSocialComp::tryGrantBirthdayBenefit;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234881024;
  v3[536862722] = -218959118;
  v3[536862723] = -234881024;
  v3[536862724] = -218959118;
  v3[536862725] = -234881024;
  v3[536862726] = -218959118;
  v3[536862727] = -218103808;
  v3[536862728] = -202116109;
  now = common::tools::TimeUtils::getNow();
  cur_year = common::tools::TimeUtils::getTimeYear(now);
  cur_month = common::tools::TimeUtils::getTimeYearMonth(now);
  cur_day = common::tools::TimeUtils::getTimeMonthDay(now, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_grant_benefit_year_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_grant_benefit_year_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_grant_benefit_year_);
  }
  if ( cur_year == this->last_grant_benefit_year_ )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/social/player_social_comp.cpp",
      "tryGrantBirthdayBenefit",
      1161);
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      &v34,
      (const char (*)[46])"this year has already grants birthday benefit");
    common::milog::MiLogStream::~MiLogStream(&v34);
    v4 = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    BasicComp = Player::getBasicComp(this->player_);
    register_time = PlayerBasicComp::getRegisterTime(BasicComp);
    is_next_effective_mail = 0;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v33);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33);
    v19 = register_time < ConstValueExcelConfigMgr::getGameReleaseTime(&v6->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v33);
    if ( v19 )
    {
      reg_month = common::tools::TimeUtils::getTimeYearMonth(register_time);
      reg_day = common::tools::TimeUtils::getTimeMonthDay(register_time, 0LL);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v33);
      v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33);
      next_effective_mail_time = MailExcelConfigMgr::getNextEffectiveBirthdayMailTime(
                                   &v7->design_config.txt_config_mgr.mail_config_mgr,
                                   now);
      std::shared_ptr<Config>::~shared_ptr(&v33);
      if ( now < next_effective_mail_time )
      {
        if ( cur_month <= reg_month )
        {
          if ( cur_month == reg_month && cur_day >= reg_day )
            is_next_effective_mail = 1;
        }
        else
        {
          is_next_effective_mail = 1;
        }
      }
    }
    birthday_mail_config_ptr = 0LL;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v33);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33);
    if ( !is_next_effective_mail )
      birthday_mail_config_ptr = MailExcelConfigMgr::findEffectiveBirthdayMailConfig(
                                   &v8->design_config.txt_config_mgr.mail_config_mgr,
                                   now);
    else
      birthday_mail_config_ptr = MailExcelConfigMgr::findNextEffectiveBirthdayMailConfig(
                                   &v8->design_config.txt_config_mgr.mail_config_mgr,
                                   now);
    std::shared_ptr<Config>::~shared_ptr(&v33);
    if ( birthday_mail_config_ptr )
    {
      std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&birthday_mail_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&birthday_mail_config_ptr->reward_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&birthday_mail_config_ptr->reward_id);
      }
      reward_id = birthday_mail_config_ptr->reward_id;
      __l._M_array = &reward_id;
      __l._M_len = 1LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 96), __l, &__a);
      std::allocator<unsigned int>::~allocator(&__a);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      ItemComp = Player::getItemComp(this->player_);
      if ( PlayerItemComp::getItemParamVecByRewardIdVec(
             ItemComp,
             (const std::vector<unsigned int> *)(v1 + 96),
             (std::vector<ItemParam> *)(v1 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/social/player_social_comp.cpp",
          "tryGrantBirthdayBenefit",
          1207);
        v10 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v34,
                (const char (*)[49])"getItemParamVecByRewardIdVec failed, reward_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v10,
          &birthday_mail_config_ptr->reward_id);
        common::milog::MiLogStream::~MiLogStream(&v34);
        v4 = -1;
      }
      else
      {
        v11 = proto::Birthday::month(&this->birthday_);
        common::tools::StringUtils::numToStr<unsigned int>(&v35, v11);
        v12 = proto::Birthday::day(&this->birthday_);
        common::tools::StringUtils::numToStr<unsigned int>(&v36, v12);
        std::allocator<std::string>::allocator((std::allocator<std::string > *const)&__a);
        std::vector<std::string>::vector(
          (std::vector<std::string> *const)(v1 + 160),
          (std::initializer_list<std::string >)__PAIR128__(2LL, &v35),
          (const std::vector<std::string>::allocator_type *)&__a);
        std::allocator<std::string>::~allocator((std::allocator<std::string > *const)&__a);
        for ( i = (std::string *)v37; i != &v35; std::string::~string(i) )
          --i;
        ActionReason::ActionReason(
          (ActionReason *const)(v1 + 224),
          ACTION_REASON_GRANT_BIRTHDAY_BENEFIT,
          ITEM_LIMIT_BIRTHDAY_BENEFIT);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        MailComp = Player::getMailComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&birthday_mail_config_ptr->mail_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)birthday_mail_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&birthday_mail_config_ptr->mail_id >> 3)
                                                                                  + 0x7FFF8000) )
        {
          MailComp = (PlayerMailComp *)&birthday_mail_config_ptr->mail_id;
          __asan_report_load4(&birthday_mail_config_ptr->mail_id);
        }
        mail_id = birthday_mail_config_ptr->mail_id;
        if ( PlayerMailComp::addMailById(
               MailComp,
               mail_id,
               8u,
               (const std::vector<ItemParam> *)(v1 + 32),
               (const std::vector<std::string> *)(v1 + 160),
               (const ActionReason *)(v1 + 224)) )
        {
          common::milog::MiLogStream::create(
            &v34,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/social/player_social_comp.cpp",
            "tryGrantBirthdayBenefit",
            1215);
          common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            &v34,
            (const char (*)[19])"addMailById failed");
          common::milog::MiLogStream::~MiLogStream(&v34);
          v4 = -1;
        }
        else
        {
          v16 = *(unsigned __int8 *)(((unsigned __int64)&this->last_grant_benefit_year_ >> 3) + 0x7FFF8000);
          if ( (_BYTE)v16 != 0 && (char)v16 <= 3 )
            __asan_report_store4(&this->last_grant_benefit_year_, mail_id, (_BYTE)this + 80);
          this->last_grant_benefit_year_ = cur_year;
          v4 = 0;
        }
        std::vector<std::string>::~vector((std::vector<std::string> *const)(v1 + 160));
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 96));
      std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v1 + 32));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/social/player_social_comp.cpp",
        "tryGrantBirthdayBenefit",
        1199);
      common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
        &v34,
        (const char (*)[43])"Cannot find effective birthday mail config");
      common::milog::MiLogStream::~MiLogStream(&v34);
      v4 = -1;
    }
  }
  result = v4;
  if ( v37 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 1225: range 0000000016D1A476-0000000016D1A7EC
int32_t __cdecl PlayerSocialComp::tryGrantShareBenifit(PlayerSocialComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t result; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r12
  PlayerItemComp *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  unsigned int val; // [rsp+18h] [rbp-D8h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-D4h]
  std::shared_ptr<Config> v15; // [rsp+20h] [rbp-D0h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-C0h] BYREF
  char v17[160]; // [rsp+50h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 14 reward_id:1231 64 24 18 action_reason:1232";
  *(_QWORD *)(v1 + 16) = PlayerSocialComp::tryGrantShareBenifit;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  if ( PlayerSocialComp::isHasFirstShare(this) )
  {
    result = 7024;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v15);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
    *(_DWORD *)(v1 + 48) = ConstValueExcelConfigMgr::getFirstShareRewardID(&v5->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v15);
    ActionReason::ActionReason(
      (ActionReason *const)(v1 + 64),
      ACTION_REASON_FIRST_SHARE_TO_SOCIAL_NETWORK,
      ITEM_LIMIT_SHARE_REWARD);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    ItemComp = Player::getItemComp(this->player_);
    ret = PlayerItemComp::checkGrantReward(ItemComp, *(_DWORD *)(v1 + 48), (const ActionReason *)(v1 + 64));
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/social/player_social_comp.cpp",
        "tryGrantShareBenifit",
        1236);
      v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             &v16,
             (const char (*)[24])"checkGrantReward fails:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 48));
      v9 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])" uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v16);
      result = ret;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v10 = Player::getItemComp(this->player_);
      PlayerItemComp::grantReward(v10, *(_DWORD *)(v1 + 48), (const ActionReason *)(v1 + 64), 0LL);
      v11 = ((_BYTE)this + 85) & 7;
      v12 = (*(_BYTE *)(((unsigned __int64)&this->is_has_first_share_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->is_has_first_share_ >> 3) + 0x7FFF8000));
      if ( (_BYTE)v12 )
        __asan_report_store1(&this->is_has_first_share_, v11, v12);
      this->is_has_first_share_ = 1;
      result = 0;
    }
  }
  if ( v17 == (char *)v1 )
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
  return result;
};

// Line 1247: range 0000000016D1A7EE-0000000016D1B014
int32_t __cdecl PlayerSocialComp::reportOther(PlayerSocialComp *const this, const proto::PlayerReportReq *req)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<proto_log::AntiCheatBodyPlayerReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // r14
  google::protobuf::uint32 v6; // eax
  std::__shared_ptr_access<proto_log::AntiCheatBodyPlayerReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  google::protobuf::uint32 v8; // eax
  std::__shared_ptr_access<proto_log::AntiCheatBodyPlayerReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  const std::string *v10; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyPlayerReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  PlayerBasicComp *BasicComp; // rax
  google::protobuf::uint32 LanguageType; // eax
  std::__shared_ptr_access<proto_log::AntiCheatBodyPlayerReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  google::protobuf::uint32 v15; // eax
  std::__shared_ptr_access<proto_log::AntiCheatBodyPlayerReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  const std::string *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<proto_log::AntiCheatBodyPlayerReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  Player *player; // r14
  __int64 v21; // rsi
  int Now; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  uint32_t v24; // ecx
  char v25; // dl
  bool v26; // dl
  time_t v27; // rcx
  char v28; // dl
  uint32_t v29; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  int v31; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  uint32_t v33; // ecx
  char v34; // al
  GameserverService *v35; // rsi
  int v36; // r14d
  GameserverService *v37; // rsi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  uint32_t v39; // ecx
  char v40; // al
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-F1h] BYREF
  std::shared_ptr<Config> v43; // [rsp+20h] [rbp-F0h] BYREF
  std::shared_ptr<Config> v44; // [rsp+30h] [rbp-E0h] BYREF
  std::shared_ptr<Config> v45; // [rsp+40h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+50h] [rbp-C0h] BYREF
  std::string s; // [rsp+60h] [rbp-B0h] BYREF
  std::string value; // [rsp+80h] [rbp-90h] BYREF
  char v49[112]; // [rsp+A0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 log_ptr:1248";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::reportOther;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto_log::AntiCheatBodyPlayerReport>();
  v5 = std::__shared_ptr_access<proto_log::AntiCheatBodyPlayerReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyPlayerReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  v6 = proto::PlayerReportReq::target_uid(req);
  proto_log::AntiCheatBodyPlayerReport::set_target_uid(v5, v6);
  v7 = std::__shared_ptr_access<proto_log::AntiCheatBodyPlayerReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyPlayerReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  v8 = proto::PlayerReportReq::reason(req);
  proto_log::AntiCheatBodyPlayerReport::set_report_type(v7, v8);
  v9 = std::__shared_ptr_access<proto_log::AntiCheatBodyPlayerReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyPlayerReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&s, off_25F3F160, &__a);
  v10 = proto::PlayerReportReq::content[abi:cxx11](req);
  common::tools::StringUtils::trim(&value, v10, &s, 1);
  proto_log::AntiCheatBodyPlayerReport::set_report_reason(v9, &value);
  std::string::~string(&value);
  std::string::~string(&s);
  std::allocator<char>::~allocator(&__a);
  v11 = std::__shared_ptr_access<proto_log::AntiCheatBodyPlayerReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyPlayerReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  LanguageType = PlayerBasicComp::getLanguageType(BasicComp);
  proto_log::AntiCheatBodyPlayerReport::set_reporter_language(v11, LanguageType);
  v14 = std::__shared_ptr_access<proto_log::AntiCheatBodyPlayerReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyPlayerReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  v15 = proto::PlayerReportReq::target_home_module_id(req);
  proto_log::AntiCheatBodyPlayerReport::set_target_home_module_id(v14, v15);
  v16 = std::__shared_ptr_access<proto_log::AntiCheatBodyPlayerReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyPlayerReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  v17 = proto::PlayerReportReq::target_home_module_name[abi:cxx11](req);
  proto_log::AntiCheatBodyPlayerReport::set_target_home_module_name(v16, v17);
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&s,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/social/player_social_comp.cpp",
    "reportOther",
    1256);
  v18 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
          (common::milog::MiLogStream *const)&s,
          (const char (*)[13])"[AntiCheat] ");
  v19 = std::__shared_ptr_access<proto_log::AntiCheatBodyPlayerReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyPlayerReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  google::protobuf::Message::ShortDebugString[abi:cxx11](&value, v19);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, &value);
  std::string::~string(&value);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&s);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::AntiCheatBodyPlayerReport,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::AntiCheatBodyPlayerReport> *)(v2 + 32));
  v21 = 10LL;
  Player::printAntiCheatLog(player, ANTI_CHEAT_ACTION_REPORT, &p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->report_during_last_time_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->report_during_last_time_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->report_during_last_time_count_);
  }
  if ( !this->report_during_last_time_count_ )
  {
    Now = common::tools::TimeUtils::getNow();
    v21 = (__int64)ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v43);
    v23 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43);
    v24 = Now + ConstValueExcelConfigMgr::getReportLastTime(&v23->design_config.txt_config_mgr.const_value_config_mgr);
    v25 = *(_BYTE *)(((unsigned __int64)&this->report_next_limit_time_ >> 3) + 0x7FFF8000);
    LOBYTE(v21) = v25 != 0;
    v26 = v25 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v25;
    if ( v26 )
      __asan_report_store4(&this->report_next_limit_time_, v21, v26);
    this->report_next_limit_time_ = v24;
    std::shared_ptr<Config>::~shared_ptr(&v43);
  }
  v27 = common::tools::TimeUtils::getNow();
  v28 = *(_BYTE *)(((unsigned __int64)&this->report_next_limit_time_ >> 3) + 0x7FFF8000);
  LOBYTE(v21) = v28 != 0;
  if ( v28 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v28 )
    __asan_report_load4(&this->report_next_limit_time_);
  if ( v27 >= this->report_next_limit_time_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->report_during_last_time_count_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->report_during_last_time_count_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->report_during_last_time_count_, v21, (_BYTE)this + 88);
    }
    this->report_during_last_time_count_ = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->report_during_last_time_count_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->report_during_last_time_count_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->report_during_last_time_count_);
    }
    v29 = ++this->report_during_last_time_count_;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v44);
    v30 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v44);
    LOBYTE(v29) = v29 >= ConstValueExcelConfigMgr::getReportLimitNum(&v30->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v44);
    if ( (_BYTE)v29 )
    {
      v31 = common::tools::TimeUtils::getNow();
      v35 = ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v45);
      v32 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v45);
      v33 = v31
          + ConstValueExcelConfigMgr::getReportPunishTime(&v32->design_config.txt_config_mgr.const_value_config_mgr);
      v34 = *(_BYTE *)(((unsigned __int64)&this->next_report_time_ >> 3) + 0x7FFF8000);
      LOBYTE(v35) = v34 != 0;
      if ( v34 != 0 && v34 <= 3 )
        __asan_report_store4(&this->next_report_time_, v35, (_BYTE)this + 96);
      this->next_report_time_ = v33;
      std::shared_ptr<Config>::~shared_ptr(&v45);
      if ( *(_BYTE *)(((unsigned __int64)&this->report_during_last_time_count_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->report_during_last_time_count_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->report_during_last_time_count_, v35, (_BYTE)this + 88);
      }
      this->report_during_last_time_count_ = 0;
      goto LABEL_31;
    }
  }
  v36 = common::tools::TimeUtils::getNow();
  v37 = ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&p_body_ptr);
  v38 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&p_body_ptr);
  v39 = v36 + ConstValueExcelConfigMgr::getReportCdInterval(&v38->design_config.txt_config_mgr.const_value_config_mgr);
  v40 = *(_BYTE *)(((unsigned __int64)&this->next_report_time_ >> 3) + 0x7FFF8000);
  if ( v40 != 0 && v40 <= 3 )
  {
    LOBYTE(v37) = v40 != 0;
    __asan_report_store4(&this->next_report_time_, v37, (_BYTE)this + 96);
  }
  this->next_report_time_ = v39;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&p_body_ptr);
LABEL_31:
  std::shared_ptr<proto_log::AntiCheatBodyPlayerReport>::~shared_ptr((std::shared_ptr<proto_log::AntiCheatBodyPlayerReport> *const)(v2 + 32));
  result = 0;
  if ( v49 == (char *)v2 )
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

// Line 1285: range 0000000016D1B016-0000000016D1B28E
int32_t __cdecl PlayerSocialComp::internalSendPrivateChat(
        PlayerSocialComp *const this,
        const proto::ChatInfo *chat_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  proto::ChatInfo *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  int32_t result; // eax
  bool is_ps4_friend; // [rsp+1Fh] [rbp-D1h]
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-D0h] BYREF
  char v13[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 target_uid:1288 64 32 15 server_req:1286";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::internalSendPrivateChat;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  proto::ServerPrivateChatReq::ServerPrivateChatReq((proto::ServerPrivateChatReq *const)(v2 + 64));
  v5 = proto::ServerPrivateChatReq::mutable_chat_info((proto::ServerPrivateChatReq *const)(v2 + 64));
  proto::ChatInfo::CopyFrom(v5, chat_info);
  *(_DWORD *)(v2 + 48) = proto::ChatInfo::to_uid(chat_info);
  is_ps4_friend = PlayerSocialComp::isPlayerPSNFriend(this, *(_DWORD *)(v2 + 48));
  proto::ServerPrivateChatReq::set_is_ps4_friend((proto::ServerPrivateChatReq *const)(v2 + 64), is_ps4_friend);
  common::milog::MiLogStream::create(
    &v12,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/social/player_social_comp.cpp",
    "internalSendPrivateChat",
    1291);
  v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v12, (const char (*)[19])"[CHAT] target uid ");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
  v8 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v7, (const char (*)[17])off_25F3F2E0);
  common::milog::MiLogStream::operator<<(v8, is_ps4_friend);
  common::milog::MiLogStream::~MiLogStream(&v12);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v9 = sendProtoToSocialService<proto::ServerPrivateChatReq>(this->player_, (proto::ServerPrivateChatReq *)(v2 + 64));
  proto::ServerPrivateChatReq::~ServerPrivateChatReq((proto::ServerPrivateChatReq *const)(v2 + 64));
  result = v9;
  if ( v13 == (char *)v2 )
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

// Line 1296: range 0000000016D1B290-0000000016D1B409
int32_t __cdecl PlayerSocialComp::onServerPrivateChat(
        PlayerSocialComp *const this,
        const proto::ServerPrivateChatRsp *server_rsp)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  google::protobuf::int32 v5; // eax
  int32_t v6; // r14d
  int32_t result; // eax
  char v8[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 8 rsp:1297";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::onServerPrivateChat;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  proto::PrivateChatRsp::PrivateChatRsp((proto::PrivateChatRsp *const)(v2 + 32));
  v5 = proto::ServerPrivateChatRsp::retcode(server_rsp);
  proto::PrivateChatRsp::set_retcode((proto::PrivateChatRsp *const)(v2 + 32), v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v6 = Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 32));
  proto::PrivateChatRsp::~PrivateChatRsp((proto::PrivateChatRsp *const)(v2 + 32));
  result = v6;
  if ( v8 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 1303: range 0000000016D1B40A-0000000016D1B75F
bool __cdecl PlayerSocialComp::isPlayerCanRequstSocial(PlayerSocialComp *const this)
{
  uint32_t cur_day_social_request_num; // ebx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  PlayerBasicComp *BasicComp; // rax
  PlayerRechargeComp *RechargeComp; // rax
  char v8; // al
  uint32_t v9; // ebx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t v11; // ebx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t limit_level; // [rsp+18h] [rbp-28h]
  uint32_t vip_point_level; // [rsp+1Ch] [rbp-24h]
  std::shared_ptr<Config> v15[2]; // [rsp+20h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  if ( Player::isSubAccount(this->player_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_day_social_request_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_day_social_request_num_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&this->cur_day_social_request_num_);
    }
    cur_day_social_request_num = this->cur_day_social_request_num_;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v15);
    v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v15);
    LOBYTE(cur_day_social_request_num) = cur_day_social_request_num >= ConstValueExcelConfigMgr::getAntiHarassmentN1(&v2->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(v15);
    if ( (_BYTE)cur_day_social_request_num )
      return 0;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v15);
    v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v15);
    limit_level = ConstValueExcelConfigMgr::getAntiHarassmentLimitLevel(&v4->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(v15);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v15);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v15);
    vip_point_level = ConstValueExcelConfigMgr::getAntiHarassmentLimitVipPoint(&v5->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(v15);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    BasicComp = Player::getBasicComp(this->player_);
    if ( limit_level < PlayerBasicComp::getLevel(BasicComp) )
      goto LABEL_15;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    RechargeComp = Player::getRechargeComp(this->player_);
    if ( vip_point_level < PlayerRechargeComp::getVipPoint(RechargeComp) )
LABEL_15:
      v8 = 0;
    else
      v8 = 1;
    if ( v8 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_day_social_request_num_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_day_social_request_num_ >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&this->cur_day_social_request_num_);
      }
      v9 = this->cur_day_social_request_num_;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)v15);
      v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v15);
      LOBYTE(v9) = v9 >= ConstValueExcelConfigMgr::getAntiHarassmentN2(&v10->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(v15);
      if ( (_BYTE)v9 )
        return 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_day_social_request_num_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_day_social_request_num_ >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&this->cur_day_social_request_num_);
      }
      v11 = this->cur_day_social_request_num_;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)v15);
      v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v15);
      LOBYTE(v11) = v11 >= ConstValueExcelConfigMgr::getAntiHarassmentN3(&v12->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(v15);
      if ( (_BYTE)v11 )
        return 0;
    }
  }
  return 1;
};

// Line 1334: range 0000000016D1B760-0000000016D1BB48
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerSocialComp::logLimitSocialRequest(PlayerSocialComp *const this, bool is_mp)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyLimitSocialRequest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  PlayerBasicComp *v7; // rax
  const std::string *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyLimitSocialRequest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyLimitSocialRequest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // r14
  uint32_t PlatformType; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyLimitSocialRequest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  Player *v13; // r14
  std::string v14; // [rsp+0h] [rbp-E0h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-C0h] BYREF
  std::string value; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v14._M_string_length = (std::string::size_type)this;
  BYTE4(v14._M_dataplus._M_p) = is_mp;
  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 11 holder:1335 64 16 12 log_ptr:1336";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::logLimitSocialRequest;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((v14._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v14._M_string_length + 24);
  BasicComp = Player::getBasicComp(*(Player *const *)(v14._M_string_length + 24));
  PlayerBasicComp::getNextTransNo[abi:cxx11](&value, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xA90u, v14);
  std::string::~string(&value);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyLimitSocialRequest>();
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyLimitSocialRequest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLimitSocialRequest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((v14._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v14._M_string_length + 24);
  v7 = Player::getBasicComp(*(Player *const *)(v14._M_string_length + 24));
  v8 = PlayerBasicComp::getNickName[abi:cxx11](v7);
  proto_log::PlayerLogBodyLimitSocialRequest::set_nick_name(v6, v8);
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyLimitSocialRequest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLimitSocialRequest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  PlayerSocialComp::getSignature[abi:cxx11](&value, (const PlayerSocialComp *const)v14._M_string_length);
  proto_log::PlayerLogBodyLimitSocialRequest::set_signature(v9, &value);
  std::string::~string(&value);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyLimitSocialRequest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLimitSocialRequest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((v14._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v14._M_string_length + 24);
  PlatformType = Player::getPlatformType(*(const Player *const *)(v14._M_string_length + 24));
  proto_log::PlayerLogBodyLimitSocialRequest::set_platform(v10, PlatformType);
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyLimitSocialRequest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLimitSocialRequest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( BYTE4(v14._M_dataplus._M_p) )
    proto_log::PlayerLogBodyLimitSocialRequest::set_type(v12, 1u);
  else
    proto_log::PlayerLogBodyLimitSocialRequest::set_type(v12, 0);
  if ( *(_BYTE *)(((v14._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v14._M_string_length + 24);
  v13 = *(Player **)(v14._M_string_length + 24);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyLimitSocialRequest,void>(
    (std::shared_ptr<google::protobuf::Message> *const)&v14._anon_0,
    (const std::shared_ptr<proto_log::PlayerLogBodyLimitSocialRequest> *)(v2 + 64));
  Player::printStatLog(v13, (MessagePtr *)&v14._anon_0, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v14._anon_0);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyLimitSocialRequest>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyLimitSocialRequest> *const)(v2 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  if ( v17 == (char *)v2 )
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

// Line 1352: range 0000000016D1BB4A-0000000016D1BE16
__int64 __fastcall PlayerSocialComp::setFriendRemarkName(
        PlayerSocialComp *const this,
        uint32_t uid,
        const std::string *remark_name,
        proto::SetFriendRemarkNameRsp *rsp_0)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  __int64 result; // rax
  std::remove_reference<const std::string&>::type *v8; // r14
  std::unordered_map<unsigned int,std::string>::mapped_type *v9; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::string >,false> __y; // [rsp+28h] [rbp-B8h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 8 uid:1351 64 8 16 remark_iter:1362";
  *(_QWORD *)(v4 + 16) = PlayerSocialComp::setFriendRemarkName;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116352;
  *(_DWORD *)(v4 + 48) = uid;
  proto::SetFriendRemarkNameRsp::set_uid(rsp_0, *(_DWORD *)(v4 + 48));
  proto::SetFriendRemarkNameRsp::set_remark_name(rsp_0, remark_name);
  proto::SetFriendRemarkNameRsp::set_is_clear_remark(rsp_0, 0);
  if ( !PlayerSocialComp::isPlayerFriend(this, *(_DWORD *)(v4 + 48)) )
  {
    result = 7008LL;
    goto LABEL_12;
  }
  if ( (unsigned __int8)std::string::empty(remark_name) )
  {
    *(std::unordered_map<unsigned int,std::string>::iterator *)(v4 + 64) = std::unordered_map<unsigned int,std::string>::find(
                                                                             &this->friend_remark_name_map_,
                                                                             (const std::unordered_map<unsigned int,std::string>::key_type *)(v4 + 48));
    __y._M_cur = std::unordered_map<unsigned int,std::string>::end(&this->friend_remark_name_map_)._M_cur;
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::string>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::string >,false> *)(v4 + 64),
            &__y) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/social/player_social_comp.cpp",
        "setFriendRemarkName",
        1370);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        &v13,
        (const char (*)[30])"[Social] remark name is empty");
      common::milog::MiLogStream::~MiLogStream(&v13);
      result = 7031LL;
      goto LABEL_12;
    }
    std::unordered_map<unsigned int,std::string>::erase(
      &this->friend_remark_name_map_,
      *(std::unordered_map<unsigned int,std::string>::iterator *)(v4 + 64));
    proto::SetFriendRemarkNameRsp::set_is_clear_remark(rsp_0, 1);
  }
  else
  {
    v8 = std::move<std::string const&>(remark_name);
    v9 = std::unordered_map<unsigned int,std::string>::operator[](
           &this->friend_remark_name_map_,
           (const std::unordered_map<unsigned int,std::string>::key_type *)(v4 + 48));
    std::string::operator=(v9, v8);
  }
  result = 0LL;
LABEL_12:
  if ( v14 == (char *)v4 )
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

// Line 1382: range 0000000016D1BE18-0000000016D1BFCC
const std::string *__fastcall PlayerSocialComp::findFriendRemarkName[abi:cxx11](
        PlayerSocialComp *const this,
        uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::string *result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::string >,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 uid:1381 64 8 16 remark_iter:1384";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::findFriendRemarkName[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = uid;
  if ( !(_BYTE)`guard variable for'PlayerSocialComp::findFriendRemarkName[abi:cxx11](unsigned int)::empty_str
    && __cxa_guard_acquire(&`guard variable for'PlayerSocialComp::findFriendRemarkName[abi:cxx11](unsigned int)::empty_str) )
  {
    std::string::basic_string(&PlayerSocialComp::findFriendRemarkName[abi:cxx11](unsigned int)::empty_str);
    __cxa_guard_release(&`guard variable for'PlayerSocialComp::findFriendRemarkName[abi:cxx11](unsigned int)::empty_str);
    __cxa_atexit(
      (void (__fastcall *)(void *))&std::string::~string,
      &PlayerSocialComp::findFriendRemarkName[abi:cxx11](unsigned int)::empty_str,
      &_dso_handle);
  }
  *(std::unordered_map<unsigned int,std::string>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::string>::find(
                                                                           &this->friend_remark_name_map_,
                                                                           (const std::unordered_map<unsigned int,std::string>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::string>::end(&this->friend_remark_name_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::string>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::string >,false> *)(v2 + 64),
         &__y) )
  {
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::string>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::string >,false,false> *const)(v2 + 64))->second;
  }
  else
  {
    result = &PlayerSocialComp::findFriendRemarkName[abi:cxx11](unsigned int)::empty_str;
  }
  if ( v7 == (char *)v2 )
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

// Line 1393: range 0000000016D1BFCE-0000000016D1C402
std::pair<proto::Retcode,unsigned int> __cdecl PlayerSocialComp::checkAskAddFriendFrequency(
        PlayerSocialComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t cur_day_ask_friend_num; // r14d
  uint32_t v5; // r14d
  std::pair<proto::Retcode,unsigned int> v6; // rax
  proto::Retcode __x; // [rsp+1Ch] [rbp-A4h] BYREF
  unsigned int __y; // [rsp+20h] [rbp-A0h] BYREF
  uint32_t now; // [rsp+24h] [rbp-9Ch]
  uint32_t cd2_time; // [rsp+28h] [rbp-98h]
  uint32_t cd1_time; // [rsp+2Ch] [rbp-94h]
  const ConstValueExcelConfigMgr *const_value_config_mgr; // [rsp+30h] [rbp-90h]
  std::pair<proto::Retcode,unsigned int> v13; // [rsp+38h] [rbp-88h] BYREF
  std::shared_ptr<Config> v14; // [rsp+40h] [rbp-80h] BYREF
  char v15[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 14 succ_pair:1394";
  *(_QWORD *)(v1 + 16) = PlayerSocialComp::checkAskAddFriendFrequency;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  *(_QWORD *)(v1 + 32) = 0LL;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  const_value_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.const_value_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_day_ask_friend_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_day_ask_friend_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_day_ask_friend_num_);
  }
  cur_day_ask_friend_num = this->cur_day_ask_friend_num_;
  if ( cur_day_ask_friend_num <= ConstValueExcelConfigMgr::getFriendAskNumN1(const_value_config_mgr) )
    goto LABEL_20;
  now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_day_ask_friend_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_day_ask_friend_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_day_ask_friend_num_);
  }
  v5 = this->cur_day_ask_friend_num_;
  if ( v5 < ConstValueExcelConfigMgr::getFriendAskNumN2(const_value_config_mgr) )
  {
    cd1_time = 60 * ConstValueExcelConfigMgr::getFriendAskCdC1(const_value_config_mgr);
    if ( *(_BYTE *)(((unsigned __int64)&this->last_ask_friend_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_ask_friend_time_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->last_ask_friend_time_);
    }
    if ( now <= this->last_ask_friend_time_ + cd1_time )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->last_ask_friend_time_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_ask_friend_time_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->last_ask_friend_time_);
      }
      __y = this->last_ask_friend_time_ + cd1_time - now;
      __x = RET_ASK_ADD_FRIEND_CD;
      v6 = std::make_pair<proto::Retcode,unsigned int>(&__x, &__y);
      goto LABEL_24;
    }
LABEL_20:
    std::pair<proto::Retcode,unsigned int>::pair<proto::Retcode,int,true>(
      &v13,
      (std::pair<proto::Retcode,int> *)(v1 + 32));
    v6 = v13;
    goto LABEL_24;
  }
  cd2_time = 60 * ConstValueExcelConfigMgr::getFriendAskCdC2(const_value_config_mgr);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_ask_friend_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_ask_friend_time_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_ask_friend_time_);
  }
  if ( now > this->last_ask_friend_time_ + cd2_time )
    goto LABEL_20;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_ask_friend_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_ask_friend_time_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_ask_friend_time_);
  }
  __y = this->last_ask_friend_time_ + cd2_time - now;
  __x = RET_ASK_ADD_FRIEND_CD;
  v6 = std::make_pair<proto::Retcode,unsigned int>(&__x, &__y);
LABEL_24:
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v6;
};

// Line 1429: range 0000000016D1C404-0000000016D1C9C9
int32_t __cdecl PlayerSocialComp::onUpdatePlayerShowAvatarList(
        PlayerSocialComp *const this,
        const proto::UpdatePlayerShowAvatarListReq *req,
        proto::UpdatePlayerShowAvatarListRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // r14
  uint32_t AvatarComp; // eax
  common::milog::MiLogStream *v10; // rax
  int v11; // r14d
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v12; // rax
  const google::protobuf::RepeatedField<unsigned int> *v13; // rax
  google::protobuf::RepeatedField<unsigned int> *v14; // rsi
  unsigned int v15; // eax
  __int64 v16; // rdx
  char v17; // al
  int32_t result; // eax
  int32_t retcode; // [rsp+24h] [rbp-10Ch]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-108h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+30h] [rbp-100h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-F8h]
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-F0h] BYREF
  char v26[208]; // [rsp+60h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 14 avatar_id:1440 48 16 15 avatar_ptr:1442 80 48 18 avatar_id_set:1439";
  *(_QWORD *)(v3 + 16) = PlayerSocialComp::onUpdatePlayerShowAvatarList;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = 62194;
  v5[536862724] = -202116109;
  retcode = 0;
  v6 = proto::UpdatePlayerShowAvatarListReq::show_avatar_id_list_size(req);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 48));
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
  LOBYTE(v6) = v6 > ConstValueExcelConfigMgr::getPlayerShowAvatarNumLimit(&v7->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 48));
  if ( (_BYTE)v6 )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.cpp",
      "onUpdatePlayerShowAvatarList",
      1435);
    v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v25,
           (const char (*)[34])"[SOCIAL] list exceed range, size:");
    *(_DWORD *)(v3 + 32) = proto::UpdatePlayerShowAvatarListReq::show_avatar_id_list_size(req);
    common::milog::MiLogStream::operator<<<int,(int *)0>(v8, (const int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v25);
    retcode = -1;
  }
  else
  {
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 80));
    __for_range = proto::UpdatePlayerShowAvatarListReq::show_avatar_id_list(req);
    __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
    __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
    while ( __for_begin != __for_end )
    {
      if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(__for_begin);
      }
      *(_DWORD *)(v3 + 32) = *__for_begin;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      AvatarComp = (unsigned int)Player::getAvatarComp(this->player_);
      PlayerAvatarComp::findFormalAvatarByAvatarId((const PlayerAvatarComp *const)(v3 + 48), AvatarComp);
      if ( std::operator==<FormalAvatar>((const std::shared_ptr<FormalAvatar> *)(v3 + 48), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/social/player_social_comp.cpp",
          "onUpdatePlayerShowAvatarList",
          1445);
        v10 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                &v25,
                (const char (*)[40])"[SOCIAL] cannot find avatar, avatar_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v25);
        retcode = 104;
        v11 = 0;
      }
      else
      {
        v12 = std::set<unsigned int>::insert(
                (std::set<unsigned int> *const)(v3 + 80),
                (const std::set<unsigned int>::value_type *)(v3 + 32));
        if ( !v12.second )
        {
          common::milog::MiLogStream::create(
            &v25,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/social/player_social_comp.cpp",
            "onUpdatePlayerShowAvatarList",
            1451);
          common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            &v25,
            (const char (*)[35])"[SOCIAL] duplicated show avatar id");
          common::milog::MiLogStream::~MiLogStream(&v25);
          retcode = -1;
          v11 = 0;
        }
        else
        {
          v11 = 1;
        }
      }
      std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v3 + 48));
      if ( v11 != 1 )
        break;
      ++__for_begin;
    }
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 80));
  }
  if ( !retcode )
  {
    std::vector<unsigned int>::clear(&this->show_avatar_id_vec_);
    v13 = proto::UpdatePlayerShowAvatarListReq::show_avatar_id_list(req);
    common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v13, &this->show_avatar_id_vec_);
    v14 = proto::UpdatePlayerShowAvatarListRsp::mutable_show_avatar_id_list(rsp_0);
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->show_avatar_id_vec_, v14);
    LOBYTE(v15) = proto::UpdatePlayerShowAvatarListReq::is_show_avatar(req);
    v16 = v15;
    v17 = *(_BYTE *)(((unsigned __int64)&this->is_show_avatar_ >> 3) + 0x7FFF8000);
    if ( v17 < 0 )
    {
      LOBYTE(v14) = v17 != 0;
      __asan_report_store1(&this->is_show_avatar_, v14, v16);
    }
    this->is_show_avatar_ = v16;
    proto::UpdatePlayerShowAvatarListRsp::set_is_show_avatar(rsp_0, this->is_show_avatar_);
  }
  result = retcode;
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
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

// Line 1472: range 0000000016D1C9CA-0000000016D1CDB6
int32_t __cdecl PlayerSocialComp::onUpdatePlayerShowNameCardList(
        PlayerSocialComp *const this,
        const proto::UpdatePlayerShowNameCardListReq *req,
        proto::UpdatePlayerShowNameCardListRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned int v6; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // r14
  int32_t v9; // r14d
  const google::protobuf::RepeatedField<unsigned int> *v10; // rax
  google::protobuf::RepeatedField<unsigned int> *v11; // rax
  int32_t result; // eax
  std::_Rb_tree_const_iterator<unsigned int>::_Self __x; // [rsp+28h] [rbp-108h] BYREF
  std::_Rb_tree_const_iterator<unsigned int>::_Self __y; // [rsp+30h] [rbp-100h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+38h] [rbp-F8h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+40h] [rbp-F0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+48h] [rbp-E8h]
  std::shared_ptr<Config> v19; // [rsp+50h] [rbp-E0h] BYREF
  common::milog::MiLogStream v20; // [rsp+60h] [rbp-D0h] BYREF
  char v21[176]; // [rsp+80h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 4 17 name_card_id:1479 48 48 11 id_set:1478";
  *(_QWORD *)(v3 + 16) = PlayerSocialComp::onUpdatePlayerShowNameCardList;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862723] = -202116109;
  v6 = proto::UpdatePlayerShowNameCardListReq::show_name_card_id_list_size(req);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
  LOBYTE(v6) = v6 > ConstValueExcelConfigMgr::getPlayerShowNameCardNumLimit(&v7->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v19);
  if ( (_BYTE)v6 )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.cpp",
      "onUpdatePlayerShowNameCardList",
      1475);
    v8 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v20,
           (const char (*)[52])"[SOCIAL] show_name_card_id_list out of range, size:");
    *(_DWORD *)(v3 + 32) = proto::UpdatePlayerShowNameCardListReq::show_name_card_id_list_size(req);
    common::milog::MiLogStream::operator<<<int,(int *)0>(v8, (const int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v20);
    v9 = -1;
  }
  else
  {
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 48));
    __for_range = proto::UpdatePlayerShowNameCardListReq::show_name_card_id_list(req);
    __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
    __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
    while ( __for_begin != __for_end )
    {
      if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(__for_begin);
      }
      *(_DWORD *)(v3 + 32) = *__for_begin;
      __y._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v3 + 48))._M_node;
      __x._M_node = std::set<unsigned int>::find(
                      (std::set<unsigned int> *const)(v3 + 48),
                      (const std::set<unsigned int>::key_type *)(v3 + 32))._M_node;
      if ( std::operator!=(&__x, &__y) )
      {
        v9 = 7035;
        goto LABEL_16;
      }
      if ( !PlayerSocialComp::isNameCardUnlocked(this, *(_DWORD *)(v3 + 32)) )
      {
        v9 = 7014;
        goto LABEL_16;
      }
      std::set<unsigned int>::insert(
        (std::set<unsigned int> *const)(v3 + 48),
        (const std::set<unsigned int>::value_type *)(v3 + 32));
      ++__for_begin;
    }
    std::vector<unsigned int>::clear(&this->show_name_card_id_vec_);
    v10 = proto::UpdatePlayerShowNameCardListReq::show_name_card_id_list(req);
    common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v10, &this->show_name_card_id_vec_);
    v11 = proto::UpdatePlayerShowNameCardListRsp::mutable_show_name_card_id_list(rsp_0);
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->show_name_card_id_vec_, v11);
    v9 = 0;
LABEL_16:
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 48));
  }
  result = v9;
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1499: range 0000000016D1CDB8-0000000016D1D15D
void __cdecl PlayerSocialComp::syncPSNFriendToRedis(PlayerSocialComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__detail::_Node_iterator<unsigned int,true,false>::reference v5; // rax
  _DWORD *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  uint32_t count; // [rsp+14h] [rbp-10Ch]
  std::unordered_set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-108h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-100h] BYREF
  std::unordered_set<unsigned int> *__for_range; // [rsp+28h] [rbp-F8h]
  std::shared_ptr<Config> v13; // [rsp+30h] [rbp-F0h] BYREF
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-E0h] BYREF
  char v15[192]; // [rsp+60h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 12 max_add:1500 64 4 8 uid:1504 80 40 8 req:1503";
  *(_QWORD *)(v1 + 16) = PlayerSocialComp::syncPSNFriendToRedis;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = 61956;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
  *(_DWORD *)(v1 + 48) = ConstValueExcelConfigMgr::getAllFriendLimitNum(&v4->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v13);
  count = 0;
  proto::ServerAddPsnFriendReq::ServerAddPsnFriendReq((proto::ServerAddPsnFriendReq *const)(v1 + 80));
  __for_range = &this->psn_friend_set_;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&this->psn_friend_set_)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&this->psn_friend_set_)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v5 = std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v1 + 64) = *v6;
    if ( !PlayerSocialComp::isPlayerInBlacklist(this, *(_DWORD *)(v1 + 64)) )
    {
      if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
              &this->friend_set_,
              (const unsigned int *)(v1 + 64)) )
      {
        proto::ServerAddPsnFriendReq::add_force_add_psn_friend_uid_list(
          (proto::ServerAddPsnFriendReq *const)(v1 + 80),
          *(_DWORD *)(v1 + 64));
        ++count;
      }
      if ( count >= *(_DWORD *)(v1 + 48) )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/social/player_social_comp.cpp",
          "syncPSNFriendToRedis",
          1518);
        v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(&v14, (const char (*)[34])off_25F3F760);
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 48));
        common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v8, (const char (*)[22])" others add next time");
        common::milog::MiLogStream::~MiLogStream(&v14);
        break;
      }
    }
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  sendProtoToSocialService<proto::ServerAddPsnFriendReq>(this->player_, (proto::ServerAddPsnFriendReq *)(v1 + 80));
  proto::ServerAddPsnFriendReq::~ServerAddPsnFriendReq((proto::ServerAddPsnFriendReq *const)(v1 + 80));
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 1526: range 0000000016D1D15E-0000000016D1D4E6
void __cdecl PlayerSocialComp::syncPSNBlacklistToRedis(PlayerSocialComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__detail::_Node_iterator<unsigned int,true,false>::reference v5; // rax
  _DWORD *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  uint32_t count; // [rsp+14h] [rbp-10Ch]
  std::unordered_set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-108h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-100h] BYREF
  std::unordered_set<unsigned int> *__for_range; // [rsp+28h] [rbp-F8h]
  std::shared_ptr<Config> v13; // [rsp+30h] [rbp-F0h] BYREF
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-E0h] BYREF
  char v15[192]; // [rsp+60h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 12 max_add:1527 64 4 8 uid:1531 80 40 8 req:1530";
  *(_QWORD *)(v1 + 16) = PlayerSocialComp::syncPSNBlacklistToRedis;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = 61956;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
  *(_DWORD *)(v1 + 48) = ConstValueExcelConfigMgr::getAllFriendLimitNum(&v4->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v13);
  count = 0;
  proto::ServerAddPsnBlackReq::ServerAddPsnBlackReq((proto::ServerAddPsnBlackReq *const)(v1 + 80));
  __for_range = &this->psn_blacklist_set_;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&this->psn_blacklist_set_)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&this->psn_blacklist_set_)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v5 = std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v1 + 64) = *v6;
    if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
            &this->blacklist_set_,
            (const unsigned int *)(v1 + 64)) )
    {
      proto::ServerAddPsnBlackReq::add_force_add_psn_black_uid_list(
        (proto::ServerAddPsnBlackReq *const)(v1 + 80),
        *(_DWORD *)(v1 + 64));
      ++count;
    }
    if ( count >= *(_DWORD *)(v1 + 48) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/social/player_social_comp.cpp",
        "syncPSNBlacklistToRedis",
        1541);
      v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(&v14, (const char (*)[33])off_25F3F880);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v8, (const char (*)[22])" others add next time");
      common::milog::MiLogStream::~MiLogStream(&v14);
      break;
    }
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  sendProtoToSocialService<proto::ServerAddPsnBlackReq>(this->player_, (proto::ServerAddPsnBlackReq *)(v1 + 80));
  proto::ServerAddPsnBlackReq::~ServerAddPsnBlackReq((proto::ServerAddPsnBlackReq *const)(v1 + 80));
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 1549: range 0000000016D1D4E8-0000000016D1D85E
void __cdecl PlayerSocialComp::deletePSNBlackListFriendRelation(PlayerSocialComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  unsigned int *v5; // rax
  uint32_t *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int v9; // r14d
  uint32_t count; // [rsp+10h] [rbp-100h]
  google::protobuf::uint32 uid; // [rsp+14h] [rbp-FCh]
  std::unordered_set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  std::unordered_set<unsigned int> *__for_range; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<Config> v15; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-D0h] BYREF
  char v17[176]; // [rsp+60h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 12 max_num:1550 64 24 8 req:1558";
  *(_QWORD *)(v1 + 16) = PlayerSocialComp::deletePSNBlackListFriendRelation;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
  *(_DWORD *)(v1 + 48) = ConstValueExcelConfigMgr::getPsnAutoFriendLimitNum(&v4->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v15);
  count = 0;
  __for_range = &this->psn_blacklist_set_;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&this->psn_blacklist_set_)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&this->psn_blacklist_set_)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v5 = (unsigned int *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    uid = *v6;
    if ( PlayerSocialComp::isPlayerGameFriend(this, *v6) )
    {
      proto::ServerDeleteFriendReq::ServerDeleteFriendReq((proto::ServerDeleteFriendReq *const)(v1 + 64));
      proto::ServerDeleteFriendReq::set_target_uid((proto::ServerDeleteFriendReq *const)(v1 + 64), uid);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      sendProtoToSocialService<proto::ServerDeleteFriendReq>(this->player_, (proto::ServerDeleteFriendReq *)(v1 + 64));
      if ( ++count < *(_DWORD *)(v1 + 48) )
      {
        v9 = 1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/social/player_social_comp.cpp",
          "deletePSNBlackListFriendRelation",
          1565);
        v7 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(&v16, (const char (*)[40])off_25F3F980);
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 48));
        common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
          v8,
          (const char (*)[25])" others delete next time");
        common::milog::MiLogStream::~MiLogStream(&v16);
        v9 = 0;
      }
      proto::ServerDeleteFriendReq::~ServerDeleteFriendReq((proto::ServerDeleteFriendReq *const)(v1 + 64));
      if ( v9 != 1 )
        break;
    }
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  if ( v17 == (char *)v1 )
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

// Line 1573: range 0000000016D1D860-0000000016D1D9B8
const proto::FriendBrief *__fastcall PlayerSocialComp::findFriendBrief(PlayerSocialComp *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const proto::FriendBrief *result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,proto::FriendBrief>,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 uid:1572 64 8 9 iter:1574";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::findFriendBrief;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = uid;
  *(std::unordered_map<unsigned int,proto::FriendBrief>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,proto::FriendBrief>::find(
                                                                                  &this->friend_brief_map_,
                                                                                  (const std::unordered_map<unsigned int,proto::FriendBrief>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,proto::FriendBrief>::end(&this->friend_brief_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,proto::FriendBrief>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,proto::FriendBrief>,false> *)(v2 + 64),
         &__y) )
  {
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,proto::FriendBrief>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,proto::FriendBrief>,false,false> *const)(v2 + 64))->second;
  }
  else
  {
    result = 0LL;
  }
  if ( v7 == (char *)v2 )
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

// Line 1584: range 0000000016D1D9BA-0000000016D1DA64
void __cdecl PlayerSocialComp::onBirthdayTimer(PlayerSocialComp *const this, uint32_t uid)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( PlayerSocialComp::isTodayBirthday(this, 0) )
  {
    if ( PlayerSocialComp::tryGrantBirthdayBenefit(this) )
    {
      common::milog::MiLogStream::create(
        &v2,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/social/player_social_comp.cpp",
        "onBirthdayTimer",
        1589);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        &v2,
        (const char (*)[31])"tryGrantBirthdayBenefit failed");
      common::milog::MiLogStream::~MiLogStream(&v2);
    }
  }
};

// Line 1595: range 0000000016D1DA66-0000000016D1DBDF
int32_t __cdecl PlayerSocialComp::addFriendByMuip(const PlayerSocialComp *const this, uint32_t target_uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  int32_t result; // eax
  char v7[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 8 req:1596";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::addFriendByMuip;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  proto::ServerAddFriendByMuipReq::ServerAddFriendByMuipReq((proto::ServerAddFriendByMuipReq *const)(v2 + 32));
  proto::ServerAddFriendByMuipReq::set_target_uid((proto::ServerAddFriendByMuipReq *const)(v2 + 32), target_uid);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v5 = sendProtoToSocialService<proto::ServerAddFriendByMuipReq>(
         this->player_,
         (proto::ServerAddFriendByMuipReq *)(v2 + 32));
  proto::ServerAddFriendByMuipReq::~ServerAddFriendByMuipReq((proto::ServerAddFriendByMuipReq *const)(v2 + 32));
  result = v5;
  if ( v7 == (char *)v2 )
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

// Line 1602: range 0000000016D1DBE0-0000000016D1DD59
int32_t __cdecl PlayerSocialComp::delFriendByMuip(const PlayerSocialComp *const this, uint32_t target_uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  int32_t result; // eax
  char v7[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 8 req:1603";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::delFriendByMuip;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  proto::ServerDelFriendByMuipReq::ServerDelFriendByMuipReq((proto::ServerDelFriendByMuipReq *const)(v2 + 32));
  proto::ServerDelFriendByMuipReq::set_target_uid((proto::ServerDelFriendByMuipReq *const)(v2 + 32), target_uid);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v5 = sendProtoToSocialService<proto::ServerDelFriendByMuipReq>(
         this->player_,
         (proto::ServerDelFriendByMuipReq *)(v2 + 32));
  proto::ServerDelFriendByMuipReq::~ServerDelFriendByMuipReq((proto::ServerDelFriendByMuipReq *const)(v2 + 32));
  result = v5;
  if ( v7 == (char *)v2 )
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

// Line 1609: range 0000000016D1DD5A-0000000016D1DED3
int32_t __cdecl PlayerSocialComp::addFriendAskByMuip(const PlayerSocialComp *const this, uint32_t target_uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  int32_t result; // eax
  char v7[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 8 req:1610";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::addFriendAskByMuip;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  proto::ServerAddFriendAskByMuipReq::ServerAddFriendAskByMuipReq((proto::ServerAddFriendAskByMuipReq *const)(v2 + 32));
  proto::ServerAddFriendAskByMuipReq::set_target_uid((proto::ServerAddFriendAskByMuipReq *const)(v2 + 32), target_uid);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v5 = sendProtoToSocialService<proto::ServerAddFriendAskByMuipReq>(
         this->player_,
         (proto::ServerAddFriendAskByMuipReq *)(v2 + 32));
  proto::ServerAddFriendAskByMuipReq::~ServerAddFriendAskByMuipReq((proto::ServerAddFriendAskByMuipReq *const)(v2 + 32));
  result = v5;
  if ( v7 == (char *)v2 )
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

// Line 1616: range 0000000016D1DED4-0000000016D1E04D
int32_t __cdecl PlayerSocialComp::delFriendAskByMuip(const PlayerSocialComp *const this, uint32_t target_uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  int32_t result; // eax
  char v7[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 8 req:1617";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::delFriendAskByMuip;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  proto::ServerDelFriendAskByMuipReq::ServerDelFriendAskByMuipReq((proto::ServerDelFriendAskByMuipReq *const)(v2 + 32));
  proto::ServerDelFriendAskByMuipReq::set_target_uid((proto::ServerDelFriendAskByMuipReq *const)(v2 + 32), target_uid);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v5 = sendProtoToSocialService<proto::ServerDelFriendAskByMuipReq>(
         this->player_,
         (proto::ServerDelFriendAskByMuipReq *)(v2 + 32));
  proto::ServerDelFriendAskByMuipReq::~ServerDelFriendAskByMuipReq((proto::ServerDelFriendAskByMuipReq *const)(v2 + 32));
  result = v5;
  if ( v7 == (char *)v2 )
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

// Line 1623: range 0000000016D1E04E-0000000016D1E0BE
int32_t __cdecl PlayerSocialComp::onServerAddFriendByMuip(
        PlayerSocialComp *const this,
        const proto::ServerAddFriendByMuipRsp *rsp_0)
{
  uint32_t v2; // edx
  unsigned int value; // [rsp+1Ch] [rbp-4h] BYREF

  if ( !proto::ServerAddFriendByMuipRsp::retcode(rsp_0) )
  {
    v2 = proto::ServerAddFriendByMuipRsp::target_uid(rsp_0);
    PlayerSocialComp::addFriend(this, v2);
    value = proto::ServerAddFriendByMuipRsp::target_uid(rsp_0);
    common::tools::MiscUtils::removeValues<std::vector<unsigned int>,unsigned int>(&this->ask_add_friend_vec_, &value);
  }
  return 0;
};

// Line 1633: range 0000000016D1E0C0-0000000016D1E107
int32_t __cdecl PlayerSocialComp::onServerDelFriendByMuip(
        PlayerSocialComp *const this,
        const proto::ServerDelFriendByMuipRsp *rsp_0)
{
  uint32_t v2; // edx

  if ( !proto::ServerDelFriendByMuipRsp::retcode(rsp_0) )
  {
    v2 = proto::ServerDelFriendByMuipRsp::target_uid(rsp_0);
    PlayerSocialComp::deleteFriend(this, v2);
  }
  return 0;
};

// Line 1642: range 0000000016D1E108-0000000016D1E11A
int32_t __cdecl PlayerSocialComp::onServerAddFriendAskByMuip(
        PlayerSocialComp *const this,
        const proto::ServerAddFriendAskByMuipRsp *rsp_0)
{
  return 0;
};

// Line 1647: range 0000000016D1E11C-0000000016D1E12E
int32_t __cdecl PlayerSocialComp::onServerDelFriendAskByMuip(
        PlayerSocialComp *const this,
        const proto::ServerDelFriendAskByMuipRsp *rsp_0)
{
  return 0;
};

// Line 1652: range 0000000016D1E130-0000000016D1E851
int32_t __cdecl PlayerSocialComp::onChangeSignature(
        PlayerSocialComp *const this,
        const proto::SetPlayerSignatureReq *req)
{
  std::string *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const std::string *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r14
  int32_t v8; // r14d
  uint32_t submit_count; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rcx
  __int64 Now; // rsi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  unsigned int SignatureAuditAutoPassHours; // eax
  unsigned int v23; // ecx
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Ah] [rbp-C6h] BYREF
  bool is_audit_wating; // [rsp+1Bh] [rbp-C5h]
  uint32_t auto_pass_time; // [rsp+1Ch] [rbp-C4h]
  std::shared_ptr<Config> v28; // [rsp+20h] [rbp-C0h] BYREF
  std::string s; // [rsp+30h] [rbp-B0h] BYREF
  char v30[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (std::string *)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::string *)v3;
  }
  v2->_M_dataplus._M_p = (std::string::pointer)1102416563;
  v2->_M_string_length = (std::string::size_type)"1 32 32 21 trimed_signature:1653";
  v2->_anon_0._M_allocated_capacity = (std::string::size_type)PlayerSocialComp::onChangeSignature;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&s, off_25F3F160, &__a);
  v5 = proto::SetPlayerSignatureReq::signature[abi:cxx11](req);
  common::tools::StringUtils::trim(v2 + 1, v5, &s, 1);
  std::string::~string(&s);
  std::allocator<char>::~allocator(&__a);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v28);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
  v7 = !FeatureSwitchMgr::isSignatureAuditEnabled(&v6->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v28);
  if ( v7 )
  {
    PlayerSocialComp::setSignature(this, v2 + 1);
    v8 = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->signature_audit_data_.audit_state >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->signature_audit_data_.audit_state >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->signature_audit_data_.audit_state);
    }
    is_audit_wating = this->signature_audit_data_.audit_state == 1;
    if ( !is_audit_wating && std::operator==<char>(&this->signature_, v2 + 1)
      || is_audit_wating && std::operator==<char>(&this->signature_audit_data_.content, v2 + 1) )
    {
      v8 = 7040;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->signature_audit_data_.submit_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->signature_audit_data_.submit_count >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_load4(&this->signature_audit_data_.submit_count);
      }
      submit_count = this->signature_audit_data_.submit_count;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v28);
      v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
      LOBYTE(submit_count) = submit_count >= FeatureSwitchMgr::getMonthlySubmitSignatureLimit(&v11->feature_switch_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v28);
      if ( (_BYTE)submit_count )
      {
        v8 = 7041;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->signature_audit_data_.submit_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->signature_audit_data_.submit_count >> 3)
                                                             + 0x7FFF8000) )
        {
          __asan_report_load4(&this->signature_audit_data_.submit_count);
        }
        ++this->signature_audit_data_.submit_count;
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&s,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/social/player_social_comp.cpp",
          "onChangeSignature",
          1671);
        v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                (common::milog::MiLogStream *const)&s,
                (const char (*)[18])"audit signature: ");
        v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                v12,
                &this->signature_audit_data_.content);
        v14 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v13, (const char (*)[5])off_25F3FBE0);
        v15 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, v2 + 1);
        v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])" current: ");
        v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, &this->signature_);
        v18 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v17, (const char (*)[15])" submit count:");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                &this->signature_audit_data_.submit_count);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v19, this->player_);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&s);
        std::string::operator=(&this->signature_audit_data_, &v2[1]);
        Now = (unsigned int)common::tools::TimeUtils::getNow();
        if ( *(_BYTE *)(((unsigned __int64)&this->signature_audit_data_.submit_time >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->signature_audit_data_.submit_time >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->signature_audit_data_.submit_time, Now, (_BYTE)this);
        }
        this->signature_audit_data_.submit_time = Now;
        if ( *(_BYTE *)(((unsigned __int64)&this->signature_audit_data_.audit_state >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->signature_audit_data_.audit_state >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->signature_audit_data_.audit_state, Now, (_BYTE)this + 8);
        }
        this->signature_audit_data_.audit_state = 1;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v28);
        v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
        SignatureAuditAutoPassHours = FeatureSwitchMgr::getSignatureAuditAutoPassHours(&v21->feature_switch_mgr);
        v23 = SAFE_MULTIPLY<int,unsigned int>(3600, SignatureAuditAutoPassHours);
        if ( *(_BYTE *)(((unsigned __int64)&this->signature_audit_data_.submit_time >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->signature_audit_data_.submit_time >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->signature_audit_data_.submit_time);
        }
        auto_pass_time = SAFE_ADD<unsigned int,unsigned int>(this->signature_audit_data_.submit_time, v23);
        std::shared_ptr<Config>::~shared_ptr(&v28);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Player::asyncNicknameSignatureAuditRequest(this->player_, v2 + 1, AUDIT_SIGNATURE, auto_pass_time);
        v8 = 0;
      }
    }
  }
  std::string::~string(&v2[1]);
  result = v8;
  if ( v30 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_dataplus._M_p = (std::string::pointer)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1681: range 0000000016D1E852-0000000016D1E86C
void __cdecl PlayerSocialComp::onMonthlyRefresh(PlayerSocialComp *const this)
{
  PlayerSocialComp::resetSignatureAuditSubmitCount(this);
};

// Line 1686: range 0000000016D1E86E-0000000016D1E888
void __cdecl PlayerSocialComp::onLoginMonthlyRefresh(PlayerSocialComp *const this)
{
  PlayerSocialComp::resetSignatureAuditSubmitCount(this);
};

// Line 1691: range 0000000016D1E88A-0000000016D1E8EF
void __cdecl PlayerSocialComp::resetSignatureAuditSubmitCount(PlayerSocialComp *const this)
{
  bool v1; // dl

  v1 = *(_BYTE *)(((unsigned __int64)&this->signature_audit_data_.submit_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->signature_audit_data_.submit_count >> 3)
                                                       + 0x7FFF8000);
  if ( v1 )
    __asan_report_store4(&this->signature_audit_data_.submit_count, (((_BYTE)this + 4) & 7u) + 3, v1);
  this->signature_audit_data_.submit_count = 0;
  PlayerSocialComp::notifySignatureAuditData(this);
};

// Line 1697: range 0000000016D1E8F0-0000000016D1EB4B
void __cdecl PlayerSocialComp::notifySignatureAuditData(const PlayerSocialComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  bool isSignatureAuditEnabled; // dl
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t MonthlySubmitSignatureLimit; // edx
  proto::ContentAuditInfo *info; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v9; // [rsp+20h] [rbp-90h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 11 notify:1698";
  *(_QWORD *)(v1 + 16) = PlayerSocialComp::notifySignatureAuditData;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  proto::PlayerSignatureAuditDataNotify::PlayerSignatureAuditDataNotify((proto::PlayerSignatureAuditDataNotify *const)(v1 + 32));
  info = proto::PlayerSignatureAuditDataNotify::mutable_info((proto::PlayerSignatureAuditDataNotify *const)(v1 + 32));
  ContentAuditData::toClient(&this->signature_audit_data_, info);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
  isSignatureAuditEnabled = FeatureSwitchMgr::isSignatureAuditEnabled(&v4->feature_switch_mgr);
  proto::ContentAuditInfo::set_is_open(info, isSignatureAuditEnabled);
  std::shared_ptr<Config>::~shared_ptr(&v9);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
  MonthlySubmitSignatureLimit = FeatureSwitchMgr::getMonthlySubmitSignatureLimit(&v6->feature_switch_mgr);
  proto::ContentAuditInfo::set_submit_limit(info, MonthlySubmitSignatureLimit);
  std::shared_ptr<Config>::~shared_ptr(&v9);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 32));
  proto::PlayerSignatureAuditDataNotify::~PlayerSignatureAuditDataNotify((proto::PlayerSignatureAuditDataNotify *const)(v1 + 32));
  if ( v10 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1707: range 0000000016D1EB4C-0000000016D1F08F
void __cdecl PlayerSocialComp::onSignatureAuditResult(
        PlayerSocialComp *const this,
        const std::string *signature,
        bool is_ok)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  bool is_not_waiting; // [rsp+2Eh] [rbp-A2h]
  bool is_not_consistent; // [rsp+2Fh] [rbp-A1h]
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-A0h] BYREF
  char v18[128]; // [rsp+50h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 32 18 old_signature:1708";
  *(_QWORD *)(v3 + 16) = PlayerSocialComp::onSignatureAuditResult;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450888) = -202116109;
  PlayerSocialComp::getSignature[abi:cxx11]((std::string *)(v3 + 32), this);
  is_not_waiting = 0;
  is_not_consistent = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->signature_audit_data_.audit_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->signature_audit_data_.audit_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->signature_audit_data_.audit_state);
  }
  if ( this->signature_audit_data_.audit_state == 1 )
  {
    if ( std::operator==<char>(signature, &this->signature_audit_data_.content) )
    {
      if ( is_ok )
      {
        PlayerSocialComp::setSignature(this, signature);
        PlayerSocialComp::notifySignature(this);
        if ( *(_BYTE *)(((unsigned __int64)&this->signature_audit_data_.audit_state >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->signature_audit_data_.audit_state >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->signature_audit_data_.audit_state, signature, (_BYTE)this + 8);
        }
        this->signature_audit_data_.audit_state = 0;
        std::string::operator=(&this->signature_audit_data_, byte_25E9A5A0);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->signature_audit_data_.audit_state >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->signature_audit_data_.audit_state >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->signature_audit_data_.audit_state, &this->signature_audit_data_, (_BYTE)this + 8);
        }
        this->signature_audit_data_.audit_state = 2;
      }
      PlayerSocialComp::notifySignatureAuditData(this);
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/social/player_social_comp.cpp",
        "onSignatureAuditResult",
        1727);
      v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v17, signature);
      v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v6, (const char (*)[10])" result: ");
      v8 = common::milog::MiLogStream::operator<<(v7, is_ok);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v8, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/social/player_social_comp.cpp",
        "onSignatureAuditResult",
        1731);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v17, signature);
      v10 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v9, (const char (*)[25])off_25F3FD60);
      v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
              v10,
              &this->signature_audit_data_.content);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v11, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v17);
      is_not_consistent = 1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/social/player_social_comp.cpp",
      "onSignatureAuditResult",
      1737);
    v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v17, signature);
    v13 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            v12,
            (const char (*)[30])" NOT in audit waiting state. ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v13, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v17);
    is_not_waiting = 1;
  }
  PlayerSocialComp::logSignatureAuditResult(
    this,
    is_ok,
    (const std::string *)(v3 + 32),
    is_not_waiting,
    is_not_consistent);
  std::string::~string((void *)(v3 + 32));
  if ( v18 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1744: range 0000000016D1F090-0000000016D1F1CB
void __cdecl PlayerSocialComp::onSignatureAuditByGm(PlayerSocialComp *const this, bool is_ok)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 12 content:1745";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::onSignatureAuditByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  std::string::basic_string(v2 + 32, &this->signature_audit_data_);
  PlayerSocialComp::onSignatureAuditResult(this, (const std::string *)(v2 + 32), is_ok);
  std::string::~string((void *)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1750: range 0000000016D1F1CC-0000000016D1F330
void __cdecl PlayerSocialComp::notifySignature(const PlayerSocialComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  char v4[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 11 notify:1751";
  *(_QWORD *)(v1 + 16) = PlayerSocialComp::notifySignature;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  proto::PlayerSignatureNotify::PlayerSignatureNotify((proto::PlayerSignatureNotify *const)(v1 + 32));
  proto::PlayerSignatureNotify::set_signature((proto::PlayerSignatureNotify *const)(v1 + 32), &this->signature_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 32));
  proto::PlayerSignatureNotify::~PlayerSignatureNotify((proto::PlayerSignatureNotify *const)(v1 + 32));
  if ( v4 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1757: range 0000000016D1F332-0000000016D1F59B
void __cdecl PlayerSocialComp::checkAndAutoPassSignatureAudit(PlayerSocialComp *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  bool v2; // bl
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  unsigned int SignatureAuditAutoPassHours; // eax
  unsigned int v5; // ecx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  uint32_t auto_pass_time; // [rsp+1Ch] [rbp-44h]
  std::shared_ptr<Config> v9; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
  v2 = !FeatureSwitchMgr::isSignatureAuditEnabled(&v1->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v9);
  if ( !v2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->signature_audit_data_.audit_state >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->signature_audit_data_.audit_state >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->signature_audit_data_.audit_state);
    }
    if ( this->signature_audit_data_.audit_state == 1 )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v9);
      v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
      SignatureAuditAutoPassHours = FeatureSwitchMgr::getSignatureAuditAutoPassHours(&v3->feature_switch_mgr);
      v5 = SAFE_MULTIPLY<int,unsigned int>(3600, SignatureAuditAutoPassHours);
      if ( *(_BYTE *)(((unsigned __int64)&this->signature_audit_data_.submit_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->signature_audit_data_.submit_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->signature_audit_data_.submit_time);
      }
      auto_pass_time = SAFE_ADD<unsigned int,unsigned int>(this->signature_audit_data_.submit_time, v5);
      std::shared_ptr<Config>::~shared_ptr(&v9);
      if ( common::tools::TimeUtils::getNow() >= auto_pass_time )
      {
        PlayerSocialComp::onSignatureAuditResult(this, &this->signature_audit_data_.content, 1);
        common::milog::MiLogStream::create(
          &v10,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/social/player_social_comp.cpp",
          "checkAndAutoPassSignatureAudit",
          1770);
        v6 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
               &v10,
               (const char (*)[18])"Auto pass audit: ");
        v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
               v6,
               &this->signature_audit_data_.content);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v7, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v10);
      }
    }
  }
};

// Line 1775: range 0000000016D1F59C-0000000016D1FAE4
void __cdecl PlayerSocialComp::logSignatureAuditResult(
        PlayerSocialComp *const this,
        bool is_pass,
        const std::string *sign_before,
        bool is_not_waiting,
        bool is_not_consistent)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodySignatureAuditResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodySignatureAuditResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodySignatureAuditResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodySignatureAuditResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodySignatureAuditResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodySignatureAuditResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodySignatureAuditResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  Player *player; // r14
  std::string v19; // [rsp+0h] [rbp-100h]
  bool is_not_consistenta; // [rsp+4h] [rbp-FCh]
  const std::string *sign_beforea; // [rsp+8h] [rbp-F8h]
  bool is_not_waitinga; // [rsp+10h] [rbp-F0h]
  bool is_passa; // [rsp+14h] [rbp-ECh]
  PlayerSocialComp *thisa; // [rsp+18h] [rbp-E8h]
  bool is_audit_open; // [rsp+2Bh] [rbp-D5h]
  uint32_t submit_limit; // [rsp+2Ch] [rbp-D4h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> v28; // [rsp+40h] [rbp-C0h] BYREF
  std::string value; // [rsp+50h] [rbp-B0h] BYREF
  char v30[144]; // [rsp+70h] [rbp-90h] BYREF

  *(&v19._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v19._M_string_length = (std::string::size_type)sign_before;
  v19._anon_0._M_local_buf[4] = is_pass;
  v19._anon_0._M_local_buf[0] = is_not_waiting;
  BYTE4(v19._M_dataplus._M_p) = is_not_consistent;
  v5 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 11 holder:1776 64 16 12 log_ptr:1777";
  *(_QWORD *)(v5 + 16) = PlayerSocialComp::logSignatureAuditResult;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&value, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0xA94u, v19);
  std::string::~string(&value);
  common::tools::perf::make_shared<proto_log::PlayerLogBodySignatureAuditResult>();
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodySignatureAuditResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySignatureAuditResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodySignatureAuditResult::set_is_audit_pass(v9, is_passa);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodySignatureAuditResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySignatureAuditResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodySignatureAuditResult::set_sign_before(v10, sign_beforea);
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodySignatureAuditResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySignatureAuditResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  PlayerSocialComp::getSignature[abi:cxx11](&value, thisa);
  proto_log::PlayerLogBodySignatureAuditResult::set_sign_after(v11, &value);
  std::string::~string(&value);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v28);
  v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
  is_audit_open = FeatureSwitchMgr::isSignatureAuditEnabled(&v12->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v28);
  v13 = std::__shared_ptr_access<proto_log::PlayerLogBodySignatureAuditResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySignatureAuditResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodySignatureAuditResult::set_is_audit_open(v13, is_audit_open);
  if ( is_audit_open )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v28);
    v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
    submit_limit = FeatureSwitchMgr::getMonthlySubmitSignatureLimit(&v14->feature_switch_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v28);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->signature_audit_data_.submit_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->signature_audit_data_.submit_count >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&thisa->signature_audit_data_.submit_count);
    }
    if ( submit_limit > thisa->signature_audit_data_.submit_count )
    {
      v15 = std::__shared_ptr_access<proto_log::PlayerLogBodySignatureAuditResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySignatureAuditResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->signature_audit_data_.submit_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)thisa + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->signature_audit_data_.submit_count >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&thisa->signature_audit_data_.submit_count);
      }
      proto_log::PlayerLogBodySignatureAuditResult::set_left_submit_count(
        v15,
        submit_limit - thisa->signature_audit_data_.submit_count);
    }
  }
  v16 = std::__shared_ptr_access<proto_log::PlayerLogBodySignatureAuditResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySignatureAuditResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodySignatureAuditResult::set_is_not_waiting(v16, is_not_waitinga);
  v17 = std::__shared_ptr_access<proto_log::PlayerLogBodySignatureAuditResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySignatureAuditResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodySignatureAuditResult::set_is_not_consistent(v17, is_not_consistenta);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->player_);
  player = thisa->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&v28, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodySignatureAuditResult,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodySignatureAuditResult> *)(v5 + 64));
  Player::printStatLog(player, &p_body_ptr, &v28, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v28);
  std::shared_ptr<proto_log::PlayerLogBodySignatureAuditResult>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodySignatureAuditResult> *const)(v5 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
  if ( v30 == (char *)v5 )
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

// Line 1797: range 0000000016D1FAE6-0000000016D1FBD9
void __cdecl PlayerSocialComp::onReadSignatureAudit(PlayerSocialComp *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  bool v2; // bl
  std::shared_ptr<Config> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v3);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  v2 = !FeatureSwitchMgr::isSignatureAuditEnabled(&v1->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(v3);
  if ( !v2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->signature_audit_data_.audit_state >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->signature_audit_data_.audit_state >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->signature_audit_data_.audit_state);
    }
    if ( this->signature_audit_data_.audit_state == 2 )
    {
      this->signature_audit_data_.audit_state = 0;
      std::string::operator=(&this->signature_audit_data_, byte_25E9A5A0);
    }
    PlayerSocialComp::notifySignatureAuditData(this);
  }
};

// Line 1812: range 0000000016D1FBDA-0000000016D1FCA2
std::string *__cdecl PlayerSocialComp::getAuditSignature[abi:cxx11](
        std::string *retstr,
        const PlayerSocialComp *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->signature_audit_data_.audit_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->signature_audit_data_.audit_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->signature_audit_data_.audit_state);
  }
  if ( this->signature_audit_data_.audit_state == 1 )
  {
    std::string::basic_string(retstr, &this->signature_audit_data_);
  }
  else
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(retstr, byte_25E9A5A0, &__a);
    std::allocator<char>::~allocator(&__a);
  }
  return retstr;
};

// Line 1821: range 0000000016D1FCA4-0000000016D1FD0B
void __cdecl PlayerSocialComp::setSignatureSubmitCountByGm(PlayerSocialComp *const this, uint32_t submit_count)
{
  bool v2; // dl

  v2 = *(_BYTE *)(((unsigned __int64)&this->signature_audit_data_.submit_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->signature_audit_data_.submit_count >> 3)
                                                       + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->signature_audit_data_.submit_count, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->signature_audit_data_.submit_count = submit_count;
  PlayerSocialComp::notifySignatureAuditData(this);
};

// Line 1827: range 0000000016D1FD0C-0000000016D20218
__int64 __fastcall PlayerSocialComp::shieldChatChannel(PlayerSocialComp *const this, uint32_t channel_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  __int64 result; // rax
  proto::ChatChannelInfo *channel; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-D0h] BYREF
  char v18[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 channel_id:1826 64 32 11 notify:1846";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::shieldChatChannel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = channel_id;
  if ( !proto::ChatChannel_IsValid(*(_DWORD *)(v2 + 48)) || *(_DWORD *)(v2 + 48) <= 1u )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.cpp",
      "shieldChatChannel",
      1831);
    v6 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v17,
           (const char (*)[49])"ChatChannel is invalid to be shield, channel_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v17);
    v7 = -1;
    goto LABEL_21;
  }
  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
         &this->shield_channel_set_,
         (const unsigned int *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.cpp",
      "shieldChatChannel",
      1836);
    v8 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v17,
           (const char (*)[59])"ChatChannel is already in shield_channel_set_, channel_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v9, (const char (*)[10])", player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_13:
    operator<<(v10, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v7 = -1;
    goto LABEL_21;
  }
  v11 = std::unordered_set<unsigned int>::insert(
          &this->shield_channel_set_,
          (const std::unordered_set<unsigned int>::value_type *)(v2 + 48));
  if ( !v11.second )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.cpp",
      "shieldChatChannel",
      1842);
    v12 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
            &v17,
            (const char (*)[45])"shield_channel_set_ insert fail, channel_id:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])", player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_13;
  }
  proto::ChatChannelInfoNotify::ChatChannelInfoNotify((proto::ChatChannelInfoNotify *const)(v2 + 64));
  channel = proto::ChatChannelInfoNotify::mutable_channel_info((proto::ChatChannelInfoNotify *const)(v2 + 64));
  proto::ChatChannelInfo::set_channel_id(channel, *(_DWORD *)(v2 + 48));
  proto::ChatChannelInfo::set_is_shield(channel, 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 64));
  common::milog::MiLogStream::create(
    &v17,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/social/player_social_comp.cpp",
    "shieldChatChannel",
    1852);
  v14 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          &v17,
          (const char (*)[32])"ChatChannel shield, channel_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream(&v17);
  v7 = 0;
  proto::ChatChannelInfoNotify::~ChatChannelInfoNotify((proto::ChatChannelInfoNotify *const)(v2 + 64));
LABEL_21:
  result = v7;
  if ( v18 == (char *)v2 )
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

// Line 1857: range 0000000016D2021A-0000000016D20579
__int64 __fastcall PlayerSocialComp::unshieldChatChannel(PlayerSocialComp *const this, uint32_t channel_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  proto::ChatChannelInfo *channel; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-D0h] BYREF
  char v12[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 channel_id:1856 64 32 11 notify:1865";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::unshieldChatChannel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = channel_id;
  if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
          &this->shield_channel_set_,
          (const unsigned int *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/social/player_social_comp.cpp",
      "unshieldChatChannel",
      1860);
    v5 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v11,
           (const char (*)[55])"ChatChannel is not in shield_channel_set_, channel_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v6, (const char (*)[10])", player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
  else
  {
    std::unordered_set<unsigned int>::erase(
      &this->shield_channel_set_,
      (const std::unordered_set<unsigned int>::key_type *)(v2 + 48));
    proto::ChatChannelInfoNotify::ChatChannelInfoNotify((proto::ChatChannelInfoNotify *const)(v2 + 64));
    channel = proto::ChatChannelInfoNotify::mutable_channel_info((proto::ChatChannelInfoNotify *const)(v2 + 64));
    proto::ChatChannelInfo::set_channel_id(channel, *(_DWORD *)(v2 + 48));
    proto::ChatChannelInfo::set_is_shield(channel, 0);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 64));
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/social/player_social_comp.cpp",
      "unshieldChatChannel",
      1871);
    v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v11,
           (const char (*)[34])"ChatChannel unshield, channel_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v11);
    proto::ChatChannelInfoNotify::~ChatChannelInfoNotify((proto::ChatChannelInfoNotify *const)(v2 + 64));
  }
  result = 0LL;
  if ( v12 == (char *)v2 )
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

// Line 1876: range 0000000016D2057A-0000000016D2064B
bool __fastcall PlayerSocialComp::isChannelShield(PlayerSocialComp *const this, uint32_t channel_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 channel_id:1875";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::isChannelShield;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = channel_id;
  result = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
             &this->shield_channel_set_,
             (const unsigned int *)(v2 + 32));
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
