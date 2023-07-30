// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/AvatarExcelConfig.gen.h

// Line 66: range 0000000013BDCD3C-0000000013BDD390
void __cdecl data::AvatarExcelConfig::AvatarExcelConfig(data::AvatarExcelConfig *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rsi
  char v12[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::AvatarExcelConfig::AvatarExcelConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  data::CreatureExcelConfig::CreatureExcelConfig((data::CreatureExcelConfig *const)this);
  v5 = (int (**)(...))(&`vtable for'data::AvatarExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EntityExcelConfig = v5;
  v6 = (((_BYTE)this - 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->use_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->use_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->use_type, v6);
  }
  this->use_type = AVATAR_TEST;
  if ( *(_BYTE *)(((unsigned __int64)&this->element_react_critical >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->element_react_critical >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->element_react_critical, v6);
  }
  this->element_react_critical = 0.0;
  v7 = (((_BYTE)this - 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->element_react_critical_hurt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->element_react_critical_hurt >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->element_react_critical_hurt, v7);
  }
  this->element_react_critical_hurt = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->quality_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quality_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->quality_type, v7);
  }
  this->quality_type = QUALITY_NONE;
  v8 = (((_BYTE)this - 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->charge_efficiency >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->charge_efficiency >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->charge_efficiency, v8);
  }
  this->charge_efficiency = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->heal_add >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->heal_add >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->heal_add, v8);
  }
  this->heal_add = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->healed_add >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->healed_add >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->healed_add, (((_BYTE)this - 28) & 7u) + 3);
  }
  this->healed_add = 0.0;
  std::string::basic_string(&this->combat_config);
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    &this->combat_config_path_decorator,
    "Data/_BinOutput/Avatar/*.MiHoYoBinData",
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->combat_config_hash >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->combat_config_hash, "Data/_BinOutput/Avatar/*.MiHoYoBinData");
  this->combat_config_hash = 0LL;
  if ( *(char *)(((unsigned __int64)&this->is_range_attack >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_range_attack, "Data/_BinOutput/Avatar/*.MiHoYoBinData", &this->is_range_attack);
  this->is_range_attack = 0;
  v9 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->initial_weapon >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->initial_weapon >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->initial_weapon, v9);
  }
  this->initial_weapon = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->weapon_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weapon_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->weapon_type, v9);
  }
  this->weapon_type = WEAPON_NONE;
  v10 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_depot_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_depot_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skill_depot_id, v10);
  }
  this->skill_depot_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->stamina_recover_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stamina_recover_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stamina_recover_speed, v10);
  }
  this->stamina_recover_speed = 0.0;
  std::vector<unsigned int>::vector(&this->cand_skill_depot_ids);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_identity_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_identity_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_identity_type, v10);
  }
  this->avatar_identity_type = AVATAR_IDENTITY_MASTER;
  v11 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_promote_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_promote_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->avatar_promote_id, v11);
  }
  this->avatar_promote_id = 0;
  std::vector<unsigned int>::vector(&this->avatar_promote_reward_level_list);
  std::vector<unsigned int>::vector(&this->avatar_promote_reward_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->feature_tag_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->feature_tag_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->feature_tag_group_id, v11);
  }
  this->feature_tag_group_id = 0;
  std::string::basic_string(&this->info_desc);
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 70: range 00000000142A6C8A-00000000142A6CB4
void __cdecl data::AvatarExcelConfig::~AvatarExcelConfig(data::AvatarExcelConfig *const this)
{
  data::AvatarExcelConfig::~AvatarExcelConfig(this);
  operator delete(this, 0x2C0uLL);
};

// Line 70: range 00000000142A6BD0-00000000142A6C89
void __cdecl data::AvatarExcelConfig::~AvatarExcelConfig(data::AvatarExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AvatarExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EntityExcelConfig = v2;
  std::string::~string(&this->info_desc);
  std::vector<unsigned int>::~vector(&this->avatar_promote_reward_id_list);
  std::vector<unsigned int>::~vector(&this->avatar_promote_reward_level_list);
  std::vector<unsigned int>::~vector(&this->cand_skill_depot_ids);
  std::string::~string(&this->combat_config_path_decorator);
  std::string::~string(&this->combat_config);
  data::CreatureExcelConfig::~CreatureExcelConfig((data::CreatureExcelConfig *const)this);
};

// Line 102: range 000000001419B0FC-000000001419B2B0
void __cdecl data::AvatarLevelExcelConfig::AvatarLevelExcelConfig(
        data::AvatarLevelExcelConfig *const this,
        const data::AvatarLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t level; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t exp; // ecx
  char v7; // dl
  uint32_t small_talent_point; // ecx
  char v9; // al
  const data::AvatarLevelExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::AvatarLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_AvatarLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->level);
  }
  level = a2->level;
  v4 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->level, a2);
  }
  this->level = level;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->exp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->exp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->exp);
  }
  exp = v10->exp;
  v7 = *(_BYTE *)(((unsigned __int64)&this->exp >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->exp, v5);
  }
  this->exp = exp;
  if ( *(_BYTE *)(((unsigned __int64)&v10->small_talent_point >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->small_talent_point >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->small_talent_point);
  }
  small_talent_point = v10->small_talent_point;
  v9 = *(_BYTE *)(((unsigned __int64)&this->small_talent_point >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->small_talent_point, v5);
  }
  this->small_talent_point = small_talent_point;
};

// Line 105: range 00000000142A6BA4-00000000142A6BCE
void __cdecl data::AvatarLevelExcelConfig::~AvatarLevelExcelConfig(data::AvatarLevelExcelConfig *const this)
{
  data::AvatarLevelExcelConfig::~AvatarLevelExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 105: range 00000000142A6B62-00000000142A6BA3
void __cdecl data::AvatarLevelExcelConfig::~AvatarLevelExcelConfig(data::AvatarLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AvatarLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AvatarLevelExcelConfig = v2;
};

// Line 118: range 0000000013BDD392-0000000013BDD541
void __cdecl data::AvatarPromoteExcelConfig::AvatarPromoteExcelConfig(data::AvatarPromoteExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::AvatarPromoteExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AvatarPromoteExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_promote_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_promote_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_promote_id, v1);
  }
  this->avatar_promote_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->promote_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->promote_level, v3);
  }
  this->promote_level = 0;
  std::string::basic_string(&this->promote_audio);
  if ( *(_BYTE *)(((unsigned __int64)&this->scoin_cost >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scoin_cost >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scoin_cost, v3);
  }
  this->scoin_cost = 0;
  std::vector<data::IdCountConfig>::vector(&this->cost_items);
  if ( *(_BYTE *)(((unsigned __int64)&this->unlock_max_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->unlock_max_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->unlock_max_level, v3);
  }
  this->unlock_max_level = 0;
  std::vector<data::PropValConfig>::vector(&this->add_props);
  if ( *(_BYTE *)(((unsigned __int64)&this->required_player_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->required_player_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->required_player_level, v3);
  }
  this->required_player_level = 0;
};

// Line 118: range 00000000133D1560-00000000133D188B
void __cdecl data::AvatarPromoteExcelConfig::AvatarPromoteExcelConfig(
        data::AvatarPromoteExcelConfig *const this,
        const data::AvatarPromoteExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t avatar_promote_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t promote_level; // ecx
  char v7; // dl
  std::string *p_promote_audio; // rsi
  uint32_t scoin_cost; // ecx
  char v10; // al
  std::vector<data::IdCountConfig> *p_cost_items; // rsi
  uint32_t unlock_max_level; // ecx
  char v13; // al
  std::vector<data::PropValConfig> *p_add_props; // rsi
  uint32_t required_player_level; // ecx
  char v16; // al
  const data::AvatarPromoteExcelConfig *v17; // [rsp+0h] [rbp-20h]

  v17 = a2;
  v2 = (int (**)(...))(&`vtable for'data::AvatarPromoteExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_AvatarPromoteExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->avatar_promote_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->avatar_promote_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->avatar_promote_id);
  }
  avatar_promote_id = a2->avatar_promote_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->avatar_promote_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->avatar_promote_id, a2);
  }
  this->avatar_promote_id = avatar_promote_id;
  v5 = (((_BYTE)v17 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v17->promote_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v17 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->promote_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v17->promote_level);
  }
  promote_level = v17->promote_level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->promote_level >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->promote_level, v5);
  }
  this->promote_level = promote_level;
  p_promote_audio = &v17->promote_audio;
  std::string::basic_string(&this->promote_audio, &v17->promote_audio);
  if ( *(_BYTE *)(((unsigned __int64)&v17->scoin_cost >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->scoin_cost >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->scoin_cost);
  }
  scoin_cost = v17->scoin_cost;
  v10 = *(_BYTE *)(((unsigned __int64)&this->scoin_cost >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_promote_audio) = v10 != 0;
    __asan_report_store4(&this->scoin_cost, p_promote_audio);
  }
  this->scoin_cost = scoin_cost;
  p_cost_items = &v17->cost_items;
  std::vector<data::IdCountConfig>::vector(&this->cost_items, &v17->cost_items);
  if ( *(_BYTE *)(((unsigned __int64)&v17->unlock_max_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->unlock_max_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->unlock_max_level);
  }
  unlock_max_level = v17->unlock_max_level;
  v13 = *(_BYTE *)(((unsigned __int64)&this->unlock_max_level >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(p_cost_items) = v13 != 0;
    __asan_report_store4(&this->unlock_max_level, p_cost_items);
  }
  this->unlock_max_level = unlock_max_level;
  p_add_props = &v17->add_props;
  std::vector<data::PropValConfig>::vector(&this->add_props, &v17->add_props);
  if ( *(_BYTE *)(((unsigned __int64)&v17->required_player_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->required_player_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->required_player_level);
  }
  required_player_level = v17->required_player_level;
  v16 = *(_BYTE *)(((unsigned __int64)&this->required_player_level >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(p_add_props) = v16 != 0;
    __asan_report_store4(&this->required_player_level, p_add_props);
  }
  this->required_player_level = required_player_level;
};

// Line 121: range 000000001323FE10-000000001323FE3A
void __cdecl data::AvatarPromoteExcelConfig::~AvatarPromoteExcelConfig(data::AvatarPromoteExcelConfig *const this)
{
  data::AvatarPromoteExcelConfig::~AvatarPromoteExcelConfig(this);
  operator delete(this, 0x78uLL);
};

// Line 139: range 0000000013DE1DBC-0000000013DE1EFB
void __cdecl data::AvatarFettersLevelExcelConfig::AvatarFettersLevelExcelConfig(
        data::AvatarFettersLevelExcelConfig *const this,
        const data::AvatarFettersLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t fetter_level; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t need_exp; // ecx
  char v7; // dl
  const data::AvatarFettersLevelExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::AvatarFettersLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_AvatarFettersLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->fetter_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->fetter_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->fetter_level);
  }
  fetter_level = a2->fetter_level;
  v4 = *(_BYTE *)(((unsigned __int64)&this->fetter_level >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->fetter_level, a2);
  }
  this->fetter_level = fetter_level;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->need_exp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->need_exp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->need_exp);
  }
  need_exp = v8->need_exp;
  v7 = *(_BYTE *)(((unsigned __int64)&this->need_exp >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->need_exp, v5);
  }
  this->need_exp = need_exp;
};

// Line 142: range 00000000142A6AF4-00000000142A6B35
void __cdecl data::AvatarFettersLevelExcelConfig::~AvatarFettersLevelExcelConfig(
        data::AvatarFettersLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AvatarFettersLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AvatarFettersLevelExcelConfig = v2;
};

// Line 142: range 00000000142A6B36-00000000142A6B60
void __cdecl data::AvatarFettersLevelExcelConfig::~AvatarFettersLevelExcelConfig(
        data::AvatarFettersLevelExcelConfig *const this)
{
  data::AvatarFettersLevelExcelConfig::~AvatarFettersLevelExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 154: range 0000000013BDD542-0000000013BDD6F6
void __cdecl data::AvatarHeroEntityExcelConfig::AvatarHeroEntityExcelConfig(
        data::AvatarHeroEntityExcelConfig *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  char v6[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::AvatarHeroEntityExcelConfig::AvatarHeroEntityExcelConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  v5 = (int (**)(...))(&`vtable for'data::AvatarHeroEntityExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AvatarHeroEntityExcelConfig = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_id, v1);
  }
  this->avatar_id = 0;
  std::string::basic_string(&this->prefab_path);
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    &this->prefab_path_path_decorator,
    "*.GameObject",
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 154: range 000000001419B4B6-000000001419B5CD
void __cdecl data::AvatarHeroEntityExcelConfig::AvatarHeroEntityExcelConfig(
        data::AvatarHeroEntityExcelConfig *const this,
        const data::AvatarHeroEntityExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t avatar_id; // ecx
  char v4; // al
  const data::AvatarHeroEntityExcelConfig *v5; // [rsp+0h] [rbp-20h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::AvatarHeroEntityExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_AvatarHeroEntityExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->avatar_id);
  }
  avatar_id = a2->avatar_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->avatar_id, a2);
  }
  this->avatar_id = avatar_id;
  std::string::basic_string(&this->prefab_path, &v5->prefab_path);
  std::string::basic_string(&this->prefab_path_path_decorator, &v5->prefab_path_path_decorator);
};

// Line 157: range 00000000142A6A66-00000000142A6AC7
void __cdecl data::AvatarHeroEntityExcelConfig::~AvatarHeroEntityExcelConfig(
        data::AvatarHeroEntityExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AvatarHeroEntityExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AvatarHeroEntityExcelConfig = v2;
  std::string::~string(&this->prefab_path_path_decorator);
  std::string::~string(&this->prefab_path);
};

// Line 157: range 00000000142A6AC8-00000000142A6AF2
void __cdecl data::AvatarHeroEntityExcelConfig::~AvatarHeroEntityExcelConfig(
        data::AvatarHeroEntityExcelConfig *const this)
{
  data::AvatarHeroEntityExcelConfig::~AvatarHeroEntityExcelConfig(this);
  operator delete(this, 0x50uLL);
};

// Line 1399: range 000000001323FD9E-000000001323FE0F
void __cdecl data::AvatarPromoteExcelConfig::~AvatarPromoteExcelConfig(data::AvatarPromoteExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AvatarPromoteExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AvatarPromoteExcelConfig = v2;
  std::vector<data::PropValConfig>::~vector(&this->add_props);
  std::vector<data::IdCountConfig>::~vector(&this->cost_items);
  std::string::~string(&this->promote_audio);
};

// Line 1903: range 000000001419A5B2-000000001419AFBB
void __cdecl data::AvatarExcelConfig::AvatarExcelConfig(
        data::AvatarExcelConfig *const this,
        const data::AvatarExcelConfig *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::AvatarUseType use_type; // ecx
  char v5; // dl
  float element_react_critical; // xmm0_4
  float element_react_critical_hurt; // xmm0_4
  __int64 v8; // rsi
  data::QualityType quality_type; // ecx
  char v10; // al
  float charge_efficiency; // xmm0_4
  __int64 v12; // rsi
  float heal_add; // xmm0_4
  float healed_add; // xmm0_4
  std::string *p_combat_config_path_decorator; // rsi
  uint64_t combat_config_hash; // rdx
  bool is_range_attack; // cl
  char v18; // al
  __int64 v19; // rsi
  uint32_t initial_weapon; // ecx
  char v21; // dl
  data::WeaponType weapon_type; // ecx
  char v23; // al
  __int64 v24; // rsi
  uint32_t skill_depot_id; // ecx
  char v26; // dl
  float stamina_recover_speed; // xmm0_4
  std::vector<unsigned int> *p_cand_skill_depot_ids; // rsi
  data::AvatarIdentityType avatar_identity_type; // ecx
  char v30; // al
  __int64 v31; // rsi
  uint32_t avatar_promote_id; // ecx
  char v33; // dl
  std::vector<unsigned int> *p_avatar_promote_reward_id_list; // rsi
  uint32_t feature_tag_group_id; // ecx
  char v36; // al

  data::CreatureExcelConfig::CreatureExcelConfig(
    (data::CreatureExcelConfig *const)this,
    (const data::CreatureExcelConfig *)a2);
  v2 = (int (**)(...))(&`vtable for'data::AvatarExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_EntityExcelConfig = v2;
  v3 = (((_BYTE)a2 - 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->use_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->use_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->use_type);
  }
  use_type = a2->use_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->use_type >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v5 != 0;
  if ( v5 != 0 && (char)((((_BYTE)this - 52) & 7) + 3) >= v5 )
    __asan_report_store4(&this->use_type, v3);
  this->use_type = use_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->element_react_critical >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->element_react_critical >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->element_react_critical);
  }
  element_react_critical = a2->element_react_critical;
  if ( *(_BYTE *)(((unsigned __int64)&this->element_react_critical >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->element_react_critical >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->element_react_critical, v3);
  }
  this->element_react_critical = element_react_critical;
  if ( *(_BYTE *)(((unsigned __int64)&a2->element_react_critical_hurt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->element_react_critical_hurt >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->element_react_critical_hurt);
  }
  element_react_critical_hurt = a2->element_react_critical_hurt;
  v8 = (((_BYTE)this - 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->element_react_critical_hurt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->element_react_critical_hurt >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->element_react_critical_hurt, v8);
  }
  this->element_react_critical_hurt = element_react_critical_hurt;
  if ( *(_BYTE *)(((unsigned __int64)&a2->quality_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->quality_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->quality_type);
  }
  quality_type = a2->quality_type;
  v10 = *(_BYTE *)(((unsigned __int64)&this->quality_type >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->quality_type, v8);
  }
  this->quality_type = quality_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->charge_efficiency >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->charge_efficiency >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->charge_efficiency);
  }
  charge_efficiency = a2->charge_efficiency;
  v12 = (((_BYTE)this - 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->charge_efficiency >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->charge_efficiency >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->charge_efficiency, v12);
  }
  this->charge_efficiency = charge_efficiency;
  if ( *(_BYTE *)(((unsigned __int64)&a2->heal_add >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->heal_add >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->heal_add);
  }
  heal_add = a2->heal_add;
  if ( *(_BYTE *)(((unsigned __int64)&this->heal_add >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->heal_add >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->heal_add, v12);
  }
  this->heal_add = heal_add;
  if ( *(_BYTE *)(((unsigned __int64)&a2->healed_add >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->healed_add >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->healed_add);
  }
  healed_add = a2->healed_add;
  if ( *(_BYTE *)(((unsigned __int64)&this->healed_add >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->healed_add >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->healed_add, (((_BYTE)this - 28) & 7u) + 3);
  }
  this->healed_add = healed_add;
  std::string::basic_string(&this->combat_config, &a2->combat_config);
  p_combat_config_path_decorator = &a2->combat_config_path_decorator;
  std::string::basic_string(&this->combat_config_path_decorator, &a2->combat_config_path_decorator);
  if ( *(_BYTE *)(((unsigned __int64)&a2->combat_config_hash >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->combat_config_hash);
  combat_config_hash = a2->combat_config_hash;
  if ( *(_BYTE *)(((unsigned __int64)&this->combat_config_hash >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->combat_config_hash, p_combat_config_path_decorator);
  this->combat_config_hash = combat_config_hash;
  if ( *(char *)(((unsigned __int64)&a2->is_range_attack >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_range_attack, p_combat_config_path_decorator, &a2->is_range_attack);
  is_range_attack = a2->is_range_attack;
  v18 = *(_BYTE *)(((unsigned __int64)&this->is_range_attack >> 3) + 0x7FFF8000);
  if ( v18 < 0 )
  {
    LOBYTE(p_combat_config_path_decorator) = v18 != 0;
    __asan_report_store1(&this->is_range_attack, p_combat_config_path_decorator, &this->is_range_attack);
  }
  this->is_range_attack = is_range_attack;
  v19 = (((_BYTE)a2 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->initial_weapon >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->initial_weapon >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->initial_weapon);
  }
  initial_weapon = a2->initial_weapon;
  v21 = *(_BYTE *)(((unsigned __int64)&this->initial_weapon >> 3) + 0x7FFF8000);
  if ( v21 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v21 )
  {
    LOBYTE(v19) = v21 != 0;
    __asan_report_store4(&this->initial_weapon, v19);
  }
  this->initial_weapon = initial_weapon;
  if ( *(_BYTE *)(((unsigned __int64)&a2->weapon_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->weapon_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->weapon_type);
  }
  weapon_type = a2->weapon_type;
  v23 = *(_BYTE *)(((unsigned __int64)&this->weapon_type >> 3) + 0x7FFF8000);
  if ( v23 != 0 && v23 <= 3 )
  {
    LOBYTE(v19) = v23 != 0;
    __asan_report_store4(&this->weapon_type, v19);
  }
  this->weapon_type = weapon_type;
  v24 = (((_BYTE)a2 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->skill_depot_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->skill_depot_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->skill_depot_id);
  }
  skill_depot_id = a2->skill_depot_id;
  v26 = *(_BYTE *)(((unsigned __int64)&this->skill_depot_id >> 3) + 0x7FFF8000);
  LOBYTE(v24) = v26 != 0;
  if ( v26 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v26 )
    __asan_report_store4(&this->skill_depot_id, v24);
  this->skill_depot_id = skill_depot_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->stamina_recover_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->stamina_recover_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->stamina_recover_speed);
  }
  stamina_recover_speed = a2->stamina_recover_speed;
  if ( *(_BYTE *)(((unsigned __int64)&this->stamina_recover_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stamina_recover_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stamina_recover_speed, v24);
  }
  this->stamina_recover_speed = stamina_recover_speed;
  p_cand_skill_depot_ids = &a2->cand_skill_depot_ids;
  std::vector<unsigned int>::vector(&this->cand_skill_depot_ids, &a2->cand_skill_depot_ids);
  if ( *(_BYTE *)(((unsigned __int64)&a2->avatar_identity_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->avatar_identity_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->avatar_identity_type);
  }
  avatar_identity_type = a2->avatar_identity_type;
  v30 = *(_BYTE *)(((unsigned __int64)&this->avatar_identity_type >> 3) + 0x7FFF8000);
  if ( v30 != 0 && v30 <= 3 )
  {
    LOBYTE(p_cand_skill_depot_ids) = v30 != 0;
    __asan_report_store4(&this->avatar_identity_type, p_cand_skill_depot_ids);
  }
  this->avatar_identity_type = avatar_identity_type;
  v31 = (((_BYTE)a2 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->avatar_promote_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->avatar_promote_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->avatar_promote_id);
  }
  avatar_promote_id = a2->avatar_promote_id;
  v33 = *(_BYTE *)(((unsigned __int64)&this->avatar_promote_id >> 3) + 0x7FFF8000);
  if ( v33 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v33 )
  {
    LOBYTE(v31) = v33 != 0;
    __asan_report_store4(&this->avatar_promote_id, v31);
  }
  this->avatar_promote_id = avatar_promote_id;
  std::vector<unsigned int>::vector(&this->avatar_promote_reward_level_list, &a2->avatar_promote_reward_level_list);
  p_avatar_promote_reward_id_list = &a2->avatar_promote_reward_id_list;
  std::vector<unsigned int>::vector(&this->avatar_promote_reward_id_list, &a2->avatar_promote_reward_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&a2->feature_tag_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->feature_tag_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->feature_tag_group_id);
  }
  feature_tag_group_id = a2->feature_tag_group_id;
  v36 = *(_BYTE *)(((unsigned __int64)&this->feature_tag_group_id >> 3) + 0x7FFF8000);
  if ( v36 != 0 && v36 <= 3 )
  {
    LOBYTE(p_avatar_promote_reward_id_list) = v36 != 0;
    __asan_report_store4(&this->feature_tag_group_id, p_avatar_promote_reward_id_list);
  }
  this->feature_tag_group_id = feature_tag_group_id;
  std::string::basic_string(&this->info_desc, &a2->info_desc);
};
