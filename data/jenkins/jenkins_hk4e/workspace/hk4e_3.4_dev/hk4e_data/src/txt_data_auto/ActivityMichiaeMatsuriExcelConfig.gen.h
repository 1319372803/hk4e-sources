// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityMichiaeMatsuriExcelConfig.gen.h

// Line 67: range 00000000133BFD6A-00000000133BFFAC
void __cdecl data::MichiaeErosionAreaExcelConfig::MichiaeErosionAreaExcelConfig(
        data::MichiaeErosionAreaExcelConfig *const this,
        const data::MichiaeErosionAreaExcelConfig *rsi0)
{
  int (**v2)(...); // rdx
  uint32_t area_id; // ecx
  char v4; // al
  float a1; // xmm0_4
  __int64 v6; // rsi
  float a2; // xmm0_4
  float a3; // xmm0_4
  const data::MichiaeErosionAreaExcelConfig *v9; // [rsp+0h] [rbp-10h]

  v9 = rsi0;
  v2 = (int (**)(...))(&`vtable for'data::MichiaeErosionAreaExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, rsi0);
  this->_vptr_MichiaeErosionAreaExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&rsi0->area_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&rsi0->area_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&rsi0->area_id);
  }
  area_id = rsi0->area_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(rsi0) = v4 != 0;
    __asan_report_store4(&this->area_id, rsi0);
  }
  this->area_id = area_id;
  if ( *(_BYTE *)(((unsigned __int64)&v9->a1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v9 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->a1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v9->a1);
  }
  a1 = v9->a1;
  v6 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->a1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->a1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->a1, v6);
  }
  this->a1 = a1;
  if ( *(_BYTE *)(((unsigned __int64)&v9->a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v9->a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v9->a2);
  }
  a2 = v9->a2;
  if ( *(_BYTE *)(((unsigned __int64)&this->a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->a2, v6);
  }
  this->a2 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&v9->a3 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v9 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->a3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v9->a3);
  }
  a3 = v9->a3;
  if ( *(_BYTE *)(((unsigned __int64)&this->a3 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->a3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->a3, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->a3 = a3;
};

// Line 70: range 00000000134236B2-00000000134236DC
void __cdecl data::MichiaeErosionAreaExcelConfig::~MichiaeErosionAreaExcelConfig(
        data::MichiaeErosionAreaExcelConfig *const this)
{
  data::MichiaeErosionAreaExcelConfig::~MichiaeErosionAreaExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 70: range 0000000013423670-00000000134236B1
void __cdecl data::MichiaeErosionAreaExcelConfig::~MichiaeErosionAreaExcelConfig(
        data::MichiaeErosionAreaExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MichiaeErosionAreaExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MichiaeErosionAreaExcelConfig = v2;
};

// Line 84: range 00000000133C00EE-00000000133C03A8
void __cdecl data::MichiaeAntiErosionExcelConfig::MichiaeAntiErosionExcelConfig(
        data::MichiaeAntiErosionExcelConfig *const this,
        const data::MichiaeAntiErosionExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t foundation_level; // ecx
  char v4; // al
  float b1; // xmm0_4
  __int64 v6; // rsi
  float b2; // xmm0_4
  float b3; // xmm0_4
  __int64 v9; // rsi
  float crystal_energy_max_limit; // xmm0_4
  const data::MichiaeAntiErosionExcelConfig *v11; // [rsp+0h] [rbp-10h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MichiaeAntiErosionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MichiaeAntiErosionExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->foundation_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->foundation_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->foundation_level);
  }
  foundation_level = a2->foundation_level;
  v4 = *(_BYTE *)(((unsigned __int64)&this->foundation_level >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->foundation_level, a2);
  }
  this->foundation_level = foundation_level;
  if ( *(_BYTE *)(((unsigned __int64)&v11->b1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->b1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->b1);
  }
  b1 = v11->b1;
  v6 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->b1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->b1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->b1, v6);
  }
  this->b1 = b1;
  if ( *(_BYTE *)(((unsigned __int64)&v11->b2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->b2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->b2);
  }
  b2 = v11->b2;
  if ( *(_BYTE *)(((unsigned __int64)&this->b2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->b2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->b2, v6);
  }
  this->b2 = b2;
  if ( *(_BYTE *)(((unsigned __int64)&v11->b3 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->b3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->b3);
  }
  b3 = v11->b3;
  v9 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->b3 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->b3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->b3, v9);
  }
  this->b3 = b3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->crystal_energy_max_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->crystal_energy_max_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->crystal_energy_max_limit);
  }
  crystal_energy_max_limit = v11->crystal_energy_max_limit;
  if ( *(_BYTE *)(((unsigned __int64)&this->crystal_energy_max_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->crystal_energy_max_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->crystal_energy_max_limit, v9);
  }
  this->crystal_energy_max_limit = crystal_energy_max_limit;
};

// Line 87: range 0000000013423644-000000001342366E
void __cdecl data::MichiaeAntiErosionExcelConfig::~MichiaeAntiErosionExcelConfig(
        data::MichiaeAntiErosionExcelConfig *const this)
{
  data::MichiaeAntiErosionExcelConfig::~MichiaeAntiErosionExcelConfig(this);
  operator delete(this, 0x20uLL);
};

// Line 87: range 0000000013423602-0000000013423643
void __cdecl data::MichiaeAntiErosionExcelConfig::~MichiaeAntiErosionExcelConfig(
        data::MichiaeAntiErosionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MichiaeAntiErosionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MichiaeAntiErosionExcelConfig = v2;
};

// Line 102: range 0000000012ECCB1E-0000000012ECCC31
void __cdecl data::MichiaeBattleSkillExcelConfig::MichiaeBattleSkillExcelConfig(
        data::MichiaeBattleSkillExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::MichiaeBattleSkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MichiaeBattleSkillExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_id, v1);
  }
  this->skill_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->material_id, v3);
  }
  this->material_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->material_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->material_num, v3);
  }
  this->material_num = 0;
  std::string::basic_string(&this->server_global_value_name);
};

// Line 102: range 00000000133A86D6-00000000133A88A5
void __cdecl data::MichiaeBattleSkillExcelConfig::MichiaeBattleSkillExcelConfig(
        data::MichiaeBattleSkillExcelConfig *const this,
        const data::MichiaeBattleSkillExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t skill_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t material_id; // ecx
  char v7; // dl
  uint32_t material_num; // ecx
  char v9; // al
  const data::MichiaeBattleSkillExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MichiaeBattleSkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MichiaeBattleSkillExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->skill_id);
  }
  skill_id = a2->skill_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->skill_id, a2);
  }
  this->skill_id = skill_id;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->material_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->material_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->material_id);
  }
  material_id = v10->material_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->material_id, v5);
  }
  this->material_id = material_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->material_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->material_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->material_num);
  }
  material_num = v10->material_num;
  v9 = *(_BYTE *)(((unsigned __int64)&this->material_num >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->material_num, v5);
  }
  this->material_num = material_num;
  std::string::basic_string(&this->server_global_value_name, &v10->server_global_value_name);
};

// Line 105: range 00000000134235D6-0000000013423600
void __cdecl data::MichiaeBattleSkillExcelConfig::~MichiaeBattleSkillExcelConfig(
        data::MichiaeBattleSkillExcelConfig *const this)
{
  data::MichiaeBattleSkillExcelConfig::~MichiaeBattleSkillExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 105: range 0000000013423584-00000000134235D5
void __cdecl data::MichiaeBattleSkillExcelConfig::~MichiaeBattleSkillExcelConfig(
        data::MichiaeBattleSkillExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MichiaeBattleSkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MichiaeBattleSkillExcelConfig = v2;
  std::string::~string(&this->server_global_value_name);
};

// Line 119: range 0000000012ECCC32-0000000012ECCFDF
void __cdecl data::MichiaeOverallExcelConfig::MichiaeOverallExcelConfig(data::MichiaeOverallExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi

  v2 = (int (**)(...))(&`vtable for'data::MichiaeOverallExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MichiaeOverallExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->activity_id, v3);
  }
  this->activity_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->offering_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->offering_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->offering_id, v3);
  }
  this->offering_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->statue_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->statue_group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->statue_group_id, v4);
  }
  this->statue_group_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->statue_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->statue_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->statue_config_id, v4);
  }
  this->statue_config_id = 0;
  std::vector<unsigned int>::vector(&this->boss_watcher_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->statue_cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->statue_cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->statue_cd, v4);
  }
  this->statue_cd = 0;
  v5 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->pray_effect_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pray_effect_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->pray_effect_range, v5);
  }
  this->pray_effect_range = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dark_challenge_reward_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dark_challenge_reward_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dark_challenge_reward_range, v5);
  }
  this->dark_challenge_reward_range = 0.0;
  v6 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->activity_scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->activity_scene_id, v6);
  }
  this->activity_scene_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->boss_challenge_reward_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->boss_challenge_reward_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->boss_challenge_reward_range, v6);
  }
  this->boss_challenge_reward_range = 0.0;
  v7 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->crystal_exp_material_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->crystal_exp_material_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->crystal_exp_material_id, v7);
  }
  this->crystal_exp_material_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->radar_open_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radar_open_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->radar_open_level, v7);
  }
  this->radar_open_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->all_radar_open_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->all_radar_open_level >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->all_radar_open_level, (((_BYTE)this + 84) & 7u) + 3);
  }
  this->all_radar_open_level = 0;
};

// Line 119: range 00000000133A7CDE-00000000133A8398
void __cdecl data::MichiaeOverallExcelConfig::MichiaeOverallExcelConfig(
        data::MichiaeOverallExcelConfig *const this,
        const data::MichiaeOverallExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t activity_id; // ecx
  char v7; // dl
  uint32_t offering_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t statue_group_id; // ecx
  char v12; // dl
  uint32_t statue_config_id; // ecx
  char v14; // al
  std::vector<unsigned int> *p_boss_watcher_list; // rsi
  uint32_t statue_cd; // ecx
  char v17; // al
  float pray_effect_range; // xmm0_4
  __int64 v19; // rsi
  float dark_challenge_reward_range; // xmm0_4
  __int64 v21; // rsi
  uint32_t activity_scene_id; // ecx
  char v23; // dl
  float boss_challenge_reward_range; // xmm0_4
  __int64 v25; // rsi
  uint32_t crystal_exp_material_id; // ecx
  char v27; // dl
  uint32_t radar_open_level; // ecx
  char v29; // al
  __int64 v30; // rsi
  uint32_t all_radar_open_level; // ecx
  char v32; // dl
  const data::MichiaeOverallExcelConfig *v33; // [rsp+0h] [rbp-10h]

  v33 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MichiaeOverallExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MichiaeOverallExcelConfig = v2;
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
  v5 = (((_BYTE)v33 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v33->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v33 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v33->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v33->activity_id);
  }
  activity_id = v33->activity_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->activity_id, v5);
  }
  this->activity_id = activity_id;
  if ( *(_BYTE *)(((unsigned __int64)&v33->offering_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v33->offering_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v33->offering_id);
  }
  offering_id = v33->offering_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->offering_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->offering_id, v5);
  }
  this->offering_id = offering_id;
  v10 = (((_BYTE)v33 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v33->statue_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v33 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v33->statue_group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v33->statue_group_id);
  }
  statue_group_id = v33->statue_group_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->statue_group_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->statue_group_id, v10);
  }
  this->statue_group_id = statue_group_id;
  if ( *(_BYTE *)(((unsigned __int64)&v33->statue_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v33->statue_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v33->statue_config_id);
  }
  statue_config_id = v33->statue_config_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->statue_config_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->statue_config_id, v10);
  }
  this->statue_config_id = statue_config_id;
  p_boss_watcher_list = &v33->boss_watcher_list;
  std::vector<unsigned int>::vector(&this->boss_watcher_list, &v33->boss_watcher_list);
  if ( *(_BYTE *)(((unsigned __int64)&v33->statue_cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v33->statue_cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v33->statue_cd);
  }
  statue_cd = v33->statue_cd;
  v17 = *(_BYTE *)(((unsigned __int64)&this->statue_cd >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(p_boss_watcher_list) = v17 != 0;
    __asan_report_store4(&this->statue_cd, p_boss_watcher_list);
  }
  this->statue_cd = statue_cd;
  if ( *(_BYTE *)(((unsigned __int64)&v33->pray_effect_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v33 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v33->pray_effect_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v33->pray_effect_range);
  }
  pray_effect_range = v33->pray_effect_range;
  v19 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->pray_effect_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pray_effect_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->pray_effect_range, v19);
  }
  this->pray_effect_range = pray_effect_range;
  if ( *(_BYTE *)(((unsigned __int64)&v33->dark_challenge_reward_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v33->dark_challenge_reward_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v33->dark_challenge_reward_range);
  }
  dark_challenge_reward_range = v33->dark_challenge_reward_range;
  if ( *(_BYTE *)(((unsigned __int64)&this->dark_challenge_reward_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dark_challenge_reward_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dark_challenge_reward_range, v19);
  }
  this->dark_challenge_reward_range = dark_challenge_reward_range;
  v21 = (((_BYTE)v33 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v33->activity_scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v33 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v33->activity_scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v33->activity_scene_id);
  }
  activity_scene_id = v33->activity_scene_id;
  v23 = *(_BYTE *)(((unsigned __int64)&this->activity_scene_id >> 3) + 0x7FFF8000);
  LOBYTE(v21) = v23 != 0;
  if ( v23 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v23 )
    __asan_report_store4(&this->activity_scene_id, v21);
  this->activity_scene_id = activity_scene_id;
  if ( *(_BYTE *)(((unsigned __int64)&v33->boss_challenge_reward_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v33->boss_challenge_reward_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v33->boss_challenge_reward_range);
  }
  boss_challenge_reward_range = v33->boss_challenge_reward_range;
  if ( *(_BYTE *)(((unsigned __int64)&this->boss_challenge_reward_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->boss_challenge_reward_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->boss_challenge_reward_range, v21);
  }
  this->boss_challenge_reward_range = boss_challenge_reward_range;
  v25 = (((_BYTE)v33 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v33->crystal_exp_material_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v33 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v33->crystal_exp_material_id >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v33->crystal_exp_material_id);
  }
  crystal_exp_material_id = v33->crystal_exp_material_id;
  v27 = *(_BYTE *)(((unsigned __int64)&this->crystal_exp_material_id >> 3) + 0x7FFF8000);
  if ( v27 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v27 )
  {
    LOBYTE(v25) = v27 != 0;
    __asan_report_store4(&this->crystal_exp_material_id, v25);
  }
  this->crystal_exp_material_id = crystal_exp_material_id;
  if ( *(_BYTE *)(((unsigned __int64)&v33->radar_open_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v33->radar_open_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v33->radar_open_level);
  }
  radar_open_level = v33->radar_open_level;
  v29 = *(_BYTE *)(((unsigned __int64)&this->radar_open_level >> 3) + 0x7FFF8000);
  if ( v29 != 0 && v29 <= 3 )
  {
    LOBYTE(v25) = v29 != 0;
    __asan_report_store4(&this->radar_open_level, v25);
  }
  this->radar_open_level = radar_open_level;
  v30 = (((_BYTE)v33 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v33->all_radar_open_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v33 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v33->all_radar_open_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v33->all_radar_open_level);
  }
  all_radar_open_level = v33->all_radar_open_level;
  v32 = *(_BYTE *)(((unsigned __int64)&this->all_radar_open_level >> 3) + 0x7FFF8000);
  if ( v32 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v32 )
  {
    LOBYTE(v30) = v32 != 0;
    __asan_report_store4(&this->all_radar_open_level, v30);
  }
  this->all_radar_open_level = all_radar_open_level;
};

// Line 122: range 0000000013423506-0000000013423557
void __cdecl data::MichiaeOverallExcelConfig::~MichiaeOverallExcelConfig(data::MichiaeOverallExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MichiaeOverallExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MichiaeOverallExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->boss_watcher_list);
};

// Line 122: range 0000000013423558-0000000013423582
void __cdecl data::MichiaeOverallExcelConfig::~MichiaeOverallExcelConfig(data::MichiaeOverallExcelConfig *const this)
{
  data::MichiaeOverallExcelConfig::~MichiaeOverallExcelConfig(this);
  operator delete(this, 0x58uLL);
};

// Line 146: range 0000000012ECCFE0-0000000012ECD139
void __cdecl data::MichiaeStageExcelConfig::MichiaeStageExcelConfig(data::MichiaeStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::MichiaeStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MichiaeStageExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id, v1);
  }
  this->stage_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->open_day, v3);
  }
  this->open_day = 0;
  std::vector<unsigned int>::vector(&this->watcher_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_offering_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_offering_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_offering_level, v3);
  }
  this->max_offering_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_crystal_exp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_crystal_exp >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_crystal_exp, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->max_crystal_exp = 0;
};

// Line 146: range 00000000133C076A-00000000133C09BE
void __cdecl data::MichiaeStageExcelConfig::MichiaeStageExcelConfig(
        data::MichiaeStageExcelConfig *const this,
        const data::MichiaeStageExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t stage_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t open_day; // ecx
  char v7; // dl
  std::vector<unsigned int> *p_watcher_list; // rsi
  uint32_t max_offering_level; // ecx
  char v10; // al
  __int64 v11; // rsi
  uint32_t max_crystal_exp; // ecx
  char v13; // dl
  const data::MichiaeStageExcelConfig *v14; // [rsp+0h] [rbp-10h]

  v14 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MichiaeStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MichiaeStageExcelConfig = v2;
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
  v5 = (((_BYTE)v14 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->open_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->open_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->open_day);
  }
  open_day = v14->open_day;
  v7 = *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->open_day, v5);
  }
  this->open_day = open_day;
  p_watcher_list = &v14->watcher_list;
  std::vector<unsigned int>::vector(&this->watcher_list, &v14->watcher_list);
  if ( *(_BYTE *)(((unsigned __int64)&v14->max_offering_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->max_offering_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->max_offering_level);
  }
  max_offering_level = v14->max_offering_level;
  v10 = *(_BYTE *)(((unsigned __int64)&this->max_offering_level >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_watcher_list) = v10 != 0;
    __asan_report_store4(&this->max_offering_level, p_watcher_list);
  }
  this->max_offering_level = max_offering_level;
  v11 = (((_BYTE)v14 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->max_crystal_exp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->max_crystal_exp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->max_crystal_exp);
  }
  max_crystal_exp = v14->max_crystal_exp;
  v13 = *(_BYTE *)(((unsigned __int64)&this->max_crystal_exp >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->max_crystal_exp, v11);
  }
  this->max_crystal_exp = max_crystal_exp;
};

// Line 149: range 0000000013423488-00000000134234D9
void __cdecl data::MichiaeStageExcelConfig::~MichiaeStageExcelConfig(data::MichiaeStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MichiaeStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MichiaeStageExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->watcher_list);
};

// Line 149: range 00000000134234DA-0000000013423504
void __cdecl data::MichiaeStageExcelConfig::~MichiaeStageExcelConfig(data::MichiaeStageExcelConfig *const this)
{
  data::MichiaeStageExcelConfig::~MichiaeStageExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 164: range 00000000133A895C-00000000133A8A9B
void __cdecl data::MichiaeBossChallengeExcelConfig::MichiaeBossChallengeExcelConfig(
        data::MichiaeBossChallengeExcelConfig *const this,
        const data::MichiaeBossChallengeExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t level_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t group_id; // ecx
  char v7; // dl
  const data::MichiaeBossChallengeExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MichiaeBossChallengeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MichiaeBossChallengeExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->level_id);
  }
  level_id = a2->level_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->level_id, a2);
  }
  this->level_id = level_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->group_id);
  }
  group_id = v8->group_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->group_id, v5);
  }
  this->group_id = group_id;
};

// Line 167: range 000000001342341A-000000001342345B
void __cdecl data::MichiaeBossChallengeExcelConfig::~MichiaeBossChallengeExcelConfig(
        data::MichiaeBossChallengeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MichiaeBossChallengeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MichiaeBossChallengeExcelConfig = v2;
};

// Line 167: range 000000001342345C-0000000013423486
void __cdecl data::MichiaeBossChallengeExcelConfig::~MichiaeBossChallengeExcelConfig(
        data::MichiaeBossChallengeExcelConfig *const this)
{
  data::MichiaeBossChallengeExcelConfig::~MichiaeBossChallengeExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 179: range 0000000012ECD13A-0000000012ECD24D
void __cdecl data::MichiaeDarkChallengeExcelConfig::MichiaeDarkChallengeExcelConfig(
        data::MichiaeDarkChallengeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::MichiaeDarkChallengeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MichiaeDarkChallengeExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->challenge_id, v3);
  }
  this->challenge_id = 0;
  std::vector<unsigned int>::vector(&this->reward_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, v3);
  }
  this->group_id = 0;
};

// Line 179: range 00000000133A8450-00000000133A861F
void __cdecl data::MichiaeDarkChallengeExcelConfig::MichiaeDarkChallengeExcelConfig(
        data::MichiaeDarkChallengeExcelConfig *const this,
        const data::MichiaeDarkChallengeExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t challenge_id; // ecx
  char v7; // dl
  std::vector<unsigned int> *p_reward_id; // rsi
  uint32_t group_id; // ecx
  char v10; // al
  const data::MichiaeDarkChallengeExcelConfig *v11; // [rsp+0h] [rbp-10h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MichiaeDarkChallengeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MichiaeDarkChallengeExcelConfig = v2;
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
  v5 = (((_BYTE)v11 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->challenge_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->challenge_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->challenge_id);
  }
  challenge_id = v11->challenge_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->challenge_id, v5);
  }
  this->challenge_id = challenge_id;
  p_reward_id = &v11->reward_id;
  std::vector<unsigned int>::vector(&this->reward_id, &v11->reward_id);
  if ( *(_BYTE *)(((unsigned __int64)&v11->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->group_id);
  }
  group_id = v11->group_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_reward_id) = v10 != 0;
    __asan_report_store4(&this->group_id, p_reward_id);
  }
  this->group_id = group_id;
};

// Line 182: range 00000000134233EE-0000000013423418
void __cdecl data::MichiaeDarkChallengeExcelConfig::~MichiaeDarkChallengeExcelConfig(
        data::MichiaeDarkChallengeExcelConfig *const this)
{
  data::MichiaeDarkChallengeExcelConfig::~MichiaeDarkChallengeExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 182: range 000000001342339C-00000000134233ED
void __cdecl data::MichiaeDarkChallengeExcelConfig::~MichiaeDarkChallengeExcelConfig(
        data::MichiaeDarkChallengeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MichiaeDarkChallengeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MichiaeDarkChallengeExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->reward_id);
};

// Line 196: range 0000000012ECD24E-0000000012ECD2DD
void __cdecl data::MichiaeRadarExcelConfig::MichiaeRadarExcelConfig(data::MichiaeRadarExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MichiaeRadarExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MichiaeRadarExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->mark_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mark_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mark_type, v1);
  }
  this->mark_type = MICHIAE_MATSURI_RADAR_MARK_TYPE_NONE;
  std::vector<unsigned int>::vector(&this->gadget_id_list);
};

// Line 196: range 00000000133C0D80-00000000133C0E55
void __cdecl data::MichiaeRadarExcelConfig::MichiaeRadarExcelConfig(
        data::MichiaeRadarExcelConfig *const this,
        const data::MichiaeRadarExcelConfig *a2)
{
  int (**v2)(...); // rdx
  data::MichiaeMatsuriRadarMarkType mark_type; // ecx
  char v4; // al
  const data::MichiaeRadarExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MichiaeRadarExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MichiaeRadarExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->mark_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->mark_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->mark_type);
  }
  mark_type = a2->mark_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->mark_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->mark_type, a2);
  }
  this->mark_type = mark_type;
  std::vector<unsigned int>::vector(&this->gadget_id_list, &v5->gadget_id_list);
};

// Line 199: range 000000001342331E-000000001342336F
void __cdecl data::MichiaeRadarExcelConfig::~MichiaeRadarExcelConfig(data::MichiaeRadarExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MichiaeRadarExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MichiaeRadarExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->gadget_id_list);
};

// Line 199: range 0000000013423370-000000001342339A
void __cdecl data::MichiaeRadarExcelConfig::~MichiaeRadarExcelConfig(data::MichiaeRadarExcelConfig *const this)
{
  data::MichiaeRadarExcelConfig::~MichiaeRadarExcelConfig(this);
  operator delete(this, 0x28uLL);
};
