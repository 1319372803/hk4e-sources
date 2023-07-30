// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/WidgetExcelConfig.gen.h

// Line 40: range 000000000D384C5E-000000000D384D98
void __cdecl data::WidgetExcelConfig::WidgetExcelConfig(
        data::WidgetExcelConfig *const this,
        const data::WidgetExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t material_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool show_redpoint; // cl
  char v8; // dl
  __int64 v9; // rdx
  const data::WidgetExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::WidgetExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WidgetExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->material_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->material_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->material_id);
  }
  material_id = a2->material_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->material_id, a2);
  }
  this->material_id = material_id;
  v5 = ((_BYTE)v10 + 12) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&v10->show_redpoint >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&v10->show_redpoint >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&v10->show_redpoint, v5, v6);
  show_redpoint = v10->show_redpoint;
  v8 = *(_BYTE *)(((unsigned __int64)&this->show_redpoint >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this + 12) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->show_redpoint, v5, v9);
  this->show_redpoint = show_redpoint;
};

// Line 43: range 000000000D49147E-000000000D4914BF
void __cdecl data::WidgetExcelConfig::~WidgetExcelConfig(data::WidgetExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WidgetExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WidgetExcelConfig = v2;
};

// Line 43: range 000000000D4914C0-000000000D4914EA
void __cdecl data::WidgetExcelConfig::~WidgetExcelConfig(data::WidgetExcelConfig *const this)
{
  data::WidgetExcelConfig::~WidgetExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 55: range 000000000CE280C0-000000000CE284AB
void __cdecl data::WidgetGeneralExcelConfig::WidgetGeneralExcelConfig(data::WidgetGeneralExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rdx

  v2 = (int (**)(...))(&`vtable for'data::WidgetGeneralExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WidgetGeneralExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->material_id, v1);
  }
  this->material_id = 0;
  v3 = ((_BYTE)this + 12) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->can_use_in_other_world >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->can_use_in_other_world >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->can_use_in_other_world, v3, v4);
  this->can_use_in_other_world = 0;
  v5 = ((_BYTE)this + 13) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->can_use_in_room >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->can_use_in_room >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->can_use_in_room, v5, v6);
  this->can_use_in_room = 0;
  std::vector<unsigned int>::vector(&this->forbidden_scene_id_list);
  if ( *(char *)(((unsigned __int64)&this->can_use_when_current_avatar_dead >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->can_use_when_current_avatar_dead, v5, &this->can_use_when_current_avatar_dead);
  this->can_use_when_current_avatar_dead = 0;
  v7 = ((_BYTE)this + 41) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->can_use_in_limit_region >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->can_use_in_limit_region >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->can_use_in_limit_region, v7, v8);
  this->can_use_in_limit_region = 0;
  v9 = ((_BYTE)this + 42) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->can_use_when_fight >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->can_use_when_fight >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->can_use_when_fight, v9, v10);
  this->can_use_when_fight = 0;
  v11 = ((_BYTE)this + 43) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->can_use_in_un_normal_move_state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->can_use_in_un_normal_move_state >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->can_use_in_un_normal_move_state, v11, v12);
  this->can_use_in_un_normal_move_state = 0;
  v13 = ((_BYTE)this + 44) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->can_use_in_channel >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&this->can_use_in_channel >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->can_use_in_channel, v13, v14);
  this->can_use_in_channel = 0;
  v15 = ((_BYTE)this + 45) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&this->can_use_in_avatar_focus >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&this->can_use_in_avatar_focus >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->can_use_in_avatar_focus, v15, v16);
  this->can_use_in_avatar_focus = 0;
  v17 = ((_BYTE)this + 46) & 7;
  v18 = (*(_BYTE *)(((unsigned __int64)&this->can_use_in_dungeon >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((unsigned __int64)&this->can_use_in_dungeon >> 3) + 0x7FFF8000));
  if ( (_BYTE)v18 )
    __asan_report_store1(&this->can_use_in_dungeon, v17, v18);
  this->can_use_in_dungeon = 0;
  v19 = ((_BYTE)this + 47) & 7;
  v20 = (*(_BYTE *)(((unsigned __int64)&this->can_use_in_mirror_big_world >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v19 >= *(_BYTE *)(((unsigned __int64)&this->can_use_in_mirror_big_world >> 3) + 0x7FFF8000));
  if ( (_BYTE)v20 )
    __asan_report_store1(&this->can_use_in_mirror_big_world, v19, v20);
  this->can_use_in_mirror_big_world = 0;
  if ( *(char *)(((unsigned __int64)&this->can_use_in_tower >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->can_use_in_tower, v19, &this->can_use_in_tower);
  this->can_use_in_tower = 0;
  v21 = ((_BYTE)this + 49) & 7;
  v22 = (*(_BYTE *)(((unsigned __int64)&this->can_use_in_homeworld >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v21 >= *(_BYTE *)(((unsigned __int64)&this->can_use_in_homeworld >> 3) + 0x7FFF8000));
  if ( (_BYTE)v22 )
    __asan_report_store1(&this->can_use_in_homeworld, v21, v22);
  this->can_use_in_homeworld = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->vehicle_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->vehicle_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->vehicle_limit, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->vehicle_limit = VEHICLE_LIMIT_NONE;
  std::vector<unsigned int>::vector(&this->forbidden_dungeon_type_list);
  std::vector<unsigned int>::vector(&this->forbidden_dungeon_play_type_list);
};

// Line 55: range 000000000D384EDA-000000000D385692
void __cdecl data::WidgetGeneralExcelConfig::WidgetGeneralExcelConfig(
        data::WidgetGeneralExcelConfig *const this,
        const data::WidgetGeneralExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t material_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool can_use_in_other_world; // cl
  char v8; // dl
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool can_use_in_room; // cl
  char v13; // dl
  __int64 v14; // rdx
  std::vector<unsigned int> *p_forbidden_scene_id_list; // rsi
  bool can_use_when_current_avatar_dead; // cl
  char v17; // al
  __int64 v18; // rsi
  __int64 v19; // rdx
  bool can_use_in_limit_region; // cl
  char v21; // dl
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdx
  bool can_use_when_fight; // cl
  char v26; // dl
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rdx
  bool can_use_in_un_normal_move_state; // cl
  char v31; // dl
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rdx
  bool can_use_in_channel; // cl
  char v36; // dl
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rdx
  bool can_use_in_avatar_focus; // cl
  char v41; // dl
  __int64 v42; // rdx
  __int64 v43; // rsi
  __int64 v44; // rdx
  bool can_use_in_dungeon; // cl
  char v46; // dl
  __int64 v47; // rdx
  __int64 v48; // rsi
  __int64 v49; // rdx
  bool can_use_in_mirror_big_world; // cl
  char v51; // dl
  __int64 v52; // rdx
  bool can_use_in_tower; // cl
  char v54; // al
  __int64 v55; // rsi
  __int64 v56; // rdx
  bool can_use_in_homeworld; // cl
  char v58; // dl
  __int64 v59; // rdx
  __int64 v60; // rsi
  data::VEHICLE_LIMIT_TYPE vehicle_limit; // ecx
  char v62; // dl
  const data::WidgetGeneralExcelConfig *v63; // [rsp+0h] [rbp-20h]

  v63 = a2;
  v2 = (int (**)(...))(&`vtable for'data::WidgetGeneralExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WidgetGeneralExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->material_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->material_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->material_id);
  }
  material_id = a2->material_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->material_id, a2);
  }
  this->material_id = material_id;
  v5 = ((_BYTE)v63 + 12) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&v63->can_use_in_other_world >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&v63->can_use_in_other_world >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&v63->can_use_in_other_world, v5, v6);
  can_use_in_other_world = v63->can_use_in_other_world;
  v8 = *(_BYTE *)(((unsigned __int64)&this->can_use_in_other_world >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this + 12) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->can_use_in_other_world, v5, v9);
  this->can_use_in_other_world = can_use_in_other_world;
  v10 = ((_BYTE)v63 + 13) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&v63->can_use_in_room >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&v63->can_use_in_room >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&v63->can_use_in_room, v10, v11);
  can_use_in_room = v63->can_use_in_room;
  v13 = *(_BYTE *)(((unsigned __int64)&this->can_use_in_room >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 13) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->can_use_in_room, v10, v14);
  this->can_use_in_room = can_use_in_room;
  p_forbidden_scene_id_list = &v63->forbidden_scene_id_list;
  std::vector<unsigned int>::vector(&this->forbidden_scene_id_list, &v63->forbidden_scene_id_list);
  if ( *(char *)(((unsigned __int64)&v63->can_use_when_current_avatar_dead >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(
      &v63->can_use_when_current_avatar_dead,
      p_forbidden_scene_id_list,
      &v63->can_use_when_current_avatar_dead);
  can_use_when_current_avatar_dead = v63->can_use_when_current_avatar_dead;
  v17 = *(_BYTE *)(((unsigned __int64)&this->can_use_when_current_avatar_dead >> 3) + 0x7FFF8000);
  if ( v17 < 0 )
  {
    LOBYTE(p_forbidden_scene_id_list) = v17 != 0;
    __asan_report_store1(
      &this->can_use_when_current_avatar_dead,
      p_forbidden_scene_id_list,
      &this->can_use_when_current_avatar_dead);
  }
  this->can_use_when_current_avatar_dead = can_use_when_current_avatar_dead;
  v18 = ((_BYTE)v63 + 41) & 7;
  v19 = (*(_BYTE *)(((unsigned __int64)&v63->can_use_in_limit_region >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v18 >= *(_BYTE *)(((unsigned __int64)&v63->can_use_in_limit_region >> 3) + 0x7FFF8000));
  if ( (_BYTE)v19 )
    __asan_report_load1(&v63->can_use_in_limit_region, v18, v19);
  can_use_in_limit_region = v63->can_use_in_limit_region;
  v21 = *(_BYTE *)(((unsigned __int64)&this->can_use_in_limit_region >> 3) + 0x7FFF8000);
  LOBYTE(v18) = v21 != 0;
  v22 = (v21 != 0) & (unsigned __int8)((((unsigned __int8)this + 41) & 7) >= v21);
  if ( (_BYTE)v22 )
    __asan_report_store1(&this->can_use_in_limit_region, v18, v22);
  this->can_use_in_limit_region = can_use_in_limit_region;
  v23 = ((_BYTE)v63 + 42) & 7;
  v24 = (*(_BYTE *)(((unsigned __int64)&v63->can_use_when_fight >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v23 >= *(_BYTE *)(((unsigned __int64)&v63->can_use_when_fight >> 3) + 0x7FFF8000));
  if ( (_BYTE)v24 )
    __asan_report_load1(&v63->can_use_when_fight, v23, v24);
  can_use_when_fight = v63->can_use_when_fight;
  v26 = *(_BYTE *)(((unsigned __int64)&this->can_use_when_fight >> 3) + 0x7FFF8000);
  LOBYTE(v23) = v26 != 0;
  v27 = (v26 != 0) & (unsigned __int8)((((unsigned __int8)this + 42) & 7) >= v26);
  if ( (_BYTE)v27 )
    __asan_report_store1(&this->can_use_when_fight, v23, v27);
  this->can_use_when_fight = can_use_when_fight;
  v28 = ((_BYTE)v63 + 43) & 7;
  v29 = (*(_BYTE *)(((unsigned __int64)&v63->can_use_in_un_normal_move_state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v28 >= *(_BYTE *)(((unsigned __int64)&v63->can_use_in_un_normal_move_state >> 3) + 0x7FFF8000));
  if ( (_BYTE)v29 )
    __asan_report_load1(&v63->can_use_in_un_normal_move_state, v28, v29);
  can_use_in_un_normal_move_state = v63->can_use_in_un_normal_move_state;
  v31 = *(_BYTE *)(((unsigned __int64)&this->can_use_in_un_normal_move_state >> 3) + 0x7FFF8000);
  LOBYTE(v28) = v31 != 0;
  v32 = (v31 != 0) & (unsigned __int8)((((unsigned __int8)this + 43) & 7) >= v31);
  if ( (_BYTE)v32 )
    __asan_report_store1(&this->can_use_in_un_normal_move_state, v28, v32);
  this->can_use_in_un_normal_move_state = can_use_in_un_normal_move_state;
  v33 = ((_BYTE)v63 + 44) & 7;
  v34 = (*(_BYTE *)(((unsigned __int64)&v63->can_use_in_channel >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v33 >= *(_BYTE *)(((unsigned __int64)&v63->can_use_in_channel >> 3) + 0x7FFF8000));
  if ( (_BYTE)v34 )
    __asan_report_load1(&v63->can_use_in_channel, v33, v34);
  can_use_in_channel = v63->can_use_in_channel;
  v36 = *(_BYTE *)(((unsigned __int64)&this->can_use_in_channel >> 3) + 0x7FFF8000);
  LOBYTE(v33) = v36 != 0;
  v37 = (v36 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v36);
  if ( (_BYTE)v37 )
    __asan_report_store1(&this->can_use_in_channel, v33, v37);
  this->can_use_in_channel = can_use_in_channel;
  v38 = ((_BYTE)v63 + 45) & 7;
  v39 = (*(_BYTE *)(((unsigned __int64)&v63->can_use_in_avatar_focus >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v38 >= *(_BYTE *)(((unsigned __int64)&v63->can_use_in_avatar_focus >> 3) + 0x7FFF8000));
  if ( (_BYTE)v39 )
    __asan_report_load1(&v63->can_use_in_avatar_focus, v38, v39);
  can_use_in_avatar_focus = v63->can_use_in_avatar_focus;
  v41 = *(_BYTE *)(((unsigned __int64)&this->can_use_in_avatar_focus >> 3) + 0x7FFF8000);
  LOBYTE(v38) = v41 != 0;
  v42 = (v41 != 0) & (unsigned __int8)((((unsigned __int8)this + 45) & 7) >= v41);
  if ( (_BYTE)v42 )
    __asan_report_store1(&this->can_use_in_avatar_focus, v38, v42);
  this->can_use_in_avatar_focus = can_use_in_avatar_focus;
  v43 = ((_BYTE)v63 + 46) & 7;
  v44 = (*(_BYTE *)(((unsigned __int64)&v63->can_use_in_dungeon >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v43 >= *(_BYTE *)(((unsigned __int64)&v63->can_use_in_dungeon >> 3) + 0x7FFF8000));
  if ( (_BYTE)v44 )
    __asan_report_load1(&v63->can_use_in_dungeon, v43, v44);
  can_use_in_dungeon = v63->can_use_in_dungeon;
  v46 = *(_BYTE *)(((unsigned __int64)&this->can_use_in_dungeon >> 3) + 0x7FFF8000);
  LOBYTE(v43) = v46 != 0;
  v47 = (v46 != 0) & (unsigned __int8)((((unsigned __int8)this + 46) & 7) >= v46);
  if ( (_BYTE)v47 )
    __asan_report_store1(&this->can_use_in_dungeon, v43, v47);
  this->can_use_in_dungeon = can_use_in_dungeon;
  v48 = ((_BYTE)v63 + 47) & 7;
  v49 = (*(_BYTE *)(((unsigned __int64)&v63->can_use_in_mirror_big_world >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v48 >= *(_BYTE *)(((unsigned __int64)&v63->can_use_in_mirror_big_world >> 3) + 0x7FFF8000));
  if ( (_BYTE)v49 )
    __asan_report_load1(&v63->can_use_in_mirror_big_world, v48, v49);
  can_use_in_mirror_big_world = v63->can_use_in_mirror_big_world;
  v51 = *(_BYTE *)(((unsigned __int64)&this->can_use_in_mirror_big_world >> 3) + 0x7FFF8000);
  LOBYTE(v48) = v51 != 0;
  v52 = (v51 != 0) & (unsigned __int8)((((unsigned __int8)this + 47) & 7) >= v51);
  if ( (_BYTE)v52 )
    __asan_report_store1(&this->can_use_in_mirror_big_world, v48, v52);
  this->can_use_in_mirror_big_world = can_use_in_mirror_big_world;
  if ( *(char *)(((unsigned __int64)&v63->can_use_in_tower >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v63->can_use_in_tower, v48, &v63->can_use_in_tower);
  can_use_in_tower = v63->can_use_in_tower;
  v54 = *(_BYTE *)(((unsigned __int64)&this->can_use_in_tower >> 3) + 0x7FFF8000);
  if ( v54 < 0 )
  {
    LOBYTE(v48) = v54 != 0;
    __asan_report_store1(&this->can_use_in_tower, v48, &this->can_use_in_tower);
  }
  this->can_use_in_tower = can_use_in_tower;
  v55 = ((_BYTE)v63 + 49) & 7;
  v56 = (*(_BYTE *)(((unsigned __int64)&v63->can_use_in_homeworld >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v55 >= *(_BYTE *)(((unsigned __int64)&v63->can_use_in_homeworld >> 3) + 0x7FFF8000));
  if ( (_BYTE)v56 )
    __asan_report_load1(&v63->can_use_in_homeworld, v55, v56);
  can_use_in_homeworld = v63->can_use_in_homeworld;
  v58 = *(_BYTE *)(((unsigned __int64)&this->can_use_in_homeworld >> 3) + 0x7FFF8000);
  LOBYTE(v55) = v58 != 0;
  v59 = (v58 != 0) & (unsigned __int8)((((unsigned __int8)this + 49) & 7) >= v58);
  if ( (_BYTE)v59 )
    __asan_report_store1(&this->can_use_in_homeworld, v55, v59);
  this->can_use_in_homeworld = can_use_in_homeworld;
  v60 = (((_BYTE)v63 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v63->vehicle_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v63 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v63->vehicle_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v63->vehicle_limit);
  }
  vehicle_limit = v63->vehicle_limit;
  v62 = *(_BYTE *)(((unsigned __int64)&this->vehicle_limit >> 3) + 0x7FFF8000);
  if ( v62 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v62 )
  {
    LOBYTE(v60) = v62 != 0;
    __asan_report_store4(&this->vehicle_limit, v60);
  }
  this->vehicle_limit = vehicle_limit;
  std::vector<unsigned int>::vector(&this->forbidden_dungeon_type_list, &v63->forbidden_dungeon_type_list);
  std::vector<unsigned int>::vector(&this->forbidden_dungeon_play_type_list, &v63->forbidden_dungeon_play_type_list);
};

// Line 58: range 000000000D4913E0-000000000D491451
void __cdecl data::WidgetGeneralExcelConfig::~WidgetGeneralExcelConfig(data::WidgetGeneralExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WidgetGeneralExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WidgetGeneralExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->forbidden_dungeon_play_type_list);
  std::vector<unsigned int>::~vector(&this->forbidden_dungeon_type_list);
  std::vector<unsigned int>::~vector(&this->forbidden_scene_id_list);
};

// Line 58: range 000000000D491452-000000000D49147C
void __cdecl data::WidgetGeneralExcelConfig::~WidgetGeneralExcelConfig(data::WidgetGeneralExcelConfig *const this)
{
  data::WidgetGeneralExcelConfig::~WidgetGeneralExcelConfig(this);
  operator delete(this, 0x68uLL);
};

// Line 85: range 000000000CE284AC-000000000CE285AB
void __cdecl data::WidgetActiveExcelConfig::WidgetActiveExcelConfig(data::WidgetActiveExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  v2 = (int (**)(...))(&`vtable for'data::WidgetActiveExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WidgetActiveExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->material_id, v1);
  }
  this->material_id = 0;
  v3 = ((_BYTE)this + 12) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_guest_can_activate >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_guest_can_activate >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_guest_can_activate, v3, v4);
  this->is_guest_can_activate = 0;
  std::vector<unsigned int>::vector(&this->active_gallery);
  std::string::basic_string(&this->active_region);
  std::vector<unsigned int>::vector(&this->active_scene);
  std::vector<unsigned int>::vector(&this->active_city);
};

// Line 85: range 000000000D3857D4-000000000D3859CB
void __cdecl data::WidgetActiveExcelConfig::WidgetActiveExcelConfig(
        data::WidgetActiveExcelConfig *const this,
        const data::WidgetActiveExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t material_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool is_guest_can_activate; // cl
  char v8; // dl
  __int64 v9; // rdx
  const data::WidgetActiveExcelConfig *v10; // [rsp+0h] [rbp-20h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::WidgetActiveExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WidgetActiveExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->material_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->material_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->material_id);
  }
  material_id = a2->material_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->material_id, a2);
  }
  this->material_id = material_id;
  v5 = ((_BYTE)v10 + 12) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&v10->is_guest_can_activate >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&v10->is_guest_can_activate >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&v10->is_guest_can_activate, v5, v6);
  is_guest_can_activate = v10->is_guest_can_activate;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_guest_can_activate >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this + 12) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_guest_can_activate, v5, v9);
  this->is_guest_can_activate = is_guest_can_activate;
  std::vector<unsigned int>::vector(&this->active_gallery, &v10->active_gallery);
  std::string::basic_string(&this->active_region, &v10->active_region);
  std::vector<unsigned int>::vector(&this->active_scene, &v10->active_scene);
  std::vector<unsigned int>::vector(&this->active_city, &v10->active_city);
};

// Line 88: range 000000000D491332-000000000D4913B3
void __cdecl data::WidgetActiveExcelConfig::~WidgetActiveExcelConfig(data::WidgetActiveExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WidgetActiveExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WidgetActiveExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->active_city);
  std::vector<unsigned int>::~vector(&this->active_scene);
  std::string::~string(&this->active_region);
  std::vector<unsigned int>::~vector(&this->active_gallery);
};

// Line 88: range 000000000D4913B4-000000000D4913DE
void __cdecl data::WidgetActiveExcelConfig::~WidgetActiveExcelConfig(data::WidgetActiveExcelConfig *const this)
{
  data::WidgetActiveExcelConfig::~WidgetActiveExcelConfig(this);
  operator delete(this, 0x78uLL);
};
