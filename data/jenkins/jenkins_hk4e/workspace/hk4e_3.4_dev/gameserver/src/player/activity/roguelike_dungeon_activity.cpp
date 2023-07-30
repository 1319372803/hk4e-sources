// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/roguelike_dungeon_activity.cpp

// Line 36: range 0000000016C3FE32-0000000016C40BC8
int32_t __cdecl RogueStageData::fromBin(RogueStageData *const this, const proto::RogueStageBin *stage_bin)
{
  __int64 v2; // rdx
  char v3; // al
  uint32_t v4; // ecx
  char v5; // dl
  __int64 v6; // rdx
  __int64 v7; // rdx
  char v8; // al
  bool is_open; // cl
  char v10; // dl
  __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rdx
  char v14; // al
  bool is_passed; // cl
  char v16; // dl
  __int64 v17; // rdx
  bool is_taken_reward; // cl
  char v19; // dl
  __int64 v20; // rdx
  bool is_entering_next_level; // cl
  char v22; // dl
  __int64 v23; // rdx
  bool is_explored; // cl
  char v25; // dl
  __int64 v26; // rdx
  uint32_t v27; // ecx
  char v28; // dl
  __int64 v29; // rdx
  __int64 v30; // rdx
  char v31; // al
  google::protobuf::RepeatedPtrField<proto::Uint32PairBin>::const_iterator *p_for_end; // rsi
  google::protobuf::uint32 v33; // ebx
  std::map<data::RogueCreateGadgetType,unsigned int>::key_type *p_k; // rsi
  std::map<data::RogueCreateGadgetType,unsigned int>::mapped_type *v35; // rax
  google::protobuf::uint32 *v36; // rdx
  char v37; // cl
  __int64 v38; // rdx
  char v39; // al
  uint32_t v40; // ecx
  char v41; // dl
  __int64 v42; // rdx
  __int64 v43; // rdx
  char v44; // al
  unsigned int v45; // eax
  __int64 v46; // rdx
  char v47; // al
  unsigned int v48; // eax
  __int64 v49; // rdx
  char v50; // al
  unsigned __int64 v51; // rax
  unsigned int v52; // ebx
  const unsigned int *v53; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v54; // rax
  unsigned int *v55; // rdx
  char v56; // cl
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator *p_for_end_0; // rsi
  unsigned __int64 v58; // rax
  char v59; // bl
  const unsigned int *v60; // rsi
  std::map<unsigned int,bool>::mapped_type *v61; // rax
  _BYTE *v62; // rdx
  char v63; // cl
  uint32_t v64; // ecx
  char v65; // dl
  __int64 v66; // rdx
  std::map<data::RogueMonsterPoolDifficultyType,proto::RoguelikeSettleCoinInfo> *p_finish_challenge_num_map; // rcx
  google::protobuf::uint32 v68; // eax
  google::protobuf::uint32 v69; // eax
  google::protobuf::uint32 v70; // eax
  const std::string *v71; // rax
  unsigned __int64 v72; // rax
  unsigned int v73; // ebx
  std::map<data::RogueCellType,unsigned int> *p_explore_cell_type_map; // rcx
  std::map<data::RogueCreateGadgetType,unsigned int>::key_type *v75; // rsi
  std::map<data::RogueCellType,unsigned int>::mapped_type *v76; // rax
  unsigned int *v77; // rdx
  char v78; // cl
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator *v79; // rsi
  unsigned __int64 v80; // rax
  unsigned int v81; // ebx
  const unsigned int *v82; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v83; // rax
  unsigned int *v84; // rdx
  char v85; // cl
  unsigned int v86; // eax
  __int64 v87; // rdx
  char v88; // al
  const proto::RogueStageBin *stage_bina; // [rsp+0h] [rbp-E0h]
  std::map<data::RogueCreateGadgetType,unsigned int>::key_type __k; // [rsp+14h] [rbp-CCh] BYREF
  google::protobuf::RepeatedPtrField<proto::Uint32PairBin>::const_iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  google::protobuf::RepeatedPtrField<proto::Uint32PairBin>::const_iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  const google::protobuf::RepeatedPtrField<proto::Uint32PairBin> *__for_range; // [rsp+28h] [rbp-B8h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range_0; // [rsp+30h] [rbp-B0h]
  const google::protobuf::Map<unsigned int,bool> *__for_range_1; // [rsp+38h] [rbp-A8h]
  const google::protobuf::Map<unsigned int,proto::RogueFinishChallengeBin> *__for_range_2; // [rsp+40h] [rbp-A0h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range_3; // [rsp+48h] [rbp-98h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range_4; // [rsp+50h] [rbp-90h]
  const unsigned int *p_level_id_1; // [rsp+58h] [rbp-88h]
  const unsigned int *p_type; // [rsp+60h] [rbp-80h]
  const unsigned int *p_diff; // [rsp+68h] [rbp-78h]
  proto::RoguelikeSettleCoinInfo *info; // [rsp+70h] [rbp-70h]
  const unsigned int *p_level_id_0; // [rsp+78h] [rbp-68h]
  const unsigned int *p_level_id; // [rsp+80h] [rbp-60h]
  const proto::Uint32PairBin *bin_pair; // [rsp+88h] [rbp-58h]
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin_0; // [rsp+90h] [rbp-50h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+B0h] [rbp-30h] BYREF

  stage_bina = stage_bin;
  v2 = proto::RogueStageBin::stage_id(stage_bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(stage_bin) = v3 != 0;
    __asan_report_store4(this, stage_bin, v2);
  }
  this->stage_id = v2;
  v4 = proto::RogueStageBin::coin_c_num(stage_bina);
  v5 = *(_BYTE *)(((unsigned __int64)&this->coin_c_num >> 3) + 0x7FFF8000);
  LOBYTE(stage_bin) = v5 != 0;
  v6 = (v5 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v5);
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->coin_c_num, stage_bin, v6);
  this->coin_c_num = v4;
  v7 = proto::RogueStageBin::max_passed_level(stage_bina);
  v8 = *(_BYTE *)(((unsigned __int64)&this->max_passed_level >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(stage_bin) = v8 != 0;
    __asan_report_store4(&this->max_passed_level, stage_bin, v7);
  }
  this->max_passed_level = v7;
  is_open = proto::RogueStageBin::is_open(stage_bina);
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000);
  LOBYTE(stage_bin) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this + 12) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_open, stage_bin, v11);
  this->is_open = is_open;
  LOBYTE(v12) = proto::RogueStageBin::is_in_combat(stage_bina);
  v13 = v12;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_in_combat >> 3) + 0x7FFF8000);
  if ( v14 < 0 )
  {
    LOBYTE(stage_bin) = v14 != 0;
    __asan_report_store1(&this->is_in_combat, stage_bin, v13);
  }
  this->is_in_combat = v13;
  is_passed = proto::RogueStageBin::is_passed(stage_bina);
  v16 = *(_BYTE *)(((unsigned __int64)&this->is_passed >> 3) + 0x7FFF8000);
  LOBYTE(stage_bin) = v16 != 0;
  v17 = (v16 != 0) & (unsigned __int8)((((unsigned __int8)this + 14) & 7) >= v16);
  if ( (_BYTE)v17 )
    __asan_report_store1(&this->is_passed, stage_bin, v17);
  this->is_passed = is_passed;
  is_taken_reward = proto::RogueStageBin::is_taken_reward(stage_bina);
  v19 = *(_BYTE *)(((unsigned __int64)&this->is_taken_first_reward >> 3) + 0x7FFF8000);
  LOBYTE(stage_bin) = v19 != 0;
  v20 = (v19 != 0) & (unsigned __int8)((((unsigned __int8)this + 15) & 7) >= v19);
  if ( (_BYTE)v20 )
    __asan_report_store1(&this->is_taken_first_reward, stage_bin, v20);
  this->is_taken_first_reward = is_taken_reward;
  is_entering_next_level = proto::RogueStageBin::is_entering_next_level(stage_bina);
  v22 = *(_BYTE *)(((unsigned __int64)&this->is_entering_next_level >> 3) + 0x7FFF8000);
  LOBYTE(stage_bin) = v22 != 0;
  v23 = (v22 != 0) & (unsigned __int8)((((unsigned __int8)this + 25) & 7) >= v22);
  if ( (_BYTE)v23 )
    __asan_report_store1(&this->is_entering_next_level, stage_bin, v23);
  this->is_entering_next_level = is_entering_next_level;
  is_explored = proto::RogueStageBin::is_explored(stage_bina);
  v25 = *(_BYTE *)(((unsigned __int64)&this->is_explored >> 3) + 0x7FFF8000);
  LOBYTE(stage_bin) = v25 != 0;
  v26 = (v25 != 0) & (unsigned __int8)((((unsigned __int8)this + 13) & 7) >= v25);
  if ( (_BYTE)v26 )
    __asan_report_store1(&this->is_explored, stage_bin, v26);
  this->is_explored = is_explored;
  v27 = proto::RogueStageBin::cached_coin_b_num(stage_bina);
  v28 = *(_BYTE *)(((unsigned __int64)&this->cached_coin_b_num >> 3) + 0x7FFF8000);
  LOBYTE(stage_bin) = v28 != 0;
  v29 = (v28 != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= v28);
  if ( (_BYTE)v29 )
    __asan_report_store4(&this->cached_coin_b_num, stage_bin, v29);
  this->cached_coin_b_num = v27;
  v30 = proto::RogueStageBin::cached_coin_c_num(stage_bina);
  v31 = *(_BYTE *)(((unsigned __int64)&this->cached_coin_c_num >> 3) + 0x7FFF8000);
  if ( v31 != 0 && v31 <= 3 )
  {
    LOBYTE(stage_bin) = v31 != 0;
    __asan_report_store4(&this->cached_coin_c_num, stage_bin, v30);
  }
  this->cached_coin_c_num = v30;
  __for_range = proto::RogueStageBin::dead_gadget_count_list(stage_bina);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::Uint32PairBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::Uint32PairBin>::end(__for_range).it_;
  while ( 1 )
  {
    p_for_end = &__for_end;
    if ( !google::protobuf::internal::RepeatedPtrIterator<proto::Uint32PairBin const>::operator!=(
            &__for_begin,
            &__for_end) )
      break;
    bin_pair = google::protobuf::internal::RepeatedPtrIterator<proto::Uint32PairBin const>::operator*(&__for_begin);
    v33 = proto::Uint32PairBin::value(bin_pair);
    __k = proto::Uint32PairBin::key(bin_pair);
    p_k = &__k;
    v35 = std::map<data::RogueCreateGadgetType,unsigned int>::operator[](&this->dead_gadget_count_map, &__k);
    v36 = v35;
    v37 = *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000);
    if ( v37 != 0 && (char)(((unsigned __int8)v35 & 7) + 3) >= v37 )
    {
      LOBYTE(p_k) = v37 != 0;
      __asan_report_store4(v35, p_k, v35);
    }
    *v36 = v33;
    google::protobuf::internal::RepeatedPtrIterator<proto::Uint32PairBin const>::operator++(&__for_begin);
  }
  v38 = proto::RogueStageBin::kill_monster_count(stage_bina);
  v39 = *(_BYTE *)(((unsigned __int64)&this->kill_monster_num >> 3) + 0x7FFF8000);
  if ( v39 != 0 && v39 <= 3 )
  {
    LOBYTE(p_for_end) = v39 != 0;
    __asan_report_store4(&this->kill_monster_num, p_for_end, v38);
  }
  this->kill_monster_num = v38;
  v40 = proto::RogueStageBin::avatar_count(stage_bina);
  v41 = *(_BYTE *)(((unsigned __int64)&this->avatar_count >> 3) + 0x7FFF8000);
  LOBYTE(p_for_end) = v41 != 0;
  v42 = (v41 != 0) & (unsigned __int8)((char)((((_BYTE)this - 108) & 7) + 3) >= v41);
  if ( (_BYTE)v42 )
    __asan_report_store4(&this->avatar_count, p_for_end, v42);
  this->avatar_count = v40;
  v43 = proto::RogueStageBin::avatar_element_count(stage_bina);
  v44 = *(_BYTE *)(((unsigned __int64)&this->avatar_element_count >> 3) + 0x7FFF8000);
  if ( v44 != 0 && v44 <= 3 )
  {
    LOBYTE(p_for_end) = v44 != 0;
    __asan_report_store4(&this->avatar_element_count, p_for_end, v43);
  }
  this->avatar_element_count = v43;
  LOBYTE(v45) = proto::RogueStageBin::is_used_spring(stage_bina);
  v46 = v45;
  v47 = *(_BYTE *)(((unsigned __int64)&this->is_used_spring >> 3) + 0x7FFF8000);
  if ( v47 < 0 )
  {
    LOBYTE(p_for_end) = v47 != 0;
    __asan_report_store1(&this->is_used_spring, p_for_end, v46);
  }
  this->is_used_spring = v46;
  LOBYTE(v48) = proto::RogueStageBin::is_avatar_dead(stage_bina);
  v49 = v48;
  v50 = *(_BYTE *)(((unsigned __int64)&this->is_avatar_dead >> 3) + 0x7FFF8000);
  if ( v50 < 0 )
  {
    LOBYTE(p_for_end) = v50 != 0;
    __asan_report_store1(&this->is_avatar_dead, p_for_end, v49);
  }
  this->is_avatar_dead = v49;
  __for_range_0 = proto::RogueStageBin::level_explore_cell_count_map(stage_bina);
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin_0, __for_range_0);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end_0, __for_range_0);
  while ( google::protobuf::operator!=(&__for_begin_0, &__for_end_0) )
  {
    p_level_id = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin_0);
    v51 = (unsigned __int64)(p_level_id + 1);
    if ( *(_BYTE *)((v51 >> 3) + 0x7FFF8000) != 0 && (char)((v51 & 7) + 3) >= *(_BYTE *)((v51 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v51);
    v52 = p_level_id[1];
    v53 = p_level_id;
    v54 = std::map<unsigned int,unsigned int>::operator[](&this->level_explore_cell_count_map, p_level_id);
    v55 = v54;
    v56 = *(_BYTE *)(((unsigned __int64)v54 >> 3) + 0x7FFF8000);
    if ( v56 != 0 && (char)(((unsigned __int8)v54 & 7) + 3) >= v56 )
    {
      LOBYTE(v53) = v56 != 0;
      __asan_report_store4(v54, v53, v54);
    }
    *v55 = v52;
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin_0);
  }
  __for_range_1 = proto::RogueStageBin::level_finish_all_challenge_map(stage_bina);
  google::protobuf::Map<unsigned int,bool>::begin(
    (google::protobuf::Map<unsigned int,bool>::const_iterator *)&__for_begin_0,
    __for_range_1);
  google::protobuf::Map<unsigned int,bool>::end(
    (google::protobuf::Map<unsigned int,bool>::const_iterator *)&__for_end_0,
    __for_range_1);
  while ( 1 )
  {
    p_for_end_0 = &__for_end_0;
    if ( !google::protobuf::operator!=(
            (const google::protobuf::Map<unsigned int,bool>::const_iterator *)&__for_begin_0,
            (const google::protobuf::Map<unsigned int,bool>::const_iterator *)&__for_end_0) )
      break;
    p_level_id_0 = (const unsigned int *)google::protobuf::Map<unsigned int,bool>::const_iterator::operator*((const google::protobuf::Map<unsigned int,bool>::const_iterator *const)&__for_begin_0);
    v58 = (unsigned __int64)(p_level_id_0 + 1);
    if ( *(_BYTE *)((v58 >> 3) + 0x7FFF8000) != 0 && (char)(v58 & 7) >= *(_BYTE *)((v58 >> 3) + 0x7FFF8000) )
      __asan_report_load1(v58);
    v59 = *((_BYTE *)p_level_id_0 + 4);
    v60 = p_level_id_0;
    v61 = std::map<unsigned int,bool>::operator[](&this->level_finish_all_challenge_map, p_level_id_0);
    v62 = v61;
    v63 = *(_BYTE *)(((unsigned __int64)v61 >> 3) + 0x7FFF8000);
    if ( v63 != 0 && ((unsigned __int8)v61 & 7) >= v63 )
    {
      LOBYTE(v60) = v63 != 0;
      __asan_report_store1(v61, v60, v61);
    }
    *v62 = v59;
    google::protobuf::Map<unsigned int,bool>::const_iterator::operator++((google::protobuf::Map<unsigned int,bool>::const_iterator *const)&__for_begin_0);
  }
  v64 = proto::RogueStageBin::cur_level_index(stage_bina);
  v65 = *(_BYTE *)(((unsigned __int64)&this->cur_level >> 3) + 0x7FFF8000);
  LOBYTE(p_for_end_0) = v65 != 0;
  v66 = (v65 != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= v65);
  if ( (_BYTE)v66 )
    __asan_report_store4(&this->cur_level, p_for_end_0, v66);
  this->cur_level = v64;
  std::map<data::RogueMonsterPoolDifficultyType,proto::RoguelikeSettleCoinInfo>::clear(&this->finish_challenge_num_map);
  __for_range_2 = proto::RogueStageBin::finish_challenge_bin_map(stage_bina);
  google::protobuf::Map<unsigned int,proto::RogueFinishChallengeBin>::begin(
    (google::protobuf::Map<unsigned int,proto::RogueFinishChallengeBin>::const_iterator *)&__for_begin_0,
    __for_range_2);
  google::protobuf::Map<unsigned int,proto::RogueFinishChallengeBin>::end(
    (google::protobuf::Map<unsigned int,proto::RogueFinishChallengeBin>::const_iterator *)&__for_end_0,
    __for_range_2);
  while ( google::protobuf::operator!=(
            (const google::protobuf::Map<unsigned int,proto::RogueFinishChallengeBin>::const_iterator *)&__for_begin_0,
            (const google::protobuf::Map<unsigned int,proto::RogueFinishChallengeBin>::const_iterator *)&__for_end_0) )
  {
    p_diff = (const unsigned int *)google::protobuf::Map<unsigned int,proto::RogueFinishChallengeBin>::const_iterator::operator*((const google::protobuf::Map<unsigned int,proto::RogueFinishChallengeBin>::const_iterator *const)&__for_begin_0);
    p_finish_challenge_num_map = &this->finish_challenge_num_map;
    if ( *(_BYTE *)(((unsigned __int64)p_diff >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)p_diff >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(p_diff);
    }
    __k = *p_diff;
    info = std::map<data::RogueMonsterPoolDifficultyType,proto::RoguelikeSettleCoinInfo>::operator[](
             p_finish_challenge_num_map,
             (std::map<data::RogueMonsterPoolDifficultyType,proto::RoguelikeSettleCoinInfo>::key_type *)&__k);
    v68 = proto::RogueFinishChallengeBin::cell_num((const proto::RogueFinishChallengeBin *const)(p_diff + 2));
    proto::RoguelikeSettleCoinInfo::set_cell_num(info, v68);
    v69 = proto::RogueFinishChallengeBin::coin_b((const proto::RogueFinishChallengeBin *const)(p_diff + 2));
    proto::RoguelikeSettleCoinInfo::set_coin_b(info, v69);
    v70 = proto::RogueFinishChallengeBin::coin_c((const proto::RogueFinishChallengeBin *const)(p_diff + 2));
    proto::RoguelikeSettleCoinInfo::set_coin_c(info, v70);
    google::protobuf::Map<unsigned int,proto::RogueFinishChallengeBin>::const_iterator::operator++((google::protobuf::Map<unsigned int,proto::RogueFinishChallengeBin>::const_iterator *const)&__for_begin_0);
  }
  v71 = proto::RogueStageBin::transaction[abi:cxx11](stage_bina);
  std::string::operator=(&this->transaction, v71);
  std::map<data::RogueCellType,unsigned int>::clear(&this->explore_cell_type_map);
  __for_range_3 = proto::RogueStageBin::explored_cell_type_map(stage_bina);
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin_0, __for_range_3);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end_0, __for_range_3);
  while ( google::protobuf::operator!=(&__for_begin_0, &__for_end_0) )
  {
    p_type = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin_0);
    v72 = (unsigned __int64)(p_type + 1);
    if ( *(_BYTE *)((v72 >> 3) + 0x7FFF8000) != 0 && (char)((v72 & 7) + 3) >= *(_BYTE *)((v72 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v72);
    v73 = p_type[1];
    p_explore_cell_type_map = &this->explore_cell_type_map;
    if ( *(_BYTE *)(((unsigned __int64)p_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_type);
    }
    __k = *p_type;
    v75 = &__k;
    v76 = std::map<data::RogueCellType,unsigned int>::operator[](
            p_explore_cell_type_map,
            (std::map<data::RogueCellType,unsigned int>::key_type *)&__k);
    v77 = v76;
    v78 = *(_BYTE *)(((unsigned __int64)v76 >> 3) + 0x7FFF8000);
    if ( v78 != 0 && (char)(((unsigned __int8)v76 & 7) + 3) >= v78 )
    {
      LOBYTE(v75) = v78 != 0;
      __asan_report_store4(v76, v75, v76);
    }
    *v77 = v73;
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin_0);
  }
  std::map<unsigned int,unsigned int>::clear(&this->level_time_cost_map);
  __for_range_4 = proto::RogueStageBin::level_time_cost_map(stage_bina);
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin_0, __for_range_4);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end_0, __for_range_4);
  while ( 1 )
  {
    v79 = &__for_end_0;
    if ( !google::protobuf::operator!=(&__for_begin_0, &__for_end_0) )
      break;
    p_level_id_1 = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin_0);
    v80 = (unsigned __int64)(p_level_id_1 + 1);
    if ( *(_BYTE *)((v80 >> 3) + 0x7FFF8000) != 0 && (char)((v80 & 7) + 3) >= *(_BYTE *)((v80 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v80);
    v81 = p_level_id_1[1];
    v82 = p_level_id_1;
    v83 = std::map<unsigned int,unsigned int>::operator[](&this->level_time_cost_map, p_level_id_1);
    v84 = v83;
    v85 = *(_BYTE *)(((unsigned __int64)v83 >> 3) + 0x7FFF8000);
    if ( v85 != 0 && (char)(((unsigned __int8)v83 & 7) + 3) >= v85 )
    {
      LOBYTE(v82) = v85 != 0;
      __asan_report_store4(v83, v82, v83);
    }
    *v84 = v81;
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin_0);
  }
  LOBYTE(v86) = proto::RogueStageBin::has_temp_leaved(stage_bina);
  v87 = v86;
  v88 = *(_BYTE *)(((unsigned __int64)&this->has_temp_leaved >> 3) + 0x7FFF8000);
  if ( v88 < 0 )
  {
    LOBYTE(v79) = v88 != 0;
    __asan_report_store1(&this->has_temp_leaved, v79, v87);
  }
  this->has_temp_leaved = v87;
  return 0;
};

// Line 90: range 0000000016C40BCA-0000000016C41A9C
int32_t __cdecl RogueStageData::toBin(const RogueStageData *const this, proto::RogueStageBin *stage_bin)
{
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v2; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v3; // ebx
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v4; // rsi
  unsigned int *v5; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v6; // rdx
  char v7; // cl
  std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *v8; // rax
  std::tuple_element<1,const std::pair<unsigned int const,bool> >::type v9; // bl
  std::tuple_element<0,const std::pair<unsigned int const,bool> >::type *v10; // rsi
  bool *v11; // rax
  std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *v12; // rdx
  char v13; // cl
  google::protobuf::uint32 v14; // eax
  google::protobuf::uint32 v15; // eax
  google::protobuf::uint32 v16; // eax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v17; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v18; // ebx
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v19; // rsi
  unsigned int *v20; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v21; // rdx
  char v22; // cl
  std::tuple_element<1,const std::pair<const data::RogueCellType,unsigned int> >::type *v23; // rax
  std::tuple_element<1,const std::pair<const data::RogueCellType,unsigned int> >::type v24; // ebx
  google::protobuf::Map<unsigned int,proto::RogueFinishChallengeBin>::key_type *p_key; // rsi
  unsigned int *v26; // rax
  std::tuple_element<1,const std::pair<const data::RogueCellType,unsigned int> >::type *v27; // rdx
  char v28; // cl
  google::protobuf::Map<unsigned int,proto::RogueFinishChallengeBin>::key_type key; // [rsp+14h] [rbp-11Ch] BYREF
  std::map<data::RogueCreateGadgetType,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-118h] BYREF
  std::map<data::RogueCreateGadgetType,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-110h] BYREF
  const std::map<data::RogueCreateGadgetType,unsigned int> *__for_range; // [rsp+28h] [rbp-108h]
  google::protobuf::Map<unsigned int,unsigned int> *level_cell_map_bin; // [rsp+30h] [rbp-100h]
  const std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+38h] [rbp-F8h]
  google::protobuf::Map<unsigned int,bool> *level_challenge_finish_map_bin; // [rsp+40h] [rbp-F0h]
  const std::map<unsigned int,bool> *__for_range_1; // [rsp+48h] [rbp-E8h]
  google::protobuf::Map<unsigned int,proto::RogueFinishChallengeBin> *finish_level_bin_map; // [rsp+50h] [rbp-E0h]
  const std::map<data::RogueMonsterPoolDifficultyType,proto::RoguelikeSettleCoinInfo> *__for_range_2; // [rsp+58h] [rbp-D8h]
  google::protobuf::Map<unsigned int,unsigned int> *level_time_cost_map_bin; // [rsp+60h] [rbp-D0h]
  const std::map<unsigned int,unsigned int> *__for_range_3; // [rsp+68h] [rbp-C8h]
  google::protobuf::Map<unsigned int,unsigned int> *explored_cell_type_map_bin; // [rsp+70h] [rbp-C0h]
  const std::map<data::RogueCellType,unsigned int> *__for_range_4; // [rsp+78h] [rbp-B8h]
  const std::pair<const data::RogueCellType,unsigned int> *v45; // [rsp+80h] [rbp-B0h]
  std::tuple_element<0,const std::pair<const data::RogueCellType,unsigned int> >::type *cell_type; // [rsp+88h] [rbp-A8h]
  std::tuple_element<1,const std::pair<const data::RogueCellType,unsigned int> >::type *num_0; // [rsp+90h] [rbp-A0h]
  const std::pair<unsigned int const,unsigned int> *v48; // [rsp+98h] [rbp-98h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *level_id_1; // [rsp+A0h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *time_cost; // [rsp+A8h] [rbp-88h]
  const std::pair<const data::RogueMonsterPoolDifficultyType,proto::RoguelikeSettleCoinInfo> *v51; // [rsp+B0h] [rbp-80h]
  std::tuple_element<0,const std::pair<const data::RogueMonsterPoolDifficultyType,proto::RoguelikeSettleCoinInfo> >::type *diff; // [rsp+B8h] [rbp-78h]
  std::tuple_element<1,const std::pair<const data::RogueMonsterPoolDifficultyType,proto::RoguelikeSettleCoinInfo> >::type *info; // [rsp+C0h] [rbp-70h]
  proto::RogueFinishChallengeBin *finish_challenge_bin; // [rsp+C8h] [rbp-68h]
  const std::pair<unsigned int const,bool> *v55; // [rsp+D0h] [rbp-60h]
  std::tuple_element<0,const std::pair<unsigned int const,bool> >::type *level_id_0; // [rsp+D8h] [rbp-58h]
  std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *is_finish; // [rsp+E0h] [rbp-50h]
  const std::pair<unsigned int const,unsigned int> *v58; // [rsp+E8h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *level_id; // [rsp+F0h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+F8h] [rbp-38h]
  const std::pair<const data::RogueCreateGadgetType,unsigned int> *v61; // [rsp+100h] [rbp-30h]
  std::tuple_element<0,const std::pair<const data::RogueCreateGadgetType,unsigned int> >::type *type; // [rsp+108h] [rbp-28h]
  std::tuple_element<1,const std::pair<const data::RogueCreateGadgetType,unsigned int> >::type *num; // [rsp+110h] [rbp-20h]
  proto::Uint32PairBin *bin_pair; // [rsp+118h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::RogueStageBin::set_stage_id(stage_bin, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_c_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_c_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->coin_c_num);
  }
  proto::RogueStageBin::set_coin_c_num(stage_bin, this->coin_c_num);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_passed_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_passed_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->max_passed_level);
  }
  proto::RogueStageBin::set_max_passed_level(stage_bin, this->max_passed_level);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::RogueStageBin::set_is_open(stage_bin, this->is_open);
  if ( *(char *)(((unsigned __int64)&this->is_in_combat >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_in_combat);
  proto::RogueStageBin::set_is_in_combat(stage_bin, this->is_in_combat);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_passed >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 14) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_passed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_passed);
  }
  proto::RogueStageBin::set_is_passed(stage_bin, this->is_passed);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_taken_first_reward >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 15) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_taken_first_reward >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_taken_first_reward);
  }
  proto::RogueStageBin::set_is_taken_reward(stage_bin, this->is_taken_first_reward);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_entering_next_level >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 25) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_entering_next_level >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_entering_next_level);
  }
  proto::RogueStageBin::set_is_entering_next_level(stage_bin, this->is_entering_next_level);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_explored >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 13) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_explored >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_explored);
  }
  proto::RogueStageBin::set_is_explored(stage_bin, this->is_explored);
  if ( *(_BYTE *)(((unsigned __int64)&this->cached_coin_b_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cached_coin_b_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cached_coin_b_num);
  }
  proto::RogueStageBin::set_cached_coin_b_num(stage_bin, this->cached_coin_b_num);
  if ( *(_BYTE *)(((unsigned __int64)&this->cached_coin_c_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cached_coin_c_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cached_coin_c_num);
  }
  proto::RogueStageBin::set_cached_coin_c_num(stage_bin, this->cached_coin_c_num);
  __for_range = &this->dead_gadget_count_map;
  __for_begin._M_node = std::map<data::RogueCreateGadgetType,unsigned int>::begin(&this->dead_gadget_count_map)._M_node;
  __for_end._M_node = std::map<data::RogueCreateGadgetType,unsigned int>::end(&this->dead_gadget_count_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v61 = std::_Rb_tree_const_iterator<std::pair<data::RogueCreateGadgetType const,unsigned int>>::operator*(&__for_begin);
    type = std::get<0ul,data::RogueCreateGadgetType const,unsigned int>(v61);
    num = (std::tuple_element<1,const std::pair<const data::RogueCreateGadgetType,unsigned int> >::type *)std::get<1ul,data::RogueCreateGadgetType const,unsigned int>(v61);
    bin_pair = proto::RogueStageBin::add_dead_gadget_count_list(stage_bin);
    if ( *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(type);
    }
    proto::Uint32PairBin::set_key(bin_pair, *type);
    if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(num);
    }
    proto::Uint32PairBin::set_value(bin_pair, *num);
    std::_Rb_tree_const_iterator<std::pair<data::RogueCreateGadgetType const,unsigned int>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_monster_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->kill_monster_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->kill_monster_num);
  }
  proto::RogueStageBin::set_kill_monster_count(stage_bin, this->kill_monster_num);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->avatar_count);
  }
  proto::RogueStageBin::set_avatar_count(stage_bin, this->avatar_count);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_element_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_element_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->avatar_element_count);
  }
  proto::RogueStageBin::set_avatar_element_count(stage_bin, this->avatar_element_count);
  if ( *(char *)(((unsigned __int64)&this->is_used_spring >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_used_spring);
  proto::RogueStageBin::set_is_used_spring(stage_bin, this->is_used_spring);
  if ( *(char *)(((unsigned __int64)&this->is_avatar_dead >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_avatar_dead);
  proto::RogueStageBin::set_is_avatar_dead(stage_bin, this->is_avatar_dead);
  level_cell_map_bin = proto::RogueStageBin::mutable_level_explore_cell_count_map(stage_bin);
  __for_range_0 = &this->level_explore_cell_count_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->level_explore_cell_count_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
  {
    v58 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
    level_id = std::get<0ul,unsigned int const,unsigned int>(v58);
    v2 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v58);
    count = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    v3 = *count;
    v4 = level_id;
    v5 = google::protobuf::Map<unsigned int,unsigned int>::operator[](level_cell_map_bin, level_id);
    v6 = v5;
    v7 = *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000);
    if ( v7 != 0 && (char)(((unsigned __int8)v5 & 7) + 3) >= v7 )
    {
      LOBYTE(v4) = v7 != 0;
      __asan_report_store4(v5, v4, v5);
    }
    *v6 = v3;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
  }
  level_challenge_finish_map_bin = proto::RogueStageBin::mutable_level_finish_all_challenge_map(stage_bin);
  __for_range_1 = &this->level_finish_all_challenge_map;
  __for_begin._M_node = std::map<unsigned int,bool>::begin(&this->level_finish_all_challenge_map)._M_node;
  __for_end._M_node = std::map<unsigned int,bool>::end(__for_range_1)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool> >::_Self *)&__for_end) )
  {
    v55 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool> > *const)&__for_begin);
    level_id_0 = std::get<0ul,unsigned int const,bool>(v55);
    v8 = (std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *)std::get<1ul,unsigned int const,bool>(v55);
    is_finish = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v8 & 7) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v8);
    }
    v9 = *is_finish;
    v10 = level_id_0;
    v11 = google::protobuf::Map<unsigned int,bool>::operator[](level_challenge_finish_map_bin, level_id_0);
    v12 = v11;
    v13 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
    if ( v13 != 0 && ((unsigned __int8)v11 & 7) >= v13 )
    {
      LOBYTE(v10) = v13 != 0;
      __asan_report_store1(v11, v10, v11);
    }
    *v12 = v9;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool> > *const)&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_level);
  }
  proto::RogueStageBin::set_cur_level_index(stage_bin, this->cur_level);
  finish_level_bin_map = proto::RogueStageBin::mutable_finish_challenge_bin_map(stage_bin);
  __for_range_2 = &this->finish_challenge_num_map;
  __for_begin._M_node = std::map<data::RogueMonsterPoolDifficultyType,proto::RoguelikeSettleCoinInfo>::begin(&this->finish_challenge_num_map)._M_node;
  __for_end._M_node = std::map<data::RogueMonsterPoolDifficultyType,proto::RoguelikeSettleCoinInfo>::end(__for_range_2)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<const data::RogueMonsterPoolDifficultyType,proto::RoguelikeSettleCoinInfo> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<const data::RogueMonsterPoolDifficultyType,proto::RoguelikeSettleCoinInfo> >::_Self *)&__for_end) )
  {
    v51 = std::_Rb_tree_const_iterator<std::pair<data::RogueMonsterPoolDifficultyType const,proto::RoguelikeSettleCoinInfo>>::operator*((const std::_Rb_tree_const_iterator<std::pair<const data::RogueMonsterPoolDifficultyType,proto::RoguelikeSettleCoinInfo> > *const)&__for_begin);
    diff = std::get<0ul,data::RogueMonsterPoolDifficultyType const,proto::RoguelikeSettleCoinInfo>(v51);
    info = (std::tuple_element<1,const std::pair<const data::RogueMonsterPoolDifficultyType,proto::RoguelikeSettleCoinInfo> >::type *)std::get<1ul,data::RogueMonsterPoolDifficultyType const,proto::RoguelikeSettleCoinInfo>(v51);
    if ( *(_BYTE *)(((unsigned __int64)diff >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)diff & 7) + 3) >= *(_BYTE *)(((unsigned __int64)diff >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(diff);
    }
    key = *diff;
    finish_challenge_bin = google::protobuf::Map<unsigned int,proto::RogueFinishChallengeBin>::operator[](
                             finish_level_bin_map,
                             &key);
    v14 = proto::RoguelikeSettleCoinInfo::cell_num(info);
    proto::RogueFinishChallengeBin::set_cell_num(finish_challenge_bin, v14);
    v15 = proto::RoguelikeSettleCoinInfo::coin_b(info);
    proto::RogueFinishChallengeBin::set_coin_b(finish_challenge_bin, v15);
    v16 = proto::RoguelikeSettleCoinInfo::coin_c(info);
    proto::RogueFinishChallengeBin::set_coin_c(finish_challenge_bin, v16);
    std::_Rb_tree_const_iterator<std::pair<data::RogueMonsterPoolDifficultyType const,proto::RoguelikeSettleCoinInfo>>::operator++((std::_Rb_tree_const_iterator<std::pair<const data::RogueMonsterPoolDifficultyType,proto::RoguelikeSettleCoinInfo> > *const)&__for_begin);
  }
  proto::RogueStageBin::set_transaction(stage_bin, &this->transaction);
  level_time_cost_map_bin = proto::RogueStageBin::mutable_level_time_cost_map(stage_bin);
  __for_range_3 = &this->level_time_cost_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->level_time_cost_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_3)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
  {
    v48 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
    level_id_1 = std::get<0ul,unsigned int const,unsigned int>(v48);
    v17 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v48);
    time_cost = v17;
    if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v17);
    }
    v18 = *time_cost;
    v19 = level_id_1;
    v20 = google::protobuf::Map<unsigned int,unsigned int>::operator[](level_time_cost_map_bin, level_id_1);
    v21 = v20;
    v22 = *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000);
    if ( v22 != 0 && (char)(((unsigned __int8)v20 & 7) + 3) >= v22 )
    {
      LOBYTE(v19) = v22 != 0;
      __asan_report_store4(v20, v19, v20);
    }
    *v21 = v18;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
  }
  explored_cell_type_map_bin = proto::RogueStageBin::mutable_explored_cell_type_map(stage_bin);
  __for_range_4 = &this->explore_cell_type_map;
  __for_begin._M_node = std::map<data::RogueCellType,unsigned int>::begin(&this->explore_cell_type_map)._M_node;
  __for_end._M_node = std::map<data::RogueCellType,unsigned int>::end(__for_range_4)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<const data::RogueCellType,unsigned int> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<const data::RogueCellType,unsigned int> >::_Self *)&__for_end) )
  {
    v45 = std::_Rb_tree_const_iterator<std::pair<data::RogueCellType const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<const data::RogueCellType,unsigned int> > *const)&__for_begin);
    cell_type = std::get<0ul,data::RogueCellType const,unsigned int>(v45);
    v23 = (std::tuple_element<1,const std::pair<const data::RogueCellType,unsigned int> >::type *)std::get<1ul,data::RogueCellType const,unsigned int>(v45);
    num_0 = v23;
    if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v23);
    }
    v24 = *num_0;
    if ( *(_BYTE *)(((unsigned __int64)cell_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)cell_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cell_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(cell_type);
    }
    key = *cell_type;
    p_key = &key;
    v26 = google::protobuf::Map<unsigned int,unsigned int>::operator[](explored_cell_type_map_bin, &key);
    v27 = v26;
    v28 = *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000);
    if ( v28 != 0 && (char)(((unsigned __int8)v26 & 7) + 3) >= v28 )
    {
      LOBYTE(p_key) = v28 != 0;
      __asan_report_store4(v26, p_key, v26);
    }
    *v27 = v24;
    std::_Rb_tree_const_iterator<std::pair<data::RogueCellType const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<const data::RogueCellType,unsigned int> > *const)&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->has_temp_leaved >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->has_temp_leaved);
  proto::RogueStageBin::set_has_temp_leaved(stage_bin, this->has_temp_leaved);
  return 0;
};

// Line 148: range 0000000016C41A9E-0000000016C41DB7
int32_t __cdecl RogueStageData::toClient(const RogueStageData *const this, proto::RogueStageInfo *client_info)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::RogueStageInfo::set_stage_id(client_info, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_c_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_c_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->coin_c_num);
  }
  proto::RogueStageInfo::set_coin_c_num(client_info, this->coin_c_num);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_passed_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_passed_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->max_passed_level);
  }
  proto::RogueStageInfo::set_max_passed_level(client_info, this->max_passed_level);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::RogueStageInfo::set_is_open(client_info, this->is_open);
  if ( *(char *)(((unsigned __int64)&this->is_in_combat >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_in_combat);
  proto::RogueStageInfo::set_is_in_combat(client_info, this->is_in_combat);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_passed >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 14) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_passed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_passed);
  }
  proto::RogueStageInfo::set_is_passed(client_info, this->is_passed);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_taken_first_reward >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 15) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_taken_first_reward >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_taken_first_reward);
  }
  proto::RogueStageInfo::set_is_taken_reward(client_info, this->is_taken_first_reward);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_explored >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 13) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_explored >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_explored);
  }
  proto::RogueStageInfo::set_is_explored(client_info, this->is_explored);
  if ( *(_BYTE *)(((unsigned __int64)&this->cached_coin_b_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cached_coin_b_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cached_coin_b_num);
  }
  proto::RogueStageInfo::set_cached_coin_b_num(client_info, this->cached_coin_b_num);
  if ( *(_BYTE *)(((unsigned __int64)&this->cached_coin_c_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cached_coin_c_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cached_coin_c_num);
  }
  proto::RogueStageInfo::set_cached_coin_c_num(client_info, this->cached_coin_c_num);
  return 0;
};

// Line 163: range 0000000016C41DB8-0000000016C420AB
void __cdecl RogueStageData::onGetCoinCInDungeon(RogueStageData *const this, uint32_t num)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  ActivityRogueExcelConfigMgr *p_activity_rogue_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rdx
  char *v7; // rsi
  uint32_t *v8; // rax
  uint32_t *v9; // rdx
  uint32_t v10; // ecx
  char v11; // dl
  __int64 v12; // rdx
  const data::RogueStageExcelConfig *stage_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v14; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-80h] BYREF
  char v16[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 18 new_coin_c_num:170";
  *(_QWORD *)(v2 + 16) = RogueStageData::onGetCoinCInDungeon;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  p_activity_rogue_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.activity_rogue_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  stage_config_ptr = data::ActivityRogueExcelConfigMgrBase::findRogueStageExcelConfig(
                       p_activity_rogue_config_mgr,
                       this->stage_id);
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( stage_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->coin_c_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_c_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->coin_c_num);
    }
    *(_DWORD *)(v2 + 32) = this->coin_c_num + num;
    v7 = (char *)(v2 + 32);
    v8 = (uint32_t *)std::min<unsigned int>(&stage_config_ptr->max_coin, (const unsigned int *)(v2 + 32));
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    v10 = *v9;
    v11 = *(_BYTE *)(((unsigned __int64)&this->coin_c_num >> 3) + 0x7FFF8000);
    LOBYTE(v7) = v11 != 0;
    v12 = (v11 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v11);
    if ( (_BYTE)v12 )
      __asan_report_store4(&this->coin_c_num, v7, v12);
    this->coin_c_num = v10;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/roguelike_dungeon_activity.cpp",
      "onGetCoinCInDungeon",
      167);
    v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v15,
           (const char (*)[42])"[ROGUE] stage config not found, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->stage_id);
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 175: range 0000000016C420AC-0000000016C4237D
uint32_t __cdecl RogueStageData::getLastRemainCoinCNum(RogueStageData *const this)
{
  ActivityRogueExcelConfigMgr *p_activity_rogue_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rdx
  uint32_t coin_c_num; // ecx
  uint32_t v5; // ecx
  uint32_t max_coin; // ecx
  uint32_t v7; // ecx
  const data::RogueStageExcelConfig *stage_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v9; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  p_activity_rogue_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9)->design_config.txt_config_mgr.activity_rogue_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  stage_config_ptr = data::ActivityRogueExcelConfigMgrBase::findRogueStageExcelConfig(
                       p_activity_rogue_config_mgr,
                       this->stage_id);
  std::shared_ptr<Config>::~shared_ptr(&v9);
  if ( stage_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->coin_c_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_c_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->coin_c_num);
    }
    coin_c_num = this->coin_c_num;
    if ( *(_BYTE *)(((unsigned __int64)&this->cached_coin_c_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cached_coin_c_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cached_coin_c_num);
    }
    v5 = this->cached_coin_c_num + coin_c_num;
    if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->max_coin >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)stage_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_config_ptr->max_coin >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&stage_config_ptr->max_coin);
    }
    if ( v5 < stage_config_ptr->max_coin )
    {
      if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->max_coin >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)stage_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_config_ptr->max_coin >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&stage_config_ptr->max_coin);
      }
      max_coin = stage_config_ptr->max_coin;
      if ( *(_BYTE *)(((unsigned __int64)&this->coin_c_num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_c_num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->coin_c_num);
      }
      v7 = max_coin - this->coin_c_num;
      if ( *(_BYTE *)(((unsigned __int64)&this->cached_coin_c_num >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cached_coin_c_num >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->cached_coin_c_num);
      }
      return v7 - this->cached_coin_c_num;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/roguelike_dungeon_activity.cpp",
      "getLastRemainCoinCNum",
      179);
    v2 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v10,
           (const char (*)[42])"[ROGUE] stage config not found, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->stage_id);
    common::milog::MiLogStream::~MiLogStream(&v10);
    return 0;
  }
};

// Line 190: range 0000000016C4237E-0000000016C42BC6
int32_t __cdecl RogueStageData::flushCoin(RogueStageData *const this, Player *player)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  ActivityRogueExcelConfigMgr *p_activity_rogue_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  int32_t result; // eax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v11; // rax
  __int64 v12; // rdx
  PlayerItemComp *v13; // rax
  __int64 v14; // rdx
  uint32_t coin_c_num; // ecx
  PlayerItemComp *v16; // rax
  common::milog::MiLogStream *v17; // rax
  PlayerItemComp *v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rdx
  uint32_t new_coin_c_num; // [rsp+14h] [rbp-ECh]
  const data::RogueStageExcelConfig *stage_config_ptr; // [rsp+18h] [rbp-E8h]
  common::milog::MiLogStream v23; // [rsp+20h] [rbp-E0h] BYREF
  char v24[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 ret:224 64 16 9 param:222 96 24 17 action_reason:223";
  *(_QWORD *)(v2 + 16) = RogueStageData::flushCoin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 64));
  p_activity_rogue_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->design_config.txt_config_mgr.activity_rogue_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  stage_config_ptr = data::ActivityRogueExcelConfigMgrBase::findRogueStageExcelConfig(
                       p_activity_rogue_config_mgr,
                       this->stage_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
  if ( !stage_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/roguelike_dungeon_activity.cpp",
      "flushCoin",
      194);
    v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v23,
           (const char (*)[42])"[ROGUE] stage config not found, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->stage_id);
    common::milog::MiLogStream::~MiLogStream(&v23);
    v7 = (((_BYTE)this + 28) & 7u) + 3;
    v8 = (*(_BYTE *)(((unsigned __int64)&this->cached_coin_b_num >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cached_coin_b_num >> 3) + 0x7FFF8000));
    if ( (_BYTE)v8 )
      __asan_report_store4(&this->cached_coin_b_num, v7, v8);
    this->cached_coin_b_num = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->cached_coin_c_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cached_coin_c_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->cached_coin_c_num, v7, &this->cached_coin_c_num);
    }
    this->cached_coin_c_num = 0;
    result = -1;
    goto LABEL_42;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->cached_coin_b_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cached_coin_b_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cached_coin_b_num);
  }
  if ( this->cached_coin_b_num )
  {
    *(_QWORD *)(v2 + 64) = 0LL;
    *(_QWORD *)(v2 + 72) = 0LL;
    *(_DWORD *)(v2 + 64) = 133;
    *(_DWORD *)(v2 + 68) = this->cached_coin_b_num;
    ActionReason::ActionReason(
      (ActionReason *const)(v2 + 96),
      ACTION_REASON_ROGUE_CHALLENGE_SETTLE,
      ITEM_LIMIT_ACTIVITY_ROGUELIKE_DUNGEON);
    ItemComp = Player::getItemComp(player);
    *(_DWORD *)(v2 + 48) = PlayerItemComp::checkAddItem(
                             ItemComp,
                             (const ItemParam *)(v2 + 64),
                             (const ActionReason *)(v2 + 96));
    if ( *(_DWORD *)(v2 + 48) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike_dungeon_activity.cpp",
        "flushCoin",
        207);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v23,
              (const char (*)[27])"[ROGUE] checkAddItem, ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v11, (const int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v23);
      v12 = (*(_BYTE *)(((unsigned __int64)&this->cached_coin_b_num >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cached_coin_b_num >> 3) + 0x7FFF8000));
      if ( (_BYTE)v12 )
        __asan_report_store4(&this->cached_coin_b_num, (((_BYTE)this + 28) & 7u) + 3, v12);
      this->cached_coin_b_num = 0;
      result = *(_DWORD *)(v2 + 48);
      goto LABEL_42;
    }
    v13 = Player::getItemComp(player);
    PlayerItemComp::addItem(v13, (const ItemParam *)(v2 + 64), (const ActionReason *)(v2 + 96), 0LL);
    v14 = (*(_BYTE *)(((unsigned __int64)&this->cached_coin_b_num >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cached_coin_b_num >> 3) + 0x7FFF8000));
    if ( (_BYTE)v14 )
      __asan_report_store4(&this->cached_coin_b_num, (((_BYTE)this + 28) & 7u) + 3, v14);
    this->cached_coin_b_num = 0;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->cached_coin_c_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cached_coin_c_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cached_coin_c_num);
  }
  if ( this->cached_coin_c_num )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->coin_c_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_c_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->coin_c_num);
    }
    coin_c_num = this->coin_c_num;
    if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->max_coin >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)stage_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_config_ptr->max_coin >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&stage_config_ptr->max_coin);
    }
    if ( coin_c_num < stage_config_ptr->max_coin )
    {
      new_coin_c_num = this->cached_coin_c_num;
      if ( new_coin_c_num + this->coin_c_num > stage_config_ptr->max_coin )
        new_coin_c_num = stage_config_ptr->max_coin - this->coin_c_num;
      *(_QWORD *)(v2 + 64) = 0LL;
      *(_QWORD *)(v2 + 72) = 0LL;
      *(_DWORD *)(v2 + 64) = 134;
      *(_DWORD *)(v2 + 68) = new_coin_c_num;
      ActionReason::ActionReason(
        (ActionReason *const)(v2 + 96),
        ACTION_REASON_ROGUE_CHALLENGE_SETTLE,
        ITEM_LIMIT_ACTIVITY_ROGUELIKE_DUNGEON);
      v16 = Player::getItemComp(player);
      *(_DWORD *)(v2 + 48) = PlayerItemComp::checkAddItem(
                               v16,
                               (const ItemParam *)(v2 + 64),
                               (const ActionReason *)(v2 + 96));
      if ( *(_DWORD *)(v2 + 48) )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike_dungeon_activity.cpp",
          "flushCoin",
          227);
        v17 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                &v23,
                (const char (*)[27])"[ROGUE] checkAddItem, ret:");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v17, (const int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v23);
        if ( *(_BYTE *)(((unsigned __int64)&this->cached_coin_c_num >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->cached_coin_c_num >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->cached_coin_c_num, v2 + 48, &this->cached_coin_c_num);
        }
        this->cached_coin_c_num = 0;
        result = *(_DWORD *)(v2 + 48);
        goto LABEL_42;
      }
      v18 = Player::getItemComp(player);
      PlayerItemComp::addItem(v18, (const ItemParam *)(v2 + 64), (const ActionReason *)(v2 + 96), 0LL);
      RogueStageData::onGetCoinCInDungeon(this, new_coin_c_num);
    }
  }
  v19 = (((_BYTE)this + 28) & 7u) + 3;
  v20 = (*(_BYTE *)(((unsigned __int64)&this->cached_coin_b_num >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cached_coin_b_num >> 3) + 0x7FFF8000));
  if ( (_BYTE)v20 )
    __asan_report_store4(&this->cached_coin_b_num, v19, v20);
  this->cached_coin_b_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cached_coin_c_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cached_coin_c_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cached_coin_c_num, v19, &this->cached_coin_c_num);
  }
  this->cached_coin_c_num = 0;
  result = 0;
LABEL_42:
  if ( v24 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 240: range 0000000016C42BC8-0000000016C42D1B
void __fastcall RogueStageData::onGadgetDie(RogueStageData *const this, data::RogueCreateGadgetType type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rcx
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 type:239";
  *(_QWORD *)(v2 + 16) = RogueStageData::onGadgetDie;
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = type;
  if ( *(char *)(((unsigned __int64)&this->is_in_combat >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_in_combat);
  if ( this->is_in_combat )
  {
    v6 = (unsigned __int64)std::map<data::RogueCreateGadgetType,unsigned int>::operator[](
                             &this->dead_gadget_count_map,
                             (const std::map<data::RogueCreateGadgetType,unsigned int>::key_type *)v4 - 8);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0 && (char)((v6 & 7) + 3) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load4(v6);
    ++*(_DWORD *)v6;
  }
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 249: range 0000000016C42D1C-0000000016C43075
void __cdecl RogueStageData::clearRuntimeData(RogueStageData *const this)
{
  __int64 v1; // rsi
  uint32_t *p_kill_monster_num; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx

  std::map<data::RogueCreateGadgetType,unsigned int>::clear(&this->dead_gadget_count_map);
  p_kill_monster_num = &this->kill_monster_num;
  if ( *(_BYTE *)(((unsigned __int64)p_kill_monster_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_kill_monster_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->kill_monster_num, v1, p_kill_monster_num);
  }
  this->kill_monster_num = 0;
  if ( *(char *)(((unsigned __int64)&this->is_in_combat >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_in_combat, v1, &this->is_in_combat);
  this->is_in_combat = 0;
  v3 = ((_BYTE)this + 25) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_entering_next_level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_entering_next_level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_entering_next_level, v3, v4);
  this->is_entering_next_level = 0;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->cached_coin_b_num >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cached_coin_b_num >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->cached_coin_b_num, v5, v6);
  this->cached_coin_b_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cached_coin_c_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cached_coin_c_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cached_coin_c_num, v5, &this->cached_coin_c_num);
  }
  this->cached_coin_c_num = 0;
  std::map<unsigned int,unsigned int>::clear(&this->level_explore_cell_count_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_element_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_element_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_element_count, v5, &this->avatar_element_count);
  }
  this->avatar_element_count = 0;
  v7 = (((_BYTE)this - 108) & 7u) + 3;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->avatar_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_count >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->avatar_count, v7, v8);
  this->avatar_count = 0;
  if ( *(char *)(((unsigned __int64)&this->is_used_spring >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_used_spring, v7, &this->is_used_spring);
  this->is_used_spring = 0;
  std::map<unsigned int,bool>::clear(&this->level_finish_all_challenge_map);
  if ( *(char *)(((unsigned __int64)&this->is_avatar_dead >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_avatar_dead, v7, &this->is_avatar_dead);
  this->is_avatar_dead = 0;
  v9 = (((_BYTE)this + 20) & 7u) + 3;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->cur_level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->cur_level, v9, v10);
  this->cur_level = 0;
  std::map<data::RogueMonsterPoolDifficultyType,proto::RoguelikeSettleCoinInfo>::clear(&this->finish_challenge_num_map);
  std::string::clear(&this->transaction);
  std::map<data::RogueCellType,unsigned int>::clear(&this->explore_cell_type_map);
  std::map<unsigned int,unsigned int>::clear(&this->level_time_cost_map);
  if ( *(char *)(((unsigned __int64)&this->has_temp_leaved >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->has_temp_leaved, v9, &this->has_temp_leaved);
  this->has_temp_leaved = 0;
};

// Line 271: range 0000000016C43076-0000000016C4310C
void __cdecl RogueStageData::onMonsterDie(RogueStageData *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_in_combat >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_in_combat);
  if ( this->is_in_combat )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->kill_monster_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->kill_monster_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->kill_monster_num);
    }
    ++this->kill_monster_num;
  }
};

// Line 280: range 0000000016C4310E-0000000016C431F9
uint32_t __cdecl RogueStageData::getAllExploredCellCount(RogueStageData *const this)
{
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v1; // rax
  unsigned int all_count; // [rsp+1Ch] [rbp-34h]
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-20h]
  std::pair<unsigned int const,unsigned int> *__in; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+48h] [rbp-8h]

  all_count = 0;
  __for_range = &this->level_explore_cell_count_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->level_explore_cell_count_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->level_explore_cell_count_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,unsigned int>(__in);
    v1 = std::get<1ul,unsigned int const,unsigned int>(__in);
    count = v1;
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v1);
    }
    all_count = SAFE_ADD<unsigned int,unsigned int>(all_count, *count);
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  return all_count;
};

// Line 290: range 0000000016C431FA-0000000016C4337C
void __fastcall RogueStageData::onChallengeFinish(
        RogueStageData *const this,
        data::RogueMonsterPoolDifficultyType diff_type,
        uint32_t original_coin_b,
        uint32_t original_coin_c)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  char *v6; // rcx
  unsigned __int64 v7; // r12
  google::protobuf::uint32 v8; // eax
  google::protobuf::uint32 v9; // eax
  google::protobuf::uint32 v10; // eax
  std::map<data::RogueMonsterPoolDifficultyType,proto::RoguelikeSettleCoinInfo>::mapped_type *finish_challenge_info; // [rsp+28h] [rbp-68h]
  char v14[96]; // [rsp+30h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  v6 = (char *)(v4 + 64);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 13 diff_type:289";
  *(_QWORD *)(v4 + 16) = RogueStageData::onChallengeFinish;
  v7 = v4 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = diff_type;
  if ( *(char *)(((unsigned __int64)&this->is_in_combat >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_in_combat);
  if ( this->is_in_combat )
  {
    finish_challenge_info = std::map<data::RogueMonsterPoolDifficultyType,proto::RoguelikeSettleCoinInfo>::operator[](
                              &this->finish_challenge_num_map,
                              (const std::map<data::RogueMonsterPoolDifficultyType,proto::RoguelikeSettleCoinInfo>::key_type *)v6
                            - 8);
    v8 = proto::RoguelikeSettleCoinInfo::cell_num(finish_challenge_info);
    proto::RoguelikeSettleCoinInfo::set_cell_num(finish_challenge_info, v8 + 1);
    v9 = proto::RoguelikeSettleCoinInfo::coin_b(finish_challenge_info);
    proto::RoguelikeSettleCoinInfo::set_coin_b(finish_challenge_info, v9 + original_coin_b);
    v10 = proto::RoguelikeSettleCoinInfo::coin_c(finish_challenge_info);
    proto::RoguelikeSettleCoinInfo::set_coin_c(finish_challenge_info, v10 + original_coin_c);
  }
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 302: range 0000000016C4337E-0000000016C436BB
std::shared_ptr<RogueDungeonSettleEvent> *__fastcall RogueStageData::buildSettleEvent(
        RogueStageData *const this,
        __int64 is_stage_passed,
        char a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *v6; // rax
  unsigned int *v8; // [rsp-8h] [rbp-108h]
  bool *v9; // [rsp+0h] [rbp-100h]
  unsigned int *v10; // [rsp+8h] [rbp-F8h]
  std::shared_ptr<RogueDungeonSettleEvent> *v11; // [rsp+18h] [rbp-E8h]
  std::map<unsigned int,bool>::iterator __for_begin; // [rsp+20h] [rbp-E0h] BYREF
  std::map<unsigned int,bool>::iterator __for_end; // [rsp+28h] [rbp-D8h] BYREF
  std::map<unsigned int,bool> *__for_range; // [rsp+30h] [rbp-D0h]
  const std::pair<unsigned int const,bool> *v15; // [rsp+38h] [rbp-C8h]
  std::tuple_element<0,const std::pair<unsigned int const,bool> >::type *_; // [rsp+40h] [rbp-C0h]
  std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *is_finish; // [rsp+48h] [rbp-B8h]
  char v18[176]; // [rsp+50h] [rbp-B0h] BYREF

  v11 = (std::shared_ptr<RogueDungeonSettleEvent> *)this;
  BYTE4(v10) = a3;
  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 1 32 is_all_challenge_cell_finish:308 64 1 19 is_stage_passed:301 80 4 14 cell_count:307 96"
                        " 16 13 event_ptr:317";
  *(_QWORD *)(v3 + 16) = RogueStageData::buildSettleEvent;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556927;
  v5[536862723] = -202178560;
  *(_BYTE *)(v3 + 64) = BYTE4(v10);
  if ( *(char *)(((unsigned __int64)(is_stage_passed + 16) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(is_stage_passed + 16);
  if ( *(_BYTE *)(is_stage_passed + 16) != 1 )
  {
    std::shared_ptr<RogueDungeonSettleEvent>::shared_ptr((std::shared_ptr<RogueDungeonSettleEvent> *const)this, 0LL);
  }
  else
  {
    *(_DWORD *)(v3 + 80) = RogueStageData::getAllExploredCellCount((RogueStageData *const)is_stage_passed);
    *(_BYTE *)(v3 + 48) = 1;
    __for_range = (std::map<unsigned int,bool> *)(is_stage_passed + 160);
    __for_begin._M_node = std::map<unsigned int,bool>::begin((std::map<unsigned int,bool> *const)(is_stage_passed + 160))._M_node;
    __for_end._M_node = std::map<unsigned int,bool>::end((std::map<unsigned int,bool> *const)(is_stage_passed + 160))._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v15 = std::_Rb_tree_iterator<std::pair<unsigned int const,bool>>::operator*(&__for_begin);
      _ = std::get<0ul,unsigned int const,bool>(v15);
      v6 = (std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *)std::get<1ul,unsigned int const,bool>(v15);
      is_finish = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v6 & 7) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v6);
      }
      if ( !*is_finish )
      {
        *(_BYTE *)(v3 + 48) = 0;
        break;
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,bool>>::operator++(&__for_begin);
    }
    common::tools::perf::make_shared<RogueDungeonSettleEvent,unsigned int &,unsigned int &,bool &,unsigned int &,unsigned int &,bool &,bool &,bool &,unsigned int &,unsigned int &>(
      (unsigned int *)(v3 + 96),
      (unsigned int *)is_stage_passed,
      (bool *)(is_stage_passed + 20),
      (unsigned int *)(v3 + 64),
      (unsigned int *)(is_stage_passed + 88),
      (bool *)(v3 + 80),
      (bool *)(is_stage_passed + 152),
      (bool *)(v3 + 48),
      (unsigned int *)(is_stage_passed + 208),
      (unsigned int *)(is_stage_passed + 144),
      (unsigned int *)(is_stage_passed + 148),
      v8,
      v9,
      v10,
      (unsigned int *)is_stage_passed,
      (bool *)this,
      (bool *)__for_begin._M_node,
      (bool *)__for_end._M_node,
      (unsigned int *)__for_range,
      (unsigned int *)v15);
    std::shared_ptr<RogueDungeonSettleEvent>::shared_ptr(v11, (std::shared_ptr<RogueDungeonSettleEvent> *)(v3 + 96));
    std::shared_ptr<RogueDungeonSettleEvent>::~shared_ptr((std::shared_ptr<RogueDungeonSettleEvent> *const)(v3 + 96));
  }
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v11;
};

// Line 322: range 0000000016C436BC-0000000016C43A3A
void __cdecl RogueStageData::fillSettleInfo(RogueStageData *const this, proto::RoguelikeDungeonSettleInfo *settle_info)
{
  ActivityRogueExcelConfigMgr *p_activity_rogue_config_mgr; // rcx
  uint32_t cached_coin_c_num; // ecx
  uint32_t v4; // ecx
  google::protobuf::Map<unsigned int,proto::RoguelikeSettleCoinInfo>::key_type key; // [rsp+14h] [rbp-6Ch] BYREF
  std::map<data::RogueMonsterPoolDifficultyType,proto::RoguelikeSettleCoinInfo>::iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::map<data::RogueMonsterPoolDifficultyType,proto::RoguelikeSettleCoinInfo>::iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  const data::RogueStageExcelConfig *stage_config_ptr; // [rsp+28h] [rbp-58h]
  google::protobuf::Map<unsigned int,proto::RoguelikeSettleCoinInfo> *client_finished_challenge_map; // [rsp+30h] [rbp-50h]
  std::map<data::RogueMonsterPoolDifficultyType,proto::RoguelikeSettleCoinInfo> *__for_range; // [rsp+38h] [rbp-48h]
  const std::pair<const data::RogueMonsterPoolDifficultyType,proto::RoguelikeSettleCoinInfo> *v11; // [rsp+40h] [rbp-40h]
  std::tuple_element<0,const std::pair<const data::RogueMonsterPoolDifficultyType,proto::RoguelikeSettleCoinInfo> >::type *diff; // [rsp+48h] [rbp-38h]
  std::tuple_element<1,const std::pair<const data::RogueMonsterPoolDifficultyType,proto::RoguelikeSettleCoinInfo> >::type *finish_info; // [rsp+50h] [rbp-30h]
  proto::RoguelikeSettleCoinInfo *client_challenge_info; // [rsp+58h] [rbp-28h]
  std::shared_ptr<Config> v15[2]; // [rsp+60h] [rbp-20h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_in_combat >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_in_combat);
  if ( this->is_in_combat )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v15);
    p_activity_rogue_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v15)->design_config.txt_config_mgr.activity_rogue_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    stage_config_ptr = data::ActivityRogueExcelConfigMgrBase::findRogueStageExcelConfig(
                         p_activity_rogue_config_mgr,
                         this->stage_id);
    std::shared_ptr<Config>::~shared_ptr(v15);
    if ( stage_config_ptr )
    {
      client_finished_challenge_map = proto::RoguelikeDungeonSettleInfo::mutable_finished_challenge_cell_num_map(settle_info);
      __for_range = &this->finish_challenge_num_map;
      __for_begin._M_node = std::map<data::RogueMonsterPoolDifficultyType,proto::RoguelikeSettleCoinInfo>::begin(&this->finish_challenge_num_map)._M_node;
      __for_end._M_node = std::map<data::RogueMonsterPoolDifficultyType,proto::RoguelikeSettleCoinInfo>::end(&this->finish_challenge_num_map)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v11 = std::_Rb_tree_iterator<std::pair<data::RogueMonsterPoolDifficultyType const,proto::RoguelikeSettleCoinInfo>>::operator*(&__for_begin);
        diff = std::get<0ul,data::RogueMonsterPoolDifficultyType const,proto::RoguelikeSettleCoinInfo>(v11);
        finish_info = (std::tuple_element<1,const std::pair<const data::RogueMonsterPoolDifficultyType,proto::RoguelikeSettleCoinInfo> >::type *)std::get<1ul,data::RogueMonsterPoolDifficultyType const,proto::RoguelikeSettleCoinInfo>(v11);
        if ( *(_BYTE *)(((unsigned __int64)diff >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)diff & 7) + 3) >= *(_BYTE *)(((unsigned __int64)diff >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(diff);
        }
        key = *diff;
        client_challenge_info = google::protobuf::Map<unsigned int,proto::RoguelikeSettleCoinInfo>::operator[](
                                  client_finished_challenge_map,
                                  &key);
        proto::RoguelikeSettleCoinInfo::CopyFrom(client_challenge_info, finish_info);
        std::_Rb_tree_iterator<std::pair<data::RogueMonsterPoolDifficultyType const,proto::RoguelikeSettleCoinInfo>>::operator++(&__for_begin);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->cached_coin_b_num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cached_coin_b_num >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->cached_coin_b_num);
      }
      proto::RoguelikeDungeonSettleInfo::set_total_coin_b_num(settle_info, this->cached_coin_b_num);
      if ( *(_BYTE *)(((unsigned __int64)&this->cached_coin_c_num >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cached_coin_c_num >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->cached_coin_c_num);
      }
      proto::RoguelikeDungeonSettleInfo::set_total_coin_c_num(settle_info, this->cached_coin_c_num);
      if ( *(_BYTE *)(((unsigned __int64)&this->cached_coin_c_num >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cached_coin_c_num >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->cached_coin_c_num);
      }
      cached_coin_c_num = this->cached_coin_c_num;
      if ( *(_BYTE *)(((unsigned __int64)&this->coin_c_num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_c_num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->coin_c_num);
      }
      v4 = this->coin_c_num + cached_coin_c_num;
      if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->max_coin >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)stage_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_config_ptr->max_coin >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&stage_config_ptr->max_coin);
      }
      proto::RoguelikeDungeonSettleInfo::set_is_coin_c_reach_limit(settle_info, v4 >= stage_config_ptr->max_coin);
    }
  }
};

// Line 344: range 0000000016C43A3C-0000000016C43B4C
void __fastcall RogueStageData::enterCell(RogueStageData *const this, data::RogueCellType type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 type:343";
  *(_QWORD *)(v2 + 16) = RogueStageData::enterCell;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = type;
  v5 = (unsigned __int64)std::map<data::RogueCellType,unsigned int>::operator[](
                           &this->explore_cell_type_map,
                           (const std::map<data::RogueCellType,unsigned int>::key_type *)(v2 + 32));
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)((v5 & 7) + 3) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load4(v5);
  ++*(_DWORD *)v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 349: range 0000000016C43B4E-0000000016C443FF
int32_t __cdecl RoguelikeDungeonActivity::fromScheduleBin(
        RoguelikeDungeonActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  google::protobuf::uint32 v5; // r14d
  std::unordered_map<proto::VirtualItem,unsigned int>::key_type *p_k; // rsi
  std::unordered_map<proto::VirtualItem,unsigned int>::mapped_type *v7; // rax
  google::protobuf::uint32 *v8; // rdx
  char v9; // cl
  google::protobuf::uint32 v10; // r14d
  std::unordered_map<proto::VirtualItem,unsigned int>::key_type *v11; // rsi
  std::unordered_map<proto::VirtualItem,unsigned int>::mapped_type *v12; // rax
  google::protobuf::uint32 *v13; // rdx
  char v14; // cl
  google::protobuf::uint32 v15; // r14d
  std::unordered_map<proto::VirtualItem,unsigned int>::key_type *v16; // rsi
  std::unordered_map<proto::VirtualItem,unsigned int>::mapped_type *v17; // rax
  google::protobuf::uint32 *v18; // rdx
  char v19; // cl
  unsigned int *v20; // rcx
  unsigned int *v21; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v22; // rax
  common::milog::MiLogStream *v23; // r13
  int32_t result; // eax
  const google::protobuf::RepeatedField<unsigned int> *v25; // rax
  const google::protobuf::RepeatedField<unsigned int> *v26; // rax
  std::vector<unsigned int> *p_equipped_rune_vec; // rsi
  unsigned int v28; // eax
  __int64 v29; // rdx
  char v30; // al
  RogueStageData *v31; // r15
  unsigned int *v32; // rcx
  RogueStageData *v33; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,RogueStageData>,false,false>,bool> v34; // rax
  common::milog::MiLogStream *v35; // r14
  uint32_t inited; // ecx
  char v37; // dl
  const proto::RogueDungeonBin *v38; // rsi
  __int64 v39; // rdx
  uint64_t v40; // rax
  unsigned int v42; // [rsp+20h] [rbp-290h] BYREF
  std::unordered_map<proto::VirtualItem,unsigned int>::key_type __k; // [rsp+24h] [rbp-28Ch] BYREF
  google::protobuf::RepeatedPtrField<proto::RoguelikeShikigamiBin>::const_iterator __for_begin; // [rsp+28h] [rbp-288h] BYREF
  google::protobuf::RepeatedPtrField<proto::RoguelikeShikigamiBin>::const_iterator __for_end; // [rsp+30h] [rbp-280h] BYREF
  const proto::RoguelikeDungeonScheduleBin *roguelike_dungeon_bin; // [rsp+38h] [rbp-278h]
  const google::protobuf::RepeatedPtrField<proto::RoguelikeShikigamiBin> *__for_range; // [rsp+40h] [rbp-270h]
  const google::protobuf::RepeatedPtrField<proto::RogueStageBin> *__for_range_0; // [rsp+48h] [rbp-268h]
  const proto::RogueStageBin *stage_bin; // [rsp+50h] [rbp-260h]
  const proto::RoguelikeShikigamiBin *shikigami_bin; // [rsp+58h] [rbp-258h]
  common::milog::MiLogStream v51; // [rsp+60h] [rbp-250h] BYREF
  char v52[560]; // [rsp+80h] [rbp-230h] BYREF

  v2 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 400 14 stage_data:382";
  *(_QWORD *)(v2 + 16) = RoguelikeDungeonActivity::fromScheduleBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862734] = -202116109;
  v4[536862735] = -202116109;
  roguelike_dungeon_bin = proto::ActivityScheduleBin::roguelike_dungeon_bin(bin);
  std::unordered_map<proto::VirtualItem,unsigned int>::clear(&this->activity_coin_map_);
  v5 = proto::RoguelikeDungeonScheduleBin::coin_a(roguelike_dungeon_bin);
  __k = ITEM_VIRTUAL_ROGUELIKE_COIN_A;
  p_k = &__k;
  v7 = std::unordered_map<proto::VirtualItem,unsigned int>::operator[](&this->activity_coin_map_, &__k);
  v8 = v7;
  v9 = *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000);
  if ( v9 != 0 && (char)(((unsigned __int8)v7 & 7) + 3) >= v9 )
  {
    LOBYTE(p_k) = v9 != 0;
    __asan_report_store4(v7, p_k, v7);
  }
  *v8 = v5;
  v10 = proto::RoguelikeDungeonScheduleBin::coin_b(roguelike_dungeon_bin);
  __k = ITEM_VIRTUAL_ROGUELIKE_COIN_B;
  v11 = &__k;
  v12 = std::unordered_map<proto::VirtualItem,unsigned int>::operator[](&this->activity_coin_map_, &__k);
  v13 = v12;
  v14 = *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000);
  if ( v14 != 0 && (char)(((unsigned __int8)v12 & 7) + 3) >= v14 )
  {
    LOBYTE(v11) = v14 != 0;
    __asan_report_store4(v12, v11, v12);
  }
  *v13 = v10;
  v15 = proto::RoguelikeDungeonScheduleBin::coin_c(roguelike_dungeon_bin);
  __k = ITEM_VIRTUAL_ROGUELIKE_COIN_C;
  v16 = &__k;
  v17 = std::unordered_map<proto::VirtualItem,unsigned int>::operator[](&this->activity_coin_map_, &__k);
  v18 = v17;
  v19 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
  if ( v19 != 0 && (char)(((unsigned __int8)v17 & 7) + 3) >= v19 )
  {
    LOBYTE(v16) = v19 != 0;
    __asan_report_store4(v17, v16, v17);
  }
  *v18 = v15;
  std::unordered_map<unsigned int,unsigned int>::clear(&this->shikigami_map_);
  __for_range = proto::RoguelikeDungeonScheduleBin::shikigami_list(roguelike_dungeon_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::RoguelikeShikigamiBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::RoguelikeShikigamiBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::RoguelikeShikigamiBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    shikigami_bin = google::protobuf::internal::RepeatedPtrIterator<proto::RoguelikeShikigamiBin const>::operator*(&__for_begin);
    __k = proto::RoguelikeShikigamiBin::level(shikigami_bin);
    v42 = proto::RoguelikeShikigamiBin::id(shikigami_bin);
    v22 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int,unsigned int>(
            &this->shikigami_map_,
            &v42,
            (unsigned int *)&__k,
            v20,
            v21);
    if ( !v22.second )
    {
      common::milog::MiLogStream::create(
        &v51,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/roguelike_dungeon_activity.cpp",
        "fromScheduleBin",
        362);
      v23 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v51,
              (const char (*)[38])"duplicate shikigami_id, shikigami_id:");
      __k = proto::RoguelikeShikigamiBin::id(shikigami_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)&__k);
      common::milog::MiLogStream::~MiLogStream(&v51);
      result = -1;
      goto LABEL_29;
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::RoguelikeShikigamiBin const>::operator++(&__for_begin);
  }
  std::unordered_set<unsigned int>::clear(&this->rune_set_);
  std::vector<unsigned int>::clear(&this->equipped_rune_vec_);
  v25 = proto::RoguelikeDungeonScheduleBin::rune_list(roguelike_dungeon_bin);
  common::tools::MiscUtils::setFromRepeated<std::unordered_set<unsigned int>,unsigned int>(&this->rune_set_, v25);
  v26 = proto::RoguelikeDungeonScheduleBin::equipped_rune_list(roguelike_dungeon_bin);
  p_equipped_rune_vec = &this->equipped_rune_vec_;
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v26, &this->equipped_rune_vec_);
  LOBYTE(v28) = proto::RoguelikeDungeonScheduleBin::is_content_closed(roguelike_dungeon_bin);
  v29 = v28;
  v30 = *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000);
  if ( v30 < 0 )
  {
    LOBYTE(p_equipped_rune_vec) = v30 != 0;
    __asan_report_store1(&this->is_content_closed_, p_equipped_rune_vec, v29);
  }
  this->is_content_closed_ = v29;
  if ( RoguelikeMiscMgr::fromScheduleBin(&this->roguelike_misc_mgr_, bin) )
  {
    common::milog::MiLogStream::create(
      &v51,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/roguelike_dungeon_activity.cpp",
      "fromScheduleBin",
      376);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v51,
      (const char (*)[32])"misc_mgr fromScheduleBin failed");
    common::milog::MiLogStream::~MiLogStream(&v51);
    result = -1;
  }
  else
  {
    std::unordered_map<unsigned int,RogueStageData>::clear(&this->stage_map_);
    __for_range_0 = proto::RoguelikeDungeonScheduleBin::stage_bin_list(roguelike_dungeon_bin);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::RogueStageBin>::begin(__for_range_0).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::RogueStageBin>::end(__for_range_0).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::RogueStageBin const>::operator!=(
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::RogueStageBin> *const)&__for_begin,
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::RogueStageBin>::iterator *)&__for_end) )
    {
      stage_bin = google::protobuf::internal::RepeatedPtrIterator<proto::RogueStageBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::RogueStageBin> *const)&__for_begin);
      RogueStageData::RogueStageData((RogueStageData *const)(v2 + 48));
      RogueStageData::fromBin((RogueStageData *const)(v2 + 48), stage_bin);
      v31 = std::move<RogueStageData &>((RogueStageData *)(v2 + 48));
      __k = proto::RogueStageBin::stage_id(stage_bin);
      v34 = std::unordered_map<unsigned int,RogueStageData>::emplace<unsigned int,RogueStageData>(
              &this->stage_map_,
              (unsigned int *)&__k,
              v31,
              v32,
              v33);
      if ( !v34.second )
      {
        common::milog::MiLogStream::create(
          &v51,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike_dungeon_activity.cpp",
          "fromScheduleBin",
          386);
        v35 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v51,
                (const char (*)[34])"duplicated stage data!, stage_id:");
        __k = proto::RogueStageBin::stage_id(stage_bin);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, (const unsigned int *)&__k);
        common::milog::MiLogStream::~MiLogStream(&v51);
      }
      RogueStageData::~RogueStageData((RogueStageData *const)(v2 + 48));
      google::protobuf::internal::RepeatedPtrIterator<proto::RogueStageBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::RogueStageBin> *const)&__for_begin);
    }
    v38 = proto::RoguelikeDungeonScheduleBin::dungeon_runtime_bin(roguelike_dungeon_bin);
    RogueLikeDungeonRuntimeMgr::fromBin(&this->roguelike_runtime_mgr_, v38);
    inited = proto::RoguelikeDungeonScheduleBin::init_world_level(roguelike_dungeon_bin);
    v37 = *(_BYTE *)(((unsigned __int64)&this->init_world_level_ >> 3) + 0x7FFF8000);
    LOBYTE(v38) = v37 != 0;
    v39 = (v37 != 0) & (unsigned __int8)((char)((((_BYTE)this - 92) & 7) + 3) >= v37);
    if ( (_BYTE)v39 )
      __asan_report_store4(&this->init_world_level_, v38, v39);
    this->init_world_level_ = inited;
    v40 = proto::RoguelikeDungeonScheduleBin::trans_no_count(roguelike_dungeon_bin);
    if ( *(_BYTE *)(((unsigned __int64)&this->trans_no_count_ >> 3) + 0x7FFF8000) )
      v40 = __asan_report_store8(&this->trans_no_count_, v38);
    this->trans_no_count_ = v40;
    result = 0;
  }
LABEL_29:
  if ( v52 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 397: range 0000000016C44400-0000000016C44AE4
int32_t __cdecl RoguelikeDungeonActivity::toScheduleBin(
        const RoguelikeDungeonActivity *const this,
        proto::ActivityScheduleBin *bin)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax
  google::protobuf::RepeatedField<unsigned int> *v3; // rax
  proto::RogueDungeonBin *v5; // rax
  std::unordered_map<proto::VirtualItem,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::unordered_map<proto::VirtualItem,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  proto::RoguelikeDungeonScheduleBin *roguelike_dungeon_bin; // [rsp+28h] [rbp-A8h]
  const std::unordered_map<proto::VirtualItem,unsigned int> *__for_range; // [rsp+30h] [rbp-A0h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range_0; // [rsp+38h] [rbp-98h]
  const std::unordered_map<unsigned int,RogueStageData> *__for_range_1; // [rsp+40h] [rbp-90h]
  const std::pair<unsigned int const,RogueStageData> *v12; // [rsp+48h] [rbp-88h]
  std::tuple_element<0,const std::pair<unsigned int const,RogueStageData> >::type *stage_id; // [rsp+50h] [rbp-80h]
  std::tuple_element<1,const std::pair<unsigned int const,RogueStageData> >::type *stage_data; // [rsp+58h] [rbp-78h]
  proto::RogueStageBin *stage_bin; // [rsp+60h] [rbp-70h]
  const std::pair<unsigned int const,unsigned int> *v16; // [rsp+68h] [rbp-68h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *id; // [rsp+70h] [rbp-60h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *level; // [rsp+78h] [rbp-58h]
  proto::RoguelikeShikigamiBin *shikigami_bin; // [rsp+80h] [rbp-50h]
  const std::pair<const proto::VirtualItem,unsigned int> *v20; // [rsp+88h] [rbp-48h]
  std::tuple_element<0,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_type; // [rsp+90h] [rbp-40h]
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_num; // [rsp+98h] [rbp-38h]
  common::milog::MiLogStream v23; // [rsp+A0h] [rbp-30h] BYREF

  roguelike_dungeon_bin = proto::ActivityScheduleBin::mutable_roguelike_dungeon_bin(bin);
  __for_range = &this->activity_coin_map_;
  __for_begin._M_cur = std::unordered_map<proto::VirtualItem,unsigned int>::begin(&this->activity_coin_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<proto::VirtualItem,unsigned int>::end(&this->activity_coin_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<proto::VirtualItem const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v20 = std::__detail::_Node_const_iterator<std::pair<proto::VirtualItem const,unsigned int>,false,false>::operator*(&__for_begin);
    coin_type = std::get<0ul,proto::VirtualItem const,unsigned int>(v20);
    coin_num = (std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *)std::get<1ul,proto::VirtualItem const,unsigned int>(v20);
    if ( *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)coin_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(coin_type);
    }
    if ( *coin_type == ITEM_VIRTUAL_ROGUELIKE_COIN_A )
    {
      if ( *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)coin_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(coin_num);
      }
      proto::RoguelikeDungeonScheduleBin::set_coin_a(roguelike_dungeon_bin, *coin_num);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)coin_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(coin_type);
      }
      if ( *coin_type == ITEM_VIRTUAL_ROGUELIKE_COIN_B )
      {
        if ( *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)coin_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(coin_num);
        }
        proto::RoguelikeDungeonScheduleBin::set_coin_b(roguelike_dungeon_bin, *coin_num);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)coin_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(coin_type);
        }
        if ( *coin_type == ITEM_VIRTUAL_ROGUELIKE_COIN_C )
        {
          if ( *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)coin_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(coin_num);
          }
          proto::RoguelikeDungeonScheduleBin::set_coin_c(roguelike_dungeon_bin, *coin_num);
        }
      }
    }
    std::__detail::_Node_const_iterator<std::pair<proto::VirtualItem const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = &this->shikigami_map_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<const proto::VirtualItem,unsigned int>,false>::__node_type *)std::unordered_map<unsigned int,unsigned int>::begin(&this->shikigami_map_)._M_cur;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<const proto::VirtualItem,unsigned int>,false>::__node_type *)std::unordered_map<unsigned int,unsigned int>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_end) )
  {
    v16 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&__for_begin);
    id = std::get<0ul,unsigned int const,unsigned int>(v16);
    level = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v16);
    shikigami_bin = proto::RoguelikeDungeonScheduleBin::add_shikigami_list(roguelike_dungeon_bin);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    proto::RoguelikeShikigamiBin::set_id(shikigami_bin, *id);
    if ( *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(level);
    }
    proto::RoguelikeShikigamiBin::set_level(shikigami_bin, *level);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&__for_begin);
  }
  v2 = proto::RoguelikeDungeonScheduleBin::mutable_rune_list(roguelike_dungeon_bin);
  common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(&this->rune_set_, v2);
  v3 = proto::RoguelikeDungeonScheduleBin::mutable_equipped_rune_list(roguelike_dungeon_bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->equipped_rune_vec_, v3);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  proto::RoguelikeDungeonScheduleBin::set_is_content_closed(roguelike_dungeon_bin, this->is_content_closed_);
  if ( RoguelikeMiscMgr::toScheduleBin(&this->roguelike_misc_mgr_, bin) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/roguelike_dungeon_activity.cpp",
      "toScheduleBin",
      430);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      &v23,
      (const char (*)[30])"misc_mgr toScheduleBin failed");
    common::milog::MiLogStream::~MiLogStream(&v23);
    return -1;
  }
  else
  {
    __for_range_1 = &this->stage_map_;
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<const proto::VirtualItem,unsigned int>,false>::__node_type *)std::unordered_map<unsigned int,RogueStageData>::begin(&this->stage_map_)._M_cur;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<const proto::VirtualItem,unsigned int>,false>::__node_type *)std::unordered_map<unsigned int,RogueStageData>::end(__for_range_1)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,RogueStageData>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,RogueStageData>,false> *)&__for_begin,
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,RogueStageData>,false> *)&__for_end) )
    {
      v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,RogueStageData>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,RogueStageData>,false,false> *const)&__for_begin);
      stage_id = std::get<0ul,unsigned int const,RogueStageData>(v12);
      stage_data = (std::tuple_element<1,const std::pair<unsigned int const,RogueStageData> >::type *)std::get<1ul,unsigned int const,RogueStageData>(v12);
      stage_bin = proto::RoguelikeDungeonScheduleBin::add_stage_bin_list(roguelike_dungeon_bin);
      RogueStageData::toBin(stage_data, stage_bin);
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,RogueStageData>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,RogueStageData>,false,false> *const)&__for_begin);
    }
    v5 = proto::RoguelikeDungeonScheduleBin::mutable_dungeon_runtime_bin(roguelike_dungeon_bin);
    RogueLikeDungeonRuntimeMgr::toBin(&this->roguelike_runtime_mgr_, v5);
    if ( *(_BYTE *)(((unsigned __int64)&this->init_world_level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->init_world_level_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->init_world_level_);
    }
    proto::RoguelikeDungeonScheduleBin::set_init_world_level(roguelike_dungeon_bin, this->init_world_level_);
    if ( *(_BYTE *)(((unsigned __int64)&this->trans_no_count_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->trans_no_count_);
    proto::RoguelikeDungeonScheduleBin::set_trans_no_count(roguelike_dungeon_bin, this->trans_no_count_);
    return 0;
  }
};

// Line 445: range 0000000016C44AE6-0000000016C452AD
int32_t __cdecl RoguelikeDungeonActivity::toClient(
        RoguelikeDungeonActivity *const this,
        proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned int *v4; // rax
  uint32_t *v5; // rdx
  google::protobuf::RepeatedField<unsigned int> *v6; // rax
  ActivityRogueExcelConfigMgr *p_activity_rogue_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  proto::RogueShowAvatarTeamInfo *v9; // rax
  uint32_t ExploredCellCount; // eax
  google::protobuf::RepeatedPtrField<proto::RoguelikeRuneRecord> *v11; // rax
  ReviseLevelGrowExcelConfigMgr *p_revise_level_grow_config_mgr; // rbx
  uint32_t InitWorldLevel; // ecx
  google::protobuf::uint32 ReviseLevel; // eax
  uint32_t ContentCloseTime; // eax
  unsigned int val; // [rsp+10h] [rbp-C0h] BYREF
  uint32_t rune_id; // [rsp+14h] [rbp-BCh]
  std::unordered_map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::unordered_map<unsigned int,unsigned int>::iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  proto::RoguelikeDungeonActivityDetailInfo *detail_info; // [rsp+28h] [rbp-A8h]
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-A0h]
  std::unordered_set<unsigned int> *__for_range_0; // [rsp+38h] [rbp-98h]
  std::unordered_map<unsigned int,RogueStageData> *__for_range_1; // [rsp+40h] [rbp-90h]
  const std::pair<unsigned int const,RogueStageData> *v24; // [rsp+48h] [rbp-88h]
  std::tuple_element<0,const std::pair<unsigned int const,RogueStageData> >::type *stage_id; // [rsp+50h] [rbp-80h]
  std::tuple_element<1,const std::pair<unsigned int const,RogueStageData> >::type *stage_data; // [rsp+58h] [rbp-78h]
  const data::RogueStageExcelConfig *stage_config_ptr; // [rsp+60h] [rbp-70h]
  proto::RogueStageInfo *client_stage; // [rsp+68h] [rbp-68h]
  const std::pair<unsigned int const,unsigned int> *v29; // [rsp+70h] [rbp-60h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *id; // [rsp+78h] [rbp-58h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *level; // [rsp+80h] [rbp-50h]
  proto::RoguelikeShikigamiRecord *shikigami_record; // [rsp+88h] [rbp-48h]
  std::shared_ptr<Config> v33; // [rsp+90h] [rbp-40h] BYREF
  common::milog::MiLogStream v34; // [rsp+A0h] [rbp-30h] BYREF

  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike_dungeon_activity.cpp",
      "toClient",
      448);
    v2 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v34,
           (const char (*)[48])"[ROGUELIKE] BaseActivity::toClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v34);
    return -1;
  }
  else
  {
    detail_info = proto::ActivityInfo::mutable_roguelike_dungoen_info(activity_info);
    __for_range = &this->shikigami_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->shikigami_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->shikigami_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
    {
      v29 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
      id = std::get<0ul,unsigned int const,unsigned int>(v29);
      level = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v29);
      shikigami_record = proto::RoguelikeDungeonActivityDetailInfo::add_shikigami_list(detail_info);
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(id);
      }
      proto::RoguelikeShikigamiRecord::set_id(shikigami_record, *id);
      if ( *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(level);
      }
      proto::RoguelikeShikigamiRecord::set_level(shikigami_record, *level);
      std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
    }
    __for_range_0 = &this->rune_set_;
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::unordered_set<unsigned int>::begin(&this->rune_set_)._M_cur;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<unsigned int,false>(
              (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_begin,
              (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end) )
    {
      v4 = (unsigned int *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
      v5 = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4);
      }
      rune_id = *v5;
      proto::RoguelikeDungeonActivityDetailInfo::add_rune_list(detail_info, rune_id);
      std::__detail::_Node_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
    }
    v6 = proto::RoguelikeDungeonActivityDetailInfo::mutable_equipped_rune_list(detail_info);
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->equipped_rune_vec_, v6);
    __for_range_1 = &this->stage_map_;
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::unordered_map<unsigned int,RogueStageData>::begin(&this->stage_map_)._M_cur;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::unordered_map<unsigned int,RogueStageData>::end(__for_range_1)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,RogueStageData>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,RogueStageData>,false> *)&__for_begin,
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,RogueStageData>,false> *)&__for_end) )
    {
      v24 = std::__detail::_Node_iterator<std::pair<unsigned int const,RogueStageData>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,RogueStageData>,false,false> *const)&__for_begin);
      stage_id = std::get<0ul,unsigned int const,RogueStageData>(v24);
      stage_data = (std::tuple_element<1,const std::pair<unsigned int const,RogueStageData> >::type *)std::get<1ul,unsigned int const,RogueStageData>(v24);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v33);
      p_activity_rogue_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33)->design_config.txt_config_mgr.activity_rogue_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(stage_id);
      }
      stage_config_ptr = data::ActivityRogueExcelConfigMgrBase::findRogueStageExcelConfig(
                           p_activity_rogue_config_mgr,
                           *stage_id);
      std::shared_ptr<Config>::~shared_ptr(&v33);
      if ( stage_config_ptr )
      {
        client_stage = proto::RoguelikeDungeonActivityDetailInfo::add_stage_list(detail_info);
        RogueStageData::toClient(stage_data, client_stage);
        if ( *(char *)(((unsigned __int64)&stage_data->is_in_combat >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&stage_data->is_in_combat);
        if ( stage_data->is_in_combat )
        {
          v9 = proto::RogueStageInfo::mutable_avatar_team(client_stage);
          RogueLikeDungeonRuntimeMgr::teamToClient(&this->roguelike_runtime_mgr_, v9);
          if ( *(_BYTE *)(((unsigned __int64)&stage_data->cur_level >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)stage_data + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_data->cur_level >> 3)
                                                                      + 0x7FFF8000) )
          {
            __asan_report_load4(&stage_data->cur_level);
          }
          proto::RogueStageInfo::set_cur_level(client_stage, stage_data->cur_level);
          ExploredCellCount = RogueLikeDungeonRuntimeMgr::getExploredCellCount(&this->roguelike_runtime_mgr_);
          proto::RogueStageInfo::set_explore_cell_num(client_stage, ExploredCellCount);
          v11 = proto::RogueStageInfo::mutable_rune_record_list(client_stage);
          RoguelikeMiscMgr::roguelikeRuneRecordToClient(&this->roguelike_misc_mgr_, v11);
        }
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v33);
        p_revise_level_grow_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33)->design_config.txt_config_mgr.revise_level_grow_config_mgr;
        InitWorldLevel = RoguelikeDungeonActivity::getInitWorldLevel(this);
        if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->revise_level_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)stage_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_config_ptr->revise_level_id >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&stage_config_ptr->revise_level_id);
        }
        ReviseLevel = ReviseLevelGrowExcelConfigMgr::findReviseLevel(
                        p_revise_level_grow_config_mgr,
                        stage_config_ptr->revise_level_id,
                        InitWorldLevel);
        proto::RogueStageInfo::set_revise_monster_level(client_stage, ReviseLevel);
        std::shared_ptr<Config>::~shared_ptr(&v33);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike_dungeon_activity.cpp",
          "toClient",
          471);
        v8 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
               &v34,
               (const char (*)[47])"[ROGUE] stage_config_ptr is nullptr, stage_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, stage_id);
        common::milog::MiLogStream::~MiLogStream(&v34);
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,RogueStageData>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,RogueStageData>,false,false> *const)&__for_begin);
    }
    if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_content_closed_);
    proto::RoguelikeDungeonActivityDetailInfo::set_is_content_closed(detail_info, this->is_content_closed_);
    ContentCloseTime = RoguelikeDungeonActivity::getContentCloseTime(this);
    proto::RoguelikeDungeonActivityDetailInfo::set_content_close_time(detail_info, ContentCloseTime);
    return 0;
  }
};

// Line 491: range 0000000016C452AE-0000000016C453B3
uint32_t __cdecl RoguelikeDungeonActivity::getContentCloseTime(const RoguelikeDungeonActivity *const this)
{
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  uint32_t v2; // ecx
  uint32_t BeginTimeByOpenDay; // ebx
  std::shared_ptr<Config> v5[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5)->design_config.txt_config_mgr.new_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->activity_id_);
  }
  v2 = NewActivityExcelConfigMgr::getActivityContentStayDayCount(p_new_activity_config_mgr, this->activity_id_) + 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->schedule_id_);
  }
  BeginTimeByOpenDay = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, v2);
  std::shared_ptr<Config>::~shared_ptr(v5);
  return BeginTimeByOpenDay;
};

// Line 496: range 0000000016C453B4-0000000016C457C6
void __cdecl RoguelikeDungeonActivity::onClear(RoguelikeDungeonActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *v4; // rax
  uint32_t v5; // edi
  __int64 v6; // rsi
  __int64 v7; // rdx
  std::unordered_map<proto::VirtualItem,unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-B0h] BYREF
  std::unordered_map<proto::VirtualItem,unsigned int>::iterator __for_end; // [rsp+18h] [rbp-A8h] BYREF
  std::unordered_map<proto::VirtualItem,unsigned int> *__for_range; // [rsp+20h] [rbp-A0h]
  const std::pair<const proto::VirtualItem,unsigned int> *v12; // [rsp+28h] [rbp-98h]
  std::tuple_element<0,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_type; // [rsp+30h] [rbp-90h]
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_num; // [rsp+38h] [rbp-88h]
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-80h] BYREF
  char v16[96]; // [rsp+60h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 14 sub_reason:498";
  *(_QWORD *)(v1 + 16) = RoguelikeDungeonActivity::onClear;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  SubItemReason::SubItemReason((SubItemReason *const)(v1 + 32), ACTION_REASON_ACTIVITY_EXPIRE_ITEM);
  __for_range = &this->activity_coin_map_;
  __for_begin._M_cur = std::unordered_map<proto::VirtualItem,unsigned int>::begin(&this->activity_coin_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<proto::VirtualItem,unsigned int>::end(&this->activity_coin_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<proto::VirtualItem const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v12 = std::__detail::_Node_iterator<std::pair<proto::VirtualItem const,unsigned int>,false,false>::operator*(&__for_begin);
    coin_type = std::get<0ul,proto::VirtualItem const,unsigned int>(v12);
    v4 = (std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *)std::get<1ul,proto::VirtualItem const,unsigned int>(v12);
    coin_num = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    if ( *coin_num )
    {
      v5 = *coin_num;
      if ( *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)coin_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) )
      {
        v5 = (unsigned int)coin_type;
        __asan_report_load4(coin_type);
      }
      if ( RoguelikeDungeonActivity::subActivityCoin(this, *coin_type, v5, (const SubItemReason *)(v1 + 32), 0) )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike_dungeon_activity.cpp",
          "onClear",
          505);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          &v15,
          (const char (*)[35])"[ROGUELIKE] subActivityCoin failed");
        common::milog::MiLogStream::~MiLogStream(&v15);
      }
    }
    std::__detail::_Node_iterator<std::pair<proto::VirtualItem const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  std::unordered_map<unsigned int,RogueStageData>::clear(&this->stage_map_);
  std::unordered_map<proto::VirtualItem,unsigned int>::clear(&this->activity_coin_map_);
  std::unordered_map<unsigned int,unsigned int>::clear(&this->shikigami_map_);
  std::unordered_set<unsigned int>::clear(&this->rune_set_);
  std::vector<unsigned int>::clear(&this->equipped_rune_vec_);
  RoguelikeMiscMgr::clearRoguelikeDungeonMiscData(&this->roguelike_misc_mgr_);
  RogueLikeDungeonRuntimeMgr::clearAll(&this->roguelike_runtime_mgr_);
  v6 = (((_BYTE)this - 92) & 7u) + 3;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->init_world_level_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->init_world_level_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->init_world_level_, v6, v7);
  this->init_world_level_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_, v6, &this->is_content_closed_);
  this->is_content_closed_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->trans_no_count_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->trans_no_count_, v6);
  this->trans_no_count_ = 0LL;
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 522: range 0000000016C457C8-0000000016C45BE3
void __cdecl RoguelikeDungeonActivity::onPreStart(RoguelikeDungeonActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // rbx
  RogueStageData *v4; // rax
  std::unordered_map<proto::VirtualItem,unsigned int>::key_type *p_k; // rsi
  std::unordered_map<proto::VirtualItem,unsigned int>::mapped_type *v6; // rax
  _DWORD *v7; // rdx
  char v8; // cl
  std::unordered_map<proto::VirtualItem,unsigned int>::key_type *v9; // rsi
  std::unordered_map<proto::VirtualItem,unsigned int>::mapped_type *v10; // rax
  _DWORD *v11; // rdx
  char v12; // cl
  std::unordered_map<proto::VirtualItem,unsigned int>::key_type *v13; // rsi
  std::unordered_map<proto::VirtualItem,unsigned int>::mapped_type *v14; // rax
  _DWORD *v15; // rdx
  char v16; // cl
  std::unordered_map<proto::VirtualItem,unsigned int>::key_type __k; // [rsp+1Ch] [rbp-264h] BYREF
  std::unordered_map<unsigned int,data::RogueStageExcelConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-260h] BYREF
  std::unordered_map<unsigned int,data::RogueStageExcelConfig>::const_iterator __for_end; // [rsp+28h] [rbp-258h] BYREF
  const std::unordered_map<unsigned int,data::RogueStageExcelConfig> *__for_range; // [rsp+30h] [rbp-250h]
  const std::pair<unsigned int const,data::RogueStageExcelConfig> *v21; // [rsp+38h] [rbp-248h]
  std::tuple_element<0,const std::pair<unsigned int const,data::RogueStageExcelConfig> >::type *stage_id; // [rsp+40h] [rbp-240h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RogueStageExcelConfig> >::type *stage_config; // [rsp+48h] [rbp-238h]
  std::shared_ptr<Config> v24; // [rsp+50h] [rbp-230h] BYREF
  char v25[544]; // [rsp+60h] [rbp-220h] BYREF

  v1 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(512LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 400 14 stage_data:526";
  *(_QWORD *)(v1 + 16) = RoguelikeDungeonActivity::onPreStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862734] = -202116109;
  v3[536862735] = -202116109;
  std::unordered_map<unsigned int,RogueStageData>::clear(&this->stage_map_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v24);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24)->design_config.txt_config_mgr.activity_rogue_config_mgr.rogue_stage_excel_config_map;
  std::shared_ptr<Config>::~shared_ptr(&v24);
  __for_begin._M_cur = std::unordered_map<unsigned int,data::RogueStageExcelConfig>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::RogueStageExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::RogueStageExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v21 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RogueStageExcelConfig>,false,false>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,data::RogueStageExcelConfig>(v21);
    stage_config = (std::tuple_element<1,const std::pair<unsigned int const,data::RogueStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RogueStageExcelConfig>(v21);
    RogueStageData::RogueStageData((RogueStageData *const)(v1 + 48));
    if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(stage_id);
    }
    *(_DWORD *)(v1 + 48) = *stage_id;
    v4 = std::unordered_map<unsigned int,RogueStageData>::operator[](&this->stage_map_, stage_id);
    RogueStageData::operator=(v4, (const RogueStageData *)(v1 + 48));
    RogueStageData::~RogueStageData((RogueStageData *const)(v1 + 48));
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RogueStageExcelConfig>,false,false>::operator++(&__for_begin);
  }
  __k = ITEM_VIRTUAL_ROGUELIKE_COIN_A;
  p_k = &__k;
  v6 = std::unordered_map<proto::VirtualItem,unsigned int>::operator[](&this->activity_coin_map_, &__k);
  v7 = v6;
  v8 = *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)(((unsigned __int8)v6 & 7) + 3) >= v8 )
  {
    LOBYTE(p_k) = v8 != 0;
    __asan_report_store4(v6, p_k, v6);
  }
  *v7 = 0;
  __k = ITEM_VIRTUAL_ROGUELIKE_COIN_B;
  v9 = &__k;
  v10 = std::unordered_map<proto::VirtualItem,unsigned int>::operator[](&this->activity_coin_map_, &__k);
  v11 = v10;
  v12 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)(((unsigned __int8)v10 & 7) + 3) >= v12 )
  {
    LOBYTE(v9) = v12 != 0;
    __asan_report_store4(v10, v9, v10);
  }
  *v11 = 0;
  __k = ITEM_VIRTUAL_ROGUELIKE_COIN_C;
  v13 = &__k;
  v14 = std::unordered_map<proto::VirtualItem,unsigned int>::operator[](&this->activity_coin_map_, &__k);
  v15 = v14;
  v16 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
  if ( v16 != 0 && (char)(((unsigned __int8)v14 & 7) + 3) >= v16 )
  {
    LOBYTE(v13) = v16 != 0;
    __asan_report_store4(v14, v13, v14);
  }
  *v15 = 0;
  if ( v25 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 537: range 0000000016C45BE4-0000000016C45C02
int32_t __cdecl RoguelikeDungeonActivity::init(RoguelikeDungeonActivity *const this)
{
  RoguelikeDungeonActivity::registerEvent(this);
  return 0;
};

// Line 543: range 0000000016C45C04-0000000016C45D54
void __cdecl RoguelikeDungeonActivity::onStart(RoguelikeDungeonActivity *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  __int64 v2; // rsi
  PlayerBasicComp *BasicComp; // rax
  uint32_t v4; // ecx
  char v5; // dl
  __int64 v6; // rdx
  std::shared_ptr<Config> v7; // [rsp+10h] [rbp-40h] BYREF
  std::vector<unsigned int> rune_vec; // [rsp+20h] [rbp-30h] BYREF

  RoguelikeDungeonActivity::registerEvent(this);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v7);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7);
  ActivityRogueExcelConfigMgr::getDefaultUnlockRuneVec(
    &rune_vec,
    &v1->design_config.txt_config_mgr.activity_rogue_config_mgr);
  RoguelikeDungeonActivity::updateUnlockRuneVec(this, &rune_vec);
  std::vector<unsigned int>::~vector(&rune_vec);
  std::shared_ptr<Config>::~shared_ptr(&v7);
  v2 = 0LL;
  BaseActivity::notifyClientData(this, 0);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  v4 = PlayerBasicComp::calcWorldLevelLimit(BasicComp);
  v5 = *(_BYTE *)(((unsigned __int64)&this->init_world_level_ >> 3) + 0x7FFF8000);
  LOBYTE(v2) = v5 != 0;
  v6 = (v5 != 0) & (unsigned __int8)((char)((((_BYTE)this - 92) & 7) + 3) >= v5);
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->init_world_level_, v2, v6);
  this->init_world_level_ = v4;
};

// Line 552: range 0000000016C45D56-0000000016C45ED1
void __cdecl RoguelikeDungeonActivity::onLogin(RoguelikeDungeonActivity *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  char v2; // al
  std::shared_ptr<Config> v3; // [rsp+10h] [rbp-40h] BYREF
  std::vector<unsigned int> rune_vec; // [rsp+20h] [rbp-30h] BYREF

  BaseActivity::onLogin(this);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v3);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v3);
  ActivityRogueExcelConfigMgr::getDefaultUnlockRuneVec(
    &rune_vec,
    &v1->design_config.txt_config_mgr.activity_rogue_config_mgr);
  RoguelikeDungeonActivity::updateUnlockRuneVec(this, &rune_vec);
  std::vector<unsigned int>::~vector(&rune_vec);
  std::shared_ptr<Config>::~shared_ptr(&v3);
  if ( !BaseActivity::isSettled(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_content_closed_);
    if ( !this->is_content_closed_ )
      goto LABEL_9;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  if ( !Player::isRelogin(this->player_) )
    v2 = 1;
  else
LABEL_9:
    v2 = 0;
  if ( v2 )
    RogueLikeDungeonRuntimeMgr::clearAll(&this->roguelike_runtime_mgr_);
  BaseActivity::notifyClientData(this, 0);
};

// Line 564: range 0000000016C45ED2-0000000016C4604C
void __cdecl RoguelikeDungeonActivity::updateUnlockRuneVec(
        RoguelikeDungeonActivity *const this,
        const std::vector<unsigned int> *rune_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rax
  _DWORD *v6; // rdx
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-68h]
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 rune_id:565";
  *(_QWORD *)(v2 + 16) = RoguelikeDungeonActivity::updateUnlockRuneVec;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  __for_range = rune_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(rune_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(rune_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v2 + 32) = *v6;
    std::unordered_set<unsigned int>::insert(
      &this->rune_set_,
      (const std::unordered_set<unsigned int>::value_type *)(v2 + 32));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 572: range 0000000016C4604E-0000000016C461BC
void __cdecl RoguelikeDungeonActivity::fillActivityCoinInfo(
        RoguelikeDungeonActivity *const this,
        google::protobuf::Map<unsigned int,unsigned int> *activity_coin_map)
{
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *v2; // rax
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type v3; // ebx
  google::protobuf::Map<unsigned int,unsigned int>::key_type *p_key; // rsi
  unsigned int *v5; // rax
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *v6; // rdx
  char v7; // cl
  google::protobuf::Map<unsigned int,unsigned int>::key_type key; // [rsp+1Ch] [rbp-44h] BYREF
  std::unordered_map<proto::VirtualItem,unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-40h] BYREF
  std::unordered_map<proto::VirtualItem,unsigned int>::iterator __for_end; // [rsp+28h] [rbp-38h] BYREF
  std::unordered_map<proto::VirtualItem,unsigned int> *__for_range; // [rsp+30h] [rbp-30h]
  const std::pair<const proto::VirtualItem,unsigned int> *v13; // [rsp+38h] [rbp-28h]
  std::tuple_element<0,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_type; // [rsp+40h] [rbp-20h]
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_num; // [rsp+48h] [rbp-18h]

  __for_range = &this->activity_coin_map_;
  __for_begin._M_cur = std::unordered_map<proto::VirtualItem,unsigned int>::begin(&this->activity_coin_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<proto::VirtualItem,unsigned int>::end(&this->activity_coin_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<proto::VirtualItem const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v13 = std::__detail::_Node_iterator<std::pair<proto::VirtualItem const,unsigned int>,false,false>::operator*(&__for_begin);
    coin_type = std::get<0ul,proto::VirtualItem const,unsigned int>(v13);
    v2 = (std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *)std::get<1ul,proto::VirtualItem const,unsigned int>(v13);
    coin_num = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    v3 = *coin_num;
    if ( *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)coin_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(coin_type);
    }
    key = *coin_type;
    p_key = &key;
    v5 = google::protobuf::Map<unsigned int,unsigned int>::operator[](activity_coin_map, &key);
    v6 = v5;
    v7 = *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000);
    if ( v7 != 0 && (char)(((unsigned __int8)v5 & 7) + 3) >= v7 )
    {
      LOBYTE(p_key) = v7 != 0;
      __asan_report_store4(v5, p_key, v5);
    }
    *v6 = v3;
    std::__detail::_Node_iterator<std::pair<proto::VirtualItem const,unsigned int>,false,false>::operator++(&__for_begin);
  }
};

// Line 580: range 0000000016C461BE-0000000016C4665A
int32_t __cdecl RoguelikeDungeonActivity::execAction(
        RoguelikeDungeonActivity *const this,
        const data::NewActivityExec *action_exec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  data::NewActivityActionType type; // eax
  common::milog::MiLogStream *v6; // r13
  common::milog::MiLogStream *v7; // rax
  const std::string *v8; // rax
  common::milog::MiLogStream *v9; // r13
  const std::string *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  int32_t result; // eax
  unsigned __int64 val; // [rsp+10h] [rbp-90h] BYREF
  RogueStageData *stage_ptr; // [rsp+18h] [rbp-88h]
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-80h] BYREF
  char v19[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 stage_id:590";
  *(_QWORD *)(v2 + 16) = RoguelikeDungeonActivity::execAction;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&action_exec->type);
  }
  type = action_exec->type;
  if ( type == NEW_ACTIVITY_ACTION_OPEN_ROGUELIKE_DUNGEON_STAGE )
  {
    if ( !std::vector<std::string>::size(&action_exec->param) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike_dungeon_activity.cpp",
        "execAction",
        587);
      v6 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v18,
             (const char (*)[27])"[ROGUE] action param size ");
      val = std::vector<std::string>::size(&action_exec->param);
      v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, &val);
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])off_25EFA1C0);
      common::milog::MiLogStream::~MiLogStream(&v18);
      result = -1;
      goto LABEL_25;
    }
    *(_DWORD *)(v2 + 32) = 0;
    v8 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
    if ( common::tools::StringUtils::strToNum<unsigned int>(v8, (unsigned int *)(v2 + 32), 1) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike_dungeon_activity.cpp",
        "execAction",
        593);
      v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             &v18,
             (const char (*)[18])"[ROGUE] strToNum ");
      v10 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, v10);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream(&v18);
      result = -1;
      goto LABEL_25;
    }
    stage_ptr = RoguelikeDungeonActivity::findStage(this, *(_DWORD *)(v2 + 32));
    if ( !stage_ptr )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike_dungeon_activity.cpp",
        "execAction",
        599);
      v12 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v18,
              (const char (*)[35])"[ROGUE] stage not found, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v18);
      result = -1;
      goto LABEL_25;
    }
    if ( *(_BYTE *)(((unsigned __int64)&stage_ptr->is_open >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)stage_ptr + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_ptr->is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&stage_ptr->is_open);
    }
    if ( !stage_ptr->is_open )
    {
      v13 = ((_BYTE)stage_ptr + 12) & 7;
      v14 = (*(_BYTE *)(((unsigned __int64)&stage_ptr->is_open >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&stage_ptr->is_open >> 3) + 0x7FFF8000));
      if ( (_BYTE)v14 )
        __asan_report_store1(&stage_ptr->is_open, v13, v14);
      stage_ptr->is_open = 1;
      BaseActivity::notifyClientData(this, 0);
    }
  }
  else
  {
    if ( type != NEW_ACTIVITY_ACTION_CLOSE_ROGUELIKE_DUNGEON_CONTENT )
    {
      result = BaseActivity::execAction(this, action_exec);
      goto LABEL_25;
    }
    if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_content_closed_, action_exec, &this->is_content_closed_);
    this->is_content_closed_ = 1;
    BaseActivity::notifyClientData(this, 0);
  }
  result = 0;
LABEL_25:
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 623: range 0000000016C4665C-0000000016C46BAA
void __cdecl RoguelikeDungeonActivity::registerEvent(RoguelikeDungeonActivity *const this)
{
  unsigned __int64 v1; // r14
  __int64 v2; // rax
  _DWORD *v3; // r15
  PlayerEventComp *EventComp; // r12
  PlayerEventComp *v5; // r12
  PlayerEventComp *v6; // rbx
  PlayerEventComp *v7; // rbx
  PlayerEventComp *v8; // rbx
  std::enable_shared_from_this<BaseActivity> v9; // [rsp+60h] [rbp-A0h] BYREF
  char v10[144]; // [rsp+70h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:624 64 16 12 this_wtr:625";
  *(_QWORD *)(v1 + 16) = RoguelikeDungeonActivity::registerEvent;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v9);
  std::dynamic_pointer_cast<RoguelikeDungeonActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v9);
  std::weak_ptr<RoguelikeDungeonActivity>::weak_ptr<RoguelikeDungeonActivity,void>(
    (std::weak_ptr<RoguelikeDungeonActivity> *const)(v1 + 64),
    (const std::shared_ptr<RoguelikeDungeonActivity> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  EventComp = Player::getEventComp(this->player_);
  std::weak_ptr<RoguelikeDungeonActivity>::weak_ptr(
    (std::weak_ptr<RoguelikeDungeonActivity> *const)&v9,
    (const std::weak_ptr<RoguelikeDungeonActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<RoguelikeDungeonActivity,LeaveSceneEvent>(
    EventComp,
    (std::weak_ptr<RoguelikeDungeonActivity> *)&v9,
    (void (*)(RoguelikeDungeonActivity *, const LeaveSceneEvent *))RoguelikeDungeonActivity::onLeaveSceneEvent,
    0LL);
  std::weak_ptr<RoguelikeDungeonActivity>::~weak_ptr((std::weak_ptr<RoguelikeDungeonActivity> *const)&v9);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v5 = Player::getEventComp(this->player_);
  std::weak_ptr<RoguelikeDungeonActivity>::weak_ptr(
    (std::weak_ptr<RoguelikeDungeonActivity> *const)&v9,
    (const std::weak_ptr<RoguelikeDungeonActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<RoguelikeDungeonActivity,PostEnterSceneEvent>(
    v5,
    (std::weak_ptr<RoguelikeDungeonActivity> *)&v9,
    (void (*)(RoguelikeDungeonActivity *, const PostEnterSceneEvent *))RoguelikeDungeonActivity::onPostEnterSceneEvent,
    0LL);
  std::weak_ptr<RoguelikeDungeonActivity>::~weak_ptr((std::weak_ptr<RoguelikeDungeonActivity> *const)&v9);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v6 = Player::getEventComp(this->player_);
  std::weak_ptr<RoguelikeDungeonActivity>::weak_ptr(
    (std::weak_ptr<RoguelikeDungeonActivity> *const)&v9,
    (const std::weak_ptr<RoguelikeDungeonActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<RoguelikeDungeonActivity,GadgetDieEvent>(
    v6,
    (std::weak_ptr<RoguelikeDungeonActivity> *)&v9,
    (void (*)(RoguelikeDungeonActivity *, const GadgetDieEvent *))RoguelikeDungeonActivity::onGadgetDieEvent,
    0LL);
  std::weak_ptr<RoguelikeDungeonActivity>::~weak_ptr((std::weak_ptr<RoguelikeDungeonActivity> *const)&v9);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v7 = Player::getEventComp(this->player_);
  std::weak_ptr<RoguelikeDungeonActivity>::weak_ptr(
    (std::weak_ptr<RoguelikeDungeonActivity> *const)&v9,
    (const std::weak_ptr<RoguelikeDungeonActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<RoguelikeDungeonActivity,TeamServerGlobalValueChangeEvent>(
    v7,
    (std::weak_ptr<RoguelikeDungeonActivity> *)&v9,
    (void (*)(RoguelikeDungeonActivity *, const TeamServerGlobalValueChangeEvent *))RoguelikeDungeonActivity::onTeamServerGlobalValueChangeEvent,
    0LL);
  std::weak_ptr<RoguelikeDungeonActivity>::~weak_ptr((std::weak_ptr<RoguelikeDungeonActivity> *const)&v9);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v8 = Player::getEventComp(this->player_);
  std::weak_ptr<RoguelikeDungeonActivity>::weak_ptr(
    (std::weak_ptr<RoguelikeDungeonActivity> *const)&v9,
    (const std::weak_ptr<RoguelikeDungeonActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<RoguelikeDungeonActivity,AvatarDieEvent>(
    v8,
    (std::weak_ptr<RoguelikeDungeonActivity> *)&v9,
    (void (*)(RoguelikeDungeonActivity *, const AvatarDieEvent *))RoguelikeDungeonActivity::onAvatarDieEvent,
    0LL);
  std::weak_ptr<RoguelikeDungeonActivity>::~weak_ptr((std::weak_ptr<RoguelikeDungeonActivity> *const)&v9);
  std::weak_ptr<RoguelikeDungeonActivity>::~weak_ptr((std::weak_ptr<RoguelikeDungeonActivity> *const)(v1 + 64));
  std::shared_ptr<RoguelikeDungeonActivity>::~shared_ptr((std::shared_ptr<RoguelikeDungeonActivity> *const)(v1 + 32));
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 634: range 0000000016C46BAC-0000000016C46BF2
void __cdecl RoguelikeDungeonActivity::onLeaveSceneEvent(
        RoguelikeDungeonActivity *const this,
        const LeaveSceneEvent *event)
{
  RoguelikeMiscMgr::onLeaveSceneEvent(&this->roguelike_misc_mgr_, event);
  RogueLikeDungeonRuntimeMgr::onLeaveSceneEvent(&this->roguelike_runtime_mgr_, event);
};

// Line 640: range 0000000016C46BF4-0000000016C46C3A
void __cdecl RoguelikeDungeonActivity::onPostEnterSceneEvent(
        RoguelikeDungeonActivity *const this,
        const PostEnterSceneEvent *event)
{
  RogueLikeDungeonRuntimeMgr::onPostEnterSceneEvent(&this->roguelike_runtime_mgr_, event);
  RoguelikeMiscMgr::onPostEnterSceneEvent(&this->roguelike_misc_mgr_, event);
};

// Line 646: range 0000000016C46C3C-0000000016C46C68
void __cdecl RoguelikeDungeonActivity::onGadgetDieEvent(
        RoguelikeDungeonActivity *const this,
        const GadgetDieEvent *event)
{
  RogueLikeDungeonRuntimeMgr::onGadgetDieEvent(&this->roguelike_runtime_mgr_, event);
};

// Line 651: range 0000000016C46C6A-0000000016C46C96
void __cdecl RoguelikeDungeonActivity::onTeamServerGlobalValueChangeEvent(
        RoguelikeDungeonActivity *const this,
        const TeamServerGlobalValueChangeEvent *event)
{
  RoguelikeMiscMgr::onTeamServerGlobalValueChangeEvent(&this->roguelike_misc_mgr_, event);
};

// Line 656: range 0000000016C46C98-0000000016C46CC4
void __cdecl RoguelikeDungeonActivity::onAvatarDieEvent(
        RoguelikeDungeonActivity *const this,
        const AvatarDieEvent *event)
{
  RogueLikeDungeonRuntimeMgr::onAvatarDieEvent(&this->roguelike_runtime_mgr_, event);
};

// Line 661: range 0000000016C46CC6-0000000016C4710B
__int64 __fastcall RoguelikeDungeonActivity::checkAddActivityCoin(
        const RoguelikeDungeonActivity *const this,
        proto::VirtualItem coin_type,
        uint32_t add_num)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  std::__detail::_Node_const_iterator<std::pair<const proto::VirtualItem,unsigned int>,false,false>::pointer v9; // rdx
  unsigned int *p_second; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // eax
  std::__detail::_Node_iterator_base<std::pair<const proto::VirtualItem,unsigned int>,false> __y; // [rsp+18h] [rbp-C8h] BYREF
  common::milog::MiLogStream v19; // [rsp+20h] [rbp-C0h] BYREF
  char v20[160]; // [rsp+40h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 16 cur_coin_num:673 64 4 13 coin_type:660 80 4 11 add_num:660 96 8 8 iter:667";
  *(_QWORD *)(v3 + 16) = RoguelikeDungeonActivity::checkAddActivityCoin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 64) = coin_type;
  *(_DWORD *)(v3 + 80) = add_num;
  if ( !RoguelikeDungeonActivity::isCoinTypeValid(this, *(proto::VirtualItem *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/roguelike_dungeon_activity.cpp",
      "checkAddActivityCoin",
      664);
    v6 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v19,
           (const char (*)[45])"[ROGUELIKE] coin_type is invalid. coin_type:");
    common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
      v6,
      (const proto::VirtualItem *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = 0xFFFFFFFFLL;
    goto LABEL_26;
  }
  *(std::unordered_map<proto::VirtualItem,unsigned int>::const_iterator *)(v3 + 96) = std::unordered_map<proto::VirtualItem,unsigned int>::find(
                                                                                        &this->activity_coin_map_,
                                                                                        (const std::unordered_map<proto::VirtualItem,unsigned int>::key_type *)(v3 + 64));
  __y._M_cur = std::unordered_map<proto::VirtualItem,unsigned int>::end(&this->activity_coin_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<proto::VirtualItem const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<const proto::VirtualItem,unsigned int>,false> *)(v3 + 96),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/roguelike_dungeon_activity.cpp",
      "checkAddActivityCoin",
      670);
    v8 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
           &v19,
           (const char (*)[63])"[ROGUELIKE] coin_type is not in activity_coin_map_. coin_type:");
    common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
      v8,
      (const proto::VirtualItem *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = 0xFFFFFFFFLL;
    goto LABEL_26;
  }
  v9 = std::__detail::_Node_const_iterator<std::pair<proto::VirtualItem const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const proto::VirtualItem,unsigned int>,false,false> *const)(v3 + 96));
  p_second = &v9->second;
  if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_second);
  }
  *(_DWORD *)(v3 + 48) = v9->second;
  if ( (!*(_DWORD *)(v3 + 80)
     || !*(_DWORD *)(v3 + 48)
     || (unsigned int)(*(_DWORD *)(v3 + 48) + *(_DWORD *)(v3 + 80)) >= *(_DWORD *)(v3 + 80))
    && (*(_DWORD *)(v3 + 80)
     || *(_DWORD *)(v3 + 48)
     || (unsigned int)(*(_DWORD *)(v3 + 48) + *(_DWORD *)(v3 + 80)) <= *(_DWORD *)(v3 + 80)) )
  {
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike_dungeon_activity.cpp",
      "checkAddActivityCoin",
      676);
    v11 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v19,
            (const char (*)[39])"[ROGUELIKE] coin over flow, coin_type:");
    v12 = common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
            v11,
            (const proto::VirtualItem *)(v3 + 64));
    v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])", cur num: ");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
    v15 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])" ,add num: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream(&v19);
    v16 = *(_DWORD *)(v3 + 64);
    if ( v16 == 134 )
    {
      result = 10036LL;
    }
    else
    {
      if ( v16 > 134 )
        goto LABEL_24;
      if ( v16 == 132 )
      {
        result = 10034LL;
        goto LABEL_26;
      }
      if ( v16 == 133 )
        result = 10035LL;
      else
LABEL_24:
        result = 0xFFFFFFFFLL;
    }
  }
LABEL_26:
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 693: range 0000000016C4710C-0000000016C47519
__int64 __fastcall RoguelikeDungeonActivity::checkSubActivityCoin(
        const RoguelikeDungeonActivity *const this,
        proto::VirtualItem coin_type,
        uint32_t sub_num)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  std::__detail::_Node_const_iterator<std::pair<const proto::VirtualItem,unsigned int>,false,false>::pointer v9; // rdx
  unsigned int *p_second; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // eax
  std::__detail::_Node_iterator_base<std::pair<const proto::VirtualItem,unsigned int>,false> __y; // [rsp+18h] [rbp-C8h] BYREF
  common::milog::MiLogStream v19; // [rsp+20h] [rbp-C0h] BYREF
  char v20[160]; // [rsp+40h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 16 cur_coin_num:705 64 4 13 coin_type:692 80 4 11 sub_num:692 96 8 8 iter:699";
  *(_QWORD *)(v3 + 16) = RoguelikeDungeonActivity::checkSubActivityCoin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 64) = coin_type;
  *(_DWORD *)(v3 + 80) = sub_num;
  if ( !RoguelikeDungeonActivity::isCoinTypeValid(this, *(proto::VirtualItem *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/roguelike_dungeon_activity.cpp",
      "checkSubActivityCoin",
      696);
    v6 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v19,
           (const char (*)[45])"[ROGUELIKE] coin_type is invalid. coin_type:");
    common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
      v6,
      (const proto::VirtualItem *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = 0xFFFFFFFFLL;
    goto LABEL_21;
  }
  *(std::unordered_map<proto::VirtualItem,unsigned int>::const_iterator *)(v3 + 96) = std::unordered_map<proto::VirtualItem,unsigned int>::find(
                                                                                        &this->activity_coin_map_,
                                                                                        (const std::unordered_map<proto::VirtualItem,unsigned int>::key_type *)(v3 + 64));
  __y._M_cur = std::unordered_map<proto::VirtualItem,unsigned int>::end(&this->activity_coin_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<proto::VirtualItem const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<const proto::VirtualItem,unsigned int>,false> *)(v3 + 96),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/roguelike_dungeon_activity.cpp",
      "checkSubActivityCoin",
      702);
    v8 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
           &v19,
           (const char (*)[63])"[ROGUELIKE] coin_type is not in activity_coin_map_. coin_type:");
    common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
      v8,
      (const proto::VirtualItem *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = 0xFFFFFFFFLL;
    goto LABEL_21;
  }
  v9 = std::__detail::_Node_const_iterator<std::pair<proto::VirtualItem const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const proto::VirtualItem,unsigned int>,false,false> *const)(v3 + 96));
  p_second = &v9->second;
  if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_second);
  }
  *(_DWORD *)(v3 + 48) = v9->second;
  if ( *(_DWORD *)(v3 + 48) >= *(_DWORD *)(v3 + 80) )
  {
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/roguelike_dungeon_activity.cpp",
      "checkSubActivityCoin",
      708);
    v11 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            &v19,
            (const char (*)[40])"[ROGUELIKE] coin not enough, coin_type:");
    v12 = common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
            v11,
            (const proto::VirtualItem *)(v3 + 64));
    v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])", cur num: ");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
    v15 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])off_25F0E240);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream(&v19);
    v16 = *(_DWORD *)(v3 + 64);
    if ( v16 == 134 )
    {
      result = 10033LL;
    }
    else
    {
      if ( v16 > 134 )
        goto LABEL_19;
      if ( v16 == 132 )
      {
        result = 10031LL;
        goto LABEL_21;
      }
      if ( v16 == 133 )
        result = 10032LL;
      else
LABEL_19:
        result = 0xFFFFFFFFLL;
    }
  }
LABEL_21:
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 725: range 0000000016C4751A-0000000016C47969
__int64 __fastcall RoguelikeDungeonActivity::addActivityCoin(
        RoguelikeDungeonActivity *const this,
        proto::VirtualItem coin_type,
        uint32_t add_num,
        const ActionReason *reason,
        __int8 is_notify)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r13
  unsigned int v8; // r14d
  PlayerBasicComp *BasicComp; // rax
  std::unordered_map<proto::VirtualItem,unsigned int>::mapped_type *v10; // rax
  unsigned int *v11; // rdx
  SelectType v12; // r14d
  char *v13; // rsi
  std::unordered_map<proto::VirtualItem,unsigned int>::mapped_type *v14; // rax
  SelectType *v15; // rdx
  char v16; // cl
  PlayerItemComp *ItemComp; // r14
  data::ItemLimitType v18; // r15d
  std::unordered_map<proto::VirtualItem,unsigned int>::mapped_type *v19; // rax
  unsigned int *v20; // rdx
  __int64 result; // rax
  std::string v22; // [rsp+0h] [rbp-F0h]
  uint32_t reason_type; // [rsp+10h] [rbp-E0h]
  int32_t ret; // [rsp+38h] [rbp-B8h]
  uint32_t old_coin_num; // [rsp+3Ch] [rbp-B4h]
  std::string v27; // [rsp+40h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+60h] [rbp-90h] BYREF

  *(&v22._anon_0._M_allocated_capacity + 1) = (std::string::size_type)reason;
  v22._anon_0._M_local_buf[4] = is_notify;
  v5 = (unsigned __int64)v28;
  v22._M_string_length = (std::string::size_type)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 22 log_context_holder:732 64 4 13 coin_type:724";
  *(_QWORD *)(v5 + 16) = RoguelikeDungeonActivity::addActivityCoin;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 64) = coin_type;
  ret = RoguelikeDungeonActivity::checkAddActivityCoin(this, (proto::VirtualItem)*(_DWORD *)(v5 + 64), add_num);
  if ( ret )
  {
    v8 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v27, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0x67u, v22);
    std::string::~string(&v27);
    v10 = std::unordered_map<proto::VirtualItem,unsigned int>::operator[](
            &this->activity_coin_map_,
            (const std::unordered_map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v10);
    }
    old_coin_num = *v11;
    v12 = SAFE_ADD<unsigned int,unsigned int>(*v11, add_num);
    v13 = (char *)(v5 + 64);
    v14 = std::unordered_map<proto::VirtualItem,unsigned int>::operator[](
            &this->activity_coin_map_,
            (const std::unordered_map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    v15 = v14;
    v16 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
    if ( v16 != 0 && (char)(((unsigned __int8)v14 & 7) + 3) >= v16 )
    {
      LOBYTE(v13) = v16 != 0;
      __asan_report_store4(v14, v13, v14);
    }
    *v15 = v12;
    if ( v22._anon_0._M_local_buf[4] )
      BaseActivity::notifyActivityCoinInfo(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    ItemComp = Player::getItemComp(this->player_);
    if ( *(_BYTE *)(((*(&v22._anon_0._M_allocated_capacity + 1) + 4) >> 3) + 0x7FFF8000) != 0
      && (char)(((v22._anon_0._M_local_buf[8] + 4) & 7) + 3) >= *(_BYTE *)(((*(&v22._anon_0._M_allocated_capacity + 1)
                                                                           + 4) >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(*(&v22._anon_0._M_allocated_capacity + 1) + 4);
    }
    v18 = *(_DWORD *)(*(&v22._anon_0._M_allocated_capacity + 1) + 4);
    if ( *(_BYTE *)((*(&v22._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((v22._anon_0._M_local_buf[8] & 7) + 3) >= *(_BYTE *)((*(&v22._anon_0._M_allocated_capacity + 1) >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(*(&v22._anon_0._M_allocated_capacity + 1));
    }
    reason_type = **((_DWORD **)&v22._anon_0._M_allocated_capacity + 1);
    v19 = std::unordered_map<proto::VirtualItem,unsigned int>::operator[](
            &this->activity_coin_map_,
            (const std::unordered_map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    v20 = v19;
    if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v19);
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      *(proto::VirtualItem *)(v5 + 64),
      old_coin_num,
      *v20,
      reason_type,
      v18,
      0);
    v8 = 0;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
  }
  result = v8;
  if ( v22._M_string_length == v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 745: range 0000000016C4796A-0000000016C47D57
__int64 __fastcall RoguelikeDungeonActivity::subActivityCoin(
        RoguelikeDungeonActivity *const this,
        __int32 coin_type,
        __int32 sub_num,
        const SubItemReason *reason,
        __int8 is_notify)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r13
  unsigned int v8; // r14d
  PlayerBasicComp *BasicComp; // rax
  std::unordered_map<proto::VirtualItem,unsigned int>::mapped_type *v10; // rax
  uint32_t *v11; // rdx
  unsigned __int64 v12; // rax
  PlayerItemComp *ItemComp; // r14
  std::unordered_map<proto::VirtualItem,unsigned int>::mapped_type *v14; // rax
  unsigned int *v15; // rdx
  __int64 result; // rax
  std::string reason_type; // [rsp+0h] [rbp-E0h]
  uint32_t reason_typea; // [rsp+0h] [rbp-E0h]
  bool is_notifya; // [rsp+4h] [rbp-DCh]
  const SubItemReason *reasona; // [rsp+8h] [rbp-D8h]
  uint32_t sub_numa; // [rsp+10h] [rbp-D0h]
  RoguelikeDungeonActivity *thisa; // [rsp+18h] [rbp-C8h]
  int32_t ret; // [rsp+28h] [rbp-B8h]
  uint32_t old_coin_num; // [rsp+2Ch] [rbp-B4h]
  std::string v25; // [rsp+30h] [rbp-B0h] BYREF
  char v26[144]; // [rsp+50h] [rbp-90h] BYREF

  *(&reason_type._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(reason_type._anon_0._M_allocated_capacity) = coin_type;
  *(_DWORD *)reason_type._anon_0._M_local_buf = sub_num;
  reason_type._M_string_length = (std::string::size_type)reason;
  BYTE4(reason_type._M_dataplus._M_p) = is_notify;
  v5 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 22 log_context_holder:752 64 4 13 coin_type:744";
  *(_QWORD *)(v5 + 16) = RoguelikeDungeonActivity::subActivityCoin;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 64) = coin_type;
  ret = RoguelikeDungeonActivity::checkSubActivityCoin(
          this,
          (proto::VirtualItem)*(_DWORD *)(v5 + 64),
          reason_type._anon_0._M_allocated_capacity);
  if ( ret )
  {
    v8 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v25, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0x67u, reason_type);
    std::string::~string(&v25);
    v10 = std::unordered_map<proto::VirtualItem,unsigned int>::operator[](
            &thisa->activity_coin_map_,
            (const std::unordered_map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v10);
    }
    old_coin_num = *v11;
    v12 = (unsigned __int64)std::unordered_map<proto::VirtualItem,unsigned int>::operator[](
                              &thisa->activity_coin_map_,
                              (const std::unordered_map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0 && (char)((v12 & 7) + 3) >= *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load4(v12);
    *(_DWORD *)v12 -= sub_numa;
    if ( is_notifya )
      BaseActivity::notifyActivityCoinInfo(thisa);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    ItemComp = Player::getItemComp(thisa->player_);
    if ( *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)reasona & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(reasona);
    }
    reason_typea = reasona->reason_type;
    v14 = std::unordered_map<proto::VirtualItem,unsigned int>::operator[](
            &thisa->activity_coin_map_,
            (const std::unordered_map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    v15 = v14;
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v14);
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      *(proto::VirtualItem *)(v5 + 64),
      old_coin_num,
      *v15,
      reason_typea,
      ITEM_LIMIT_NONE,
      0);
    v8 = 0;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
  }
  result = v8;
  if ( v26 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 765: range 0000000016C47D58-0000000016C47EEA
__int64 __fastcall RoguelikeDungeonActivity::getActivityCoin(
        const RoguelikeDungeonActivity *const this,
        proto::VirtualItem coin_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<const proto::VirtualItem,unsigned int>,false,false>::pointer v6; // rdx
  unsigned int *p_second; // rax
  std::__detail::_Node_iterator_base<std::pair<const proto::VirtualItem,unsigned int>,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 coin_type:764 64 8 8 iter:766";
  *(_QWORD *)(v2 + 16) = RoguelikeDungeonActivity::getActivityCoin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = coin_type;
  *(std::unordered_map<proto::VirtualItem,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<proto::VirtualItem,unsigned int>::find(
                                                                                        &this->activity_coin_map_,
                                                                                        (const std::unordered_map<proto::VirtualItem,unsigned int>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<proto::VirtualItem,unsigned int>::end(&this->activity_coin_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<proto::VirtualItem const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<const proto::VirtualItem,unsigned int>,false> *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<proto::VirtualItem const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const proto::VirtualItem,unsigned int>,false,false> *const)(v2 + 64));
    p_second = &v6->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v6->second;
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 775: range 0000000016C47EEC-0000000016C47F1F
bool __cdecl RoguelikeDungeonActivity::isCoinTypeValid(
        const RoguelikeDungeonActivity *const this,
        proto::VirtualItem coin_type)
{
  return coin_type == ITEM_VIRTUAL_ROGUELIKE_COIN_A
      || coin_type == ITEM_VIRTUAL_ROGUELIKE_COIN_B
      || coin_type == ITEM_VIRTUAL_ROGUELIKE_COIN_C;
};

// Line 782: range 0000000016C47F20-0000000016C485BB
int32_t __cdecl RoguelikeDungeonActivity::doRoguelikeDungeonCardGacha(
        RoguelikeDungeonActivity *const this,
        const proto::DoRoguelikeDungeonCardGachaReq *req,
        proto::DoRoguelikeDungeonCardGachaRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint32_t v6; // eax
  common::milog::MiLogStream *v7; // r12
  int32_t v8; // r14d
  common::milog::MiLogStream *v9; // r12
  data::RogueMonsterPoolDifficultyType select_diff_type; // r15d
  data::RogueCellType type; // r14d
  uint32_t DungeonId; // eax
  common::milog::MiLogStream *v13; // r12
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r12
  uint32_t v16; // eax
  common::milog::MiLogStream *v17; // rax
  google::protobuf::RepeatedField<unsigned int> *v18; // rax
  int32_t result; // eax
  const ActivityRogueExcelConfigMgr *p_activity_rogue_config_mgr; // [rsp+10h] [rbp-120h]
  bool is_can_refresh; // [rsp+3Fh] [rbp-F1h]
  unsigned int v23; // [rsp+40h] [rbp-F0h] BYREF
  unsigned int val; // [rsp+44h] [rbp-ECh] BYREF
  RogueCell *cell_ptr; // [rsp+48h] [rbp-E8h]
  std::shared_ptr<Config> v26; // [rsp+50h] [rbp-E0h] BYREF
  common::milog::MiLogStream v27; // [rsp+60h] [rbp-D0h] BYREF
  char v28[176]; // [rsp+80h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 depot_id:802 64 24 12 card_vec:812";
  *(_QWORD *)(v3 + 16) = RoguelikeDungeonActivity::doRoguelikeDungeonCardGacha;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  v6 = proto::DoRoguelikeDungeonCardGachaReq::cell_id(req);
  cell_ptr = RogueLikeDungeonRuntimeMgr::findCell(&this->roguelike_runtime_mgr_, v6);
  if ( cell_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&cell_ptr->state >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&cell_ptr->state >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&cell_ptr->state);
    }
    if ( cell_ptr->state == ROGUE_CELL_SUCCESS )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v26);
      p_activity_rogue_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.activity_rogue_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&cell_ptr->select_diff_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cell_ptr->select_diff_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&cell_ptr->select_diff_type);
      }
      select_diff_type = cell_ptr->select_diff_type;
      if ( *(_BYTE *)(((unsigned __int64)&cell_ptr->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cell_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cell_ptr->type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&cell_ptr->type);
      }
      type = cell_ptr->type;
      DungeonId = RogueLikeDungeonRuntimeMgr::getDungeonId(&this->roguelike_runtime_mgr_);
      *(_DWORD *)(v3 + 48) = ActivityRogueExcelConfigMgr::getCellCardDepotId(
                               p_activity_rogue_config_mgr,
                               DungeonId,
                               type,
                               select_diff_type);
      std::shared_ptr<Config>::~shared_ptr(&v26);
      if ( *(_DWORD *)(v3 + 48) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&cell_ptr->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)cell_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cell_ptr->type >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&cell_ptr->type);
        }
        is_can_refresh = cell_ptr->type == ROGUE_CELL_TYPE_STORE;
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 64));
        v16 = proto::DoRoguelikeDungeonCardGachaReq::cell_id(req);
        if ( (unsigned int)RoguelikeMiscMgr::doRoguelikeGacha(
                             &this->roguelike_misc_mgr_,
                             *(_DWORD *)(v3 + 48),
                             (std::vector<unsigned int> *)(v3 + 64),
                             v16,
                             is_can_refresh) )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/roguelike_dungeon_activity.cpp",
            "doRoguelikeDungeonCardGacha",
            815);
          v17 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  &v27,
                  (const char (*)[47])"[ROGUELIKE] doRoguelikeGacha failed, depot_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v27);
          v8 = -1;
        }
        else
        {
          v18 = proto::DoRoguelikeDungeonCardGachaRsp::mutable_card_list(rsp_0);
          common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
            (const std::vector<unsigned int> *)(v3 + 64),
            v18);
          proto::DoRoguelikeDungeonCardGachaRsp::set_is_can_refresh(rsp_0, is_can_refresh);
          v8 = 0;
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 64));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike_dungeon_activity.cpp",
          "doRoguelikeDungeonCardGacha",
          808);
        v13 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                &v27,
                (const char (*)[52])"[ROGUELIKE] getCellCardDepotId invalid, dungeon_id:");
        v23 = RogueLikeDungeonRuntimeMgr::getDungeonId(&this->roguelike_runtime_mgr_);
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &v23);
        v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])", cell_id:");
        val = proto::DoRoguelikeDungeonCardGachaReq::cell_id(req);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v27);
        v8 = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike_dungeon_activity.cpp",
        "doRoguelikeDungeonCardGacha",
        792);
      v9 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
             &v27,
             (const char (*)[49])"[ROGUELIKE] current state cannot gacha, cell_id:");
      val = proto::DoRoguelikeDungeonCardGachaReq::cell_id(req);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v27);
      v8 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike_dungeon_activity.cpp",
      "doRoguelikeDungeonCardGacha",
      787);
    v7 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v27,
           (const char (*)[38])"[ROGUELIKE] findCell failed, cell_id:");
    val = proto::DoRoguelikeDungeonCardGachaReq::cell_id(req);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v27);
    v8 = -1;
  }
  result = v8;
  if ( v28 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 824: range 0000000016C485BC-0000000016C48E17
__int64 __fastcall RoguelikeDungeonActivity::doRoguelikeDungeonCardByLua(
        RoguelikeDungeonActivity *const this,
        uint32_t group_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  data::RogueMonsterPoolDifficultyType select_diff_type; // r15d
  data::RogueCellType type; // r14d
  uint32_t DungeonId; // eax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  google::protobuf::RepeatedField<unsigned int> *v17; // rax
  __int64 result; // rax
  const ActivityRogueExcelConfigMgr *p_activity_rogue_config_mgr; // [rsp+8h] [rbp-178h]
  bool is_can_refresh; // [rsp+2Bh] [rbp-155h]
  unsigned int val; // [rsp+2Ch] [rbp-154h] BYREF
  const data::RogueDungeonCellExcelConfig *cell_config_ptr; // [rsp+30h] [rbp-150h]
  RogueCell *cell_ptr; // [rsp+38h] [rbp-148h]
  std::shared_ptr<Config> v24; // [rsp+40h] [rbp-140h] BYREF
  common::milog::MiLogStream v25; // [rsp+50h] [rbp-130h] BYREF
  char v26[272]; // [rsp+70h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 11 cell_id:832 48 4 12 depot_id:850 64 4 12 group_id:823 80 24 12 card_vec:861 144 48 10 notify:867";
  *(_QWORD *)(v2 + 16) = RoguelikeDungeonActivity::doRoguelikeDungeonCardByLua;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = 61956;
  v4[536862723] = -218959360;
  v4[536862724] = 62194;
  v4[536862726] = -202116109;
  *(_DWORD *)(v2 + 64) = group_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v24);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
  cell_config_ptr = ActivityRogueExcelConfigMgr::findCellConfigByGroupId(
                      &v5->design_config.txt_config_mgr.activity_rogue_config_mgr,
                      *(_DWORD *)(v2 + 64));
  std::shared_ptr<Config>::~shared_ptr(&v24);
  if ( cell_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&cell_config_ptr->cell_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&cell_config_ptr->cell_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&cell_config_ptr->cell_id);
    }
    *(_DWORD *)(v2 + 32) = cell_config_ptr->cell_id;
    cell_ptr = RogueLikeDungeonRuntimeMgr::findCell(&this->roguelike_runtime_mgr_, *(_DWORD *)(v2 + 32));
    if ( cell_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&cell_ptr->state >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cell_ptr->state >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&cell_ptr->state);
      }
      if ( cell_ptr->state == ROGUE_CELL_SUCCESS )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v24);
        p_activity_rogue_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24)->design_config.txt_config_mgr.activity_rogue_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&cell_ptr->select_diff_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&cell_ptr->select_diff_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&cell_ptr->select_diff_type);
        }
        select_diff_type = cell_ptr->select_diff_type;
        if ( *(_BYTE *)(((unsigned __int64)&cell_ptr->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)cell_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cell_ptr->type >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&cell_ptr->type);
        }
        type = cell_ptr->type;
        DungeonId = RogueLikeDungeonRuntimeMgr::getDungeonId(&this->roguelike_runtime_mgr_);
        *(_DWORD *)(v2 + 48) = ActivityRogueExcelConfigMgr::getCellCardDepotId(
                                 p_activity_rogue_config_mgr,
                                 DungeonId,
                                 type,
                                 select_diff_type);
        std::shared_ptr<Config>::~shared_ptr(&v24);
        if ( *(_DWORD *)(v2 + 48) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&cell_ptr->type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)cell_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cell_ptr->type >> 3)
                                                                    + 0x7FFF8000) )
          {
            __asan_report_load4(&cell_ptr->type);
          }
          is_can_refresh = cell_ptr->type == ROGUE_CELL_TYPE_STORE;
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 80));
          if ( (unsigned int)RoguelikeMiscMgr::doRoguelikeGacha(
                               &this->roguelike_misc_mgr_,
                               *(_DWORD *)(v2 + 48),
                               (std::vector<unsigned int> *)(v2 + 80),
                               *(_DWORD *)(v2 + 32),
                               is_can_refresh) )
          {
            common::milog::MiLogStream::create(
              &v25,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/roguelike_dungeon_activity.cpp",
              "doRoguelikeDungeonCardByLua",
              864);
            v16 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                    &v25,
                    (const char (*)[47])"[ROGUELIKE] doRoguelikeGacha failed, depot_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v25);
            v7 = -1;
          }
          else
          {
            proto::RoguelikeCardGachaNotify::RoguelikeCardGachaNotify((proto::RoguelikeCardGachaNotify *const)(v2 + 144));
            v17 = proto::RoguelikeCardGachaNotify::mutable_card_list((proto::RoguelikeCardGachaNotify *const)(v2 + 144));
            common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
              (const std::vector<unsigned int> *)(v2 + 80),
              v17);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 144));
            v7 = 0;
            proto::RoguelikeCardGachaNotify::~RoguelikeCardGachaNotify((proto::RoguelikeCardGachaNotify *const)(v2 + 144));
          }
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 80));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v25,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/roguelike_dungeon_activity.cpp",
            "doRoguelikeDungeonCardByLua",
            856);
          v13 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                  &v25,
                  (const char (*)[52])"[ROGUELIKE] getCellCardDepotId invalid, dungeon_id:");
          val = RogueLikeDungeonRuntimeMgr::getDungeonId(&this->roguelike_runtime_mgr_);
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
          v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])", cell_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v25);
          v7 = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike_dungeon_activity.cpp",
          "doRoguelikeDungeonCardByLua",
          841);
        v9 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
               &v25,
               (const char (*)[49])"[ROGUELIKE] current state cannot gacha, cell_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v25);
        v7 = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike_dungeon_activity.cpp",
        "doRoguelikeDungeonCardByLua",
        836);
      v8 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v25,
             (const char (*)[38])"[ROGUELIKE] findCell failed, cell_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v25);
      v7 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike_dungeon_activity.cpp",
      "doRoguelikeDungeonCardByLua",
      829);
    v6 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
           &v25,
           (const char (*)[54])"[ROGUELIKE] findCellConfigByGroupId failed, group_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v25);
    v7 = -1;
  }
  result = v7;
  if ( v26 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 874: range 0000000016C48E18-0000000016C490C6
int32_t __cdecl RoguelikeDungeonActivity::refreshRoguelikeDungeonCard(
        RoguelikeDungeonActivity *const this,
        const proto::RefreshRoguelikeDungeonCardReq *req,
        proto::RefreshRoguelikeDungeonCardRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rax
  google::protobuf::RepeatedField<unsigned int> *v8; // rax
  int32_t result; // eax
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-D0h] BYREF
  char v12[176]; // [rsp+40h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 ret:882 64 24 12 card_vec:881";
  *(_QWORD *)(v3 + 16) = RoguelikeDungeonActivity::refreshRoguelikeDungeonCard;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  if ( !RoguelikeMiscMgr::isCanRefreshGacha(&this->roguelike_misc_mgr_) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike_dungeon_activity.cpp",
      "refreshRoguelikeDungeonCard",
      878);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      &v11,
      (const char (*)[33])"[ROGUELIKE] cannot refresh gacha");
    common::milog::MiLogStream::~MiLogStream(&v11);
    v6 = -1;
  }
  else
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 64));
    *(_DWORD *)(v3 + 48) = RoguelikeMiscMgr::refreshRoguelikeCard(
                             &this->roguelike_misc_mgr_,
                             (std::vector<unsigned int> *)(v3 + 64));
    if ( *(_DWORD *)(v3 + 48) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike_dungeon_activity.cpp",
        "refreshRoguelikeDungeonCard",
        885);
      v7 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             &v11,
             (const char (*)[46])"[ROGUELIKE] refreshRoguelikeCard failed, ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v7, (const int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v11);
      v6 = *(_DWORD *)(v3 + 48);
    }
    else
    {
      v8 = proto::RefreshRoguelikeDungeonCardRsp::mutable_res_card_list(rsp_0);
      common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
        (const std::vector<unsigned int> *)(v3 + 64),
        v8);
      v6 = 0;
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 64));
  }
  result = v6;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 893: range 0000000016C490C8-0000000016C49297
int32_t __cdecl RoguelikeDungeonActivity::selectRoguelikeDungeonCard(
        RoguelikeDungeonActivity *const this,
        const proto::SelectRoguelikeDungeonCardReq *req,
        proto::SelectRoguelikeDungeonCardRsp *rsp_0)
{
  google::protobuf::uint32 v3; // edx
  common::milog::MiLogStream *v4; // rbx
  uint32_t v6; // eax
  common::milog::MiLogStream *v7; // rbx
  unsigned int val; // [rsp+28h] [rbp-38h] BYREF
  uint32_t cell_id; // [rsp+2Ch] [rbp-34h]
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-30h] BYREF

  v3 = proto::SelectRoguelikeDungeonCardReq::card_id(req);
  proto::SelectRoguelikeDungeonCardRsp::set_card_id(rsp_0, v3);
  if ( !RoguelikeMiscMgr::canSelectRoguelikeCard(&this->roguelike_misc_mgr_) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/roguelike_dungeon_activity.cpp",
      "selectRoguelikeDungeonCard",
      897);
    v4 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v11,
           (const char (*)[52])"[ROGUELIKE] canSelectRoguelikeCard failed, card_id:");
    val = proto::SelectRoguelikeDungeonCardReq::card_id(req);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v11);
    return -1;
  }
  else
  {
    cell_id = RoguelikeMiscMgr::getCardCellId(&this->roguelike_misc_mgr_);
    v6 = proto::SelectRoguelikeDungeonCardReq::card_id(req);
    if ( (unsigned int)RoguelikeMiscMgr::selectRoguelikeCard(&this->roguelike_misc_mgr_, v6) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike_dungeon_activity.cpp",
        "selectRoguelikeDungeonCard",
        903);
      v7 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
             &v11,
             (const char (*)[49])"[ROGUELIKE] selectRoguelikeCard failed, card_id:");
      val = proto::SelectRoguelikeDungeonCardReq::card_id(req);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v11);
      return -1;
    }
    else
    {
      RogueLikeDungeonRuntimeMgr::afterDrawCard(&this->roguelike_runtime_mgr_, cell_id);
      return 0;
    }
  }
};

// Line 912: range 0000000016C49298-0000000016C49368
int32_t __cdecl RoguelikeDungeonActivity::giveUpRoguelikeDungeonCard(RoguelikeDungeonActivity *const this)
{
  uint32_t cell_id; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v3; // [rsp+20h] [rbp-30h] BYREF

  cell_id = RoguelikeMiscMgr::getCardCellId(&this->roguelike_misc_mgr_);
  if ( RoguelikeMiscMgr::giveUpRoguelikeDungeonCard(&this->roguelike_misc_mgr_) )
  {
    common::milog::MiLogStream::create(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/roguelike_dungeon_activity.cpp",
      "giveUpRoguelikeDungeonCard",
      916);
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      &v3,
      (const char (*)[46])"[ROGUELIKE] giveUpRoguelikeDungeonCard failed");
    common::milog::MiLogStream::~MiLogStream(&v3);
    return -1;
  }
  else
  {
    RogueLikeDungeonRuntimeMgr::afterDrawCard(&this->roguelike_runtime_mgr_, cell_id);
    return 0;
  }
};

// Line 924: range 0000000016C4936A-0000000016C499B9
int32_t __cdecl RoguelikeDungeonActivity::equipRoguelikeRune(
        RoguelikeDungeonActivity *const this,
        const proto::EquipRoguelikeRuneReq *req,
        proto::EquipRoguelikeRuneRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  const google::protobuf::RepeatedField<unsigned int> *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v9; // rax
  _DWORD *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v12; // rax
  common::milog::MiLogStream *v13; // rax
  google::protobuf::RepeatedField<unsigned int> *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int32_t result; // eax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-128h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-120h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-118h]
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-110h] BYREF
  char v22[240]; // [rsp+60h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 11 rune_id:943 48 24 21 equipped_rune_vec:936 112 48 21 equipped_rune_set:935";
  *(_QWORD *)(v3 + 16) = RoguelikeDungeonActivity::equipRoguelikeRune;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = -218959360;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
  {
    v6 = 10046;
  }
  else if ( RoguelikeDungeonActivity::isInCombat(this) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike_dungeon_activity.cpp",
      "equipRoguelikeRune",
      931);
    common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
      &v21,
      (const char (*)[68])"[ROGUELIKE] player have in game roguelike dungeon, cannot equip now");
    common::milog::MiLogStream::~MiLogStream(&v21);
    v6 = 10042;
  }
  else
  {
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 112));
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 48));
    v7 = proto::EquipRoguelikeRuneReq::rune_list(req);
    common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v7, (std::vector<unsigned int> *)(v3 + 48));
    if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 48)) <= 3 )
    {
      __for_range = (std::vector<unsigned int> *)(v3 + 48);
      __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 48))._M_current;
      __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 48))._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v9 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
        v10 = v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v9);
        }
        *(_DWORD *)(v3 + 32) = *v10;
        if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                &this->rune_set_,
                (const unsigned int *)(v3 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/roguelike_dungeon_activity.cpp",
            "equipRoguelikeRune",
            947);
          v11 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                  &v21,
                  (const char (*)[44])"[ROGUELIKE] rune_id is not unlock, rune_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v21);
          v6 = -1;
          goto LABEL_22;
        }
        v12 = std::set<unsigned int>::insert(
                (std::set<unsigned int> *const)(v3 + 112),
                (const std::set<unsigned int>::value_type *)(v3 + 32));
        if ( !v12.second )
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/roguelike_dungeon_activity.cpp",
            "equipRoguelikeRune",
            952);
          v13 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                  &v21,
                  (const char (*)[40])"[ROGUELIKE] duplicate rune_id, rune_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v21);
          v6 = -1;
          goto LABEL_22;
        }
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      std::vector<unsigned int>::operator=(&this->equipped_rune_vec_, (const std::vector<unsigned int> *)(v3 + 48));
      v14 = proto::EquipRoguelikeRuneRsp::mutable_rune_list(rsp_0);
      common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->equipped_rune_vec_, v14);
      BaseActivity::notifyClientData(this, 0);
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike_dungeon_activity.cpp",
        "equipRoguelikeRune",
        959);
      v15 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
              &v21,
              (const char (*)[65])"[ROGUELIKE] equipRoguelikeRune succ, current equipped_rune_vec_:");
      common::milog::MiLogStream::operator<<<unsigned int>(v15, &this->equipped_rune_vec_);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v6 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike_dungeon_activity.cpp",
        "equipRoguelikeRune",
        940);
      v8 = common::milog::MiLogStream::operator<<<char [80],(char *[80])0>(
             &v21,
             (const char (*)[80])"[ROGUELIKE] equipped_rune_vec size > MAX_EQUIPPED_RUNE_SIZE, equipped_rune_vec:");
      common::milog::MiLogStream::operator<<<unsigned int>(v8, (const std::vector<unsigned int> *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v21);
      v6 = -1;
    }
LABEL_22:
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 48));
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 112));
  }
  result = v6;
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 964: range 0000000016C499BA-0000000016C49A49
int32_t __cdecl RoguelikeDungeonActivity::triggerRoguelikeRune(
        RoguelikeDungeonActivity *const this,
        const proto::TriggerRoguelikeRuneReq *req,
        proto::TriggerRoguelikeRuneRsp *rsp_0)
{
  uint32_t v3; // eax
  google::protobuf::uint32 v4; // edx
  uint32_t v5; // eax
  google::protobuf::uint32 RoguelikeRuneAvailableCount; // edx
  int32_t ret; // [rsp+2Ch] [rbp-14h]

  v3 = proto::TriggerRoguelikeRuneReq::rune_id(req);
  ret = RoguelikeMiscMgr::triggerRoguelikeRune(&this->roguelike_misc_mgr_, v3);
  v4 = proto::TriggerRoguelikeRuneReq::rune_id(req);
  proto::TriggerRoguelikeRuneRsp::set_rune_id(rsp_0, v4);
  v5 = proto::TriggerRoguelikeRuneReq::rune_id(req);
  RoguelikeRuneAvailableCount = RoguelikeMiscMgr::getRoguelikeRuneAvailableCount(&this->roguelike_misc_mgr_, v5);
  proto::TriggerRoguelikeRuneRsp::set_available_count(rsp_0, RoguelikeRuneAvailableCount);
  return ret;
};

// Line 972: range 0000000016C49A4A-0000000016C49CF8
int32_t __cdecl RoguelikeDungeonActivity::triggerRoguelikeCurseByLua(RoguelikeDungeonActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  RoguelikeMiscMgr *p_roguelike_misc_mgr; // rcx
  const std::pair<unsigned int,unsigned int> *curse_pair_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v9; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-80h] BYREF
  char v11[96]; // [rsp+50h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 14 dungeon_id:973";
  *(_QWORD *)(v1 + 16) = RoguelikeDungeonActivity::triggerRoguelikeCurseByLua;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = RogueLikeDungeonRuntimeMgr::getDungeonId(&this->roguelike_runtime_mgr_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
  curse_pair_ptr = ActivityRogueExcelConfigMgr::getRoguelikeDungeonCurseDataPair(
                     &v4->design_config.txt_config_mgr.activity_rogue_config_mgr,
                     *(_DWORD *)(v1 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v9);
  if ( curse_pair_ptr )
  {
    p_roguelike_misc_mgr = &this->roguelike_misc_mgr_;
    if ( *(_BYTE *)(((unsigned __int64)curse_pair_ptr >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)curse_pair_ptr & 7) + 3) >= *(_BYTE *)(((unsigned __int64)curse_pair_ptr >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(curse_pair_ptr);
    }
    if ( RoguelikeMiscMgr::triggetRoguelikeCurse(p_roguelike_misc_mgr, curse_pair_ptr->first) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike_dungeon_activity.cpp",
        "triggerRoguelikeCurseByLua",
        983);
      common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
        &v10,
        (const char (*)[41])"[ROGUELIKE] triggetRoguelikeCurse failed");
      common::milog::MiLogStream::~MiLogStream(&v10);
    }
    result = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike_dungeon_activity.cpp",
      "triggerRoguelikeCurseByLua",
      977);
    v5 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
           &v10,
           (const char (*)[65])"[ROGUELIKE] getRoguelikeDungeonCurseDataPair failed, dungeon_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 32));
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = -1;
  }
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 989: range 0000000016C49CFA-0000000016C4A1E7
int32_t __cdecl RoguelikeDungeonActivity::triggerRoguelikeCurseByServer(RoguelikeDungeonActivity *const this)
{
  int v1; // xmm1_4
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  RoguelikeMiscMgr *p_roguelike_misc_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  const std::pair<unsigned int,unsigned int> *curse_pair_ptr; // [rsp+18h] [rbp-118h]
  std::shared_ptr<Config> v15; // [rsp+20h] [rbp-110h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-100h] BYREF
  char v17[224]; // [rsp+50h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 14 dungeon_id:990 64 4 23 trigger_prob_weight:997 80 4 19 sub_prob_weight:998 96 56 11 notify:1016";
  *(_QWORD *)(v2 + 16) = RoguelikeDungeonActivity::triggerRoguelikeCurseByServer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = RogueLikeDungeonRuntimeMgr::getDungeonId(&this->roguelike_runtime_mgr_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
  curse_pair_ptr = ActivityRogueExcelConfigMgr::getRoguelikeDungeonCurseDataPair(
                     &v5->design_config.txt_config_mgr.activity_rogue_config_mgr,
                     *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v15);
  if ( curse_pair_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&curse_pair_ptr->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)curse_pair_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&curse_pair_ptr->second >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(&curse_pair_ptr->second);
    }
    *(_DWORD *)(v2 + 64) = curse_pair_ptr->second;
    *(_DWORD *)(v2 + 80) = RoguelikeMiscMgr::getTriggerCurseSubWeight(&this->roguelike_misc_mgr_);
    if ( *(_DWORD *)(v2 + 64) > *(_DWORD *)(v2 + 80) )
      v1 = 1120403456;
    if ( common::tools::RandomUtils::randomTestProbability(*(float *)&v1) )
    {
      p_roguelike_misc_mgr = &this->roguelike_misc_mgr_;
      if ( *(_BYTE *)(((unsigned __int64)curse_pair_ptr >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)curse_pair_ptr & 7) + 3) >= *(_BYTE *)(((unsigned __int64)curse_pair_ptr >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(curse_pair_ptr);
      }
      result = RoguelikeMiscMgr::triggetRoguelikeCurse(p_roguelike_misc_mgr, curse_pair_ptr->first);
    }
    else
    {
      proto::TriggerRoguelikeCurseNotify::TriggerRoguelikeCurseNotify((proto::TriggerRoguelikeCurseNotify *const)(v2 + 96));
      proto::TriggerRoguelikeCurseNotify::set_is_trigger_curse((proto::TriggerRoguelikeCurseNotify *const)(v2 + 96), 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 96));
      proto::TriggerRoguelikeCurseNotify::~TriggerRoguelikeCurseNotify((proto::TriggerRoguelikeCurseNotify *const)(v2 + 96));
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike_dungeon_activity.cpp",
        "triggerRoguelikeCurseByServer",
        1020);
      v9 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
             &v16,
             (const char (*)[61])"[ROGUELIKE] triggerRoguelikeCurseByServer, is_trigger_curse:");
      v10 = common::milog::MiLogStream::operator<<(v9, 0);
      v11 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              v10,
              (const char (*)[23])", trigger_prob_weight:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 64));
      v13 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v12,
              (const char (*)[19])", sub_prob_weight:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 80));
      common::milog::MiLogStream::~MiLogStream(&v16);
      result = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike_dungeon_activity.cpp",
      "triggerRoguelikeCurseByServer",
      994);
    v6 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
           &v16,
           (const char (*)[65])"[ROGUELIKE] getRoguelikeDungeonCurseDataPair failed, dungeon_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = -1;
  }
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1026: range 0000000016C4A1E8-0000000016C4AE7C
int32_t __cdecl RoguelikeDungeonActivity::upgradeRoguelikeShikigami(
        RoguelikeDungeonActivity *const this,
        const proto::UpgradeRoguelikeShikigamiReq *req,
        proto::UpgradeRoguelikeShikigamiRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t result; // eax
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v7; // rax
  int *v8; // rdx
  int v9; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  const std::map<unsigned int,std::vector<data::RoguelikeShikigamiUnlockConfig>> *v18; // rax
  bool v19; // al
  const std::map<unsigned int,std::vector<data::RoguelikeShikigamiUnlockConfig>> *v20; // rax
  const std::vector<data::RoguelikeShikigamiUnlockConfig> *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  const std::map<unsigned int,std::pair<unsigned int,unsigned int>> *v25; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  const std::map<unsigned int,std::pair<unsigned int,unsigned int>> *v30; // rax
  unsigned int *p_second; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  PlayerItemComp *ItemComp; // rax
  PlayerItemComp *v36; // rax
  int v37; // r14d
  char *v38; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v39; // rax
  _DWORD *v40; // rdx
  char v41; // cl
  PlayerWatcherComp *WatcherComp; // rax
  uint32_t second; // r8d
  int32_t ret; // [rsp+2Ch] [rbp-104h]
  int32_t reta; // [rsp+2Ch] [rbp-104h]
  ActivityRogueExcelConfigMgr *rogue_config_mgr; // [rsp+30h] [rbp-100h]
  const std::pair<unsigned int,unsigned int> *cost_pair; // [rsp+38h] [rbp-F8h]
  common::milog::MiLogStream v49; // [rsp+40h] [rbp-F0h] BYREF
  char v50[208]; // [rsp+60h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 23 shikigami_group_id:1037 64 4 14 old_level:1038 80 4 10 level:1039 96 8 20 sub_item_rea"
                        "son:1088 128 16 10 param:1082";
  *(_QWORD *)(v3 + 16) = RoguelikeDungeonActivity::upgradeRoguelikeShikigami;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -202178560;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
  {
    result = 10046;
  }
  else if ( RoguelikeDungeonActivity::isInCombat(this) )
  {
    common::milog::MiLogStream::create(
      &v49,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike_dungeon_activity.cpp",
      "upgradeRoguelikeShikigami",
      1033);
    common::milog::MiLogStream::operator<<<char [88],(char *[88])0>(
      &v49,
      (const char (*)[88])"[ROGUELIKE] player have in game roguelike dungeon, cannot upgradeRoguelikeShikigami now");
    common::milog::MiLogStream::~MiLogStream(&v49);
    result = 10042;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 128));
    rogue_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128))->design_config.txt_config_mgr.activity_rogue_config_mgr;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 128));
    *(_DWORD *)(v3 + 48) = proto::UpgradeRoguelikeShikigamiReq::shikigami_group_id(req);
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,unsigned int>(
           &this->shikigami_map_,
           (const unsigned int *)(v3 + 48)) )
    {
      v7 = std::unordered_map<unsigned int,unsigned int>::operator[](
             &this->shikigami_map_,
             (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
      v8 = (int *)v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      v9 = *v8;
    }
    else
    {
      v9 = 0;
    }
    *(_DWORD *)(v3 + 64) = v9;
    *(_DWORD *)(v3 + 80) = proto::UpgradeRoguelikeShikigamiReq::upgrade_level(req);
    if ( *(_DWORD *)(v3 + 80) )
    {
      if ( ActivityRogueExcelConfigMgr::getRoguelikeShikigamiGroupMaxLevel(rogue_config_mgr, *(_DWORD *)(v3 + 48)) >= *(_DWORD *)(v3 + 80) )
      {
        if ( *(_DWORD *)(v3 + 64) + 1 == *(_DWORD *)(v3 + 80) )
        {
          v19 = 0;
          if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::map<unsigned int,std::vector<data::RoguelikeShikigamiUnlockConfig>>> const,unsigned int>(
                 &rogue_config_mgr->shikigami_level_unlock_map,
                 (const unsigned int *)(v3 + 48)) )
          {
            v18 = std::unordered_map<unsigned int,std::map<unsigned int,std::vector<data::RoguelikeShikigamiUnlockConfig>>>::at(
                    &rogue_config_mgr->shikigami_level_unlock_map,
                    (const std::unordered_map<unsigned int,std::map<unsigned int,std::vector<data::RoguelikeShikigamiUnlockConfig>>>::key_type *)(v3 + 48));
            if ( common::tools::MiscUtils::isContains<std::map<unsigned int,std::vector<data::RoguelikeShikigamiUnlockConfig>> const,unsigned int>(
                   v18,
                   (const unsigned int *)(v3 + 80)) )
            {
              v19 = 1;
            }
          }
          if ( v19
            && (v20 = std::unordered_map<unsigned int,std::map<unsigned int,std::vector<data::RoguelikeShikigamiUnlockConfig>>>::at(
                        &rogue_config_mgr->shikigami_level_unlock_map,
                        (const std::unordered_map<unsigned int,std::map<unsigned int,std::vector<data::RoguelikeShikigamiUnlockConfig>>>::key_type *)(v3 + 48)),
                v21 = std::map<unsigned int,std::vector<data::RoguelikeShikigamiUnlockConfig>>::at(
                        v20,
                        (const std::map<unsigned int,std::vector<data::RoguelikeShikigamiUnlockConfig>>::key_type *)(v3 + 80)),
                !RoguelikeDungeonActivity::checkShikigamiUnlockCondMeet(this, v21)) )
          {
            common::milog::MiLogStream::create(
              &v49,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/roguelike_dungeon_activity.cpp",
              "upgradeRoguelikeShikigami",
              1064);
            v22 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                    &v49,
                    (const char (*)[56])"[ROGUELIKE] checkShikigamiUnlockCondMeet failed, level:");
            v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v22,
                    (const unsigned int *)(v3 + 80));
            v24 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                    v23,
                    (const char (*)[22])", shikigami_group_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v49);
            result = -1;
          }
          else if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>> const,unsigned int>(
                       &rogue_config_mgr->shikigami_level_cost_map,
                       (const unsigned int *)(v3 + 48))
                 || (v25 = std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>::at(
                             &rogue_config_mgr->shikigami_level_cost_map,
                             (const std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>::key_type *)(v3 + 48)),
                     !common::tools::MiscUtils::isContains<std::map<unsigned int,std::pair<unsigned int,unsigned int>> const,unsigned int>(
                        v25,
                        (const unsigned int *)(v3 + 80))) )
          {
            common::milog::MiLogStream::create(
              &v49,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/roguelike_dungeon_activity.cpp",
              "upgradeRoguelikeShikigami",
              1072);
            v27 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                    &v49,
                    (const char (*)[49])"[ROGUELIKE] upgrade level cost not found, level:");
            v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v27,
                    (const unsigned int *)(v3 + 80));
            v29 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                    v28,
                    (const char (*)[22])", shikigami_group_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v49);
            result = -1;
          }
          else
          {
            v30 = std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>::at(
                    &rogue_config_mgr->shikigami_level_cost_map,
                    (const std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>::key_type *)(v3 + 48));
            cost_pair = std::map<unsigned int,std::pair<unsigned int,unsigned int>>::at(
                          v30,
                          (const std::map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v3 + 80));
            p_second = &cost_pair->second;
            if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(p_second);
            }
            if ( cost_pair->second )
            {
              *(_QWORD *)(v3 + 128) = 0LL;
              *(_QWORD *)(v3 + 136) = 0LL;
              if ( *(_BYTE *)(((unsigned __int64)cost_pair >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)cost_pair & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cost_pair >> 3)
                                                                            + 0x7FFF8000) )
              {
                __asan_report_load4(cost_pair);
              }
              *(_DWORD *)(v3 + 128) = cost_pair->first;
              if ( *(_BYTE *)(((unsigned __int64)&cost_pair->second >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)cost_pair + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cost_pair->second >> 3)
                                                                        + 0x7FFF8000) )
              {
                __asan_report_load4(&cost_pair->second);
              }
              *(_DWORD *)(v3 + 132) = cost_pair->second;
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              ItemComp = Player::getItemComp(this->player_);
              ret = PlayerItemComp::checkSubItem(ItemComp, (const ItemParam *)(v3 + 128));
              if ( ret )
              {
                result = ret;
              }
              else
              {
                SubItemReason::SubItemReason((SubItemReason *const)(v3 + 96), ACTION_REASON_ROGUE_UPGRADE_SHIKIGAMI);
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                v36 = Player::getItemComp(this->player_);
                reta = PlayerItemComp::subItem(v36, (const ItemParam *)(v3 + 128), (const SubItemReason *)(v3 + 96));
                if ( reta )
                {
                  common::milog::MiLogStream::create(
                    &v49,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/player/activity/roguelike_dungeon_activity.cpp",
                    "upgradeRoguelikeShikigami",
                    1092);
                  common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    &v49,
                    (const char (*)[27])"[ROGUELIKE] subItem failed");
                  common::milog::MiLogStream::~MiLogStream(&v49);
                  result = reta;
                }
                else
                {
                  v37 = *(_DWORD *)(v3 + 80);
                  v38 = (char *)(v3 + 48);
                  v39 = std::unordered_map<unsigned int,unsigned int>::operator[](
                          &this->shikigami_map_,
                          (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
                  v40 = v39;
                  v41 = *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000);
                  if ( v41 != 0 && (char)(((unsigned __int8)v39 & 7) + 3) >= v41 )
                  {
                    LOBYTE(v38) = v41 != 0;
                    __asan_report_store4(v39, v38, v39);
                  }
                  *v40 = v37;
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->player_);
                  WatcherComp = Player::getWatcherComp(this->player_);
                  PlayerWatcherComp::triggerRogueShikigamiUpgrade(
                    WatcherComp,
                    *(_DWORD *)(v3 + 48),
                    *(_DWORD *)(v3 + 80));
                  proto::UpgradeRoguelikeShikigamiRsp::set_shikigami_group_id(rsp_0, *(_DWORD *)(v3 + 48));
                  proto::UpgradeRoguelikeShikigamiRsp::set_cur_level(rsp_0, *(_DWORD *)(v3 + 80));
                  BaseActivity::notifyClientData(this, 0);
                  if ( *(_BYTE *)(((unsigned __int64)&cost_pair->second >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)cost_pair + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cost_pair->second >> 3)
                                                                            + 0x7FFF8000) )
                  {
                    __asan_report_load4(&cost_pair->second);
                  }
                  second = cost_pair->second;
                  if ( *(_BYTE *)(((unsigned __int64)cost_pair >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)cost_pair & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cost_pair >> 3)
                                                                                + 0x7FFF8000) )
                  {
                    __asan_report_load4(cost_pair);
                  }
                  RoguelikeDungeonActivity::logUpgradeShikigami(
                    this,
                    *(_DWORD *)(v3 + 48),
                    *(_DWORD *)(v3 + 64),
                    *(_DWORD *)(v3 + 80),
                    cost_pair->first,
                    second);
                  result = 0;
                }
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v49,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/roguelike_dungeon_activity.cpp",
                "upgradeRoguelikeShikigami",
                1079);
              v32 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                      &v49,
                      (const char (*)[55])"[ROGUELIKE] upgrade level cost item count zero, level:");
              v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v32,
                      (const unsigned int *)(v3 + 80));
              v34 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      v33,
                      (const char (*)[22])", shikigami_group_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v34,
                (const unsigned int *)(v3 + 48));
              common::milog::MiLogStream::~MiLogStream(&v49);
              result = -1;
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v49,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/roguelike_dungeon_activity.cpp",
            "upgradeRoguelikeShikigami",
            1054);
          v13 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  &v49,
                  (const char (*)[27])"[ROGUELIKE] current level:");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v13,
                  (const unsigned int *)(v3 + 64));
          v15 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  v14,
                  (const char (*)[27])" can not upgrade to level:");
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v15,
                  (const unsigned int *)(v3 + 80));
          v17 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  v16,
                  (const char (*)[22])", shikigami_group_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v49);
          result = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v49,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike_dungeon_activity.cpp",
          "upgradeRoguelikeShikigami",
          1048);
        v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                &v49,
                (const char (*)[27])"[ROGUELIKE] invalid level:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v3 + 80));
        v12 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                v11,
                (const char (*)[22])", shikigami_group_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v49);
        result = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v49,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike_dungeon_activity.cpp",
        "upgradeRoguelikeShikigami",
        1043);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        &v49,
        (const char (*)[28])"[ROGUELIKE] invalid level 0");
      common::milog::MiLogStream::~MiLogStream(&v49);
      result = -1;
    }
  }
  if ( v50 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1107: range 0000000016C4AE7E-0000000016C4B1D6
void __cdecl RoguelikeDungeonActivity::logUpgradeShikigami(
        RoguelikeDungeonActivity *const this,
        uint32_t shikigami_group_id,
        uint32_t old_level,
        uint32_t cur_level,
        uint32_t item_id,
        uint32_t count)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueUpgradeShikigami,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueUpgradeShikigami,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueUpgradeShikigami,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueUpgradeShikigami,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  Player *player; // r14
  std::string v15; // [rsp+0h] [rbp-100h]
  google::protobuf::uint32 counta; // [rsp+4h] [rbp-FCh]
  google::protobuf::uint32 item_ida; // [rsp+8h] [rbp-F8h]
  google::protobuf::uint32 cur_levela; // [rsp+Ch] [rbp-F4h]
  google::protobuf::uint32 old_levela; // [rsp+10h] [rbp-F0h]
  google::protobuf::uint32 shikigami_group_ida; // [rsp+14h] [rbp-ECh]
  RoguelikeDungeonActivity *thisa; // [rsp+18h] [rbp-E8h]
  proto_log::LogItemParam *cost_item_log; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-C0h] BYREF
  std::string v25; // [rsp+50h] [rbp-B0h] BYREF
  char v26[144]; // [rsp+70h] [rbp-90h] BYREF

  *(&v15._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v15._anon_0._M_allocated_capacity) = shikigami_group_id;
  *(_DWORD *)v15._anon_0._M_local_buf = old_level;
  HIDWORD(v15._M_string_length) = cur_level;
  LODWORD(v15._M_string_length) = item_id;
  HIDWORD(v15._M_dataplus._M_p) = count;
  v6 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 1 11 holder:1108 64 16 12 log_ptr:1109";
  *(_QWORD *)(v6 + 16) = RoguelikeDungeonActivity::logUpgradeShikigami;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v25, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v6 + 48), 0xDD0u, v15);
  std::string::~string(&v25);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyRogueUpgradeShikigami>();
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueUpgradeShikigami,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueUpgradeShikigami,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
  proto_log::PlayerLogBodyRogueUpgradeShikigami::set_shikigami_id(v10, shikigami_group_ida);
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueUpgradeShikigami,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueUpgradeShikigami,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
  proto_log::PlayerLogBodyRogueUpgradeShikigami::set_old_level(v11, old_levela);
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueUpgradeShikigami,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueUpgradeShikigami,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
  proto_log::PlayerLogBodyRogueUpgradeShikigami::set_cur_level(v12, cur_levela);
  v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueUpgradeShikigami,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueUpgradeShikigami,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
  cost_item_log = proto_log::PlayerLogBodyRogueUpgradeShikigami::mutable_cost_item(v13);
  proto_log::LogItemParam::set_item_id(cost_item_log, item_ida);
  proto_log::LogItemParam::set_count(cost_item_log, counta);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->player_);
  player = thisa->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyRogueUpgradeShikigami,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyRogueUpgradeShikigami> *)(v6 + 64));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyRogueUpgradeShikigami>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyRogueUpgradeShikigami> *const)(v6 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v6 + 48));
  if ( v26 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1121: range 0000000016C4B1D8-0000000016C4BAF2
bool __cdecl RoguelikeDungeonActivity::checkShikigamiUnlockCondMeet(
        RoguelikeDungeonActivity *const this,
        const std::vector<data::RoguelikeShikigamiUnlockConfig> *unlock_cond_vec)
{
  bool v2; // r14
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  data::RoguelikeShikigamiUnlockType type; // eax
  bool v7; // r15
  int v8; // r15d
  const unsigned int *v9; // rax
  const std::unordered_map<unsigned int,unsigned int>::key_type *v10; // rax
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v11; // rax
  unsigned int *v12; // rdx
  unsigned int v13; // r15d
  std::vector<unsigned int>::reference v14; // rax
  unsigned int *v15; // rdx
  char v16; // al
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  bool result; // al
  std::allocator<char> __a; // [rsp+23h] [rbp-11Dh] BYREF
  uint32_t now; // [rsp+24h] [rbp-11Ch]
  uint32_t begin_time; // [rsp+28h] [rbp-118h]
  uint32_t day_offset; // [rsp+2Ch] [rbp-114h]
  uint32_t now_day; // [rsp+30h] [rbp-110h]
  uint32_t begin_day; // [rsp+34h] [rbp-10Ch]
  std::vector<data::RoguelikeShikigamiUnlockConfig>::const_iterator __for_begin; // [rsp+38h] [rbp-108h] BYREF
  std::vector<data::RoguelikeShikigamiUnlockConfig>::const_iterator __for_end; // [rsp+40h] [rbp-100h] BYREF
  const std::vector<data::RoguelikeShikigamiUnlockConfig> *__for_range; // [rsp+48h] [rbp-F8h]
  const data::RoguelikeShikigamiUnlockConfig *unlock_cond; // [rsp+50h] [rbp-F0h]
  RogueStageData *stage_ptr; // [rsp+58h] [rbp-E8h]
  std::shared_ptr<Config> v32; // [rsp+60h] [rbp-E0h] BYREF
  std::string sep; // [rsp+70h] [rbp-D0h] BYREF
  char v34[176]; // [rsp+90h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 stage_id:1175 64 24 14 param_vec:1128";
  *(_QWORD *)(v3 + 16) = RoguelikeDungeonActivity::checkShikigamiUnlockCondMeet;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  __for_range = unlock_cond_vec;
  __for_begin._M_current = std::vector<data::RoguelikeShikigamiUnlockConfig>::begin(unlock_cond_vec)._M_current;
  __for_end._M_current = std::vector<data::RoguelikeShikigamiUnlockConfig>::end(unlock_cond_vec)._M_current;
  while ( __gnu_cxx::operator!=<data::RoguelikeShikigamiUnlockConfig const*,std::vector<data::RoguelikeShikigamiUnlockConfig>>(
            &__for_begin,
            &__for_end) )
  {
    unlock_cond = __gnu_cxx::__normal_iterator<data::RoguelikeShikigamiUnlockConfig const*,std::vector<data::RoguelikeShikigamiUnlockConfig>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)&unlock_cond->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&unlock_cond->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&unlock_cond->type);
    }
    type = unlock_cond->type;
    if ( type == SHIKIGAMI_UNLOCK_ROGUELIKE_STAGE )
    {
      *(_DWORD *)(v3 + 48) = 0;
      if ( common::tools::StringUtils::strToNum<unsigned int>(&unlock_cond->param, (unsigned int *)(v3 + 48), 1) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&sep,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike_dungeon_activity.cpp",
          "checkShikigamiUnlockCondMeet",
          1178);
        common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
          (common::milog::MiLogStream *const)&sep,
          (const char (*)[56])"[ROGUELIKE] shikigami_group_id unlock cond config error");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&sep);
        v2 = 0;
        goto LABEL_50;
      }
      stage_ptr = RoguelikeDungeonActivity::findStage(this, *(_DWORD *)(v3 + 48));
      if ( !stage_ptr )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&sep,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike_dungeon_activity.cpp",
          "checkShikigamiUnlockCondMeet",
          1184);
        v19 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                (common::milog::MiLogStream *const)&sep,
                (const char (*)[44])"[ROGUELIKE] stage_ptr is nullptr, stage_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&sep);
        v2 = 0;
        goto LABEL_50;
      }
      if ( *(_BYTE *)(((unsigned __int64)&stage_ptr->is_passed >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)stage_ptr + 14) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_ptr->is_passed >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_load1(&stage_ptr->is_passed);
      }
      if ( !stage_ptr->is_passed )
      {
        v2 = 0;
        goto LABEL_50;
      }
    }
    else if ( type <= SHIKIGAMI_UNLOCK_ROGUELIKE_STAGE )
    {
      if ( type == SHIKIGAMI_UNLOCK_SHIKIGAMI )
      {
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 64));
        std::allocator<char>::allocator(&__a, &__for_end);
        std::string::basic_string<std::allocator<char>>(&sep, ",", &__a);
        v7 = common::tools::StringUtils::splitToList<unsigned int>(
               &unlock_cond->param,
               &sep,
               (std::vector<unsigned int> *)(v3 + 64),
               0) != 0;
        std::string::~string(&sep);
        std::allocator<char>::~allocator(&__a);
        if ( v7 )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&sep,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/roguelike_dungeon_activity.cpp",
            "checkShikigamiUnlockCondMeet",
            1131);
          common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
            (common::milog::MiLogStream *const)&sep,
            (const char (*)[56])"[ROGUELIKE] shikigami_group_id unlock cond config error");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&sep);
          v2 = 0;
          v8 = 0;
        }
        else if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 64)) > 1 )
        {
          v9 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 64), 0LL);
          if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,unsigned int>(
                  &this->shikigami_map_,
                  v9) )
            goto LABEL_23;
          v10 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 64), 0LL);
          v11 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->shikigami_map_, v10);
          v12 = v11;
          if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v11);
          }
          v13 = *v12;
          v14 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 64), 1uLL);
          v15 = v14;
          if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v14);
          }
          if ( v13 < *v15 )
LABEL_23:
            v16 = 1;
          else
            v16 = 0;
          if ( v16 )
          {
            v2 = 0;
            v8 = 0;
          }
          else
          {
            v8 = 1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&sep,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/roguelike_dungeon_activity.cpp",
            "checkShikigamiUnlockCondMeet",
            1136);
          common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
            (common::milog::MiLogStream *const)&sep,
            (const char (*)[56])"[ROGUELIKE] shikigami_group_id unlock cond config error");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&sep);
          v2 = 0;
          v8 = 0;
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 64));
        if ( !v8 )
          goto LABEL_50;
      }
      else if ( type == SHIKIGAMI_UNLOCK_ACTIVITY_DAY )
      {
        *(_DWORD *)(v3 + 48) = 0;
        if ( common::tools::StringUtils::strToNum<unsigned int>(&unlock_cond->param, (unsigned int *)(v3 + 48), 1) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&sep,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/roguelike_dungeon_activity.cpp",
            "checkShikigamiUnlockCondMeet",
            1151);
          common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
            (common::milog::MiLogStream *const)&sep,
            (const char (*)[56])"[ROGUELIKE] shikigami_group_id unlock cond config error");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&sep);
          v2 = 0;
          goto LABEL_50;
        }
        now = common::tools::TimeUtils::getNow();
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v32);
        p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32)->design_config.txt_config_mgr.new_activity_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->schedule_id_);
        }
        begin_time = NewActivityExcelConfigMgr::getScheduleBeginTime(p_new_activity_config_mgr, this->schedule_id_);
        std::shared_ptr<Config>::~shared_ptr(&v32);
        if ( now < begin_time )
        {
          v2 = 0;
          goto LABEL_50;
        }
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v32);
        v18 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
        day_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v18->design_config.txt_config_mgr.const_value_config_mgr);
        std::shared_ptr<Config>::~shared_ptr(&v32);
        now_day = common::tools::TimeUtils::getTimeDay(now, day_offset);
        begin_day = common::tools::TimeUtils::getTimeDay(begin_time, day_offset);
        if ( now_day < begin_day )
        {
          v2 = 0;
          goto LABEL_50;
        }
        if ( now_day - begin_day + 1 < *(_DWORD *)(v3 + 48) )
        {
          v2 = 0;
          goto LABEL_50;
        }
      }
    }
    __gnu_cxx::__normal_iterator<data::RoguelikeShikigamiUnlockConfig const*,std::vector<data::RoguelikeShikigamiUnlockConfig>>::operator++(&__for_begin);
  }
  v2 = 1;
LABEL_50:
  result = v2;
  if ( v34 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1201: range 0000000016C4BAF4-0000000016C4BC4C
RogueStageData *__fastcall RoguelikeDungeonActivity::findStage(RoguelikeDungeonActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  RogueStageData *result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,RogueStageData>,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 stage_id:1200 64 8 9 iter:1202";
  *(_QWORD *)(v2 + 16) = RoguelikeDungeonActivity::findStage;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::unordered_map<unsigned int,RogueStageData>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,RogueStageData>::find(
                                                                              &this->stage_map_,
                                                                              (const std::unordered_map<unsigned int,RogueStageData>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,RogueStageData>::end(&this->stage_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,RogueStageData>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,RogueStageData>,false> *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,RogueStageData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,RogueStageData>,false,false> *const)(v2 + 64))->second;
  }
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1211: range 0000000016C4BC4E-0000000016C4BE93
std::vector<std::pair<unsigned int,unsigned int>> *__cdecl RoguelikeDungeonActivity::getEquippedRuneVec(
        std::vector<std::pair<unsigned int,unsigned int>> *retstr,
        const RoguelikeDungeonActivity *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rax
  _DWORD *v6; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned int __y; // [rsp+1Ch] [rbp-94h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int,unsigned int> __args_0; // [rsp+38h] [rbp-78h] BYREF
  std::shared_ptr<Config> v14; // [rsp+40h] [rbp-70h] BYREF
  char v15[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 rune_id:1213";
  *(_QWORD *)(v2 + 16) = RoguelikeDungeonActivity::getEquippedRuneVec;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  std::vector<std::pair<unsigned int,unsigned int>>::vector(retstr);
  __for_range = &this->equipped_rune_vec_;
  __for_begin._M_current = std::vector<unsigned int>::begin(&this->equipped_rune_vec_)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&this->equipped_rune_vec_)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v2 + 32) = *v6;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v14);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
    __y = ActivityRogueExcelConfigMgr::getRuneDefaultUseCount(
            &v7->design_config.txt_config_mgr.activity_rogue_config_mgr,
            *(_DWORD *)(v2 + 32));
    __args_0 = std::make_pair<unsigned int &,unsigned int>((unsigned int *)(v2 + 32), &__y);
    std::vector<std::pair<unsigned int,unsigned int>>::emplace_back<std::pair<unsigned int,unsigned int>>(
      retstr,
      &__args_0,
      &__args_0);
    std::shared_ptr<Config>::~shared_ptr(&v14);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 1221: range 0000000016C4BE94-0000000016C4C05C
void __cdecl RoguelikeDungeonActivity::quickEquipRuneByGm(RoguelikeDungeonActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__detail::_Node_iterator<unsigned int,true,false>::reference v4; // rax
  _DWORD *v5; // rdx
  std::unordered_set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  std::unordered_set<unsigned int> *__for_range; // [rsp+28h] [rbp-68h]
  char v9[96]; // [rsp+30h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 12 rune_id:1223";
  *(_QWORD *)(v1 + 16) = RoguelikeDungeonActivity::quickEquipRuneByGm;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  std::vector<unsigned int>::clear(&this->equipped_rune_vec_);
  __for_range = &this->rune_set_;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&this->rune_set_)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&this->rune_set_)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v4 = std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    *(_DWORD *)(v1 + 32) = *v5;
    std::vector<unsigned int>::push_back(
      &this->equipped_rune_vec_,
      (const std::vector<unsigned int>::value_type *)(v1 + 32));
    if ( std::vector<unsigned int>::size(&this->equipped_rune_vec_) > 2 )
      goto LABEL_11;
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  BaseActivity::notifyClientData(this, 0);
LABEL_11:
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1235: range 0000000016C4C05E-0000000016C4C962
void __fastcall RoguelikeDungeonActivity::onRogueDungeonSuccess(
        RoguelikeDungeonActivity *const this,
        uint32_t stage_id,
        uint32_t dungeon_id,
        uint32_t level_id,
        proto::RoguelikeDungeonSettleInfo *settle_info)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  common::milog::MiLogStream *v8; // rax
  ActivityRogueExcelConfigMgr *p_activity_rogue_config_mgr; // rcx
  common::milog::MiLogStream *v10; // rax
  bool isAllChallengeCellFinish; // r14
  char *v12; // rsi
  std::map<unsigned int,bool>::mapped_type *v13; // rax
  bool *v14; // rdx
  char v15; // cl
  uint32_t *p_cur_level; // rsi
  uint32_t *v17; // rax
  uint32_t *v18; // rdx
  uint32_t v19; // ecx
  char v20; // al
  unsigned int v21; // ecx
  __int64 v22; // rsi
  __int64 v23; // rdx
  PlayerWatcherComp *WatcherComp; // rax
  PlayerWatcherComp *p_kill_monster_num; // rdi
  PlayerEventComp *EventComp; // r14
  __int64 v27; // rsi
  __int64 v28; // rdx
  int v29; // ecx
  char v30; // dl
  __int64 v31; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  bool v33; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  const std::vector<unsigned int> *v35; // rax
  RogueStageData *stage_ptr; // [rsp+28h] [rbp-D8h]
  const data::RogueStageExcelConfig *stage_config_ptr; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Config> v42; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v43; // [rsp+50h] [rbp-B0h] BYREF
  char v44[144]; // [rsp+70h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 4 13 stage_id:1234 48 4 13 level_id:1234 64 16 14 event_ptr:1262";
  *(_QWORD *)(v5 + 16) = RoguelikeDungeonActivity::onRogueDungeonSuccess;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -202178560;
  *(_DWORD *)(v5 + 32) = stage_id;
  *(_DWORD *)(v5 + 48) = level_id;
  stage_ptr = RoguelikeDungeonActivity::findStage(this, *(_DWORD *)(v5 + 32));
  if ( stage_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v42);
    p_activity_rogue_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42)->design_config.txt_config_mgr.activity_rogue_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)stage_ptr >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)stage_ptr >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(stage_ptr);
    }
    stage_config_ptr = data::ActivityRogueExcelConfigMgrBase::findRogueStageExcelConfig(
                         p_activity_rogue_config_mgr,
                         stage_ptr->stage_id);
    std::shared_ptr<Config>::~shared_ptr(&v42);
    if ( stage_config_ptr )
    {
      isAllChallengeCellFinish = RogueLikeDungeonRuntimeMgr::isAllChallengeCellFinish(&this->roguelike_runtime_mgr_);
      v12 = (char *)(v5 + 48);
      v13 = std::map<unsigned int,bool>::operator[](
              &stage_ptr->level_finish_all_challenge_map,
              (const std::map<unsigned int,bool>::key_type *)(v5 + 48));
      v14 = v13;
      v15 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
      if ( v15 != 0 && ((unsigned __int8)v13 & 7) >= v15 )
      {
        LOBYTE(v12) = v15 != 0;
        __asan_report_store1(v13, v12, v13);
      }
      *v14 = isAllChallengeCellFinish;
      p_cur_level = &stage_ptr->cur_level;
      v17 = (uint32_t *)std::max<unsigned int>(&stage_ptr->max_passed_level, &stage_ptr->cur_level);
      v18 = v17;
      if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v17);
      }
      v19 = *v18;
      v20 = *(_BYTE *)(((unsigned __int64)&stage_ptr->max_passed_level >> 3) + 0x7FFF8000);
      if ( v20 != 0 && v20 <= 3 )
      {
        LOBYTE(p_cur_level) = v20 != 0;
        __asan_report_store4(&stage_ptr->max_passed_level, p_cur_level, &stage_ptr->max_passed_level);
      }
      stage_ptr->max_passed_level = v19;
      v21 = *(_DWORD *)(v5 + 48) + 1;
      if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->max_level >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&stage_config_ptr->max_level >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&stage_config_ptr->max_level);
      }
      if ( v21 <= stage_config_ptr->max_level )
      {
        v27 = ((_BYTE)stage_ptr + 25) & 7;
        v28 = (*(_BYTE *)(((unsigned __int64)&stage_ptr->is_entering_next_level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v27 >= *(_BYTE *)(((unsigned __int64)&stage_ptr->is_entering_next_level >> 3) + 0x7FFF8000));
        if ( (_BYTE)v28 )
          __asan_report_store1(&stage_ptr->is_entering_next_level, v27, v28);
        stage_ptr->is_entering_next_level = 1;
        v29 = *(_DWORD *)(v5 + 48) + 1;
        v30 = *(_BYTE *)(((unsigned __int64)&stage_ptr->cur_level >> 3) + 0x7FFF8000);
        LOBYTE(v27) = v30 != 0;
        v31 = (v30 != 0) & (unsigned __int8)((char)((((_BYTE)stage_ptr + 20) & 7) + 3) >= v30);
        if ( (_BYTE)v31 )
          __asan_report_store4(&stage_ptr->cur_level, v27, v31);
        stage_ptr->cur_level = v29;
        proto::RoguelikeDungeonSettleInfo::set_is_final_level(settle_info, 0);
      }
      else
      {
        v22 = ((_BYTE)stage_ptr + 14) & 7;
        v23 = (*(_BYTE *)(((unsigned __int64)&stage_ptr->is_passed >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v22 >= *(_BYTE *)(((unsigned __int64)&stage_ptr->is_passed >> 3) + 0x7FFF8000));
        if ( (_BYTE)v23 )
          __asan_report_store1(&stage_ptr->is_passed, v22, v23);
        stage_ptr->is_passed = 1;
        RogueStageData::fillSettleInfo(stage_ptr, settle_info);
        RoguelikeDungeonActivity::logStageSettle(this, stage_ptr, 1);
        proto::RoguelikeDungeonSettleInfo::set_is_final_level(settle_info, 1);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        RogueStageData::flushCoin(stage_ptr, this->player_);
        RoguelikeDungeonActivity::clearCoinA(this);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        WatcherComp = Player::getWatcherComp(this->player_);
        PlayerWatcherComp::triggerRogueGadgetDie(
          WatcherComp,
          *(_DWORD *)(v5 + 32),
          *(_DWORD *)(v5 + 48),
          dungeon_id,
          &stage_ptr->dead_gadget_count_map,
          1);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        p_kill_monster_num = Player::getWatcherComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&stage_ptr->kill_monster_num >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&stage_ptr->kill_monster_num >> 3) + 0x7FFF8000) <= 3 )
        {
          p_kill_monster_num = (PlayerWatcherComp *)&stage_ptr->kill_monster_num;
          __asan_report_load4(&stage_ptr->kill_monster_num);
        }
        PlayerWatcherComp::triggerRogueMonsterDie(
          p_kill_monster_num,
          *(_DWORD *)(v5 + 32),
          stage_ptr->kill_monster_num,
          1);
        RogueStageData::buildSettleEvent((RogueStageData *const)(v5 + 64), (__int64)stage_ptr, 1);
        if ( std::operator!=<RogueDungeonSettleEvent>((const std::shared_ptr<RogueDungeonSettleEvent> *)(v5 + 64), 0LL) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          EventComp = Player::getEventComp(this->player_);
          std::shared_ptr<BaseEvent>::shared_ptr<RogueDungeonSettleEvent,void>(
            (std::shared_ptr<BaseEvent> *const)&v42,
            (const std::shared_ptr<RogueDungeonSettleEvent> *)(v5 + 64));
          PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v42);
          std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v42);
        }
        RogueStageData::clearRuntimeData(stage_ptr);
        std::shared_ptr<RogueDungeonSettleEvent>::~shared_ptr((std::shared_ptr<RogueDungeonSettleEvent> *const)(v5 + 64));
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v42);
      v32 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42);
      v33 = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::vector<unsigned int>> const,unsigned int>(
              &v32->design_config.txt_config_mgr.activity_rogue_config_mgr.stage_unlock_rune_map,
              (const unsigned int *)(v5 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v42);
      if ( v33 )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v42);
        v34 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42);
        v35 = std::unordered_map<unsigned int,std::vector<unsigned int>>::at(
                &v34->design_config.txt_config_mgr.activity_rogue_config_mgr.stage_unlock_rune_map,
                (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v5 + 32));
        RoguelikeDungeonActivity::updateUnlockRuneVec(this, v35);
        std::shared_ptr<Config>::~shared_ptr(&v42);
      }
      BaseActivity::notifyClientData(this, 0);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v43,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/roguelike_dungeon_activity.cpp",
        "onRogueDungeonSuccess",
        1246);
      v10 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              &v43,
              (const char (*)[47])"[ROGUE] stage config ptr is nullptr, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &stage_ptr->stage_id);
      common::milog::MiLogStream::~MiLogStream(&v43);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike_dungeon_activity.cpp",
      "onRogueDungeonSuccess",
      1239);
    v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v43,
           (const char (*)[40])"[ROGUE] stage_ptr is nullptr, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 32));
    common::milog::MiLogStream::~MiLogStream(&v43);
  }
  if ( v44 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1284: range 0000000016C4C964-0000000016C4CE2D
void __fastcall RoguelikeDungeonActivity::onRogueDungeonFailed(
        RoguelikeDungeonActivity *const this,
        uint32_t stage_id,
        uint32_t dungeon_id,
        uint32_t level_id,
        proto::RoguelikeDungeonSettleInfo *settle_info)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  common::milog::MiLogStream *v8; // rax
  bool isAllChallengeCellFinish; // r14
  char *v10; // rsi
  std::map<unsigned int,bool>::mapped_type *v11; // rax
  bool *v12; // rdx
  char v13; // cl
  PlayerEventComp *EventComp; // r14
  PlayerWatcherComp *WatcherComp; // rax
  PlayerWatcherComp *p_kill_monster_num; // rdi
  RogueStageData *stage_ptr; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-B0h] BYREF
  char v24[144]; // [rsp+60h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 4 13 stage_id:1283 48 4 13 level_id:1283 64 16 14 event_ptr:1295";
  *(_QWORD *)(v5 + 16) = RoguelikeDungeonActivity::onRogueDungeonFailed;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -202178560;
  *(_DWORD *)(v5 + 32) = stage_id;
  *(_DWORD *)(v5 + 48) = level_id;
  stage_ptr = RoguelikeDungeonActivity::findStage(this, *(_DWORD *)(v5 + 32));
  if ( stage_ptr )
  {
    isAllChallengeCellFinish = RogueLikeDungeonRuntimeMgr::isAllChallengeCellFinish(&this->roguelike_runtime_mgr_);
    v10 = (char *)(v5 + 48);
    v11 = std::map<unsigned int,bool>::operator[](
            &stage_ptr->level_finish_all_challenge_map,
            (const std::map<unsigned int,bool>::key_type *)(v5 + 48));
    v12 = v11;
    v13 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
    if ( v13 != 0 && ((unsigned __int8)v11 & 7) >= v13 )
    {
      LOBYTE(v10) = v13 != 0;
      __asan_report_store1(v11, v10, v11);
    }
    *v12 = isAllChallengeCellFinish;
    RogueStageData::fillSettleInfo(stage_ptr, settle_info);
    RoguelikeDungeonActivity::logStageSettle(this, stage_ptr, 0);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    RogueStageData::flushCoin(stage_ptr, this->player_);
    RogueStageData::buildSettleEvent((RogueStageData *const)(v5 + 64), (__int64)stage_ptr, 0);
    if ( std::operator!=<RogueDungeonSettleEvent>((const std::shared_ptr<RogueDungeonSettleEvent> *)(v5 + 64), 0LL) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      EventComp = Player::getEventComp(this->player_);
      std::shared_ptr<BaseEvent>::shared_ptr<RogueDungeonSettleEvent,void>(
        &p_event_ptr,
        (const std::shared_ptr<RogueDungeonSettleEvent> *)(v5 + 64));
      PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
      std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
    }
    RoguelikeDungeonActivity::clearCoinA(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    WatcherComp = Player::getWatcherComp(this->player_);
    PlayerWatcherComp::triggerRogueGadgetDie(
      WatcherComp,
      *(_DWORD *)(v5 + 32),
      *(_DWORD *)(v5 + 48),
      dungeon_id,
      &stage_ptr->dead_gadget_count_map,
      1);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    p_kill_monster_num = Player::getWatcherComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&stage_ptr->kill_monster_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&stage_ptr->kill_monster_num >> 3) + 0x7FFF8000) <= 3 )
    {
      p_kill_monster_num = (PlayerWatcherComp *)&stage_ptr->kill_monster_num;
      __asan_report_load4(&stage_ptr->kill_monster_num);
    }
    PlayerWatcherComp::triggerRogueMonsterDie(p_kill_monster_num, *(_DWORD *)(v5 + 32), stage_ptr->kill_monster_num, 1);
    RoguelikeMiscMgr::onRoguelikeDungeonSettle(&this->roguelike_misc_mgr_);
    RogueStageData::clearRuntimeData(stage_ptr);
    BaseActivity::notifyClientData(this, 0);
    std::shared_ptr<RogueDungeonSettleEvent>::~shared_ptr((std::shared_ptr<RogueDungeonSettleEvent> *const)(v5 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike_dungeon_activity.cpp",
      "onRogueDungeonFailed",
      1288);
    v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v23,
           (const char (*)[40])"[ROGUE] stage_ptr is nullptr, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 32));
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  if ( v24 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1311: range 0000000016C4CE2E-0000000016C4D95E
__int64 __fastcall RoguelikeDungeonActivity::resumeRoguelikeDungeon(
        RoguelikeDungeonActivity *const this,
        uint32_t stage_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int v5; // r14d
  bool isPlayerInDungeon; // r14
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  PlayerAvatarComp *AvatarComp; // rax
  RogueLikeDungeonRuntimeMgr *p_roguelike_runtime_mgr; // rdi
  common::milog::MiLogStream *v16; // rax
  PlayerAvatarComp *v17; // rax
  __int64 result; // rax
  int32_t ret; // [rsp+1Ch] [rbp-D4h]
  RogueStageData *stage_ptr; // [rsp+20h] [rbp-D0h]
  const data::RogueStageExcelConfig *stage_config_ptr; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Scene> __r; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v24; // [rsp+40h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 8 ret:1332 48 4 13 stage_id:1310 64 16 18 cur_scene_ptr:1316";
  *(_QWORD *)(v2 + 16) = RoguelikeDungeonActivity::resumeRoguelikeDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = stage_id;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
  {
    v5 = 10046;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike_dungeon_activity.cpp",
        "resumeRoguelikeDungeon",
        1319);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        &v24,
        (const char (*)[29])"[ROGUE] cur scene is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v24);
      v5 = -1;
    }
    else
    {
      std::dynamic_pointer_cast<DungeonScene,Scene>(&__r);
      isPlayerInDungeon = RogueLikeDungeonRuntimeMgr::isPlayerInDungeon(
                            &this->roguelike_runtime_mgr_,
                            (DungeonScenePtr *)&__r);
      std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)&__r);
      if ( isPlayerInDungeon )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike_dungeon_activity.cpp",
          "resumeRoguelikeDungeon",
          1324);
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          &v24,
          (const char (*)[32])"[ROGUE] player still in dungeon");
        common::milog::MiLogStream::~MiLogStream(&v24);
        v5 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        SceneComp = Player::getSceneComp(this->player_);
        if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/roguelike_dungeon_activity.cpp",
            "resumeRoguelikeDungeon",
            1329);
          common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            &v24,
            (const char (*)[29])"[ROGUE] is not in self world");
          common::milog::MiLogStream::~MiLogStream(&v24);
          v5 = 512;
        }
        else
        {
          *(_DWORD *)(v2 + 32) = RoguelikeDungeonActivity::checkMpStatus(this);
          if ( *(_DWORD *)(v2 + 32) )
          {
            common::milog::MiLogStream::create(
              &v24,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/roguelike_dungeon_activity.cpp",
              "resumeRoguelikeDungeon",
              1335);
            v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                   &v24,
                   (const char (*)[42])"[ROGUE] mp status is not allowed, status:");
            common::milog::MiLogStream::operator<<<int,(int *)0>(v8, (const int *)(v2 + 32));
            common::milog::MiLogStream::~MiLogStream(&v24);
            v5 = *(_DWORD *)(v2 + 32);
          }
          else
          {
            stage_ptr = RoguelikeDungeonActivity::findStage(this, *(_DWORD *)(v2 + 48));
            if ( stage_ptr )
            {
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&__r);
              v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__r);
              stage_config_ptr = data::ActivityRogueExcelConfigMgrBase::findRogueStageExcelConfig(
                                   &v10->design_config.txt_config_mgr.activity_rogue_config_mgr,
                                   *(_DWORD *)(v2 + 48));
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__r);
              if ( stage_config_ptr )
              {
                if ( *(char *)(((unsigned __int64)&stage_ptr->is_in_combat >> 3) + 0x7FFF8000) < 0 )
                  __asan_report_load1(&stage_ptr->is_in_combat);
                if ( !stage_ptr->is_in_combat )
                {
                  common::milog::MiLogStream::create(
                    &v24,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/roguelike_dungeon_activity.cpp",
                    "resumeRoguelikeDungeon",
                    1352);
                  v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                          &v24,
                          (const char (*)[39])"[ROGUE] stage not in combat, stage_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v12,
                    (const unsigned int *)(v2 + 48));
                  common::milog::MiLogStream::~MiLogStream(&v24);
                  v5 = -1;
                }
                else if ( RogueLikeDungeonRuntimeMgr::isValid(&this->roguelike_runtime_mgr_) )
                {
                  if ( RogueLikeDungeonRuntimeMgr::getStageId(&this->roguelike_runtime_mgr_) != *(_DWORD *)(v2 + 48) )
                  {
                    common::milog::MiLogStream::create(
                      &v24,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/player/activity/roguelike_dungeon_activity.cpp",
                      "resumeRoguelikeDungeon",
                      1360);
                    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                      &v24,
                      (const char (*)[27])"[ROGUE] stage_id not equal");
                    common::milog::MiLogStream::~MiLogStream(&v24);
                  }
                  *(_DWORD *)(v2 + 32) = RogueLikeDungeonRuntimeMgr::resumeRogueDungeon(
                                           &this->roguelike_runtime_mgr_,
                                           *(_DWORD *)(v2 + 48));
                  if ( *(_DWORD *)(v2 + 32) )
                  {
                    common::milog::MiLogStream::create(
                      &v24,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/activity/roguelike_dungeon_activity.cpp",
                      "resumeRoguelikeDungeon",
                      1366);
                    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                      &v24,
                      (const char (*)[34])"[ROGUE] resumeRogueDungeon failed");
                    common::milog::MiLogStream::~MiLogStream(&v24);
                    v5 = *(_DWORD *)(v2 + 32);
                  }
                  else
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8(&this->player_);
                    AvatarComp = Player::getAvatarComp(this->player_);
                    PlayerAvatarComp::delAllBuffs(AvatarComp);
                    common::milog::MiLogStream::create(
                      &v24,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/player/activity/roguelike_dungeon_activity.cpp",
                      "resumeRoguelikeDungeon",
                      1370);
                    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                      &v24,
                      (const char (*)[32])"[ROGUE] resumeRogueDungeon succ");
                    common::milog::MiLogStream::~MiLogStream(&v24);
                    v5 = 0;
                  }
                }
                else
                {
                  if ( *(_BYTE *)(((unsigned __int64)&stage_ptr->is_entering_next_level >> 3) + 0x7FFF8000) != 0
                    && (((unsigned __int8)stage_ptr + 25) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_ptr->is_entering_next_level >> 3)
                                                                           + 0x7FFF8000) )
                  {
                    __asan_report_load1(&stage_ptr->is_entering_next_level);
                  }
                  if ( stage_ptr->is_entering_next_level
                    && !RogueLikeDungeonRuntimeMgr::isValid(&this->roguelike_runtime_mgr_) )
                  {
                    p_roguelike_runtime_mgr = &this->roguelike_runtime_mgr_;
                    if ( *(_BYTE *)(((unsigned __int64)&stage_ptr->cur_level >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)stage_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_ptr->cur_level >> 3)
                                                                               + 0x7FFF8000) )
                    {
                      p_roguelike_runtime_mgr = (RogueLikeDungeonRuntimeMgr *)&stage_ptr->cur_level;
                      __asan_report_load4(&stage_ptr->cur_level);
                    }
                    ret = RogueLikeDungeonRuntimeMgr::enterDungeonLevel(
                            p_roguelike_runtime_mgr,
                            *(_DWORD *)(v2 + 48),
                            stage_ptr->cur_level,
                            1);
                    if ( ret )
                    {
                      common::milog::MiLogStream::create(
                        &v24,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/player/activity/roguelike_dungeon_activity.cpp",
                        "resumeRoguelikeDungeon",
                        1380);
                      v16 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                              &v24,
                              (const char (*)[46])"[ROGUE] enterDungeonLevel failed, next_level:");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &stage_ptr->cur_level);
                      common::milog::MiLogStream::~MiLogStream(&v24);
                      v5 = ret;
                    }
                    else
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8(&this->player_);
                      v17 = Player::getAvatarComp(this->player_);
                      PlayerAvatarComp::delAllBuffs(v17);
                      v5 = 0;
                    }
                  }
                  else
                  {
                    common::milog::MiLogStream::create(
                      &v24,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/activity/roguelike_dungeon_activity.cpp",
                      "resumeRoguelikeDungeon",
                      1386);
                    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                      &v24,
                      (const char (*)[38])"[ROGUE] resume dungeon in error case!");
                    common::milog::MiLogStream::~MiLogStream(&v24);
                    v5 = -1;
                  }
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v24,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/activity/roguelike_dungeon_activity.cpp",
                  "resumeRoguelikeDungeon",
                  1347);
                v11 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                        &v24,
                        (const char (*)[47])"[ROGUE] stage config ptr is nullptr, stage_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v11,
                  (const unsigned int *)(v2 + 48));
                common::milog::MiLogStream::~MiLogStream(&v24);
                v5 = -1;
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v24,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/roguelike_dungeon_activity.cpp",
                "resumeRoguelikeDungeon",
                1341);
              v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                     &v24,
                     (const char (*)[34])"[ROGUE] stage not open, stage_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v2 + 48));
              common::milog::MiLogStream::~MiLogStream(&v24);
              v5 = -1;
            }
          }
        }
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  }
  result = v5;
  if ( v25 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1391: range 0000000016C4D960-0000000016C4E307
__int64 __fastcall RoguelikeDungeonActivity::checkCanStartStageDungeon(
        RoguelikeDungeonActivity *const this,
        uint32_t stage_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  bool v18; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  const std::unordered_map<unsigned int,unsigned int>::mapped_type *v20; // rax
  _DWORD *v21; // rdx
  PlayerQuestComp *QuestComp; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  std::unordered_map<unsigned int,RogueStageData>::iterator __for_begin; // [rsp+10h] [rbp-100h] BYREF
  std::unordered_map<unsigned int,RogueStageData>::iterator __for_end; // [rsp+18h] [rbp-F8h] BYREF
  const data::RogueStageExcelConfig *stage_config_ptr; // [rsp+20h] [rbp-F0h]
  RogueStageData *stage_ptr; // [rsp+28h] [rbp-E8h]
  std::unordered_map<unsigned int,RogueStageData> *__for_range; // [rsp+30h] [rbp-E0h]
  const std::pair<unsigned int const,RogueStageData> *v31; // [rsp+38h] [rbp-D8h]
  std::tuple_element<0,const std::pair<unsigned int const,RogueStageData> >::type *id; // [rsp+40h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,RogueStageData> >::type *stage_info; // [rsp+48h] [rbp-C8h]
  std::shared_ptr<Config> v34; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v35; // [rsp+60h] [rbp-B0h] BYREF
  char v36[144]; // [rsp+80h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 17 pre_quest_id:1435 64 4 13 stage_id:1390";
  *(_QWORD *)(v2 + 16) = RoguelikeDungeonActivity::checkCanStartStageDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = stage_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v34);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34);
  stage_config_ptr = data::ActivityRogueExcelConfigMgrBase::findRogueStageExcelConfig(
                       &v5->design_config.txt_config_mgr.activity_rogue_config_mgr,
                       *(_DWORD *)(v2 + 64));
  std::shared_ptr<Config>::~shared_ptr(&v34);
  if ( stage_config_ptr )
  {
    stage_ptr = RoguelikeDungeonActivity::findStage(this, *(_DWORD *)(v2 + 64));
    if ( stage_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      SceneComp = Player::getSceneComp(this->player_);
      if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/roguelike_dungeon_activity.cpp",
          "checkCanStartStageDungeon",
          1407);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          &v35,
          (const char (*)[33])"[ROGUELIKE] is not in self world");
        common::milog::MiLogStream::~MiLogStream(&v35);
        result = 512LL;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&stage_ptr->is_open >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)stage_ptr + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_ptr->is_open >> 3)
                                                                 + 0x7FFF8000) )
        {
          __asan_report_load1(&stage_ptr->is_open);
        }
        if ( !stage_ptr->is_open )
        {
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/roguelike_dungeon_activity.cpp",
            "checkCanStartStageDungeon",
            1413);
          v10 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  &v35,
                  (const char (*)[38])"[ROGUELIKE] stage not open, stage_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 64));
          common::milog::MiLogStream::~MiLogStream(&v35);
          result = 10048LL;
        }
        else
        {
          __for_range = &this->stage_map_;
          __for_begin._M_cur = std::unordered_map<unsigned int,RogueStageData>::begin(&this->stage_map_)._M_cur;
          __for_end._M_cur = std::unordered_map<unsigned int,RogueStageData>::end(&this->stage_map_)._M_cur;
          while ( std::__detail::operator!=<std::pair<unsigned int const,RogueStageData>,false>(
                    &__for_begin,
                    &__for_end) )
          {
            v31 = std::__detail::_Node_iterator<std::pair<unsigned int const,RogueStageData>,false,false>::operator*(&__for_begin);
            id = std::get<0ul,unsigned int const,RogueStageData>(v31);
            stage_info = (std::tuple_element<1,const std::pair<unsigned int const,RogueStageData> >::type *)std::get<1ul,unsigned int const,RogueStageData>(v31);
            if ( *(char *)(((unsigned __int64)&stage_info->is_in_combat >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(&stage_info->is_in_combat);
            if ( stage_info->is_in_combat )
            {
              common::milog::MiLogStream::create(
                &v35,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/roguelike_dungeon_activity.cpp",
                "checkCanStartStageDungeon",
                1420);
              v11 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                      &v35,
                      (const char (*)[45])"[ROGUELIKE] a stage is in combat , stage_id:");
              v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v11,
                      (const unsigned int *)(v2 + 64));
              v13 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                      v12,
                      (const char (*)[19])", combat_stage_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, id);
              common::milog::MiLogStream::~MiLogStream(&v35);
              result = 10042LL;
              goto LABEL_38;
            }
            if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(id);
            }
            if ( *id < *(_DWORD *)(v2 + 64) )
            {
              if ( *(_BYTE *)(((unsigned __int64)&stage_info->is_passed >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)stage_info + 14) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_info->is_passed >> 3)
                                                                        + 0x7FFF8000) )
              {
                __asan_report_load1(&stage_info->is_passed);
              }
              if ( !stage_info->is_passed )
              {
                common::milog::MiLogStream::create(
                  &v35,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/roguelike_dungeon_activity.cpp",
                  "checkCanStartStageDungeon",
                  1429);
                v14 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                        &v35,
                        (const char (*)[56])"[ROGUELIKE] pre stage dungeon is not passed , stage_id:");
                v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v14,
                        (const unsigned int *)(v2 + 64));
                v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        v15,
                        (const char (*)[16])", pre_stage_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, id);
                common::milog::MiLogStream::~MiLogStream(&v35);
                result = 10050LL;
                goto LABEL_38;
              }
            }
            std::__detail::_Node_iterator<std::pair<unsigned int const,RogueStageData>,false,false>::operator++(&__for_begin);
          }
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v34);
          v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34);
          v18 = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int> const,unsigned int>(
                  &v17->design_config.txt_config_mgr.activity_rogue_config_mgr.stage_pre_quest_map,
                  (const unsigned int *)(v2 + 64));
          std::shared_ptr<Config>::~shared_ptr(&v34);
          if ( !v18 )
            goto LABEL_37;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v34);
          v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34);
          v20 = std::unordered_map<unsigned int,unsigned int>::at(
                  &v19->design_config.txt_config_mgr.activity_rogue_config_mgr.stage_pre_quest_map,
                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 64));
          v21 = v20;
          if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v20);
          }
          *(_DWORD *)(v2 + 48) = *v21;
          std::shared_ptr<Config>::~shared_ptr(&v34);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          QuestComp = Player::getQuestComp(this->player_);
          if ( PlayerQuestComp::getQuestState(QuestComp, *(_DWORD *)(v2 + 48)) == QUEST_STATE_FINISHED )
          {
LABEL_37:
            result = 0LL;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v35,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/roguelike_dungeon_activity.cpp",
              "checkCanStartStageDungeon",
              1438);
            v23 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                    &v35,
                    (const char (*)[50])"[ROGUELIKE] pre_quest is not finished , stage_id:");
            v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v23,
                    (const unsigned int *)(v2 + 64));
            v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v24,
                    (const char (*)[16])", pre_quest_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v35);
            result = 10047LL;
          }
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike_dungeon_activity.cpp",
        "checkCanStartStageDungeon",
        1401);
      v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
             &v35,
             (const char (*)[37])"[ROGUELIKE] invalid stage, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v35);
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike_dungeon_activity.cpp",
      "checkCanStartStageDungeon",
      1395);
    v6 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v35,
           (const char (*)[51])"[ROGUELIKE] stage config ptr is nullptr, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v35);
    result = 0xFFFFFFFFLL;
  }
LABEL_38:
  if ( v36 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1446: range 0000000016C4E308-0000000016C4F897
int32_t __cdecl RoguelikeDungeonActivity::selectAvatarAndEnterInitDungeon(
        RoguelikeDungeonActivity *const this,
        const proto::RoguelikeSelectAvatarAndEnterDungeonReq *req,
        proto::RoguelikeSelectAvatarAndEnterDungeonRsp *rsp_0)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  PlayerBasicComp *BasicComp; // rax
  uint32_t v8; // edx
  common::milog::MiLogStream *v9; // r14
  uint32_t v10; // edx
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  bool isPlayerInDungeon; // r15
  char v14; // r15
  const google::protobuf::RepeatedField<long unsigned int> *v15; // rax
  const google::protobuf::RepeatedField<long unsigned int> *v16; // rax
  unsigned __int64 v18; // rax
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v20; // rax
  int v21; // r15d
  std::pair<std::__detail::_Node_iterator<long unsigned int,true,false>,bool> v22; // rax
  common::milog::MiLogStream *v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  PlayerAvatarComp *v27; // rax
  common::milog::MiLogStream *v28; // rax
  int v29; // r15d
  std::pair<std::__detail::_Node_iterator<long unsigned int,true,false>,bool> v30; // rax
  common::milog::MiLogStream *v31; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  uint32_t v34; // eax
  common::milog::MiLogStream *v35; // r14
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rdx
  int v40; // r14d
  uint32_t v41; // ecx
  char v42; // dl
  __int64 v43; // rdx
  __int64 v44; // rsi
  uint32_t v45; // eax
  PlayerAvatarComp *v46; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueEnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // r14
  google::protobuf::uint32 v48; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueEnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  Player *player; // r14
  int32_t result; // eax
  std::string v52; // [rsp+0h] [rbp-2C0h]
  char *v53; // [rsp+8h] [rbp-2B8h]
  bool v54; // [rsp+10h] [rbp-2B0h]
  unsigned int val; // [rsp+34h] [rbp-28Ch] BYREF
  std::vector<long unsigned int>::iterator __for_begin; // [rsp+38h] [rbp-288h] BYREF
  std::vector<long unsigned int>::iterator __for_end; // [rsp+40h] [rbp-280h] BYREF
  RogueStageData *stage_ptr; // [rsp+48h] [rbp-278h]
  std::vector<long unsigned int> *__for_range; // [rsp+50h] [rbp-270h]
  std::vector<long unsigned int> *__for_range_0; // [rsp+58h] [rbp-268h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+60h] [rbp-260h] BYREF
  std::string v63; // [rsp+70h] [rbp-250h] BYREF
  char v64[560]; // [rsp+90h] [rbp-230h] BYREF

  *(&v52._anon_0._M_allocated_capacity + 1) = (std::string::size_type)rsp_0;
  v4 = (unsigned __int64)v64;
  v52._M_string_length = (std::string::size_type)v64;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(512LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 48 1 23 log_context_holder:1447 64 4 8 ret:1459 80 8 9 guid:1525 112 16 18 cur_scene_ptr:1471"
                        " 144 16 12 log_ptr:1557 176 16 22 formal_avatar_ptr:1511 208 24 28 onstage_avatar_guid_vec:1490 "
                        "272 24 30 backstage_avatar_guid_vec:1492 336 48 21 element_type_set:1506 416 56 20 formal_guid_set:1507";
  *(_QWORD *)(v4 + 16) = RoguelikeDungeonActivity::selectAvatarAndEnterInitDungeon;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = 61956;
  v6[536862722] = -234881024;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862725] = 62194;
  v6[536862726] = 62194;
  v6[536862727] = -218959360;
  v6[536862728] = 62194;
  v6[536862729] = -218959360;
  v6[536862730] = 62194;
  v6[536862732] = -218959118;
  v6[536862734] = -218103808;
  v6[536862735] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v63, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0xDD4u, v52);
  std::string::~string(&v63);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
  {
    v3 = 10046;
  }
  else
  {
    v8 = proto::RoguelikeSelectAvatarAndEnterDungeonReq::stage_id(req);
    stage_ptr = RoguelikeDungeonActivity::findStage(this, v8);
    if ( stage_ptr )
    {
      v10 = proto::RoguelikeSelectAvatarAndEnterDungeonReq::stage_id(req);
      *(_DWORD *)(v4 + 64) = RoguelikeDungeonActivity::checkCanStartStageDungeon(this, v10);
      if ( *(_DWORD *)(v4 + 64) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v63,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/roguelike_dungeon_activity.cpp",
          "selectAvatarAndEnterInitDungeon",
          1462);
        v11 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                (common::milog::MiLogStream *const)&v63,
                (const char (*)[52])"[ROGUE] checkCanStartStageDungeon failed, stage_id:");
        val = proto::RoguelikeSelectAvatarAndEnterDungeonReq::stage_id(req);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v63);
        v3 = *(_DWORD *)(v4 + 64);
      }
      else
      {
        *(_DWORD *)(v4 + 64) = RoguelikeDungeonActivity::checkMpStatus(this);
        if ( *(_DWORD *)(v4 + 64) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v63,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/roguelike_dungeon_activity.cpp",
            "selectAvatarAndEnterInitDungeon",
            1468);
          v12 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  (common::milog::MiLogStream *const)&v63,
                  (const char (*)[42])"[ROGUE] mp status is not allowed, status:");
          common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v4 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v63);
          v3 = *(_DWORD *)(v4 + 64);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          Player::getSceneComp(this->player_);
          PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v4 + 112));
          if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 112)) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v63,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/roguelike_dungeon_activity.cpp",
              "selectAvatarAndEnterInitDungeon",
              1474);
            common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              (common::milog::MiLogStream *const)&v63,
              (const char (*)[29])"[ROGUE] cur scene is nullptr");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v63);
            v3 = -1;
          }
          else
          {
            std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v4 + 176));
            isPlayerInDungeon = RogueLikeDungeonRuntimeMgr::isPlayerInDungeon(
                                  &this->roguelike_runtime_mgr_,
                                  (DungeonScenePtr *)(v4 + 176));
            std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 176));
            if ( isPlayerInDungeon )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&v63,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/roguelike_dungeon_activity.cpp",
                "selectAvatarAndEnterInitDungeon",
                1479);
              common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                (common::milog::MiLogStream *const)&v63,
                (const char (*)[32])"[ROGUE] player still in dungeon");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v63);
              v3 = -1;
            }
            else
            {
              v14 = 0;
              v54 = 0;
              if ( RogueLikeDungeonRuntimeMgr::isValid(&this->roguelike_runtime_mgr_) )
              {
                std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v4 + 176));
                v14 = 1;
                if ( RogueLikeDungeonRuntimeMgr::isPlayerInDungeon(
                       &this->roguelike_runtime_mgr_,
                       (DungeonScenePtr *)(v4 + 176)) )
                {
                  v54 = 1;
                }
              }
              if ( v14 )
                std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 176));
              if ( v54 )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&v63,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/roguelike_dungeon_activity.cpp",
                  "selectAvatarAndEnterInitDungeon",
                  1486);
                common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                  (common::milog::MiLogStream *const)&v63,
                  (const char (*)[43])"[ROGUE] has runtime record, cannot reenter");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v63);
                v3 = -1;
              }
              else
              {
                std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v4 + 208));
                v15 = proto::RoguelikeSelectAvatarAndEnterDungeonReq::onstage_avatar_guid_list(req);
                common::tools::MiscUtils::repeatedToVector<unsigned long,unsigned long>(
                  v15,
                  (std::vector<long unsigned int> *)(v4 + 208));
                std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v4 + 272));
                v16 = proto::RoguelikeSelectAvatarAndEnterDungeonReq::backstage_avatar_guid_list(req);
                common::tools::MiscUtils::repeatedToVector<unsigned long,unsigned long>(
                  v16,
                  (std::vector<long unsigned int> *)(v4 + 272));
                if ( std::vector<unsigned long>::empty((const std::vector<long unsigned int> *const)(v4 + 208)) )
                {
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)&v63,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/roguelike_dungeon_activity.cpp",
                    "selectAvatarAndEnterInitDungeon",
                    1497);
                  common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                    (common::milog::MiLogStream *const)&v63,
                    (const char (*)[48])"[ROGUE] onstage avatar list should not be empty");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v63);
                  v3 = -1;
                }
                else if ( std::vector<unsigned long>::size((const std::vector<long unsigned int> *const)(v4 + 208)) > 4
                       || std::vector<unsigned long>::size((const std::vector<long unsigned int> *const)(v4 + 272)) > 4 )
                {
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)&v63,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/roguelike_dungeon_activity.cpp",
                    "selectAvatarAndEnterInitDungeon",
                    1503);
                  common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                    (common::milog::MiLogStream *const)&v63,
                    (const char (*)[38])"[ROGUE] avatar guid vec size exceeded");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v63);
                  v3 = -1;
                }
                else
                {
                  std::set<data::ElementType>::set((std::set<data::ElementType> *const)(v4 + 336));
                  std::unordered_set<unsigned long>::unordered_set((std::unordered_set<long unsigned int> *const)(v4 + 416));
                  __for_range = (std::vector<long unsigned int> *)(v4 + 208);
                  __for_begin._M_current = std::vector<unsigned long>::begin((std::vector<long unsigned int> *const)(v4 + 208))._M_current;
                  __for_end._M_current = std::vector<unsigned long>::end((std::vector<long unsigned int> *const)(v4 + 208))._M_current;
                  while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(&__for_begin, &__for_end) )
                  {
                    v18 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*(&__for_begin);
                    if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
                      v18 = __asan_report_load8(v18);
                    *(_QWORD *)(v4 + 80) = *(_QWORD *)v18;
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8(&this->player_);
                    AvatarComp = Player::getAvatarComp(this->player_);
                    PlayerAvatarComp::findFormalAvatar((const PlayerAvatarComp *const)(v4 + 176), (uint64_t)AvatarComp);
                    if ( std::operator==<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v4 + 176)) )
                    {
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)&v63,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/player/activity/roguelike_dungeon_activity.cpp",
                        "selectAvatarAndEnterInitDungeon",
                        1514);
                      v20 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                              (common::milog::MiLogStream *const)&v63,
                              (const char (*)[46])"[ROGUE] formal avatar not found, avatar_guid:");
                      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                        v20,
                        (const unsigned __int64 *)(v4 + 80));
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v63);
                      v3 = -1;
                      v21 = 0;
                    }
                    else
                    {
                      v22 = std::unordered_set<unsigned long>::insert(
                              (std::unordered_set<long unsigned int> *const)(v4 + 416),
                              (const std::unordered_set<long unsigned int>::value_type *)(v4 + 80));
                      if ( !v22.second )
                      {
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)&v63,
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/player/activity/roguelike_dungeon_activity.cpp",
                          "selectAvatarAndEnterInitDungeon",
                          1520);
                        v23 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                                (common::milog::MiLogStream *const)&v63,
                                (const char (*)[38])"[ROGUE] duplicated guid, avatar_guid:");
                        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                          v23,
                          (const unsigned __int64 *)(v4 + 80));
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v63);
                        v3 = -1;
                        v21 = 0;
                      }
                      else
                      {
                        v24 = (unsigned __int64)std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 176));
                        if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
                          v24 = __asan_report_load8(v24);
                        v25 = *(_QWORD *)v24 + 280LL;
                        if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
                          v24 = __asan_report_load8(*(_QWORD *)v24 + 280LL);
                        val = (*(__int64 (__fastcall **)(unsigned __int64))v25)(v24);
                        std::set<data::ElementType>::insert(
                          (std::set<data::ElementType> *const)(v4 + 336),
                          (std::set<data::ElementType>::value_type *)&val);
                        v21 = 1;
                      }
                    }
                    std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v4 + 176));
                    if ( v21 != 1 )
                      goto LABEL_89;
                    __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++(&__for_begin);
                  }
                  __for_range_0 = (std::vector<long unsigned int> *)(v4 + 272);
                  __for_begin._M_current = std::vector<unsigned long>::begin((std::vector<long unsigned int> *const)(v4 + 272))._M_current;
                  __for_end._M_current = std::vector<unsigned long>::end(__for_range_0)._M_current;
                  while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(&__for_begin, &__for_end) )
                  {
                    v26 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*(&__for_begin);
                    if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
                      v26 = __asan_report_load8(v26);
                    *(_QWORD *)(v4 + 80) = *(_QWORD *)v26;
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8(&this->player_);
                    v27 = Player::getAvatarComp(this->player_);
                    PlayerAvatarComp::findFormalAvatar((const PlayerAvatarComp *const)(v4 + 176), (uint64_t)v27);
                    if ( std::operator==<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v4 + 176)) )
                    {
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)&v63,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/player/activity/roguelike_dungeon_activity.cpp",
                        "selectAvatarAndEnterInitDungeon",
                        1530);
                      v28 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                              (common::milog::MiLogStream *const)&v63,
                              (const char (*)[46])"[ROGUE] formal avatar not found, avatar_guid:");
                      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                        v28,
                        (const unsigned __int64 *)(v4 + 80));
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v63);
                      v3 = -1;
                      v29 = 0;
                    }
                    else
                    {
                      v30 = std::unordered_set<unsigned long>::insert(
                              (std::unordered_set<long unsigned int> *const)(v4 + 416),
                              (const std::unordered_set<long unsigned int>::value_type *)(v4 + 80));
                      if ( !v30.second )
                      {
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)&v63,
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/player/activity/roguelike_dungeon_activity.cpp",
                          "selectAvatarAndEnterInitDungeon",
                          1536);
                        v31 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                                (common::milog::MiLogStream *const)&v63,
                                (const char (*)[38])"[ROGUE] duplicated guid, avatar_guid:");
                        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                          v31,
                          (const unsigned __int64 *)(v4 + 80));
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v63);
                        v3 = -1;
                        v29 = 0;
                      }
                      else
                      {
                        v32 = (unsigned __int64)std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 176));
                        if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
                          v32 = __asan_report_load8(v32);
                        v33 = *(_QWORD *)v32 + 280LL;
                        if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
                          v32 = __asan_report_load8(*(_QWORD *)v32 + 280LL);
                        val = (*(__int64 (__fastcall **)(unsigned __int64))v33)(v32);
                        std::set<data::ElementType>::insert(
                          (std::set<data::ElementType> *const)(v4 + 336),
                          (std::set<data::ElementType>::value_type *)&val);
                        v29 = 1;
                      }
                    }
                    std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v4 + 176));
                    if ( v29 != 1 )
                      goto LABEL_89;
                    __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++(&__for_begin);
                  }
                  v34 = proto::RoguelikeSelectAvatarAndEnterDungeonReq::stage_id(req);
                  *(_DWORD *)(v4 + 64) = RogueLikeDungeonRuntimeMgr::enterInitDungeonLevel(
                                           &this->roguelike_runtime_mgr_,
                                           v34,
                                           (const std::vector<long unsigned int> *)(v4 + 208),
                                           (const std::vector<long unsigned int> *)(v4 + 272));
                  if ( *(_DWORD *)(v4 + 64) )
                  {
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)&v63,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/activity/roguelike_dungeon_activity.cpp",
                      "selectAvatarAndEnterInitDungeon",
                      1545);
                    v35 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                            (common::milog::MiLogStream *const)&v63,
                            (const char (*)[45])"[ROGUE] enterInitDungeonLevel, req.stage_id:");
                    val = proto::RoguelikeSelectAvatarAndEnterDungeonReq::stage_id(req);
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &val);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v63);
                    v3 = *(_DWORD *)(v4 + 64);
                  }
                  else
                  {
                    RoguelikeDungeonActivity::clearCoinA(this);
                    v36 = (((_BYTE)stage_ptr + 20) & 7u) + 3;
                    v37 = (*(_BYTE *)(((unsigned __int64)&stage_ptr->cur_level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)stage_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_ptr->cur_level >> 3) + 0x7FFF8000));
                    if ( (_BYTE)v37 )
                      __asan_report_store4(&stage_ptr->cur_level, v36, v37);
                    stage_ptr->cur_level = 1;
                    if ( *(char *)(((unsigned __int64)&stage_ptr->is_in_combat >> 3) + 0x7FFF8000) < 0 )
                      __asan_report_store1(&stage_ptr->is_in_combat, v36, &stage_ptr->is_in_combat);
                    stage_ptr->is_in_combat = 1;
                    v38 = ((_BYTE)stage_ptr + 13) & 7;
                    v39 = (*(_BYTE *)(((unsigned __int64)&stage_ptr->is_explored >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v38 >= *(_BYTE *)(((unsigned __int64)&stage_ptr->is_explored >> 3) + 0x7FFF8000));
                    if ( (_BYTE)v39 )
                      __asan_report_store1(&stage_ptr->is_explored, v38, v39);
                    stage_ptr->is_explored = 1;
                    v40 = std::vector<unsigned long>::size((const std::vector<long unsigned int> *const)(v4 + 208));
                    v41 = v40
                        + std::vector<unsigned long>::size((const std::vector<long unsigned int> *const)(v4 + 272));
                    v42 = *(_BYTE *)(((unsigned __int64)&stage_ptr->avatar_count >> 3) + 0x7FFF8000);
                    LOBYTE(v38) = v42 != 0;
                    v43 = (v42 != 0) & (unsigned __int8)((char)((((_BYTE)stage_ptr - 108) & 7) + 3) >= v42);
                    if ( (_BYTE)v43 )
                      __asan_report_store4(&stage_ptr->avatar_count, v38, v43);
                    stage_ptr->avatar_count = v41;
                    v44 = (unsigned int)std::set<data::ElementType>::size((const std::set<data::ElementType> *const)(v4 + 336));
                    if ( *(_BYTE *)(((unsigned __int64)&stage_ptr->avatar_element_count >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&stage_ptr->avatar_element_count >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_store4(&stage_ptr->avatar_element_count, v44, &stage_ptr->avatar_element_count);
                    }
                    stage_ptr->avatar_element_count = v44;
                    v45 = proto::RoguelikeSelectAvatarAndEnterDungeonReq::stage_id(req);
                    RoguelikeDungeonActivity::genNextTransaction[abi:cxx11](&v63, this, v45);
                    std::string::operator=(&stage_ptr->transaction, &v63);
                    std::string::~string(&v63);
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8(&this->player_);
                    v46 = Player::getAvatarComp(this->player_);
                    PlayerAvatarComp::delAllBuffs(v46);
                    common::tools::perf::make_shared<proto_log::PlayerLogBodyRogueEnterDungeon>();
                    v47 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueEnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueEnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
                    v48 = proto::RoguelikeSelectAvatarAndEnterDungeonReq::stage_id(req);
                    proto_log::PlayerLogBodyRogueEnterDungeon::set_stage_id(v47, v48);
                    v49 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueEnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueEnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
                    proto_log::PlayerLogBodyRogueEnterDungeon::set_rogue_transaction(v49, &stage_ptr->transaction);
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8(&this->player_);
                    player = this->player_;
                    std::shared_ptr<google::protobuf::Message>::shared_ptr(
                      (std::shared_ptr<google::protobuf::Message> *const)(v4 + 176),
                      0LL);
                    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyRogueEnterDungeon,void>(
                      &p_body_ptr,
                      (const std::shared_ptr<proto_log::PlayerLogBodyRogueEnterDungeon> *)(v4 + 144));
                    Player::printStatLog(player, &p_body_ptr, (MessagePtr *)(v4 + 176), 0xEu);
                    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
                    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v4 + 176));
                    BaseActivity::notifyClientData(this, 0);
                    v3 = 0;
                    std::shared_ptr<proto_log::PlayerLogBodyRogueEnterDungeon>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyRogueEnterDungeon> *const)(v4 + 144));
                  }
LABEL_89:
                  std::unordered_set<unsigned long>::~unordered_set((std::unordered_set<long unsigned int> *const)(v4 + 416));
                  std::set<data::ElementType>::~set((std::set<data::ElementType> *const)(v4 + 336));
                }
                std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v4 + 272));
                std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v4 + 208));
              }
            }
          }
          std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 112));
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v63,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike_dungeon_activity.cpp",
        "selectAvatarAndEnterInitDungeon",
        1455);
      v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             (common::milog::MiLogStream *const)&v63,
             (const char (*)[34])"[ROGUE] stage not open, stage_id:");
      val = proto::RoguelikeSelectAvatarAndEnterDungeonReq::stage_id(req);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v63);
      v3 = -1;
    }
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
  result = v3;
  if ( v53 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1566: range 0000000016C4F898-0000000016C5008B
int32_t __cdecl RoguelikeDungeonActivity::enterNextLevelByScript(RoguelikeDungeonActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  int32_t v5; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  bool v8; // r14
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  PlayerDungeonComp *DungeonComp; // rax
  RogueLikeDungeonRuntimeMgr *p_roguelike_runtime_mgr; // rdi
  common::milog::MiLogStream *v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-D4h] BYREF
  RogueStageData *stage_ptr; // [rsp+20h] [rbp-D0h]
  const data::RogueStageExcelConfig *stage_config_ptr; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v20; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 13 stage_id:1567 64 16 18 cur_scene_ptr:1581";
  *(_QWORD *)(v1 + 16) = RoguelikeDungeonActivity::enterNextLevelByScript;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = RogueLikeDungeonRuntimeMgr::getStageId(&this->roguelike_runtime_mgr_);
  stage_ptr = RoguelikeDungeonActivity::findStage(this, *(_DWORD *)(v1 + 48));
  if ( stage_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v20);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
    stage_config_ptr = data::ActivityRogueExcelConfigMgrBase::findRogueStageExcelConfig(
                         &v6->design_config.txt_config_mgr.activity_rogue_config_mgr,
                         *(_DWORD *)(v1 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v20);
    if ( stage_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v1 + 64));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike_dungeon_activity.cpp",
          "enterNextLevelByScript",
          1584);
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          &v21,
          (const char (*)[29])"[ROGUE] cur scene is nullptr");
        common::milog::MiLogStream::~MiLogStream(&v21);
        v5 = -1;
      }
      else
      {
        std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)&v20);
        v8 = !RogueLikeDungeonRuntimeMgr::isPlayerInDungeon(&this->roguelike_runtime_mgr_, (DungeonScenePtr *)&v20);
        std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)&v20);
        if ( v8 )
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/roguelike_dungeon_activity.cpp",
            "enterNextLevelByScript",
            1589);
          v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                 &v21,
                 (const char (*)[38])"[ROGUE] player still in dungeon, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
          common::milog::MiLogStream::~MiLogStream(&v21);
          v5 = -1;
        }
        else if ( !RogueLikeDungeonRuntimeMgr::isDungeonSettled(&this->roguelike_runtime_mgr_) )
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/roguelike_dungeon_activity.cpp",
            "enterNextLevelByScript",
            1595);
          common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            &v21,
            (const char (*)[34])"[ROGUE] rogue dungeon not settled");
          common::milog::MiLogStream::~MiLogStream(&v21);
          v5 = -1;
        }
        else
        {
          if ( *(char *)(((unsigned __int64)&stage_ptr->is_in_combat >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&stage_ptr->is_in_combat);
          if ( !stage_ptr->is_in_combat )
          {
            common::milog::MiLogStream::create(
              &v21,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/roguelike_dungeon_activity.cpp",
              "enterNextLevelByScript",
              1601);
            v10 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    &v21,
                    (const char (*)[33])"[ROGUE] level exceed, cur_level:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &stage_ptr->cur_level);
            common::milog::MiLogStream::~MiLogStream(&v21);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            DungeonComp = Player::getDungeonComp(this->player_);
            PlayerDungeonComp::quitCurDungeon(DungeonComp, DUNGEON_QUIT_REASON_TRANSFER);
            v5 = 0;
          }
          else
          {
            p_roguelike_runtime_mgr = &this->roguelike_runtime_mgr_;
            if ( *(_BYTE *)(((unsigned __int64)&stage_ptr->cur_level >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)stage_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_ptr->cur_level >> 3)
                                                                       + 0x7FFF8000) )
            {
              p_roguelike_runtime_mgr = (RogueLikeDungeonRuntimeMgr *)&stage_ptr->cur_level;
              __asan_report_load4(&stage_ptr->cur_level);
            }
            if ( (unsigned int)RogueLikeDungeonRuntimeMgr::enterDungeonLevel(
                                 p_roguelike_runtime_mgr,
                                 *(_DWORD *)(v1 + 48),
                                 stage_ptr->cur_level,
                                 0) )
            {
              common::milog::MiLogStream::create(
                &v21,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/roguelike_dungeon_activity.cpp",
                "enterNextLevelByScript",
                1609);
              v13 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                      &v21,
                      (const char (*)[46])"[ROGUE] enterDungeonLevel failed, next_level:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &stage_ptr->cur_level);
              common::milog::MiLogStream::~MiLogStream(&v21);
              v5 = -1;
            }
            else
            {
              v14 = ((_BYTE)stage_ptr + 25) & 7;
              v15 = (*(_BYTE *)(((unsigned __int64)&stage_ptr->is_entering_next_level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&stage_ptr->is_entering_next_level >> 3) + 0x7FFF8000));
              if ( (_BYTE)v15 )
                __asan_report_store1(&stage_ptr->is_entering_next_level, v14, v15);
              stage_ptr->is_entering_next_level = 1;
              v5 = 0;
            }
          }
        }
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/roguelike_dungeon_activity.cpp",
        "enterNextLevelByScript",
        1577);
      v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v21,
             (const char (*)[47])"[ROGUE] stage config ptr is nullptr, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::~MiLogStream(&v21);
      v5 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike_dungeon_activity.cpp",
      "enterNextLevelByScript",
      1571);
    v4 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v21,
           (const char (*)[35])"[ROGUE] stage not found, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, (const unsigned int *)(v1 + 48));
    common::milog::MiLogStream::~MiLogStream(&v21);
    v5 = -1;
  }
  result = v5;
  if ( v22 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1617: range 0000000016C5008C-0000000016C50DC9
__int64 __fastcall RoguelikeDungeonActivity::giveUpRoguelikeDungeon(
        RoguelikeDungeonActivity *const this,
        uint32_t stage_id,
        proto::RoguelikeGiveUpRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint32_t StageId; // eax
  common::milog::MiLogStream *v7; // rbx
  __int64 result; // rax
  bool isAllChallengeCellFinish; // r14
  unsigned int *p_val; // rsi
  std::map<unsigned int,bool>::mapped_type *v11; // rax
  bool *v12; // rdx
  char v13; // cl
  PlayerEventComp *EventComp; // r14
  uint32_t CurLevel; // eax
  PlayerWatcherComp *WatcherComp; // r14
  uint32_t DungeonId; // r15d
  uint32_t v18; // esi
  PlayerWatcherComp *p_kill_monster_num; // rdi
  uint32_t kill_monster_num; // edx
  common::milog::MiLogStream *v21; // rbx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  PlayerEventComp *v25; // r14
  PlayerWatcherComp *v26; // r14
  uint32_t v27; // r15d
  uint32_t v28; // esi
  PlayerWatcherComp *v29; // rdi
  uint32_t v30; // edx
  const std::map<data::RogueCreateGadgetType,unsigned int> *die_gadget_count_map; // [rsp+10h] [rbp-110h]
  unsigned int val; // [rsp+3Ch] [rbp-E4h] BYREF
  RogueStageData *stage_ptr_0; // [rsp+40h] [rbp-E0h]
  proto::RoguelikeDungeonSettleInfo *settle_info_0; // [rsp+48h] [rbp-D8h]
  RogueStageData *stage_ptr; // [rsp+50h] [rbp-D0h]
  proto::RoguelikeDungeonSettleInfo *settle_info; // [rsp+58h] [rbp-C8h]
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+60h] [rbp-C0h] BYREF
  common::milog::MiLogStream v40; // [rsp+70h] [rbp-B0h] BYREF
  char v41[144]; // [rsp+90h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 stage_id:1616 64 16 14 event_ptr:1676";
  *(_QWORD *)(v3 + 16) = RoguelikeDungeonActivity::giveUpRoguelikeDungeon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = stage_id;
  if ( RogueLikeDungeonRuntimeMgr::isValid(&this->roguelike_runtime_mgr_) )
  {
    StageId = RogueLikeDungeonRuntimeMgr::getStageId(&this->roguelike_runtime_mgr_);
    stage_ptr = RoguelikeDungeonActivity::findStage(this, StageId);
    if ( !stage_ptr )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike_dungeon_activity.cpp",
        "giveUpRoguelikeDungeon",
        1625);
      v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v40,
             (const char (*)[35])"[ROGUE] stage not found, stage_id:");
      val = RogueLikeDungeonRuntimeMgr::getStageId(&this->roguelike_runtime_mgr_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v40);
      result = 0xFFFFFFFFLL;
      goto LABEL_60;
    }
    if ( RogueLikeDungeonRuntimeMgr::isTempLeave(&this->roguelike_runtime_mgr_) )
    {
      isAllChallengeCellFinish = RogueLikeDungeonRuntimeMgr::isAllChallengeCellFinish(&this->roguelike_runtime_mgr_);
      val = RogueLikeDungeonRuntimeMgr::getCurLevel(&this->roguelike_runtime_mgr_);
      p_val = &val;
      v11 = std::map<unsigned int,bool>::operator[](&stage_ptr->level_finish_all_challenge_map, &val);
      v12 = v11;
      v13 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
      if ( v13 != 0 && ((unsigned __int8)v11 & 7) >= v13 )
      {
        LOBYTE(p_val) = v13 != 0;
        __asan_report_store1(v11, p_val, v11);
      }
      *v12 = isAllChallengeCellFinish;
      RogueStageData::buildSettleEvent((RogueStageData *const)(v3 + 64), (__int64)stage_ptr, 0);
      if ( std::operator!=<RogueDungeonSettleEvent>((const std::shared_ptr<RogueDungeonSettleEvent> *)(v3 + 64), 0LL) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        EventComp = Player::getEventComp(this->player_);
        std::shared_ptr<BaseEvent>::shared_ptr<RogueDungeonSettleEvent,void>(
          &p_event_ptr,
          (const std::shared_ptr<RogueDungeonSettleEvent> *)(v3 + 64));
        PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
        std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
      }
      settle_info = proto::RoguelikeGiveUpRsp::mutable_settle_info(rsp_0);
      proto::RoguelikeDungeonSettleInfo::set_stage_id(settle_info, *(_DWORD *)(v3 + 48));
      CurLevel = RogueLikeDungeonRuntimeMgr::getCurLevel(&this->roguelike_runtime_mgr_);
      proto::RoguelikeDungeonSettleInfo::set_cur_level(settle_info, CurLevel);
      RogueStageData::fillSettleInfo(stage_ptr, settle_info);
      RoguelikeDungeonActivity::logStageSettle(this, stage_ptr, 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      WatcherComp = Player::getWatcherComp(this->player_);
      die_gadget_count_map = &stage_ptr->dead_gadget_count_map;
      DungeonId = RogueLikeDungeonRuntimeMgr::getDungeonId(&this->roguelike_runtime_mgr_);
      v18 = RogueLikeDungeonRuntimeMgr::getCurLevel(&this->roguelike_runtime_mgr_);
      if ( *(_BYTE *)(((unsigned __int64)stage_ptr >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)stage_ptr >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(stage_ptr);
      }
      PlayerWatcherComp::triggerRogueGadgetDie(
        WatcherComp,
        stage_ptr->stage_id,
        v18,
        DungeonId,
        die_gadget_count_map,
        1);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      p_kill_monster_num = Player::getWatcherComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&stage_ptr->kill_monster_num >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&stage_ptr->kill_monster_num >> 3) + 0x7FFF8000) <= 3 )
      {
        p_kill_monster_num = (PlayerWatcherComp *)&stage_ptr->kill_monster_num;
        __asan_report_load4(&stage_ptr->kill_monster_num);
      }
      kill_monster_num = stage_ptr->kill_monster_num;
      if ( *(_BYTE *)(((unsigned __int64)stage_ptr >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)stage_ptr >> 3) + 0x7FFF8000) <= 3 )
      {
        p_kill_monster_num = (PlayerWatcherComp *)stage_ptr;
        __asan_report_load4(stage_ptr);
      }
      PlayerWatcherComp::triggerRogueMonsterDie(p_kill_monster_num, stage_ptr->stage_id, kill_monster_num, 1);
      RoguelikeMiscMgr::onRoguelikeDungeonSettle(&this->roguelike_misc_mgr_);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      RogueStageData::flushCoin(stage_ptr, this->player_);
      std::shared_ptr<RogueDungeonSettleEvent>::~shared_ptr((std::shared_ptr<RogueDungeonSettleEvent> *const)(v3 + 64));
    }
    else if ( RogueLikeDungeonRuntimeMgr::isDungeonSettled(&this->roguelike_runtime_mgr_) )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike_dungeon_activity.cpp",
        "giveUpRoguelikeDungeon",
        1651);
      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
        &v40,
        (const char (*)[42])"[ROGUE] dungeon is settled, cannot giveup");
      common::milog::MiLogStream::~MiLogStream(&v40);
      result = 0xFFFFFFFFLL;
      goto LABEL_60;
    }
    RogueLikeDungeonRuntimeMgr::giveUp(&this->roguelike_runtime_mgr_);
    RogueStageData::clearRuntimeData(stage_ptr);
  }
  else
  {
    stage_ptr_0 = RoguelikeDungeonActivity::findStage(this, *(_DWORD *)(v3 + 48));
    if ( !stage_ptr_0 )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike_dungeon_activity.cpp",
        "giveUpRoguelikeDungeon",
        1664);
      v21 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v40,
              (const char (*)[35])"[ROGUE] stage not found, stage_id:");
      val = RogueLikeDungeonRuntimeMgr::getStageId(&this->roguelike_runtime_mgr_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
      common::milog::MiLogStream::~MiLogStream(&v40);
      result = 0xFFFFFFFFLL;
      goto LABEL_60;
    }
    if ( *(char *)(((unsigned __int64)&stage_ptr_0->is_in_combat >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&stage_ptr_0->is_in_combat);
    if ( !stage_ptr_0->is_in_combat )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike_dungeon_activity.cpp",
        "giveUpRoguelikeDungeon",
        1669);
      v22 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
              &v40,
              (const char (*)[54])"[ROGUE] stage not in combat cannot give up, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v40);
      result = 0xFFFFFFFFLL;
      goto LABEL_60;
    }
    if ( *(_BYTE *)(((unsigned __int64)&stage_ptr_0->is_entering_next_level >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)stage_ptr_0 + 25) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_ptr_0->is_entering_next_level >> 3)
                                                               + 0x7FFF8000) )
    {
      __asan_report_load1(&stage_ptr_0->is_entering_next_level);
    }
    if ( stage_ptr_0->is_entering_next_level )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike_dungeon_activity.cpp",
        "giveUpRoguelikeDungeon",
        1674);
      v23 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              &v40,
              (const char (*)[18])"[ROGUE] stage_id:");
      v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        v24,
        (const char (*)[24])" is_entering_next_level");
      common::milog::MiLogStream::~MiLogStream(&v40);
    }
    RogueStageData::buildSettleEvent((RogueStageData *const)(v3 + 64), (__int64)stage_ptr_0, 0);
    if ( std::operator!=<RogueDungeonSettleEvent>((const std::shared_ptr<RogueDungeonSettleEvent> *)(v3 + 64), 0LL) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v25 = Player::getEventComp(this->player_);
      std::shared_ptr<BaseEvent>::shared_ptr<RogueDungeonSettleEvent,void>(
        &p_event_ptr,
        (const std::shared_ptr<RogueDungeonSettleEvent> *)(v3 + 64));
      PlayerEventComp::notifyEvent(v25, &p_event_ptr);
      std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
    }
    settle_info_0 = proto::RoguelikeGiveUpRsp::mutable_settle_info(rsp_0);
    proto::RoguelikeDungeonSettleInfo::set_stage_id(settle_info_0, *(_DWORD *)(v3 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&stage_ptr_0->cur_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)stage_ptr_0 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_ptr_0->cur_level >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(&stage_ptr_0->cur_level);
    }
    proto::RoguelikeDungeonSettleInfo::set_cur_level(settle_info_0, stage_ptr_0->cur_level);
    RogueStageData::fillSettleInfo(stage_ptr_0, settle_info_0);
    RoguelikeDungeonActivity::logStageSettle(this, stage_ptr_0, 0);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    RogueStageData::flushCoin(stage_ptr_0, this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v26 = Player::getWatcherComp(this->player_);
    v27 = RogueLikeDungeonRuntimeMgr::getDungeonId(&this->roguelike_runtime_mgr_);
    v28 = RogueLikeDungeonRuntimeMgr::getCurLevel(&this->roguelike_runtime_mgr_);
    if ( *(_BYTE *)(((unsigned __int64)stage_ptr_0 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)stage_ptr_0 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(stage_ptr_0);
    }
    PlayerWatcherComp::triggerRogueGadgetDie(
      v26,
      stage_ptr_0->stage_id,
      v28,
      v27,
      &stage_ptr_0->dead_gadget_count_map,
      1);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v29 = Player::getWatcherComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&stage_ptr_0->kill_monster_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&stage_ptr_0->kill_monster_num >> 3) + 0x7FFF8000) <= 3 )
    {
      v29 = (PlayerWatcherComp *)&stage_ptr_0->kill_monster_num;
      __asan_report_load4(&stage_ptr_0->kill_monster_num);
    }
    v30 = stage_ptr_0->kill_monster_num;
    if ( *(_BYTE *)(((unsigned __int64)stage_ptr_0 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)stage_ptr_0 >> 3) + 0x7FFF8000) <= 3 )
    {
      v29 = (PlayerWatcherComp *)stage_ptr_0;
      __asan_report_load4(stage_ptr_0);
    }
    PlayerWatcherComp::triggerRogueMonsterDie(v29, stage_ptr_0->stage_id, v30, 1);
    RoguelikeMiscMgr::onRoguelikeDungeonSettle(&this->roguelike_misc_mgr_);
    RogueStageData::clearRuntimeData(stage_ptr_0);
    std::shared_ptr<RogueDungeonSettleEvent>::~shared_ptr((std::shared_ptr<RogueDungeonSettleEvent> *const)(v3 + 64));
  }
  RoguelikeMiscMgr::clearRoguelikeDungeonMiscData(&this->roguelike_misc_mgr_);
  BaseActivity::notifyClientData(this, 0);
  result = 0LL;
LABEL_60:
  if ( v41 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1701: range 0000000016C50DCA-0000000016C513A9
int32_t __cdecl RoguelikeDungeonActivity::clearDungeonRuntimeByGm(RoguelikeDungeonActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // rbx
  int32_t v4; // r14d
  bool isPlayerInDungeon; // r14
  common::milog::MiLogStream *v6; // r14
  uint32_t StageId; // ecx
  bool *p_is_entering_next_level; // rax
  const char *v9; // rsi
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-134h] BYREF
  std::unordered_map<unsigned int,RogueStageData>::iterator __for_begin; // [rsp+20h] [rbp-130h] BYREF
  std::unordered_map<unsigned int,RogueStageData>::iterator __for_end; // [rsp+28h] [rbp-128h] BYREF
  std::unordered_map<unsigned int,RogueStageData> *__for_range; // [rsp+30h] [rbp-120h]
  std::pair<unsigned int const,RogueStageData> *__in; // [rsp+38h] [rbp-118h]
  std::tuple_element<0,std::pair<unsigned int const,RogueStageData> >::type *stage_id; // [rsp+40h] [rbp-110h]
  std::tuple_element<1,std::pair<unsigned int const,RogueStageData> >::type *stage; // [rsp+48h] [rbp-108h]
  std::shared_ptr<Scene> __r; // [rsp+50h] [rbp-100h] BYREF
  common::milog::MiLogStream v23; // [rsp+60h] [rbp-F0h] BYREF
  char v24[208]; // [rsp+80h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 16 18 cur_scene_ptr:1702 80 40 8 rsp:1713";
  *(_QWORD *)(v1 + 16) = RoguelikeDungeonActivity::clearDungeonRuntimeByGm;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v1 + 48));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike_dungeon_activity.cpp",
      "clearDungeonRuntimeByGm",
      1705);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v23,
      (const char (*)[29])"[ROGUE] cur scene is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v23);
    v4 = -1;
  }
  else
  {
    std::dynamic_pointer_cast<DungeonScene,Scene>(&__r);
    isPlayerInDungeon = RogueLikeDungeonRuntimeMgr::isPlayerInDungeon(
                          &this->roguelike_runtime_mgr_,
                          (DungeonScenePtr *)&__r);
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)&__r);
    if ( isPlayerInDungeon )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike_dungeon_activity.cpp",
        "clearDungeonRuntimeByGm",
        1710);
      v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v23,
             (const char (*)[38])"[ROGUE] player still in dungeon, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      common::milog::MiLogStream::~MiLogStream(&v23);
      v4 = -1;
    }
    else
    {
      proto::RoguelikeGiveUpRsp::RoguelikeGiveUpRsp((proto::RoguelikeGiveUpRsp *const)(v1 + 80));
      StageId = RogueLikeDungeonRuntimeMgr::getStageId(&this->roguelike_runtime_mgr_);
      RoguelikeDungeonActivity::giveUpRoguelikeDungeon(this, StageId, (proto::RoguelikeGiveUpRsp *)(v1 + 80));
      __for_range = &this->stage_map_;
      __for_begin._M_cur = std::unordered_map<unsigned int,RogueStageData>::begin(&this->stage_map_)._M_cur;
      __for_end._M_cur = std::unordered_map<unsigned int,RogueStageData>::end(&this->stage_map_)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,RogueStageData>,false>(&__for_begin, &__for_end) )
      {
        __in = std::__detail::_Node_iterator<std::pair<unsigned int const,RogueStageData>,false,false>::operator*(&__for_begin);
        stage_id = std::get<0ul,unsigned int const,RogueStageData>(__in);
        stage = std::get<1ul,unsigned int const,RogueStageData>(__in);
        p_is_entering_next_level = &stage->is_entering_next_level;
        v9 = (const char *)(((_BYTE)stage + 25) & 7);
        if ( *(_BYTE *)(((unsigned __int64)p_is_entering_next_level >> 3) + 0x7FFF8000) != 0
          && (char)v9 >= *(_BYTE *)(((unsigned __int64)p_is_entering_next_level >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(p_is_entering_next_level);
        }
        if ( stage->is_entering_next_level )
        {
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/roguelike_dungeon_activity.cpp",
            "clearDungeonRuntimeByGm",
            1720);
          v10 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  &v23,
                  (const char (*)[18])"[ROGUE] stage_id:");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, stage_id);
          v9 = " is_entering_next_level";
          common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            v11,
            (const char (*)[24])" is_entering_next_level");
          common::milog::MiLogStream::~MiLogStream(&v23);
        }
        if ( *(char *)(((unsigned __int64)&stage->is_in_combat >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&stage->is_in_combat, v9, &stage->is_in_combat);
        stage->is_in_combat = 0;
        v12 = ((_BYTE)stage + 25) & 7;
        v13 = (*(_BYTE *)(((unsigned __int64)&stage->is_entering_next_level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&stage->is_entering_next_level >> 3) + 0x7FFF8000));
        if ( (_BYTE)v13 )
          __asan_report_store1(&stage->is_entering_next_level, v12, v13);
        stage->is_entering_next_level = 0;
        std::__detail::_Node_iterator<std::pair<unsigned int const,RogueStageData>,false,false>::operator++(&__for_begin);
      }
      RogueLikeDungeonRuntimeMgr::clearAll(&this->roguelike_runtime_mgr_);
      BaseActivity::notifyClientData(this, 0);
      v4 = 0;
      proto::RoguelikeGiveUpRsp::~RoguelikeGiveUpRsp((proto::RoguelikeGiveUpRsp *const)(v1 + 80));
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 48));
  result = v4;
  if ( v24 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1732: range 0000000016C513AA-0000000016C5148F
int32_t __cdecl RoguelikeDungeonActivity::clearCoinA(RoguelikeDungeonActivity *const this)
{
  std::unordered_map<proto::VirtualItem,unsigned int>::mapped_type *v1; // rax
  _DWORD *v2; // rdx
  std::unordered_map<proto::VirtualItem,unsigned int>::key_type *p_k; // rsi
  std::unordered_map<proto::VirtualItem,unsigned int>::mapped_type *v4; // rax
  _DWORD *v5; // rdx
  char v6; // cl
  std::unordered_map<proto::VirtualItem,unsigned int>::key_type __k; // [rsp+18h] [rbp-8h] BYREF

  __k = ITEM_VIRTUAL_ROGUELIKE_COIN_A;
  v1 = std::unordered_map<proto::VirtualItem,unsigned int>::operator[](&this->activity_coin_map_, &__k);
  v2 = v1;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v1);
  }
  if ( *v2 )
  {
    __k = ITEM_VIRTUAL_ROGUELIKE_COIN_A;
    p_k = &__k;
    v4 = std::unordered_map<proto::VirtualItem,unsigned int>::operator[](&this->activity_coin_map_, &__k);
    v5 = v4;
    v6 = *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000);
    if ( v6 != 0 && (char)(((unsigned __int8)v4 & 7) + 3) >= v6 )
    {
      LOBYTE(p_k) = v6 != 0;
      __asan_report_store4(v4, p_k, v4);
    }
    *v5 = 0;
    BaseActivity::notifyActivityCoinInfo(this);
  }
  return 0;
};

// Line 1743: range 0000000016C51490-0000000016C51B4C
__int64 __fastcall RoguelikeDungeonActivity::takeStageFirstPassReward(
        RoguelikeDungeonActivity *const this,
        uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 result; // rax
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  PlayerItemComp *ItemComp; // rcx
  common::milog::MiLogStream *v11; // r12
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  PlayerItemComp *p_first_pass_reward_id; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  unsigned int val; // [rsp+18h] [rbp-E8h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  RogueStageData *stage_ptr; // [rsp+20h] [rbp-E0h]
  const data::RogueStageExcelConfig *stage_config_ptr; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<Config> v22; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-C0h] BYREF
  char v24[160]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 stage_id:1742 64 24 11 reason:1769";
  *(_QWORD *)(v2 + 16) = RoguelikeDungeonActivity::takeStageFirstPassReward;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = stage_id;
  if ( BaseActivity::isFinished(this) || BaseActivity::isSettled(this) )
  {
    result = 860LL;
  }
  else
  {
    stage_ptr = RoguelikeDungeonActivity::findStage(this, *(_DWORD *)(v2 + 48));
    if ( !stage_ptr )
      goto LABEL_14;
    if ( *(_BYTE *)(((unsigned __int64)&stage_ptr->is_open >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)stage_ptr + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_ptr->is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&stage_ptr->is_open);
    }
    if ( stage_ptr->is_open )
    {
      if ( *(_BYTE *)(((unsigned __int64)&stage_ptr->is_passed >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)stage_ptr + 14) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_ptr->is_passed >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_load1(&stage_ptr->is_passed);
      }
      if ( !stage_ptr->is_passed )
      {
        result = 10043LL;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&stage_ptr->is_taken_first_reward >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)stage_ptr + 15) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_ptr->is_taken_first_reward >> 3)
                                                                 + 0x7FFF8000) )
        {
          __asan_report_load1(&stage_ptr->is_taken_first_reward);
        }
        if ( stage_ptr->is_taken_first_reward )
        {
          result = 10045LL;
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v22);
          v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
          stage_config_ptr = data::ActivityRogueExcelConfigMgrBase::findRogueStageExcelConfig(
                               &v8->design_config.txt_config_mgr.activity_rogue_config_mgr,
                               *(_DWORD *)(v2 + 48));
          std::shared_ptr<Config>::~shared_ptr(&v22);
          if ( stage_config_ptr )
          {
            ActionReason::ActionReason(
              (ActionReason *const)(v2 + 64),
              ACTION_REASON_ROGUE_TAKE_FIRST_PASS_REWARD,
              ITEM_LIMIT_ACTIVITY_ROGUELIKE_DUNGEON);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            ItemComp = Player::getItemComp(this->player_);
            if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->first_pass_reward_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)stage_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_config_ptr->first_pass_reward_id >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4(&stage_config_ptr->first_pass_reward_id);
            }
            ret = PlayerItemComp::checkGrantReward(
                    ItemComp,
                    stage_config_ptr->first_pass_reward_id,
                    (const ActionReason *)(v2 + 64));
            if ( ret )
            {
              common::milog::MiLogStream::create(
                &v23,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/roguelike_dungeon_activity.cpp",
                "takeStageFirstPassReward",
                1773);
              v11 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                      &v23,
                      (const char (*)[39])"[ROGUE] checkGrantReward failed, uid: ");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              val = Player::getUid(this->player_);
              v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
              v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v12,
                      (const char (*)[14])" ,reward_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                &stage_config_ptr->first_pass_reward_id);
              common::milog::MiLogStream::~MiLogStream(&v23);
              result = (unsigned int)ret;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              p_first_pass_reward_id = Player::getItemComp(this->player_);
              if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->first_pass_reward_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)stage_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_config_ptr->first_pass_reward_id >> 3)
                                                                                + 0x7FFF8000) )
              {
                p_first_pass_reward_id = (PlayerItemComp *)&stage_config_ptr->first_pass_reward_id;
                __asan_report_load4(&stage_config_ptr->first_pass_reward_id);
              }
              PlayerItemComp::grantReward(
                p_first_pass_reward_id,
                stage_config_ptr->first_pass_reward_id,
                (const ActionReason *)(v2 + 64),
                0LL);
              v15 = ((_BYTE)stage_ptr + 15) & 7;
              v16 = (*(_BYTE *)(((unsigned __int64)&stage_ptr->is_taken_first_reward >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&stage_ptr->is_taken_first_reward >> 3) + 0x7FFF8000));
              if ( (_BYTE)v16 )
                __asan_report_store1(&stage_ptr->is_taken_first_reward, v15, v16);
              stage_ptr->is_taken_first_reward = 1;
              BaseActivity::notifyClientData(this, 0);
              result = 0LL;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v23,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/roguelike_dungeon_activity.cpp",
              "takeStageFirstPassReward",
              1766);
            v9 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                   &v23,
                   (const char (*)[42])"[ROGUE] stage config not found, stage_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v23);
            result = 0xFFFFFFFFLL;
          }
        }
      }
    }
    else
    {
LABEL_14:
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike_dungeon_activity.cpp",
        "takeStageFirstPassReward",
        1751);
      v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v23,
             (const char (*)[47])"[ROGUE] stage not found or not open, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v23);
      result = 0xFFFFFFFFLL;
    }
  }
  if ( v24 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1783: range 0000000016C51B4E-0000000016C51C3B
void __cdecl RoguelikeDungeonActivity::unlockAllRuneByGm(RoguelikeDungeonActivity *const this)
{
  std::unordered_map<unsigned int,data::RoguelikeRuneExcelConfig>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::unordered_map<unsigned int,data::RoguelikeRuneExcelConfig>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  const std::unordered_map<unsigned int,data::RoguelikeRuneExcelConfig> *__for_range; // [rsp+20h] [rbp-30h]
  const std::pair<unsigned int const,data::RoguelikeRuneExcelConfig> *v4; // [rsp+28h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,data::RoguelikeRuneExcelConfig> >::type *id; // [rsp+30h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RoguelikeRuneExcelConfig> >::type *config; // [rsp+38h] [rbp-18h]
  std::shared_ptr<Config> v7; // [rsp+40h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v7);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7)->design_config.txt_config_mgr.activity_rogue_config_mgr.roguelike_rune_excel_config_map;
  std::shared_ptr<Config>::~shared_ptr(&v7);
  __for_begin._M_cur = std::unordered_map<unsigned int,data::RoguelikeRuneExcelConfig>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::RoguelikeRuneExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::RoguelikeRuneExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v4 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RoguelikeRuneExcelConfig>,false,false>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,data::RoguelikeRuneExcelConfig>(v4);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::RoguelikeRuneExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RoguelikeRuneExcelConfig>(v4);
    std::unordered_set<unsigned int>::insert(&this->rune_set_, id);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RoguelikeRuneExcelConfig>,false,false>::operator++(&__for_begin);
  }
  BaseActivity::notifyClientData(this, 0);
};

// Line 1792: range 0000000016C51C3C-0000000016C51EFE
void __cdecl RoguelikeDungeonActivity::unlockAllShikigamiByGm(RoguelikeDungeonActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > > >::pointer v4; // rax
  _DWORD *p_first; // rdx
  int v6; // r14d
  std::_Rb_tree_node_base::_Base_ptr M_left; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v8; // rax
  _DWORD *v9; // rdx
  char v10; // cl
  std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>::const_iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>::const_iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  std::map<unsigned int,std::pair<unsigned int,unsigned int>> v13; // [rsp+28h] [rbp-A8h] BYREF
  char v14[112]; // [rsp+60h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 15 level_iter:1796";
  *(_QWORD *)(v1 + 16) = RoguelikeDungeonActivity::unlockAllShikigamiByGm;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  std::unordered_map<unsigned int,unsigned int>::clear(&this->shikigami_map_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13._M_t._M_impl._M_node_count);
  *(_QWORD *)&v13._M_t._M_impl._M_header._M_color = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13._M_t._M_impl._M_node_count)->design_config.txt_config_mgr.activity_rogue_config_mgr.shikigami_level_cost_map;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v13._M_t._M_impl._M_node_count);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>::begin(*(const std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>> *const *)&v13._M_t._M_impl._M_header._M_color)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>::end(*(const std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>> *const *)&v13._M_t._M_impl._M_header._M_color)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v13._M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>,false,false>::operator*(&__for_begin);
    v13._M_t._M_impl._M_header._M_left = (std::_Rb_tree_node_base::_Base_ptr)std::get<0ul,unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>((const std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>> > *)v13._M_t._M_impl._M_header._M_parent);
    v13._M_t._M_impl._M_header._M_right = (std::_Rb_tree_node_base::_Base_ptr)std::get<1ul,unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>((const std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>> > *)v13._M_t._M_impl._M_header._M_parent);
    std::map<unsigned int,std::pair<unsigned int,unsigned int>>::crbegin((const std::map<unsigned int,std::pair<unsigned int,unsigned int>> *const)(v1 + 32));
    std::map<unsigned int,std::pair<unsigned int,unsigned int>>::rend(&v13);
    if ( std::operator!=<std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>>>(
           (const std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > > > *)(v1 + 32),
           (const std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > > > *)&v13) )
    {
      v4 = std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>>>::operator->((const std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > > > *const)(v1 + 32));
      p_first = &v4->first;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4);
      }
      v6 = *p_first;
      M_left = v13._M_t._M_impl._M_header._M_left;
      v8 = std::unordered_map<unsigned int,unsigned int>::operator[](
             &this->shikigami_map_,
             (const std::unordered_map<unsigned int,unsigned int>::key_type *)v13._M_t._M_impl._M_header._M_left);
      v9 = v8;
      v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
      if ( v10 != 0 && (char)(((unsigned __int8)v8 & 7) + 3) >= v10 )
      {
        LOBYTE(M_left) = v10 != 0;
        __asan_report_store4(v8, M_left, v8);
      }
      *v9 = v6;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>,false,false>::operator++(&__for_begin);
  }
  BaseActivity::notifyClientData(this, 0);
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1806: range 0000000016C51F00-0000000016C521C9
__int64 __fastcall RoguelikeDungeonActivity::setShikigamiToDirectLevelByGm(
        RoguelikeDungeonActivity *const this,
        uint32_t shikigami_id,
        uint32_t level)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  int v10; // r14d
  char *v11; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v12; // rax
  _DWORD *v13; // rdx
  char v14; // cl
  ActivityRogueExcelConfigMgr *rogue_config_mgr; // [rsp+18h] [rbp-C8h]
  std::shared_ptr<Config> v17; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 17 shikigami_id:1805 64 4 10 level:1805";
  *(_QWORD *)(v3 + 16) = RoguelikeDungeonActivity::setShikigamiToDirectLevelByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = shikigami_id;
  *(_DWORD *)(v3 + 64) = level;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  rogue_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.activity_rogue_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v17);
  if ( ActivityRogueExcelConfigMgr::getRoguelikeShikigamiGroupMaxLevel(rogue_config_mgr, *(_DWORD *)(v3 + 48)) >= *(_DWORD *)(v3 + 64) )
  {
    if ( *(_DWORD *)(v3 + 64) )
    {
      v10 = *(_DWORD *)(v3 + 64);
      v11 = (char *)(v3 + 48);
      v12 = std::unordered_map<unsigned int,unsigned int>::operator[](
              &this->shikigami_map_,
              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
      v13 = v12;
      v14 = *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000);
      if ( v14 != 0 && (char)(((unsigned __int8)v12 & 7) + 3) >= v14 )
      {
        LOBYTE(v11) = v14 != 0;
        __asan_report_store4(v12, v11, v12);
      }
      *v13 = v10;
    }
    else
    {
      std::unordered_map<unsigned int,unsigned int>::erase(
        &this->shikigami_map_,
        (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
    }
    BaseActivity::notifyClientData(this, 0);
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike_dungeon_activity.cpp",
      "setShikigamiToDirectLevelByGm",
      1810);
    v6 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v18,
           (const char (*)[27])"[ROGUELIKE] invalid level:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 64));
    v8 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           v7,
           (const char (*)[22])", shikigami_group_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0xFFFFFFFFLL;
  }
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1826: range 0000000016C521CA-0000000016C523C6
std::string *__cdecl RoguelikeDungeonActivity::genNextTransaction[abi:cxx11](
        std::string *retstr,
        RoguelikeDungeonActivity *const this,
        uint32_t stage_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::allocator<char> __a; // [rsp+2Bh] [rbp-E5h] BYREF
  uint32_t now; // [rsp+2Ch] [rbp-E4h]
  char v10[224]; // [rsp+30h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 128 8 buf:1827";
  *(_QWORD *)(v3 + 16) = RoguelikeDungeonActivity::genNextTransaction[abi:cxx11];
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450900) = -202116109;
  now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->trans_no_count_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->trans_no_count_);
  snprintf((char *)(v3 + 32), 0x80uLL, off_25F113C0, stage_id, now, ++this->trans_no_count_);
  std::allocator<char>::allocator(&__a, 128LL);
  std::string::basic_string<std::allocator<char>>(retstr, (const char *)(v3 + 32), &__a);
  std::allocator<char>::~allocator(&__a);
  if ( v10 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 1834: range 0000000016C523C8-0000000016C52595
__int64 __fastcall RoguelikeDungeonActivity::forceFinishStageByGm(
        RoguelikeDungeonActivity *const this,
        uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  RogueStageData *stage_ptr; // [rsp+18h] [rbp-88h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-80h] BYREF
  char v11[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 stage_id:1833";
  *(_QWORD *)(v2 + 16) = RoguelikeDungeonActivity::forceFinishStageByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = stage_id;
  stage_ptr = RoguelikeDungeonActivity::findStage(this, *(_DWORD *)(v2 + 32));
  if ( stage_ptr )
  {
    v7 = ((_BYTE)stage_ptr + 14) & 7;
    v8 = (*(_BYTE *)(((unsigned __int64)&stage_ptr->is_passed >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&stage_ptr->is_passed >> 3) + 0x7FFF8000));
    if ( (_BYTE)v8 )
      __asan_report_store1(&stage_ptr->is_passed, v7, v8);
    stage_ptr->is_passed = 1;
    BaseActivity::notifyClientData(this, 0);
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike_dungeon_activity.cpp",
      "forceFinishStageByGm",
      1838);
    v5 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v10,
           (const char (*)[35])"[ROGUE] stage not found, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 0xFFFFFFFFLL;
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1847: range 0000000016C52596-0000000016C52FC1
void __cdecl RoguelikeDungeonActivity::logStageSettle(
        RoguelikeDungeonActivity *const this,
        RogueStageData *stage_data,
        bool is_passed)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerBasicComp *BasicComp; // rax
  proto_log::PlayerLogBodyRogueSettle *v7; // rcx
  proto_log::PlayerLogBodyRogueSettle *v8; // rax
  proto_log::PlayerLogBodyRogueSettle *v9; // rax
  proto_log::PlayerLogBodyRogueSettle *v10; // rcx
  proto_log::PlayerLogBodyRogueSettle *v11; // r14
  uint32_t CurCellId; // eax
  proto_log::PlayerLogBodyRogueSettle *v13; // rax
  google::protobuf::RepeatedPtrField<proto_log::RogueAvatarBriefLog> *v14; // r15
  proto_log::PlayerLogBodyRogueSettle *v15; // rax
  google::protobuf::RepeatedPtrField<proto_log::RogueAvatarBriefLog> *v16; // rax
  proto_log::PlayerLogBodyRogueSettle *v17; // r14
  std::unordered_map<proto::VirtualItem,unsigned int>::mapped_type *v18; // rax
  google::protobuf::uint32 *v19; // rdx
  proto_log::PlayerLogBodyRogueSettle *v20; // rcx
  proto_log::PlayerLogBodyRogueSettle *v21; // rcx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v22; // rax
  proto_log::PlayerLogBodyRogueSettle *v23; // rax
  proto_log::PlayerLogBodyRogueSettle *v24; // rax
  proto_log::PlayerLogBodyRogueSettle *v25; // rax
  google::protobuf::RepeatedField<unsigned int> *v26; // rax
  proto_log::PlayerLogBodyRogueSettle *v27; // rax
  proto_log::PlayerLogBodyRogueSettle *v28; // rcx
  proto_log::PlayerLogBodyRogueSettle *v29; // rax
  Player *player; // r14
  std::string v31; // [rsp+0h] [rbp-180h]
  char *v32; // [rsp+0h] [rbp-180h]
  bool is_passeda; // [rsp+Ch] [rbp-174h]
  RogueStageData *stage_dataa; // [rsp+10h] [rbp-170h]
  RoguelikeDungeonActivity *thisa; // [rsp+18h] [rbp-168h]
  std::unordered_map<proto::VirtualItem,unsigned int>::key_type __k; // [rsp+28h] [rbp-158h] BYREF
  uint32_t total_time; // [rsp+2Ch] [rbp-154h]
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-150h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+38h] [rbp-148h] BYREF
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+40h] [rbp-140h]
  std::map<data::RogueCellType,unsigned int> *__for_range_0; // [rsp+48h] [rbp-138h]
  std::unordered_map<unsigned int,unsigned int> *__for_range_1; // [rsp+50h] [rbp-130h]
  const std::pair<unsigned int const,unsigned int> *v43; // [rsp+58h] [rbp-128h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *id; // [rsp+60h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *level; // [rsp+68h] [rbp-118h]
  proto_log::RogueShikigamiInfo *shikigami_info; // [rsp+70h] [rbp-110h]
  const std::pair<const data::RogueCellType,unsigned int> *v47; // [rsp+78h] [rbp-108h]
  std::tuple_element<0,const std::pair<const data::RogueCellType,unsigned int> >::type *type; // [rsp+80h] [rbp-100h]
  std::tuple_element<1,const std::pair<const data::RogueCellType,unsigned int> >::type *num; // [rsp+88h] [rbp-F8h]
  proto_log::CellTypeNumPair *type_num_pair; // [rsp+90h] [rbp-F0h]
  const std::pair<unsigned int const,unsigned int> *v51; // [rsp+98h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+A0h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *time_cost; // [rsp+A8h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+B0h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+C0h] [rbp-C0h] BYREF
  std::string v56; // [rsp+D0h] [rbp-B0h] BYREF
  char v57[144]; // [rsp+F0h] [rbp-90h] BYREF

  *(&v31._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v31._anon_0._M_allocated_capacity = (std::string::size_type)stage_data;
  BYTE4(v31._M_string_length) = is_passed;
  v3 = (unsigned __int64)v57;
  v31._M_dataplus._M_p = v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 23 log_context_holder:1848 64 16 12 log_ptr:1849";
  *(_QWORD *)(v3 + 16) = RoguelikeDungeonActivity::logStageSettle;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v56, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xDD8u, v31);
  std::string::~string(&v56);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyRogueSettle>();
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)stage_dataa >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)stage_dataa >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(stage_dataa);
  }
  proto_log::PlayerLogBodyRogueSettle::set_stage_id(v7, stage_dataa->stage_id);
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  proto_log::PlayerLogBodyRogueSettle::set_rogue_transaction(v8, &stage_dataa->transaction);
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  proto_log::PlayerLogBodyRogueSettle::set_is_passed(v9, is_passeda);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&stage_dataa->cur_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)stage_dataa + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_dataa->cur_level >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load4(&stage_dataa->cur_level);
  }
  proto_log::PlayerLogBodyRogueSettle::set_settle_level(v10, stage_dataa->cur_level);
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  CurCellId = RogueLikeDungeonRuntimeMgr::getCurCellId(&thisa->roguelike_runtime_mgr_);
  proto_log::PlayerLogBodyRogueSettle::set_settle_cell_id(v11, CurCellId);
  v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  v14 = proto_log::PlayerLogBodyRogueSettle::mutable_backstage_avatar_brief_log_list(v13);
  v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  v16 = proto_log::PlayerLogBodyRogueSettle::mutable_onstage_avatar_brief_log_list(v15);
  RogueLikeDungeonRuntimeMgr::fillRogueTeamLog(&thisa->roguelike_runtime_mgr_, v16, v14);
  v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  __k = ITEM_VIRTUAL_ROGUELIKE_COIN_A;
  v18 = std::unordered_map<proto::VirtualItem,unsigned int>::operator[](&thisa->activity_coin_map_, &__k);
  v19 = v18;
  if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v18);
  }
  proto_log::PlayerLogBodyRogueSettle::set_coin_a_num(v17, *v19);
  v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&stage_dataa->cached_coin_b_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)stage_dataa + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_dataa->cached_coin_b_num >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load4(&stage_dataa->cached_coin_b_num);
  }
  proto_log::PlayerLogBodyRogueSettle::set_coin_b_num(v20, stage_dataa->cached_coin_b_num);
  v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&stage_dataa->cached_coin_c_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&stage_dataa->cached_coin_c_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&stage_dataa->cached_coin_c_num);
  }
  proto_log::PlayerLogBodyRogueSettle::set_coin_c_num(v21, stage_dataa->cached_coin_c_num);
  total_time = 0;
  __for_range = &stage_dataa->level_time_cost_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&stage_dataa->level_time_cost_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v51 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,unsigned int>(v51);
    v22 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v51);
    time_cost = v22;
    if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v22);
    }
    total_time += *time_cost;
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  proto_log::PlayerLogBodyRogueSettle::set_total_time_cost(v23, total_time);
  __for_range_0 = &stage_dataa->explore_cell_type_map;
  __for_begin._M_node = std::map<data::RogueCellType,unsigned int>::begin(&stage_dataa->explore_cell_type_map)._M_node;
  __for_end._M_node = std::map<data::RogueCellType,unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<const data::RogueCellType,unsigned int> >::_Self *)&__for_begin,
            (const std::_Rb_tree_iterator<std::pair<const data::RogueCellType,unsigned int> >::_Self *)&__for_end) )
  {
    v47 = std::_Rb_tree_iterator<std::pair<data::RogueCellType const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<const data::RogueCellType,unsigned int> > *const)&__for_begin);
    type = std::get<0ul,data::RogueCellType const,unsigned int>(v47);
    num = (std::tuple_element<1,const std::pair<const data::RogueCellType,unsigned int> >::type *)std::get<1ul,data::RogueCellType const,unsigned int>(v47);
    v24 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    type_num_pair = proto_log::PlayerLogBodyRogueSettle::add_explored_cell_type_list(v24);
    if ( *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(type);
    }
    proto_log::CellTypeNumPair::set_cell_type(type_num_pair, *type);
    if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(num);
    }
    proto_log::CellTypeNumPair::set_num(type_num_pair, *num);
    std::_Rb_tree_iterator<std::pair<data::RogueCellType const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<const data::RogueCellType,unsigned int> > *const)&__for_begin);
  }
  v25 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  v26 = proto_log::PlayerLogBodyRogueSettle::mutable_equipped_rune_list(v25);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&thisa->equipped_rune_vec_, v26);
  __for_range_1 = &thisa->shikigami_map_;
  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::unordered_map<unsigned int,unsigned int>::begin(&thisa->shikigami_map_)._M_cur;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::unordered_map<unsigned int,unsigned int>::end(__for_range_1)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_end) )
  {
    v43 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&__for_begin);
    id = std::get<0ul,unsigned int const,unsigned int>(v43);
    level = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v43);
    v27 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    shikigami_info = proto_log::PlayerLogBodyRogueSettle::add_shikigami_list(v27);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    proto_log::RogueShikigamiInfo::set_shikigami_id(shikigami_info, *id);
    if ( *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(level);
    }
    proto_log::RogueShikigamiInfo::set_level(shikigami_info, *level);
    std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&__for_begin);
  }
  v28 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  if ( *(char *)(((unsigned __int64)&stage_dataa->has_temp_leaved >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&stage_dataa->has_temp_leaved);
  proto_log::PlayerLogBodyRogueSettle::set_has_temp_leaved(v28, stage_dataa->has_temp_leaved);
  v29 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  RoguelikeMiscMgr::fillStageSettleLog(&thisa->roguelike_misc_mgr_, v29);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->player_);
  player = thisa->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyRogueSettle,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyRogueSettle> *)(v3 + 64));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyRogueSettle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyRogueSettle> *const)(v3 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  if ( v32 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1884: range 0000000016C52FC2-0000000016C530A4
bool __cdecl RoguelikeDungeonActivity::isInCombat(const RoguelikeDungeonActivity *const this)
{
  std::unordered_map<unsigned int,RogueStageData>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,RogueStageData>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::unordered_map<unsigned int,RogueStageData> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<unsigned int const,RogueStageData> *v5; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,RogueStageData> >::type *id; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,RogueStageData> >::type *stage_data; // [rsp+38h] [rbp-8h]

  __for_range = &this->stage_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,RogueStageData>::begin(&this->stage_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,RogueStageData>::end(&this->stage_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,RogueStageData>,false>(&__for_begin, &__for_end) )
  {
    v5 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,RogueStageData>,false,false>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,RogueStageData>(v5);
    stage_data = (std::tuple_element<1,const std::pair<unsigned int const,RogueStageData> >::type *)std::get<1ul,unsigned int const,RogueStageData>(v5);
    if ( *(char *)(((unsigned __int64)&stage_data->is_in_combat >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&stage_data->is_in_combat);
    if ( stage_data->is_in_combat )
      return 1;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,RogueStageData>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 1896: range 0000000016C530A6-0000000016C53101
void __cdecl RoguelikeDungeonActivity::setWorldLevelByGm(RoguelikeDungeonActivity *const this, uint32_t target_level)
{
  __int64 v2; // rdx

  v2 = (*(_BYTE *)(((unsigned __int64)&this->init_world_level_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->init_world_level_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->init_world_level_, (((_BYTE)this - 92) & 7u) + 3, v2);
  this->init_world_level_ = target_level;
};

// Line 1901: range 0000000016C53102-0000000016C53362
__int64 __fastcall RoguelikeDungeonActivity::manipulateStageCoinCNumByGm(
        RoguelikeDungeonActivity *const this,
        uint32_t stage_id,
        int32_t coin_c_delta)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  unsigned int v8; // edi
  RogueStageData *stage_ptr; // [rsp+18h] [rbp-88h]
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-80h] BYREF
  char v13[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 13 stage_id:1900";
  *(_QWORD *)(v3 + 16) = RoguelikeDungeonActivity::manipulateStageCoinCNumByGm;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = stage_id;
  stage_ptr = RoguelikeDungeonActivity::findStage(this, *(_DWORD *)(v3 + 32));
  if ( stage_ptr )
  {
    if ( coin_c_delta < 0 )
    {
      v8 = abs32(coin_c_delta);
      if ( *(_BYTE *)(((unsigned __int64)&stage_ptr->coin_c_num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)stage_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_ptr->coin_c_num >> 3)
                                                                + 0x7FFF8000) )
      {
        v8 = (_DWORD)stage_ptr + 4;
        __asan_report_load4(&stage_ptr->coin_c_num);
      }
      if ( v8 >= stage_ptr->coin_c_num )
        stage_ptr->coin_c_num = 0;
    }
    if ( *(_BYTE *)(((unsigned __int64)&stage_ptr->coin_c_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)stage_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_ptr->coin_c_num >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load4(&stage_ptr->coin_c_num);
    }
    stage_ptr->coin_c_num += coin_c_delta;
    BaseActivity::notifyClientData(this, 0);
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike_dungeon_activity.cpp",
      "manipulateStageCoinCNumByGm",
      1905);
    v6 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v12,
           (const char (*)[35])"[ROGUE] stage not found, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v12);
    result = 0xFFFFFFFFLL;
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1921: range 0000000016C53364-0000000016C53586
int32_t __cdecl RoguelikeDungeonActivity::checkMpStatus(RoguelikeDungeonActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  uint32_t Uid; // r14d
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerMpComp *MpComp; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  int32_t result; // eax
  char v11[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 18 cur_world_ptr:1922";
  *(_QWORD *)(v1 + 16) = RoguelikeDungeonActivity::checkMpStatus;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v1 + 32));
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v1 + 32)) )
  {
    v4 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Uid = Player::getUid(this->player_);
    v6 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( Uid == World::getOwnerUid(v6) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      MpComp = Player::getMpComp(this->player_);
      if ( PlayerMpComp::isInMpMode(MpComp)
        || (v8 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32)),
            PlayerWorld::isHasOtherPlayerPreEnter(v8)) )
      {
        v4 = 1202;
      }
      else
      {
        v4 = 0;
      }
    }
    else
    {
      v4 = 1201;
    }
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v1 + 32));
  result = v4;
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
