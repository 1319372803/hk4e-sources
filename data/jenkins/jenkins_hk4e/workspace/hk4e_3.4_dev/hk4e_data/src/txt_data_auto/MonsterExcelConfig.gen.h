// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/MonsterExcelConfig.gen.h

// Line 92: range 00000000147FBE80-00000000147FBF92
data::MonsterDrop *__cdecl data::MonsterDrop::operator=(data::MonsterDrop *const this, const data::MonsterDrop *a2)
{
  uint32_t drop_id; // ecx
  char v3; // al
  float hp_percent; // xmm0_4
  const data::MonsterDrop *v6; // [rsp+0h] [rbp-10h]

  v6 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->drop_id);
  }
  drop_id = a2->drop_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->drop_id, a2);
  }
  this->drop_id = drop_id;
  if ( *(_BYTE *)(((unsigned __int64)&v6->hp_percent >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v6 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->hp_percent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v6->hp_percent);
  }
  hp_percent = v6->hp_percent;
  if ( *(_BYTE *)(((unsigned __int64)&this->hp_percent >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hp_percent >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hp_percent, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->hp_percent = hp_percent;
  return this;
};

// Line 92: range 0000000014CD0F5C-0000000014CD1023
void __cdecl data::MonsterDrop::MonsterDrop(data::MonsterDrop *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MonsterDrop + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MonsterDrop = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->drop_id, v1);
  }
  this->drop_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->hp_percent >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hp_percent >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hp_percent, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->hp_percent = 0.0;
};

// Line 92: range 0000000014B2CB38-0000000014B2CC7A
void __cdecl data::MonsterDrop::MonsterDrop(data::MonsterDrop *const this, const data::MonsterDrop *a2)
{
  int (**v2)(...); // rdx
  uint32_t drop_id; // ecx
  char v4; // al
  float hp_percent; // xmm0_4
  const data::MonsterDrop *v6; // [rsp+0h] [rbp-10h]

  v6 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MonsterDrop + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MonsterDrop = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->drop_id);
  }
  drop_id = a2->drop_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->drop_id, a2);
  }
  this->drop_id = drop_id;
  if ( *(_BYTE *)(((unsigned __int64)&v6->hp_percent >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v6 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->hp_percent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v6->hp_percent);
  }
  hp_percent = v6->hp_percent;
  if ( *(_BYTE *)(((unsigned __int64)&this->hp_percent >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hp_percent >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hp_percent, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->hp_percent = hp_percent;
};

// Line 95: range 0000000014B2CCBE-0000000014B2CCE8
void __cdecl data::MonsterDrop::~MonsterDrop(data::MonsterDrop *const this)
{
  data::MonsterDrop::~MonsterDrop(this);
  operator delete(this, 0x10uLL);
};

// Line 95: range 0000000014B2CC7C-0000000014B2CCBD
void __cdecl data::MonsterDrop::~MonsterDrop(data::MonsterDrop *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MonsterDrop + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MonsterDrop = v2;
};

// Line 105: range 0000000014774ACE-000000001477510C
void __cdecl data::MonsterExcelConfig::MonsterExcelConfig(data::MonsterExcelConfig *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rsi
  char v15[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::MonsterExcelConfig::MonsterExcelConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  data::CreatureExcelConfig::CreatureExcelConfig((data::CreatureExcelConfig *const)this);
  v5 = (int (**)(...))(&`vtable for'data::MonsterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EntityExcelConfig = v5;
  v6 = (((_BYTE)this - 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->type, v6);
  }
  this->type = MONSTER_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->security_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->security_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->security_level, v6);
  }
  this->security_level = NORMAL_1;
  std::string::basic_string(&this->server_script);
  std::string::basic_string(&this->combat_config);
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    &this->combat_config_path_decorator,
    "Data/_BinOutput/Monster/*.MiHoYoBinData",
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  std::vector<unsigned int>::vector(&this->affix);
  std::string::basic_string(&this->ai);
  if ( *(char *)(((unsigned __int64)&this->is_ai_hash_check >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ai_hash_check, "Data/_BinOutput/Monster/*.MiHoYoBinData", &this->is_ai_hash_check);
  this->is_ai_hash_check = 0;
  std::vector<unsigned int>::vector(&this->equips);
  if ( *(char *)(((unsigned __int64)&this->can_swim >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->can_swim, "Data/_BinOutput/Monster/*.MiHoYoBinData", &this->can_swim);
  this->can_swim = 0;
  std::vector<data::MonsterDrop>::vector(&this->hp_drops);
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->kill_drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->kill_drop_id, "Data/_BinOutput/Monster/*.MiHoYoBinData");
  }
  this->kill_drop_id = 0;
  v7 = ((_BYTE)this - 76) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->is_scene_reward >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_scene_reward >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_scene_reward, v7, v8);
  this->is_scene_reward = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->vision_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->vision_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->vision_level, v7);
  }
  this->vision_level = VISION_LEVEL_NORMAL;
  v9 = ((_BYTE)this - 68) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->is_invisible_reset >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->is_invisible_reset >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_invisible_reset, v9, v10);
  this->is_invisible_reset = 0;
  std::string::basic_string(&this->exclude_weathers);
  if ( *(_BYTE *)(((unsigned __int64)&this->feature_tag_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->feature_tag_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->feature_tag_group_id, v9);
  }
  this->feature_tag_group_id = 0;
  v11 = (((_BYTE)this - 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_prop_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mp_prop_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->mp_prop_id, v11);
  }
  this->mp_prop_id = 0;
  std::string::basic_string(&this->skin);
  if ( *(_BYTE *)(((unsigned __int64)&this->describe_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->describe_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->describe_id, v11);
  }
  this->describe_id = 0;
  v12 = ((_BYTE)this + 12) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&this->safety_check >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&this->safety_check >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->safety_check, v12, v13);
  this->safety_check = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->combat_bgm_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->combat_bgm_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->combat_bgm_level, v12);
  }
  this->combat_bgm_level = 0;
  v14 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_budget_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entity_budget_level >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entity_budget_level, v14);
  }
  this->entity_budget_level = 0;
  if ( *(char *)(((unsigned __int64)&this->hide_name_in_element_view >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->hide_name_in_element_view, v14, &this->hide_name_in_element_view);
  this->hide_name_in_element_view = 0;
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 105: range 0000000014D52946-0000000014D53361
void __cdecl data::MonsterExcelConfig::MonsterExcelConfig(
        data::MonsterExcelConfig *const this,
        const data::MonsterExcelConfig *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::MonsterType type; // ecx
  char v5; // dl
  data::MonsterSecurityLevel security_level; // ecx
  char v7; // al
  std::string *p_ai; // rsi
  bool is_ai_hash_check; // cl
  char v10; // al
  std::vector<unsigned int> *p_equips; // rsi
  bool can_swim; // cl
  char v13; // al
  std::vector<data::MonsterDrop> *p_hp_drops; // rsi
  uint32_t kill_drop_id; // ecx
  char v16; // al
  __int64 v17; // rsi
  __int64 v18; // rdx
  bool is_scene_reward; // cl
  char v20; // dl
  __int64 v21; // rdx
  data::VisionLevelType vision_level; // ecx
  char v23; // al
  __int64 v24; // rsi
  __int64 v25; // rdx
  bool is_invisible_reset; // cl
  char v27; // dl
  __int64 v28; // rdx
  std::string *p_exclude_weathers; // rsi
  uint32_t feature_tag_group_id; // ecx
  char v31; // al
  __int64 v32; // rsi
  uint32_t mp_prop_id; // ecx
  char v34; // dl
  std::string *p_skin; // rsi
  uint32_t describe_id; // ecx
  char v37; // al
  __int64 v38; // rsi
  __int64 v39; // rdx
  bool safety_check; // cl
  char v41; // dl
  __int64 v42; // rdx
  int32_t combat_bgm_level; // ecx
  char v44; // al
  __int64 v45; // rsi
  int32_t entity_budget_level; // ecx
  char v47; // dl
  bool hide_name_in_element_view; // cl
  char v49; // al

  data::CreatureExcelConfig::CreatureExcelConfig(
    (data::CreatureExcelConfig *const)this,
    (const data::CreatureExcelConfig *)a2);
  v2 = (int (**)(...))(&`vtable for'data::MonsterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_EntityExcelConfig = v2;
  v3 = (((_BYTE)a2 - 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this - 52) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->type, v3);
  }
  this->type = type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->security_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->security_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->security_level);
  }
  security_level = a2->security_level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->security_level >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->security_level, v3);
  }
  this->security_level = security_level;
  std::string::basic_string(&this->server_script, &a2->server_script);
  std::string::basic_string(&this->combat_config, &a2->combat_config);
  std::string::basic_string(&this->combat_config_path_decorator, &a2->combat_config_path_decorator);
  std::vector<unsigned int>::vector(&this->affix, &a2->affix);
  p_ai = &a2->ai;
  std::string::basic_string(&this->ai, &a2->ai);
  if ( *(char *)(((unsigned __int64)&a2->is_ai_hash_check >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_ai_hash_check, p_ai, &a2->is_ai_hash_check);
  is_ai_hash_check = a2->is_ai_hash_check;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_ai_hash_check >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(p_ai) = v10 != 0;
    __asan_report_store1(&this->is_ai_hash_check, p_ai, &this->is_ai_hash_check);
  }
  this->is_ai_hash_check = is_ai_hash_check;
  p_equips = &a2->equips;
  std::vector<unsigned int>::vector(&this->equips, &a2->equips);
  if ( *(char *)(((unsigned __int64)&a2->can_swim >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->can_swim, p_equips, &a2->can_swim);
  can_swim = a2->can_swim;
  v13 = *(_BYTE *)(((unsigned __int64)&this->can_swim >> 3) + 0x7FFF8000);
  if ( v13 < 0 )
  {
    LOBYTE(p_equips) = v13 != 0;
    __asan_report_store1(&this->can_swim, p_equips, &this->can_swim);
  }
  this->can_swim = can_swim;
  p_hp_drops = &a2->hp_drops;
  std::vector<data::MonsterDrop>::vector(&this->hp_drops, &a2->hp_drops);
  if ( *(_BYTE *)(((unsigned __int64)&a2->kill_drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->kill_drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->kill_drop_id);
  }
  kill_drop_id = a2->kill_drop_id;
  v16 = *(_BYTE *)(((unsigned __int64)&this->kill_drop_id >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(p_hp_drops) = v16 != 0;
    __asan_report_store4(&this->kill_drop_id, p_hp_drops);
  }
  this->kill_drop_id = kill_drop_id;
  v17 = ((_BYTE)a2 - 76) & 7;
  v18 = (*(_BYTE *)(((unsigned __int64)&a2->is_scene_reward >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((unsigned __int64)&a2->is_scene_reward >> 3) + 0x7FFF8000));
  if ( (_BYTE)v18 )
    __asan_report_load1(&a2->is_scene_reward, v17, v18);
  is_scene_reward = a2->is_scene_reward;
  v20 = *(_BYTE *)(((unsigned __int64)&this->is_scene_reward >> 3) + 0x7FFF8000);
  LOBYTE(v17) = v20 != 0;
  v21 = (v20 != 0) & (unsigned __int8)((((unsigned __int8)this - 76) & 7) >= v20);
  if ( (_BYTE)v21 )
    __asan_report_store1(&this->is_scene_reward, v17, v21);
  this->is_scene_reward = is_scene_reward;
  if ( *(_BYTE *)(((unsigned __int64)&a2->vision_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->vision_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->vision_level);
  }
  vision_level = a2->vision_level;
  v23 = *(_BYTE *)(((unsigned __int64)&this->vision_level >> 3) + 0x7FFF8000);
  if ( v23 != 0 && v23 <= 3 )
  {
    LOBYTE(v17) = v23 != 0;
    __asan_report_store4(&this->vision_level, v17);
  }
  this->vision_level = vision_level;
  v24 = ((_BYTE)a2 - 68) & 7;
  v25 = (*(_BYTE *)(((unsigned __int64)&a2->is_invisible_reset >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v24 >= *(_BYTE *)(((unsigned __int64)&a2->is_invisible_reset >> 3) + 0x7FFF8000));
  if ( (_BYTE)v25 )
    __asan_report_load1(&a2->is_invisible_reset, v24, v25);
  is_invisible_reset = a2->is_invisible_reset;
  v27 = *(_BYTE *)(((unsigned __int64)&this->is_invisible_reset >> 3) + 0x7FFF8000);
  LOBYTE(v24) = v27 != 0;
  v28 = (v27 != 0) & (unsigned __int8)((((unsigned __int8)this - 68) & 7) >= v27);
  if ( (_BYTE)v28 )
    __asan_report_store1(&this->is_invisible_reset, v24, v28);
  this->is_invisible_reset = is_invisible_reset;
  p_exclude_weathers = &a2->exclude_weathers;
  std::string::basic_string(&this->exclude_weathers, &a2->exclude_weathers);
  if ( *(_BYTE *)(((unsigned __int64)&a2->feature_tag_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->feature_tag_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->feature_tag_group_id);
  }
  feature_tag_group_id = a2->feature_tag_group_id;
  v31 = *(_BYTE *)(((unsigned __int64)&this->feature_tag_group_id >> 3) + 0x7FFF8000);
  if ( v31 != 0 && v31 <= 3 )
  {
    LOBYTE(p_exclude_weathers) = v31 != 0;
    __asan_report_store4(&this->feature_tag_group_id, p_exclude_weathers);
  }
  this->feature_tag_group_id = feature_tag_group_id;
  v32 = (((_BYTE)a2 - 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->mp_prop_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->mp_prop_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->mp_prop_id);
  }
  mp_prop_id = a2->mp_prop_id;
  v34 = *(_BYTE *)(((unsigned __int64)&this->mp_prop_id >> 3) + 0x7FFF8000);
  if ( v34 != 0 && (char)((((_BYTE)this - 28) & 7) + 3) >= v34 )
  {
    LOBYTE(v32) = v34 != 0;
    __asan_report_store4(&this->mp_prop_id, v32);
  }
  this->mp_prop_id = mp_prop_id;
  p_skin = &a2->skin;
  std::string::basic_string(&this->skin, &a2->skin);
  if ( *(_BYTE *)(((unsigned __int64)&a2->describe_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->describe_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->describe_id);
  }
  describe_id = a2->describe_id;
  v37 = *(_BYTE *)(((unsigned __int64)&this->describe_id >> 3) + 0x7FFF8000);
  if ( v37 != 0 && v37 <= 3 )
  {
    LOBYTE(p_skin) = v37 != 0;
    __asan_report_store4(&this->describe_id, p_skin);
  }
  this->describe_id = describe_id;
  v38 = ((_BYTE)a2 + 12) & 7;
  v39 = (*(_BYTE *)(((unsigned __int64)&a2->safety_check >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v38 >= *(_BYTE *)(((unsigned __int64)&a2->safety_check >> 3) + 0x7FFF8000));
  if ( (_BYTE)v39 )
    __asan_report_load1(&a2->safety_check, v38, v39);
  safety_check = a2->safety_check;
  v41 = *(_BYTE *)(((unsigned __int64)&this->safety_check >> 3) + 0x7FFF8000);
  LOBYTE(v38) = v41 != 0;
  v42 = (v41 != 0) & (unsigned __int8)((((unsigned __int8)this + 12) & 7) >= v41);
  if ( (_BYTE)v42 )
    __asan_report_store1(&this->safety_check, v38, v42);
  this->safety_check = safety_check;
  if ( *(_BYTE *)(((unsigned __int64)&a2->combat_bgm_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->combat_bgm_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->combat_bgm_level);
  }
  combat_bgm_level = a2->combat_bgm_level;
  v44 = *(_BYTE *)(((unsigned __int64)&this->combat_bgm_level >> 3) + 0x7FFF8000);
  if ( v44 != 0 && v44 <= 3 )
  {
    LOBYTE(v38) = v44 != 0;
    __asan_report_store4(&this->combat_bgm_level, v38);
  }
  this->combat_bgm_level = combat_bgm_level;
  v45 = (((_BYTE)a2 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->entity_budget_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->entity_budget_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->entity_budget_level);
  }
  entity_budget_level = a2->entity_budget_level;
  v47 = *(_BYTE *)(((unsigned __int64)&this->entity_budget_level >> 3) + 0x7FFF8000);
  LOBYTE(v45) = v47 != 0;
  if ( v47 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v47 )
    __asan_report_store4(&this->entity_budget_level, v45);
  this->entity_budget_level = entity_budget_level;
  if ( *(char *)(((unsigned __int64)&a2->hide_name_in_element_view >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->hide_name_in_element_view, v45, &a2->hide_name_in_element_view);
  hide_name_in_element_view = a2->hide_name_in_element_view;
  v49 = *(_BYTE *)(((unsigned __int64)&this->hide_name_in_element_view >> 3) + 0x7FFF8000);
  if ( v49 < 0 )
  {
    LOBYTE(v45) = v49 != 0;
    __asan_report_store1(&this->hide_name_in_element_view, v45, &this->hide_name_in_element_view);
  }
  this->hide_name_in_element_view = hide_name_in_element_view;
};

// Line 109: range 0000000014DEC1CC-0000000014DEC1F6
void __cdecl data::MonsterExcelConfig::~MonsterExcelConfig(data::MonsterExcelConfig *const this)
{
  data::MonsterExcelConfig::~MonsterExcelConfig(this);
  operator delete(this, 0x320uLL);
};

// Line 109: range 0000000014DEC0DC-0000000014DEC1CB
void __cdecl data::MonsterExcelConfig::~MonsterExcelConfig(data::MonsterExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MonsterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EntityExcelConfig = v2;
  std::string::~string(&this->skin);
  std::string::~string(&this->exclude_weathers);
  std::vector<data::MonsterDrop>::~vector(&this->hp_drops);
  std::vector<unsigned int>::~vector(&this->equips);
  std::string::~string(&this->ai);
  std::vector<unsigned int>::~vector(&this->affix);
  std::string::~string(&this->combat_config_path_decorator);
  std::string::~string(&this->combat_config);
  std::string::~string(&this->server_script);
  data::CreatureExcelConfig::~CreatureExcelConfig((data::CreatureExcelConfig *const)this);
};

// Line 143: range 000000001477510E-0000000014775238
void __cdecl data::MonsterAffixExcelConfig::MonsterAffixExcelConfig(data::MonsterAffixExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  v2 = (int (**)(...))(&`vtable for'data::MonsterAffixExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MonsterAffixExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::string::basic_string(&this->comment);
  std::vector<std::string>::vector(&this->ability_name);
  if ( *(char *)(((unsigned __int64)&this->is_common >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_common, v1, &this->is_common);
  this->is_common = 0;
  v3 = ((_BYTE)this + 73) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->pre_add >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->pre_add >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->pre_add, v3, v4);
  this->pre_add = 0;
  std::string::basic_string(&this->icon_path);
};

// Line 143: range 0000000014D534A2-0000000014D536DF
void __cdecl data::MonsterAffixExcelConfig::MonsterAffixExcelConfig(
        data::MonsterAffixExcelConfig *const this,
        const data::MonsterAffixExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::vector<std::string> *p_ability_name; // rsi
  bool is_common; // cl
  char v7; // al
  __int64 v8; // rsi
  __int64 v9; // rdx
  bool pre_add; // cl
  char v11; // dl
  __int64 v12; // rdx
  const data::MonsterAffixExcelConfig *v13; // [rsp+0h] [rbp-20h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MonsterAffixExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MonsterAffixExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  std::string::basic_string(&this->comment, &v13->comment);
  p_ability_name = &v13->ability_name;
  std::vector<std::string>::vector(&this->ability_name, &v13->ability_name);
  if ( *(char *)(((unsigned __int64)&v13->is_common >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v13->is_common, p_ability_name, &v13->is_common);
  is_common = v13->is_common;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_common >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(p_ability_name) = v7 != 0;
    __asan_report_store1(&this->is_common, p_ability_name, &this->is_common);
  }
  this->is_common = is_common;
  v8 = ((_BYTE)v13 + 73) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&v13->pre_add >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&v13->pre_add >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_load1(&v13->pre_add, v8, v9);
  pre_add = v13->pre_add;
  v11 = *(_BYTE *)(((unsigned __int64)&this->pre_add >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v11 != 0;
  v12 = (v11 != 0) & (unsigned __int8)((((unsigned __int8)this + 73) & 7) >= v11);
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->pre_add, v8, v12);
  this->pre_add = pre_add;
  std::string::basic_string(&this->icon_path, &v13->icon_path);
};

// Line 146: range 0000000014DEC0B0-0000000014DEC0DA
void __cdecl data::MonsterAffixExcelConfig::~MonsterAffixExcelConfig(data::MonsterAffixExcelConfig *const this)
{
  data::MonsterAffixExcelConfig::~MonsterAffixExcelConfig(this);
  operator delete(this, 0x70uLL);
};

// Line 146: range 0000000014DEC03E-0000000014DEC0AF
void __cdecl data::MonsterAffixExcelConfig::~MonsterAffixExcelConfig(data::MonsterAffixExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MonsterAffixExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MonsterAffixExcelConfig = v2;
  std::string::~string(&this->icon_path);
  std::vector<std::string>::~vector(&this->ability_name);
  std::string::~string(&this->comment);
};

// Line 162: range 000000001477523A-0000000014775398
void __cdecl data::MonsterRelationshipExcelConfig::MonsterRelationshipExcelConfig(
        data::MonsterRelationshipExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::MonsterRelationshipExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MonsterRelationshipExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::string::basic_string(&this->tag_str);
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_rarity >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_rarity >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->monster_rarity, v1);
  }
  this->monster_rarity = MONSTER_RARITY_NONE;
  v3 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->item_limit_type, v3);
  }
  this->item_limit_type = ITEM_LIMIT_NONE;
  std::string::basic_string(&this->monster_tag_str);
  if ( *(char *)(((unsigned __int64)&this->is_poly_drop >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_poly_drop, v3, &this->is_poly_drop);
  this->is_poly_drop = 0;
};

// Line 162: range 0000000014D53820-0000000014D53AA7
void __cdecl data::MonsterRelationshipExcelConfig::MonsterRelationshipExcelConfig(
        data::MonsterRelationshipExcelConfig *const this,
        const data::MonsterRelationshipExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::string *p_tag_str; // rsi
  data::MonsterRarityType monster_rarity; // ecx
  char v7; // al
  __int64 v8; // rsi
  data::ItemLimitType item_limit_type; // ecx
  char v10; // dl
  std::string *p_monster_tag_str; // rsi
  bool is_poly_drop; // cl
  char v13; // al
  const data::MonsterRelationshipExcelConfig *v14; // [rsp+0h] [rbp-20h]

  v14 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MonsterRelationshipExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MonsterRelationshipExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  p_tag_str = &v14->tag_str;
  std::string::basic_string(&this->tag_str, &v14->tag_str);
  if ( *(_BYTE *)(((unsigned __int64)&v14->monster_rarity >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->monster_rarity >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->monster_rarity);
  }
  monster_rarity = v14->monster_rarity;
  v7 = *(_BYTE *)(((unsigned __int64)&this->monster_rarity >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_tag_str) = v7 != 0;
    __asan_report_store4(&this->monster_rarity, p_tag_str);
  }
  this->monster_rarity = monster_rarity;
  v8 = (((_BYTE)v14 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->item_limit_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->item_limit_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->item_limit_type);
  }
  item_limit_type = v14->item_limit_type;
  v10 = *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->item_limit_type, v8);
  }
  this->item_limit_type = item_limit_type;
  p_monster_tag_str = &v14->monster_tag_str;
  std::string::basic_string(&this->monster_tag_str, &v14->monster_tag_str);
  if ( *(char *)(((unsigned __int64)&v14->is_poly_drop >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v14->is_poly_drop, p_monster_tag_str, &v14->is_poly_drop);
  is_poly_drop = v14->is_poly_drop;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_poly_drop >> 3) + 0x7FFF8000);
  if ( v13 < 0 )
  {
    LOBYTE(p_monster_tag_str) = v13 != 0;
    __asan_report_store1(&this->is_poly_drop, p_monster_tag_str, &this->is_poly_drop);
  }
  this->is_poly_drop = is_poly_drop;
};

// Line 165: range 0000000014DEBFB0-0000000014DEC011
void __cdecl data::MonsterRelationshipExcelConfig::~MonsterRelationshipExcelConfig(
        data::MonsterRelationshipExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MonsterRelationshipExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MonsterRelationshipExcelConfig = v2;
  std::string::~string(&this->monster_tag_str);
  std::string::~string(&this->tag_str);
};

// Line 165: range 0000000014DEC012-0000000014DEC03C
void __cdecl data::MonsterRelationshipExcelConfig::~MonsterRelationshipExcelConfig(
        data::MonsterRelationshipExcelConfig *const this)
{
  data::MonsterRelationshipExcelConfig::~MonsterRelationshipExcelConfig(this);
  operator delete(this, 0x60uLL);
};

// Line 181: range 0000000014D53BE8-0000000014D53D9C
void __cdecl data::MonsterDescribeExcelConfig::MonsterDescribeExcelConfig(
        data::MonsterDescribeExcelConfig *const this,
        const data::MonsterDescribeExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t title_id; // ecx
  char v7; // dl
  uint32_t special_name_lab_id; // ecx
  char v9; // al
  const data::MonsterDescribeExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MonsterDescribeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MonsterDescribeExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->title_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->title_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->title_id);
  }
  title_id = v10->title_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->title_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->title_id, v5);
  }
  this->title_id = title_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->special_name_lab_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->special_name_lab_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->special_name_lab_id);
  }
  special_name_lab_id = v10->special_name_lab_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->special_name_lab_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->special_name_lab_id, v5);
  }
  this->special_name_lab_id = special_name_lab_id;
};

// Line 184: range 0000000014DEBF42-0000000014DEBF83
void __cdecl data::MonsterDescribeExcelConfig::~MonsterDescribeExcelConfig(
        data::MonsterDescribeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MonsterDescribeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MonsterDescribeExcelConfig = v2;
};

// Line 184: range 0000000014DEBF84-0000000014DEBFAE
void __cdecl data::MonsterDescribeExcelConfig::~MonsterDescribeExcelConfig(
        data::MonsterDescribeExcelConfig *const this)
{
  data::MonsterDescribeExcelConfig::~MonsterDescribeExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 197: range 0000000014D53EDE-0000000014D53F98
void __cdecl data::AnimalDescribeExcelConfig::AnimalDescribeExcelConfig(
        data::AnimalDescribeExcelConfig *const this,
        const data::AnimalDescribeExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al

  v2 = (int (**)(...))(&`vtable for'data::AnimalDescribeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_AnimalDescribeExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
};

// Line 200: range 0000000014DEBED4-0000000014DEBF15
void __cdecl data::AnimalDescribeExcelConfig::~AnimalDescribeExcelConfig(data::AnimalDescribeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AnimalDescribeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AnimalDescribeExcelConfig = v2;
};

// Line 200: range 0000000014DEBF16-0000000014DEBF40
void __cdecl data::AnimalDescribeExcelConfig::~AnimalDescribeExcelConfig(data::AnimalDescribeExcelConfig *const this)
{
  data::AnimalDescribeExcelConfig::~AnimalDescribeExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 211: range 0000000014D540DA-0000000014D54194
void __cdecl data::MonsterTitleExcelConfig::MonsterTitleExcelConfig(
        data::MonsterTitleExcelConfig *const this,
        const data::MonsterTitleExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t title_id; // ecx
  char v4; // al

  v2 = (int (**)(...))(&`vtable for'data::MonsterTitleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MonsterTitleExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->title_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->title_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->title_id);
  }
  title_id = a2->title_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->title_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->title_id, a2);
  }
  this->title_id = title_id;
};

// Line 214: range 0000000014DEBEA8-0000000014DEBED2
void __cdecl data::MonsterTitleExcelConfig::~MonsterTitleExcelConfig(data::MonsterTitleExcelConfig *const this)
{
  data::MonsterTitleExcelConfig::~MonsterTitleExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 214: range 0000000014DEBE66-0000000014DEBEA7
void __cdecl data::MonsterTitleExcelConfig::~MonsterTitleExcelConfig(data::MonsterTitleExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MonsterTitleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MonsterTitleExcelConfig = v2;
};

// Line 225: range 0000000014D542D6-0000000014D5448B
void __cdecl data::MonsterSpecialNameExcelConfig::MonsterSpecialNameExcelConfig(
        data::MonsterSpecialNameExcelConfig *const this,
        const data::MonsterSpecialNameExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t special_name_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t special_name_lab_id; // ecx
  char v7; // dl
  bool is_in_random_list; // cl
  char v9; // al
  const data::MonsterSpecialNameExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MonsterSpecialNameExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MonsterSpecialNameExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->special_name_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->special_name_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->special_name_id);
  }
  special_name_id = a2->special_name_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->special_name_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->special_name_id, a2);
  }
  this->special_name_id = special_name_id;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->special_name_lab_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->special_name_lab_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->special_name_lab_id);
  }
  special_name_lab_id = v10->special_name_lab_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->special_name_lab_id >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
    __asan_report_store4(&this->special_name_lab_id, v5);
  this->special_name_lab_id = special_name_lab_id;
  if ( *(char *)(((unsigned __int64)&v10->is_in_random_list >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v10->is_in_random_list, v5, &v10->is_in_random_list);
  is_in_random_list = v10->is_in_random_list;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_in_random_list >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store1(&this->is_in_random_list, v5, &this->is_in_random_list);
  }
  this->is_in_random_list = is_in_random_list;
};

// Line 228: range 0000000014DEBDF8-0000000014DEBE39
void __cdecl data::MonsterSpecialNameExcelConfig::~MonsterSpecialNameExcelConfig(
        data::MonsterSpecialNameExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MonsterSpecialNameExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MonsterSpecialNameExcelConfig = v2;
};

// Line 228: range 0000000014DEBE3A-0000000014DEBE64
void __cdecl data::MonsterSpecialNameExcelConfig::~MonsterSpecialNameExcelConfig(
        data::MonsterSpecialNameExcelConfig *const this)
{
  data::MonsterSpecialNameExcelConfig::~MonsterSpecialNameExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 241: range 0000000014CD1182-0000000014CD1285
void __cdecl data::CaptureTagConfig::CaptureTagConfig(data::CaptureTagConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::CaptureTagConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CaptureTagConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->capture_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->capture_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->capture_type, v1);
  }
  this->capture_type = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->drop_id, v3);
  }
  this->drop_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_id, v3);
  }
  this->item_id = 0;
};

// Line 241: range 0000000014DCD402-0000000014DCD5B6
void __cdecl data::CaptureTagConfig::CaptureTagConfig(
        data::CaptureTagConfig *const this,
        const data::CaptureTagConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t capture_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t drop_id; // ecx
  char v7; // dl
  uint32_t item_id; // ecx
  char v9; // al
  const data::CaptureTagConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::CaptureTagConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_CaptureTagConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->capture_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->capture_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->capture_type);
  }
  capture_type = a2->capture_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->capture_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->capture_type, a2);
  }
  this->capture_type = capture_type;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->drop_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->drop_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->drop_id);
  }
  drop_id = v10->drop_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->drop_id, v5);
  }
  this->drop_id = drop_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->item_id);
  }
  item_id = v10->item_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->item_id, v5);
  }
  this->item_id = item_id;
};

// Line 244: range 0000000014C18C08-0000000014C18C49
void __cdecl data::CaptureTagConfig::~CaptureTagConfig(data::CaptureTagConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CaptureTagConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CaptureTagConfig = v2;
};

// Line 244: range 0000000014C18C4A-0000000014C18C74
void __cdecl data::CaptureTagConfig::~CaptureTagConfig(data::CaptureTagConfig *const this)
{
  data::CaptureTagConfig::~CaptureTagConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 255: range 00000000147753EE-000000001477547D
void __cdecl data::CaptureExcelConfig::CaptureExcelConfig(data::CaptureExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CaptureExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CaptureExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->monster_id, v1);
  }
  this->monster_id = 0;
  std::vector<data::CaptureTagConfig>::vector(&this->capture_tag_config);
};

// Line 255: range 0000000014D545CC-0000000014D546A1
void __cdecl data::CaptureExcelConfig::CaptureExcelConfig(
        data::CaptureExcelConfig *const this,
        const data::CaptureExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t monster_id; // ecx
  char v4; // al
  const data::CaptureExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::CaptureExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_CaptureExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->monster_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->monster_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->monster_id);
  }
  monster_id = a2->monster_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->monster_id, a2);
  }
  this->monster_id = monster_id;
  std::vector<data::CaptureTagConfig>::vector(&this->capture_tag_config, &v5->capture_tag_config);
};

// Line 258: range 0000000014DEBD7A-0000000014DEBDCB
void __cdecl data::CaptureExcelConfig::~CaptureExcelConfig(data::CaptureExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CaptureExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CaptureExcelConfig = v2;
  std::vector<data::CaptureTagConfig>::~vector(&this->capture_tag_config);
};

// Line 258: range 0000000014DEBDCC-0000000014DEBDF6
void __cdecl data::CaptureExcelConfig::~CaptureExcelConfig(data::CaptureExcelConfig *const this)
{
  data::CaptureExcelConfig::~CaptureExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 270: range 0000000014D547E2-0000000014D54996
void __cdecl data::CaptureTagsExcelConfig::CaptureTagsExcelConfig(
        data::CaptureTagsExcelConfig *const this,
        const data::CaptureTagsExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t capture_tag_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::CaptureCodexShowType codex_show_type; // ecx
  char v7; // dl
  data::ItemLimitType item_limit_type; // ecx
  char v9; // al
  const data::CaptureTagsExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::CaptureTagsExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_CaptureTagsExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->capture_tag_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->capture_tag_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->capture_tag_id);
  }
  capture_tag_id = a2->capture_tag_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->capture_tag_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->capture_tag_id, a2);
  }
  this->capture_tag_id = capture_tag_id;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->codex_show_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->codex_show_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->codex_show_type);
  }
  codex_show_type = v10->codex_show_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->codex_show_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->codex_show_type, v5);
  }
  this->codex_show_type = codex_show_type;
  if ( *(_BYTE *)(((unsigned __int64)&v10->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->item_limit_type);
  }
  item_limit_type = v10->item_limit_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->item_limit_type, v5);
  }
  this->item_limit_type = item_limit_type;
};

// Line 273: range 0000000014DEBD4E-0000000014DEBD78
void __cdecl data::CaptureTagsExcelConfig::~CaptureTagsExcelConfig(data::CaptureTagsExcelConfig *const this)
{
  data::CaptureTagsExcelConfig::~CaptureTagsExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 273: range 0000000014DEBD0C-0000000014DEBD4D
void __cdecl data::CaptureTagsExcelConfig::~CaptureTagsExcelConfig(data::CaptureTagsExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CaptureTagsExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CaptureTagsExcelConfig = v2;
};

// Line 286: range 0000000014CD141A-0000000014CD14FF
void __cdecl data::PolyMonsterDropConfig::PolyMonsterDropConfig(data::PolyMonsterDropConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::PolyMonsterDropConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PolyMonsterDropConfig = v2;
  std::vector<unsigned int>::vector(&this->param_list);
  std::string::basic_string(&this->drop_tag_str);
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_rarity >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_rarity >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->monster_rarity, v1);
  }
  this->monster_rarity = MONSTER_RARITY_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->item_limit_type, (((_BYTE)this + 68) & 7u) + 3);
  }
  this->item_limit_type = ITEM_LIMIT_NONE;
};

// Line 286: range 0000000014D52726-0000000014D528C2
void __cdecl data::PolyMonsterDropConfig::PolyMonsterDropConfig(
        data::PolyMonsterDropConfig *const this,
        const data::PolyMonsterDropConfig *a2)
{
  int (**v2)(...); // rdx
  std::string *p_drop_tag_str; // rsi
  data::MonsterRarityType monster_rarity; // ecx
  char v5; // al
  __int64 v6; // rsi
  data::ItemLimitType item_limit_type; // ecx
  char v8; // dl

  v2 = (int (**)(...))(&`vtable for'data::PolyMonsterDropConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PolyMonsterDropConfig = v2;
  std::vector<unsigned int>::vector(&this->param_list, &a2->param_list);
  p_drop_tag_str = &a2->drop_tag_str;
  std::string::basic_string(&this->drop_tag_str, &a2->drop_tag_str);
  if ( *(_BYTE *)(((unsigned __int64)&a2->monster_rarity >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->monster_rarity >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->monster_rarity);
  }
  monster_rarity = a2->monster_rarity;
  v5 = *(_BYTE *)(((unsigned __int64)&this->monster_rarity >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_drop_tag_str) = v5 != 0;
    __asan_report_store4(&this->monster_rarity, p_drop_tag_str);
  }
  this->monster_rarity = monster_rarity;
  v6 = (((_BYTE)a2 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->item_limit_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->item_limit_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->item_limit_type);
  }
  item_limit_type = a2->item_limit_type;
  v8 = *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v8 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->item_limit_type, v6);
  }
  this->item_limit_type = item_limit_type;
};

// Line 289: range 0000000014C198DE-0000000014C19908
void __cdecl data::PolyMonsterDropConfig::~PolyMonsterDropConfig(data::PolyMonsterDropConfig *const this)
{
  data::PolyMonsterDropConfig::~PolyMonsterDropConfig(this);
  operator delete(this, 0x48uLL);
};

// Line 289: range 0000000014C1987C-0000000014C198DD
void __cdecl data::PolyMonsterDropConfig::~PolyMonsterDropConfig(data::PolyMonsterDropConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::PolyMonsterDropConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PolyMonsterDropConfig = v2;
  std::string::~string(&this->drop_tag_str);
  std::vector<unsigned int>::~vector(&this->param_list);
};

// Line 301: range 00000000147754D2-00000000147755B7
void __cdecl data::MonsterRelOverloadExcelConfig::MonsterRelOverloadExcelConfig(
        data::MonsterRelOverloadExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MonsterRelOverloadExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MonsterRelOverloadExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->listen_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->listen_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->listen_type, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->listen_type = MONSTER_POLY_DROP_NONE;
  std::string::basic_string(&this->listen_param_str);
  std::vector<data::PolyMonsterDropConfig>::vector(&this->poly_monster_drop_config_list);
};

// Line 301: range 0000000014D54AD8-0000000014D54C74
void __cdecl data::MonsterRelOverloadExcelConfig::MonsterRelOverloadExcelConfig(
        data::MonsterRelOverloadExcelConfig *const this,
        const data::MonsterRelOverloadExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::MonsterPolyDropListenType listen_type; // ecx
  char v7; // dl
  const data::MonsterRelOverloadExcelConfig *v8; // [rsp+0h] [rbp-20h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MonsterRelOverloadExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MonsterRelOverloadExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->listen_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->listen_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->listen_type);
  }
  listen_type = v8->listen_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->listen_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->listen_type, v5);
  }
  this->listen_type = listen_type;
  std::string::basic_string(&this->listen_param_str, &v8->listen_param_str);
  std::vector<data::PolyMonsterDropConfig>::vector(
    &this->poly_monster_drop_config_list,
    &v8->poly_monster_drop_config_list);
};

// Line 304: range 0000000014DEBC7E-0000000014DEBCDF
void __cdecl data::MonsterRelOverloadExcelConfig::~MonsterRelOverloadExcelConfig(
        data::MonsterRelOverloadExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MonsterRelOverloadExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MonsterRelOverloadExcelConfig = v2;
  std::vector<data::PolyMonsterDropConfig>::~vector(&this->poly_monster_drop_config_list);
  std::string::~string(&this->listen_param_str);
};

// Line 304: range 0000000014DEBCE0-0000000014DEBD0A
void __cdecl data::MonsterRelOverloadExcelConfig::~MonsterRelOverloadExcelConfig(
        data::MonsterRelOverloadExcelConfig *const this)
{
  data::MonsterRelOverloadExcelConfig::~MonsterRelOverloadExcelConfig(this);
  operator delete(this, 0x48uLL);
};
