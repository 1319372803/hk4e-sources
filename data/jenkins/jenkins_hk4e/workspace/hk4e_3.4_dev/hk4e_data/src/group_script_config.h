// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/group_script_config.h

// Line 30: range 000000000CE3A84A-000000000CE3B879
MonsterScriptConfig *__cdecl MonsterScriptConfig::operator=(
        MonsterScriptConfig *const this,
        const MonsterScriptConfig *a2)
{
  uint32_t config_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t monster_id; // ecx
  char v6; // dl
  char v7; // dl
  __int64 v8; // rsi
  uint32_t level; // ecx
  char v10; // al
  __int64 v11; // rsi
  uint32_t drop_id; // ecx
  char v13; // dl
  bool is_ban_txt_drop; // cl
  char v15; // al
  std::set<unsigned int> *p_affix_set; // rsi
  bool is_elite; // cl
  char v18; // al
  __int64 v19; // rsi
  __int64 v20; // rdx
  bool is_oneoff; // cl
  char v22; // dl
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdx
  bool is_block_oneoff; // cl
  char v27; // dl
  __int64 v28; // rdx
  __int64 v29; // rsi
  uint32_t pose_id; // ecx
  char v31; // dl
  std::string *p_drop_tag; // rsi
  uint32_t room_id; // ecx
  char v34; // al
  __int64 v35; // rsi
  uint32_t chest_config_id; // ecx
  char v37; // dl
  uint32_t guest_ban_drop; // ecx
  char v39; // al
  __int64 v40; // rsi
  uint32_t mark_flag; // ecx
  char v42; // dl
  uint32_t title_id; // ecx
  char v44; // al
  __int64 v45; // rsi
  uint32_t special_name_id; // ecx
  char v47; // dl
  uint32_t oneoff_reset_version; // ecx
  char v49; // al
  __int64 v50; // rsi
  uint32_t kill_score; // ecx
  char v52; // dl
  uint32_t climate_area_id; // ecx
  char v54; // al
  __int64 v55; // rsi
  uint32_t sight_group_index; // ecx
  char v57; // dl
  uint32_t area_id; // ecx
  char v59; // al
  uint64_t tag; // rdx
  uint32_t speed_level; // ecx
  char v62; // al
  __int64 v63; // rsi
  uint32_t ai_config_id; // ecx
  char v65; // dl
  uint32_t pos_follow_config_id; // ecx
  char v67; // al
  std::map<int,unsigned int> *p_logic_state_pose_id_map; // rsi
  bool is_light_config; // cl
  char v70; // al
  __int64 v71; // rsi
  __int64 v72; // rdx
  bool is_override_vision_level; // cl
  char v74; // dl
  __int64 v75; // rdx
  __int64 v76; // rsi
  data::VisionLevelType vision_level; // ecx
  char v78; // dl
  const MonsterScriptConfig *v80; // [rsp+0h] [rbp-10h]

  v80 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  config_id = a2->config_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->config_id = config_id;
  v4 = (((_BYTE)v80 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v80->monster_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v80 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v80->monster_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v80->monster_id);
  }
  monster_id = v80->monster_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->monster_id, v4);
  }
  this->monster_id = monster_id;
  if ( *(char *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 19) & 7) >= *(_BYTE *)((((unsigned __int64)&this->pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->pos, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&v80->pos >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v80->pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v80 + 19) & 7) >= *(_BYTE *)((((unsigned __int64)&v80->pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&v80->pos, 12LL);
  }
  this->pos = v80->pos;
  if ( (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&this->rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->rot, 12LL);
  }
  v7 = *(_BYTE *)((((unsigned __int64)&v80->rot.z + 3) >> 3) + 0x7FFF8000);
  v8 = v7 != 0;
  if ( ((((unsigned __int8)v80 + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&v80->rot >> 3) + 0x7FFF8000)
     && *(_BYTE *)(((unsigned __int64)&v80->rot >> 3) + 0x7FFF8000) != 0) | (unsigned __int8)v8 & ((((unsigned __int8)v80 + 31) & 7) >= v7) )
  {
    v8 = 12LL;
    __asan_report_load_n(&v80->rot, 12LL);
  }
  this->rot = v80->rot;
  if ( *(_BYTE *)(((unsigned __int64)&v80->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v80->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v80->level);
  }
  level = v80->level;
  v10 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->level, v8);
  }
  this->level = level;
  v11 = (((_BYTE)v80 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v80->drop_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v80 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v80->drop_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v80->drop_id);
  }
  drop_id = v80->drop_id;
  v13 = *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v13 != 0;
  if ( v13 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v13 )
    __asan_report_store4(&this->drop_id, v11);
  this->drop_id = drop_id;
  if ( *(char *)(((unsigned __int64)&v80->is_ban_txt_drop >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v80->is_ban_txt_drop, v11, &v80->is_ban_txt_drop);
  is_ban_txt_drop = v80->is_ban_txt_drop;
  v15 = *(_BYTE *)(((unsigned __int64)&this->is_ban_txt_drop >> 3) + 0x7FFF8000);
  if ( v15 < 0 )
  {
    LOBYTE(v11) = v15 != 0;
    __asan_report_store1(&this->is_ban_txt_drop, v11, &this->is_ban_txt_drop);
  }
  this->is_ban_txt_drop = is_ban_txt_drop;
  p_affix_set = &v80->affix_set;
  std::set<unsigned int>::operator=(&this->affix_set, &v80->affix_set);
  if ( *(char *)(((unsigned __int64)&v80->is_elite >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v80->is_elite, p_affix_set, &v80->is_elite);
  is_elite = v80->is_elite;
  v18 = *(_BYTE *)(((unsigned __int64)&this->is_elite >> 3) + 0x7FFF8000);
  if ( v18 < 0 )
  {
    LOBYTE(p_affix_set) = v18 != 0;
    __asan_report_store1(&this->is_elite, p_affix_set, &this->is_elite);
  }
  this->is_elite = is_elite;
  v19 = ((_BYTE)v80 + 97) & 7;
  v20 = (*(_BYTE *)(((unsigned __int64)&v80->is_oneoff >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v19 >= *(_BYTE *)(((unsigned __int64)&v80->is_oneoff >> 3) + 0x7FFF8000));
  if ( (_BYTE)v20 )
    __asan_report_load1(&v80->is_oneoff, v19, v20);
  is_oneoff = v80->is_oneoff;
  v22 = *(_BYTE *)(((unsigned __int64)&this->is_oneoff >> 3) + 0x7FFF8000);
  LOBYTE(v19) = v22 != 0;
  v23 = (v22 != 0) & (unsigned __int8)((((unsigned __int8)this + 97) & 7) >= v22);
  if ( (_BYTE)v23 )
    __asan_report_store1(&this->is_oneoff, v19, v23);
  this->is_oneoff = is_oneoff;
  v24 = ((_BYTE)v80 + 98) & 7;
  v25 = (*(_BYTE *)(((unsigned __int64)&v80->is_block_oneoff >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v24 >= *(_BYTE *)(((unsigned __int64)&v80->is_block_oneoff >> 3) + 0x7FFF8000));
  if ( (_BYTE)v25 )
    __asan_report_load1(&v80->is_block_oneoff, v24, v25);
  is_block_oneoff = v80->is_block_oneoff;
  v27 = *(_BYTE *)(((unsigned __int64)&this->is_block_oneoff >> 3) + 0x7FFF8000);
  LOBYTE(v24) = v27 != 0;
  v28 = (v27 != 0) & (unsigned __int8)((((unsigned __int8)this + 98) & 7) >= v27);
  if ( (_BYTE)v28 )
    __asan_report_store1(&this->is_block_oneoff, v24, v28);
  this->is_block_oneoff = is_block_oneoff;
  v29 = (((_BYTE)v80 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v80->pose_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v80 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v80->pose_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v80->pose_id);
  }
  pose_id = v80->pose_id;
  v31 = *(_BYTE *)(((unsigned __int64)&this->pose_id >> 3) + 0x7FFF8000);
  if ( v31 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v31 )
  {
    LOBYTE(v29) = v31 != 0;
    __asan_report_store4(&this->pose_id, v29);
  }
  this->pose_id = pose_id;
  std::string::operator=(&this->pose_logic_state, &v80->pose_logic_state);
  p_drop_tag = &v80->drop_tag;
  std::string::operator=(&this->drop_tag, &v80->drop_tag);
  if ( *(_BYTE *)(((unsigned __int64)&v80->room_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v80->room_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v80->room_id);
  }
  room_id = v80->room_id;
  v34 = *(_BYTE *)(((unsigned __int64)&this->room_id >> 3) + 0x7FFF8000);
  if ( v34 != 0 && v34 <= 3 )
  {
    LOBYTE(p_drop_tag) = v34 != 0;
    __asan_report_store4(&this->room_id, p_drop_tag);
  }
  this->room_id = room_id;
  v35 = (((_BYTE)v80 - 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v80->chest_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v80 - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v80->chest_config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v80->chest_config_id);
  }
  chest_config_id = v80->chest_config_id;
  v37 = *(_BYTE *)(((unsigned __int64)&this->chest_config_id >> 3) + 0x7FFF8000);
  if ( v37 != 0 && (char)((((_BYTE)this - 84) & 7) + 3) >= v37 )
  {
    LOBYTE(v35) = v37 != 0;
    __asan_report_store4(&this->chest_config_id, v35);
  }
  this->chest_config_id = chest_config_id;
  if ( *(_BYTE *)(((unsigned __int64)&v80->guest_ban_drop >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v80->guest_ban_drop >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v80->guest_ban_drop);
  }
  guest_ban_drop = v80->guest_ban_drop;
  v39 = *(_BYTE *)(((unsigned __int64)&this->guest_ban_drop >> 3) + 0x7FFF8000);
  if ( v39 != 0 && v39 <= 3 )
  {
    LOBYTE(v35) = v39 != 0;
    __asan_report_store4(&this->guest_ban_drop, v35);
  }
  this->guest_ban_drop = guest_ban_drop;
  v40 = (((_BYTE)v80 - 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v80->mark_flag >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v80 - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v80->mark_flag >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v80->mark_flag);
  }
  mark_flag = v80->mark_flag;
  v42 = *(_BYTE *)(((unsigned __int64)&this->mark_flag >> 3) + 0x7FFF8000);
  if ( v42 != 0 && (char)((((_BYTE)this - 76) & 7) + 3) >= v42 )
  {
    LOBYTE(v40) = v42 != 0;
    __asan_report_store4(&this->mark_flag, v40);
  }
  this->mark_flag = mark_flag;
  if ( *(_BYTE *)(((unsigned __int64)&v80->title_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v80->title_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v80->title_id);
  }
  title_id = v80->title_id;
  v44 = *(_BYTE *)(((unsigned __int64)&this->title_id >> 3) + 0x7FFF8000);
  if ( v44 != 0 && v44 <= 3 )
  {
    LOBYTE(v40) = v44 != 0;
    __asan_report_store4(&this->title_id, v40);
  }
  this->title_id = title_id;
  v45 = (((_BYTE)v80 - 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v80->special_name_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v80 - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v80->special_name_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v80->special_name_id);
  }
  special_name_id = v80->special_name_id;
  v47 = *(_BYTE *)(((unsigned __int64)&this->special_name_id >> 3) + 0x7FFF8000);
  if ( v47 != 0 && (char)((((_BYTE)this - 68) & 7) + 3) >= v47 )
  {
    LOBYTE(v45) = v47 != 0;
    __asan_report_store4(&this->special_name_id, v45);
  }
  this->special_name_id = special_name_id;
  if ( *(_BYTE *)(((unsigned __int64)&v80->oneoff_reset_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v80->oneoff_reset_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v80->oneoff_reset_version);
  }
  oneoff_reset_version = v80->oneoff_reset_version;
  v49 = *(_BYTE *)(((unsigned __int64)&this->oneoff_reset_version >> 3) + 0x7FFF8000);
  if ( v49 != 0 && v49 <= 3 )
  {
    LOBYTE(v45) = v49 != 0;
    __asan_report_store4(&this->oneoff_reset_version, v45);
  }
  this->oneoff_reset_version = oneoff_reset_version;
  v50 = (((_BYTE)v80 - 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v80->kill_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v80 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v80->kill_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v80->kill_score);
  }
  kill_score = v80->kill_score;
  v52 = *(_BYTE *)(((unsigned __int64)&this->kill_score >> 3) + 0x7FFF8000);
  if ( v52 != 0 && (char)((((_BYTE)this - 60) & 7) + 3) >= v52 )
  {
    LOBYTE(v50) = v52 != 0;
    __asan_report_store4(&this->kill_score, v50);
  }
  this->kill_score = kill_score;
  if ( *(_BYTE *)(((unsigned __int64)&v80->climate_area_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v80->climate_area_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v80->climate_area_id);
  }
  climate_area_id = v80->climate_area_id;
  v54 = *(_BYTE *)(((unsigned __int64)&this->climate_area_id >> 3) + 0x7FFF8000);
  if ( v54 != 0 && v54 <= 3 )
  {
    LOBYTE(v50) = v54 != 0;
    __asan_report_store4(&this->climate_area_id, v50);
  }
  this->climate_area_id = climate_area_id;
  v55 = (((_BYTE)v80 - 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v80->sight_group_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v80 - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v80->sight_group_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v80->sight_group_index);
  }
  sight_group_index = v80->sight_group_index;
  v57 = *(_BYTE *)(((unsigned __int64)&this->sight_group_index >> 3) + 0x7FFF8000);
  if ( v57 != 0 && (char)((((_BYTE)this - 52) & 7) + 3) >= v57 )
  {
    LOBYTE(v55) = v57 != 0;
    __asan_report_store4(&this->sight_group_index, v55);
  }
  this->sight_group_index = sight_group_index;
  if ( *(_BYTE *)(((unsigned __int64)&v80->area_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v80->area_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v80->area_id);
  }
  area_id = v80->area_id;
  v59 = *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000);
  LOBYTE(v55) = v59 != 0;
  if ( v59 != 0 && v59 <= 3 )
    __asan_report_store4(&this->area_id, v55);
  this->area_id = area_id;
  if ( *(_BYTE *)(((unsigned __int64)&v80->tag >> 3) + 0x7FFF8000) )
    __asan_report_load8(&v80->tag);
  tag = v80->tag;
  if ( *(_BYTE *)(((unsigned __int64)&this->tag >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->tag, v55);
  this->tag = tag;
  if ( *(_BYTE *)(((unsigned __int64)&v80->speed_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v80->speed_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v80->speed_level);
  }
  speed_level = v80->speed_level;
  v62 = *(_BYTE *)(((unsigned __int64)&this->speed_level >> 3) + 0x7FFF8000);
  if ( v62 != 0 && v62 <= 3 )
  {
    LOBYTE(v55) = v62 != 0;
    __asan_report_store4(&this->speed_level, v55);
  }
  this->speed_level = speed_level;
  v63 = (((_BYTE)v80 - 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v80->ai_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v80 - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v80->ai_config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v80->ai_config_id);
  }
  ai_config_id = v80->ai_config_id;
  v65 = *(_BYTE *)(((unsigned __int64)&this->ai_config_id >> 3) + 0x7FFF8000);
  if ( v65 != 0 && (char)((((_BYTE)this - 28) & 7) + 3) >= v65 )
  {
    LOBYTE(v63) = v65 != 0;
    __asan_report_store4(&this->ai_config_id, v63);
  }
  this->ai_config_id = ai_config_id;
  if ( *(_BYTE *)(((unsigned __int64)&v80->pos_follow_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v80->pos_follow_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v80->pos_follow_config_id);
  }
  pos_follow_config_id = v80->pos_follow_config_id;
  v67 = *(_BYTE *)(((unsigned __int64)&this->pos_follow_config_id >> 3) + 0x7FFF8000);
  if ( v67 != 0 && v67 <= 3 )
  {
    LOBYTE(v63) = v67 != 0;
    __asan_report_store4(&this->pos_follow_config_id, v63);
  }
  this->pos_follow_config_id = pos_follow_config_id;
  std::map<std::string,float>::operator=(&this->server_global_value_map, &v80->server_global_value_map);
  p_logic_state_pose_id_map = &v80->logic_state_pose_id_map;
  std::map<int,unsigned int>::operator=(&this->logic_state_pose_id_map, &v80->logic_state_pose_id_map);
  if ( *(char *)(((unsigned __int64)&v80->is_light_config >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v80->is_light_config, p_logic_state_pose_id_map, &v80->is_light_config);
  is_light_config = v80->is_light_config;
  v70 = *(_BYTE *)(((unsigned __int64)&this->is_light_config >> 3) + 0x7FFF8000);
  if ( v70 < 0 )
  {
    LOBYTE(p_logic_state_pose_id_map) = v70 != 0;
    __asan_report_store1(&this->is_light_config, p_logic_state_pose_id_map, &this->is_light_config);
  }
  this->is_light_config = is_light_config;
  v71 = ((_BYTE)v80 + 81) & 7;
  v72 = (*(_BYTE *)(((unsigned __int64)&v80->is_override_vision_level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v71 >= *(_BYTE *)(((unsigned __int64)&v80->is_override_vision_level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v72 )
    __asan_report_load1(&v80->is_override_vision_level, v71, v72);
  is_override_vision_level = v80->is_override_vision_level;
  v74 = *(_BYTE *)(((unsigned __int64)&this->is_override_vision_level >> 3) + 0x7FFF8000);
  LOBYTE(v71) = v74 != 0;
  v75 = (v74 != 0) & (unsigned __int8)((((unsigned __int8)this + 81) & 7) >= v74);
  if ( (_BYTE)v75 )
    __asan_report_store1(&this->is_override_vision_level, v71, v75);
  this->is_override_vision_level = is_override_vision_level;
  v76 = (((_BYTE)v80 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v80->vision_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v80 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v80->vision_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v80->vision_level);
  }
  vision_level = v80->vision_level;
  v78 = *(_BYTE *)(((unsigned __int64)&this->vision_level >> 3) + 0x7FFF8000);
  if ( v78 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v78 )
  {
    LOBYTE(v76) = v78 != 0;
    __asan_report_store4(&this->vision_level, v76);
  }
  this->vision_level = vision_level;
  return this;
};

// Line 30: range 000000000CE3D586-000000000CE3DD41
void __cdecl MonsterScriptConfig::MonsterScriptConfig(MonsterScriptConfig *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->config_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->monster_id, v2);
  }
  this->monster_id = 0;
  Vector3::Vector3(&this->pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->rot, 0.0, 0.0, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level, v2);
  }
  this->level = 0;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->drop_id, v3);
  }
  this->drop_id = 0;
  if ( *(char *)(((unsigned __int64)&this->is_ban_txt_drop >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ban_txt_drop, v3, &this->is_ban_txt_drop);
  this->is_ban_txt_drop = 0;
  std::set<unsigned int>::set(&this->affix_set);
  if ( *(char *)(((unsigned __int64)&this->is_elite >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_elite, v3, &this->is_elite);
  this->is_elite = 0;
  v4 = ((_BYTE)this + 97) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_oneoff >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_oneoff >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_oneoff, v4, v5);
  this->is_oneoff = 0;
  v6 = ((_BYTE)this + 98) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_block_oneoff >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_block_oneoff >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_block_oneoff, v6, v7);
  this->is_block_oneoff = 0;
  v8 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->pose_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pose_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->pose_id, v8);
  }
  this->pose_id = 0;
  std::string::basic_string(&this->pose_logic_state);
  std::string::basic_string(&this->drop_tag);
  if ( *(_BYTE *)(((unsigned __int64)&this->room_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->room_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->room_id, v8);
  }
  this->room_id = 0;
  v9 = (((_BYTE)this - 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->chest_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->chest_config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->chest_config_id, v9);
  }
  this->chest_config_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->guest_ban_drop >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guest_ban_drop >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->guest_ban_drop, v9);
  }
  this->guest_ban_drop = 0;
  v10 = (((_BYTE)this - 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->mark_flag >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mark_flag >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->mark_flag, v10);
  }
  this->mark_flag = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->title_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->title_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->title_id, v10);
  }
  this->title_id = 0;
  v11 = (((_BYTE)this - 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->special_name_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->special_name_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->special_name_id, v11);
  }
  this->special_name_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->oneoff_reset_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->oneoff_reset_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->oneoff_reset_version, v11);
  }
  this->oneoff_reset_version = 0;
  v12 = (((_BYTE)this - 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->kill_score, v12);
  }
  this->kill_score = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->climate_area_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->climate_area_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->climate_area_id, v12);
  }
  this->climate_area_id = 0;
  v13 = (((_BYTE)this - 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->sight_group_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sight_group_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sight_group_index, v13);
  }
  this->sight_group_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->area_id, v13);
  }
  this->area_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->tag >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->tag, v13);
  this->tag = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->speed_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->speed_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->speed_level, v13);
  }
  this->speed_level = 0;
  v14 = (((_BYTE)this - 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->ai_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ai_config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ai_config_id, v14);
  }
  this->ai_config_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->pos_follow_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pos_follow_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pos_follow_config_id, v14);
  }
  this->pos_follow_config_id = 0;
  std::map<std::string,float>::map(&this->server_global_value_map);
  std::map<int,unsigned int>::map(&this->logic_state_pose_id_map);
  if ( *(char *)(((unsigned __int64)&this->is_light_config >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_light_config, v14, &this->is_light_config);
  this->is_light_config = 0;
  v15 = ((_BYTE)this + 81) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&this->is_override_vision_level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&this->is_override_vision_level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->is_override_vision_level, v15, v16);
  this->is_override_vision_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->vision_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->vision_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->vision_level, (((_BYTE)this + 84) & 7u) + 3);
  }
  this->vision_level = VISION_LEVEL_NORMAL;
};

// Line 30: range 000000000D3A1E00-000000000D3A2E96
void __cdecl MonsterScriptConfig::MonsterScriptConfig(MonsterScriptConfig *const this, const MonsterScriptConfig *a2)
{
  uint32_t config_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t monster_id; // ecx
  char v6; // dl
  char v7; // dl
  __int64 v8; // rsi
  uint32_t level; // ecx
  char v10; // al
  __int64 v11; // rsi
  uint32_t drop_id; // ecx
  char v13; // dl
  bool is_ban_txt_drop; // cl
  char v15; // al
  std::set<unsigned int> *p_affix_set; // rsi
  bool is_elite; // cl
  char v18; // al
  __int64 v19; // rsi
  __int64 v20; // rdx
  bool is_oneoff; // cl
  char v22; // dl
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdx
  bool is_block_oneoff; // cl
  char v27; // dl
  __int64 v28; // rdx
  __int64 v29; // rsi
  uint32_t pose_id; // ecx
  char v31; // dl
  std::string *p_drop_tag; // rsi
  uint32_t room_id; // ecx
  char v34; // al
  __int64 v35; // rsi
  uint32_t chest_config_id; // ecx
  char v37; // dl
  uint32_t guest_ban_drop; // ecx
  char v39; // al
  __int64 v40; // rsi
  uint32_t mark_flag; // ecx
  char v42; // dl
  uint32_t title_id; // ecx
  char v44; // al
  __int64 v45; // rsi
  uint32_t special_name_id; // ecx
  char v47; // dl
  uint32_t oneoff_reset_version; // ecx
  char v49; // al
  __int64 v50; // rsi
  uint32_t kill_score; // ecx
  char v52; // dl
  uint32_t climate_area_id; // ecx
  char v54; // al
  __int64 v55; // rsi
  uint32_t sight_group_index; // ecx
  char v57; // dl
  uint32_t area_id; // ecx
  char v59; // al
  uint64_t tag; // rdx
  uint32_t speed_level; // ecx
  char v62; // al
  __int64 v63; // rsi
  uint32_t ai_config_id; // ecx
  char v65; // dl
  uint32_t pos_follow_config_id; // ecx
  char v67; // al
  std::map<int,unsigned int> *p_logic_state_pose_id_map; // rsi
  bool is_light_config; // cl
  char v70; // al
  __int64 v71; // rsi
  __int64 v72; // rdx
  bool is_override_vision_level; // cl
  char v74; // dl
  __int64 v75; // rdx
  __int64 v76; // rsi
  data::VisionLevelType vision_level; // ecx
  char v78; // dl
  const MonsterScriptConfig *v79; // [rsp+0h] [rbp-20h]

  v79 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  config_id = a2->config_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->config_id = config_id;
  v4 = (((_BYTE)v79 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v79->monster_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v79 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v79->monster_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v79->monster_id);
  }
  monster_id = v79->monster_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->monster_id, v4);
  }
  this->monster_id = monster_id;
  if ( *(char *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 19) & 7) >= *(_BYTE *)((((unsigned __int64)&this->pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->pos, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&v79->pos >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v79->pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v79 + 19) & 7) >= *(_BYTE *)((((unsigned __int64)&v79->pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&v79->pos, 12LL);
  }
  this->pos = v79->pos;
  if ( (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&this->rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->rot, 12LL);
  }
  v7 = *(_BYTE *)((((unsigned __int64)&v79->rot.z + 3) >> 3) + 0x7FFF8000);
  v8 = v7 != 0;
  if ( ((((unsigned __int8)v79 + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&v79->rot >> 3) + 0x7FFF8000)
     && *(_BYTE *)(((unsigned __int64)&v79->rot >> 3) + 0x7FFF8000) != 0) | (unsigned __int8)v8 & ((((unsigned __int8)v79 + 31) & 7) >= v7) )
  {
    v8 = 12LL;
    __asan_report_load_n(&v79->rot, 12LL);
  }
  this->rot = v79->rot;
  if ( *(_BYTE *)(((unsigned __int64)&v79->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v79->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v79->level);
  }
  level = v79->level;
  v10 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->level, v8);
  }
  this->level = level;
  v11 = (((_BYTE)v79 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v79->drop_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v79 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v79->drop_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v79->drop_id);
  }
  drop_id = v79->drop_id;
  v13 = *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v13 != 0;
  if ( v13 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v13 )
    __asan_report_store4(&this->drop_id, v11);
  this->drop_id = drop_id;
  if ( *(char *)(((unsigned __int64)&v79->is_ban_txt_drop >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v79->is_ban_txt_drop, v11, &v79->is_ban_txt_drop);
  is_ban_txt_drop = v79->is_ban_txt_drop;
  v15 = *(_BYTE *)(((unsigned __int64)&this->is_ban_txt_drop >> 3) + 0x7FFF8000);
  if ( v15 < 0 )
  {
    LOBYTE(v11) = v15 != 0;
    __asan_report_store1(&this->is_ban_txt_drop, v11, &this->is_ban_txt_drop);
  }
  this->is_ban_txt_drop = is_ban_txt_drop;
  p_affix_set = &v79->affix_set;
  std::set<unsigned int>::set(&this->affix_set, &v79->affix_set);
  if ( *(char *)(((unsigned __int64)&v79->is_elite >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v79->is_elite, p_affix_set, &v79->is_elite);
  is_elite = v79->is_elite;
  v18 = *(_BYTE *)(((unsigned __int64)&this->is_elite >> 3) + 0x7FFF8000);
  if ( v18 < 0 )
  {
    LOBYTE(p_affix_set) = v18 != 0;
    __asan_report_store1(&this->is_elite, p_affix_set, &this->is_elite);
  }
  this->is_elite = is_elite;
  v19 = ((_BYTE)v79 + 97) & 7;
  v20 = (*(_BYTE *)(((unsigned __int64)&v79->is_oneoff >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v19 >= *(_BYTE *)(((unsigned __int64)&v79->is_oneoff >> 3) + 0x7FFF8000));
  if ( (_BYTE)v20 )
    __asan_report_load1(&v79->is_oneoff, v19, v20);
  is_oneoff = v79->is_oneoff;
  v22 = *(_BYTE *)(((unsigned __int64)&this->is_oneoff >> 3) + 0x7FFF8000);
  LOBYTE(v19) = v22 != 0;
  v23 = (v22 != 0) & (unsigned __int8)((((unsigned __int8)this + 97) & 7) >= v22);
  if ( (_BYTE)v23 )
    __asan_report_store1(&this->is_oneoff, v19, v23);
  this->is_oneoff = is_oneoff;
  v24 = ((_BYTE)v79 + 98) & 7;
  v25 = (*(_BYTE *)(((unsigned __int64)&v79->is_block_oneoff >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v24 >= *(_BYTE *)(((unsigned __int64)&v79->is_block_oneoff >> 3) + 0x7FFF8000));
  if ( (_BYTE)v25 )
    __asan_report_load1(&v79->is_block_oneoff, v24, v25);
  is_block_oneoff = v79->is_block_oneoff;
  v27 = *(_BYTE *)(((unsigned __int64)&this->is_block_oneoff >> 3) + 0x7FFF8000);
  LOBYTE(v24) = v27 != 0;
  v28 = (v27 != 0) & (unsigned __int8)((((unsigned __int8)this + 98) & 7) >= v27);
  if ( (_BYTE)v28 )
    __asan_report_store1(&this->is_block_oneoff, v24, v28);
  this->is_block_oneoff = is_block_oneoff;
  v29 = (((_BYTE)v79 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v79->pose_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v79 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v79->pose_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v79->pose_id);
  }
  pose_id = v79->pose_id;
  v31 = *(_BYTE *)(((unsigned __int64)&this->pose_id >> 3) + 0x7FFF8000);
  if ( v31 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v31 )
  {
    LOBYTE(v29) = v31 != 0;
    __asan_report_store4(&this->pose_id, v29);
  }
  this->pose_id = pose_id;
  std::string::basic_string(&this->pose_logic_state, &v79->pose_logic_state);
  p_drop_tag = &v79->drop_tag;
  std::string::basic_string(&this->drop_tag, &v79->drop_tag);
  if ( *(_BYTE *)(((unsigned __int64)&v79->room_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v79->room_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v79->room_id);
  }
  room_id = v79->room_id;
  v34 = *(_BYTE *)(((unsigned __int64)&this->room_id >> 3) + 0x7FFF8000);
  if ( v34 != 0 && v34 <= 3 )
  {
    LOBYTE(p_drop_tag) = v34 != 0;
    __asan_report_store4(&this->room_id, p_drop_tag);
  }
  this->room_id = room_id;
  v35 = (((_BYTE)v79 - 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v79->chest_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v79 - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v79->chest_config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v79->chest_config_id);
  }
  chest_config_id = v79->chest_config_id;
  v37 = *(_BYTE *)(((unsigned __int64)&this->chest_config_id >> 3) + 0x7FFF8000);
  if ( v37 != 0 && (char)((((_BYTE)this - 84) & 7) + 3) >= v37 )
  {
    LOBYTE(v35) = v37 != 0;
    __asan_report_store4(&this->chest_config_id, v35);
  }
  this->chest_config_id = chest_config_id;
  if ( *(_BYTE *)(((unsigned __int64)&v79->guest_ban_drop >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v79->guest_ban_drop >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v79->guest_ban_drop);
  }
  guest_ban_drop = v79->guest_ban_drop;
  v39 = *(_BYTE *)(((unsigned __int64)&this->guest_ban_drop >> 3) + 0x7FFF8000);
  if ( v39 != 0 && v39 <= 3 )
  {
    LOBYTE(v35) = v39 != 0;
    __asan_report_store4(&this->guest_ban_drop, v35);
  }
  this->guest_ban_drop = guest_ban_drop;
  v40 = (((_BYTE)v79 - 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v79->mark_flag >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v79 - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v79->mark_flag >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v79->mark_flag);
  }
  mark_flag = v79->mark_flag;
  v42 = *(_BYTE *)(((unsigned __int64)&this->mark_flag >> 3) + 0x7FFF8000);
  if ( v42 != 0 && (char)((((_BYTE)this - 76) & 7) + 3) >= v42 )
  {
    LOBYTE(v40) = v42 != 0;
    __asan_report_store4(&this->mark_flag, v40);
  }
  this->mark_flag = mark_flag;
  if ( *(_BYTE *)(((unsigned __int64)&v79->title_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v79->title_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v79->title_id);
  }
  title_id = v79->title_id;
  v44 = *(_BYTE *)(((unsigned __int64)&this->title_id >> 3) + 0x7FFF8000);
  if ( v44 != 0 && v44 <= 3 )
  {
    LOBYTE(v40) = v44 != 0;
    __asan_report_store4(&this->title_id, v40);
  }
  this->title_id = title_id;
  v45 = (((_BYTE)v79 - 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v79->special_name_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v79 - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v79->special_name_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v79->special_name_id);
  }
  special_name_id = v79->special_name_id;
  v47 = *(_BYTE *)(((unsigned __int64)&this->special_name_id >> 3) + 0x7FFF8000);
  if ( v47 != 0 && (char)((((_BYTE)this - 68) & 7) + 3) >= v47 )
  {
    LOBYTE(v45) = v47 != 0;
    __asan_report_store4(&this->special_name_id, v45);
  }
  this->special_name_id = special_name_id;
  if ( *(_BYTE *)(((unsigned __int64)&v79->oneoff_reset_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v79->oneoff_reset_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v79->oneoff_reset_version);
  }
  oneoff_reset_version = v79->oneoff_reset_version;
  v49 = *(_BYTE *)(((unsigned __int64)&this->oneoff_reset_version >> 3) + 0x7FFF8000);
  if ( v49 != 0 && v49 <= 3 )
  {
    LOBYTE(v45) = v49 != 0;
    __asan_report_store4(&this->oneoff_reset_version, v45);
  }
  this->oneoff_reset_version = oneoff_reset_version;
  v50 = (((_BYTE)v79 - 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v79->kill_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v79 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v79->kill_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v79->kill_score);
  }
  kill_score = v79->kill_score;
  v52 = *(_BYTE *)(((unsigned __int64)&this->kill_score >> 3) + 0x7FFF8000);
  if ( v52 != 0 && (char)((((_BYTE)this - 60) & 7) + 3) >= v52 )
  {
    LOBYTE(v50) = v52 != 0;
    __asan_report_store4(&this->kill_score, v50);
  }
  this->kill_score = kill_score;
  if ( *(_BYTE *)(((unsigned __int64)&v79->climate_area_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v79->climate_area_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v79->climate_area_id);
  }
  climate_area_id = v79->climate_area_id;
  v54 = *(_BYTE *)(((unsigned __int64)&this->climate_area_id >> 3) + 0x7FFF8000);
  if ( v54 != 0 && v54 <= 3 )
  {
    LOBYTE(v50) = v54 != 0;
    __asan_report_store4(&this->climate_area_id, v50);
  }
  this->climate_area_id = climate_area_id;
  v55 = (((_BYTE)v79 - 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v79->sight_group_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v79 - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v79->sight_group_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v79->sight_group_index);
  }
  sight_group_index = v79->sight_group_index;
  v57 = *(_BYTE *)(((unsigned __int64)&this->sight_group_index >> 3) + 0x7FFF8000);
  if ( v57 != 0 && (char)((((_BYTE)this - 52) & 7) + 3) >= v57 )
  {
    LOBYTE(v55) = v57 != 0;
    __asan_report_store4(&this->sight_group_index, v55);
  }
  this->sight_group_index = sight_group_index;
  if ( *(_BYTE *)(((unsigned __int64)&v79->area_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v79->area_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v79->area_id);
  }
  area_id = v79->area_id;
  v59 = *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000);
  LOBYTE(v55) = v59 != 0;
  if ( v59 != 0 && v59 <= 3 )
    __asan_report_store4(&this->area_id, v55);
  this->area_id = area_id;
  if ( *(_BYTE *)(((unsigned __int64)&v79->tag >> 3) + 0x7FFF8000) )
    __asan_report_load8(&v79->tag);
  tag = v79->tag;
  if ( *(_BYTE *)(((unsigned __int64)&this->tag >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->tag, v55);
  this->tag = tag;
  if ( *(_BYTE *)(((unsigned __int64)&v79->speed_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v79->speed_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v79->speed_level);
  }
  speed_level = v79->speed_level;
  v62 = *(_BYTE *)(((unsigned __int64)&this->speed_level >> 3) + 0x7FFF8000);
  if ( v62 != 0 && v62 <= 3 )
  {
    LOBYTE(v55) = v62 != 0;
    __asan_report_store4(&this->speed_level, v55);
  }
  this->speed_level = speed_level;
  v63 = (((_BYTE)v79 - 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v79->ai_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v79 - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v79->ai_config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v79->ai_config_id);
  }
  ai_config_id = v79->ai_config_id;
  v65 = *(_BYTE *)(((unsigned __int64)&this->ai_config_id >> 3) + 0x7FFF8000);
  if ( v65 != 0 && (char)((((_BYTE)this - 28) & 7) + 3) >= v65 )
  {
    LOBYTE(v63) = v65 != 0;
    __asan_report_store4(&this->ai_config_id, v63);
  }
  this->ai_config_id = ai_config_id;
  if ( *(_BYTE *)(((unsigned __int64)&v79->pos_follow_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v79->pos_follow_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v79->pos_follow_config_id);
  }
  pos_follow_config_id = v79->pos_follow_config_id;
  v67 = *(_BYTE *)(((unsigned __int64)&this->pos_follow_config_id >> 3) + 0x7FFF8000);
  if ( v67 != 0 && v67 <= 3 )
  {
    LOBYTE(v63) = v67 != 0;
    __asan_report_store4(&this->pos_follow_config_id, v63);
  }
  this->pos_follow_config_id = pos_follow_config_id;
  std::map<std::string,float>::map(&this->server_global_value_map, &v79->server_global_value_map);
  p_logic_state_pose_id_map = &v79->logic_state_pose_id_map;
  std::map<int,unsigned int>::map(&this->logic_state_pose_id_map, &v79->logic_state_pose_id_map);
  if ( *(char *)(((unsigned __int64)&v79->is_light_config >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v79->is_light_config, p_logic_state_pose_id_map, &v79->is_light_config);
  is_light_config = v79->is_light_config;
  v70 = *(_BYTE *)(((unsigned __int64)&this->is_light_config >> 3) + 0x7FFF8000);
  if ( v70 < 0 )
  {
    LOBYTE(p_logic_state_pose_id_map) = v70 != 0;
    __asan_report_store1(&this->is_light_config, p_logic_state_pose_id_map, &this->is_light_config);
  }
  this->is_light_config = is_light_config;
  v71 = ((_BYTE)v79 + 81) & 7;
  v72 = (*(_BYTE *)(((unsigned __int64)&v79->is_override_vision_level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v71 >= *(_BYTE *)(((unsigned __int64)&v79->is_override_vision_level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v72 )
    __asan_report_load1(&v79->is_override_vision_level, v71, v72);
  is_override_vision_level = v79->is_override_vision_level;
  v74 = *(_BYTE *)(((unsigned __int64)&this->is_override_vision_level >> 3) + 0x7FFF8000);
  LOBYTE(v71) = v74 != 0;
  v75 = (v74 != 0) & (unsigned __int8)((((unsigned __int8)this + 81) & 7) >= v74);
  if ( (_BYTE)v75 )
    __asan_report_store1(&this->is_override_vision_level, v71, v75);
  this->is_override_vision_level = is_override_vision_level;
  v76 = (((_BYTE)v79 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v79->vision_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v79 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v79->vision_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v79->vision_level);
  }
  vision_level = v79->vision_level;
  v78 = *(_BYTE *)(((unsigned __int64)&this->vision_level >> 3) + 0x7FFF8000);
  if ( v78 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v78 )
  {
    LOBYTE(v76) = v78 != 0;
    __asan_report_store4(&this->vision_level, v76);
  }
  this->vision_level = vision_level;
};

// Line 30: range 000000000CE3DD42-000000000CE3DDA6
void __cdecl MonsterScriptConfig::~MonsterScriptConfig(MonsterScriptConfig *const this)
{
  std::map<int,unsigned int>::~map(&this->logic_state_pose_id_map);
  std::map<std::string,float>::~map(&this->server_global_value_map);
  std::string::~string(&this->drop_tag);
  std::string::~string(&this->pose_logic_state);
  std::set<unsigned int>::~set(&this->affix_set);
};

// Line 71: range 000000000F78B490-000000000F78B675
void __cdecl NpcScriptConfig::NpcScriptConfig(NpcScriptConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->config_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->npc_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->npc_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->npc_id, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->npc_id = 0;
  Vector3::Vector3(&this->pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->rot, 0.0, 0.0, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->scene_id, (((_BYTE)this + 32) & 7u) + 3);
  }
  this->scene_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->room_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->room_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->room_id, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->room_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->area_id, (((_BYTE)this + 40) & 7u) + 3);
  }
  this->area_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->pos_follow_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pos_follow_config_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->pos_follow_config_id, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->pos_follow_config_id = 0;
};

// Line 83: range 000000000F78B676-000000000F78B797
void __cdecl BossChestScriptConfig::BossChestScriptConfig(BossChestScriptConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->monster_config_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->resin >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->resin >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->resin, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->resin = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->life_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->life_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->life_time, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->life_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->take_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->take_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->take_num, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->take_num = 0;
};

// Line 91: range 000000000F78B798-000000000F78B873
void __cdecl CrucibleScriptConfig::CrucibleScriptConfig(CrucibleScriptConfig *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->duration = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_cd >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_cd >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->start_cd, v2);
  }
  this->start_cd = 0;
  std::vector<unsigned int>::vector(&this->progress_stage_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_play_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mp_play_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mp_play_id, v2);
  }
  this->mp_play_id = 0;
};

// Line 91: range 000000000F9B4072-000000000F9B4204
void __cdecl CrucibleScriptConfig::CrucibleScriptConfig(
        CrucibleScriptConfig *const this,
        const CrucibleScriptConfig *a2)
{
  uint32_t duration; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t start_cd; // ecx
  char v6; // dl
  std::vector<unsigned int> *p_progress_stage_vec; // rsi
  uint32_t mp_play_id; // ecx
  char v9; // al
  const CrucibleScriptConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  duration = a2->duration;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->duration = duration;
  v4 = (((_BYTE)v10 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->start_cd >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->start_cd >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->start_cd);
  }
  start_cd = v10->start_cd;
  v6 = *(_BYTE *)(((unsigned __int64)&this->start_cd >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->start_cd, v4);
  }
  this->start_cd = start_cd;
  p_progress_stage_vec = &v10->progress_stage_vec;
  std::vector<unsigned int>::vector(&this->progress_stage_vec, &v10->progress_stage_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v10->mp_play_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->mp_play_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->mp_play_id);
  }
  mp_play_id = v10->mp_play_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->mp_play_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(p_progress_stage_vec) = v9 != 0;
    __asan_report_store4(&this->mp_play_id, p_progress_stage_vec);
  }
  this->mp_play_id = mp_play_id;
};

// Line 91: range 000000000F78B874-000000000F78B892
void __cdecl CrucibleScriptConfig::~CrucibleScriptConfig(CrucibleScriptConfig *const this)
{
  std::vector<unsigned int>::~vector(&this->progress_stage_vec);
};

// Line 99: range 000000000F78B894-000000000F78B929
void __cdecl ExploreScriptConfig::ExploreScriptConfig(ExploreScriptConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->type = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->exp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->exp, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->exp = 0;
};

// Line 107: range 000000000F78B92A-000000000F78B979
void __cdecl OfferingConfig::OfferingConfig(OfferingConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->offering_id = 0;
};

// Line 112: range 000000000F78D3C4-000000000F78D419
void __cdecl WorktopConfig::WorktopConfig(WorktopConfig *const this)
{
  __int64 v1; // rsi

  std::set<unsigned int>::set(&this->init_option_set);
  if ( *(char *)(((unsigned __int64)&this->is_persistent >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_persistent, v1, &this->is_persistent);
  this->is_persistent = 0;
};

// Line 112: range 000000000F8427F2-000000000F84288D
void __cdecl WorktopConfig::WorktopConfig(WorktopConfig *const this, const WorktopConfig *a2)
{
  bool is_persistent; // cl
  char v3; // al

  std::set<unsigned int>::set(&this->init_option_set, &a2->init_option_set);
  if ( *(char *)(((unsigned __int64)&a2->is_persistent >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_persistent, a2, &a2->is_persistent);
  is_persistent = a2->is_persistent;
  v3 = *(_BYTE *)(((unsigned __int64)&this->is_persistent >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->is_persistent, a2, &this->is_persistent);
  }
  this->is_persistent = is_persistent;
};

// Line 112: range 000000000F78D41A-000000000F78D434
void __cdecl WorktopConfig::~WorktopConfig(WorktopConfig *const this)
{
  std::set<unsigned int>::~set(&this->init_option_set);
};

// Line 119: range 000000000F78BABC-000000000F78C542
void __cdecl GadgetScriptConfig::GadgetScriptConfig(GadgetScriptConfig *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rsi
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
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->config_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gadget_id, v2);
  }
  this->gadget_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entity_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->entity_type, v2);
  }
  this->entity_type = None_10;
  Vector3::Vector3(&this->pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->rot, 0.0, 0.0, 0.0);
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level, v3);
  }
  this->level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->drop_id, v3);
  }
  this->drop_id = 0;
  v4 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->chest_drop_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->chest_drop_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->chest_drop_id, v4);
  }
  this->chest_drop_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->route_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->route_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->route_id, v4);
  }
  this->route_id = 0;
  v5 = ((_BYTE)this + 52) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_use_point_array >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_use_point_array >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_use_point_array, v5, v6);
  this->is_use_point_array = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_type, v5);
  }
  this->gadget_type = GADGET_NONE;
  v7 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gadget_state, v7);
  }
  this->gadget_state = Default_4;
  if ( *(_BYTE *)(((unsigned __int64)&this->platform_rot_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->platform_rot_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->platform_rot_type, v7);
  }
  this->platform_rot_type = PLATFORM_ROT_NONE;
  v8 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->point_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->point_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->point_type, v8);
  }
  this->point_type = 0;
  if ( *(char *)(((unsigned __int64)&this->is_show_cutscene >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_show_cutscene, v8, &this->is_show_cutscene);
  this->is_show_cutscene = 0;
  v9 = ((_BYTE)this + 73) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->is_auto_pick >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->is_auto_pick >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_auto_pick, v9, v10);
  this->is_auto_pick = 0;
  v11 = ((_BYTE)this + 74) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->is_oneoff >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->is_oneoff >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->is_oneoff, v11, v12);
  this->is_oneoff = 0;
  v13 = ((_BYTE)this + 75) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->is_block_oneoff >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&this->is_block_oneoff >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_block_oneoff, v13, v14);
  this->is_block_oneoff = 0;
  v15 = ((_BYTE)this + 76) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&this->is_persistent >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&this->is_persistent >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->is_persistent, v15, v16);
  this->is_persistent = 0;
  v17 = ((_BYTE)this + 77) & 7;
  v18 = (*(_BYTE *)(((unsigned __int64)&this->is_start_route >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((unsigned __int64)&this->is_start_route >> 3) + 0x7FFF8000));
  if ( (_BYTE)v18 )
    __asan_report_store1(&this->is_start_route, v17, v18);
  this->is_start_route = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->owner_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->owner_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->owner_config_id, v17);
  }
  this->owner_config_id = 0;
  std::vector<unsigned int>::vector(&this->argument_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->born_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->born_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->born_type, v17);
  }
  this->born_type = GADGET_BORN_NONE;
  std::string::basic_string(&this->drop_tag);
  if ( *(_BYTE *)(((unsigned __int64)&this->room_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->room_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->room_id, v17);
  }
  this->room_id = 0;
  v19 = (((_BYTE)this - 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->interact_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->interact_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->interact_id, v19);
  }
  this->interact_id = 0;
  BossChestScriptConfig::BossChestScriptConfig(&this->boss_chest);
  if ( *(_BYTE *)(((unsigned __int64)&this->guest_ban_drop >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guest_ban_drop >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->guest_ban_drop, v19);
  }
  this->guest_ban_drop = 0;
  v20 = ((_BYTE)this - 76) & 7;
  v21 = (*(_BYTE *)(((unsigned __int64)&this->is_guest_can_operate >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v20 >= *(_BYTE *)(((unsigned __int64)&this->is_guest_can_operate >> 3) + 0x7FFF8000));
  if ( (_BYTE)v21 )
    __asan_report_store1(&this->is_guest_can_operate, v20, v21);
  this->is_guest_can_operate = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->mark_flag >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mark_flag >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mark_flag, v20);
  }
  this->mark_flag = 0;
  v22 = ((_BYTE)this - 68) & 7;
  v23 = (*(_BYTE *)(((unsigned __int64)&this->is_blossom_chest >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v22 >= *(_BYTE *)(((unsigned __int64)&this->is_blossom_chest >> 3) + 0x7FFF8000));
  if ( (_BYTE)v23 )
    __asan_report_store1(&this->is_blossom_chest, v22, v23);
  this->is_blossom_chest = 0;
  v24 = ((_BYTE)this - 67) & 7;
  v25 = (*(_BYTE *)(((unsigned __int64)&this->is_enable_interact >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v24 >= *(_BYTE *)(((unsigned __int64)&this->is_enable_interact >> 3) + 0x7FFF8000));
  if ( (_BYTE)v25 )
    __asan_report_store1(&this->is_enable_interact, v24, v25);
  this->is_enable_interact = 1;
  CrucibleScriptConfig::CrucibleScriptConfig(&this->crucible_config);
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_mp_play_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reward_mp_play_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reward_mp_play_type, v24);
  }
  this->reward_mp_play_type = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->oneoff_reset_version >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->oneoff_reset_version >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->oneoff_reset_version, (((_BYTE)this - 20) & 7u) + 3);
  }
  this->oneoff_reset_version = 0;
  ExploreScriptConfig::ExploreScriptConfig(&this->explore_config);
  OfferingConfig::OfferingConfig(&this->offering_config);
  v26 = (((_BYTE)this - 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->sight_group_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sight_group_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sight_group_index, v26);
  }
  this->sight_group_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->area_id, v26);
  }
  this->area_id = 0;
  v27 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->draft_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->draft_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->draft_id, v27);
  }
  this->draft_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->talk_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->talk_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->talk_state, v27);
  }
  this->talk_state = 0;
  std::map<std::string,float>::map(&this->server_global_value_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->fish_pool_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fish_pool_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fish_pool_id, v27);
  }
  this->fish_pool_id = 0;
  std::vector<unsigned int>::vector(&this->fishing_area_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->pos_follow_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pos_follow_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pos_follow_config_id, v27);
  }
  this->pos_follow_config_id = 0;
  std::optional<WorktopConfig>::optional(&this->worktop_config_opt);
  if ( *(char *)(((unsigned __int64)&this->is_override_vision_level >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_override_vision_level, v27, &this->is_override_vision_level);
  this->is_override_vision_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->vision_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->vision_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->vision_level, (((_BYTE)this - 84) & 7u) + 3);
  }
  this->vision_level = VISION_LEVEL_NORMAL;
};

// Line 119: range 000000000F9B422C-000000000F9B5933
void __cdecl GadgetScriptConfig::GadgetScriptConfig(GadgetScriptConfig *const this, const GadgetScriptConfig *a2)
{
  uint32_t config_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t gadget_id; // ecx
  char v6; // dl
  data::EntityType entity_type; // ecx
  char v8; // al
  __int64 v9; // rsi
  uint32_t level; // ecx
  char v11; // dl
  uint32_t drop_id; // ecx
  char v13; // al
  __int64 v14; // rsi
  uint32_t chest_drop_id; // ecx
  char v16; // dl
  uint32_t route_id; // ecx
  char v18; // al
  __int64 v19; // rsi
  __int64 v20; // rdx
  bool is_use_point_array; // cl
  char v22; // dl
  __int64 v23; // rdx
  data::GadgetType gadget_type; // ecx
  char v25; // al
  __int64 v26; // rsi
  data::GadgetState gadget_state; // ecx
  char v28; // dl
  data::PlatformRotType platform_rot_type; // ecx
  char v30; // al
  __int64 v31; // rsi
  uint32_t point_type; // ecx
  char v33; // dl
  bool is_show_cutscene; // cl
  char v35; // al
  __int64 v36; // rsi
  __int64 v37; // rdx
  bool is_auto_pick; // cl
  char v39; // dl
  __int64 v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rdx
  bool is_oneoff; // cl
  char v44; // dl
  __int64 v45; // rdx
  __int64 v46; // rsi
  __int64 v47; // rdx
  bool is_block_oneoff; // cl
  char v49; // dl
  __int64 v50; // rdx
  __int64 v51; // rsi
  __int64 v52; // rdx
  bool is_persistent; // cl
  char v54; // dl
  __int64 v55; // rdx
  __int64 v56; // rsi
  __int64 v57; // rdx
  bool is_start_route; // cl
  char v59; // dl
  __int64 v60; // rdx
  uint32_t owner_config_id; // ecx
  char v62; // al
  std::vector<unsigned int> *p_argument_vec; // rsi
  proto::GadgetBornType born_type; // ecx
  char v65; // al
  std::string *p_drop_tag; // rsi
  uint32_t room_id; // ecx
  char v68; // al
  __int64 v69; // rsi
  uint32_t interact_id; // ecx
  char v71; // dl
  __int64 v72; // rdx
  uint32_t guest_ban_drop; // ecx
  char v74; // al
  __int64 v75; // rsi
  __int64 v76; // rdx
  bool is_guest_can_operate; // cl
  char v78; // dl
  __int64 v79; // rdx
  uint32_t mark_flag; // ecx
  char v81; // al
  __int64 v82; // rsi
  __int64 v83; // rdx
  bool is_blossom_chest; // cl
  char v85; // dl
  __int64 v86; // rdx
  __int64 v87; // rsi
  __int64 v88; // rdx
  bool is_enable_interact; // cl
  char v90; // dl
  __int64 v91; // rdx
  CrucibleScriptConfig *p_crucible_config; // rsi
  uint32_t reward_mp_play_type; // ecx
  char v94; // al
  __int64 v95; // rsi
  uint32_t oneoff_reset_version; // ecx
  char v97; // dl
  __int64 v98; // rsi
  uint32_t sight_group_index; // ecx
  char v100; // dl
  uint32_t area_id; // ecx
  char v102; // al
  __int64 v103; // rsi
  uint32_t draft_id; // ecx
  char v105; // dl
  uint32_t talk_state; // ecx
  char v107; // al
  std::map<std::string,float> *p_server_global_value_map; // rsi
  uint32_t fish_pool_id; // ecx
  char v110; // al
  std::vector<unsigned int> *p_fishing_area_vec; // rsi
  uint32_t pos_follow_config_id; // ecx
  char v113; // al
  std::optional<WorktopConfig> *p_worktop_config_opt; // rsi
  bool is_override_vision_level; // cl
  char v116; // al
  __int64 v117; // rsi
  data::VisionLevelType vision_level; // ecx
  char v119; // dl
  const GadgetScriptConfig *v120; // [rsp+0h] [rbp-20h]

  v120 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  config_id = a2->config_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->config_id = config_id;
  v4 = (((_BYTE)v120 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v120->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v120 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v120->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v120->gadget_id);
  }
  gadget_id = v120->gadget_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->gadget_id, v4);
  }
  this->gadget_id = gadget_id;
  if ( *(_BYTE *)(((unsigned __int64)&v120->entity_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v120->entity_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v120->entity_type);
  }
  entity_type = v120->entity_type;
  v8 = *(_BYTE *)(((unsigned __int64)&this->entity_type >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store4(&this->entity_type, v4);
  }
  this->entity_type = entity_type;
  if ( (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->pos, 12LL);
  }
  if ( (((unsigned __int8)v120 + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&v120->pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v120->pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&v120->pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v120 + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&v120->pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&v120->pos, 12LL);
  }
  this->pos = v120->pos;
  if ( *(char *)(((unsigned __int64)&this->rot >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&this->rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->rot, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&v120->rot >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v120->rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v120 + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&v120->rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&v120->rot, 12LL);
  }
  this->rot = v120->rot;
  v9 = (((_BYTE)v120 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v120->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v120 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v120->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v120->level);
  }
  level = v120->level;
  v11 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v11 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v11 )
  {
    LOBYTE(v9) = v11 != 0;
    __asan_report_store4(&this->level, v9);
  }
  this->level = level;
  if ( *(_BYTE *)(((unsigned __int64)&v120->drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v120->drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v120->drop_id);
  }
  drop_id = v120->drop_id;
  v13 = *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(v9) = v13 != 0;
    __asan_report_store4(&this->drop_id, v9);
  }
  this->drop_id = drop_id;
  v14 = (((_BYTE)v120 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v120->chest_drop_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v120 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v120->chest_drop_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v120->chest_drop_id);
  }
  chest_drop_id = v120->chest_drop_id;
  v16 = *(_BYTE *)(((unsigned __int64)&this->chest_drop_id >> 3) + 0x7FFF8000);
  if ( v16 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v16 )
  {
    LOBYTE(v14) = v16 != 0;
    __asan_report_store4(&this->chest_drop_id, v14);
  }
  this->chest_drop_id = chest_drop_id;
  if ( *(_BYTE *)(((unsigned __int64)&v120->route_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v120->route_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v120->route_id);
  }
  route_id = v120->route_id;
  v18 = *(_BYTE *)(((unsigned __int64)&this->route_id >> 3) + 0x7FFF8000);
  if ( v18 != 0 && v18 <= 3 )
  {
    LOBYTE(v14) = v18 != 0;
    __asan_report_store4(&this->route_id, v14);
  }
  this->route_id = route_id;
  v19 = ((_BYTE)v120 + 52) & 7;
  v20 = (*(_BYTE *)(((unsigned __int64)&v120->is_use_point_array >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v19 >= *(_BYTE *)(((unsigned __int64)&v120->is_use_point_array >> 3) + 0x7FFF8000));
  if ( (_BYTE)v20 )
    __asan_report_load1(&v120->is_use_point_array, v19, v20);
  is_use_point_array = v120->is_use_point_array;
  v22 = *(_BYTE *)(((unsigned __int64)&this->is_use_point_array >> 3) + 0x7FFF8000);
  LOBYTE(v19) = v22 != 0;
  v23 = (v22 != 0) & (unsigned __int8)((((unsigned __int8)this + 52) & 7) >= v22);
  if ( (_BYTE)v23 )
    __asan_report_store1(&this->is_use_point_array, v19, v23);
  this->is_use_point_array = is_use_point_array;
  if ( *(_BYTE *)(((unsigned __int64)&v120->gadget_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v120->gadget_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v120->gadget_type);
  }
  gadget_type = v120->gadget_type;
  v25 = *(_BYTE *)(((unsigned __int64)&this->gadget_type >> 3) + 0x7FFF8000);
  if ( v25 != 0 && v25 <= 3 )
  {
    LOBYTE(v19) = v25 != 0;
    __asan_report_store4(&this->gadget_type, v19);
  }
  this->gadget_type = gadget_type;
  v26 = (((_BYTE)v120 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v120->gadget_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v120 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v120->gadget_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v120->gadget_state);
  }
  gadget_state = v120->gadget_state;
  v28 = *(_BYTE *)(((unsigned __int64)&this->gadget_state >> 3) + 0x7FFF8000);
  if ( v28 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v28 )
  {
    LOBYTE(v26) = v28 != 0;
    __asan_report_store4(&this->gadget_state, v26);
  }
  this->gadget_state = gadget_state;
  if ( *(_BYTE *)(((unsigned __int64)&v120->platform_rot_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v120->platform_rot_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v120->platform_rot_type);
  }
  platform_rot_type = v120->platform_rot_type;
  v30 = *(_BYTE *)(((unsigned __int64)&this->platform_rot_type >> 3) + 0x7FFF8000);
  if ( v30 != 0 && v30 <= 3 )
  {
    LOBYTE(v26) = v30 != 0;
    __asan_report_store4(&this->platform_rot_type, v26);
  }
  this->platform_rot_type = platform_rot_type;
  v31 = (((_BYTE)v120 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v120->point_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v120 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v120->point_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v120->point_type);
  }
  point_type = v120->point_type;
  v33 = *(_BYTE *)(((unsigned __int64)&this->point_type >> 3) + 0x7FFF8000);
  LOBYTE(v31) = v33 != 0;
  if ( v33 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v33 )
    __asan_report_store4(&this->point_type, v31);
  this->point_type = point_type;
  if ( *(char *)(((unsigned __int64)&v120->is_show_cutscene >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v120->is_show_cutscene, v31, &v120->is_show_cutscene);
  is_show_cutscene = v120->is_show_cutscene;
  v35 = *(_BYTE *)(((unsigned __int64)&this->is_show_cutscene >> 3) + 0x7FFF8000);
  if ( v35 < 0 )
  {
    LOBYTE(v31) = v35 != 0;
    __asan_report_store1(&this->is_show_cutscene, v31, &this->is_show_cutscene);
  }
  this->is_show_cutscene = is_show_cutscene;
  v36 = ((_BYTE)v120 + 73) & 7;
  v37 = (*(_BYTE *)(((unsigned __int64)&v120->is_auto_pick >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v36 >= *(_BYTE *)(((unsigned __int64)&v120->is_auto_pick >> 3) + 0x7FFF8000));
  if ( (_BYTE)v37 )
    __asan_report_load1(&v120->is_auto_pick, v36, v37);
  is_auto_pick = v120->is_auto_pick;
  v39 = *(_BYTE *)(((unsigned __int64)&this->is_auto_pick >> 3) + 0x7FFF8000);
  LOBYTE(v36) = v39 != 0;
  v40 = (v39 != 0) & (unsigned __int8)((((unsigned __int8)this + 73) & 7) >= v39);
  if ( (_BYTE)v40 )
    __asan_report_store1(&this->is_auto_pick, v36, v40);
  this->is_auto_pick = is_auto_pick;
  v41 = ((_BYTE)v120 + 74) & 7;
  v42 = (*(_BYTE *)(((unsigned __int64)&v120->is_oneoff >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v41 >= *(_BYTE *)(((unsigned __int64)&v120->is_oneoff >> 3) + 0x7FFF8000));
  if ( (_BYTE)v42 )
    __asan_report_load1(&v120->is_oneoff, v41, v42);
  is_oneoff = v120->is_oneoff;
  v44 = *(_BYTE *)(((unsigned __int64)&this->is_oneoff >> 3) + 0x7FFF8000);
  LOBYTE(v41) = v44 != 0;
  v45 = (v44 != 0) & (unsigned __int8)((((unsigned __int8)this + 74) & 7) >= v44);
  if ( (_BYTE)v45 )
    __asan_report_store1(&this->is_oneoff, v41, v45);
  this->is_oneoff = is_oneoff;
  v46 = ((_BYTE)v120 + 75) & 7;
  v47 = (*(_BYTE *)(((unsigned __int64)&v120->is_block_oneoff >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v46 >= *(_BYTE *)(((unsigned __int64)&v120->is_block_oneoff >> 3) + 0x7FFF8000));
  if ( (_BYTE)v47 )
    __asan_report_load1(&v120->is_block_oneoff, v46, v47);
  is_block_oneoff = v120->is_block_oneoff;
  v49 = *(_BYTE *)(((unsigned __int64)&this->is_block_oneoff >> 3) + 0x7FFF8000);
  LOBYTE(v46) = v49 != 0;
  v50 = (v49 != 0) & (unsigned __int8)((((unsigned __int8)this + 75) & 7) >= v49);
  if ( (_BYTE)v50 )
    __asan_report_store1(&this->is_block_oneoff, v46, v50);
  this->is_block_oneoff = is_block_oneoff;
  v51 = ((_BYTE)v120 + 76) & 7;
  v52 = (*(_BYTE *)(((unsigned __int64)&v120->is_persistent >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v51 >= *(_BYTE *)(((unsigned __int64)&v120->is_persistent >> 3) + 0x7FFF8000));
  if ( (_BYTE)v52 )
    __asan_report_load1(&v120->is_persistent, v51, v52);
  is_persistent = v120->is_persistent;
  v54 = *(_BYTE *)(((unsigned __int64)&this->is_persistent >> 3) + 0x7FFF8000);
  LOBYTE(v51) = v54 != 0;
  v55 = (v54 != 0) & (unsigned __int8)((((unsigned __int8)this + 76) & 7) >= v54);
  if ( (_BYTE)v55 )
    __asan_report_store1(&this->is_persistent, v51, v55);
  this->is_persistent = is_persistent;
  v56 = ((_BYTE)v120 + 77) & 7;
  v57 = (*(_BYTE *)(((unsigned __int64)&v120->is_start_route >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v56 >= *(_BYTE *)(((unsigned __int64)&v120->is_start_route >> 3) + 0x7FFF8000));
  if ( (_BYTE)v57 )
    __asan_report_load1(&v120->is_start_route, v56, v57);
  is_start_route = v120->is_start_route;
  v59 = *(_BYTE *)(((unsigned __int64)&this->is_start_route >> 3) + 0x7FFF8000);
  LOBYTE(v56) = v59 != 0;
  v60 = (v59 != 0) & (unsigned __int8)((((unsigned __int8)this + 77) & 7) >= v59);
  if ( (_BYTE)v60 )
    __asan_report_store1(&this->is_start_route, v56, v60);
  this->is_start_route = is_start_route;
  if ( *(_BYTE *)(((unsigned __int64)&v120->owner_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v120->owner_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v120->owner_config_id);
  }
  owner_config_id = v120->owner_config_id;
  v62 = *(_BYTE *)(((unsigned __int64)&this->owner_config_id >> 3) + 0x7FFF8000);
  if ( v62 != 0 && v62 <= 3 )
  {
    LOBYTE(v56) = v62 != 0;
    __asan_report_store4(&this->owner_config_id, v56);
  }
  this->owner_config_id = owner_config_id;
  p_argument_vec = &v120->argument_vec;
  std::vector<unsigned int>::vector(&this->argument_vec, &v120->argument_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v120->born_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v120->born_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v120->born_type);
  }
  born_type = v120->born_type;
  v65 = *(_BYTE *)(((unsigned __int64)&this->born_type >> 3) + 0x7FFF8000);
  if ( v65 != 0 && v65 <= 3 )
  {
    LOBYTE(p_argument_vec) = v65 != 0;
    __asan_report_store4(&this->born_type, p_argument_vec);
  }
  this->born_type = born_type;
  p_drop_tag = &v120->drop_tag;
  std::string::basic_string(&this->drop_tag, &v120->drop_tag);
  if ( *(_BYTE *)(((unsigned __int64)&v120->room_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v120->room_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v120->room_id);
  }
  room_id = v120->room_id;
  v68 = *(_BYTE *)(((unsigned __int64)&this->room_id >> 3) + 0x7FFF8000);
  if ( v68 != 0 && v68 <= 3 )
  {
    LOBYTE(p_drop_tag) = v68 != 0;
    __asan_report_store4(&this->room_id, p_drop_tag);
  }
  this->room_id = room_id;
  v69 = (((_BYTE)v120 - 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v120->interact_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v120 - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v120->interact_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v120->interact_id);
  }
  interact_id = v120->interact_id;
  v71 = *(_BYTE *)(((unsigned __int64)&this->interact_id >> 3) + 0x7FFF8000);
  if ( v71 != 0 && (char)((((_BYTE)this - 100) & 7) + 3) >= v71 )
  {
    LOBYTE(v69) = v71 != 0;
    __asan_report_store4(&this->interact_id, v69);
  }
  this->interact_id = interact_id;
  if ( *(_WORD *)(((unsigned __int64)&this->boss_chest >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&v120->boss_chest >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v120->boss_chest);
  v72 = *(_QWORD *)&v120->boss_chest.life_time;
  *(_QWORD *)&this->boss_chest.monster_config_id = *(_QWORD *)&v120->boss_chest.monster_config_id;
  *(_QWORD *)&this->boss_chest.life_time = v72;
  if ( *(_BYTE *)(((unsigned __int64)&v120->guest_ban_drop >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v120->guest_ban_drop >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v120->guest_ban_drop);
  }
  guest_ban_drop = v120->guest_ban_drop;
  v74 = *(_BYTE *)(((unsigned __int64)&this->guest_ban_drop >> 3) + 0x7FFF8000);
  if ( v74 != 0 && v74 <= 3 )
  {
    LOBYTE(v69) = v74 != 0;
    __asan_report_store4(&this->guest_ban_drop, v69);
  }
  this->guest_ban_drop = guest_ban_drop;
  v75 = ((_BYTE)v120 - 76) & 7;
  v76 = (*(_BYTE *)(((unsigned __int64)&v120->is_guest_can_operate >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v75 >= *(_BYTE *)(((unsigned __int64)&v120->is_guest_can_operate >> 3) + 0x7FFF8000));
  if ( (_BYTE)v76 )
    __asan_report_load1(&v120->is_guest_can_operate, v75, v76);
  is_guest_can_operate = v120->is_guest_can_operate;
  v78 = *(_BYTE *)(((unsigned __int64)&this->is_guest_can_operate >> 3) + 0x7FFF8000);
  LOBYTE(v75) = v78 != 0;
  v79 = (v78 != 0) & (unsigned __int8)((((unsigned __int8)this - 76) & 7) >= v78);
  if ( (_BYTE)v79 )
    __asan_report_store1(&this->is_guest_can_operate, v75, v79);
  this->is_guest_can_operate = is_guest_can_operate;
  if ( *(_BYTE *)(((unsigned __int64)&v120->mark_flag >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v120->mark_flag >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v120->mark_flag);
  }
  mark_flag = v120->mark_flag;
  v81 = *(_BYTE *)(((unsigned __int64)&this->mark_flag >> 3) + 0x7FFF8000);
  if ( v81 != 0 && v81 <= 3 )
  {
    LOBYTE(v75) = v81 != 0;
    __asan_report_store4(&this->mark_flag, v75);
  }
  this->mark_flag = mark_flag;
  v82 = ((_BYTE)v120 - 68) & 7;
  v83 = (*(_BYTE *)(((unsigned __int64)&v120->is_blossom_chest >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v82 >= *(_BYTE *)(((unsigned __int64)&v120->is_blossom_chest >> 3) + 0x7FFF8000));
  if ( (_BYTE)v83 )
    __asan_report_load1(&v120->is_blossom_chest, v82, v83);
  is_blossom_chest = v120->is_blossom_chest;
  v85 = *(_BYTE *)(((unsigned __int64)&this->is_blossom_chest >> 3) + 0x7FFF8000);
  LOBYTE(v82) = v85 != 0;
  v86 = (v85 != 0) & (unsigned __int8)((((unsigned __int8)this - 68) & 7) >= v85);
  if ( (_BYTE)v86 )
    __asan_report_store1(&this->is_blossom_chest, v82, v86);
  this->is_blossom_chest = is_blossom_chest;
  v87 = ((_BYTE)v120 - 67) & 7;
  v88 = (*(_BYTE *)(((unsigned __int64)&v120->is_enable_interact >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v87 >= *(_BYTE *)(((unsigned __int64)&v120->is_enable_interact >> 3) + 0x7FFF8000));
  if ( (_BYTE)v88 )
    __asan_report_load1(&v120->is_enable_interact, v87, v88);
  is_enable_interact = v120->is_enable_interact;
  v90 = *(_BYTE *)(((unsigned __int64)&this->is_enable_interact >> 3) + 0x7FFF8000);
  LOBYTE(v87) = v90 != 0;
  v91 = (v90 != 0) & (unsigned __int8)((((unsigned __int8)this - 67) & 7) >= v90);
  if ( (_BYTE)v91 )
    __asan_report_store1(&this->is_enable_interact, v87, v91);
  this->is_enable_interact = is_enable_interact;
  p_crucible_config = &v120->crucible_config;
  CrucibleScriptConfig::CrucibleScriptConfig(&this->crucible_config, &v120->crucible_config);
  if ( *(_BYTE *)(((unsigned __int64)&v120->reward_mp_play_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v120->reward_mp_play_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v120->reward_mp_play_type);
  }
  reward_mp_play_type = v120->reward_mp_play_type;
  v94 = *(_BYTE *)(((unsigned __int64)&this->reward_mp_play_type >> 3) + 0x7FFF8000);
  if ( v94 != 0 && v94 <= 3 )
  {
    LOBYTE(p_crucible_config) = v94 != 0;
    __asan_report_store4(&this->reward_mp_play_type, p_crucible_config);
  }
  this->reward_mp_play_type = reward_mp_play_type;
  v95 = (((_BYTE)v120 - 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v120->oneoff_reset_version >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v120 - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v120->oneoff_reset_version >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&v120->oneoff_reset_version);
  }
  oneoff_reset_version = v120->oneoff_reset_version;
  v97 = *(_BYTE *)(((unsigned __int64)&this->oneoff_reset_version >> 3) + 0x7FFF8000);
  LOBYTE(v95) = v97 != 0;
  if ( v97 != 0 && (char)((((_BYTE)this - 20) & 7) + 3) >= v97 )
    __asan_report_store4(&this->oneoff_reset_version, v95);
  this->oneoff_reset_version = oneoff_reset_version;
  if ( *(_BYTE *)(((unsigned __int64)&this->explore_config >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->explore_config, v95);
  if ( *(_BYTE *)(((unsigned __int64)&v120->explore_config >> 3) + 0x7FFF8000) )
    __asan_report_load8(&v120->explore_config);
  this->explore_config = v120->explore_config;
  if ( *(_BYTE *)(((unsigned __int64)&this->offering_config >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->offering_config >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->offering_config, v95);
  }
  if ( *(_BYTE *)(((unsigned __int64)&v120->offering_config >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v120->offering_config >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v120->offering_config);
  }
  this->offering_config.offering_id = v120->offering_config.offering_id;
  v98 = (((_BYTE)v120 - 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v120->sight_group_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v120 - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v120->sight_group_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v120->sight_group_index);
  }
  sight_group_index = v120->sight_group_index;
  v100 = *(_BYTE *)(((unsigned __int64)&this->sight_group_index >> 3) + 0x7FFF8000);
  if ( v100 != 0 && (char)((((_BYTE)this - 4) & 7) + 3) >= v100 )
  {
    LOBYTE(v98) = v100 != 0;
    __asan_report_store4(&this->sight_group_index, v98);
  }
  this->sight_group_index = sight_group_index;
  if ( *(_BYTE *)(((unsigned __int64)&v120->area_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v120->area_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v120->area_id);
  }
  area_id = v120->area_id;
  v102 = *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000);
  if ( v102 != 0 && v102 <= 3 )
  {
    LOBYTE(v98) = v102 != 0;
    __asan_report_store4(&this->area_id, v98);
  }
  this->area_id = area_id;
  v103 = (((_BYTE)v120 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v120->draft_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v120 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v120->draft_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v120->draft_id);
  }
  draft_id = v120->draft_id;
  v105 = *(_BYTE *)(((unsigned __int64)&this->draft_id >> 3) + 0x7FFF8000);
  if ( v105 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v105 )
  {
    LOBYTE(v103) = v105 != 0;
    __asan_report_store4(&this->draft_id, v103);
  }
  this->draft_id = draft_id;
  if ( *(_BYTE *)(((unsigned __int64)&v120->talk_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v120->talk_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v120->talk_state);
  }
  talk_state = v120->talk_state;
  v107 = *(_BYTE *)(((unsigned __int64)&this->talk_state >> 3) + 0x7FFF8000);
  if ( v107 != 0 && v107 <= 3 )
  {
    LOBYTE(v103) = v107 != 0;
    __asan_report_store4(&this->talk_state, v103);
  }
  this->talk_state = talk_state;
  p_server_global_value_map = &v120->server_global_value_map;
  std::map<std::string,float>::map(&this->server_global_value_map, &v120->server_global_value_map);
  if ( *(_BYTE *)(((unsigned __int64)&v120->fish_pool_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v120->fish_pool_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v120->fish_pool_id);
  }
  fish_pool_id = v120->fish_pool_id;
  v110 = *(_BYTE *)(((unsigned __int64)&this->fish_pool_id >> 3) + 0x7FFF8000);
  if ( v110 != 0 && v110 <= 3 )
  {
    LOBYTE(p_server_global_value_map) = v110 != 0;
    __asan_report_store4(&this->fish_pool_id, p_server_global_value_map);
  }
  this->fish_pool_id = fish_pool_id;
  p_fishing_area_vec = &v120->fishing_area_vec;
  std::vector<unsigned int>::vector(&this->fishing_area_vec, &v120->fishing_area_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v120->pos_follow_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v120->pos_follow_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v120->pos_follow_config_id);
  }
  pos_follow_config_id = v120->pos_follow_config_id;
  v113 = *(_BYTE *)(((unsigned __int64)&this->pos_follow_config_id >> 3) + 0x7FFF8000);
  if ( v113 != 0 && v113 <= 3 )
  {
    LOBYTE(p_fishing_area_vec) = v113 != 0;
    __asan_report_store4(&this->pos_follow_config_id, p_fishing_area_vec);
  }
  this->pos_follow_config_id = pos_follow_config_id;
  p_worktop_config_opt = &v120->worktop_config_opt;
  std::optional<WorktopConfig>::optional(&this->worktop_config_opt, &v120->worktop_config_opt);
  if ( *(char *)(((unsigned __int64)&v120->is_override_vision_level >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v120->is_override_vision_level, p_worktop_config_opt, &v120->is_override_vision_level);
  is_override_vision_level = v120->is_override_vision_level;
  v116 = *(_BYTE *)(((unsigned __int64)&this->is_override_vision_level >> 3) + 0x7FFF8000);
  if ( v116 < 0 )
  {
    LOBYTE(p_worktop_config_opt) = v116 != 0;
    __asan_report_store1(&this->is_override_vision_level, p_worktop_config_opt, &this->is_override_vision_level);
  }
  this->is_override_vision_level = is_override_vision_level;
  v117 = (((_BYTE)v120 - 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v120->vision_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v120 - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v120->vision_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v120->vision_level);
  }
  vision_level = v120->vision_level;
  v119 = *(_BYTE *)(((unsigned __int64)&this->vision_level >> 3) + 0x7FFF8000);
  if ( v119 != 0 && (char)((((_BYTE)this - 84) & 7) + 3) >= v119 )
  {
    LOBYTE(v117) = v119 != 0;
    __asan_report_store4(&this->vision_level, v117);
  }
  this->vision_level = vision_level;
};

// Line 119: range 000000000F78C544-000000000F78C5BA
void __cdecl GadgetScriptConfig::~GadgetScriptConfig(GadgetScriptConfig *const this)
{
  std::optional<WorktopConfig>::~optional(&this->worktop_config_opt);
  std::vector<unsigned int>::~vector(&this->fishing_area_vec);
  std::map<std::string,float>::~map(&this->server_global_value_map);
  CrucibleScriptConfig::~CrucibleScriptConfig(&this->crucible_config);
  std::string::~string(&this->drop_tag);
  std::vector<unsigned int>::~vector(&this->argument_vec);
};

// Line 174: range 000000000F78C5BC-000000000F78C8C2
void __cdecl RegionScriptConfig::RegionScriptConfig(RegionScriptConfig *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->config_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->shape >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shape >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->shape, v2);
  }
  this->shape = REGION_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->sphere_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sphere_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sphere_radius, v2);
  }
  this->sphere_radius = 0.0;
  Vector3::Vector3(&this->cubic_size, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->pos, 0.0, 0.0, 0.0);
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->room_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->room_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->room_id, v3);
  }
  this->room_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->area_id, v3);
  }
  this->area_id = 0;
  std::vector<std::string>::vector(&this->ability_group_vec);
  std::vector<std::string>::vector(&this->team_ability_group_vec);
  std::set<unsigned int>::set(&this->group_vision_type_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->cylinder_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cylinder_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cylinder_radius, v3);
  }
  this->cylinder_radius = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cylinder_height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cylinder_height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cylinder_height, (((_BYTE)this - 108) & 7u) + 3);
  }
  this->cylinder_height = 0.0;
  std::vector<data::Point2D>::vector(&this->relative_polygon_point_vec);
  Vector3::Vector3(&this->polygon_aabb_size, 0.0, 0.0, 0.0);
  v4 = (((_BYTE)this - 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->pos_follow_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pos_follow_config_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->pos_follow_config_id, v4);
  }
  this->pos_follow_config_id = 0;
  if ( *(char *)(((unsigned __int64)&this->is_trigger_reload_group >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_trigger_reload_group, v4, &this->is_trigger_reload_group);
  this->is_trigger_reload_group = 0;
};

// Line 174: range 000000000F9B5A8E-000000000F9B62B7
void __cdecl RegionScriptConfig::RegionScriptConfig(RegionScriptConfig *const this, const RegionScriptConfig *a2)
{
  uint32_t config_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  data::RegionShape shape; // ecx
  char v6; // dl
  float sphere_radius; // xmm0_4
  __int64 v8; // rsi
  uint32_t room_id; // ecx
  char v10; // dl
  uint32_t area_id; // ecx
  char v12; // al
  float cylinder_radius; // xmm0_4
  float cylinder_height; // xmm0_4
  __int64 v15; // rsi
  uint32_t pos_follow_config_id; // ecx
  char v17; // dl
  bool is_trigger_reload_group; // cl
  char v19; // al
  const RegionScriptConfig *v20; // [rsp+0h] [rbp-20h]

  v20 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  config_id = a2->config_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->config_id = config_id;
  v4 = (((_BYTE)v20 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->shape >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->shape >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->shape);
  }
  shape = v20->shape;
  v6 = *(_BYTE *)(((unsigned __int64)&this->shape >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
    __asan_report_store4(&this->shape, v4);
  this->shape = shape;
  if ( *(_BYTE *)(((unsigned __int64)&v20->sphere_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->sphere_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->sphere_radius);
  }
  sphere_radius = v20->sphere_radius;
  if ( *(_BYTE *)(((unsigned __int64)&this->sphere_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sphere_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sphere_radius, v4);
  }
  this->sphere_radius = sphere_radius;
  if ( (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->cubic_size >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->cubic_size >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->cubic_size.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->cubic_size.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->cubic_size, 12LL);
  }
  if ( (((unsigned __int8)v20 + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&v20->cubic_size >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v20->cubic_size >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&v20->cubic_size.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v20 + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&v20->cubic_size.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&v20->cubic_size, 12LL);
  }
  this->cubic_size = v20->cubic_size;
  if ( *(char *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&this->pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->pos, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&v20->pos >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v20->pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v20 + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&v20->pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&v20->pos, 12LL);
  }
  this->pos = v20->pos;
  v8 = (((_BYTE)v20 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->room_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->room_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->room_id);
  }
  room_id = v20->room_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->room_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->room_id, v8);
  }
  this->room_id = room_id;
  if ( *(_BYTE *)(((unsigned __int64)&v20->area_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->area_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->area_id);
  }
  area_id = v20->area_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store4(&this->area_id, v8);
  }
  this->area_id = area_id;
  std::vector<std::string>::vector(&this->ability_group_vec, &v20->ability_group_vec);
  std::vector<std::string>::vector(&this->team_ability_group_vec, &v20->team_ability_group_vec);
  std::set<unsigned int>::set(&this->group_vision_type_set, &v20->group_vision_type_set);
  if ( *(_BYTE *)(((unsigned __int64)&v20->cylinder_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->cylinder_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->cylinder_radius);
  }
  cylinder_radius = v20->cylinder_radius;
  if ( *(_BYTE *)(((unsigned __int64)&this->cylinder_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cylinder_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cylinder_radius, &v20->group_vision_type_set);
  }
  this->cylinder_radius = cylinder_radius;
  if ( *(_BYTE *)(((unsigned __int64)&v20->cylinder_height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->cylinder_height >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->cylinder_height);
  }
  cylinder_height = v20->cylinder_height;
  if ( *(_BYTE *)(((unsigned __int64)&this->cylinder_height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cylinder_height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cylinder_height, (((_BYTE)this - 108) & 7u) + 3);
  }
  this->cylinder_height = cylinder_height;
  std::vector<data::Point2D>::vector(&this->relative_polygon_point_vec, &v20->relative_polygon_point_vec);
  if ( *(char *)(((unsigned __int64)&this->polygon_aabb_size >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->polygon_aabb_size.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 69) & 7) >= *(_BYTE *)((((unsigned __int64)&this->polygon_aabb_size.z + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->polygon_aabb_size, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&v20->polygon_aabb_size >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v20->polygon_aabb_size.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v20 - 69) & 7) >= *(_BYTE *)((((unsigned __int64)&v20->polygon_aabb_size.z + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&v20->polygon_aabb_size, 12LL);
  }
  this->polygon_aabb_size = v20->polygon_aabb_size;
  v15 = (((_BYTE)v20 - 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->pos_follow_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->pos_follow_config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->pos_follow_config_id);
  }
  pos_follow_config_id = v20->pos_follow_config_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->pos_follow_config_id >> 3) + 0x7FFF8000);
  LOBYTE(v15) = v17 != 0;
  if ( v17 != 0 && (char)((((_BYTE)this - 68) & 7) + 3) >= v17 )
    __asan_report_store4(&this->pos_follow_config_id, v15);
  this->pos_follow_config_id = pos_follow_config_id;
  if ( *(char *)(((unsigned __int64)&v20->is_trigger_reload_group >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v20->is_trigger_reload_group, v15, &v20->is_trigger_reload_group);
  is_trigger_reload_group = v20->is_trigger_reload_group;
  v19 = *(_BYTE *)(((unsigned __int64)&this->is_trigger_reload_group >> 3) + 0x7FFF8000);
  if ( v19 < 0 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store1(&this->is_trigger_reload_group, v15, &this->is_trigger_reload_group);
  }
  this->is_trigger_reload_group = is_trigger_reload_group;
};

// Line 174: range 000000000F78C8C4-000000000F78C914
void __cdecl RegionScriptConfig::~RegionScriptConfig(RegionScriptConfig *const this)
{
  std::vector<data::Point2D>::~vector(&this->relative_polygon_point_vec);
  std::set<unsigned int>::~set(&this->group_vision_type_set);
  std::vector<std::string>::~vector(&this->team_ability_group_vec);
  std::vector<std::string>::~vector(&this->ability_group_vec);
};

// Line 195: range 000000000F78C96A-000000000F78CAEE
void __cdecl TriggerScriptConfig::TriggerScriptConfig(TriggerScriptConfig *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->config_id, v1);
  }
  this->config_id = 0;
  std::vector<data::EventType>::vector(&this->event_vec);
  std::string::basic_string(&this->source_name);
  std::string::basic_string(&this->condition);
  std::string::basic_string(&this->action);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_trigger_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_trigger_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_trigger_count, v1);
  }
  this->max_trigger_count = 1;
  std::string::basic_string(&this->tlog_tag);
  std::string::basic_string(&this->tag);
  if ( *(char *)(((unsigned __int64)&this->is_forbid_guest >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_forbid_guest, v1, &this->is_forbid_guest);
  this->is_forbid_guest = 0;
  v2 = ((_BYTE)this - 23) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_enabled_in_mp_mode >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_enabled_in_mp_mode >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_enabled_in_mp_mode, v2, v3);
  this->is_enabled_in_mp_mode = 1;
};

// Line 195: range 000000000F9B653A-000000000F9B689A
void __cdecl TriggerScriptConfig::TriggerScriptConfig(TriggerScriptConfig *const this, const TriggerScriptConfig *a2)
{
  uint32_t config_id; // ecx
  char v3; // al
  std::string *p_action; // rsi
  uint32_t max_trigger_count; // ecx
  char v6; // al
  std::string *p_tag; // rsi
  bool is_forbid_guest; // cl
  char v9; // al
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool is_enabled_in_mp_mode; // cl
  char v13; // dl
  __int64 v14; // rdx
  const TriggerScriptConfig *v15; // [rsp+0h] [rbp-20h]

  v15 = a2;
  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&v15->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->config_id);
  }
  config_id = a2->config_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->config_id, a2);
  }
  this->config_id = config_id;
  std::vector<data::EventType>::vector(&this->event_vec, &v15->event_vec);
  std::string::basic_string(&this->source_name, &v15->source_name);
  std::string::basic_string(&this->condition, &v15->condition);
  p_action = &v15->action;
  std::string::basic_string(&this->action, &v15->action);
  if ( *(_BYTE *)(((unsigned __int64)&v15->max_trigger_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->max_trigger_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->max_trigger_count);
  }
  max_trigger_count = v15->max_trigger_count;
  v6 = *(_BYTE *)(((unsigned __int64)&this->max_trigger_count >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_action) = v6 != 0;
    __asan_report_store4(&this->max_trigger_count, p_action);
  }
  this->max_trigger_count = max_trigger_count;
  std::string::basic_string(&this->tlog_tag, &v15->tlog_tag);
  p_tag = &v15->tag;
  std::string::basic_string(&this->tag, &v15->tag);
  if ( *(char *)(((unsigned __int64)&v15->is_forbid_guest >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v15->is_forbid_guest, p_tag, &v15->is_forbid_guest);
  is_forbid_guest = v15->is_forbid_guest;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_forbid_guest >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(p_tag) = v9 != 0;
    __asan_report_store1(&this->is_forbid_guest, p_tag, &this->is_forbid_guest);
  }
  this->is_forbid_guest = is_forbid_guest;
  v10 = ((_BYTE)v15 - 23) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&v15->is_enabled_in_mp_mode >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&v15->is_enabled_in_mp_mode >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&v15->is_enabled_in_mp_mode, v10, v11);
  is_enabled_in_mp_mode = v15->is_enabled_in_mp_mode;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_enabled_in_mp_mode >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this - 23) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_enabled_in_mp_mode, v10, v14);
  this->is_enabled_in_mp_mode = is_enabled_in_mp_mode;
};

// Line 195: range 000000000F78CAF0-000000000F78CB6E
void __cdecl TriggerScriptConfig::~TriggerScriptConfig(TriggerScriptConfig *const this)
{
  std::string::~string(&this->tag);
  std::string::~string(&this->tlog_tag);
  std::string::~string(&this->action);
  std::string::~string(&this->condition);
  std::string::~string(&this->source_name);
  std::vector<data::EventType>::~vector(&this->event_vec);
  std::string::~string(this);
};

// Line 211: range 000000000F78D436-000000000F78D549
void __cdecl VariableScriptConfig::VariableScriptConfig(VariableScriptConfig *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->config_id = 0;
  std::string::basic_string(&this->name);
  if ( *(_BYTE *)(((unsigned __int64)&this->init_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->init_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->init_value, v1);
  }
  this->init_value = 0;
  v2 = ((_BYTE)this + 44) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_no_refresh >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_no_refresh >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_no_refresh, v2, v3);
  this->is_no_refresh = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->variable_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->variable_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->variable_type, v2);
  }
  this->variable_type = VARIABLE_TYPE_NORMAL;
};

// Line 211: range 000000000F9B8382-000000000F9B8584
void __cdecl VariableScriptConfig::VariableScriptConfig(VariableScriptConfig *const this, VariableScriptConfig *a2)
{
  uint32_t config_id; // ecx
  char v3; // al
  std::string *p_name; // rsi
  int32_t init_value; // ecx
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool is_no_refresh; // cl
  char v10; // dl
  __int64 v11; // rdx
  proto::GroupVariableType variable_type; // ecx
  char v13; // al
  VariableScriptConfig *v14; // [rsp+0h] [rbp-10h]

  v14 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  config_id = a2->config_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->config_id = config_id;
  p_name = &v14->name;
  std::string::basic_string(&this->name, &v14->name);
  if ( *(_BYTE *)(((unsigned __int64)&v14->init_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->init_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->init_value);
  }
  init_value = v14->init_value;
  v6 = *(_BYTE *)(((unsigned __int64)&this->init_value >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_name) = v6 != 0;
    __asan_report_store4(&this->init_value, p_name);
  }
  this->init_value = init_value;
  v7 = ((_BYTE)v14 + 44) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&v14->is_no_refresh >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&v14->is_no_refresh >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&v14->is_no_refresh, v7, v8);
  is_no_refresh = v14->is_no_refresh;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_no_refresh >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_no_refresh, v7, v11);
  this->is_no_refresh = is_no_refresh;
  if ( *(_BYTE *)(((unsigned __int64)&v14->variable_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->variable_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->variable_type);
  }
  variable_type = v14->variable_type;
  v13 = *(_BYTE *)(((unsigned __int64)&this->variable_type >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(v7) = v13 != 0;
    __asan_report_store4(&this->variable_type, v7);
  }
  this->variable_type = variable_type;
};

// Line 211: range 000000000F9B7EDA-000000000F9B80DC
void __cdecl VariableScriptConfig::VariableScriptConfig(
        VariableScriptConfig *const this,
        const VariableScriptConfig *a2)
{
  uint32_t config_id; // ecx
  char v3; // al
  std::string *p_name; // rsi
  int32_t init_value; // ecx
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool is_no_refresh; // cl
  char v10; // dl
  __int64 v11; // rdx
  proto::GroupVariableType variable_type; // ecx
  char v13; // al
  const VariableScriptConfig *v14; // [rsp+0h] [rbp-10h]

  v14 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  config_id = a2->config_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->config_id = config_id;
  p_name = &v14->name;
  std::string::basic_string(&this->name, &v14->name);
  if ( *(_BYTE *)(((unsigned __int64)&v14->init_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->init_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->init_value);
  }
  init_value = v14->init_value;
  v6 = *(_BYTE *)(((unsigned __int64)&this->init_value >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_name) = v6 != 0;
    __asan_report_store4(&this->init_value, p_name);
  }
  this->init_value = init_value;
  v7 = ((_BYTE)v14 + 44) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&v14->is_no_refresh >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&v14->is_no_refresh >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&v14->is_no_refresh, v7, v8);
  is_no_refresh = v14->is_no_refresh;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_no_refresh >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_no_refresh, v7, v11);
  this->is_no_refresh = is_no_refresh;
  if ( *(_BYTE *)(((unsigned __int64)&v14->variable_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->variable_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->variable_type);
  }
  variable_type = v14->variable_type;
  v13 = *(_BYTE *)(((unsigned __int64)&this->variable_type >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(v7) = v13 != 0;
    __asan_report_store4(&this->variable_type, v7);
  }
  this->variable_type = variable_type;
};

// Line 211: range 000000000F78D54A-000000000F78D568
void __cdecl VariableScriptConfig::~VariableScriptConfig(VariableScriptConfig *const this)
{
  std::string::~string(&this->name);
};

// Line 221: range 000000000F78D59E-000000000F78D694
void __cdecl PointScriptConfig::PointScriptConfig(PointScriptConfig *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->config_id = 0;
  Vector3::Vector3(&this->pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->rot, 0.0, 0.0, 0.0);
  v2 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->area_id, v2);
  }
  this->area_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->tag >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->tag, v2);
  this->tag = 0LL;
};

// Line 231: range 000000000F78CC4C-000000000F78CD32
void __cdecl SuiteScriptConfig::SuiteScriptConfig(SuiteScriptConfig *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  std::set<unsigned int>::set(&this->monster_config_set);
  std::set<unsigned int>::set(&this->gadget_config_set);
  std::set<unsigned int>::set(&this->region_config_set);
  std::set<unsigned int>::set(&this->npc_config_set);
  std::set<std::string>::set(&this->trigger_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->rand_weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rand_weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rand_weight, v1);
  }
  this->rand_weight = 10;
  v2 = ((_BYTE)this - 12) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->ban_refresh >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->ban_refresh >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->ban_refresh, v2, v3);
  this->ban_refresh = 0;
};

// Line 231: range 000000000F8A60CC-000000000F8A6270
void __cdecl SuiteScriptConfig::SuiteScriptConfig(SuiteScriptConfig *const this, SuiteScriptConfig *a2)
{
  std::set<std::string> *p_trigger_set; // rsi
  uint32_t rand_weight; // ecx
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool ban_refresh; // cl
  char v8; // dl
  __int64 v9; // rdx

  std::set<unsigned int>::set(&this->monster_config_set, &a2->monster_config_set);
  std::set<unsigned int>::set(&this->gadget_config_set, &a2->gadget_config_set);
  std::set<unsigned int>::set(&this->region_config_set, &a2->region_config_set);
  std::set<unsigned int>::set(&this->npc_config_set, &a2->npc_config_set);
  p_trigger_set = &a2->trigger_set;
  std::set<std::string>::set(&this->trigger_set, p_trigger_set);
  if ( *(_BYTE *)(((unsigned __int64)&a2->rand_weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->rand_weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->rand_weight);
  }
  rand_weight = a2->rand_weight;
  v4 = *(_BYTE *)(((unsigned __int64)&this->rand_weight >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(p_trigger_set) = v4 != 0;
    __asan_report_store4(&this->rand_weight, p_trigger_set);
  }
  this->rand_weight = rand_weight;
  v5 = ((_BYTE)a2 - 12) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&a2->ban_refresh >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&a2->ban_refresh >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&a2->ban_refresh, v5, v6);
  ban_refresh = a2->ban_refresh;
  v8 = *(_BYTE *)(((unsigned __int64)&this->ban_refresh >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this - 12) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->ban_refresh, v5, v9);
  this->ban_refresh = ban_refresh;
};

// Line 231: range 000000000FA019F4-000000000FA01BFC
void __cdecl SuiteScriptConfig::SuiteScriptConfig(SuiteScriptConfig *const this, const SuiteScriptConfig *a2)
{
  std::set<std::string> *p_trigger_set; // rsi
  uint32_t rand_weight; // ecx
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool ban_refresh; // cl
  char v8; // dl
  __int64 v9; // rdx

  std::set<unsigned int>::set(&this->monster_config_set, &a2->monster_config_set);
  std::set<unsigned int>::set(&this->gadget_config_set, &a2->gadget_config_set);
  std::set<unsigned int>::set(&this->region_config_set, &a2->region_config_set);
  std::set<unsigned int>::set(&this->npc_config_set, &a2->npc_config_set);
  p_trigger_set = &a2->trigger_set;
  std::set<std::string>::set(&this->trigger_set, p_trigger_set);
  if ( *(_BYTE *)(((unsigned __int64)&a2->rand_weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->rand_weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->rand_weight);
  }
  rand_weight = a2->rand_weight;
  v4 = *(_BYTE *)(((unsigned __int64)&this->rand_weight >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(p_trigger_set) = v4 != 0;
    __asan_report_store4(&this->rand_weight, p_trigger_set);
  }
  this->rand_weight = rand_weight;
  v5 = ((_BYTE)a2 - 12) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&a2->ban_refresh >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&a2->ban_refresh >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&a2->ban_refresh, v5, v6);
  ban_refresh = a2->ban_refresh;
  v8 = *(_BYTE *)(((unsigned __int64)&this->ban_refresh >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this - 12) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->ban_refresh, v5, v9);
  this->ban_refresh = ban_refresh;
};

// Line 231: range 000000000F78CD34-000000000F78CD92
void __cdecl SuiteScriptConfig::~SuiteScriptConfig(SuiteScriptConfig *const this)
{
  std::set<std::string>::~set(&this->trigger_set);
  std::set<unsigned int>::~set(&this->npc_config_set);
  std::set<unsigned int>::~set(&this->region_config_set);
  std::set<unsigned int>::~set(&this->gadget_config_set);
  std::set<unsigned int>::~set(&this->monster_config_set);
};

// Line 243: range 000000000F78CB70-000000000F78CB8A
void __cdecl SightGroupScriptConfig::SightGroupScriptConfig(SightGroupScriptConfig *const this)
{
  std::set<unsigned int>::set(&this->config_set);
};

// Line 243: range 000000000F8A5960-000000000F8A5985
void __cdecl SightGroupScriptConfig::SightGroupScriptConfig(
        SightGroupScriptConfig *const this,
        SightGroupScriptConfig *a2)
{
  std::set<unsigned int>::set(&this->config_set, &a2->config_set);
};

// Line 243: range 000000000FA01D74-000000000FA01D99
void __cdecl SightGroupScriptConfig::SightGroupScriptConfig(
        SightGroupScriptConfig *const this,
        const SightGroupScriptConfig *a2)
{
  std::set<unsigned int>::set(&this->config_set, &a2->config_set);
};

// Line 243: range 000000000F78CB8C-000000000F78CBA6
void __cdecl SightGroupScriptConfig::~SightGroupScriptConfig(SightGroupScriptConfig *const this)
{
  std::set<unsigned int>::~set(&this->config_set);
};

// Line 255: range 000000000F78CE38-000000000F78CE8F
void __cdecl FlowGroupQuestStateSuites::FlowGroupQuestStateSuites(FlowGroupQuestStateSuites *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->quest_id = 0;
  std::map<unsigned int,unsigned int>::map(&this->state_suite_map);
};

// Line 255: range 000000000F8A7204-000000000F8A729C
void __cdecl FlowGroupQuestStateSuites::FlowGroupQuestStateSuites(
        FlowGroupQuestStateSuites *const this,
        FlowGroupQuestStateSuites *a2)
{
  uint32_t quest_id; // ecx
  char v3; // al
  FlowGroupQuestStateSuites *v4; // [rsp+0h] [rbp-10h]

  v4 = a2;
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
  std::map<unsigned int,unsigned int>::map(&this->state_suite_map, &v4->state_suite_map);
};

// Line 255: range 000000000FA02172-000000000FA0220A
void __cdecl FlowGroupQuestStateSuites::FlowGroupQuestStateSuites(
        FlowGroupQuestStateSuites *const this,
        const FlowGroupQuestStateSuites *a2)
{
  uint32_t quest_id; // ecx
  char v3; // al
  const FlowGroupQuestStateSuites *v4; // [rsp+0h] [rbp-10h]

  v4 = a2;
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
  std::map<unsigned int,unsigned int>::map(&this->state_suite_map, &v4->state_suite_map);
};

// Line 255: range 000000000F78CE90-000000000F78CEAE
void __cdecl FlowGroupQuestStateSuites::~FlowGroupQuestStateSuites(FlowGroupQuestStateSuites *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->state_suite_map);
};

// Line 273: range 000000000F78CF74-000000000F78D024
void __cdecl SuiteDiskScriptConfig::SuiteDiskScriptConfig(SuiteDiskScriptConfig *const this)
{
  __int64 v1; // rsi

  std::set<unsigned int>::set(&this->monster_config_set);
  std::map<unsigned int,SuiteDiskGadgetConfig>::map(&this->gadget_config_map);
  std::set<unsigned int>::set(&this->region_config_set);
  std::set<unsigned int>::set(&this->npc_config_set);
  std::set<std::string>::set(&this->trigger_set);
  std::map<std::string,int>::map(&this->variable_value_map);
  if ( *(char *)(((unsigned __int64)&this->ban_refresh >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->ban_refresh, v1, &this->ban_refresh);
  this->ban_refresh = 0;
};

// Line 273: range 000000000F9B6F56-000000000F9B710C
void __cdecl SuiteDiskScriptConfig::SuiteDiskScriptConfig(
        SuiteDiskScriptConfig *const this,
        const SuiteDiskScriptConfig *a2)
{
  std::map<std::string,int> *p_variable_value_map; // rsi
  bool ban_refresh; // cl
  char v4; // al

  std::set<unsigned int>::set(&this->monster_config_set, &a2->monster_config_set);
  std::map<unsigned int,SuiteDiskGadgetConfig>::map(&this->gadget_config_map, &a2->gadget_config_map);
  std::set<unsigned int>::set(&this->region_config_set, &a2->region_config_set);
  std::set<unsigned int>::set(&this->npc_config_set, &a2->npc_config_set);
  std::set<std::string>::set(&this->trigger_set, &a2->trigger_set);
  p_variable_value_map = &a2->variable_value_map;
  std::map<std::string,int>::map(&this->variable_value_map, p_variable_value_map);
  if ( *(char *)(((unsigned __int64)&a2->ban_refresh >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->ban_refresh, p_variable_value_map, &a2->ban_refresh);
  ban_refresh = a2->ban_refresh;
  v4 = *(_BYTE *)(((unsigned __int64)&this->ban_refresh >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_variable_value_map) = v4 != 0;
    __asan_report_store1(&this->ban_refresh, p_variable_value_map, &this->ban_refresh);
  }
  this->ban_refresh = ban_refresh;
};

// Line 273: range 000000000F78D026-000000000F78D096
void __cdecl SuiteDiskScriptConfig::~SuiteDiskScriptConfig(SuiteDiskScriptConfig *const this)
{
  std::map<std::string,int>::~map(&this->variable_value_map);
  std::set<std::string>::~set(&this->trigger_set);
  std::set<unsigned int>::~set(&this->npc_config_set);
  std::set<unsigned int>::~set(&this->region_config_set);
  std::map<unsigned int,SuiteDiskGadgetConfig>::~map(&this->gadget_config_map);
  std::set<unsigned int>::~set(&this->monster_config_set);
};

// Line 285: range 000000000F78F6CC-000000000F78FC1F
void __cdecl GroupScriptConfig::GroupScriptConfig(GroupScriptConfig *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->io_type = GROUP_IO_TYPE_DEFAULT;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_flow_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sub_flow_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sub_flow_type, v2);
  }
  this->sub_flow_type = GROUP_SUB_FLOW_TYPE_DEFAULT;
  std::unordered_map<unsigned int,MonsterScriptConfig>::unordered_map(&this->monster_config_map);
  std::unordered_map<unsigned int,NpcScriptConfig>::unordered_map(&this->npc_config_map);
  std::unordered_map<unsigned int,GadgetScriptConfig>::unordered_map(&this->gadget_config_map);
  std::unordered_map<unsigned int,RegionScriptConfig>::unordered_map(&this->region_config_map);
  std::unordered_map<unsigned int,PointScriptConfig>::unordered_map(&this->point_config_map);
  std::unordered_map<std::string,TriggerScriptConfig>::unordered_map(&this->trigger_config_map);
  std::unordered_map<unsigned int,std::string>::unordered_map(&this->trigger_config_id_name_map);
  std::unordered_map<std::string,VariableScriptConfig>::unordered_map(&this->variable_map);
  std::unordered_map<unsigned int,VariableScriptConfig>::unordered_map(&this->variable_id_config_map);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->gather_point_list_map);
  std::unordered_set<unsigned int>::unordered_set(&this->garbage_config_id_set);
  std::unordered_set<unsigned int>::unordered_set(&this->garbage_variable_config_id_set);
  std::vector<SuiteScriptConfig>::vector(&this->suite_config_vec);
  std::vector<SightGroupScriptConfig>::vector(&this->sight_group_config_vec);
  std::unordered_map<unsigned int,std::set<std::string>>::unordered_map(&this->variable_type_name_set_map);
  std::unordered_map<std::string,proto::GroupVariableType>::unordered_map(&this->variable_name_type_map);
  std::unordered_map<unsigned int,std::set<std::string>>::unordered_map(&this->entity_apply_logic_state_set_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->init_suite_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->init_suite_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->init_suite_index, v2);
  }
  this->init_suite_index = 0;
  v3 = (((_BYTE)this - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_suite_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_suite_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->end_suite_index, v3);
  }
  this->end_suite_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->secure_suite_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->secure_suite_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->secure_suite_index, v3);
  }
  this->secure_suite_index = 0;
  v4 = ((_BYTE)this - 116) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_rand_suite >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_rand_suite >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_rand_suite, v4, v5);
  this->is_rand_suite = 0;
  std::set<data::EventType>::set(&this->event_set);
  LuaContent::LuaContent(&this->script_content);
  if ( *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->block_id, v4);
  }
  this->block_id = 0;
  v6 = (((_BYTE)this - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->area_id, v6);
  }
  this->area_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, v6);
  }
  this->group_id = 0;
  std::unordered_set<unsigned int>::unordered_set(&this->config_id_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_vision_range_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_vision_range_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_vision_range_level, v6);
  }
  this->max_vision_range_level = VISION_LEVEL_NORMAL;
  v7 = (((_BYTE)this - 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->grid_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->grid_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->grid_num, v7);
  }
  this->grid_num = 0;
  if ( *(char *)(((unsigned __int64)&this->is_across_block >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_across_block, v7, &this->is_across_block);
  this->is_across_block = 0;
  std::unordered_map<unsigned int,MonsterPoolScriptConfig>::unordered_map(&this->monster_pool_map);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,MonsterScriptConfig>>::unordered_map(&this->pool_to_monsters_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->pos_follow_config_id_map);
  std::unordered_map<unsigned long,std::vector<unsigned int>>::unordered_map(&this->tag_to_point_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->father_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->father_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->father_quest_id, v7);
  }
  this->father_quest_id = 0;
  std::vector<FlowGroupQuestStateSuites>::vector(&this->quest_state_suite_vec);
  std::map<unsigned int,SuiteDiskScriptConfig>::map(&this->suite_disk_config_map);
};

// Line 285: range 000000000F9BACEA-000000000F9BB91C
void __cdecl GroupScriptConfig::GroupScriptConfig(GroupScriptConfig *const this, const GroupScriptConfig *a2)
{
  data::GroupIOType io_type; // ecx
  char v3; // al
  __int64 v4; // rsi
  data::FlowGroupSubType sub_flow_type; // ecx
  char v6; // dl
  std::unordered_map<unsigned int,std::set<std::string>> *p_entity_apply_logic_state_set_map; // rsi
  uint32_t init_suite_index; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t end_suite_index; // ecx
  char v12; // dl
  uint32_t secure_suite_index; // ecx
  char v14; // al
  __int64 v15; // rsi
  __int64 v16; // rdx
  bool is_rand_suite; // cl
  char v18; // dl
  __int64 v19; // rdx
  LuaContent *p_script_content; // rsi
  uint32_t block_id; // ecx
  char v22; // al
  __int64 v23; // rsi
  uint32_t area_id; // ecx
  char v25; // dl
  uint32_t group_id; // ecx
  char v27; // al
  std::unordered_set<unsigned int> *p_config_id_set; // rsi
  data::VisionLevelType max_vision_range_level; // ecx
  char v30; // al
  __int64 v31; // rsi
  uint32_t grid_num; // ecx
  char v33; // dl
  bool is_across_block; // cl
  char v35; // al
  std::unordered_map<long unsigned int,std::vector<unsigned int>> *p_tag_to_point_map; // rsi
  uint32_t father_quest_id; // ecx
  char v38; // al
  const GroupScriptConfig *v39; // [rsp+0h] [rbp-20h]

  v39 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  io_type = a2->io_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->io_type = io_type;
  v4 = (((_BYTE)v39 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v39->sub_flow_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v39 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v39->sub_flow_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v39->sub_flow_type);
  }
  sub_flow_type = v39->sub_flow_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->sub_flow_type >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->sub_flow_type, v4);
  }
  this->sub_flow_type = sub_flow_type;
  std::unordered_map<unsigned int,MonsterScriptConfig>::unordered_map(
    &this->monster_config_map,
    &v39->monster_config_map);
  std::unordered_map<unsigned int,NpcScriptConfig>::unordered_map(&this->npc_config_map, &v39->npc_config_map);
  std::unordered_map<unsigned int,GadgetScriptConfig>::unordered_map(&this->gadget_config_map, &v39->gadget_config_map);
  std::unordered_map<unsigned int,RegionScriptConfig>::unordered_map(&this->region_config_map, &v39->region_config_map);
  std::unordered_map<unsigned int,PointScriptConfig>::unordered_map(&this->point_config_map, &v39->point_config_map);
  std::unordered_map<std::string,TriggerScriptConfig>::unordered_map(
    &this->trigger_config_map,
    &v39->trigger_config_map);
  std::unordered_map<unsigned int,std::string>::unordered_map(
    &this->trigger_config_id_name_map,
    &v39->trigger_config_id_name_map);
  std::unordered_map<std::string,VariableScriptConfig>::unordered_map(&this->variable_map, &v39->variable_map);
  std::unordered_map<unsigned int,VariableScriptConfig>::unordered_map(
    &this->variable_id_config_map,
    &v39->variable_id_config_map);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(
    &this->gather_point_list_map,
    &v39->gather_point_list_map);
  std::unordered_set<unsigned int>::unordered_set(&this->garbage_config_id_set, &v39->garbage_config_id_set);
  std::unordered_set<unsigned int>::unordered_set(
    &this->garbage_variable_config_id_set,
    &v39->garbage_variable_config_id_set);
  std::vector<SuiteScriptConfig>::vector(&this->suite_config_vec, &v39->suite_config_vec);
  std::vector<SightGroupScriptConfig>::vector(&this->sight_group_config_vec, &v39->sight_group_config_vec);
  std::unordered_map<unsigned int,std::set<std::string>>::unordered_map(
    &this->variable_type_name_set_map,
    &v39->variable_type_name_set_map);
  std::unordered_map<std::string,proto::GroupVariableType>::unordered_map(
    &this->variable_name_type_map,
    &v39->variable_name_type_map);
  p_entity_apply_logic_state_set_map = &v39->entity_apply_logic_state_set_map;
  std::unordered_map<unsigned int,std::set<std::string>>::unordered_map(
    &this->entity_apply_logic_state_set_map,
    &v39->entity_apply_logic_state_set_map);
  if ( *(_BYTE *)(((unsigned __int64)&v39->init_suite_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v39->init_suite_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v39->init_suite_index);
  }
  init_suite_index = v39->init_suite_index;
  v9 = *(_BYTE *)(((unsigned __int64)&this->init_suite_index >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(p_entity_apply_logic_state_set_map) = v9 != 0;
    __asan_report_store4(&this->init_suite_index, p_entity_apply_logic_state_set_map);
  }
  this->init_suite_index = init_suite_index;
  v10 = (((_BYTE)v39 - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v39->end_suite_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v39 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v39->end_suite_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v39->end_suite_index);
  }
  end_suite_index = v39->end_suite_index;
  v12 = *(_BYTE *)(((unsigned __int64)&this->end_suite_index >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this - 124) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->end_suite_index, v10);
  }
  this->end_suite_index = end_suite_index;
  if ( *(_BYTE *)(((unsigned __int64)&v39->secure_suite_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v39->secure_suite_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v39->secure_suite_index);
  }
  secure_suite_index = v39->secure_suite_index;
  v14 = *(_BYTE *)(((unsigned __int64)&this->secure_suite_index >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->secure_suite_index, v10);
  }
  this->secure_suite_index = secure_suite_index;
  v15 = ((_BYTE)v39 - 116) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&v39->is_rand_suite >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&v39->is_rand_suite >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_load1(&v39->is_rand_suite, v15, v16);
  is_rand_suite = v39->is_rand_suite;
  v18 = *(_BYTE *)(((unsigned __int64)&this->is_rand_suite >> 3) + 0x7FFF8000);
  LOBYTE(v15) = v18 != 0;
  v19 = (v18 != 0) & (unsigned __int8)((((unsigned __int8)this - 116) & 7) >= v18);
  if ( (_BYTE)v19 )
    __asan_report_store1(&this->is_rand_suite, v15, v19);
  this->is_rand_suite = is_rand_suite;
  std::set<data::EventType>::set(&this->event_set, &v39->event_set);
  p_script_content = &v39->script_content;
  LuaContent::LuaContent(&this->script_content, &v39->script_content);
  if ( *(_BYTE *)(((unsigned __int64)&v39->block_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v39->block_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v39->block_id);
  }
  block_id = v39->block_id;
  v22 = *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000);
  if ( v22 != 0 && v22 <= 3 )
  {
    LOBYTE(p_script_content) = v22 != 0;
    __asan_report_store4(&this->block_id, p_script_content);
  }
  this->block_id = block_id;
  v23 = (((_BYTE)v39 - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v39->area_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v39 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v39->area_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v39->area_id);
  }
  area_id = v39->area_id;
  v25 = *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000);
  if ( v25 != 0 && (char)((((_BYTE)this - 124) & 7) + 3) >= v25 )
  {
    LOBYTE(v23) = v25 != 0;
    __asan_report_store4(&this->area_id, v23);
  }
  this->area_id = area_id;
  if ( *(_BYTE *)(((unsigned __int64)&v39->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v39->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v39->group_id);
  }
  group_id = v39->group_id;
  v27 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v27 != 0 && v27 <= 3 )
  {
    LOBYTE(v23) = v27 != 0;
    __asan_report_store4(&this->group_id, v23);
  }
  this->group_id = group_id;
  p_config_id_set = &v39->config_id_set;
  std::unordered_set<unsigned int>::unordered_set(&this->config_id_set, &v39->config_id_set);
  if ( *(_BYTE *)(((unsigned __int64)&v39->max_vision_range_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v39->max_vision_range_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v39->max_vision_range_level);
  }
  max_vision_range_level = v39->max_vision_range_level;
  v30 = *(_BYTE *)(((unsigned __int64)&this->max_vision_range_level >> 3) + 0x7FFF8000);
  if ( v30 != 0 && v30 <= 3 )
  {
    LOBYTE(p_config_id_set) = v30 != 0;
    __asan_report_store4(&this->max_vision_range_level, p_config_id_set);
  }
  this->max_vision_range_level = max_vision_range_level;
  v31 = (((_BYTE)v39 - 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v39->grid_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v39 - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v39->grid_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v39->grid_num);
  }
  grid_num = v39->grid_num;
  v33 = *(_BYTE *)(((unsigned __int64)&this->grid_num >> 3) + 0x7FFF8000);
  LOBYTE(v31) = v33 != 0;
  if ( v33 != 0 && (char)((((_BYTE)this - 52) & 7) + 3) >= v33 )
    __asan_report_store4(&this->grid_num, v31);
  this->grid_num = grid_num;
  if ( *(char *)(((unsigned __int64)&v39->is_across_block >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v39->is_across_block, v31, &v39->is_across_block);
  is_across_block = v39->is_across_block;
  v35 = *(_BYTE *)(((unsigned __int64)&this->is_across_block >> 3) + 0x7FFF8000);
  if ( v35 < 0 )
  {
    LOBYTE(v31) = v35 != 0;
    __asan_report_store1(&this->is_across_block, v31, &this->is_across_block);
  }
  this->is_across_block = is_across_block;
  std::unordered_map<unsigned int,MonsterPoolScriptConfig>::unordered_map(
    &this->monster_pool_map,
    &v39->monster_pool_map);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,MonsterScriptConfig>>::unordered_map(
    &this->pool_to_monsters_map,
    &v39->pool_to_monsters_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(
    &this->pos_follow_config_id_map,
    &v39->pos_follow_config_id_map);
  p_tag_to_point_map = &v39->tag_to_point_map;
  std::unordered_map<unsigned long,std::vector<unsigned int>>::unordered_map(
    &this->tag_to_point_map,
    &v39->tag_to_point_map);
  if ( *(_BYTE *)(((unsigned __int64)&v39->father_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v39->father_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v39->father_quest_id);
  }
  father_quest_id = v39->father_quest_id;
  v38 = *(_BYTE *)(((unsigned __int64)&this->father_quest_id >> 3) + 0x7FFF8000);
  if ( v38 != 0 && v38 <= 3 )
  {
    LOBYTE(p_tag_to_point_map) = v38 != 0;
    __asan_report_store4(&this->father_quest_id, p_tag_to_point_map);
  }
  this->father_quest_id = father_quest_id;
  std::vector<FlowGroupQuestStateSuites>::vector(&this->quest_state_suite_vec, &v39->quest_state_suite_vec);
  std::map<unsigned int,SuiteDiskScriptConfig>::map(&this->suite_disk_config_map, &v39->suite_disk_config_map);
};

// Line 285: range 000000000F78FC20-000000000F78FDFC
void __cdecl GroupScriptConfig::~GroupScriptConfig(GroupScriptConfig *const this)
{
  std::map<unsigned int,SuiteDiskScriptConfig>::~map(&this->suite_disk_config_map);
  std::vector<FlowGroupQuestStateSuites>::~vector(&this->quest_state_suite_vec);
  std::unordered_map<unsigned long,std::vector<unsigned int>>::~unordered_map(&this->tag_to_point_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->pos_follow_config_id_map);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,MonsterScriptConfig>>::~unordered_map(&this->pool_to_monsters_map);
  std::unordered_map<unsigned int,MonsterPoolScriptConfig>::~unordered_map(&this->monster_pool_map);
  std::unordered_set<unsigned int>::~unordered_set(&this->config_id_set);
  LuaContent::~LuaContent(&this->script_content);
  std::set<data::EventType>::~set(&this->event_set);
  std::unordered_map<unsigned int,std::set<std::string>>::~unordered_map(&this->entity_apply_logic_state_set_map);
  std::unordered_map<std::string,proto::GroupVariableType>::~unordered_map(&this->variable_name_type_map);
  std::unordered_map<unsigned int,std::set<std::string>>::~unordered_map(&this->variable_type_name_set_map);
  std::vector<SightGroupScriptConfig>::~vector(&this->sight_group_config_vec);
  std::vector<SuiteScriptConfig>::~vector(&this->suite_config_vec);
  std::unordered_set<unsigned int>::~unordered_set(&this->garbage_variable_config_id_set);
  std::unordered_set<unsigned int>::~unordered_set(&this->garbage_config_id_set);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->gather_point_list_map);
  std::unordered_map<unsigned int,VariableScriptConfig>::~unordered_map(&this->variable_id_config_map);
  std::unordered_map<std::string,VariableScriptConfig>::~unordered_map(&this->variable_map);
  std::unordered_map<unsigned int,std::string>::~unordered_map(&this->trigger_config_id_name_map);
  std::unordered_map<std::string,TriggerScriptConfig>::~unordered_map(&this->trigger_config_map);
  std::unordered_map<unsigned int,PointScriptConfig>::~unordered_map(&this->point_config_map);
  std::unordered_map<unsigned int,RegionScriptConfig>::~unordered_map(&this->region_config_map);
  std::unordered_map<unsigned int,GadgetScriptConfig>::~unordered_map(&this->gadget_config_map);
  std::unordered_map<unsigned int,NpcScriptConfig>::~unordered_map(&this->npc_config_map);
  std::unordered_map<unsigned int,MonsterScriptConfig>::~unordered_map(&this->monster_config_map);
};

// Line 1291: range 000000000F7E6DA8-000000000F7E6E46
WorktopConfig *__cdecl WorktopConfig::operator=(WorktopConfig *const this, const WorktopConfig *a2)
{
  bool is_persistent; // cl
  char v3; // al

  std::set<unsigned int>::operator=(&this->init_option_set, &a2->init_option_set);
  if ( *(char *)(((unsigned __int64)&a2->is_persistent >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_persistent, a2, &a2->is_persistent);
  is_persistent = a2->is_persistent;
  v3 = *(_BYTE *)(((unsigned __int64)&this->is_persistent >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->is_persistent, a2, &this->is_persistent);
  }
  this->is_persistent = is_persistent;
  return this;
};
