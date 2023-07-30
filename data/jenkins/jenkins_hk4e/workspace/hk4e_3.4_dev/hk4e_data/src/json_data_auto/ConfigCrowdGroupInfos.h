// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigCrowdGroupInfos.h

// Line 25: range 0000000013C16FE6-0000000013C170B8
void __cdecl data::ConfigCrowdQuestRestriction::ConfigCrowdQuestRestriction(
        data::ConfigCrowdQuestRestriction *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->quest_id = 0;
  v2 = ((_BYTE)this + 4) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->quest_accepted >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->quest_accepted >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->quest_accepted, v2, v3);
  this->quest_accepted = 1;
  std::vector<data::QuestState>::vector(&this->quest_states);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 25: range 0000000013E7010C-0000000013E7029A
void __cdecl data::ConfigCrowdQuestRestriction::ConfigCrowdQuestRestriction(
        data::ConfigCrowdQuestRestriction *const this,
        data::ConfigCrowdQuestRestriction *a2)
{
  uint32_t quest_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool quest_accepted; // cl
  char v7; // dl
  __int64 v8; // rdx
  data::QuestStateList *p_quest_states; // rsi
  bool is_json_loaded; // cl
  char v11; // al
  data::ConfigCrowdQuestRestriction *v12; // [rsp+0h] [rbp-10h]

  v12 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  quest_id = a2->quest_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->quest_id = quest_id;
  v4 = ((_BYTE)v12 + 4) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v12->quest_accepted >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v12->quest_accepted >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v12->quest_accepted, v4, v5);
  quest_accepted = v12->quest_accepted;
  v7 = *(_BYTE *)(((unsigned __int64)&this->quest_accepted >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 4) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->quest_accepted, v4, v8);
  this->quest_accepted = quest_accepted;
  p_quest_states = &v12->quest_states;
  std::vector<data::QuestState>::vector(&this->quest_states, &v12->quest_states);
  if ( *(char *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v12->is_json_loaded, p_quest_states, &v12->is_json_loaded);
  is_json_loaded = v12->is_json_loaded;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(p_quest_states) = v11 != 0;
    __asan_report_store1(&this->is_json_loaded, p_quest_states, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 25: range 0000000013C170BA-0000000013C170D8
void __cdecl data::ConfigCrowdQuestRestriction::~ConfigCrowdQuestRestriction(
        data::ConfigCrowdQuestRestriction *const this)
{
  std::vector<data::QuestState>::~vector(&this->quest_states);
};

// Line 50: range 0000000013C170DA-0000000013C171EF
void __cdecl data::ConfigCrowdActivityRestriction::ConfigCrowdActivityRestriction(
        data::ConfigCrowdActivityRestriction *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->activity_type = 0;
  v2 = ((_BYTE)this + 4) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_active >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_active >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_active, v2, v3);
  this->is_active = 1;
  std::vector<unsigned int>::vector(&this->activity_phase);
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cond_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cond_id, v2);
  }
  this->cond_id = 0;
  v4 = ((_BYTE)this + 36) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_json_loaded, v4, v5);
  this->is_json_loaded = 0;
};

// Line 50: range 0000000013E709E2-0000000013E70BEF
void __cdecl data::ConfigCrowdActivityRestriction::ConfigCrowdActivityRestriction(
        data::ConfigCrowdActivityRestriction *const this,
        data::ConfigCrowdActivityRestriction *a2)
{
  uint32_t activity_type; // ecx
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_active; // cl
  char v7; // dl
  __int64 v8; // rdx
  data::UInt32List *p_activity_phase; // rsi
  uint32_t cond_id; // ecx
  char v11; // al
  __int64 v12; // rsi
  __int64 v13; // rdx
  bool is_json_loaded; // cl
  char v15; // dl
  __int64 v16; // rdx
  data::ConfigCrowdActivityRestriction *v17; // [rsp+0h] [rbp-10h]

  v17 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  activity_type = a2->activity_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->activity_type = activity_type;
  v4 = ((_BYTE)v17 + 4) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v17->is_active >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v17->is_active >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v17->is_active, v4, v5);
  is_active = v17->is_active;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_active >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 4) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_active, v4, v8);
  this->is_active = is_active;
  p_activity_phase = &v17->activity_phase;
  std::vector<unsigned int>::vector(&this->activity_phase, &v17->activity_phase);
  if ( *(_BYTE *)(((unsigned __int64)&v17->cond_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->cond_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->cond_id);
  }
  cond_id = v17->cond_id;
  v11 = *(_BYTE *)(((unsigned __int64)&this->cond_id >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(p_activity_phase) = v11 != 0;
    __asan_report_store4(&this->cond_id, p_activity_phase);
  }
  this->cond_id = cond_id;
  v12 = ((_BYTE)v17 + 36) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&v17->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&v17->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_load1(&v17->is_json_loaded, v12, v13);
  is_json_loaded = v17->is_json_loaded;
  v15 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v12) = v15 != 0;
  v16 = (v15 != 0) & (unsigned __int8)((((unsigned __int8)this + 36) & 7) >= v15);
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->is_json_loaded, v12, v16);
  this->is_json_loaded = is_json_loaded;
};

// Line 50: range 0000000013C171F0-0000000013C1720E
void __cdecl data::ConfigCrowdActivityRestriction::~ConfigCrowdActivityRestriction(
        data::ConfigCrowdActivityRestriction *const this)
{
  std::vector<unsigned int>::~vector(&this->activity_phase);
};

// Line 101: range 0000000013C17210-0000000013C172A5
void __cdecl data::ConfigCrowdSceneTagRestriction::ConfigCrowdSceneTagRestriction(
        data::ConfigCrowdSceneTagRestriction *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  std::vector<std::string>::vector(&this->scene_tags);
  if ( *(char *)(((unsigned __int64)&this->is_active >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_active, v1, &this->is_active);
  this->is_active = 1;
  v2 = ((_BYTE)this + 25) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_loaded, v2, v3);
  this->is_json_loaded = 0;
};

// Line 101: range 0000000013E71B5A-0000000013E71C75
void __cdecl data::ConfigCrowdSceneTagRestriction::ConfigCrowdSceneTagRestriction(
        data::ConfigCrowdSceneTagRestriction *const this,
        data::ConfigCrowdSceneTagRestriction *a2)
{
  bool is_active; // cl
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_json_loaded; // cl
  char v7; // dl
  __int64 v8; // rdx
  data::ConfigCrowdSceneTagRestriction *v9; // [rsp+0h] [rbp-10h]

  v9 = a2;
  std::vector<std::string>::vector(&this->scene_tags, &a2->scene_tags);
  if ( *(char *)(((unsigned __int64)&a2->is_active >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_active, a2, &a2->is_active);
  is_active = a2->is_active;
  v3 = *(_BYTE *)(((unsigned __int64)&this->is_active >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->is_active, a2, &this->is_active);
  }
  this->is_active = is_active;
  v4 = ((_BYTE)v9 + 25) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v9->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v9->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v9->is_json_loaded, v4, v5);
  is_json_loaded = v9->is_json_loaded;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 25) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_json_loaded, v4, v8);
  this->is_json_loaded = is_json_loaded;
};

// Line 101: range 0000000013C172A6-0000000013C172C0
void __cdecl data::ConfigCrowdSceneTagRestriction::~ConfigCrowdSceneTagRestriction(
        data::ConfigCrowdSceneTagRestriction *const this)
{
  std::vector<std::string>::~vector(&this->scene_tags);
};

// Line 159: range 0000000013C177EE-0000000013C178B0
void __cdecl data::ConfigCrowdRestrictionGroup::ConfigCrowdRestrictionGroup(
        data::ConfigCrowdRestrictionGroup *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->spawn_condition = INCLUSIVE;
  std::vector<data::ConfigCrowdQuestRestriction>::vector(&this->quest_res);
  std::vector<data::ConfigCrowdActivityRestriction>::vector(&this->activity_res);
  std::vector<data::ConfigCrowdTimeRestriction>::vector(&this->time_res);
  std::vector<data::ConfigCrowdSceneTagRestriction>::vector(&this->scene_tags);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 159: range 0000000013E73406-0000000013E73565
void __cdecl data::ConfigCrowdRestrictionGroup::ConfigCrowdRestrictionGroup(
        data::ConfigCrowdRestrictionGroup *const this,
        data::ConfigCrowdRestrictionGroup *a2)
{
  data::CrowdSpawnConditionType spawn_condition; // ecx
  char v3; // al
  data::SceneTagRestrictionList *p_scene_tags; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::ConfigCrowdRestrictionGroup *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  spawn_condition = a2->spawn_condition;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->spawn_condition = spawn_condition;
  std::vector<data::ConfigCrowdQuestRestriction>::vector(&this->quest_res, &v7->quest_res);
  std::vector<data::ConfigCrowdActivityRestriction>::vector(&this->activity_res, &v7->activity_res);
  std::vector<data::ConfigCrowdTimeRestriction>::vector(&this->time_res, &v7->time_res);
  p_scene_tags = &v7->scene_tags;
  std::vector<data::ConfigCrowdSceneTagRestriction>::vector(&this->scene_tags, &v7->scene_tags);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_scene_tags, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_scene_tags) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_scene_tags, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 159: range 0000000013C178B2-0000000013C17900
void __cdecl data::ConfigCrowdRestrictionGroup::~ConfigCrowdRestrictionGroup(
        data::ConfigCrowdRestrictionGroup *const this)
{
  std::vector<data::ConfigCrowdSceneTagRestriction>::~vector(&this->scene_tags);
  std::vector<data::ConfigCrowdTimeRestriction>::~vector(&this->time_res);
  std::vector<data::ConfigCrowdActivityRestriction>::~vector(&this->activity_res);
  std::vector<data::ConfigCrowdQuestRestriction>::~vector(&this->quest_res);
};

// Line 200: range 0000000013C17902-0000000013C179DA
void __cdecl data::ConfigCrowdItemRestrictionGroup::ConfigCrowdItemRestrictionGroup(
        data::ConfigCrowdItemRestrictionGroup *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->item_show_condition >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_show_condition >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_show_condition, v1);
  }
  this->item_show_condition = INCLUSIVE_0;
  std::vector<data::ConfigCrowdQuestRestriction>::vector(&this->quest_res);
  std::vector<data::ConfigCrowdActivityRestriction>::vector(&this->activity_res);
  std::vector<data::ConfigCrowdTimeRestriction>::vector(&this->time_res);
  std::vector<data::ConfigCrowdSceneTagRestriction>::vector(&this->scene_tags);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 200: range 0000000013E73CAC-0000000013E73E32
void __cdecl data::ConfigCrowdItemRestrictionGroup::ConfigCrowdItemRestrictionGroup(
        data::ConfigCrowdItemRestrictionGroup *const this,
        data::ConfigCrowdItemRestrictionGroup *a2)
{
  data::CrowdItemConditionType item_show_condition; // ecx
  char v3; // al
  data::SceneTagRestrictionList *p_scene_tags; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::ConfigCrowdItemRestrictionGroup *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&v7->item_show_condition >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v7->item_show_condition >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->item_show_condition);
  }
  item_show_condition = a2->item_show_condition;
  v3 = *(_BYTE *)(((unsigned __int64)&this->item_show_condition >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->item_show_condition, a2);
  }
  this->item_show_condition = item_show_condition;
  std::vector<data::ConfigCrowdQuestRestriction>::vector(&this->quest_res, &v7->quest_res);
  std::vector<data::ConfigCrowdActivityRestriction>::vector(&this->activity_res, &v7->activity_res);
  std::vector<data::ConfigCrowdTimeRestriction>::vector(&this->time_res, &v7->time_res);
  p_scene_tags = &v7->scene_tags;
  std::vector<data::ConfigCrowdSceneTagRestriction>::vector(&this->scene_tags, &v7->scene_tags);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_scene_tags, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_scene_tags) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_scene_tags, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 200: range 0000000013C179DC-0000000013C17A36
void __cdecl data::ConfigCrowdItemRestrictionGroup::~ConfigCrowdItemRestrictionGroup(
        data::ConfigCrowdItemRestrictionGroup *const this)
{
  std::vector<data::ConfigCrowdSceneTagRestriction>::~vector(&this->scene_tags);
  std::vector<data::ConfigCrowdTimeRestriction>::~vector(&this->time_res);
  std::vector<data::ConfigCrowdActivityRestriction>::~vector(&this->activity_res);
  std::vector<data::ConfigCrowdQuestRestriction>::~vector(&this->quest_res);
  std::string::~string(this);
};

// Line 238: range 0000000013C17AE0-0000000013C17CB0
void __cdecl data::ConfigCrowdGroupInfo::ConfigCrowdGroupInfo(data::ConfigCrowdGroupInfo *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->crowd_group_id = 0;
  data::Vector::Vector(&this->bound_center);
  data::Vector::Vector(&this->bound_size);
  v2 = ((_BYTE)this + 36) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->spawn_by_default >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->spawn_by_default >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->spawn_by_default, v2, v3);
  this->spawn_by_default = 1;
  std::vector<data::ConfigCrowdRestrictionGroup>::vector(&this->crowd_restriction_groups);
  std::vector<data::ConfigCrowdItemRestrictionGroup>::vector(&this->crowd_items_restriction_groups);
  if ( *(_BYTE *)(((unsigned __int64)&this->cutscene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cutscene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cutscene_id, v2);
  }
  this->cutscene_id = -1;
  v4 = ((_BYTE)this + 92) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->ignore_low_perf_mode >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->ignore_low_perf_mode >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->ignore_low_perf_mode, v4, v5);
  this->ignore_low_perf_mode = 0;
  std::vector<unsigned int>::vector(&this->joint_blocks);
  if ( *(char *)(((unsigned __int64)&this->can_be_optimized >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->can_be_optimized, v4, &this->can_be_optimized);
  this->can_be_optimized = 0;
  v6 = ((_BYTE)this + 121) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_json_loaded, v6, v7);
  this->is_json_loaded = 0;
};

// Line 238: range 0000000013E746D2-0000000013E74BF7
void __cdecl data::ConfigCrowdGroupInfo::ConfigCrowdGroupInfo(
        data::ConfigCrowdGroupInfo *const this,
        data::ConfigCrowdGroupInfo *a2)
{
  int32_t crowd_group_id; // ecx
  char v3; // al
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool spawn_by_default; // cl
  char v9; // dl
  __int64 v10; // rdx
  data::CrowdItemsRestrictionGroupList *p_crowd_items_restriction_groups; // rsi
  int32_t cutscene_id; // ecx
  char v13; // al
  __int64 v14; // rsi
  __int64 v15; // rdx
  bool ignore_low_perf_mode; // cl
  char v17; // dl
  __int64 v18; // rdx
  data::UInt32List *p_joint_blocks; // rsi
  bool can_be_optimized; // cl
  char v21; // al
  __int64 v22; // rsi
  __int64 v23; // rdx
  bool is_json_loaded; // cl
  char v25; // dl
  __int64 v26; // rdx
  data::ConfigCrowdGroupInfo *v27; // [rsp+0h] [rbp-10h]

  v27 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  crowd_group_id = a2->crowd_group_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->crowd_group_id = crowd_group_id;
  if ( (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->bound_center >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->bound_center >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->bound_center.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 19) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->bound_center.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->bound_center, 16LL);
  }
  if ( (((unsigned __int8)v27 + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&v27->bound_center >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v27->bound_center >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&v27->bound_center.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v27 + 19) & 7) >= *(_BYTE *)(((unsigned __int64)(&v27->bound_center.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&v27->bound_center, 16LL);
  }
  v4 = *(_QWORD *)&v27->bound_center.z;
  *(_QWORD *)&this->bound_center.x = *(_QWORD *)&v27->bound_center.x;
  *(_QWORD *)&this->bound_center.z = v4;
  if ( (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->bound_size >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->bound_size >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->bound_size.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 35) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->bound_size.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->bound_size, 16LL);
  }
  if ( (((unsigned __int8)v27 + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&v27->bound_size >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v27->bound_size >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&v27->bound_size.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v27 + 35) & 7) >= *(_BYTE *)(((unsigned __int64)(&v27->bound_size.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&v27->bound_size, 16LL);
  }
  v5 = *(_QWORD *)&v27->bound_size.z;
  *(_QWORD *)&this->bound_size.x = *(_QWORD *)&v27->bound_size.x;
  *(_QWORD *)&this->bound_size.z = v5;
  v6 = ((_BYTE)v27 + 36) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&v27->spawn_by_default >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&v27->spawn_by_default >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_load1(&v27->spawn_by_default, v6, v7);
  spawn_by_default = v27->spawn_by_default;
  v9 = *(_BYTE *)(((unsigned __int64)&this->spawn_by_default >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this + 36) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->spawn_by_default, v6, v10);
  this->spawn_by_default = spawn_by_default;
  std::vector<data::ConfigCrowdRestrictionGroup>::vector(
    &this->crowd_restriction_groups,
    &v27->crowd_restriction_groups);
  p_crowd_items_restriction_groups = &v27->crowd_items_restriction_groups;
  std::vector<data::ConfigCrowdItemRestrictionGroup>::vector(
    &this->crowd_items_restriction_groups,
    &v27->crowd_items_restriction_groups);
  if ( *(_BYTE *)(((unsigned __int64)&v27->cutscene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v27->cutscene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v27->cutscene_id);
  }
  cutscene_id = v27->cutscene_id;
  v13 = *(_BYTE *)(((unsigned __int64)&this->cutscene_id >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(p_crowd_items_restriction_groups) = v13 != 0;
    __asan_report_store4(&this->cutscene_id, p_crowd_items_restriction_groups);
  }
  this->cutscene_id = cutscene_id;
  v14 = ((_BYTE)v27 + 92) & 7;
  v15 = (*(_BYTE *)(((unsigned __int64)&v27->ignore_low_perf_mode >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&v27->ignore_low_perf_mode >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_load1(&v27->ignore_low_perf_mode, v14, v15);
  ignore_low_perf_mode = v27->ignore_low_perf_mode;
  v17 = *(_BYTE *)(((unsigned __int64)&this->ignore_low_perf_mode >> 3) + 0x7FFF8000);
  LOBYTE(v14) = v17 != 0;
  v18 = (v17 != 0) & (unsigned __int8)((((unsigned __int8)this + 92) & 7) >= v17);
  if ( (_BYTE)v18 )
    __asan_report_store1(&this->ignore_low_perf_mode, v14, v18);
  this->ignore_low_perf_mode = ignore_low_perf_mode;
  p_joint_blocks = &v27->joint_blocks;
  std::vector<unsigned int>::vector(&this->joint_blocks, &v27->joint_blocks);
  if ( *(char *)(((unsigned __int64)&v27->can_be_optimized >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v27->can_be_optimized, p_joint_blocks, &v27->can_be_optimized);
  can_be_optimized = v27->can_be_optimized;
  v21 = *(_BYTE *)(((unsigned __int64)&this->can_be_optimized >> 3) + 0x7FFF8000);
  if ( v21 < 0 )
  {
    LOBYTE(p_joint_blocks) = v21 != 0;
    __asan_report_store1(&this->can_be_optimized, p_joint_blocks, &this->can_be_optimized);
  }
  this->can_be_optimized = can_be_optimized;
  v22 = ((_BYTE)v27 + 121) & 7;
  v23 = (*(_BYTE *)(((unsigned __int64)&v27->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v22 >= *(_BYTE *)(((unsigned __int64)&v27->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v23 )
    __asan_report_load1(&v27->is_json_loaded, v22, v23);
  is_json_loaded = v27->is_json_loaded;
  v25 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v22) = v25 != 0;
  v26 = (v25 != 0) & (unsigned __int8)((((unsigned __int8)this + 121) & 7) >= v25);
  if ( (_BYTE)v26 )
    __asan_report_store1(&this->is_json_loaded, v22, v26);
  this->is_json_loaded = is_json_loaded;
};

// Line 238: range 0000000013C17CB2-0000000013C17CF0
void __cdecl data::ConfigCrowdGroupInfo::~ConfigCrowdGroupInfo(data::ConfigCrowdGroupInfo *const this)
{
  std::vector<unsigned int>::~vector(&this->joint_blocks);
  std::vector<data::ConfigCrowdItemRestrictionGroup>::~vector(&this->crowd_items_restriction_groups);
  std::vector<data::ConfigCrowdRestrictionGroup>::~vector(&this->crowd_restriction_groups);
};
