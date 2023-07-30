// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/home/player_home_comp.h

// Line 59: range 0000000017D7FEE8-0000000017D7FF77
void __cdecl PlayerHomeBlock::PlayerHomeBlock(PlayerHomeBlock *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  __int64 v3; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->block_id = 0;
  v2 = ((_BYTE)this + 4) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_unlocked >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_unlocked >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_unlocked, v2, v3);
  this->is_unlocked = 0;
};

// Line 68: range 0000000017D7FFE4-0000000017D80140
void __cdecl PlayerHomeScene::PlayerHomeScene(PlayerHomeScene *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->scene_id = 0;
  std::map<unsigned int,PlayerHomeBlock>::map(&this->block_map);
  if ( *(char *)(((unsigned __int64)&this->is_unlocked >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_unlocked, v1, &this->is_unlocked);
  this->is_unlocked = 0;
  v2 = (((_BYTE)this + 60) & 7u) + 3;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->version, v2, v3);
  this->version = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->audit_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->audit_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->audit_state, v2, &this->audit_state);
  }
  this->audit_state = 0;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->submit_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->submit_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->submit_time, (((_BYTE)this + 68) & 7u) + 3, v4);
  this->submit_time = 0;
};

// Line 68: range 0000000017EB8F82-0000000017EB920F
void __cdecl PlayerHomeScene::PlayerHomeScene(PlayerHomeScene *const this, PlayerHomeScene *a2)
{
  uint32_t scene_id; // ecx
  char v3; // al
  std::map<unsigned int,PlayerHomeBlock> *p_block_map; // rsi
  bool is_unlocked; // cl
  char v6; // al
  __int64 v7; // rsi
  uint32_t version; // ecx
  char v9; // dl
  __int64 v10; // rdx
  uint32_t audit_state; // ecx
  char v12; // al
  __int64 v13; // rsi
  uint32_t submit_time; // ecx
  char v15; // dl
  __int64 v16; // rdx
  PlayerHomeScene *v17; // [rsp+0h] [rbp-10h]

  v17 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  scene_id = a2->scene_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, this);
  }
  this->scene_id = scene_id;
  p_block_map = &v17->block_map;
  std::map<unsigned int,PlayerHomeBlock>::map(&this->block_map, &v17->block_map);
  if ( *(char *)(((unsigned __int64)&v17->is_unlocked >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v17->is_unlocked);
  is_unlocked = v17->is_unlocked;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_unlocked >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_block_map) = v6 != 0;
    __asan_report_store1(&this->is_unlocked, p_block_map, &this->is_unlocked);
  }
  this->is_unlocked = is_unlocked;
  v7 = (((_BYTE)v17 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v17->version >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v17 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->version >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v17->version);
  }
  version = v17->version;
  v9 = *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((char)((((_BYTE)this + 60) & 7) + 3) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->version, v7, v10);
  this->version = version;
  if ( *(_BYTE *)(((unsigned __int64)&v17->audit_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->audit_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->audit_state);
  }
  audit_state = v17->audit_state;
  v12 = *(_BYTE *)(((unsigned __int64)&this->audit_state >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v7) = v12 != 0;
    __asan_report_store4(&this->audit_state, v7, &this->audit_state);
  }
  this->audit_state = audit_state;
  v13 = (((_BYTE)v17 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v17->submit_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v17 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->submit_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v17->submit_time);
  }
  submit_time = v17->submit_time;
  v15 = *(_BYTE *)(((unsigned __int64)&this->submit_time >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v15 != 0;
  v16 = (v15 != 0) & (unsigned __int8)((char)((((_BYTE)this + 68) & 7) + 3) >= v15);
  if ( (_BYTE)v16 )
    __asan_report_store4(&this->submit_time, v13, v16);
  this->submit_time = submit_time;
};

// Line 68: range 00000000174B1198-00000000174B11B6
void __cdecl PlayerHomeScene::~PlayerHomeScene(PlayerHomeScene *const this)
{
  std::map<unsigned int,PlayerHomeBlock>::~map(&this->block_map);
};

// Line 82: range 0000000017EF169E-0000000017EF16F5
void __cdecl PlayerHomeModule::PlayerHomeModule(PlayerHomeModule *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->module_id = 0;
  std::map<unsigned int,PlayerHomeScene>::map(&this->scene_map);
};

// Line 82: range 00000000174B0922-00000000174B0940
void __cdecl PlayerHomeModule::~PlayerHomeModule(PlayerHomeModule *const this)
{
  std::map<unsigned int,PlayerHomeScene>::~map(&this->scene_map);
};

// Line 92: range 0000000017D80176-0000000017D8020B
void __cdecl HomeWorldWoodExchangeData::HomeWorldWoodExchangeData(HomeWorldWoodExchangeData *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->exchange_count = 0;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->last_refresh_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->last_refresh_time, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->last_refresh_time = 0;
};

// Line 99: range 0000000017D80708-0000000017D80994
HomeBlueprintBriefData *__cdecl HomeBlueprintBriefData::operator=(
        HomeBlueprintBriefData *const this,
        HomeBlueprintBriefData *a2)
{
  uint32_t module_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t scene_id; // ecx
  char v6; // dl
  __int64 v7; // rdx
  uint32_t block_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  bool is_allow_copy; // cl
  char v12; // dl
  __int64 v13; // rdx
  uint32_t create_time; // ecx
  char v15; // al
  HomeBlueprintBriefData *v17; // [rsp+0h] [rbp-10h]

  v17 = a2;
  std::string::operator=(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&v17->module_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->module_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->module_id);
  }
  module_id = a2->module_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->module_id, a2, &this->module_id);
  }
  this->module_id = module_id;
  v4 = (((_BYTE)v17 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v17->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v17 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v17->scene_id);
  }
  scene_id = v17->scene_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->scene_id, v4, v7);
  this->scene_id = scene_id;
  if ( *(_BYTE *)(((unsigned __int64)&v17->block_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->block_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->block_id);
  }
  block_id = v17->block_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v4) = v9 != 0;
    __asan_report_store4(&this->block_id, v4, &this->block_id);
  }
  this->block_id = block_id;
  v10 = ((_BYTE)v17 + 44) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&v17->is_allow_copy >> 3) + 0x7FFF8000) != 0
    && (char)v10 >= *(_BYTE *)(((unsigned __int64)&v17->is_allow_copy >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v17->is_allow_copy);
  }
  is_allow_copy = v17->is_allow_copy;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_allow_copy >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->is_allow_copy, v10, v13);
  this->is_allow_copy = is_allow_copy;
  if ( *(_BYTE *)(((unsigned __int64)&v17->create_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->create_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->create_time);
  }
  create_time = v17->create_time;
  v15 = *(_BYTE *)(((unsigned __int64)&this->create_time >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(v10) = v15 != 0;
    __asan_report_store4(&this->create_time, v10, &this->create_time);
  }
  this->create_time = create_time;
  return this;
};

// Line 99: range 0000000017D805AC-0000000017D80706
void __cdecl HomeBlueprintBriefData::HomeBlueprintBriefData(HomeBlueprintBriefData *const this)
{
  __int64 v1; // rsi
  uint32_t *p_module_id; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  std::string::basic_string(this);
  p_module_id = &this->module_id;
  if ( *(_BYTE *)(((unsigned __int64)p_module_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_module_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->module_id, v1, p_module_id);
  }
  this->module_id = 0;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->scene_id, v3, v4);
  this->scene_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->block_id, v3, &this->block_id);
  }
  this->block_id = 0;
  v5 = ((_BYTE)this + 44) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_allow_copy >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_allow_copy >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_allow_copy, v5, v6);
  this->is_allow_copy = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->create_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->create_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->create_time, v5, &this->create_time);
  }
  this->create_time = 0;
};

// Line 114: range 0000000017F5383E-0000000017F53868
void __cdecl PlayerHomeComp::~PlayerHomeComp(PlayerHomeComp *const this)
{
  PlayerHomeComp::~PlayerHomeComp(this);
  operator delete(this, 0x4A0uLL);
};

// Line 114: range 0000000017F5369E-0000000017F5383D
void __cdecl PlayerHomeComp::~PlayerHomeComp(PlayerHomeComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerHomeComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  PlayerUnixTimer::~PlayerUnixTimer(&this->check_audit_timer_);
  PlayerUnixTimer::~PlayerUnixTimer(&this->home_apply_timer_);
  std::unordered_map<std::string,HomeBlueprintBriefData>::~unordered_map(&this->blueprint_share_code_brief_data_map_);
  std::map<unsigned int,std::pair<unsigned int,unsigned int>>::~map(&this->apply_uid_app_id_map_);
  std::map<unsigned int,std::string>::~map(&this->blueprint_slot_share_code_map_);
  std::map<unsigned int,HomeWorldWoodExchangeData>::~map(&this->wood_exchange_data_map_);
  HomeAvatar::~HomeAvatar(&this->home_avatar_);
  LimitedShop::~LimitedShop(&this->limited_shop_);
  std::shared_ptr<HomeResource>::~shared_ptr(&this->home_resource_ptr_);
  std::shared_ptr<FurnitureMake>::~shared_ptr(&this->furniture_make_ptr_);
  std::set<unsigned int>::~set(&this->unlocked_bgm_id_set_);
  std::set<unsigned int>::~set(&this->arrangement_furniture_suite_id_set);
  std::set<unsigned int>::~set(&this->levelup_reward_got_level_set_);
  proto::HomeSnapshotBin::~HomeSnapshotBin(&this->home_snapshot_bin_);
  std::set<unsigned int>::~set(&this->unlocked_furniture_suite_id_set_);
  std::set<unsigned int>::~set(&this->unlocked_formula_furniture_id_set_);
  std::set<unsigned int>::~set(&this->seen_module_id_set_);
  std::set<unsigned int>::~set(&this->unlocked_module_id_set_);
  std::map<unsigned int,PlayerHomeModule>::~map(&this->home_module_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 115: range 00000000174B0A18-00000000174B0A32
void __cdecl HomeBlueprintBriefData::~HomeBlueprintBriefData(HomeBlueprintBriefData *const this)
{
  std::string::~string(this);
};

// Line 120: range 000000001748A8F8-000000001748B38C
void __cdecl ZN14PlayerHomeCompCI214PlayerCompBaseER6Player(PlayerHomeComp *const this, Player *a2)
{
  int (**v2)(...); // rdx
  Player *player; // rax
  Player *v4; // rax
  HomeAvatar *p_home_avatar; // rdx
  Player *v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  PlayerHomeComp **v15; // r8
  const std::_Placeholder<1> *v16; // r9
  PlayerHomeComp **v17; // r8
  const std::_Placeholder<1> *v18; // r9
  PlayerHomeComp *v19; // [rsp+10h] [rbp-90h] BYREF
  PlayerHomeComp *v20; // [rsp+18h] [rbp-88h] BYREF
  void (*__f[2])(PlayerHomeComp *, unsigned __int64); // [rsp+20h] [rbp-80h] BYREF
  PlayerPtr v22; // [rsp+30h] [rbp-70h] BYREF
  PlayerPtr p_player_ptr; // [rsp+40h] [rbp-60h] BYREF
  std::_Bind_helper<false,void (PlayerHomeComp::*)(long unsigned int),PlayerHomeComp*,const std::_Placeholder<1>&>::type p___f; // [rsp+50h] [rbp-50h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+70h] [rbp-30h] BYREF

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerHomeComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->friend_enter_home_option_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->friend_enter_home_option_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->friend_enter_home_option_, a2, &this->friend_enter_home_option_);
  }
  this->friend_enter_home_option_ = FRIEND_ENTER_HOME_OPTION_NEED_CONFIRM;
  std::map<unsigned int,PlayerHomeModule>::map(&this->home_module_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->init_home_module_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->init_home_module_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->init_home_module_id_, a2, &this->init_home_module_id_);
  }
  this->init_home_module_id_ = 0;
  std::set<unsigned int>::set(&this->unlocked_module_id_set_);
  std::set<unsigned int>::set(&this->seen_module_id_set_);
  std::set<unsigned int>::set(&this->unlocked_formula_furniture_id_set_);
  std::set<unsigned int>::set(&this->unlocked_furniture_suite_id_set_);
  proto::HomeSnapshotBin::HomeSnapshotBin(&this->home_snapshot_bin_);
  std::set<unsigned int>::set(&this->levelup_reward_got_level_set_);
  std::set<unsigned int>::set(&this->arrangement_furniture_suite_id_set);
  std::set<unsigned int>::set(&this->unlocked_bgm_id_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->audit_version_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->audit_version_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->audit_version_index_, a2, &this->audit_version_index_);
  }
  this->audit_version_index_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  if ( *(_WORD *)(((unsigned __int64)&this->furniture_make_ptr_ >> 3) + 0x7FFF8000) )
    player = (Player *)__asan_report_store16(&this->furniture_make_ptr_);
  common::tools::perf::make_shared<FurnitureMake,Player &>((Player *)&this->furniture_make_ptr_, player);
  v4 = this->player_;
  if ( *(_WORD *)(((unsigned __int64)&this->home_resource_ptr_ >> 3) + 0x7FFF8000) )
    v4 = (Player *)__asan_report_store16(&this->home_resource_ptr_);
  common::tools::perf::make_shared<HomeResource,Player &>((Player *)&this->home_resource_ptr_, v4);
  LimitedShop::LimitedShop(&this->limited_shop_, this->player_);
  p_home_avatar = &this->home_avatar_;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = this->player_;
  HomeAvatar::HomeAvatar(p_home_avatar, v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->saved_try_enter_home_point_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->saved_try_enter_home_point_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->saved_try_enter_home_point_, v6, &this->saved_try_enter_home_point_);
  }
  this->saved_try_enter_home_point_ = 0;
  v7 = (((_BYTE)this - 20) & 7u) + 3;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->try_enter_home_point_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->try_enter_home_point_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->try_enter_home_point_, v7, v8);
  this->try_enter_home_point_ = 0;
  if ( *(char *)(((unsigned __int64)&this->saved_try_enter_home_is_transfer_to_safe_point_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(
      &this->saved_try_enter_home_is_transfer_to_safe_point_,
      v7,
      &this->saved_try_enter_home_is_transfer_to_safe_point_);
  this->saved_try_enter_home_is_transfer_to_safe_point_ = 0;
  v9 = ((_BYTE)this - 15) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->try_enter_home_is_transfer_to_safe_point_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->try_enter_home_is_transfer_to_safe_point_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->try_enter_home_is_transfer_to_safe_point_, v9, v10);
  this->try_enter_home_is_transfer_to_safe_point_ = 0;
  std::map<unsigned int,HomeWorldWoodExchangeData>::map(&this->wood_exchange_data_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->blueprint_guid_idx_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->blueprint_guid_idx_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->blueprint_guid_idx_, v9, &this->blueprint_guid_idx_);
  }
  this->blueprint_guid_idx_ = 0;
  std::map<unsigned int,std::string>::map(&this->blueprint_slot_share_code_map_);
  std::map<unsigned int,std::pair<unsigned int,unsigned int>>::map(&this->apply_uid_app_id_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->try_enter_home_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->try_enter_home_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->try_enter_home_uid_, v9, &this->try_enter_home_uid_);
  }
  this->try_enter_home_uid_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->try_enter_home_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->try_enter_home_time_, v9);
  this->try_enter_home_time_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_save_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_save_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_save_time_, v9, &this->last_save_time_);
  }
  this->last_save_time_ = 0;
  v11 = (((_BYTE)this - 92) & 7u) + 3;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->prior_check_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prior_check_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store4(&this->prior_check_time_, v11, v12);
  this->prior_check_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_create_blueprint_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_create_blueprint_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_create_blueprint_time_, v11, &this->last_create_blueprint_time_);
  }
  this->last_create_blueprint_time_ = 0;
  v13 = (((_BYTE)this - 84) & 7u) + 3;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->last_set_blueprint_option_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_set_blueprint_option_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store4(&this->last_set_blueprint_option_time_, v13, v14);
  this->last_set_blueprint_option_time_ = 0;
  std::unordered_map<std::string,HomeBlueprintBriefData>::unordered_map(&this->blueprint_share_code_brief_data_map_);
  if ( *(char *)(((unsigned __int64)&this->is_applying_enter_home_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_applying_enter_home_, v13, &this->is_applying_enter_home_);
  this->is_applying_enter_home_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<Player,Player>((Player *)&p_player_ptr);
  v19 = this;
  __f[0] = (void (*)(PlayerHomeComp *, unsigned __int64))PlayerHomeComp::onApplyEnterHomeEnd;
  __f[1] = 0LL;
  std::bind<void (PlayerHomeComp::*)(unsigned long),PlayerHomeComp*,std::_Placeholder<1> const&>(
    &p___f,
    __f,
    &v19,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v15,
    v16);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (PlayerHomeComp::*)(unsigned long) ()(PlayerHomeComp*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerUnixTimer::PlayerUnixTimer(&this->home_apply_timer_, &p_player_ptr, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<Player,Player>((Player *)&v22);
  v20 = this;
  p_player_ptr._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)PlayerHomeComp::onAuditCheckTimer;
  p_player_ptr._M_refcount._M_pi = 0LL;
  std::bind<void (PlayerHomeComp::*)(unsigned long),PlayerHomeComp*,std::_Placeholder<1> const&>(
    &p___f,
    (void (**)(PlayerHomeComp *, unsigned __int64))&p_player_ptr,
    &v20,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v17,
    v18);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (PlayerHomeComp::*)(unsigned long) ()(PlayerHomeComp*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerUnixTimer::PlayerUnixTimer(&this->check_audit_timer_, &v22, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&v22);
};

// Line 213: range 0000000017D6C0CA-0000000017D6C111
proto::FriendEnterHomeOption __cdecl PlayerHomeComp::getFriendEnterHomeOption(const PlayerHomeComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->friend_enter_home_option_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->friend_enter_home_option_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->friend_enter_home_option_);
  }
  return this->friend_enter_home_option_;
};

// Line 214: range 0000000017D6C112-0000000017D6C15F
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerHomeComp::setFriendEnterHomeOption(PlayerHomeComp *const this, proto::FriendEnterHomeOption option)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->friend_enter_home_option_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->friend_enter_home_option_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->friend_enter_home_option_, *(_QWORD *)&option, &this->friend_enter_home_option_);
  }
  this->friend_enter_home_option_ = option;
};

// Line 221: range 0000000017D6C160-0000000017D6C25F
bool __fastcall PlayerHomeComp::isHomeModuleUnlocked(const PlayerHomeComp *const this, uint32_t module_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  std::_Rb_tree_const_iterator<unsigned int>::_Self __x; // [rsp+10h] [rbp-70h] BYREF
  std::_Rb_tree_const_iterator<unsigned int>::_Self __y; // [rsp+18h] [rbp-68h] BYREF
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 module_id:221";
  *(_QWORD *)(v2 + 16) = PlayerHomeComp::isHomeModuleUnlocked;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = module_id;
  __y._M_node = std::set<unsigned int>::end(&this->unlocked_module_id_set_)._M_node;
  __x._M_node = std::set<unsigned int>::find(
                  &this->unlocked_module_id_set_,
                  (const std::set<unsigned int>::key_type *)(v2 + 32))._M_node;
  result = std::operator!=(&__x, &__y);
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

// Line 231: range 000000001461D552-000000001461D565
proto::HomeSnapshotBin *__cdecl PlayerHomeComp::getHomeSnapshot(PlayerHomeComp *const this)
{
  return &this->home_snapshot_bin_;
};

// Line 235: range 0000000017D6C260-0000000017D6C332
void __fastcall PlayerHomeComp::updateArrangementFurnitureSuite(
        PlayerHomeComp *const this,
        uint32_t furniture_suite_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 22 furniture_suite_id:235";
  *(_QWORD *)(v2 + 16) = PlayerHomeComp::updateArrangementFurnitureSuite;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = furniture_suite_id;
  std::set<unsigned int>::insert(
    &this->arrangement_furniture_suite_id_set,
    (const std::set<unsigned int>::value_type *)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 240: range 00000000149F598C-00000000149F59AB
uint32_t __cdecl PlayerHomeComp::getArrangementFurnitureSuiteCount(const PlayerHomeComp *const this)
{
  return std::set<unsigned int>::size(&this->arrangement_furniture_suite_id_set);
};

// Line 249: range 0000000017D6C334-0000000017D6C38C
void __cdecl PlayerHomeComp::clearPriorCheckTime(PlayerHomeComp *const this)
{
  __int64 v1; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)&this->prior_check_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prior_check_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(&this->prior_check_time_, (((_BYTE)this - 92) & 7u) + 3, v1);
  this->prior_check_time_ = 0;
};

// Line 272: range 0000000017D6C38E-0000000017D6C3E1
void __cdecl PlayerHomeComp::updateBlueprintCreateCD(PlayerHomeComp *const this)
{
  __int64 Now; // rsi
  uint32_t *p_last_create_blueprint_time; // rdx

  Now = (unsigned int)common::tools::TimeUtils::getNow();
  p_last_create_blueprint_time = &this->last_create_blueprint_time_;
  if ( *(_BYTE *)(((unsigned __int64)p_last_create_blueprint_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_last_create_blueprint_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_create_blueprint_time_, Now, p_last_create_blueprint_time);
  }
  this->last_create_blueprint_time_ = Now;
};

// Line 273: range 0000000017D6C3E2-0000000017D6C432
void __cdecl PlayerHomeComp::onGMClearBlueprintCreateCD(PlayerHomeComp *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->last_create_blueprint_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_create_blueprint_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_create_blueprint_time_, v1, &this->last_create_blueprint_time_);
  }
  this->last_create_blueprint_time_ = 0;
};

// Line 275: range 0000000017D6C434-0000000017D6C48F
void __cdecl PlayerHomeComp::updateBlueprintSetOptionCD(PlayerHomeComp *const this)
{
  uint32_t Now; // edi
  __int64 v2; // rdx

  Now = common::tools::TimeUtils::getNow();
  v2 = (*(_BYTE *)(((unsigned __int64)&this->last_set_blueprint_option_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_set_blueprint_option_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
  {
    Now = (_DWORD)this + 940;
    __asan_report_store4(&this->last_set_blueprint_option_time_, (((_BYTE)this - 84) & 7u) + 3, v2);
  }
  this->last_set_blueprint_option_time_ = Now;
};

// Line 276: range 0000000017D6C490-0000000017D6C4E8
void __cdecl PlayerHomeComp::onGMClearBlueprintSetOptionCD(PlayerHomeComp *const this)
{
  __int64 v1; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)&this->last_set_blueprint_option_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_set_blueprint_option_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(&this->last_set_blueprint_option_time_, (((_BYTE)this - 84) & 7u) + 3, v1);
  this->last_set_blueprint_option_time_ = 0;
};

// Line 299: range 0000000017D6C4EA-0000000017D6C509
FurnitureMake *__cdecl PlayerHomeComp::getFurnitureMake(PlayerHomeComp *const this)
{
  return std::__shared_ptr_access<FurnitureMake,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<FurnitureMake,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->furniture_make_ptr_);
};

// Line 300: range 0000000017D6C50A-0000000017D6C529
HomeResource *__cdecl PlayerHomeComp::getHomeResource(PlayerHomeComp *const this)
{
  return std::__shared_ptr_access<HomeResource,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<HomeResource,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->home_resource_ptr_);
};

// Line 302: range 0000000017D6C52A-0000000017D6C53D
LimitedShop *__cdecl PlayerHomeComp::getLimitedShop(PlayerHomeComp *const this)
{
  return &this->limited_shop_;
};

// Line 303: range 000000001461D566-000000001461D579
HomeAvatar *__cdecl PlayerHomeComp::getHomeAvatar(PlayerHomeComp *const this)
{
  return &this->home_avatar_;
};

// Line 304: range 00000000172149AE-0000000017214A16
uint32_t __cdecl PlayerHomeComp::getAndClearTryEnterHomePoint(PlayerHomeComp *const this)
{
  uint32_t temp; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)&this->try_enter_home_point_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->try_enter_home_point_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->try_enter_home_point_);
  }
  temp = this->try_enter_home_point_;
  this->try_enter_home_point_ = 0;
  return temp;
};

// Line 310: range 0000000017214A18-0000000017214A43
bool __cdecl PlayerHomeComp::getAndClearTryEnterHomeIsTransferToSafePoint(PlayerHomeComp *const this)
{
  bool __new_val; // [rsp+1Fh] [rbp-1h] BYREF

  __new_val = 0;
  return std::exchange<bool,bool>(&this->try_enter_home_is_transfer_to_safe_point_, &__new_val);
};

// Line 360: range 0000000017D6C53E-0000000017D6C58B
bool __cdecl PlayerHomeComp::getIsApplyingEnterHome(const PlayerHomeComp *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_applying_enter_home_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_applying_enter_home_);
  return this->is_applying_enter_home_;
};

// Line 360: range 0000000017D6C58C-0000000017D6C5E2
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerHomeComp::setIsApplyingEnterHome(PlayerHomeComp *const this, bool is_applying_enter_home__out)
{
  if ( *(char *)(((unsigned __int64)&this->is_applying_enter_home_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_applying_enter_home_, is_applying_enter_home__out, &this->is_applying_enter_home_);
  this->is_applying_enter_home_ = is_applying_enter_home__out;
};

// Line 368: range 0000000017214A44-0000000017214A4E
uint32_t __cdecl PlayerHomeComp::getType()
{
  return 54;
};
