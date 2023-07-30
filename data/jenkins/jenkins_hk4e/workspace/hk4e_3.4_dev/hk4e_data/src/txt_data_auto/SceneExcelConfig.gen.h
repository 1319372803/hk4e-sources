// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/SceneExcelConfig.gen.h

// Line 112: range 000000001478DB6A-000000001478DFE6
void __cdecl data::SceneExcelConfig::SceneExcelConfig(data::SceneExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx

  v2 = (int (**)(...))(&`vtable for'data::SceneExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SceneExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->type, v3);
  }
  this->type = SCENE_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->subtype >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->subtype >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->subtype, v3);
  }
  this->subtype = SCENE_SUB_TYPE_NONE;
  v4 = ((_BYTE)this + 20) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->ignore_nav_mesh >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->ignore_nav_mesh >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->ignore_nav_mesh, v4, v5);
  this->ignore_nav_mesh = 0;
  v6 = ((_BYTE)this + 21) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->use_to_the_moon >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->use_to_the_moon >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->use_to_the_moon, v6, v7);
  this->use_to_the_moon = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->navmesh_mode >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->navmesh_mode >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->navmesh_mode, v6);
  }
  this->navmesh_mode = NAVMESH_MODE_DEFAULT;
  std::string::basic_string(&this->level_entity_config);
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_appear_sorted >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entity_appear_sorted >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->entity_appear_sorted, v6);
  }
  this->entity_appear_sorted = 0;
  std::vector<unsigned int>::vector(&this->specified_avatar_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_specified_avatar_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_specified_avatar_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_specified_avatar_num, v6);
  }
  this->max_specified_avatar_num = 0;
  v8 = ((_BYTE)this + 100) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->is_check_output_config >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->is_check_output_config >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_check_output_config, v8, v9);
  this->is_check_output_config = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->safe_point >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->safe_point >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->safe_point, v8);
  }
  this->safe_point = 0;
  v10 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mp_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->mp_type, v10);
  }
  this->mp_type = SCENE_MP_NONE;
  if ( *(char *)(((unsigned __int64)&this->is_allow_map_mark_point >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_allow_map_mark_point, v10, &this->is_allow_map_mark_point);
  this->is_allow_map_mark_point = 0;
  v11 = ((_BYTE)this + 113) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->is_delete_map_mark_point >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->is_delete_map_mark_point >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->is_delete_map_mark_point, v11, v12);
  this->is_delete_map_mark_point = 0;
  std::vector<unsigned int>::vector(&this->dungeon_entry_point);
  if ( *(char *)(((unsigned __int64)&this->is_blockbin_abandoned >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_blockbin_abandoned, v11, &this->is_blockbin_abandoned);
  this->is_blockbin_abandoned = 0;
  v13 = ((_BYTE)this - 111) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->is_scenebin_abandoned >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&this->is_scenebin_abandoned >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_scenebin_abandoned, v13, v14);
  this->is_scenebin_abandoned = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->image_scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->image_scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->image_scene_id, (((_BYTE)this - 108) & 7u) + 3);
  }
  this->image_scene_id = 0;
};

// Line 112: range 0000000014D77606-0000000014D77EAF
void __cdecl data::SceneExcelConfig::SceneExcelConfig(
        data::SceneExcelConfig *const this,
        const data::SceneExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::SceneType type; // ecx
  char v7; // dl
  data::SceneSubType subtype; // ecx
  char v9; // al
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool ignore_nav_mesh; // cl
  char v13; // dl
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  bool use_to_the_moon; // cl
  char v18; // dl
  __int64 v19; // rdx
  data::NavmeshModeType navmesh_mode; // ecx
  char v21; // al
  std::string *p_level_entity_config; // rsi
  uint32_t entity_appear_sorted; // ecx
  char v24; // al
  std::vector<unsigned int> *p_specified_avatar_list; // rsi
  uint32_t max_specified_avatar_num; // ecx
  char v27; // al
  __int64 v28; // rsi
  __int64 v29; // rdx
  bool is_check_output_config; // cl
  char v31; // dl
  __int64 v32; // rdx
  uint32_t safe_point; // ecx
  char v34; // al
  __int64 v35; // rsi
  data::SceneMpType mp_type; // ecx
  char v37; // dl
  bool is_allow_map_mark_point; // cl
  char v39; // al
  __int64 v40; // rsi
  __int64 v41; // rdx
  bool is_delete_map_mark_point; // cl
  char v43; // dl
  __int64 v44; // rdx
  std::vector<unsigned int> *p_dungeon_entry_point; // rsi
  bool is_blockbin_abandoned; // cl
  char v47; // al
  __int64 v48; // rsi
  __int64 v49; // rdx
  bool is_scenebin_abandoned; // cl
  char v51; // dl
  __int64 v52; // rdx
  __int64 v53; // rsi
  uint32_t image_scene_id; // ecx
  char v55; // dl
  const data::SceneExcelConfig *v56; // [rsp+0h] [rbp-20h]

  v56 = a2;
  v2 = (int (**)(...))(&`vtable for'data::SceneExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SceneExcelConfig = v2;
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
  v5 = (((_BYTE)v56 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v56->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v56 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v56->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v56->type);
  }
  type = v56->type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->type, v5);
  }
  this->type = type;
  if ( *(_BYTE *)(((unsigned __int64)&v56->subtype >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v56->subtype >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v56->subtype);
  }
  subtype = v56->subtype;
  v9 = *(_BYTE *)(((unsigned __int64)&this->subtype >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->subtype, v5);
  }
  this->subtype = subtype;
  v10 = ((_BYTE)v56 + 20) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&v56->ignore_nav_mesh >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&v56->ignore_nav_mesh >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&v56->ignore_nav_mesh, v10, v11);
  ignore_nav_mesh = v56->ignore_nav_mesh;
  v13 = *(_BYTE *)(((unsigned __int64)&this->ignore_nav_mesh >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 20) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->ignore_nav_mesh, v10, v14);
  this->ignore_nav_mesh = ignore_nav_mesh;
  v15 = ((_BYTE)v56 + 21) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&v56->use_to_the_moon >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&v56->use_to_the_moon >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_load1(&v56->use_to_the_moon, v15, v16);
  use_to_the_moon = v56->use_to_the_moon;
  v18 = *(_BYTE *)(((unsigned __int64)&this->use_to_the_moon >> 3) + 0x7FFF8000);
  LOBYTE(v15) = v18 != 0;
  v19 = (v18 != 0) & (unsigned __int8)((((unsigned __int8)this + 21) & 7) >= v18);
  if ( (_BYTE)v19 )
    __asan_report_store1(&this->use_to_the_moon, v15, v19);
  this->use_to_the_moon = use_to_the_moon;
  if ( *(_BYTE *)(((unsigned __int64)&v56->navmesh_mode >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v56->navmesh_mode >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v56->navmesh_mode);
  }
  navmesh_mode = v56->navmesh_mode;
  v21 = *(_BYTE *)(((unsigned __int64)&this->navmesh_mode >> 3) + 0x7FFF8000);
  if ( v21 != 0 && v21 <= 3 )
  {
    LOBYTE(v15) = v21 != 0;
    __asan_report_store4(&this->navmesh_mode, v15);
  }
  this->navmesh_mode = navmesh_mode;
  p_level_entity_config = &v56->level_entity_config;
  std::string::basic_string(&this->level_entity_config, &v56->level_entity_config);
  if ( *(_BYTE *)(((unsigned __int64)&v56->entity_appear_sorted >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v56->entity_appear_sorted >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v56->entity_appear_sorted);
  }
  entity_appear_sorted = v56->entity_appear_sorted;
  v24 = *(_BYTE *)(((unsigned __int64)&this->entity_appear_sorted >> 3) + 0x7FFF8000);
  if ( v24 != 0 && v24 <= 3 )
  {
    LOBYTE(p_level_entity_config) = v24 != 0;
    __asan_report_store4(&this->entity_appear_sorted, p_level_entity_config);
  }
  this->entity_appear_sorted = entity_appear_sorted;
  p_specified_avatar_list = &v56->specified_avatar_list;
  std::vector<unsigned int>::vector(&this->specified_avatar_list, &v56->specified_avatar_list);
  if ( *(_BYTE *)(((unsigned __int64)&v56->max_specified_avatar_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v56->max_specified_avatar_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v56->max_specified_avatar_num);
  }
  max_specified_avatar_num = v56->max_specified_avatar_num;
  v27 = *(_BYTE *)(((unsigned __int64)&this->max_specified_avatar_num >> 3) + 0x7FFF8000);
  if ( v27 != 0 && v27 <= 3 )
  {
    LOBYTE(p_specified_avatar_list) = v27 != 0;
    __asan_report_store4(&this->max_specified_avatar_num, p_specified_avatar_list);
  }
  this->max_specified_avatar_num = max_specified_avatar_num;
  v28 = ((_BYTE)v56 + 100) & 7;
  v29 = (*(_BYTE *)(((unsigned __int64)&v56->is_check_output_config >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v28 >= *(_BYTE *)(((unsigned __int64)&v56->is_check_output_config >> 3) + 0x7FFF8000));
  if ( (_BYTE)v29 )
    __asan_report_load1(&v56->is_check_output_config, v28, v29);
  is_check_output_config = v56->is_check_output_config;
  v31 = *(_BYTE *)(((unsigned __int64)&this->is_check_output_config >> 3) + 0x7FFF8000);
  LOBYTE(v28) = v31 != 0;
  v32 = (v31 != 0) & (unsigned __int8)((((unsigned __int8)this + 100) & 7) >= v31);
  if ( (_BYTE)v32 )
    __asan_report_store1(&this->is_check_output_config, v28, v32);
  this->is_check_output_config = is_check_output_config;
  if ( *(_BYTE *)(((unsigned __int64)&v56->safe_point >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v56->safe_point >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v56->safe_point);
  }
  safe_point = v56->safe_point;
  v34 = *(_BYTE *)(((unsigned __int64)&this->safe_point >> 3) + 0x7FFF8000);
  if ( v34 != 0 && v34 <= 3 )
  {
    LOBYTE(v28) = v34 != 0;
    __asan_report_store4(&this->safe_point, v28);
  }
  this->safe_point = safe_point;
  v35 = (((_BYTE)v56 + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v56->mp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v56 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v56->mp_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v56->mp_type);
  }
  mp_type = v56->mp_type;
  v37 = *(_BYTE *)(((unsigned __int64)&this->mp_type >> 3) + 0x7FFF8000);
  LOBYTE(v35) = v37 != 0;
  if ( v37 != 0 && (char)((((_BYTE)this + 108) & 7) + 3) >= v37 )
    __asan_report_store4(&this->mp_type, v35);
  this->mp_type = mp_type;
  if ( *(char *)(((unsigned __int64)&v56->is_allow_map_mark_point >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v56->is_allow_map_mark_point, v35, &v56->is_allow_map_mark_point);
  is_allow_map_mark_point = v56->is_allow_map_mark_point;
  v39 = *(_BYTE *)(((unsigned __int64)&this->is_allow_map_mark_point >> 3) + 0x7FFF8000);
  if ( v39 < 0 )
  {
    LOBYTE(v35) = v39 != 0;
    __asan_report_store1(&this->is_allow_map_mark_point, v35, &this->is_allow_map_mark_point);
  }
  this->is_allow_map_mark_point = is_allow_map_mark_point;
  v40 = ((_BYTE)v56 + 113) & 7;
  v41 = (*(_BYTE *)(((unsigned __int64)&v56->is_delete_map_mark_point >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v40 >= *(_BYTE *)(((unsigned __int64)&v56->is_delete_map_mark_point >> 3) + 0x7FFF8000));
  if ( (_BYTE)v41 )
    __asan_report_load1(&v56->is_delete_map_mark_point, v40, v41);
  is_delete_map_mark_point = v56->is_delete_map_mark_point;
  v43 = *(_BYTE *)(((unsigned __int64)&this->is_delete_map_mark_point >> 3) + 0x7FFF8000);
  LOBYTE(v40) = v43 != 0;
  v44 = (v43 != 0) & (unsigned __int8)((((unsigned __int8)this + 113) & 7) >= v43);
  if ( (_BYTE)v44 )
    __asan_report_store1(&this->is_delete_map_mark_point, v40, v44);
  this->is_delete_map_mark_point = is_delete_map_mark_point;
  p_dungeon_entry_point = &v56->dungeon_entry_point;
  std::vector<unsigned int>::vector(&this->dungeon_entry_point, &v56->dungeon_entry_point);
  if ( *(char *)(((unsigned __int64)&v56->is_blockbin_abandoned >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v56->is_blockbin_abandoned, p_dungeon_entry_point, &v56->is_blockbin_abandoned);
  is_blockbin_abandoned = v56->is_blockbin_abandoned;
  v47 = *(_BYTE *)(((unsigned __int64)&this->is_blockbin_abandoned >> 3) + 0x7FFF8000);
  if ( v47 < 0 )
  {
    LOBYTE(p_dungeon_entry_point) = v47 != 0;
    __asan_report_store1(&this->is_blockbin_abandoned, p_dungeon_entry_point, &this->is_blockbin_abandoned);
  }
  this->is_blockbin_abandoned = is_blockbin_abandoned;
  v48 = ((_BYTE)v56 - 111) & 7;
  v49 = (*(_BYTE *)(((unsigned __int64)&v56->is_scenebin_abandoned >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v48 >= *(_BYTE *)(((unsigned __int64)&v56->is_scenebin_abandoned >> 3) + 0x7FFF8000));
  if ( (_BYTE)v49 )
    __asan_report_load1(&v56->is_scenebin_abandoned, v48, v49);
  is_scenebin_abandoned = v56->is_scenebin_abandoned;
  v51 = *(_BYTE *)(((unsigned __int64)&this->is_scenebin_abandoned >> 3) + 0x7FFF8000);
  LOBYTE(v48) = v51 != 0;
  v52 = (v51 != 0) & (unsigned __int8)((((unsigned __int8)this - 111) & 7) >= v51);
  if ( (_BYTE)v52 )
    __asan_report_store1(&this->is_scenebin_abandoned, v48, v52);
  this->is_scenebin_abandoned = is_scenebin_abandoned;
  v53 = (((_BYTE)v56 - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v56->image_scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v56 - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v56->image_scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v56->image_scene_id);
  }
  image_scene_id = v56->image_scene_id;
  v55 = *(_BYTE *)(((unsigned __int64)&this->image_scene_id >> 3) + 0x7FFF8000);
  if ( v55 != 0 && (char)((((_BYTE)this - 108) & 7) + 3) >= v55 )
  {
    LOBYTE(v53) = v55 != 0;
    __asan_report_store4(&this->image_scene_id, v53);
  }
  this->image_scene_id = image_scene_id;
};

// Line 115: range 0000000014DEBB24-0000000014DEBB4E
void __cdecl data::SceneExcelConfig::~SceneExcelConfig(data::SceneExcelConfig *const this)
{
  data::SceneExcelConfig::~SceneExcelConfig(this);
  operator delete(this, 0x98uLL);
};

// Line 115: range 0000000014DEBAB2-0000000014DEBB23
void __cdecl data::SceneExcelConfig::~SceneExcelConfig(data::SceneExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SceneExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SceneExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->dungeon_entry_point);
  std::vector<unsigned int>::~vector(&this->specified_avatar_list);
  std::string::~string(&this->level_entity_config);
};

// Line 144: range 000000001478DFE8-000000001478E0FB
void __cdecl data::TriggerExcelConfig::TriggerExcelConfig(data::TriggerExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::TriggerExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TriggerExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->scene_id, v3);
  }
  this->scene_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, v3);
  }
  this->group_id = 0;
  std::string::basic_string(&this->trigger_name);
};

// Line 144: range 0000000014D77FF0-0000000014D781BF
void __cdecl data::TriggerExcelConfig::TriggerExcelConfig(
        data::TriggerExcelConfig *const this,
        const data::TriggerExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t scene_id; // ecx
  char v7; // dl
  uint32_t group_id; // ecx
  char v9; // al
  const data::TriggerExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::TriggerExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TriggerExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v10->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->scene_id);
  }
  scene_id = v10->scene_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->scene_id, v5);
  }
  this->scene_id = scene_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->group_id);
  }
  group_id = v10->group_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->group_id, v5);
  }
  this->group_id = group_id;
  std::string::basic_string(&this->trigger_name, &v10->trigger_name);
};

// Line 147: range 0000000014DEBA86-0000000014DEBAB0
void __cdecl data::TriggerExcelConfig::~TriggerExcelConfig(data::TriggerExcelConfig *const this)
{
  data::TriggerExcelConfig::~TriggerExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 147: range 0000000014DEBA34-0000000014DEBA85
void __cdecl data::TriggerExcelConfig::~TriggerExcelConfig(data::TriggerExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TriggerExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TriggerExcelConfig = v2;
  std::string::~string(&this->trigger_name);
};

// Line 161: range 0000000014D78300-0000000014D783BA
void __cdecl data::RoomExcelConfig::RoomExcelConfig(data::RoomExcelConfig *const this, const data::RoomExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al

  v2 = (int (**)(...))(&`vtable for'data::RoomExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RoomExcelConfig = v2;
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

// Line 164: range 0000000014DEBA08-0000000014DEBA32
void __cdecl data::RoomExcelConfig::~RoomExcelConfig(data::RoomExcelConfig *const this)
{
  data::RoomExcelConfig::~RoomExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 164: range 0000000014DEB9C6-0000000014DEBA07
void __cdecl data::RoomExcelConfig::~RoomExcelConfig(data::RoomExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RoomExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RoomExcelConfig = v2;
};

// Line 175: range 000000001478E0FC-000000001478E20F
void __cdecl data::WorldExcelConfig::WorldExcelConfig(data::WorldExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::WorldExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WorldExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->type, v3);
  }
  this->type = WORLD_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->main_scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->main_scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->main_scene_id, v3);
  }
  this->main_scene_id = 0;
  std::vector<unsigned int>::vector(&this->sub_scene_id_vec);
};

// Line 175: range 000000000F785F64-000000000F786133
void __cdecl data::WorldExcelConfig::WorldExcelConfig(
        data::WorldExcelConfig *const this,
        const data::WorldExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::WorldType type; // ecx
  char v7; // dl
  uint32_t main_scene_id; // ecx
  char v9; // al
  const data::WorldExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::WorldExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WorldExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v10->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->type);
  }
  type = v10->type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->type, v5);
  }
  this->type = type;
  if ( *(_BYTE *)(((unsigned __int64)&v10->main_scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->main_scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->main_scene_id);
  }
  main_scene_id = v10->main_scene_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->main_scene_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->main_scene_id, v5);
  }
  this->main_scene_id = main_scene_id;
  std::vector<unsigned int>::vector(&this->sub_scene_id_vec, &v10->sub_scene_id_vec);
};

// Line 178: range 000000000FA0F3D8-000000000FA0F402
void __cdecl data::WorldExcelConfig::~WorldExcelConfig(data::WorldExcelConfig *const this)
{
  data::WorldExcelConfig::~WorldExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 178: range 000000000FA0F386-000000000FA0F3D7
void __cdecl data::WorldExcelConfig::~WorldExcelConfig(data::WorldExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WorldExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WorldExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->sub_scene_id_vec);
};

// Line 192: range 0000000014D7863C-0000000014D7877B
void __cdecl data::WorldLevelExcelConfig::WorldLevelExcelConfig(
        data::WorldLevelExcelConfig *const this,
        const data::WorldLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t level; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t monster_level; // ecx
  char v7; // dl
  const data::WorldLevelExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::WorldLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WorldLevelExcelConfig = v2;
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
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->monster_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->monster_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->monster_level);
  }
  monster_level = v8->monster_level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->monster_level >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->monster_level, v5);
  }
  this->monster_level = monster_level;
};

// Line 195: range 0000000014DEB958-0000000014DEB999
void __cdecl data::WorldLevelExcelConfig::~WorldLevelExcelConfig(data::WorldLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WorldLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WorldLevelExcelConfig = v2;
};

// Line 195: range 0000000014DEB99A-0000000014DEB9C4
void __cdecl data::WorldLevelExcelConfig::~WorldLevelExcelConfig(data::WorldLevelExcelConfig *const this)
{
  data::WorldLevelExcelConfig::~WorldLevelExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 207: range 0000000014D0AF08-0000000014D0AFE9
void __cdecl data::SceneTagCond::SceneTagCond(data::SceneTagCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SceneTagCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SceneTagCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cond_type, v1);
  }
  this->cond_type = SCENE_TAG_COND_TYPE_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->param1 >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->param1, v1);
  this->param1 = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->param2 >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->param2, v1);
  this->param2 = 0LL;
};

// Line 207: range 0000000014DD703E-0000000014DD71AC
void __cdecl data::SceneTagCond::SceneTagCond(data::SceneTagCond *const this, const data::SceneTagCond *a2)
{
  int (**v2)(...); // rdx
  data::SceneTagCondType cond_type; // ecx
  char v4; // al
  int64_t param1; // rdx
  int64_t param2; // rdx
  const data::SceneTagCond *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  v2 = (int (**)(...))(&`vtable for'data::SceneTagCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SceneTagCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cond_type);
  }
  cond_type = a2->cond_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000);
  LOBYTE(a2) = v4 != 0;
  if ( v4 != 0 && v4 <= 3 )
    __asan_report_store4(&this->cond_type, a2);
  this->cond_type = cond_type;
  if ( *(_BYTE *)(((unsigned __int64)&v7->param1 >> 3) + 0x7FFF8000) )
    __asan_report_load8(&v7->param1);
  param1 = v7->param1;
  if ( *(_BYTE *)(((unsigned __int64)&this->param1 >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->param1, a2);
  this->param1 = param1;
  if ( *(_BYTE *)(((unsigned __int64)&v7->param2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(&v7->param2);
  param2 = v7->param2;
  if ( *(_BYTE *)(((unsigned __int64)&this->param2 >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->param2, a2);
  this->param2 = param2;
};

// Line 210: range 0000000014C61FBA-0000000014C61FE4
void __cdecl data::SceneTagCond::~SceneTagCond(data::SceneTagCond *const this)
{
  data::SceneTagCond::~SceneTagCond(this);
  operator delete(this, 0x20uLL);
};

// Line 210: range 0000000014C61F78-0000000014C61FB9
void __cdecl data::SceneTagCond::~SceneTagCond(data::SceneTagCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SceneTagCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SceneTagCond = v2;
};

// Line 221: range 000000001478E264-000000001478E3C1
void __cdecl data::SceneTagConfig::SceneTagConfig(data::SceneTagConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  v2 = (int (**)(...))(&`vtable for'data::SceneTagConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SceneTagConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::string::basic_string(&this->scene_tag_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, v1);
  }
  this->scene_id = 0;
  v3 = ((_BYTE)this + 52) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_default_valid >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_default_valid >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_default_valid, v3, v4);
  this->is_default_valid = 0;
  v5 = ((_BYTE)this + 53) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_skip_loading >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_skip_loading >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_skip_loading, v5, v6);
  this->is_skip_loading = 0;
  std::vector<data::SceneTagCond>::vector(&this->cond);
};

// Line 221: range 0000000014D788BC-0000000014D78B48
void __cdecl data::SceneTagConfig::SceneTagConfig(data::SceneTagConfig *const this, const data::SceneTagConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::string *p_scene_tag_name; // rsi
  uint32_t scene_id; // ecx
  char v7; // al
  __int64 v8; // rsi
  __int64 v9; // rdx
  bool is_default_valid; // cl
  char v11; // dl
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  bool is_skip_loading; // cl
  char v16; // dl
  __int64 v17; // rdx
  const data::SceneTagConfig *v18; // [rsp+0h] [rbp-20h]

  v18 = a2;
  v2 = (int (**)(...))(&`vtable for'data::SceneTagConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SceneTagConfig = v2;
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
  p_scene_tag_name = &v18->scene_tag_name;
  std::string::basic_string(&this->scene_tag_name, &v18->scene_tag_name);
  if ( *(_BYTE *)(((unsigned __int64)&v18->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->scene_id);
  }
  scene_id = v18->scene_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_scene_tag_name) = v7 != 0;
    __asan_report_store4(&this->scene_id, p_scene_tag_name);
  }
  this->scene_id = scene_id;
  v8 = ((_BYTE)v18 + 52) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&v18->is_default_valid >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&v18->is_default_valid >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_load1(&v18->is_default_valid, v8, v9);
  is_default_valid = v18->is_default_valid;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_default_valid >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v11 != 0;
  v12 = (v11 != 0) & (unsigned __int8)((((unsigned __int8)this + 52) & 7) >= v11);
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->is_default_valid, v8, v12);
  this->is_default_valid = is_default_valid;
  v13 = ((_BYTE)v18 + 53) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&v18->is_skip_loading >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&v18->is_skip_loading >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_load1(&v18->is_skip_loading, v13, v14);
  is_skip_loading = v18->is_skip_loading;
  v16 = *(_BYTE *)(((unsigned __int64)&this->is_skip_loading >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v16 != 0;
  v17 = (v16 != 0) & (unsigned __int8)((((unsigned __int8)this + 53) & 7) >= v16);
  if ( (_BYTE)v17 )
    __asan_report_store1(&this->is_skip_loading, v13, v17);
  this->is_skip_loading = is_skip_loading;
  std::vector<data::SceneTagCond>::vector(&this->cond, &v18->cond);
};

// Line 224: range 0000000014DEB92C-0000000014DEB956
void __cdecl data::SceneTagConfig::~SceneTagConfig(data::SceneTagConfig *const this)
{
  data::SceneTagConfig::~SceneTagConfig(this);
  operator delete(this, 0x50uLL);
};

// Line 224: range 0000000014DEB8CA-0000000014DEB92B
void __cdecl data::SceneTagConfig::~SceneTagConfig(data::SceneTagConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SceneTagConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SceneTagConfig = v2;
  std::vector<data::SceneTagCond>::~vector(&this->cond);
  std::string::~string(&this->scene_tag_name);
};
