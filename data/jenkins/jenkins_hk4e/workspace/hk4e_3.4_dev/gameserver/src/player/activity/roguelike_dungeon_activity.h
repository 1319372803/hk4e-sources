// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/roguelike_dungeon_activity.h

// Line 53: range 0000000016D6A03A-0000000016D6AA78
RogueStageData *__cdecl RogueStageData::operator=(RogueStageData *const this, const RogueStageData *a2)
{
  uint32_t stage_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t coin_c_num; // ecx
  char v6; // dl
  __int64 v7; // rdx
  uint32_t max_passed_level; // ecx
  char v9; // al
  __int64 v10; // rsi
  bool is_open; // cl
  char v12; // dl
  __int64 v13; // rdx
  __int64 v14; // rsi
  bool is_explored; // cl
  char v16; // dl
  __int64 v17; // rdx
  __int64 v18; // rsi
  bool is_passed; // cl
  char v20; // dl
  __int64 v21; // rdx
  __int64 v22; // rsi
  bool is_taken_first_reward; // cl
  char v24; // dl
  __int64 v25; // rdx
  bool is_in_combat; // cl
  char v27; // al
  __int64 v28; // rsi
  uint32_t cur_level; // ecx
  char v30; // dl
  __int64 v31; // rdx
  bool is_last_level_succ; // cl
  char v33; // al
  __int64 v34; // rsi
  bool is_entering_next_level; // cl
  char v36; // dl
  __int64 v37; // rdx
  __int64 v38; // rsi
  uint32_t cached_coin_b_num; // ecx
  char v40; // dl
  __int64 v41; // rdx
  uint32_t cached_coin_c_num; // ecx
  char v43; // al
  std::map<data::RogueCreateGadgetType,unsigned int> *p_dead_gadget_count_map; // rsi
  uint32_t kill_monster_num; // ecx
  char v46; // al
  std::map<unsigned int,unsigned int> *p_level_explore_cell_count_map; // rsi
  uint32_t avatar_element_count; // ecx
  char v49; // al
  __int64 v50; // rsi
  uint32_t avatar_count; // ecx
  char v52; // dl
  __int64 v53; // rdx
  bool is_used_spring; // cl
  char v55; // al
  std::map<unsigned int,bool> *p_level_finish_all_challenge_map; // rsi
  bool is_avatar_dead; // cl
  char v58; // al
  std::string *p_transaction; // rsi
  bool has_temp_leaved; // cl
  char v61; // al
  const RogueStageData *v63; // [rsp+0h] [rbp-10h]

  v63 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  stage_id = a2->stage_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, this);
  }
  this->stage_id = stage_id;
  v4 = (((_BYTE)v63 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v63->coin_c_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v63 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v63->coin_c_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v63->coin_c_num);
  }
  coin_c_num = v63->coin_c_num;
  v6 = *(_BYTE *)(((unsigned __int64)&this->coin_c_num >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->coin_c_num, v4, v7);
  this->coin_c_num = coin_c_num;
  if ( *(_BYTE *)(((unsigned __int64)&v63->max_passed_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v63->max_passed_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v63->max_passed_level);
  }
  max_passed_level = v63->max_passed_level;
  v9 = *(_BYTE *)(((unsigned __int64)&this->max_passed_level >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v4) = v9 != 0;
    __asan_report_store4(&this->max_passed_level, v4, &this->max_passed_level);
  }
  this->max_passed_level = max_passed_level;
  v10 = ((_BYTE)v63 + 12) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&v63->is_open >> 3) + 0x7FFF8000) != 0
    && (char)v10 >= *(_BYTE *)(((unsigned __int64)&v63->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v63->is_open);
  }
  is_open = v63->is_open;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this + 12) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->is_open, v10, v13);
  this->is_open = is_open;
  v14 = ((_BYTE)v63 + 13) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&v63->is_explored >> 3) + 0x7FFF8000) != 0
    && (char)v14 >= *(_BYTE *)(((unsigned __int64)&v63->is_explored >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v63->is_explored);
  }
  is_explored = v63->is_explored;
  v16 = *(_BYTE *)(((unsigned __int64)&this->is_explored >> 3) + 0x7FFF8000);
  LOBYTE(v14) = v16 != 0;
  v17 = (v16 != 0) & (unsigned __int8)((((unsigned __int8)this + 13) & 7) >= v16);
  if ( (_BYTE)v17 )
    __asan_report_store1(&this->is_explored, v14, v17);
  this->is_explored = is_explored;
  v18 = ((_BYTE)v63 + 14) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&v63->is_passed >> 3) + 0x7FFF8000) != 0
    && (char)v18 >= *(_BYTE *)(((unsigned __int64)&v63->is_passed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v63->is_passed);
  }
  is_passed = v63->is_passed;
  v20 = *(_BYTE *)(((unsigned __int64)&this->is_passed >> 3) + 0x7FFF8000);
  LOBYTE(v18) = v20 != 0;
  v21 = (v20 != 0) & (unsigned __int8)((((unsigned __int8)this + 14) & 7) >= v20);
  if ( (_BYTE)v21 )
    __asan_report_store1(&this->is_passed, v18, v21);
  this->is_passed = is_passed;
  v22 = ((_BYTE)v63 + 15) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&v63->is_taken_first_reward >> 3) + 0x7FFF8000) != 0
    && (char)v22 >= *(_BYTE *)(((unsigned __int64)&v63->is_taken_first_reward >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v63->is_taken_first_reward);
  }
  is_taken_first_reward = v63->is_taken_first_reward;
  v24 = *(_BYTE *)(((unsigned __int64)&this->is_taken_first_reward >> 3) + 0x7FFF8000);
  LOBYTE(v22) = v24 != 0;
  v25 = (v24 != 0) & (unsigned __int8)((((unsigned __int8)this + 15) & 7) >= v24);
  if ( (_BYTE)v25 )
    __asan_report_store1(&this->is_taken_first_reward, v22, v25);
  this->is_taken_first_reward = is_taken_first_reward;
  if ( *(char *)(((unsigned __int64)&v63->is_in_combat >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v63->is_in_combat);
  is_in_combat = v63->is_in_combat;
  v27 = *(_BYTE *)(((unsigned __int64)&this->is_in_combat >> 3) + 0x7FFF8000);
  if ( v27 < 0 )
  {
    LOBYTE(v22) = v27 != 0;
    __asan_report_store1(&this->is_in_combat, v22, &this->is_in_combat);
  }
  this->is_in_combat = is_in_combat;
  v28 = (((_BYTE)v63 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v63->cur_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v63 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v63->cur_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v63->cur_level);
  }
  cur_level = v63->cur_level;
  v30 = *(_BYTE *)(((unsigned __int64)&this->cur_level >> 3) + 0x7FFF8000);
  LOBYTE(v28) = v30 != 0;
  v31 = (v30 != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= v30);
  if ( (_BYTE)v31 )
    __asan_report_store4(&this->cur_level, v28, v31);
  this->cur_level = cur_level;
  if ( *(char *)(((unsigned __int64)&v63->is_last_level_succ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v63->is_last_level_succ);
  is_last_level_succ = v63->is_last_level_succ;
  v33 = *(_BYTE *)(((unsigned __int64)&this->is_last_level_succ >> 3) + 0x7FFF8000);
  if ( v33 < 0 )
  {
    LOBYTE(v28) = v33 != 0;
    __asan_report_store1(&this->is_last_level_succ, v28, &this->is_last_level_succ);
  }
  this->is_last_level_succ = is_last_level_succ;
  v34 = ((_BYTE)v63 + 25) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&v63->is_entering_next_level >> 3) + 0x7FFF8000) != 0
    && (char)v34 >= *(_BYTE *)(((unsigned __int64)&v63->is_entering_next_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v63->is_entering_next_level);
  }
  is_entering_next_level = v63->is_entering_next_level;
  v36 = *(_BYTE *)(((unsigned __int64)&this->is_entering_next_level >> 3) + 0x7FFF8000);
  LOBYTE(v34) = v36 != 0;
  v37 = (v36 != 0) & (unsigned __int8)((((unsigned __int8)this + 25) & 7) >= v36);
  if ( (_BYTE)v37 )
    __asan_report_store1(&this->is_entering_next_level, v34, v37);
  this->is_entering_next_level = is_entering_next_level;
  v38 = (((_BYTE)v63 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v63->cached_coin_b_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v63 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v63->cached_coin_b_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v63->cached_coin_b_num);
  }
  cached_coin_b_num = v63->cached_coin_b_num;
  v40 = *(_BYTE *)(((unsigned __int64)&this->cached_coin_b_num >> 3) + 0x7FFF8000);
  LOBYTE(v38) = v40 != 0;
  v41 = (v40 != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= v40);
  if ( (_BYTE)v41 )
    __asan_report_store4(&this->cached_coin_b_num, v38, v41);
  this->cached_coin_b_num = cached_coin_b_num;
  if ( *(_BYTE *)(((unsigned __int64)&v63->cached_coin_c_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v63->cached_coin_c_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v63->cached_coin_c_num);
  }
  cached_coin_c_num = v63->cached_coin_c_num;
  v43 = *(_BYTE *)(((unsigned __int64)&this->cached_coin_c_num >> 3) + 0x7FFF8000);
  if ( v43 != 0 && v43 <= 3 )
  {
    LOBYTE(v38) = v43 != 0;
    __asan_report_store4(&this->cached_coin_c_num, v38, &this->cached_coin_c_num);
  }
  this->cached_coin_c_num = cached_coin_c_num;
  p_dead_gadget_count_map = &v63->dead_gadget_count_map;
  std::map<data::RogueCreateGadgetType,unsigned int>::operator=(
    &this->dead_gadget_count_map,
    &v63->dead_gadget_count_map);
  if ( *(_BYTE *)(((unsigned __int64)&v63->kill_monster_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v63->kill_monster_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v63->kill_monster_num);
  }
  kill_monster_num = v63->kill_monster_num;
  v46 = *(_BYTE *)(((unsigned __int64)&this->kill_monster_num >> 3) + 0x7FFF8000);
  if ( v46 != 0 && v46 <= 3 )
  {
    LOBYTE(p_dead_gadget_count_map) = v46 != 0;
    __asan_report_store4(&this->kill_monster_num, p_dead_gadget_count_map, &this->kill_monster_num);
  }
  this->kill_monster_num = kill_monster_num;
  p_level_explore_cell_count_map = &v63->level_explore_cell_count_map;
  std::map<unsigned int,unsigned int>::operator=(
    &this->level_explore_cell_count_map,
    &v63->level_explore_cell_count_map);
  if ( *(_BYTE *)(((unsigned __int64)&v63->avatar_element_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v63->avatar_element_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v63->avatar_element_count);
  }
  avatar_element_count = v63->avatar_element_count;
  v49 = *(_BYTE *)(((unsigned __int64)&this->avatar_element_count >> 3) + 0x7FFF8000);
  if ( v49 != 0 && v49 <= 3 )
  {
    LOBYTE(p_level_explore_cell_count_map) = v49 != 0;
    __asan_report_store4(&this->avatar_element_count, p_level_explore_cell_count_map, &this->avatar_element_count);
  }
  this->avatar_element_count = avatar_element_count;
  v50 = (((_BYTE)v63 - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v63->avatar_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v63 - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v63->avatar_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v63->avatar_count);
  }
  avatar_count = v63->avatar_count;
  v52 = *(_BYTE *)(((unsigned __int64)&this->avatar_count >> 3) + 0x7FFF8000);
  LOBYTE(v50) = v52 != 0;
  v53 = (v52 != 0) & (unsigned __int8)((char)((((_BYTE)this - 108) & 7) + 3) >= v52);
  if ( (_BYTE)v53 )
    __asan_report_store4(&this->avatar_count, v50, v53);
  this->avatar_count = avatar_count;
  if ( *(char *)(((unsigned __int64)&v63->is_used_spring >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v63->is_used_spring);
  is_used_spring = v63->is_used_spring;
  v55 = *(_BYTE *)(((unsigned __int64)&this->is_used_spring >> 3) + 0x7FFF8000);
  if ( v55 < 0 )
  {
    LOBYTE(v50) = v55 != 0;
    __asan_report_store1(&this->is_used_spring, v50, &this->is_used_spring);
  }
  this->is_used_spring = is_used_spring;
  p_level_finish_all_challenge_map = &v63->level_finish_all_challenge_map;
  std::map<unsigned int,bool>::operator=(&this->level_finish_all_challenge_map, &v63->level_finish_all_challenge_map);
  if ( *(char *)(((unsigned __int64)&v63->is_avatar_dead >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v63->is_avatar_dead);
  is_avatar_dead = v63->is_avatar_dead;
  v58 = *(_BYTE *)(((unsigned __int64)&this->is_avatar_dead >> 3) + 0x7FFF8000);
  if ( v58 < 0 )
  {
    LOBYTE(p_level_finish_all_challenge_map) = v58 != 0;
    __asan_report_store1(&this->is_avatar_dead, p_level_finish_all_challenge_map, &this->is_avatar_dead);
  }
  this->is_avatar_dead = is_avatar_dead;
  std::map<data::RogueMonsterPoolDifficultyType,proto::RoguelikeSettleCoinInfo>::operator=(
    &this->finish_challenge_num_map,
    &v63->finish_challenge_num_map);
  std::map<data::RogueCellType,unsigned int>::operator=(&this->explore_cell_type_map, &v63->explore_cell_type_map);
  std::map<unsigned int,unsigned int>::operator=(&this->level_time_cost_map, &v63->level_time_cost_map);
  p_transaction = &v63->transaction;
  std::string::operator=(&this->transaction, &v63->transaction);
  if ( *(char *)(((unsigned __int64)&v63->has_temp_leaved >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v63->has_temp_leaved);
  has_temp_leaved = v63->has_temp_leaved;
  v61 = *(_BYTE *)(((unsigned __int64)&this->has_temp_leaved >> 3) + 0x7FFF8000);
  if ( v61 < 0 )
  {
    LOBYTE(p_transaction) = v61 != 0;
    __asan_report_store1(&this->has_temp_leaved, p_transaction, &this->has_temp_leaved);
  }
  this->has_temp_leaved = has_temp_leaved;
  return this;
};

// Line 53: range 0000000016D6994E-0000000016D69E9F
void __cdecl RogueStageData::RogueStageData(RogueStageData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->stage_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->coin_c_num >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_c_num >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->coin_c_num, v2, v3);
  this->coin_c_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_passed_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_passed_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_passed_level, v2, &this->max_passed_level);
  }
  this->max_passed_level = 0;
  v4 = ((_BYTE)this + 12) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_open, v4, v5);
  this->is_open = 0;
  v6 = ((_BYTE)this + 13) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_explored >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_explored >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_explored, v6, v7);
  this->is_explored = 0;
  v8 = ((_BYTE)this + 14) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->is_passed >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->is_passed >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_passed, v8, v9);
  this->is_passed = 0;
  v10 = ((_BYTE)this + 15) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->is_taken_first_reward >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&this->is_taken_first_reward >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_taken_first_reward, v10, v11);
  this->is_taken_first_reward = 0;
  if ( *(char *)(((unsigned __int64)&this->is_in_combat >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_in_combat, v10, &this->is_in_combat);
  this->is_in_combat = 0;
  v12 = (((_BYTE)this + 20) & 7u) + 3;
  v13 = (*(_BYTE *)(((unsigned __int64)&this->cur_level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_store4(&this->cur_level, v12, v13);
  this->cur_level = 0;
  if ( *(char *)(((unsigned __int64)&this->is_last_level_succ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_last_level_succ, v12, &this->is_last_level_succ);
  this->is_last_level_succ = 0;
  v14 = ((_BYTE)this + 25) & 7;
  v15 = (*(_BYTE *)(((unsigned __int64)&this->is_entering_next_level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&this->is_entering_next_level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_store1(&this->is_entering_next_level, v14, v15);
  this->is_entering_next_level = 0;
  v16 = (((_BYTE)this + 28) & 7u) + 3;
  v17 = (*(_BYTE *)(((unsigned __int64)&this->cached_coin_b_num >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cached_coin_b_num >> 3) + 0x7FFF8000));
  if ( (_BYTE)v17 )
    __asan_report_store4(&this->cached_coin_b_num, v16, v17);
  this->cached_coin_b_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cached_coin_c_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cached_coin_c_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cached_coin_c_num, v16, &this->cached_coin_c_num);
  }
  this->cached_coin_c_num = 0;
  std::map<data::RogueCreateGadgetType,unsigned int>::map(&this->dead_gadget_count_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_monster_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->kill_monster_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->kill_monster_num, v16, &this->kill_monster_num);
  }
  this->kill_monster_num = 0;
  std::map<unsigned int,unsigned int>::map(&this->level_explore_cell_count_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_element_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_element_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_element_count, v16, &this->avatar_element_count);
  }
  this->avatar_element_count = 0;
  v18 = (((_BYTE)this - 108) & 7u) + 3;
  v19 = (*(_BYTE *)(((unsigned __int64)&this->avatar_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_count >> 3) + 0x7FFF8000));
  if ( (_BYTE)v19 )
    __asan_report_store4(&this->avatar_count, v18, v19);
  this->avatar_count = 0;
  if ( *(char *)(((unsigned __int64)&this->is_used_spring >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_used_spring, v18, &this->is_used_spring);
  this->is_used_spring = 0;
  std::map<unsigned int,bool>::map(&this->level_finish_all_challenge_map);
  if ( *(char *)(((unsigned __int64)&this->is_avatar_dead >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_avatar_dead, v18, &this->is_avatar_dead);
  this->is_avatar_dead = 0;
  std::map<data::RogueMonsterPoolDifficultyType,proto::RoguelikeSettleCoinInfo>::map(&this->finish_challenge_num_map);
  std::map<data::RogueCellType,unsigned int>::map(&this->explore_cell_type_map);
  std::map<unsigned int,unsigned int>::map(&this->level_time_cost_map);
  std::string::basic_string(&this->transaction);
  if ( *(char *)(((unsigned __int64)&this->has_temp_leaved >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->has_temp_leaved, v18, &this->has_temp_leaved);
  this->has_temp_leaved = 0;
};

// Line 53: range 0000000016F9EEBE-0000000016F9F8F9
void __cdecl RogueStageData::RogueStageData(RogueStageData *const this, RogueStageData *a2)
{
  uint32_t stage_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t coin_c_num; // ecx
  char v6; // dl
  __int64 v7; // rdx
  uint32_t max_passed_level; // ecx
  char v9; // al
  __int64 v10; // rsi
  bool is_open; // cl
  char v12; // dl
  __int64 v13; // rdx
  __int64 v14; // rsi
  bool is_explored; // cl
  char v16; // dl
  __int64 v17; // rdx
  __int64 v18; // rsi
  bool is_passed; // cl
  char v20; // dl
  __int64 v21; // rdx
  __int64 v22; // rsi
  bool is_taken_first_reward; // cl
  char v24; // dl
  __int64 v25; // rdx
  bool is_in_combat; // cl
  char v27; // al
  __int64 v28; // rsi
  uint32_t cur_level; // ecx
  char v30; // dl
  __int64 v31; // rdx
  bool is_last_level_succ; // cl
  char v33; // al
  __int64 v34; // rsi
  bool is_entering_next_level; // cl
  char v36; // dl
  __int64 v37; // rdx
  __int64 v38; // rsi
  uint32_t cached_coin_b_num; // ecx
  char v40; // dl
  __int64 v41; // rdx
  uint32_t cached_coin_c_num; // ecx
  char v43; // al
  std::map<data::RogueCreateGadgetType,unsigned int> *p_dead_gadget_count_map; // rsi
  uint32_t kill_monster_num; // ecx
  char v46; // al
  std::map<unsigned int,unsigned int> *p_level_explore_cell_count_map; // rsi
  uint32_t avatar_element_count; // ecx
  char v49; // al
  __int64 v50; // rsi
  uint32_t avatar_count; // ecx
  char v52; // dl
  __int64 v53; // rdx
  bool is_used_spring; // cl
  char v55; // al
  std::map<unsigned int,bool> *p_level_finish_all_challenge_map; // rsi
  bool is_avatar_dead; // cl
  char v58; // al
  std::string *p_transaction; // rsi
  bool has_temp_leaved; // cl
  char v61; // al
  RogueStageData *v62; // [rsp+0h] [rbp-10h]

  v62 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  stage_id = a2->stage_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, this);
  }
  this->stage_id = stage_id;
  v4 = (((_BYTE)v62 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v62->coin_c_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v62 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v62->coin_c_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v62->coin_c_num);
  }
  coin_c_num = v62->coin_c_num;
  v6 = *(_BYTE *)(((unsigned __int64)&this->coin_c_num >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->coin_c_num, v4, v7);
  this->coin_c_num = coin_c_num;
  if ( *(_BYTE *)(((unsigned __int64)&v62->max_passed_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v62->max_passed_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v62->max_passed_level);
  }
  max_passed_level = v62->max_passed_level;
  v9 = *(_BYTE *)(((unsigned __int64)&this->max_passed_level >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v4) = v9 != 0;
    __asan_report_store4(&this->max_passed_level, v4, &this->max_passed_level);
  }
  this->max_passed_level = max_passed_level;
  v10 = ((_BYTE)v62 + 12) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&v62->is_open >> 3) + 0x7FFF8000) != 0
    && (char)v10 >= *(_BYTE *)(((unsigned __int64)&v62->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v62->is_open);
  }
  is_open = v62->is_open;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this + 12) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->is_open, v10, v13);
  this->is_open = is_open;
  v14 = ((_BYTE)v62 + 13) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&v62->is_explored >> 3) + 0x7FFF8000) != 0
    && (char)v14 >= *(_BYTE *)(((unsigned __int64)&v62->is_explored >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v62->is_explored);
  }
  is_explored = v62->is_explored;
  v16 = *(_BYTE *)(((unsigned __int64)&this->is_explored >> 3) + 0x7FFF8000);
  LOBYTE(v14) = v16 != 0;
  v17 = (v16 != 0) & (unsigned __int8)((((unsigned __int8)this + 13) & 7) >= v16);
  if ( (_BYTE)v17 )
    __asan_report_store1(&this->is_explored, v14, v17);
  this->is_explored = is_explored;
  v18 = ((_BYTE)v62 + 14) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&v62->is_passed >> 3) + 0x7FFF8000) != 0
    && (char)v18 >= *(_BYTE *)(((unsigned __int64)&v62->is_passed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v62->is_passed);
  }
  is_passed = v62->is_passed;
  v20 = *(_BYTE *)(((unsigned __int64)&this->is_passed >> 3) + 0x7FFF8000);
  LOBYTE(v18) = v20 != 0;
  v21 = (v20 != 0) & (unsigned __int8)((((unsigned __int8)this + 14) & 7) >= v20);
  if ( (_BYTE)v21 )
    __asan_report_store1(&this->is_passed, v18, v21);
  this->is_passed = is_passed;
  v22 = ((_BYTE)v62 + 15) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&v62->is_taken_first_reward >> 3) + 0x7FFF8000) != 0
    && (char)v22 >= *(_BYTE *)(((unsigned __int64)&v62->is_taken_first_reward >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v62->is_taken_first_reward);
  }
  is_taken_first_reward = v62->is_taken_first_reward;
  v24 = *(_BYTE *)(((unsigned __int64)&this->is_taken_first_reward >> 3) + 0x7FFF8000);
  LOBYTE(v22) = v24 != 0;
  v25 = (v24 != 0) & (unsigned __int8)((((unsigned __int8)this + 15) & 7) >= v24);
  if ( (_BYTE)v25 )
    __asan_report_store1(&this->is_taken_first_reward, v22, v25);
  this->is_taken_first_reward = is_taken_first_reward;
  if ( *(char *)(((unsigned __int64)&v62->is_in_combat >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v62->is_in_combat);
  is_in_combat = v62->is_in_combat;
  v27 = *(_BYTE *)(((unsigned __int64)&this->is_in_combat >> 3) + 0x7FFF8000);
  if ( v27 < 0 )
  {
    LOBYTE(v22) = v27 != 0;
    __asan_report_store1(&this->is_in_combat, v22, &this->is_in_combat);
  }
  this->is_in_combat = is_in_combat;
  v28 = (((_BYTE)v62 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v62->cur_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v62 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v62->cur_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v62->cur_level);
  }
  cur_level = v62->cur_level;
  v30 = *(_BYTE *)(((unsigned __int64)&this->cur_level >> 3) + 0x7FFF8000);
  LOBYTE(v28) = v30 != 0;
  v31 = (v30 != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= v30);
  if ( (_BYTE)v31 )
    __asan_report_store4(&this->cur_level, v28, v31);
  this->cur_level = cur_level;
  if ( *(char *)(((unsigned __int64)&v62->is_last_level_succ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v62->is_last_level_succ);
  is_last_level_succ = v62->is_last_level_succ;
  v33 = *(_BYTE *)(((unsigned __int64)&this->is_last_level_succ >> 3) + 0x7FFF8000);
  if ( v33 < 0 )
  {
    LOBYTE(v28) = v33 != 0;
    __asan_report_store1(&this->is_last_level_succ, v28, &this->is_last_level_succ);
  }
  this->is_last_level_succ = is_last_level_succ;
  v34 = ((_BYTE)v62 + 25) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&v62->is_entering_next_level >> 3) + 0x7FFF8000) != 0
    && (char)v34 >= *(_BYTE *)(((unsigned __int64)&v62->is_entering_next_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v62->is_entering_next_level);
  }
  is_entering_next_level = v62->is_entering_next_level;
  v36 = *(_BYTE *)(((unsigned __int64)&this->is_entering_next_level >> 3) + 0x7FFF8000);
  LOBYTE(v34) = v36 != 0;
  v37 = (v36 != 0) & (unsigned __int8)((((unsigned __int8)this + 25) & 7) >= v36);
  if ( (_BYTE)v37 )
    __asan_report_store1(&this->is_entering_next_level, v34, v37);
  this->is_entering_next_level = is_entering_next_level;
  v38 = (((_BYTE)v62 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v62->cached_coin_b_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v62 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v62->cached_coin_b_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v62->cached_coin_b_num);
  }
  cached_coin_b_num = v62->cached_coin_b_num;
  v40 = *(_BYTE *)(((unsigned __int64)&this->cached_coin_b_num >> 3) + 0x7FFF8000);
  LOBYTE(v38) = v40 != 0;
  v41 = (v40 != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= v40);
  if ( (_BYTE)v41 )
    __asan_report_store4(&this->cached_coin_b_num, v38, v41);
  this->cached_coin_b_num = cached_coin_b_num;
  if ( *(_BYTE *)(((unsigned __int64)&v62->cached_coin_c_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v62->cached_coin_c_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v62->cached_coin_c_num);
  }
  cached_coin_c_num = v62->cached_coin_c_num;
  v43 = *(_BYTE *)(((unsigned __int64)&this->cached_coin_c_num >> 3) + 0x7FFF8000);
  if ( v43 != 0 && v43 <= 3 )
  {
    LOBYTE(v38) = v43 != 0;
    __asan_report_store4(&this->cached_coin_c_num, v38, &this->cached_coin_c_num);
  }
  this->cached_coin_c_num = cached_coin_c_num;
  p_dead_gadget_count_map = &v62->dead_gadget_count_map;
  std::map<data::RogueCreateGadgetType,unsigned int>::map(&this->dead_gadget_count_map, &v62->dead_gadget_count_map);
  if ( *(_BYTE *)(((unsigned __int64)&v62->kill_monster_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v62->kill_monster_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v62->kill_monster_num);
  }
  kill_monster_num = v62->kill_monster_num;
  v46 = *(_BYTE *)(((unsigned __int64)&this->kill_monster_num >> 3) + 0x7FFF8000);
  if ( v46 != 0 && v46 <= 3 )
  {
    LOBYTE(p_dead_gadget_count_map) = v46 != 0;
    __asan_report_store4(&this->kill_monster_num, p_dead_gadget_count_map, &this->kill_monster_num);
  }
  this->kill_monster_num = kill_monster_num;
  p_level_explore_cell_count_map = &v62->level_explore_cell_count_map;
  std::map<unsigned int,unsigned int>::map(&this->level_explore_cell_count_map, &v62->level_explore_cell_count_map);
  if ( *(_BYTE *)(((unsigned __int64)&v62->avatar_element_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v62->avatar_element_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v62->avatar_element_count);
  }
  avatar_element_count = v62->avatar_element_count;
  v49 = *(_BYTE *)(((unsigned __int64)&this->avatar_element_count >> 3) + 0x7FFF8000);
  if ( v49 != 0 && v49 <= 3 )
  {
    LOBYTE(p_level_explore_cell_count_map) = v49 != 0;
    __asan_report_store4(&this->avatar_element_count, p_level_explore_cell_count_map, &this->avatar_element_count);
  }
  this->avatar_element_count = avatar_element_count;
  v50 = (((_BYTE)v62 - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v62->avatar_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v62 - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v62->avatar_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v62->avatar_count);
  }
  avatar_count = v62->avatar_count;
  v52 = *(_BYTE *)(((unsigned __int64)&this->avatar_count >> 3) + 0x7FFF8000);
  LOBYTE(v50) = v52 != 0;
  v53 = (v52 != 0) & (unsigned __int8)((char)((((_BYTE)this - 108) & 7) + 3) >= v52);
  if ( (_BYTE)v53 )
    __asan_report_store4(&this->avatar_count, v50, v53);
  this->avatar_count = avatar_count;
  if ( *(char *)(((unsigned __int64)&v62->is_used_spring >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v62->is_used_spring);
  is_used_spring = v62->is_used_spring;
  v55 = *(_BYTE *)(((unsigned __int64)&this->is_used_spring >> 3) + 0x7FFF8000);
  if ( v55 < 0 )
  {
    LOBYTE(v50) = v55 != 0;
    __asan_report_store1(&this->is_used_spring, v50, &this->is_used_spring);
  }
  this->is_used_spring = is_used_spring;
  p_level_finish_all_challenge_map = &v62->level_finish_all_challenge_map;
  std::map<unsigned int,bool>::map(&this->level_finish_all_challenge_map, &v62->level_finish_all_challenge_map);
  if ( *(char *)(((unsigned __int64)&v62->is_avatar_dead >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v62->is_avatar_dead);
  is_avatar_dead = v62->is_avatar_dead;
  v58 = *(_BYTE *)(((unsigned __int64)&this->is_avatar_dead >> 3) + 0x7FFF8000);
  if ( v58 < 0 )
  {
    LOBYTE(p_level_finish_all_challenge_map) = v58 != 0;
    __asan_report_store1(&this->is_avatar_dead, p_level_finish_all_challenge_map, &this->is_avatar_dead);
  }
  this->is_avatar_dead = is_avatar_dead;
  std::map<data::RogueMonsterPoolDifficultyType,proto::RoguelikeSettleCoinInfo>::map(
    &this->finish_challenge_num_map,
    &v62->finish_challenge_num_map);
  std::map<data::RogueCellType,unsigned int>::map(&this->explore_cell_type_map, &v62->explore_cell_type_map);
  std::map<unsigned int,unsigned int>::map(&this->level_time_cost_map, &v62->level_time_cost_map);
  p_transaction = &v62->transaction;
  std::string::basic_string(&this->transaction, &v62->transaction);
  if ( *(char *)(((unsigned __int64)&v62->has_temp_leaved >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v62->has_temp_leaved);
  has_temp_leaved = v62->has_temp_leaved;
  v61 = *(_BYTE *)(((unsigned __int64)&this->has_temp_leaved >> 3) + 0x7FFF8000);
  if ( v61 < 0 )
  {
    LOBYTE(p_transaction) = v61 != 0;
    __asan_report_store1(&this->has_temp_leaved, p_transaction, &this->has_temp_leaved);
  }
  this->has_temp_leaved = has_temp_leaved;
};

// Line 53: range 0000000016D69EA0-0000000016D69F28
void __cdecl RogueStageData::~RogueStageData(RogueStageData *const this)
{
  std::string::~string(&this->transaction);
  std::map<unsigned int,unsigned int>::~map(&this->level_time_cost_map);
  std::map<data::RogueCellType,unsigned int>::~map(&this->explore_cell_type_map);
  std::map<data::RogueMonsterPoolDifficultyType,proto::RoguelikeSettleCoinInfo>::~map(&this->finish_challenge_num_map);
  std::map<unsigned int,bool>::~map(&this->level_finish_all_challenge_map);
  std::map<unsigned int,unsigned int>::~map(&this->level_explore_cell_count_map);
  std::map<data::RogueCreateGadgetType,unsigned int>::~map(&this->dead_gadget_count_map);
};

// Line 96: range 0000000015A1B900-0000000015A1BA18
void __fastcall RogueStageData::setLevelExploreCellCount(RogueStageData *const this, uint32_t level_id, uint32_t count)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  char *v6; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v7; // rax
  _DWORD *v8; // rdx
  char v9; // cl
  char v11[96]; // [rsp+10h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 11 level_id:96";
  *(_QWORD *)(v3 + 16) = RogueStageData::setLevelExploreCellCount;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = level_id;
  v6 = (char *)(v3 + 32);
  v7 = std::map<unsigned int,unsigned int>::operator[](
         &this->level_explore_cell_count_map,
         (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 32));
  v8 = v7;
  v9 = *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000);
  if ( v9 != 0 && (char)(((unsigned __int8)v7 & 7) + 3) >= v9 )
  {
    LOBYTE(v6) = v9 != 0;
    __asan_report_store4(v7, v6, v7);
  }
  *v8 = count;
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 103: range 0000000017094D50-0000000017094E2D
void __cdecl RoguelikeDungeonActivity::~RoguelikeDungeonActivity(RoguelikeDungeonActivity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RoguelikeDungeonActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::map<std::type_index,std::weak_ptr<Observer>>::~map(&this->event_observer_map_);
  RogueLikeDungeonRuntimeMgr::~RogueLikeDungeonRuntimeMgr(&this->roguelike_runtime_mgr_);
  RoguelikeMiscMgr::~RoguelikeMiscMgr(&this->roguelike_misc_mgr_);
  std::vector<unsigned int>::~vector(&this->equipped_rune_vec_);
  std::unordered_map<unsigned int,RogueStageData>::~unordered_map(&this->stage_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->rune_set_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->shikigami_map_);
  std::unordered_map<proto::VirtualItem,unsigned int>::~unordered_map(&this->activity_coin_map_);
  BaseActivity::~BaseActivity(this);
};

// Line 103: range 0000000017094E2E-0000000017094E58
void __cdecl RoguelikeDungeonActivity::~RoguelikeDungeonActivity(RoguelikeDungeonActivity *const this)
{
  RoguelikeDungeonActivity::~RoguelikeDungeonActivity(this);
  operator delete(this, 0xE98uLL);
};

// Line 108: range 0000000017025CAC-0000000017025FE9
void __fastcall ZN24RoguelikeDungeonActivityCI212BaseActivityER6Playerj(
        RoguelikeDungeonActivity *const this,
        Player *a2,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int (**v6)(...); // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  RoguelikeMiscMgr *p_roguelike_misc_mgr; // rcx
  RogueLikeDungeonRuntimeMgr *p_roguelike_runtime_mgr; // rcx
  char v12[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN24RoguelikeDungeonActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'RoguelikeDungeonActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DescribalBase = v6;
  std::unordered_map<proto::VirtualItem,unsigned int>::unordered_map(&this->activity_coin_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->shikigami_map_);
  std::unordered_set<unsigned int>::unordered_set(&this->rune_set_);
  std::unordered_map<unsigned int,RogueStageData>::unordered_map(&this->stage_map_);
  std::vector<unsigned int>::vector(&this->equipped_rune_vec_);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_, a2, &this->is_content_closed_);
  this->is_content_closed_ = 0;
  v7 = (((_BYTE)this - 92) & 7u) + 3;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->init_world_level_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->init_world_level_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->init_world_level_, v7, v8);
  this->init_world_level_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->trans_no_count_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->trans_no_count_, v7);
  this->trans_no_count_ = 0LL;
  p_roguelike_misc_mgr = &this->roguelike_misc_mgr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  RoguelikeMiscMgr::RoguelikeMiscMgr(p_roguelike_misc_mgr, this->player_, this);
  p_roguelike_runtime_mgr = &this->roguelike_runtime_mgr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  RogueLikeDungeonRuntimeMgr::RogueLikeDungeonRuntimeMgr(p_roguelike_runtime_mgr, this->player_, this);
  std::map<std::type_index,std::weak_ptr<Observer>>::map(&this->event_observer_map_);
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 111: range 000000001384A5F1-000000001384A5FB
data::NewActivityType __cdecl RoguelikeDungeonActivity::getActivityStaticType()
{
  return 2201;
};

// Line 139: range 000000001384A5FC-000000001384A60F
RoguelikeMiscMgr *__cdecl RoguelikeDungeonActivity::getRoguelikeMiscMgr(RoguelikeDungeonActivity *const this)
{
  return &this->roguelike_misc_mgr_;
};

// Line 154: range 0000000015A1BA52-0000000015A1BA65
const std::unordered_map<unsigned int,unsigned int> *__cdecl RoguelikeDungeonActivity::getShikigamiMap(
        const RoguelikeDungeonActivity *const this)
{
  return &this->shikigami_map_;
};

// Line 164: range 000000001384A610-000000001384A623
RogueLikeDungeonRuntimeMgr *__cdecl RoguelikeDungeonActivity::getRogueDungeonRuntimeMgr(
        RoguelikeDungeonActivity *const this)
{
  return &this->roguelike_runtime_mgr_;
};

// Line 206: range 0000000017D71502-0000000017D71558
// local variable allocation has failed, the output may be wrong!
void __cdecl RoguelikeDungeonActivity::setIsContentClosed(
        RoguelikeDungeonActivity *const this,
        bool is_content_closed__out)
{
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_, is_content_closed__out, &this->is_content_closed_);
  this->is_content_closed_ = is_content_closed__out;
};

// Line 207: range 0000000015A1BA66-0000000015A1BABA
uint32_t __cdecl RoguelikeDungeonActivity::getInitWorldLevel(const RoguelikeDungeonActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->init_world_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->init_world_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->init_world_level_);
  }
  return this->init_world_level_;
};
