// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/card_game/player_gcg_comp.h

// Line 48: range 0000000015190D36-00000000151911B5
std::string *__cdecl GCGEnterCheckOption::getDesc[abi:cxx11](std::string *retstr, GCGEnterCheckOption *const this)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  __int64 v5; // rcx
  char v7[544]; // [rsp+10h] [rbp-220h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 392 5 ss:50";
  *(_QWORD *)(v2 + 16) = GCGEnterCheckOption::getDesc[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862733] = -218103808;
  v4[536862734] = -202116109;
  v4[536862735] = -202116109;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v2 + 48);
  v5 = std::operator<<<std::char_traits<char>>(v2 + 64, " [option:");
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  std::ostream::operator<<(v5, this->level_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_ignore_deck >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ignore_deck >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_ignore_deck);
  }
  if ( this->is_ignore_deck )
    std::operator<<<std::char_traits<char>>(v2 + 64, "|is_ignore_deck");
  if ( *(_BYTE *)(((unsigned __int64)&this->is_ignore_match >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ignore_match >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_ignore_match);
  }
  if ( this->is_ignore_match )
    std::operator<<<std::char_traits<char>>(v2 + 64, "|is_ignore_match");
  if ( *(_BYTE *)(((unsigned __int64)&this->is_ignore_self_world >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 6) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ignore_self_world >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_ignore_self_world);
  }
  if ( this->is_ignore_self_world )
    std::operator<<<std::char_traits<char>>(v2 + 64, "|is_ignore_self_world");
  if ( *(_BYTE *)(((unsigned __int64)&this->is_check_tavern >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 7) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_check_tavern >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_check_tavern);
  }
  if ( this->is_check_tavern )
    std::operator<<<std::char_traits<char>>(v2 + 64, "|is_check_tavern");
  if ( *(_BYTE *)(((unsigned __int64)&this->is_in_gcg_dungeon >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_gcg_dungeon >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_in_gcg_dungeon);
  }
  if ( this->is_in_gcg_dungeon )
    std::operator<<<std::char_traits<char>>(v2 + 64, "|is_in_gcg_dungeon");
  std::operator<<<std::char_traits<char>>(v2 + 64, "] ");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(retstr, v2 + 48);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v2 + 48);
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF803C) = 0;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 71: range 0000000016991E66-0000000016991F33
void __cdecl GCGPlayerBriefInfo::GCGPlayerBriefInfo(GCGPlayerBriefInfo *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->controller_id = 0;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->uid, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->uid = 0;
  std::string::basic_string(&this->nick_name);
  ProfilePicture::ProfilePicture(&this->profile_picture);
  std::vector<unsigned int>::vector(&this->card_id_vec);
  std::map<unsigned int,unsigned int>::map(&this->card_face_map);
};

// Line 71: range 0000000016B4B47E-0000000016B4B62B
void __cdecl GCGPlayerBriefInfo::GCGPlayerBriefInfo(GCGPlayerBriefInfo *const this, GCGPlayerBriefInfo *a2)
{
  uint32_t controller_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t uid; // ecx
  char v6; // dl
  __int64 v7; // rdx
  GCGPlayerBriefInfo *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  controller_id = a2->controller_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, this);
  }
  this->controller_id = controller_id;
  v4 = (((_BYTE)v8 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->uid);
  }
  uid = v8->uid;
  v6 = *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->uid, v4, v7);
  this->uid = uid;
  std::string::basic_string(&this->nick_name, &v8->nick_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->profile_picture >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->profile_picture, &v8->nick_name);
  if ( *(_BYTE *)(((unsigned __int64)&v8->profile_picture >> 3) + 0x7FFF8000) )
    __asan_report_load8(&v8->profile_picture);
  this->profile_picture = v8->profile_picture;
  std::vector<unsigned int>::vector(&this->card_id_vec, &v8->card_id_vec);
  std::map<unsigned int,unsigned int>::map(&this->card_face_map, &v8->card_face_map);
};

// Line 71: range 00000000169C1C08-00000000169C1C46
void __cdecl GCGPlayerBriefInfo::~GCGPlayerBriefInfo(GCGPlayerBriefInfo *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->card_face_map);
  std::vector<unsigned int>::~vector(&this->card_id_vec);
  std::string::~string(&this->nick_name);
};

// Line 95: range 000000001748F9BC-000000001748FB61
void __cdecl GCGGameBriefInfo::GCGGameBriefInfo(GCGGameBriefInfo *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->game_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->game_uid >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->game_uid >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->game_uid, v2, v3);
  this->game_uid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->business_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->business_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->business_type, v2, &this->business_type);
  }
  this->business_type = GCG_GAME_NONE;
  v4 = (((_BYTE)this + 12) & 7u) + 3;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->app_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->app_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->app_id, v4, v5);
  this->app_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->thread_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->thread_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->thread_index, v4, &this->thread_index);
  }
  this->thread_index = 0;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->verify_code >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->verify_code >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->verify_code, (((_BYTE)this + 20) & 7u) + 3, v6);
  this->verify_code = 0;
  std::vector<GCGPlayerBriefInfo>::vector(&this->player_brief_vec);
};

// Line 95: range 000000001748FB62-000000001748FB80
void __cdecl GCGGameBriefInfo::~GCGGameBriefInfo(GCGGameBriefInfo *const this)
{
  std::vector<GCGPlayerBriefInfo>::~vector(&this->player_brief_vec);
};

// Line 101: range 000000001690FA42-000000001690FBE7
void __cdecl GCGGameBriefInfo::reset(GCGGameBriefInfo *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->game_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->game_uid >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->game_uid >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->game_uid, v2, v3);
  this->game_uid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->business_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->business_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->business_type, v2, &this->business_type);
  }
  this->business_type = GCG_GAME_NONE;
  v4 = (((_BYTE)this + 12) & 7u) + 3;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->app_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->app_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->app_id, v4, v5);
  this->app_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->thread_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->thread_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->thread_index, v4, &this->thread_index);
  }
  this->thread_index = 0;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->verify_code >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->verify_code >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->verify_code, (((_BYTE)this + 20) & 7u) + 3, v6);
  this->verify_code = 0;
  std::vector<GCGPlayerBriefInfo>::clear(&this->player_brief_vec);
};

// Line 131: range 000000001788749A-0000000017887585
void __cdecl PlayerGCGComp::~PlayerGCGComp(PlayerGCGComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerGCGComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::map<std::string,unsigned int>::~map(&this->drop_packet_map_);
  GCGLevelChallenge::~GCGLevelChallenge(&this->level_challenge_);
  GCGTavernSceneBuilder::~GCGTavernSceneBuilder(&this->tavern_scene_builder_);
  GCGWeekChallenge::~GCGWeekChallenge(&this->week_challenge_);
  GCGTavernChallenge::~GCGTavernChallenge(&this->tavern_challenge_);
  GCGDeckSystem::~GCGDeckSystem(&this->deck_system_);
  GCGBasic::~GCGBasic(&this->basic_);
  PlayerUnixTimer::~PlayerUnixTimer(&this->sync_timer_);
  GCGGameBriefInfo::~GCGGameBriefInfo(&this->game_info_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 131: range 0000000017887586-00000000178875B0
void __cdecl PlayerGCGComp::~PlayerGCGComp(PlayerGCGComp *const this)
{
  PlayerGCGComp::~PlayerGCGComp(this);
  operator delete(this, 0x568uLL);
};

// Line 138: range 0000000017215551-000000001721555B
uint32_t __cdecl PlayerGCGComp::getType()
{
  return 70;
};

// Line 140: range 000000001748FB82-000000001748FF94
void __cdecl ZN13PlayerGCGCompCI214PlayerCompBaseER6Player(PlayerGCGComp *const this, Player *a2)
{
  int (**v2)(...); // rdx
  GCGBasic *p_basic; // rdx
  GCGDeckSystem *p_deck_system; // rdx
  GCGTavernChallenge *p_tavern_challenge; // rdx
  GCGWeekChallenge *p_week_challenge; // rdx
  GCGTavernSceneBuilder *p_tavern_scene_builder; // rdx
  GCGLevelChallenge *p_level_challenge; // rdx
  Player *player; // rsi
  __int64 v10; // rdx
  PlayerGCGComp *v11; // [rsp+18h] [rbp-78h] BYREF
  PlayerPtr p_player_ptr; // [rsp+20h] [rbp-70h] BYREF
  void (*__f[2])(PlayerGCGComp *); // [rsp+30h] [rbp-60h] BYREF
  std::_Bind_helper<false,void (PlayerGCGComp::*)(),PlayerGCGComp*>::type p___f; // [rsp+40h] [rbp-50h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+60h] [rbp-30h] BYREF

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerGCGComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  GCGGameBriefInfo::GCGGameBriefInfo(&this->game_info_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  toPtr<Player,Player>((Player *)&p_player_ptr);
  v11 = this;
  __f[0] = (void (*)(PlayerGCGComp *))PlayerGCGComp::onSyncTimer;
  __f[1] = 0LL;
  std::bind<void (PlayerGCGComp::*)(void),PlayerGCGComp*>(&p___f, __f, &v11, (PlayerGCGComp **)__f);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (PlayerGCGComp::*)(void) ()(PlayerGCGComp*)>,void,void>(
    &p_callback,
    &p___f);
  PlayerUnixTimer::PlayerUnixTimer(&this->sync_timer_, &p_player_ptr, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
  p_basic = &this->basic_;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  GCGBasic::GCGBasic(p_basic, this->player_);
  p_deck_system = &this->deck_system_;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  GCGDeckSystem::GCGDeckSystem(p_deck_system, this->player_);
  p_tavern_challenge = &this->tavern_challenge_;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  GCGTavernChallenge::GCGTavernChallenge(p_tavern_challenge, this->player_);
  p_week_challenge = &this->week_challenge_;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  GCGWeekChallenge::GCGWeekChallenge(p_week_challenge, this->player_);
  p_tavern_scene_builder = &this->tavern_scene_builder_;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  GCGTavernSceneBuilder::GCGTavernSceneBuilder(p_tavern_scene_builder, this->player_);
  p_level_challenge = &this->level_challenge_;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  GCGLevelChallenge::GCGLevelChallenge(p_level_challenge, player);
  if ( *(char *)(((unsigned __int64)&this->is_resource_complete_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_resource_complete_, player, &this->is_resource_complete_);
  this->is_resource_complete_ = 0;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->last_enter_game_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_enter_game_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->last_enter_game_time_, (((_BYTE)this + 52) & 7u) + 3, v10);
  this->last_enter_game_time_ = 0;
  std::map<std::string,unsigned int>::map(&this->drop_packet_map_);
};

// Line 156: range 0000000017D71644-0000000017D71674
int32_t __cdecl PlayerGCGComp::addExp(PlayerGCGComp *const this, uint32_t exp, const ActionReason *reason)
{
  return GCGBasic::addExp(&this->basic_, exp, reason);
};

// Line 191: range 000000001690FBE8-000000001690FBF9
GCGGameBriefInfo *__cdecl PlayerGCGComp::getGameInfo(PlayerGCGComp *const this)
{
  return &this->game_info_;
};

// Line 196: range 000000001690FBFA-000000001690FC4E
bool __cdecl PlayerGCGComp::isInGame(const PlayerGCGComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->game_info_.game_uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->game_info_.game_uid >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->game_info_.game_uid);
  }
  return this->game_info_.game_uid != 0;
};

// Line 210: range 0000000013EBEDD2-0000000013EBEDE5
GCGDeckSystem *__cdecl PlayerGCGComp::getDeckSystem(PlayerGCGComp *const this)
{
  return &this->deck_system_;
};

// Line 211: range 00000000149F59AC-00000000149F59BF
GCGTavernChallenge *__cdecl PlayerGCGComp::getTavernChallenge(PlayerGCGComp *const this)
{
  return &this->tavern_challenge_;
};

// Line 212: range 00000000151911B6-00000000151911C9
GCGWeekChallenge *__cdecl PlayerGCGComp::getWeekChallenge(PlayerGCGComp *const this)
{
  return &this->week_challenge_;
};

// Line 213: range 00000000151911CA-00000000151911DD
GCGTavernSceneBuilder *__cdecl PlayerGCGComp::getTavernSceneBuilder(PlayerGCGComp *const this)
{
  return &this->tavern_scene_builder_;
};

// Line 214: range 0000000013EBEDE6-0000000013EBEDF9
GCGBasic *__cdecl PlayerGCGComp::getBasic(PlayerGCGComp *const this)
{
  return &this->basic_;
};

// Line 215: range 00000000176B180C-00000000176B181F
const GCGBasic *__cdecl PlayerGCGComp::getBasic(const PlayerGCGComp *const this)
{
  return &this->basic_;
};

// Line 216: range 0000000013EBEDFA-0000000013EBEE0D
GCGLevelChallenge *__cdecl PlayerGCGComp::getLevelChallenge(PlayerGCGComp *const this)
{
  return &this->level_challenge_;
};

// Line 231: range 000000001690FC50-000000001690FC9D
bool __cdecl PlayerGCGComp::isResourceComplete(const PlayerGCGComp *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_resource_complete_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_resource_complete_);
  return this->is_resource_complete_;
};

// Line 235: range 0000000017D71676-0000000017D71695
void __cdecl PlayerGCGComp::onGMClearDropPacketMap(PlayerGCGComp *const this)
{
  std::map<std::string,unsigned int>::clear(&this->drop_packet_map_);
};
