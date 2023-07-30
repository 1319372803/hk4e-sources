// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/AvatarTalentExcelConfig.gen.h

// Line 161: range 0000000013BE396A-0000000013BE3B43
void __cdecl data::AvatarTalentExcelConfig::AvatarTalentExcelConfig(data::AvatarTalentExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  data::BaseTalentConfig::BaseTalentConfig(this);
  v2 = (int (**)(...))(&`vtable for'data::AvatarTalentExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseTalentConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->talent_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->talent_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->talent_id, v1);
  }
  this->talent_id = 0;
  v3 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->prev_talent >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prev_talent >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->prev_talent, v3);
  }
  this->prev_talent = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->main_cost_item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->main_cost_item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->main_cost_item_id, v3);
  }
  this->main_cost_item_id = 0;
  v4 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->main_cost_item_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->main_cost_item_count >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->main_cost_item_count, v4);
  }
  this->main_cost_item_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->vice_cost_item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->vice_cost_item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->vice_cost_item_id, v4);
  }
  this->vice_cost_item_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->vice_cost_item_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->vice_cost_item_count >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->vice_cost_item_count, (((_BYTE)this + 108) & 7u) + 3);
  }
  this->vice_cost_item_count = 0;
};

// Line 161: range 00000000141A1D94-00000000141A20DA
void __cdecl data::AvatarTalentExcelConfig::AvatarTalentExcelConfig(
        data::AvatarTalentExcelConfig *const this,
        const data::AvatarTalentExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t talent_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t prev_talent; // ecx
  char v7; // dl
  uint32_t main_cost_item_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t main_cost_item_count; // ecx
  char v12; // dl
  uint32_t vice_cost_item_id; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t vice_cost_item_count; // ecx
  char v17; // dl
  const data::AvatarTalentExcelConfig *v18; // [rsp+0h] [rbp-10h]

  v18 = a2;
  data::BaseTalentConfig::BaseTalentConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::AvatarTalentExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseTalentConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->talent_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->talent_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->talent_id);
  }
  talent_id = a2->talent_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->talent_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->talent_id, a2);
  }
  this->talent_id = talent_id;
  v5 = (((_BYTE)v18 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->prev_talent >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->prev_talent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->prev_talent);
  }
  prev_talent = v18->prev_talent;
  v7 = *(_BYTE *)(((unsigned __int64)&this->prev_talent >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->prev_talent, v5);
  }
  this->prev_talent = prev_talent;
  if ( *(_BYTE *)(((unsigned __int64)&v18->main_cost_item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->main_cost_item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->main_cost_item_id);
  }
  main_cost_item_id = v18->main_cost_item_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->main_cost_item_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->main_cost_item_id, v5);
  }
  this->main_cost_item_id = main_cost_item_id;
  v10 = (((_BYTE)v18 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->main_cost_item_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->main_cost_item_count >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->main_cost_item_count);
  }
  main_cost_item_count = v18->main_cost_item_count;
  v12 = *(_BYTE *)(((unsigned __int64)&this->main_cost_item_count >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->main_cost_item_count, v10);
  }
  this->main_cost_item_count = main_cost_item_count;
  if ( *(_BYTE *)(((unsigned __int64)&v18->vice_cost_item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->vice_cost_item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->vice_cost_item_id);
  }
  vice_cost_item_id = v18->vice_cost_item_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->vice_cost_item_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->vice_cost_item_id, v10);
  }
  this->vice_cost_item_id = vice_cost_item_id;
  v15 = (((_BYTE)v18 + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->vice_cost_item_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->vice_cost_item_count >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->vice_cost_item_count);
  }
  vice_cost_item_count = v18->vice_cost_item_count;
  v17 = *(_BYTE *)(((unsigned __int64)&this->vice_cost_item_count >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 108) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->vice_cost_item_count, v15);
  }
  this->vice_cost_item_count = vice_cost_item_count;
};

// Line 165: range 00000000142A672C-00000000142A6779
void __cdecl data::AvatarTalentExcelConfig::~AvatarTalentExcelConfig(data::AvatarTalentExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AvatarTalentExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseTalentConfig = v2;
  data::BaseTalentConfig::~BaseTalentConfig(this);
};

// Line 165: range 00000000142A677A-00000000142A67A4
void __cdecl data::AvatarTalentExcelConfig::~AvatarTalentExcelConfig(data::AvatarTalentExcelConfig *const this)
{
  data::AvatarTalentExcelConfig::~AvatarTalentExcelConfig(this);
  operator delete(this, 0x70uLL);
};

// Line 181: range 0000000013BE3B98-0000000013BE3E72
void __cdecl data::ProudSkillExcelConfig::ProudSkillExcelConfig(data::ProudSkillExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rdx

  data::BaseTalentConfig::BaseTalentConfig(this);
  v2 = (int (**)(...))(&`vtable for'data::ProudSkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseTalentConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->proud_skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->proud_skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->proud_skill_id, v1);
  }
  this->proud_skill_id = 0;
  v3 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->proud_skill_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->proud_skill_group_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->proud_skill_group_id, v3);
  }
  this->proud_skill_group_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level, v3);
  }
  this->level = 0;
  v4 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->proud_skill_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->proud_skill_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->proud_skill_type, v4);
  }
  this->proud_skill_type = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_cost >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->coin_cost >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->coin_cost, v4);
  }
  this->coin_cost = 0;
  std::vector<data::IdCountConfig>::vector(&this->cost_items);
  std::vector<data::TalentFilterCond>::vector(&this->filter_conds);
  if ( *(_BYTE *)(((unsigned __int64)&this->break_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->break_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->break_level, v4);
  }
  this->break_level = 0;
  v5 = (((_BYTE)this - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->life_effect_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->life_effect_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->life_effect_type, v5);
  }
  this->life_effect_type = PROUD_EFFECT_NONE;
  std::vector<std::string>::vector(&this->life_effect_params);
  if ( *(char *)(((unsigned __int64)&this->effective_for_team >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->effective_for_team, v5, &this->effective_for_team);
  this->effective_for_team = 0;
  v6 = ((_BYTE)this - 63) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_hide_life_proud_skill >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_hide_life_proud_skill >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_hide_life_proud_skill, v6, v7);
  this->is_hide_life_proud_skill = 0;
};

// Line 181: range 00000000141A221C-00000000141A279F
void __cdecl data::ProudSkillExcelConfig::ProudSkillExcelConfig(
        data::ProudSkillExcelConfig *const this,
        const data::ProudSkillExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t proud_skill_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t proud_skill_group_id; // ecx
  char v7; // dl
  uint32_t level; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t proud_skill_type; // ecx
  char v12; // dl
  uint32_t coin_cost; // ecx
  char v14; // al
  std::vector<data::TalentFilterCond> *p_filter_conds; // rsi
  uint32_t break_level; // ecx
  char v17; // al
  __int64 v18; // rsi
  data::ProudLifeEffectType life_effect_type; // ecx
  char v20; // dl
  std::vector<std::string> *p_life_effect_params; // rsi
  uint8_t effective_for_team; // cl
  char v23; // al
  __int64 v24; // rsi
  __int64 v25; // rdx
  bool is_hide_life_proud_skill; // cl
  char v27; // dl
  __int64 v28; // rdx
  const data::ProudSkillExcelConfig *v29; // [rsp+0h] [rbp-20h]

  v29 = a2;
  data::BaseTalentConfig::BaseTalentConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ProudSkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseTalentConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->proud_skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->proud_skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->proud_skill_id);
  }
  proud_skill_id = a2->proud_skill_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->proud_skill_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->proud_skill_id, a2);
  }
  this->proud_skill_id = proud_skill_id;
  v5 = (((_BYTE)v29 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v29->proud_skill_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v29 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v29->proud_skill_group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v29->proud_skill_group_id);
  }
  proud_skill_group_id = v29->proud_skill_group_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->proud_skill_group_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->proud_skill_group_id, v5);
  }
  this->proud_skill_group_id = proud_skill_group_id;
  if ( *(_BYTE *)(((unsigned __int64)&v29->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v29->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v29->level);
  }
  level = v29->level;
  v9 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->level, v5);
  }
  this->level = level;
  v10 = (((_BYTE)v29 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v29->proud_skill_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v29 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v29->proud_skill_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v29->proud_skill_type);
  }
  proud_skill_type = v29->proud_skill_type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->proud_skill_type >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->proud_skill_type, v10);
  }
  this->proud_skill_type = proud_skill_type;
  if ( *(_BYTE *)(((unsigned __int64)&v29->coin_cost >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v29->coin_cost >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v29->coin_cost);
  }
  coin_cost = v29->coin_cost;
  v14 = *(_BYTE *)(((unsigned __int64)&this->coin_cost >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->coin_cost, v10);
  }
  this->coin_cost = coin_cost;
  std::vector<data::IdCountConfig>::vector(&this->cost_items, &v29->cost_items);
  p_filter_conds = &v29->filter_conds;
  std::vector<data::TalentFilterCond>::vector(&this->filter_conds, &v29->filter_conds);
  if ( *(_BYTE *)(((unsigned __int64)&v29->break_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v29->break_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v29->break_level);
  }
  break_level = v29->break_level;
  v17 = *(_BYTE *)(((unsigned __int64)&this->break_level >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(p_filter_conds) = v17 != 0;
    __asan_report_store4(&this->break_level, p_filter_conds);
  }
  this->break_level = break_level;
  v18 = (((_BYTE)v29 - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v29->life_effect_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v29 - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v29->life_effect_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v29->life_effect_type);
  }
  life_effect_type = v29->life_effect_type;
  v20 = *(_BYTE *)(((unsigned __int64)&this->life_effect_type >> 3) + 0x7FFF8000);
  if ( v20 != 0 && (char)((((_BYTE)this - 92) & 7) + 3) >= v20 )
  {
    LOBYTE(v18) = v20 != 0;
    __asan_report_store4(&this->life_effect_type, v18);
  }
  this->life_effect_type = life_effect_type;
  p_life_effect_params = &v29->life_effect_params;
  std::vector<std::string>::vector(&this->life_effect_params, &v29->life_effect_params);
  if ( *(char *)(((unsigned __int64)&v29->effective_for_team >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v29->effective_for_team, p_life_effect_params, &v29->effective_for_team);
  effective_for_team = v29->effective_for_team;
  v23 = *(_BYTE *)(((unsigned __int64)&this->effective_for_team >> 3) + 0x7FFF8000);
  if ( v23 < 0 )
  {
    LOBYTE(p_life_effect_params) = v23 != 0;
    __asan_report_store1(&this->effective_for_team, p_life_effect_params, &this->effective_for_team);
  }
  this->effective_for_team = effective_for_team;
  v24 = ((_BYTE)v29 - 63) & 7;
  v25 = (*(_BYTE *)(((unsigned __int64)&v29->is_hide_life_proud_skill >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v24 >= *(_BYTE *)(((unsigned __int64)&v29->is_hide_life_proud_skill >> 3) + 0x7FFF8000));
  if ( (_BYTE)v25 )
    __asan_report_load1(&v29->is_hide_life_proud_skill, v24, v25);
  is_hide_life_proud_skill = v29->is_hide_life_proud_skill;
  v27 = *(_BYTE *)(((unsigned __int64)&this->is_hide_life_proud_skill >> 3) + 0x7FFF8000);
  LOBYTE(v24) = v27 != 0;
  v28 = (v27 != 0) & (unsigned __int8)((((unsigned __int8)this - 63) & 7) >= v27);
  if ( (_BYTE)v28 )
    __asan_report_store1(&this->is_hide_life_proud_skill, v24, v28);
  this->is_hide_life_proud_skill = is_hide_life_proud_skill;
};

// Line 185: range 00000000142A667E-00000000142A66FF
void __cdecl data::ProudSkillExcelConfig::~ProudSkillExcelConfig(data::ProudSkillExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ProudSkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseTalentConfig = v2;
  std::vector<std::string>::~vector(&this->life_effect_params);
  std::vector<data::TalentFilterCond>::~vector(&this->filter_conds);
  std::vector<data::IdCountConfig>::~vector(&this->cost_items);
  data::BaseTalentConfig::~BaseTalentConfig(this);
};

// Line 185: range 00000000142A6700-00000000142A672A
void __cdecl data::ProudSkillExcelConfig::~ProudSkillExcelConfig(data::ProudSkillExcelConfig *const this)
{
  data::ProudSkillExcelConfig::~ProudSkillExcelConfig(this);
  operator delete(this, 0xC8uLL);
};
