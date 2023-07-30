// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityRogueExcelConfig.gen.h

// Line 281: range 00000000128DD884-00000000128DDADD
void __cdecl data::RogueStageExcelConfig::RogueStageExcelConfig(data::RogueStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  v2 = (int (**)(...))(&`vtable for'data::RogueStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueStageExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id, v1);
  }
  this->stage_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->first_pass_reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->first_pass_reward_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->first_pass_reward_id, v3);
  }
  this->first_pass_reward_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->open_time, v3);
  }
  this->open_time = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_coin >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_coin >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_coin, v4);
  }
  this->max_coin = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_level, v4);
  }
  this->max_level = 0;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->revise_level_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->revise_level_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->revise_level_id, v5);
  }
  this->revise_level_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->pre_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pre_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pre_quest_id, v5);
  }
  this->pre_quest_id = 0;
  std::vector<unsigned int>::vector(&this->unlock_rune_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->ssr_max_rand_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ssr_max_rand_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ssr_max_rand_count, v5);
  }
  this->ssr_max_rand_count = 0;
};

// Line 281: range 0000000012A750FE-0000000012A75536
void __cdecl data::RogueStageExcelConfig::RogueStageExcelConfig(
        data::RogueStageExcelConfig *const this,
        const data::RogueStageExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t stage_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t first_pass_reward_id; // ecx
  char v7; // dl
  uint32_t open_time; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t max_coin; // ecx
  char v12; // dl
  uint32_t max_level; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t revise_level_id; // ecx
  char v17; // dl
  uint32_t pre_quest_id; // ecx
  char v19; // al
  std::vector<unsigned int> *p_unlock_rune_list; // rsi
  uint32_t ssr_max_rand_count; // ecx
  char v22; // al
  const data::RogueStageExcelConfig *v23; // [rsp+0h] [rbp-10h]

  v23 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RogueStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RogueStageExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->stage_id);
  }
  stage_id = a2->stage_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->stage_id, a2);
  }
  this->stage_id = stage_id;
  v5 = (((_BYTE)v23 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->first_pass_reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->first_pass_reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->first_pass_reward_id);
  }
  first_pass_reward_id = v23->first_pass_reward_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->first_pass_reward_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->first_pass_reward_id, v5);
  }
  this->first_pass_reward_id = first_pass_reward_id;
  if ( *(_BYTE *)(((unsigned __int64)&v23->open_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->open_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->open_time);
  }
  open_time = v23->open_time;
  v9 = *(_BYTE *)(((unsigned __int64)&this->open_time >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->open_time, v5);
  }
  this->open_time = open_time;
  v10 = (((_BYTE)v23 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->max_coin >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->max_coin >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->max_coin);
  }
  max_coin = v23->max_coin;
  v12 = *(_BYTE *)(((unsigned __int64)&this->max_coin >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->max_coin, v10);
  }
  this->max_coin = max_coin;
  if ( *(_BYTE *)(((unsigned __int64)&v23->max_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->max_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->max_level);
  }
  max_level = v23->max_level;
  v14 = *(_BYTE *)(((unsigned __int64)&this->max_level >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->max_level, v10);
  }
  this->max_level = max_level;
  v15 = (((_BYTE)v23 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->revise_level_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->revise_level_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->revise_level_id);
  }
  revise_level_id = v23->revise_level_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->revise_level_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->revise_level_id, v15);
  }
  this->revise_level_id = revise_level_id;
  if ( *(_BYTE *)(((unsigned __int64)&v23->pre_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->pre_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->pre_quest_id);
  }
  pre_quest_id = v23->pre_quest_id;
  v19 = *(_BYTE *)(((unsigned __int64)&this->pre_quest_id >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->pre_quest_id, v15);
  }
  this->pre_quest_id = pre_quest_id;
  p_unlock_rune_list = &v23->unlock_rune_list;
  std::vector<unsigned int>::vector(&this->unlock_rune_list, &v23->unlock_rune_list);
  if ( *(_BYTE *)(((unsigned __int64)&v23->ssr_max_rand_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->ssr_max_rand_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->ssr_max_rand_count);
  }
  ssr_max_rand_count = v23->ssr_max_rand_count;
  v22 = *(_BYTE *)(((unsigned __int64)&this->ssr_max_rand_count >> 3) + 0x7FFF8000);
  if ( v22 != 0 && v22 <= 3 )
  {
    LOBYTE(p_unlock_rune_list) = v22 != 0;
    __asan_report_store4(&this->ssr_max_rand_count, p_unlock_rune_list);
  }
  this->ssr_max_rand_count = ssr_max_rand_count;
};

// Line 284: range 0000000012AA14C0-0000000012AA1511
void __cdecl data::RogueStageExcelConfig::~RogueStageExcelConfig(data::RogueStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RogueStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueStageExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->unlock_rune_list);
};

// Line 284: range 0000000012AA1512-0000000012AA153C
void __cdecl data::RogueStageExcelConfig::~RogueStageExcelConfig(data::RogueStageExcelConfig *const this)
{
  data::RogueStageExcelConfig::~RogueStageExcelConfig(this);
  operator delete(this, 0x48uLL);
};

// Line 303: range 00000000128DDADE-00000000128DDBEB
void __cdecl data::RoguelikeRuneExcelConfig::RoguelikeRuneExcelConfig(data::RoguelikeRuneExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  v2 = (int (**)(...))(&`vtable for'data::RoguelikeRuneExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RoguelikeRuneExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = ((_BYTE)this + 12) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_default_unlock >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_default_unlock >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_default_unlock, v3, v4);
  this->is_default_unlock = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->default_use_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->default_use_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->default_use_count, v3);
  }
  this->default_use_count = 0;
  std::string::basic_string(&this->ability_name);
};

// Line 303: range 0000000012A75678-0000000012A75842
void __cdecl data::RoguelikeRuneExcelConfig::RoguelikeRuneExcelConfig(
        data::RoguelikeRuneExcelConfig *const this,
        const data::RoguelikeRuneExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool is_default_unlock; // cl
  char v8; // dl
  __int64 v9; // rdx
  uint32_t default_use_count; // ecx
  char v11; // al
  const data::RoguelikeRuneExcelConfig *v12; // [rsp+0h] [rbp-10h]

  v12 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RoguelikeRuneExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RoguelikeRuneExcelConfig = v2;
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
  v5 = ((_BYTE)v12 + 12) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&v12->is_default_unlock >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&v12->is_default_unlock >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&v12->is_default_unlock, v5, v6);
  is_default_unlock = v12->is_default_unlock;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_default_unlock >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this + 12) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_default_unlock, v5, v9);
  this->is_default_unlock = is_default_unlock;
  if ( *(_BYTE *)(((unsigned __int64)&v12->default_use_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v12->default_use_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v12->default_use_count);
  }
  default_use_count = v12->default_use_count;
  v11 = *(_BYTE *)(((unsigned __int64)&this->default_use_count >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(v5) = v11 != 0;
    __asan_report_store4(&this->default_use_count, v5);
  }
  this->default_use_count = default_use_count;
  std::string::basic_string(&this->ability_name, &v12->ability_name);
};

// Line 306: range 0000000012AA1442-0000000012AA1493
void __cdecl data::RoguelikeRuneExcelConfig::~RoguelikeRuneExcelConfig(data::RoguelikeRuneExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RoguelikeRuneExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RoguelikeRuneExcelConfig = v2;
  std::string::~string(&this->ability_name);
};

// Line 306: range 0000000012AA1494-0000000012AA14BE
void __cdecl data::RoguelikeRuneExcelConfig::~RoguelikeRuneExcelConfig(data::RoguelikeRuneExcelConfig *const this)
{
  data::RoguelikeRuneExcelConfig::~RoguelikeRuneExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 320: range 00000000128DDDD8-00000000128DDEB5
void __cdecl data::RoguelikeEffectExcelConfig::RoguelikeEffectExcelConfig(data::RoguelikeEffectExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RoguelikeEffectExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RoguelikeEffectExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effect_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->effect_type, v1);
  }
  this->effect_type = ROGUELIKE_EFFECT_NONE;
  std::string::basic_string(&this->effect_key);
  std::string::basic_string(&this->effect_param);
  if ( *(_BYTE *)(((unsigned __int64)&this->display_offset >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->display_offset >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->display_offset, v1);
  }
  this->display_offset = 0;
};

// Line 320: range 0000000012A75D8E-0000000012A75F1A
void __cdecl data::RoguelikeEffectExcelConfig::RoguelikeEffectExcelConfig(
        data::RoguelikeEffectExcelConfig *const this,
        const data::RoguelikeEffectExcelConfig *a2)
{
  int (**v2)(...); // rdx
  data::RoguelikeEffectType effect_type; // ecx
  char v4; // al
  std::string *p_effect_param; // rsi
  int32_t display_offset; // ecx
  char v7; // al
  const data::RoguelikeEffectExcelConfig *v8; // [rsp+0h] [rbp-20h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RoguelikeEffectExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RoguelikeEffectExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->effect_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->effect_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->effect_type);
  }
  effect_type = a2->effect_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->effect_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->effect_type, a2);
  }
  this->effect_type = effect_type;
  std::string::basic_string(&this->effect_key, &v8->effect_key);
  p_effect_param = &v8->effect_param;
  std::string::basic_string(&this->effect_param, &v8->effect_param);
  if ( *(_BYTE *)(((unsigned __int64)&v8->display_offset >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->display_offset >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->display_offset);
  }
  display_offset = v8->display_offset;
  v7 = *(_BYTE *)(((unsigned __int64)&this->display_offset >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_effect_param) = v7 != 0;
    __asan_report_store4(&this->display_offset, p_effect_param);
  }
  this->display_offset = display_offset;
};

// Line 323: range 0000000012AA1416-0000000012AA1440
void __cdecl data::RoguelikeEffectExcelConfig::~RoguelikeEffectExcelConfig(
        data::RoguelikeEffectExcelConfig *const this)
{
  data::RoguelikeEffectExcelConfig::~RoguelikeEffectExcelConfig(this);
  operator delete(this, 0x58uLL);
};

// Line 323: range 0000000012AA13B4-0000000012AA1415
void __cdecl data::RoguelikeEffectExcelConfig::~RoguelikeEffectExcelConfig(
        data::RoguelikeEffectExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RoguelikeEffectExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RoguelikeEffectExcelConfig = v2;
  std::string::~string(&this->effect_param);
  std::string::~string(&this->effect_key);
};

// Line 335: range 0000000012A4F35C-0000000012A4F3EB
void __cdecl data::RoguelikeShikigamiUnlockConfig::RoguelikeShikigamiUnlockConfig(
        data::RoguelikeShikigamiUnlockConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RoguelikeShikigamiUnlockConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RoguelikeShikigamiUnlockConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = SHIKIGAMI_UNLOCK_NONE;
  std::string::basic_string(&this->param);
};

// Line 335: range 000000001296A608-000000001296A6DD
void __cdecl data::RoguelikeShikigamiUnlockConfig::RoguelikeShikigamiUnlockConfig(
        data::RoguelikeShikigamiUnlockConfig *const this,
        const data::RoguelikeShikigamiUnlockConfig *a2)
{
  int (**v2)(...); // rdx
  data::RoguelikeShikigamiUnlockType type; // ecx
  char v4; // al
  const data::RoguelikeShikigamiUnlockConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RoguelikeShikigamiUnlockConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RoguelikeShikigamiUnlockConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  std::string::basic_string(&this->param, &v5->param);
};

// Line 338: range 00000000129BF4F2-00000000129BF51C
void __cdecl data::RoguelikeShikigamiUnlockConfig::~RoguelikeShikigamiUnlockConfig(
        data::RoguelikeShikigamiUnlockConfig *const this)
{
  data::RoguelikeShikigamiUnlockConfig::~RoguelikeShikigamiUnlockConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 338: range 00000000129BF4A0-00000000129BF4F1
void __cdecl data::RoguelikeShikigamiUnlockConfig::~RoguelikeShikigamiUnlockConfig(
        data::RoguelikeShikigamiUnlockConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RoguelikeShikigamiUnlockConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RoguelikeShikigamiUnlockConfig = v2;
  std::string::~string(&this->param);
};

// Line 348: range 00000000128DDC40-00000000128DDDD7
void __cdecl data::RoguelikeShikigamiExcelConfig::RoguelikeShikigamiExcelConfig(
        data::RoguelikeShikigamiExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::RoguelikeShikigamiExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RoguelikeShikigamiExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->sequence_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sequence_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sequence_id, v1);
  }
  this->sequence_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->group_id, v3);
  }
  this->group_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level, v3);
  }
  this->level = 0;
  std::vector<data::RoguelikeShikigamiUnlockConfig>::vector(&this->unlock_cond);
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cost_item_id, v3);
  }
  this->cost_item_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_item_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_item_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cost_item_count, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->cost_item_count = 0;
};

// Line 348: range 0000000012A75984-0000000012A75C4D
void __cdecl data::RoguelikeShikigamiExcelConfig::RoguelikeShikigamiExcelConfig(
        data::RoguelikeShikigamiExcelConfig *const this,
        const data::RoguelikeShikigamiExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t sequence_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t group_id; // ecx
  char v7; // dl
  uint32_t level; // ecx
  char v9; // al
  std::vector<data::RoguelikeShikigamiUnlockConfig> *p_unlock_cond; // rsi
  uint32_t cost_item_id; // ecx
  char v12; // al
  __int64 v13; // rsi
  uint32_t cost_item_count; // ecx
  char v15; // dl
  const data::RoguelikeShikigamiExcelConfig *v16; // [rsp+0h] [rbp-10h]

  v16 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RoguelikeShikigamiExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RoguelikeShikigamiExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->sequence_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->sequence_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->sequence_id);
  }
  sequence_id = a2->sequence_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->sequence_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->sequence_id, a2);
  }
  this->sequence_id = sequence_id;
  v5 = (((_BYTE)v16 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->group_id);
  }
  group_id = v16->group_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->group_id, v5);
  }
  this->group_id = group_id;
  if ( *(_BYTE *)(((unsigned __int64)&v16->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->level);
  }
  level = v16->level;
  v9 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->level, v5);
  }
  this->level = level;
  p_unlock_cond = &v16->unlock_cond;
  std::vector<data::RoguelikeShikigamiUnlockConfig>::vector(&this->unlock_cond, &v16->unlock_cond);
  if ( *(_BYTE *)(((unsigned __int64)&v16->cost_item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->cost_item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->cost_item_id);
  }
  cost_item_id = v16->cost_item_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->cost_item_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_unlock_cond) = v12 != 0;
    __asan_report_store4(&this->cost_item_id, p_unlock_cond);
  }
  this->cost_item_id = cost_item_id;
  v13 = (((_BYTE)v16 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->cost_item_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->cost_item_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->cost_item_count);
  }
  cost_item_count = v16->cost_item_count;
  v15 = *(_BYTE *)(((unsigned __int64)&this->cost_item_count >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->cost_item_count, v13);
  }
  this->cost_item_count = cost_item_count;
};

// Line 351: range 0000000012AA1388-0000000012AA13B2
void __cdecl data::RoguelikeShikigamiExcelConfig::~RoguelikeShikigamiExcelConfig(
        data::RoguelikeShikigamiExcelConfig *const this)
{
  data::RoguelikeShikigamiExcelConfig::~RoguelikeShikigamiExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 351: range 0000000012AA1336-0000000012AA1387
void __cdecl data::RoguelikeShikigamiExcelConfig::~RoguelikeShikigamiExcelConfig(
        data::RoguelikeShikigamiExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RoguelikeShikigamiExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RoguelikeShikigamiExcelConfig = v2;
  std::vector<data::RoguelikeShikigamiUnlockConfig>::~vector(&this->unlock_cond);
};

// Line 367: range 00000000128DDEB6-00000000128DDF45
void __cdecl data::RoguelikeShikigamiGroupExcelConfig::RoguelikeShikigamiGroupExcelConfig(
        data::RoguelikeShikigamiGroupExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RoguelikeShikigamiGroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RoguelikeShikigamiGroupExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  data::RoguelikeEffectExcelConfig::RoguelikeEffectExcelConfig(&this->effect_config);
};

// Line 367: range 0000000012A75F1C-0000000012A75FF1
void __cdecl data::RoguelikeShikigamiGroupExcelConfig::RoguelikeShikigamiGroupExcelConfig(
        data::RoguelikeShikigamiGroupExcelConfig *const this,
        const data::RoguelikeShikigamiGroupExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::RoguelikeShikigamiGroupExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RoguelikeShikigamiGroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RoguelikeShikigamiGroupExcelConfig = v2;
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
  data::RoguelikeEffectExcelConfig::RoguelikeEffectExcelConfig(&this->effect_config, &v5->effect_config);
};

// Line 370: range 0000000012AA12B8-0000000012AA1309
void __cdecl data::RoguelikeShikigamiGroupExcelConfig::~RoguelikeShikigamiGroupExcelConfig(
        data::RoguelikeShikigamiGroupExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RoguelikeShikigamiGroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RoguelikeShikigamiGroupExcelConfig = v2;
  data::RoguelikeEffectExcelConfig::~RoguelikeEffectExcelConfig(&this->effect_config);
};

// Line 370: range 0000000012AA130A-0000000012AA1334
void __cdecl data::RoguelikeShikigamiGroupExcelConfig::~RoguelikeShikigamiGroupExcelConfig(
        data::RoguelikeShikigamiGroupExcelConfig *const this)
{
  data::RoguelikeShikigamiGroupExcelConfig::~RoguelikeShikigamiGroupExcelConfig(this);
  operator delete(this, 0x68uLL);
};

// Line 382: range 00000000128DDF46-00000000128DE096
void __cdecl data::RoguelikeCurseExcelConfig::RoguelikeCurseExcelConfig(data::RoguelikeCurseExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx

  v2 = (int (**)(...))(&`vtable for'data::RoguelikeCurseExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RoguelikeCurseExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level, v1);
  }
  this->level = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->group_id, v3);
  }
  this->group_id = 0;
  data::RoguelikeEffectExcelConfig::RoguelikeEffectExcelConfig(&this->effect_config);
  if ( *(char *)(((unsigned __int64)&this->is_dynamic_show >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_dynamic_show, v3, &this->is_dynamic_show);
  this->is_dynamic_show = 0;
  v4 = ((_BYTE)this + 105) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_clear_at_next_level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_clear_at_next_level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_clear_at_next_level, v4, v5);
  this->is_clear_at_next_level = 0;
};

// Line 382: range 0000000012A76132-0000000012A76382
void __cdecl data::RoguelikeCurseExcelConfig::RoguelikeCurseExcelConfig(
        data::RoguelikeCurseExcelConfig *const this,
        const data::RoguelikeCurseExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t level; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t group_id; // ecx
  char v7; // dl
  data::RoguelikeEffectExcelConfig *p_effect_config; // rsi
  bool is_dynamic_show; // cl
  char v10; // al
  __int64 v11; // rsi
  __int64 v12; // rdx
  bool is_clear_at_next_level; // cl
  char v14; // dl
  __int64 v15; // rdx
  const data::RoguelikeCurseExcelConfig *v16; // [rsp+0h] [rbp-10h]

  v16 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RoguelikeCurseExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RoguelikeCurseExcelConfig = v2;
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
  v5 = (((_BYTE)v16 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->group_id);
  }
  group_id = v16->group_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->group_id, v5);
  }
  this->group_id = group_id;
  p_effect_config = &v16->effect_config;
  data::RoguelikeEffectExcelConfig::RoguelikeEffectExcelConfig(&this->effect_config, &v16->effect_config);
  if ( *(char *)(((unsigned __int64)&v16->is_dynamic_show >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v16->is_dynamic_show, p_effect_config, &v16->is_dynamic_show);
  is_dynamic_show = v16->is_dynamic_show;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_dynamic_show >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(p_effect_config) = v10 != 0;
    __asan_report_store1(&this->is_dynamic_show, p_effect_config, &this->is_dynamic_show);
  }
  this->is_dynamic_show = is_dynamic_show;
  v11 = ((_BYTE)v16 + 105) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&v16->is_clear_at_next_level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&v16->is_clear_at_next_level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_load1(&v16->is_clear_at_next_level, v11, v12);
  is_clear_at_next_level = v16->is_clear_at_next_level;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_clear_at_next_level >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v14 != 0;
  v15 = (v14 != 0) & (unsigned __int8)((((unsigned __int8)this + 105) & 7) >= v14);
  if ( (_BYTE)v15 )
    __asan_report_store1(&this->is_clear_at_next_level, v11, v15);
  this->is_clear_at_next_level = is_clear_at_next_level;
};

// Line 385: range 0000000012AA123A-0000000012AA128B
void __cdecl data::RoguelikeCurseExcelConfig::~RoguelikeCurseExcelConfig(data::RoguelikeCurseExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RoguelikeCurseExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RoguelikeCurseExcelConfig = v2;
  data::RoguelikeEffectExcelConfig::~RoguelikeEffectExcelConfig(&this->effect_config);
};

// Line 385: range 0000000012AA128C-0000000012AA12B6
void __cdecl data::RoguelikeCurseExcelConfig::~RoguelikeCurseExcelConfig(data::RoguelikeCurseExcelConfig *const this)
{
  data::RoguelikeCurseExcelConfig::~RoguelikeCurseExcelConfig(this);
  operator delete(this, 0x70uLL);
};

// Line 400: range 0000000012A764C4-0000000012A766FD
void __cdecl data::RoguelikeCursePoolExcelConfig::RoguelikeCursePoolExcelConfig(
        data::RoguelikeCursePoolExcelConfig *const this,
        const data::RoguelikeCursePoolExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t sequence_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t pool_id; // ecx
  char v7; // dl
  uint32_t group_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t weight; // ecx
  char v12; // dl
  const data::RoguelikeCursePoolExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RoguelikeCursePoolExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RoguelikeCursePoolExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->sequence_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->sequence_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->sequence_id);
  }
  sequence_id = a2->sequence_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->sequence_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->sequence_id, a2);
  }
  this->sequence_id = sequence_id;
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->pool_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->pool_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->pool_id);
  }
  pool_id = v13->pool_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->pool_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->pool_id, v5);
  }
  this->pool_id = pool_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->group_id);
  }
  group_id = v13->group_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->group_id, v5);
  }
  this->group_id = group_id;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->weight);
  }
  weight = v13->weight;
  v12 = *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->weight, v10);
  }
  this->weight = weight;
};

// Line 403: range 0000000012AA11CC-0000000012AA120D
void __cdecl data::RoguelikeCursePoolExcelConfig::~RoguelikeCursePoolExcelConfig(
        data::RoguelikeCursePoolExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RoguelikeCursePoolExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RoguelikeCursePoolExcelConfig = v2;
};

// Line 403: range 0000000012AA120E-0000000012AA1238
void __cdecl data::RoguelikeCursePoolExcelConfig::~RoguelikeCursePoolExcelConfig(
        data::RoguelikeCursePoolExcelConfig *const this)
{
  data::RoguelikeCursePoolExcelConfig::~RoguelikeCursePoolExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 417: range 00000000128DE098-00000000128DE358
void __cdecl data::RoguelikeCardExcelConfig::RoguelikeCardExcelConfig(data::RoguelikeCardExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rdx

  v2 = (int (**)(...))(&`vtable for'data::RoguelikeCardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RoguelikeCardExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->label >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->label >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->label, v3);
  }
  this->label = ROGUELIKE_CARD_LABEL_COMBAT;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v3);
  }
  this->type = ROGUELIKE_CARD_TPYE_NONE;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->stack_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stack_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stack_limit, v4);
  }
  this->stack_limit = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->exclusive_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exclusive_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->exclusive_group_id, v4);
  }
  this->exclusive_group_id = 0;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->related_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->related_group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->related_group_id, v5);
  }
  this->related_group_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->related_add_weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->related_add_weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->related_add_weight, v5);
  }
  this->related_add_weight = 0;
  std::vector<unsigned int>::vector(&this->related_rune_list);
  std::vector<std::string>::vector(&this->related_element_list);
  data::RoguelikeEffectExcelConfig::RoguelikeEffectExcelConfig(&this->effect_config);
  if ( *(char *)(((unsigned __int64)&this->is_clear_at_next_level >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_clear_at_next_level, v5, &this->is_clear_at_next_level);
  this->is_clear_at_next_level = 0;
  v6 = ((_BYTE)this - 79) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_dynamic_show >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_dynamic_show >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_dynamic_show, v6, v7);
  this->is_dynamic_show = 0;
};

// Line 417: range 0000000012A7683E-0000000012A76D7D
void __cdecl data::RoguelikeCardExcelConfig::RoguelikeCardExcelConfig(
        data::RoguelikeCardExcelConfig *const this,
        const data::RoguelikeCardExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::RoguelikeCardLabel label; // ecx
  char v7; // dl
  data::RoguelikeCardType type; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t stack_limit; // ecx
  char v12; // dl
  uint32_t exclusive_group_id; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t related_group_id; // ecx
  char v17; // dl
  uint32_t related_add_weight; // ecx
  char v19; // al
  data::RoguelikeEffectExcelConfig *p_effect_config; // rsi
  bool is_clear_at_next_level; // cl
  char v22; // al
  __int64 v23; // rsi
  __int64 v24; // rdx
  bool is_dynamic_show; // cl
  char v26; // dl
  __int64 v27; // rdx
  const data::RoguelikeCardExcelConfig *v28; // [rsp+0h] [rbp-20h]

  v28 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RoguelikeCardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RoguelikeCardExcelConfig = v2;
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
  v5 = (((_BYTE)v28 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v28->label >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v28 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v28->label >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v28->label);
  }
  label = v28->label;
  v7 = *(_BYTE *)(((unsigned __int64)&this->label >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->label, v5);
  }
  this->label = label;
  if ( *(_BYTE *)(((unsigned __int64)&v28->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v28->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v28->type);
  }
  type = v28->type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->type, v5);
  }
  this->type = type;
  v10 = (((_BYTE)v28 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v28->stack_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v28 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v28->stack_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v28->stack_limit);
  }
  stack_limit = v28->stack_limit;
  v12 = *(_BYTE *)(((unsigned __int64)&this->stack_limit >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->stack_limit, v10);
  }
  this->stack_limit = stack_limit;
  if ( *(_BYTE *)(((unsigned __int64)&v28->exclusive_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v28->exclusive_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v28->exclusive_group_id);
  }
  exclusive_group_id = v28->exclusive_group_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->exclusive_group_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->exclusive_group_id, v10);
  }
  this->exclusive_group_id = exclusive_group_id;
  v15 = (((_BYTE)v28 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v28->related_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v28 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v28->related_group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v28->related_group_id);
  }
  related_group_id = v28->related_group_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->related_group_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->related_group_id, v15);
  }
  this->related_group_id = related_group_id;
  if ( *(_BYTE *)(((unsigned __int64)&v28->related_add_weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v28->related_add_weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v28->related_add_weight);
  }
  related_add_weight = v28->related_add_weight;
  v19 = *(_BYTE *)(((unsigned __int64)&this->related_add_weight >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->related_add_weight, v15);
  }
  this->related_add_weight = related_add_weight;
  std::vector<unsigned int>::vector(&this->related_rune_list, &v28->related_rune_list);
  std::vector<std::string>::vector(&this->related_element_list, &v28->related_element_list);
  p_effect_config = &v28->effect_config;
  data::RoguelikeEffectExcelConfig::RoguelikeEffectExcelConfig(&this->effect_config, &v28->effect_config);
  if ( *(char *)(((unsigned __int64)&v28->is_clear_at_next_level >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v28->is_clear_at_next_level, p_effect_config, &v28->is_clear_at_next_level);
  is_clear_at_next_level = v28->is_clear_at_next_level;
  v22 = *(_BYTE *)(((unsigned __int64)&this->is_clear_at_next_level >> 3) + 0x7FFF8000);
  if ( v22 < 0 )
  {
    LOBYTE(p_effect_config) = v22 != 0;
    __asan_report_store1(&this->is_clear_at_next_level, p_effect_config, &this->is_clear_at_next_level);
  }
  this->is_clear_at_next_level = is_clear_at_next_level;
  v23 = ((_BYTE)v28 - 79) & 7;
  v24 = (*(_BYTE *)(((unsigned __int64)&v28->is_dynamic_show >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v23 >= *(_BYTE *)(((unsigned __int64)&v28->is_dynamic_show >> 3) + 0x7FFF8000));
  if ( (_BYTE)v24 )
    __asan_report_load1(&v28->is_dynamic_show, v23, v24);
  is_dynamic_show = v28->is_dynamic_show;
  v26 = *(_BYTE *)(((unsigned __int64)&this->is_dynamic_show >> 3) + 0x7FFF8000);
  LOBYTE(v23) = v26 != 0;
  v27 = (v26 != 0) & (unsigned __int8)((((unsigned __int8)this - 79) & 7) >= v26);
  if ( (_BYTE)v27 )
    __asan_report_store1(&this->is_dynamic_show, v23, v27);
  this->is_dynamic_show = is_dynamic_show;
};

// Line 420: range 0000000012AA112E-0000000012AA119F
void __cdecl data::RoguelikeCardExcelConfig::~RoguelikeCardExcelConfig(data::RoguelikeCardExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RoguelikeCardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RoguelikeCardExcelConfig = v2;
  data::RoguelikeEffectExcelConfig::~RoguelikeEffectExcelConfig(&this->effect_config);
  std::vector<std::string>::~vector(&this->related_element_list);
  std::vector<unsigned int>::~vector(&this->related_rune_list);
};

// Line 420: range 0000000012AA11A0-0000000012AA11CA
void __cdecl data::RoguelikeCardExcelConfig::~RoguelikeCardExcelConfig(data::RoguelikeCardExcelConfig *const this)
{
  data::RoguelikeCardExcelConfig::~RoguelikeCardExcelConfig(this);
  operator delete(this, 0xB8uLL);
};

// Line 442: range 0000000012A76EBE-0000000012A771F1
void __cdecl data::RoguelikeCardPoolExcelConfig::RoguelikeCardPoolExcelConfig(
        data::RoguelikeCardPoolExcelConfig *const this,
        const data::RoguelikeCardPoolExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t sequence_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t card_pool_id; // ecx
  char v7; // dl
  data::RoguelikeCardType card_type; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t prob; // ecx
  char v12; // dl
  uint32_t card_id; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t weight; // ecx
  char v17; // dl
  const data::RoguelikeCardPoolExcelConfig *v18; // [rsp+0h] [rbp-10h]

  v18 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RoguelikeCardPoolExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RoguelikeCardPoolExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->sequence_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->sequence_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->sequence_id);
  }
  sequence_id = a2->sequence_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->sequence_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->sequence_id, a2);
  }
  this->sequence_id = sequence_id;
  v5 = (((_BYTE)v18 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->card_pool_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->card_pool_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->card_pool_id);
  }
  card_pool_id = v18->card_pool_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->card_pool_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->card_pool_id, v5);
  }
  this->card_pool_id = card_pool_id;
  if ( *(_BYTE *)(((unsigned __int64)&v18->card_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->card_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->card_type);
  }
  card_type = v18->card_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->card_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->card_type, v5);
  }
  this->card_type = card_type;
  v10 = (((_BYTE)v18 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->prob >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->prob >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->prob);
  }
  prob = v18->prob;
  v12 = *(_BYTE *)(((unsigned __int64)&this->prob >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->prob, v10);
  }
  this->prob = prob;
  if ( *(_BYTE *)(((unsigned __int64)&v18->card_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->card_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->card_id);
  }
  card_id = v18->card_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->card_id, v10);
  }
  this->card_id = card_id;
  v15 = (((_BYTE)v18 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->weight);
  }
  weight = v18->weight;
  v17 = *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->weight, v15);
  }
  this->weight = weight;
};

// Line 445: range 0000000012AA1102-0000000012AA112C
void __cdecl data::RoguelikeCardPoolExcelConfig::~RoguelikeCardPoolExcelConfig(
        data::RoguelikeCardPoolExcelConfig *const this)
{
  data::RoguelikeCardPoolExcelConfig::~RoguelikeCardPoolExcelConfig(this);
  operator delete(this, 0x20uLL);
};

// Line 445: range 0000000012AA10C0-0000000012AA1101
void __cdecl data::RoguelikeCardPoolExcelConfig::~RoguelikeCardPoolExcelConfig(
        data::RoguelikeCardPoolExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RoguelikeCardPoolExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RoguelikeCardPoolExcelConfig = v2;
};

// Line 461: range 00000000128DE35A-00000000128DE93F
void __cdecl data::RoguelikeDungeonWeightExcelConfig::RoguelikeDungeonWeightExcelConfig(
        data::RoguelikeDungeonWeightExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rsi

  v2 = (int (**)(...))(&`vtable for'data::RoguelikeDungeonWeightExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RoguelikeDungeonWeightExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stage, v3);
  }
  this->stage = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level, v3);
  }
  this->level = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dungeon_id, v4);
  }
  this->dungeon_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->weight, v4);
  }
  this->weight = 0;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->revise_level_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->revise_level_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->revise_level_id, v5);
  }
  this->revise_level_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->normal_card_pool_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->normal_card_pool_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->normal_card_pool_id, v5);
  }
  this->normal_card_pool_id = 0;
  v6 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->elite_card_pool_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->elite_card_pool_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->elite_card_pool_id, v6);
  }
  this->elite_card_pool_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->elite_hard_card_pool_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->elite_hard_card_pool_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->elite_hard_card_pool_id, v6);
  }
  this->elite_hard_card_pool_id = 0;
  v7 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->shop_card_pool_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shop_card_pool_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->shop_card_pool_id, v7);
  }
  this->shop_card_pool_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->boss_card_pool_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->boss_card_pool_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->boss_card_pool_id, v7);
  }
  this->boss_card_pool_id = 0;
  v8 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->curse_pool_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->curse_pool_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->curse_pool_id, v8);
  }
  this->curse_pool_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->shop_curse_prob >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->shop_curse_prob >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->shop_curse_prob, v8);
  }
  this->shop_curse_prob = 0;
  v9 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->trap_curse_prob >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trap_curse_prob >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->trap_curse_prob, v9);
  }
  this->trap_curse_prob = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->blast_bucket_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->blast_bucket_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->blast_bucket_group_id, v9);
  }
  this->blast_bucket_group_id = 0;
  std::vector<unsigned int>::vector(&this->blast_bucket_count_range);
  if ( *(_BYTE *)(((unsigned __int64)&this->blast_bucket_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->blast_bucket_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->blast_bucket_gadget_id, v9);
  }
  this->blast_bucket_gadget_id = 0;
  v10 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->trap_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trap_group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->trap_group_id, v10);
  }
  this->trap_group_id = 0;
  std::vector<unsigned int>::vector(&this->trap_count_range);
  if ( *(_BYTE *)(((unsigned __int64)&this->breakages_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->breakages_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->breakages_group_id, v10);
  }
  this->breakages_group_id = 0;
  std::vector<unsigned int>::vector(&this->breakages_count_range);
  std::vector<unsigned int>::vector(&this->breakages_gadget_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->byobu_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->byobu_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->byobu_group_id, v10);
  }
  this->byobu_group_id = 0;
  std::vector<unsigned int>::vector(&this->byobu_count_range);
  std::vector<unsigned int>::vector(&this->byobu_gadget_list);
  std::vector<unsigned int>::vector(&this->refresh_card_cost);
  if ( *(_BYTE *)(((unsigned __int64)&this->guard_point_tag >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->guard_point_tag, v10);
  this->guard_point_tag = 0LL;
  std::vector<unsigned int>::vector(&this->guard_count_range);
};

// Line 461: range 0000000012A77332-0000000012A77EC2
void __cdecl data::RoguelikeDungeonWeightExcelConfig::RoguelikeDungeonWeightExcelConfig(
        data::RoguelikeDungeonWeightExcelConfig *const this,
        const data::RoguelikeDungeonWeightExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t stage; // ecx
  char v7; // dl
  uint32_t level; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t dungeon_id; // ecx
  char v12; // dl
  uint32_t weight; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t revise_level_id; // ecx
  char v17; // dl
  uint32_t normal_card_pool_id; // ecx
  char v19; // al
  __int64 v20; // rsi
  uint32_t elite_card_pool_id; // ecx
  char v22; // dl
  uint32_t elite_hard_card_pool_id; // ecx
  char v24; // al
  __int64 v25; // rsi
  uint32_t shop_card_pool_id; // ecx
  char v27; // dl
  uint32_t boss_card_pool_id; // ecx
  char v29; // al
  __int64 v30; // rsi
  uint32_t curse_pool_id; // ecx
  char v32; // dl
  uint32_t shop_curse_prob; // ecx
  char v34; // al
  __int64 v35; // rsi
  uint32_t trap_curse_prob; // ecx
  char v37; // dl
  uint32_t blast_bucket_group_id; // ecx
  char v39; // al
  std::vector<unsigned int> *p_blast_bucket_count_range; // rsi
  uint32_t blast_bucket_gadget_id; // ecx
  char v42; // al
  __int64 v43; // rsi
  uint32_t trap_group_id; // ecx
  char v45; // dl
  std::vector<unsigned int> *p_trap_count_range; // rsi
  uint32_t breakages_group_id; // ecx
  char v48; // al
  std::vector<unsigned int> *p_breakages_gadget_id_list; // rsi
  uint32_t byobu_group_id; // ecx
  char v51; // al
  uint64_t guard_point_tag; // rdx
  const data::RoguelikeDungeonWeightExcelConfig *v53; // [rsp+0h] [rbp-20h]

  v53 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RoguelikeDungeonWeightExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RoguelikeDungeonWeightExcelConfig = v2;
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
  v5 = (((_BYTE)v53 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v53->stage >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v53 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v53->stage >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v53->stage);
  }
  stage = v53->stage;
  v7 = *(_BYTE *)(((unsigned __int64)&this->stage >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->stage, v5);
  }
  this->stage = stage;
  if ( *(_BYTE *)(((unsigned __int64)&v53->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v53->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v53->level);
  }
  level = v53->level;
  v9 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->level, v5);
  }
  this->level = level;
  v10 = (((_BYTE)v53 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v53->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v53 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v53->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v53->dungeon_id);
  }
  dungeon_id = v53->dungeon_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->dungeon_id, v10);
  }
  this->dungeon_id = dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)&v53->weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v53->weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v53->weight);
  }
  weight = v53->weight;
  v14 = *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->weight, v10);
  }
  this->weight = weight;
  v15 = (((_BYTE)v53 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v53->revise_level_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v53 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v53->revise_level_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v53->revise_level_id);
  }
  revise_level_id = v53->revise_level_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->revise_level_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->revise_level_id, v15);
  }
  this->revise_level_id = revise_level_id;
  if ( *(_BYTE *)(((unsigned __int64)&v53->normal_card_pool_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v53->normal_card_pool_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v53->normal_card_pool_id);
  }
  normal_card_pool_id = v53->normal_card_pool_id;
  v19 = *(_BYTE *)(((unsigned __int64)&this->normal_card_pool_id >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->normal_card_pool_id, v15);
  }
  this->normal_card_pool_id = normal_card_pool_id;
  v20 = (((_BYTE)v53 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v53->elite_card_pool_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v53 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v53->elite_card_pool_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v53->elite_card_pool_id);
  }
  elite_card_pool_id = v53->elite_card_pool_id;
  v22 = *(_BYTE *)(((unsigned __int64)&this->elite_card_pool_id >> 3) + 0x7FFF8000);
  if ( v22 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v22 )
  {
    LOBYTE(v20) = v22 != 0;
    __asan_report_store4(&this->elite_card_pool_id, v20);
  }
  this->elite_card_pool_id = elite_card_pool_id;
  if ( *(_BYTE *)(((unsigned __int64)&v53->elite_hard_card_pool_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v53->elite_hard_card_pool_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v53->elite_hard_card_pool_id);
  }
  elite_hard_card_pool_id = v53->elite_hard_card_pool_id;
  v24 = *(_BYTE *)(((unsigned __int64)&this->elite_hard_card_pool_id >> 3) + 0x7FFF8000);
  if ( v24 != 0 && v24 <= 3 )
  {
    LOBYTE(v20) = v24 != 0;
    __asan_report_store4(&this->elite_hard_card_pool_id, v20);
  }
  this->elite_hard_card_pool_id = elite_hard_card_pool_id;
  v25 = (((_BYTE)v53 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v53->shop_card_pool_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v53 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v53->shop_card_pool_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v53->shop_card_pool_id);
  }
  shop_card_pool_id = v53->shop_card_pool_id;
  v27 = *(_BYTE *)(((unsigned __int64)&this->shop_card_pool_id >> 3) + 0x7FFF8000);
  if ( v27 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v27 )
  {
    LOBYTE(v25) = v27 != 0;
    __asan_report_store4(&this->shop_card_pool_id, v25);
  }
  this->shop_card_pool_id = shop_card_pool_id;
  if ( *(_BYTE *)(((unsigned __int64)&v53->boss_card_pool_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v53->boss_card_pool_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v53->boss_card_pool_id);
  }
  boss_card_pool_id = v53->boss_card_pool_id;
  v29 = *(_BYTE *)(((unsigned __int64)&this->boss_card_pool_id >> 3) + 0x7FFF8000);
  if ( v29 != 0 && v29 <= 3 )
  {
    LOBYTE(v25) = v29 != 0;
    __asan_report_store4(&this->boss_card_pool_id, v25);
  }
  this->boss_card_pool_id = boss_card_pool_id;
  v30 = (((_BYTE)v53 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v53->curse_pool_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v53 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v53->curse_pool_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v53->curse_pool_id);
  }
  curse_pool_id = v53->curse_pool_id;
  v32 = *(_BYTE *)(((unsigned __int64)&this->curse_pool_id >> 3) + 0x7FFF8000);
  if ( v32 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v32 )
  {
    LOBYTE(v30) = v32 != 0;
    __asan_report_store4(&this->curse_pool_id, v30);
  }
  this->curse_pool_id = curse_pool_id;
  if ( *(_BYTE *)(((unsigned __int64)&v53->shop_curse_prob >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v53->shop_curse_prob >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v53->shop_curse_prob);
  }
  shop_curse_prob = v53->shop_curse_prob;
  v34 = *(_BYTE *)(((unsigned __int64)&this->shop_curse_prob >> 3) + 0x7FFF8000);
  if ( v34 != 0 && v34 <= 3 )
  {
    LOBYTE(v30) = v34 != 0;
    __asan_report_store4(&this->shop_curse_prob, v30);
  }
  this->shop_curse_prob = shop_curse_prob;
  v35 = (((_BYTE)v53 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v53->trap_curse_prob >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v53 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v53->trap_curse_prob >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v53->trap_curse_prob);
  }
  trap_curse_prob = v53->trap_curse_prob;
  v37 = *(_BYTE *)(((unsigned __int64)&this->trap_curse_prob >> 3) + 0x7FFF8000);
  if ( v37 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v37 )
  {
    LOBYTE(v35) = v37 != 0;
    __asan_report_store4(&this->trap_curse_prob, v35);
  }
  this->trap_curse_prob = trap_curse_prob;
  if ( *(_BYTE *)(((unsigned __int64)&v53->blast_bucket_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v53->blast_bucket_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v53->blast_bucket_group_id);
  }
  blast_bucket_group_id = v53->blast_bucket_group_id;
  v39 = *(_BYTE *)(((unsigned __int64)&this->blast_bucket_group_id >> 3) + 0x7FFF8000);
  if ( v39 != 0 && v39 <= 3 )
  {
    LOBYTE(v35) = v39 != 0;
    __asan_report_store4(&this->blast_bucket_group_id, v35);
  }
  this->blast_bucket_group_id = blast_bucket_group_id;
  p_blast_bucket_count_range = &v53->blast_bucket_count_range;
  std::vector<unsigned int>::vector(&this->blast_bucket_count_range, &v53->blast_bucket_count_range);
  if ( *(_BYTE *)(((unsigned __int64)&v53->blast_bucket_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v53->blast_bucket_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v53->blast_bucket_gadget_id);
  }
  blast_bucket_gadget_id = v53->blast_bucket_gadget_id;
  v42 = *(_BYTE *)(((unsigned __int64)&this->blast_bucket_gadget_id >> 3) + 0x7FFF8000);
  if ( v42 != 0 && v42 <= 3 )
  {
    LOBYTE(p_blast_bucket_count_range) = v42 != 0;
    __asan_report_store4(&this->blast_bucket_gadget_id, p_blast_bucket_count_range);
  }
  this->blast_bucket_gadget_id = blast_bucket_gadget_id;
  v43 = (((_BYTE)v53 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v53->trap_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v53 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v53->trap_group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v53->trap_group_id);
  }
  trap_group_id = v53->trap_group_id;
  v45 = *(_BYTE *)(((unsigned __int64)&this->trap_group_id >> 3) + 0x7FFF8000);
  if ( v45 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v45 )
  {
    LOBYTE(v43) = v45 != 0;
    __asan_report_store4(&this->trap_group_id, v43);
  }
  this->trap_group_id = trap_group_id;
  p_trap_count_range = &v53->trap_count_range;
  std::vector<unsigned int>::vector(&this->trap_count_range, &v53->trap_count_range);
  if ( *(_BYTE *)(((unsigned __int64)&v53->breakages_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v53->breakages_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v53->breakages_group_id);
  }
  breakages_group_id = v53->breakages_group_id;
  v48 = *(_BYTE *)(((unsigned __int64)&this->breakages_group_id >> 3) + 0x7FFF8000);
  if ( v48 != 0 && v48 <= 3 )
  {
    LOBYTE(p_trap_count_range) = v48 != 0;
    __asan_report_store4(&this->breakages_group_id, p_trap_count_range);
  }
  this->breakages_group_id = breakages_group_id;
  std::vector<unsigned int>::vector(&this->breakages_count_range, &v53->breakages_count_range);
  p_breakages_gadget_id_list = &v53->breakages_gadget_id_list;
  std::vector<unsigned int>::vector(&this->breakages_gadget_id_list, &v53->breakages_gadget_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v53->byobu_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v53->byobu_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v53->byobu_group_id);
  }
  byobu_group_id = v53->byobu_group_id;
  v51 = *(_BYTE *)(((unsigned __int64)&this->byobu_group_id >> 3) + 0x7FFF8000);
  if ( v51 != 0 && v51 <= 3 )
  {
    LOBYTE(p_breakages_gadget_id_list) = v51 != 0;
    __asan_report_store4(&this->byobu_group_id, p_breakages_gadget_id_list);
  }
  this->byobu_group_id = byobu_group_id;
  std::vector<unsigned int>::vector(&this->byobu_count_range, &v53->byobu_count_range);
  std::vector<unsigned int>::vector(&this->byobu_gadget_list, &v53->byobu_gadget_list);
  std::vector<unsigned int>::vector(&this->refresh_card_cost, &v53->refresh_card_cost);
  if ( *(_BYTE *)(((unsigned __int64)&v53->guard_point_tag >> 3) + 0x7FFF8000) )
    __asan_report_load8(&v53->guard_point_tag);
  guard_point_tag = v53->guard_point_tag;
  if ( *(_BYTE *)(((unsigned __int64)&this->guard_point_tag >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->guard_point_tag, &v53->refresh_card_cost);
  this->guard_point_tag = guard_point_tag;
  std::vector<unsigned int>::vector(&this->guard_count_range, &v53->guard_count_range);
};

// Line 464: range 0000000012AA0FC6-0000000012AA1093
void __cdecl data::RoguelikeDungeonWeightExcelConfig::~RoguelikeDungeonWeightExcelConfig(
        data::RoguelikeDungeonWeightExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RoguelikeDungeonWeightExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RoguelikeDungeonWeightExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->guard_count_range);
  std::vector<unsigned int>::~vector(&this->refresh_card_cost);
  std::vector<unsigned int>::~vector(&this->byobu_gadget_list);
  std::vector<unsigned int>::~vector(&this->byobu_count_range);
  std::vector<unsigned int>::~vector(&this->breakages_gadget_id_list);
  std::vector<unsigned int>::~vector(&this->breakages_count_range);
  std::vector<unsigned int>::~vector(&this->trap_count_range);
  std::vector<unsigned int>::~vector(&this->blast_bucket_count_range);
};

// Line 464: range 0000000012AA1094-0000000012AA10BE
void __cdecl data::RoguelikeDungeonWeightExcelConfig::~RoguelikeDungeonWeightExcelConfig(
        data::RoguelikeDungeonWeightExcelConfig *const this)
{
  data::RoguelikeDungeonWeightExcelConfig::~RoguelikeDungeonWeightExcelConfig(this);
  operator delete(this, 0x128uLL);
};

// Line 502: range 00000000128DE940-00000000128DEC40
void __cdecl data::RogueDungeonCellExcelConfig::RogueDungeonCellExcelConfig(
        data::RogueDungeonCellExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi

  v2 = (int (**)(...))(&`vtable for'data::RogueDungeonCellExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueDungeonCellExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dungeon_id, v3);
  }
  this->dungeon_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cell_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cell_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cell_id, v3);
  }
  this->cell_id = 0;
  std::vector<float>::vector(&this->cell_center_pos);
  std::vector<unsigned int>::vector(&this->map_coordinate);
  std::vector<unsigned int>::vector(&this->adjacency_cell_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, v3);
  }
  this->group_id = 0;
  v4 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->weight_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->weight_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->weight_id, v4);
  }
  this->weight_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->operator_delta_y >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->operator_delta_y >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->operator_delta_y, v4);
  }
  this->operator_delta_y = 0.0;
  v5 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->door_offset >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->door_offset >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->door_offset, v5);
  }
  this->door_offset = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->special_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->special_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->special_type, v5);
  }
  this->special_type = ROGUE_CELL_TYPE_NONE;
  v6 = (((_BYTE)this + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->door_delta_y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->door_delta_y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->door_delta_y, v6);
  }
  this->door_delta_y = 0.0;
  if ( *(char *)(((unsigned __int64)&this->is_init_cell >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_init_cell, v6, &this->is_init_cell);
  this->is_init_cell = 0;
};

// Line 502: range 0000000012A78004-0000000012A785B2
void __cdecl data::RogueDungeonCellExcelConfig::RogueDungeonCellExcelConfig(
        data::RogueDungeonCellExcelConfig *const this,
        const data::RogueDungeonCellExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t dungeon_id; // ecx
  char v7; // dl
  uint32_t cell_id; // ecx
  char v9; // al
  std::vector<unsigned int> *p_adjacency_cell_list; // rsi
  uint32_t group_id; // ecx
  char v12; // al
  __int64 v13; // rsi
  uint32_t weight_id; // ecx
  char v15; // dl
  float operator_delta_y; // xmm0_4
  float door_offset; // xmm0_4
  __int64 v18; // rsi
  data::RogueCellType special_type; // ecx
  char v20; // al
  float door_delta_y; // xmm0_4
  __int64 v22; // rsi
  bool is_init_cell; // cl
  char v24; // al
  const data::RogueDungeonCellExcelConfig *v25; // [rsp+0h] [rbp-20h]

  v25 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RogueDungeonCellExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RogueDungeonCellExcelConfig = v2;
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
  v5 = (((_BYTE)v25 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v25->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v25 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v25->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v25->dungeon_id);
  }
  dungeon_id = v25->dungeon_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->dungeon_id, v5);
  }
  this->dungeon_id = dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)&v25->cell_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v25->cell_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v25->cell_id);
  }
  cell_id = v25->cell_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->cell_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->cell_id, v5);
  }
  this->cell_id = cell_id;
  std::vector<float>::vector(&this->cell_center_pos, &v25->cell_center_pos);
  std::vector<unsigned int>::vector(&this->map_coordinate, &v25->map_coordinate);
  p_adjacency_cell_list = &v25->adjacency_cell_list;
  std::vector<unsigned int>::vector(&this->adjacency_cell_list, &v25->adjacency_cell_list);
  if ( *(_BYTE *)(((unsigned __int64)&v25->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v25->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v25->group_id);
  }
  group_id = v25->group_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_adjacency_cell_list) = v12 != 0;
    __asan_report_store4(&this->group_id, p_adjacency_cell_list);
  }
  this->group_id = group_id;
  v13 = (((_BYTE)v25 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v25->weight_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v25 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v25->weight_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v25->weight_id);
  }
  weight_id = v25->weight_id;
  v15 = *(_BYTE *)(((unsigned __int64)&this->weight_id >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v15 != 0;
  if ( v15 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v15 )
    __asan_report_store4(&this->weight_id, v13);
  this->weight_id = weight_id;
  if ( *(_BYTE *)(((unsigned __int64)&v25->operator_delta_y >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v25->operator_delta_y >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v25->operator_delta_y);
  }
  operator_delta_y = v25->operator_delta_y;
  if ( *(_BYTE *)(((unsigned __int64)&this->operator_delta_y >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->operator_delta_y >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->operator_delta_y, v13);
  }
  this->operator_delta_y = operator_delta_y;
  if ( *(_BYTE *)(((unsigned __int64)&v25->door_offset >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v25 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v25->door_offset >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v25->door_offset);
  }
  door_offset = v25->door_offset;
  v18 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->door_offset >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->door_offset >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->door_offset, v18);
  }
  this->door_offset = door_offset;
  if ( *(_BYTE *)(((unsigned __int64)&v25->special_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v25->special_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v25->special_type);
  }
  special_type = v25->special_type;
  v20 = *(_BYTE *)(((unsigned __int64)&this->special_type >> 3) + 0x7FFF8000);
  if ( v20 != 0 && v20 <= 3 )
  {
    LOBYTE(v18) = v20 != 0;
    __asan_report_store4(&this->special_type, v18);
  }
  this->special_type = special_type;
  if ( *(_BYTE *)(((unsigned __int64)&v25->door_delta_y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v25 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v25->door_delta_y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v25->door_delta_y);
  }
  door_delta_y = v25->door_delta_y;
  v22 = (((_BYTE)this + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->door_delta_y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->door_delta_y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->door_delta_y, v22);
  }
  this->door_delta_y = door_delta_y;
  if ( *(char *)(((unsigned __int64)&v25->is_init_cell >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v25->is_init_cell, v22, &v25->is_init_cell);
  is_init_cell = v25->is_init_cell;
  v24 = *(_BYTE *)(((unsigned __int64)&this->is_init_cell >> 3) + 0x7FFF8000);
  if ( v24 < 0 )
  {
    LOBYTE(v22) = v24 != 0;
    __asan_report_store1(&this->is_init_cell, v22, &this->is_init_cell);
  }
  this->is_init_cell = is_init_cell;
};

// Line 505: range 0000000012AA0F9A-0000000012AA0FC4
void __cdecl data::RogueDungeonCellExcelConfig::~RogueDungeonCellExcelConfig(
        data::RogueDungeonCellExcelConfig *const this)
{
  data::RogueDungeonCellExcelConfig::~RogueDungeonCellExcelConfig(this);
  operator delete(this, 0x80uLL);
};

// Line 505: range 0000000012AA0F28-0000000012AA0F99
void __cdecl data::RogueDungeonCellExcelConfig::~RogueDungeonCellExcelConfig(
        data::RogueDungeonCellExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RogueDungeonCellExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueDungeonCellExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->adjacency_cell_list);
  std::vector<unsigned int>::~vector(&this->map_coordinate);
  std::vector<float>::~vector(&this->cell_center_pos);
};

// Line 528: range 0000000012A786F4-0000000012A7892D
void __cdecl data::RogueCellWeightExcelConfig::RogueCellWeightExcelConfig(
        data::RogueCellWeightExcelConfig *const this,
        const data::RogueCellWeightExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t spring_weight; // ecx
  char v7; // dl
  uint32_t store_weight; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t elite_weight; // ecx
  char v12; // dl
  const data::RogueCellWeightExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RogueCellWeightExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RogueCellWeightExcelConfig = v2;
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
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->spring_weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->spring_weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->spring_weight);
  }
  spring_weight = v13->spring_weight;
  v7 = *(_BYTE *)(((unsigned __int64)&this->spring_weight >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->spring_weight, v5);
  }
  this->spring_weight = spring_weight;
  if ( *(_BYTE *)(((unsigned __int64)&v13->store_weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->store_weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->store_weight);
  }
  store_weight = v13->store_weight;
  v9 = *(_BYTE *)(((unsigned __int64)&this->store_weight >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->store_weight, v5);
  }
  this->store_weight = store_weight;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->elite_weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->elite_weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->elite_weight);
  }
  elite_weight = v13->elite_weight;
  v12 = *(_BYTE *)(((unsigned __int64)&this->elite_weight >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->elite_weight, v10);
  }
  this->elite_weight = elite_weight;
};

// Line 531: range 0000000012AA0EFC-0000000012AA0F26
void __cdecl data::RogueCellWeightExcelConfig::~RogueCellWeightExcelConfig(
        data::RogueCellWeightExcelConfig *const this)
{
  data::RogueCellWeightExcelConfig::~RogueCellWeightExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 531: range 0000000012AA0EBA-0000000012AA0EFB
void __cdecl data::RogueCellWeightExcelConfig::~RogueCellWeightExcelConfig(
        data::RogueCellWeightExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RogueCellWeightExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueCellWeightExcelConfig = v2;
};

// Line 545: range 0000000012A4F4BE-0000000012A4F54D
void __cdecl data::RogueSequenceCellConfig::RogueSequenceCellConfig(data::RogueSequenceCellConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RogueSequenceCellConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueSequenceCellConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = ROGUE_CELL_TYPE_NONE;
  std::vector<unsigned int>::vector(&this->range);
};

// Line 545: range 0000000012A74EF8-0000000012A74FCD
void __cdecl data::RogueSequenceCellConfig::RogueSequenceCellConfig(
        data::RogueSequenceCellConfig *const this,
        const data::RogueSequenceCellConfig *a2)
{
  int (**v2)(...); // rdx
  data::RogueCellType type; // ecx
  char v4; // al
  const data::RogueSequenceCellConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RogueSequenceCellConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RogueSequenceCellConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  std::vector<unsigned int>::vector(&this->range, &v5->range);
};

// Line 548: range 0000000012A20568-0000000012A205B9
void __cdecl data::RogueSequenceCellConfig::~RogueSequenceCellConfig(data::RogueSequenceCellConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RogueSequenceCellConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueSequenceCellConfig = v2;
  std::vector<unsigned int>::~vector(&this->range);
};

// Line 548: range 0000000012A205BA-0000000012A205E4
void __cdecl data::RogueSequenceCellConfig::~RogueSequenceCellConfig(data::RogueSequenceCellConfig *const this)
{
  data::RogueSequenceCellConfig::~RogueSequenceCellConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 558: range 00000000128DEC96-00000000128DEDC9
void __cdecl data::RogueSequenceExcelConfig::RogueSequenceExcelConfig(data::RogueSequenceExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::RogueSequenceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueSequenceExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dungeon_id, v3);
  }
  this->dungeon_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->sequence_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sequence_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sequence_id, v3);
  }
  this->sequence_id = 0;
  std::vector<unsigned int>::vector(&this->cell_list);
  std::map<unsigned int,unsigned int>::map(&this->cell_priority);
  std::vector<data::RogueSequenceCellConfig>::vector(&this->cell_seq_list);
};

// Line 558: range 0000000012A78A6E-0000000012A78CAF
void __cdecl data::RogueSequenceExcelConfig::RogueSequenceExcelConfig(
        data::RogueSequenceExcelConfig *const this,
        const data::RogueSequenceExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t dungeon_id; // ecx
  char v7; // dl
  uint32_t sequence_id; // ecx
  char v9; // al
  const data::RogueSequenceExcelConfig *v10; // [rsp+0h] [rbp-20h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RogueSequenceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RogueSequenceExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v10->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->dungeon_id);
  }
  dungeon_id = v10->dungeon_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->dungeon_id, v5);
  }
  this->dungeon_id = dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->sequence_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->sequence_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->sequence_id);
  }
  sequence_id = v10->sequence_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->sequence_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->sequence_id, v5);
  }
  this->sequence_id = sequence_id;
  std::vector<unsigned int>::vector(&this->cell_list, &v10->cell_list);
  std::map<unsigned int,unsigned int>::map(&this->cell_priority, &v10->cell_priority);
  std::vector<data::RogueSequenceCellConfig>::vector(&this->cell_seq_list, &v10->cell_seq_list);
};

// Line 561: range 0000000012AA0E1C-0000000012AA0E8D
void __cdecl data::RogueSequenceExcelConfig::~RogueSequenceExcelConfig(data::RogueSequenceExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RogueSequenceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueSequenceExcelConfig = v2;
  std::vector<data::RogueSequenceCellConfig>::~vector(&this->cell_seq_list);
  std::map<unsigned int,unsigned int>::~map(&this->cell_priority);
  std::vector<unsigned int>::~vector(&this->cell_list);
};

// Line 561: range 0000000012AA0E8E-0000000012AA0EB8
void __cdecl data::RogueSequenceExcelConfig::~RogueSequenceExcelConfig(data::RogueSequenceExcelConfig *const this)
{
  data::RogueSequenceExcelConfig::~RogueSequenceExcelConfig(this);
  operator delete(this, 0x78uLL);
};

// Line 577: range 0000000012A4F6B0-0000000012A4F775
void __cdecl data::RogueGadgetStateConfig::RogueGadgetStateConfig(data::RogueGadgetStateConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RogueGadgetStateConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueGadgetStateConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->state, v1);
  }
  this->state = ROGUE_GADGET_STATE_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gadget_state, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->gadget_state = 0;
};

// Line 577: range 0000000012A968C6-0000000012A96A05
void __cdecl data::RogueGadgetStateConfig::RogueGadgetStateConfig(
        data::RogueGadgetStateConfig *const this,
        const data::RogueGadgetStateConfig *a2)
{
  int (**v2)(...); // rdx
  data::RogueGadgetStateType state; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t gadget_state; // ecx
  char v7; // dl
  const data::RogueGadgetStateConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RogueGadgetStateConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RogueGadgetStateConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->state);
  }
  state = a2->state;
  v4 = *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->state, a2);
  }
  this->state = state;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->gadget_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->gadget_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->gadget_state);
  }
  gadget_state = v8->gadget_state;
  v7 = *(_BYTE *)(((unsigned __int64)&this->gadget_state >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->gadget_state, v5);
  }
  this->gadget_state = gadget_state;
};

// Line 580: range 0000000012A20C70-0000000012A20C9A
void __cdecl data::RogueGadgetStateConfig::~RogueGadgetStateConfig(data::RogueGadgetStateConfig *const this)
{
  data::RogueGadgetStateConfig::~RogueGadgetStateConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 580: range 0000000012A20C2E-0000000012A20C6F
void __cdecl data::RogueGadgetStateConfig::~RogueGadgetStateConfig(data::RogueGadgetStateConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RogueGadgetStateConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueGadgetStateConfig = v2;
};

// Line 590: range 00000000128DEE1E-00000000128DEF31
void __cdecl data::RogueGadgetExcelConfig::RogueGadgetExcelConfig(data::RogueGadgetExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::RogueGadgetExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueGadgetExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gadget_type, v3);
  }
  this->gadget_type = ROGUE_GADGET_TYPE_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_id, v3);
  }
  this->gadget_id = 0;
  std::vector<data::RogueGadgetStateConfig>::vector(&this->gadget_state_config_list);
};

// Line 590: range 0000000012A78DF0-0000000012A78FBF
void __cdecl data::RogueGadgetExcelConfig::RogueGadgetExcelConfig(
        data::RogueGadgetExcelConfig *const this,
        const data::RogueGadgetExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::RogueCreateGadgetType gadget_type; // ecx
  char v7; // dl
  uint32_t gadget_id; // ecx
  char v9; // al
  const data::RogueGadgetExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RogueGadgetExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RogueGadgetExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v10->gadget_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->gadget_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->gadget_type);
  }
  gadget_type = v10->gadget_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->gadget_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->gadget_type, v5);
  }
  this->gadget_type = gadget_type;
  if ( *(_BYTE *)(((unsigned __int64)&v10->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->gadget_id);
  }
  gadget_id = v10->gadget_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->gadget_id, v5);
  }
  this->gadget_id = gadget_id;
  std::vector<data::RogueGadgetStateConfig>::vector(&this->gadget_state_config_list, &v10->gadget_state_config_list);
};

// Line 593: range 0000000012AA0D9E-0000000012AA0DEF
void __cdecl data::RogueGadgetExcelConfig::~RogueGadgetExcelConfig(data::RogueGadgetExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RogueGadgetExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueGadgetExcelConfig = v2;
  std::vector<data::RogueGadgetStateConfig>::~vector(&this->gadget_state_config_list);
};

// Line 593: range 0000000012AA0DF0-0000000012AA0E1A
void __cdecl data::RogueGadgetExcelConfig::~RogueGadgetExcelConfig(data::RogueGadgetExcelConfig *const this)
{
  data::RogueGadgetExcelConfig::~RogueGadgetExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 607: range 0000000012A79100-0000000012A792B4
void __cdecl data::RogueGadgetRotConfig::RogueGadgetRotConfig(
        data::RogueGadgetRotConfig *const this,
        const data::RogueGadgetRotConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::RogueGadgetDirType dir; // ecx
  char v7; // dl
  uint32_t rotation; // ecx
  char v9; // al
  const data::RogueGadgetRotConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RogueGadgetRotConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RogueGadgetRotConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v10->dir >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->dir >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->dir);
  }
  dir = v10->dir;
  v7 = *(_BYTE *)(((unsigned __int64)&this->dir >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->dir, v5);
  }
  this->dir = dir;
  if ( *(_BYTE *)(((unsigned __int64)&v10->rotation >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->rotation >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->rotation);
  }
  rotation = v10->rotation;
  v9 = *(_BYTE *)(((unsigned __int64)&this->rotation >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->rotation, v5);
  }
  this->rotation = rotation;
};

// Line 610: range 0000000012AA0D72-0000000012AA0D9C
void __cdecl data::RogueGadgetRotConfig::~RogueGadgetRotConfig(data::RogueGadgetRotConfig *const this)
{
  data::RogueGadgetRotConfig::~RogueGadgetRotConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 610: range 0000000012AA0D30-0000000012AA0D71
void __cdecl data::RogueGadgetRotConfig::~RogueGadgetRotConfig(data::RogueGadgetRotConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RogueGadgetRotConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueGadgetRotConfig = v2;
};

// Line 623: range 00000000128DEF32-00000000128DF045
void __cdecl data::RogueMonsterPoolExcelConfig::RogueMonsterPoolExcelConfig(
        data::RogueMonsterPoolExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::RogueMonsterPoolExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueMonsterPoolExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dungeon_id, v3);
  }
  this->dungeon_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->difficulty >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->difficulty >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->difficulty, v3);
  }
  this->difficulty = ROGUE_MONSTER_DIFFICULTY_NORMAL;
  std::vector<unsigned int>::vector(&this->pool_id_list);
};

// Line 623: range 0000000012A793F6-0000000012A795C5
void __cdecl data::RogueMonsterPoolExcelConfig::RogueMonsterPoolExcelConfig(
        data::RogueMonsterPoolExcelConfig *const this,
        const data::RogueMonsterPoolExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t dungeon_id; // ecx
  char v7; // dl
  data::RogueMonsterPoolDifficultyType difficulty; // ecx
  char v9; // al
  const data::RogueMonsterPoolExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RogueMonsterPoolExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RogueMonsterPoolExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v10->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->dungeon_id);
  }
  dungeon_id = v10->dungeon_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->dungeon_id, v5);
  }
  this->dungeon_id = dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->difficulty >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->difficulty >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->difficulty);
  }
  difficulty = v10->difficulty;
  v9 = *(_BYTE *)(((unsigned __int64)&this->difficulty >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->difficulty, v5);
  }
  this->difficulty = difficulty;
  std::vector<unsigned int>::vector(&this->pool_id_list, &v10->pool_id_list);
};

// Line 626: range 0000000012AA0CB2-0000000012AA0D03
void __cdecl data::RogueMonsterPoolExcelConfig::~RogueMonsterPoolExcelConfig(
        data::RogueMonsterPoolExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RogueMonsterPoolExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueMonsterPoolExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->pool_id_list);
};

// Line 626: range 0000000012AA0D04-0000000012AA0D2E
void __cdecl data::RogueMonsterPoolExcelConfig::~RogueMonsterPoolExcelConfig(
        data::RogueMonsterPoolExcelConfig *const this)
{
  data::RogueMonsterPoolExcelConfig::~RogueMonsterPoolExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 640: range 00000000128DF046-00000000128DF110
void __cdecl data::RoguelikeTeamAbilityGroupExcelConfig::RoguelikeTeamAbilityGroupExcelConfig(
        data::RoguelikeTeamAbilityGroupExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RoguelikeTeamAbilityGroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RoguelikeTeamAbilityGroupExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::string::basic_string(&this->ability_group);
  if ( *(char *)(((unsigned __int64)&this->is_target_avatar >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_target_avatar, v1, &this->is_target_avatar);
  this->is_target_avatar = 0;
};

// Line 640: range 0000000012A79706-0000000012A79851
void __cdecl data::RoguelikeTeamAbilityGroupExcelConfig::RoguelikeTeamAbilityGroupExcelConfig(
        data::RoguelikeTeamAbilityGroupExcelConfig *const this,
        const data::RoguelikeTeamAbilityGroupExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::string *p_ability_group; // rsi
  bool is_target_avatar; // cl
  char v7; // al
  const data::RoguelikeTeamAbilityGroupExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RoguelikeTeamAbilityGroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RoguelikeTeamAbilityGroupExcelConfig = v2;
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
  p_ability_group = &v8->ability_group;
  std::string::basic_string(&this->ability_group, &v8->ability_group);
  if ( *(char *)(((unsigned __int64)&v8->is_target_avatar >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v8->is_target_avatar, p_ability_group, &v8->is_target_avatar);
  is_target_avatar = v8->is_target_avatar;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_target_avatar >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(p_ability_group) = v7 != 0;
    __asan_report_store1(&this->is_target_avatar, p_ability_group, &this->is_target_avatar);
  }
  this->is_target_avatar = is_target_avatar;
};

// Line 643: range 0000000012AA0C86-0000000012AA0CB0
void __cdecl data::RoguelikeTeamAbilityGroupExcelConfig::~RoguelikeTeamAbilityGroupExcelConfig(
        data::RoguelikeTeamAbilityGroupExcelConfig *const this)
{
  data::RoguelikeTeamAbilityGroupExcelConfig::~RoguelikeTeamAbilityGroupExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 643: range 0000000012AA0C34-0000000012AA0C85
void __cdecl data::RoguelikeTeamAbilityGroupExcelConfig::~RoguelikeTeamAbilityGroupExcelConfig(
        data::RoguelikeTeamAbilityGroupExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RoguelikeTeamAbilityGroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RoguelikeTeamAbilityGroupExcelConfig = v2;
  std::string::~string(&this->ability_group);
};

// Line 656: range 00000000128DF112-00000000128DF28B
void __cdecl data::RogueTokenExcelConfig::RogueTokenExcelConfig(data::RogueTokenExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::RogueTokenExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueTokenExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stage_id, v3);
  }
  this->stage_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level, v3);
  }
  this->level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cell_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cell_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cell_type, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->cell_type = ROGUE_MONSTER_DIFFICULTY_NORMAL;
  std::vector<unsigned int>::vector(&this->coin_a_num);
  std::vector<unsigned int>::vector(&this->coin_b_num);
  std::vector<unsigned int>::vector(&this->coin_c_num);
};

// Line 656: range 0000000012A79992-0000000012A79C58
void __cdecl data::RogueTokenExcelConfig::RogueTokenExcelConfig(
        data::RogueTokenExcelConfig *const this,
        const data::RogueTokenExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t stage_id; // ecx
  char v7; // dl
  uint32_t level; // ecx
  char v9; // al
  __int64 v10; // rsi
  data::RogueMonsterPoolDifficultyType cell_type; // ecx
  char v12; // dl
  const data::RogueTokenExcelConfig *v13; // [rsp+0h] [rbp-20h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RogueTokenExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RogueTokenExcelConfig = v2;
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
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->stage_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->stage_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->stage_id);
  }
  stage_id = v13->stage_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->stage_id, v5);
  }
  this->stage_id = stage_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->level);
  }
  level = v13->level;
  v9 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->level, v5);
  }
  this->level = level;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->cell_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->cell_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->cell_type);
  }
  cell_type = v13->cell_type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->cell_type >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->cell_type, v10);
  }
  this->cell_type = cell_type;
  std::vector<unsigned int>::vector(&this->coin_a_num, &v13->coin_a_num);
  std::vector<unsigned int>::vector(&this->coin_b_num, &v13->coin_b_num);
  std::vector<unsigned int>::vector(&this->coin_c_num, &v13->coin_c_num);
};

// Line 659: range 0000000012AA0C08-0000000012AA0C32
void __cdecl data::RogueTokenExcelConfig::~RogueTokenExcelConfig(data::RogueTokenExcelConfig *const this)
{
  data::RogueTokenExcelConfig::~RogueTokenExcelConfig(this);
  operator delete(this, 0x60uLL);
};

// Line 659: range 0000000012AA0B96-0000000012AA0C07
void __cdecl data::RogueTokenExcelConfig::~RogueTokenExcelConfig(data::RogueTokenExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RogueTokenExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueTokenExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->coin_c_num);
  std::vector<unsigned int>::~vector(&this->coin_b_num);
  std::vector<unsigned int>::~vector(&this->coin_a_num);
};

// Line 676: range 0000000012A4F8D2-0000000012A4F997
void __cdecl data::RogueGadgetWidgetConfig::RogueGadgetWidgetConfig(data::RogueGadgetWidgetConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RogueGadgetWidgetConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueGadgetWidgetConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_id, v1);
  }
  this->gadget_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->weight, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->weight = 0;
};

// Line 676: range 0000000012A96AC4-0000000012A96C03
void __cdecl data::RogueGadgetWidgetConfig::RogueGadgetWidgetConfig(
        data::RogueGadgetWidgetConfig *const this,
        const data::RogueGadgetWidgetConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t gadget_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t weight; // ecx
  char v7; // dl
  const data::RogueGadgetWidgetConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RogueGadgetWidgetConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RogueGadgetWidgetConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gadget_id);
  }
  gadget_id = a2->gadget_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->gadget_id, a2);
  }
  this->gadget_id = gadget_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->weight);
  }
  weight = v8->weight;
  v7 = *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->weight, v5);
  }
  this->weight = weight;
};

// Line 679: range 0000000012A22A6C-0000000012A22A96
void __cdecl data::RogueGadgetWidgetConfig::~RogueGadgetWidgetConfig(data::RogueGadgetWidgetConfig *const this)
{
  data::RogueGadgetWidgetConfig::~RogueGadgetWidgetConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 679: range 0000000012A22A2A-0000000012A22A6B
void __cdecl data::RogueGadgetWidgetConfig::~RogueGadgetWidgetConfig(data::RogueGadgetWidgetConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RogueGadgetWidgetConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueGadgetWidgetConfig = v2;
};

// Line 689: range 00000000128DF2E0-00000000128DF4E5
void __cdecl data::RogueGadgetWeightExcelConfig::RogueGadgetWeightExcelConfig(
        data::RogueGadgetWeightExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::RogueGadgetWeightExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueGadgetWeightExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stage_id, v3);
  }
  this->stage_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level, v3);
  }
  this->level = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dungeon_id, v4);
  }
  this->dungeon_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->trap_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trap_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->trap_group_id, v4);
  }
  this->trap_group_id = 0;
  std::vector<unsigned int>::vector(&this->trap_num_range);
  std::vector<data::RogueGadgetWidgetConfig>::vector(&this->trap_widget_config_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->ball_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ball_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ball_group_id, v4);
  }
  this->ball_group_id = 0;
  std::vector<unsigned int>::vector(&this->ball_num_range);
  std::vector<data::RogueGadgetWidgetConfig>::vector(&this->ball_widget_config_list);
};

// Line 689: range 0000000012A79D9A-0000000012A7A17A
void __cdecl data::RogueGadgetWeightExcelConfig::RogueGadgetWeightExcelConfig(
        data::RogueGadgetWeightExcelConfig *const this,
        const data::RogueGadgetWeightExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t stage_id; // ecx
  char v7; // dl
  uint32_t level; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t dungeon_id; // ecx
  char v12; // dl
  uint32_t trap_group_id; // ecx
  char v14; // al
  std::vector<data::RogueGadgetWidgetConfig> *p_trap_widget_config_list; // rsi
  uint32_t ball_group_id; // ecx
  char v17; // al
  const data::RogueGadgetWeightExcelConfig *v18; // [rsp+0h] [rbp-20h]

  v18 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RogueGadgetWeightExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RogueGadgetWeightExcelConfig = v2;
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
  v5 = (((_BYTE)v18 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->stage_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->stage_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->stage_id);
  }
  stage_id = v18->stage_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->stage_id, v5);
  }
  this->stage_id = stage_id;
  if ( *(_BYTE *)(((unsigned __int64)&v18->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->level);
  }
  level = v18->level;
  v9 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->level, v5);
  }
  this->level = level;
  v10 = (((_BYTE)v18 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->dungeon_id);
  }
  dungeon_id = v18->dungeon_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->dungeon_id, v10);
  }
  this->dungeon_id = dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)&v18->trap_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->trap_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->trap_group_id);
  }
  trap_group_id = v18->trap_group_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->trap_group_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->trap_group_id, v10);
  }
  this->trap_group_id = trap_group_id;
  std::vector<unsigned int>::vector(&this->trap_num_range, &v18->trap_num_range);
  p_trap_widget_config_list = &v18->trap_widget_config_list;
  std::vector<data::RogueGadgetWidgetConfig>::vector(&this->trap_widget_config_list, &v18->trap_widget_config_list);
  if ( *(_BYTE *)(((unsigned __int64)&v18->ball_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->ball_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->ball_group_id);
  }
  ball_group_id = v18->ball_group_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->ball_group_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(p_trap_widget_config_list) = v17 != 0;
    __asan_report_store4(&this->ball_group_id, p_trap_widget_config_list);
  }
  this->ball_group_id = ball_group_id;
  std::vector<unsigned int>::vector(&this->ball_num_range, &v18->ball_num_range);
  std::vector<data::RogueGadgetWidgetConfig>::vector(&this->ball_widget_config_list, &v18->ball_widget_config_list);
};

// Line 692: range 0000000012AA0AE8-0000000012AA0B69
void __cdecl data::RogueGadgetWeightExcelConfig::~RogueGadgetWeightExcelConfig(
        data::RogueGadgetWeightExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RogueGadgetWeightExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RogueGadgetWeightExcelConfig = v2;
  std::vector<data::RogueGadgetWidgetConfig>::~vector(&this->ball_widget_config_list);
  std::vector<unsigned int>::~vector(&this->ball_num_range);
  std::vector<data::RogueGadgetWidgetConfig>::~vector(&this->trap_widget_config_list);
  std::vector<unsigned int>::~vector(&this->trap_num_range);
};

// Line 692: range 0000000012AA0B6A-0000000012AA0B94
void __cdecl data::RogueGadgetWeightExcelConfig::~RogueGadgetWeightExcelConfig(
        data::RogueGadgetWeightExcelConfig *const this)
{
  data::RogueGadgetWeightExcelConfig::~RogueGadgetWeightExcelConfig(this);
  operator delete(this, 0x88uLL);
};
