// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_block_group_comp.h

// Line 40: range 0000000015B7DC90-0000000015B7DCBA
void __cdecl GroupEntityOverrideParam::GroupEntityOverrideParam(GroupEntityOverrideParam *const this)
{
  std::optional<Vector3>::optional(&this->pos_opt);
  std::optional<Vector3>::optional(&this->rot_opt);
};

// Line 47: range 0000000015A1B2BA-0000000015A1B2E2
GroupOverrideParam *__cdecl GroupOverrideParam::operator=(GroupOverrideParam *const this, const GroupOverrideParam *a2)
{
  std::unordered_map<unsigned int,GroupEntityOverrideParam>::operator=(
    &this->entity_override_param_map,
    &a2->entity_override_param_map);
  return this;
};

// Line 47: range 0000000015A1FBE4-0000000015A1FBFE
void __cdecl GroupOverrideParam::GroupOverrideParam(GroupOverrideParam *const this)
{
  std::unordered_map<unsigned int,GroupEntityOverrideParam>::unordered_map(&this->entity_override_param_map);
};

// Line 47: range 0000000015AB7A80-0000000015AB7AA5
void __cdecl GroupOverrideParam::GroupOverrideParam(GroupOverrideParam *const this, GroupOverrideParam *a2)
{
  std::unordered_map<unsigned int,GroupEntityOverrideParam>::unordered_map(
    &this->entity_override_param_map,
    &a2->entity_override_param_map);
};

// Line 47: range 0000000015A1FC00-0000000015A1FC1A
void __cdecl GroupOverrideParam::~GroupOverrideParam(GroupOverrideParam *const this)
{
  std::unordered_map<unsigned int,GroupEntityOverrideParam>::~unordered_map(&this->entity_override_param_map);
};

// Line 53: range 000000001605327C-000000001605398B
GroupInitParam *__cdecl GroupInitParam::operator=(GroupInitParam *const this, GroupInitParam *a2)
{
  std::map<unsigned int,unsigned int> *p_monster_one_off_set; // rsi
  uint32_t world_level; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t scene_revise_level; // ecx
  char v7; // dl
  bool v8; // dl
  uint32_t mp_players; // ecx
  char v10; // al
  __int64 v11; // rsi
  uint32_t city_level; // ecx
  char v13; // dl
  bool v14; // dl
  uint32_t weather; // ecx
  char v16; // al
  __int64 v17; // rsi
  uint32_t dungeon_id; // ecx
  char v19; // dl
  bool v20; // dl
  std::unordered_set<std::string> *p_exclude_gadget_drop_category_set; // rsi
  uint32_t client_silence_version; // ecx
  char v23; // al
  __int64 v24; // rsi
  uint32_t owner_uid; // ecx
  char v26; // dl
  bool v27; // dl
  std::string *p_group_lua_file_path; // rsi
  bool is_force_clean_sub_entity; // cl
  char v30; // al
  __int64 v31; // rsi
  uint32_t flow_suite_index; // ecx
  char v33; // dl
  bool v34; // dl
  uint32_t input_revise_level_growth_id; // ecx
  char v36; // al
  __int64 v37; // rsi
  uint32_t rely_activity_world_level_limit; // ecx
  char v39; // dl
  bool v40; // dl

  std::function<unsigned int ()(proto::ProtEntityType)>::operator=(&this->gen_entity_id_func, &a2->gen_entity_id_func);
  std::map<unsigned int,unsigned int>::operator=(&this->gadget_one_off_set, &a2->gadget_one_off_set);
  p_monster_one_off_set = &a2->monster_one_off_set;
  std::map<unsigned int,unsigned int>::operator=(&this->monster_one_off_set, p_monster_one_off_set);
  if ( *(_BYTE *)(((unsigned __int64)&a2->world_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->world_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  world_level = a2->world_level;
  v4 = *(_BYTE *)(((unsigned __int64)&this->world_level >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(p_monster_one_off_set) = v4 != 0;
    __asan_report_store4(&this->world_level, p_monster_one_off_set, (_BYTE)this + 0x80);
  }
  this->world_level = world_level;
  v5 = (((_BYTE)a2 - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->scene_revise_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->scene_revise_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  scene_revise_level = a2->scene_revise_level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->scene_revise_level >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  v8 = v7 != 0 && (char)((((_BYTE)this - 124) & 7) + 3) >= v7;
  if ( v8 )
    __asan_report_store4(&this->scene_revise_level, v5, v8);
  this->scene_revise_level = scene_revise_level;
  if ( *(_BYTE *)(((unsigned __int64)&a2->mp_players >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->mp_players >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  mp_players = a2->mp_players;
  v10 = *(_BYTE *)(((unsigned __int64)&this->mp_players >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(v5) = v10 != 0;
    __asan_report_store4(&this->mp_players, v5, (_BYTE)this - 120);
  }
  this->mp_players = mp_players;
  v11 = (((_BYTE)a2 - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->city_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->city_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  city_level = a2->city_level;
  v13 = *(_BYTE *)(((unsigned __int64)&this->city_level >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v13 != 0;
  v14 = v13 != 0 && (char)((((_BYTE)this - 116) & 7) + 3) >= v13;
  if ( v14 )
    __asan_report_store4(&this->city_level, v11, v14);
  this->city_level = city_level;
  if ( *(_BYTE *)(((unsigned __int64)&a2->weather >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->weather >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  weather = a2->weather;
  v16 = *(_BYTE *)(((unsigned __int64)&this->weather >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(v11) = v16 != 0;
    __asan_report_store4(&this->weather, v11, (_BYTE)this - 112);
  }
  this->weather = weather;
  v17 = (((_BYTE)a2 - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  dungeon_id = a2->dungeon_id;
  v19 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  LOBYTE(v17) = v19 != 0;
  v20 = v19 != 0 && (char)((((_BYTE)this - 108) & 7) + 3) >= v19;
  if ( v20 )
    __asan_report_store4(&this->dungeon_id, v17, v20);
  this->dungeon_id = dungeon_id;
  p_exclude_gadget_drop_category_set = &a2->exclude_gadget_drop_category_set;
  std::unordered_set<std::string>::operator=(
    &this->exclude_gadget_drop_category_set,
    &a2->exclude_gadget_drop_category_set);
  if ( *(_BYTE *)(((unsigned __int64)&a2->client_silence_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->client_silence_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  client_silence_version = a2->client_silence_version;
  v23 = *(_BYTE *)(((unsigned __int64)&this->client_silence_version >> 3) + 0x7FFF8000);
  if ( v23 != 0 && v23 <= 3 )
  {
    LOBYTE(p_exclude_gadget_drop_category_set) = v23 != 0;
    __asan_report_store4(&this->client_silence_version, p_exclude_gadget_drop_category_set, (_BYTE)this - 48);
  }
  this->client_silence_version = client_silence_version;
  v24 = (((_BYTE)a2 - 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->owner_uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->owner_uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  owner_uid = a2->owner_uid;
  v26 = *(_BYTE *)(((unsigned __int64)&this->owner_uid >> 3) + 0x7FFF8000);
  LOBYTE(v24) = v26 != 0;
  v27 = v26 != 0 && (char)((((_BYTE)this - 44) & 7) + 3) >= v26;
  if ( v27 )
    __asan_report_store4(&this->owner_uid, v24, v27);
  this->owner_uid = owner_uid;
  std::string::operator=(&this->md5, &a2->md5);
  p_group_lua_file_path = &a2->group_lua_file_path;
  std::string::operator=(&this->group_lua_file_path, &a2->group_lua_file_path);
  if ( *(char *)(((unsigned __int64)&a2->is_force_clean_sub_entity >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_force_clean_sub_entity);
  is_force_clean_sub_entity = a2->is_force_clean_sub_entity;
  v30 = *(_BYTE *)(((unsigned __int64)&this->is_force_clean_sub_entity >> 3) + 0x7FFF8000);
  if ( v30 < 0 )
  {
    LOBYTE(p_group_lua_file_path) = v30 != 0;
    __asan_report_store1(&this->is_force_clean_sub_entity, p_group_lua_file_path, &this->is_force_clean_sub_entity);
  }
  this->is_force_clean_sub_entity = is_force_clean_sub_entity;
  v31 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->flow_suite_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->flow_suite_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  flow_suite_index = a2->flow_suite_index;
  v33 = *(_BYTE *)(((unsigned __int64)&this->flow_suite_index >> 3) + 0x7FFF8000);
  LOBYTE(v31) = v33 != 0;
  v34 = v33 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v33;
  if ( v34 )
    __asan_report_store4(&this->flow_suite_index, v31, v34);
  this->flow_suite_index = flow_suite_index;
  if ( *(_BYTE *)(((unsigned __int64)&a2->input_revise_level_growth_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->input_revise_level_growth_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  input_revise_level_growth_id = a2->input_revise_level_growth_id;
  v36 = *(_BYTE *)(((unsigned __int64)&this->input_revise_level_growth_id >> 3) + 0x7FFF8000);
  if ( v36 != 0 && v36 <= 3 )
  {
    LOBYTE(v31) = v36 != 0;
    __asan_report_store4(&this->input_revise_level_growth_id, v31, (_BYTE)this + 32);
  }
  this->input_revise_level_growth_id = input_revise_level_growth_id;
  v37 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->rely_activity_world_level_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->rely_activity_world_level_limit >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  rely_activity_world_level_limit = a2->rely_activity_world_level_limit;
  v39 = *(_BYTE *)(((unsigned __int64)&this->rely_activity_world_level_limit >> 3) + 0x7FFF8000);
  LOBYTE(v37) = v39 != 0;
  v40 = v39 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v39;
  if ( v40 )
    __asan_report_store4(&this->rely_activity_world_level_limit, v37, v40);
  this->rely_activity_world_level_limit = rely_activity_world_level_limit;
  return this;
};

// Line 53: range 0000000015A1F604-0000000015A1F9C3
void __cdecl GroupInitParam::GroupInitParam(GroupInitParam *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  bool v3; // dl
  __int64 v4; // rsi
  bool v5; // dl
  __int64 v6; // rsi
  bool v7; // dl
  __int64 v8; // rsi
  bool v9; // dl
  __int64 v10; // rsi
  bool v11; // dl
  bool v12; // dl

  std::function<unsigned int ()(proto::ProtEntityType)>::function(&this->gen_entity_id_func);
  std::map<unsigned int,unsigned int>::map(&this->gadget_one_off_set);
  std::map<unsigned int,unsigned int>::map(&this->monster_one_off_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->world_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->world_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->world_level, v1, (_BYTE)this + 0x80);
  }
  this->world_level = 0;
  v2 = (((_BYTE)this - 124) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->scene_revise_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_revise_level >> 3)
                                                         + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->scene_revise_level, v2, v3);
  this->scene_revise_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_players >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mp_players >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mp_players, v2, (_BYTE)this - 120);
  }
  this->mp_players = 0;
  v4 = (((_BYTE)this - 116) & 7u) + 3;
  v5 = *(_BYTE *)(((unsigned __int64)&this->city_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->city_level >> 3) + 0x7FFF8000);
  if ( v5 )
    __asan_report_store4(&this->city_level, v4, v5);
  this->city_level = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->weather >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weather >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->weather, v4, (_BYTE)this - 112);
  }
  this->weather = 0;
  v6 = (((_BYTE)this - 108) & 7u) + 3;
  v7 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v7 )
    __asan_report_store4(&this->dungeon_id, v6, v7);
  this->dungeon_id = 0;
  std::unordered_set<std::string>::unordered_set(&this->exclude_gadget_drop_category_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->client_silence_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->client_silence_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->client_silence_version, v6, (_BYTE)this - 48);
  }
  this->client_silence_version = 0;
  v8 = (((_BYTE)this - 44) & 7u) + 3;
  v9 = *(_BYTE *)(((unsigned __int64)&this->owner_uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->owner_uid >> 3) + 0x7FFF8000);
  if ( v9 )
    __asan_report_store4(&this->owner_uid, v8, v9);
  this->owner_uid = 0;
  std::string::basic_string(&this->md5);
  std::string::basic_string(&this->group_lua_file_path);
  if ( *(char *)(((unsigned __int64)&this->is_force_clean_sub_entity >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_force_clean_sub_entity, v8, &this->is_force_clean_sub_entity);
  this->is_force_clean_sub_entity = 0;
  v10 = (((_BYTE)this + 28) & 7u) + 3;
  v11 = *(_BYTE *)(((unsigned __int64)&this->flow_suite_index >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->flow_suite_index >> 3) + 0x7FFF8000);
  if ( v11 )
    __asan_report_store4(&this->flow_suite_index, v10, v11);
  this->flow_suite_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->input_revise_level_growth_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->input_revise_level_growth_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->input_revise_level_growth_id, v10, (_BYTE)this + 32);
  }
  this->input_revise_level_growth_id = 0;
  v12 = *(_BYTE *)(((unsigned __int64)&this->rely_activity_world_level_limit >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rely_activity_world_level_limit >> 3)
                                                         + 0x7FFF8000);
  if ( v12 )
    __asan_report_store4(&this->rely_activity_world_level_limit, (((_BYTE)this + 36) & 7u) + 3, v12);
  this->rely_activity_world_level_limit = 0;
};

// Line 53: range 0000000015A1FFF4-0000000015A2077B
void __cdecl GroupInitParam::GroupInitParam(GroupInitParam *const this, const GroupInitParam *a2)
{
  std::map<unsigned int,unsigned int> *p_monster_one_off_set; // rsi
  uint32_t world_level; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t scene_revise_level; // ecx
  char v7; // dl
  bool v8; // dl
  uint32_t mp_players; // ecx
  char v10; // al
  __int64 v11; // rsi
  uint32_t city_level; // ecx
  char v13; // dl
  bool v14; // dl
  uint32_t weather; // ecx
  char v16; // al
  __int64 v17; // rsi
  uint32_t dungeon_id; // ecx
  char v19; // dl
  bool v20; // dl
  std::unordered_set<std::string> *p_exclude_gadget_drop_category_set; // rsi
  uint32_t client_silence_version; // ecx
  char v23; // al
  __int64 v24; // rsi
  uint32_t owner_uid; // ecx
  char v26; // dl
  bool v27; // dl
  std::string *p_group_lua_file_path; // rsi
  bool is_force_clean_sub_entity; // cl
  char v30; // al
  __int64 v31; // rsi
  uint32_t flow_suite_index; // ecx
  char v33; // dl
  bool v34; // dl
  uint32_t input_revise_level_growth_id; // ecx
  char v36; // al
  __int64 v37; // rsi
  uint32_t rely_activity_world_level_limit; // ecx
  char v39; // dl
  bool v40; // dl

  std::function<unsigned int ()(proto::ProtEntityType)>::function(&this->gen_entity_id_func, &a2->gen_entity_id_func);
  std::map<unsigned int,unsigned int>::map(&this->gadget_one_off_set, &a2->gadget_one_off_set);
  p_monster_one_off_set = &a2->monster_one_off_set;
  std::map<unsigned int,unsigned int>::map(&this->monster_one_off_set, p_monster_one_off_set);
  if ( *(_BYTE *)(((unsigned __int64)&a2->world_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->world_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  world_level = a2->world_level;
  v4 = *(_BYTE *)(((unsigned __int64)&this->world_level >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(p_monster_one_off_set) = v4 != 0;
    __asan_report_store4(&this->world_level, p_monster_one_off_set, (_BYTE)this + 0x80);
  }
  this->world_level = world_level;
  v5 = (((_BYTE)a2 - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->scene_revise_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->scene_revise_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  scene_revise_level = a2->scene_revise_level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->scene_revise_level >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  v8 = v7 != 0 && (char)((((_BYTE)this - 124) & 7) + 3) >= v7;
  if ( v8 )
    __asan_report_store4(&this->scene_revise_level, v5, v8);
  this->scene_revise_level = scene_revise_level;
  if ( *(_BYTE *)(((unsigned __int64)&a2->mp_players >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->mp_players >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  mp_players = a2->mp_players;
  v10 = *(_BYTE *)(((unsigned __int64)&this->mp_players >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(v5) = v10 != 0;
    __asan_report_store4(&this->mp_players, v5, (_BYTE)this - 120);
  }
  this->mp_players = mp_players;
  v11 = (((_BYTE)a2 - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->city_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->city_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  city_level = a2->city_level;
  v13 = *(_BYTE *)(((unsigned __int64)&this->city_level >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v13 != 0;
  v14 = v13 != 0 && (char)((((_BYTE)this - 116) & 7) + 3) >= v13;
  if ( v14 )
    __asan_report_store4(&this->city_level, v11, v14);
  this->city_level = city_level;
  if ( *(_BYTE *)(((unsigned __int64)&a2->weather >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->weather >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  weather = a2->weather;
  v16 = *(_BYTE *)(((unsigned __int64)&this->weather >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(v11) = v16 != 0;
    __asan_report_store4(&this->weather, v11, (_BYTE)this - 112);
  }
  this->weather = weather;
  v17 = (((_BYTE)a2 - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  dungeon_id = a2->dungeon_id;
  v19 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  LOBYTE(v17) = v19 != 0;
  v20 = v19 != 0 && (char)((((_BYTE)this - 108) & 7) + 3) >= v19;
  if ( v20 )
    __asan_report_store4(&this->dungeon_id, v17, v20);
  this->dungeon_id = dungeon_id;
  p_exclude_gadget_drop_category_set = &a2->exclude_gadget_drop_category_set;
  std::unordered_set<std::string>::unordered_set(
    &this->exclude_gadget_drop_category_set,
    &a2->exclude_gadget_drop_category_set);
  if ( *(_BYTE *)(((unsigned __int64)&a2->client_silence_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->client_silence_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  client_silence_version = a2->client_silence_version;
  v23 = *(_BYTE *)(((unsigned __int64)&this->client_silence_version >> 3) + 0x7FFF8000);
  if ( v23 != 0 && v23 <= 3 )
  {
    LOBYTE(p_exclude_gadget_drop_category_set) = v23 != 0;
    __asan_report_store4(&this->client_silence_version, p_exclude_gadget_drop_category_set, (_BYTE)this - 48);
  }
  this->client_silence_version = client_silence_version;
  v24 = (((_BYTE)a2 - 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->owner_uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->owner_uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  owner_uid = a2->owner_uid;
  v26 = *(_BYTE *)(((unsigned __int64)&this->owner_uid >> 3) + 0x7FFF8000);
  LOBYTE(v24) = v26 != 0;
  v27 = v26 != 0 && (char)((((_BYTE)this - 44) & 7) + 3) >= v26;
  if ( v27 )
    __asan_report_store4(&this->owner_uid, v24, v27);
  this->owner_uid = owner_uid;
  std::string::basic_string(&this->md5, &a2->md5);
  p_group_lua_file_path = &a2->group_lua_file_path;
  std::string::basic_string(&this->group_lua_file_path, &a2->group_lua_file_path);
  if ( *(char *)(((unsigned __int64)&a2->is_force_clean_sub_entity >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_force_clean_sub_entity);
  is_force_clean_sub_entity = a2->is_force_clean_sub_entity;
  v30 = *(_BYTE *)(((unsigned __int64)&this->is_force_clean_sub_entity >> 3) + 0x7FFF8000);
  if ( v30 < 0 )
  {
    LOBYTE(p_group_lua_file_path) = v30 != 0;
    __asan_report_store1(&this->is_force_clean_sub_entity, p_group_lua_file_path, &this->is_force_clean_sub_entity);
  }
  this->is_force_clean_sub_entity = is_force_clean_sub_entity;
  v31 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->flow_suite_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->flow_suite_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  flow_suite_index = a2->flow_suite_index;
  v33 = *(_BYTE *)(((unsigned __int64)&this->flow_suite_index >> 3) + 0x7FFF8000);
  LOBYTE(v31) = v33 != 0;
  v34 = v33 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v33;
  if ( v34 )
    __asan_report_store4(&this->flow_suite_index, v31, v34);
  this->flow_suite_index = flow_suite_index;
  if ( *(_BYTE *)(((unsigned __int64)&a2->input_revise_level_growth_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->input_revise_level_growth_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  input_revise_level_growth_id = a2->input_revise_level_growth_id;
  v36 = *(_BYTE *)(((unsigned __int64)&this->input_revise_level_growth_id >> 3) + 0x7FFF8000);
  if ( v36 != 0 && v36 <= 3 )
  {
    LOBYTE(v31) = v36 != 0;
    __asan_report_store4(&this->input_revise_level_growth_id, v31, (_BYTE)this + 32);
  }
  this->input_revise_level_growth_id = input_revise_level_growth_id;
  v37 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->rely_activity_world_level_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->rely_activity_world_level_limit >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  rely_activity_world_level_limit = a2->rely_activity_world_level_limit;
  v39 = *(_BYTE *)(((unsigned __int64)&this->rely_activity_world_level_limit >> 3) + 0x7FFF8000);
  LOBYTE(v37) = v39 != 0;
  v40 = v39 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v39;
  if ( v40 )
    __asan_report_store4(&this->rely_activity_world_level_limit, v37, v40);
  this->rely_activity_world_level_limit = rely_activity_world_level_limit;
};

// Line 53: range 0000000015A1F9C4-0000000015A1FA34
void __cdecl GroupInitParam::~GroupInitParam(GroupInitParam *const this)
{
  std::string::~string(&this->group_lua_file_path);
  std::string::~string(&this->md5);
  std::unordered_set<std::string>::~unordered_set(&this->exclude_gadget_drop_category_set);
  std::map<unsigned int,unsigned int>::~map(&this->monster_one_off_set);
  std::map<unsigned int,unsigned int>::~map(&this->gadget_one_off_set);
  std::function<unsigned int ()(proto::ProtEntityType)>::~function(&this->gen_entity_id_func);
};

// Line 76: range 0000000015A1FC1C-0000000015A1FDB8
void __cdecl GroupLoadContext::GroupLoadContext(GroupLoadContext *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  bool v3; // dl
  bool v4; // dl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->group_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->scene_id, v2, v3);
  this->scene_id = 0;
  if ( *(char *)(((unsigned __int64)&this->from_bin >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->from_bin, v2, &this->from_bin);
  this->from_bin = 0;
  proto::GroupBin::GroupBin(&this->group_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->group_load_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_load_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_load_version, v2, (_BYTE)this + 104);
  }
  this->group_load_version = 0;
  v4 = *(_BYTE *)(((unsigned __int64)&this->revise_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->revise_level >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->revise_level, (((_BYTE)this + 108) & 7u) + 3, v4);
  this->revise_level = 0;
  GroupInitParam::GroupInitParam(&this->init_param);
  std::shared_ptr<Group>::shared_ptr(&this->group_ptr);
  GroupOverrideParam::GroupOverrideParam(&this->override_param);
};

// Line 76: range 0000000015AB7AA6-0000000015AB7DA7
void __cdecl GroupLoadContext::GroupLoadContext(GroupLoadContext *const this, GroupLoadContext *a2)
{
  uint32_t group_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t scene_id; // ecx
  char v6; // dl
  bool v7; // dl
  bool from_bin; // cl
  char v9; // al
  proto::GroupBin *p_group_bin; // rsi
  uint32_t group_load_version; // ecx
  char v12; // al
  __int64 v13; // rsi
  uint32_t revise_level; // ecx
  char v15; // dl
  bool v16; // dl
  GroupLoadContext *v17; // [rsp+0h] [rbp-10h]

  v17 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  group_id = a2->group_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, (_BYTE)this);
  }
  this->group_id = group_id;
  v4 = (((_BYTE)v17 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v17->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v17 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  scene_id = v17->scene_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6;
  if ( v7 )
    __asan_report_store4(&this->scene_id, v4, v7);
  this->scene_id = scene_id;
  if ( *(char *)(((unsigned __int64)&v17->from_bin >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v17->from_bin);
  from_bin = v17->from_bin;
  v9 = *(_BYTE *)(((unsigned __int64)&this->from_bin >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(v4) = v9 != 0;
    __asan_report_store1(&this->from_bin, v4, &this->from_bin);
  }
  this->from_bin = from_bin;
  p_group_bin = &v17->group_bin;
  proto::GroupBin::GroupBin(&this->group_bin, &v17->group_bin);
  if ( *(_BYTE *)(((unsigned __int64)&v17->group_load_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->group_load_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  group_load_version = v17->group_load_version;
  v12 = *(_BYTE *)(((unsigned __int64)&this->group_load_version >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_group_bin) = v12 != 0;
    __asan_report_store4(&this->group_load_version, p_group_bin, (_BYTE)this + 104);
  }
  this->group_load_version = group_load_version;
  v13 = (((_BYTE)v17 + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v17->revise_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v17 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->revise_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  revise_level = v17->revise_level;
  v15 = *(_BYTE *)(((unsigned __int64)&this->revise_level >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v15 != 0;
  v16 = v15 != 0 && (char)((((_BYTE)this + 108) & 7) + 3) >= v15;
  if ( v16 )
    __asan_report_store4(&this->revise_level, v13, v16);
  this->revise_level = revise_level;
  GroupInitParam::GroupInitParam(&this->init_param, &v17->init_param);
  std::shared_ptr<Group>::shared_ptr(&this->group_ptr, &v17->group_ptr);
  GroupOverrideParam::GroupOverrideParam(&this->override_param, &v17->override_param);
};

// Line 76: range 0000000015A1FDBA-0000000015A1FE0E
void __cdecl GroupLoadContext::~GroupLoadContext(GroupLoadContext *const this)
{
  GroupOverrideParam::~GroupOverrideParam(&this->override_param);
  std::shared_ptr<Group>::~shared_ptr(&this->group_ptr);
  GroupInitParam::~GroupInitParam(&this->init_param);
  proto::GroupBin::~GroupBin(&this->group_bin);
};

// Line 89: range 0000000015BD669A-0000000015BD66E5
void __cdecl GroupBatchLoadContext::GroupBatchLoadContext(GroupBatchLoadContext *const this)
{
  __int64 v1; // rsi

  std::vector<GroupLoadContext>::vector(&this->group_load_context_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->start_ms >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->start_ms, v1);
  this->start_ms = 0LL;
};

// Line 89: range 0000000015C2E4A4-0000000015C2E4BE
void __cdecl GroupBatchLoadContext::~GroupBatchLoadContext(GroupBatchLoadContext *const this)
{
  std::vector<GroupLoadContext>::~vector(&this->group_load_context_vec);
};

// Line 95: range 000000001350D640-000000001350D6D5
void __cdecl GroupLoadParam::GroupLoadParam(GroupLoadParam *const this)
{
  bool v1; // dl
  bool v2; // dl

  v1 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->revise_level = 0;
  v2 = *(_BYTE *)(((unsigned __int64)&this->revise_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->revise_id >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->revise_id, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->revise_id = 0;
};

// Line 101: range 0000000015BFA06C-0000000015BFA18B
void __cdecl SceneBlockGroupComp::~SceneBlockGroupComp(SceneBlockGroupComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SceneBlockGroupComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SceneCompBase = v2;
  std::unordered_map<unsigned int,bool>::~unordered_map(&this->gm_random_selected_dynamic_group_map_);
  std::unordered_map<unsigned int,GroupOverrideParam>::~unordered_map(&this->group_override_param_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->unregister_cleared_group_set_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->find_group_count_map_);
  std::unordered_map<unsigned int,int>::~unordered_map(&this->loading_group_map_);
  std::shared_ptr<GroupsReplacementMgr>::~shared_ptr(&this->replacement_mgr_ptr_);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::~unordered_map(&this->quest_pattern_2_group_map_);
  std::unordered_map<unsigned int,std::shared_ptr<Group>>::~unordered_map(&this->pattern_group_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->group_load_version_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->dead_group_set_);
  std::unordered_map<unsigned int,std::shared_ptr<Group>>::~unordered_map(&this->group_map_);
  std::map<unsigned int,Vector3>::~map(&this->last_reload_pos_map_);
  SceneCompBase::~SceneCompBase((SceneCompBase *const)this);
};

// Line 101: range 0000000015BFA18C-0000000015BFA1B6
void __cdecl SceneBlockGroupComp::~SceneBlockGroupComp(SceneBlockGroupComp *const this)
{
  SceneBlockGroupComp::~SceneBlockGroupComp(this);
  operator delete(this, 0x2A0uLL);
};

// Line 142: range 0000000015A1A836-0000000015A1A905
void __fastcall SceneBlockGroupComp::erasePlayerReloadPos(SceneBlockGroupComp *const this, uint32_t uid)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:142";
  *(_QWORD *)(v2 + 16) = SceneBlockGroupComp::erasePlayerReloadPos;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  std::map<unsigned int,Vector3>::erase(
    &this->last_reload_pos_map_,
    (const std::map<unsigned int,Vector3>::key_type *)(v2 + 32));
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

// Line 178: range 0000000015AB734C-0000000015AB7A58
void __cdecl GroupInitParam::GroupInitParam(GroupInitParam *const this, GroupInitParam *a2)
{
  std::map<unsigned int,unsigned int> *p_monster_one_off_set; // rsi
  uint32_t world_level; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t scene_revise_level; // ecx
  char v7; // dl
  bool v8; // dl
  uint32_t mp_players; // ecx
  char v10; // al
  __int64 v11; // rsi
  uint32_t city_level; // ecx
  char v13; // dl
  bool v14; // dl
  uint32_t weather; // ecx
  char v16; // al
  __int64 v17; // rsi
  uint32_t dungeon_id; // ecx
  char v19; // dl
  bool v20; // dl
  std::unordered_set<std::string> *p_exclude_gadget_drop_category_set; // rsi
  uint32_t client_silence_version; // ecx
  char v23; // al
  __int64 v24; // rsi
  uint32_t owner_uid; // ecx
  char v26; // dl
  bool v27; // dl
  std::string *p_group_lua_file_path; // rsi
  bool is_force_clean_sub_entity; // cl
  char v30; // al
  __int64 v31; // rsi
  uint32_t flow_suite_index; // ecx
  char v33; // dl
  bool v34; // dl
  uint32_t input_revise_level_growth_id; // ecx
  char v36; // al
  __int64 v37; // rsi
  uint32_t rely_activity_world_level_limit; // ecx
  char v39; // dl
  bool v40; // dl

  std::function<unsigned int ()(proto::ProtEntityType)>::function(&this->gen_entity_id_func, &a2->gen_entity_id_func);
  std::map<unsigned int,unsigned int>::map(&this->gadget_one_off_set, &a2->gadget_one_off_set);
  p_monster_one_off_set = &a2->monster_one_off_set;
  std::map<unsigned int,unsigned int>::map(&this->monster_one_off_set, p_monster_one_off_set);
  if ( *(_BYTE *)(((unsigned __int64)&a2->world_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->world_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  world_level = a2->world_level;
  v4 = *(_BYTE *)(((unsigned __int64)&this->world_level >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(p_monster_one_off_set) = v4 != 0;
    __asan_report_store4(&this->world_level, p_monster_one_off_set, (_BYTE)this + 0x80);
  }
  this->world_level = world_level;
  v5 = (((_BYTE)a2 - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->scene_revise_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->scene_revise_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  scene_revise_level = a2->scene_revise_level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->scene_revise_level >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  v8 = v7 != 0 && (char)((((_BYTE)this - 124) & 7) + 3) >= v7;
  if ( v8 )
    __asan_report_store4(&this->scene_revise_level, v5, v8);
  this->scene_revise_level = scene_revise_level;
  if ( *(_BYTE *)(((unsigned __int64)&a2->mp_players >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->mp_players >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  mp_players = a2->mp_players;
  v10 = *(_BYTE *)(((unsigned __int64)&this->mp_players >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(v5) = v10 != 0;
    __asan_report_store4(&this->mp_players, v5, (_BYTE)this - 120);
  }
  this->mp_players = mp_players;
  v11 = (((_BYTE)a2 - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->city_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->city_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  city_level = a2->city_level;
  v13 = *(_BYTE *)(((unsigned __int64)&this->city_level >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v13 != 0;
  v14 = v13 != 0 && (char)((((_BYTE)this - 116) & 7) + 3) >= v13;
  if ( v14 )
    __asan_report_store4(&this->city_level, v11, v14);
  this->city_level = city_level;
  if ( *(_BYTE *)(((unsigned __int64)&a2->weather >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->weather >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  weather = a2->weather;
  v16 = *(_BYTE *)(((unsigned __int64)&this->weather >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(v11) = v16 != 0;
    __asan_report_store4(&this->weather, v11, (_BYTE)this - 112);
  }
  this->weather = weather;
  v17 = (((_BYTE)a2 - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  dungeon_id = a2->dungeon_id;
  v19 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  LOBYTE(v17) = v19 != 0;
  v20 = v19 != 0 && (char)((((_BYTE)this - 108) & 7) + 3) >= v19;
  if ( v20 )
    __asan_report_store4(&this->dungeon_id, v17, v20);
  this->dungeon_id = dungeon_id;
  p_exclude_gadget_drop_category_set = &a2->exclude_gadget_drop_category_set;
  std::unordered_set<std::string>::unordered_set(
    &this->exclude_gadget_drop_category_set,
    &a2->exclude_gadget_drop_category_set);
  if ( *(_BYTE *)(((unsigned __int64)&a2->client_silence_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->client_silence_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  client_silence_version = a2->client_silence_version;
  v23 = *(_BYTE *)(((unsigned __int64)&this->client_silence_version >> 3) + 0x7FFF8000);
  if ( v23 != 0 && v23 <= 3 )
  {
    LOBYTE(p_exclude_gadget_drop_category_set) = v23 != 0;
    __asan_report_store4(&this->client_silence_version, p_exclude_gadget_drop_category_set, (_BYTE)this - 48);
  }
  this->client_silence_version = client_silence_version;
  v24 = (((_BYTE)a2 - 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->owner_uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->owner_uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  owner_uid = a2->owner_uid;
  v26 = *(_BYTE *)(((unsigned __int64)&this->owner_uid >> 3) + 0x7FFF8000);
  LOBYTE(v24) = v26 != 0;
  v27 = v26 != 0 && (char)((((_BYTE)this - 44) & 7) + 3) >= v26;
  if ( v27 )
    __asan_report_store4(&this->owner_uid, v24, v27);
  this->owner_uid = owner_uid;
  std::string::basic_string(&this->md5, &a2->md5);
  p_group_lua_file_path = &a2->group_lua_file_path;
  std::string::basic_string(&this->group_lua_file_path, &a2->group_lua_file_path);
  if ( *(char *)(((unsigned __int64)&a2->is_force_clean_sub_entity >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_force_clean_sub_entity);
  is_force_clean_sub_entity = a2->is_force_clean_sub_entity;
  v30 = *(_BYTE *)(((unsigned __int64)&this->is_force_clean_sub_entity >> 3) + 0x7FFF8000);
  if ( v30 < 0 )
  {
    LOBYTE(p_group_lua_file_path) = v30 != 0;
    __asan_report_store1(&this->is_force_clean_sub_entity, p_group_lua_file_path, &this->is_force_clean_sub_entity);
  }
  this->is_force_clean_sub_entity = is_force_clean_sub_entity;
  v31 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->flow_suite_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->flow_suite_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  flow_suite_index = a2->flow_suite_index;
  v33 = *(_BYTE *)(((unsigned __int64)&this->flow_suite_index >> 3) + 0x7FFF8000);
  LOBYTE(v31) = v33 != 0;
  v34 = v33 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v33;
  if ( v34 )
    __asan_report_store4(&this->flow_suite_index, v31, v34);
  this->flow_suite_index = flow_suite_index;
  if ( *(_BYTE *)(((unsigned __int64)&a2->input_revise_level_growth_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->input_revise_level_growth_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  input_revise_level_growth_id = a2->input_revise_level_growth_id;
  v36 = *(_BYTE *)(((unsigned __int64)&this->input_revise_level_growth_id >> 3) + 0x7FFF8000);
  if ( v36 != 0 && v36 <= 3 )
  {
    LOBYTE(v31) = v36 != 0;
    __asan_report_store4(&this->input_revise_level_growth_id, v31, (_BYTE)this + 32);
  }
  this->input_revise_level_growth_id = input_revise_level_growth_id;
  v37 = (((_BYTE)a2 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->rely_activity_world_level_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->rely_activity_world_level_limit >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  rely_activity_world_level_limit = a2->rely_activity_world_level_limit;
  v39 = *(_BYTE *)(((unsigned __int64)&this->rely_activity_world_level_limit >> 3) + 0x7FFF8000);
  LOBYTE(v37) = v39 != 0;
  v40 = v39 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v39;
  if ( v40 )
    __asan_report_store4(&this->rely_activity_world_level_limit, v37, v40);
  this->rely_activity_world_level_limit = rely_activity_world_level_limit;
};

// Line 218: range 0000000013EB9964-0000000013EB99B1
bool __cdecl SceneBlockGroupComp::isStarted(const SceneBlockGroupComp *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_started_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_started_);
  return this->is_started_;
};

// Line 228: range 00000000131D4318-00000000131D432B
const std::unordered_set<unsigned int> *__cdecl SceneBlockGroupComp::getUnregisterClearedGroupSet(
        const SceneBlockGroupComp *const this)
{
  return &this->unregister_cleared_group_set_;
};

// Line 230: range 0000000017D67FD6-0000000017D6803D
int32_t __cdecl SceneBlockGroupComp::reloadGroupByGm(SceneBlockGroupComp *const this)
{
  unsigned __int64 v1; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v1 = (unsigned __int64)(this->_vptr_SceneCompBase + 36);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8();
  return (*(__int64 (__fastcall **)(SceneBlockGroupComp *const))v1)(this);
};

// Line 260: range 0000000015A1A906-0000000015A1A953
bool __cdecl SceneBlockGroupComp::getIsNeedReloadGroup(const SceneBlockGroupComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_need_reload_group_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_need_reload_group_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_need_reload_group_);
  }
  return this->is_need_reload_group_;
};

// Line 260: range 00000000131D432C-00000000131D4382
void __cdecl SceneBlockGroupComp::setIsNeedReloadGroup(SceneBlockGroupComp *const this, bool is_need_reload_group__out)
{
  __int64 v2; // rsi
  __int64 v3; // rdx

  v2 = ((_BYTE)this + 17) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_need_reload_group_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_need_reload_group_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_need_reload_group_, v2, v3);
  this->is_need_reload_group_ = is_need_reload_group__out;
};
