// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp

// Line 35: range 00000000143C563C-00000000143C5F18
int32_t __cdecl RogueDiaryRuntimeMgr::fromProgressBin(
        RogueDiaryRuntimeMgr *const this,
        const proto::RogueDiaryProgressBin *progress_bin)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool have_progress; // cl
  char v7; // dl
  __int64 v8; // rdx
  bool have_enter_dungeon; // cl
  char v10; // dl
  __int64 v11; // rdx
  __int64 v12; // rdx
  char v13; // al
  uint32_t v14; // ecx
  char v15; // dl
  __int64 v16; // rdx
  __int64 v17; // rdx
  char v18; // al
  uint32_t v19; // ecx
  char v20; // dl
  __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rdx
  char v24; // al
  bool is_round_repair_finish; // cl
  char v26; // dl
  __int64 v27; // rdx
  const google::protobuf::RepeatedField<unsigned int> *v28; // rax
  const google::protobuf::RepeatedField<unsigned int> *v29; // rax
  const google::protobuf::RepeatedField<unsigned int> *v30; // rax
  const google::protobuf::RepeatedField<unsigned int> *v31; // rax
  const google::protobuf::RepeatedField<unsigned int> *v32; // rax
  unsigned int *v33; // rcx
  bool *v34; // r8
  const google::protobuf::RepeatedField<long unsigned int> *v35; // rax
  const google::protobuf::RepeatedField<long unsigned int> *v36; // rax
  google::protobuf::RepeatedPtrField<proto::RogueDiaryAvtarBin>::const_iterator *p_for_end_0; // rsi
  unsigned __int64 *v38; // rcx
  RogueDiaryAvatarData *v39; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>,bool> v40; // rax
  common::milog::MiLogStream *v41; // r14
  __int64 v42; // rdx
  char v43; // al
  uint32_t v44; // ecx
  char v45; // dl
  __int64 v46; // rdx
  __int64 v47; // rdx
  char v48; // al
  int32_t result; // eax
  const proto::RogueDiaryProgressBin *progress_bina; // [rsp+0h] [rbp-100h]
  bool can_hard; // [rsp+13h] [rbp-EDh] BYREF
  unsigned int v52; // [rsp+14h] [rbp-ECh] BYREF
  google::protobuf::RepeatedPtrField<proto::RogueDiaryAvtarBin>::const_iterator __for_begin_0; // [rsp+18h] [rbp-E8h] BYREF
  google::protobuf::RepeatedPtrField<proto::RogueDiaryAvtarBin>::const_iterator __for_end_0; // [rsp+20h] [rbp-E0h] BYREF
  google::protobuf::RepeatedPtrField<proto::RogueDiaryRoomConfigPairBin>::const_iterator __for_end; // [rsp+28h] [rbp-D8h] BYREF
  const google::protobuf::RepeatedPtrField<proto::RogueDiaryRoomConfigPairBin> *__for_range; // [rsp+30h] [rbp-D0h]
  const google::protobuf::RepeatedPtrField<proto::RogueDiaryAvtarBin> *__for_range_0; // [rsp+38h] [rbp-C8h]
  const proto::RogueDiaryAvtarBin *rogue_avatar_bin; // [rsp+40h] [rbp-C0h]
  const proto::RogueDiaryRoomConfigPairBin *room_config_bin; // [rsp+48h] [rbp-B8h]
  common::milog::MiLogStream v60; // [rsp+50h] [rbp-B0h] BYREF
  char v61[144]; // [rsp+70h] [rbp-90h] BYREF

  progress_bina = progress_bin;
  v3 = (unsigned __int64)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 28 14 avatar_data:57";
  *(_QWORD *)(v3 + 16) = RogueDiaryRuntimeMgr::fromProgressBin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 0x4000000;
  v5[536862722] = -202116109;
  have_progress = proto::RogueDiaryProgressBin::is_have_progress(progress_bin);
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_have_progress_ >> 3) + 0x7FFF8000);
  LOBYTE(progress_bin) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this - 36) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_have_progress_, progress_bin, v8);
  this->is_have_progress_ = have_progress;
  have_enter_dungeon = proto::RogueDiaryProgressBin::is_have_enter_dungeon(progress_bina);
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_have_enter_dungeon_ >> 3) + 0x7FFF8000);
  LOBYTE(progress_bin) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this - 35) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_have_enter_dungeon_, progress_bin, v11);
  this->is_have_enter_dungeon_ = have_enter_dungeon;
  v12 = proto::RogueDiaryProgressBin::stage_id(progress_bina);
  v13 = *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(progress_bin) = v13 != 0;
    __asan_report_store4(&this->stage_id_, progress_bin, v12);
  }
  this->stage_id_ = v12;
  v14 = proto::RogueDiaryProgressBin::dungeon_id(progress_bina);
  v15 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000);
  LOBYTE(progress_bin) = v15 != 0;
  v16 = (v15 != 0) & (unsigned __int8)((char)((((_BYTE)this - 28) & 7) + 3) >= v15);
  if ( (_BYTE)v16 )
    __asan_report_store4(&this->dungeon_id_, progress_bin, v16);
  this->dungeon_id_ = v14;
  v17 = proto::RogueDiaryProgressBin::difficulty(progress_bina);
  v18 = *(_BYTE *)(((unsigned __int64)&this->cur_difficulty_ >> 3) + 0x7FFF8000);
  if ( v18 != 0 && v18 <= 3 )
  {
    LOBYTE(progress_bin) = v18 != 0;
    __asan_report_store4(&this->cur_difficulty_, progress_bin, v17);
  }
  this->cur_difficulty_ = v17;
  v19 = proto::RogueDiaryProgressBin::cur_round(progress_bina);
  v20 = *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000);
  LOBYTE(progress_bin) = v20 != 0;
  v21 = (v20 != 0) & (unsigned __int8)((char)((((_BYTE)this - 20) & 7) + 3) >= v20);
  if ( (_BYTE)v21 )
    __asan_report_store4(&this->cur_round_, progress_bin, v21);
  this->cur_round_ = v19;
  LOBYTE(v22) = proto::RogueDiaryProgressBin::is_round_fight_finish(progress_bina);
  v23 = v22;
  v24 = *(_BYTE *)(((unsigned __int64)&this->is_round_fight_finished_ >> 3) + 0x7FFF8000);
  if ( v24 < 0 )
  {
    LOBYTE(progress_bin) = v24 != 0;
    __asan_report_store1(&this->is_round_fight_finished_, progress_bin, v23);
  }
  this->is_round_fight_finished_ = v23;
  is_round_repair_finish = proto::RogueDiaryProgressBin::is_round_repair_finish(progress_bina);
  v26 = *(_BYTE *)(((unsigned __int64)&this->is_round_repair_finished_ >> 3) + 0x7FFF8000);
  LOBYTE(progress_bin) = v26 != 0;
  v27 = (v26 != 0) & (unsigned __int8)((((unsigned __int8)this - 15) & 7) >= v26);
  if ( (_BYTE)v27 )
    __asan_report_store1(&this->is_round_repair_finished_, progress_bin, v27);
  this->is_round_repair_finished_ = is_round_repair_finish;
  v28 = proto::RogueDiaryProgressBin::optional_card_list(progress_bina);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v28, &this->optional_card_vec_);
  v29 = proto::RogueDiaryProgressBin::chosen_card_list(progress_bina);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v29, &this->chosen_card_vec_);
  v30 = proto::RogueDiaryProgressBin::resume_optional_card_list(progress_bina);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v30, &this->resume_optional_card_vec_);
  v31 = proto::RogueDiaryProgressBin::resume_chosen_card_list(progress_bina);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v31, &this->resume_chosen_card_vec_);
  v32 = proto::RogueDiaryProgressBin::resume_select_card_list(progress_bina);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v32, &this->resume_select_card_vec_);
  __for_range = proto::RogueDiaryProgressBin::room_config_list(progress_bina);
  __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::RogueDiaryRoomConfigPairBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::RogueDiaryRoomConfigPairBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::RogueDiaryRoomConfigPairBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::RogueDiaryRoomConfigPairBin> *const)&__for_end_0,
            &__for_end) )
  {
    room_config_bin = google::protobuf::internal::RepeatedPtrIterator<proto::RogueDiaryRoomConfigPairBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::RogueDiaryRoomConfigPairBin> *const)&__for_end_0);
    can_hard = proto::RogueDiaryRoomConfigPairBin::is_can_hard(room_config_bin);
    v52 = proto::RogueDiaryRoomConfigPairBin::room_config_id(room_config_bin);
    std::vector<std::pair<unsigned int,bool>>::emplace_back<unsigned int,bool>(
      &this->round_room_config_vec_,
      &v52,
      &can_hard,
      v33,
      v34);
    google::protobuf::internal::RepeatedPtrIterator<proto::RogueDiaryRoomConfigPairBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::RogueDiaryRoomConfigPairBin> *const)&__for_end_0);
  }
  v35 = proto::RogueDiaryProgressBin::onstage_guid_list(progress_bina);
  common::tools::MiscUtils::repeatedToVector<unsigned long,unsigned long>(v35, &this->onstage_guid_vec_);
  v36 = proto::RogueDiaryProgressBin::optional_tired_guid_list(progress_bina);
  common::tools::MiscUtils::repeatedToVector<unsigned long,unsigned long>(v36, &this->optional_tired_guid_vec_);
  __for_range_0 = proto::RogueDiaryProgressBin::rogue_avatar_list(progress_bina);
  __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::RogueDiaryAvtarBin>::begin(__for_range_0).it_;
  __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::RogueDiaryAvtarBin>::end(__for_range_0).it_;
  while ( 1 )
  {
    p_for_end_0 = &__for_end_0;
    if ( !google::protobuf::internal::RepeatedPtrIterator<proto::RogueDiaryAvtarBin const>::operator!=(
            &__for_begin_0,
            &__for_end_0) )
      break;
    rogue_avatar_bin = google::protobuf::internal::RepeatedPtrIterator<proto::RogueDiaryAvtarBin const>::operator*(&__for_begin_0);
    *(_QWORD *)(v3 + 32) = 0LL;
    *(_QWORD *)(v3 + 40) = 0LL;
    *(_QWORD *)(v3 + 48) = 0LL;
    *(_DWORD *)(v3 + 56) = 0;
    *(_DWORD *)(v3 + 32) = proto::RogueDiaryAvtarBin::level(rogue_avatar_bin);
    *(_DWORD *)(v3 + 36) = proto::RogueDiaryAvtarBin::round(rogue_avatar_bin);
    *(float *)v2.m128i_i32 = proto::RogueDiaryAvtarBin::hp(rogue_avatar_bin);
    *(_DWORD *)(v3 + 40) = _mm_cvtsi128_si32(v2);
    *(float *)v2.m128i_i32 = proto::RogueDiaryAvtarBin::energy(rogue_avatar_bin);
    *(_DWORD *)(v3 + 44) = _mm_cvtsi128_si32(v2);
    *(_DWORD *)(v3 + 48) = proto::RogueDiaryAvtarBin::trial_config_id(rogue_avatar_bin);
    *(_DWORD *)(v3 + 52) = proto::RogueDiaryAvtarBin::life_state(rogue_avatar_bin);
    *(_BYTE *)(v3 + 56) = proto::RogueDiaryAvtarBin::is_ban(rogue_avatar_bin);
    __for_end.it_ = (void *const *)proto::RogueDiaryAvtarBin::guid(rogue_avatar_bin);
    v40 = std::unordered_map<unsigned long,RogueDiaryAvatarData>::emplace<unsigned long,RogueDiaryAvatarData&>(
            &this->guid_avatar_data_map_,
            (unsigned __int64 *)&__for_end,
            (RogueDiaryAvatarData *)(v3 + 32),
            v38,
            v39);
    if ( !v40.second )
    {
      common::milog::MiLogStream::create(
        &v60,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "fromProgressBin",
        67);
      v41 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v60,
              (const char (*)[42])"[RogueDiary] duplicate rogue avatar guid:");
      __for_end.it_ = (void *const *)proto::RogueDiaryAvtarBin::guid(rogue_avatar_bin);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
        v41,
        (const unsigned __int64 *)&__for_end);
      common::milog::MiLogStream::~MiLogStream(&v60);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::RogueDiaryAvtarBin const>::operator++(&__for_begin_0);
  }
  v42 = proto::RogueDiaryProgressBin::coin(progress_bina);
  v43 = *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000);
  if ( v43 != 0 && v43 <= 3 )
  {
    LOBYTE(p_for_end_0) = v43 != 0;
    __asan_report_store4(&this->coin_, p_for_end_0, v42);
  }
  this->coin_ = v42;
  v44 = proto::RogueDiaryProgressBin::time(progress_bina);
  v45 = *(_BYTE *)(((unsigned __int64)&this->time_ >> 3) + 0x7FFF8000);
  LOBYTE(p_for_end_0) = v45 != 0;
  v46 = (v45 != 0) & (unsigned __int8)((char)((((_BYTE)this - 12) & 7) + 3) >= v45);
  if ( (_BYTE)v46 )
    __asan_report_store4(&this->time_, p_for_end_0, v46);
  this->time_ = v44;
  v47 = proto::RogueDiaryProgressBin::transaction(progress_bina);
  v48 = *(_BYTE *)(((unsigned __int64)&this->transaction_ >> 3) + 0x7FFF8000);
  if ( v48 != 0 && v48 <= 3 )
  {
    LOBYTE(p_for_end_0) = v48 != 0;
    __asan_report_store4(&this->transaction_, p_for_end_0, v47);
  }
  this->transaction_ = v47;
  result = 0;
  if ( v61 == (char *)v3 )
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

// Line 78: range 00000000143C5F1A-00000000143C67C9
int32_t __cdecl RogueDiaryRuntimeMgr::toProgressBin(
        const RogueDiaryRuntimeMgr *const this,
        proto::RogueDiaryProgressBin *progress_bin)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax
  google::protobuf::RepeatedField<unsigned int> *v3; // rax
  google::protobuf::RepeatedField<unsigned int> *v4; // rax
  google::protobuf::RepeatedField<unsigned int> *v5; // rax
  google::protobuf::RepeatedField<unsigned int> *v6; // rax
  google::protobuf::RepeatedField<long unsigned int> *v7; // rax
  google::protobuf::RepeatedField<long unsigned int> *v8; // rax
  std::vector<std::pair<unsigned int,bool>>::const_iterator __for_begin; // [rsp+10h] [rbp-50h] BYREF
  std::vector<std::pair<unsigned int,bool>>::const_iterator __for_end; // [rsp+18h] [rbp-48h] BYREF
  const std::vector<std::pair<unsigned int,bool>> *__for_range; // [rsp+20h] [rbp-40h]
  const std::unordered_map<long unsigned int,RogueDiaryAvatarData> *__for_range_0; // [rsp+28h] [rbp-38h]
  const std::pair<long unsigned int const,RogueDiaryAvatarData> *v14; // [rsp+30h] [rbp-30h]
  std::tuple_element<0,const std::pair<long unsigned int const,RogueDiaryAvatarData> >::type *guid; // [rsp+38h] [rbp-28h]
  std::tuple_element<1,const std::pair<long unsigned int const,RogueDiaryAvatarData> >::type *avatar_data; // [rsp+40h] [rbp-20h]
  proto::RogueDiaryAvtarBin *avatar_bin; // [rsp+48h] [rbp-18h]
  const std::pair<unsigned int,bool> *room_config_pair; // [rsp+50h] [rbp-10h]
  proto::RogueDiaryRoomConfigPairBin *pair_bin; // [rsp+58h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->is_have_progress_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_progress_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_have_progress_);
  }
  proto::RogueDiaryProgressBin::set_is_have_progress(progress_bin, this->is_have_progress_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_have_enter_dungeon_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 35) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_enter_dungeon_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_have_enter_dungeon_);
  }
  proto::RogueDiaryProgressBin::set_is_have_enter_dungeon(progress_bin, this->is_have_enter_dungeon_);
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->stage_id_);
  }
  proto::RogueDiaryProgressBin::set_stage_id(progress_bin, this->stage_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->dungeon_id_);
  }
  proto::RogueDiaryProgressBin::set_dungeon_id(progress_bin, this->dungeon_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_difficulty_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_difficulty_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_difficulty_);
  }
  proto::RogueDiaryProgressBin::set_difficulty(progress_bin, this->cur_difficulty_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_round_);
  }
  proto::RogueDiaryProgressBin::set_cur_round(progress_bin, this->cur_round_);
  if ( *(char *)(((unsigned __int64)&this->is_round_fight_finished_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_round_fight_finished_);
  proto::RogueDiaryProgressBin::set_is_round_fight_finish(progress_bin, this->is_round_fight_finished_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_round_repair_finished_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 15) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_round_repair_finished_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_round_repair_finished_);
  }
  proto::RogueDiaryProgressBin::set_is_round_repair_finish(progress_bin, this->is_round_repair_finished_);
  v2 = proto::RogueDiaryProgressBin::mutable_optional_card_list(progress_bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->optional_card_vec_, v2);
  v3 = proto::RogueDiaryProgressBin::mutable_chosen_card_list(progress_bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->chosen_card_vec_, v3);
  v4 = proto::RogueDiaryProgressBin::mutable_resume_optional_card_list(progress_bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->resume_optional_card_vec_, v4);
  v5 = proto::RogueDiaryProgressBin::mutable_resume_chosen_card_list(progress_bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->resume_chosen_card_vec_, v5);
  v6 = proto::RogueDiaryProgressBin::mutable_resume_select_card_list(progress_bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->resume_select_card_vec_, v6);
  __for_range = &this->round_room_config_vec_;
  __for_begin._M_current = std::vector<std::pair<unsigned int,bool>>::begin(&this->round_room_config_vec_)._M_current;
  __for_end._M_current = std::vector<std::pair<unsigned int,bool>>::end(&this->round_room_config_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::pair<unsigned int,bool> const*,std::vector<std::pair<unsigned int,bool>>>(
            &__for_begin,
            &__for_end) )
  {
    room_config_pair = __gnu_cxx::__normal_iterator<std::pair<unsigned int,bool> const*,std::vector<std::pair<unsigned int,bool>>>::operator*(&__for_begin);
    pair_bin = proto::RogueDiaryProgressBin::add_room_config_list(progress_bin);
    if ( *(_BYTE *)(((unsigned __int64)room_config_pair >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)room_config_pair & 7) + 3) >= *(_BYTE *)(((unsigned __int64)room_config_pair >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(room_config_pair);
    }
    proto::RogueDiaryRoomConfigPairBin::set_room_config_id(pair_bin, room_config_pair->first);
    if ( *(_BYTE *)(((unsigned __int64)&room_config_pair->second >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)room_config_pair + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&room_config_pair->second >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load1(&room_config_pair->second);
    }
    proto::RogueDiaryRoomConfigPairBin::set_is_can_hard(pair_bin, room_config_pair->second);
    __gnu_cxx::__normal_iterator<std::pair<unsigned int,bool> const*,std::vector<std::pair<unsigned int,bool>>>::operator++(&__for_begin);
  }
  v7 = proto::RogueDiaryProgressBin::mutable_onstage_guid_list(progress_bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned long,unsigned long>(&this->onstage_guid_vec_, v7);
  v8 = proto::RogueDiaryProgressBin::mutable_optional_tired_guid_list(progress_bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned long,unsigned long>(&this->optional_tired_guid_vec_, v8);
  __for_range_0 = &this->guid_avatar_data_map_;
  __for_begin._M_current = (const std::pair<unsigned int,bool> *)std::unordered_map<unsigned long,RogueDiaryAvatarData>::begin(&this->guid_avatar_data_map_)._M_cur;
  __for_end._M_current = (const std::pair<unsigned int,bool> *)std::unordered_map<unsigned long,RogueDiaryAvatarData>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned long const,RogueDiaryAvatarData>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,RogueDiaryAvatarData>,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,RogueDiaryAvatarData>,false> *)&__for_end) )
  {
    v14 = std::__detail::_Node_const_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false> *const)&__for_begin);
    guid = std::get<0ul,unsigned long const,RogueDiaryAvatarData>(v14);
    avatar_data = (std::tuple_element<1,const std::pair<long unsigned int const,RogueDiaryAvatarData> >::type *)std::get<1ul,unsigned long const,RogueDiaryAvatarData>(v14);
    avatar_bin = proto::RogueDiaryProgressBin::add_rogue_avatar_list(progress_bin);
    if ( *(_BYTE *)(((unsigned __int64)guid >> 3) + 0x7FFF8000) )
      __asan_report_load8(guid);
    proto::RogueDiaryAvtarBin::set_guid(avatar_bin, *guid);
    if ( *(_BYTE *)(((unsigned __int64)avatar_data >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)avatar_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)avatar_data >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(avatar_data);
    }
    proto::RogueDiaryAvtarBin::set_level(avatar_bin, avatar_data->level);
    if ( *(_BYTE *)(((unsigned __int64)&avatar_data->cur_hp >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)avatar_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_data->cur_hp >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&avatar_data->cur_hp);
    }
    proto::RogueDiaryAvtarBin::set_hp(avatar_bin, avatar_data->cur_hp);
    if ( *(_BYTE *)(((unsigned __int64)&avatar_data->cur_elem_energy >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)avatar_data + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_data->cur_elem_energy >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(&avatar_data->cur_elem_energy);
    }
    proto::RogueDiaryAvtarBin::set_energy(avatar_bin, avatar_data->cur_elem_energy);
    if ( *(_BYTE *)(((unsigned __int64)&avatar_data->trial_config_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)avatar_data + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_data->trial_config_id >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(&avatar_data->trial_config_id);
    }
    proto::RogueDiaryAvtarBin::set_trial_config_id(avatar_bin, avatar_data->trial_config_id);
    if ( *(_BYTE *)(((unsigned __int64)&avatar_data->round >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)avatar_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_data->round >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&avatar_data->round);
    }
    proto::RogueDiaryAvtarBin::set_round(avatar_bin, avatar_data->round);
    if ( *(_BYTE *)(((unsigned __int64)&avatar_data->life_state >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)avatar_data + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_data->life_state >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(&avatar_data->life_state);
    }
    proto::RogueDiaryAvtarBin::set_life_state(avatar_bin, avatar_data->life_state);
    if ( *(_BYTE *)(((unsigned __int64)&avatar_data->is_ban >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)avatar_data + 24) & 7) >= *(_BYTE *)(((unsigned __int64)&avatar_data->is_ban >> 3)
                                                               + 0x7FFF8000) )
    {
      __asan_report_load1(&avatar_data->is_ban);
    }
    proto::RogueDiaryAvtarBin::set_is_ban(avatar_bin, avatar_data->is_ban);
    std::__detail::_Node_const_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false> *const)&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->coin_);
  }
  proto::RogueDiaryProgressBin::set_coin(progress_bin, this->coin_);
  if ( *(_BYTE *)(((unsigned __int64)&this->time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->time_);
  }
  proto::RogueDiaryProgressBin::set_time(progress_bin, this->time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->transaction_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->transaction_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->transaction_);
  }
  proto::RogueDiaryProgressBin::set_transaction(progress_bin, this->transaction_);
  return 0;
};

// Line 119: range 00000000143C67CA-00000000143C6A00
int32_t __cdecl RogueDiaryRuntimeMgr::toClient(
        const RogueDiaryRuntimeMgr *const this,
        proto::RogueDiaryProgress *progress_info)
{
  google::protobuf::RepeatedField<unsigned int> *v3; // rax
  uint32_t cur_round; // ebx
  google::protobuf::uint32 v5; // edx

  if ( *(_BYTE *)(((unsigned __int64)&this->is_have_progress_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_progress_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_have_progress_);
  }
  if ( !this->is_have_progress_ )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->stage_id_);
  }
  proto::RogueDiaryProgress::set_stage_id(progress_info, this->stage_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_difficulty_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_difficulty_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_difficulty_);
  }
  proto::RogueDiaryProgress::set_difficulty(progress_info, this->cur_difficulty_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_have_enter_dungeon_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 35) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_enter_dungeon_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_have_enter_dungeon_);
  }
  proto::RogueDiaryProgress::set_is_enter_dungeon(progress_info, this->is_have_enter_dungeon_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_have_enter_dungeon_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 35) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_enter_dungeon_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_have_enter_dungeon_);
  }
  if ( !this->is_have_enter_dungeon_ )
  {
    v3 = proto::RogueDiaryProgress::mutable_optional_card_list(progress_info);
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->optional_card_vec_, v3);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_round_);
  }
  cur_round = this->cur_round_;
  v5 = cur_round + RogueDiaryRuntimeMgr::getCurRoundCountCorrection(this);
  proto::RogueDiaryProgress::set_cur_round(progress_info, v5);
  return 0;
};

// Line 140: range 00000000143C6A02-00000000143C6B81
void __cdecl RogueDiaryRuntimeMgr::onLeaveScene(RogueDiaryRuntimeMgr *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_settle_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_settle_);
  if ( this->is_settle_ )
  {
    RogueDiaryRuntimeMgr::clearAll(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->activity_);
LABEL_16:
    BaseActivity::notifyClientData(this->activity_, 0);
    return;
  }
  if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_running_);
  if ( this->is_running_ )
  {
    if ( *(char *)(((unsigned __int64)&this->is_enter_next_dungeon_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_enter_next_dungeon_);
    if ( !this->is_enter_next_dungeon_ )
      RogueDiaryRuntimeMgr::logSave(this);
    RogueDiaryRuntimeMgr::clearBuff(this);
    RogueDiaryRuntimeMgr::clearRuntimeData(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->activity_);
    goto LABEL_16;
  }
};

// Line 160: range 00000000143C6B82-00000000143C6BEF
void __cdecl RogueDiaryRuntimeMgr::clearAll(RogueDiaryRuntimeMgr *const this)
{
  __int64 v1; // rsi

  RogueDiaryRuntimeMgr::clearBuff(this);
  RogueDiaryRuntimeMgr::clearRuntimeData(this);
  RogueDiaryRuntimeMgr::clearBinData(this);
  if ( *(char *)(((unsigned __int64)&this->is_enter_next_dungeon_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_enter_next_dungeon_, v1, &this->is_enter_next_dungeon_);
  this->is_enter_next_dungeon_ = 0;
};

// Line 170: range 00000000143C6BF0-00000000143C6E93
// local variable allocation has failed, the output may be wrong!
void __cdecl RogueDiaryRuntimeMgr::settle(RogueDiaryRuntimeMgr *const this, bool is_succ)
{
  RogueDiaryActivity *activity; // rbx
  uint32_t time; // r13d
  uint32_t cur_round; // r12d
  uint32_t v5; // esi
  uint32_t cur_difficulty; // edx
  common::milog::MiLogStream *v7; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-44h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-40h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_settle_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_settle_, is_succ, &this->is_settle_);
  this->is_settle_ = 1;
  RogueDiaryRuntimeMgr::clearBuff(this);
  RogueDiaryRuntimeMgr::logSettle(this);
  RogueDiaryRuntimeMgr::notifySettleInfo(this, is_succ);
  if ( is_succ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->activity_);
    activity = this->activity_;
    if ( *(_BYTE *)(((unsigned __int64)&this->time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->time_);
    }
    time = this->time_;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->cur_round_);
    }
    cur_round = this->cur_round_;
    v5 = cur_round + RogueDiaryRuntimeMgr::getCurRoundCountCorrection(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_difficulty_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_difficulty_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_difficulty_);
    }
    cur_difficulty = this->cur_difficulty_;
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->stage_id_);
    }
    RogueDiaryActivity::tryUpdateRogueDiaryStageRecord(activity, this->stage_id_, cur_difficulty, v5, 1, time);
  }
  common::milog::MiLogStream::create(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
    "settle",
    180);
  v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
         &v9,
         (const char (*)[35])"[RogueDiary] settle finished, uid:");
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
  common::milog::MiLogStream::~MiLogStream(&v9);
};

// Line 185: range 00000000143C6E94-00000000143C6F57
void __cdecl RogueDiaryRuntimeMgr::onInterrupt(RogueDiaryRuntimeMgr *const this, uint32_t interrupt_reason)
{
  __int64 v2; // rsi
  __int64 v3; // rdx

  v2 = ((_BYTE)this - 47) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_interrupt_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_interrupt_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_interrupt_, v2, v3);
  this->is_interrupt_ = 1;
  if ( *(char *)(((unsigned __int64)&this->is_room_fighting_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_room_fighting_);
  if ( this->is_room_fighting_ )
    RogueDiaryRuntimeMgr::logRoomSettle(this, interrupt_reason);
  RogueDiaryRuntimeMgr::clearBuff(this);
  RogueDiaryRuntimeMgr::notifySettleInfo(this, 0);
};

// Line 196: range 00000000143C6F58-00000000143C75C3
void __cdecl RogueDiaryRuntimeMgr::clearBuff(RogueDiaryRuntimeMgr *const this)
{
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v1; // rax
  uint32_t *v2; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // rax
  char v6; // al
  std::initializer_list<std::string > *i; // rbx
  PlayerAbilityGroupComp *v8; // rax
  char v9; // al
  std::initializer_list<std::string > *j; // rbx
  PlayerAbilityGroupComp *v11; // rax
  PlayerAbilityGroupComp *v12; // [rsp+0h] [rbp-C0h]
  PlayerAbilityGroupComp *v13; // [rsp+0h] [rbp-C0h]
  std::allocator<std::string > __a; // [rsp+13h] [rbp-ADh] BYREF
  uint32_t card_id; // [rsp+14h] [rbp-ACh]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-A0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-98h]
  const data::RogueDiaryBuffDataExcelConfig *config_ptr; // [rsp+30h] [rbp-90h]
  const data::ConfigAbilityGroup *ability_group_config_ptr; // [rsp+38h] [rbp-88h]
  std::shared_ptr<Config> v21; // [rsp+40h] [rbp-80h] BYREF
  std::vector<std::string> group_vec; // [rsp+50h] [rbp-70h] BYREF
  std::initializer_list<std::string > __l; // [rsp+70h] [rbp-50h] BYREF
  _BYTE v24[48]; // [rsp+90h] [rbp-30h] BYREF

  __for_range = &this->chosen_card_vec_;
  __for_begin._M_current = std::vector<unsigned int>::begin(&this->chosen_card_vec_)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&this->chosen_card_vec_)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v1 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    v2 = v1;
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v1);
    }
    card_id = *v2;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
    config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryBuffDataExcelConfig(
                   &v3->design_config.txt_config_mgr.activity_rogue_diary_config_mgr,
                   card_id);
    std::shared_ptr<Config>::~shared_ptr(&v21);
    if ( config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->effect_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config_ptr->effect_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config_ptr->effect_type);
      }
      if ( config_ptr->effect_type == ROGUE_DIARY_BUFF_EFFECT_ABILITY )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v21);
        v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
        ability_group_config_ptr = JsonConfigMgr::findAbilityGroupConfig(
                                     &v4->design_config.json_config_mgr,
                                     &config_ptr->ability_group);
        std::shared_ptr<Config>::~shared_ptr(&v21);
        if ( !ability_group_config_ptr )
          goto LABEL_17;
        if ( *(_BYTE *)(((unsigned __int64)&ability_group_config_ptr->ability_group_target_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)ability_group_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&ability_group_config_ptr->ability_group_target_type >> 3)
                                                                                 + 0x7FFF8000) )
        {
          __asan_report_load4(&ability_group_config_ptr->ability_group_target_type);
        }
        if ( ability_group_config_ptr->ability_group_target_type != ABILITY_GROUP_TARGET_TEAM )
          goto LABEL_17;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        AbilityGroupComp = Player::getAbilityGroupComp(this->player_);
        if ( PlayerAbilityGroupComp::isHasAbilityGroupInTeamFilter(AbilityGroupComp, &config_ptr->ability_group) )
          v6 = 1;
        else
LABEL_17:
          v6 = 0;
        if ( v6 )
        {
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          v12 = Player::getAbilityGroupComp(this->player_);
          std::string::basic_string(&__l, &config_ptr->ability_group);
          std::allocator<std::string>::allocator(&__a);
          std::vector<std::string>::vector(
            &group_vec,
            (std::initializer_list<std::string >)__PAIR128__(1LL, &__l),
            &__a);
          PlayerAbilityGroupComp::delTeamAbilityGroup(v12, &group_vec);
          std::vector<std::string>::~vector(&group_vec);
          std::allocator<std::string>::~allocator(&__a);
          for ( i = (std::initializer_list<std::string > *)v24; i != &__l; std::string::~string(i) )
            i -= 2;
        }
        else
        {
          if ( !ability_group_config_ptr )
            goto LABEL_32;
          if ( *(_BYTE *)(((unsigned __int64)&ability_group_config_ptr->ability_group_target_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)ability_group_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&ability_group_config_ptr->ability_group_target_type >> 3)
                                                                                   + 0x7FFF8000) )
          {
            __asan_report_load4(&ability_group_config_ptr->ability_group_target_type);
          }
          if ( ability_group_config_ptr->ability_group_target_type != ABILITY_GROUP_TARGET_AVATAR )
            goto LABEL_32;
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          v8 = Player::getAbilityGroupComp(this->player_);
          if ( PlayerAbilityGroupComp::isHasAbilityGroupInNoneFilter(v8, &config_ptr->ability_group) )
            v9 = 1;
          else
LABEL_32:
            v9 = 0;
          if ( v9 )
          {
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            v13 = Player::getAbilityGroupComp(this->player_);
            std::string::basic_string(&__l, &config_ptr->ability_group);
            std::allocator<std::string>::allocator(&__a);
            std::vector<std::string>::vector(
              &group_vec,
              (std::initializer_list<std::string >)__PAIR128__(1LL, &__l),
              &__a);
            PlayerAbilityGroupComp::delNoneFilterAbilityGroup(v13, &group_vec);
            std::vector<std::string>::~vector(&group_vec);
            std::allocator<std::string>::~allocator(&__a);
            for ( j = (std::initializer_list<std::string > *)v24; j != &__l; std::string::~string(j) )
              j -= 2;
          }
        }
      }
    }
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v11 = Player::getAbilityGroupComp(this->player_);
  PlayerAbilityGroupComp::tryRefreshAbilityGroup(v11);
};

// Line 219: range 00000000143C75C4-00000000143C7C3F
void __cdecl RogueDiaryRuntimeMgr::addBuff(RogueDiaryRuntimeMgr *const this)
{
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v1; // rax
  uint32_t *v2; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // rax
  char v6; // al
  std::initializer_list<std::string > *i; // rbx
  PlayerAbilityGroupComp *v8; // rax
  char v9; // al
  std::initializer_list<std::string > *j; // rbx
  PlayerAbilityGroupComp *v11; // rax
  PlayerAbilityGroupComp *v12; // [rsp+0h] [rbp-C0h]
  PlayerAbilityGroupComp *v13; // [rsp+0h] [rbp-C0h]
  std::allocator<std::string > __a; // [rsp+13h] [rbp-ADh] BYREF
  uint32_t card_id; // [rsp+14h] [rbp-ACh]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-A0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-98h]
  const data::RogueDiaryBuffDataExcelConfig *config_ptr; // [rsp+30h] [rbp-90h]
  const data::ConfigAbilityGroup *ability_group_config_ptr; // [rsp+38h] [rbp-88h]
  std::shared_ptr<Config> v21; // [rsp+40h] [rbp-80h] BYREF
  std::vector<std::string> group_vec; // [rsp+50h] [rbp-70h] BYREF
  std::initializer_list<std::string > __l; // [rsp+70h] [rbp-50h] BYREF
  _BYTE v24[48]; // [rsp+90h] [rbp-30h] BYREF

  __for_range = &this->chosen_card_vec_;
  __for_begin._M_current = std::vector<unsigned int>::begin(&this->chosen_card_vec_)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&this->chosen_card_vec_)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v1 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    v2 = v1;
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v1);
    }
    card_id = *v2;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
    config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryBuffDataExcelConfig(
                   &v3->design_config.txt_config_mgr.activity_rogue_diary_config_mgr,
                   card_id);
    std::shared_ptr<Config>::~shared_ptr(&v21);
    if ( config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->effect_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config_ptr->effect_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config_ptr->effect_type);
      }
      if ( config_ptr->effect_type == ROGUE_DIARY_BUFF_EFFECT_ABILITY )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v21);
        v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
        ability_group_config_ptr = JsonConfigMgr::findAbilityGroupConfig(
                                     &v4->design_config.json_config_mgr,
                                     &config_ptr->ability_group);
        std::shared_ptr<Config>::~shared_ptr(&v21);
        if ( !ability_group_config_ptr )
          goto LABEL_17;
        if ( *(_BYTE *)(((unsigned __int64)&ability_group_config_ptr->ability_group_target_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)ability_group_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&ability_group_config_ptr->ability_group_target_type >> 3)
                                                                                 + 0x7FFF8000) )
        {
          __asan_report_load4(&ability_group_config_ptr->ability_group_target_type);
        }
        if ( ability_group_config_ptr->ability_group_target_type != ABILITY_GROUP_TARGET_TEAM )
          goto LABEL_17;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        AbilityGroupComp = Player::getAbilityGroupComp(this->player_);
        if ( !PlayerAbilityGroupComp::isHasAbilityGroupInTeamFilter(AbilityGroupComp, &config_ptr->ability_group) )
          v6 = 1;
        else
LABEL_17:
          v6 = 0;
        if ( v6 )
        {
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          v12 = Player::getAbilityGroupComp(this->player_);
          std::string::basic_string(&__l, &config_ptr->ability_group);
          std::allocator<std::string>::allocator(&__a);
          std::vector<std::string>::vector(
            &group_vec,
            (std::initializer_list<std::string >)__PAIR128__(1LL, &__l),
            &__a);
          PlayerAbilityGroupComp::addTeamAbilityGroup(v12, &group_vec, 0);
          std::vector<std::string>::~vector(&group_vec);
          std::allocator<std::string>::~allocator(&__a);
          for ( i = (std::initializer_list<std::string > *)v24; i != &__l; std::string::~string(i) )
            i -= 2;
        }
        else
        {
          if ( !ability_group_config_ptr )
            goto LABEL_32;
          if ( *(_BYTE *)(((unsigned __int64)&ability_group_config_ptr->ability_group_target_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)ability_group_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&ability_group_config_ptr->ability_group_target_type >> 3)
                                                                                   + 0x7FFF8000) )
          {
            __asan_report_load4(&ability_group_config_ptr->ability_group_target_type);
          }
          if ( ability_group_config_ptr->ability_group_target_type != ABILITY_GROUP_TARGET_AVATAR )
            goto LABEL_32;
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          v8 = Player::getAbilityGroupComp(this->player_);
          if ( !PlayerAbilityGroupComp::isHasAbilityGroupInNoneFilter(v8, &config_ptr->ability_group) )
            v9 = 1;
          else
LABEL_32:
            v9 = 0;
          if ( v9 )
          {
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            v13 = Player::getAbilityGroupComp(this->player_);
            std::string::basic_string(&__l, &config_ptr->ability_group);
            std::allocator<std::string>::allocator(&__a);
            std::vector<std::string>::vector(
              &group_vec,
              (std::initializer_list<std::string >)__PAIR128__(1LL, &__l),
              &__a);
            PlayerAbilityGroupComp::addNoneFilterAbilityGroup(v13, &group_vec, 0);
            std::vector<std::string>::~vector(&group_vec);
            std::allocator<std::string>::~allocator(&__a);
            for ( j = (std::initializer_list<std::string > *)v24; j != &__l; std::string::~string(j) )
              j -= 2;
          }
        }
      }
    }
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v11 = Player::getAbilityGroupComp(this->player_);
  PlayerAbilityGroupComp::tryRefreshAbilityGroup(v11);
};

// Line 242: range 00000000143C7C40-00000000143C7F6E
void __cdecl RogueDiaryRuntimeMgr::clearRuntimeData(RogueDiaryRuntimeMgr *const this)
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
  int __x; // [rsp+10h] [rbp-10h] BYREF
  int __y; // [rsp+14h] [rbp-Ch] BYREF
  std::pair<int,int> __p; // [rsp+18h] [rbp-8h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_running_, v1, &this->is_running_);
  this->is_running_ = 0;
  std::vector<unsigned int>::clear(&this->group_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->group_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_index_, v1, &this->group_index_);
  }
  this->group_index_ = 0;
  v2 = (((_BYTE)this + 52) & 7u) + 3;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->cur_room_, v2, v3);
  this->cur_room_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_room_fighting_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_room_fighting_, v2, &this->is_room_fighting_);
  this->is_room_fighting_ = 0;
  v4 = ((_BYTE)this + 57) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_select_room_hard_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_select_room_hard_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_select_room_hard_, v4, v5);
  this->is_select_room_hard_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->room_start_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->room_start_time_, v4);
  this->room_start_time_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->room_end_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->room_end_time_, v4);
  this->room_end_time_ = 0LL;
  std::unordered_map<unsigned int,unsigned long>::clear(&this->trial_id_to_guid_map_);
  std::unordered_map<unsigned int,unsigned long>::clear(&this->formal_id_to_guid_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_coin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_round_coin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_round_coin_, v4, &this->cur_round_coin_);
  }
  this->cur_round_coin_ = 0;
  v6 = (((_BYTE)this - 52) & 7u) + 3;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->cur_round_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->cur_round_time_, v6, v7);
  this->cur_round_time_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_settle_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_settle_, v6, &this->is_settle_);
  this->is_settle_ = 0;
  v8 = ((_BYTE)this - 47) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->is_interrupt_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->is_interrupt_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_interrupt_, v8, v9);
  this->is_interrupt_ = 0;
  __y = 0;
  __x = 0;
  __p = std::make_pair<int,int>(&__x, &__y);
  std::pair<unsigned int,unsigned int>::operator=<int,int>(&this->resume_repair_gadget_index_pair_, &__p);
};

// Line 266: range 00000000143C7F70-00000000143C8695
void __cdecl RogueDiaryRuntimeMgr::clearBinData(RogueDiaryRuntimeMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
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
  std::unordered_map<long unsigned int,RogueDiaryAvatarData>::iterator __for_begin; // [rsp+10h] [rbp-D0h] BYREF
  std::unordered_map<long unsigned int,RogueDiaryAvatarData>::iterator __for_end; // [rsp+18h] [rbp-C8h] BYREF
  std::unordered_map<long unsigned int,RogueDiaryAvatarData> *__for_range; // [rsp+20h] [rbp-C0h]
  const std::pair<long unsigned int const,RogueDiaryAvatarData> *v22; // [rsp+28h] [rbp-B8h]
  std::tuple_element<0,const std::pair<long unsigned int const,RogueDiaryAvatarData> >::type *guid; // [rsp+30h] [rbp-B0h]
  std::tuple_element<1,const std::pair<long unsigned int const,RogueDiaryAvatarData> >::type *data; // [rsp+38h] [rbp-A8h]
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-A0h] BYREF
  char v26[128]; // [rsp+60h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 19 remove_guid_vec:267";
  *(_QWORD *)(v1 + 16) = RogueDiaryRuntimeMgr::clearBinData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v1 + 32));
  __for_range = &this->guid_avatar_data_map_;
  __for_begin._M_cur = std::unordered_map<unsigned long,RogueDiaryAvatarData>::begin(&this->guid_avatar_data_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned long,RogueDiaryAvatarData>::end(&this->guid_avatar_data_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned long const,RogueDiaryAvatarData>,false>(&__for_begin, &__for_end) )
  {
    v22 = std::__detail::_Node_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator*(&__for_begin);
    guid = std::get<0ul,unsigned long const,RogueDiaryAvatarData>(v22);
    data = (std::tuple_element<1,const std::pair<long unsigned int const,RogueDiaryAvatarData> >::type *)std::get<1ul,unsigned long const,RogueDiaryAvatarData>(v22);
    std::vector<unsigned long>::push_back((std::vector<long unsigned int> *const)(v1 + 32), guid);
    std::__detail::_Node_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  AvatarComp = Player::getAvatarComp(this->player_);
  if ( PlayerAvatarComp::delInformalAvatarOrSnapshotBatch(
         AvatarComp,
         AVATAR_SNAPSHOT_TYPE_ROGUE_ACTIVITY,
         (const std::vector<long unsigned int> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "clearBinData",
      275);
    v5 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
           &v25,
           (const char (*)[64])"[RogueDiary] delInformalAvatarOrSnapshotBatch failed, guid_vec:");
    common::milog::MiLogStream::operator<<<unsigned long>(v5, (const std::vector<long unsigned int> *)(v1 + 32));
    common::milog::MiLogStream::~MiLogStream(&v25);
  }
  common::milog::MiLogStream::create(
    &v25,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
    "clearBinData",
    277);
  v6 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
         &v25,
         (const char (*)[62])"[RogueDiary] delInformalAvatarOrSnapshotBatch succ, guid_vec:");
  common::milog::MiLogStream::operator<<<unsigned long>(v6, (const std::vector<long unsigned int> *)(v1 + 32));
  common::milog::MiLogStream::~MiLogStream(&v25);
  v7 = ((_BYTE)this - 36) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->is_have_progress_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_have_progress_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_have_progress_, v7, v8);
  this->is_have_progress_ = 0;
  v9 = ((_BYTE)this - 35) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->is_have_enter_dungeon_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->is_have_enter_dungeon_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_have_enter_dungeon_, v9, v10);
  this->is_have_enter_dungeon_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id_, v9, &this->stage_id_);
  }
  this->stage_id_ = 0;
  v11 = (((_BYTE)this - 28) & 7u) + 3;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store4(&this->dungeon_id_, v11, v12);
  this->dungeon_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_difficulty_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_difficulty_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_difficulty_, v11, &this->cur_difficulty_);
  }
  this->cur_difficulty_ = 0;
  v13 = (((_BYTE)this - 20) & 7u) + 3;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store4(&this->cur_round_, v13, v14);
  this->cur_round_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_round_fight_finished_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_round_fight_finished_, v13, &this->is_round_fight_finished_);
  this->is_round_fight_finished_ = 0;
  v15 = ((_BYTE)this - 15) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&this->is_round_repair_finished_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&this->is_round_repair_finished_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->is_round_repair_finished_, v15, v16);
  this->is_round_repair_finished_ = 0;
  std::vector<std::pair<unsigned int,bool>>::clear(&this->round_room_config_vec_);
  std::vector<unsigned int>::clear(&this->optional_card_vec_);
  std::vector<unsigned int>::clear(&this->chosen_card_vec_);
  std::vector<unsigned int>::clear(&this->resume_optional_card_vec_);
  std::vector<unsigned int>::clear(&this->resume_chosen_card_vec_);
  std::vector<unsigned int>::clear(&this->resume_select_card_vec_);
  std::vector<unsigned long>::clear(&this->onstage_guid_vec_);
  std::unordered_map<unsigned long,RogueDiaryAvatarData>::clear(&this->guid_avatar_data_map_);
  std::vector<unsigned long>::clear(&this->optional_tired_guid_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->coin_, v15, &this->coin_);
  }
  this->coin_ = 0;
  v17 = (((_BYTE)this - 12) & 7u) + 3;
  v18 = (*(_BYTE *)(((unsigned __int64)&this->time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v18 )
    __asan_report_store4(&this->time_, v17, v18);
  this->time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->transaction_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->transaction_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->transaction_, v17, &this->transaction_);
  }
  this->transaction_ = 0;
  std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v1 + 32));
  if ( v26 == (char *)v1 )
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

// Line 306: range 00000000143C8696-00000000143C9169
void __cdecl RogueDiaryRuntimeMgr::onPostEnterScene(RogueDiaryRuntimeMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  __int64 p_dungeon_id; // rsi
  DungeonScene *v5; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  RogueDiaryDungeonContext *v9; // rdx
  char v10; // cl
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  bool is_enter_rogue_dungeon; // [rsp+1Ah] [rbp-116h]
  bool is_by_resume; // [rsp+1Bh] [rbp-115h]
  int32_t ret; // [rsp+1Ch] [rbp-114h]
  common::milog::MiLogStream v22; // [rsp+20h] [rbp-110h] BYREF
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-F0h] BYREF
  char v24[208]; // [rsp+60h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 4 25 dest_rogue_dungeon_id:319 64 12 27 rogue_diary_context_opt:325 96 16 17 cur_scene_ptr:"
                        "307 128 16 25 cur_dungeon_scene_ptr:321";
  *(_QWORD *)(v1 + 16) = RogueDiaryRuntimeMgr::onPostEnterScene;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219020288;
  v3[536862723] = -219021312;
  v3[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v1 + 96));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "onPostEnterScene",
      310);
    common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
      &v23,
      (const char (*)[53])"[RogueDiary] EnterDungeonEvent cur_scene_ptr nullptr");
    common::milog::MiLogStream::~MiLogStream(&v23);
    if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_running_);
    if ( this->is_running_ )
      RogueDiaryRuntimeMgr::clearAll(this);
  }
  else
  {
    is_enter_rogue_dungeon = 0;
    *(_DWORD *)(v1 + 48) = 0;
    is_by_resume = 0;
    std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v1 + 128));
    p_dungeon_id = v1 + 128;
    if ( std::operator!=<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v1 + 128)) )
    {
      v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( DungeonScene::isEnterByRogueDiaryActivity(v5) )
      {
        v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
        *(std::optional<RogueDiaryDungeonContext> *)(v1 + 64) = DungeonScene::getDungeonExtraData<RogueDiaryDungeonContext>(v7);
        if ( std::optional<RogueDiaryDungeonContext>::has_value((const std::optional<RogueDiaryDungeonContext> *const)(v1 + 64)) )
        {
          is_enter_rogue_dungeon = 1;
          v8 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
          *(_DWORD *)(v1 + 48) = DungeonScene::getDungeonId(v8);
          v9 = std::optional<RogueDiaryDungeonContext>::value((std::optional<RogueDiaryDungeonContext> *const)(v1 + 64));
          v10 = *(_BYTE *)(((unsigned __int64)&v9->is_enter_by_resume >> 3) + 0x7FFF8000);
          LOBYTE(p_dungeon_id) = v10 != 0;
          if ( v10 != 0 && (((unsigned __int8)v9 + 4) & 7) >= v10 )
            __asan_report_load1(&v9->is_enter_by_resume);
          is_by_resume = v9->is_enter_by_resume;
        }
      }
    }
    ret = 0;
    if ( is_enter_rogue_dungeon )
      goto LABEL_67;
    if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_running_);
    if ( this->is_running_ )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "onPostEnterScene",
        338);
      v11 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v22,
              (const char (*)[35])"[RogueDiary] error runnning state:");
      RogueDiaryRuntimeMgr::getDesc[abi:cxx11]((std::string *)&v23, this);
      p_dungeon_id = (__int64)&v23;
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, (const std::string *)&v23);
      std::string::~string(&v23);
      common::milog::MiLogStream::~MiLogStream(&v22);
      ret = -1;
    }
    else
    {
      if ( !is_enter_rogue_dungeon )
        goto LABEL_41;
LABEL_67:
      if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_running_);
      if ( !this->is_running_ )
      {
        if ( RogueDiaryRuntimeMgr::isCurStageNextDungeon(this, *(_DWORD *)(v1 + 48)) )
        {
          if ( *(char *)(((unsigned __int64)&this->is_enter_next_dungeon_ >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&this->is_enter_next_dungeon_);
          if ( !this->is_enter_next_dungeon_ )
          {
            common::milog::MiLogStream::create(
              &v23,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
              "onPostEnterScene",
              350);
            common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v23,
              (const char (*)[41])"[RogueDiary] isCanEnterNextDungeon false");
            common::milog::MiLogStream::~MiLogStream(&v23);
          }
          p_dungeon_id = 1LL;
          ret = RogueDiaryRuntimeMgr::loadRogueDungeon(this, 1, is_by_resume);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&this->dungeon_id_);
          }
          if ( this->dungeon_id_ == *(_DWORD *)(v1 + 48) )
          {
            p_dungeon_id = 0LL;
            ret = RogueDiaryRuntimeMgr::loadRogueDungeon(this, 0, is_by_resume);
          }
          else
          {
            common::milog::MiLogStream::create(
              &v23,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
              "onPostEnterScene",
              360);
            v12 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    &v23,
                    (const char (*)[35])"[RogueDiary] cur_enter_dungeon_id:");
            v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v12,
                    (const unsigned int *)(v1 + 48));
            v14 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                    v13,
                    (const char (*)[23])", expected dungeon_id:");
            p_dungeon_id = (__int64)&this->dungeon_id_;
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->dungeon_id_);
            common::milog::MiLogStream::~MiLogStream(&v23);
            ret = -1;
          }
        }
      }
      else
      {
LABEL_41:
        if ( is_enter_rogue_dungeon )
        {
          if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&this->is_running_);
          if ( this->is_running_ )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4(&this->dungeon_id_);
            }
            if ( this->dungeon_id_ == *(_DWORD *)(v1 + 48) )
            {
              common::milog::MiLogStream::create(
                &v23,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
                "onPostEnterScene",
                370);
              v15 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                      &v23,
                      (const char (*)[66])"[RogueDiary] player reconnect in rogue diary rungeon, dungeon_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->dungeon_id_);
              common::milog::MiLogStream::~MiLogStream(&v23);
              RogueDiaryRuntimeMgr::notifyDungeonInfo(this);
              if ( *(char *)(((unsigned __int64)&this->is_settle_ >> 3) + 0x7FFF8000) < 0 )
                __asan_report_load1(&this->is_settle_);
              if ( this->is_settle_ )
              {
                p_dungeon_id = 1LL;
                RogueDiaryRuntimeMgr::notifySettleInfo(this, 1);
              }
              else
              {
                p_dungeon_id = ((_BYTE)this - 47) & 7;
                if ( *(_BYTE *)(((unsigned __int64)&this->is_interrupt_ >> 3) + 0x7FFF8000) != 0
                  && (char)p_dungeon_id >= *(_BYTE *)(((unsigned __int64)&this->is_interrupt_ >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load1(&this->is_interrupt_);
                }
                if ( this->is_interrupt_ )
                {
                  p_dungeon_id = 0LL;
                  RogueDiaryRuntimeMgr::notifySettleInfo(this, 0);
                }
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v23,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
                "onPostEnterScene",
                383);
              v16 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                      &v23,
                      (const char (*)[52])"[RogueDiary] player from rogue dungeon, dungeon_id:");
              v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->dungeon_id_);
              v18 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                      v17,
                      (const char (*)[43])", to unexpected rogue dungeon, dungeon_id:");
              p_dungeon_id = v1 + 48;
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                (const unsigned int *)(v1 + 48));
              common::milog::MiLogStream::~MiLogStream(&v23);
              ret = -1;
            }
          }
        }
      }
    }
    if ( *(char *)(((unsigned __int64)&this->is_enter_next_dungeon_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_enter_next_dungeon_, p_dungeon_id, &this->is_enter_next_dungeon_);
    this->is_enter_next_dungeon_ = 0;
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "onPostEnterScene",
        391);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        &v23,
        (const char (*)[37])"[RogueDiary] runtime error, clearAll");
      common::milog::MiLogStream::~MiLogStream(&v23);
      RogueDiaryRuntimeMgr::clearAll(this);
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 128));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 96));
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
};

// Line 398: range 00000000143C916A-00000000143C98BD
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl RogueDiaryRuntimeMgr::loadRogueDungeon(
        RogueDiaryRuntimeMgr *const this,
        bool is_load_next,
        bool is_enter_by_resume)
{
  uint32_t CurStageNextDungeonId; // ecx
  char v4; // dl
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  ActivityRogueDiaryExcelConfigMgr *p_activity_rogue_diary_config_mgr; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v12; // rax
  std::vector<unsigned int> *p_group_list; // rsi
  common::milog::MiLogStream *v14; // rbx
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v16; // rbx
  const data::RogueDiaryDungeonExcelConfig *config_ptr; // [rsp+10h] [rbp-70h]
  std::pair<unsigned int,unsigned int> __p; // [rsp+18h] [rbp-68h] BYREF
  std::shared_ptr<Config> v20; // [rsp+20h] [rbp-60h] BYREF
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-50h] BYREF
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-30h] BYREF

  if ( is_load_next )
  {
    CurStageNextDungeonId = RogueDiaryRuntimeMgr::getCurStageNextDungeonId(this);
    v4 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000);
    is_load_next = v4 != 0;
    v5 = (v4 != 0) & (unsigned __int8)((char)((((_BYTE)this - 28) & 7) + 3) >= v4);
    if ( (_BYTE)v5 )
      __asan_report_store4(&this->dungeon_id_, is_load_next, v5);
    this->dungeon_id_ = CurStageNextDungeonId;
    v6 = (*(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v6 )
      __asan_report_store4(&this->cur_round_, (((_BYTE)this - 20) & 7u) + 3, v6);
    this->cur_round_ = 0;
    v7 = (((_BYTE)this + 52) & 7u) + 3;
    v8 = (*(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v8 )
      __asan_report_store4(&this->cur_room_, v7, v8);
    this->cur_room_ = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->group_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->group_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->group_index_, v7, &this->group_index_);
    }
    this->group_index_ = 0;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  p_activity_rogue_diary_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.activity_rogue_diary_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->dungeon_id_);
  }
  config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryDungeonExcelConfig(
                 p_activity_rogue_diary_config_mgr,
                 this->dungeon_id_);
  std::shared_ptr<Config>::~shared_ptr(&v20);
  if ( !config_ptr )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "loadRogueDungeon",
      410);
    v10 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
            &v22,
            (const char (*)[66])"[RogueDiary] findRogueDiaryDungeonExcelConfig failed, dungeon_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->dungeon_id_);
    common::milog::MiLogStream::~MiLogStream(&v22);
    return -1;
  }
  if ( RogueDiaryRuntimeMgr::initRogueDiaryAvatarData(this) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "loadRogueDungeon",
      415);
    v12 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
            &v22,
            (const char (*)[58])"[RogueDiary] initRogueDiaryAvatarData failed, dungeon_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->dungeon_id_);
    common::milog::MiLogStream::~MiLogStream(&v22);
    return -1;
  }
  p_group_list = &config_ptr->group_list;
  std::vector<unsigned int>::operator=(&this->group_vec_, &config_ptr->group_list);
  if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_running_, p_group_list, &this->is_running_);
  this->is_running_ = 1;
  if ( *(char *)(((unsigned __int64)&this->is_room_fighting_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_room_fighting_, p_group_list, &this->is_room_fighting_);
  this->is_room_fighting_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_round_);
  }
  if ( !this->cur_round_ )
    RogueDiaryRuntimeMgr::updateRoundRoomByStep(this);
  if ( *(char *)(((unsigned __int64)&this->is_round_fight_finished_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_round_fight_finished_);
  if ( !this->is_round_fight_finished_ )
    goto LABEL_32;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_round_repair_finished_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 15) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_round_repair_finished_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_round_repair_finished_);
  }
  if ( !this->is_round_repair_finished_ )
  {
    RogueDiaryRuntimeMgr::triggerGroupEvent(this, EVENT_ROGUE_CREAGE_REPAIR_GADGET, 0);
  }
  else
  {
LABEL_32:
    if ( *(_BYTE *)(((unsigned __int64)&this->is_round_repair_finished_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 15) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_round_repair_finished_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_round_repair_finished_);
    }
    if ( this->is_round_repair_finished_ )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "loadRogueDungeon",
        437);
      v14 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v21,
              (const char (*)[36])"[RogueDiary] invalid state failed, ");
      RogueDiaryRuntimeMgr::getDesc[abi:cxx11]((std::string *)&v22, this);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, (const std::string *)&v22);
      std::string::~string(&v22);
      common::milog::MiLogStream::~MiLogStream(&v21);
      return -1;
    }
    if ( is_enter_by_resume )
    {
      __p = std::make_pair<unsigned int &,unsigned int &>(&this->cur_round_, &this->cur_room_);
      std::pair<unsigned int,unsigned int>::operator=(&this->resume_repair_gadget_index_pair_, &__p);
      RogueDiaryRuntimeMgr::triggerGroupEvent(this, EVENT_ROGUE_CREAGE_REPAIR_GADGET, 0);
      RogueDiaryRuntimeMgr::clearChosenCardVecAndReturnCoins(this);
    }
    else
    {
      RogueDiaryRuntimeMgr::triggerGroupEvent(this, EVENT_ROGUE_CREAGE_FIGHT_GADGET, 0);
    }
  }
  RogueDiaryRuntimeMgr::loadOnstageAvatarState(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  AvatarComp = Player::getAvatarComp(this->player_);
  PlayerAvatarComp::delAllBuffs(AvatarComp);
  RogueDiaryRuntimeMgr::addBuff(this);
  RogueDiaryRuntimeMgr::notifyDungeonInfo(this);
  RogueDiaryRuntimeMgr::logDungeonLoad(this);
  common::milog::MiLogStream::create(
    &v21,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
    "loadRogueDungeon",
    461);
  v16 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          &v21,
          (const char (*)[39])"[RogueDiary] loadRogueDungeon finish, ");
  RogueDiaryRuntimeMgr::getDesc[abi:cxx11]((std::string *)&v22, this);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, (const std::string *)&v22);
  std::string::~string(&v22);
  common::milog::MiLogStream::~MiLogStream(&v21);
  return 0;
};

// Line 466: range 00000000143C98BE-00000000143C9D20
int32_t __cdecl RogueDiaryRuntimeMgr::initRogueDiaryAvatarData(RogueDiaryRuntimeMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  const unsigned __int64 *v4; // r8
  uint32_t *p_trial_config_id; // rax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,long unsigned int>,false,false>,bool> v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  PlayerAvatarComp *AvatarComp; // rcx
  const unsigned __int64 *v10; // r8
  common::milog::MiLogStream *v11; // rax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,long unsigned int>,false,false>,bool> v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::unordered_map<long unsigned int,RogueDiaryAvatarData>::iterator __for_begin; // [rsp+10h] [rbp-B0h] BYREF
  std::unordered_map<long unsigned int,RogueDiaryAvatarData>::iterator __for_end; // [rsp+18h] [rbp-A8h] BYREF
  std::unordered_map<long unsigned int,RogueDiaryAvatarData> *__for_range; // [rsp+20h] [rbp-A0h]
  const std::pair<long unsigned int const,RogueDiaryAvatarData> *v17; // [rsp+28h] [rbp-98h]
  std::tuple_element<0,const std::pair<long unsigned int const,RogueDiaryAvatarData> >::type *guid; // [rsp+30h] [rbp-90h]
  std::tuple_element<1,const std::pair<long unsigned int const,RogueDiaryAvatarData> >::type *data; // [rsp+38h] [rbp-88h]
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-80h] BYREF
  char v21[96]; // [rsp+60h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 13 avatar_id:481";
  *(_QWORD *)(v1 + 16) = RogueDiaryRuntimeMgr::initRogueDiaryAvatarData;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  std::unordered_map<unsigned int,unsigned long>::clear(&this->trial_id_to_guid_map_);
  std::unordered_map<unsigned int,unsigned long>::clear(&this->formal_id_to_guid_map_);
  __for_range = &this->guid_avatar_data_map_;
  __for_begin._M_cur = std::unordered_map<unsigned long,RogueDiaryAvatarData>::begin(&this->guid_avatar_data_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned long,RogueDiaryAvatarData>::end(&this->guid_avatar_data_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned long const,RogueDiaryAvatarData>,false>(&__for_begin, &__for_end) )
  {
    v17 = std::__detail::_Node_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator*(&__for_begin);
    guid = std::get<0ul,unsigned long const,RogueDiaryAvatarData>(v17);
    data = (std::tuple_element<1,const std::pair<long unsigned int const,RogueDiaryAvatarData> >::type *)std::get<1ul,unsigned long const,RogueDiaryAvatarData>(v17);
    p_trial_config_id = &data->trial_config_id;
    if ( *(_BYTE *)(((unsigned __int64)p_trial_config_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_trial_config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_trial_config_id >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(p_trial_config_id);
    }
    if ( data->trial_config_id )
    {
      v6 = std::unordered_map<unsigned int,unsigned long>::emplace<unsigned int const&,unsigned long const&>(
             &this->trial_id_to_guid_map_,
             &data->trial_config_id,
             guid,
             (const unsigned int *)&this->trial_id_to_guid_map_,
             v4);
      if ( !v6.second )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "initRogueDiaryAvatarData",
          475);
        v7 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
               &v20,
               (const char (*)[46])"[RogueDiary] duplicate trial trial_config_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &data->trial_config_id);
        common::milog::MiLogStream::~MiLogStream(&v20);
        result = -1;
        goto LABEL_21;
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      AvatarComp = Player::getAvatarComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)guid >> 3) + 0x7FFF8000) )
        __asan_report_load8(guid);
      *(_DWORD *)(v1 + 32) = PlayerAvatarComp::getAvatarProfilePicFromAvatarOrSnapshot(AvatarComp, *guid).first;
      if ( !*(_DWORD *)(v1 + 32) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "initRogueDiaryAvatarData",
          484);
        v11 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
                &v20,
                (const char (*)[67])"[RogueDiary] getAvatarProfilePicFromAvatarOrSnapshot failed, guid:");
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v11, guid);
        common::milog::MiLogStream::~MiLogStream(&v20);
        result = -1;
        goto LABEL_21;
      }
      v12 = std::unordered_map<unsigned int,unsigned long>::emplace<unsigned int &,unsigned long const&>(
              &this->formal_id_to_guid_map_,
              (unsigned int *)(v1 + 32),
              guid,
              (unsigned int *)&this->formal_id_to_guid_map_,
              v10);
      if ( !v12.second )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "initRogueDiaryAvatarData",
          489);
        v13 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v20,
                (const char (*)[34])"[RogueDiary] duplicate avatar_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v1 + 32));
        common::milog::MiLogStream::~MiLogStream(&v20);
        result = -1;
        goto LABEL_21;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator++(&__for_begin);
  }
  result = 0;
LABEL_21:
  if ( v21 == (char *)v1 )
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

// Line 498: range 00000000143C9D22-00000000143CA7DF
int32_t __cdecl RogueDiaryRuntimeMgr::resumeCurRoomAndGroupIndex(RogueDiaryRuntimeMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  ActivityRogueDiaryExcelConfigMgr *p_activity_rogue_diary_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  std::vector<data::RogueDiaryRoundExcelConfig>::size_type cur_round; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  const std::vector<data::RogueDiaryRoundExcelConfig> *p_round_list; // rcx
  std::vector<data::RogueDiaryRoundExcelConfig>::const_reference v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > > *p_dungeon_round_room_count_map; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::key_type *p_x; // rsi
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  uint32_t v23; // ecx
  char v24; // dl
  __int64 v25; // rdx
  std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,false,true>::pointer v26; // rdx
  unsigned int *p_second; // rax
  unsigned int second; // ecx
  unsigned __int64 v29; // r13
  __int64 v30; // rsi
  common::milog::MiLogStream *v31; // r13
  uint32_t cur_round_room_count; // [rsp+1Ch] [rbp-D4h]
  const data::RogueDiaryDungeonExcelConfig *config_ptr; // [rsp+20h] [rbp-D0h]
  std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::key_type __x; // [rsp+28h] [rbp-C8h] BYREF
  std::shared_ptr<Config> v35; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v36; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v37; // [rsp+60h] [rbp-90h] BYREF
  char v38[112]; // [rsp+80h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 14 count_iter:530";
  *(_QWORD *)(v1 + 16) = RogueDiaryRuntimeMgr::resumeCurRoomAndGroupIndex;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v35);
  p_activity_rogue_diary_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35)->design_config.txt_config_mgr.activity_rogue_diary_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->dungeon_id_);
  }
  config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryDungeonExcelConfig(
                 p_activity_rogue_diary_config_mgr,
                 this->dungeon_id_);
  std::shared_ptr<Config>::~shared_ptr(&v35);
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->cur_round_);
    }
    if ( this->cur_round_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->cur_round_);
      }
      cur_round = this->cur_round_;
      if ( cur_round <= std::vector<data::RogueDiaryRoundExcelConfig>::size(&config_ptr->round_list) )
      {
        p_round_list = &config_ptr->round_list;
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->cur_round_);
        }
        v12 = std::vector<data::RogueDiaryRoundExcelConfig>::operator[](p_round_list, this->cur_round_ - 1);
        if ( *(_BYTE *)(((unsigned __int64)&v12->room_count >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v12->room_count >> 3) + 0x7FFF8000) <= 3 )
        {
          v12 = (std::vector<data::RogueDiaryRoundExcelConfig>::const_reference)__asan_report_load4(&v12->room_count);
        }
        cur_round_room_count = v12->room_count;
        if ( cur_round_room_count )
        {
          std::vector<unsigned int>::operator=(&this->group_vec_, &config_ptr->group_list);
          if ( std::vector<unsigned int>::empty(&this->group_vec_) )
          {
            common::milog::MiLogStream::create(
              &v37,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
              "resumeCurRoomAndGroupIndex",
              527);
            v16 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                    &v37,
                    (const char (*)[43])"[RogueDiary] group_list empty, dungeon_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->dungeon_id_);
            common::milog::MiLogStream::~MiLogStream(&v37);
            result = -1;
          }
          else
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v35);
            p_dungeon_round_room_count_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35)->design_config.txt_config_mgr.activity_rogue_diary_config_mgr.dungeon_round_room_count_map;
            __x = std::make_pair<unsigned int &,unsigned int &>(&this->dungeon_id_, &this->cur_round_);
            *(std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::const_iterator *)(v1 + 32) = std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::find(p_dungeon_round_room_count_map, &__x);
            std::shared_ptr<Config>::~shared_ptr(&v35);
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v35);
            v18 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35);
            __x = (std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::key_type)std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::end(&v18->design_config.txt_config_mgr.activity_rogue_diary_config_mgr.dungeon_round_room_count_map)._M_cur;
            p_x = &__x;
            LOBYTE(p_dungeon_round_room_count_map) = std::__detail::operator==<std::pair<std::pair const<unsigned int,unsigned int>,unsigned int>,true>(
                                                       (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,true> *)(v1 + 32),
                                                       (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,true> *)&__x);
            std::shared_ptr<Config>::~shared_ptr(&v35);
            if ( (_BYTE)p_dungeon_round_room_count_map )
            {
              common::milog::MiLogStream::create(
                &v37,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
                "resumeCurRoomAndGroupIndex",
                533);
              v20 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                      &v37,
                      (const char (*)[57])"[RogueDiary] find round start group failed, round_index:");
              v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->cur_round_);
              v22 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v21,
                      (const char (*)[14])", dungeon_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &this->dungeon_id_);
              common::milog::MiLogStream::~MiLogStream(&v37);
              result = -1;
            }
            else
            {
              if ( *(char *)(((unsigned __int64)&this->is_round_fight_finished_ >> 3) + 0x7FFF8000) < 0 )
                __asan_report_load1(&this->is_round_fight_finished_);
              if ( this->is_round_fight_finished_ )
                v23 = cur_round_room_count;
              else
                v23 = 1;
              v24 = *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000);
              LOBYTE(p_x) = v24 != 0;
              v25 = (v24 != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= v24);
              if ( (_BYTE)v25 )
                __asan_report_store4(&this->cur_room_, p_x, v25);
              this->cur_room_ = v23;
              v26 = std::__detail::_Node_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,unsigned int>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,false,true> *const)(v1 + 32));
              p_second = &v26->second;
              if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_load4(p_second);
              }
              second = v26->second;
              if ( *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4(&this->cur_room_);
              }
              v29 = second + this->cur_room_ - 1;
              v30 = (unsigned int)(v29 % std::vector<unsigned int>::size(&this->group_vec_));
              if ( *(_BYTE *)(((unsigned __int64)&this->group_index_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->group_index_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_store4(&this->group_index_, v30, &this->group_index_);
              }
              this->group_index_ = v30;
              common::milog::MiLogStream::create(
                &v36,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
                "resumeCurRoomAndGroupIndex",
                538);
              v31 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                      &v36,
                      (const char (*)[49])"[RogueDiary] resumeCurRoomAndGroupIndex finish, ");
              RogueDiaryRuntimeMgr::getDesc[abi:cxx11]((std::string *)&v37, this);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v31, (const std::string *)&v37);
              std::string::~string(&v37);
              common::milog::MiLogStream::~MiLogStream(&v36);
              result = 0;
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v37,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
            "resumeCurRoomAndGroupIndex",
            519);
          v13 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  &v37,
                  (const char (*)[47])"[RogueDiary] invalid round index, round_index:");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->cur_round_);
          v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v14,
                  (const char (*)[14])", dungeon_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->dungeon_id_);
          common::milog::MiLogStream::~MiLogStream(&v37);
          result = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v37,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "resumeCurRoomAndGroupIndex",
          512);
        v8 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
               &v37,
               (const char (*)[47])"[RogueDiary] invalid round index, round_index:");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->cur_round_);
        v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])", dungeon_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->dungeon_id_);
        common::milog::MiLogStream::~MiLogStream(&v37);
        result = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "resumeCurRoomAndGroupIndex",
        507);
      common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
        &v37,
        (const char (*)[66])"[RogueDiary] player may fail last transfer to rogue diary dungeon");
      common::milog::MiLogStream::~MiLogStream(&v37);
      result = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "resumeCurRoomAndGroupIndex",
      502);
    v5 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
           &v37,
           (const char (*)[66])"[RogueDiary] findRogueDiaryDungeonExcelConfig failed, dungeon_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->dungeon_id_);
    common::milog::MiLogStream::~MiLogStream(&v37);
    result = -1;
  }
  if ( v38 == (char *)v1 )
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

// Line 543: range 00000000143CA7E0-00000000143CA8CB
void __cdecl RogueDiaryRuntimeMgr::clearRoomRuntimeData(RogueDiaryRuntimeMgr *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(char *)(((unsigned __int64)&this->is_room_fighting_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_room_fighting_, v1, &this->is_room_fighting_);
  this->is_room_fighting_ = 0;
  v2 = ((_BYTE)this + 57) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_select_room_hard_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_select_room_hard_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_select_room_hard_, v2, v3);
  this->is_select_room_hard_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->room_start_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->room_start_time_, v2);
  this->room_start_time_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->room_end_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->room_end_time_, v2);
  this->room_end_time_ = 0LL;
};

// Line 551: range 00000000143CA8CC-00000000143CAE73
void __cdecl RogueDiaryRuntimeMgr::calcRoomRuntimeDataToRoundRuntimeData(RogueDiaryRuntimeMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  Scene *v7; // rax
  uint64_t SceneTimeMs; // rax
  uint64_t room_end_time; // rcx
  uint64_t v10; // rax
  float v11; // xmm0_4
  int v12; // eax
  uint32_t cur_round_coin; // ecx
  uint32_t v14; // ecx
  uint32_t cost_time; // [rsp+14h] [rbp-9Ch]
  const data::RogueDiaryRoomExcelConfig *room_config_ptr; // [rsp+18h] [rbp-98h]
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-90h] BYREF
  char v18[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 scene_ptr:552";
  *(_QWORD *)(v1 + 16) = RogueDiaryRuntimeMgr::calcRoomRuntimeDataToRoundRuntimeData;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v1 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "calcRoomRuntimeDataToRoundRuntimeData",
      555);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      &v17,
      (const char (*)[33])"[RogueDiary] getCurScene nullptr");
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
  else
  {
    room_config_ptr = RogueDiaryRuntimeMgr::getCurRoomConfig(this);
    if ( room_config_ptr )
    {
      v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      SceneTimeMs = Scene::getSceneTimeMs(v7);
      if ( *(_BYTE *)(((unsigned __int64)&this->room_end_time_ >> 3) + 0x7FFF8000) )
        SceneTimeMs = __asan_report_store8(&this->room_end_time_, v1 + 32);
      this->room_end_time_ = SceneTimeMs;
      room_end_time = this->room_end_time_;
      if ( *(_BYTE *)(((unsigned __int64)&this->room_start_time_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->room_start_time_);
      if ( room_end_time <= this->room_start_time_ )
      {
        v12 = 0;
      }
      else
      {
        v10 = this->room_end_time_ - this->room_start_time_;
        if ( (v10 & 0x8000000000000000LL) != 0LL )
          v11 = (float)(int)(v10 & 1 | (v10 >> 1)) + (float)(int)(v10 & 1 | (v10 >> 1));
        else
          v11 = (float)(int)v10;
        v12 = (int)std::ceil(v11 / 1000.0);
      }
      cost_time = v12;
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_time_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_time_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->cur_round_time_);
      }
      this->cur_round_time_ += cost_time;
      if ( *(_BYTE *)(((unsigned __int64)&this->is_select_room_hard_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 57) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_select_room_hard_ >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_select_room_hard_);
      }
      if ( this->is_select_room_hard_ )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_coin_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->cur_round_coin_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->cur_round_coin_);
        }
        cur_round_coin = this->cur_round_coin_;
        if ( *(_BYTE *)(((unsigned __int64)&room_config_ptr->coin_reward_hard >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)room_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&room_config_ptr->coin_reward_hard >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(&room_config_ptr->coin_reward_hard);
        }
        this->cur_round_coin_ = cur_round_coin + room_config_ptr->coin_reward_hard;
        RogueDiaryRuntimeMgr::notifyCoinAdd(this, room_config_ptr->coin_reward_hard);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_coin_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->cur_round_coin_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->cur_round_coin_);
        }
        v14 = this->cur_round_coin_;
        if ( *(_BYTE *)(((unsigned __int64)&room_config_ptr->coin_reward_normal >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&room_config_ptr->coin_reward_normal >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&room_config_ptr->coin_reward_normal);
        }
        this->cur_round_coin_ = v14 + room_config_ptr->coin_reward_normal;
        RogueDiaryRuntimeMgr::notifyCoinAdd(this, room_config_ptr->coin_reward_normal);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "calcRoomRuntimeDataToRoundRuntimeData",
        561);
      v4 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
             &v17,
             (const char (*)[50])"[RogueDiary] getCurRoomConfig nullptr, cur_round:");
      v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->cur_round_);
      v6 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v5, (const char (*)[12])", cur_room:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->cur_room_);
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  if ( v18 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 581: range 00000000143CAE74-00000000143CB18A
void __cdecl RogueDiaryRuntimeMgr::onRoundFightFinish(RogueDiaryRuntimeMgr *const this)
{
  __int64 v1; // rsi
  uint32_t coin; // ecx
  uint32_t time; // ecx
  uint32_t *p_round; // rax
  std::unordered_map<long unsigned int,RogueDiaryAvatarData>::iterator __for_begin; // [rsp+10h] [rbp-60h] BYREF
  std::unordered_map<long unsigned int,RogueDiaryAvatarData>::iterator __for_end; // [rsp+18h] [rbp-58h] BYREF
  std::unordered_map<long unsigned int,RogueDiaryAvatarData> *__for_range; // [rsp+20h] [rbp-50h]
  std::pair<long unsigned int const,RogueDiaryAvatarData> *__in; // [rsp+28h] [rbp-48h]
  std::tuple_element<0,std::pair<long unsigned int const,RogueDiaryAvatarData> >::type *guid; // [rsp+30h] [rbp-40h]
  std::tuple_element<1,std::pair<long unsigned int const,RogueDiaryAvatarData> >::type *data; // [rsp+38h] [rbp-38h]
  std::vector<unsigned int> p_buy_card_vec; // [rsp+40h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_round_fight_finished_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_round_fight_finished_, v1, &this->is_round_fight_finished_);
  this->is_round_fight_finished_ = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->coin_);
  }
  coin = this->coin_;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_coin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_round_coin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_round_coin_);
  }
  this->coin_ = coin + this->cur_round_coin_;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->time_);
  }
  time = this->time_;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_round_time_);
  }
  this->time_ = time + this->cur_round_time_;
  memset(&p_buy_card_vec, 0, sizeof(p_buy_card_vec));
  std::vector<unsigned int>::vector(&p_buy_card_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_coin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_round_coin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_round_coin_);
  }
  RogueDiaryRuntimeMgr::logCoinChange(this, 0, this->cur_round_coin_, &p_buy_card_vec);
  std::vector<unsigned int>::~vector(&p_buy_card_vec);
  __for_range = &this->guid_avatar_data_map_;
  __for_begin._M_cur = std::unordered_map<unsigned long,RogueDiaryAvatarData>::begin(&this->guid_avatar_data_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned long,RogueDiaryAvatarData>::end(&this->guid_avatar_data_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned long const,RogueDiaryAvatarData>,false>(&__for_begin, &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator*(&__for_begin);
    guid = std::get<0ul,unsigned long const,RogueDiaryAvatarData>(__in);
    data = std::get<1ul,unsigned long const,RogueDiaryAvatarData>(__in);
    p_round = &data->round;
    if ( *(_BYTE *)(((unsigned __int64)p_round >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_round & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_round >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_round);
    }
    if ( data->round )
      --data->round;
    std::__detail::_Node_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator++(&__for_begin);
  }
  RogueDiaryRuntimeMgr::saveOnstageAvatarState(this);
  RogueDiaryRuntimeMgr::clearRoundRuntimeData(this);
};

// Line 603: range 00000000143CB18C-00000000143CB228
void __cdecl RogueDiaryRuntimeMgr::clearRoundRuntimeData(RogueDiaryRuntimeMgr *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_coin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_round_coin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_round_coin_, v1, &this->cur_round_coin_);
  }
  this->cur_round_coin_ = 0;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->cur_round_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->cur_round_time_, (((_BYTE)this - 52) & 7u) + 3, v2);
  this->cur_round_time_ = 0;
};

// Line 609: range 00000000143CB22A-00000000143CBD43
__int64 __fastcall RogueDiaryRuntimeMgr::finishSingleRoom(
        RogueDiaryRuntimeMgr *const this,
        uint32_t group_id,
        bool is_fail)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  __int64 result; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r12
  bool isCurRoomRoundFinalRoom; // al
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r12
  bool isCurRoomDungeonFinalRoom; // al
  PlayerWatcherComp *WatcherComp; // rdi
  uint32_t time; // ecx
  uint32_t cur_difficulty; // edx
  PlayerWatcherComp *v38; // r12
  uint32_t cur_round; // r14d
  uint32_t v40; // esi
  uint32_t v41; // edx
  common::milog::MiLogStream v44; // [rsp+10h] [rbp-90h] BYREF
  char v45[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 12 group_id:608";
  *(_QWORD *)(v3 + 16) = RogueDiaryRuntimeMgr::finishSingleRoom;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = group_id;
  if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_running_);
  if ( !this->is_running_ )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "finishSingleRoom",
      613);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v44,
      (const char (*)[28])"[RogueDiary] is not running");
    common::milog::MiLogStream::~MiLogStream(&v44);
    result = 0xFFFFFFFFLL;
  }
  else if ( !RogueDiaryRuntimeMgr::isCurRoomGroup(this, *(_DWORD *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "finishSingleRoom",
      618);
    v7 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v44,
           (const char (*)[45])"[RogueDiary] is not current group, group_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v8, (const char (*)[15])", group_index:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->group_index_);
    v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])", group_vec:");
    common::milog::MiLogStream::operator<<<unsigned int>(v11, &this->group_vec_);
    common::milog::MiLogStream::~MiLogStream(&v44);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_room_fighting_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_room_fighting_);
    if ( !this->is_room_fighting_ )
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "finishSingleRoom",
        623);
      v12 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v44,
              (const char (*)[44])"[RogueDiary] room is not started, group_id:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
      v14 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v13, (const char (*)[15])", round_index:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->cur_round_);
      v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v15, (const char (*)[14])", room_index:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->cur_room_);
      common::milog::MiLogStream::~MiLogStream(&v44);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_round_fight_finished_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_round_fight_finished_);
      if ( this->is_round_fight_finished_ )
      {
        common::milog::MiLogStream::create(
          &v44,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "finishSingleRoom",
          628);
        v17 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v44,
                (const char (*)[42])"[RogueDiary] round is finished, group_id:");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v3 + 32));
        v19 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v18, (const char (*)[15])", round_index:");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &this->cur_round_);
        v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v20, (const char (*)[14])", room_index:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &this->cur_room_);
        common::milog::MiLogStream::~MiLogStream(&v44);
        result = 0xFFFFFFFFLL;
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&this->is_settle_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&this->is_settle_);
        if ( this->is_settle_ )
          goto LABEL_24;
        if ( *(_BYTE *)(((unsigned __int64)&this->is_interrupt_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this - 47) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_interrupt_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&this->is_interrupt_);
        }
        if ( this->is_interrupt_ )
        {
LABEL_24:
          common::milog::MiLogStream::create(
            &v44,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
            "finishSingleRoom",
            633);
          common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            &v44,
            (const char (*)[44])"[RogueDiary] dungeon is settle or interrupt");
          common::milog::MiLogStream::~MiLogStream(&v44);
          result = 0xFFFFFFFFLL;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v44,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
            "finishSingleRoom",
            636);
          v22 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                  &v44,
                  (const char (*)[41])"[RogueDiary] finishSingleRoom, group_id:");
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v22,
                  (const unsigned int *)(v3 + 32));
          v24 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v23, (const char (*)[11])", is_fail:");
          v25 = common::milog::MiLogStream::operator<<(v24, is_fail);
          v26 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v25,
                  (const char (*)[15])", round_index:");
          v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &this->cur_round_);
          v28 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v27,
                  (const char (*)[14])", room_index:");
          v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &this->cur_room_);
          v30 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  v29,
                  (const char (*)[18])", is_round_final:");
          isCurRoomRoundFinalRoom = RogueDiaryRuntimeMgr::isCurRoomRoundFinalRoom(this);
          v32 = common::milog::MiLogStream::operator<<(v30, isCurRoomRoundFinalRoom);
          v33 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v32, (const char (*)[12])", is_final:");
          isCurRoomDungeonFinalRoom = RogueDiaryRuntimeMgr::isCurRoomDungeonFinalRoom(this);
          common::milog::MiLogStream::operator<<(v33, isCurRoomDungeonFinalRoom);
          common::milog::MiLogStream::~MiLogStream(&v44);
          if ( is_fail )
          {
            RogueDiaryRuntimeMgr::logRoomSettle(this, 2u);
            RogueDiaryRuntimeMgr::clearRoomRuntimeData(this);
            RogueDiaryRuntimeMgr::triggerGroupEvent(this, EVENT_ROGUE_CREAGE_FIGHT_GADGET, 0);
            result = 0LL;
          }
          else
          {
            RogueDiaryRuntimeMgr::logRoomSettle(this, 0);
            RogueDiaryRuntimeMgr::calcRoomRuntimeDataToRoundRuntimeData(this);
            RogueDiaryRuntimeMgr::clearRoomRuntimeData(this);
            if ( RogueDiaryRuntimeMgr::isCurRoomStageFinalRoom(this) )
            {
              RogueDiaryRuntimeMgr::onRoundFightFinish(this);
              if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                __asan_report_load8(this);
              WatcherComp = Player::getWatcherComp(this->player_);
              if ( *(_BYTE *)(((unsigned __int64)&this->time_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time_ >> 3) + 0x7FFF8000) )
              {
                WatcherComp = (PlayerWatcherComp *)&this->time_;
                __asan_report_load4(&this->time_);
              }
              time = this->time_;
              if ( *(_BYTE *)(((unsigned __int64)&this->cur_difficulty_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->cur_difficulty_ >> 3) + 0x7FFF8000) <= 3 )
              {
                WatcherComp = (PlayerWatcherComp *)&this->cur_difficulty_;
                __asan_report_load4(&this->cur_difficulty_);
              }
              cur_difficulty = this->cur_difficulty_;
              if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) <= 3 )
              {
                WatcherComp = (PlayerWatcherComp *)&this->stage_id_;
                __asan_report_load4(&this->stage_id_);
              }
              PlayerWatcherComp::triggerRogueDiaryFinishStage(WatcherComp, this->stage_id_, cur_difficulty, time);
              RogueDiaryRuntimeMgr::settle(this, 1);
            }
            else if ( RogueDiaryRuntimeMgr::isCurRoomRoundFinalRoom(this) )
            {
              RogueDiaryRuntimeMgr::onRoundFightFinish(this);
              if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                __asan_report_load8(this);
              v38 = Player::getWatcherComp(this->player_);
              if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4(&this->cur_round_);
              }
              cur_round = this->cur_round_;
              v40 = cur_round + RogueDiaryRuntimeMgr::getCurRoundCountCorrection(this);
              if ( *(_BYTE *)(((unsigned __int64)&this->cur_difficulty_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->cur_difficulty_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->cur_difficulty_);
              }
              v41 = this->cur_difficulty_;
              if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->stage_id_);
              }
              PlayerWatcherComp::triggerRogueDiaryFinishStageRound(v38, this->stage_id_, v41, v40);
              RogueDiaryRuntimeMgr::triggerGroupEvent(this, EVENT_ROGUE_CREAGE_REPAIR_GADGET, 0);
              RogueDiaryRuntimeMgr::notifyDungeonInfo(this);
            }
            else
            {
              RogueDiaryRuntimeMgr::triggerGroupEvent(this, EVENT_ROGUE_OPEN_ACCESS, 0);
              RogueDiaryRuntimeMgr::updateRoundRoomByStep(this);
              RogueDiaryRuntimeMgr::triggerGroupEvent(this, EVENT_ROGUE_CREAGE_FIGHT_GADGET, 0);
              RogueDiaryRuntimeMgr::notifyDungeonInfo(this);
            }
            result = 0LL;
          }
        }
      }
    }
  }
  if ( v45 == (char *)v3 )
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

// Line 682: range 00000000143CBD44-00000000143CC4B5
int32_t __cdecl RogueDiaryRuntimeMgr::startSingleRoom(RogueDiaryRuntimeMgr *const this, bool is_select_hard)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdx
  Scene *v18; // rax
  uint64_t SceneTimeMs; // rax
  common::milog::MiLogStream *v20; // rcx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  int32_t result; // eax
  common::milog::MiLogStream v27; // [rsp+10h] [rbp-90h] BYREF
  char v28[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 scene_ptr:683";
  *(_QWORD *)(v2 + 16) = RogueDiaryRuntimeMgr::startSingleRoom;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "startSingleRoom",
      686);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      &v27,
      (const char (*)[33])"[RogueDiary] getCurScene nullptr");
    common::milog::MiLogStream::~MiLogStream(&v27);
    v5 = -1;
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_running_);
    if ( !this->is_running_ )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "startSingleRoom",
        691);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        &v27,
        (const char (*)[28])"[RogueDiary] is not running");
      common::milog::MiLogStream::~MiLogStream(&v27);
      v5 = -1;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_room_fighting_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_room_fighting_);
      if ( this->is_room_fighting_ )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "startSingleRoom",
          696);
        v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
               &v27,
               (const char (*)[43])"[RogueDiary] room is started, round_index:");
        v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->cur_round_);
        v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])", room_index:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->cur_room_);
        common::milog::MiLogStream::~MiLogStream(&v27);
        v5 = -1;
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&this->is_round_fight_finished_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&this->is_round_fight_finished_);
        if ( this->is_round_fight_finished_ )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
            "startSingleRoom",
            701);
          v9 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                 &v27,
                 (const char (*)[47])"[RogueDiary] cur round is finished, cur_round:");
          v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->cur_round_);
          v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])", cur_room:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->cur_room_);
          common::milog::MiLogStream::~MiLogStream(&v27);
          v5 = -1;
        }
        else if ( !RogueDiaryRuntimeMgr::isCurRoomCanSelectHard(this) && is_select_hard )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
            "startSingleRoom",
            706);
          v13 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                  &v27,
                  (const char (*)[53])"[RogueDiary] cur room cannot select hard, cur_round:");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->cur_round_);
          v15 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])", cur_room:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->cur_room_);
          common::milog::MiLogStream::~MiLogStream(&v27);
          v5 = -1;
        }
        else
        {
          if ( *(char *)(((unsigned __int64)&this->is_room_fighting_ >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(&this->is_room_fighting_, v2 + 32, &this->is_room_fighting_);
          this->is_room_fighting_ = 1;
          v16 = ((_BYTE)this + 57) & 7;
          v17 = (*(_BYTE *)(((unsigned __int64)&this->is_select_room_hard_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v16 >= *(_BYTE *)(((unsigned __int64)&this->is_select_room_hard_ >> 3) + 0x7FFF8000));
          if ( (_BYTE)v17 )
            __asan_report_store1(&this->is_select_room_hard_, v16, v17);
          this->is_select_room_hard_ = is_select_hard;
          v18 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          SceneTimeMs = Scene::getSceneTimeMs(v18);
          if ( *(_BYTE *)(((unsigned __int64)&this->room_start_time_ >> 3) + 0x7FFF8000) )
            SceneTimeMs = __asan_report_store8(&this->room_start_time_, v16);
          this->room_start_time_ = SceneTimeMs;
          RogueDiaryRuntimeMgr::triggerGroupEvent(this, EVENT_ROGUE_START_FIGHT, 0);
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
            "startSingleRoom",
            718);
          v20 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                  &v27,
                  (const char (*)[44])"[RogueDiary] startSingleRoom succ, is_hard:");
          if ( *(_BYTE *)(((unsigned __int64)&this->is_select_room_hard_ >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)this + 57) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_select_room_hard_ >> 3)
                                                              + 0x7FFF8000) )
          {
            __asan_report_load1(&this->is_select_room_hard_);
          }
          v21 = common::milog::MiLogStream::operator<<(v20, this->is_select_room_hard_);
          v22 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v21,
                  (const char (*)[15])", round_index:");
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &this->cur_round_);
          v24 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v23,
                  (const char (*)[14])", room_index:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &this->cur_room_);
          common::milog::MiLogStream::~MiLogStream(&v27);
          v5 = 0;
        }
      }
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  result = v5;
  if ( v28 == (char *)v2 )
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

// Line 723: range 00000000143CC4B6-00000000143CC96C
int32_t __cdecl RogueDiaryRuntimeMgr::finishRepairByGm(RogueDiaryRuntimeMgr *const this)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream v16; // [rsp+10h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_running_);
  if ( !this->is_running_ )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "finishRepairByGm",
      726);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v16,
      (const char (*)[28])"[RogueDiary] is not running");
    common::milog::MiLogStream::~MiLogStream(&v16);
    return -1;
  }
  else if ( !RogueDiaryRuntimeMgr::isCurRoomRoundFinalRoom(this) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "finishRepairByGm",
      731);
    v2 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v16,
           (const char (*)[46])"[RogueDiary] cur room need repair, cur_round:");
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->cur_round_);
    v4 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v3, (const char (*)[12])", cur_room:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->cur_room_);
    common::milog::MiLogStream::~MiLogStream(&v16);
    return -1;
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_round_fight_finished_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_round_fight_finished_);
    if ( !this->is_round_fight_finished_ )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "finishRepairByGm",
        737);
      v5 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v16,
             (const char (*)[47])"[RogueDiary] cur round need finish, cur_round:");
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->cur_round_);
      v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])", cur_room:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->cur_room_);
      common::milog::MiLogStream::~MiLogStream(&v16);
      return -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->is_round_repair_finished_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 15) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_round_repair_finished_ >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_round_repair_finished_);
      }
      if ( this->is_round_repair_finished_ )
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "finishRepairByGm",
          742);
        v8 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
               &v16,
               (const char (*)[52])"[RogueDiary] cur round is finish repair, cur_round:");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->cur_round_);
        v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])", cur_room:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->cur_room_);
        common::milog::MiLogStream::~MiLogStream(&v16);
        return -1;
      }
      else
      {
        RogueDiaryRuntimeMgr::triggerGroupEvent(this, EVENT_ROGUE_OPEN_ACCESS, 0);
        RogueDiaryRuntimeMgr::updateRoundRoomByStep(this);
        RogueDiaryRuntimeMgr::triggerGroupEvent(this, EVENT_ROGUE_CREAGE_FIGHT_GADGET, 0);
        RogueDiaryRuntimeMgr::notifyDungeonInfo(this);
        v11 = ((_BYTE)this - 15) & 7;
        v12 = (*(_BYTE *)(((unsigned __int64)&this->is_round_repair_finished_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->is_round_repair_finished_ >> 3) + 0x7FFF8000));
        if ( (_BYTE)v12 )
          __asan_report_store1(&this->is_round_repair_finished_, v11, v12);
        this->is_round_repair_finished_ = 1;
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "finishRepairByGm",
          752);
        v13 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v16,
                (const char (*)[49])"[RogueDiary] finishRepairByGm succ, round_index:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->cur_round_);
        v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v14, (const char (*)[14])", room_index:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->cur_room_);
        common::milog::MiLogStream::~MiLogStream(&v16);
        return 0;
      }
    }
  }
};

// Line 757: range 00000000143CC96E-00000000143CCA44
int32_t __cdecl RogueDiaryRuntimeMgr::startNextFightByGm(RogueDiaryRuntimeMgr *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_running_);
  if ( this->is_running_ )
    return RogueDiaryRuntimeMgr::startSingleRoom(this, 0);
  common::milog::MiLogStream::create(
    &v2,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
    "startNextFightByGm",
    760);
  common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
    &v2,
    (const char (*)[28])"[RogueDiary] is not running");
  common::milog::MiLogStream::~MiLogStream(&v2);
  return -1;
};

// Line 767: range 00000000143CCA46-00000000143CCAEA
bool __cdecl RogueDiaryRuntimeMgr::isCurRoomGroup(const RogueDiaryRuntimeMgr *const this, uint32_t group_id)
{
  uint32_t cur_group_id; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  cur_group_id = RogueDiaryRuntimeMgr::getCurRoomGroupId(this);
  if ( cur_group_id )
    return group_id == cur_group_id;
  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
    "isCurRoomGroup",
    771);
  common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
    &v4,
    (const char (*)[33])"[RogueDiary] getCurRoomGroupId 0");
  common::milog::MiLogStream::~MiLogStream(&v4);
  return 0;
};

// Line 778: range 00000000143CCAEC-00000000143CCC49
int32_t __cdecl RogueDiaryRuntimeMgr::getNextRoundRoomIndex(
        const RogueDiaryRuntimeMgr *const this,
        std::pair<unsigned int,unsigned int> *index_pair)
{
  const ActivityRogueDiaryExcelConfigMgr *p_activity_rogue_diary_config_mgr; // rdi
  uint32_t cur_room; // ecx
  uint32_t cur_round; // esi
  int32_t RogueDungeonNextRoundAndRoom; // ebx
  std::shared_ptr<Config> v9[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v9);
  p_activity_rogue_diary_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v9)->design_config.txt_config_mgr.activity_rogue_diary_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) )
  {
    p_activity_rogue_diary_config_mgr = (const ActivityRogueDiaryExcelConfigMgr *)&this->cur_room_;
    __asan_report_load4(&this->cur_room_);
  }
  cur_room = this->cur_room_;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) )
  {
    p_activity_rogue_diary_config_mgr = (const ActivityRogueDiaryExcelConfigMgr *)&this->cur_round_;
    __asan_report_load4(&this->cur_round_);
  }
  cur_round = this->cur_round_;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    p_activity_rogue_diary_config_mgr = (const ActivityRogueDiaryExcelConfigMgr *)&this->dungeon_id_;
    __asan_report_load4(&this->dungeon_id_);
  }
  RogueDungeonNextRoundAndRoom = ActivityRogueDiaryExcelConfigMgr::getRogueDungeonNextRoundAndRoom(
                                   p_activity_rogue_diary_config_mgr,
                                   this->dungeon_id_,
                                   cur_round,
                                   cur_room,
                                   index_pair);
  std::shared_ptr<Config>::~shared_ptr(v9);
  return RogueDungeonNextRoundAndRoom;
};

// Line 783: range 00000000143CCC4A-00000000143CCE76
uint32_t __cdecl RogueDiaryRuntimeMgr::getCurRoomGroupId(const RogueDiaryRuntimeMgr *const this)
{
  std::vector<unsigned int>::size_type group_index; // rbx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  std::vector<unsigned int> *p_group_vec; // rcx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v7; // rax
  uint32_t *v8; // rdx
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-30h] BYREF

  if ( std::vector<unsigned int>::empty(&this->group_vec_) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "getCurRoomGroupId",
      786);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v9,
      (const char (*)[29])"[RogueDiary] group_vec empty");
    common::milog::MiLogStream::~MiLogStream(&v9);
    return 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->group_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->group_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->group_index_);
    }
    group_index = this->group_index_;
    if ( group_index < std::vector<unsigned int>::size(&this->group_vec_) )
    {
      p_group_vec = &this->group_vec_;
      if ( *(_BYTE *)(((unsigned __int64)&this->group_index_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->group_index_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->group_index_);
      }
      v7 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                 p_group_vec,
                                                                                                 this->group_index_);
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      return *v8;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "getCurRoomGroupId",
        791);
      v3 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
             &v9,
             (const char (*)[44])"[RogueDiary] group index error group_index:");
      v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->group_index_);
      v5 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v4, (const char (*)[13])", group_vec:");
      common::milog::MiLogStream::operator<<<unsigned int>(v5, &this->group_vec_);
      common::milog::MiLogStream::~MiLogStream(&v9);
      return 0;
    }
  }
};

// Line 798: range 00000000143CCE78-00000000143CD28F
uint32_t __cdecl RogueDiaryRuntimeMgr::getNextRoomGroupId(const RogueDiaryRuntimeMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t result; // eax
  std::vector<unsigned int>::size_type group_index; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned __int64 v9; // r14
  std::vector<unsigned int>::size_type v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v14; // rax
  uint32_t *v15; // rdx
  common::milog::MiLogStream v16; // [rsp+10h] [rbp-90h] BYREF
  char v17[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 9 index:809";
  *(_QWORD *)(v1 + 16) = RogueDiaryRuntimeMgr::getNextRoomGroupId;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( std::vector<unsigned int>::empty(&this->group_vec_) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "getNextRoomGroupId",
      801);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v16,
      (const char (*)[29])"[RogueDiary] group_vec empty");
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->group_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->group_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->group_index_);
    }
    group_index = this->group_index_;
    if ( group_index < std::vector<unsigned int>::size(&this->group_vec_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->group_index_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->group_index_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->group_index_);
      }
      v9 = this->group_index_ + 1;
      *(_DWORD *)(v1 + 32) = v9 % std::vector<unsigned int>::size(&this->group_vec_);
      v10 = *(unsigned int *)(v1 + 32);
      if ( v10 < std::vector<unsigned int>::size(&this->group_vec_) )
      {
        v14 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &this->group_vec_,
                                                                                                    *(unsigned int *)(v1 + 32));
        v15 = v14;
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v14);
        }
        result = *v15;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "getNextRoomGroupId",
          812);
        v11 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v16,
                (const char (*)[33])"[RogueDiary] index error, index:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v1 + 32));
        v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])", group_vec:");
        common::milog::MiLogStream::operator<<<unsigned int>(v13, &this->group_vec_);
        common::milog::MiLogStream::~MiLogStream(&v16);
        result = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "getNextRoomGroupId",
        806);
      v6 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
             &v16,
             (const char (*)[44])"[RogueDiary] group index error group_index:");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->group_index_);
      v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])", group_vec:");
      common::milog::MiLogStream::operator<<<unsigned int>(v8, &this->group_vec_);
      common::milog::MiLogStream::~MiLogStream(&v16);
      result = 0;
    }
  }
  if ( v17 == (char *)v1 )
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

// Line 819: range 00000000143CD290-00000000143CD3E2
bool __cdecl RogueDiaryRuntimeMgr::isCurRoomDungeonFinalRoom(const RogueDiaryRuntimeMgr *const this)
{
  const ActivityRogueDiaryExcelConfigMgr *p_activity_rogue_diary_config_mgr; // rdi
  uint32_t cur_room; // ecx
  uint32_t cur_round; // esi
  bool isRogueDungeonFinalRoom; // bl
  std::shared_ptr<Config> v7[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v7);
  p_activity_rogue_diary_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v7)->design_config.txt_config_mgr.activity_rogue_diary_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) )
  {
    p_activity_rogue_diary_config_mgr = (const ActivityRogueDiaryExcelConfigMgr *)&this->cur_room_;
    __asan_report_load4(&this->cur_room_);
  }
  cur_room = this->cur_room_;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) )
  {
    p_activity_rogue_diary_config_mgr = (const ActivityRogueDiaryExcelConfigMgr *)&this->cur_round_;
    __asan_report_load4(&this->cur_round_);
  }
  cur_round = this->cur_round_;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    p_activity_rogue_diary_config_mgr = (const ActivityRogueDiaryExcelConfigMgr *)&this->dungeon_id_;
    __asan_report_load4(&this->dungeon_id_);
  }
  isRogueDungeonFinalRoom = ActivityRogueDiaryExcelConfigMgr::isRogueDungeonFinalRoom(
                              p_activity_rogue_diary_config_mgr,
                              this->dungeon_id_,
                              cur_round,
                              cur_room);
  std::shared_ptr<Config>::~shared_ptr(v7);
  return isRogueDungeonFinalRoom;
};

// Line 824: range 00000000143CD3E4-00000000143CD536
bool __cdecl RogueDiaryRuntimeMgr::isCurRoomRoundFinalRoom(const RogueDiaryRuntimeMgr *const this)
{
  const ActivityRogueDiaryExcelConfigMgr *p_activity_rogue_diary_config_mgr; // rdi
  uint32_t cur_room; // ecx
  uint32_t cur_round; // esi
  bool isRogueDungeonRoundFinalRoom; // bl
  std::shared_ptr<Config> v7[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v7);
  p_activity_rogue_diary_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v7)->design_config.txt_config_mgr.activity_rogue_diary_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) )
  {
    p_activity_rogue_diary_config_mgr = (const ActivityRogueDiaryExcelConfigMgr *)&this->cur_room_;
    __asan_report_load4(&this->cur_room_);
  }
  cur_room = this->cur_room_;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) )
  {
    p_activity_rogue_diary_config_mgr = (const ActivityRogueDiaryExcelConfigMgr *)&this->cur_round_;
    __asan_report_load4(&this->cur_round_);
  }
  cur_round = this->cur_round_;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    p_activity_rogue_diary_config_mgr = (const ActivityRogueDiaryExcelConfigMgr *)&this->dungeon_id_;
    __asan_report_load4(&this->dungeon_id_);
  }
  isRogueDungeonRoundFinalRoom = ActivityRogueDiaryExcelConfigMgr::isRogueDungeonRoundFinalRoom(
                                   p_activity_rogue_diary_config_mgr,
                                   this->dungeon_id_,
                                   cur_round,
                                   cur_room);
  std::shared_ptr<Config>::~shared_ptr(v7);
  return isRogueDungeonRoundFinalRoom;
};

// Line 829: range 00000000143CD538-00000000143CD682
bool __cdecl RogueDiaryRuntimeMgr::isCurStageNextDungeon(const RogueDiaryRuntimeMgr *const this, uint32_t dungeon_id)
{
  const ActivityRogueDiaryExcelConfigMgr *p_activity_rogue_diary_config_mgr; // rdi
  uint32_t v3; // ecx
  uint32_t cur_difficulty; // edx
  bool isRogueDiaryNextStageDungeon; // bl
  std::shared_ptr<Config> v8[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v8);
  p_activity_rogue_diary_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v8)->design_config.txt_config_mgr.activity_rogue_diary_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    p_activity_rogue_diary_config_mgr = (const ActivityRogueDiaryExcelConfigMgr *)&this->dungeon_id_;
    __asan_report_load4(&this->dungeon_id_);
  }
  v3 = this->dungeon_id_;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_difficulty_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_difficulty_ >> 3) + 0x7FFF8000) <= 3 )
  {
    p_activity_rogue_diary_config_mgr = (const ActivityRogueDiaryExcelConfigMgr *)&this->cur_difficulty_;
    __asan_report_load4(&this->cur_difficulty_);
  }
  cur_difficulty = this->cur_difficulty_;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    p_activity_rogue_diary_config_mgr = (const ActivityRogueDiaryExcelConfigMgr *)&this->stage_id_;
    __asan_report_load4(&this->stage_id_);
  }
  isRogueDiaryNextStageDungeon = ActivityRogueDiaryExcelConfigMgr::isRogueDiaryNextStageDungeon(
                                   p_activity_rogue_diary_config_mgr,
                                   this->stage_id_,
                                   cur_difficulty,
                                   v3,
                                   dungeon_id);
  std::shared_ptr<Config>::~shared_ptr(v8);
  return isRogueDiaryNextStageDungeon;
};

// Line 834: range 00000000143CD684-00000000143CD6BD
bool __cdecl RogueDiaryRuntimeMgr::isCurRoomStageFinalRoom(const RogueDiaryRuntimeMgr *const this)
{
  return RogueDiaryRuntimeMgr::isCurDungeonStageFinalDungeon(this)
      && RogueDiaryRuntimeMgr::isCurRoomDungeonFinalRoom(this);
};

// Line 840: range 00000000143CD6BE-00000000143CD7FF
bool __cdecl RogueDiaryRuntimeMgr::isCurDungeonStageFinalDungeon(const RogueDiaryRuntimeMgr *const this)
{
  const ActivityRogueDiaryExcelConfigMgr *p_activity_rogue_diary_config_mgr; // rdi
  uint32_t dungeon_id; // ecx
  uint32_t cur_difficulty; // edx
  bool isRogueDiaryStageFinalDungeon; // bl
  std::shared_ptr<Config> v7[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v7);
  p_activity_rogue_diary_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v7)->design_config.txt_config_mgr.activity_rogue_diary_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    p_activity_rogue_diary_config_mgr = (const ActivityRogueDiaryExcelConfigMgr *)&this->dungeon_id_;
    __asan_report_load4(&this->dungeon_id_);
  }
  dungeon_id = this->dungeon_id_;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_difficulty_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_difficulty_ >> 3) + 0x7FFF8000) <= 3 )
  {
    p_activity_rogue_diary_config_mgr = (const ActivityRogueDiaryExcelConfigMgr *)&this->cur_difficulty_;
    __asan_report_load4(&this->cur_difficulty_);
  }
  cur_difficulty = this->cur_difficulty_;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    p_activity_rogue_diary_config_mgr = (const ActivityRogueDiaryExcelConfigMgr *)&this->stage_id_;
    __asan_report_load4(&this->stage_id_);
  }
  isRogueDiaryStageFinalDungeon = ActivityRogueDiaryExcelConfigMgr::isRogueDiaryStageFinalDungeon(
                                    p_activity_rogue_diary_config_mgr,
                                    this->stage_id_,
                                    cur_difficulty,
                                    dungeon_id);
  std::shared_ptr<Config>::~shared_ptr(v7);
  return isRogueDiaryStageFinalDungeon;
};

// Line 845: range 00000000143CD800-00000000143CDA74
bool __cdecl RogueDiaryRuntimeMgr::isCurRoomCanSelectHard(const RogueDiaryRuntimeMgr *const this)
{
  std::vector<std::pair<unsigned int,bool>>::size_type cur_room; // rbx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  std::vector<std::pair<unsigned int,bool>> *p_round_room_config_vec; // rcx
  std::vector<std::pair<unsigned int,bool>>::const_reference v8; // rax
  std::vector<std::pair<unsigned int,bool>> *v9; // rcx
  std::vector<std::pair<unsigned int,bool>>::const_reference v10; // rdx
  bool *p_second; // rax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_room_);
  }
  if ( !this->cur_room_
    || (cur_room = this->cur_room_,
        cur_room > std::vector<std::pair<unsigned int,bool>>::size(&this->round_room_config_vec_)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "isCurRoomCanSelectHard",
      848);
    v3 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v12,
           (const char (*)[44])"[RogueDiary] invalid room_index, cur_round:");
    v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->cur_round_);
    v5 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v4, (const char (*)[12])", cur_room:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->cur_room_);
    common::milog::MiLogStream::~MiLogStream(&v12);
    return 0;
  }
  else
  {
    p_round_room_config_vec = &this->round_room_config_vec_;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->cur_room_);
    }
    v8 = std::vector<std::pair<unsigned int,bool>>::operator[](p_round_room_config_vec, this->cur_room_ - 1);
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    v9 = &this->round_room_config_vec_;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->cur_room_);
    }
    v10 = std::vector<std::pair<unsigned int,bool>>::operator[](v9, this->cur_room_ - 1);
    p_second = &v10->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_second & 7) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_second);
    }
    return v10->second;
  }
};

// Line 856: range 00000000143CDA76-00000000143CDB82
bool __cdecl RogueDiaryRuntimeMgr::isCurRoundDungeonFinalRound(const RogueDiaryRuntimeMgr *const this)
{
  const ActivityRogueDiaryExcelConfigMgr *p_activity_rogue_diary_config_mgr; // rdi
  uint32_t cur_round; // ecx
  bool isRogueDiaryDungeonFinalRound; // bl
  std::shared_ptr<Config> v6[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v6);
  p_activity_rogue_diary_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v6)->design_config.txt_config_mgr.activity_rogue_diary_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) )
  {
    p_activity_rogue_diary_config_mgr = (const ActivityRogueDiaryExcelConfigMgr *)&this->cur_round_;
    __asan_report_load4(&this->cur_round_);
  }
  cur_round = this->cur_round_;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    p_activity_rogue_diary_config_mgr = (const ActivityRogueDiaryExcelConfigMgr *)&this->dungeon_id_;
    __asan_report_load4(&this->dungeon_id_);
  }
  isRogueDiaryDungeonFinalRound = ActivityRogueDiaryExcelConfigMgr::isRogueDiaryDungeonFinalRound(
                                    p_activity_rogue_diary_config_mgr,
                                    this->dungeon_id_,
                                    cur_round);
  std::shared_ptr<Config>::~shared_ptr(v6);
  return isRogueDiaryDungeonFinalRound;
};

// Line 861: range 00000000143CDB84-00000000143CDCC5
uint32_t __cdecl RogueDiaryRuntimeMgr::getCurStageNextDungeonId(const RogueDiaryRuntimeMgr *const this)
{
  const ActivityRogueDiaryExcelConfigMgr *p_activity_rogue_diary_config_mgr; // rdi
  uint32_t dungeon_id; // ecx
  uint32_t cur_difficulty; // edx
  uint32_t RogueDiaryNextStageDungeonId; // ebx
  std::shared_ptr<Config> v7[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v7);
  p_activity_rogue_diary_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v7)->design_config.txt_config_mgr.activity_rogue_diary_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    p_activity_rogue_diary_config_mgr = (const ActivityRogueDiaryExcelConfigMgr *)&this->dungeon_id_;
    __asan_report_load4(&this->dungeon_id_);
  }
  dungeon_id = this->dungeon_id_;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_difficulty_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_difficulty_ >> 3) + 0x7FFF8000) <= 3 )
  {
    p_activity_rogue_diary_config_mgr = (const ActivityRogueDiaryExcelConfigMgr *)&this->cur_difficulty_;
    __asan_report_load4(&this->cur_difficulty_);
  }
  cur_difficulty = this->cur_difficulty_;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    p_activity_rogue_diary_config_mgr = (const ActivityRogueDiaryExcelConfigMgr *)&this->stage_id_;
    __asan_report_load4(&this->stage_id_);
  }
  RogueDiaryNextStageDungeonId = ActivityRogueDiaryExcelConfigMgr::getRogueDiaryNextStageDungeonId(
                                   p_activity_rogue_diary_config_mgr,
                                   this->stage_id_,
                                   cur_difficulty,
                                   dungeon_id);
  std::shared_ptr<Config>::~shared_ptr(v7);
  return RogueDiaryNextStageDungeonId;
};

// Line 866: range 00000000143CDCC6-00000000143CE637
int32_t __cdecl RogueDiaryRuntimeMgr::updateRoundRoomByStep(RogueDiaryRuntimeMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v8; // rax
  char v9; // al
  char *v10; // rsi
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  uint32_t v14; // ecx
  char v15; // dl
  __int64 v16; // rdx
  uint32_t v17; // ecx
  char v18; // dl
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdx
  unsigned __int64 v22; // r13
  __int64 v23; // rsi
  __int64 v24; // rsi
  __int64 v25; // rdx
  RogueDiaryActivity *activity; // r13
  uint32_t time; // r15d
  uint32_t cur_round; // r14d
  uint32_t v29; // esi
  uint32_t cur_difficulty; // edx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  bool is_first_room; // [rsp+17h] [rbp-99h]
  uint32_t last_round; // [rsp+18h] [rbp-98h]
  common::milog::MiLogStream v36; // [rsp+20h] [rbp-90h] BYREF
  char v37[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 14 index_pair:880";
  *(_QWORD *)(v1 + 16) = RogueDiaryRuntimeMgr::updateRoundRoomByStep;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  if ( RogueDiaryRuntimeMgr::isCurRoomDungeonFinalRoom(this) )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "updateRoundRoomByStep",
      869);
    v4 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v36,
           (const char (*)[52])"[RogueDiary] isCurRoomDungeonFinalRoom , cur_round:");
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->cur_round_);
    v6 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v5, (const char (*)[12])", cur_room:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->cur_room_);
    common::milog::MiLogStream::~MiLogStream(&v36);
    result = -1;
  }
  else if ( std::vector<unsigned int>::empty(&this->group_vec_) )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "updateRoundRoomByStep",
      874);
    v8 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v36,
           (const char (*)[50])"[RogueDiary] group_vec_ empty failed, dungeon_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->dungeon_id_);
    common::milog::MiLogStream::~MiLogStream(&v36);
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->cur_round_);
    }
    if ( this->cur_round_ )
      goto LABEL_15;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->cur_room_);
    }
    if ( this->cur_room_ )
LABEL_15:
      v9 = 0;
    else
      v9 = 1;
    is_first_room = v9;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->cur_round_);
    }
    last_round = this->cur_round_;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->cur_room_);
    }
    *(_QWORD *)(v1 + 32) = 0LL;
    v10 = (char *)(v1 + 32);
    if ( RogueDiaryRuntimeMgr::getNextRoundRoomIndex(this, (std::pair<unsigned int,unsigned int> *)(v1 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "updateRoundRoomByStep",
        883);
      v11 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
              &v36,
              (const char (*)[54])"[RogueDiary] getNextRoundRoomIndex failed, cur_round:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->cur_round_);
      v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])", cur_room:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->cur_room_);
      common::milog::MiLogStream::~MiLogStream(&v36);
      result = -1;
    }
    else
    {
      v14 = *(_DWORD *)(v1 + 32);
      v15 = *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000);
      LOBYTE(v10) = v15 != 0;
      v16 = (v15 != 0) & (unsigned __int8)((char)((((_BYTE)this - 20) & 7) + 3) >= v15);
      if ( (_BYTE)v16 )
        __asan_report_store4(&this->cur_round_, v10, v16);
      this->cur_round_ = v14;
      v17 = *(_DWORD *)(v1 + 36);
      v18 = *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000);
      LOBYTE(v10) = v18 != 0;
      v19 = (v18 != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= v18);
      if ( (_BYTE)v19 )
        __asan_report_store4(&this->cur_room_, v10, v19);
      this->cur_room_ = v17;
      if ( *(char *)(((unsigned __int64)&this->is_room_fighting_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_room_fighting_, v10, &this->is_room_fighting_);
      this->is_room_fighting_ = 0;
      v20 = ((_BYTE)this + 57) & 7;
      v21 = (*(_BYTE *)(((unsigned __int64)&this->is_select_room_hard_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v20 >= *(_BYTE *)(((unsigned __int64)&this->is_select_room_hard_ >> 3) + 0x7FFF8000));
      if ( (_BYTE)v21 )
        __asan_report_store1(&this->is_select_room_hard_, v20, v21);
      this->is_select_room_hard_ = 0;
      if ( !is_first_room )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->group_index_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->group_index_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->group_index_);
        }
        v22 = this->group_index_ + 1;
        v23 = (unsigned int)(v22 % std::vector<unsigned int>::size(&this->group_vec_));
        if ( *(_BYTE *)(((unsigned __int64)&this->group_index_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->group_index_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->group_index_, v23, &this->group_index_);
        }
        this->group_index_ = v23;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->cur_round_);
      }
      if ( this->cur_round_ == last_round + 1 )
      {
        if ( *(char *)(((unsigned __int64)&this->is_round_fight_finished_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(
            &this->is_round_fight_finished_,
            (((_BYTE)this - 20) & 7u) + 3,
            &this->is_round_fight_finished_);
        this->is_round_fight_finished_ = 0;
        v24 = ((_BYTE)this - 15) & 7;
        v25 = (*(_BYTE *)(((unsigned __int64)&this->is_round_repair_finished_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v24 >= *(_BYTE *)(((unsigned __int64)&this->is_round_repair_finished_ >> 3) + 0x7FFF8000));
        if ( (_BYTE)v25 )
          __asan_report_store1(&this->is_round_repair_finished_, v24, v25);
        this->is_round_repair_finished_ = 0;
        if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->activity_);
        activity = this->activity_;
        if ( *(_BYTE *)(((unsigned __int64)&this->time_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->time_);
        }
        time = this->time_;
        cur_round = this->cur_round_;
        v29 = cur_round + RogueDiaryRuntimeMgr::getCurRoundCountCorrection(this);
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_difficulty_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->cur_difficulty_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->cur_difficulty_);
        }
        cur_difficulty = this->cur_difficulty_;
        if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->stage_id_);
        }
        RogueDiaryActivity::tryUpdateRogueDiaryStageRecord(activity, this->stage_id_, cur_difficulty, v29, 0, time);
        RogueDiaryRuntimeMgr::logRoundStart(this);
      }
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "updateRoundRoomByStep",
        909);
      v31 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v36,
              (const char (*)[38])"[RogueDiary] after update, cur_round:");
      v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &this->cur_round_);
      v33 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v32, (const char (*)[12])", cur_room:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &this->cur_room_);
      common::milog::MiLogStream::~MiLogStream(&v36);
      result = 0;
    }
  }
  if ( v37 == (char *)v1 )
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

// Line 914: range 00000000143CE638-00000000143CE87E
const data::RogueDiaryRoomExcelConfig *__cdecl RogueDiaryRuntimeMgr::getCurRoomConfig(RogueDiaryRuntimeMgr *const this)
{
  std::vector<std::pair<unsigned int,bool>>::size_type cur_room; // rbx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  const data::RogueDiaryRoomExcelConfig *RogueDiaryRoomExcelConfig; // rbx
  std::vector<std::pair<unsigned int,bool>> *p_round_room_config_vec; // rcx
  std::vector<std::pair<unsigned int,bool>>::reference v8; // rax
  uint32_t *v9; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t room_config_id; // [rsp+1Ch] [rbp-44h]
  std::shared_ptr<Config> v13; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_room_);
  }
  if ( !this->cur_room_
    || (cur_room = this->cur_room_,
        cur_room > std::vector<std::pair<unsigned int,bool>>::size(&this->round_room_config_vec_)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "getCurRoomConfig",
      917);
    v3 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v14,
           (const char (*)[44])"[RogueDiary] invalid room_index, cur_round:");
    v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->cur_round_);
    v5 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v4, (const char (*)[12])", cur_room:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->cur_room_);
    common::milog::MiLogStream::~MiLogStream(&v14);
    return 0LL;
  }
  else
  {
    p_round_room_config_vec = &this->round_room_config_vec_;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->cur_room_);
    }
    v8 = std::vector<std::pair<unsigned int,bool>>::operator[](p_round_room_config_vec, this->cur_room_ - 1);
    v9 = (uint32_t *)v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    room_config_id = *v9;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v13);
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
    RogueDiaryRoomExcelConfig = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryRoomExcelConfig(
                                  &v10->design_config.txt_config_mgr.activity_rogue_diary_config_mgr,
                                  room_config_id);
    std::shared_ptr<Config>::~shared_ptr(&v13);
  }
  return RogueDiaryRoomExcelConfig;
};

// Line 925: range 00000000143CE880-00000000143CFA6A
void __fastcall RogueDiaryRuntimeMgr::triggerGroupEvent(
        RogueDiaryRuntimeMgr *const this,
        data::EventType event_type,
        bool is_next_group)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t NextRoomGroupId; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  uint32_t v12; // eax
  common::milog::MiLogStream *v13; // rax
  char *v14; // rsi
  int v15; // eax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  __int64 v21; // rsi
  int32_t hard_tide_id; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rdx
  char v24; // cl
  __int64 v25; // rsi
  uint32_t challenge_id; // r14d
  __int64 v27; // rax
  char v28; // dl
  __int64 v29; // rdx
  __int64 v30; // rsi
  int32_t normal_tide_id; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rdx
  char v33; // cl
  const ActivityRogueDiaryExcelConfigMgr *p_activity_rogue_diary_config_mgr; // rdi
  uint32_t cur_round; // ecx
  __int64 dungeon_id; // rsi
  uint32_t RogueDungeonHpCorrection; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rdx
  char v39; // cl
  common::milog::MiLogStream *v40; // r14
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // r14
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // r14
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rcx
  std::vector<std::pair<unsigned int,bool>>::size_type cur_room; // r14
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  std::vector<std::pair<unsigned int,bool>> *p_round_room_config_vec; // rcx
  std::vector<std::pair<unsigned int,bool>>::size_type v58; // rsi
  std::vector<std::pair<unsigned int,bool>>::reference v59; // rdx
  bool *p_second; // rax
  _BOOL4 second; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v62; // rdx
  char v63; // cl
  std::vector<std::pair<unsigned int,bool>> *v64; // rcx
  std::vector<std::pair<unsigned int,bool>>::reference v65; // rax
  uint32_t *v66; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v67; // rax
  __int64 v68; // rsi
  __int64 v69; // rax
  char v70; // dl
  __int64 v71; // rdx
  common::milog::MiLogStream *v72; // r14
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v73; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v75; // rdx
  char v76; // cl
  common::milog::MiLogStream *v77; // rax
  Group *v78; // rax
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rax
  uint32_t room_config_id; // [rsp+1Ch] [rbp-114h]
  const data::RogueDiaryRoomExcelConfig *room_config_ptr; // [rsp+20h] [rbp-110h]
  const data::RogueDiaryRoomExcelConfig *config_ptr; // [rsp+28h] [rbp-108h]
  std::shared_ptr<Config> v87; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v88; // [rsp+40h] [rbp-F0h] BYREF
  char v89[208]; // [rsp+60h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v89;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 12 group_id:926 48 4 14 event_type:924 64 16 13 scene_ptr:932 96 16 13 group_ptr:938 128 "
                        "16 11 evt_ptr:944";
  *(_QWORD *)(v3 + 16) = RogueDiaryRuntimeMgr::triggerGroupEvent;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  *(_DWORD *)(v3 + 48) = event_type;
  if ( is_next_group )
    NextRoomGroupId = RogueDiaryRuntimeMgr::getNextRoomGroupId(this);
  else
    NextRoomGroupId = RogueDiaryRuntimeMgr::getCurRoomGroupId(this);
  *(_DWORD *)(v3 + 32) = NextRoomGroupId;
  if ( !*(_DWORD *)(v3 + 32) )
  {
    common::milog::MiLogStream::create(
      &v88,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "triggerGroupEvent",
      929);
    v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v88,
           (const char (*)[42])"[RogueDiary] getGroupId 0, is_next_group:");
    v8 = common::milog::MiLogStream::operator<<(v7, is_next_group);
    v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])", index:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->group_index_);
    v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])", group_vec:");
    common::milog::MiLogStream::operator<<<unsigned int>(v11, &this->group_vec_);
    common::milog::MiLogStream::~MiLogStream(&v88);
    goto LABEL_98;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 64));
  if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 64)) )
  {
    v12 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    Scene::findGroup((Scene *const)(v3 + 96), v12);
    if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v88,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "triggerGroupEvent",
        941);
      v13 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v88,
              (const char (*)[42])"[RogueDiary] findGroup nullptr, group_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v88);
LABEL_96:
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 96));
      goto LABEL_97;
    }
    EventUtil::createEvent((data::EventType)(v3 + 128));
    v14 = (char *)(v3 + 128);
    if ( std::operator==<Event>(0LL, (const std::shared_ptr<Event> *)(v3 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v88,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "triggerGroupEvent",
        947);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        &v88,
        (const char (*)[30])"[RogueDiary] createEvent fail");
      common::milog::MiLogStream::~MiLogStream(&v88);
LABEL_95:
      std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v3 + 128));
      goto LABEL_96;
    }
    v15 = *(_DWORD *)(v3 + 48);
    if ( v15 == 112 )
    {
      if ( !RogueDiaryRuntimeMgr::isCurRoomStageFinalRoom(this) && RogueDiaryRuntimeMgr::isCurRoomDungeonFinalRoom(this) )
      {
        v75 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        v76 = *(_BYTE *)(((unsigned __int64)&v75->param1 >> 3) + 0x7FFF8000);
        if ( v76 != 0 && (char)((((_BYTE)v75 + 44) & 7) + 3) >= v76 )
        {
          LOBYTE(v14) = v76 != 0;
          __asan_report_store4(&v75->param1, v14, v75);
        }
        v75->param1 = 1;
      }
    }
    else
    {
      if ( v15 > 112 )
      {
LABEL_92:
        common::milog::MiLogStream::create(
          &v88,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "triggerGroupEvent",
          1007);
        v77 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v88,
                (const char (*)[39])"[RogueDiary] event_type invalid, type:");
        common::milog::MiLogStream::operator<<<data::EventType,(data::EventType*)0>(
          v77,
          (const data::EventType *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v88);
        goto LABEL_95;
      }
      if ( v15 != 111 )
      {
        if ( v15 == 109 )
        {
          config_ptr = RogueDiaryRuntimeMgr::getCurRoomConfig(this);
          if ( !config_ptr )
          {
            common::milog::MiLogStream::create(
              &v88,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
              "triggerGroupEvent",
              957);
            v16 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                    &v88,
                    (const char (*)[49])"[RogueDiary] getCurRoomConfig failed, cur_round:");
            v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->cur_round_);
            v18 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v17,
                    (const char (*)[12])", cur_room:");
            v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &this->cur_room_);
            v20 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v19, (const char (*)[8])", type:");
            common::milog::MiLogStream::operator<<<data::EventType,(data::EventType*)0>(
              v20,
              (const data::EventType *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v88);
            goto LABEL_95;
          }
          v21 = ((_BYTE)this + 57) & 7;
          if ( *(_BYTE *)(((unsigned __int64)&this->is_select_room_hard_ >> 3) + 0x7FFF8000) != 0
            && (char)v21 >= *(_BYTE *)(((unsigned __int64)&this->is_select_room_hard_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(&this->is_select_room_hard_);
          }
          if ( this->is_select_room_hard_ )
          {
            if ( *(_BYTE *)(((unsigned __int64)&config_ptr->hard_tide_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&config_ptr->hard_tide_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&config_ptr->hard_tide_id);
            }
            if ( config_ptr->hard_tide_id )
            {
              if ( *(_BYTE *)(((unsigned __int64)&config_ptr->hard_tide_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&config_ptr->hard_tide_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&config_ptr->hard_tide_id);
              }
              hard_tide_id = config_ptr->hard_tide_id;
            }
            else
            {
              v21 = (((_BYTE)config_ptr + 12) & 7u) + 3;
              if ( *(_BYTE *)(((unsigned __int64)&config_ptr->normal_tide_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->normal_tide_id >> 3)
                                                                          + 0x7FFF8000) )
              {
                __asan_report_load4(&config_ptr->normal_tide_id);
              }
              hard_tide_id = config_ptr->normal_tide_id;
            }
            v23 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            v24 = *(_BYTE *)(((unsigned __int64)&v23->param1 >> 3) + 0x7FFF8000);
            if ( v24 != 0 && (char)((((_BYTE)v23 + 44) & 7) + 3) >= v24 )
            {
              LOBYTE(v21) = v24 != 0;
              __asan_report_store4(&v23->param1, v21, v23);
            }
            v23->param1 = hard_tide_id;
            v25 = (((_BYTE)config_ptr + 20) & 7u) + 3;
            if ( *(_BYTE *)(((unsigned __int64)&config_ptr->challenge_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->challenge_id >> 3)
                                                                        + 0x7FFF8000) )
            {
              __asan_report_load4(&config_ptr->challenge_id);
            }
            challenge_id = config_ptr->challenge_id;
            v27 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            v28 = *(_BYTE *)(((unsigned __int64)(v27 + 48) >> 3) + 0x7FFF8000);
            LOBYTE(v25) = v28 != 0;
            v29 = (v28 != 0) & (unsigned __int8)(v28 <= 3);
            if ( (_BYTE)v29 )
              v27 = __asan_report_store4(v27 + 48, v25, v29);
            *(_DWORD *)(v27 + 48) = challenge_id;
          }
          else
          {
            v30 = (((_BYTE)config_ptr + 12) & 7u) + 3;
            if ( *(_BYTE *)(((unsigned __int64)&config_ptr->normal_tide_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->normal_tide_id >> 3)
                                                                        + 0x7FFF8000) )
            {
              __asan_report_load4(&config_ptr->normal_tide_id);
            }
            normal_tide_id = config_ptr->normal_tide_id;
            v32 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            v33 = *(_BYTE *)(((unsigned __int64)&v32->param1 >> 3) + 0x7FFF8000);
            if ( v33 != 0 && (char)((((_BYTE)v32 + 44) & 7) + 3) >= v33 )
            {
              LOBYTE(v30) = v33 != 0;
              __asan_report_store4(&v32->param1, v30, v32);
            }
            v32->param1 = normal_tide_id;
          }
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v87);
          p_activity_rogue_diary_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v87)->design_config.txt_config_mgr.activity_rogue_diary_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) )
          {
            p_activity_rogue_diary_config_mgr = (const ActivityRogueDiaryExcelConfigMgr *)&this->cur_round_;
            __asan_report_load4(&this->cur_round_);
          }
          cur_round = this->cur_round_;
          if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3)
                                                                + 0x7FFF8000) )
          {
            p_activity_rogue_diary_config_mgr = (const ActivityRogueDiaryExcelConfigMgr *)&this->dungeon_id_;
            __asan_report_load4(&this->dungeon_id_);
          }
          dungeon_id = this->dungeon_id_;
          RogueDungeonHpCorrection = ActivityRogueDiaryExcelConfigMgr::getRogueDungeonHpCorrection(
                                       p_activity_rogue_diary_config_mgr,
                                       dungeon_id,
                                       cur_round);
          v38 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          v39 = *(_BYTE *)(((unsigned __int64)&v38->param3 >> 3) + 0x7FFF8000);
          if ( v39 != 0 && (char)((((_BYTE)v38 + 52) & 7) + 3) >= v39 )
          {
            LOBYTE(dungeon_id) = v39 != 0;
            __asan_report_store4(&v38->param3, dungeon_id, v38);
          }
          v38->param3 = RogueDungeonHpCorrection;
          std::shared_ptr<Config>::~shared_ptr(&v87);
          common::milog::MiLogStream::create(
            &v88,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
            "triggerGroupEvent",
            970);
          v40 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  &v88,
                  (const char (*)[47])"[RogueDiary] EVENT_ROGUE_START_FIGHT, tide_id:");
          v41 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          v42 = common::milog::MiLogStream::operator<<<int,(int *)0>(v40, &v41->param1);
          v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v42,
                  (const char (*)[16])", challenge_id:");
          v44 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          v45 = common::milog::MiLogStream::operator<<<int,(int *)0>(v43, &v44->param2);
          v46 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  v45,
                  (const char (*)[17])", hp_correction:");
          v47 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          v48 = common::milog::MiLogStream::operator<<<int,(int *)0>(v46, &v47->param3);
          v49 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v48, (const char (*)[11])", is_hard:");
          if ( *(_BYTE *)(((unsigned __int64)&this->is_select_room_hard_ >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)this + 57) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_select_room_hard_ >> 3)
                                                              + 0x7FFF8000) )
          {
            __asan_report_load1(&this->is_select_room_hard_);
          }
          common::milog::MiLogStream::operator<<(v49, this->is_select_room_hard_);
          common::milog::MiLogStream::~MiLogStream(&v88);
        }
        else
        {
          if ( v15 != 110 )
            goto LABEL_92;
          if ( *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&this->cur_room_);
          }
          if ( !this->cur_room_
            || (cur_room = this->cur_room_,
                cur_room > std::vector<std::pair<unsigned int,bool>>::size(&this->round_room_config_vec_)) )
          {
            common::milog::MiLogStream::create(
              &v88,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
              "triggerGroupEvent",
              979);
            v52 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                    &v88,
                    (const char (*)[44])"[RogueDiary] invalid room_index, cur_round:");
            v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, &this->cur_round_);
            v54 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v53,
                    (const char (*)[12])", cur_room:");
            v55 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, &this->cur_room_);
            v56 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v55, (const char (*)[8])", type:");
            common::milog::MiLogStream::operator<<<data::EventType,(data::EventType*)0>(
              v56,
              (const data::EventType *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v88);
            goto LABEL_95;
          }
          p_round_room_config_vec = &this->round_room_config_vec_;
          if ( *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&this->cur_room_);
          }
          v58 = this->cur_room_ - 1;
          v59 = std::vector<std::pair<unsigned int,bool>>::operator[](p_round_room_config_vec, v58);
          p_second = &v59->second;
          if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)p_second & 7) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(p_second);
          }
          second = v59->second;
          v62 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          v63 = *(_BYTE *)(((unsigned __int64)&v62->param1 >> 3) + 0x7FFF8000);
          if ( v63 != 0 && (char)((((_BYTE)v62 + 44) & 7) + 3) >= v63 )
          {
            LOBYTE(v58) = v63 != 0;
            __asan_report_store4(&v62->param1, v58, v62);
          }
          v62->param1 = second;
          v64 = &this->round_room_config_vec_;
          if ( *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&this->cur_room_);
          }
          v65 = std::vector<std::pair<unsigned int,bool>>::operator[](v64, this->cur_room_ - 1);
          v66 = (uint32_t *)v65;
          if ( *(_BYTE *)(((unsigned __int64)v65 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v65 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v65 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v65);
          }
          room_config_id = *v66;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v87);
          v67 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v87);
          v68 = room_config_id;
          room_config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryRoomExcelConfig(
                              &v67->design_config.txt_config_mgr.activity_rogue_diary_config_mgr,
                              room_config_id);
          std::shared_ptr<Config>::~shared_ptr(&v87);
          if ( room_config_ptr )
          {
            if ( *(char *)(((unsigned __int64)&room_config_ptr->is_boss >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(&room_config_ptr->is_boss);
            if ( room_config_ptr->is_boss )
            {
              v69 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              v70 = *(_BYTE *)(((unsigned __int64)(v69 + 48) >> 3) + 0x7FFF8000);
              LOBYTE(v68) = v70 != 0;
              v71 = (v70 != 0) & (unsigned __int8)(v70 <= 3);
              if ( (_BYTE)v71 )
                v69 = __asan_report_store4(v69 + 48, v68, v71);
              *(_DWORD *)(v69 + 48) = 1;
            }
          }
          common::milog::MiLogStream::create(
            &v88,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
            "triggerGroupEvent",
            990);
          v72 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                  &v88,
                  (const char (*)[59])"[RogueDiary] EVENT_ROGUE_CREAGE_FIGHT_GADGET, is_can_hard:");
          v73 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          common::milog::MiLogStream::operator<<<int,(int *)0>(v72, &v73->param1);
          common::milog::MiLogStream::~MiLogStream(&v88);
        }
      }
    }
    v78 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    if ( Group::handleEvent(v78, (EventPtr *)(v3 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v88,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "triggerGroupEvent",
        1012);
      v79 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v88,
              (const char (*)[23])"[RogueDiary] group_id:");
      v80 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v79, (const unsigned int *)(v3 + 32));
      v81 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              v80,
              (const char (*)[26])" handleEvent fails, type:");
      common::milog::MiLogStream::operator<<<data::EventType,(data::EventType*)0>(
        v81,
        (const data::EventType *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v88);
    }
    goto LABEL_95;
  }
  common::milog::MiLogStream::create(
    &v88,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
    "triggerGroupEvent",
    935);
  common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
    &v88,
    (const char (*)[33])"[RogueDiary] getCurScene nullptr");
  common::milog::MiLogStream::~MiLogStream(&v88);
LABEL_97:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
LABEL_98:
  if ( v89 == (char *)v3 )
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
};

// Line 1018: range 00000000143CFA6C-00000000143D052F
void __cdecl RogueDiaryRuntimeMgr::randNextRoundRoomInfo(RogueDiaryRuntimeMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r14
  common::milog::MiLogStream *v8; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v9; // rdx
  unsigned int *p_second; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::vector<data::RogueDiaryRoundExcelConfig>::size_type v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  std::vector<data::RogueDiaryRoundExcelConfig>::const_reference v23; // rax
  common::milog::MiLogStream *v24; // rax
  ActivityRogueDiaryExcelConfigMgr *p_activity_rogue_diary_config_mgr; // r14
  std::vector<unsigned int>::reference v26; // rax
  uint32_t *v27; // rdx
  bool v28; // r14
  common::milog::MiLogStream *v29; // r14
  const unsigned int *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  const unsigned int *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+10h] [rbp-110h] BYREF
  const data::RogueDiaryDungeonExcelConfig *config_ptr; // [rsp+18h] [rbp-108h]
  std::shared_ptr<Config> v47; // [rsp+20h] [rbp-100h] BYREF
  common::milog::MiLogStream v48; // [rsp+30h] [rbp-F0h] BYREF
  char v49[208]; // [rsp+50h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 4 15 dungeon_id:1019 48 4 16 round_index:1020 64 8 9 iter:1033 96 24 26 rand_round_config_vec:1058";
  *(_QWORD *)(v1 + 16) = RogueDiaryRuntimeMgr::randNextRoundRoomInfo;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -218959360;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  *(_DWORD *)(v1 + 32) = 0;
  *(_DWORD *)(v1 + 48) = 0;
  if ( RogueDiaryRuntimeMgr::isCurRoomDungeonFinalRoom(this) && !RogueDiaryRuntimeMgr::isCurRoomStageFinalRoom(this) )
  {
    *(_DWORD *)(v1 + 32) = RogueDiaryRuntimeMgr::getCurStageNextDungeonId(this);
    *(_DWORD *)(v1 + 48) = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->dungeon_id_);
    }
    *(_DWORD *)(v1 + 32) = this->dungeon_id_;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->cur_round_);
    }
    *(_DWORD *)(v1 + 48) = this->cur_round_;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v47);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v47);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v1 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  &v5->design_config.txt_config_mgr.activity_rogue_diary_config_mgr.dungeon_round_count_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v1 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v47);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v47);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v47);
  __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&v6->design_config.txt_config_mgr.activity_rogue_diary_config_mgr.dungeon_round_count_map)._M_cur;
  v7 = std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v1 + 64),
         &__y);
  std::shared_ptr<Config>::~shared_ptr(&v47);
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "randNextRoundRoomInfo",
      1036);
    v8 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
           &v48,
           (const char (*)[70])"[RogueDiary] dungeon_round_count_map find dungeon failed, dungeon_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v1 + 32));
    common::milog::MiLogStream::~MiLogStream(&v48);
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v1 + 64));
    p_second = &v9->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    if ( v9->second > *(_DWORD *)(v1 + 48) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v47);
      v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v47);
      config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryDungeonExcelConfig(
                     &v17->design_config.txt_config_mgr.activity_rogue_diary_config_mgr,
                     *(_DWORD *)(v1 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v47);
      if ( config_ptr )
      {
        v19 = *(unsigned int *)(v1 + 48);
        if ( v19 < std::vector<data::RogueDiaryRoundExcelConfig>::size(&config_ptr->round_list) )
        {
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 96));
          v23 = std::vector<data::RogueDiaryRoundExcelConfig>::operator[](
                  &config_ptr->round_list,
                  *(unsigned int *)(v1 + 48));
          common::tools::RandomUtils::randomSelect<unsigned int>(
            &v23->round_room_config_list,
            (std::vector<unsigned int> *)(v1 + 96),
            1u);
          if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v1 + 96)) )
          {
            common::milog::MiLogStream::create(
              &v48,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
              "randNextRoundRoomInfo",
              1062);
            v24 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                    &v48,
                    (const char (*)[46])"[RogueDiary] randomSelect failed, dungeon_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v1 + 32));
            common::milog::MiLogStream::~MiLogStream(&v48);
          }
          else
          {
            std::vector<std::pair<unsigned int,bool>>::clear(&this->round_room_config_vec_);
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v47);
            p_activity_rogue_diary_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v47)->design_config.txt_config_mgr.activity_rogue_diary_config_mgr;
            v26 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v1 + 96), 0LL);
            v27 = v26;
            if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v26);
            }
            v28 = ActivityRogueDiaryExcelConfigMgr::randRoundRoomInfo(
                    p_activity_rogue_diary_config_mgr,
                    *v27,
                    &this->round_room_config_vec_) != 0;
            std::shared_ptr<Config>::~shared_ptr(&v47);
            if ( v28 )
            {
              common::milog::MiLogStream::create(
                &v48,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
                "randNextRoundRoomInfo",
                1069);
              v29 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                      &v48,
                      (const char (*)[61])"[RogueDiary] randRoundRoomInfo failed, round_room_config_id:");
              v30 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v1 + 96), 0LL);
              v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, v30);
              v32 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v31,
                      (const char (*)[14])", dungeon_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &this->dungeon_id_);
              common::milog::MiLogStream::~MiLogStream(&v48);
              std::vector<std::pair<unsigned int,bool>>::clear(&this->round_room_config_vec_);
            }
            else
            {
              common::milog::MiLogStream::create(
                &v48,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
                "randNextRoundRoomInfo",
                1073);
              v33 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                      &v48,
                      (const char (*)[63])"[RogueDiary] randNextRoundRoomInfo succ, rand_round_config_id:");
              v34 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v1 + 96), 0LL);
              v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, v34);
              v36 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      v35,
                      (const char (*)[15])", cur_dungeon:");
              v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &this->dungeon_id_);
              v38 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v37,
                      (const char (*)[13])", cur_round:");
              v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &this->cur_round_);
              v40 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v39,
                      (const char (*)[13])", cur_room_:");
              v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &this->cur_room_);
              v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      v41,
                      (const char (*)[16])", rand_dungeon:");
              v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v42,
                      (const unsigned int *)(v1 + 32));
              v44 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                      v43,
                      (const char (*)[20])", rand_round_index:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v44,
                (const unsigned int *)(v1 + 48));
              common::milog::MiLogStream::~MiLogStream(&v48);
            }
          }
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 96));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v48,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
            "randNextRoundRoomInfo",
            1053);
          v20 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  &v48,
                  (const char (*)[34])"[RogueDiary] invalid round_index:");
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v20,
                  (const unsigned int *)(v1 + 48));
          v22 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v21,
                  (const char (*)[14])", dungeon_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &this->dungeon_id_);
          common::milog::MiLogStream::~MiLogStream(&v48);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v48,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "randNextRoundRoomInfo",
          1047);
        v18 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                &v48,
                (const char (*)[66])"[RogueDiary] findRogueDiaryDungeonExcelConfig failed, dungeon_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v1 + 32));
        common::milog::MiLogStream::~MiLogStream(&v48);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "randNextRoundRoomInfo",
        1041);
      v11 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
              &v48,
              (const char (*)[55])"[RogueDiary] cur round exceed round count, dungeon_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v1 + 32));
      v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v12, (const char (*)[15])", round_count:");
      v14 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v1 + 64));
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &v14->second);
      v16 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v15, (const char (*)[15])", round_index:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::~MiLogStream(&v48);
    }
  }
  if ( v49 == (char *)v1 )
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
};

// Line 1079: range 00000000143D0530-00000000143D0B21
__int64 __fastcall RogueDiaryRuntimeMgr::createProgress(
        RogueDiaryRuntimeMgr *const this,
        uint32_t stage_id,
        uint32_t difficulty)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool v10; // r14
  common::milog::MiLogStream *v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  uint32_t v14; // ecx
  char v15; // al
  uint32_t v16; // ecx
  char v17; // dl
  __int64 v18; // rdx
  __int64 Transaction; // rdx
  char v20; // al
  common::milog::MiLogStream *v21; // r12
  const data::RogueDiaryStageExcelConfig *stage_config_ptr; // [rsp+18h] [rbp-E8h]
  std::shared_ptr<Config> v24; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v25; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v26; // [rsp+50h] [rbp-B0h] BYREF
  char v27[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 21 enter_dungeon_id:1089 64 4 13 stage_id:1078";
  *(_QWORD *)(v3 + 16) = RogueDiaryRuntimeMgr::createProgress;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = stage_id;
  RogueDiaryRuntimeMgr::clearAll(this);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v24);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
  stage_config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryStageExcelConfig(
                       &v6->design_config.txt_config_mgr.activity_rogue_diary_config_mgr,
                       *(_DWORD *)(v3 + 64));
  std::shared_ptr<Config>::~shared_ptr(&v24);
  if ( stage_config_ptr )
  {
    *(_DWORD *)(v3 + 48) = 0;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v24);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
    v10 = ActivityRogueDiaryExcelConfigMgr::tryGetRogueDiaryStageFirstDungeon(
            &v9->design_config.txt_config_mgr.activity_rogue_diary_config_mgr,
            *(_DWORD *)(v3 + 64),
            difficulty,
            (uint32_t *)(v3 + 48)) != 0;
    std::shared_ptr<Config>::~shared_ptr(&v24);
    if ( v10 )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "createProgress",
        1092);
      v11 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
              &v26,
              (const char (*)[65])"[RogueDiary] tryGetRogueDiaryStageFirstDungeon failed, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v26);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = ((_BYTE)this - 36) & 7;
      v13 = (*(_BYTE *)(((unsigned __int64)&this->is_have_progress_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&this->is_have_progress_ >> 3) + 0x7FFF8000));
      if ( (_BYTE)v13 )
        __asan_report_store1(&this->is_have_progress_, v12, v13);
      this->is_have_progress_ = 1;
      v14 = *(_DWORD *)(v3 + 64);
      v15 = *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000);
      if ( v15 != 0 && v15 <= 3 )
      {
        LOBYTE(v12) = v15 != 0;
        __asan_report_store4(&this->stage_id_, v12, &this->stage_id_);
      }
      this->stage_id_ = v14;
      v16 = *(_DWORD *)(v3 + 48);
      v17 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000);
      LOBYTE(v12) = v17 != 0;
      v18 = (v17 != 0) & (unsigned __int8)((char)((((_BYTE)this - 28) & 7) + 3) >= v17);
      if ( (_BYTE)v18 )
        __asan_report_store4(&this->dungeon_id_, v12, v18);
      this->dungeon_id_ = v16;
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_difficulty_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_difficulty_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->cur_difficulty_, v12, &this->cur_difficulty_);
      }
      this->cur_difficulty_ = difficulty;
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->activity_);
      Transaction = RogueDiaryActivity::genNextTransaction(this->activity_);
      v20 = *(_BYTE *)(((unsigned __int64)&this->transaction_ >> 3) + 0x7FFF8000);
      if ( v20 != 0 && v20 <= 3 )
      {
        LOBYTE(v12) = v20 != 0;
        __asan_report_store4(&this->transaction_, v12, Transaction);
      }
      this->transaction_ = Transaction;
      RogueDiaryRuntimeMgr::randNextRoundCardInfo(this, 0);
      RogueDiaryRuntimeMgr::randNextRoundRoomInfo(this);
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "createProgress",
        1105);
      v21 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v25,
              (const char (*)[37])"[RogueDiary] createProgress finish, ");
      RogueDiaryRuntimeMgr::getDesc[abi:cxx11]((std::string *)&v26, this);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, (const std::string *)&v26);
      std::string::~string(&v26);
      common::milog::MiLogStream::~MiLogStream(&v25);
      result = 0LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "createProgress",
      1085);
    v7 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
           &v26,
           (const char (*)[62])"[RogueDiary] findRogueDiaryStageExcelConfig failed, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v26);
    result = 0xFFFFFFFFLL;
  }
  if ( v27 == (char *)v3 )
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

// Line 1110: range 00000000143D0B22-00000000143D0DBE
__int64 __fastcall RogueDiaryRuntimeMgr::clearProgress(RogueDiaryRuntimeMgr *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-80h] BYREF
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 stage_id:1109";
  *(_QWORD *)(v2 + 16) = RogueDiaryRuntimeMgr::clearProgress;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = stage_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->stage_id_);
  }
  if ( this->stage_id_ == *(_DWORD *)(v2 + 32) )
  {
    if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_running_);
    if ( this->is_running_ )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "clearProgress",
        1118);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        &v9,
        (const char (*)[24])"[RogueDiary] is running");
      common::milog::MiLogStream::~MiLogStream(&v9);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      RogueDiaryRuntimeMgr::logSettle(this);
      RogueDiaryRuntimeMgr::clearAll(this);
      result = 0LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "clearProgress",
      1113);
    v5 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v9,
           (const char (*)[48])"[RogueDiary] cur stage not match, cur_stage_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->stage_id_);
    v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])", stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 0xFFFFFFFFLL;
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
  return result;
};

// Line 1127: range 00000000143D0DC0-00000000143D21D0
int32_t __cdecl RogueDiaryRuntimeMgr::tryGetProgressResumeDungeonAndBornData(
        const RogueDiaryRuntimeMgr *const this,
        uint32_t *dungeon_id,
        Vector3 *pos,
        Vector3 *rot)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  __int64 v7; // rsi
  int32_t result; // eax
  uint32_t CurStageNextDungeonId; // ecx
  char v10; // dl
  __int64 v11; // rdx
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v13; // rdx
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v15; // rax
  DungeonExcelConfigMgr *v16; // rcx
  common::milog::MiLogStream *v17; // rax
  LuaConfigMgr *v18; // rcx
  common::milog::MiLogStream *v19; // rax
  __int64 v20; // rsi
  uint32_t v21; // ecx
  char v22; // dl
  __int64 v23; // rdx
  common::milog::MiLogStream *v24; // rax
  std::vector<unsigned int>::size_type group_index; // r15
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  std::vector<unsigned int> *p_group_vec; // rcx
  std::vector<unsigned int>::const_reference v30; // rax
  _DWORD *v31; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  const data::DungeonExcelConfig *config_ptr; // [rsp+28h] [rbp-D8h]
  const SceneScriptConfig *script_config_ptr; // [rsp+30h] [rbp-D0h]
  const data::RogueDiaryPortalExcelConfig *point_config_ptr; // [rsp+38h] [rbp-C8h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+40h] [rbp-C0h]
  const PointScriptConfig *point_script_config_ptr; // [rsp+48h] [rbp-B8h]
  const data::DungeonExcelConfig *config_ptr_0; // [rsp+50h] [rbp-B0h]
  const SceneScriptConfig *script_config_ptr_0; // [rsp+58h] [rbp-A8h]
  std::shared_ptr<Config> v49; // [rsp+60h] [rbp-A0h] BYREF
  common::milog::MiLogStream v50; // [rsp+70h] [rbp-90h] BYREF
  char v51[112]; // [rsp+90h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 13 group_id:1185";
  *(_QWORD *)(v4 + 16) = RogueDiaryRuntimeMgr::tryGetProgressResumeDungeonAndBornData;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  v7 = ((_BYTE)this - 36) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_have_progress_ >> 3) + 0x7FFF8000) != 0
    && (char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_have_progress_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_have_progress_);
  }
  if ( !this->is_have_progress_ )
  {
    common::milog::MiLogStream::create(
      &v50,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "tryGetProgressResumeDungeonAndBornData",
      1130);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      &v50,
      (const char (*)[37])"[RogueDiary] player have no progress");
    common::milog::MiLogStream::~MiLogStream(&v50);
    result = -1;
    goto LABEL_80;
  }
  if ( RogueDiaryRuntimeMgr::isCanEnterNextDungeon(this) )
  {
    CurStageNextDungeonId = RogueDiaryRuntimeMgr::getCurStageNextDungeonId(this);
    v10 = *(_BYTE *)(((unsigned __int64)dungeon_id >> 3) + 0x7FFF8000);
    LOBYTE(v7) = v10 != 0;
    v11 = (v10 != 0) & (unsigned __int8)((char)(((unsigned __int8)dungeon_id & 7) + 3) >= v10);
    if ( (_BYTE)v11 )
      __asan_report_store4(dungeon_id, v7, v11);
    *dungeon_id = CurStageNextDungeonId;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v49);
    p_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49)->design_config.txt_config_mgr.dungeon_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)dungeon_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)dungeon_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(dungeon_id);
    }
    config_ptr_0 = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(p_dungeon_config_mgr, *dungeon_id);
    std::shared_ptr<Config>::~shared_ptr(&v49);
    if ( config_ptr_0 )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v49);
      p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49)->design_config.lua_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr_0->scene_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config_ptr_0->scene_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config_ptr_0->scene_id);
      }
      script_config_ptr_0 = LuaConfigMgr::findSceneScriptConfig(p_lua_config_mgr, config_ptr_0->scene_id);
      std::shared_ptr<Config>::~shared_ptr(&v49);
      if ( script_config_ptr_0 )
      {
        if ( ((unsigned __int8)pos & 7) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(pos, 12LL);
        }
        if ( (((unsigned __int8)script_config_ptr_0 - 52) & 7) >= *(_BYTE *)(((unsigned __int64)&script_config_ptr_0->born_pos >> 3)
                                                                           + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&script_config_ptr_0->born_pos >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&script_config_ptr_0->born_pos.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)script_config_ptr_0 - 41) & 7) >= *(_BYTE *)((((unsigned __int64)&script_config_ptr_0->born_pos.z
                                                                             + 3) >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load_n(&script_config_ptr_0->born_pos, 12LL);
        }
        *(_QWORD *)&pos->x = *(_QWORD *)&script_config_ptr_0->born_pos.x;
        pos->z = script_config_ptr_0->born_pos.z;
        if ( ((unsigned __int8)rot & 7) >= *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(rot, 12LL);
        }
        if ( *(char *)(((unsigned __int64)&script_config_ptr_0->born_rot >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&script_config_ptr_0->born_rot.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)script_config_ptr_0 - 29) & 7) >= *(_BYTE *)((((unsigned __int64)&script_config_ptr_0->born_rot.z
                                                                             + 3) >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load_n(&script_config_ptr_0->born_rot, 12LL);
        }
        *(_QWORD *)&rot->x = *(_QWORD *)&script_config_ptr_0->born_rot.x;
        rot->z = script_config_ptr_0->born_rot.z;
        result = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v50,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "tryGetProgressResumeDungeonAndBornData",
          1146);
        v15 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                &v50,
                (const char (*)[52])"[RogueDiary] findSceneScriptConfig fails, scene_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &config_ptr_0->scene_id);
        common::milog::MiLogStream::~MiLogStream(&v50);
        result = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v50,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "tryGetProgressResumeDungeonAndBornData",
        1140);
      v13 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
              &v50,
              (const char (*)[56])"[RogueDiary] findDungeonExcelConfig failed, dungeon_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, dungeon_id);
      common::milog::MiLogStream::~MiLogStream(&v50);
      result = -1;
    }
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v49);
    v16 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49)->design_config.txt_config_mgr.dungeon_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->dungeon_id_);
    }
    config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(v16, this->dungeon_id_);
    std::shared_ptr<Config>::~shared_ptr(&v49);
    if ( !config_ptr )
    {
      common::milog::MiLogStream::create(
        &v50,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "tryGetProgressResumeDungeonAndBornData",
        1157);
      v17 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
              &v50,
              (const char (*)[56])"[RogueDiary] findDungeonExcelConfig failed, dungeon_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->dungeon_id_);
      common::milog::MiLogStream::~MiLogStream(&v50);
      result = -1;
      goto LABEL_80;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v49);
    v18 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49)->design_config.lua_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->scene_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_ptr->scene_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config_ptr->scene_id);
    }
    script_config_ptr = LuaConfigMgr::findSceneScriptConfig(v18, config_ptr->scene_id);
    std::shared_ptr<Config>::~shared_ptr(&v49);
    if ( !script_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v50,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "tryGetProgressResumeDungeonAndBornData",
        1163);
      v19 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              &v50,
              (const char (*)[52])"[RogueDiary] findSceneScriptConfig fails, scene_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &config_ptr->scene_id);
      common::milog::MiLogStream::~MiLogStream(&v50);
      result = -1;
      goto LABEL_80;
    }
    v20 = (((_BYTE)this - 28) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->dungeon_id_);
    }
    v21 = this->dungeon_id_;
    v22 = *(_BYTE *)(((unsigned __int64)dungeon_id >> 3) + 0x7FFF8000);
    LOBYTE(v20) = v22 != 0;
    v23 = (v22 != 0) & (unsigned __int8)((char)(((unsigned __int8)dungeon_id & 7) + 3) >= v22);
    if ( (_BYTE)v23 )
      __asan_report_store4(dungeon_id, v20, v23);
    *dungeon_id = v21;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->cur_round_);
    }
    if ( this->cur_round_ )
    {
      if ( std::vector<unsigned int>::empty(&this->group_vec_) )
      {
        common::milog::MiLogStream::create(
          &v50,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "tryGetProgressResumeDungeonAndBornData",
          1177);
        v24 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v50,
                (const char (*)[43])"[RogueDiary] group_list empty, dungeon_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &this->dungeon_id_);
        common::milog::MiLogStream::~MiLogStream(&v50);
        result = -1;
        goto LABEL_80;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->group_index_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->group_index_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->group_index_);
      }
      group_index = this->group_index_;
      if ( group_index >= std::vector<unsigned int>::size(&this->group_vec_) )
      {
        common::milog::MiLogStream::create(
          &v50,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "tryGetProgressResumeDungeonAndBornData",
          1182);
        v26 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v50,
                (const char (*)[44])"[RogueDiary] group index error group_index:");
        v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &this->group_index_);
        v28 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v27, (const char (*)[13])", group_vec:");
        common::milog::MiLogStream::operator<<<unsigned int>(v28, &this->group_vec_);
        common::milog::MiLogStream::~MiLogStream(&v50);
        result = -1;
        goto LABEL_80;
      }
      p_group_vec = &this->group_vec_;
      if ( *(_BYTE *)(((unsigned __int64)&this->group_index_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->group_index_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->group_index_);
      }
      v30 = std::vector<unsigned int>::operator[](p_group_vec, this->group_index_);
      v31 = v30;
      if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v30);
      }
      *(_DWORD *)(v4 + 32) = *v31;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v49);
      v32 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49);
      point_config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryPortalExcelConfig(
                           &v32->design_config.txt_config_mgr.activity_rogue_diary_config_mgr,
                           *(_DWORD *)(v4 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v49);
      if ( !point_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v50,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "tryGetProgressResumeDungeonAndBornData",
          1189);
        v33 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                &v50,
                (const char (*)[63])"[RogueDiary] findRogueDiaryPortalExcelConfig failed, group_id:");
        v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v33,
                (const unsigned int *)(v4 + 32));
        v35 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v34, (const char (*)[14])", dungeon_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &this->dungeon_id_);
        common::milog::MiLogStream::~MiLogStream(&v50);
        result = -1;
        goto LABEL_80;
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v49);
      v36 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49);
      group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(
                                  &v36->design_config.lua_config_mgr,
                                  *(_DWORD *)(v4 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v49);
      if ( !group_script_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v50,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "tryGetProgressResumeDungeonAndBornData",
          1195);
        v37 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                &v50,
                (const char (*)[54])"[RogueDiary] findGroupScriptConfig failed, group_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, (const unsigned int *)(v4 + 32));
        common::milog::MiLogStream::~MiLogStream(&v50);
        result = -1;
        goto LABEL_80;
      }
      if ( *(_BYTE *)(((unsigned __int64)&point_config_ptr->point_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)point_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&point_config_ptr->point_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&point_config_ptr->point_id);
      }
      point_script_config_ptr = GroupScriptConfig::findPointConfig(group_script_config_ptr, point_config_ptr->point_id);
      if ( !point_script_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v50,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "tryGetProgressResumeDungeonAndBornData",
          1201);
        v38 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v50,
                (const char (*)[48])"[RogueDiary] findPointConfig failed, point_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &point_config_ptr->point_id);
        common::milog::MiLogStream::~MiLogStream(&v50);
        result = -1;
        goto LABEL_80;
      }
      if ( ((unsigned __int8)pos & 7) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(pos, 12LL);
      }
      if ( (((unsigned __int8)point_script_config_ptr + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&point_script_config_ptr->pos >> 3)
                                                                            + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&point_script_config_ptr->pos >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->pos.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)point_script_config_ptr + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->pos.z
                                                                               + 3) >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load_n(&point_script_config_ptr->pos, 12LL);
      }
      *(_QWORD *)&pos->x = *(_QWORD *)&point_script_config_ptr->pos.x;
      pos->z = point_script_config_ptr->pos.z;
      if ( ((unsigned __int8)rot & 7) >= *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(rot, 12LL);
      }
      if ( *(char *)(((unsigned __int64)&point_script_config_ptr->rot >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->rot.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)point_script_config_ptr + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->rot.z
                                                                               + 3) >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load_n(&point_script_config_ptr->rot, 12LL);
      }
      *(_QWORD *)&rot->x = *(_QWORD *)&point_script_config_ptr->rot.x;
      rot->z = point_script_config_ptr->rot.z;
    }
    else
    {
      if ( ((unsigned __int8)pos & 7) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(pos, 12LL);
      }
      if ( (((unsigned __int8)script_config_ptr - 52) & 7) >= *(_BYTE *)(((unsigned __int64)&script_config_ptr->born_pos >> 3)
                                                                       + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&script_config_ptr->born_pos >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&script_config_ptr->born_pos.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)script_config_ptr - 41) & 7) >= *(_BYTE *)((((unsigned __int64)&script_config_ptr->born_pos.z
                                                                         + 3) >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load_n(&script_config_ptr->born_pos, 12LL);
      }
      *(_QWORD *)&pos->x = *(_QWORD *)&script_config_ptr->born_pos.x;
      pos->z = script_config_ptr->born_pos.z;
      if ( ((unsigned __int8)rot & 7) >= *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(rot, 12LL);
      }
      if ( *(char *)(((unsigned __int64)&script_config_ptr->born_rot >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&script_config_ptr->born_rot.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)script_config_ptr - 29) & 7) >= *(_BYTE *)((((unsigned __int64)&script_config_ptr->born_rot.z
                                                                         + 3) >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load_n(&script_config_ptr->born_rot, 12LL);
      }
      *(_QWORD *)&rot->x = *(_QWORD *)&script_config_ptr->born_rot.x;
      rot->z = script_config_ptr->born_rot.z;
    }
    result = 0;
  }
LABEL_80:
  if ( v51 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1212: range 00000000143D21D2-00000000143D27D0
void __cdecl RogueDiaryRuntimeMgr::notifyDungeonInfo(RogueDiaryRuntimeMgr *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  google::protobuf::RepeatedField<unsigned int> *v4; // rax
  uint32_t cur_round; // r14d
  uint32_t CurRoundCountCorrection; // eax
  uint32_t coin; // ecx
  uint32_t time; // ecx
  google::protobuf::RepeatedPtrField<proto::RogueDiaryRoomInfo> *v9; // rdx
  std::vector<std::pair<unsigned int,bool>>::iterator __for_begin; // [rsp+10h] [rbp-120h] BYREF
  std::vector<std::pair<unsigned int,bool>>::iterator __for_end; // [rsp+18h] [rbp-118h] BYREF
  std::vector<std::pair<unsigned int,bool>> *__for_range; // [rsp+20h] [rbp-110h]
  const std::pair<unsigned int,bool> *v13; // [rsp+28h] [rbp-108h]
  std::tuple_element<0,const std::pair<unsigned int,bool> >::type *config_id; // [rsp+30h] [rbp-100h]
  std::tuple_element<1,const std::pair<unsigned int,bool> >::type *is_can_hard; // [rsp+38h] [rbp-F8h]
  char v16[240]; // [rsp+40h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 120 11 notify:1213";
  *(_QWORD *)(v1 + 16) = RogueDiaryRuntimeMgr::notifyDungeonInfo;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862724] = -218103808;
  v3[536862725] = -202116109;
  proto::RogueDiaryDungeonInfoNotify::RogueDiaryDungeonInfoNotify((proto::RogueDiaryDungeonInfoNotify *const)(v1 + 32));
  __for_range = &this->round_room_config_vec_;
  __for_begin._M_current = std::vector<std::pair<unsigned int,bool>>::begin(&this->round_room_config_vec_)._M_current;
  __for_end._M_current = std::vector<std::pair<unsigned int,bool>>::end(&this->round_room_config_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::pair<unsigned int,bool> *,std::vector<std::pair<unsigned int,bool>>>(
            &__for_begin,
            &__for_end) )
  {
    v13 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,bool> *,std::vector<std::pair<unsigned int,bool>>>::operator*(&__for_begin);
    config_id = (std::tuple_element<0,const std::pair<unsigned int,bool> >::type *)std::get<0ul,unsigned int,bool>(v13);
    is_can_hard = (std::tuple_element<1,const std::pair<unsigned int,bool> >::type *)std::get<1ul,unsigned int,bool>(v13);
    if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(config_id);
    }
    proto::RogueDiaryDungeonInfoNotify::add_round_monster_list(
      (proto::RogueDiaryDungeonInfoNotify *const)(v1 + 32),
      *config_id);
    __gnu_cxx::__normal_iterator<std::pair<unsigned int,bool> *,std::vector<std::pair<unsigned int,bool>>>::operator++(&__for_begin);
  }
  v4 = proto::RogueDiaryDungeonInfoNotify::mutable_round_card_list((proto::RogueDiaryDungeonInfoNotify *const)(v1 + 32));
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->chosen_card_vec_, v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->stage_id_);
  }
  proto::RogueDiaryDungeonInfoNotify::set_stage_id(
    (proto::RogueDiaryDungeonInfoNotify *const)(v1 + 32),
    this->stage_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_difficulty_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_difficulty_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_difficulty_);
  }
  proto::RogueDiaryDungeonInfoNotify::set_difficulty(
    (proto::RogueDiaryDungeonInfoNotify *const)(v1 + 32),
    this->cur_difficulty_);
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->dungeon_id_);
  }
  proto::RogueDiaryDungeonInfoNotify::set_dungeon_id(
    (proto::RogueDiaryDungeonInfoNotify *const)(v1 + 32),
    this->dungeon_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_round_);
  }
  cur_round = this->cur_round_;
  CurRoundCountCorrection = RogueDiaryRuntimeMgr::getCurRoundCountCorrection(this);
  proto::RogueDiaryDungeonInfoNotify::set_cur_round(
    (proto::RogueDiaryDungeonInfoNotify *const)(v1 + 32),
    cur_round + CurRoundCountCorrection);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_room_);
  }
  proto::RogueDiaryDungeonInfoNotify::set_cur_room(
    (proto::RogueDiaryDungeonInfoNotify *const)(v1 + 32),
    this->cur_room_);
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->coin_);
  }
  coin = this->coin_;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_coin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_round_coin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_round_coin_);
  }
  proto::RogueDiaryDungeonInfoNotify::set_coin(
    (proto::RogueDiaryDungeonInfoNotify *const)(v1 + 32),
    coin + this->cur_round_coin_);
  if ( *(_BYTE *)(((unsigned __int64)&this->time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->time_);
  }
  time = this->time_;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_round_time_);
  }
  proto::RogueDiaryDungeonInfoNotify::set_time(
    (proto::RogueDiaryDungeonInfoNotify *const)(v1 + 32),
    time + this->cur_round_time_);
  v9 = proto::RogueDiaryDungeonInfoNotify::mutable_room_list((proto::RogueDiaryDungeonInfoNotify *const)(v1 + 32));
  RogueDiaryRuntimeMgr::fillRogueDiaryRoomInfo(this, v9);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 32));
  proto::RogueDiaryDungeonInfoNotify::~RogueDiaryDungeonInfoNotify((proto::RogueDiaryDungeonInfoNotify *const)(v1 + 32));
  if ( v16 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1233: range 00000000143D2876-00000000143D34C7
void __cdecl RogueDiaryRuntimeMgr::notifyRepairInfo(RogueDiaryRuntimeMgr *const this, bool is_resume_repair)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  ActivityRogueDiaryExcelConfigMgr *p_activity_rogue_diary_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  google::protobuf::RepeatedField<unsigned int> *v7; // rax
  google::protobuf::RepeatedField<unsigned int> *v8; // rax
  uint64_t *v9; // rax
  proto::RogueDiaryAvatar *v10; // rdx
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v11; // rax
  _DWORD *v12; // rdx
  common::milog::MiLogStream *v14; // rax
  google::protobuf::RepeatedField<unsigned int> *v15; // rax
  google::protobuf::RepeatedField<unsigned int> *v16; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v17; // rax
  _DWORD *v18; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  AvatarFashionExcelConfigMgr *p_avatar_fashion_config_mgr; // rcx
  PlayerAvatarComp *AvatarComp; // r14
  google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar> *v23; // rdx
  google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar> *v24; // rdx
  google::protobuf::RepeatedPtrField<proto::RogueDiaryRoomInfo> *v25; // rdx
  std::vector<long unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-1F8h] BYREF
  std::vector<long unsigned int>::iterator __for_end; // [rsp+20h] [rbp-1F0h] BYREF
  const data::RogueDiaryStageExcelConfig *stage_config_ptr; // [rsp+28h] [rbp-1E8h]
  std::vector<long unsigned int> *__for_range; // [rsp+30h] [rbp-1E0h]
  std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-1D8h]
  uint64_t guid; // [rsp+40h] [rbp-1D0h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+48h] [rbp-1C8h]
  proto::RogueDiaryAvatar *proto_rogue_diary_avatar; // [rsp+50h] [rbp-1C0h]
  proto::ActivityDungeonAvatar *proto_activity_dungeon_avatar; // [rsp+58h] [rbp-1B8h]
  const data::TrialAvatarExcelConfig *trial_avatar_config_ptr; // [rsp+60h] [rbp-1B0h]
  const data::AvatarReplaceCostumeExcelConfig *avatar_replace_costume_config_ptr; // [rsp+68h] [rbp-1A8h]
  std::shared_ptr<Config> v37; // [rsp+70h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v38; // [rsp+80h] [rbp-190h] BYREF
  char v39[368]; // [rsp+A0h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 trial_id:1274 64 192 11 notify:1245";
  *(_QWORD *)(v2 + 16) = RogueDiaryRuntimeMgr::notifyRepairInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862728] = -202116109;
  v4[536862729] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_have_progress_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_progress_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_have_progress_);
  }
  if ( !this->is_have_progress_ )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "notifyRepairInfo",
      1236);
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
      &v38,
      (const char (*)[49])"[RogueDiary] runtime mgr have no progress failed");
    common::milog::MiLogStream::~MiLogStream(&v38);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v37);
    p_activity_rogue_diary_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37)->design_config.txt_config_mgr.activity_rogue_diary_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->stage_id_);
    }
    stage_config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryStageExcelConfig(
                         p_activity_rogue_diary_config_mgr,
                         this->stage_id_);
    std::shared_ptr<Config>::~shared_ptr(&v37);
    if ( stage_config_ptr )
    {
      proto::RogueDiaryRepairInfoNotify::RogueDiaryRepairInfoNotify((proto::RogueDiaryRepairInfoNotify *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->stage_id_);
      }
      proto::RogueDiaryRepairInfoNotify::set_stage_id(
        (proto::RogueDiaryRepairInfoNotify *const)(v2 + 64),
        this->stage_id_);
      if ( is_resume_repair )
      {
        v7 = proto::RogueDiaryRepairInfoNotify::mutable_rand_card_list((proto::RogueDiaryRepairInfoNotify *const)(v2 + 64));
        common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->resume_optional_card_vec_, v7);
        v8 = proto::RogueDiaryRepairInfoNotify::mutable_chosen_card_list((proto::RogueDiaryRepairInfoNotify *const)(v2 + 64));
        common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->resume_chosen_card_vec_, v8);
        __for_range = &this->onstage_guid_vec_;
        __for_begin._M_current = std::vector<unsigned long>::begin(&this->onstage_guid_vec_)._M_current;
        __for_end._M_current = std::vector<unsigned long>::end(&this->onstage_guid_vec_)._M_current;
        while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(&__for_begin, &__for_end) )
        {
          v9 = __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
            v9 = (uint64_t *)__asan_report_load8(v9);
          guid = *v9;
          v10 = proto::RogueDiaryRepairInfoNotify::add_select_avatar_list((proto::RogueDiaryRepairInfoNotify *const)(v2 + 64));
          RogueDiaryRuntimeMgr::fillSingleRogueDiaryAvatarProto(this, guid, v10);
          __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++(&__for_begin);
        }
        __for_range_0 = &this->resume_select_card_vec_;
        __for_begin._M_current = (unsigned __int64 *)std::vector<unsigned int>::begin(&this->resume_select_card_vec_)._M_current;
        __for_end._M_current = (unsigned __int64 *)std::vector<unsigned int>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
        {
          v11 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
          v12 = v11;
          if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v11);
          }
          *(_DWORD *)(v2 + 48) = *v12;
          if ( common::tools::MiscUtils::isContains<unsigned int>(
                 &this->resume_chosen_card_vec_,
                 (const unsigned int *)(v2 + 48))
            || common::tools::MiscUtils::isContains<unsigned int>(
                 &this->resume_optional_card_vec_,
                 (const unsigned int *)(v2 + 48)) )
          {
            common::milog::MiLogStream::create(
              &v38,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
              "notifyRepairInfo",
              1260);
            v14 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                    &v38,
                    (const char (*)[34])"[RogueDiary] show select card_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v38);
            proto::RogueDiaryRepairInfoNotify::add_select_card_list(
              (proto::RogueDiaryRepairInfoNotify *const)(v2 + 64),
              *(_DWORD *)(v2 + 48));
          }
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
        }
      }
      else
      {
        v15 = proto::RogueDiaryRepairInfoNotify::mutable_rand_card_list((proto::RogueDiaryRepairInfoNotify *const)(v2 + 64));
        common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->optional_card_vec_, v15);
        v16 = proto::RogueDiaryRepairInfoNotify::mutable_chosen_card_list((proto::RogueDiaryRepairInfoNotify *const)(v2 + 64));
        common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->chosen_card_vec_, v16);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->is_have_enter_dungeon_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 35) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_enter_dungeon_ >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_have_enter_dungeon_);
      }
      if ( !this->is_have_enter_dungeon_ )
      {
        __for_range_1 = &stage_config_ptr->trial_avatar_list;
        __for_begin._M_current = (unsigned __int64 *)std::vector<unsigned int>::begin(&stage_config_ptr->trial_avatar_list)._M_current;
        __for_end._M_current = (unsigned __int64 *)std::vector<unsigned int>::end(__for_range_1)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_begin,
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end) )
        {
          v17 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
          v18 = v17;
          if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v17);
          }
          *(_DWORD *)(v2 + 48) = *v18;
          proto_rogue_diary_avatar = proto::RogueDiaryRepairInfoNotify::add_trial_avatar_list((proto::RogueDiaryRepairInfoNotify *const)(v2 + 64));
          proto_activity_dungeon_avatar = proto::RogueDiaryAvatar::mutable_avatar(proto_rogue_diary_avatar);
          proto::ActivityDungeonAvatar::set_avatar_id(proto_activity_dungeon_avatar, *(_DWORD *)(v2 + 48));
          proto::ActivityDungeonAvatar::set_is_trial(proto_activity_dungeon_avatar, 1);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v37);
          v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37);
          trial_avatar_config_ptr = data::TrialAvatarExcelConfigMgrBase::findTrialAvatarExcelConfig(
                                      &v19->design_config.txt_config_mgr.trial_avatar_config_mgr,
                                      *(_DWORD *)(v2 + 48));
          std::shared_ptr<Config>::~shared_ptr(&v37);
          if ( trial_avatar_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->specified_costume_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)trial_avatar_config_ptr + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->specified_costume_id >> 3)
                                                                                      + 0x7FFF8000) )
            {
              __asan_report_load4(&trial_avatar_config_ptr->specified_costume_id);
            }
            if ( trial_avatar_config_ptr->specified_costume_id )
            {
              proto::ActivityDungeonAvatar::set_costume_id(
                proto_activity_dungeon_avatar,
                trial_avatar_config_ptr->specified_costume_id);
            }
            else
            {
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v37);
              p_avatar_fashion_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37)->design_config.txt_config_mgr.avatar_fashion_config_mgr;
              if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&trial_avatar_config_ptr->avatar.avatar_id);
              }
              avatar_replace_costume_config_ptr = data::AvatarFashionExcelConfigMgrBase::findAvatarReplaceCostumeExcelConfig(
                                                    p_avatar_fashion_config_mgr,
                                                    trial_avatar_config_ptr->avatar.avatar_id);
              std::shared_ptr<Config>::~shared_ptr(&v37);
              if ( avatar_replace_costume_config_ptr )
              {
                if ( *(_BYTE *)(((unsigned __int64)&avatar_replace_costume_config_ptr->replace_costume_id >> 3)
                              + 0x7FFF8000) != 0
                  && (char)((((_BYTE)avatar_replace_costume_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_replace_costume_config_ptr->replace_costume_id >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(&avatar_replace_costume_config_ptr->replace_costume_id);
                }
                proto::ActivityDungeonAvatar::set_costume_id(
                  proto_activity_dungeon_avatar,
                  avatar_replace_costume_config_ptr->replace_costume_id);
              }
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v38,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
              "notifyRepairInfo",
              1283);
            v20 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                    &v38,
                    (const char (*)[52])"findTrialAvatarExcelConfig failed, trial_avatar_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v38);
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
        }
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        AvatarComp = Player::getAvatarComp(this->player_);
        std::function<ForeachPolicy ()(FormalAvatar const&)>::function<RogueDiaryRuntimeMgr::notifyRepairInfo(bool)::{lambda(FormalAvatar const&)#1},void,void>(
          (std::function<ForeachPolicy(const FormalAvatar&)> *const)&v38,
          (RogueDiaryRuntimeMgr::notifyRepairInfo::<lambda(const FormalAvatar&)>)(v2 + 64));
        PlayerAvatarComp::foreachFormalAvatar(AvatarComp, (std::function<ForeachPolicy(const FormalAvatar&)> *)&v38);
        std::function<ForeachPolicy ()(FormalAvatar const&)>::~function((std::function<ForeachPolicy(const FormalAvatar&)> *const)&v38);
      }
      else
      {
        v23 = proto::RogueDiaryRepairInfoNotify::mutable_trial_avatar_list((proto::RogueDiaryRepairInfoNotify *const)(v2 + 64));
        RogueDiaryRuntimeMgr::fillRogueDiaryTrialAvatarProto(this, v23);
        v24 = proto::RogueDiaryRepairInfoNotify::mutable_avatar_list((proto::RogueDiaryRepairInfoNotify *const)(v2 + 64));
        RogueDiaryRuntimeMgr::fillRogueDiaryFormalAvatarProto(this, v24);
      }
      v25 = proto::RogueDiaryRepairInfoNotify::mutable_room_list((proto::RogueDiaryRepairInfoNotify *const)(v2 + 64));
      RogueDiaryRuntimeMgr::fillRogueDiaryRoomInfo(this, v25);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 64));
      proto::RogueDiaryRepairInfoNotify::~RogueDiaryRepairInfoNotify((proto::RogueDiaryRepairInfoNotify *const)(v2 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "notifyRepairInfo",
        1242);
      v6 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
             &v38,
             (const char (*)[62])"[RogueDiary] findRogueDiaryStageExcelConfig failed, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->stage_id_);
      common::milog::MiLogStream::~MiLogStream(&v38);
    }
  }
  if ( v39 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1300: range 00000000143D27D2-00000000143D2875
ForeachPolicy __cdecl RogueDiaryRuntimeMgr::notifyRepairInfo(bool)::{lambda(FormalAvatar const&)#1}::operator()(
        const RogueDiaryRuntimeMgr::notifyRepairInfo::<lambda(const FormalAvatar&)> *const __closure,
        const FormalAvatar *formal_avatar)
{
  uint32_t AvatarId; // edx
  uint32_t CostumeId; // edx
  proto::RogueDiaryAvatar *proto_rogue_diary_avatar; // [rsp+10h] [rbp-10h]
  proto::ActivityDungeonAvatar *proto_activity_dungeon_avatar; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  proto_rogue_diary_avatar = proto::RogueDiaryRepairInfoNotify::add_avatar_list(__closure->__notify);
  proto_activity_dungeon_avatar = proto::RogueDiaryAvatar::mutable_avatar(proto_rogue_diary_avatar);
  AvatarId = Avatar::getAvatarId(formal_avatar);
  proto::ActivityDungeonAvatar::set_avatar_id(proto_activity_dungeon_avatar, AvatarId);
  proto::ActivityDungeonAvatar::set_is_trial(proto_activity_dungeon_avatar, 0);
  CostumeId = Avatar::getCostumeId(formal_avatar);
  proto::ActivityDungeonAvatar::set_costume_id(proto_activity_dungeon_avatar, CostumeId);
  return 0;
};

// Line 1322: range 00000000143D34C8-00000000143D390F
void __cdecl RogueDiaryRuntimeMgr::fillSimpleAvatarProto(
        const RogueDiaryRuntimeMgr *const this,
        const std::vector<long unsigned int> *guid_vec,
        google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar> *avatar_list)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer v8; // rax
  std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer v9; // rax
  std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer v10; // rax
  PlayerAvatarComp *AvatarComp; // rax
  std::vector<long unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-E8h] BYREF
  std::vector<long unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-E0h] BYREF
  const std::vector<long unsigned int> *__for_range; // [rsp+38h] [rbp-D8h]
  proto::RogueDiaryAvatar *proto_rogue_diary_avatar; // [rsp+40h] [rbp-D0h]
  proto::ActivityDungeonAvatar *proto_activity_dungeon_avatar; // [rsp+48h] [rbp-C8h]
  common::milog::MiLogStream v18; // [rsp+50h] [rbp-C0h] BYREF
  char v19[160]; // [rsp+70h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 9 guid:1323 64 8 9 iter:1325 96 8 17 profire_pair:1342";
  *(_QWORD *)(v3 + 16) = RogueDiaryRuntimeMgr::fillSimpleAvatarProto;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  __for_range = guid_vec;
  __for_begin._M_current = std::vector<unsigned long>::begin(guid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned long>::end(guid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned long const*,std::vector<unsigned long>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator*(&__for_begin);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8(v6);
    *(_QWORD *)(v3 + 32) = *(_QWORD *)v6;
    *(std::unordered_map<long unsigned int,RogueDiaryAvatarData>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned long,RogueDiaryAvatarData>::find(
                                                                                                 &this->guid_avatar_data_map_,
                                                                                                 (const std::unordered_map<long unsigned int,RogueDiaryAvatarData>::key_type *)(v3 + 32));
    *(std::unordered_map<long unsigned int,RogueDiaryAvatarData>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned long,RogueDiaryAvatarData>::end(&this->guid_avatar_data_map_);
    if ( std::__detail::operator==<std::pair<unsigned long const,RogueDiaryAvatarData>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,RogueDiaryAvatarData>,false> *)(v3 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,RogueDiaryAvatarData>,false> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "fillSimpleAvatarProto",
        1328);
      v7 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
             &v18,
             (const char (*)[49])"[RogueDiary] find guid in data map failed, guid:");
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, (const unsigned __int64 *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
    else
    {
      proto_rogue_diary_avatar = google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar>::Add(avatar_list);
      proto_activity_dungeon_avatar = proto::RogueDiaryAvatar::mutable_avatar(proto_rogue_diary_avatar);
      v8 = std::__detail::_Node_const_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v8->second >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v8->second >> 3) + 0x7FFF8000) <= 3 )
      {
        v8 = (std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer)__asan_report_load4(&v8->second);
      }
      proto::RogueDiaryAvatar::set_level(proto_rogue_diary_avatar, v8->second.level);
      v9 = std::__detail::_Node_const_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v9->second.trial_config_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v9->second.trial_config_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v9 = (std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer)__asan_report_load4(&v9->second.trial_config_id);
      }
      if ( v9->second.trial_config_id )
      {
        v10 = std::__detail::_Node_const_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false> *const)(v3 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v10->second.trial_config_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v10->second.trial_config_id >> 3) + 0x7FFF8000) <= 3 )
        {
          v10 = (std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer)__asan_report_load4(&v10->second.trial_config_id);
        }
        proto::ActivityDungeonAvatar::set_avatar_id(proto_activity_dungeon_avatar, v10->second.trial_config_id);
        proto::ActivityDungeonAvatar::set_is_trial(proto_activity_dungeon_avatar, 1);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        AvatarComp = Player::getAvatarComp(this->player_);
        *(std::pair<unsigned int,unsigned int> *)(v3 + 96) = PlayerAvatarComp::getAvatarProfilePicFromAvatarOrSnapshot(
                                                               AvatarComp,
                                                               *(_QWORD *)(v3 + 32));
        proto::ActivityDungeonAvatar::set_avatar_id(proto_activity_dungeon_avatar, *(_DWORD *)(v3 + 96));
        proto::ActivityDungeonAvatar::set_is_trial(proto_activity_dungeon_avatar, 0);
        proto::ActivityDungeonAvatar::set_costume_id(proto_activity_dungeon_avatar, *(_DWORD *)(v3 + 100));
      }
    }
    __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator++(&__for_begin);
  }
  if ( v19 == (char *)v3 )
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
};

// Line 1352: range 00000000143D3910-00000000143D4218
void __fastcall RogueDiaryRuntimeMgr::fillSingleRogueDiaryAvatarProto(
        const RogueDiaryRuntimeMgr *const this,
        uint64_t guid,
        proto::RogueDiaryAvatar *proto_avatar)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer v7; // rax
  std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer v8; // rdx
  uint32_t *p_round; // rax
  std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer v10; // rax
  PlayerAvatarComp *AvatarComp; // rax
  std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer v12; // rax
  std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer v13; // rax
  PlayerAvatarComp *v14; // rax
  std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer v15; // rdx
  uint32_t *v16; // rax
  std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer v17; // rax
  char v18; // al
  PlayerAvatarComp *v19; // rax
  std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer v21; // rdx
  uint32_t *v22; // rax
  std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer v23; // rax
  char v24; // al
  std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer v25; // rdx
  uint32_t *v26; // rax
  PlayerAvatarComp *v27; // rax
  std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  proto::ActivityDungeonAvatar *proto_activity_dungeon_avatar; // [rsp+28h] [rbp-148h]
  common::milog::MiLogStream v32; // [rsp+30h] [rbp-140h] BYREF
  char v33[288]; // [rsp+50h] [rbp-120h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 8 9 iter:1353 64 8 26 duplicate_avatar_guid:1362 96 8 13 dup_iter:1397 128 8 9 guid:1351 16"
                        "0 8 17 profire_pair:1373 192 16 15 avatar_ptr:1384 224 16 19 dup_avatar_ptr:1404";
  *(_QWORD *)(v3 + 16) = RogueDiaryRuntimeMgr::fillSingleRogueDiaryAvatarProto;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -219021312;
  v5[536862727] = -202178560;
  *(_QWORD *)(v3 + 128) = guid;
  *(std::unordered_map<long unsigned int,RogueDiaryAvatarData>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned long,RogueDiaryAvatarData>::find(
                                                                                               &this->guid_avatar_data_map_,
                                                                                               (const std::unordered_map<long unsigned int,RogueDiaryAvatarData>::key_type *)(v3 + 128));
  *(std::unordered_map<long unsigned int,RogueDiaryAvatarData>::const_iterator *)(v3 + 160) = std::unordered_map<unsigned long,RogueDiaryAvatarData>::end(&this->guid_avatar_data_map_);
  if ( std::__detail::operator==<std::pair<unsigned long const,RogueDiaryAvatarData>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,RogueDiaryAvatarData>,false> *)(v3 + 32),
         (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,RogueDiaryAvatarData>,false> *)(v3 + 160)) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "fillSingleRogueDiaryAvatarProto",
      1356);
    v6 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v32,
           (const char (*)[49])"[RogueDiary] find guid in data map failed, guid:");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, (const unsigned __int64 *)(v3 + 128));
    common::milog::MiLogStream::~MiLogStream(&v32);
  }
  else
  {
    proto_activity_dungeon_avatar = proto::RogueDiaryAvatar::mutable_avatar(proto_avatar);
    v7 = std::__detail::_Node_const_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false> *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v7->second >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v7->second >> 3) + 0x7FFF8000) <= 3 )
    {
      v7 = (std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer)__asan_report_load4(&v7->second);
    }
    proto::RogueDiaryAvatar::set_level(proto_avatar, v7->second.level);
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false> *const)(v3 + 32));
    p_round = &v8->second.round;
    if ( *(_BYTE *)(((unsigned __int64)p_round >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_round & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_round >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_round);
    }
    proto::RogueDiaryAvatar::set_tired_round(proto_avatar, v8->second.round);
    *(_QWORD *)(v3 + 64) = 0LL;
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false> *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v10->second.trial_config_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v10->second.trial_config_id >> 3) + 0x7FFF8000) <= 3 )
    {
      v10 = (std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer)__asan_report_load4(&v10->second.trial_config_id);
    }
    if ( v10->second.trial_config_id )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      AvatarComp = Player::getAvatarComp(this->player_);
      *(std::pair<unsigned int,unsigned int> *)(v3 + 160) = PlayerAvatarComp::getAvatarProfilePicFromAvatarOrSnapshot(
                                                              AvatarComp,
                                                              *(_QWORD *)(v3 + 128));
      v12 = std::__detail::_Node_const_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false> *const)(v3 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v12->second.trial_config_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v12->second.trial_config_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v12 = (std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer)__asan_report_load4(&v12->second.trial_config_id);
      }
      proto::ActivityDungeonAvatar::set_avatar_id(proto_activity_dungeon_avatar, v12->second.trial_config_id);
      proto::ActivityDungeonAvatar::set_is_trial(proto_activity_dungeon_avatar, 1);
      proto::ActivityDungeonAvatar::set_costume_id(proto_activity_dungeon_avatar, *(_DWORD *)(v3 + 164));
      v13 = std::__detail::_Node_const_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false> *const)(v3 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v13->second.trial_config_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v13->second.trial_config_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v13 = (std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer)__asan_report_load4(&v13->second.trial_config_id);
      }
      *(_QWORD *)(v3 + 64) = RogueDiaryRuntimeMgr::getUseOtherSameAvatarGuid(this, 1, v13->second.trial_config_id);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v14 = Player::getAvatarComp(this->player_);
      *(std::pair<unsigned int,unsigned int> *)(v3 + 160) = PlayerAvatarComp::getAvatarProfilePicFromAvatarOrSnapshot(
                                                              v14,
                                                              *(_QWORD *)(v3 + 128));
      proto::ActivityDungeonAvatar::set_avatar_id(proto_activity_dungeon_avatar, *(_DWORD *)(v3 + 160));
      proto::ActivityDungeonAvatar::set_is_trial(proto_activity_dungeon_avatar, 0);
      proto::ActivityDungeonAvatar::set_costume_id(proto_activity_dungeon_avatar, *(_DWORD *)(v3 + 164));
      *(_QWORD *)(v3 + 64) = RogueDiaryRuntimeMgr::getUseOtherSameAvatarGuid(this, 0, *(_DWORD *)(v3 + 160));
    }
    v15 = std::__detail::_Node_const_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false> *const)(v3 + 32));
    v16 = &v15->second.round;
    if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v16);
    }
    if ( v15->second.round )
      goto LABEL_29;
    v17 = std::__detail::_Node_const_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false> *const)(v3 + 32));
    if ( *(char *)(((unsigned __int64)&v17->second.is_ban >> 3) + 0x7FFF8000) < 0 )
      v17 = (std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer)__asan_report_load1(&v17->second.is_ban);
    if ( v17->second.is_ban )
LABEL_29:
      v18 = 1;
    else
      v18 = 0;
    if ( v18 )
      proto::RogueDiaryAvatar::add_disable_status_list(proto_avatar, ROGUE_DIARY_AVATAR_DISABLE_TIRED);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v19 = Player::getAvatarComp(this->player_);
    PlayerAvatarComp::findAvatar<MirrorAvatar>((const PlayerAvatarComp *const)(v3 + 192), (uint64_t)v19);
    if ( std::operator!=<MirrorAvatar>((const std::shared_ptr<MirrorAvatar> *)(v3 + 192), 0LL) )
    {
      v20 = std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
      if ( Creature::getLifeState(v20) == LIFE_DEAD )
        proto::RogueDiaryAvatar::add_disable_status_list(proto_avatar, ROGUE_DIARY_AVATAR_DISABLE_DEATH);
    }
    if ( *(_QWORD *)(v3 + 64) )
    {
      *(std::unordered_map<long unsigned int,RogueDiaryAvatarData>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned long,RogueDiaryAvatarData>::find(
                                                                                                   &this->guid_avatar_data_map_,
                                                                                                   (const std::unordered_map<long unsigned int,RogueDiaryAvatarData>::key_type *)(v3 + 64));
      *(std::unordered_map<long unsigned int,RogueDiaryAvatarData>::const_iterator *)(v3 + 160) = std::unordered_map<unsigned long,RogueDiaryAvatarData>::end(&this->guid_avatar_data_map_);
      if ( !std::__detail::operator!=<std::pair<unsigned long const,RogueDiaryAvatarData>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,RogueDiaryAvatarData>,false> *)(v3 + 96),
              (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,RogueDiaryAvatarData>,false> *)(v3 + 160)) )
        goto LABEL_47;
      v21 = std::__detail::_Node_const_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false> *const)(v3 + 96));
      v22 = &v21->second.round;
      if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v22);
      }
      if ( v21->second.round )
        goto LABEL_46;
      v23 = std::__detail::_Node_const_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false> *const)(v3 + 96));
      if ( *(char *)(((unsigned __int64)&v23->second.is_ban >> 3) + 0x7FFF8000) < 0 )
        v23 = (std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer)__asan_report_load1(&v23->second.is_ban);
      if ( v23->second.is_ban )
LABEL_46:
        v24 = 1;
      else
LABEL_47:
        v24 = 0;
      if ( v24 )
      {
        proto::RogueDiaryAvatar::add_disable_status_list(proto_avatar, ROGUE_DIARY_AVATAR_DISABLE_TIRED);
        v25 = std::__detail::_Node_const_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false> *const)(v3 + 96));
        v26 = &v25->second.round;
        if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v26);
        }
        proto::RogueDiaryAvatar::set_tired_round(proto_avatar, v25->second.round);
      }
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v27 = Player::getAvatarComp(this->player_);
      PlayerAvatarComp::findAvatar<MirrorAvatar>((const PlayerAvatarComp *const)(v3 + 224), (uint64_t)v27);
      if ( std::operator!=<MirrorAvatar>((const std::shared_ptr<MirrorAvatar> *)(v3 + 224), 0LL) )
      {
        v28 = std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
        if ( Creature::getLifeState(v28) == LIFE_DEAD )
          proto::RogueDiaryAvatar::add_disable_status_list(proto_avatar, ROGUE_DIARY_AVATAR_DISABLE_DEATH);
      }
      std::shared_ptr<MirrorAvatar>::~shared_ptr((std::shared_ptr<MirrorAvatar> *const)(v3 + 224));
    }
    std::shared_ptr<MirrorAvatar>::~shared_ptr((std::shared_ptr<MirrorAvatar> *const)(v3 + 192));
  }
  if ( v33 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1413: range 00000000143D421A-00000000143D42FD
void __cdecl RogueDiaryRuntimeMgr::fillRogueDiaryTrialAvatarProto(
        const RogueDiaryRuntimeMgr *const this,
        google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar> *avatar_list)
{
  proto::RogueDiaryAvatar *v2; // rsi
  std::unordered_map<unsigned int,long unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,long unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::unordered_map<unsigned int,long unsigned int> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<unsigned int const,long unsigned int> *v7; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,long unsigned int> >::type *trial_id; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,long unsigned int> >::type *guid; // [rsp+38h] [rbp-8h]

  __for_range = &this->trial_id_to_guid_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned long>::begin(&this->trial_id_to_guid_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned long>::end(&this->trial_id_to_guid_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned long>,false>(&__for_begin, &__for_end) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned long>,false,false>::operator*(&__for_begin);
    trial_id = std::get<0ul,unsigned int const,unsigned long>(v7);
    guid = (std::tuple_element<1,const std::pair<unsigned int const,long unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned long>(v7);
    v2 = google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar>::Add(avatar_list);
    if ( *(_BYTE *)(((unsigned __int64)guid >> 3) + 0x7FFF8000) )
      __asan_report_load8(guid);
    RogueDiaryRuntimeMgr::fillSingleRogueDiaryAvatarProto(this, *guid, v2);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned long>,false,false>::operator++(&__for_begin);
  }
};

// Line 1421: range 00000000143D42FE-00000000143D43E3
void __cdecl RogueDiaryRuntimeMgr::fillRogueDiaryFormalAvatarProto(
        const RogueDiaryRuntimeMgr *const this,
        google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar> *avatar_list)
{
  proto::RogueDiaryAvatar *v2; // rsi
  std::unordered_map<unsigned int,long unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,long unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::unordered_map<unsigned int,long unsigned int> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<unsigned int const,long unsigned int> *v7; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,long unsigned int> >::type *avatar_id; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,long unsigned int> >::type *guid; // [rsp+38h] [rbp-8h]

  __for_range = &this->formal_id_to_guid_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned long>::begin(&this->formal_id_to_guid_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned long>::end(&this->formal_id_to_guid_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned long>,false>(&__for_begin, &__for_end) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned long>,false,false>::operator*(&__for_begin);
    avatar_id = std::get<0ul,unsigned int const,unsigned long>(v7);
    guid = (std::tuple_element<1,const std::pair<unsigned int const,long unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned long>(v7);
    v2 = google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar>::Add(avatar_list);
    if ( *(_BYTE *)(((unsigned __int64)guid >> 3) + 0x7FFF8000) )
      __asan_report_load8(guid);
    RogueDiaryRuntimeMgr::fillSingleRogueDiaryAvatarProto(this, *guid, v2);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned long>,false,false>::operator++(&__for_begin);
  }
};

// Line 1430: range 00000000143D43E4-00000000143D49F8
uint64_t __fastcall RogueDiaryRuntimeMgr::getUseOtherSameAvatarGuid(
        const RogueDiaryRuntimeMgr *const this,
        bool is_trial,
        uint32_t id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  uint64_t result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,long unsigned int>,false,false>::pointer v9; // rax
  TrialAvatarExcelConfigMgr *p_trial_avatar_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  PlayerAvatarComp *AvatarComp; // rax
  bool v13; // bl
  std::unordered_map<unsigned int,long unsigned int>::const_iterator __for_end; // [rsp+10h] [rbp-F0h] BYREF
  uint64_t temp_guid; // [rsp+18h] [rbp-E8h]
  const std::unordered_map<unsigned int,long unsigned int> *__for_range; // [rsp+20h] [rbp-E0h]
  const std::pair<unsigned int const,long unsigned int> *v18; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,const std::pair<unsigned int const,long unsigned int> >::type *trial_id; // [rsp+30h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,long unsigned int> >::type *guid; // [rsp+38h] [rbp-C8h]
  const data::TrialAvatarExcelConfig *trial_avatar_config_ptr_0; // [rsp+40h] [rbp-C0h]
  const data::TrialAvatarExcelConfig *trial_avatar_config_ptr; // [rsp+48h] [rbp-B8h]
  std::shared_ptr<Config> v23; // [rsp+50h] [rbp-B0h] BYREF
  common::milog::MiLogStream v24; // [rsp+60h] [rbp-A0h] BYREF
  char v25[128]; // [rsp+80h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 14 avatar_id:1440 48 4 7 id:1429 64 8 9 iter:1441";
  *(_QWORD *)(v3 + 16) = RogueDiaryRuntimeMgr::getUseOtherSameAvatarGuid;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = id;
  temp_guid = 0LL;
  if ( is_trial )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v23);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23);
    trial_avatar_config_ptr = data::TrialAvatarExcelConfigMgrBase::findTrialAvatarExcelConfig(
                                &v6->design_config.txt_config_mgr.trial_avatar_config_mgr,
                                *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v23);
    if ( !trial_avatar_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "getUseOtherSameAvatarGuid",
        1437);
      v7 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
             &v24,
             (const char (*)[65])"[RogueDiary] findTrialAvatarExcelConfig failed, trial_config_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v24);
      result = 0LL;
      goto LABEL_32;
    }
    if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&trial_avatar_config_ptr->avatar.avatar_id);
    }
    *(_DWORD *)(v3 + 32) = trial_avatar_config_ptr->avatar.avatar_id;
    *(std::unordered_map<unsigned int,long unsigned int>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,unsigned long>::find(
                                                                                         &this->formal_id_to_guid_map_,
                                                                                         (const std::unordered_map<unsigned int,long unsigned int>::key_type *)(v3 + 32));
    __for_end._M_cur = std::unordered_map<unsigned int,unsigned long>::end(&this->formal_id_to_guid_map_)._M_cur;
    if ( std::__detail::operator==<std::pair<unsigned int const,unsigned long>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,long unsigned int>,false> *)(v3 + 64),
           &__for_end) )
    {
      result = 0LL;
      goto LABEL_32;
    }
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned long>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,long unsigned int>,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) )
      v9 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,long unsigned int>,false,false>::pointer)__asan_report_load8(&v9->second);
    temp_guid = v9->second;
  }
  else
  {
    __for_range = &this->trial_id_to_guid_map_;
    *(std::unordered_map<unsigned int,long unsigned int>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,unsigned long>::begin(&this->trial_id_to_guid_map_);
    __for_end._M_cur = std::unordered_map<unsigned int,unsigned long>::end(__for_range)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned long>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,long unsigned int>,false> *)(v3 + 64),
              &__for_end) )
    {
      v18 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned long>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,long unsigned int>,false,false> *const)(v3 + 64));
      trial_id = std::get<0ul,unsigned int const,unsigned long>(v18);
      guid = (std::tuple_element<1,const std::pair<unsigned int const,long unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned long>(v18);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v23);
      p_trial_avatar_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.txt_config_mgr.trial_avatar_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)trial_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)trial_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)trial_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(trial_id);
      }
      trial_avatar_config_ptr_0 = data::TrialAvatarExcelConfigMgrBase::findTrialAvatarExcelConfig(
                                    p_trial_avatar_config_mgr,
                                    *trial_id);
      std::shared_ptr<Config>::~shared_ptr(&v23);
      if ( !trial_avatar_config_ptr_0 )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "getUseOtherSameAvatarGuid",
          1455);
        v11 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                &v24,
                (const char (*)[65])"[RogueDiary] findTrialAvatarExcelConfig failed, trial_config_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, trial_id);
        common::milog::MiLogStream::~MiLogStream(&v24);
        result = 0LL;
        goto LABEL_32;
      }
      if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr_0->avatar.avatar_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr_0->avatar.avatar_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&trial_avatar_config_ptr_0->avatar.avatar_id);
      }
      if ( trial_avatar_config_ptr_0->avatar.avatar_id == *(_DWORD *)(v3 + 48) )
      {
        if ( *(_BYTE *)(((unsigned __int64)guid >> 3) + 0x7FFF8000) )
          __asan_report_load8(guid);
        temp_guid = *guid;
        break;
      }
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned long>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,long unsigned int>,false,false> *const)(v3 + 64));
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  AvatarComp = Player::getAvatarComp(this->player_);
  PlayerAvatarComp::findAvatar<MirrorAvatar>((const PlayerAvatarComp *const)&v23, (uint64_t)AvatarComp);
  v13 = std::operator!=<MirrorAvatar>(0LL, (const std::shared_ptr<MirrorAvatar> *)&v23);
  std::shared_ptr<MirrorAvatar>::~shared_ptr((std::shared_ptr<MirrorAvatar> *const)&v23);
  if ( v13 )
    result = temp_guid;
  else
    result = 0LL;
LABEL_32:
  if ( v25 == (char *)v3 )
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

// Line 1473: range 00000000143D49FA-00000000143D4C7C
void __cdecl RogueDiaryRuntimeMgr::notifySettleInfo(RogueDiaryRuntimeMgr *const this, bool is_finish)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  uint32_t cur_round; // r14d
  uint32_t CurRoundCountCorrection; // eax
  uint32_t time; // ecx
  char v8[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 11 notify:1474";
  *(_QWORD *)(v2 + 16) = RogueDiaryRuntimeMgr::notifySettleInfo;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  proto::RogueDiaryDungeonSettleNotify::RogueDiaryDungeonSettleNotify((proto::RogueDiaryDungeonSettleNotify *const)(v2 + 32));
  proto::RogueDiaryDungeonSettleNotify::set_is_finish((proto::RogueDiaryDungeonSettleNotify *const)(v2 + 32), is_finish);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_round_);
  }
  cur_round = this->cur_round_;
  CurRoundCountCorrection = RogueDiaryRuntimeMgr::getCurRoundCountCorrection(this);
  proto::RogueDiaryDungeonSettleNotify::set_cur_round(
    (proto::RogueDiaryDungeonSettleNotify *const)(v2 + 32),
    cur_round + CurRoundCountCorrection);
  if ( *(_BYTE *)(((unsigned __int64)&this->time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->time_);
  }
  time = this->time_;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_round_time_);
  }
  proto::RogueDiaryDungeonSettleNotify::set_explore_time(
    (proto::RogueDiaryDungeonSettleNotify *const)(v2 + 32),
    time + this->cur_round_time_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 32));
  proto::RogueDiaryDungeonSettleNotify::~RogueDiaryDungeonSettleNotify((proto::RogueDiaryDungeonSettleNotify *const)(v2 + 32));
  if ( v8 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1482: range 00000000143D4C7E-00000000143D5150
void __cdecl RogueDiaryRuntimeMgr::notifyTiredInfo(RogueDiaryRuntimeMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  ActivityRogueDiaryExcelConfigMgr *p_activity_rogue_diary_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  uint64_t *v7; // rax
  proto::RogueDiaryAvatar *v8; // rdx
  std::vector<long unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  std::vector<long unsigned int>::iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  const data::RogueDiaryStageExcelConfig *stage_config_ptr; // [rsp+28h] [rbp-E8h]
  std::vector<long unsigned int> *__for_range; // [rsp+30h] [rbp-E0h]
  uint64_t guid; // [rsp+38h] [rbp-D8h]
  std::shared_ptr<Config> v14; // [rsp+40h] [rbp-D0h] BYREF
  common::milog::MiLogStream v15; // [rsp+50h] [rbp-C0h] BYREF
  char v16[160]; // [rsp+70h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 56 11 notify:1489";
  *(_QWORD *)(v1 + 16) = RogueDiaryRuntimeMgr::notifyTiredInfo;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  p_activity_rogue_diary_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.activity_rogue_diary_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->stage_id_);
  }
  stage_config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryStageExcelConfig(
                       p_activity_rogue_diary_config_mgr,
                       this->stage_id_);
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( stage_config_ptr )
  {
    proto::RogueDiaryTiredAvatarNotify::RogueDiaryTiredAvatarNotify((proto::RogueDiaryTiredAvatarNotify *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->tired_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)stage_config_ptr + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_config_ptr->tired_type >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&stage_config_ptr->tired_type);
    }
    proto::RogueDiaryTiredAvatarNotify::set_tired_type(
      (proto::RogueDiaryTiredAvatarNotify *const)(v1 + 32),
      stage_config_ptr->tired_type);
    if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->tired_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)stage_config_ptr + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_config_ptr->tired_type >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&stage_config_ptr->tired_type);
    }
    if ( stage_config_ptr->tired_type == ROGUE_DIARY_TIRED_SELECT
      && !std::vector<unsigned long>::empty(&this->optional_tired_guid_vec_) )
    {
      __for_range = &this->optional_tired_guid_vec_;
      __for_begin._M_current = std::vector<unsigned long>::begin(&this->optional_tired_guid_vec_)._M_current;
      __for_end._M_current = std::vector<unsigned long>::end(&this->optional_tired_guid_vec_)._M_current;
      while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(&__for_begin, &__for_end) )
      {
        v7 = __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
          v7 = (uint64_t *)__asan_report_load8(v7);
        guid = *v7;
        v8 = proto::RogueDiaryTiredAvatarNotify::add_optianal_tired_avatar_list((proto::RogueDiaryTiredAvatarNotify *const)(v1 + 32));
        RogueDiaryRuntimeMgr::fillSingleRogueDiaryAvatarProto(this, guid, v8);
        __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++(&__for_begin);
      }
      if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->tired_reserve_avatar_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&stage_config_ptr->tired_reserve_avatar_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&stage_config_ptr->tired_reserve_avatar_count);
      }
      proto::RogueDiaryTiredAvatarNotify::set_reserve_avatar_num(
        (proto::RogueDiaryTiredAvatarNotify *const)(v1 + 32),
        stage_config_ptr->tired_reserve_avatar_count);
      proto::RogueDiaryTiredAvatarNotify::set_is_need_show((proto::RogueDiaryTiredAvatarNotify *const)(v1 + 32), 1);
    }
    else
    {
      proto::RogueDiaryTiredAvatarNotify::set_is_need_show((proto::RogueDiaryTiredAvatarNotify *const)(v1 + 32), 0);
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 32));
    proto::RogueDiaryTiredAvatarNotify::~RogueDiaryTiredAvatarNotify((proto::RogueDiaryTiredAvatarNotify *const)(v1 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "notifyTiredInfo",
      1486);
    v5 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
           &v15,
           (const char (*)[62])"[RogueDiary] findRogueDiaryStageExcelConfig failed, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->stage_id_);
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  if ( v16 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1509: range 00000000143D5152-00000000143D57C2
std::string *__cdecl RogueDiaryRuntimeMgr::getDesc[abi:cxx11](
        std::string *retstr,
        const RogueDiaryRuntimeMgr *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  char v28[544]; // [rsp+10h] [rbp-220h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 392 7 ss:1510";
  *(_QWORD *)(v2 + 16) = RogueDiaryRuntimeMgr::getDesc[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862733] = -218103808;
  v4[536862734] = -202116109;
  v4[536862735] = -202116109;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v2 + 48);
  v5 = std::operator<<<std::char_traits<char>>(v2 + 64, "[is_running:");
  if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_running_);
  v6 = std::ostream::operator<<(v5, this->is_running_);
  v7 = std::operator<<<std::char_traits<char>>(v6, ", is_have_enter_dungeon:");
  if ( *(_BYTE *)(((unsigned __int64)&this->is_have_enter_dungeon_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 35) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_enter_dungeon_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_have_enter_dungeon_);
  }
  v8 = std::ostream::operator<<(v7, this->is_have_enter_dungeon_);
  v9 = std::operator<<<std::char_traits<char>>(v8, ", stage_id:");
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->stage_id_);
  }
  v10 = std::ostream::operator<<(v9, this->stage_id_);
  v11 = std::operator<<<std::char_traits<char>>(v10, ", dungeon_id:");
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->dungeon_id_);
  }
  v12 = std::ostream::operator<<(v11, this->dungeon_id_);
  v13 = std::operator<<<std::char_traits<char>>(v12, ", difficulty:");
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_difficulty_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_difficulty_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_difficulty_);
  }
  v14 = std::ostream::operator<<(v13, this->cur_difficulty_);
  v15 = std::operator<<<std::char_traits<char>>(v14, ", group_index:");
  if ( *(_BYTE *)(((unsigned __int64)&this->group_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->group_index_);
  }
  v16 = std::ostream::operator<<(v15, this->group_index_);
  v17 = std::operator<<<std::char_traits<char>>(v16, ", cur_round:");
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_round_);
  }
  v18 = std::ostream::operator<<(v17, this->cur_round_);
  v19 = std::operator<<<std::char_traits<char>>(v18, ", cur_room_:");
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_room_);
  }
  v20 = std::ostream::operator<<(v19, this->cur_room_);
  v21 = std::operator<<<std::char_traits<char>>(v20, ", is_round_fight_finished:");
  if ( *(char *)(((unsigned __int64)&this->is_round_fight_finished_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_round_fight_finished_);
  v22 = std::ostream::operator<<(v21, this->is_round_fight_finished_);
  v23 = std::operator<<<std::char_traits<char>>(v22, ", is_round_repair_finished:");
  if ( *(_BYTE *)(((unsigned __int64)&this->is_round_repair_finished_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 15) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_round_repair_finished_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_round_repair_finished_);
  }
  v24 = std::ostream::operator<<(v23, this->is_round_repair_finished_);
  v25 = std::operator<<<std::char_traits<char>>(v24, ", is_room_fighting:");
  if ( *(char *)(((unsigned __int64)&this->is_room_fighting_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_room_fighting_);
  v26 = std::ostream::operator<<(v25, this->is_room_fighting_);
  std::operator<<<std::char_traits<char>>(v26, "]");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(retstr, v2 + 48);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v2 + 48);
  if ( v28 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF803C) = 0;
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
  return retstr;
};

// Line 1529: range 00000000143D57C4-00000000143D62E2
void __cdecl RogueDiaryRuntimeMgr::randNextRoundCardInfo(RogueDiaryRuntimeMgr *const this, bool is_retry)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const ActivityRogueDiaryExcelConfigMgr *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  std::vector<unsigned int> *p_chosen_card_vec; // rcx
  std::vector<unsigned int> *v8; // rcx
  const unsigned int *v9; // rax
  const unsigned int *v10; // rax
  _DWORD *v11; // rdx
  const unsigned int *v12; // rax
  _DWORD *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // r14
  common::milog::MiLogStream *v24; // r14
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  unsigned int __a; // [rsp+14h] [rbp-1DCh] BYREF
  uint32_t index; // [rsp+18h] [rbp-1D8h]
  uint32_t index_0; // [rsp+1Ch] [rbp-1D4h]
  unsigned __int64 val; // [rsp+20h] [rbp-1D0h] BYREF
  unsigned __int64 v38; // [rsp+28h] [rbp-1C8h] BYREF
  const ActivityRogueDiaryExcelConfigMgr *config_mgr; // [rsp+30h] [rbp-1C0h]
  const data::RogueDiaryStageExcelConfig *stage_config_ptr; // [rsp+38h] [rbp-1B8h]
  std::shared_ptr<Config> v41; // [rsp+40h] [rbp-1B0h] BYREF
  common::milog::MiLogStream v42; // [rsp+50h] [rbp-1A0h] BYREF
  std::set<unsigned int> reduce_weight_card_set; // [rsp+70h] [rbp-180h] BYREF
  char v44[336]; // [rsp+A0h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 4 18 rand_sr_count:1541 64 4 16 total_count:1547 80 4 25 actual_rand_sr_count:1548 96 4 24 "
                        "actual_rand_r_count:1549 112 4 12 card_id:1573 128 48 16 sr_card_map:1543 208 48 15 r_card_map:1544";
  *(_QWORD *)(v2 + 16) = RogueDiaryRuntimeMgr::randNextRoundCardInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862725] = -219021312;
  v4[536862726] = 62194;
  v4[536862728] = -202116109;
  std::vector<unsigned int>::clear(&this->optional_card_vec_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v41);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41)->design_config.txt_config_mgr.activity_rogue_diary_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v41);
  v5 = config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->stage_id_);
  }
  stage_config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryStageExcelConfig(v5, this->stage_id_);
  if ( stage_config_ptr )
  {
    *(_DWORD *)(v2 + 48) = ActivityRogueDiaryExcelConfigMgr::weightSelectRandSrCount(config_mgr, 0, 0);
    memset(&reduce_weight_card_set, 0, sizeof(reduce_weight_card_set));
    std::set<unsigned int>::set(&reduce_weight_card_set);
    p_chosen_card_vec = &this->chosen_card_vec_;
    if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->card_depot_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&stage_config_ptr->card_depot_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&stage_config_ptr->card_depot_id);
    }
    ActivityRogueDiaryExcelConfigMgr::getRandSrCardWeightMap(
      (std::map<unsigned int,unsigned int> *)(v2 + 128),
      config_mgr,
      stage_config_ptr->card_depot_id,
      p_chosen_card_vec,
      &reduce_weight_card_set);
    std::set<unsigned int>::~set(&reduce_weight_card_set);
    memset(&reduce_weight_card_set, 0, sizeof(reduce_weight_card_set));
    std::set<unsigned int>::set(&reduce_weight_card_set);
    v8 = &this->chosen_card_vec_;
    if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->card_depot_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&stage_config_ptr->card_depot_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&stage_config_ptr->card_depot_id);
    }
    ActivityRogueDiaryExcelConfigMgr::getRandRCardWeightMap(
      (std::map<unsigned int,unsigned int> *)(v2 + 208),
      config_mgr,
      stage_config_ptr->card_depot_id,
      v8,
      &reduce_weight_card_set);
    std::set<unsigned int>::~set(&reduce_weight_card_set);
    if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->optional_card_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&stage_config_ptr->optional_card_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&stage_config_ptr->optional_card_count);
    }
    *(_DWORD *)(v2 + 64) = stage_config_ptr->optional_card_count;
    *(_DWORD *)(v2 + 112) = std::map<unsigned int,unsigned int>::size((const std::map<unsigned int,unsigned int> *const)(v2 + 128));
    v9 = std::min<unsigned int>((const unsigned int *)(v2 + 112), (const unsigned int *)(v2 + 48));
    v10 = std::min<unsigned int>((const unsigned int *)(v2 + 64), v9);
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v10);
    }
    *(_DWORD *)(v2 + 80) = *v11;
    *(_DWORD *)(v2 + 112) = std::map<unsigned int,unsigned int>::size((const std::map<unsigned int,unsigned int> *const)(v2 + 208));
    __a = *(_DWORD *)(v2 + 64) - *(_DWORD *)(v2 + 80);
    v12 = std::min<unsigned int>(&__a, (const unsigned int *)(v2 + 112));
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v12);
    }
    *(_DWORD *)(v2 + 96) = *v13;
    if ( *(_DWORD *)(v2 + 80) || *(_DWORD *)(v2 + 96) )
    {
      for ( index = 0; index < *(_DWORD *)(v2 + 80); ++index )
      {
        *(_DWORD *)(v2 + 112) = 0;
        if ( common::tools::RandomUtils::weightSelectOne<unsigned int,unsigned int>(
               (const std::map<unsigned int,unsigned int> *)(v2 + 128),
               (unsigned int *)(v2 + 112),
               0) )
        {
          common::milog::MiLogStream::create(
            &v42,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
            "randNextRoundCardInfo",
            1565);
          v23 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                  &v42,
                  (const char (*)[55])"[RogueDiary] weightSelectOne failed, sr_card_map size:");
          v38 = std::map<unsigned int,unsigned int>::size((const std::map<unsigned int,unsigned int> *const)(v2 + 128));
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v23, &v38);
          common::milog::MiLogStream::~MiLogStream(&v42);
        }
        else
        {
          std::vector<unsigned int>::push_back(
            &this->optional_card_vec_,
            (const std::vector<unsigned int>::value_type *)(v2 + 112));
          std::map<unsigned int,unsigned int>::erase(
            (std::map<unsigned int,unsigned int> *const)(v2 + 128),
            (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 112));
        }
      }
      for ( index_0 = 0; index_0 < *(_DWORD *)(v2 + 96); ++index_0 )
      {
        *(_DWORD *)(v2 + 112) = 0;
        if ( common::tools::RandomUtils::weightSelectOne<unsigned int,unsigned int>(
               (const std::map<unsigned int,unsigned int> *)(v2 + 208),
               (unsigned int *)(v2 + 112),
               0) )
        {
          common::milog::MiLogStream::create(
            &v42,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
            "randNextRoundCardInfo",
            1576);
          v24 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                  &v42,
                  (const char (*)[54])"[RogueDiary] weightSelectOne failed, r_card_map size:");
          v38 = std::map<unsigned int,unsigned int>::size((const std::map<unsigned int,unsigned int> *const)(v2 + 208));
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v24, &v38);
          common::milog::MiLogStream::~MiLogStream(&v42);
        }
        else
        {
          std::vector<unsigned int>::push_back(
            &this->optional_card_vec_,
            (const std::vector<unsigned int>::value_type *)(v2 + 112));
          std::map<unsigned int,unsigned int>::erase(
            (std::map<unsigned int,unsigned int> *const)(v2 + 208),
            (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 112));
        }
      }
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "randNextRoundCardInfo",
        1583);
      v25 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              &v42,
              (const char (*)[51])"[RogueDiary] randNextRoundCardInfo succ, is_retry:");
      v26 = common::milog::MiLogStream::operator<<(v25, is_retry);
      v27 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v26, (const char (*)[17])", rand_sr_count:");
      v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v2 + 48));
      v29 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v28, (const char (*)[12])", sr_count:");
      v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v2 + 80));
      v31 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v30, (const char (*)[11])", r_count:");
      v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v2 + 96));
      v33 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v32,
              (const char (*)[21])", optional_card_vec:");
      common::milog::MiLogStream::operator<<<unsigned int>(v33, &this->optional_card_vec_);
      common::milog::MiLogStream::~MiLogStream(&v42);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "randNextRoundCardInfo",
        1553);
      v14 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
              &v42,
              (const char (*)[53])"[RogueDiary] optional card count 0, error! stage_id:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->stage_id_);
      v16 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v15, (const char (*)[15])", total_count:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 64));
      v18 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v17, (const char (*)[17])", rand_sr_count:");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 48));
      v20 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v19,
              (const char (*)[20])", sr_card_map size:");
      val = std::map<unsigned int,unsigned int>::size((const std::map<unsigned int,unsigned int> *const)(v2 + 128));
      v21 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v20, &val);
      v22 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v21,
              (const char (*)[19])", r_card_map size:");
      v38 = std::map<unsigned int,unsigned int>::size((const std::map<unsigned int,unsigned int> *const)(v2 + 208));
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v22, &v38);
      common::milog::MiLogStream::~MiLogStream(&v42);
    }
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 208));
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 128));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "randNextRoundCardInfo",
      1536);
    v6 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
           &v42,
           (const char (*)[62])"[RogueDiary] findRogueDiaryStageExcelConfig failed, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->stage_id_);
    common::milog::MiLogStream::~MiLogStream(&v42);
  }
  if ( v44 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 1588: range 00000000143D62E4-00000000143D6322
void __cdecl RogueDiaryRuntimeMgr::setChosenCardVec(
        RogueDiaryRuntimeMgr *const this,
        const google::protobuf::RepeatedField<unsigned int> *repeated_list)
{
  std::vector<unsigned int>::clear(&this->chosen_card_vec_);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(repeated_list, &this->chosen_card_vec_);
};

// Line 1594: range 00000000143D6324-00000000143D66DD
int32_t __cdecl RogueDiaryRuntimeMgr::checkIsInDungeonRunningState(const RogueDiaryRuntimeMgr *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->is_have_progress_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_progress_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_have_progress_);
  }
  if ( !this->is_have_progress_ )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "checkIsInDungeonRunningState",
      1597);
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
      &v2,
      (const char (*)[49])"[RogueDiary] runtime mgr have no progress failed");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_have_enter_dungeon_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 35) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_enter_dungeon_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_have_enter_dungeon_);
    }
    if ( !this->is_have_enter_dungeon_ )
    {
      common::milog::MiLogStream::create(
        &v2,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "checkIsInDungeonRunningState",
        1602);
      common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
        &v2,
        (const char (*)[49])"[RogueDiary] runtime mgr have no progress failed");
      common::milog::MiLogStream::~MiLogStream(&v2);
      return -1;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_running_);
      if ( !this->is_running_ )
      {
        common::milog::MiLogStream::create(
          &v2,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "checkIsInDungeonRunningState",
          1607);
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
          &v2,
          (const char (*)[28])"[RogueDiary] is not running");
        common::milog::MiLogStream::~MiLogStream(&v2);
        return -1;
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&this->is_settle_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&this->is_settle_);
        if ( this->is_settle_ )
        {
          common::milog::MiLogStream::create(
            &v2,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
            "checkIsInDungeonRunningState",
            1612);
          common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            &v2,
            (const char (*)[24])"[RogueDiary] is settled");
          common::milog::MiLogStream::~MiLogStream(&v2);
          return -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->is_interrupt_ >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)this - 47) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_interrupt_ >> 3)
                                                              + 0x7FFF8000) )
          {
            __asan_report_load1(&this->is_interrupt_);
          }
          if ( this->is_interrupt_ )
          {
            common::milog::MiLogStream::create(
              &v2,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
              "checkIsInDungeonRunningState",
              1617);
            common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v2,
              (const char (*)[29])"[RogueDiary] is interruptted");
            common::milog::MiLogStream::~MiLogStream(&v2);
            return -1;
          }
          else
          {
            return 0;
          }
        }
      }
    }
  }
};

// Line 1624: range 00000000143D66DE-00000000143D6975
int32_t __cdecl RogueDiaryRuntimeMgr::checkIsInDungeonInterruptState(const RogueDiaryRuntimeMgr *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->is_have_progress_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_progress_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_have_progress_);
  }
  if ( !this->is_have_progress_ )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "checkIsInDungeonInterruptState",
      1627);
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
      &v2,
      (const char (*)[49])"[RogueDiary] runtime mgr have no progress failed");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_have_enter_dungeon_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 35) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_enter_dungeon_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_have_enter_dungeon_);
    }
    if ( !this->is_have_enter_dungeon_ )
    {
      common::milog::MiLogStream::create(
        &v2,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "checkIsInDungeonInterruptState",
        1632);
      common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
        &v2,
        (const char (*)[49])"[RogueDiary] runtime mgr have no progress failed");
      common::milog::MiLogStream::~MiLogStream(&v2);
      return -1;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_running_);
      if ( !this->is_running_ )
      {
        common::milog::MiLogStream::create(
          &v2,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "checkIsInDungeonInterruptState",
          1637);
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
          &v2,
          (const char (*)[28])"[RogueDiary] is not running");
        common::milog::MiLogStream::~MiLogStream(&v2);
        return -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->is_interrupt_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this - 47) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_interrupt_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&this->is_interrupt_);
        }
        if ( this->is_interrupt_ )
          return 0;
        else
          return -1;
      }
    }
  }
};

// Line 1648: range 00000000143D6976-00000000143D6C08
int32_t __cdecl RogueDiaryRuntimeMgr::checkIsInDungeonSettleState(const RogueDiaryRuntimeMgr *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->is_have_progress_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_progress_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_have_progress_);
  }
  if ( !this->is_have_progress_ )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "checkIsInDungeonSettleState",
      1651);
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
      &v2,
      (const char (*)[49])"[RogueDiary] runtime mgr have no progress failed");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_have_enter_dungeon_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 35) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_enter_dungeon_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_have_enter_dungeon_);
    }
    if ( !this->is_have_enter_dungeon_ )
    {
      common::milog::MiLogStream::create(
        &v2,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "checkIsInDungeonSettleState",
        1656);
      common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
        &v2,
        (const char (*)[49])"[RogueDiary] runtime mgr have no progress failed");
      common::milog::MiLogStream::~MiLogStream(&v2);
      return -1;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_running_);
      if ( !this->is_running_ )
      {
        common::milog::MiLogStream::create(
          &v2,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "checkIsInDungeonSettleState",
          1661);
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
          &v2,
          (const char (*)[28])"[RogueDiary] is not running");
        common::milog::MiLogStream::~MiLogStream(&v2);
        return -1;
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&this->is_settle_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&this->is_settle_);
        if ( this->is_settle_ )
          return 0;
        else
          return -1;
      }
    }
  }
};

// Line 1672: range 00000000143D6C0A-00000000143D6F89
int32_t __cdecl RogueDiaryRuntimeMgr::checkCanRepair(const RogueDiaryRuntimeMgr *const this)
{
  int32_t ret; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  ret = RogueDiaryRuntimeMgr::checkIsInDungeonRunningState(this);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "checkCanRepair",
      1676);
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
      &v4,
      (const char (*)[49])"[RogueDiary] checkIsInDungeonRunningState failed");
    common::milog::MiLogStream::~MiLogStream(&v4);
    return ret;
  }
  if ( RogueDiaryRuntimeMgr::isInResumeRepairGadgetRoom(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->is_room_fighting_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_room_fighting_);
    if ( this->is_room_fighting_ )
    {
      common::milog::MiLogStream::create(
        &v4,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "checkCanRepair",
        1684);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        &v4,
        (const char (*)[34])"[RogueDiary] cur room is_fighting");
      common::milog::MiLogStream::~MiLogStream(&v4);
      return -1;
    }
  }
  else
  {
    if ( !RogueDiaryRuntimeMgr::isCurRoomRoundFinalRoom(this) || RogueDiaryRuntimeMgr::isCurRoomStageFinalRoom(this) )
    {
      common::milog::MiLogStream::create(
        &v4,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "checkCanRepair",
        1693);
      common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
        &v4,
        (const char (*)[43])"[RogueDiary] cur room does not need repair");
      common::milog::MiLogStream::~MiLogStream(&v4);
      return -1;
    }
    if ( *(char *)(((unsigned __int64)&this->is_round_fight_finished_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_round_fight_finished_);
    if ( !this->is_round_fight_finished_ )
    {
      common::milog::MiLogStream::create(
        &v4,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "checkCanRepair",
        1698);
      common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
        &v4,
        (const char (*)[47])"[RogueDiary] round fight is not finish, failed");
      common::milog::MiLogStream::~MiLogStream(&v4);
      return -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->is_round_repair_finished_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 15) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_round_repair_finished_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_round_repair_finished_);
    }
    if ( this->is_round_repair_finished_ )
    {
      common::milog::MiLogStream::create(
        &v4,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "checkCanRepair",
        1703);
      common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
        &v4,
        (const char (*)[46])"[RogueDiary] round repair is finished, failed");
      common::milog::MiLogStream::~MiLogStream(&v4);
      return -1;
    }
  }
  return 0;
};

// Line 1711: range 00000000143D6F8A-00000000143D710F
int32_t __cdecl RogueDiaryRuntimeMgr::getRepairInfo(RogueDiaryRuntimeMgr *const this)
{
  common::milog::MiLogStream *v1; // rbx
  int32_t ret; // [rsp+1Ch] [rbp-54h]
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-50h] BYREF
  std::string val; // [rsp+40h] [rbp-30h] BYREF

  ret = RogueDiaryRuntimeMgr::checkCanRepair(this);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "getRepairInfo",
      1715);
    v1 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v4,
           (const char (*)[37])"[RogueDiary] checkCanRepair failed, ");
    RogueDiaryRuntimeMgr::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v1, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v4);
    return ret;
  }
  else if ( RogueDiaryRuntimeMgr::isInResumeRepairGadgetRoom(this) )
  {
    RogueDiaryRuntimeMgr::notifyDungeonInfo(this);
    RogueDiaryRuntimeMgr::notifyRepairInfo(this, 1);
    return 0;
  }
  else
  {
    if ( std::vector<unsigned int>::empty(&this->optional_card_vec_) )
    {
      RogueDiaryRuntimeMgr::randNextRoundRoomInfo(this);
      RogueDiaryRuntimeMgr::randTiredAvatar(this);
      RogueDiaryRuntimeMgr::randNextRoundCardInfo(this, 0);
    }
    else
    {
      RogueDiaryRuntimeMgr::notifyTiredInfo(this);
    }
    RogueDiaryRuntimeMgr::notifyDungeonInfo(this);
    RogueDiaryRuntimeMgr::notifyRepairInfo(this, 0);
    return 0;
  }
};

// Line 1746: range 00000000143D7110-00000000143D7D51
void __cdecl RogueDiaryRuntimeMgr::randTiredAvatar(RogueDiaryRuntimeMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  ActivityRogueDiaryExcelConfigMgr *p_activity_rogue_diary_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  data::RogueDiaryTiredType tired_type; // eax
  uint64_t *v7; // rax
  proto::RogueDiaryAvatar *v8; // rdx
  uint64_t *v9; // rax
  proto::RogueDiaryAvatar *v10; // rdx
  uint64_t *v11; // rax
  proto::RogueDiaryAvatar *v12; // rdx
  uint64_t *v13; // rax
  proto::RogueDiaryAvatar *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  uint32_t reserve_count; // [rsp+14h] [rbp-1BCh]
  std::vector<long unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-1B8h] BYREF
  std::vector<long unsigned int>::iterator __for_end; // [rsp+20h] [rbp-1B0h] BYREF
  const data::RogueDiaryStageExcelConfig *stage_config_ptr; // [rsp+28h] [rbp-1A8h]
  std::vector<long unsigned int> *__for_range_2; // [rsp+30h] [rbp-1A0h]
  uint64_t guid_2; // [rsp+38h] [rbp-198h]
  std::vector<long unsigned int> *__for_range_1; // [rsp+40h] [rbp-190h]
  uint64_t guid_1; // [rsp+48h] [rbp-188h]
  std::vector<long unsigned int> *__for_range_0; // [rsp+50h] [rbp-180h]
  uint64_t guid_0; // [rsp+58h] [rbp-178h]
  std::vector<long unsigned int> *__for_range; // [rsp+60h] [rbp-170h]
  uint64_t guid; // [rsp+68h] [rbp-168h]
  std::shared_ptr<Config> v35; // [rsp+70h] [rbp-160h] BYREF
  common::milog::MiLogStream v36; // [rsp+80h] [rbp-150h] BYREF
  char v37[304]; // [rsp+A0h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 24 19 tired_guid_vec:1756 96 24 24 rand_tired_guid_vec:1786 160 56 11 notify:1753";
  *(_QWORD *)(v1 + 16) = RogueDiaryRuntimeMgr::randTiredAvatar;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234881024;
  v3[536862722] = -218959118;
  v3[536862723] = -234881024;
  v3[536862724] = -218959118;
  v3[536862726] = -218103808;
  v3[536862727] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v35);
  p_activity_rogue_diary_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35)->design_config.txt_config_mgr.activity_rogue_diary_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->stage_id_);
  }
  stage_config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryStageExcelConfig(
                       p_activity_rogue_diary_config_mgr,
                       this->stage_id_);
  std::shared_ptr<Config>::~shared_ptr(&v35);
  if ( !stage_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "randTiredAvatar",
      1750);
    v5 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
           &v36,
           (const char (*)[62])"[RogueDiary] findRogueDiaryStageExcelConfig failed, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->stage_id_);
    common::milog::MiLogStream::~MiLogStream(&v36);
    goto LABEL_58;
  }
  proto::RogueDiaryTiredAvatarNotify::RogueDiaryTiredAvatarNotify((proto::RogueDiaryTiredAvatarNotify *const)(v1 + 160));
  if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->tired_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)stage_config_ptr + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_config_ptr->tired_type >> 3)
                                                                     + 0x7FFF8000) )
  {
    __asan_report_load4(&stage_config_ptr->tired_type);
  }
  proto::RogueDiaryTiredAvatarNotify::set_tired_type(
    (proto::RogueDiaryTiredAvatarNotify *const)(v1 + 160),
    stage_config_ptr->tired_type);
  std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->tired_reserve_avatar_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&stage_config_ptr->tired_reserve_avatar_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&stage_config_ptr->tired_reserve_avatar_count);
  }
  reserve_count = stage_config_ptr->tired_reserve_avatar_count;
  if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->tired_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)stage_config_ptr + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_config_ptr->tired_type >> 3)
                                                                     + 0x7FFF8000) )
  {
    __asan_report_load4(&stage_config_ptr->tired_type);
  }
  tired_type = stage_config_ptr->tired_type;
  if ( tired_type == ROGUE_DIARY_TIRED_ALL )
  {
    std::vector<unsigned long>::operator=((std::vector<long unsigned int> *const)(v1 + 32), &this->onstage_guid_vec_);
    if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->tired_round_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)stage_config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_config_ptr->tired_round_count >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&stage_config_ptr->tired_round_count);
    }
    RogueDiaryRuntimeMgr::updateRogueDiaryAvatarTiredData(
      this,
      (const std::vector<long unsigned int> *)(v1 + 32),
      stage_config_ptr->tired_round_count);
    __for_range_2 = (std::vector<long unsigned int> *)(v1 + 32);
    __for_begin._M_current = std::vector<unsigned long>::begin((std::vector<long unsigned int> *const)(v1 + 32))._M_current;
    __for_end._M_current = std::vector<unsigned long>::end((std::vector<long unsigned int> *const)(v1 + 32))._M_current;
    while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(&__for_begin, &__for_end) )
    {
      v13 = __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        v13 = (uint64_t *)__asan_report_load8(v13);
      guid_2 = *v13;
      v14 = proto::RogueDiaryTiredAvatarNotify::add_optianal_tired_avatar_list((proto::RogueDiaryTiredAvatarNotify *const)(v1 + 160));
      RogueDiaryRuntimeMgr::fillSingleRogueDiaryAvatarProto(this, guid_2, v14);
      __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++(&__for_begin);
    }
    goto LABEL_53;
  }
  if ( tired_type > ROGUE_DIARY_TIRED_ALL )
    goto LABEL_50;
  if ( tired_type == ROGUE_DIARY_TIRED_SELECT )
  {
    std::vector<unsigned long>::operator=(&this->optional_tired_guid_vec_, &this->onstage_guid_vec_);
    __for_range = &this->optional_tired_guid_vec_;
    __for_begin._M_current = std::vector<unsigned long>::begin(&this->optional_tired_guid_vec_)._M_current;
    __for_end._M_current = std::vector<unsigned long>::end(&this->optional_tired_guid_vec_)._M_current;
    while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(&__for_begin, &__for_end) )
    {
      v7 = __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        v7 = (uint64_t *)__asan_report_load8(v7);
      guid = *v7;
      v8 = proto::RogueDiaryTiredAvatarNotify::add_optianal_tired_avatar_list((proto::RogueDiaryTiredAvatarNotify *const)(v1 + 160));
      RogueDiaryRuntimeMgr::fillSingleRogueDiaryAvatarProto(this, guid, v8);
      __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->tired_reserve_avatar_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&stage_config_ptr->tired_reserve_avatar_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&stage_config_ptr->tired_reserve_avatar_count);
    }
    proto::RogueDiaryTiredAvatarNotify::set_reserve_avatar_num(
      (proto::RogueDiaryTiredAvatarNotify *const)(v1 + 160),
      stage_config_ptr->tired_reserve_avatar_count);
    goto LABEL_53;
  }
  if ( tired_type == ROGUE_DIARY_TIRED_RANDOM )
  {
    if ( std::vector<unsigned long>::size(&this->onstage_guid_vec_) > reserve_count )
    {
      std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v1 + 96));
      common::tools::RandomUtils::randomSelect<unsigned long>(
        &this->onstage_guid_vec_,
        (std::vector<long unsigned int> *)(v1 + 96),
        reserve_count);
      std::vector<unsigned long>::operator=(
        (std::vector<long unsigned int> *const)(v1 + 32),
        (const std::vector<long unsigned int> *)(v1 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->tired_round_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)stage_config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_config_ptr->tired_round_count >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(&stage_config_ptr->tired_round_count);
      }
      RogueDiaryRuntimeMgr::updateRogueDiaryAvatarTiredData(
        this,
        (const std::vector<long unsigned int> *)(v1 + 32),
        stage_config_ptr->tired_round_count);
      __for_range_1 = (std::vector<long unsigned int> *)(v1 + 32);
      __for_begin._M_current = std::vector<unsigned long>::begin((std::vector<long unsigned int> *const)(v1 + 32))._M_current;
      __for_end._M_current = std::vector<unsigned long>::end((std::vector<long unsigned int> *const)(v1 + 32))._M_current;
      while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(&__for_begin, &__for_end) )
      {
        v11 = __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
          v11 = (uint64_t *)__asan_report_load8(v11);
        guid_1 = *v11;
        v12 = proto::RogueDiaryTiredAvatarNotify::add_optianal_tired_avatar_list((proto::RogueDiaryTiredAvatarNotify *const)(v1 + 160));
        RogueDiaryRuntimeMgr::fillSingleRogueDiaryAvatarProto(this, guid_1, v12);
        __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++(&__for_begin);
      }
      std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v1 + 96));
    }
    else
    {
      std::vector<unsigned long>::operator=((std::vector<long unsigned int> *const)(v1 + 32), &this->onstage_guid_vec_);
      if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->tired_round_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)stage_config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_config_ptr->tired_round_count >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(&stage_config_ptr->tired_round_count);
      }
      RogueDiaryRuntimeMgr::updateRogueDiaryAvatarTiredData(
        this,
        (const std::vector<long unsigned int> *)(v1 + 32),
        stage_config_ptr->tired_round_count);
      __for_range_0 = (std::vector<long unsigned int> *)(v1 + 32);
      __for_begin._M_current = std::vector<unsigned long>::begin((std::vector<long unsigned int> *const)(v1 + 32))._M_current;
      __for_end._M_current = std::vector<unsigned long>::end((std::vector<long unsigned int> *const)(v1 + 32))._M_current;
      while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(&__for_begin, &__for_end) )
      {
        v9 = __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
          v9 = (uint64_t *)__asan_report_load8(v9);
        guid_0 = *v9;
        v10 = proto::RogueDiaryTiredAvatarNotify::add_optianal_tired_avatar_list((proto::RogueDiaryTiredAvatarNotify *const)(v1 + 160));
        RogueDiaryRuntimeMgr::fillSingleRogueDiaryAvatarProto(this, guid_0, v10);
        __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++(&__for_begin);
      }
    }
  }
  else
  {
LABEL_50:
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "randTiredAvatar",
      1808);
    v15 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v36,
            (const char (*)[39])"[RogueDiary] invalid tired_type, type:");
    if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->tired_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)stage_config_ptr + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_config_ptr->tired_type >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&stage_config_ptr->tired_type);
    }
    __for_end._M_current = (unsigned __int64 *)data::enumValToStr(stage_config_ptr->tired_type);
    v16 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v15, (const char *const *)&__for_end);
    v17 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])", stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->stage_id_);
    common::milog::MiLogStream::~MiLogStream(&v36);
  }
LABEL_53:
  proto::RogueDiaryTiredAvatarNotify::set_is_need_show((proto::RogueDiaryTiredAvatarNotify *const)(v1 + 160), 1);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 160));
  common::milog::MiLogStream::create(
    &v36,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
    "randTiredAvatar",
    1814);
  v18 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
          &v36,
          (const char (*)[25])"[RogueDiary] tired_type:");
  if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->tired_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)stage_config_ptr + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_config_ptr->tired_type >> 3)
                                                                     + 0x7FFF8000) )
  {
    __asan_report_load4(&stage_config_ptr->tired_type);
  }
  __for_end._M_current = (unsigned __int64 *)data::enumValToStr(stage_config_ptr->tired_type);
  v19 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v18, (const char *const *)&__for_end);
  v20 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v19, (const char (*)[18])", tired_guid_vec:");
  v21 = common::milog::MiLogStream::operator<<<unsigned long>(v20, (const std::vector<long unsigned int> *)(v1 + 32));
  v22 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          v21,
          (const char (*)[27])", optional_tired_guid_vec:");
  common::milog::MiLogStream::operator<<<unsigned long>(v22, &this->optional_tired_guid_vec_);
  common::milog::MiLogStream::~MiLogStream(&v36);
  std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v1 + 32));
  proto::RogueDiaryTiredAvatarNotify::~RogueDiaryTiredAvatarNotify((proto::RogueDiaryTiredAvatarNotify *const)(v1 + 160));
LABEL_58:
  if ( v37 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1820: range 00000000143D7D52-00000000143D806C
void __cdecl RogueDiaryRuntimeMgr::updateRogueDiaryAvatarTiredData(
        RogueDiaryRuntimeMgr *const this,
        const std::vector<long unsigned int> *tired_guid_vec,
        uint32_t tired_count)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  std::__detail::_Node_iterator_base<std::pair<long unsigned int const,RogueDiaryAvatarData>,false> *p_y; // rsi
  common::milog::MiLogStream *v8; // rax
  __int64 v9; // rax
  char v10; // dl
  _BOOL8 v11; // rdx
  std::__detail::_Node_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer v12; // rax
  std::vector<long unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-C0h] BYREF
  std::vector<long unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-B8h] BYREF
  std::__detail::_Node_iterator_base<std::pair<long unsigned int const,RogueDiaryAvatarData>,false> __y; // [rsp+30h] [rbp-B0h] BYREF
  const std::vector<long unsigned int> *__for_range; // [rsp+38h] [rbp-A8h]
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-A0h] BYREF
  char v19[128]; // [rsp+60h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 guid:1821 64 8 9 iter:1823";
  *(_QWORD *)(v3 + 16) = RogueDiaryRuntimeMgr::updateRogueDiaryAvatarTiredData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  __for_range = tired_guid_vec;
  __for_begin._M_current = std::vector<unsigned long>::begin(tired_guid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned long>::end(tired_guid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned long const*,std::vector<unsigned long>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator*(&__for_begin);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8(v6);
    *(_QWORD *)(v3 + 32) = *(_QWORD *)v6;
    *(std::unordered_map<long unsigned int,RogueDiaryAvatarData>::iterator *)(v3 + 64) = std::unordered_map<unsigned long,RogueDiaryAvatarData>::find(
                                                                                           &this->guid_avatar_data_map_,
                                                                                           (const std::unordered_map<long unsigned int,RogueDiaryAvatarData>::key_type *)(v3 + 32));
    __y._M_cur = std::unordered_map<unsigned long,RogueDiaryAvatarData>::end(&this->guid_avatar_data_map_)._M_cur;
    p_y = &__y;
    if ( std::__detail::operator==<std::pair<unsigned long const,RogueDiaryAvatarData>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,RogueDiaryAvatarData>,false> *)(v3 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "updateRogueDiaryAvatarTiredData",
        1826);
      v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v18,
             (const char (*)[42])"[RogueDiary] find guid data failed, guid:");
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v8, (const unsigned __int64 *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
    else if ( tired_count )
    {
      v12 = std::__detail::_Node_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v12->second.round >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v12 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v12->second.round >> 3) + 0x7FFF8000) )
      {
        v12 = (std::__detail::_Node_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer)__asan_report_load4(&v12->second.round);
      }
      v12->second.round += tired_count;
    }
    else
    {
      v9 = (__int64)std::__detail::_Node_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false> *const)(v3 + 64));
      v10 = *(_BYTE *)(((unsigned __int64)(v9 + 32) >> 3) + 0x7FFF8000);
      LOBYTE(p_y) = v10 != 0;
      v11 = v10 < 0;
      if ( v11 )
        v9 = __asan_report_store1(v9 + 32, p_y, v11);
      *(_BYTE *)(v9 + 32) = 1;
    }
    __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator++(&__for_begin);
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
};

// Line 1841: range 00000000143D806E-00000000143D86C2
int32_t __cdecl RogueDiaryRuntimeMgr::checkChosenCardListValidAndGetRepickCardCount(
        RogueDiaryRuntimeMgr *const this,
        const google::protobuf::RepeatedField<unsigned int> *repeated_list,
        std::vector<unsigned int> *repick_card_vec,
        bool is_resume_repair)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::set<unsigned int>::size_type v7; // r14
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  int32_t v11; // r14d
  std::_Rb_tree_const_iterator<unsigned int>::reference v12; // rax
  _DWORD *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v19; // rax
  _DWORD *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  int32_t result; // eax
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  std::set<unsigned int> *__for_range_0; // [rsp+30h] [rbp-E0h]
  std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v33; // [rsp+40h] [rbp-D0h] BYREF
  char v34[176]; // [rsp+60h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 4 12 card_id:1866 48 48 13 card_set:1842";
  *(_QWORD *)(v4 + 16) = RogueDiaryRuntimeMgr::checkChosenCardListValidAndGetRepickCardCount;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862723] = -202116109;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 48));
  common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(
    (std::set<unsigned int> *)(v4 + 48),
    repeated_list);
  v7 = std::set<unsigned int>::size((const std::set<unsigned int> *const)(v4 + 48));
  if ( v7 == google::protobuf::RepeatedField<unsigned int>::size(repeated_list) )
  {
    if ( is_resume_repair )
    {
      __for_range = (std::set<unsigned int> *)(v4 + 48);
      __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v4 + 48))._M_node;
      __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v4 + 48))._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v12 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        *(_DWORD *)(v4 + 32) = *v13;
        if ( common::tools::MiscUtils::isContains<unsigned int>(
               &this->resume_chosen_card_vec_,
               (const unsigned int *)(v4 + 32)) )
        {
          std::vector<unsigned int>::emplace_back<unsigned int &>(
            repick_card_vec,
            (unsigned int *)(v4 + 32),
            (unsigned int *)(v4 + 32));
        }
        else if ( !common::tools::MiscUtils::isContains<unsigned int>(
                     &this->resume_optional_card_vec_,
                     (const unsigned int *)(v4 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
            "checkChosenCardListValidAndGetRepickCardCount",
            1859);
          v14 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  &v33,
                  (const char (*)[47])"[RogueDiary] card_id is not optional, card_id:");
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v14,
                  (const unsigned int *)(v4 + 32));
          v16 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                  v15,
                  (const char (*)[28])", resume_optional_card_vec:");
          v17 = common::milog::MiLogStream::operator<<<unsigned int>(v16, &this->resume_optional_card_vec_);
          v18 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  v17,
                  (const char (*)[26])", resume_chosen_card_vec:");
          common::milog::MiLogStream::operator<<<unsigned int>(v18, &this->resume_chosen_card_vec_);
          common::milog::MiLogStream::~MiLogStream(&v33);
          v11 = -1;
          goto LABEL_26;
        }
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
      }
    }
    else
    {
      __for_range_0 = (std::set<unsigned int> *)(v4 + 48);
      __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v4 + 48))._M_node;
      __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v4 + 48))._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v19 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
        v20 = v19;
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v19);
        }
        *(_DWORD *)(v4 + 32) = *v20;
        if ( common::tools::MiscUtils::isContains<unsigned int>(
               &this->chosen_card_vec_,
               (const unsigned int *)(v4 + 32)) )
        {
          std::vector<unsigned int>::emplace_back<unsigned int &>(
            repick_card_vec,
            (unsigned int *)(v4 + 32),
            (unsigned int *)(v4 + 32));
        }
        else if ( !common::tools::MiscUtils::isContains<unsigned int>(
                     &this->optional_card_vec_,
                     (const unsigned int *)(v4 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
            "checkChosenCardListValidAndGetRepickCardCount",
            1874);
          v21 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  &v33,
                  (const char (*)[47])"[RogueDiary] card_id is not optional, card_id:");
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v21,
                  (const unsigned int *)(v4 + 32));
          v23 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  v22,
                  (const char (*)[21])", optional_card_vec:");
          v24 = common::milog::MiLogStream::operator<<<unsigned int>(v23, &this->optional_card_vec_);
          v25 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  v24,
                  (const char (*)[19])", chosen_card_vec:");
          common::milog::MiLogStream::operator<<<unsigned int>(v25, &this->chosen_card_vec_);
          common::milog::MiLogStream::~MiLogStream(&v33);
          v11 = -1;
          goto LABEL_26;
        }
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
      }
    }
    v11 = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "checkChosenCardListValidAndGetRepickCardCount",
      1846);
    v8 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v33,
           (const char (*)[55])"[RogueDiary] duplicate card in card list, actual_size:");
    __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::set<unsigned int>::size((const std::set<unsigned int> *const)(v4 + 48));
    v9 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
           v8,
           (const unsigned __int64 *)&__for_end);
    v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])",  input_size:");
    *(_DWORD *)(v4 + 32) = google::protobuf::RepeatedField<unsigned int>::size(repeated_list);
    common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream(&v33);
    v11 = -1;
  }
LABEL_26:
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 48));
  result = v11;
  if ( v34 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1884: range 00000000143D86C4-00000000143D8DC2
int32_t __cdecl RogueDiaryRuntimeMgr::checkRefreshCardListValidAndGetCardSet(
        RogueDiaryRuntimeMgr *const this,
        const google::protobuf::RepeatedField<unsigned int> *repeated_list,
        std::set<unsigned int> *card_set,
        bool is_resume_repair)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  std::vector<unsigned int>::size_type v7; // r14
  common::milog::MiLogStream *v8; // r12
  int32_t result; // eax
  std::set<unsigned int>::size_type v10; // r14
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r12
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r14
  std::set<unsigned int>::iterator v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::vector<unsigned int>::size_type v19; // r14
  common::milog::MiLogStream *v20; // r12
  std::set<unsigned int>::size_type v21; // r14
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r12
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr v25; // r14
  std::set<unsigned int>::iterator v26; // rax
  common::milog::MiLogStream *v27; // rdx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  int val; // [rsp+2Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v33; // [rsp+30h] [rbp-90h] BYREF
  char v34[112]; // [rsp+50h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 9 pred:1921";
  *(_QWORD *)(v4 + 16) = RogueDiaryRuntimeMgr::checkRefreshCardListValidAndGetCardSet;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  if ( is_resume_repair )
  {
    v7 = google::protobuf::RepeatedField<unsigned int>::size(repeated_list);
    if ( v7 > std::vector<unsigned int>::size(&this->resume_optional_card_vec_) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "checkRefreshCardListValidAndGetCardSet",
        1889);
      v8 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
             &v33,
             (const char (*)[45])"[RogueDiary] card list size too large, size:");
      val = google::protobuf::RepeatedField<unsigned int>::size(repeated_list);
      common::milog::MiLogStream::operator<<<int,(int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v33);
      result = -1;
      goto LABEL_18;
    }
    common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(card_set, repeated_list);
    v10 = std::set<unsigned int>::size(card_set);
    if ( v10 != google::protobuf::RepeatedField<unsigned int>::size(repeated_list) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "checkRefreshCardListValidAndGetCardSet",
        1895);
      v11 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
              &v33,
              (const char (*)[55])"[RogueDiary] duplicate card in card list, actual_size:");
      *(_QWORD *)(v4 + 32) = std::set<unsigned int>::size(card_set);
      v12 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v11,
              (const unsigned __int64 *)(v4 + 32));
      v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v12, (const char (*)[15])",  input_size:");
      val = google::protobuf::RepeatedField<unsigned int>::size(repeated_list);
      common::milog::MiLogStream::operator<<<int,(int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v33);
      result = -1;
      goto LABEL_18;
    }
    *(_QWORD *)(v4 + 32) = this;
    M_node = std::set<unsigned int>::end(card_set)._M_node;
    v15._M_node = std::set<unsigned int>::begin(card_set)._M_node;
    if ( std::any_of<std::_Rb_tree_const_iterator<unsigned int>,RogueDiaryRuntimeMgr::checkRefreshCardListValidAndGetCardSet(google::protobuf::RepeatedField<unsigned int> const&,std::set<unsigned int> &,bool)::{lambda(std::_Rb_tree_const_iterator<unsigned int> &)#1}>(
           v15,
           (std::_Rb_tree_const_iterator<unsigned int>)M_node,
           *(RogueDiaryRuntimeMgr::checkRefreshCardListValidAndGetCardSet::<lambda(auto:29&)> *)(v4 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "checkRefreshCardListValidAndGetCardSet",
        1904);
      v16 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
              &v33,
              (const char (*)[56])"[RogueDiary] refresh card is not optional, chosen_card:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int>(v16, card_set);
      v18 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              v17,
              (const char (*)[28])", resume_optional_card_vec:");
      common::milog::MiLogStream::operator<<<unsigned int>(v18, &this->resume_optional_card_vec_);
      common::milog::MiLogStream::~MiLogStream(&v33);
      result = -1;
      goto LABEL_18;
    }
  }
  else
  {
    v19 = google::protobuf::RepeatedField<unsigned int>::size(repeated_list);
    if ( v19 > std::vector<unsigned int>::size(&this->optional_card_vec_) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "checkRefreshCardListValidAndGetCardSet",
        1912);
      v20 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              &v33,
              (const char (*)[45])"[RogueDiary] card list size too large, size:");
      val = google::protobuf::RepeatedField<unsigned int>::size(repeated_list);
      common::milog::MiLogStream::operator<<<int,(int *)0>(v20, &val);
      common::milog::MiLogStream::~MiLogStream(&v33);
      result = -1;
      goto LABEL_18;
    }
    common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(card_set, repeated_list);
    v21 = std::set<unsigned int>::size(card_set);
    if ( v21 != google::protobuf::RepeatedField<unsigned int>::size(repeated_list) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "checkRefreshCardListValidAndGetCardSet",
        1918);
      v22 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
              &v33,
              (const char (*)[55])"[RogueDiary] duplicate card in card list, actual_size:");
      *(_QWORD *)(v4 + 32) = std::set<unsigned int>::size(card_set);
      v23 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v22,
              (const unsigned __int64 *)(v4 + 32));
      v24 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v23, (const char (*)[15])",  input_size:");
      val = google::protobuf::RepeatedField<unsigned int>::size(repeated_list);
      common::milog::MiLogStream::operator<<<int,(int *)0>(v24, &val);
      common::milog::MiLogStream::~MiLogStream(&v33);
      result = -1;
      goto LABEL_18;
    }
    *(_QWORD *)(v4 + 32) = this;
    v25 = std::set<unsigned int>::end(card_set)._M_node;
    v26._M_node = std::set<unsigned int>::begin(card_set)._M_node;
    if ( std::any_of<std::_Rb_tree_const_iterator<unsigned int>,RogueDiaryRuntimeMgr::checkRefreshCardListValidAndGetCardSet(google::protobuf::RepeatedField<unsigned int> const&,std::set<unsigned int> &,bool)::{lambda(std::_Rb_tree_const_iterator<unsigned int> &)#2}>(
           v26,
           (std::_Rb_tree_const_iterator<unsigned int>)v25,
           *(RogueDiaryRuntimeMgr::checkRefreshCardListValidAndGetCardSet::<lambda(auto:30&)> *)(v4 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "checkRefreshCardListValidAndGetCardSet",
        1927);
      v27 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
              &v33,
              (const char (*)[56])"[RogueDiary] refresh card is not optional, chosen_card:");
      v28 = common::milog::MiLogStream::operator<<<unsigned int>(v27, card_set);
      v29 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v28,
              (const char (*)[21])", optional_card_vec:");
      common::milog::MiLogStream::operator<<<unsigned int>(v29, &this->optional_card_vec_);
      common::milog::MiLogStream::~MiLogStream(&v33);
      result = -1;
      goto LABEL_18;
    }
  }
  result = 0;
LABEL_18:
  if ( v34 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1898: range 00000000143F0BDC-00000000143F0C2E
bool __cdecl RogueDiaryRuntimeMgr::checkRefreshCardListValidAndGetCardSet::_lambda_auto_29___::operator()_unsigned_int_const_(
        const RogueDiaryRuntimeMgr::checkRefreshCardListValidAndGetCardSet::<lambda(auto:29&)> *const __closure,
        const unsigned int *p)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  return !common::tools::MiscUtils::isContains<unsigned int>(&__closure->__this->resume_optional_card_vec_, p);
};

// Line 1921: range 00000000143F0D08-00000000143F0D5A
bool __cdecl RogueDiaryRuntimeMgr::checkRefreshCardListValidAndGetCardSet::_lambda_auto_30___::operator()_unsigned_int_const_(
        const RogueDiaryRuntimeMgr::checkRefreshCardListValidAndGetCardSet::<lambda(auto:30&)> *const __closure,
        const unsigned int *p)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  return !common::tools::MiscUtils::isContains<unsigned int>(&__closure->__this->optional_card_vec_, p);
};

// Line 1936: range 00000000143D8DC4-00000000143DA311
int32_t __cdecl RogueDiaryRuntimeMgr::refreshRogueDiaryCard(
        RogueDiaryRuntimeMgr *const this,
        const proto::RefreshRogueDiaryCardReq *req,
        proto::RefreshRogueDiaryCardRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rbx
  int32_t v7; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  const google::protobuf::RepeatedField<unsigned int> *refreshed; // rsi
  std::vector<unsigned int> *p_resume_chosen_card_vec; // rax
  std::vector<unsigned int> *p_resume_optional_card_vec; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v15; // rax
  _DWORD *v16; // rdx
  const ActivityRogueDiaryExcelConfigMgr *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  int v22; // eax
  const unsigned int *v23; // rax
  const unsigned int *v24; // rax
  _DWORD *v25; // rdx
  int v26; // eax
  const unsigned int *v27; // rax
  _DWORD *v28; // rdx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // r14
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // r14
  common::milog::MiLogStream *v38; // r14
  common::milog::MiLogStream *v39; // r14
  const unsigned int *v40; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v41; // rax
  int *v42; // rdx
  int v43; // r14d
  __int64 v44; // rsi
  std::vector<unsigned int>::reference v45; // rax
  _DWORD *v46; // rdx
  char v47; // cl
  google::protobuf::RepeatedField<unsigned int> *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  int32_t result; // eax
  bool is_resume_repair; // [rsp+2Fh] [rbp-371h]
  uint32_t index; // [rsp+30h] [rbp-370h]
  uint32_t index_0; // [rsp+34h] [rbp-36Ch]
  uint32_t index_1; // [rsp+38h] [rbp-368h]
  int32_t ret; // [rsp+3Ch] [rbp-364h]
  int32_t reta; // [rsp+3Ch] [rbp-364h]
  std::vector<unsigned int>::iterator __for_end; // [rsp+40h] [rbp-360h] BYREF
  const ActivityRogueDiaryExcelConfigMgr *config_mgr; // [rsp+48h] [rbp-358h]
  std::vector<unsigned int> *__for_range; // [rsp+50h] [rbp-350h]
  const data::RogueDiaryStageExcelConfig *stage_config_ptr; // [rsp+58h] [rbp-348h]
  std::shared_ptr<Config> v76; // [rsp+60h] [rbp-340h] BYREF
  std::vector<unsigned int> p_buy_card_vec; // [rsp+70h] [rbp-330h] BYREF
  common::milog::MiLogStream v78; // [rsp+90h] [rbp-310h] BYREF
  std::string val; // [rsp+B0h] [rbp-2F0h] BYREF
  char v80[720]; // [rsp+D0h] [rbp-2D0h] BYREF

  v3 = (unsigned __int64)v80;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(672LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "17 32 4 9 cost:1951 48 4 21 reserve_sr_count:1969 64 4 18 rand_sr_count:1999 80 4 16 total_count"
                        ":2006 96 4 21 refresh_sr_count:2007 112 4 25 actual_rand_sr_count:2008 128 4 20 refresh_r_count:"
                        "2011 144 4 24 actual_rand_r_count:2012 160 4 12 card_id:2037 176 8 20 card_depot_iter:1991 208 8"
                        " 9 iter:2049 240 24 21 exclude_card_vec:1970 304 24 22 optional_card_vec:1971 368 24 20 insert_c"
                        "ard_vec:2022 432 48 21 refresh_card_set:1959 512 48 16 sr_card_map:2002 592 48 15 r_card_map:2003";
  *(_QWORD *)(v3 + 16) = RogueDiaryRuntimeMgr::refreshRogueDiaryCard;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -234556924;
  v5[536862725] = 61956;
  v5[536862725] = -234881024;
  v5[536862726] = 62194;
  v5[536862726] = -234881024;
  v5[536862727] = 62194;
  v5[536862728] = -218959360;
  v5[536862729] = 62194;
  v5[536862730] = -218959360;
  v5[536862731] = 62194;
  v5[536862732] = -218959360;
  v5[536862733] = 62194;
  v5[536862735] = -218959118;
  v5[536862737] = -219021312;
  v5[536862738] = 62194;
  v5[536862740] = -202116109;
  ret = RogueDiaryRuntimeMgr::checkCanRepair(this);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v78,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "refreshRogueDiaryCard",
      1940);
    v6 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v78,
           (const char (*)[37])"[RogueDiary] checkCanRepair failed, ");
    RogueDiaryRuntimeMgr::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v78);
    v7 = ret;
  }
  else if ( proto::RefreshRogueDiaryCardReq::refresh_card_list_size(req) )
  {
    is_resume_repair = RogueDiaryRuntimeMgr::isInResumeRepairGadgetRoom(this);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v76);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v76);
    *(_DWORD *)(v3 + 32) = ActivityRogueDiaryExcelConfigMgr::getRogueDairyResourceCost(
                             &v8->design_config.txt_config_mgr.activity_rogue_diary_config_mgr,
                             ROGUE_DIARY_USE_REROLL);
    std::shared_ptr<Config>::~shared_ptr(&v76);
    if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->coin_);
    }
    if ( this->coin_ >= *(_DWORD *)(v3 + 32) )
    {
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 432));
      refreshed = proto::RefreshRogueDiaryCardReq::refresh_card_list(req);
      reta = RogueDiaryRuntimeMgr::checkRefreshCardListValidAndGetCardSet(
               this,
               refreshed,
               (std::set<unsigned int> *)(v3 + 432),
               is_resume_repair);
      if ( reta )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "refreshRogueDiaryCard",
          1963);
        common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
          (common::milog::MiLogStream *const)&val,
          (const char (*)[59])"[RogueDiary] checkRefreshCardListValidAndGetCardSet failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        v7 = reta;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v76);
        config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v76)->design_config.txt_config_mgr.activity_rogue_diary_config_mgr;
        std::shared_ptr<Config>::~shared_ptr(&v76);
        *(_DWORD *)(v3 + 48) = 0;
        if ( is_resume_repair )
          p_resume_chosen_card_vec = &this->resume_chosen_card_vec_;
        else
          p_resume_chosen_card_vec = &this->chosen_card_vec_;
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 240), p_resume_chosen_card_vec);
        if ( is_resume_repair )
          p_resume_optional_card_vec = &this->resume_optional_card_vec_;
        else
          p_resume_optional_card_vec = &this->optional_card_vec_;
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 304), p_resume_optional_card_vec);
        __for_range = (std::vector<unsigned int> *)(v3 + 304);
        *(std::vector<unsigned int>::iterator *)(v3 + 208) = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 304));
        __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 208),
                  &__for_end) )
        {
          v15 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 208));
          v16 = v15;
          if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v15);
          }
          *(_DWORD *)(v3 + 160) = *v16;
          if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                  (std::set<unsigned int> *)(v3 + 432),
                  (const unsigned int *)(v3 + 160)) )
          {
            std::vector<unsigned int>::push_back(
              (std::vector<unsigned int> *const)(v3 + 240),
              (const std::vector<unsigned int>::value_type *)(v3 + 160));
            if ( ActivityRogueDiaryExcelConfigMgr::getRogueDiaryBuffType(config_mgr, *(_DWORD *)(v3 + 160)) == ROGUE_DIARY_BUFF_SR )
              ++*(_DWORD *)(v3 + 48);
          }
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 208));
        }
        v17 = config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->stage_id_);
        }
        stage_config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryStageExcelConfig(
                             v17,
                             this->stage_id_);
        if ( stage_config_ptr )
        {
          *(std::unordered_map<unsigned int,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>::const_iterator *)(v3 + 176) = std::unordered_map<unsigned int,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>::find(&config_mgr->depot_card_type_weight_map, &stage_config_ptr->card_depot_id);
          __for_end._M_current = (unsigned int *)std::unordered_map<unsigned int,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>::end(&config_mgr->depot_card_type_weight_map)._M_cur;
          if ( std::__detail::operator==<std::pair<unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>>>,false>(
                 (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>> >,false> *)(v3 + 176),
                 (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<data::RogueDiaryBuffType,std::map<unsigned int,unsigned int>> >,false> *)&__for_end) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&val,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
              "refreshRogueDiaryCard",
              1994);
            v19 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                    (common::milog::MiLogStream *const)&val,
                    (const char (*)[47])"[RogueDiary] find card_depot failed, stage_id:");
            v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &this->stage_id_);
            v21 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v20,
                    (const char (*)[12])", depot_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v21,
              &stage_config_ptr->card_depot_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
            v7 = -1;
          }
          else
          {
            *(_DWORD *)(v3 + 64) = ActivityRogueDiaryExcelConfigMgr::weightSelectRandSrCount(
                                     config_mgr,
                                     1,
                                     *(_DWORD *)(v3 + 48));
            if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->card_depot_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&stage_config_ptr->card_depot_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&stage_config_ptr->card_depot_id);
            }
            ActivityRogueDiaryExcelConfigMgr::getRandSrCardWeightMap(
              (std::map<unsigned int,unsigned int> *)(v3 + 512),
              config_mgr,
              stage_config_ptr->card_depot_id,
              (const std::vector<unsigned int> *)(v3 + 240),
              (const std::set<unsigned int> *)(v3 + 432));
            ActivityRogueDiaryExcelConfigMgr::getRandRCardWeightMap(
              (std::map<unsigned int,unsigned int> *)(v3 + 592),
              config_mgr,
              stage_config_ptr->card_depot_id,
              (const std::vector<unsigned int> *)(v3 + 240),
              (const std::set<unsigned int> *)(v3 + 432));
            *(_DWORD *)(v3 + 80) = std::set<unsigned int>::size((const std::set<unsigned int> *const)(v3 + 432));
            if ( *(_DWORD *)(v3 + 64) <= *(_DWORD *)(v3 + 48) )
              v22 = 0;
            else
              v22 = *(_DWORD *)(v3 + 64) - *(_DWORD *)(v3 + 48);
            *(_DWORD *)(v3 + 96) = v22;
            *(_DWORD *)(v3 + 160) = std::map<unsigned int,unsigned int>::size((const std::map<unsigned int,unsigned int> *const)(v3 + 512));
            v23 = std::min<unsigned int>((const unsigned int *)(v3 + 160), (const unsigned int *)(v3 + 96));
            v24 = std::min<unsigned int>((const unsigned int *)(v3 + 80), v23);
            v25 = v24;
            if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v24);
            }
            *(_DWORD *)(v3 + 112) = *v25;
            if ( *(_DWORD *)(v3 + 80) <= *(_DWORD *)(v3 + 112) )
              v26 = 0;
            else
              v26 = *(_DWORD *)(v3 + 80) - *(_DWORD *)(v3 + 112);
            *(_DWORD *)(v3 + 128) = v26;
            *(_DWORD *)(v3 + 160) = std::map<unsigned int,unsigned int>::size((const std::map<unsigned int,unsigned int> *const)(v3 + 592));
            v27 = std::min<unsigned int>((const unsigned int *)(v3 + 128), (const unsigned int *)(v3 + 160));
            v28 = v27;
            if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v27);
            }
            *(_DWORD *)(v3 + 144) = *v28;
            if ( *(_DWORD *)(v3 + 112) || *(_DWORD *)(v3 + 144) )
            {
              std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 368));
              for ( index = 0; index < *(_DWORD *)(v3 + 112); ++index )
              {
                *(_DWORD *)(v3 + 160) = 0;
                if ( common::tools::RandomUtils::weightSelectOne<unsigned int,unsigned int>(
                       (const std::map<unsigned int,unsigned int> *)(v3 + 512),
                       (unsigned int *)(v3 + 160),
                       0) )
                {
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)&val,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
                    "refreshRogueDiaryCard",
                    2029);
                  v38 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                          (common::milog::MiLogStream *const)&val,
                          (const char (*)[55])"[RogueDiary] weightSelectOne failed, sr_card_map size:");
                  __for_end._M_current = (unsigned int *)std::map<unsigned int,unsigned int>::size((const std::map<unsigned int,unsigned int> *const)(v3 + 512));
                  common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                    v38,
                    (const unsigned __int64 *)&__for_end);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
                }
                else
                {
                  std::vector<unsigned int>::push_back(
                    (std::vector<unsigned int> *const)(v3 + 368),
                    (const std::vector<unsigned int>::value_type *)(v3 + 160));
                  std::map<unsigned int,unsigned int>::erase(
                    (std::map<unsigned int,unsigned int> *const)(v3 + 512),
                    (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 160));
                }
              }
              for ( index_0 = 0; index_0 < *(_DWORD *)(v3 + 144); ++index_0 )
              {
                *(_DWORD *)(v3 + 160) = 0;
                if ( common::tools::RandomUtils::weightSelectOne<unsigned int,unsigned int>(
                       (const std::map<unsigned int,unsigned int> *)(v3 + 592),
                       (unsigned int *)(v3 + 160),
                       0) )
                {
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)&val,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
                    "refreshRogueDiaryCard",
                    2040);
                  v39 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                          (common::milog::MiLogStream *const)&val,
                          (const char (*)[54])"[RogueDiary] weightSelectOne failed, r_card_map size:");
                  __for_end._M_current = (unsigned int *)std::map<unsigned int,unsigned int>::size((const std::map<unsigned int,unsigned int> *const)(v3 + 592));
                  common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                    v39,
                    (const unsigned __int64 *)&__for_end);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
                }
                else
                {
                  std::vector<unsigned int>::push_back(
                    (std::vector<unsigned int> *const)(v3 + 368),
                    (const std::vector<unsigned int>::value_type *)(v3 + 160));
                  std::map<unsigned int,unsigned int>::erase(
                    (std::map<unsigned int,unsigned int> *const)(v3 + 592),
                    (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 160));
                }
              }
              if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->coin_);
              }
              this->coin_ -= *(_DWORD *)(v3 + 32);
              *(std::vector<unsigned int>::iterator *)(v3 + 208) = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 368));
              for ( index_1 = 0;
                    index_1 < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 304));
                    ++index_1 )
              {
                v40 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 304), index_1);
                if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                       (std::set<unsigned int> *)(v3 + 432),
                       v40) )
                {
                  __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 368))._M_current;
                  if ( __gnu_cxx::operator==<unsigned int *,std::vector<unsigned int>>(
                         (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 208),
                         &__for_end) )
                  {
                    break;
                  }
                  v41 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 208));
                  v42 = (int *)v41;
                  if ( *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v41 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v41);
                  }
                  v43 = *v42;
                  v44 = index_1;
                  v45 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 304), index_1);
                  v46 = v45;
                  v47 = *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000);
                  if ( v47 != 0 && (char)(((unsigned __int8)v45 & 7) + 3) >= v47 )
                  {
                    LOBYTE(v44) = v47 != 0;
                    __asan_report_store4(v45, v44, v45);
                  }
                  *v46 = v43;
                  __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(
                    (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 208),
                    0);
                }
              }
              v48 = proto::RefreshRogueDiaryCardRsp::mutable_rand_card_list(rsp_0);
              common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
                (const std::vector<unsigned int> *)(v3 + 304),
                v48);
              if ( is_resume_repair )
                std::vector<unsigned int>::operator=(
                  &this->resume_optional_card_vec_,
                  (const std::vector<unsigned int> *)(v3 + 304));
              else
                std::vector<unsigned int>::operator=(
                  &this->optional_card_vec_,
                  (const std::vector<unsigned int> *)(v3 + 304));
              memset(&p_buy_card_vec, 0, sizeof(p_buy_card_vec));
              std::vector<unsigned int>::vector(&p_buy_card_vec);
              RogueDiaryRuntimeMgr::logCoinChange(this, 1u, *(_DWORD *)(v3 + 32), &p_buy_card_vec);
              std::vector<unsigned int>::~vector(&p_buy_card_vec);
              RogueDiaryRuntimeMgr::notifyDungeonInfo(this);
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&val,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
                "refreshRogueDiaryCard",
                2081);
              v49 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                      (common::milog::MiLogStream *const)&val,
                      (const char (*)[64])"[RogueDiary] randNextRoundCardInfo succ, refreshRogueDiaryCard:");
              v50 = common::milog::MiLogStream::operator<<<unsigned int>(
                      v49,
                      (const std::set<unsigned int> *)(v3 + 432));
              v51 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      v50,
                      (const char (*)[16])", new_card_set:");
              v52 = common::milog::MiLogStream::operator<<<unsigned int>(
                      v51,
                      (const std::vector<unsigned int> *)(v3 + 368));
              v53 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                      v52,
                      (const char (*)[17])", rand_sr_count:");
              v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v53,
                      (const unsigned int *)(v3 + 64));
              v55 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                      v54,
                      (const char (*)[20])", reserve_sr_count:");
              v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v55,
                      (const unsigned int *)(v3 + 48));
              v57 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v56,
                      (const char (*)[12])", sr_count:");
              v58 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v57,
                      (const unsigned int *)(v3 + 112));
              v59 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v58,
                      (const char (*)[11])", r_count:");
              v60 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v59,
                      (const unsigned int *)(v3 + 144));
              v61 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                      v60,
                      (const char (*)[21])", optional_card_vec:");
              v62 = common::milog::MiLogStream::operator<<<unsigned int>(
                      v61,
                      (const std::vector<unsigned int> *)(v3 + 304));
              v63 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                      v62,
                      (const char (*)[20])", is_resume_repair:");
              common::milog::MiLogStream::operator<<(v63, is_resume_repair);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
              v7 = 0;
              std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 368));
            }
            else
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&val,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
                "refreshRogueDiaryCard",
                2016);
              v29 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                      (common::milog::MiLogStream *const)&val,
                      (const char (*)[53])"[RogueDiary] optional card count 0, error! stage_id:");
              v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &this->stage_id_);
              v31 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      v30,
                      (const char (*)[15])", total_count:");
              v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v31,
                      (const unsigned int *)(v3 + 80));
              v33 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                      v32,
                      (const char (*)[17])", rand_sr_count:");
              v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v33,
                      (const unsigned int *)(v3 + 64));
              v35 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                      v34,
                      (const char (*)[20])", sr_card_map size:");
              *(_QWORD *)(v3 + 208) = std::map<unsigned int,unsigned int>::size((const std::map<unsigned int,unsigned int> *const)(v3 + 512));
              v36 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                      v35,
                      (const unsigned __int64 *)(v3 + 208));
              v37 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                      v36,
                      (const char (*)[19])", r_card_map size:");
              __for_end._M_current = (unsigned int *)std::map<unsigned int,unsigned int>::size((const std::map<unsigned int,unsigned int> *const)(v3 + 592));
              common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v37,
                (const unsigned __int64 *)&__for_end);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
              v7 = -1;
            }
            std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 592));
            std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 512));
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&val,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
            "refreshRogueDiaryCard",
            1988);
          v18 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                  (common::milog::MiLogStream *const)&val,
                  (const char (*)[62])"[RogueDiary] findRogueDiaryStageExcelConfig failed, stage_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &this->stage_id_);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
          v7 = -1;
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 304));
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 240));
      }
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 432));
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "refreshRogueDiaryCard",
        1954);
      v9 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             (common::milog::MiLogStream *const)&val,
             (const char (*)[36])"[RogueDiary] coin not enough, cost:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
      v11 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])", coin:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->coin_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v7 = 10353;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "refreshRogueDiaryCard",
      1945);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      (common::milog::MiLogStream *const)&val,
      (const char (*)[37])"[RogueDiary] refresh card size empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    v7 = -1;
  }
  result = v7;
  if ( v80 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF803C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8050) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8050) = -168430091;
  }
  return result;
};

// Line 2088: range 00000000143DA312-00000000143DB22D
int32_t __cdecl RogueDiaryRuntimeMgr::finishRepair(
        RogueDiaryRuntimeMgr *const this,
        const proto::RogueFinishRepairReq *req,
        proto::RogueFinishRepairRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  ActivityRogueDiaryExcelConfigMgr *p_activity_rogue_diary_config_mgr; // rcx
  common::milog::MiLogStream *v10; // rax
  uint32_t chosen_card_count; // r14d
  common::milog::MiLogStream *v12; // r14
  const google::protobuf::RepeatedField<unsigned int> *v13; // rsi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  unsigned int RogueDairyResourceCost; // r14d
  unsigned int v16; // eax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  const google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar> *v20; // rcx
  PlayerAvatarComp *AvatarComp; // r14
  uint64_t *v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rdx
  const google::protobuf::RepeatedField<unsigned int> *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  int32_t result; // eax
  bool is_resume_repair; // [rsp+23h] [rbp-19Dh]
  int __x; // [rsp+24h] [rbp-19Ch] BYREF
  int val; // [rsp+28h] [rbp-198h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-194h]
  const data::RogueDiaryStageExcelConfig *stage_config_ptr; // [rsp+30h] [rbp-190h]
  std::pair<int,int> __p; // [rsp+38h] [rbp-188h] BYREF
  std::shared_ptr<Scene> v39; // [rsp+40h] [rbp-180h] BYREF
  std::vector<unsigned int> p_buy_card_vec; // [rsp+50h] [rbp-170h] BYREF
  common::milog::MiLogStream v41; // [rsp+70h] [rbp-150h] BYREF
  common::milog::MiLogStream v42; // [rsp+90h] [rbp-130h] BYREF
  char v43[272]; // [rsp+B0h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 15 total_cost:2128 64 16 18 cur_scene_ptr:2089 96 24 20 repick_card_vec:2121 160 24 18 te"
                        "am_guid_vec:2136";
  *(_QWORD *)(v3 + 16) = RogueDiaryRuntimeMgr::finishRepair;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 64));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "finishRepair",
      2092);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      &v42,
      (const char (*)[33])"[RogueDiary] getCurScene nullptr");
    common::milog::MiLogStream::~MiLogStream(&v42);
    v6 = -1;
  }
  else
  {
    ret = RogueDiaryRuntimeMgr::checkCanRepair(this);
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "finishRepair",
        2098);
      v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
             &v41,
             (const char (*)[37])"[RogueDiary] checkCanRepair failed, ");
      RogueDiaryRuntimeMgr::getDesc[abi:cxx11]((std::string *)&v42, this);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, (const std::string *)&v42);
      std::string::~string(&v42);
      common::milog::MiLogStream::~MiLogStream(&v41);
      v6 = ret;
    }
    else
    {
      is_resume_repair = RogueDiaryRuntimeMgr::isInResumeRepairGadgetRoom(this);
      if ( !std::vector<unsigned long>::empty(&this->optional_tired_guid_vec_) )
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "finishRepair",
          2105);
        v8 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
               &v42,
               (const char (*)[73])"[RogueDiary] reserve avatar not finish, failed, optional_tired_guid_vec:");
        common::milog::MiLogStream::operator<<<unsigned long>(v8, &this->optional_tired_guid_vec_);
        common::milog::MiLogStream::~MiLogStream(&v42);
        v6 = -1;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v39);
        p_activity_rogue_diary_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39)->design_config.txt_config_mgr.activity_rogue_diary_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->stage_id_);
        }
        stage_config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryStageExcelConfig(
                             p_activity_rogue_diary_config_mgr,
                             this->stage_id_);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v39);
        if ( stage_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->chosen_card_count >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)stage_config_ptr + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_config_ptr->chosen_card_count >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4(&stage_config_ptr->chosen_card_count);
          }
          chosen_card_count = stage_config_ptr->chosen_card_count;
          if ( chosen_card_count >= proto::RogueFinishRepairReq::chosen_card_list_size(req) )
          {
            std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 96));
            v13 = proto::RogueFinishRepairReq::chosen_card_list(req);
            ret = RogueDiaryRuntimeMgr::checkChosenCardListValidAndGetRepickCardCount(
                    this,
                    v13,
                    (std::vector<unsigned int> *)(v3 + 96),
                    is_resume_repair);
            if ( ret )
            {
              common::milog::MiLogStream::create(
                &v42,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
                "finishRepair",
                2125);
              common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                &v42,
                (const char (*)[66])"[RogueDiary] checkChosenCardListValidAndGetRepickCardCount failed");
              common::milog::MiLogStream::~MiLogStream(&v42);
              v6 = ret;
            }
            else
            {
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v39);
              v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
              RogueDairyResourceCost = ActivityRogueDiaryExcelConfigMgr::getRogueDairyResourceCost(
                                         &v14->design_config.txt_config_mgr.activity_rogue_diary_config_mgr,
                                         ROGUE_DIARY_GET_BUYCARD);
              v16 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 96));
              *(_DWORD *)(v3 + 48) = SAFE_MULTIPLY<unsigned int,unsigned int>(v16, RogueDairyResourceCost);
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v39);
              if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->coin_);
              }
              if ( this->coin_ >= *(_DWORD *)(v3 + 48) )
              {
                std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v3 + 160));
                v20 = proto::RogueFinishRepairReq::chosen_avatar_list(req);
                ret = RogueDiaryRuntimeMgr::checkSetRepairTeamAndGetGuidVec(
                        this,
                        v20,
                        (std::vector<long unsigned int> *)(v3 + 160));
                if ( ret )
                {
                  common::milog::MiLogStream::create(
                    &v42,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
                    "finishRepair",
                    2140);
                  common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                    &v42,
                    (const char (*)[52])"[RogueDiary] checkSetRepairTeamAndGetGuidVec failed");
                  common::milog::MiLogStream::~MiLogStream(&v42);
                  v6 = ret;
                }
                else if ( std::vector<unsigned long>::empty((const std::vector<long unsigned int> *const)(v3 + 160)) )
                {
                  common::milog::MiLogStream::create(
                    &v42,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
                    "finishRepair",
                    2145);
                  common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                    &v42,
                    (const char (*)[40])"[RogueDiary] team_guid_vec empty failed");
                  common::milog::MiLogStream::~MiLogStream(&v42);
                  v6 = -1;
                }
                else
                {
                  RogueDiaryRuntimeMgr::clearBuff(this);
                  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                    __asan_report_load8(this);
                  AvatarComp = Player::getAvatarComp(this->player_);
                  std::shared_ptr<Scene>::shared_ptr(&v39, (const std::shared_ptr<Scene> *)(v3 + 64));
                  v22 = std::vector<unsigned long>::operator[]((std::vector<long unsigned int> *const)(v3 + 160), 0LL);
                  if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
                    v22 = (uint64_t *)__asan_report_load8(v22);
                  ret = PlayerAvatarComp::setSceneTeamAndAddToScene(
                          AvatarComp,
                          (const std::vector<long unsigned int> *)(v3 + 160),
                          *v22,
                          &v39,
                          CHANGE_SCENE_TEAM_REASON_ROGUE_DIARY);
                  std::shared_ptr<Scene>::~shared_ptr(&v39);
                  if ( ret )
                  {
                    common::milog::MiLogStream::create(
                      &v42,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
                      "finishRepair",
                      2156);
                    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                      &v42,
                      (const char (*)[46])"[RogueDiary] setSceneTeamAndAddToScene failed");
                    common::milog::MiLogStream::~MiLogStream(&v42);
                    v6 = ret;
                  }
                  else
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&this->coin_);
                    }
                    this->coin_ -= *(_DWORD *)(v3 + 48);
                    if ( !is_resume_repair )
                    {
                      v23 = ((_BYTE)this - 15) & 7;
                      v24 = (*(_BYTE *)(((unsigned __int64)&this->is_round_repair_finished_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v23 >= *(_BYTE *)(((unsigned __int64)&this->is_round_repair_finished_ >> 3) + 0x7FFF8000));
                      if ( (_BYTE)v24 )
                        __asan_report_store1(&this->is_round_repair_finished_, v23, v24);
                      this->is_round_repair_finished_ = 1;
                      RogueDiaryRuntimeMgr::saveLastRoundCardInfo(this);
                    }
                    std::vector<unsigned int>::clear(&this->optional_card_vec_);
                    std::vector<unsigned int>::clear(&this->chosen_card_vec_);
                    v25 = proto::RogueFinishRepairReq::chosen_card_list(req);
                    common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v25, &this->chosen_card_vec_);
                    std::vector<unsigned long>::operator=(
                      &this->onstage_guid_vec_,
                      (const std::vector<long unsigned int> *)(v3 + 160));
                    RogueDiaryRuntimeMgr::addBuff(this);
                    std::vector<unsigned long>::clear(&this->optional_tired_guid_vec_);
                    val = 0;
                    __x = 0;
                    __p = std::make_pair<int,int>(&__x, &val);
                    std::pair<unsigned int,unsigned int>::operator=<int,int>(
                      &this->resume_repair_gadget_index_pair_,
                      &__p);
                    std::vector<unsigned int>::vector(&p_buy_card_vec, (const std::vector<unsigned int> *)(v3 + 96));
                    RogueDiaryRuntimeMgr::logCoinChange(this, 2u, *(_DWORD *)(v3 + 48), &p_buy_card_vec);
                    std::vector<unsigned int>::~vector(&p_buy_card_vec);
                    common::milog::MiLogStream::create(
                      &v42,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
                      "finishRepair",
                      2183);
                    v26 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                            &v42,
                            (const char (*)[45])"[RogueDiary] finishRepair succ, round_index:");
                    v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &this->cur_round_);
                    v28 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                            v27,
                            (const char (*)[14])", room_index:");
                    v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &this->cur_room_);
                    v30 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                            v29,
                            (const char (*)[20])", is_resume_repair:");
                    common::milog::MiLogStream::operator<<(v30, is_resume_repair);
                    common::milog::MiLogStream::~MiLogStream(&v42);
                    if ( RogueDiaryRuntimeMgr::isCurRoomDungeonFinalRoom(this) )
                    {
                      RogueDiaryRuntimeMgr::triggerGroupEvent(this, EVENT_ROGUE_OPEN_ACCESS, 0);
                    }
                    else
                    {
                      if ( RogueDiaryRuntimeMgr::isCurRoomRoundFinalRoom(this) )
                      {
                        RogueDiaryRuntimeMgr::triggerGroupEvent(this, EVENT_ROGUE_OPEN_ACCESS, 0);
                        RogueDiaryRuntimeMgr::updateRoundRoomByStep(this);
                      }
                      RogueDiaryRuntimeMgr::triggerGroupEvent(this, EVENT_ROGUE_CREAGE_FIGHT_GADGET, 0);
                    }
                    RogueDiaryRuntimeMgr::notifyDungeonInfo(this);
                    v6 = 0;
                  }
                }
                std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v3 + 160));
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v42,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
                  "finishRepair",
                  2131);
                v17 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                        &v42,
                        (const char (*)[36])"[RogueDiary] coin not enough, cost:");
                v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v17,
                        (const unsigned int *)(v3 + 48));
                v19 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v18, (const char (*)[8])", coin:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &this->coin_);
                common::milog::MiLogStream::~MiLogStream(&v42);
                v6 = 10353;
              }
            }
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 96));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v42,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
              "finishRepair",
              2118);
            v12 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                    &v42,
                    (const char (*)[48])"[RogueDiary] chosen_card_count too large, size:");
            val = proto::RogueFinishRepairReq::chosen_card_list_size(req);
            common::milog::MiLogStream::operator<<<int,(int *)0>(v12, &val);
            common::milog::MiLogStream::~MiLogStream(&v42);
            v6 = -1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v42,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
            "finishRepair",
            2113);
          v10 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                  &v42,
                  (const char (*)[62])"[RogueDiary] findRogueDiaryStageExcelConfig failed, stage_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->stage_id_);
          common::milog::MiLogStream::~MiLogStream(&v42);
          v6 = -1;
        }
      }
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
  result = v6;
  if ( v43 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 2209: range 00000000143DB22E-00000000143DB2B3
bool __cdecl RogueDiaryRuntimeMgr::isCanEnterNextDungeon(const RogueDiaryRuntimeMgr *const this)
{
  if ( RogueDiaryRuntimeMgr::isCurDungeonStageFinalDungeon(this)
    || !RogueDiaryRuntimeMgr::isCurRoundDungeonFinalRound(this) )
  {
    return 0;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->is_round_repair_finished_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 15) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_round_repair_finished_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_round_repair_finished_);
  }
  return this->is_round_repair_finished_;
};

// Line 2216: range 00000000143DB2B4-00000000143DBA03
int32_t __cdecl RogueDiaryRuntimeMgr::checkCanEnterRogueDiaryDungeon(RogueDiaryRuntimeMgr *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  ActivityRogueDiaryExcelConfigMgr *p_activity_rogue_diary_config_mgr; // r14
  uint32_t ActivityId; // eax
  common::milog::MiLogStream *v6; // rbx
  int32_t v7; // r14d
  PlayerMpComp *MpComp; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t SceneId; // ecx
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t v12; // ecx
  char v13; // al
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  PlayerSceneComp *SceneComp; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-9Ch] BYREF
  const data::RogueDiaryPreviewExcelConfig *config_ptr; // [rsp+18h] [rbp-98h]
  common::milog::MiLogStream v20; // [rsp+20h] [rbp-90h] BYREF
  char v21[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 scene_ptr:2228";
  *(_QWORD *)(v1 + 16) = RogueDiaryRuntimeMgr::checkCanEnterRogueDiaryDungeon;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 32));
  p_activity_rogue_diary_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32))->design_config.txt_config_mgr.activity_rogue_diary_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->activity_);
  ActivityId = BaseActivity::getActivityId(this->activity_);
  config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryPreviewExcelConfig(
                 p_activity_rogue_diary_config_mgr,
                 ActivityId);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 32));
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    MpComp = Player::getMpComp(this->player_);
    if ( PlayerMpComp::isInMpMode(MpComp) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "checkCanEnterRogueDiaryDungeon",
        2225);
      common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
        &v20,
        (const char (*)[41])"[RogueDiary] is in mp mode. cannot enter");
      common::milog::MiLogStream::~MiLogStream(&v20);
      v7 = 1202;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v1 + 32));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "checkCanEnterRogueDiaryDungeon",
          2232);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          &v20,
          (const char (*)[33])"[RogueDiary] getCurScene nullptr");
        common::milog::MiLogStream::~MiLogStream(&v20);
        v7 = -1;
      }
      else
      {
        v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        SceneId = Scene::getSceneId(v9);
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->world_scene_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config_ptr->world_scene_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config_ptr->world_scene_id);
        }
        if ( SceneId == config_ptr->world_scene_id )
          goto LABEL_25;
        v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        v12 = Scene::getSceneId(v11);
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->room_scene_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->room_scene_id >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4(&config_ptr->room_scene_id);
        }
        if ( v12 == config_ptr->room_scene_id )
LABEL_25:
          v13 = 0;
        else
          v13 = 1;
        if ( v13 )
        {
          common::milog::MiLogStream::create(
            &v20,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
            "checkCanEnterRogueDiaryDungeon",
            2239);
          v14 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                  &v20,
                  (const char (*)[66])"[RogueDiary] can not enter roguediary in cur scene, cur_scene_id:");
          v15 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
          val = Scene::getSceneId(v15);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
          common::milog::MiLogStream::~MiLogStream(&v20);
          v7 = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->is_have_progress_ >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)this - 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_progress_ >> 3)
                                                              + 0x7FFF8000) )
          {
            __asan_report_load1(&this->is_have_progress_);
          }
          if ( !this->is_have_progress_ )
          {
            common::milog::MiLogStream::create(
              &v20,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
              "checkCanEnterRogueDiaryDungeon",
              2245);
            common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v20,
              (const char (*)[30])"[RogueDiary] have no progress");
            common::milog::MiLogStream::~MiLogStream(&v20);
            v7 = -1;
          }
          else
          {
            if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(&this->is_running_);
            if ( this->is_running_ )
            {
              common::milog::MiLogStream::create(
                &v20,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
                "checkCanEnterRogueDiaryDungeon",
                2250);
              common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v20,
                (const char (*)[36])"[RogueDiary] runtime mgr is running");
              common::milog::MiLogStream::~MiLogStream(&v20);
              v7 = -1;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                __asan_report_load8(this);
              SceneComp = Player::getSceneComp(this->player_);
              if ( PlayerSceneComp::isInTransfer(SceneComp) )
                v7 = 170;
              else
                v7 = 0;
            }
          }
        }
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "checkCanEnterRogueDiaryDungeon",
      2220);
    v6 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
           &v20,
           (const char (*)[67])"[RogueDiary] findRogueDiaryPreviewExcelConfig failed, activity_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->activity_);
    val = BaseActivity::getActivityId(this->activity_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v20);
    v7 = -1;
  }
  result = v7;
  if ( v21 == (char *)v1 )
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

// Line 2263: range 00000000143DBA04-00000000143DBE06
int32_t __cdecl RogueDiaryRuntimeMgr::checkCanRetryRogueDiaryDungeon(RogueDiaryRuntimeMgr *const this)
{
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->is_have_progress_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_progress_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_have_progress_);
  }
  if ( !this->is_have_progress_ )
  {
    common::milog::MiLogStream::create(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "checkCanRetryRogueDiaryDungeon",
      2266);
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
      &v3,
      (const char (*)[49])"[RogueDiary] runtime mgr have no progress failed");
    common::milog::MiLogStream::~MiLogStream(&v3);
    return -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_have_enter_dungeon_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 35) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_enter_dungeon_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_have_enter_dungeon_);
    }
    if ( !this->is_have_enter_dungeon_ )
    {
      common::milog::MiLogStream::create(
        &v3,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "checkCanRetryRogueDiaryDungeon",
        2271);
      common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
        &v3,
        (const char (*)[49])"[RogueDiary] runtime mgr have no progress failed");
      common::milog::MiLogStream::~MiLogStream(&v3);
      return -1;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_running_);
      if ( !this->is_running_ )
      {
        common::milog::MiLogStream::create(
          &v3,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "checkCanRetryRogueDiaryDungeon",
          2276);
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
          &v3,
          (const char (*)[28])"[RogueDiary] is not running");
        common::milog::MiLogStream::~MiLogStream(&v3);
        return -1;
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&this->is_settle_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&this->is_settle_);
        if ( this->is_settle_ )
        {
          common::milog::MiLogStream::create(
            &v3,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
            "checkCanRetryRogueDiaryDungeon",
            2281);
          common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            &v3,
            (const char (*)[24])"[RogueDiary] is settled");
          common::milog::MiLogStream::~MiLogStream(&v3);
          return -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->is_interrupt_ >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)this - 47) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_interrupt_ >> 3)
                                                              + 0x7FFF8000) )
          {
            __asan_report_load1(&this->is_interrupt_);
          }
          if ( !this->is_interrupt_ )
          {
            common::milog::MiLogStream::create(
              &v3,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
              "checkCanRetryRogueDiaryDungeon",
              2286);
            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v3,
              (const char (*)[33])"[RogueDiary] is not interruptted");
            common::milog::MiLogStream::~MiLogStream(&v3);
            return -1;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            SceneComp = Player::getSceneComp(this->player_);
            if ( PlayerSceneComp::isInTransfer(SceneComp) )
              return 170;
            else
              return 0;
          }
        }
      }
    }
  }
};

// Line 2298: range 00000000143DBE08-00000000143DC1E4
int32_t __fastcall RogueDiaryRuntimeMgr::checkUseAvatarAndGetSameAvatarGuid(
        const RogueDiaryRuntimeMgr *const this,
        uint64_t guid,
        uint64_t *duplicate_avatar_guid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer v8; // rax
  std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer v9; // rax
  uint64_t UseOtherSameAvatarGuid; // rdx
  PlayerAvatarComp *AvatarComp; // rax
  unsigned int first; // eax
  uint64_t v13; // rdx
  int32_t ret; // [rsp+24h] [rbp-ACh]
  std::__detail::_Node_iterator_base<std::pair<long unsigned int const,RogueDiaryAvatarData>,false> __y; // [rsp+28h] [rbp-A8h] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-A0h] BYREF
  char v18[128]; // [rsp+50h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 iter:2304 64 8 9 guid:2297";
  *(_QWORD *)(v3 + 16) = RogueDiaryRuntimeMgr::checkUseAvatarAndGetSameAvatarGuid;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  *(_QWORD *)(v3 + 64) = guid;
  ret = RogueDiaryRuntimeMgr::checkAvatarDisableStatus(this, *(_QWORD *)(v3 + 64));
  if ( ret )
  {
    result = ret;
  }
  else
  {
    *(std::unordered_map<long unsigned int,RogueDiaryAvatarData>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned long,RogueDiaryAvatarData>::find(
                                                                                                 &this->guid_avatar_data_map_,
                                                                                                 (const std::unordered_map<long unsigned int,RogueDiaryAvatarData>::key_type *)(v3 + 64));
    __y._M_cur = std::unordered_map<unsigned long,RogueDiaryAvatarData>::end(&this->guid_avatar_data_map_)._M_cur;
    if ( std::__detail::operator==<std::pair<unsigned long const,RogueDiaryAvatarData>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,RogueDiaryAvatarData>,false> *)(v3 + 32),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "checkUseAvatarAndGetSameAvatarGuid",
        2307);
      v7 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
             &v17,
             (const char (*)[49])"[RogueDiary] find guid in data map failed, guid:");
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, (const unsigned __int64 *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v17);
      result = -1;
    }
    else
    {
      v8 = std::__detail::_Node_const_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false> *const)(v3 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v8->second.trial_config_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v8->second.trial_config_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v8 = (std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer)__asan_report_load4(&v8->second.trial_config_id);
      }
      if ( v8->second.trial_config_id )
      {
        v9 = std::__detail::_Node_const_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false> *const)(v3 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&v9->second.trial_config_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v9->second.trial_config_id >> 3) + 0x7FFF8000) <= 3 )
        {
          v9 = (std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer)__asan_report_load4(&v9->second.trial_config_id);
        }
        UseOtherSameAvatarGuid = RogueDiaryRuntimeMgr::getUseOtherSameAvatarGuid(this, 1, v9->second.trial_config_id);
        if ( *(_BYTE *)(((unsigned __int64)duplicate_avatar_guid >> 3) + 0x7FFF8000) )
          __asan_report_store8(duplicate_avatar_guid, 1LL);
        *duplicate_avatar_guid = UseOtherSameAvatarGuid;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        AvatarComp = Player::getAvatarComp(this->player_);
        first = PlayerAvatarComp::getAvatarProfilePicFromAvatarOrSnapshot(AvatarComp, *(_QWORD *)(v3 + 64)).first;
        v13 = RogueDiaryRuntimeMgr::getUseOtherSameAvatarGuid(this, 0, first);
        if ( *(_BYTE *)(((unsigned __int64)duplicate_avatar_guid >> 3) + 0x7FFF8000) )
          __asan_report_store8(duplicate_avatar_guid, 0LL);
        *duplicate_avatar_guid = v13;
      }
      if ( *(_BYTE *)(((unsigned __int64)duplicate_avatar_guid >> 3) + 0x7FFF8000) )
        __asan_report_load8(duplicate_avatar_guid);
      if ( *duplicate_avatar_guid )
        result = RogueDiaryRuntimeMgr::checkAvatarDisableStatus(this, *duplicate_avatar_guid);
      else
        result = 0;
    }
  }
  if ( v18 == (char *)v3 )
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

// Line 2327: range 00000000143DC1E6-00000000143DC524
__int64 __fastcall RogueDiaryRuntimeMgr::checkAvatarDisableStatus(
        const RogueDiaryRuntimeMgr *const this,
        uint64_t guid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  PlayerAvatarComp *AvatarComp; // rax
  std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer v9; // rdx
  uint32_t *p_round; // rax
  std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer v11; // rax
  char v12; // al
  __int64 result; // rax
  std::__detail::_Node_iterator_base<std::pair<long unsigned int const,RogueDiaryAvatarData>,false> __y; // [rsp+18h] [rbp-D8h] BYREF
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-D0h] BYREF
  char v16[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 9 iter:2328 64 8 9 guid:2326 96 16 15 avatar_ptr:2335";
  *(_QWORD *)(v2 + 16) = RogueDiaryRuntimeMgr::checkAvatarDisableStatus;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_QWORD *)(v2 + 64) = guid;
  *(std::unordered_map<long unsigned int,RogueDiaryAvatarData>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned long,RogueDiaryAvatarData>::find(
                                                                                               &this->guid_avatar_data_map_,
                                                                                               (const std::unordered_map<long unsigned int,RogueDiaryAvatarData>::key_type *)(v2 + 64));
  __y._M_cur = std::unordered_map<unsigned long,RogueDiaryAvatarData>::end(&this->guid_avatar_data_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned long const,RogueDiaryAvatarData>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,RogueDiaryAvatarData>,false> *)(v2 + 32),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "checkAvatarDisableStatus",
      2331);
    v5 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v15,
           (const char (*)[49])"[RogueDiary] find guid in data map failed, guid:");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v5, (const unsigned __int64 *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v15);
    v6 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    AvatarComp = Player::getAvatarComp(this->player_);
    PlayerAvatarComp::findAvatar<MirrorAvatar>((const PlayerAvatarComp *const)(v2 + 96), (uint64_t)AvatarComp);
    if ( std::operator!=<MirrorAvatar>((const std::shared_ptr<MirrorAvatar> *)(v2 + 96), 0LL)
      && (v8 = std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96)),
          Creature::getLifeState(v8) == LIFE_DEAD) )
    {
      v6 = 10350;
    }
    else
    {
      v9 = std::__detail::_Node_const_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false> *const)(v2 + 32));
      p_round = &v9->second.round;
      if ( *(_BYTE *)(((unsigned __int64)p_round >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_round & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_round >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_round);
      }
      if ( v9->second.round )
        goto LABEL_17;
      v11 = std::__detail::_Node_const_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false> *const)(v2 + 32));
      if ( *(char *)(((unsigned __int64)&v11->second.is_ban >> 3) + 0x7FFF8000) < 0 )
        v11 = (std::__detail::_Node_const_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer)__asan_report_load1(&v11->second.is_ban);
      if ( v11->second.is_ban )
LABEL_17:
        v12 = 1;
      else
        v12 = 0;
      if ( v12 )
        v6 = 10351;
      else
        v6 = 0;
    }
    std::shared_ptr<MirrorAvatar>::~shared_ptr((std::shared_ptr<MirrorAvatar> *const)(v2 + 96));
  }
  result = v6;
  if ( v16 == (char *)v2 )
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

// Line 2351: range 00000000143DC526-00000000143DC8C3
uint64_t __cdecl RogueDiaryRuntimeMgr::getGuidByRogueDiaryAvatar(
        RogueDiaryRuntimeMgr *const this,
        const proto::RogueDiaryAvatar *proto_avatar)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const proto::ActivityDungeonAvatar *v5; // rax
  const proto::ActivityDungeonAvatar *v6; // rax
  common::milog::MiLogStream *v7; // r12
  const proto::ActivityDungeonAvatar *v8; // rax
  uint64_t result; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,long unsigned int>,false,false>::pointer v10; // rax
  const proto::ActivityDungeonAvatar *v11; // rax
  common::milog::MiLogStream *v12; // r12
  const proto::ActivityDungeonAvatar *v13; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,long unsigned int>,false,false>::pointer v14; // rax
  std::unordered_map<unsigned int,long unsigned int>::key_type __x; // [rsp+14h] [rbp-9Ch] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,long unsigned int>,false> __y; // [rsp+18h] [rbp-98h] BYREF
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-90h] BYREF
  char v18[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 9 iter:2364";
  *(_QWORD *)(v2 + 16) = RogueDiaryRuntimeMgr::getGuidByRogueDiaryAvatar;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  v5 = proto::RogueDiaryAvatar::avatar(proto_avatar);
  if ( proto::ActivityDungeonAvatar::is_trial(v5) )
  {
    v6 = proto::RogueDiaryAvatar::avatar(proto_avatar);
    __x = proto::ActivityDungeonAvatar::avatar_id(v6);
    *(std::unordered_map<unsigned int,long unsigned int>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,unsigned long>::find(
                                                                                   &this->trial_id_to_guid_map_,
                                                                                   &__x);
    __y._M_cur = std::unordered_map<unsigned int,unsigned long>::end(&this->trial_id_to_guid_map_)._M_cur;
    if ( std::__detail::operator==<std::pair<unsigned int const,unsigned long>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,long unsigned int>,false> *)(v2 + 32),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "getGuidByRogueDiaryAvatar",
        2357);
      v7 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
             &v17,
             (const char (*)[44])"[RogueDiary] find trial avatar failed, id, ");
      v8 = proto::RogueDiaryAvatar::avatar(proto_avatar);
      __x = proto::ActivityDungeonAvatar::avatar_id(v8);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &__x);
      common::milog::MiLogStream::~MiLogStream(&v17);
      result = 0LL;
    }
    else
    {
      v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned long>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,long unsigned int>,false,false> *const)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) )
        v10 = (std::__detail::_Node_iterator<std::pair<unsigned int const,long unsigned int>,false,false>::pointer)__asan_report_load8(&v10->second);
      result = v10->second;
    }
  }
  else
  {
    v11 = proto::RogueDiaryAvatar::avatar(proto_avatar);
    __x = proto::ActivityDungeonAvatar::avatar_id(v11);
    *(std::unordered_map<unsigned int,long unsigned int>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,unsigned long>::find(
                                                                                   &this->formal_id_to_guid_map_,
                                                                                   &__x);
    __y._M_cur = std::unordered_map<unsigned int,unsigned long>::end(&this->formal_id_to_guid_map_)._M_cur;
    if ( std::__detail::operator==<std::pair<unsigned int const,unsigned long>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,long unsigned int>,false> *)(v2 + 32),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "getGuidByRogueDiaryAvatar",
        2367);
      v12 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              &v17,
              (const char (*)[45])"[RogueDiary] find formal avatar failed, id, ");
      v13 = proto::RogueDiaryAvatar::avatar(proto_avatar);
      __x = proto::ActivityDungeonAvatar::avatar_id(v13);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &__x);
      common::milog::MiLogStream::~MiLogStream(&v17);
      result = 0LL;
    }
    else
    {
      v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned long>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,long unsigned int>,false,false> *const)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v14->second >> 3) + 0x7FFF8000) )
        v14 = (std::__detail::_Node_iterator<std::pair<unsigned int const,long unsigned int>,false,false>::pointer)__asan_report_load8(&v14->second);
      result = v14->second;
    }
  }
  if ( v18 == (char *)v2 )
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

// Line 2375: range 00000000143DC8C4-00000000143DD071
int32_t __cdecl RogueDiaryRuntimeMgr::checkSetRepairTeamAndGetGuidVec(
        RogueDiaryRuntimeMgr *const this,
        const google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar> *chosen_avatar_list,
        std::vector<long unsigned int> *guid_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::pair<std::__detail::_Node_iterator<long unsigned int,true,false>,bool> v15; // rax
  common::milog::MiLogStream *v16; // rax
  unsigned __int64 v17; // rax
  signed int AvatarComp; // eax
  bool v19; // r14
  common::milog::MiLogStream *v20; // rax
  PlayerAvatarComp *v21; // rcx
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar>::const_iterator __for_begin; // [rsp+20h] [rbp-180h] BYREF
  const google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar> *__for_range; // [rsp+28h] [rbp-178h]
  std::vector<long unsigned int> *__for_range_0; // [rsp+30h] [rbp-170h]
  const proto::RogueDiaryAvatar *proto_avatar; // [rsp+38h] [rbp-168h]
  std::shared_ptr<MirrorAvatar> __a; // [rsp+40h] [rbp-160h] BYREF
  common::milog::MiLogStream v29; // [rsp+50h] [rbp-150h] BYREF
  char v30[304]; // [rsp+70h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 8 ret:2383 64 8 9 guid:2406 96 8 9 guid:2386 128 8 26 duplicate_avatar_guid:2387 160 56 13 guid_set:2382";
  *(_QWORD *)(v3 + 16) = RogueDiaryRuntimeMgr::checkSetRepairTeamAndGetGuidVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  if ( (unsigned int)google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar>::size(chosen_avatar_list) > 4
    || !google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar>::size(chosen_avatar_list) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "checkSetRepairTeamAndGetGuidVec",
      2378);
    v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v29,
           (const char (*)[47])"[RogueDiary] invalid chosen avatar size, size:");
    *(_DWORD *)(v3 + 48) = google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar>::size(chosen_avatar_list);
    common::milog::MiLogStream::operator<<<int,(int *)0>(v7, (const int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v29);
    v8 = -1;
  }
  else
  {
    std::unordered_set<unsigned long>::unordered_set((std::unordered_set<long unsigned int> *const)(v3 + 160));
    *(_DWORD *)(v3 + 48) = 0;
    __for_range = chosen_avatar_list;
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar>::begin(chosen_avatar_list).it_;
    *(google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar>::const_iterator *)(v3 + 64) = google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar>::end(chosen_avatar_list);
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::RogueDiaryAvatar const>::operator!=(
              &__for_begin,
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::RogueDiaryAvatar>::iterator *)(v3 + 64)) )
    {
      proto_avatar = google::protobuf::internal::RepeatedPtrIterator<proto::RogueDiaryAvatar const>::operator*(&__for_begin);
      *(_QWORD *)(v3 + 96) = RogueDiaryRuntimeMgr::getGuidByRogueDiaryAvatar(this, proto_avatar);
      *(_QWORD *)(v3 + 128) = 0LL;
      *(_DWORD *)(v3 + 48) = RogueDiaryRuntimeMgr::checkUseAvatarAndGetSameAvatarGuid(
                               this,
                               *(_QWORD *)(v3 + 96),
                               (uint64_t *)(v3 + 128));
      if ( *(_DWORD *)(v3 + 48) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "checkSetRepairTeamAndGetGuidVec",
          2391);
        v9 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
               &v29,
               (const char (*)[62])"[RogueDiary] checkUseAvatarAndGetSameAvatarGuid failed, guid:");
        v10 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v9,
                (const unsigned __int64 *)(v3 + 96));
        v11 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])", ret:");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v11, (const int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v29);
        v8 = *(_DWORD *)(v3 + 48);
        goto LABEL_33;
      }
      if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned long>,unsigned long>(
             (std::unordered_set<long unsigned int> *)(v3 + 160),
             (const unsigned __int64 *)(v3 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "checkSetRepairTeamAndGetGuidVec",
          2396);
        v12 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                &v29,
                (const char (*)[59])"[RogueDiary] use same avatar id avatar twice failed, guid:");
        v13 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v12,
                (const unsigned __int64 *)(v3 + 96));
        v14 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                v13,
                (const char (*)[25])", duplicate_avatar_guid:");
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v14,
          (const unsigned __int64 *)(v3 + 128));
        common::milog::MiLogStream::~MiLogStream(&v29);
        v8 = -1;
        goto LABEL_33;
      }
      v15 = std::unordered_set<unsigned long>::insert(
              (std::unordered_set<long unsigned int> *const)(v3 + 160),
              (const std::unordered_set<long unsigned int>::value_type *)(v3 + 96));
      if ( !v15.second )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "checkSetRepairTeamAndGetGuidVec",
          2401);
        v16 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v29,
                (const char (*)[29])"[RogueDiary] duplicate guid:");
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v16,
          (const unsigned __int64 *)(v3 + 96));
        common::milog::MiLogStream::~MiLogStream(&v29);
        v8 = -1;
        goto LABEL_33;
      }
      std::vector<unsigned long>::push_back(guid_vec, (const std::vector<long unsigned int>::value_type *)(v3 + 96));
      google::protobuf::internal::RepeatedPtrIterator<proto::RogueDiaryAvatar const>::operator++(&__for_begin);
    }
    __for_range_0 = guid_vec;
    *(std::vector<long unsigned int>::iterator *)(v3 + 96) = std::vector<unsigned long>::begin(guid_vec);
    *(std::vector<long unsigned int>::iterator *)(v3 + 128) = std::vector<unsigned long>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(
              (const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *)(v3 + 96),
              (const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *)(v3 + 128)) )
    {
      v17 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*((const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *const)(v3 + 96));
      if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
        v17 = __asan_report_load8(v17);
      *(_QWORD *)(v3 + 64) = *(_QWORD *)v17;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      AvatarComp = (unsigned int)Player::getAvatarComp(this->player_);
      PlayerAvatarComp::findMirrorAvatarOrCreateFromSnapshot(
        (PlayerAvatarComp *const)&__a,
        (proto::AvatarSnapshotType)AvatarComp,
        1uLL);
      v19 = std::operator==<MirrorAvatar>(0LL, &__a);
      std::shared_ptr<MirrorAvatar>::~shared_ptr(&__a);
      if ( v19 )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "checkSetRepairTeamAndGetGuidVec",
          2410);
        v20 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                &v29,
                (const char (*)[64])"[RogueDiary] findMirrorAvatarOrCreateFromSnapshot failed, guid:");
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v20,
          (const unsigned __int64 *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream(&v29);
        *(_DWORD *)(v3 + 48) = -1;
        break;
      }
      __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++((__gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *const)(v3 + 96));
    }
    if ( *(_DWORD *)(v3 + 48) )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v21 = Player::getAvatarComp(this->player_);
      PlayerAvatarComp::delInformalAvatarOrSnapshotBatch(v21, AVATAR_SNAPSHOT_TYPE_ROGUE_ACTIVITY, guid_vec);
      v8 = *(_DWORD *)(v3 + 48);
    }
    else
    {
      v8 = 0;
    }
LABEL_33:
    std::unordered_set<unsigned long>::~unordered_set((std::unordered_set<long unsigned int> *const)(v3 + 160));
  }
  result = v8;
  if ( v30 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2424: range 00000000143DD072-00000000143DF3A2
int32_t __cdecl RogueDiaryRuntimeMgr::checkAndSetRogueDiaryTeam(
        RogueDiaryRuntimeMgr *const this,
        const google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar> *chosen_avatar_list)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  ActivityRogueDiaryExcelConfigMgr *p_activity_rogue_diary_config_mgr; // rcx
  common::milog::MiLogStream *v10; // rax
  const proto::ActivityDungeonAvatar *v11; // rax
  const proto::ActivityDungeonAvatar *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v20; // rax
  uint32_t AvatarComp; // eax
  bool v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v25; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v26; // rax
  _DWORD *v27; // rdx
  uint32_t v28; // eax
  common::milog::MiLogStream *v29; // rax
  _BOOL4 v30; // r14d
  common::milog::MiLogStream *v31; // rax
  _BOOL4 v32; // r14d
  PlayerAvatarComp *v33; // r14
  std::shared_ptr<Avatar> *i; // r14
  int v35; // r14d
  const std::vector<long unsigned int>::value_type *v36; // rax
  unsigned __int64 *v37; // r14
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  unsigned __int64 *v39; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,long unsigned int>,false,false>,bool> v40; // rax
  common::milog::MiLogStream *v41; // r14
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  RogueDiaryAvatarData *v46; // r14
  unsigned __int64 *v47; // rax
  RogueDiaryAvatarData *v48; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>,bool> v49; // rax
  common::milog::MiLogStream *v50; // r14
  const unsigned __int64 *v51; // rax
  PlayerAvatarComp *v52; // rax
  const std::weak_ptr<Avatar> *v53; // rax
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rdx
  char v56; // al
  PlayerAvatarComp *v57; // r14
  std::shared_ptr<Avatar> *j; // r14
  int v59; // r14d
  const std::vector<long unsigned int>::value_type *v60; // rax
  unsigned __int64 *v61; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v62; // rax
  unsigned __int64 *v63; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,long unsigned int>,false,false>,bool> v64; // rax
  common::milog::MiLogStream *v65; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v66; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v67; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v68; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v69; // rax
  RogueDiaryAvatarData *v70; // r14
  unsigned __int64 *v71; // rax
  RogueDiaryAvatarData *v72; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>,bool> v73; // rax
  common::milog::MiLogStream *v74; // r14
  const unsigned __int64 *v75; // rax
  int v76; // r14d
  const proto::ActivityDungeonAvatar *v77; // rax
  const proto::ActivityDungeonAvatar *v78; // rax
  common::milog::MiLogStream *v79; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,long unsigned int>,false,false>::pointer v80; // rax
  common::milog::MiLogStream *v81; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,long unsigned int>,false,false>::pointer v82; // rax
  signed int v83; // eax
  common::milog::MiLogStream *v84; // rax
  int v85; // r14d
  std::unordered_map<long unsigned int,RogueDiaryAvatarData> *v86; // rax
  std::vector<long unsigned int> *v87; // rax
  PlayerAvatarComp *v88; // rax
  bool v90; // [rsp+Fh] [rbp-5A1h]
  std::initializer_list<std::shared_ptr<Avatar> > __la; // [rsp+10h] [rbp-5A0h]
  bool __l; // [rsp+10h] [rbp-5A0h]
  std::initializer_list<std::shared_ptr<Avatar> > v93; // [rsp+20h] [rbp-590h]
  std::allocator<std::shared_ptr<Avatar> > __a; // [rsp+41h] [rbp-56Fh] BYREF
  bool is_trial_0; // [rsp+42h] [rbp-56Eh]
  int32_t ret; // [rsp+44h] [rbp-56Ch]
  google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar>::const_iterator __for_begin_0; // [rsp+48h] [rbp-568h] BYREF
  google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar>::const_iterator __for_end_0; // [rsp+50h] [rbp-560h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+58h] [rbp-558h] BYREF
  const data::RogueDiaryStageExcelConfig *stage_config_ptr; // [rsp+60h] [rbp-550h]
  const google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar> *__for_range; // [rsp+68h] [rbp-548h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+70h] [rbp-540h]
  std::vector<std::weak_ptr<Avatar>> *__for_range_1; // [rsp+78h] [rbp-538h]
  const google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar> *__for_range_2; // [rsp+80h] [rbp-530h]
  const proto::RogueDiaryAvatar *proto_rogue_avatar_0; // [rsp+88h] [rbp-528h]
  const proto::RogueDiaryAvatar *proto_rogue_avatar; // [rsp+90h] [rbp-520h]
  const data::TrialAvatarExcelConfig *trial_avatar_config_ptr; // [rsp+98h] [rbp-518h]
  std::vector<std::shared_ptr<Avatar>> avatar_vec; // [rsp+A0h] [rbp-510h] BYREF
  common::milog::MiLogStream v110; // [rsp+C0h] [rbp-4F0h] BYREF
  char v111[1232]; // [rsp+E0h] [rbp-4D0h] BYREF

  v3 = (unsigned __int64)v111;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1184LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "19 32 4 20 trial_avatar_id:2500 48 4 7 id:2600 64 8 9 guid:2602 96 8 9 iter:2616 128 16 15 avata"
                        "r_wtr:2555 160 16 15 avatar_ptr:2557 192 16 22 mirror_avatar_ptr:2625 224 24 17 res_guid_vec:243"
                        "8 288 24 22 snapshot_guid_vec:2492 352 24 30 onstage_snapshot_guid_vec:2493 416 24 15 avatar_vec"
                        ":2554 480 24 13 guid_vec:2560 544 28 9 data:2583 608 56 24 trial_config_id_set:2439 704 56 24 tr"
                        "ial_avatar_id_set:2440 800 56 25 formal_avatar_id_set:2441 896 56 26 trial_avatar_guid_map:2494 "
                        "992 56 27 formal_avatar_guid_map:2495 1088 56 25 guid_avatar_data_map:2496";
  *(_QWORD *)(v3 + 16) = RogueDiaryRuntimeMgr::checkAndSetRogueDiaryTeam;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -234881024;
  v5[536862728] = -218959118;
  v5[536862729] = -234881024;
  v5[536862730] = -218959118;
  v5[536862731] = -234881024;
  v5[536862732] = -218959118;
  v5[536862733] = -234881024;
  v5[536862734] = -218959118;
  v5[536862735] = -234881024;
  v5[536862736] = -218959118;
  v5[536862737] = 0x4000000;
  v5[536862738] = -218959118;
  v5[536862740] = -234881024;
  v5[536862741] = -218959118;
  v5[536862743] = -234881024;
  v5[536862744] = -218959118;
  v5[536862746] = -234881024;
  v5[536862747] = -218959118;
  v5[536862749] = -234881024;
  v5[536862750] = -218959118;
  v5[536862752] = -234881024;
  v5[536862753] = -218959118;
  v5[536862755] = -218103808;
  v5[536862756] = -202116109;
  if ( (unsigned int)google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar>::size(chosen_avatar_list) > 4
    || !google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar>::size(chosen_avatar_list) )
  {
    common::milog::MiLogStream::create(
      &v110,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "checkAndSetRogueDiaryTeam",
      2427);
    v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v110,
           (const char (*)[47])"[RogueDiary] invalid chosen avatar size, size:");
    *(_DWORD *)(v3 + 48) = google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar>::size(chosen_avatar_list);
    common::milog::MiLogStream::operator<<<int,(int *)0>(v7, (const int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v110);
    v8 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 192));
    p_activity_rogue_diary_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192))->design_config.txt_config_mgr.activity_rogue_diary_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->stage_id_);
    }
    stage_config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryStageExcelConfig(
                         p_activity_rogue_diary_config_mgr,
                         this->stage_id_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 192));
    if ( stage_config_ptr )
    {
      std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v3 + 224));
      std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v3 + 608));
      std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v3 + 704));
      std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v3 + 800));
      __for_range = chosen_avatar_list;
      __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar>::begin(chosen_avatar_list).it_;
      *(google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar>::const_iterator *)(v3 + 64) = google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar>::end(chosen_avatar_list);
      while ( google::protobuf::internal::RepeatedPtrIterator<proto::RogueDiaryAvatar const>::operator!=(
                &__for_end_0,
                (const google::protobuf::internal::RepeatedPtrIterator<const proto::RogueDiaryAvatar>::iterator *)(v3 + 64)) )
      {
        proto_rogue_avatar = google::protobuf::internal::RepeatedPtrIterator<proto::RogueDiaryAvatar const>::operator*(&__for_end_0);
        v11 = proto::RogueDiaryAvatar::avatar(proto_rogue_avatar);
        *(_DWORD *)(v3 + 32) = proto::ActivityDungeonAvatar::avatar_id(v11);
        v12 = proto::RogueDiaryAvatar::avatar(proto_rogue_avatar);
        if ( proto::ActivityDungeonAvatar::is_trial(v12) )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v3 + 192));
          v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
          trial_avatar_config_ptr = data::TrialAvatarExcelConfigMgrBase::findTrialAvatarExcelConfig(
                                      &v13->design_config.txt_config_mgr.trial_avatar_config_mgr,
                                      *(_DWORD *)(v3 + 32));
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 192));
          if ( !trial_avatar_config_ptr )
          {
            common::milog::MiLogStream::create(
              &v110,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
              "checkAndSetRogueDiaryTeam",
              2453);
            v14 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                    &v110,
                    (const char (*)[65])"[RogueDiary] findTrialAvatarExcelConfig failed, trial_config_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 32));
            common::milog::MiLogStream::~MiLogStream(&v110);
            v8 = -1;
            goto LABEL_135;
          }
          __for_end._M_current = std::vector<unsigned int>::end(&stage_config_ptr->trial_avatar_list)._M_current;
          M_current = std::vector<unsigned int>::end(&stage_config_ptr->trial_avatar_list)._M_current;
          v16._M_current = std::vector<unsigned int>::begin(&stage_config_ptr->trial_avatar_list)._M_current;
          *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 96) = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(v16, (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current, (const unsigned int *)(v3 + 32));
          if ( __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(
                 (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 96),
                 &__for_end) )
          {
            common::milog::MiLogStream::create(
              &v110,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
              "checkAndSetRogueDiaryTeam",
              2458);
            v17 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                    &v110,
                    (const char (*)[54])"[RogueDiary] trial_config_id failed, trial_config_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 32));
            common::milog::MiLogStream::~MiLogStream(&v110);
            v8 = -1;
            goto LABEL_135;
          }
          if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                 (std::unordered_set<unsigned int> *)(v3 + 608),
                 (const unsigned int *)(v3 + 32)) )
          {
            common::milog::MiLogStream::create(
              &v110,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
              "checkAndSetRogueDiaryTeam",
              2463);
            v18 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                    &v110,
                    (const char (*)[57])"[RogueDiary] duplicate trial_config_id, trial_config_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 32));
            common::milog::MiLogStream::~MiLogStream(&v110);
            v8 = -1;
            goto LABEL_135;
          }
          if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&trial_avatar_config_ptr->avatar.avatar_id);
          }
          *(_DWORD *)(v3 + 48) = trial_avatar_config_ptr->avatar.avatar_id;
          if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                 (std::unordered_set<unsigned int> *)(v3 + 704),
                 (const unsigned int *)(v3 + 48))
            || common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                 (std::unordered_set<unsigned int> *)(v3 + 800),
                 (const unsigned int *)(v3 + 48)) )
          {
            common::milog::MiLogStream::create(
              &v110,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
              "checkAndSetRogueDiaryTeam",
              2469);
            v20 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                    &v110,
                    (const char (*)[45])"[RogueDiary] duplicate avatar_id, avatar_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v110);
            v8 = -1;
            goto LABEL_135;
          }
          std::unordered_set<unsigned int>::insert(
            (std::unordered_set<unsigned int> *const)(v3 + 608),
            (const std::unordered_set<unsigned int>::value_type *)(v3 + 32));
          std::unordered_set<unsigned int>::insert(
            (std::unordered_set<unsigned int> *const)(v3 + 704),
            (const std::unordered_set<unsigned int>::value_type *)(v3 + 48));
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          AvatarComp = (unsigned int)Player::getAvatarComp(this->player_);
          PlayerAvatarComp::findFormalAvatarByAvatarId((const PlayerAvatarComp *const)(v3 + 192), AvatarComp);
          v22 = std::operator==<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v3 + 192));
          std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v3 + 192));
          if ( v22 )
          {
            common::milog::MiLogStream::create(
              &v110,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
              "checkAndSetRogueDiaryTeam",
              2479);
            v23 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                    &v110,
                    (const char (*)[59])"[RogueDiary] findFormalAvatarByAvatarId failed, avatar_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 32));
            common::milog::MiLogStream::~MiLogStream(&v110);
            v8 = -1;
            goto LABEL_135;
          }
          if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                 (std::unordered_set<unsigned int> *)(v3 + 704),
                 (const unsigned int *)(v3 + 32))
            || common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                 (std::unordered_set<unsigned int> *)(v3 + 800),
                 (const unsigned int *)(v3 + 32)) )
          {
            common::milog::MiLogStream::create(
              &v110,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
              "checkAndSetRogueDiaryTeam",
              2484);
            v25 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                    &v110,
                    (const char (*)[45])"[RogueDiary] duplicate avatar_id, avatar_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v3 + 32));
            common::milog::MiLogStream::~MiLogStream(&v110);
            v8 = -1;
            goto LABEL_135;
          }
          std::unordered_set<unsigned int>::insert(
            (std::unordered_set<unsigned int> *const)(v3 + 800),
            (const std::unordered_set<unsigned int>::value_type *)(v3 + 32));
        }
        google::protobuf::internal::RepeatedPtrIterator<proto::RogueDiaryAvatar const>::operator++(&__for_end_0);
      }
      std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v3 + 288));
      std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v3 + 352));
      std::unordered_map<unsigned int,unsigned long>::unordered_map((std::unordered_map<unsigned int,long unsigned int> *const)(v3 + 896));
      std::unordered_map<unsigned int,unsigned long>::unordered_map((std::unordered_map<unsigned int,long unsigned int> *const)(v3 + 992));
      std::unordered_map<unsigned long,RogueDiaryAvatarData>::unordered_map((std::unordered_map<long unsigned int,RogueDiaryAvatarData> *const)(v3 + 1088));
      ret = 0;
      __for_range_0 = &stage_config_ptr->trial_avatar_list;
      *(std::vector<unsigned int>::const_iterator *)(v3 + 96) = std::vector<unsigned int>::begin(&stage_config_ptr->trial_avatar_list);
      __for_end._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 96),
                &__for_end) )
      {
        v26 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 96));
        v27 = v26;
        if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v26);
        }
        *(_DWORD *)(v3 + 32) = *v27;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v28 = (unsigned int)Player::getAvatarComp(this->player_);
        PlayerAvatarComp::createTrialAvatar((PlayerAvatarComp *const)(v3 + 128), v28, *(_DWORD *)(v3 + 32));
        if ( std::operator==<TrialAvatar>(0LL, (const std::shared_ptr<TrialAvatar> *)(v3 + 128)) )
        {
          common::milog::MiLogStream::create(
            &v110,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
            "checkAndSetRogueDiaryTeam",
            2505);
          v29 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                  &v110,
                  (const char (*)[57])"[RogueDiary] createTrialAvatar nullptr, trial_avatar_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v110);
          ret = -1;
          v30 = 0;
        }
        else
        {
          std::dynamic_pointer_cast<Avatar,TrialAvatar>((const std::shared_ptr<TrialAvatar> *)(v3 + 160));
          if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 160)) )
          {
            common::milog::MiLogStream::create(
              &v110,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
              "checkAndSetRogueDiaryTeam",
              2512);
            v31 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                    &v110,
                    (const char (*)[57])"[RogueDiary] createTrialAvatar nullptr, trial_avatar_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v3 + 32));
            common::milog::MiLogStream::~MiLogStream(&v110);
            ret = -1;
            v32 = 0;
          }
          else
          {
            std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v3 + 480));
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            v33 = Player::getAvatarComp(this->player_);
            std::shared_ptr<Avatar>::shared_ptr(
              (std::shared_ptr<Avatar> *const)(v3 + 192),
              (const std::shared_ptr<Avatar> *)(v3 + 160));
            __la._M_array = (std::initializer_list<std::shared_ptr<Avatar> >::iterator)(v3 + 192);
            __la._M_len = 1LL;
            std::allocator<std::shared_ptr<Avatar>>::allocator(&__a);
            std::vector<std::shared_ptr<Avatar>>::vector(&avatar_vec, __la, &__a);
            v90 = PlayerAvatarComp::saveAvatarSnapshotBatch(
                    v33,
                    AVATAR_SNAPSHOT_TYPE_ROGUE_ACTIVITY,
                    &avatar_vec,
                    (std::vector<long unsigned int> *)(v3 + 480)) != 0;
            std::vector<std::shared_ptr<Avatar>>::~vector(&avatar_vec);
            std::allocator<std::shared_ptr<Avatar>>::~allocator(&__a);
            for ( i = (std::shared_ptr<Avatar> *)(v3 + 208);
                  i != (std::shared_ptr<Avatar> *)(v3 + 192);
                  std::shared_ptr<Avatar>::~shared_ptr(i) )
            {
              --i;
            }
            if ( v90 )
            {
              common::milog::MiLogStream::create(
                &v110,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
                "checkAndSetRogueDiaryTeam",
                2519);
              common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v110,
                (const char (*)[44])"[RogueDiary] saveAvatarSnapshotBatch failed");
              common::milog::MiLogStream::~MiLogStream(&v110);
              ret = -1;
              v35 = 0;
            }
            else if ( std::vector<unsigned long>::empty((const std::vector<long unsigned int> *const)(v3 + 480)) )
            {
              common::milog::MiLogStream::create(
                &v110,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
                "checkAndSetRogueDiaryTeam",
                2525);
              common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v110,
                (const char (*)[44])"[RogueDiary] saveAvatarSnapshotBatch failed");
              common::milog::MiLogStream::~MiLogStream(&v110);
              ret = -1;
              v35 = 0;
            }
            else
            {
              v36 = std::vector<unsigned long>::operator[]((std::vector<long unsigned int> *const)(v3 + 480), 0LL);
              std::vector<unsigned long>::push_back((std::vector<long unsigned int> *const)(v3 + 288), v36);
              v37 = std::vector<unsigned long>::operator[]((std::vector<long unsigned int> *const)(v3 + 480), 0LL);
              v38 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              *(_DWORD *)(v3 + 48) = TrialAvatar::getTrialAvatarId(v38);
              v40 = std::unordered_map<unsigned int,unsigned long>::emplace<unsigned int,unsigned long &>(
                      (std::unordered_map<unsigned int,long unsigned int> *const)(v3 + 896),
                      (unsigned int *)(v3 + 48),
                      v37,
                      (unsigned int *)(v3 + 48),
                      v39);
              if ( !v40.second )
              {
                common::milog::MiLogStream::create(
                  &v110,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
                  "checkAndSetRogueDiaryTeam",
                  2535);
                v41 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
                        &v110,
                        (const char (*)[74])"[RogueDiary] duplicate trial_avatar_id for trial avatar, trial_avatar_id:");
                v42 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                *(_DWORD *)(v3 + 48) = TrialAvatar::getTrialAvatarId(v42);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v41,
                  (const unsigned int *)(v3 + 48));
                common::milog::MiLogStream::~MiLogStream(&v110);
                ret = -1;
                v35 = 0;
              }
              else
              {
                *(_QWORD *)(v3 + 544) = 0LL;
                *(_QWORD *)(v3 + 552) = 0LL;
                *(_QWORD *)(v3 + 560) = 0LL;
                *(_DWORD *)(v3 + 568) = 0;
                v43 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                *(_DWORD *)(v3 + 544) = Creature::getLevel(v43);
                v44 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                *(float *)v2.m128i_i32 = Creature::getMaxHp(v44);
                *(_DWORD *)(v3 + 552) = _mm_cvtsi128_si32(v2);
                v45 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                *(float *)v2.m128i_i32 = Creature::getMaxEnergy(v45);
                *(_DWORD *)(v3 + 556) = _mm_cvtsi128_si32(v2);
                *(_DWORD *)(v3 + 560) = *(_DWORD *)(v3 + 32);
                *(_DWORD *)(v3 + 564) = 1;
                v46 = std::move<RogueDiaryAvatarData &>((RogueDiaryAvatarData *)(v3 + 544));
                v47 = std::vector<unsigned long>::operator[]((std::vector<long unsigned int> *const)(v3 + 480), 0LL);
                v49 = std::unordered_map<unsigned long,RogueDiaryAvatarData>::emplace<unsigned long &,RogueDiaryAvatarData>(
                        (std::unordered_map<long unsigned int,RogueDiaryAvatarData> *const)(v3 + 1088),
                        v47,
                        v46,
                        v47,
                        v48);
                if ( !v49.second )
                {
                  common::milog::MiLogStream::create(
                    &v110,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
                    "checkAndSetRogueDiaryTeam",
                    2547);
                  v50 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                          &v110,
                          (const char (*)[49])"[RogueDiary] duplicate guid avatar failed, guid:");
                  v51 = std::vector<unsigned long>::operator[]((std::vector<long unsigned int> *const)(v3 + 480), 0LL);
                  common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v50, v51);
                  common::milog::MiLogStream::~MiLogStream(&v110);
                  ret = -1;
                  v35 = 0;
                }
                else
                {
                  v35 = 1;
                }
              }
            }
            std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v3 + 480));
            v32 = v35 == 1;
          }
          std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 160));
          v30 = v32;
        }
        std::shared_ptr<TrialAvatar>::~shared_ptr((std::shared_ptr<TrialAvatar> *const)(v3 + 128));
        if ( !v30 )
          break;
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 96));
      }
      if ( !ret )
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v52 = Player::getAvatarComp(this->player_);
        PlayerAvatarComp::getAllAvatarVec((std::vector<std::weak_ptr<Avatar>> *)(v3 + 416), v52);
        __for_range_1 = (std::vector<std::weak_ptr<Avatar>> *)(v3 + 416);
        *(std::vector<std::weak_ptr<Avatar>>::iterator *)(v3 + 96) = std::vector<std::weak_ptr<Avatar>>::begin((std::vector<std::weak_ptr<Avatar>> *const)(v3 + 416));
        __for_end._M_current = (const unsigned int *)std::vector<std::weak_ptr<Avatar>>::end(__for_range_1)._M_current;
        while ( __gnu_cxx::operator!=<std::weak_ptr<Avatar> *,std::vector<std::weak_ptr<Avatar>>>(
                  (const __gnu_cxx::__normal_iterator<std::weak_ptr<Avatar>*,std::vector<std::weak_ptr<Avatar>> > *)(v3 + 96),
                  (const __gnu_cxx::__normal_iterator<std::weak_ptr<Avatar>*,std::vector<std::weak_ptr<Avatar>> > *)&__for_end) )
        {
          v53 = __gnu_cxx::__normal_iterator<std::weak_ptr<Avatar> *,std::vector<std::weak_ptr<Avatar>>>::operator*((const __gnu_cxx::__normal_iterator<std::weak_ptr<Avatar>*,std::vector<std::weak_ptr<Avatar>> > *const)(v3 + 96));
          std::weak_ptr<Avatar>::weak_ptr((std::weak_ptr<Avatar> *const)(v3 + 128), v53);
          std::weak_ptr<Avatar>::lock((const std::weak_ptr<Avatar> *const)(v3 + 160));
          if ( !std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 160), 0LL) )
            goto LABEL_84;
          v54 = (unsigned __int64)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          if ( *(_BYTE *)((v54 >> 3) + 0x7FFF8000) )
            v54 = __asan_report_load8(v54);
          v55 = *(_QWORD *)v54 + 400LL;
          if ( *(_BYTE *)((v55 >> 3) + 0x7FFF8000) )
            v54 = __asan_report_load8(*(_QWORD *)v54 + 400LL);
          if ( (*(unsigned int (__fastcall **)(unsigned __int64))v55)(v54) == 1 )
            v56 = 1;
          else
LABEL_84:
            v56 = 0;
          if ( !v56 )
            goto LABEL_102;
          std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v3 + 480));
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          v57 = Player::getAvatarComp(this->player_);
          std::shared_ptr<Avatar>::shared_ptr(
            (std::shared_ptr<Avatar> *const)(v3 + 192),
            (const std::shared_ptr<Avatar> *)(v3 + 160));
          v93._M_array = (std::initializer_list<std::shared_ptr<Avatar> >::iterator)(v3 + 192);
          v93._M_len = 1LL;
          std::allocator<std::shared_ptr<Avatar>>::allocator(&__a);
          std::vector<std::shared_ptr<Avatar>>::vector(&avatar_vec, v93, &__a);
          __l = PlayerAvatarComp::saveAvatarSnapshotBatch(
                  v57,
                  AVATAR_SNAPSHOT_TYPE_ROGUE_ACTIVITY,
                  &avatar_vec,
                  (std::vector<long unsigned int> *)(v3 + 480)) != 0;
          std::vector<std::shared_ptr<Avatar>>::~vector(&avatar_vec);
          std::allocator<std::shared_ptr<Avatar>>::~allocator(&__a);
          for ( j = (std::shared_ptr<Avatar> *)(v3 + 208);
                j != (std::shared_ptr<Avatar> *)(v3 + 192);
                std::shared_ptr<Avatar>::~shared_ptr(j) )
          {
            --j;
          }
          if ( __l )
          {
            common::milog::MiLogStream::create(
              &v110,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
              "checkAndSetRogueDiaryTeam",
              2563);
            common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v110,
              (const char (*)[44])"[RogueDiary] saveAvatarSnapshotBatch failed");
            common::milog::MiLogStream::~MiLogStream(&v110);
            ret = -1;
            v59 = 0;
          }
          else if ( std::vector<unsigned long>::empty((const std::vector<long unsigned int> *const)(v3 + 480)) )
          {
            common::milog::MiLogStream::create(
              &v110,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
              "checkAndSetRogueDiaryTeam",
              2569);
            common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v110,
              (const char (*)[44])"[RogueDiary] saveAvatarSnapshotBatch failed");
            common::milog::MiLogStream::~MiLogStream(&v110);
            ret = -1;
            v59 = 0;
          }
          else
          {
            v60 = std::vector<unsigned long>::operator[]((std::vector<long unsigned int> *const)(v3 + 480), 0LL);
            std::vector<unsigned long>::push_back((std::vector<long unsigned int> *const)(v3 + 288), v60);
            v61 = std::vector<unsigned long>::operator[]((std::vector<long unsigned int> *const)(v3 + 480), 0LL);
            v62 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            *(_DWORD *)(v3 + 48) = Avatar::getAvatarId(v62);
            v64 = std::unordered_map<unsigned int,unsigned long>::emplace<unsigned int,unsigned long &>(
                    (std::unordered_map<unsigned int,long unsigned int> *const)(v3 + 992),
                    (unsigned int *)(v3 + 48),
                    v61,
                    (unsigned int *)(v3 + 48),
                    v63);
            if ( !v64.second )
            {
              common::milog::MiLogStream::create(
                &v110,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
                "checkAndSetRogueDiaryTeam",
                2579);
              v65 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                      &v110,
                      (const char (*)[63])"[RogueDiary] duplicate avatar id for formal avatar, avatar_id:");
              v66 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              *(_DWORD *)(v3 + 48) = Avatar::getAvatarId(v66);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v65,
                (const unsigned int *)(v3 + 48));
              common::milog::MiLogStream::~MiLogStream(&v110);
              ret = -1;
              v59 = 0;
            }
            else
            {
              *(_QWORD *)(v3 + 544) = 0LL;
              *(_QWORD *)(v3 + 552) = 0LL;
              *(_QWORD *)(v3 + 560) = 0LL;
              *(_DWORD *)(v3 + 568) = 0;
              v67 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              *(_DWORD *)(v3 + 544) = Creature::getLevel(v67);
              v68 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              *(float *)v2.m128i_i32 = Creature::getMaxHp(v68);
              *(_DWORD *)(v3 + 552) = _mm_cvtsi128_si32(v2);
              v69 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              *(float *)v2.m128i_i32 = Creature::getMaxEnergy(v69);
              *(_DWORD *)(v3 + 556) = _mm_cvtsi128_si32(v2);
              *(_DWORD *)(v3 + 564) = 1;
              v70 = std::move<RogueDiaryAvatarData &>((RogueDiaryAvatarData *)(v3 + 544));
              v71 = std::vector<unsigned long>::operator[]((std::vector<long unsigned int> *const)(v3 + 480), 0LL);
              v73 = std::unordered_map<unsigned long,RogueDiaryAvatarData>::emplace<unsigned long &,RogueDiaryAvatarData>(
                      (std::unordered_map<long unsigned int,RogueDiaryAvatarData> *const)(v3 + 1088),
                      v71,
                      v70,
                      v71,
                      v72);
              if ( !v73.second )
              {
                common::milog::MiLogStream::create(
                  &v110,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
                  "checkAndSetRogueDiaryTeam",
                  2590);
                v74 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                        &v110,
                        (const char (*)[49])"[RogueDiary] duplicate guid avatar failed, guid:");
                v75 = std::vector<unsigned long>::operator[]((std::vector<long unsigned int> *const)(v3 + 480), 0LL);
                common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v74, v75);
                common::milog::MiLogStream::~MiLogStream(&v110);
                ret = -1;
                v59 = 0;
              }
              else
              {
                v59 = 1;
              }
            }
          }
          std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v3 + 480));
          if ( v59 == 1 )
LABEL_102:
            v76 = 1;
          else
            v76 = 0;
          std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 160));
          std::weak_ptr<Avatar>::~weak_ptr((std::weak_ptr<Avatar> *const)(v3 + 128));
          if ( v76 != 1 )
            break;
          __gnu_cxx::__normal_iterator<std::weak_ptr<Avatar> *,std::vector<std::weak_ptr<Avatar>>>::operator++((__gnu_cxx::__normal_iterator<std::weak_ptr<Avatar>*,std::vector<std::weak_ptr<Avatar>> > *const)(v3 + 96));
        }
        if ( !ret )
        {
          __for_range_2 = chosen_avatar_list;
          __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar>::begin(chosen_avatar_list).it_;
          __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar>::end(__for_range_2).it_;
          while ( google::protobuf::internal::RepeatedPtrIterator<proto::RogueDiaryAvatar const>::operator!=(
                    &__for_begin_0,
                    &__for_end_0) )
          {
            proto_rogue_avatar_0 = google::protobuf::internal::RepeatedPtrIterator<proto::RogueDiaryAvatar const>::operator*(&__for_begin_0);
            v77 = proto::RogueDiaryAvatar::avatar(proto_rogue_avatar_0);
            *(_DWORD *)(v3 + 48) = proto::ActivityDungeonAvatar::avatar_id(v77);
            v78 = proto::RogueDiaryAvatar::avatar(proto_rogue_avatar_0);
            is_trial_0 = proto::ActivityDungeonAvatar::is_trial(v78);
            *(_QWORD *)(v3 + 64) = 0LL;
            if ( is_trial_0 )
            {
              *(std::unordered_map<unsigned int,long unsigned int>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,unsigned long>::find(
                                                                                             (std::unordered_map<unsigned int,long unsigned int> *const)(v3 + 896),
                                                                                             (const std::unordered_map<unsigned int,long unsigned int>::key_type *)(v3 + 48));
              __for_end._M_current = (const unsigned int *)std::unordered_map<unsigned int,unsigned long>::end((std::unordered_map<unsigned int,long unsigned int> *const)(v3 + 896))._M_cur;
              if ( std::__detail::operator==<std::pair<unsigned int const,unsigned long>,false>(
                     (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,long unsigned int>,false> *)(v3 + 96),
                     (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,long unsigned int>,false> *)&__for_end) )
              {
                common::milog::MiLogStream::create(
                  &v110,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
                  "checkAndSetRogueDiaryTeam",
                  2608);
                v79 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
                        &v110,
                        (const char (*)[68])"[RogueDiary] find trial in trial_avatar_guid_map failed, avatar_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v79,
                  (const unsigned int *)(v3 + 48));
                common::milog::MiLogStream::~MiLogStream(&v110);
                ret = -1;
                break;
              }
              v80 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned long>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,long unsigned int>,false,false> *const)(v3 + 96));
              if ( *(_BYTE *)(((unsigned __int64)&v80->second >> 3) + 0x7FFF8000) )
                v80 = (std::__detail::_Node_iterator<std::pair<unsigned int const,long unsigned int>,false,false>::pointer)__asan_report_load8(&v80->second);
              *(_QWORD *)(v3 + 64) = v80->second;
            }
            else
            {
              *(std::unordered_map<unsigned int,long unsigned int>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,unsigned long>::find(
                                                                                             (std::unordered_map<unsigned int,long unsigned int> *const)(v3 + 992),
                                                                                             (const std::unordered_map<unsigned int,long unsigned int>::key_type *)(v3 + 48));
              __for_end._M_current = (const unsigned int *)std::unordered_map<unsigned int,unsigned long>::end((std::unordered_map<unsigned int,long unsigned int> *const)(v3 + 992))._M_cur;
              if ( std::__detail::operator==<std::pair<unsigned int const,unsigned long>,false>(
                     (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,long unsigned int>,false> *)(v3 + 96),
                     (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,long unsigned int>,false> *)&__for_end) )
              {
                common::milog::MiLogStream::create(
                  &v110,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
                  "checkAndSetRogueDiaryTeam",
                  2619);
                v81 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
                        &v110,
                        (const char (*)[70])"[RogueDiary] find formal in formal_avatar_guid_map failed, avatar_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v81,
                  (const unsigned int *)(v3 + 48));
                common::milog::MiLogStream::~MiLogStream(&v110);
                ret = -1;
                break;
              }
              v82 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned long>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,long unsigned int>,false,false> *const)(v3 + 96));
              if ( *(_BYTE *)(((unsigned __int64)&v82->second >> 3) + 0x7FFF8000) )
                v82 = (std::__detail::_Node_iterator<std::pair<unsigned int const,long unsigned int>,false,false>::pointer)__asan_report_load8(&v82->second);
              *(_QWORD *)(v3 + 64) = v82->second;
            }
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            v83 = (unsigned int)Player::getAvatarComp(this->player_);
            PlayerAvatarComp::findMirrorAvatarOrCreateFromSnapshot(
              (PlayerAvatarComp *const)(v3 + 192),
              (proto::AvatarSnapshotType)v83,
              1uLL);
            if ( std::operator==<MirrorAvatar>(0LL, (const std::shared_ptr<MirrorAvatar> *)(v3 + 192)) )
            {
              common::milog::MiLogStream::create(
                &v110,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
                "checkAndSetRogueDiaryTeam",
                2628);
              v84 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                      &v110,
                      (const char (*)[64])"[RogueDiary] findMirrorAvatarOrCreateFromSnapshot failed, guid:");
              common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v84,
                (const unsigned __int64 *)(v3 + 64));
              common::milog::MiLogStream::~MiLogStream(&v110);
              ret = -1;
              v85 = 0;
            }
            else
            {
              std::vector<unsigned long>::push_back(
                (std::vector<long unsigned int> *const)(v3 + 352),
                (const std::vector<long unsigned int>::value_type *)(v3 + 64));
              v85 = 1;
            }
            std::shared_ptr<MirrorAvatar>::~shared_ptr((std::shared_ptr<MirrorAvatar> *const)(v3 + 192));
            if ( v85 != 1 )
              break;
            google::protobuf::internal::RepeatedPtrIterator<proto::RogueDiaryAvatar const>::operator++(&__for_begin_0);
          }
          if ( !ret )
          {
            v86 = std::move<std::unordered_map<unsigned long,RogueDiaryAvatarData> &>((std::unordered_map<long unsigned int,RogueDiaryAvatarData> *)(v3 + 1088));
            std::unordered_map<unsigned long,RogueDiaryAvatarData>::operator=(&this->guid_avatar_data_map_, v86);
            v87 = std::move<std::vector<unsigned long> &>((std::vector<long unsigned int> *)(v3 + 352));
            std::vector<unsigned long>::operator=(&this->onstage_guid_vec_, v87);
          }
        }
        std::vector<std::weak_ptr<Avatar>>::~vector((std::vector<std::weak_ptr<Avatar>> *const)(v3 + 416));
      }
      if ( ret )
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v88 = Player::getAvatarComp(this->player_);
        PlayerAvatarComp::delInformalAvatarOrSnapshotBatch(
          v88,
          AVATAR_SNAPSHOT_TYPE_ROGUE_ACTIVITY,
          (const std::vector<long unsigned int> *)(v3 + 288));
        v8 = ret;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v110,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "checkAndSetRogueDiaryTeam",
          2647);
        common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
          &v110,
          (const char (*)[44])"[RogueDiary] checkAndSetRogueDiaryTeam succ");
        common::milog::MiLogStream::~MiLogStream(&v110);
        v8 = 0;
      }
      std::unordered_map<unsigned long,RogueDiaryAvatarData>::~unordered_map((std::unordered_map<long unsigned int,RogueDiaryAvatarData> *const)(v3 + 1088));
      std::unordered_map<unsigned int,unsigned long>::~unordered_map((std::unordered_map<unsigned int,long unsigned int> *const)(v3 + 992));
      std::unordered_map<unsigned int,unsigned long>::~unordered_map((std::unordered_map<unsigned int,long unsigned int> *const)(v3 + 896));
      std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v3 + 352));
      std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v3 + 288));
LABEL_135:
      std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v3 + 800));
      std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v3 + 704));
      std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v3 + 608));
      std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v3 + 224));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v110,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "checkAndSetRogueDiaryTeam",
        2434);
      v10 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
              &v110,
              (const char (*)[62])"[RogueDiary] findRogueDiaryStageExcelConfig failed, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->stage_id_);
      common::milog::MiLogStream::~MiLogStream(&v110);
      v8 = -1;
    }
  }
  if ( v111 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF805C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8074) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8080) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF808C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1184LL, v111);
  }
  return v8;
};

// Line 2652: range 00000000143DF3A4-00000000143E0721
int32_t __cdecl RogueDiaryRuntimeMgr::initEnterSceneAvatar(
        RogueDiaryRuntimeMgr *const this,
        ScenePtr *p_dest_scene_ptr,
        std::vector<std::shared_ptr<Avatar>> *enter_scene_avatar_vec,
        AvatarPtr *appear_avatar_ptr,
        std::vector<std::shared_ptr<Avatar>> *refresh_avatar_vec)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  int32_t v8; // r14d
  DungeonScene *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint64_t *v15; // rax
  PlayerAvatarComp *AvatarComp; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  PlayerAvatarComp *v19; // rax
  proto::PlayerDieType DieType; // eax
  PlayerAvatarComp *v21; // rax
  char v22; // al
  const std::shared_ptr<Avatar> *v23; // rdx
  unsigned __int64 v24; // rax
  std::__detail::_Node_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer v25; // rdx
  uint32_t *p_life_state; // rax
  char v27; // al
  PlayerAvatarComp *v28; // rax
  int v29; // r14d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // r14
  std::__detail::_Node_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer v31; // rax
  __m128i v32; // xmm0
  Avatar *v33; // rax
  Avatar *v34; // rax
  common::milog::MiLogStream *v35; // r14
  unsigned __int64 v36; // rax
  void (__fastcall **v37)(common::milog::MiLogStream *, unsigned __int64); // rdx
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  const std::shared_ptr<Avatar> *v41; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  __m128i v44; // xmm0
  Avatar *v45; // rax
  Avatar *v46; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  std::vector<long unsigned int>::iterator *p_for_end; // rsi
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  int v50; // r14d
  std::__detail::_Node_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer v51; // rdx
  char v52; // cl
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // rax
  int v54; // r14d
  __int64 v55; // rax
  char v56; // dl
  __int64 v57; // rdx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rax
  data::LifeState LifeState; // r14d
  std::__detail::_Node_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer v60; // rdx
  char v61; // cl
  common::milog::MiLogStream *v62; // r14
  unsigned __int64 v63; // rax
  void (__fastcall **v64)(common::milog::MiLogStream *, unsigned __int64); // rdx
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v67; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+38h] [rbp-148h] BYREF
  float revive_hp_percent; // [rsp+3Ch] [rbp-144h]
  std::vector<long unsigned int>::iterator __for_begin; // [rsp+40h] [rbp-140h] BYREF
  std::vector<long unsigned int>::iterator __for_end_0; // [rsp+48h] [rbp-138h] BYREF
  std::vector<long unsigned int>::iterator __for_end; // [rsp+50h] [rbp-130h] BYREF
  std::vector<long unsigned int> *__for_range; // [rsp+58h] [rbp-128h]
  std::vector<long unsigned int> *__for_range_0; // [rsp+60h] [rbp-120h]
  uint64_t mirror_avatar_guid; // [rsp+68h] [rbp-118h]
  common::milog::MiLogStream v80; // [rsp+70h] [rbp-110h] BYREF
  common::milog::MiLogStream v81; // [rsp+90h] [rbp-F0h] BYREF
  char v82[208]; // [rsp+B0h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v82;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 32 8 23 mirror_avatar_guid:2723 64 8 9 iter:2765 96 16 27 dest_dungeon_scene_ptr:2668 128 16 1"
                        "5 avatar_ptr:2698";
  *(_QWORD *)(v5 + 16) = RogueDiaryRuntimeMgr::initEnterSceneAvatar;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -218959360;
  v7[536862723] = -219021312;
  v7[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_have_progress_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_progress_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_have_progress_);
  }
  if ( !this->is_have_progress_ )
  {
    common::milog::MiLogStream::create(
      &v81,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "initEnterSceneAvatar",
      2655);
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
      &v81,
      (const char (*)[49])"[RogueDiary] runtime mgr have no progress failed");
    common::milog::MiLogStream::~MiLogStream(&v81);
    v8 = -1;
    goto LABEL_96;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->is_have_enter_dungeon_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 35) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_enter_dungeon_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_have_enter_dungeon_);
  }
  if ( !this->is_have_enter_dungeon_ )
  {
    common::milog::MiLogStream::create(
      &v81,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "initEnterSceneAvatar",
      2660);
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
      &v81,
      (const char (*)[49])"[RogueDiary] runtime mgr have no progress failed");
    common::milog::MiLogStream::~MiLogStream(&v81);
    v8 = -1;
    goto LABEL_96;
  }
  if ( std::operator==<Scene>(0LL, p_dest_scene_ptr) )
  {
    common::milog::MiLogStream::create(
      &v81,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "initEnterSceneAvatar",
      2665);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v81,
      (const char (*)[39])"[RogueDiary] dest scene ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v81);
    v8 = -1;
    goto LABEL_96;
  }
  std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v5 + 96));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v5 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v81,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "initEnterSceneAvatar",
      2671);
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
      &v81,
      (const char (*)[47])"[RogueDiary] dest_dungeon_scene_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v81);
    v8 = -1;
  }
  else
  {
    v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
    if ( !DungeonScene::isEnterByRogueDiaryActivity(v9) )
    {
      common::milog::MiLogStream::create(
        &v81,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "initEnterSceneAvatar",
        2677);
      v10 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v81,
              (const char (*)[46])"[RogueDiary] enter wrong dungeon, dungeon_id:");
      v11 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
      val = DungeonScene::getDungeonId(v11);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v81);
      v8 = -1;
    }
    else
    {
      v12 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
      if ( DungeonScene::getDungeonType(v12) == DUNGEON_ROGUE_DIARY )
      {
        if ( !std::vector<unsigned long>::empty(&this->onstage_guid_vec_) )
        {
          __for_range = &this->onstage_guid_vec_;
          *(std::vector<long unsigned int>::iterator *)(v5 + 64) = std::vector<unsigned long>::begin(&this->onstage_guid_vec_);
          __for_end._M_current = std::vector<unsigned long>::end(__for_range)._M_current;
          while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(
                    (const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *)(v5 + 64),
                    &__for_end) )
          {
            v15 = __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*((const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *const)(v5 + 64));
            if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
              v15 = (uint64_t *)__asan_report_load8(v15);
            mirror_avatar_guid = *v15;
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            AvatarComp = Player::getAvatarComp(this->player_);
            PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v5 + 128), (uint64_t)AvatarComp);
            if ( std::operator!=<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v5 + 128)) )
            {
              std::vector<std::shared_ptr<Avatar>>::push_back(
                enter_scene_avatar_vec,
                (const std::vector<std::shared_ptr<Avatar>>::value_type *)(v5 + 128));
              if ( std::operator==<Avatar>(appear_avatar_ptr, 0LL) )
              {
                v17 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
                if ( Creature::getLifeState(v17) == LIFE_ALIVE )
                  std::shared_ptr<Avatar>::operator=(appear_avatar_ptr, (const std::shared_ptr<Avatar> *)(v5 + 128));
              }
            }
            std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v5 + 128));
            __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++((__gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *const)(v5 + 64));
          }
          if ( !std::operator==<Avatar>(appear_avatar_ptr, 0LL) )
            goto LABEL_44;
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          v19 = Player::getAvatarComp(this->player_);
          DieType = PlayerAvatarComp::getDieType(v19);
          if ( !isNoHurtDie(DieType) )
            goto LABEL_44;
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          v21 = Player::getAvatarComp(this->player_);
          if ( PlayerAvatarComp::isRevivableAfterAllDead(v21) )
            v22 = 1;
          else
LABEL_44:
            v22 = 0;
          if ( v22 )
          {
            if ( !std::vector<std::shared_ptr<Avatar>>::size(enter_scene_avatar_vec) )
            {
              common::milog::MiLogStream::create(
                &v81,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
                "initEnterSceneAvatar",
                2714);
              common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                &v81,
                (const char (*)[53])"[RogueDiary] enter_scene_avatar_vec size less than 1");
              common::milog::MiLogStream::~MiLogStream(&v81);
              v8 = -1;
              goto LABEL_95;
            }
            v23 = std::vector<std::shared_ptr<Avatar>>::operator[](enter_scene_avatar_vec, 0LL);
            std::shared_ptr<Avatar>::operator=(appear_avatar_ptr, v23);
            common::milog::MiLogStream::create(
              &v81,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
              "initEnterSceneAvatar",
              2718);
            common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v81,
              (const char (*)[40])"[RogueDiary] revive avatar by NoHurtDie");
            common::milog::MiLogStream::~MiLogStream(&v81);
          }
          if ( std::operator==<Avatar>(appear_avatar_ptr, 0LL) )
          {
            __for_range_0 = &this->onstage_guid_vec_;
            __for_begin._M_current = std::vector<unsigned long>::begin(&this->onstage_guid_vec_)._M_current;
            __for_end_0._M_current = std::vector<unsigned long>::end(__for_range_0)._M_current;
            while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(&__for_begin, &__for_end_0) )
            {
              v24 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*(&__for_begin);
              if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
                v24 = __asan_report_load8(v24);
              *(_QWORD *)(v5 + 32) = *(_QWORD *)v24;
              *(std::unordered_map<long unsigned int,RogueDiaryAvatarData>::iterator *)(v5 + 64) = std::unordered_map<unsigned long,RogueDiaryAvatarData>::find(
                                                                                                     &this->guid_avatar_data_map_,
                                                                                                     (const std::unordered_map<long unsigned int,RogueDiaryAvatarData>::key_type *)(v5 + 32));
              __for_end._M_current = (unsigned __int64 *)std::unordered_map<unsigned long,RogueDiaryAvatarData>::end(&this->guid_avatar_data_map_)._M_cur;
              if ( !std::__detail::operator!=<std::pair<unsigned long const,RogueDiaryAvatarData>,false>(
                      (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,RogueDiaryAvatarData>,false> *)(v5 + 64),
                      (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,RogueDiaryAvatarData>,false> *)&__for_end) )
                goto LABEL_59;
              v25 = std::__detail::_Node_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false> *const)(v5 + 64));
              p_life_state = &v25->second.life_state;
              if ( *(_BYTE *)(((unsigned __int64)p_life_state >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p_life_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_life_state >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4(p_life_state);
              }
              if ( v25->second.life_state == 1 )
                v27 = 1;
              else
LABEL_59:
                v27 = 0;
              if ( v27 )
              {
                if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                  __asan_report_load8(this);
                v28 = Player::getAvatarComp(this->player_);
                PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v5 + 128), (uint64_t)v28);
                if ( std::operator!=<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v5 + 128)) )
                {
                  std::shared_ptr<Avatar>::operator=(appear_avatar_ptr, (const std::shared_ptr<Avatar> *)(v5 + 128));
                  if ( std::operator==<Avatar>(0LL, appear_avatar_ptr) )
                  {
                    common::milog::MiLogStream::create(
                      &v81,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
                      "initEnterSceneAvatar",
                      2734);
                    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                      &v81,
                      (const char (*)[39])"[RogueDiary] appear_avatar_ptr nullptr");
                    common::milog::MiLogStream::~MiLogStream(&v81);
                    v29 = 0;
                  }
                  else
                  {
                    v30 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)appear_avatar_ptr);
                    v31 = std::__detail::_Node_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false> *const)(v5 + 64));
                    if ( *(_BYTE *)(((unsigned __int64)&v31->second.cur_hp >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&v31->second.cur_hp >> 3) + 0x7FFF8000) <= 3 )
                    {
                      v31 = (std::__detail::_Node_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer)__asan_report_load4(&v31->second.cur_hp);
                    }
                    v32 = _mm_cvtsi32_si128(LODWORD(v31->second.cur_hp));
                    Creature::setCurHp(v30, *(float *)v32.m128i_i32, 1);
                    v33 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)appear_avatar_ptr);
                    Avatar::clearSpeed(v33);
                    v34 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)appear_avatar_ptr);
                    Avatar::setLifeAlive(v34, 0x71u, 0LL, 0);
                    std::vector<std::shared_ptr<Avatar>>::push_back(refresh_avatar_vec, appear_avatar_ptr);
                    common::milog::MiLogStream::create(
                      &v80,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
                      "initEnterSceneAvatar",
                      2741);
                    v35 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                            &v80,
                            (const char (*)[54])"[RogueDiary] revive a avatar use rogue state, avatar:");
                    v36 = (unsigned __int64)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)appear_avatar_ptr);
                    if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
                      v36 = __asan_report_load8(v36);
                    v37 = *(void (__fastcall ***)(common::milog::MiLogStream *, unsigned __int64))v36;
                    if ( *(_BYTE *)((*(_QWORD *)v36 >> 3) + 0x7FFF8000LL) )
                      v36 = __asan_report_load8(*(_QWORD *)v36);
                    (*v37)(&v81, v36);
                    v38 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                            v35,
                            (const std::string *)&v81);
                    v39 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v38, (const char (*)[6])", hp:");
                    v40 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)appear_avatar_ptr);
                    *(float *)v32.m128i_i32 = Creature::getCurHp(v40);
                    val = _mm_cvtsi128_si32(v32);
                    common::milog::MiLogStream::operator<<<float,(float *)0>(v39, (const float *)&val);
                    std::string::~string(&v81);
                    common::milog::MiLogStream::~MiLogStream(&v80);
                    v29 = 1;
                  }
                }
                else
                {
                  v29 = 2;
                }
                std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v5 + 128));
                if ( v29 )
                {
                  if ( v29 != 2 )
                    break;
                }
              }
              __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++(&__for_begin);
            }
          }
          if ( std::operator==<Avatar>(appear_avatar_ptr, 0LL) )
          {
            if ( !std::vector<std::shared_ptr<Avatar>>::size(enter_scene_avatar_vec) )
            {
              common::milog::MiLogStream::create(
                &v81,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
                "initEnterSceneAvatar",
                2752);
              common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                &v81,
                (const char (*)[53])"[RogueDiary] enter_scene_avatar_vec size less than 1");
              common::milog::MiLogStream::~MiLogStream(&v81);
              v8 = -1;
              goto LABEL_95;
            }
            v41 = std::vector<std::shared_ptr<Avatar>>::operator[](enter_scene_avatar_vec, 0LL);
            std::shared_ptr<Avatar>::operator=(appear_avatar_ptr, v41);
            if ( std::operator!=<Avatar>(0LL, appear_avatar_ptr) )
            {
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)(v5 + 128));
              v42 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
              revive_hp_percent = (float)(int)ConstValueExcelConfigMgr::getHurtReviveHpPercent(&v42->design_config.txt_config_mgr.const_value_config_mgr);
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 128));
              v43 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)appear_avatar_ptr);
              v44 = _mm_cvtsi32_si128(LODWORD(revive_hp_percent));
              Creature::setCurHpPercent(v43, *(float *)v44.m128i_i32, CHANGE_HP_ADD_REVIVE, 0);
              v45 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)appear_avatar_ptr);
              Avatar::clearSpeed(v45);
              v46 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)appear_avatar_ptr);
              Avatar::setLifeAlive(v46, 0x71u, 0LL, 0);
              v47 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)appear_avatar_ptr);
              __for_end._M_current = (unsigned __int64 *)Avatar::getGuid(v47);
              *(std::unordered_map<long unsigned int,RogueDiaryAvatarData>::iterator *)(v5 + 64) = std::unordered_map<unsigned long,RogueDiaryAvatarData>::find(
                                                                                                     &this->guid_avatar_data_map_,
                                                                                                     (const std::unordered_map<long unsigned int,RogueDiaryAvatarData>::key_type *)&__for_end);
              __for_end._M_current = (unsigned __int64 *)std::unordered_map<unsigned long,RogueDiaryAvatarData>::end(&this->guid_avatar_data_map_)._M_cur;
              p_for_end = &__for_end;
              if ( std::__detail::operator!=<std::pair<unsigned long const,RogueDiaryAvatarData>,false>(
                     (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,RogueDiaryAvatarData>,false> *)(v5 + 64),
                     (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,RogueDiaryAvatarData>,false> *)&__for_end) )
              {
                v49 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)appear_avatar_ptr);
                *(float *)v44.m128i_i32 = Creature::getCurEnergy(v49);
                v50 = _mm_cvtsi128_si32(v44);
                v51 = std::__detail::_Node_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false> *const)(v5 + 64));
                v52 = *(_BYTE *)(((unsigned __int64)&v51->second.cur_elem_energy >> 3) + 0x7FFF8000);
                if ( v52 != 0 && (char)((((_BYTE)v51 + 20) & 7) + 3) >= v52 )
                {
                  LOBYTE(p_for_end) = v52 != 0;
                  __asan_report_store4(&v51->second.cur_elem_energy, p_for_end, v51);
                }
                LODWORD(v51->second.cur_elem_energy) = v50;
                v53 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)appear_avatar_ptr);
                *(float *)v44.m128i_i32 = Creature::getCurHp(v53);
                v54 = _mm_cvtsi128_si32(v44);
                v55 = (__int64)std::__detail::_Node_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false> *const)(v5 + 64));
                v56 = *(_BYTE *)(((unsigned __int64)(v55 + 16) >> 3) + 0x7FFF8000);
                LOBYTE(p_for_end) = v56 != 0;
                v57 = (v56 != 0) & (unsigned __int8)(v56 <= 3);
                if ( (_BYTE)v57 )
                  v55 = __asan_report_store4(v55 + 16, p_for_end, v57);
                *(_DWORD *)(v55 + 16) = v54;
                v58 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)appear_avatar_ptr);
                LifeState = Creature::getLifeState(v58);
                v60 = std::__detail::_Node_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false> *const)(v5 + 64));
                v61 = *(_BYTE *)(((unsigned __int64)&v60->second.life_state >> 3) + 0x7FFF8000);
                if ( v61 != 0 && (char)((((_BYTE)v60 + 28) & 7) + 3) >= v61 )
                {
                  LOBYTE(p_for_end) = v61 != 0;
                  __asan_report_store4(&v60->second.life_state, p_for_end, v60);
                }
                v60->second.life_state = LifeState;
              }
              std::vector<std::shared_ptr<Avatar>>::push_back(refresh_avatar_vec, appear_avatar_ptr);
              common::milog::MiLogStream::create(
                &v80,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
                "initEnterSceneAvatar",
                2773);
              v62 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                      &v80,
                      (const char (*)[56])"[RogueDiary] revive a avatar when all team die, avatar:");
              v63 = (unsigned __int64)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)appear_avatar_ptr);
              if ( *(_BYTE *)((v63 >> 3) + 0x7FFF8000) )
                v63 = __asan_report_load8(v63);
              v64 = *(void (__fastcall ***)(common::milog::MiLogStream *, unsigned __int64))v63;
              if ( *(_BYTE *)((*(_QWORD *)v63 >> 3) + 0x7FFF8000LL) )
                v63 = __asan_report_load8(*(_QWORD *)v63);
              (*v64)(&v81, v63);
              v65 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v62, (const std::string *)&v81);
              v66 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v65, (const char (*)[6])", hp:");
              v67 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)appear_avatar_ptr);
              *(float *)v44.m128i_i32 = Creature::getCurHp(v67);
              val = _mm_cvtsi128_si32(v44);
              common::milog::MiLogStream::operator<<<float,(float *)0>(v66, (const float *)&val);
              std::string::~string(&v81);
              common::milog::MiLogStream::~MiLogStream(&v80);
            }
          }
          v8 = 0;
          goto LABEL_95;
        }
        common::milog::MiLogStream::create(
          &v81,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "initEnterSceneAvatar",
          2688);
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          &v81,
          (const char (*)[39])"[RogueDiary] onstage_guid_vec is empty");
        common::milog::MiLogStream::~MiLogStream(&v81);
        v8 = -1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v81,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "initEnterSceneAvatar",
          2682);
        v13 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                &v81,
                (const char (*)[46])"[RogueDiary] enter wrong dungeon, dungeon_id:");
        v14 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
        val = DungeonScene::getDungeonId(v14);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        common::milog::MiLogStream::~MiLogStream(&v81);
        v8 = -1;
      }
    }
  }
LABEL_95:
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v5 + 96));
LABEL_96:
  result = v8;
  if ( v82 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 2780: range 00000000143E0722-00000000143E13AF
int32_t __cdecl RogueDiaryRuntimeMgr::reserveRogueDiaryAvatar(
        RogueDiaryRuntimeMgr *const this,
        const google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar> *avatar_list)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rbx
  int32_t v6; // r14d
  ActivityRogueDiaryExcelConfigMgr *p_activity_rogue_diary_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rbx
  common::milog::MiLogStream *v10; // rbx
  unsigned __int64 *M_current; // r14
  std::vector<long unsigned int>::iterator v12; // rax
  common::milog::MiLogStream *v13; // r14
  const proto::ActivityDungeonAvatar *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::pair<std::__detail::_Node_iterator<long unsigned int,true,false>,bool> v17; // rax
  common::milog::MiLogStream *v18; // r14
  const proto::ActivityDungeonAvatar *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  char v25; // dl
  _BOOL8 v26; // rdx
  std::__detail::_Node_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer v27; // rax
  uint32_t round; // esi
  common::milog::MiLogStream *v29; // rax
  int32_t result; // eax
  unsigned int v31; // [rsp+14h] [rbp-19Ch] BYREF
  int32_t ret; // [rsp+18h] [rbp-198h]
  uint32_t reserve_count; // [rsp+1Ch] [rbp-194h]
  std::vector<long unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-190h] BYREF
  __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > __rhs; // [rsp+28h] [rbp-188h] BYREF
  const data::RogueDiaryStageExcelConfig *stage_config_ptr; // [rsp+30h] [rbp-180h]
  const google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar> *__for_range; // [rsp+38h] [rbp-178h]
  std::vector<long unsigned int> *__for_range_0; // [rsp+40h] [rbp-170h]
  const proto::RogueDiaryAvatar *proto_avatar; // [rsp+48h] [rbp-168h]
  std::shared_ptr<Config> v40; // [rsp+50h] [rbp-160h] BYREF
  common::milog::MiLogStream v41; // [rsp+60h] [rbp-150h] BYREF
  std::string val; // [rsp+80h] [rbp-130h] BYREF
  char v43[272]; // [rsp+A0h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 9 guid:2827 64 8 9 guid:2815 96 8 9 iter:2833 128 56 21 reserve_guid_set:2812";
  *(_QWORD *)(v2 + 16) = RogueDiaryRuntimeMgr::reserveRogueDiaryAvatar;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  ret = RogueDiaryRuntimeMgr::checkCanRepair(this);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "reserveRogueDiaryAvatar",
      2784);
    v5 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v41,
           (const char (*)[37])"[RogueDiary] checkCanRepair failed, ");
    RogueDiaryRuntimeMgr::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v41);
    v6 = ret;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v40);
    p_activity_rogue_diary_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v40)->design_config.txt_config_mgr.activity_rogue_diary_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->stage_id_);
    }
    stage_config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryStageExcelConfig(
                         p_activity_rogue_diary_config_mgr,
                         this->stage_id_);
    std::shared_ptr<Config>::~shared_ptr(&v40);
    if ( stage_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->tired_reserve_avatar_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&stage_config_ptr->tired_reserve_avatar_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&stage_config_ptr->tired_reserve_avatar_count);
      }
      reserve_count = stage_config_ptr->tired_reserve_avatar_count;
      if ( std::vector<unsigned long>::size(&this->onstage_guid_vec_) > reserve_count )
      {
        if ( std::vector<unsigned long>::empty(&this->optional_tired_guid_vec_) )
        {
          common::milog::MiLogStream::create(
            &v41,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
            "reserveRogueDiaryAvatar",
            2804);
          v9 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                 &v41,
                 (const char (*)[53])"[RogueDiary] optional_tired_guid_vec empty, failed, ");
          RogueDiaryRuntimeMgr::getDesc[abi:cxx11](&val, this);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &val);
          std::string::~string(&val);
          common::milog::MiLogStream::~MiLogStream(&v41);
          v6 = -1;
        }
        else if ( reserve_count == google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar>::size(avatar_list) )
        {
          std::unordered_set<unsigned long>::unordered_set((std::unordered_set<long unsigned int> *const)(v2 + 128));
          __for_range = avatar_list;
          *(google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar>::const_iterator *)(v2 + 32) = google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar>::begin(avatar_list);
          __for_begin._M_current = (unsigned __int64 *)google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar>::end(__for_range).it_;
          while ( google::protobuf::internal::RepeatedPtrIterator<proto::RogueDiaryAvatar const>::operator!=(
                    (const google::protobuf::internal::RepeatedPtrIterator<const proto::RogueDiaryAvatar> *const)(v2 + 32),
                    (const google::protobuf::internal::RepeatedPtrIterator<const proto::RogueDiaryAvatar>::iterator *)&__for_begin) )
          {
            proto_avatar = google::protobuf::internal::RepeatedPtrIterator<proto::RogueDiaryAvatar const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::RogueDiaryAvatar> *const)(v2 + 32));
            *(_QWORD *)(v2 + 64) = RogueDiaryRuntimeMgr::getGuidByRogueDiaryAvatar(this, proto_avatar);
            __rhs._M_current = std::vector<unsigned long>::end(&this->optional_tired_guid_vec_)._M_current;
            M_current = std::vector<unsigned long>::end(&this->optional_tired_guid_vec_)._M_current;
            v12._M_current = std::vector<unsigned long>::begin(&this->optional_tired_guid_vec_)._M_current;
            *(__gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *)(v2 + 96) = std::find<__gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>,unsigned long>(v12, (__gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> >)M_current, (const unsigned __int64 *)(v2 + 64));
            if ( __gnu_cxx::operator==<unsigned long *,std::vector<unsigned long>>(
                   (const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *)(v2 + 96),
                   &__rhs) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&val,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
                "reserveRogueDiaryAvatar",
                2818);
              v13 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                      (common::milog::MiLogStream *const)&val,
                      (const char (*)[48])"[RogueDiary] avatar is not optional tired, id, ");
              v14 = proto::RogueDiaryAvatar::avatar(proto_avatar);
              v31 = proto::ActivityDungeonAvatar::avatar_id(v14);
              v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &v31);
              v16 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v15, (const char (*)[8])", guid:");
              common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v16,
                (const unsigned __int64 *)(v2 + 64));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
              v6 = -1;
              goto LABEL_45;
            }
            v17 = std::unordered_set<unsigned long>::insert(
                    (std::unordered_set<long unsigned int> *const)(v2 + 128),
                    (const std::unordered_set<long unsigned int>::value_type *)(v2 + 64));
            if ( !v17.second )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&val,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
                "reserveRogueDiaryAvatar",
                2823);
              v18 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                      (common::milog::MiLogStream *const)&val,
                      (const char (*)[44])"[RogueDiary] duplicate reserve avatar, id, ");
              v19 = proto::RogueDiaryAvatar::avatar(proto_avatar);
              v31 = proto::ActivityDungeonAvatar::avatar_id(v19);
              v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &v31);
              v21 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v20, (const char (*)[8])", guid:");
              common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v21,
                (const unsigned __int64 *)(v2 + 64));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
              v6 = -1;
              goto LABEL_45;
            }
            google::protobuf::internal::RepeatedPtrIterator<proto::RogueDiaryAvatar const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::RogueDiaryAvatar> *const)(v2 + 32));
          }
          __for_range_0 = &this->onstage_guid_vec_;
          __for_begin._M_current = std::vector<unsigned long>::begin(&this->onstage_guid_vec_)._M_current;
          *(std::vector<long unsigned int>::iterator *)(v2 + 64) = std::vector<unsigned long>::end(__for_range_0);
          while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(
                    &__for_begin,
                    (const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *)(v2 + 64)) )
          {
            v22 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*(&__for_begin);
            if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
              v22 = __asan_report_load8(v22);
            *(_QWORD *)(v2 + 32) = *(_QWORD *)v22;
            if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned long>,unsigned long>(
                    (std::unordered_set<long unsigned int> *)(v2 + 128),
                    (const unsigned __int64 *)(v2 + 32)) )
            {
              *(std::unordered_map<long unsigned int,RogueDiaryAvatarData>::iterator *)(v2 + 96) = std::unordered_map<unsigned long,RogueDiaryAvatarData>::find(
                                                                                                     &this->guid_avatar_data_map_,
                                                                                                     (const std::unordered_map<long unsigned int,RogueDiaryAvatarData>::key_type *)(v2 + 32));
              __rhs._M_current = (unsigned __int64 *)std::unordered_map<unsigned long,RogueDiaryAvatarData>::end(&this->guid_avatar_data_map_)._M_cur;
              if ( std::__detail::operator!=<std::pair<unsigned long const,RogueDiaryAvatarData>,false>(
                     (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,RogueDiaryAvatarData>,false> *)(v2 + 96),
                     (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,RogueDiaryAvatarData>,false> *)&__rhs) )
              {
                v23 = (((_BYTE)stage_config_ptr + 108) & 7u) + 3;
                if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->tired_round_count >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)stage_config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_config_ptr->tired_round_count >> 3)
                                                                                   + 0x7FFF8000) )
                {
                  __asan_report_load4(&stage_config_ptr->tired_round_count);
                }
                if ( stage_config_ptr->tired_round_count )
                {
                  v27 = std::__detail::_Node_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false> *const)(v2 + 96));
                  if ( *(_BYTE *)(((unsigned __int64)&v27->second.round >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)v27 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v27->second.round >> 3)
                                                                       + 0x7FFF8000) )
                  {
                    v27 = (std::__detail::_Node_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer)__asan_report_load4(&v27->second.round);
                  }
                  round = v27->second.round;
                  if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->tired_round_count >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)stage_config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_config_ptr->tired_round_count >> 3)
                                                                                     + 0x7FFF8000) )
                  {
                    v27 = (std::__detail::_Node_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer)__asan_report_load4(&stage_config_ptr->tired_round_count);
                  }
                  v27->second.round = round + stage_config_ptr->tired_round_count;
                }
                else
                {
                  v24 = (__int64)std::__detail::_Node_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false> *const)(v2 + 96));
                  v25 = *(_BYTE *)(((unsigned __int64)(v24 + 32) >> 3) + 0x7FFF8000);
                  LOBYTE(v23) = v25 != 0;
                  v26 = v25 < 0;
                  if ( v26 )
                    v24 = __asan_report_store1(v24 + 32, v23, v26);
                  *(_BYTE *)(v24 + 32) = 1;
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&val,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
                  "reserveRogueDiaryAvatar",
                  2847);
                v29 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                        (common::milog::MiLogStream *const)&val,
                        (const char (*)[42])"[RogueDiary] find guid data failed, guid:");
                common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v29,
                  (const unsigned __int64 *)(v2 + 32));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
              }
            }
            __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++(&__for_begin);
          }
          std::vector<unsigned long>::clear(&this->optional_tired_guid_vec_);
          RogueDiaryRuntimeMgr::notifyRepairInfo(this, 0);
          v6 = 0;
LABEL_45:
          std::unordered_set<unsigned long>::~unordered_set((std::unordered_set<long unsigned int> *const)(v2 + 128));
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&val,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
            "reserveRogueDiaryAvatar",
            2809);
          v10 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                  (common::milog::MiLogStream *const)&val,
                  (const char (*)[50])"[RogueDiary] reserve avatar count error, failed, ");
          v31 = google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar>::size(avatar_list);
          common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)&v31);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
          v6 = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "reserveRogueDiaryAvatar",
          2796);
        common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
          (common::milog::MiLogStream *const)&val,
          (const char (*)[70])"[RogueDiary] onstage avatar count less than reserver count, donothing");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        std::vector<unsigned long>::clear(&this->optional_tired_guid_vec_);
        RogueDiaryRuntimeMgr::notifyRepairInfo(this, 0);
        v6 = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "reserveRogueDiaryAvatar",
        2790);
      v8 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
             (common::milog::MiLogStream *const)&val,
             (const char (*)[62])"[RogueDiary] findRogueDiaryStageExcelConfig failed, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->stage_id_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v6 = -1;
    }
  }
  result = v6;
  if ( v43 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
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

// Line 2856: range 00000000143E13B0-00000000143E14F1
uint32_t __cdecl RogueDiaryRuntimeMgr::getCurRoundCountCorrection(const RogueDiaryRuntimeMgr *const this)
{
  const ActivityRogueDiaryExcelConfigMgr *p_activity_rogue_diary_config_mgr; // rdi
  uint32_t dungeon_id; // ecx
  uint32_t cur_difficulty; // edx
  uint32_t StageDungeonPreRoundCount; // ebx
  std::shared_ptr<Config> v7[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v7);
  p_activity_rogue_diary_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v7)->design_config.txt_config_mgr.activity_rogue_diary_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    p_activity_rogue_diary_config_mgr = (const ActivityRogueDiaryExcelConfigMgr *)&this->dungeon_id_;
    __asan_report_load4(&this->dungeon_id_);
  }
  dungeon_id = this->dungeon_id_;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_difficulty_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_difficulty_ >> 3) + 0x7FFF8000) <= 3 )
  {
    p_activity_rogue_diary_config_mgr = (const ActivityRogueDiaryExcelConfigMgr *)&this->cur_difficulty_;
    __asan_report_load4(&this->cur_difficulty_);
  }
  cur_difficulty = this->cur_difficulty_;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    p_activity_rogue_diary_config_mgr = (const ActivityRogueDiaryExcelConfigMgr *)&this->stage_id_;
    __asan_report_load4(&this->stage_id_);
  }
  StageDungeonPreRoundCount = ActivityRogueDiaryExcelConfigMgr::getStageDungeonPreRoundCount(
                                p_activity_rogue_diary_config_mgr,
                                this->stage_id_,
                                cur_difficulty,
                                dungeon_id);
  std::shared_ptr<Config>::~shared_ptr(v7);
  return StageDungeonPreRoundCount;
};

// Line 2861: range 00000000143E14F2-00000000143E2479
int32_t __cdecl RogueDiaryRuntimeMgr::reviveAvatar(
        RogueDiaryRuntimeMgr *const this,
        const proto::RogueDiaryAvatar *proto_revive_avatar)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rbx
  int32_t v7; // r14d
  const proto::ActivityDungeonAvatar *v8; // rax
  const proto::ActivityDungeonAvatar *v9; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,long unsigned int>,false,false>::pointer v10; // rax
  const proto::ActivityDungeonAvatar *v11; // rax
  uint32_t v12; // edx
  const proto::ActivityDungeonAvatar *v13; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,long unsigned int>,false,false>::pointer v14; // rax
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v16; // rax
  PlayerAvatarComp *v17; // rax
  std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  PlayerAvatarComp *v20; // rax
  std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  PlayerAvatarComp *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r14
  const proto::ActivityDungeonAvatar *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  const proto::ActivityDungeonAvatar *v34; // rax
  bool is_trial; // al
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // r14
  const proto::ActivityDungeonAvatar *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // r14
  const proto::ActivityDungeonAvatar *v42; // rax
  bool v43; // al
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // rax
  std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  __int64 v50; // rsi
  std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v51; // rax
  int v52; // r14d
  std::__detail::_Node_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer v53; // rdx
  char v54; // cl
  std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v55; // rax
  int v56; // r14d
  __int64 v57; // rax
  char v58; // dl
  __int64 v59; // rdx
  std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v60; // rax
  data::LifeState LifeState; // r14d
  std::__detail::_Node_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer v62; // rdx
  char v63; // cl
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // r14
  const proto::ActivityDungeonAvatar *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // r14
  const proto::ActivityDungeonAvatar *v74; // rax
  bool v75; // al
  int32_t result; // eax
  std::unordered_map<unsigned int,long unsigned int>::key_type __x; // [rsp+18h] [rbp-1F8h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-1F4h]
  std::vector<unsigned int> p_buy_card_vec; // [rsp+20h] [rbp-1F0h] BYREF
  common::milog::MiLogStream v81; // [rsp+40h] [rbp-1D0h] BYREF
  std::string val; // [rsp+60h] [rbp-1B0h] BYREF
  char v83[400]; // [rsp+80h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v83;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 48 4 9 cost:2928 64 8 9 guid:2868 96 8 26 duplicate_avatar_guid:2869 128 8 9 iter:2890 160 8 "
                        "16 revive_guid:2897 192 8 16 revive_iter:2919 224 8 17 profire_pair:2885 256 16 19 cur_avatar_pt"
                        "r:2898 288 16 22 revive_avatar_ptr:2912 320 16 19 dup_avatar_ptr:2905";
  *(_QWORD *)(v3 + 16) = RogueDiaryRuntimeMgr::reviveAvatar;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -219021312;
  v5[536862729] = -219021312;
  v5[536862730] = -202178560;
  ret = RogueDiaryRuntimeMgr::checkCanRepair(this);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v81,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "reviveAvatar",
      2865);
    v6 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v81,
           (const char (*)[37])"[RogueDiary] checkCanRepair failed, ");
    RogueDiaryRuntimeMgr::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v81);
    v7 = ret;
  }
  else
  {
    *(_QWORD *)(v3 + 64) = 0LL;
    *(_QWORD *)(v3 + 96) = 0LL;
    v8 = proto::RogueDiaryAvatar::avatar(proto_revive_avatar);
    if ( proto::ActivityDungeonAvatar::is_trial(v8) )
    {
      v9 = proto::RogueDiaryAvatar::avatar(proto_revive_avatar);
      __x = proto::ActivityDungeonAvatar::avatar_id(v9);
      *(std::unordered_map<unsigned int,long unsigned int>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,unsigned long>::find(
                                                                                      &this->trial_id_to_guid_map_,
                                                                                      &__x);
      *(std::unordered_map<unsigned int,long unsigned int>::iterator *)(v3 + 224) = std::unordered_map<unsigned int,unsigned long>::end(&this->trial_id_to_guid_map_);
      if ( std::__detail::operator!=<std::pair<unsigned int const,unsigned long>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,long unsigned int>,false> *)(v3 + 192),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,long unsigned int>,false> *)(v3 + 224)) )
      {
        v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned long>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,long unsigned int>,false,false> *const)(v3 + 192));
        if ( *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) )
          v10 = (std::__detail::_Node_iterator<std::pair<unsigned int const,long unsigned int>,false,false>::pointer)__asan_report_load8(&v10->second);
        *(_QWORD *)(v3 + 64) = v10->second;
        v11 = proto::RogueDiaryAvatar::avatar(proto_revive_avatar);
        v12 = proto::ActivityDungeonAvatar::avatar_id(v11);
        *(_QWORD *)(v3 + 96) = RogueDiaryRuntimeMgr::getUseOtherSameAvatarGuid(this, 1, v12);
      }
    }
    else
    {
      v13 = proto::RogueDiaryAvatar::avatar(proto_revive_avatar);
      __x = proto::ActivityDungeonAvatar::avatar_id(v13);
      *(std::unordered_map<unsigned int,long unsigned int>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,unsigned long>::find(
                                                                                      &this->formal_id_to_guid_map_,
                                                                                      &__x);
      *(std::unordered_map<unsigned int,long unsigned int>::iterator *)(v3 + 224) = std::unordered_map<unsigned int,unsigned long>::end(&this->formal_id_to_guid_map_);
      if ( std::__detail::operator!=<std::pair<unsigned int const,unsigned long>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,long unsigned int>,false> *)(v3 + 192),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,long unsigned int>,false> *)(v3 + 224)) )
      {
        v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned long>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,long unsigned int>,false,false> *const)(v3 + 192));
        if ( *(_BYTE *)(((unsigned __int64)&v14->second >> 3) + 0x7FFF8000) )
          v14 = (std::__detail::_Node_iterator<std::pair<unsigned int const,long unsigned int>,false,false>::pointer)__asan_report_load8(&v14->second);
        *(_QWORD *)(v3 + 64) = v14->second;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        AvatarComp = Player::getAvatarComp(this->player_);
        *(std::pair<unsigned int,unsigned int> *)(v3 + 224) = PlayerAvatarComp::getAvatarProfilePicFromAvatarOrSnapshot(
                                                                AvatarComp,
                                                                *(_QWORD *)(v3 + 64));
        *(_QWORD *)(v3 + 96) = RogueDiaryRuntimeMgr::getUseOtherSameAvatarGuid(this, 0, *(_DWORD *)(v3 + 224));
      }
    }
    *(std::unordered_map<long unsigned int,RogueDiaryAvatarData>::iterator *)(v3 + 128) = std::unordered_map<unsigned long,RogueDiaryAvatarData>::find(
                                                                                            &this->guid_avatar_data_map_,
                                                                                            (const std::unordered_map<long unsigned int,RogueDiaryAvatarData>::key_type *)(v3 + 64));
    *(std::unordered_map<long unsigned int,RogueDiaryAvatarData>::iterator *)(v3 + 224) = std::unordered_map<unsigned long,RogueDiaryAvatarData>::end(&this->guid_avatar_data_map_);
    if ( std::__detail::operator==<std::pair<unsigned long const,RogueDiaryAvatarData>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,RogueDiaryAvatarData>,false> *)(v3 + 128),
           (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,RogueDiaryAvatarData>,false> *)(v3 + 224)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "reviveAvatar",
        2893);
      v16 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              (common::milog::MiLogStream *const)&val,
              (const char (*)[44])"[RogueDiary] guid is not in data_map, guid:");
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v16, (const unsigned __int64 *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v7 = -1;
    }
    else
    {
      *(_QWORD *)(v3 + 160) = 0LL;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v17 = Player::getAvatarComp(this->player_);
      PlayerAvatarComp::findAvatar<MirrorAvatar>((const PlayerAvatarComp *const)(v3 + 256), (uint64_t)v17);
      if ( std::operator!=<MirrorAvatar>(0LL, (const std::shared_ptr<MirrorAvatar> *)(v3 + 256))
        && (v18 = std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256)),
            Creature::getLifeState(v18) == LIFE_DEAD) )
      {
        *(_QWORD *)(v3 + 160) = *(_QWORD *)(v3 + 64);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v20 = Player::getAvatarComp(this->player_);
        PlayerAvatarComp::findAvatar<MirrorAvatar>((const PlayerAvatarComp *const)(v3 + 320), (uint64_t)v20);
        if ( std::operator!=<MirrorAvatar>(0LL, (const std::shared_ptr<MirrorAvatar> *)(v3 + 320)) )
        {
          v21 = std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 320));
          if ( Creature::getLifeState(v21) == LIFE_DEAD )
            *(_QWORD *)(v3 + 160) = *(_QWORD *)(v3 + 96);
        }
        std::shared_ptr<MirrorAvatar>::~shared_ptr((std::shared_ptr<MirrorAvatar> *const)(v3 + 320));
      }
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v23 = Player::getAvatarComp(this->player_);
      PlayerAvatarComp::findAvatar<MirrorAvatar>((const PlayerAvatarComp *const)(v3 + 288), (uint64_t)v23);
      if ( std::operator==<MirrorAvatar>(0LL, (const std::shared_ptr<MirrorAvatar> *)(v3 + 288)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "reviveAvatar",
          2915);
        v24 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                (common::milog::MiLogStream *const)&val,
                (const char (*)[51])"[RogueDiary] findReviveAvatar failed, revive_guid:");
        v25 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v24,
                (const unsigned __int64 *)(v3 + 160));
        v26 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v25, (const char (*)[8])", guid:");
        v27 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v26,
                (const unsigned __int64 *)(v3 + 64));
        v28 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                v27,
                (const char (*)[25])", duplicate_avatar_guid:");
        v29 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v28,
                (const unsigned __int64 *)(v3 + 96));
        v30 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v29, (const char (*)[13])", avatar_id:");
        v31 = proto::RogueDiaryAvatar::avatar(proto_revive_avatar);
        __x = proto::ActivityDungeonAvatar::avatar_id(v31);
        v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &__x);
        v33 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v32, (const char (*)[12])", is_trial:");
        v34 = proto::RogueDiaryAvatar::avatar(proto_revive_avatar);
        is_trial = proto::ActivityDungeonAvatar::is_trial(v34);
        common::milog::MiLogStream::operator<<(v33, is_trial);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        v7 = -1;
      }
      else
      {
        *(std::unordered_map<long unsigned int,RogueDiaryAvatarData>::iterator *)(v3 + 192) = std::unordered_map<unsigned long,RogueDiaryAvatarData>::find(
                                                                                                &this->guid_avatar_data_map_,
                                                                                                (const std::unordered_map<long unsigned int,RogueDiaryAvatarData>::key_type *)(v3 + 160));
        *(std::unordered_map<long unsigned int,RogueDiaryAvatarData>::iterator *)(v3 + 224) = std::unordered_map<unsigned long,RogueDiaryAvatarData>::end(&this->guid_avatar_data_map_);
        if ( std::__detail::operator==<std::pair<unsigned long const,RogueDiaryAvatarData>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,RogueDiaryAvatarData>,false> *)(v3 + 192),
               (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,RogueDiaryAvatarData>,false> *)(v3 + 224)) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&val,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
            "reviveAvatar",
            2922);
          v36 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                  (common::milog::MiLogStream *const)&val,
                  (const char (*)[58])"[RogueDiary] revive_guid is not in data_map, revive_guid:");
          v37 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v36,
                  (const unsigned __int64 *)(v3 + 160));
          v38 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v37, (const char (*)[13])", avatar_id:");
          v39 = proto::RogueDiaryAvatar::avatar(proto_revive_avatar);
          __x = proto::ActivityDungeonAvatar::avatar_id(v39);
          v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &__x);
          v41 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v40, (const char (*)[12])", is_trial:");
          v42 = proto::RogueDiaryAvatar::avatar(proto_revive_avatar);
          v43 = proto::ActivityDungeonAvatar::is_trial(v42);
          common::milog::MiLogStream::operator<<(v41, v43);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
          v7 = -1;
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v3 + 320));
          v44 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 320));
          *(_DWORD *)(v3 + 48) = ActivityRogueDiaryExcelConfigMgr::getRogueDairyResourceCost(
                                   &v44->design_config.txt_config_mgr.activity_rogue_diary_config_mgr,
                                   ROGUE_DIARY_GET_REVIVE);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 320));
          if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->coin_);
          }
          if ( this->coin_ >= *(_DWORD *)(v3 + 48) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->coin_);
            }
            this->coin_ -= *(_DWORD *)(v3 + 48);
            v48 = std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 288));
            Avatar::setLifeAlive(v48, 0x70u, 0LL, 1);
            v49 = std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 288));
            v50 = 1LL;
            Creature::setCurHpFull(v49, 1);
            v51 = std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 288));
            *(float *)v2.m128i_i32 = Creature::getCurEnergy(v51);
            v52 = _mm_cvtsi128_si32(v2);
            v53 = std::__detail::_Node_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false> *const)(v3 + 192));
            v54 = *(_BYTE *)(((unsigned __int64)&v53->second.cur_elem_energy >> 3) + 0x7FFF8000);
            if ( v54 != 0 && (char)((((_BYTE)v53 + 20) & 7) + 3) >= v54 )
            {
              LOBYTE(v50) = v54 != 0;
              __asan_report_store4(&v53->second.cur_elem_energy, v50, v53);
            }
            LODWORD(v53->second.cur_elem_energy) = v52;
            v55 = std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 288));
            *(float *)v2.m128i_i32 = Creature::getCurHp(v55);
            v56 = _mm_cvtsi128_si32(v2);
            v57 = (__int64)std::__detail::_Node_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false> *const)(v3 + 192));
            v58 = *(_BYTE *)(((unsigned __int64)(v57 + 16) >> 3) + 0x7FFF8000);
            LOBYTE(v50) = v58 != 0;
            v59 = (v58 != 0) & (unsigned __int8)(v58 <= 3);
            if ( (_BYTE)v59 )
              v57 = __asan_report_store4(v57 + 16, v50, v59);
            *(_DWORD *)(v57 + 16) = v56;
            v60 = std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 288));
            LifeState = Creature::getLifeState(v60);
            v62 = std::__detail::_Node_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false> *const)(v3 + 192));
            v63 = *(_BYTE *)(((unsigned __int64)&v62->second.life_state >> 3) + 0x7FFF8000);
            if ( v63 != 0 && (char)((((_BYTE)v62 + 28) & 7) + 3) >= v63 )
            {
              LOBYTE(v50) = v63 != 0;
              __asan_report_store4(&v62->second.life_state, v50, v62);
            }
            v62->second.life_state = LifeState;
            memset(&p_buy_card_vec, 0, sizeof(p_buy_card_vec));
            std::vector<unsigned int>::vector(&p_buy_card_vec);
            RogueDiaryRuntimeMgr::logCoinChange(this, 3u, *(_DWORD *)(v3 + 48), &p_buy_card_vec);
            std::vector<unsigned int>::~vector(&p_buy_card_vec);
            RogueDiaryRuntimeMgr::notifyRepairInfo(this, 0);
            RogueDiaryRuntimeMgr::notifyDungeonInfo(this);
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&val,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
              "reviveAvatar",
              2951);
            v64 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                    (common::milog::MiLogStream *const)&val,
                    (const char (*)[46])"[RogueDiary] revive avatar succ, revive_guid:");
            v65 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                    v64,
                    (const unsigned __int64 *)(v3 + 160));
            v66 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v65, (const char (*)[8])", guid:");
            v67 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                    v66,
                    (const unsigned __int64 *)(v3 + 64));
            v68 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                    v67,
                    (const char (*)[25])", duplicate_avatar_guid:");
            v69 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                    v68,
                    (const unsigned __int64 *)(v3 + 96));
            v70 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v69,
                    (const char (*)[13])", avatar_id:");
            v71 = proto::RogueDiaryAvatar::avatar(proto_revive_avatar);
            __x = proto::ActivityDungeonAvatar::avatar_id(v71);
            v72 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v70, &__x);
            v73 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v72,
                    (const char (*)[12])", is_trial:");
            v74 = proto::RogueDiaryAvatar::avatar(proto_revive_avatar);
            v75 = proto::ActivityDungeonAvatar::is_trial(v74);
            common::milog::MiLogStream::operator<<(v73, v75);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
            v7 = 0;
          }
          else
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&val,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
              "reviveAvatar",
              2931);
            v45 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    (common::milog::MiLogStream *const)&val,
                    (const char (*)[36])"[RogueDiary] coin not enough, cost:");
            v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v45,
                    (const unsigned int *)(v3 + 48));
            v47 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v46, (const char (*)[8])", coin:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, &this->coin_);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
            v7 = 10353;
          }
        }
      }
      std::shared_ptr<MirrorAvatar>::~shared_ptr((std::shared_ptr<MirrorAvatar> *const)(v3 + 288));
      std::shared_ptr<MirrorAvatar>::~shared_ptr((std::shared_ptr<MirrorAvatar> *const)(v3 + 256));
    }
  }
  result = v7;
  if ( v83 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 2957: range 00000000143E27C6-00000000143E2858
void __cdecl RogueDiaryRuntimeMgr::saveOnstageAvatarState(RogueDiaryRuntimeMgr *const this)
{
  PlayerAvatarComp *AvatarComp; // rbx
  std::function<ForeachPolicy(Avatar&)> p_func; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  AvatarComp = Player::getAvatarComp(this->player_);
  std::function<ForeachPolicy ()(Avatar &)>::function<RogueDiaryRuntimeMgr::saveOnstageAvatarState(void)::{lambda(Avatar &)#1},void,void>(
    &p_func,
    (RogueDiaryRuntimeMgr::saveOnstageAvatarState::<lambda(Avatar&)>)this);
  PlayerAvatarComp::foreachMyAvatarInSceneTeam(AvatarComp, &p_func);
  std::function<ForeachPolicy ()(Avatar &)>::~function(&p_func);
};

// Line 2958: range 00000000143E247A-00000000143E27C5
ForeachPolicy __cdecl RogueDiaryRuntimeMgr::saveOnstageAvatarState(void)::{lambda(Avatar &)#1}::operator()(
        const RogueDiaryRuntimeMgr::saveOnstageAvatarState::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::unordered_map<long unsigned int,RogueDiaryAvatarData> *p_guid_avatar_data_map; // r14
  std::unordered_map<long unsigned int,RogueDiaryAvatarData>::key_type *p_x; // rsi
  common::milog::MiLogStream *v8; // r12
  ForeachPolicy result; // eax
  int v10; // r14d
  std::__detail::_Node_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer v11; // rdx
  char v12; // cl
  int v13; // r14d
  __int64 v14; // rax
  char v15; // dl
  __int64 v16; // rdx
  data::LifeState LifeState; // r14d
  std::__detail::_Node_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer v18; // rdx
  char v19; // cl
  std::unordered_map<long unsigned int,RogueDiaryAvatarData>::key_type __x; // [rsp+18h] [rbp-98h] BYREF
  common::milog::MiLogStream v22; // [rsp+20h] [rbp-90h] BYREF
  char v23[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 9 iter:2960";
  *(_QWORD *)(v3 + 16) = RogueDiaryRuntimeMgr::saveOnstageAvatarState(void)::{lambda(Avatar &)#1}::operator();
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  p_guid_avatar_data_map = &__closure->__this->guid_avatar_data_map_;
  __x = Avatar::getGuid(avatar);
  *(std::unordered_map<long unsigned int,RogueDiaryAvatarData>::iterator *)(v3 + 32) = std::unordered_map<unsigned long,RogueDiaryAvatarData>::find(
                                                                                         p_guid_avatar_data_map,
                                                                                         &__x);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  __x = (std::unordered_map<long unsigned int,RogueDiaryAvatarData>::key_type)std::unordered_map<unsigned long,RogueDiaryAvatarData>::end(&__closure->__this->guid_avatar_data_map_)._M_cur;
  p_x = &__x;
  if ( std::__detail::operator==<std::pair<unsigned long const,RogueDiaryAvatarData>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,RogueDiaryAvatarData>,false> *)(v3 + 32),
         (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,RogueDiaryAvatarData>,false> *)&__x) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "operator()",
      2963);
    v8 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v22,
           (const char (*)[44])"[RogueDiary] guid is not in data_map, guid:");
    __x = Avatar::getGuid(avatar);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v8, &__x);
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = FOREACH_CONTINUE;
  }
  else
  {
    *(float *)v2.m128i_i32 = Creature::getCurEnergy(avatar);
    v10 = _mm_cvtsi128_si32(v2);
    v11 = std::__detail::_Node_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false> *const)(v3 + 32));
    v12 = *(_BYTE *)(((unsigned __int64)&v11->second.cur_elem_energy >> 3) + 0x7FFF8000);
    if ( v12 != 0 && (char)((((_BYTE)v11 + 20) & 7) + 3) >= v12 )
    {
      LOBYTE(p_x) = v12 != 0;
      __asan_report_store4(&v11->second.cur_elem_energy, p_x, v11);
    }
    LODWORD(v11->second.cur_elem_energy) = v10;
    *(float *)v2.m128i_i32 = Creature::getCurHp(avatar);
    v13 = _mm_cvtsi128_si32(v2);
    v14 = (__int64)std::__detail::_Node_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false> *const)(v3 + 32));
    v15 = *(_BYTE *)(((unsigned __int64)(v14 + 16) >> 3) + 0x7FFF8000);
    LOBYTE(p_x) = v15 != 0;
    v16 = (v15 != 0) & (unsigned __int8)(v15 <= 3);
    if ( (_BYTE)v16 )
      v14 = __asan_report_store4(v14 + 16, p_x, v16);
    *(_DWORD *)(v14 + 16) = v13;
    LifeState = Creature::getLifeState(avatar);
    v18 = std::__detail::_Node_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false> *const)(v3 + 32));
    v19 = *(_BYTE *)(((unsigned __int64)&v18->second.life_state >> 3) + 0x7FFF8000);
    if ( v19 != 0 && (char)((((_BYTE)v18 + 28) & 7) + 3) >= v19 )
    {
      LOBYTE(p_x) = v19 != 0;
      __asan_report_store4(&v18->second.life_state, p_x, v18);
    }
    v18->second.life_state = LifeState;
    result = FOREACH_CONTINUE;
  }
  if ( v23 == (char *)v3 )
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

// Line 2974: range 00000000143E285A-00000000143E2C03
void __cdecl RogueDiaryRuntimeMgr::loadOnstageAvatarState(RogueDiaryRuntimeMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  PlayerAvatarComp *AvatarComp; // rcx
  std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  Creature *p_cur_hp; // rdi
  std::unordered_map<long unsigned int,RogueDiaryAvatarData>::iterator __for_begin; // [rsp+10h] [rbp-B0h] BYREF
  std::unordered_map<long unsigned int,RogueDiaryAvatarData>::iterator __for_end; // [rsp+18h] [rbp-A8h] BYREF
  std::unordered_map<long unsigned int,RogueDiaryAvatarData> *__for_range; // [rsp+20h] [rbp-A0h]
  const std::pair<long unsigned int const,RogueDiaryAvatarData> *v12; // [rsp+28h] [rbp-98h]
  std::tuple_element<0,const std::pair<long unsigned int const,RogueDiaryAvatarData> >::type *guid; // [rsp+30h] [rbp-90h]
  std::tuple_element<1,const std::pair<long unsigned int const,RogueDiaryAvatarData> >::type *avatar_data; // [rsp+38h] [rbp-88h]
  std::shared_ptr<FightPropNtfParam> p_param_ptr; // [rsp+40h] [rbp-80h] BYREF
  char v16[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 avatar_ptr:2978";
  *(_QWORD *)(v1 + 16) = RogueDiaryRuntimeMgr::loadOnstageAvatarState;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  __for_range = &this->guid_avatar_data_map_;
  __for_begin._M_cur = std::unordered_map<unsigned long,RogueDiaryAvatarData>::begin(&this->guid_avatar_data_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned long,RogueDiaryAvatarData>::end(&this->guid_avatar_data_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned long const,RogueDiaryAvatarData>,false>(&__for_begin, &__for_end) )
  {
    v12 = std::__detail::_Node_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator*(&__for_begin);
    guid = std::get<0ul,unsigned long const,RogueDiaryAvatarData>(v12);
    avatar_data = (std::tuple_element<1,const std::pair<long unsigned int const,RogueDiaryAvatarData> >::type *)std::get<1ul,unsigned long const,RogueDiaryAvatarData>(v12);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    AvatarComp = Player::getAvatarComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)guid >> 3) + 0x7FFF8000) )
      __asan_report_load8(guid);
    PlayerAvatarComp::findAvatar<MirrorAvatar>((const PlayerAvatarComp *const)(v1 + 32), (uint64_t)AvatarComp);
    if ( std::operator!=<MirrorAvatar>((const std::shared_ptr<MirrorAvatar> *)(v1 + 32), 0LL) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&avatar_data->life_state >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)avatar_data + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_data->life_state >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4(&avatar_data->life_state);
      }
      if ( avatar_data->life_state == 1 )
      {
        v5 = std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        Avatar::setLifeAlive(v5, 0x71u, 0LL, 1);
      }
      v6 = std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      std::shared_ptr<FightPropNtfParam>::shared_ptr(&p_param_ptr, 0LL);
      if ( *(_BYTE *)(((unsigned __int64)&avatar_data->cur_elem_energy >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)avatar_data + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_data->cur_elem_energy >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4(&avatar_data->cur_elem_energy);
      }
      Creature::setCurEnergy(v6, avatar_data->cur_elem_energy, 1, &p_param_ptr);
      std::shared_ptr<FightPropNtfParam>::~shared_ptr(&p_param_ptr);
      p_cur_hp = std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&avatar_data->cur_hp >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)avatar_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_data->cur_hp >> 3)
                                                                  + 0x7FFF8000) )
      {
        p_cur_hp = (Creature *)&avatar_data->cur_hp;
        __asan_report_load4(&avatar_data->cur_hp);
      }
      Creature::setCurHp(p_cur_hp, avatar_data->cur_hp, 1);
    }
    std::shared_ptr<MirrorAvatar>::~shared_ptr((std::shared_ptr<MirrorAvatar> *const)(v1 + 32));
    std::__detail::_Node_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator++(&__for_begin);
  }
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

// Line 2993: range 00000000143E2C04-00000000143E394B
void __cdecl RogueDiaryRuntimeMgr::fillRogueDiaryRoomInfo(
        RogueDiaryRuntimeMgr *const this,
        google::protobuf::RepeatedPtrField<proto::RogueDiaryRoomInfo> *room_list)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  LuaConfigMgr *p_lua_config_mgr; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t DefaultWorldMainSceneId; // eax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  ActivityRogueDiaryExcelConfigMgr *p_activity_rogue_diary_config_mgr; // rcx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  MonsterExcelConfigMgr *p_monster_config_mgr; // rcx
  char v20; // al
  int32_t revise_level; // [rsp+1Ch] [rbp-234h]
  std::vector<std::pair<unsigned int,bool>>::iterator __for_begin; // [rsp+20h] [rbp-230h] BYREF
  std::vector<std::pair<unsigned int,bool>>::iterator __for_end; // [rsp+28h] [rbp-228h] BYREF
  std::map<unsigned int,MonsterScriptConfig>::const_iterator __for_begin_0; // [rsp+30h] [rbp-220h] BYREF
  std::map<unsigned int,MonsterScriptConfig>::const_iterator __for_end_0; // [rsp+38h] [rbp-218h] BYREF
  const SceneScriptConfig *scene_script_config_ptr; // [rsp+40h] [rbp-210h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+48h] [rbp-208h]
  std::vector<std::pair<unsigned int,bool>> *__for_range; // [rsp+50h] [rbp-200h]
  const std::pair<unsigned int,bool> *v29; // [rsp+58h] [rbp-1F8h]
  std::tuple_element<0,const std::pair<unsigned int,bool> >::type *pool_id; // [rsp+60h] [rbp-1F0h]
  std::tuple_element<1,const std::pair<unsigned int,bool> >::type *is_can_hard; // [rsp+68h] [rbp-1E8h]
  proto::RogueDiaryRoomInfo *room_info; // [rsp+70h] [rbp-1E0h]
  const data::RogueDiaryRoomExcelConfig *room_config_ptr; // [rsp+78h] [rbp-1D8h]
  const std::map<unsigned int,MonsterScriptConfig> *pool_map_ptr; // [rsp+80h] [rbp-1D0h]
  const std::map<unsigned int,MonsterScriptConfig> *pool_map; // [rsp+88h] [rbp-1C8h]
  const std::map<unsigned int,MonsterScriptConfig> *__for_range_0; // [rsp+90h] [rbp-1C0h]
  const std::pair<unsigned int const,MonsterScriptConfig> *v37; // [rsp+98h] [rbp-1B8h]
  std::tuple_element<0,const std::pair<unsigned int const,MonsterScriptConfig> >::type *_; // [rsp+A0h] [rbp-1B0h]
  std::tuple_element<1,const std::pair<unsigned int const,MonsterScriptConfig> >::type *monster_config; // [rsp+A8h] [rbp-1A8h]
  const data::MonsterExcelConfig *monster_config_ptr; // [rsp+B0h] [rbp-1A0h]
  proto::Uint32Pair *monster_pair; // [rsp+B8h] [rbp-198h]
  std::shared_ptr<Config> v42; // [rsp+C0h] [rbp-190h] BYREF
  std::shared_ptr<Config> v43; // [rsp+D0h] [rbp-180h] BYREF
  common::milog::MiLogStream v44; // [rsp+E0h] [rbp-170h] BYREF
  common::milog::MiLogStream v45; // [rsp+100h] [rbp-150h] BYREF
  char v46[304]; // [rsp+120h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 dungeon_id:3001 64 56 16 monster_set:3035 160 56 17 describe_set:3036";
  *(_QWORD *)(v2 + 16) = RogueDiaryRuntimeMgr::fillRogueDiaryRoomInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v42);
  p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42)->design_config.lua_config_mgr;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v43);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43);
  DefaultWorldMainSceneId = TxtConfigMgr::getDefaultWorldMainSceneId(&v6->design_config.txt_config_mgr);
  scene_script_config_ptr = LuaConfigMgr::findSceneScriptConfig(p_lua_config_mgr, DefaultWorldMainSceneId);
  std::shared_ptr<Config>::~shared_ptr(&v43);
  std::shared_ptr<Config>::~shared_ptr(&v42);
  if ( scene_script_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->dungeon_id_);
    }
    *(_DWORD *)(v2 + 48) = this->dungeon_id_;
    if ( !RogueDiaryRuntimeMgr::isCurRoomDungeonFinalRoom(this) || RogueDiaryRuntimeMgr::isCurRoomStageFinalRoom(this) )
      goto LABEL_15;
    if ( !std::vector<unsigned int>::empty(&this->optional_card_vec_) )
      goto LABEL_14;
    if ( *(_BYTE *)(((unsigned __int64)&this->is_round_repair_finished_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 15) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_round_repair_finished_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_round_repair_finished_);
    }
    if ( this->is_round_repair_finished_ )
LABEL_14:
      v10 = 1;
    else
LABEL_15:
      v10 = 0;
    if ( v10 )
      *(_DWORD *)(v2 + 48) = RogueDiaryRuntimeMgr::getCurStageNextDungeonId(this);
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "fillRogueDiaryRoomInfo",
      3007);
    v11 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            &v45,
            (const char (*)[26])"[RogueDiary] cur_dungeon:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->dungeon_id_);
    v13 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v12, (const char (*)[19])", display_dungeon:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v45);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v43);
    v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43);
    dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                           &v14->design_config.txt_config_mgr.dungeon_config_mgr,
                           *(_DWORD *)(v2 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v43);
    if ( dungeon_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->level_revise >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->level_revise >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&dungeon_config_ptr->level_revise);
      }
      revise_level = dungeon_config_ptr->level_revise;
      __for_range = &this->round_room_config_vec_;
      __for_begin._M_current = std::vector<std::pair<unsigned int,bool>>::begin(&this->round_room_config_vec_)._M_current;
      __for_end._M_current = std::vector<std::pair<unsigned int,bool>>::end(&this->round_room_config_vec_)._M_current;
      while ( __gnu_cxx::operator!=<std::pair<unsigned int,bool> *,std::vector<std::pair<unsigned int,bool>>>(
                &__for_begin,
                &__for_end) )
      {
        v29 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,bool> *,std::vector<std::pair<unsigned int,bool>>>::operator*(&__for_begin);
        pool_id = (std::tuple_element<0,const std::pair<unsigned int,bool> >::type *)std::get<0ul,unsigned int,bool>(v29);
        is_can_hard = (std::tuple_element<1,const std::pair<unsigned int,bool> >::type *)std::get<1ul,unsigned int,bool>(v29);
        room_info = google::protobuf::RepeatedPtrField<proto::RogueDiaryRoomInfo>::Add(room_list);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v43);
        p_activity_rogue_diary_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43)->design_config.txt_config_mgr.activity_rogue_diary_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)pool_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)pool_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pool_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(pool_id);
        }
        room_config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryRoomExcelConfig(
                            p_activity_rogue_diary_config_mgr,
                            *pool_id);
        std::shared_ptr<Config>::~shared_ptr(&v43);
        if ( room_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)pool_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)pool_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pool_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(pool_id);
          }
          pool_map_ptr = SceneScriptConfig::findMonsterPoolByPoolId(scene_script_config_ptr, *pool_id);
          if ( pool_map_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)pool_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)pool_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pool_id >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(pool_id);
            }
            proto::RogueDiaryRoomInfo::set_config_id(room_info, *pool_id);
            if ( *(char *)(((unsigned __int64)&room_config_ptr->is_boss >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(&room_config_ptr->is_boss);
            proto::RogueDiaryRoomInfo::set_is_boss(room_info, room_config_ptr->is_boss);
            pool_map = pool_map_ptr;
            std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v2 + 64));
            std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v2 + 160));
            __for_range_0 = pool_map;
            __for_begin_0._M_node = std::map<unsigned int,MonsterScriptConfig>::begin(pool_map)._M_node;
            __for_end_0._M_node = std::map<unsigned int,MonsterScriptConfig>::end(__for_range_0)._M_node;
            while ( std::operator!=(&__for_begin_0, &__for_end_0) )
            {
              v37 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>>::operator*(&__for_begin_0);
              _ = std::get<0ul,unsigned int const,MonsterScriptConfig>(v37);
              monster_config = (std::tuple_element<1,const std::pair<unsigned int const,MonsterScriptConfig> >::type *)std::get<1ul,unsigned int const,MonsterScriptConfig>(v37);
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v43);
              p_monster_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43)->design_config.txt_config_mgr.monster_config_mgr;
              if ( *(_BYTE *)(((unsigned __int64)&monster_config->monster_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)monster_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_config->monster_id >> 3)
                                                                             + 0x7FFF8000) )
              {
                __asan_report_load4(&monster_config->monster_id);
              }
              monster_config_ptr = data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(
                                     p_monster_config_mgr,
                                     monster_config->monster_id);
              std::shared_ptr<Config>::~shared_ptr(&v43);
              if ( monster_config_ptr )
              {
                if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                       (std::unordered_set<unsigned int> *)(v2 + 64),
                       &monster_config->monster_id) )
                {
                  goto LABEL_47;
                }
                if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->describe_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&monster_config_ptr->describe_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&monster_config_ptr->describe_id);
                }
                if ( !monster_config_ptr->describe_id
                  || !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                        (std::unordered_set<unsigned int> *)(v2 + 160),
                        &monster_config_ptr->describe_id) )
                {
                  v20 = 1;
                }
                else
                {
LABEL_47:
                  v20 = 0;
                }
                if ( v20 )
                {
                  std::unordered_set<unsigned int>::insert(
                    (std::unordered_set<unsigned int> *const)(v2 + 64),
                    &monster_config->monster_id);
                  std::unordered_set<unsigned int>::insert(
                    (std::unordered_set<unsigned int> *const)(v2 + 160),
                    &monster_config_ptr->describe_id);
                  monster_pair = proto::RogueDiaryRoomInfo::add_monster_list(room_info);
                  if ( *(_BYTE *)(((unsigned __int64)&monster_config->monster_id >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)monster_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_config->monster_id >> 3)
                                                                                 + 0x7FFF8000) )
                  {
                    __asan_report_load4(&monster_config->monster_id);
                  }
                  proto::Uint32Pair::set_key(monster_pair, monster_config->monster_id);
                  if ( *(_BYTE *)(((unsigned __int64)&monster_config->level >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&monster_config->level >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&monster_config->level);
                  }
                  proto::Uint32Pair::set_value(monster_pair, revise_level + monster_config->level);
                }
              }
              std::_Rb_tree_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>>::operator++(&__for_begin_0);
            }
            std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v2 + 160));
            std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v2 + 64));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v45,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
              "fillRogueDiaryRoomInfo",
              3029);
            v18 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                    &v45,
                    (const char (*)[54])"[RogueDiary] findMonsterPoolByPoolId failed, pool_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, pool_id);
            common::milog::MiLogStream::~MiLogStream(&v45);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v44,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
            "fillRogueDiaryRoomInfo",
            3023);
          v17 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                  &v44,
                  (const char (*)[60])"[RogueDiary] findRogueDiaryRoomExcelConfig failed, pool_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, pool_id);
          common::milog::MiLogStream::~MiLogStream(&v44);
        }
        __gnu_cxx::__normal_iterator<std::pair<unsigned int,bool> *,std::vector<std::pair<unsigned int,bool>>>::operator++(&__for_begin);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "fillRogueDiaryRoomInfo",
        3012);
      v15 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
              &v45,
              (const char (*)[56])"[RogueDiary] findDungeonExcelConfig failed, dungeon_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v45);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "fillRogueDiaryRoomInfo",
      2998);
    v8 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           &v45,
           (const char (*)[53])"[RogueDiary] findSceneScriptConfig failed, scene_id:");
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v43);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43);
    *(_DWORD *)(v2 + 48) = TxtConfigMgr::getDefaultWorldMainSceneId(&v9->design_config.txt_config_mgr);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v43);
    common::milog::MiLogStream::~MiLogStream(&v45);
  }
  if ( v46 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 3058: range 00000000143E394C-00000000143E3F20
int32_t __cdecl RogueDiaryRuntimeMgr::getRogueDiaryRevivePoint(
        const RogueDiaryRuntimeMgr *const this,
        Vector3 *pos,
        Vector3 *rot)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  const data::RogueDiaryPortalExcelConfig *point_config_ptr; // [rsp+28h] [rbp-A8h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+30h] [rbp-A0h]
  const PointScriptConfig *point_script_config_ptr; // [rsp+38h] [rbp-98h]
  std::shared_ptr<Config> v16; // [rsp+40h] [rbp-90h] BYREF
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-80h] BYREF
  char v18[96]; // [rsp+70h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 13 group_id:3059";
  *(_QWORD *)(v3 + 16) = RogueDiaryRuntimeMgr::getRogueDiaryRevivePoint;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = RogueDiaryRuntimeMgr::getCurRoomGroupId(this);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
  point_config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryPortalExcelConfig(
                       &v6->design_config.txt_config_mgr.activity_rogue_diary_config_mgr,
                       *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v16);
  if ( point_config_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v16);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
    group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(
                                &v9->design_config.lua_config_mgr,
                                *(_DWORD *)(v3 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v16);
    if ( group_script_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&point_config_ptr->point_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)point_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&point_config_ptr->point_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&point_config_ptr->point_id);
      }
      point_script_config_ptr = GroupScriptConfig::findPointConfig(group_script_config_ptr, point_config_ptr->point_id);
      if ( point_script_config_ptr )
      {
        if ( ((unsigned __int8)pos & 7) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(pos, 12LL);
        }
        if ( (((unsigned __int8)point_script_config_ptr + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&point_script_config_ptr->pos >> 3)
                                                                              + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&point_script_config_ptr->pos >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->pos.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)point_script_config_ptr + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->pos.z
                                                                                 + 3) >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load_n(&point_script_config_ptr->pos, 12LL);
        }
        *pos = point_script_config_ptr->pos;
        if ( ((unsigned __int8)rot & 7) >= *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(rot, 12LL);
        }
        if ( *(char *)(((unsigned __int64)&point_script_config_ptr->rot >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->rot.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)point_script_config_ptr + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->rot.z
                                                                                 + 3) >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load_n(&point_script_config_ptr->rot, 12LL);
        }
        *(_QWORD *)&rot->x = *(_QWORD *)&point_script_config_ptr->rot.x;
        rot->z = point_script_config_ptr->rot.z;
        result = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "getRogueDiaryRevivePoint",
          3075);
        v11 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v17,
                (const char (*)[48])"[RogueDiary] findPointConfig failed, point_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &point_config_ptr->point_id);
        common::milog::MiLogStream::~MiLogStream(&v17);
        result = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "getRogueDiaryRevivePoint",
        3069);
      v10 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
              &v17,
              (const char (*)[54])"[RogueDiary] findGroupScriptConfig failed, group_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v17);
      result = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "getRogueDiaryRevivePoint",
      3063);
    v7 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
           &v17,
           (const char (*)[63])"[RogueDiary] findRogueDiaryPortalExcelConfig failed, group_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = -1;
  }
  if ( v18 == (char *)v3 )
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

// Line 3085: range 00000000143E3F22-00000000143E460A
// local variable allocation has failed, the output may be wrong!
void __cdecl RogueDiaryRuntimeMgr::logRoundStart(RogueDiaryRuntimeMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoundStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoundStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoundStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoundStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  unsigned __int64 v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoundStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  PlayerAvatarComp *AvatarComp; // rax
  std::__detail::_Node_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoundStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  google::protobuf::RepeatedField<unsigned int> *v15; // rax
  Player *v16; // r14
  std::string v17; // [rsp+0h] [rbp-150h] OVERLAPPED BYREF
  std::vector<long unsigned int>::iterator __for_end; // [rsp+20h] [rbp-130h] BYREF
  std::__detail::_Node_iterator_base<std::pair<long unsigned int const,RogueDiaryAvatarData>,false> __y; // [rsp+28h] [rbp-128h] BYREF
  std::vector<long unsigned int> *__for_range; // [rsp+30h] [rbp-120h]
  proto_log::RogueDiaryAvatarLog *avatar_log; // [rsp+38h] [rbp-118h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+40h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+50h] [rbp-100h] BYREF
  std::string v24; // [rsp+60h] [rbp-F0h] BYREF
  char v25[208]; // [rsp+80h] [rbp-D0h] BYREF

  v17._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 1 11 holder:3086 64 8 9 guid:3092 96 8 9 iter:3094 128 16 12 log_ptr:3087";
  *(_QWORD *)(v1 + 16) = RogueDiaryRuntimeMgr::logRoundStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -218959360;
  v3[536862723] = -218959360;
  v3[536862724] = -202178560;
  if ( *(_BYTE *)((v17._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8(v17._M_string_length);
  BasicComp = Player::getBasicComp(*(Player *const *)v17._M_string_length);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v24, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0xE1Bu, v17);
  std::string::~string(&v24);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyRogueDiaryRoundStart>();
  v5 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoundStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoundStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
  if ( *(_BYTE *)(((v17._M_string_length + 224) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v17._M_string_length + 224) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(v17._M_string_length + 224);
  }
  proto_log::PlayerLogBodyRogueDiaryRoundStart::set_stage_id(v5, *(_DWORD *)(v17._M_string_length + 224));
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoundStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoundStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
  if ( *(_BYTE *)(((v17._M_string_length + 228) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(v17._M_string_length) - 28) & 7) + 3) >= *(_BYTE *)(((v17._M_string_length + 228) >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(v17._M_string_length + 228);
  }
  proto_log::PlayerLogBodyRogueDiaryRoundStart::set_dungeon_id(v6, *(_DWORD *)(v17._M_string_length + 228));
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoundStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoundStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
  if ( *(_BYTE *)(((v17._M_string_length + 504) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v17._M_string_length + 504) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(v17._M_string_length + 504);
  }
  proto_log::PlayerLogBodyRogueDiaryRoundStart::set_transaction(v7, *(_DWORD *)(v17._M_string_length + 504));
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoundStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoundStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
  if ( *(_BYTE *)(((v17._M_string_length + 236) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(v17._M_string_length) - 20) & 7) + 3) >= *(_BYTE *)(((v17._M_string_length + 236) >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(v17._M_string_length + 236);
  }
  proto_log::PlayerLogBodyRogueDiaryRoundStart::set_round(v8, *(_DWORD *)(v17._M_string_length + 236));
  __for_range = (std::vector<long unsigned int> *)(v17._M_string_length + 392);
  *((std::vector<long unsigned int>::iterator *)&v17._anon_0._M_allocated_capacity + 1) = std::vector<unsigned long>::begin((std::vector<long unsigned int> *const)(v17._M_string_length + 392));
  __for_end._M_current = std::vector<unsigned long>::end((std::vector<long unsigned int> *const)(v17._M_string_length
                                                                                               + 392))._M_current;
  while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(
            (const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *)&v17._anon_0._M_allocated_capacity
          + 1,
            &__for_end) )
  {
    v9 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*(
                             (const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *const)&v17._anon_0._M_allocated_capacity
                           + 1);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8(v9);
    *(_QWORD *)(v1 + 64) = *(_QWORD *)v9;
    *(std::unordered_map<long unsigned int,RogueDiaryAvatarData>::iterator *)(v1 + 96) = std::unordered_map<unsigned long,RogueDiaryAvatarData>::find(
                                                                                           (std::unordered_map<long unsigned int,RogueDiaryAvatarData> *const)(v17._M_string_length + 416),
                                                                                           (const std::unordered_map<long unsigned int,RogueDiaryAvatarData>::key_type *)(v1 + 64));
    __y._M_cur = std::unordered_map<unsigned long,RogueDiaryAvatarData>::end((std::unordered_map<long unsigned int,RogueDiaryAvatarData> *const)(v17._M_string_length + 416))._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned long const,RogueDiaryAvatarData>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,RogueDiaryAvatarData>,false> *)(v1 + 96),
           &__y) )
    {
      v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoundStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoundStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      avatar_log = proto_log::PlayerLogBodyRogueDiaryRoundStart::add_onstage_avatar_list(v10);
      if ( *(_BYTE *)((v17._M_string_length >> 3) + 0x7FFF8000) )
        __asan_report_load8(v17._M_string_length);
      AvatarComp = Player::getAvatarComp(*(Player *const *)v17._M_string_length);
      HIDWORD(v17._anon_0._M_allocated_capacity) = PlayerAvatarComp::getAvatarProfilePicFromAvatarOrSnapshot(
                                                     AvatarComp,
                                                     *(_QWORD *)(v1 + 64)).first;
      proto_log::RogueDiaryAvatarLog::set_id(avatar_log, HIDWORD(v17._anon_0._M_allocated_capacity));
      v12 = std::__detail::_Node_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false> *const)(v1 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v12->second.trial_config_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v12->second.trial_config_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v12 = (std::__detail::_Node_iterator<std::pair<long unsigned int const,RogueDiaryAvatarData>,false,false>::pointer)__asan_report_load4(&v12->second.trial_config_id);
      }
      proto_log::RogueDiaryAvatarLog::set_is_trial(avatar_log, v12->second.trial_config_id != 0);
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v24,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "logRoundStart",
        3104);
      v13 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              (common::milog::MiLogStream *const)&v24,
              (const char (*)[42])"[RogueDiary] find guid data failed, guid:");
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v13, (const unsigned __int64 *)(v1 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v24);
    }
    __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++(
      (__gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *const)&v17._anon_0._M_allocated_capacity
    + 1);
  }
  v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoundStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoundStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
  v15 = proto_log::PlayerLogBodyRogueDiaryRoundStart::mutable_buff_list(v14);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
    (const std::vector<unsigned int> *)(v17._M_string_length + 296),
    v15);
  if ( *(_BYTE *)((v17._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8(v17._M_string_length);
  v16 = *(Player **)v17._M_string_length;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyRogueDiaryRoundStart,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyRogueDiaryRoundStart> *)(v1 + 128));
  Player::printStatLog(v16, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyRogueDiaryRoundStart>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyRogueDiaryRoundStart> *const)(v1 + 128));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
  if ( v25 == (char *)v1 )
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
};

// Line 3113: range 00000000143E460C-00000000143E4B4D
// local variable allocation has failed, the output may be wrong!
void __cdecl RogueDiaryRuntimeMgr::logSave(RogueDiaryRuntimeMgr *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySave,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySave,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySave,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySave,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySave,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySave,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySave,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  Player *v12; // r14
  std::string v13; // [rsp+0h] [rbp-E0h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-C0h] BYREF
  std::string v15; // [rsp+30h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+50h] [rbp-90h] BYREF

  v13._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 11 holder:3114 64 16 12 log_ptr:3115";
  *(_QWORD *)(v1 + 16) = RogueDiaryRuntimeMgr::logSave;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)((v13._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8(v13._M_string_length);
  BasicComp = Player::getBasicComp(*(Player *const *)v13._M_string_length);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v15, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0xE1Cu, v13);
  std::string::~string(&v15);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyRogueDiarySave>();
  v5 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySave,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySave,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( *(_BYTE *)(((v13._M_string_length + 224) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v13._M_string_length + 224) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(v13._M_string_length + 224);
  }
  proto_log::PlayerLogBodyRogueDiarySave::set_stage_id(v5, *(_DWORD *)(v13._M_string_length + 224));
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySave,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySave,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( *(_BYTE *)(((v13._M_string_length + 228) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(v13._M_string_length) - 28) & 7) + 3) >= *(_BYTE *)(((v13._M_string_length + 228) >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(v13._M_string_length + 228);
  }
  proto_log::PlayerLogBodyRogueDiarySave::set_dungeon_id(v6, *(_DWORD *)(v13._M_string_length + 228));
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySave,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySave,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( *(_BYTE *)(((v13._M_string_length + 504) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v13._M_string_length + 504) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(v13._M_string_length + 504);
  }
  proto_log::PlayerLogBodyRogueDiarySave::set_transaction(v7, *(_DWORD *)(v13._M_string_length + 504));
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySave,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySave,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( *(_BYTE *)(((v13._M_string_length + 236) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(v13._M_string_length) - 20) & 7) + 3) >= *(_BYTE *)(((v13._M_string_length + 236) >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(v13._M_string_length + 236);
  }
  proto_log::PlayerLogBodyRogueDiarySave::set_round(v8, *(_DWORD *)(v13._M_string_length + 236));
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySave,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySave,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( *(char *)(((v13._M_string_length + 240) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(v13._M_string_length + 240);
  proto_log::PlayerLogBodyRogueDiarySave::set_is_round_fight_finished(v9, *(_BYTE *)(v13._M_string_length + 240));
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySave,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySave,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( *(_BYTE *)(((v13._M_string_length + 241) >> 3) + 0x7FFF8000) != 0
    && ((LOBYTE(v13._M_string_length) - 15) & 7) >= *(_BYTE *)(((v13._M_string_length + 241) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(v13._M_string_length + 241);
  }
  proto_log::PlayerLogBodyRogueDiarySave::set_is_round_repair_finished(v10, *(_BYTE *)(v13._M_string_length + 241));
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySave,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySave,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( *(_BYTE *)(((v13._M_string_length + 500) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(v13._M_string_length) - 12) & 7) + 3) >= *(_BYTE *)(((v13._M_string_length + 500) >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(v13._M_string_length + 500);
  }
  proto_log::PlayerLogBodyRogueDiarySave::set_cost_time(v11, *(_DWORD *)(v13._M_string_length + 500));
  if ( *(_BYTE *)((v13._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8(v13._M_string_length);
  v12 = *(Player **)v13._M_string_length;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyRogueDiarySave,void>(
    (std::shared_ptr<google::protobuf::Message> *const)&v13._anon_0,
    (const std::shared_ptr<proto_log::PlayerLogBodyRogueDiarySave> *)(v1 + 64));
  Player::printStatLog(v12, (MessagePtr *)&v13._anon_0, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v13._anon_0);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyRogueDiarySave>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyRogueDiarySave> *const)(v1 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
  if ( v16 == (char *)v1 )
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

// Line 3127: range 00000000143E4B4E-00000000143E53C0
void __cdecl RogueDiaryRuntimeMgr::logRoomSettle(RogueDiaryRuntimeMgr *const this, uint32_t result)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoomSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoomSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoomSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoomSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoomSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoomSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoomSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoomSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  bool CanSelectHard; // al
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoomSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoomSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  char v17; // al
  Scene *v18; // rax
  __int64 v19; // rax
  float v20; // xmm0_4
  int v21; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoomSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  Player *player; // r14
  std::string v24; // [rsp+0h] [rbp-120h]
  uint32_t resulta; // [rsp+4h] [rbp-11Ch]
  RogueDiaryRuntimeMgr *thisa; // [rsp+8h] [rbp-118h]
  uint32_t monster_pool_id; // [rsp+18h] [rbp-108h]
  uint32_t cost_time; // [rsp+1Ch] [rbp-104h]
  const data::RogueDiaryRoomExcelConfig *room_config_ptr; // [rsp+20h] [rbp-100h]
  uint64_t now_ms; // [rsp+28h] [rbp-F8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-E0h] BYREF
  std::string v33; // [rsp+50h] [rbp-D0h] BYREF
  char v34[176]; // [rsp+70h] [rbp-B0h] BYREF

  v24._M_string_length = (std::string::size_type)this;
  HIDWORD(v24._M_dataplus._M_p) = result;
  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 11 holder:3128 64 16 12 log_ptr:3129 96 16 14 scene_ptr:3151";
  *(_QWORD *)(v2 + 16) = RogueDiaryRuntimeMgr::logRoomSettle;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v33, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xE1Du, v24);
  std::string::~string(&v33);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyRogueDiaryRoomSettle>();
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoomSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoomSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->stage_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->stage_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&thisa->stage_id_);
  }
  proto_log::PlayerLogBodyRogueDiaryRoomSettle::set_stage_id(v6, thisa->stage_id_);
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoomSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoomSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&thisa->dungeon_id_);
  }
  proto_log::PlayerLogBodyRogueDiaryRoomSettle::set_dungeon_id(v7, thisa->dungeon_id_);
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoomSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoomSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->transaction_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->transaction_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&thisa->transaction_);
  }
  proto_log::PlayerLogBodyRogueDiaryRoomSettle::set_transaction(v8, thisa->transaction_);
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoomSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoomSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->cur_round_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->cur_round_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&thisa->cur_round_);
  }
  proto_log::PlayerLogBodyRogueDiaryRoomSettle::set_round(v9, thisa->cur_round_);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoomSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoomSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->cur_room_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->cur_room_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&thisa->cur_room_);
  }
  proto_log::PlayerLogBodyRogueDiaryRoomSettle::set_room(v10, thisa->cur_room_);
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoomSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoomSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  proto_log::PlayerLogBodyRogueDiaryRoomSettle::set_result(v11, resulta);
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoomSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoomSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->is_select_room_hard_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)thisa + 57) & 7) >= *(_BYTE *)(((unsigned __int64)&thisa->is_select_room_hard_ >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load1(&thisa->is_select_room_hard_);
  }
  proto_log::PlayerLogBodyRogueDiaryRoomSettle::set_is_select_hard(v12, thisa->is_select_room_hard_);
  room_config_ptr = RogueDiaryRuntimeMgr::getCurRoomConfig(thisa);
  if ( room_config_ptr )
  {
    v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoomSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoomSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    CanSelectHard = RogueDiaryRuntimeMgr::isCurRoomCanSelectHard(thisa);
    proto_log::PlayerLogBodyRogueDiaryRoomSettle::set_is_can_hard(v13, CanSelectHard);
    v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoomSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoomSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(char *)(((unsigned __int64)&room_config_ptr->is_boss >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&room_config_ptr->is_boss);
    proto_log::PlayerLogBodyRogueDiaryRoomSettle::set_is_boss_room(v15, room_config_ptr->is_boss);
    if ( *(_BYTE *)(((unsigned __int64)&room_config_ptr->normal_tide_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)room_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&room_config_ptr->normal_tide_id >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&room_config_ptr->normal_tide_id);
    }
    monster_pool_id = room_config_ptr->normal_tide_id;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->is_select_room_hard_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)thisa + 57) & 7) >= *(_BYTE *)(((unsigned __int64)&thisa->is_select_room_hard_ >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load1(&thisa->is_select_room_hard_);
    }
    if ( thisa->is_select_room_hard_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&room_config_ptr->hard_tide_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&room_config_ptr->hard_tide_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&room_config_ptr->hard_tide_id);
      }
      if ( room_config_ptr->hard_tide_id )
        monster_pool_id = room_config_ptr->hard_tide_id;
    }
    v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoomSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoomSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto_log::PlayerLogBodyRogueDiaryRoomSettle::set_monster_pool_id(v16, monster_pool_id);
  }
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
    __asan_report_load8(thisa);
  Player::getSceneComp(thisa->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 96));
  if ( !std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 96)) )
    goto LABEL_38;
  if ( *(char *)(((unsigned __int64)&thisa->is_room_fighting_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&thisa->is_room_fighting_);
  if ( thisa->is_room_fighting_ )
    v17 = 1;
  else
LABEL_38:
    v17 = 0;
  if ( v17 )
  {
    v18 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    now_ms = Scene::getSceneTimeMs(v18);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->room_start_time_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->room_start_time_);
    if ( now_ms <= thisa->room_start_time_ )
    {
      v21 = 0;
    }
    else
    {
      v19 = now_ms - thisa->room_start_time_;
      if ( v19 < 0 )
        v20 = (float)(v19 & 1 | (unsigned int)((unsigned __int64)v19 >> 1))
            + (float)(v19 & 1 | (unsigned int)((unsigned __int64)v19 >> 1));
      else
        v20 = (float)(int)v19;
      v21 = (int)std::ceil(v20 / 1000.0);
    }
    cost_time = v21;
    v22 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoomSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryRoomSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto_log::PlayerLogBodyRogueDiaryRoomSettle::set_room_cost_time(v22, cost_time);
  }
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
    __asan_report_load8(thisa);
  player = thisa->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyRogueDiaryRoomSettle,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyRogueDiaryRoomSettle> *)(v2 + 64));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 96));
  std::shared_ptr<proto_log::PlayerLogBodyRogueDiaryRoomSettle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyRogueDiaryRoomSettle> *const)(v2 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  if ( v34 == (char *)v2 )
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
};

// Line 3164: range 00000000143E53C2-00000000143E5966
// local variable allocation has failed, the output may be wrong!
void __cdecl RogueDiaryRuntimeMgr::logSettle(RogueDiaryRuntimeMgr *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  Player *v13; // r14
  std::string v14; // [rsp+0h] [rbp-E0h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-C0h] BYREF
  std::string v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v14._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 11 holder:3165 64 16 12 log_ptr:3166";
  *(_QWORD *)(v1 + 16) = RogueDiaryRuntimeMgr::logSettle;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)((v14._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8(v14._M_string_length);
  BasicComp = Player::getBasicComp(*(Player *const *)v14._M_string_length);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v16, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0xE1Eu, v14);
  std::string::~string(&v16);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyRogueDiarySettle>();
  v5 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( *(_BYTE *)(((v14._M_string_length + 224) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v14._M_string_length + 224) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(v14._M_string_length + 224);
  }
  proto_log::PlayerLogBodyRogueDiarySettle::set_stage_id(v5, *(_DWORD *)(v14._M_string_length + 224));
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( *(_BYTE *)(((v14._M_string_length + 228) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(v14._M_string_length) - 28) & 7) + 3) >= *(_BYTE *)(((v14._M_string_length + 228) >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(v14._M_string_length + 228);
  }
  proto_log::PlayerLogBodyRogueDiarySettle::set_dungeon_id(v6, *(_DWORD *)(v14._M_string_length + 228));
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( *(_BYTE *)(((v14._M_string_length + 504) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v14._M_string_length + 504) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(v14._M_string_length + 504);
  }
  proto_log::PlayerLogBodyRogueDiarySettle::set_transaction(v7, *(_DWORD *)(v14._M_string_length + 504));
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( *(_BYTE *)(((v14._M_string_length + 236) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(v14._M_string_length) - 20) & 7) + 3) >= *(_BYTE *)(((v14._M_string_length + 236) >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(v14._M_string_length + 236);
  }
  proto_log::PlayerLogBodyRogueDiarySettle::set_round(v8, *(_DWORD *)(v14._M_string_length + 236));
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( *(char *)(((v14._M_string_length + 240) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(v14._M_string_length + 240);
  proto_log::PlayerLogBodyRogueDiarySettle::set_is_round_fight_finished(v9, *(_BYTE *)(v14._M_string_length + 240));
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( *(_BYTE *)(((v14._M_string_length + 241) >> 3) + 0x7FFF8000) != 0
    && ((LOBYTE(v14._M_string_length) - 15) & 7) >= *(_BYTE *)(((v14._M_string_length + 241) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(v14._M_string_length + 241);
  }
  proto_log::PlayerLogBodyRogueDiarySettle::set_is_round_repair_finished(v10, *(_BYTE *)(v14._M_string_length + 241));
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( *(_BYTE *)(((v14._M_string_length + 500) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(v14._M_string_length) - 12) & 7) + 3) >= *(_BYTE *)(((v14._M_string_length + 500) >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(v14._M_string_length + 500);
  }
  proto_log::PlayerLogBodyRogueDiarySettle::set_cost_time(v11, *(_DWORD *)(v14._M_string_length + 500));
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiarySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( *(char *)(((v14._M_string_length + 208) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(v14._M_string_length + 208);
  proto_log::PlayerLogBodyRogueDiarySettle::set_is_finish(v12, *(_BYTE *)(v14._M_string_length + 208));
  if ( *(_BYTE *)((v14._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8(v14._M_string_length);
  v13 = *(Player **)v14._M_string_length;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyRogueDiarySettle,void>(
    (std::shared_ptr<google::protobuf::Message> *const)&v14._anon_0,
    (const std::shared_ptr<proto_log::PlayerLogBodyRogueDiarySettle> *)(v1 + 64));
  Player::printStatLog(v13, (MessagePtr *)&v14._anon_0, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v14._anon_0);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyRogueDiarySettle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyRogueDiarySettle> *const)(v1 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
  if ( v17 == (char *)v1 )
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

// Line 3179: range 00000000143E5968-00000000143E5E42
// local variable allocation has failed, the output may be wrong!
void __cdecl RogueDiaryRuntimeMgr::logDungeonLoad(RogueDiaryRuntimeMgr *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryDungeonLoad,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryDungeonLoad,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryDungeonLoad,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryDungeonLoad,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryDungeonLoad,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryDungeonLoad,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  Player *v11; // r14
  std::string v12; // [rsp+0h] [rbp-E0h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-C0h] BYREF
  std::string v14; // [rsp+30h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+50h] [rbp-90h] BYREF

  v12._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 11 holder:3180 64 16 12 log_ptr:3181";
  *(_QWORD *)(v1 + 16) = RogueDiaryRuntimeMgr::logDungeonLoad;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)((v12._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8(v12._M_string_length);
  BasicComp = Player::getBasicComp(*(Player *const *)v12._M_string_length);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v14, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0xE20u, v12);
  std::string::~string(&v14);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyRogueDiaryDungeonLoad>();
  v5 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryDungeonLoad,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryDungeonLoad,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( *(_BYTE *)(((v12._M_string_length + 224) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v12._M_string_length + 224) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(v12._M_string_length + 224);
  }
  proto_log::PlayerLogBodyRogueDiaryDungeonLoad::set_stage_id(v5, *(_DWORD *)(v12._M_string_length + 224));
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryDungeonLoad,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryDungeonLoad,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( *(_BYTE *)(((v12._M_string_length + 228) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(v12._M_string_length) - 28) & 7) + 3) >= *(_BYTE *)(((v12._M_string_length + 228) >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(v12._M_string_length + 228);
  }
  proto_log::PlayerLogBodyRogueDiaryDungeonLoad::set_dungeon_id(v6, *(_DWORD *)(v12._M_string_length + 228));
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryDungeonLoad,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryDungeonLoad,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( *(_BYTE *)(((v12._M_string_length + 504) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v12._M_string_length + 504) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(v12._M_string_length + 504);
  }
  proto_log::PlayerLogBodyRogueDiaryDungeonLoad::set_transaction(v7, *(_DWORD *)(v12._M_string_length + 504));
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryDungeonLoad,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryDungeonLoad,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( *(_BYTE *)(((v12._M_string_length + 236) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(v12._M_string_length) - 20) & 7) + 3) >= *(_BYTE *)(((v12._M_string_length + 236) >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(v12._M_string_length + 236);
  }
  proto_log::PlayerLogBodyRogueDiaryDungeonLoad::set_round(v8, *(_DWORD *)(v12._M_string_length + 236));
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryDungeonLoad,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryDungeonLoad,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( *(char *)(((v12._M_string_length + 240) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(v12._M_string_length + 240);
  proto_log::PlayerLogBodyRogueDiaryDungeonLoad::set_is_round_fight_finished(v9, *(_BYTE *)(v12._M_string_length + 240));
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryDungeonLoad,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryDungeonLoad,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( *(_BYTE *)(((v12._M_string_length + 241) >> 3) + 0x7FFF8000) != 0
    && ((LOBYTE(v12._M_string_length) - 15) & 7) >= *(_BYTE *)(((v12._M_string_length + 241) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(v12._M_string_length + 241);
  }
  proto_log::PlayerLogBodyRogueDiaryDungeonLoad::set_is_round_repair_finished(
    v10,
    *(_BYTE *)(v12._M_string_length + 241));
  if ( *(_BYTE *)((v12._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8(v12._M_string_length);
  v11 = *(Player **)v12._M_string_length;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyRogueDiaryDungeonLoad,void>(
    (std::shared_ptr<google::protobuf::Message> *const)&v12._anon_0,
    (const std::shared_ptr<proto_log::PlayerLogBodyRogueDiaryDungeonLoad> *)(v1 + 64));
  Player::printStatLog(v11, (MessagePtr *)&v12._anon_0, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v12._anon_0);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyRogueDiaryDungeonLoad>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyRogueDiaryDungeonLoad> *const)(v1 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
  if ( v15 == (char *)v1 )
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

// Line 3192: range 00000000143E5E44-00000000143E633A
void __cdecl RogueDiaryRuntimeMgr::logCoinChange(
        RogueDiaryRuntimeMgr *const this,
        uint32_t reason,
        uint32_t delta_num,
        std::vector<unsigned int> *p_buy_card_vec)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryCoinChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryCoinChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryCoinChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryCoinChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryCoinChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryCoinChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryCoinChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryCoinChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  google::protobuf::RepeatedField<unsigned int> *v16; // rdx
  Player *player; // r14
  std::string v18; // [rsp+0h] [rbp-F0h]
  std::vector<unsigned int> *p_buy_card_veca; // [rsp+8h] [rbp-E8h]
  __int64 delta_numa; // [rsp+10h] [rbp-E0h]
  RogueDiaryRuntimeMgr *thisa; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-C0h] BYREF
  std::string v24; // [rsp+40h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+60h] [rbp-90h] BYREF

  *(&v18._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v18._anon_0._M_allocated_capacity) = reason;
  *(_DWORD *)v18._anon_0._M_local_buf = delta_num;
  v18._M_string_length = (std::string::size_type)p_buy_card_vec;
  v4 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 1 11 holder:3198 64 16 12 log_ptr:3199";
  *(_QWORD *)(v4 + 16) = RogueDiaryRuntimeMgr::logCoinChange;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -202178560;
  if ( *(_DWORD *)v18._anon_0._M_local_buf )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v24, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0xE1Fu, v18);
    std::string::~string(&v24);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyRogueDiaryCoinChange>();
    v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryCoinChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryCoinChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->stage_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->stage_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&thisa->stage_id_);
    }
    proto_log::PlayerLogBodyRogueDiaryCoinChange::set_stage_id(v8, thisa->stage_id_);
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryCoinChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryCoinChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->dungeon_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->dungeon_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&thisa->dungeon_id_);
    }
    proto_log::PlayerLogBodyRogueDiaryCoinChange::set_dungeon_id(v9, thisa->dungeon_id_);
    v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryCoinChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryCoinChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->transaction_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->transaction_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&thisa->transaction_);
    }
    proto_log::PlayerLogBodyRogueDiaryCoinChange::set_transaction(v10, thisa->transaction_);
    v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryCoinChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryCoinChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->cur_round_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->cur_round_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&thisa->cur_round_);
    }
    proto_log::PlayerLogBodyRogueDiaryCoinChange::set_round(v11, thisa->cur_round_);
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryCoinChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryCoinChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    proto_log::PlayerLogBodyRogueDiaryCoinChange::set_coin_change_reason(v12, HIDWORD(delta_numa));
    v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryCoinChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryCoinChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    proto_log::PlayerLogBodyRogueDiaryCoinChange::set_coin_change_num(v13, delta_numa);
    v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryCoinChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryCoinChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->coin_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->coin_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&thisa->coin_);
    }
    proto_log::PlayerLogBodyRogueDiaryCoinChange::set_coin_num(v14, thisa->coin_);
    v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryCoinChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueDiaryCoinChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    v16 = proto_log::PlayerLogBodyRogueDiaryCoinChange::mutable_buy_card_list(v15);
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(p_buy_card_veca, v16);
    if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
      __asan_report_load8(thisa);
    player = thisa->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyRogueDiaryCoinChange,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyRogueDiaryCoinChange> *)(v4 + 64));
    Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<proto_log::PlayerLogBodyRogueDiaryCoinChange>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyRogueDiaryCoinChange> *const)(v4 + 64));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
  }
  if ( v25 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 3212: range 00000000143E633C-00000000143E63E0
void __cdecl RogueDiaryRuntimeMgr::onAllAvatarDie(RogueDiaryRuntimeMgr *const this)
{
  common::milog::MiLogStream v1; // [rsp+20h] [rbp-30h] BYREF

  if ( RogueDiaryRuntimeMgr::checkIsInDungeonRunningState(this) )
  {
    common::milog::MiLogStream::create(
      &v1,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "onAllAvatarDie",
      3217);
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
      &v1,
      (const char (*)[49])"[RogueDiary] checkIsInDungeonRunningState failed");
    common::milog::MiLogStream::~MiLogStream(&v1);
  }
  else
  {
    RogueDiaryRuntimeMgr::onInterrupt(this, 1u);
  }
};

// Line 3224: range 00000000143E63E2-00000000143E6557
void __cdecl RogueDiaryRuntimeMgr::notifyCoinAdd(RogueDiaryRuntimeMgr *const this, uint32_t num)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 11 notify:3229";
  *(_QWORD *)(v2 + 16) = RogueDiaryRuntimeMgr::notifyCoinAdd;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  if ( num )
  {
    proto::RogueDiaryCoinAddNotify::RogueDiaryCoinAddNotify((proto::RogueDiaryCoinAddNotify *const)(v2 + 32));
    proto::RogueDiaryCoinAddNotify::set_num((proto::RogueDiaryCoinAddNotify *const)(v2 + 32), num);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 32));
    proto::RogueDiaryCoinAddNotify::~RogueDiaryCoinAddNotify((proto::RogueDiaryCoinAddNotify *const)(v2 + 32));
  }
  if ( v5 == (char *)v2 )
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
};

// Line 3235: range 00000000143E6558-00000000143E65C1
void __cdecl RogueDiaryRuntimeMgr::addCoinByGm(RogueDiaryRuntimeMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->coin_);
  }
  this->coin_ += 1000000;
  RogueDiaryRuntimeMgr::notifyDungeonInfo(this);
};

// Line 3241: range 00000000143E65C2-00000000143E67FC
int32_t __cdecl RogueDiaryRuntimeMgr::clearTiredStatusByGm(RogueDiaryRuntimeMgr *const this)
{
  bool *p_is_ban; // rax
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rdx
  std::unordered_map<long unsigned int,RogueDiaryAvatarData>::iterator __for_begin; // [rsp+10h] [rbp-60h] BYREF
  std::unordered_map<long unsigned int,RogueDiaryAvatarData>::iterator __for_end; // [rsp+18h] [rbp-58h] BYREF
  std::unordered_map<long unsigned int,RogueDiaryAvatarData> *__for_range; // [rsp+20h] [rbp-50h]
  std::pair<long unsigned int const,RogueDiaryAvatarData> *__in; // [rsp+28h] [rbp-48h]
  std::tuple_element<0,std::pair<long unsigned int const,RogueDiaryAvatarData> >::type *guid; // [rsp+30h] [rbp-40h]
  std::tuple_element<1,std::pair<long unsigned int const,RogueDiaryAvatarData> >::type *avatar_data; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v12; // [rsp+40h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->is_have_progress_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_progress_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_have_progress_);
  }
  if ( !this->is_have_progress_ )
    goto LABEL_7;
  if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_running_);
  if ( !this->is_running_ )
  {
LABEL_7:
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "clearTiredStatusByGm",
      3244);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      &v12,
      (const char (*)[30])"[RogueDiary] have no progress");
    common::milog::MiLogStream::~MiLogStream(&v12);
    return -1;
  }
  else
  {
    __for_range = &this->guid_avatar_data_map_;
    __for_begin._M_cur = std::unordered_map<unsigned long,RogueDiaryAvatarData>::begin(&this->guid_avatar_data_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned long,RogueDiaryAvatarData>::end(&this->guid_avatar_data_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned long const,RogueDiaryAvatarData>,false>(
              &__for_begin,
              &__for_end) )
    {
      __in = std::__detail::_Node_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator*(&__for_begin);
      guid = std::get<0ul,unsigned long const,RogueDiaryAvatarData>(__in);
      avatar_data = std::get<1ul,unsigned long const,RogueDiaryAvatarData>(__in);
      p_is_ban = &avatar_data->is_ban;
      v3 = ((_BYTE)avatar_data + 24) & 7;
      v4 = (*(_BYTE *)(((unsigned __int64)p_is_ban >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)p_is_ban >> 3) + 0x7FFF8000));
      if ( (_BYTE)v4 )
        __asan_report_store1(p_is_ban, v3, v4);
      avatar_data->is_ban = 0;
      v5 = (*(_BYTE *)(((unsigned __int64)&avatar_data->round >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)avatar_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_data->round >> 3) + 0x7FFF8000));
      if ( (_BYTE)v5 )
        __asan_report_store4(&avatar_data->round, (((_BYTE)avatar_data + 4) & 7u) + 3, v5);
      avatar_data->round = 0;
      std::__detail::_Node_iterator<std::pair<unsigned long const,RogueDiaryAvatarData>,false,false>::operator++(&__for_begin);
    }
    RogueDiaryRuntimeMgr::notifyRepairInfo(this, 0);
    return 0;
  }
};

// Line 3257: range 00000000143E67FE-00000000143E72B0
int32_t __cdecl RogueDiaryRuntimeMgr::setRoundPoolVecByGm(
        RogueDiaryRuntimeMgr *const this,
        const std::vector<unsigned int> *pool_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rbx
  int32_t v6; // r14d
  const ActivityRogueDiaryExcelConfigMgr *v7; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::vector<data::RogueDiaryRoundExcelConfig>::size_type v10; // rcx
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v11; // rdx
  unsigned int *p_second; // rax
  uint32_t second; // ecx
  char v14; // al
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::vector<unsigned int>::size_type v18; // r14
  std::vector<data::RogueDiaryRoundExcelConfig> *p_round_list; // rcx
  std::vector<data::RogueDiaryRoundExcelConfig>::const_reference v20; // rax
  common::milog::MiLogStream *v21; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v22; // rax
  _DWORD *v23; // rdx
  bool *v24; // r8
  common::milog::MiLogStream *v25; // rax
  char v26; // al
  std::vector<std::pair<unsigned int,bool>> *v27; // rax
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-150h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-148h] BYREF
  const ActivityRogueDiaryExcelConfigMgr *config_mgr; // [rsp+30h] [rbp-140h]
  const data::RogueDiaryDungeonExcelConfig *config_ptr; // [rsp+38h] [rbp-138h]
  const std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-130h]
  const data::RogueDiaryRoomExcelConfig *room_config_ptr; // [rsp+48h] [rbp-128h]
  std::shared_ptr<Config> v35; // [rsp+50h] [rbp-120h] BYREF
  common::milog::MiLogStream v36; // [rsp+60h] [rbp-110h] BYREF
  std::string val; // [rsp+80h] [rbp-F0h] BYREF
  char v38[208]; // [rsp+A0h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 1 16 is_can_hard:3300 48 4 12 pool_id:3292 64 8 9 iter:3271 96 24 26 round_room_config_vec:3291";
  *(_QWORD *)(v2 + 16) = RogueDiaryRuntimeMgr::setRoundPoolVecByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -218959360;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( RogueDiaryRuntimeMgr::checkIsInDungeonRunningState(this) )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "setRoundPoolVecByGm",
      3261);
    v5 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v36,
           (const char (*)[51])"[RogueDiary] checkIsInDungeonRunningState failed, ");
    RogueDiaryRuntimeMgr::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v36);
    v6 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v35);
    config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35)->design_config.txt_config_mgr.activity_rogue_diary_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v35);
    v7 = config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->dungeon_id_);
    }
    config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryDungeonExcelConfig(v7, this->dungeon_id_);
    if ( config_ptr )
    {
      *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                      &config_mgr->dungeon_round_count_map,
                                                                                      &this->dungeon_id_);
      __for_end._M_current = (const unsigned int *)std::unordered_map<unsigned int,unsigned int>::end(&config_mgr->dungeon_round_count_map)._M_cur;
      if ( std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_end) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "setRoundPoolVecByGm",
          3274);
        v9 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
               (common::milog::MiLogStream *const)&val,
               (const char (*)[69])"[RogueDiary] dungeon_round_count_map findDungeon failed, dungeon_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->dungeon_id_);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        v6 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->cur_round_);
        }
        if ( this->cur_round_ )
        {
          v10 = std::vector<data::RogueDiaryRoundExcelConfig>::size(&config_ptr->round_list);
          if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&this->cur_round_);
          }
          if ( v10 < this->cur_round_ )
            goto LABEL_24;
          v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
          p_second = &v11->second;
          if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(p_second);
          }
          second = v11->second;
          if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&this->cur_round_);
          }
          if ( second >= this->cur_round_ )
            v14 = 0;
          else
LABEL_24:
            v14 = 1;
          if ( v14 )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&val,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
              "setRoundPoolVecByGm",
              3283);
            v15 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                    (common::milog::MiLogStream *const)&val,
                    (const char (*)[34])"[RogueDiary] invalid round_index:");
            v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->cur_round_);
            v17 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v16,
                    (const char (*)[14])", dungeon_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->dungeon_id_);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
            v6 = -1;
          }
          else
          {
            v18 = std::vector<unsigned int>::size(pool_vec);
            p_round_list = &config_ptr->round_list;
            if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4(&this->cur_round_);
            }
            v20 = std::vector<data::RogueDiaryRoundExcelConfig>::operator[](p_round_list, this->cur_round_ - 1);
            if ( *(_BYTE *)(((unsigned __int64)&v20->room_count >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v20->room_count >> 3) + 0x7FFF8000) <= 3 )
            {
              v20 = (std::vector<data::RogueDiaryRoundExcelConfig>::const_reference)__asan_report_load4(&v20->room_count);
            }
            if ( v18 == v20->room_count )
            {
              std::vector<std::pair<unsigned int,bool>>::vector((std::vector<std::pair<unsigned int,bool>> *const)(v2 + 96));
              __for_range = pool_vec;
              __for_begin._M_current = std::vector<unsigned int>::begin(pool_vec)._M_current;
              __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
              while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
              {
                v22 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
                v23 = v22;
                if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v22);
                }
                *(_DWORD *)(v2 + 48) = *v23;
                room_config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryRoomExcelConfig(
                                    config_mgr,
                                    *(_DWORD *)(v2 + 48));
                if ( !room_config_ptr )
                {
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)&val,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
                    "setRoundPoolVecByGm",
                    3297);
                  v25 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                          (common::milog::MiLogStream *const)&val,
                          (const char (*)[65])"[RogueDiary] findRogueDiaryDungeonExcelConfig failed, config_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v25,
                    (const unsigned int *)(v2 + 48));
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
                  v6 = -1;
                  goto LABEL_50;
                }
                if ( *(_BYTE *)(((unsigned __int64)&room_config_ptr->challenge_id >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)room_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&room_config_ptr->challenge_id >> 3)
                                                                                 + 0x7FFF8000) )
                {
                  __asan_report_load4(&room_config_ptr->challenge_id);
                }
                if ( room_config_ptr->challenge_id )
                  goto LABEL_46;
                if ( *(_BYTE *)(((unsigned __int64)&room_config_ptr->hard_tide_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&room_config_ptr->hard_tide_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&room_config_ptr->hard_tide_id);
                }
                if ( room_config_ptr->hard_tide_id )
LABEL_46:
                  v26 = 1;
                else
                  v26 = 0;
                *(_BYTE *)(v2 + 32) = v26;
                std::vector<std::pair<unsigned int,bool>>::emplace_back<unsigned int &,bool &>(
                  (std::vector<std::pair<unsigned int,bool>> *const)(v2 + 96),
                  (unsigned int *)(v2 + 48),
                  (bool *)(v2 + 32),
                  (unsigned int *)(v2 + 48),
                  v24);
                __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
              }
              v27 = std::move<std::vector<std::pair<unsigned int,bool>> &>((std::vector<std::pair<unsigned int,bool>> *)(v2 + 96));
              std::vector<std::pair<unsigned int,bool>>::operator=(&this->round_room_config_vec_, v27);
              RogueDiaryRuntimeMgr::notifyDungeonInfo(this);
              RogueDiaryRuntimeMgr::notifyRepairInfo(this, 0);
              v6 = 0;
LABEL_50:
              std::vector<std::pair<unsigned int,bool>>::~vector((std::vector<std::pair<unsigned int,bool>> *const)(v2 + 96));
            }
            else
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&val,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
                "setRoundPoolVecByGm",
                3288);
              v21 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                      (common::milog::MiLogStream *const)&val,
                      (const char (*)[64])"[RogueDiary] pool_vec size not equal to room count, dungeon_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &this->dungeon_id_);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
              v6 = -1;
            }
          }
        }
        else
        {
          v6 = -1;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "setRoundPoolVecByGm",
        3268);
      v8 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
             (common::milog::MiLogStream *const)&val,
             (const char (*)[66])"[RogueDiary] findRogueDiaryDungeonExcelConfig failed, dungeon_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->dungeon_id_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v6 = -1;
    }
  }
  result = v6;
  if ( v38 == (char *)v2 )
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

// Line 3310: range 00000000143E72B2-00000000143E7808
std::string *__cdecl RogueDiaryRuntimeMgr::getAndNotifyRoundPoolInfoByGm[abi:cxx11](
        std::string *retstr,
        RogueDiaryRuntimeMgr *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v11; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v12; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v13; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v14; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v15; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v16; // rax
  Player *player; // r14
  std::vector<std::pair<unsigned int,bool>>::iterator __for_begin; // [rsp+10h] [rbp-C0h] BYREF
  std::vector<std::pair<unsigned int,bool>>::iterator __for_end; // [rsp+18h] [rbp-B8h] BYREF
  std::vector<std::pair<unsigned int,bool>> *__for_range; // [rsp+20h] [rbp-B0h]
  const std::pair<unsigned int,bool> *v22; // [rsp+28h] [rbp-A8h]
  std::tuple_element<0,const std::pair<unsigned int,bool> >::type *pool_id; // [rsp+30h] [rbp-A0h]
  std::tuple_element<1,const std::pair<unsigned int,bool> >::type *is_can_hard; // [rsp+38h] [rbp-98h]
  std::string server_log; // [rsp+40h] [rbp-90h] BYREF
  char v26[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 8 oss:3311";
  *(_QWORD *)(v2 + 16) = RogueDiaryRuntimeMgr::getAndNotifyRoundPoolInfoByGm[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "stage_id:");
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->stage_id_);
  }
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, this->stage_id_);
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, ", dungeon_id:");
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->dungeon_id_);
  }
  v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, this->dungeon_id_);
  v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, ", cur_round:");
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_round_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_round_);
  }
  v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, this->cur_round_);
  v11 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, ", cur_room:");
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_room_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_room_);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v11, this->cur_room_);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
    " round room info [monster_pool, is_can_hard]:");
  __for_range = &this->round_room_config_vec_;
  __for_begin._M_current = std::vector<std::pair<unsigned int,bool>>::begin(&this->round_room_config_vec_)._M_current;
  __for_end._M_current = std::vector<std::pair<unsigned int,bool>>::end(&this->round_room_config_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::pair<unsigned int,bool> *,std::vector<std::pair<unsigned int,bool>>>(
            &__for_begin,
            &__for_end) )
  {
    v22 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,bool> *,std::vector<std::pair<unsigned int,bool>>>::operator*(&__for_begin);
    pool_id = (std::tuple_element<0,const std::pair<unsigned int,bool> >::type *)std::get<0ul,unsigned int,bool>(v22);
    is_can_hard = (std::tuple_element<1,const std::pair<unsigned int,bool> >::type *)std::get<1ul,unsigned int,bool>(v22);
    v12 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
            "{ ");
    v13 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v12, "pool_id:");
    if ( *(_BYTE *)(((unsigned __int64)pool_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)pool_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pool_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(pool_id);
    }
    v14 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v13, *pool_id);
    v15 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v14, ", is_can_hard:");
    if ( *(_BYTE *)(((unsigned __int64)is_can_hard >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)is_can_hard & 7) >= *(_BYTE *)(((unsigned __int64)is_can_hard >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(is_can_hard);
    }
    v16 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v15, *is_can_hard);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v16, " }\n");
    __gnu_cxx::__normal_iterator<std::pair<unsigned int,bool> *,std::vector<std::pair<unsigned int,bool>>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  player = this->player_;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    &server_log,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  Player::notifyServerLog(player, SERVER_LOG_LEVEL, LOG_LEVEL_NONE, &server_log);
  std::string::~string(&server_log);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    retstr,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  if ( v26 == (char *)v2 )
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

// Line 3323: range 00000000143E780A-00000000143E7F32
int32_t __cdecl RogueDiaryRuntimeMgr::setNextRandCardByGm(
        RogueDiaryRuntimeMgr *const this,
        const std::vector<unsigned int> *card_vec)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v6; // rbx
  int32_t v7; // r14d
  const ActivityRogueDiaryExcelConfigMgr *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v11; // rax
  std::vector<unsigned int>::size_type v12; // rcx
  char v13; // al
  common::milog::MiLogStream *v14; // r14
  std::_Rb_tree_const_iterator<unsigned int>::reference v15; // rax
  _DWORD *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r14
  std::set<unsigned int>::iterator v19; // rax
  int32_t result; // eax
  std::allocator<unsigned int> __a; // [rsp+17h] [rbp-149h] BYREF
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-148h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-140h] BYREF
  const ActivityRogueDiaryExcelConfigMgr *config_mgr; // [rsp+28h] [rbp-138h]
  const data::RogueDiaryStageExcelConfig *stage_config_ptr; // [rsp+30h] [rbp-130h]
  std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-128h]
  std::shared_ptr<Config> v27; // [rsp+40h] [rbp-120h] BYREF
  std::vector<unsigned int> __x; // [rsp+50h] [rbp-110h] BYREF
  common::milog::MiLogStream v29; // [rsp+70h] [rbp-F0h] BYREF
  std::string val; // [rsp+90h] [rbp-D0h] BYREF
  char v31[176]; // [rsp+B0h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 4 12 card_id:3343 48 48 13 card_set:3337";
  *(_QWORD *)(v2 + 16) = RogueDiaryRuntimeMgr::setNextRandCardByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_have_progress_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_progress_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_have_progress_);
  }
  if ( !this->is_have_progress_ || std::vector<unsigned int>::empty(&this->optional_card_vec_) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "setNextRandCardByGm",
      3326);
    v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v29,
           (const char (*)[29])"[RogueDiary] invalid state, ");
    RogueDiaryRuntimeMgr::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v29);
    v7 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v27);
    config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.activity_rogue_diary_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v27);
    v8 = config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->stage_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->stage_id_);
    }
    stage_config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryStageExcelConfig(v8, this->stage_id_);
    if ( stage_config_ptr )
    {
      M_current = std::vector<unsigned int>::end(card_vec)._M_current;
      v11._M_current = std::vector<unsigned int>::begin(card_vec)._M_current;
      std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
        (std::set<unsigned int> *const)(v2 + 48),
        v11,
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
      if ( !std::set<unsigned int>::size((const std::set<unsigned int> *const)(v2 + 48)) )
        goto LABEL_20;
      v12 = std::vector<unsigned int>::size(card_vec);
      if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->optional_card_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&stage_config_ptr->optional_card_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&stage_config_ptr->optional_card_count);
      }
      if ( v12 <= stage_config_ptr->optional_card_count )
        v13 = 0;
      else
LABEL_20:
        v13 = 1;
      if ( v13 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
          "setNextRandCardByGm",
          3340);
        v14 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                (common::milog::MiLogStream *const)&val,
                (const char (*)[46])"[RogueDiary] invalid set card vec size, size:");
        __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::set<unsigned int>::size((const std::set<unsigned int> *const)(v2 + 48));
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v14,
          (const unsigned __int64 *)&__for_end);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        v7 = -1;
      }
      else
      {
        __for_range = (std::set<unsigned int> *)(v2 + 48);
        __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 48))._M_node;
        __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v2 + 48))._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v15 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
          v16 = v15;
          if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v15);
          }
          *(_DWORD *)(v2 + 32) = *v16;
          if ( !data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryBuffDataExcelConfig(
                  config_mgr,
                  *(_DWORD *)(v2 + 32)) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&val,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
              "setNextRandCardByGm",
              3347);
            v17 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                    (common::milog::MiLogStream *const)&val,
                    (const char (*)[64])"[RogueDiary] findRogueDiaryBuffDataExcelConfig failed, card_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 32));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
            v7 = -1;
            goto LABEL_32;
          }
          std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
        }
        std::allocator<unsigned int>::allocator(&__a);
        M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v2 + 48))._M_node;
        v19._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 48))._M_node;
        std::vector<unsigned int>::vector<std::_Rb_tree_const_iterator<unsigned int>,void>(
          &__x,
          v19,
          (std::_Rb_tree_const_iterator<unsigned int>)M_node,
          &__a);
        std::vector<unsigned int>::operator=(&this->optional_card_vec_, &__x);
        std::vector<unsigned int>::~vector(&__x);
        std::allocator<unsigned int>::~allocator(&__a);
        RogueDiaryRuntimeMgr::notifyRepairInfo(this, 0);
        v7 = 0;
      }
LABEL_32:
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 48));
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
        "setNextRandCardByGm",
        3333);
      v9 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
             (common::milog::MiLogStream *const)&val,
             (const char (*)[62])"[RogueDiary] findRogueDiaryStageExcelConfig failed, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->stage_id_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v7 = -1;
    }
  }
  result = v7;
  if ( v31 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3357: range 00000000143E7F34-00000000143E7F94
void __cdecl RogueDiaryRuntimeMgr::saveLastRoundCardInfo(RogueDiaryRuntimeMgr *const this)
{
  std::vector<unsigned int>::operator=(&this->resume_optional_card_vec_, &this->optional_card_vec_);
  std::vector<unsigned int>::operator=(&this->resume_chosen_card_vec_, &this->chosen_card_vec_);
  std::vector<unsigned int>::clear(&this->resume_select_card_vec_);
};

// Line 3364: range 00000000143E7F96-00000000143E837D
void __cdecl RogueDiaryRuntimeMgr::clearChosenCardVecAndReturnCoins(RogueDiaryRuntimeMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned int RogueDairyResourceCost; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::shared_ptr<Config> v15; // [rsp+10h] [rbp-E0h] BYREF
  std::vector<unsigned int> p_buy_card_vec; // [rsp+20h] [rbp-D0h] BYREF
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+60h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 17 repick_count:3373 48 4 15 total_cost:3374 64 8 14 is_repick:3369";
  *(_QWORD *)(v1 + 16) = RogueDiaryRuntimeMgr::clearChosenCardVecAndReturnCoins;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -202116352;
  if ( !std::vector<unsigned int>::empty(&this->chosen_card_vec_) )
  {
    *(_QWORD *)(v1 + 64) = this;
    M_current = std::vector<unsigned int>::end(&this->chosen_card_vec_)._M_current;
    v5._M_current = std::vector<unsigned int>::begin(&this->chosen_card_vec_)._M_current;
    *(_DWORD *)(v1 + 32) = std::count_if<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,RogueDiaryRuntimeMgr::clearChosenCardVecAndReturnCoins(void)::{lambda(__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>> &)#1}>(
                             v5,
                             (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                             *(RogueDiaryRuntimeMgr::clearChosenCardVecAndReturnCoins::<lambda(auto:31&)> *)(v1 + 64));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v15);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
    RogueDairyResourceCost = ActivityRogueDiaryExcelConfigMgr::getRogueDairyResourceCost(
                               &v6->design_config.txt_config_mgr.activity_rogue_diary_config_mgr,
                               ROGUE_DIARY_GET_BUYCARD);
    *(_DWORD *)(v1 + 48) = SAFE_MULTIPLY<unsigned int,unsigned int>(*(_DWORD *)(v1 + 32), RogueDairyResourceCost);
    std::shared_ptr<Config>::~shared_ptr(&v15);
    if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->coin_);
    }
    this->coin_ += *(_DWORD *)(v1 + 48);
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/roguelike/rogue_diary_runtime_mgr.cpp",
      "clearChosenCardVecAndReturnCoins",
      3377);
    v8 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v17,
           (const char (*)[38])"[RogueDiary] return repick card cost:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v1 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v9, (const char (*)[16])", repick_count:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v1 + 32));
    v12 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            v11,
            (const char (*)[26])", resume_chosen_card_vec:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int>(v12, &this->resume_chosen_card_vec_);
    v14 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v13, (const char (*)[19])", chosen_card_vec:");
    common::milog::MiLogStream::operator<<<unsigned int>(v14, &this->chosen_card_vec_);
    common::milog::MiLogStream::~MiLogStream(&v17);
    std::vector<unsigned int>::operator=(&this->resume_select_card_vec_, &this->chosen_card_vec_);
    std::vector<unsigned int>::clear(&this->chosen_card_vec_);
    memset(&p_buy_card_vec, 0, sizeof(p_buy_card_vec));
    std::vector<unsigned int>::vector(&p_buy_card_vec);
    RogueDiaryRuntimeMgr::logCoinChange(this, 4u, *(_DWORD *)(v1 + 48), &p_buy_card_vec);
    std::vector<unsigned int>::~vector(&p_buy_card_vec);
  }
  if ( v18 == (char *)v1 )
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

// Line 3369: range 00000000143ED82A-00000000143ED879
bool __cdecl RogueDiaryRuntimeMgr::clearChosenCardVecAndReturnCoins::_lambda_auto_31___::operator()_unsigned_int_(
        const RogueDiaryRuntimeMgr::clearChosenCardVecAndReturnCoins::<lambda(auto:31&)> *const __closure,
        unsigned int *p)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  return common::tools::MiscUtils::isContains<unsigned int>(&__closure->__this->resume_chosen_card_vec_, p);
};

// Line 3383: range 00000000143F246E-00000000143F2482
void __cdecl GLOBAL__sub_I_merge_single_player_tower_comp_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 3383: range 00000000143F1E62-00000000143F246D
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  const std::_V2::error_category *v2; // rax
  const std::_V2::error_category *v3; // rax
  const std::_V2::error_category *v4; // rax
  const std::_V2::error_category *v5; // rax
  const std::_V2::error_category *v6; // rax
  __int64 v7; // rsi
  const boost::system::error_category *system_category; // rax
  const boost::system::error_category *netdb_category; // rax
  const boost::system::error_category *addrinfo_category; // rax
  const boost::system::error_category *misc_category; // rax
  _BYTE *v12; // rcx
  _BYTE *v13; // rcx
  char v14; // dl
  __int64 v15; // rdx
  _BYTE *v16; // rcx
  _BYTE *v17; // rcx
  char v18; // dl
  __int64 v19; // rdx
  _BYTE *v20; // rcx
  _BYTE *v21; // rcx
  char v22; // dl
  __int64 v23; // rdx
  const char *v24; // rcx
  _BYTE *v25; // rcx
  _BYTE *v26; // rcx
  char v27; // dl
  __int64 v28; // rdx
  _BYTE *v29; // rcx
  _BYTE *v30; // rcx
  char v31; // dl
  __int64 v32; // rdx
  _BYTE *v33; // rcx
  _BYTE *v34; // rcx
  char v35; // dl
  __int64 v36; // rdx
  const char *v37; // rcx

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_single_player_tower_comp.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      v2 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_span_context_error, 1, v2);
      v3 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_span_context_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_carrier_error, 2, v3);
      v4 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_carrier_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::span_context_corrupted_error, 3, v4);
      v5 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::span_context_corrupted_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::key_not_found_error, 4, v5);
      v6 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::key_not_found_error);
      v7 = 5LL;
      std::error_code::error_code((std::error_code *const)&opentracing::v3::lookup_key_not_supported_error, 5, v6);
      boost::none_t::none_t((boost::none_t *const)&boost::none, (boost::none_t::init_tag)5);
      boost::optional_ns::in_place_init_t::in_place_init_t(
        (boost::optional_ns::in_place_init_t *const)&boost::optional_ns::in_place_init,
        (boost::optional_ns::in_place_init_t::init_tag)5);
      boost::optional_ns::in_place_init_if_t::in_place_init_if_t(
        (boost::optional_ns::in_place_init_if_t *const)&boost::optional_ns::in_place_init_if,
        (boost::optional_ns::in_place_init_if_t::init_tag)5);
      system_category = boost::asio::error::get_system_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::system_category >> 3) + 0x7FFF8000) )
        system_category = (const boost::system::error_category *)__asan_report_store8(
                                                                   &boost::asio::error::system_category,
                                                                   5LL);
      boost::asio::error::system_category = system_category;
      netdb_category = boost::asio::error::get_netdb_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::netdb_category >> 3) + 0x7FFF8000) )
        netdb_category = (const boost::system::error_category *)__asan_report_store8(
                                                                  &boost::asio::error::netdb_category,
                                                                  5LL);
      boost::asio::error::netdb_category = netdb_category;
      addrinfo_category = boost::asio::error::get_addrinfo_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::addrinfo_category >> 3) + 0x7FFF8000) )
        addrinfo_category = (const boost::system::error_category *)__asan_report_store8(
                                                                     &boost::asio::error::addrinfo_category,
                                                                     5LL);
      boost::asio::error::addrinfo_category = addrinfo_category;
      misc_category = boost::asio::error::get_misc_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::misc_category >> 3) + 0x7FFF8000) )
        misc_category = (const boost::system::error_category *)__asan_report_store8(
                                                                 &boost::asio::error::misc_category,
                                                                 5LL);
      boost::asio::error::misc_category = misc_category;
      v12 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
      }
      if ( !*v12 )
      {
        v13 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        v14 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v14 != 0;
        v15 = (v14 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= v14);
        if ( (_BYTE)v15 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
            v7,
            v15);
        *v13 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
        v7 = (__int64)&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
          &_dso_handle);
      }
      v16 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_);
      }
      if ( !*v16 )
      {
        v17 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        v18 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v18 != 0;
        v19 = (v18 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= v18);
        if ( (_BYTE)v19 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
            v7,
            v19);
        *v17 = 1;
        v7 = (__int64)&boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::posix_global_impl<boost::asio::system_context>::~posix_global_impl,
          &boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
          &_dso_handle);
      }
      v20 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
      }
      if ( !*v20 )
      {
        v21 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        v22 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v22 != 0;
        v23 = (v22 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= v22);
        if ( (_BYTE)v23 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero,
            v7,
            v23);
        *v21 = 1;
        v24 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero, v7);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v24;
      }
      v25 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
      }
      if ( !*v25 )
      {
        v26 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        v27 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v27 != 0;
        v28 = (v27 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= v27);
        if ( (_BYTE)v28 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
            v7,
            v28);
        *v26 = 1;
        boost::asio::detail::service_id<boost::asio::detail::scheduler>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
        v7 = (__int64)&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::scheduler>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
          &_dso_handle);
      }
      v29 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
      }
      if ( !*v29 )
      {
        v30 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        v31 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v31 != 0;
        v32 = (v31 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= v31);
        if ( (_BYTE)v32 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
            v7,
            v32);
        *v30 = 1;
        boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
        v7 = (__int64)&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
          &_dso_handle);
      }
      v33 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
      }
      if ( !*v33 )
      {
        v34 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
        v35 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v35 != 0;
        v36 = (v35 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= v35);
        if ( (_BYTE)v36 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero,
            v7,
            v36);
        *v34 = 1;
        v37 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero, v7);
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero = v37;
      }
    }
    __asan_after_dynamic_init();
  }
};
