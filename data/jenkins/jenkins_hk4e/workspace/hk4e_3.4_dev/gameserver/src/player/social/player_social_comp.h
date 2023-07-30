// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/social/player_social_comp.h

// Line 29: range 00000000180AD128-00000000180AD150
ChatEmojiCollection *__cdecl ChatEmojiCollection::operator=(
        ChatEmojiCollection *const this,
        const ChatEmojiCollection *a2)
{
  std::vector<unsigned int>::operator=(&this->emoji_id_vec, &a2->emoji_id_vec);
  return this;
};

// Line 29: range 0000000017480C8A-0000000017480CA4
void __cdecl ChatEmojiCollection::ChatEmojiCollection(ChatEmojiCollection *const this)
{
  std::vector<unsigned int>::vector(&this->emoji_id_vec);
};

// Line 29: range 00000000170939C6-00000000170939E0
void __cdecl ChatEmojiCollection::~ChatEmojiCollection(ChatEmojiCollection *const this)
{
  std::vector<unsigned int>::~vector(&this->emoji_id_vec);
};

// Line 36: range 0000000017093BA6-0000000017093BD0
void __cdecl PlayerSocialComp::~PlayerSocialComp(PlayerSocialComp *const this)
{
  PlayerSocialComp::~PlayerSocialComp(this);
  operator delete(this, 0x440uLL);
};

// Line 36: range 00000000170939E2-0000000017093BA5
void __cdecl PlayerSocialComp::~PlayerSocialComp(PlayerSocialComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerSocialComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::unordered_set<unsigned int>::~unordered_set(&this->shield_channel_set_);
  ChatEmojiCollection::~ChatEmojiCollection(&this->chat_emoji_collection_);
  std::vector<unsigned int>::~vector(&this->show_name_card_id_vec_);
  std::vector<unsigned int>::~vector(&this->show_avatar_id_vec_);
  std::unordered_map<unsigned int,std::string>::~unordered_map(&this->friend_remark_name_map_);
  std::list<unsigned int>::~list(&this->recent_mp_player_uid_list_);
  proto::Birthday::~Birthday(&this->birthday_);
  ContentAuditData::~ContentAuditData(&this->signature_audit_data_);
  std::string::~string(&this->signature_);
  std::unordered_map<unsigned int,proto::FriendBrief>::~unordered_map(&this->friend_brief_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->recent_mp_player_uid_set_);
  std::unordered_set<unsigned int>::~unordered_set(&this->psn_blacklist_set_);
  std::unordered_set<unsigned int>::~unordered_set(&this->blacklist_set_);
  std::unordered_set<unsigned int>::~unordered_set(&this->unlock_name_card_set_);
  std::unordered_set<unsigned int>::~unordered_set(&this->psn_friend_set_);
  std::unordered_set<unsigned int>::~unordered_set(&this->friend_set_);
  std::vector<unsigned int>::~vector(&this->ask_add_friend_vec_);
  std::unordered_set<unsigned int>::~unordered_set(&this->pending_ask_friend_uid_set_);
  std::weak_ptr<Observer>::~weak_ptr(&this->enter_mp_event_observer_);
  PlayerUnixTimer::~PlayerUnixTimer(&this->birthday_timer_);
  PlayerUnixTimer::~PlayerUnixTimer(&this->request_friend_list_timer_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 39: range 0000000017213FDB-0000000017213FE5
uint32_t __cdecl PlayerSocialComp::getType()
{
  return 26;
};

// Line 60: range 0000000017480CA6-0000000017481623
void __cdecl ZN16PlayerSocialCompCI214PlayerCompBaseER6Player(PlayerSocialComp *const this, Player *a2)
{
  int (**v2)(...); // rdx
  PlayerSocialComp **v3; // r8
  const std::_Placeholder<1> *v4; // r9
  PlayerSocialComp **v5; // r8
  const std::_Placeholder<1> *v6; // r9
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  bool v12; // dl
  __int64 v13; // rsi
  bool v14; // dl
  __int64 v15; // rsi
  bool v16; // dl
  std::allocator<char> __a; // [rsp+1Fh] [rbp-91h] BYREF
  PlayerSocialComp *v18; // [rsp+20h] [rbp-90h] BYREF
  PlayerSocialComp *v19; // [rsp+28h] [rbp-88h] BYREF
  void (*__f[2])(PlayerSocialComp *, unsigned int); // [rsp+30h] [rbp-80h] BYREF
  PlayerPtr v21; // [rsp+40h] [rbp-70h] BYREF
  PlayerPtr p_player_ptr; // [rsp+50h] [rbp-60h] BYREF
  std::_Bind_helper<false,void (PlayerSocialComp::*)(unsigned int),PlayerSocialComp*,const std::_Placeholder<1>&>::type p___f; // [rsp+60h] [rbp-50h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+80h] [rbp-30h] BYREF

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerSocialComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  toPtr<Player,Player>((Player *)&p_player_ptr);
  v18 = this;
  __f[0] = (void (*)(PlayerSocialComp *, unsigned int))PlayerSocialComp::onRequestFriendListTimer;
  __f[1] = 0LL;
  std::bind<void (PlayerSocialComp::*)(unsigned int),PlayerSocialComp*,std::_Placeholder<1> const&>(
    &p___f,
    __f,
    &v18,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v3,
    v4);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (PlayerSocialComp::*)(unsigned int) ()(PlayerSocialComp*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerUnixTimer::PlayerUnixTimer(&this->request_friend_list_timer_, &p_player_ptr, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  toPtr<Player,Player>((Player *)&v21);
  v19 = this;
  p_player_ptr._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)PlayerSocialComp::onBirthdayTimer;
  p_player_ptr._M_refcount._M_pi = 0LL;
  std::bind<void (PlayerSocialComp::*)(unsigned int),PlayerSocialComp*,std::_Placeholder<1> const&>(
    &p___f,
    (void (**)(PlayerSocialComp *, unsigned int))&p_player_ptr,
    &v19,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v5,
    v6);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (PlayerSocialComp::*)(unsigned int) ()(PlayerSocialComp*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerUnixTimer::PlayerUnixTimer(&this->birthday_timer_, &v21, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&v21);
  std::weak_ptr<Observer>::weak_ptr(&this->enter_mp_event_observer_);
  std::unordered_set<unsigned int>::unordered_set(&this->pending_ask_friend_uid_set_);
  std::vector<unsigned int>::vector(&this->ask_add_friend_vec_);
  std::unordered_set<unsigned int>::unordered_set(&this->friend_set_);
  std::unordered_set<unsigned int>::unordered_set(&this->psn_friend_set_);
  std::unordered_set<unsigned int>::unordered_set(&this->unlock_name_card_set_);
  std::unordered_set<unsigned int>::unordered_set(&this->blacklist_set_);
  std::unordered_set<unsigned int>::unordered_set(&this->psn_blacklist_set_);
  std::unordered_set<unsigned int>::unordered_set(&this->recent_mp_player_uid_set_);
  std::unordered_map<unsigned int,proto::FriendBrief>::unordered_map(&this->friend_brief_map_);
  if ( *(char *)(((unsigned __int64)&this->is_need_notify_info_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_need_notify_info_, &v21, &this->is_need_notify_info_);
  this->is_need_notify_info_ = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&this->signature_, byte_25FB4240, &__a);
  std::allocator<char>::~allocator(&__a);
  ContentAuditData::ContentAuditData(&this->signature_audit_data_);
  proto::Birthday::Birthday(&this->birthday_);
  if ( *(_BYTE *)(((unsigned __int64)&this->name_card_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->name_card_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->name_card_id_, byte_25FB4240, (_BYTE)this + 48);
  }
  this->name_card_id_ = 0;
  std::list<unsigned int>::list(&this->recent_mp_player_uid_list_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_grant_benefit_year_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_grant_benefit_year_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_grant_benefit_year_, byte_25FB4240, (_BYTE)this + 80);
  }
  this->last_grant_benefit_year_ = 0;
  v7 = ((_BYTE)this + 84) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->is_login_on_birthday_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_login_on_birthday_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_login_on_birthday_, v7, v8);
  this->is_login_on_birthday_ = 0;
  v9 = ((_BYTE)this + 85) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->is_has_first_share_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->is_has_first_share_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_has_first_share_, v9, v10);
  this->is_has_first_share_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->report_during_last_time_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->report_during_last_time_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->report_during_last_time_count_, v9, (_BYTE)this + 88);
  }
  this->report_during_last_time_count_ = 0;
  v11 = (((_BYTE)this + 92) & 7u) + 3;
  v12 = *(_BYTE *)(((unsigned __int64)&this->report_next_limit_time_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->report_next_limit_time_ >> 3)
                                                         + 0x7FFF8000);
  if ( v12 )
    __asan_report_store4(&this->report_next_limit_time_, v11, v12);
  this->report_next_limit_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->next_report_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->next_report_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->next_report_time_, v11, (_BYTE)this + 96);
  }
  this->next_report_time_ = 0;
  v13 = (((_BYTE)this + 100) & 7u) + 3;
  v14 = *(_BYTE *)(((unsigned __int64)&this->cur_day_social_request_num_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_day_social_request_num_ >> 3)
                                                          + 0x7FFF8000);
  if ( v14 )
    __asan_report_store4(&this->cur_day_social_request_num_, v13, v14);
  this->cur_day_social_request_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_clear_social_request_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_clear_social_request_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_clear_social_request_time_, v13, (_BYTE)this + 104);
  }
  this->last_clear_social_request_time_ = 0;
  std::unordered_map<unsigned int,std::string>::unordered_map(&this->friend_remark_name_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_day_ask_friend_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_day_ask_friend_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_day_ask_friend_num_, v13, (_BYTE)this - 88);
  }
  this->cur_day_ask_friend_num_ = 0;
  v15 = (((_BYTE)this - 84) & 7u) + 3;
  v16 = *(_BYTE *)(((unsigned __int64)&this->last_ask_friend_time_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_ask_friend_time_ >> 3)
                                                         + 0x7FFF8000);
  if ( v16 )
    __asan_report_store4(&this->last_ask_friend_time_, v15, v16);
  this->last_ask_friend_time_ = 0;
  std::vector<unsigned int>::vector(&this->show_avatar_id_vec_);
  if ( *(char *)(((unsigned __int64)&this->is_show_avatar_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_show_avatar_, v15, &this->is_show_avatar_);
  this->is_show_avatar_ = 0;
  std::vector<unsigned int>::vector(&this->show_name_card_id_vec_);
  ChatEmojiCollection::ChatEmojiCollection(&this->chat_emoji_collection_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_req_friend_avatar_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_req_friend_avatar_time_, v15);
  this->last_req_friend_avatar_time_ = 0LL;
  std::unordered_set<unsigned int>::unordered_set(&this->shield_channel_set_);
};

// Line 73: range 00000000131E8DA6-00000000131E8EAA
_BOOL8 __fastcall PlayerSocialComp::isPlayerFriend(PlayerSocialComp *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  _BOOL8 result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 6 uid:73";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::isPlayerFriend;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  result = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
             &this->friend_set_,
             (const unsigned int *)(v2 + 32))
        || common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
             &this->psn_friend_set_,
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

// Line 74: range 0000000016D627C4-0000000016D62895
bool __fastcall PlayerSocialComp::isPlayerGameFriend(PlayerSocialComp *const this, uint32_t uid)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 6 uid:74";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::isPlayerGameFriend;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  result = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
             &this->friend_set_,
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

// Line 75: range 0000000016D62896-0000000016D62967
bool __fastcall PlayerSocialComp::isPlayerPSNFriend(PlayerSocialComp *const this, uint32_t uid)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 6 uid:75";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::isPlayerPSNFriend;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  result = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
             &this->psn_friend_set_,
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

// Line 79: range 000000001690A60A-000000001690A70E
_BOOL8 __fastcall PlayerSocialComp::isPlayerInBlacklist(PlayerSocialComp *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  _BOOL8 result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 6 uid:79";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::isPlayerInBlacklist;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  result = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
             &this->blacklist_set_,
             (const unsigned int *)(v2 + 32))
        || common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
             &this->psn_blacklist_set_,
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

// Line 81: range 00000000180AD026-00000000180AD0F7
bool __fastcall PlayerSocialComp::isPlayerInPSBlacklist(PlayerSocialComp *const this, uint32_t uid)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 6 uid:81";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::isPlayerInPSBlacklist;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  result = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
             &this->psn_blacklist_set_,
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

// Line 131: range 0000000016D62968-0000000016D62A39
bool __fastcall PlayerSocialComp::isNameCardUnlocked(PlayerSocialComp *const this, uint32_t name_card_id)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 16 name_card_id:131";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::isNameCardUnlocked;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = name_card_id;
  result = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
             &this->unlock_name_card_set_,
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

// Line 131: range 0000000016D62A3A-0000000016D62A95
bool __cdecl PlayerSocialComp::isHasFirstShare(const PlayerSocialComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_has_first_share_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 85) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_has_first_share_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_has_first_share_);
  }
  return this->is_has_first_share_;
};

// Line 158: range 0000000016D62A96-0000000016D62AF7
void __cdecl PlayerSocialComp::addSocialRequestNum(PlayerSocialComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_day_social_request_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_day_social_request_num_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_day_social_request_num_);
  }
  ++this->cur_day_social_request_num_;
};

// Line 169: range 0000000017213FE6-0000000017214015
std::vector<unsigned int> *__cdecl PlayerSocialComp::getShowAvatarVec(
        std::vector<unsigned int> *retstr,
        PlayerSocialComp *const this)
{
  std::vector<unsigned int>::vector(retstr, &this->show_avatar_id_vec_);
  return retstr;
};

// Line 170: range 00000000180AD0F8-00000000180AD127
std::vector<unsigned int> *__cdecl PlayerSocialComp::getShowNameCardIdVec(
        std::vector<unsigned int> *retstr,
        PlayerSocialComp *const this)
{
  std::vector<unsigned int>::vector(retstr, &this->show_name_card_id_vec_);
  return retstr;
};

// Line 172: range 00000000180AD152-00000000180AD17D
void __cdecl PlayerSocialComp::setChatEmojiCollection(
        PlayerSocialComp *const this,
        const ChatEmojiCollection *chat_emoji_collection)
{
  ChatEmojiCollection::operator=(&this->chat_emoji_collection_, chat_emoji_collection);
};

// Line 173: range 00000000180AD17E-00000000180AD191
const ChatEmojiCollection *__cdecl PlayerSocialComp::getChatEmojiCollection(const PlayerSocialComp *const this)
{
  return &this->chat_emoji_collection_;
};

// Line 222: range 0000000016D62AF8-0000000016D62B27
std::string *__cdecl PlayerSocialComp::getSignature[abi:cxx11](std::string *retstr, const PlayerSocialComp *const this)
{
  std::string::basic_string(retstr, &this->signature_);
  return retstr;
};

// Line 222: range 0000000016D62B28-0000000016D62B74
uint32_t __cdecl PlayerSocialComp::getNameCardId(const PlayerSocialComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->name_card_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->name_card_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->name_card_id_);
  }
  return this->name_card_id_;
};

// Line 228: range 000000001518A6E4-000000001518A736
bool __cdecl PlayerSocialComp::getIsLoginOnBirthday(const PlayerSocialComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_login_on_birthday_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_login_on_birthday_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_login_on_birthday_);
  }
  return this->is_login_on_birthday_;
};

// Line 228: range 0000000017D69002-0000000017D6905D
void __cdecl PlayerSocialComp::setIsLoginOnBirthday(PlayerSocialComp *const this, bool is_login_on_birthday__out)
{
  __int64 v2; // rsi
  __int64 v3; // rdx

  v2 = ((_BYTE)this + 84) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_login_on_birthday_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_login_on_birthday_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_login_on_birthday_, v2, v3);
  this->is_login_on_birthday_ = is_login_on_birthday__out;
};

// Line 232: range 00000000180AD192-00000000180AD1DE
uint32_t __cdecl PlayerSocialComp::getNextReportTime(const PlayerSocialComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->next_report_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->next_report_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->next_report_time_);
  }
  return this->next_report_time_;
};

// Line 242: range 00000000180AD1E0-00000000180AD21F
uint64_t __cdecl PlayerSocialComp::getLastReqFriendAvatarTime(const PlayerSocialComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_req_friend_avatar_time_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_req_friend_avatar_time_);
  return this->last_req_friend_avatar_time_;
};

// Line 242: range 00000000180AD220-00000000180AD268
void __cdecl PlayerSocialComp::setLastReqFriendAvatarTime(
        PlayerSocialComp *const this,
        uint64_t last_req_friend_avatar_time__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_req_friend_avatar_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_req_friend_avatar_time_, last_req_friend_avatar_time__out);
  this->last_req_friend_avatar_time_ = last_req_friend_avatar_time__out;
};

// Line 248: range 0000000017D3BB70-0000000017D3BEA2
int32_t __cdecl sendProtoToSocialService<proto::ForceAddPlayerFriendReq>(
        Player *player,
        proto::ForceAddPlayerFriendReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ForceAddPlayerFriendReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ForceAddPlayerFriendReq>((const proto::ForceAddPlayerFriendReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 00000000137DAF6E-00000000137DB2A0
int32_t __cdecl sendProtoToSocialService<proto::ServerActivityGetFriendGiftDataReq>(
        Player *player,
        proto::ServerActivityGetFriendGiftDataReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerActivityGetFriendGiftDataReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerActivityGetFriendGiftDataReq>((const proto::ServerActivityGetFriendGiftDataReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 00000000137DB2A1-00000000137DB5D3
int32_t __cdecl sendProtoToSocialService<proto::ServerActivityGetFriendGiftWishListReq>(
        Player *player,
        proto::ServerActivityGetFriendGiftWishListReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerActivityGetFriendGiftWishListReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerActivityGetFriendGiftWishListReq>((const proto::ServerActivityGetFriendGiftWishListReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 0000000018078DB4-00000000180790E6
int32_t __cdecl sendProtoToSocialService<proto::ServerAddBlacklistReq>(
        Player *player,
        proto::ServerAddBlacklistReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerAddBlacklistReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerAddBlacklistReq>((const proto::ServerAddBlacklistReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 0000000016D2F153-0000000016D2F485
int32_t __cdecl sendProtoToSocialService<proto::ServerAddFriendAskByMuipReq>(
        Player *player,
        proto::ServerAddFriendAskByMuipReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerAddFriendAskByMuipReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerAddFriendAskByMuipReq>((const proto::ServerAddFriendAskByMuipReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 0000000016D2EAED-0000000016D2EE1F
int32_t __cdecl sendProtoToSocialService<proto::ServerAddFriendByMuipReq>(
        Player *player,
        proto::ServerAddFriendByMuipReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerAddFriendByMuipReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerAddFriendByMuipReq>((const proto::ServerAddFriendByMuipReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 0000000016D2E7BA-0000000016D2EAEC
int32_t __cdecl sendProtoToSocialService<proto::ServerAddPsnBlackReq>(
        Player *player,
        proto::ServerAddPsnBlackReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerAddPsnBlackReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerAddPsnBlackReq>((const proto::ServerAddPsnBlackReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 0000000017D3C1D6-0000000017D3C508
int32_t __cdecl sendProtoToSocialService<proto::ServerAddPsnBlackReq>(
        Player *player,
        proto::ServerAddPsnBlackReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerAddPsnBlackReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerAddPsnBlackReq>((const proto::ServerAddPsnBlackReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 0000000017D3BEA3-0000000017D3C1D5
int32_t __cdecl sendProtoToSocialService<proto::ServerAddPsnFriendReq>(
        Player *player,
        proto::ServerAddPsnFriendReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerAddPsnFriendReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerAddPsnFriendReq>((const proto::ServerAddPsnFriendReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 0000000016D2E487-0000000016D2E7B9
int32_t __cdecl sendProtoToSocialService<proto::ServerAddPsnFriendReq>(
        Player *player,
        proto::ServerAddPsnFriendReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerAddPsnFriendReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerAddPsnFriendReq>((const proto::ServerAddPsnFriendReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 0000000016D2DAEE-0000000016D2DE20
int32_t __cdecl sendProtoToSocialService<proto::ServerAskAddFriendReq>(
        Player *player,
        proto::ServerAskAddFriendReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerAskAddFriendReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerAskAddFriendReq>((const proto::ServerAskAddFriendReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 00000000137D9DA1-00000000137DA0D3
int32_t __cdecl sendProtoToSocialService<proto::ServerBlessingGetFriendPicListReq>(
        Player *player,
        proto::ServerBlessingGetFriendPicListReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerBlessingGetFriendPicListReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerBlessingGetFriendPicListReq>((const proto::ServerBlessingGetFriendPicListReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 000000001807833D-000000001807866F
int32_t __cdecl sendProtoToSocialService<proto::ServerDealAddFriendReq>(
        Player *player,
        proto::ServerDealAddFriendReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerDealAddFriendReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerDealAddFriendReq>((const proto::ServerDealAddFriendReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 0000000016D2F486-0000000016D2F7B8
int32_t __cdecl sendProtoToSocialService<proto::ServerDelFriendAskByMuipReq>(
        Player *player,
        proto::ServerDelFriendAskByMuipReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerDelFriendAskByMuipReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerDelFriendAskByMuipReq>((const proto::ServerDelFriendAskByMuipReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 0000000016D2EE20-0000000016D2F152
int32_t __cdecl sendProtoToSocialService<proto::ServerDelFriendByMuipReq>(
        Player *player,
        proto::ServerDelFriendByMuipReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerDelFriendByMuipReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerDelFriendByMuipReq>((const proto::ServerDelFriendByMuipReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 0000000018078670-00000000180789A2
int32_t __cdecl sendProtoToSocialService<proto::ServerDeleteFriendReq>(
        Player *player,
        proto::ServerDeleteFriendReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerDeleteFriendReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerDeleteFriendReq>((const proto::ServerDeleteFriendReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 0000000016D2DE21-0000000016D2E153
int32_t __cdecl sendProtoToSocialService<proto::ServerDeleteFriendReq>(
        Player *player,
        proto::ServerDeleteFriendReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerDeleteFriendReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerDeleteFriendReq>((const proto::ServerDeleteFriendReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 0000000016D2D155-0000000016D2D487
int32_t __cdecl sendProtoToSocialService<proto::ServerGetAskFriendBriefReq>(
        Player *player,
        proto::ServerGetAskFriendBriefReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerGetAskFriendBriefReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerGetAskFriendBriefReq>((const proto::ServerGetAskFriendBriefReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 00000000137DA0D4-00000000137DA406
int32_t __cdecl sendProtoToSocialService<proto::ServerGetFriendBriefReq>(
        Player *player,
        proto::ServerGetFriendBriefReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerGetFriendBriefReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerGetFriendBriefReq>((const proto::ServerGetFriendBriefReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 0000000017D3CDF3-0000000017D3D125
int32_t __cdecl sendProtoToSocialService<proto::ServerGetFriendEnterHomeOptionReq>(
        Player *player,
        proto::ServerGetFriendEnterHomeOptionReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerGetFriendEnterHomeOptionReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerGetFriendEnterHomeOptionReq>((const proto::ServerGetFriendEnterHomeOptionReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 000000001807A04B-000000001807A37D
int32_t __cdecl sendProtoToSocialService<proto::ServerGetFriendShowAvatarInfoReq>(
        Player *player,
        proto::ServerGetFriendShowAvatarInfoReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerGetFriendShowAvatarInfoReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerGetFriendShowAvatarInfoReq>((const proto::ServerGetFriendShowAvatarInfoReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 000000001807A37E-000000001807A6B0
int32_t __cdecl sendProtoToSocialService<proto::ServerGetFriendShowNameCardInfoReq>(
        Player *player,
        proto::ServerGetFriendShowNameCardInfoReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerGetFriendShowNameCardInfoReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerGetFriendShowNameCardInfoReq>((const proto::ServerGetFriendShowNameCardInfoReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 0000000016D2D7BB-0000000016D2DAED
int32_t __cdecl sendProtoToSocialService<proto::ServerGetPlayerBlacklistReq>(
        Player *player,
        proto::ServerGetPlayerBlacklistReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerGetPlayerBlacklistReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerGetPlayerBlacklistReq>((const proto::ServerGetPlayerBlacklistReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 0000000016D2CE22-0000000016D2D154
int32_t __cdecl sendProtoToSocialService<proto::ServerGetPlayerFriendBriefReq>(
        Player *player,
        proto::ServerGetPlayerFriendBriefReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerGetPlayerFriendBriefReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerGetPlayerFriendBriefReq>((const proto::ServerGetPlayerFriendBriefReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 0000000016D2CAEF-0000000016D2CE21
int32_t __cdecl sendProtoToSocialService<proto::ServerGetPlayerFriendListReq>(
        Player *player,
        proto::ServerGetPlayerFriendListReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerGetPlayerFriendListReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerGetPlayerFriendListReq>((const proto::ServerGetPlayerFriendListReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 0000000016D2D488-0000000016D2D7BA
int32_t __cdecl sendProtoToSocialService<proto::ServerGetRecentMpPlayerListReq>(
        Player *player,
        proto::ServerGetRecentMpPlayerListReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerGetRecentMpPlayerListReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerGetRecentMpPlayerListReq>((const proto::ServerGetRecentMpPlayerListReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 000000001807800A-000000001807833C
int32_t __cdecl sendProtoToSocialService<proto::ServerGetSocialDetailReq>(
        Player *player,
        proto::ServerGetSocialDetailReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerGetSocialDetailReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerGetSocialDetailReq>((const proto::ServerGetSocialDetailReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 0000000016D291A9-0000000016D294DB
int32_t __cdecl sendProtoToSocialService<proto::ServerPlantFlowerGetFriendFlowerDataReq>(
        Player *player,
        proto::ServerPlantFlowerGetFriendFlowerDataReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerPlantFlowerGetFriendFlowerDataReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerPlantFlowerGetFriendFlowerDataReq>((const proto::ServerPlantFlowerGetFriendFlowerDataReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 00000000137DA5D5-00000000137DA907
int32_t __cdecl sendProtoToSocialService<proto::ServerPlantFlowerGetFriendFlowerWishListReq>(
        Player *player,
        proto::ServerPlantFlowerGetFriendFlowerWishListReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerPlantFlowerGetFriendFlowerWishListReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerPlantFlowerGetFriendFlowerWishListReq>((const proto::ServerPlantFlowerGetFriendFlowerWishListReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 0000000016D2E154-0000000016D2E486
int32_t __cdecl sendProtoToSocialService<proto::ServerPrivateChatReq>(
        Player *player,
        proto::ServerPrivateChatReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerPrivateChatReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerPrivateChatReq>((const proto::ServerPrivateChatReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 00000000180795D5-0000000018079907
int32_t __cdecl sendProtoToSocialService<proto::ServerPullPrivateChatReq>(
        Player *player,
        proto::ServerPullPrivateChatReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerPullPrivateChatReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerPullPrivateChatReq>((const proto::ServerPullPrivateChatReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 0000000018079908-0000000018079C3A
int32_t __cdecl sendProtoToSocialService<proto::ServerPullRecentChatReq>(
        Player *player,
        proto::ServerPullRecentChatReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerPullRecentChatReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerPullRecentChatReq>((const proto::ServerPullRecentChatReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 0000000018079C3B-0000000018079F6D
int32_t __cdecl sendProtoToSocialService<proto::ServerReadPrivateChatReq>(
        Player *player,
        proto::ServerReadPrivateChatReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerReadPrivateChatReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerReadPrivateChatReq>((const proto::ServerReadPrivateChatReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 00000000180790E7-0000000018079419
int32_t __cdecl sendProtoToSocialService<proto::ServerRemoveBlacklistReq>(
        Player *player,
        proto::ServerRemoveBlacklistReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerRemoveBlacklistReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerRemoveBlacklistReq>((const proto::ServerRemoveBlacklistReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 0000000016D29697-0000000016D299C9
int32_t __cdecl sendProtoToSocialService<proto::ServerUpdateActivitySocialDataNotify>(
        Player *player,
        proto::ServerUpdateActivitySocialDataNotify *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerUpdateActivitySocialDataNotify>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerUpdateActivitySocialDataNotify>((const proto::ServerUpdateActivitySocialDataNotify *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 00000000171EB505-00000000171EB837
int32_t __cdecl sendProtoToSocialService<proto::ServerUpdateShowAvatarInfoNotify>(
        Player *player,
        proto::ServerUpdateShowAvatarInfoNotify *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerUpdateShowAvatarInfoNotify>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerUpdateShowAvatarInfoNotify>((const proto::ServerUpdateShowAvatarInfoNotify *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 00000000137DAC3B-00000000137DAF6D
int32_t __cdecl sendProtoToSocialService<proto::ServerWinterCampGetFriendItemDataReq>(
        Player *player,
        proto::ServerWinterCampGetFriendItemDataReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerWinterCampGetFriendItemDataReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerWinterCampGetFriendItemDataReq>((const proto::ServerWinterCampGetFriendItemDataReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 00000000137DA908-00000000137DAC3A
int32_t __cdecl sendProtoToSocialService<proto::ServerWinterCampGetFriendWishListReq>(
        Player *player,
        proto::ServerWinterCampGetFriendWishListReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::ServerWinterCampGetFriendWishListReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerWinterCampGetFriendWishListReq>((const proto::ServerWinterCampGetFriendWishListReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 0000000018078A81-0000000018078DB3
int32_t __cdecl sendProtoToSocialService<proto::SeverGetPS4FriendUidReq>(
        Player *player,
        proto::SeverGetPS4FriendUidReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::SeverGetPS4FriendUidReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::SeverGetPS4FriendUidReq>((const proto::SeverGetPS4FriendUidReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 00000000168DDBE1-00000000168DDF13
int32_t __cdecl sendProtoToSocialService<proto::SeverGetPS4FriendUidReq>(
        Player *player,
        proto::SeverGetPS4FriendUidReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::SeverGetPS4FriendUidReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::SeverGetPS4FriendUidReq>((const proto::SeverGetPS4FriendUidReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 00000000171EB9B9-00000000171EBCEB
int32_t __cdecl sendProtoToSocialService<proto::SyncPlayerBriefNotify>(
        Player *player,
        proto::SyncPlayerBriefNotify *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::SyncPlayerBriefNotify>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::SyncPlayerBriefNotify>((const proto::SyncPlayerBriefNotify *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 248: range 00000000171EBCEC-00000000171EC01E
int32_t __cdecl sendProtoToSocialService<proto::SyncPlayerIpRegionNotify>(
        Player *player,
        proto::SyncPlayerIpRegionNotify *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  GameserverService *v8; // r14
  common::minet::Packet *v9; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:250";
  *(_QWORD *)(v2 + 16) = sendProtoToSocialService<proto::SyncPlayerIpRegionNotify>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::SyncPlayerIpRegionNotify>((const proto::SyncPlayerIpRegionNotify *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/social/player_social_comp.h",
      "sendProtoToSocialService",
      253);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Social] createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v8, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v9, Uid);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v11, 0xFu);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v5 = v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 2955: range 00000000180ACF54-00000000180AD025
bool __fastcall PlayerSocialComp::isPlayerInGameBlacklist(PlayerSocialComp *const this, uint32_t uid)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 6 uid:80";
  *(_QWORD *)(v2 + 16) = PlayerSocialComp::isPlayerInGameBlacklist;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  result = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
             &this->blacklist_set_,
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
