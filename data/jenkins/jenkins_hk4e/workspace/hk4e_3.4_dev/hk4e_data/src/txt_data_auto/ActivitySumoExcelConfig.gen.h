// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivitySumoExcelConfig.gen.h

// Line 64: range 000000001418E668-000000001418EC04
void __cdecl data::ActivitySumoOverallConfig::ActivitySumoOverallConfig(
        data::ActivitySumoOverallConfig *const this,
        const data::ActivitySumoOverallConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t activity_id; // ecx
  char v7; // dl
  uint32_t schedule_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t prerequisite_quest_id; // ecx
  char v12; // dl
  uint32_t lead_quest_id; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t global_watcher_id; // ecx
  char v17; // dl
  uint32_t push_tips_id; // ecx
  char v19; // al
  __int64 v20; // rsi
  uint32_t team_num; // ecx
  char v22; // dl
  uint32_t max_team_member_num; // ecx
  char v24; // al
  __int64 v25; // rsi
  uint32_t team_selectable_skill_num; // ecx
  char v27; // dl
  uint32_t switch_team_cd; // ecx
  char v29; // al
  const data::ActivitySumoOverallConfig *v30; // [rsp+0h] [rbp-10h]

  v30 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivitySumoOverallConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivitySumoOverallConfig = v2;
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
  v5 = (((_BYTE)v30 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v30->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v30 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v30->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v30->activity_id);
  }
  activity_id = v30->activity_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->activity_id, v5);
  }
  this->activity_id = activity_id;
  if ( *(_BYTE *)(((unsigned __int64)&v30->schedule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v30->schedule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v30->schedule_id);
  }
  schedule_id = v30->schedule_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->schedule_id, v5);
  }
  this->schedule_id = schedule_id;
  v10 = (((_BYTE)v30 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v30->prerequisite_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v30 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v30->prerequisite_quest_id >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v30->prerequisite_quest_id);
  }
  prerequisite_quest_id = v30->prerequisite_quest_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->prerequisite_quest_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->prerequisite_quest_id, v10);
  }
  this->prerequisite_quest_id = prerequisite_quest_id;
  if ( *(_BYTE *)(((unsigned __int64)&v30->lead_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v30->lead_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v30->lead_quest_id);
  }
  lead_quest_id = v30->lead_quest_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->lead_quest_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->lead_quest_id, v10);
  }
  this->lead_quest_id = lead_quest_id;
  v15 = (((_BYTE)v30 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v30->global_watcher_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v30 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v30->global_watcher_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v30->global_watcher_id);
  }
  global_watcher_id = v30->global_watcher_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->global_watcher_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->global_watcher_id, v15);
  }
  this->global_watcher_id = global_watcher_id;
  if ( *(_BYTE *)(((unsigned __int64)&v30->push_tips_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v30->push_tips_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v30->push_tips_id);
  }
  push_tips_id = v30->push_tips_id;
  v19 = *(_BYTE *)(((unsigned __int64)&this->push_tips_id >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->push_tips_id, v15);
  }
  this->push_tips_id = push_tips_id;
  v20 = (((_BYTE)v30 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v30->team_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v30 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v30->team_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v30->team_num);
  }
  team_num = v30->team_num;
  v22 = *(_BYTE *)(((unsigned __int64)&this->team_num >> 3) + 0x7FFF8000);
  if ( v22 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v22 )
  {
    LOBYTE(v20) = v22 != 0;
    __asan_report_store4(&this->team_num, v20);
  }
  this->team_num = team_num;
  if ( *(_BYTE *)(((unsigned __int64)&v30->max_team_member_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v30->max_team_member_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v30->max_team_member_num);
  }
  max_team_member_num = v30->max_team_member_num;
  v24 = *(_BYTE *)(((unsigned __int64)&this->max_team_member_num >> 3) + 0x7FFF8000);
  if ( v24 != 0 && v24 <= 3 )
  {
    LOBYTE(v20) = v24 != 0;
    __asan_report_store4(&this->max_team_member_num, v20);
  }
  this->max_team_member_num = max_team_member_num;
  v25 = (((_BYTE)v30 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v30->team_selectable_skill_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v30 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v30->team_selectable_skill_num >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v30->team_selectable_skill_num);
  }
  team_selectable_skill_num = v30->team_selectable_skill_num;
  v27 = *(_BYTE *)(((unsigned __int64)&this->team_selectable_skill_num >> 3) + 0x7FFF8000);
  if ( v27 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v27 )
  {
    LOBYTE(v25) = v27 != 0;
    __asan_report_store4(&this->team_selectable_skill_num, v25);
  }
  this->team_selectable_skill_num = team_selectable_skill_num;
  if ( *(_BYTE *)(((unsigned __int64)&v30->switch_team_cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v30->switch_team_cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v30->switch_team_cd);
  }
  switch_team_cd = v30->switch_team_cd;
  v29 = *(_BYTE *)(((unsigned __int64)&this->switch_team_cd >> 3) + 0x7FFF8000);
  if ( v29 != 0 && v29 <= 3 )
  {
    LOBYTE(v25) = v29 != 0;
    __asan_report_store4(&this->switch_team_cd, v25);
  }
  this->switch_team_cd = switch_team_cd;
};

// Line 67: range 00000000142A374E-00000000142A3778
void __cdecl data::ActivitySumoOverallConfig::~ActivitySumoOverallConfig(data::ActivitySumoOverallConfig *const this)
{
  data::ActivitySumoOverallConfig::~ActivitySumoOverallConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 67: range 00000000142A370C-00000000142A374D
void __cdecl data::ActivitySumoOverallConfig::~ActivitySumoOverallConfig(data::ActivitySumoOverallConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivitySumoOverallConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivitySumoOverallConfig = v2;
};

// Line 101: range 0000000013BD76BE-0000000013BD7885
void __cdecl data::ActivitySumoStageExcelConfig::ActivitySumoStageExcelConfig(
        data::ActivitySumoStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivitySumoStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivitySumoStageExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->scheduld_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scheduld_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->scheduld_id, v3);
  }
  this->scheduld_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->open_day, v3);
  }
  this->open_day = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dungeon_id, v4);
  }
  this->dungeon_id = 0;
  std::vector<unsigned int>::vector(&this->watcher_list);
  std::vector<unsigned int>::vector(&this->trial_avatar_pool);
  std::vector<unsigned int>::vector(&this->skill_pool);
  std::vector<unsigned int>::vector(&this->special_skill_pool);
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, v4);
  }
  this->gallery_id = 0;
};

// Line 101: range 000000001418ED46-000000001418F0B1
void __cdecl data::ActivitySumoStageExcelConfig::ActivitySumoStageExcelConfig(
        data::ActivitySumoStageExcelConfig *const this,
        const data::ActivitySumoStageExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t scheduld_id; // ecx
  char v7; // dl
  uint32_t open_day; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t dungeon_id; // ecx
  char v12; // dl
  std::vector<unsigned int> *p_special_skill_pool; // rsi
  uint32_t gallery_id; // ecx
  char v15; // al
  const data::ActivitySumoStageExcelConfig *v16; // [rsp+0h] [rbp-20h]

  v16 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivitySumoStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivitySumoStageExcelConfig = v2;
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
  v5 = (((_BYTE)v16 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->scheduld_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->scheduld_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->scheduld_id);
  }
  scheduld_id = v16->scheduld_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->scheduld_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->scheduld_id, v5);
  }
  this->scheduld_id = scheduld_id;
  if ( *(_BYTE *)(((unsigned __int64)&v16->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->open_day);
  }
  open_day = v16->open_day;
  v9 = *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->open_day, v5);
  }
  this->open_day = open_day;
  v10 = (((_BYTE)v16 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->dungeon_id);
  }
  dungeon_id = v16->dungeon_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->dungeon_id, v10);
  }
  this->dungeon_id = dungeon_id;
  std::vector<unsigned int>::vector(&this->watcher_list, &v16->watcher_list);
  std::vector<unsigned int>::vector(&this->trial_avatar_pool, &v16->trial_avatar_pool);
  std::vector<unsigned int>::vector(&this->skill_pool, &v16->skill_pool);
  p_special_skill_pool = &v16->special_skill_pool;
  std::vector<unsigned int>::vector(&this->special_skill_pool, &v16->special_skill_pool);
  if ( *(_BYTE *)(((unsigned __int64)&v16->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->gallery_id);
  }
  gallery_id = v16->gallery_id;
  v15 = *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_special_skill_pool) = v15 != 0;
    __asan_report_store4(&this->gallery_id, p_special_skill_pool);
  }
  this->gallery_id = gallery_id;
};

// Line 104: range 00000000142A36E0-00000000142A370A
void __cdecl data::ActivitySumoStageExcelConfig::~ActivitySumoStageExcelConfig(
        data::ActivitySumoStageExcelConfig *const this)
{
  data::ActivitySumoStageExcelConfig::~ActivitySumoStageExcelConfig(this);
  operator delete(this, 0x80uLL);
};

// Line 104: range 00000000142A365E-00000000142A36DF
void __cdecl data::ActivitySumoStageExcelConfig::~ActivitySumoStageExcelConfig(
        data::ActivitySumoStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivitySumoStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivitySumoStageExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->special_skill_pool);
  std::vector<unsigned int>::~vector(&this->skill_pool);
  std::vector<unsigned int>::~vector(&this->trial_avatar_pool);
  std::vector<unsigned int>::~vector(&this->watcher_list);
};

// Line 123: range 0000000013BD7886-0000000013BD7915
void __cdecl data::ActivitySumoSwitchSkillExcelConfig::ActivitySumoSwitchSkillExcelConfig(
        data::ActivitySumoSwitchSkillExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivitySumoSwitchSkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivitySumoSwitchSkillExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::string::basic_string(&this->ability_group_name);
};

// Line 123: range 000000001418F1F2-000000001418F2C7
void __cdecl data::ActivitySumoSwitchSkillExcelConfig::ActivitySumoSwitchSkillExcelConfig(
        data::ActivitySumoSwitchSkillExcelConfig *const this,
        const data::ActivitySumoSwitchSkillExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::ActivitySumoSwitchSkillExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivitySumoSwitchSkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivitySumoSwitchSkillExcelConfig = v2;
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
  std::string::basic_string(&this->ability_group_name, &v5->ability_group_name);
};

// Line 126: range 00000000142A3632-00000000142A365C
void __cdecl data::ActivitySumoSwitchSkillExcelConfig::~ActivitySumoSwitchSkillExcelConfig(
        data::ActivitySumoSwitchSkillExcelConfig *const this)
{
  data::ActivitySumoSwitchSkillExcelConfig::~ActivitySumoSwitchSkillExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 126: range 00000000142A35E0-00000000142A3631
void __cdecl data::ActivitySumoSwitchSkillExcelConfig::~ActivitySumoSwitchSkillExcelConfig(
        data::ActivitySumoSwitchSkillExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivitySumoSwitchSkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivitySumoSwitchSkillExcelConfig = v2;
  std::string::~string(&this->ability_group_name);
};

// Line 138: range 000000001418F408-000000001418F73E
void __cdecl data::ActivitySumoDifficultyExcelConfig::ActivitySumoDifficultyExcelConfig(
        data::ActivitySumoDifficultyExcelConfig *const this,
        const data::ActivitySumoDifficultyExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t scheduld_id; // ecx
  char v7; // dl
  data::SumoDifficultyType difficulty; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t monster_level; // ecx
  char v12; // dl
  uint32_t dungeon_level; // ecx
  char v14; // al
  float ratio; // xmm0_4
  const data::ActivitySumoDifficultyExcelConfig *v16; // [rsp+0h] [rbp-10h]

  v16 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivitySumoDifficultyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivitySumoDifficultyExcelConfig = v2;
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
  v5 = (((_BYTE)v16 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->scheduld_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->scheduld_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->scheduld_id);
  }
  scheduld_id = v16->scheduld_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->scheduld_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->scheduld_id, v5);
  }
  this->scheduld_id = scheduld_id;
  if ( *(_BYTE *)(((unsigned __int64)&v16->difficulty >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->difficulty >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->difficulty);
  }
  difficulty = v16->difficulty;
  v9 = *(_BYTE *)(((unsigned __int64)&this->difficulty >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->difficulty, v5);
  }
  this->difficulty = difficulty;
  v10 = (((_BYTE)v16 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->monster_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->monster_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->monster_level);
  }
  monster_level = v16->monster_level;
  v12 = *(_BYTE *)(((unsigned __int64)&this->monster_level >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->monster_level, v10);
  }
  this->monster_level = monster_level;
  if ( *(_BYTE *)(((unsigned __int64)&v16->dungeon_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->dungeon_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->dungeon_level);
  }
  dungeon_level = v16->dungeon_level;
  v14 = *(_BYTE *)(((unsigned __int64)&this->dungeon_level >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->dungeon_level, v10);
  }
  this->dungeon_level = dungeon_level;
  if ( *(_BYTE *)(((unsigned __int64)&v16->ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->ratio);
  }
  ratio = v16->ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ratio, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->ratio = ratio;
};

// Line 141: range 00000000142A35B4-00000000142A35DE
void __cdecl data::ActivitySumoDifficultyExcelConfig::~ActivitySumoDifficultyExcelConfig(
        data::ActivitySumoDifficultyExcelConfig *const this)
{
  data::ActivitySumoDifficultyExcelConfig::~ActivitySumoDifficultyExcelConfig(this);
  operator delete(this, 0x20uLL);
};

// Line 141: range 00000000142A3572-00000000142A35B3
void __cdecl data::ActivitySumoDifficultyExcelConfig::~ActivitySumoDifficultyExcelConfig(
        data::ActivitySumoDifficultyExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivitySumoDifficultyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivitySumoDifficultyExcelConfig = v2;
};
