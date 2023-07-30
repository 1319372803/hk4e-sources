// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/roguelike/roguelike_misc_mgr.cpp

// Line 33: range 0000000015950330-0000000015950489
void __cdecl RoguelikeEfffectCellParam::reset(RoguelikeEfffectCellParam *const this)
{
  __int64 v1; // rsi
  uint32_t *p_expected_max_trap_count; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx

  std::map<data::RogueCreateGadgetType,int>::clear(&this->gadget_delta_map);
  p_expected_max_trap_count = &this->expected_max_trap_count;
  if ( *(_BYTE *)(((unsigned __int64)p_expected_max_trap_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_expected_max_trap_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->expected_max_trap_count, v1, p_expected_max_trap_count);
  }
  this->expected_max_trap_count = -1;
  v3 = (((_BYTE)this + 52) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->expected_min_store_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->expected_min_store_count >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->expected_min_store_count, v3, v4);
  this->expected_min_store_count = 0;
  if ( *(char *)(((unsigned __int64)&this->is_spring_next_to_boss >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_spring_next_to_boss, v3, &this->is_spring_next_to_boss);
  this->is_spring_next_to_boss = 0;
  v5 = ((_BYTE)this + 57) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_ban_guardian >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_ban_guardian >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_ban_guardian, v5, v6);
  this->is_ban_guardian = 0;
  v7 = ((_BYTE)this + 58) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->is_ban_spring >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_ban_spring >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_ban_spring, v7, v8);
  this->is_ban_spring = 0;
};

// Line 42: range 000000001595048A-0000000015950AAE
void __cdecl RoguelikeMiscMgr::RoguelikeMiscMgr(
        RoguelikeMiscMgr *const this,
        Player *player,
        RoguelikeDungeonActivity *activity)
{
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

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, player);
  this->player_ = player;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->activity_, player);
  this->activity_ = activity;
  if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_init_, player, &this->is_init_);
  this->is_init_ = 0;
  v3 = ((_BYTE)this + 17) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_in_roguelike_dungeon_, v3, v4);
  this->is_in_roguelike_dungeon_ = 0;
  v5 = ((_BYTE)this + 18) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_post_enter_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_post_enter_roguelike_dungeon_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_post_enter_roguelike_dungeon_, v5, v6);
  this->is_post_enter_roguelike_dungeon_ = 0;
  v7 = (((_BYTE)this + 20) & 7u) + 3;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->trigger_curse_sub_weight_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_curse_sub_weight_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->trigger_curse_sub_weight_, v7, v8);
  this->trigger_curse_sub_weight_ = 0;
  std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::unordered_map(&this->card_depot_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->card_count_map_);
  std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>>::unordered_map(&this->depot_card_type_weight_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->curse_count_map_);
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::unordered_map(&this->curse_pool_weight_map_);
  std::unordered_map<std::string,float>::unordered_map(&this->team_sgv_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->bonus_resource_prop_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bonus_resource_prop_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->bonus_resource_prop_, v7, &this->bonus_resource_prop_);
  }
  this->bonus_resource_prop_ = 0.0;
  v9 = ((_BYTE)this + 108) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->is_mist_clear_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->is_mist_clear_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_mist_clear_, v9, v10);
  this->is_mist_clear_ = 0;
  RoguelikeEfffectCellParam::RoguelikeEfffectCellParam(&this->cell_param_);
  if ( *(_BYTE *)(((unsigned __int64)&this->rune_free_prob_weight_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rune_free_prob_weight_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rune_free_prob_weight_, v9, &this->rune_free_prob_weight_);
  }
  this->rune_free_prob_weight_ = 0;
  v11 = (((_BYTE)this - 76) & 7u) + 3;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->free_refresh_card_prob_weight_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->free_refresh_card_prob_weight_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store4(&this->free_refresh_card_prob_weight_, v11, v12);
  this->free_refresh_card_prob_weight_ = 0;
  std::vector<unsigned int>::vector(&this->gm_wish_card_vec_);
  std::unordered_map<data::RoguelikeCardType,unsigned int>::unordered_map(&this->card_add_weight_map_);
  std::unordered_map<data::RoguelikeCardType,unsigned int>::unordered_map(&this->refresh_cell_card_add_weight_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_card_cost_sub_prob_weight_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_card_cost_sub_prob_weight_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->refresh_card_cost_sub_prob_weight_, v11, &this->refresh_card_cost_sub_prob_weight_);
  }
  this->refresh_card_cost_sub_prob_weight_ = 0;
  std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::vector(&this->chosen_rune_tuple_vec_);
  std::map<unsigned int,unsigned int>::map(&this->select_card_map_);
  std::vector<unsigned int>::vector(&this->optional_card_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->optional_card_depot_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->optional_card_depot_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->optional_card_depot_id_, v11, &this->optional_card_depot_id_);
  }
  this->optional_card_depot_id_ = 0;
  v13 = ((_BYTE)this - 84) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->is_optional_card_can_refresh_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&this->is_optional_card_can_refresh_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_optional_card_can_refresh_, v13, v14);
  this->is_optional_card_can_refresh_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->refresh_count_, v13, &this->refresh_count_);
  }
  this->refresh_count_ = 0;
  v15 = (((_BYTE)this - 76) & 7u) + 3;
  v16 = (*(_BYTE *)(((unsigned __int64)&this->card_cell_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_cell_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_store4(&this->card_cell_id_, v15, v16);
  this->card_cell_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_dungeon_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_dungeon_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_dungeon_level_, v15, &this->cur_dungeon_level_);
  }
  this->cur_dungeon_level_ = 0;
  std::map<unsigned int,unsigned int>::map(&this->trigger_curse_map_);
  std::unordered_map<std::string,float>::unordered_map(&this->dynamic_team_sgv_map_);
  std::unordered_set<unsigned long>::unordered_set(&this->noheal_guid_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_rand_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_rand_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_rand_count_, v15, &this->cur_rand_count_);
  }
  this->cur_rand_count_ = 0;
  std::unordered_set<unsigned int>::unordered_set(&this->viewed_card_set_);
  std::unordered_set<unsigned int>::unordered_set(&this->viewed_curse_set_);
  std::unordered_set<unsigned long>::unordered_set(&this->add_talent_guid_set_);
  std::map<unsigned int,unsigned int>::map(&this->chosen_card_type_count_map_);
  std::unordered_set<unsigned int>::unordered_set(&this->gacha_cell_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->use_refresh_free_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->use_refresh_free_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->use_refresh_free_count_, v15, &this->use_refresh_free_count_);
  }
  this->use_refresh_free_count_ = 0;
};

// Line 46: range 0000000015950AB0-0000000015951529
int32_t __cdecl RoguelikeMiscMgr::fromScheduleBin(RoguelikeMiscMgr *const this, const proto::ActivityScheduleBin *bin)
{
  __m128i v2; // xmm0
  __int64 v3; // rdx
  char v4; // al
  unsigned int *v5; // r8
  unsigned int *v6; // r9
  __int128 v7; // rax
  unsigned int *v8; // rcx
  unsigned int *v9; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v10; // rax
  common::milog::MiLogStream *v11; // rbx
  const google::protobuf::RepeatedField<unsigned int> *v13; // rax
  std::vector<unsigned int> *p_optional_card_vec; // rsi
  __int64 v15; // rdx
  char v16; // al
  bool can_refresh; // cl
  char v18; // dl
  __int64 v19; // rdx
  __int64 refreshed; // rdx
  char v21; // al
  uint32_t v22; // ecx
  char v23; // dl
  __int64 v24; // rdx
  unsigned int *v25; // rcx
  unsigned int *v26; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v27; // rax
  common::milog::MiLogStream *v28; // rbx
  const std::string *v29; // rax
  float *v30; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,float>,false,true>,bool> v31; // rax
  common::milog::MiLogStream *v32; // rbx
  const std::string *v33; // rax
  const google::protobuf::RepeatedField<long unsigned int> *v34; // rsi
  __int64 v35; // rdx
  char v36; // al
  const google::protobuf::RepeatedField<unsigned int> *v37; // rax
  const google::protobuf::RepeatedField<unsigned int> *v38; // rax
  const google::protobuf::RepeatedField<long unsigned int> *v39; // rax
  const unsigned int *v40; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v41; // rax
  common::milog::MiLogStream *v42; // rax
  const google::protobuf::RepeatedField<unsigned int> *v43; // rsi
  __int64 v44; // rdx
  char v45; // al
  unsigned int v46; // [rsp+14h] [rbp-FCh] BYREF
  unsigned int v47; // [rsp+18h] [rbp-F8h] BYREF
  unsigned int __args_0; // [rsp+1Ch] [rbp-F4h] BYREF
  google::protobuf::RepeatedPtrField<proto::RoguelikeDungeonRuneBin>::const_iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  google::protobuf::RepeatedPtrField<proto::RoguelikeDungeonRuneBin>::const_iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  const proto::RoguelikeDungeonScheduleBin *roguelike_dungeon_bin; // [rsp+30h] [rbp-E0h]
  const proto::RoguelikeMiscBin *misc_bin; // [rsp+38h] [rbp-D8h]
  const google::protobuf::RepeatedPtrField<proto::RoguelikeDungeonRuneBin> *__for_range; // [rsp+40h] [rbp-D0h]
  const google::protobuf::RepeatedPtrField<proto::RoguelikeDungeonCardBin> *__for_range_0; // [rsp+48h] [rbp-C8h]
  const google::protobuf::RepeatedPtrField<proto::RoguelikeDungeonCurseBin> *__for_range_1; // [rsp+50h] [rbp-C0h]
  const google::protobuf::RepeatedPtrField<proto::RoguelikeDungeonDynamicSGVBin> *__for_range_2; // [rsp+58h] [rbp-B8h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range_3; // [rsp+60h] [rbp-B0h]
  const unsigned int *p_type; // [rsp+68h] [rbp-A8h]
  const proto::RoguelikeDungeonDynamicSGVBin *sgv_bin; // [rsp+70h] [rbp-A0h]
  const proto::RoguelikeDungeonCurseBin *curse_bin; // [rsp+78h] [rbp-98h]
  const proto::RoguelikeDungeonCardBin *card_bin; // [rsp+80h] [rbp-90h]
  const proto::RoguelikeDungeonRuneBin *rune_bin; // [rsp+88h] [rbp-88h]
  std::tuple<unsigned int,unsigned int,unsigned int> v63; // [rsp+94h] [rbp-7Ch] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin_0; // [rsp+A0h] [rbp-70h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+C0h] [rbp-50h] BYREF
  common::milog::MiLogStream v66; // [rsp+E0h] [rbp-30h] BYREF

  roguelike_dungeon_bin = proto::ActivityScheduleBin::roguelike_dungeon_bin(bin);
  misc_bin = proto::RoguelikeDungeonScheduleBin::misc_bin(roguelike_dungeon_bin);
  v3 = proto::RoguelikeMiscBin::cur_dungeon_level(misc_bin);
  v4 = *(_BYTE *)(((unsigned __int64)&this->cur_dungeon_level_ >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(bin) = v4 != 0;
    __asan_report_store4(&this->cur_dungeon_level_, bin, v3);
  }
  this->cur_dungeon_level_ = v3;
  __for_range = proto::RoguelikeMiscBin::use_rune_list(misc_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::RoguelikeDungeonRuneBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::RoguelikeDungeonRuneBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::RoguelikeDungeonRuneBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    rune_bin = google::protobuf::internal::RepeatedPtrIterator<proto::RoguelikeDungeonRuneBin const>::operator*(&__for_begin);
    __args_0 = proto::RoguelikeDungeonRuneBin::max_count(rune_bin);
    v47 = proto::RoguelikeDungeonRuneBin::available_count(rune_bin);
    v46 = proto::RoguelikeDungeonRuneBin::rune_id(rune_bin);
    *(std::tuple<unsigned int,unsigned int,unsigned int> *)&v7 = std::make_tuple<unsigned int,unsigned int,unsigned int>(
                                                                   (unsigned int *)&v63.std::_Tuple_impl<1,unsigned int,unsigned int>,
                                                                   &v46,
                                                                   &v47,
                                                                   &__args_0,
                                                                   v5,
                                                                   v6);
    std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::emplace_back<std::tuple<unsigned int,unsigned int,unsigned int>>(
      &this->chosen_rune_tuple_vec_,
      &v63,
      *((std::tuple<unsigned int,unsigned int,unsigned int> **)&v7 + 1));
    google::protobuf::internal::RepeatedPtrIterator<proto::RoguelikeDungeonRuneBin const>::operator++(&__for_begin);
  }
  __for_range_0 = proto::RoguelikeMiscBin::selected_card_list(misc_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::RoguelikeDungeonCardBin>::begin(__for_range_0).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::RoguelikeDungeonCardBin>::end(__for_range_0).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::RoguelikeDungeonCardBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::RoguelikeDungeonCardBin> *const)&__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::RoguelikeDungeonCardBin>::iterator *)&__for_end) )
  {
    card_bin = google::protobuf::internal::RepeatedPtrIterator<proto::RoguelikeDungeonCardBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::RoguelikeDungeonCardBin> *const)&__for_begin);
    __args_0 = proto::RoguelikeDungeonCardBin::count(card_bin);
    v47 = proto::RoguelikeDungeonCardBin::card_id(card_bin);
    v10 = std::map<unsigned int,unsigned int>::emplace<unsigned int,unsigned int>(
            &this->select_card_map_,
            &v47,
            &__args_0,
            v8,
            v9);
    if ( !v10.second )
    {
      common::milog::MiLogStream::create(
        &v66,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "fromScheduleBin",
        58);
      v11 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v66,
              (const char (*)[31])"[ROGUELIKE] duplicate card_id:");
      __args_0 = proto::RoguelikeDungeonCardBin::card_id(card_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &__args_0);
      common::milog::MiLogStream::~MiLogStream(&v66);
      return -1;
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::RoguelikeDungeonCardBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::RoguelikeDungeonCardBin> *const)&__for_begin);
  }
  v13 = proto::RoguelikeMiscBin::optional_card_list(misc_bin);
  p_optional_card_vec = &this->optional_card_vec_;
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v13, &this->optional_card_vec_);
  v15 = proto::RoguelikeMiscBin::optional_card_depot_id(misc_bin);
  v16 = *(_BYTE *)(((unsigned __int64)&this->optional_card_depot_id_ >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(p_optional_card_vec) = v16 != 0;
    __asan_report_store4(&this->optional_card_depot_id_, p_optional_card_vec, v15);
  }
  this->optional_card_depot_id_ = v15;
  can_refresh = proto::RoguelikeMiscBin::is_optional_card_can_refresh(misc_bin);
  v18 = *(_BYTE *)(((unsigned __int64)&this->is_optional_card_can_refresh_ >> 3) + 0x7FFF8000);
  LOBYTE(p_optional_card_vec) = v18 != 0;
  v19 = (v18 != 0) & (unsigned __int8)((((unsigned __int8)this - 84) & 7) >= v18);
  if ( (_BYTE)v19 )
    __asan_report_store1(&this->is_optional_card_can_refresh_, p_optional_card_vec, v19);
  this->is_optional_card_can_refresh_ = can_refresh;
  refreshed = proto::RoguelikeMiscBin::refresh_count(misc_bin);
  v21 = *(_BYTE *)(((unsigned __int64)&this->refresh_count_ >> 3) + 0x7FFF8000);
  if ( v21 != 0 && v21 <= 3 )
  {
    LOBYTE(p_optional_card_vec) = v21 != 0;
    __asan_report_store4(&this->refresh_count_, p_optional_card_vec, refreshed);
  }
  this->refresh_count_ = refreshed;
  v22 = proto::RoguelikeMiscBin::card_cell_id(misc_bin);
  v23 = *(_BYTE *)(((unsigned __int64)&this->card_cell_id_ >> 3) + 0x7FFF8000);
  LOBYTE(p_optional_card_vec) = v23 != 0;
  v24 = (v23 != 0) & (unsigned __int8)((char)((((_BYTE)this - 76) & 7) + 3) >= v23);
  if ( (_BYTE)v24 )
    __asan_report_store4(&this->card_cell_id_, p_optional_card_vec, v24);
  this->card_cell_id_ = v22;
  __for_range_1 = proto::RoguelikeMiscBin::curse_list(misc_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::RoguelikeDungeonCurseBin>::begin(__for_range_1).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::RoguelikeDungeonCurseBin>::end(__for_range_1).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::RoguelikeDungeonCurseBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::RoguelikeDungeonCurseBin> *const)&__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::RoguelikeDungeonCurseBin>::iterator *)&__for_end) )
  {
    curse_bin = google::protobuf::internal::RepeatedPtrIterator<proto::RoguelikeDungeonCurseBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::RoguelikeDungeonCurseBin> *const)&__for_begin);
    __args_0 = proto::RoguelikeDungeonCurseBin::count(curse_bin);
    v47 = proto::RoguelikeDungeonCurseBin::curse_id(curse_bin);
    v27 = std::map<unsigned int,unsigned int>::emplace<unsigned int,unsigned int>(
            &this->trigger_curse_map_,
            &v47,
            &__args_0,
            v25,
            v26);
    if ( !v27.second )
    {
      common::milog::MiLogStream::create(
        &v66,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "fromScheduleBin",
        71);
      v28 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v66,
              (const char (*)[32])"[ROGUELIKE] duplicate curse_id:");
      __args_0 = proto::RoguelikeDungeonCurseBin::curse_id(curse_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &__args_0);
      common::milog::MiLogStream::~MiLogStream(&v66);
      return -1;
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::RoguelikeDungeonCurseBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::RoguelikeDungeonCurseBin> *const)&__for_begin);
  }
  __for_range_2 = proto::RoguelikeMiscBin::dynamic_sgv_list(misc_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::RoguelikeDungeonDynamicSGVBin>::begin(__for_range_2).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::RoguelikeDungeonDynamicSGVBin>::end(__for_range_2).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::RoguelikeDungeonDynamicSGVBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::RoguelikeDungeonDynamicSGVBin> *const)&__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::RoguelikeDungeonDynamicSGVBin>::iterator *)&__for_end) )
  {
    sgv_bin = google::protobuf::internal::RepeatedPtrIterator<proto::RoguelikeDungeonDynamicSGVBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::RoguelikeDungeonDynamicSGVBin> *const)&__for_begin);
    *(float *)v2.m128i_i32 = proto::RoguelikeDungeonDynamicSGVBin::value(sgv_bin);
    __args_0 = _mm_cvtsi128_si32(v2);
    v29 = proto::RoguelikeDungeonDynamicSGVBin::key[abi:cxx11](sgv_bin);
    v31 = std::unordered_map<std::string,float>::emplace<std::string const&,float>(
            &this->dynamic_team_sgv_map_,
            v29,
            (float *)&__args_0,
            v29,
            v30);
    if ( !v31.second )
    {
      common::milog::MiLogStream::create(
        &v66,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "fromScheduleBin",
        79);
      v32 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v66,
              (const char (*)[31])"[ROGUELIKE] duplicate sgv_key:");
      v33 = proto::RoguelikeDungeonDynamicSGVBin::key[abi:cxx11](sgv_bin);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v32, v33);
      common::milog::MiLogStream::~MiLogStream(&v66);
      return -1;
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::RoguelikeDungeonDynamicSGVBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::RoguelikeDungeonDynamicSGVBin> *const)&__for_begin);
  }
  v34 = proto::RoguelikeMiscBin::noheal_guid_list(misc_bin);
  common::tools::MiscUtils::setFromRepeated<std::unordered_set<unsigned long>,unsigned long>(
    &this->noheal_guid_set_,
    v34);
  v35 = proto::RoguelikeMiscBin::cur_rand_count(misc_bin);
  v36 = *(_BYTE *)(((unsigned __int64)&this->cur_rand_count_ >> 3) + 0x7FFF8000);
  if ( v36 != 0 && v36 <= 3 )
  {
    LOBYTE(v34) = v36 != 0;
    __asan_report_store4(&this->cur_rand_count_, v34, v35);
  }
  this->cur_rand_count_ = v35;
  v37 = proto::RoguelikeMiscBin::viewed_card_list(misc_bin);
  common::tools::MiscUtils::setFromRepeated<std::unordered_set<unsigned int>,unsigned int>(&this->viewed_card_set_, v37);
  v38 = proto::RoguelikeMiscBin::viewed_curse_list(misc_bin);
  common::tools::MiscUtils::setFromRepeated<std::unordered_set<unsigned int>,unsigned int>(
    &this->viewed_curse_set_,
    v38);
  v39 = proto::RoguelikeMiscBin::add_talent_guid_list(misc_bin);
  common::tools::MiscUtils::setFromRepeated<std::unordered_set<unsigned long>,unsigned long>(
    &this->add_talent_guid_set_,
    v39);
  __for_range_3 = proto::RoguelikeMiscBin::chosen_card_type_count_map(misc_bin);
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin_0, __for_range_3);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end_0, __for_range_3);
  while ( google::protobuf::operator!=(&__for_begin_0, &__for_end_0) )
  {
    p_type = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin_0);
    v41 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
            &this->chosen_card_type_count_map_,
            p_type,
            p_type + 1,
            (const unsigned int *)&this->chosen_card_type_count_map_,
            v40);
    if ( !v41.second )
    {
      common::milog::MiLogStream::create(
        &v66,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "fromScheduleBin",
        92);
      v42 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v66,
              (const char (*)[33])"[ROGUELIKE] duplicate card_type:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, p_type);
      common::milog::MiLogStream::~MiLogStream(&v66);
      return -1;
    }
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin_0);
  }
  v43 = proto::RoguelikeMiscBin::gacha_cell_list(misc_bin);
  common::tools::MiscUtils::setFromRepeated<std::unordered_set<unsigned int>,unsigned int>(&this->gacha_cell_set_, v43);
  v44 = proto::RoguelikeMiscBin::use_refresh_free_count(misc_bin);
  v45 = *(_BYTE *)(((unsigned __int64)&this->use_refresh_free_count_ >> 3) + 0x7FFF8000);
  if ( v45 != 0 && v45 <= 3 )
  {
    LOBYTE(v43) = v45 != 0;
    __asan_report_store4(&this->use_refresh_free_count_, v43, v44);
  }
  this->use_refresh_free_count_ = v44;
  return 0;
};

// Line 102: range 000000001595152A-0000000015951FC0
int32_t __cdecl RoguelikeMiscMgr::toScheduleBin(const RoguelikeMiscMgr *const this, proto::ActivityScheduleBin *bin)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax
  google::protobuf::RepeatedField<long unsigned int> *v3; // rax
  google::protobuf::RepeatedField<unsigned int> *v4; // rax
  google::protobuf::RepeatedField<unsigned int> *v5; // rax
  google::protobuf::RepeatedField<long unsigned int> *v6; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v7; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v8; // ebx
  google::protobuf::Map<unsigned int,unsigned int> *v9; // rax
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v10; // rsi
  unsigned int *v11; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v12; // rdx
  char v13; // cl
  google::protobuf::RepeatedField<unsigned int> *v14; // rax
  std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::const_iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::const_iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  proto::RoguelikeDungeonScheduleBin *roguelike_dungeon_bin; // [rsp+28h] [rbp-E8h]
  proto::RoguelikeMiscBin *misc_bin; // [rsp+30h] [rbp-E0h]
  const std::vector<std::tuple<unsigned int,unsigned int,unsigned int>> *__for_range; // [rsp+38h] [rbp-D8h]
  const std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+40h] [rbp-D0h]
  const std::map<unsigned int,unsigned int> *__for_range_1; // [rsp+48h] [rbp-C8h]
  const std::unordered_map<std::string,float> *__for_range_2; // [rsp+50h] [rbp-C0h]
  const std::map<unsigned int,unsigned int> *__for_range_3; // [rsp+58h] [rbp-B8h]
  const std::pair<unsigned int const,unsigned int> *v25; // [rsp+60h] [rbp-B0h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *type; // [rsp+68h] [rbp-A8h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count_1; // [rsp+70h] [rbp-A0h]
  const std::pair<const std::string,float> *v28; // [rsp+78h] [rbp-98h]
  std::tuple_element<0,const std::pair<const std::string,float> >::type *key; // [rsp+80h] [rbp-90h]
  std::tuple_element<1,const std::pair<const std::string,float> >::type *value; // [rsp+88h] [rbp-88h]
  proto::RoguelikeDungeonDynamicSGVBin *sgv_bin; // [rsp+90h] [rbp-80h]
  const std::pair<unsigned int const,unsigned int> *v32; // [rsp+98h] [rbp-78h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *curse_id; // [rsp+A0h] [rbp-70h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count_0; // [rsp+A8h] [rbp-68h]
  proto::RoguelikeDungeonCurseBin *curse_bin; // [rsp+B0h] [rbp-60h]
  const std::pair<unsigned int const,unsigned int> *v36; // [rsp+B8h] [rbp-58h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *card_id; // [rsp+C0h] [rbp-50h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+C8h] [rbp-48h]
  proto::RoguelikeDungeonCardBin *card_bin; // [rsp+D0h] [rbp-40h]
  const std::tuple<unsigned int,unsigned int,unsigned int> *v40; // [rsp+D8h] [rbp-38h]
  std::tuple_element<0,const std::tuple<unsigned int,unsigned int,unsigned int> >::type *rune_id; // [rsp+E0h] [rbp-30h]
  std::tuple_element<1,const std::tuple<unsigned int,unsigned int,unsigned int> >::type *left_count; // [rsp+E8h] [rbp-28h]
  std::tuple_element<2,const std::tuple<unsigned int,unsigned int,unsigned int> >::type *max_count; // [rsp+F0h] [rbp-20h]
  proto::RoguelikeDungeonRuneBin *rune_bin; // [rsp+F8h] [rbp-18h]

  roguelike_dungeon_bin = proto::ActivityScheduleBin::mutable_roguelike_dungeon_bin(bin);
  misc_bin = proto::RoguelikeDungeonScheduleBin::mutable_misc_bin(roguelike_dungeon_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_dungeon_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_dungeon_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_dungeon_level_);
  }
  proto::RoguelikeMiscBin::set_cur_dungeon_level(misc_bin, this->cur_dungeon_level_);
  __for_range = &this->chosen_rune_tuple_vec_;
  __for_begin._M_current = std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::begin(&this->chosen_rune_tuple_vec_)._M_current;
  __for_end._M_current = std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::end(&this->chosen_rune_tuple_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::tuple<unsigned int,unsigned int,unsigned int> const*,std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>>(
            &__for_begin,
            &__for_end) )
  {
    v40 = __gnu_cxx::__normal_iterator<std::tuple<unsigned int,unsigned int,unsigned int> const*,std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>>::operator*(&__for_begin);
    rune_id = (std::tuple_element<0,const std::tuple<unsigned int,unsigned int,unsigned int> >::type *)std::get<0ul,unsigned int,unsigned int,unsigned int>(v40);
    left_count = (std::tuple_element<1,const std::tuple<unsigned int,unsigned int,unsigned int> >::type *)std::get<1ul,unsigned int,unsigned int,unsigned int>(v40);
    max_count = (std::tuple_element<2,const std::tuple<unsigned int,unsigned int,unsigned int> >::type *)std::get<2ul,unsigned int,unsigned int,unsigned int>(v40);
    rune_bin = proto::RoguelikeMiscBin::add_use_rune_list(misc_bin);
    if ( *(_BYTE *)(((unsigned __int64)rune_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)rune_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rune_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(rune_id);
    }
    proto::RoguelikeDungeonRuneBin::set_rune_id(rune_bin, *rune_id);
    if ( *(_BYTE *)(((unsigned __int64)left_count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)left_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)left_count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(left_count);
    }
    proto::RoguelikeDungeonRuneBin::set_available_count(rune_bin, *left_count);
    if ( *(_BYTE *)(((unsigned __int64)max_count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)max_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)max_count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(max_count);
    }
    proto::RoguelikeDungeonRuneBin::set_max_count(rune_bin, *max_count);
    __gnu_cxx::__normal_iterator<std::tuple<unsigned int,unsigned int,unsigned int> const*,std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->select_card_map_;
  __for_begin._M_current = (const std::tuple<unsigned int,unsigned int,unsigned int> *)std::map<unsigned int,unsigned int>::begin(&this->select_card_map_)._M_node;
  __for_end._M_current = (const std::tuple<unsigned int,unsigned int,unsigned int> *)std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
  {
    v36 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
    card_id = std::get<0ul,unsigned int const,unsigned int>(v36);
    count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v36);
    card_bin = proto::RoguelikeMiscBin::add_selected_card_list(misc_bin);
    if ( *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)card_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(card_id);
    }
    proto::RoguelikeDungeonCardBin::set_card_id(card_bin, *card_id);
    if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(count);
    }
    proto::RoguelikeDungeonCardBin::set_count(card_bin, *count);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
  }
  v2 = proto::RoguelikeMiscBin::mutable_optional_card_list(misc_bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->optional_card_vec_, v2);
  if ( *(_BYTE *)(((unsigned __int64)&this->optional_card_depot_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->optional_card_depot_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->optional_card_depot_id_);
  }
  proto::RoguelikeMiscBin::set_optional_card_depot_id(misc_bin, this->optional_card_depot_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_optional_card_can_refresh_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_optional_card_can_refresh_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_optional_card_can_refresh_);
  }
  proto::RoguelikeMiscBin::set_is_optional_card_can_refresh(misc_bin, this->is_optional_card_can_refresh_);
  if ( *(_BYTE *)(((unsigned __int64)&this->card_cell_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_cell_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->card_cell_id_);
  }
  proto::RoguelikeMiscBin::set_card_cell_id(misc_bin, this->card_cell_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->refresh_count_);
  }
  proto::RoguelikeMiscBin::set_refresh_count(misc_bin, this->refresh_count_);
  __for_range_1 = &this->trigger_curse_map_;
  __for_begin._M_current = (const std::tuple<unsigned int,unsigned int,unsigned int> *)std::map<unsigned int,unsigned int>::begin(&this->trigger_curse_map_)._M_node;
  __for_end._M_current = (const std::tuple<unsigned int,unsigned int,unsigned int> *)std::map<unsigned int,unsigned int>::end(__for_range_1)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
  {
    v32 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
    curse_id = std::get<0ul,unsigned int const,unsigned int>(v32);
    count_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v32);
    curse_bin = proto::RoguelikeMiscBin::add_curse_list(misc_bin);
    if ( *(_BYTE *)(((unsigned __int64)curse_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)curse_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)curse_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(curse_id);
    }
    proto::RoguelikeDungeonCurseBin::set_curse_id(curse_bin, *curse_id);
    if ( *(_BYTE *)(((unsigned __int64)count_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)count_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(count_0);
    }
    proto::RoguelikeDungeonCurseBin::set_count(curse_bin, *count_0);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
  }
  __for_range_2 = &this->dynamic_team_sgv_map_;
  __for_begin._M_current = (const std::tuple<unsigned int,unsigned int,unsigned int> *)std::unordered_map<std::string,float>::begin(&this->dynamic_team_sgv_map_)._M_cur;
  __for_end._M_current = (const std::tuple<unsigned int,unsigned int,unsigned int> *)std::unordered_map<std::string,float>::end(__for_range_2)._M_cur;
  while ( std::__detail::operator!=<std::pair<std::string const,float>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,float>,true> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,float>,true> *)&__for_end) )
  {
    v28 = std::__detail::_Node_const_iterator<std::pair<std::string const,float>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::string,float>,false,true> *const)&__for_begin);
    key = std::get<0ul,std::string const,float>(v28);
    value = (std::tuple_element<1,const std::pair<const std::string,float> >::type *)std::get<1ul,std::string const,float>(v28);
    sgv_bin = proto::RoguelikeMiscBin::add_dynamic_sgv_list(misc_bin);
    proto::RoguelikeDungeonDynamicSGVBin::set_key(sgv_bin, key);
    if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(value);
    }
    proto::RoguelikeDungeonDynamicSGVBin::set_value(sgv_bin, *value);
    std::__detail::_Node_const_iterator<std::pair<std::string const,float>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::string,float>,false,true> *const)&__for_begin);
  }
  v3 = proto::RoguelikeMiscBin::mutable_noheal_guid_list(misc_bin);
  common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned long>,unsigned long>(&this->noheal_guid_set_, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_rand_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_rand_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_rand_count_);
  }
  proto::RoguelikeMiscBin::set_cur_rand_count(misc_bin, this->cur_rand_count_);
  v4 = proto::RoguelikeMiscBin::mutable_viewed_card_list(misc_bin);
  common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(&this->viewed_card_set_, v4);
  v5 = proto::RoguelikeMiscBin::mutable_viewed_curse_list(misc_bin);
  common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(&this->viewed_curse_set_, v5);
  v6 = proto::RoguelikeMiscBin::mutable_add_talent_guid_list(misc_bin);
  common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned long>,unsigned long>(
    &this->add_talent_guid_set_,
    v6);
  __for_range_3 = &this->chosen_card_type_count_map_;
  __for_begin._M_current = (const std::tuple<unsigned int,unsigned int,unsigned int> *)std::map<unsigned int,unsigned int>::begin(&this->chosen_card_type_count_map_)._M_node;
  __for_end._M_current = (const std::tuple<unsigned int,unsigned int,unsigned int> *)std::map<unsigned int,unsigned int>::end(__for_range_3)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
  {
    v25 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
    type = std::get<0ul,unsigned int const,unsigned int>(v25);
    v7 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v25);
    count_1 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    v8 = *count_1;
    v9 = proto::RoguelikeMiscBin::mutable_chosen_card_type_count_map(misc_bin);
    v10 = type;
    v11 = google::protobuf::Map<unsigned int,unsigned int>::operator[](v9, type);
    v12 = v11;
    v13 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
    if ( v13 != 0 && (char)(((unsigned __int8)v11 & 7) + 3) >= v13 )
    {
      LOBYTE(v10) = v13 != 0;
      __asan_report_store4(v11, v10, v11);
    }
    *v12 = v8;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
  }
  v14 = proto::RoguelikeMiscBin::mutable_gacha_cell_list(misc_bin);
  common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(&this->gacha_cell_set_, v14);
  if ( *(_BYTE *)(((unsigned __int64)&this->use_refresh_free_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->use_refresh_free_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->use_refresh_free_count_);
  }
  proto::RoguelikeMiscBin::set_use_refresh_free_count(misc_bin, this->use_refresh_free_count_);
  return 0;
};

// Line 152: range 0000000015951FC2-000000001595225A
int32_t __cdecl RoguelikeMiscMgr::toClient(RoguelikeMiscMgr *const this, proto::EnterRoguelikeDungeonNotify *notify)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  google::protobuf::RepeatedPtrField<proto::RoguelikeRuneRecord> *v5; // rdx
  uint32_t v6; // ecx
  common::milog::MiLogStream *v7; // r13
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-84h] BYREF
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
  *(_QWORD *)(v2 + 8) = "1 32 8 13 cost_pair:156";
  *(_QWORD *)(v2 + 16) = RoguelikeMiscMgr::toClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  v5 = proto::EnterRoguelikeDungeonNotify::mutable_rune_record_list(notify);
  RoguelikeMiscMgr::roguelikeRuneRecordToClient(this, v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_mist_clear_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 108) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_mist_clear_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_mist_clear_);
  }
  proto::EnterRoguelikeDungeonNotify::set_is_mist_clear(notify, this->is_mist_clear_);
  if ( *(_BYTE *)(((unsigned __int64)&this->bonus_resource_prop_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bonus_resource_prop_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->bonus_resource_prop_);
  }
  proto::EnterRoguelikeDungeonNotify::set_bonus_resource_prop(notify, this->bonus_resource_prop_);
  *(_QWORD *)(v2 + 32) = 0LL;
  v6 = proto::EnterRoguelikeDungeonNotify::dungeon_id(notify);
  if ( RoguelikeMiscMgr::getDungeonCurRefreshCost(this, v6, (std::pair<unsigned int,unsigned int> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "toClient",
      159);
    v7 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           &v10,
           (const char (*)[57])"[ROGUELIKE] getDungeonCurRefreshCost failed, dungeon_id:");
    val = proto::EnterRoguelikeDungeonNotify::dungeon_id(notify);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = -1;
  }
  else
  {
    proto::EnterRoguelikeDungeonNotify::set_refresh_cost_item_id(notify, *(_DWORD *)(v2 + 32));
    proto::EnterRoguelikeDungeonNotify::set_refresh_cost_item_count(notify, *(_DWORD *)(v2 + 36));
    result = 0;
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

// Line 168: range 000000001595225C-00000000159523F9
void __cdecl RoguelikeMiscMgr::roguelikeRuneRecordToClient(
        RoguelikeMiscMgr *const this,
        google::protobuf::RepeatedPtrField<proto::RoguelikeRuneRecord> *rune_list)
{
  std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  std::vector<std::tuple<unsigned int,unsigned int,unsigned int>> *__for_range; // [rsp+20h] [rbp-30h]
  const std::tuple<unsigned int,unsigned int,unsigned int> *v5; // [rsp+28h] [rbp-28h]
  std::tuple_element<0,const std::tuple<unsigned int,unsigned int,unsigned int> >::type *rune_id; // [rsp+30h] [rbp-20h]
  std::tuple_element<1,const std::tuple<unsigned int,unsigned int,unsigned int> >::type *left_count; // [rsp+38h] [rbp-18h]
  std::tuple_element<2,const std::tuple<unsigned int,unsigned int,unsigned int> >::type *max_count; // [rsp+40h] [rbp-10h]
  proto::RoguelikeRuneRecord *rune_record; // [rsp+48h] [rbp-8h]

  __for_range = &this->chosen_rune_tuple_vec_;
  __for_begin._M_current = std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::begin(&this->chosen_rune_tuple_vec_)._M_current;
  __for_end._M_current = std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::end(&this->chosen_rune_tuple_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::tuple<unsigned int,unsigned int,unsigned int> *,std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>>(
            &__for_begin,
            &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<std::tuple<unsigned int,unsigned int,unsigned int> *,std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>>::operator*(&__for_begin);
    rune_id = (std::tuple_element<0,const std::tuple<unsigned int,unsigned int,unsigned int> >::type *)std::get<0ul,unsigned int,unsigned int,unsigned int>(v5);
    left_count = (std::tuple_element<1,const std::tuple<unsigned int,unsigned int,unsigned int> >::type *)std::get<1ul,unsigned int,unsigned int,unsigned int>(v5);
    max_count = (std::tuple_element<2,const std::tuple<unsigned int,unsigned int,unsigned int> >::type *)std::get<2ul,unsigned int,unsigned int,unsigned int>(v5);
    rune_record = google::protobuf::RepeatedPtrField<proto::RoguelikeRuneRecord>::Add(rune_list);
    if ( *(_BYTE *)(((unsigned __int64)rune_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)rune_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rune_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(rune_id);
    }
    proto::RoguelikeRuneRecord::set_rune_id(rune_record, *rune_id);
    if ( *(_BYTE *)(((unsigned __int64)left_count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)left_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)left_count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(left_count);
    }
    proto::RoguelikeRuneRecord::set_left_count(rune_record, *left_count);
    if ( *(_BYTE *)(((unsigned __int64)max_count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)max_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)max_count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(max_count);
    }
    proto::RoguelikeRuneRecord::set_max_count(rune_record, *max_count);
    __gnu_cxx::__normal_iterator<std::tuple<unsigned int,unsigned int,unsigned int> *,std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>>::operator++(&__for_begin);
  }
};

// Line 180: range 00000000159523FA-000000001595295A
int32_t __cdecl RoguelikeMiscMgr::initRoguelikeDungeonMiscData(RoguelikeMiscMgr *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<RoguelikeDungeonActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<RoguelikeDungeonActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  char *v9; // rsi
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-D4h]
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-D0h] BYREF
  char v13[176]; // [rsp+40h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 16 activity_ptr:181 64 24 12 rune_vec:200";
  *(_QWORD *)(v1 + 16) = RoguelikeMiscMgr::initRoguelikeDungeonMiscData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Player::getActivityComp(this->player_);
  PlayerActivityComp::findOpenningActivity<RoguelikeDungeonActivity>((PlayerActivityComp *const)(v1 + 32));
  if ( std::operator==<RoguelikeDungeonActivity>((const std::shared_ptr<RoguelikeDungeonActivity> *)(v1 + 32), 0LL)
    || (v4 = std::__shared_ptr_access<RoguelikeDungeonActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoguelikeDungeonActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32)),
        !BaseActivity::isOpening(v4, 0)) )
  {
    v6 = 860;
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_init_);
    if ( this->is_init_ )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "initRoguelikeDungeonMiscData",
        188);
      common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
        &v12,
        (const char (*)[47])"[ROGUELIKE] current misc data is inited,error!");
      common::milog::MiLogStream::~MiLogStream(&v12);
      v6 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_dungeon_level_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_dungeon_level_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->cur_dungeon_level_);
      }
      if ( this->cur_dungeon_level_ )
      {
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "initRoguelikeDungeonMiscData",
          193);
        v7 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
               &v12,
               (const char (*)[64])"[ROGUELIKE] current misc data is in dungeon, cur_dungeon_level:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->cur_dungeon_level_);
        common::milog::MiLogStream::~MiLogStream(&v12);
        v6 = -1;
      }
      else
      {
        v8 = std::__shared_ptr_access<RoguelikeDungeonActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoguelikeDungeonActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        RoguelikeDungeonActivity::getEquippedRuneVec((std::vector<std::pair<unsigned int,unsigned int>> *)(v1 + 64), v8);
        v9 = (char *)(v1 + 64);
        RoguelikeMiscMgr::initRoguelikeRuneCount(
          this,
          (const std::vector<std::pair<unsigned int,unsigned int>> *)(v1 + 64));
        ret = RoguelikeMiscMgr::initRoguelikeDungeonRuntimeMiscData(this);
        if ( !ret )
        {
          if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(&this->is_init_, v9, &this->is_init_);
          this->is_init_ = 1;
          if ( *(_BYTE *)(((unsigned __int64)&this->cur_dungeon_level_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->cur_dungeon_level_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->cur_dungeon_level_, v9, &this->cur_dungeon_level_);
          }
          this->cur_dungeon_level_ = 1;
        }
        std::vector<std::pair<unsigned int,unsigned int>>::~vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v1 + 64));
        if ( ret )
        {
          RoguelikeMiscMgr::clearRoguelikeDungeonMiscData(this);
          common::milog::MiLogStream::create(
            &v12,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
            "initRoguelikeDungeonMiscData",
            217);
          common::milog::MiLogStream::operator<<<char [84],(char *[84])0>(
            &v12,
            (const char (*)[84])"[ROGUELIKE] initRoguelikeDungeonMiscData failed, clearRoguelikeDungeonMiscData exec");
        }
        else
        {
          common::milog::MiLogStream::create(
            &v12,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
            "initRoguelikeDungeonMiscData",
            221);
          common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
            &v12,
            (const char (*)[46])"[ROGUELIKE] initRoguelikeDungeonMiscData succ");
        }
        common::milog::MiLogStream::~MiLogStream(&v12);
        v6 = ret;
      }
    }
  }
  std::shared_ptr<RoguelikeDungeonActivity>::~shared_ptr((std::shared_ptr<RoguelikeDungeonActivity> *const)(v1 + 32));
  result = v6;
  if ( v13 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 228: range 000000001595295C-0000000015952EF1
__int64 __fastcall RoguelikeMiscMgr::recoverRoguelikeDungeonMiscData(RoguelikeMiscMgr *const this, const char *level)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 result; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  uint32_t v9; // ecx
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  unsigned int ret; // [rsp+1Ch] [rbp-84h]
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-80h] BYREF
  char v16[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 level:227";
  *(_QWORD *)(v2 + 16) = RoguelikeMiscMgr::recoverRoguelikeDungeonMiscData;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = (_DWORD)level;
  if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_init_);
  if ( this->is_init_ )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "recoverRoguelikeDungeonMiscData",
      232);
    level = "[ROGUELIKE] current misc data is inited,error!";
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
      &v15,
      (const char (*)[47])"[ROGUELIKE] current misc data is inited,error!");
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_dungeon_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_dungeon_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_dungeon_level_);
  }
  if ( this->cur_dungeon_level_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_dungeon_level_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_dungeon_level_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_dungeon_level_);
    }
    if ( this->cur_dungeon_level_ <= *(_DWORD *)(v2 + 32) && this->cur_dungeon_level_ + 1 >= *(_DWORD *)(v2 + 32) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_dungeon_level_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_dungeon_level_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->cur_dungeon_level_);
      }
      if ( this->cur_dungeon_level_ + 1 == *(_DWORD *)(v2 + 32) )
        RoguelikeMiscMgr::clearRoguelikeDungeonLevelRelatedData(this);
      ret = RoguelikeMiscMgr::recoverRoguelikeDungeonRuntimeMiscData(this);
      if ( !ret )
      {
        if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&this->is_init_, level, &this->is_init_);
        this->is_init_ = 1;
        v9 = *(_DWORD *)(v2 + 32);
        v10 = *(_BYTE *)(((unsigned __int64)&this->cur_dungeon_level_ >> 3) + 0x7FFF8000);
        if ( v10 != 0 && v10 <= 3 )
        {
          LOBYTE(level) = v10 != 0;
          __asan_report_store4(&this->cur_dungeon_level_, level, &this->cur_dungeon_level_);
        }
        this->cur_dungeon_level_ = v9;
      }
      if ( ret )
      {
        RoguelikeMiscMgr::clearRoguelikeDungeonRuntimeMiscData(this);
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "recoverRoguelikeDungeonMiscData",
          268);
        v11 = common::milog::MiLogStream::operator<<<char [114],(char *[114])0>(
                &v15,
                (const char (*)[114])"[ROGUELIKE] recoverRoguelikeDungeonMiscData failed, clearRoguelikeDungeonRuntimeMis"
                                     "cData exec, cur_dungeon_level:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->cur_dungeon_level_);
        v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])", level:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "recoverRoguelikeDungeonMiscData",
          273);
        common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
          &v15,
          (const char (*)[49])"[ROGUELIKE] recoverRoguelikeDungeonMiscData succ");
      }
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = ret;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "recoverRoguelikeDungeonMiscData",
        242);
      v6 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v15,
             (const char (*)[40])"[ROGUELIKE] can not recover from level:");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->cur_dungeon_level_);
      v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])", to level:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "recoverRoguelikeDungeonMiscData",
      237);
    common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
      &v15,
      (const char (*)[55])"[ROGUELIKE] current misc data is not in dungeon, error");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 0xFFFFFFFFLL;
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
  return result;
};

// Line 279: range 0000000015952EF2-000000001595336F
__int64 __fastcall RoguelikeMiscMgr::initNextLevelRoguelikeDungeonMiscData(RoguelikeMiscMgr *const this, __int64 level)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  uint32_t v9; // ecx
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  unsigned int ret; // [rsp+1Ch] [rbp-84h]
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-80h] BYREF
  char v16[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 level:278";
  *(_QWORD *)(v2 + 16) = RoguelikeMiscMgr::initNextLevelRoguelikeDungeonMiscData;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = level;
  if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_init_);
  if ( !this->is_init_ )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "initNextLevelRoguelikeDungeonMiscData",
      282);
    common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
      &v15,
      (const char (*)[51])"[ROGUELIKE] current misc data is not inited,error!");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_dungeon_level_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_dungeon_level_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_dungeon_level_);
    }
    if ( this->cur_dungeon_level_ + 1 == *(_DWORD *)(v2 + 32) )
    {
      RoguelikeMiscMgr::clearRoguelikeDungeonLevelRelatedData(this);
      ret = RoguelikeMiscMgr::recoverRoguelikeDungeonRuntimeMiscData(this);
      if ( !ret )
      {
        if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&this->is_init_, level, &this->is_init_);
        this->is_init_ = 1;
        v9 = *(_DWORD *)(v2 + 32);
        v10 = *(_BYTE *)(((unsigned __int64)&this->cur_dungeon_level_ >> 3) + 0x7FFF8000);
        if ( v10 != 0 && v10 <= 3 )
        {
          LOBYTE(level) = v10 != 0;
          __asan_report_store4(&this->cur_dungeon_level_, level, &this->cur_dungeon_level_);
        }
        this->cur_dungeon_level_ = v9;
      }
      if ( ret )
      {
        RoguelikeMiscMgr::clearRoguelikeDungeonRuntimeMiscData(this);
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "initNextLevelRoguelikeDungeonMiscData",
          309);
        v11 = common::milog::MiLogStream::operator<<<char [120],(char *[120])0>(
                &v15,
                (const char (*)[120])"[ROGUELIKE] initNextLevelRoguelikeDungeonMiscData failed, clearRoguelikeDungeonRunt"
                                     "imeMiscData exec, cur_dungeon_level:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->cur_dungeon_level_);
        v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])", level:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "initNextLevelRoguelikeDungeonMiscData",
          314);
        common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
          &v15,
          (const char (*)[55])"[ROGUELIKE] initNextLevelRoguelikeDungeonMiscData succ");
      }
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = ret;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "initNextLevelRoguelikeDungeonMiscData",
        287);
      v6 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v15,
             (const char (*)[40])"[ROGUELIKE] can not recover from level:");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->cur_dungeon_level_);
      v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])", to level:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = 0xFFFFFFFFLL;
    }
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
  return result;
};

// Line 320: range 0000000015953370-0000000015953449
void __cdecl RoguelikeMiscMgr::clearRoguelikeDungeonMiscData(RoguelikeMiscMgr *const this)
{
  common::milog::MiLogStream *v1; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v3; // [rsp+20h] [rbp-30h] BYREF

  RoguelikeMiscMgr::clearRoguelikeDungeonRuntimeMiscData(this);
  RoguelikeMiscMgr::clearRoguelikeDungeonToBinMiscData(this);
  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
    "clearRoguelikeDungeonMiscData",
    323);
  v1 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
         &v3,
         (const char (*)[53])"[ROGUELIKE] clearRoguelikeDungeonMiscData succ, uid:");
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
  common::milog::MiLogStream::~MiLogStream(&v3);
};

// Line 327: range 000000001595344A-0000000015953517
void __cdecl RoguelikeMiscMgr::saveRoguelikeDungeonMiscData(RoguelikeMiscMgr *const this)
{
  common::milog::MiLogStream *v1; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v3; // [rsp+20h] [rbp-30h] BYREF

  RoguelikeMiscMgr::clearRoguelikeDungeonRuntimeMiscData(this);
  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
    "saveRoguelikeDungeonMiscData",
    329);
  v1 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
         &v3,
         (const char (*)[52])"[ROGUELIKE] saveRoguelikeDungeonMiscData succ, uid:");
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
  common::milog::MiLogStream::~MiLogStream(&v3);
};

// Line 334: range 0000000015953518-000000001595359F
void __cdecl RoguelikeMiscMgr::clearRoguelikeDungeonLevelRelatedData(RoguelikeMiscMgr *const this)
{
  __int64 v1; // rsi
  uint32_t *p_use_refresh_free_count; // rdx

  std::unordered_set<unsigned int>::clear(&this->gacha_cell_set_);
  RoguelikeMiscMgr::clearOptionalRoguelikeCardData(this);
  RoguelikeMiscMgr::clearLevelRelatedRoguelikeCardData(this);
  RoguelikeMiscMgr::clearLevelRelatedRoguelikeCurseData(this);
  p_use_refresh_free_count = &this->use_refresh_free_count_;
  if ( *(_BYTE *)(((unsigned __int64)p_use_refresh_free_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_use_refresh_free_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->use_refresh_free_count_, v1, p_use_refresh_free_count);
  }
  this->use_refresh_free_count_ = 0;
};

// Line 347: range 00000000159535A0-000000001595362A
void __cdecl RoguelikeMiscMgr::onPlayerEnterRoguelikeDungeon(RoguelikeMiscMgr *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  v1 = ((_BYTE)this + 17) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_in_roguelike_dungeon_, v1, v2);
  this->is_in_roguelike_dungeon_ = 1;
  RoguelikeMiscMgr::addRoguelikeTeamAbilityGroup(this);
  RoguelikeMiscMgr::setRoguelikeTeamSgv(this);
  RoguelikeMiscMgr::setRoguelikeAvatarSgv(this);
  RoguelikeMiscMgr::notifyRoguelikeEffectData(this);
  RoguelikeMiscMgr::notifyOptionalRoguelikeCardData(this);
};

// Line 359: range 000000001595362C-000000001595382F
void __cdecl RoguelikeMiscMgr::notifyOptionalRoguelikeCardData(RoguelikeMiscMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  google::protobuf::RepeatedField<unsigned int> *v4; // rax
  char v5[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 48 10 notify:362";
  *(_QWORD *)(v1 + 16) = RoguelikeMiscMgr::notifyOptionalRoguelikeCardData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  if ( !std::vector<unsigned int>::empty(&this->optional_card_vec_) )
  {
    proto::RoguelikeCardGachaNotify::RoguelikeCardGachaNotify((proto::RoguelikeCardGachaNotify *const)(v1 + 48));
    v4 = proto::RoguelikeCardGachaNotify::mutable_card_list((proto::RoguelikeCardGachaNotify *const)(v1 + 48));
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->optional_card_vec_, v4);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_optional_card_can_refresh_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_optional_card_can_refresh_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_optional_card_can_refresh_);
    }
    proto::RoguelikeCardGachaNotify::set_is_can_refresh(
      (proto::RoguelikeCardGachaNotify *const)(v1 + 48),
      this->is_optional_card_can_refresh_);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 48));
    proto::RoguelikeCardGachaNotify::~RoguelikeCardGachaNotify((proto::RoguelikeCardGachaNotify *const)(v1 + 48));
  }
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 370: range 0000000015953830-000000001595388E
void __cdecl RoguelikeMiscMgr::onLeaveSceneEvent(RoguelikeMiscMgr *const this, const LeaveSceneEvent *event)
{
  __int64 v2; // rsi
  __int64 v3; // rdx

  v2 = ((_BYTE)this + 17) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_in_roguelike_dungeon_, v2, v3);
  this->is_in_roguelike_dungeon_ = 0;
  RoguelikeMiscMgr::delRoguelikeTeamAbilityGroup(this);
};

// Line 379: range 0000000015953890-0000000015953B1D
void __cdecl RoguelikeMiscMgr::onPostEnterSceneEvent(RoguelikeMiscMgr *const this, const PostEnterSceneEvent *event)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->is_post_enter_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 18) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_post_enter_roguelike_dungeon_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_post_enter_roguelike_dungeon_);
  }
  if ( this->is_post_enter_roguelike_dungeon_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_in_roguelike_dungeon_);
    }
    if ( this->is_in_roguelike_dungeon_ )
    {
      RoguelikeMiscMgr::notifyRoguelikeEffectData(this);
      RoguelikeMiscMgr::notifyOptionalRoguelikeCardData(this);
      common::milog::MiLogStream::create(
        &v6,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "onPostEnterSceneEvent",
        389);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v6, (const char (*)[20])"[ROGUELIKE] reenter");
      common::milog::MiLogStream::~MiLogStream(&v6);
    }
    else
    {
      RoguelikeMiscMgr::onPlayerEnterRoguelikeDungeon(this);
    }
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_in_roguelike_dungeon_);
    }
    if ( this->is_in_roguelike_dungeon_ )
    {
      common::milog::MiLogStream::create(
        &v6,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "onPostEnterSceneEvent",
        402);
      common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
        &v6,
        (const char (*)[52])"[ROGUELIKE] unexpected case, clear ability and mark");
      common::milog::MiLogStream::~MiLogStream(&v6);
      v2 = ((_BYTE)this + 17) & 7;
      v3 = (*(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000));
      if ( (_BYTE)v3 )
        __asan_report_store1(&this->is_in_roguelike_dungeon_, v2, v3);
      this->is_in_roguelike_dungeon_ = 0;
      RoguelikeMiscMgr::delRoguelikeTeamAbilityGroup(this);
      RoguelikeMiscMgr::clearRoguelikeTeamSgv(this);
      RoguelikeMiscMgr::clearRoguelikeAvatarSgv(this);
    }
  }
  v4 = ((_BYTE)this + 18) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_post_enter_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_post_enter_roguelike_dungeon_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_post_enter_roguelike_dungeon_, v4, v5);
  this->is_post_enter_roguelike_dungeon_ = 0;
};

// Line 415: range 0000000015953B1E-0000000015954245
void __cdecl RoguelikeMiscMgr::notifyRoguelikeEffectData(RoguelikeMiscMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  bool v4; // al
  const ActivityRogueExcelConfigMgr *v5; // rcx
  common::milog::MiLogStream *v6; // rax
  bool v7; // al
  const ActivityRogueExcelConfigMgr *v8; // rcx
  common::milog::MiLogStream *v9; // rax
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-168h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+20h] [rbp-160h] BYREF
  const ActivityRogueExcelConfigMgr *rogue_config_mgr; // [rsp+28h] [rbp-158h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-150h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+38h] [rbp-148h]
  const std::pair<unsigned int const,unsigned int> *v15; // [rsp+40h] [rbp-140h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *curse_id; // [rsp+48h] [rbp-138h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count_0; // [rsp+50h] [rbp-130h]
  proto::RogueEffectRecord *record_0; // [rsp+58h] [rbp-128h]
  const data::RoguelikeCurseExcelConfig *curse_config_ptr; // [rsp+60h] [rbp-120h]
  const std::pair<unsigned int const,unsigned int> *v20; // [rsp+68h] [rbp-118h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *card_id; // [rsp+70h] [rbp-110h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+78h] [rbp-108h]
  proto::RogueEffectRecord *record; // [rsp+80h] [rbp-100h]
  const data::RoguelikeCardExcelConfig *card_config_ptr; // [rsp+88h] [rbp-F8h]
  std::shared_ptr<Config> v25; // [rsp+90h] [rbp-F0h] BYREF
  common::milog::MiLogStream v26; // [rsp+A0h] [rbp-E0h] BYREF
  char v27[192]; // [rsp+C0h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 72 10 notify:417";
  *(_QWORD *)(v1 + 16) = RoguelikeMiscMgr::notifyRoguelikeEffectData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v25);
  rogue_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25)->design_config.txt_config_mgr.activity_rogue_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v25);
  proto::RoguelikeEffectDataNotify::RoguelikeEffectDataNotify((proto::RoguelikeEffectDataNotify *const)(v1 + 48));
  __for_range = &this->select_card_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->select_card_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->select_card_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v20 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    card_id = std::get<0ul,unsigned int const,unsigned int>(v20);
    count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v20);
    record = proto::RoguelikeEffectDataNotify::add_card_list((proto::RoguelikeEffectDataNotify *const)(v1 + 48));
    if ( *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)card_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(card_id);
    }
    proto::RogueEffectRecord::set_source_id(record, *card_id);
    if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(count);
    }
    proto::RogueEffectRecord::set_count(record, *count);
    v4 = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
           &this->viewed_card_set_,
           card_id);
    proto::RogueEffectRecord::set_is_new(record, !v4);
    v5 = rogue_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)card_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(card_id);
    }
    card_config_ptr = data::ActivityRogueExcelConfigMgrBase::findRoguelikeCardExcelConfig(v5, *card_id);
    if ( card_config_ptr )
    {
      RoguelikeMiscMgr::fillEffectRecordExtraParam(this, &card_config_ptr->effect_config, record);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "notifyRoguelikeEffectData",
        427);
      v6 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
             &v26,
             (const char (*)[58])"[ROGUELIKE] findRoguelikeCardExcelConfig failed, card_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, card_id);
      common::milog::MiLogStream::~MiLogStream(&v26);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->trigger_curse_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->trigger_curse_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v15 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    curse_id = std::get<0ul,unsigned int const,unsigned int>(v15);
    count_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v15);
    record_0 = proto::RoguelikeEffectDataNotify::add_curse_list((proto::RoguelikeEffectDataNotify *const)(v1 + 48));
    if ( *(_BYTE *)(((unsigned __int64)curse_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)curse_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)curse_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(curse_id);
    }
    proto::RogueEffectRecord::set_source_id(record_0, *curse_id);
    if ( *(_BYTE *)(((unsigned __int64)count_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)count_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(count_0);
    }
    proto::RogueEffectRecord::set_count(record_0, *count_0);
    v7 = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
           &this->viewed_curse_set_,
           curse_id);
    proto::RogueEffectRecord::set_is_new(record_0, !v7);
    v8 = rogue_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)curse_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)curse_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)curse_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(curse_id);
    }
    curse_config_ptr = data::ActivityRogueExcelConfigMgrBase::findRoguelikeCurseExcelConfig(v8, *curse_id);
    if ( curse_config_ptr )
    {
      RoguelikeMiscMgr::fillEffectRecordExtraParam(this, &curse_config_ptr->effect_config, record_0);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "notifyRoguelikeEffectData",
        441);
      v9 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
             &v26,
             (const char (*)[60])"[ROGUELIKE] findRoguelikeCurseExcelConfig failed, curse_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, curse_id);
      common::milog::MiLogStream::~MiLogStream(&v26);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 48));
  proto::RoguelikeEffectDataNotify::~RoguelikeEffectDataNotify((proto::RoguelikeEffectDataNotify *const)(v1 + 48));
  if ( v27 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF800C) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 450: range 0000000015954246-0000000015954DBF
void __cdecl RoguelikeMiscMgr::fillEffectRecordExtraParam(
        const RoguelikeMiscMgr *const this,
        const data::RoguelikeEffectExcelConfig *effect_config,
        proto::RogueEffectRecord *record)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  std::unordered_map<std::string,float>::mapped_type *v7; // rax
  float *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rbx
  const float *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  unsigned __int64 v16; // rax
  PlayerAvatarComp *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rcx
  std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  uint32_t v22; // edx
  unsigned __int64 v23; // rax
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rcx
  std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  uint32_t AvatarId; // edx
  common::milog::MiLogStream *v30; // rbx
  int value; // [rsp+24h] [rbp-DCh]
  int32_t valuea; // [rsp+24h] [rbp-DCh]
  std::unordered_set<long unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-D8h] BYREF
  std::unordered_set<long unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-D0h] BYREF
  const ActivityRogueExcelConfigMgr *rogue_config_mgr; // [rsp+38h] [rbp-C8h]
  const std::unordered_set<long unsigned int> *__for_range; // [rsp+40h] [rbp-C0h]
  const std::unordered_set<long unsigned int> *__for_range_0; // [rsp+48h] [rbp-B8h]
  common::milog::MiLogStream v39; // [rsp+50h] [rbp-B0h] BYREF
  char v40[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 8 guid:536 64 16 14 avatar_ptr:538";
  *(_QWORD *)(v3 + 16) = RoguelikeMiscMgr::fillEffectRecordExtraParam;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 64));
  rogue_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64))->design_config.txt_config_mgr.activity_rogue_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&effect_config->effect_type);
  }
  switch ( effect_config->effect_type )
  {
    case ROGUELIKE_EFFECT_STATIC_COMBAT:
    case ROGUELIKE_EFFECT_DISABLE_SPRING_CELL:
    case ROGUELIKE_EFFECT_ADD_LEVEL_TRAP:
    case ROGUELIKE_EFFECT_CLEAR_LEVEL_TRAP:
    case ROGUELIKE_EFFECT_RANDOM_CLEAR_A_CURSE:
    case ROGUELIKE_EFFECT_CLEAR_ALL_CURSE:
    case ROGUELIKE_EFFECT_ADD_RUNE_MAX_COUNT:
    case ROGUELIKE_EFFECT_ADD_RUNE_USE_COUNT:
    case ROGUELIKE_EFFECT_FILL_RUNE_USE_COUNT:
    case ROGUELIKE_EFFECT_USE_RUNE_PROB_NOT_SUB:
    case ROGUELIKE_EFFECT_CLEAR_MIST:
    case ROGUELIKE_EFFECT_ADD_RESOURCE:
    case ROGUELIKE_EFFECT_ADD_CARD_TYPE_WEIGHT:
    case ROGUELIKE_EFFECT_SUB_REFRESH_CARD_COST:
    case ROGUELIKE_EFFECT_CHANGE_GADGET_NUM:
    case ROGUELIKE_EFFECT_SUB_CURSE_PROB:
    case ROGUELIKE_EFFECT_PROB_FREE_REFRESH_CARD:
    case ROGUELIKE_EFFECT_ADD_CARD_TYPE_WEIGHT_ROOM_FIRST:
    case ROGUELIKE_EFFECT_AT_MOST_TRAP_COUNT:
    case ROGUELIKE_EFFECT_SPRING_AND_BOSS:
    case ROGUELIKE_EFFECT_AT_LEAST_STORE_COUNT:
    case ROGUELIKE_EFFECT_BAN_GUARD:
      break;
    case ROGUELIKE_EFFECT_DYNAMIC_COMBAT:
      if ( !common::tools::MiscUtils::isContains<std::unordered_map<std::string,float> const,std::string>(
              &rogue_config_mgr->team_sgv_value_map,
              &effect_config->effect_key) )
      {
        common::milog::MiLogStream::create(
          &v39,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "fillEffectRecordExtraParam",
          486);
        v6 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
               &v39,
               (const char (*)[40])"[ROGUELIKE] can not find team sgv, key:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &effect_config->effect_key);
        common::milog::MiLogStream::~MiLogStream(&v39);
      }
      else if ( common::tools::MiscUtils::isContains<std::unordered_map<std::string,float> const,std::string>(
                  &this->dynamic_team_sgv_map_,
                  &effect_config->effect_key) )
      {
        v7 = (std::unordered_map<std::string,float>::mapped_type *)std::unordered_map<std::string,float>::at(
                                                                     &this->dynamic_team_sgv_map_,
                                                                     &effect_config->effect_key);
        v8 = v7;
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v7);
        }
        value = (int)*v8;
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->display_offset >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->display_offset >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->display_offset);
        }
        valuea = SAFE_ADD<int,int>(value, effect_config->display_offset);
        if ( valuea >= 0 )
        {
          proto::RogueEffectRecord::add_extra_param_list(record, valuea);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v39,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
            "fillEffectRecordExtraParam",
            495);
          v9 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                 &v39,
                 (const char (*)[49])"[ROGUELIKE] invalid sgv for dynamic combat, key:");
          v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &effect_config->effect_key);
          v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])", value:");
          v12 = std::unordered_map<std::string,float>::at(&this->dynamic_team_sgv_map_, &effect_config->effect_key);
          v13 = common::milog::MiLogStream::operator<<<float,(float *)0>(v11, v12);
          v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])", offset:");
          common::milog::MiLogStream::operator<<<int,(int *)0>(v14, &effect_config->display_offset);
          common::milog::MiLogStream::~MiLogStream(&v39);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v39,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "fillEffectRecordExtraParam",
          503);
        v15 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                &v39,
                (const char (*)[47])"[ROGUELIKE] dynamic sgv is not exist, sgv_key:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, &effect_config->effect_key);
        common::milog::MiLogStream::~MiLogStream(&v39);
      }
      break;
    case ROGUELIKE_EFFECT_ADD_TALENT:
      if ( std::unordered_set<unsigned long>::empty(&this->add_talent_guid_set_) )
      {
        common::milog::MiLogStream::create(
          &v39,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "fillEffectRecordExtraParam",
          533);
        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
          &v39,
          (const char (*)[38])"[ROGUELIKE] add_talent_guid_set empty");
        common::milog::MiLogStream::~MiLogStream(&v39);
      }
      else
      {
        __for_range_0 = &this->add_talent_guid_set_;
        __for_begin._M_cur = std::unordered_set<unsigned long>::begin(&this->add_talent_guid_set_)._M_cur;
        __for_end._M_cur = std::unordered_set<unsigned long>::end(&this->add_talent_guid_set_)._M_cur;
        while ( std::__detail::operator!=<unsigned long,false>(&__for_begin, &__for_end) )
        {
          v23 = (unsigned __int64)std::__detail::_Node_const_iterator<unsigned long,true,false>::operator*(&__for_begin);
          if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
            v23 = __asan_report_load8(v23);
          *(_QWORD *)(v3 + 32) = *(_QWORD *)v23;
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          AvatarComp = Player::getAvatarComp(this->player_);
          PlayerAvatarComp::findAvatar<MirrorAvatar>((const PlayerAvatarComp *const)(v3 + 64), (uint64_t)AvatarComp);
          if ( std::operator==<MirrorAvatar>(0LL, (const std::shared_ptr<MirrorAvatar> *)(v3 + 64)) )
          {
            common::milog::MiLogStream::create(
              &v39,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
              "fillEffectRecordExtraParam",
              541);
            v25 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    &v39,
                    (const char (*)[35])"[ROGUELIKE] findAvatar fail, guid:");
            v26 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                    v25,
                    (const unsigned __int64 *)(v3 + 32));
            v27 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v26, (const char (*)[10])", player:");
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            operator<<(v27, this->player_);
            common::milog::MiLogStream::~MiLogStream(&v39);
          }
          else
          {
            v28 = std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            AvatarId = Avatar::getAvatarId(v28);
            proto::RogueEffectRecord::add_extra_param_list(record, AvatarId);
          }
          std::shared_ptr<MirrorAvatar>::~shared_ptr((std::shared_ptr<MirrorAvatar> *const)(v3 + 64));
          std::__detail::_Node_const_iterator<unsigned long,true,false>::operator++(&__for_begin);
        }
      }
      break;
    case ROGUELIKE_EFFECT_RANDOM_AVATAR_NOHEAL:
      if ( std::unordered_set<unsigned long>::empty(&this->noheal_guid_set_) )
      {
        common::milog::MiLogStream::create(
          &v39,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "fillEffectRecordExtraParam",
          512);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          &v39,
          (const char (*)[34])"[ROGUELIKE] noheal_guid_set empty");
        common::milog::MiLogStream::~MiLogStream(&v39);
      }
      else
      {
        __for_range = &this->noheal_guid_set_;
        __for_begin._M_cur = std::unordered_set<unsigned long>::begin(&this->noheal_guid_set_)._M_cur;
        __for_end._M_cur = std::unordered_set<unsigned long>::end(&this->noheal_guid_set_)._M_cur;
        while ( std::__detail::operator!=<unsigned long,false>(&__for_begin, &__for_end) )
        {
          v16 = (unsigned __int64)std::__detail::_Node_const_iterator<unsigned long,true,false>::operator*(&__for_begin);
          if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
            v16 = __asan_report_load8(v16);
          *(_QWORD *)(v3 + 32) = *(_QWORD *)v16;
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          v17 = Player::getAvatarComp(this->player_);
          PlayerAvatarComp::findAvatar<MirrorAvatar>((const PlayerAvatarComp *const)(v3 + 64), (uint64_t)v17);
          if ( std::operator==<MirrorAvatar>(0LL, (const std::shared_ptr<MirrorAvatar> *)(v3 + 64)) )
          {
            common::milog::MiLogStream::create(
              &v39,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
              "fillEffectRecordExtraParam",
              520);
            v18 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    &v39,
                    (const char (*)[35])"[ROGUELIKE] findAvatar fail, guid:");
            v19 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                    v18,
                    (const unsigned __int64 *)(v3 + 32));
            v20 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v19, (const char (*)[10])", player:");
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            operator<<(v20, this->player_);
            common::milog::MiLogStream::~MiLogStream(&v39);
          }
          else
          {
            v21 = std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            v22 = Avatar::getAvatarId(v21);
            proto::RogueEffectRecord::add_extra_param_list(record, v22);
          }
          std::shared_ptr<MirrorAvatar>::~shared_ptr((std::shared_ptr<MirrorAvatar> *const)(v3 + 64));
          std::__detail::_Node_const_iterator<unsigned long,true,false>::operator++(&__for_begin);
        }
      }
      break;
    default:
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "fillEffectRecordExtraParam",
        549);
      v30 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              &v39,
              (const char (*)[45])"[ROGUELIKE] unsupported effect, effect_type:");
      if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect_config->effect_type);
      }
      __for_end._M_cur = (std::__detail::_Node_iterator_base<long unsigned int,false>::__node_type *)data::enumValToStr(effect_config->effect_type);
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v30, (const char *const *)&__for_end);
      common::milog::MiLogStream::~MiLogStream(&v39);
      break;
  }
  if ( v40 == (char *)v3 )
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

// Line 555: range 0000000015954DC0-000000001595508A
void __cdecl RoguelikeMiscMgr::onTeamServerGlobalValueChangeEvent(
        RoguelikeMiscMgr *const this,
        const TeamServerGlobalValueChangeEvent *event)
{
  std::unordered_map<std::string,float>::mapped_type *v2; // rax
  float *v3; // rdx
  float v4; // xmm0_4
  std::string *p_key; // rsi
  std::unordered_map<std::string,float>::mapped_type *v6; // rax
  float *v7; // rdx
  char v8; // cl
  std::string *v9; // rsi
  std::unordered_map<std::string,float>::mapped_type *v10; // rax
  float *v11; // rdx
  char v12; // cl
  float value; // [rsp+Ch] [rbp-14h]
  float v14; // [rsp+Ch] [rbp-14h]

  if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_init_);
  if ( this->is_init_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_in_roguelike_dungeon_);
    }
    if ( this->is_in_roguelike_dungeon_
      && common::tools::MiscUtils::isContains<std::unordered_map<std::string,float>,std::string>(
           &this->dynamic_team_sgv_map_,
           &event->key) )
    {
      v2 = std::unordered_map<std::string,float>::operator[](&this->dynamic_team_sgv_map_, &event->key);
      v3 = v2;
      if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v2);
      }
      v4 = *v3;
      if ( *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event->value);
      }
      if ( std::fabs(v4 - event->value) > 0.00000011920929 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&event->value);
        }
        value = event->value;
        p_key = &event->key;
        v6 = std::unordered_map<std::string,float>::operator[](&this->dynamic_team_sgv_map_, &event->key);
        v7 = v6;
        v8 = *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000);
        if ( v8 != 0 && (char)(((unsigned __int8)v6 & 7) + 3) >= v8 )
        {
          LOBYTE(p_key) = v8 != 0;
          __asan_report_store4(v6, p_key, v6);
        }
        *v7 = value;
        if ( *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&event->value);
        }
        v14 = event->value;
        v9 = &event->key;
        v10 = std::unordered_map<std::string,float>::operator[](&this->team_sgv_map_, &event->key);
        v11 = v10;
        v12 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
        if ( v12 != 0 && (char)(((unsigned __int8)v10 & 7) + 3) >= v12 )
        {
          LOBYTE(v9) = v12 != 0;
          __asan_report_store4(v10, v9, v10);
        }
        *v11 = v14;
        RoguelikeMiscMgr::notifyRoguelikeEffectData(this);
      }
    }
  }
};

// Line 575: range 000000001595508C-0000000015955387
void __cdecl RoguelikeMiscMgr::onSgvDisableRoguelikeTrap(RoguelikeMiscMgr *const this, const std::string *sgv_key)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::unordered_map<std::string,unsigned int>::mapped_type *v5; // rax
  _DWORD *v6; // rdx
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  ActivityRogueExcelConfigMgr *rogue_config_mgr; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<Config> v11; // [rsp+20h] [rbp-D0h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-C0h] BYREF
  char v13[160]; // [rsp+50h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 11 card_id:577 64 24 10 notify:582";
  *(_QWORD *)(v2 + 16) = RoguelikeMiscMgr::onSgvDisableRoguelikeTrap;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  rogue_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11)->design_config.txt_config_mgr.activity_rogue_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v11);
  *(_DWORD *)(v2 + 48) = 0;
  if ( common::tools::MiscUtils::isContains<std::unordered_map<std::string,unsigned int> const,std::string>(
         &rogue_config_mgr->sgv_to_card_map,
         sgv_key) )
  {
    v5 = std::unordered_map<std::string,unsigned int>::at(&rogue_config_mgr->sgv_to_card_map, sgv_key);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v2 + 48) = *v6;
  }
  proto::DisableRoguelikeTrapNotify::DisableRoguelikeTrapNotify((proto::DisableRoguelikeTrapNotify *const)(v2 + 64));
  proto::DisableRoguelikeTrapNotify::set_card_id(
    (proto::DisableRoguelikeTrapNotify *const)(v2 + 64),
    *(_DWORD *)(v2 + 48));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 64));
  common::milog::MiLogStream::create(
    &v12,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
    "onSgvDisableRoguelikeTrap",
    585);
  v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
         &v12,
         (const char (*)[33])"[ROGUELIKE] disable trap by sgv:");
  v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, sgv_key);
  v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])", card_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream(&v12);
  proto::DisableRoguelikeTrapNotify::~DisableRoguelikeTrapNotify((proto::DisableRoguelikeTrapNotify *const)(v2 + 64));
  if ( v13 == (char *)v2 )
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

// Line 590: range 0000000015955388-00000000159558E1
int32_t __fastcall RoguelikeMiscMgr::triggetRoguelikeCurse(RoguelikeMiscMgr *const this, uint32_t curse_pool_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t result; // eax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r13
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  unsigned int val; // [rsp+14h] [rbp-ACh] BYREF
  std::map<unsigned int,unsigned int> *curse_weight_map; // [rsp+18h] [rbp-A8h]
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-A0h] BYREF
  char v14[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 curse_id:608 64 4 17 curse_pool_id:589";
  *(_QWORD *)(v2 + 16) = RoguelikeMiscMgr::triggetRoguelikeCurse;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = curse_pool_id;
  if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_init_);
  if ( !this->is_init_ )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_in_roguelike_dungeon_);
  }
  if ( !this->is_in_roguelike_dungeon_ )
  {
LABEL_10:
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "triggetRoguelikeCurse",
      593);
    common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
      &v13,
      (const char (*)[51])"[ROGUELIKE] current misc data is not inited,error!");
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = -1;
    goto LABEL_24;
  }
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>,unsigned int>(
          &this->curse_pool_weight_map_,
          (const unsigned int *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "triggetRoguelikeCurse",
      598);
    v6 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v13,
           (const char (*)[55])"[ROGUELIKE] curse_pool_id is not exist, curse_pool_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 64));
    v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
LABEL_22:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = -1;
    goto LABEL_24;
  }
  curse_weight_map = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
                       &this->curse_pool_weight_map_,
                       (const std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v2 + 64));
  if ( std::map<unsigned int,unsigned int>::empty(curse_weight_map) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "triggetRoguelikeCurse",
      605);
    v9 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
           &v13,
           (const char (*)[66])"[ROGUELIKE] current curse_pool have no curse left, curse_pool_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 64));
    v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    goto LABEL_22;
  }
  *(_DWORD *)(v2 + 48) = 0;
  if ( common::tools::RandomUtils::weightSelectOne<unsigned int,unsigned int>(
         curse_weight_map,
         (unsigned int *)(v2 + 48),
         0) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "triggetRoguelikeCurse",
      611);
    v8 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v13,
           (const char (*)[41])"[ROGUELIKE] weightSelectOne failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    goto LABEL_22;
  }
  result = RoguelikeMiscMgr::internalTriggerCurse(this, *(_DWORD *)(v2 + 48));
LABEL_24:
  if ( v14 == (char *)v2 )
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

// Line 618: range 00000000159558E2-0000000015955E9E
__int64 __fastcall RoguelikeMiscMgr::internalTriggerCurse(RoguelikeMiscMgr *const this, uint32_t curse_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  PlayerWatcherComp *WatcherComp; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v7; // rax
  google::protobuf::uint32 *v8; // rdx
  google::protobuf::RepeatedField<unsigned int> *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::map<unsigned int,unsigned int>::mapped_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  __int64 result; // rax
  std::less<unsigned int> __comp; // [rsp+22h] [rbp-17Eh] BYREF
  std::allocator<std::pair<unsigned int const,unsigned int> > __a; // [rsp+23h] [rbp-17Dh] BYREF
  int __y; // [rsp+24h] [rbp-17Ch] BYREF
  std::pair<unsigned int const,unsigned int> v20; // [rsp+28h] [rbp-178h] BYREF
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-170h] BYREF
  char v22[336]; // [rsp+50h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 12 curse_id:617 48 24 13 param_vec:619 112 48 15 trigger_map:620 192 56 10 notify:625";
  *(_QWORD *)(v2 + 16) = RoguelikeMiscMgr::internalTriggerCurse;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = -218959360;
  v4[536862723] = 62194;
  v4[536862725] = -218959118;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  *(_DWORD *)(v2 + 32) = curse_id;
  RoguelikeMiscMgr::doRougelikeCurseEffect((std::vector<unsigned int> *)(v2 + 48), this, *(_DWORD *)(v2 + 32));
  __y = 1;
  std::pair<unsigned int const,unsigned int>::pair<unsigned int &,int,true>(&v20, (unsigned int *)(v2 + 32), &__y);
  std::allocator<std::pair<unsigned int const,unsigned int>>::allocator(&__a);
  std::map<unsigned int,unsigned int>::map(
    (std::map<unsigned int,unsigned int> *const)(v2 + 112),
    (std::initializer_list<std::pair<unsigned int const,unsigned int> >)__PAIR128__(1LL, &v20),
    &__comp,
    &__a);
  std::allocator<std::pair<unsigned int const,unsigned int>>::~allocator(&__a);
  RoguelikeMiscMgr::modifyRoguelikeCurseDataByTriggerCurseMap(
    this,
    (const std::map<unsigned int,unsigned int> *)(v2 + 112));
  v5 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](
                           &this->trigger_curse_map_,
                           (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)((v5 & 7) + 3) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load4(v5);
  ++*(_DWORD *)v5;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  WatcherComp = Player::getWatcherComp(this->player_);
  PlayerWatcherComp::triggerRogueCurse(WatcherComp);
  proto::TriggerRoguelikeCurseNotify::TriggerRoguelikeCurseNotify((proto::TriggerRoguelikeCurseNotify *const)(v2 + 192));
  proto::TriggerRoguelikeCurseNotify::set_curse_group_id(
    (proto::TriggerRoguelikeCurseNotify *const)(v2 + 192),
    *(_DWORD *)(v2 + 32));
  v7 = std::map<unsigned int,unsigned int>::operator[](
         &this->trigger_curse_map_,
         (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v7);
  }
  proto::TriggerRoguelikeCurseNotify::set_curse_level((proto::TriggerRoguelikeCurseNotify *const)(v2 + 192), *v8);
  proto::TriggerRoguelikeCurseNotify::set_is_trigger_curse((proto::TriggerRoguelikeCurseNotify *const)(v2 + 192), 1);
  v9 = proto::TriggerRoguelikeCurseNotify::mutable_effect_param_list((proto::TriggerRoguelikeCurseNotify *const)(v2 + 192));
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
    (const std::vector<unsigned int> *)(v2 + 48),
    v9);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 192));
  std::unordered_set<unsigned int>::erase(
    &this->viewed_curse_set_,
    (const std::unordered_set<unsigned int>::key_type *)(v2 + 32));
  RoguelikeMiscMgr::notifyRoguelikeEffectData(this);
  common::milog::MiLogStream::create(
    &v21,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
    "internalTriggerCurse",
    634);
  v10 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
          &v21,
          (const char (*)[49])"[ROGUELIKE] internalTriggerCurse succ, curse_id:");
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
  v12 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          v11,
          (const char (*)[23])", current stack_level:");
  v13 = std::map<unsigned int,unsigned int>::operator[](
          &this->trigger_curse_map_,
          (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
  v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, v13);
  v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])", uid:");
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  __y = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)&__y);
  common::milog::MiLogStream::~MiLogStream(&v21);
  RoguelikeMiscMgr::logRogueTriggerCurse(this, *(_DWORD *)(v2 + 32));
  proto::TriggerRoguelikeCurseNotify::~TriggerRoguelikeCurseNotify((proto::TriggerRoguelikeCurseNotify *const)(v2 + 192));
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 112));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 48));
  result = 0LL;
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
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
  return result;
};

// Line 643: range 0000000015955EA0-0000000015955F18
int32_t __cdecl RoguelikeMiscMgr::initRoguelikeDungeonRuntimeMiscData(RoguelikeMiscMgr *const this)
{
  int32_t ret; // [rsp+1Ch] [rbp-4h]
  int32_t reta; // [rsp+1Ch] [rbp-4h]
  int32_t retb; // [rsp+1Ch] [rbp-4h]

  RoguelikeMiscMgr::clearRoguelikeDungeonRuntimeMiscData(this);
  RoguelikeMiscMgr::doRoguelikeShikigamiEffect(this);
  ret = RoguelikeMiscMgr::initRoguelikeCardData(this);
  if ( ret )
    return ret;
  reta = RoguelikeMiscMgr::initRoguelikeCurseData(this);
  if ( reta )
    return reta;
  retb = RoguelikeMiscMgr::addRoguelikeTeamDynamicSgvMap(this);
  if ( retb )
    return retb;
  else
    return 0;
};

// Line 667: range 0000000015955F1A-0000000015955F92
int32_t __cdecl RoguelikeMiscMgr::recoverRoguelikeDungeonRuntimeMiscData(RoguelikeMiscMgr *const this)
{
  int32_t ret; // [rsp+1Ch] [rbp-4h]
  int32_t reta; // [rsp+1Ch] [rbp-4h]
  int32_t retb; // [rsp+1Ch] [rbp-4h]

  RoguelikeMiscMgr::clearRoguelikeDungeonRuntimeMiscData(this);
  RoguelikeMiscMgr::recoverRoguelikeShikigamiEffect(this);
  ret = RoguelikeMiscMgr::initRoguelikeCardData(this);
  if ( ret )
    return ret;
  reta = RoguelikeMiscMgr::initRoguelikeCurseData(this);
  if ( reta )
    return reta;
  retb = RoguelikeMiscMgr::addRoguelikeTeamDynamicSgvMap(this);
  if ( retb )
    return retb;
  else
    return 0;
};

// Line 692: range 0000000015955F94-00000000159562D2
void __cdecl RoguelikeMiscMgr::clearRoguelikeDungeonRuntimeMiscData(RoguelikeMiscMgr *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx

  if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_init_, v1, &this->is_init_);
  this->is_init_ = 0;
  v2 = ((_BYTE)this + 17) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_in_roguelike_dungeon_, v2, v3);
  this->is_in_roguelike_dungeon_ = 0;
  v4 = ((_BYTE)this + 18) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_post_enter_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_post_enter_roguelike_dungeon_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_post_enter_roguelike_dungeon_, v4, v5);
  this->is_post_enter_roguelike_dungeon_ = 0;
  std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::clear(&this->card_depot_map_);
  std::unordered_map<unsigned int,unsigned int>::clear(&this->card_count_map_);
  std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>>::clear(&this->depot_card_type_weight_map_);
  std::unordered_map<unsigned int,unsigned int>::clear(&this->curse_count_map_);
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::clear(&this->curse_pool_weight_map_);
  RoguelikeMiscMgr::delRoguelikeTeamAbilityGroup(this);
  RoguelikeMiscMgr::clearRoguelikeTeamSgv(this);
  RoguelikeMiscMgr::clearRoguelikeAvatarSgv(this);
  std::unordered_map<std::string,float>::clear(&this->team_sgv_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->bonus_resource_prop_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bonus_resource_prop_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->bonus_resource_prop_, v4, &this->bonus_resource_prop_);
  }
  this->bonus_resource_prop_ = 0.0;
  v6 = ((_BYTE)this + 108) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_mist_clear_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_mist_clear_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_mist_clear_, v6, v7);
  this->is_mist_clear_ = 0;
  RoguelikeEfffectCellParam::reset(&this->cell_param_);
  if ( *(_BYTE *)(((unsigned __int64)&this->rune_free_prob_weight_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rune_free_prob_weight_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rune_free_prob_weight_, v6, &this->rune_free_prob_weight_);
  }
  this->rune_free_prob_weight_ = 0;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->trigger_curse_sub_weight_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_curse_sub_weight_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->trigger_curse_sub_weight_, (((_BYTE)this + 20) & 7u) + 3, v8);
  this->trigger_curse_sub_weight_ = 0;
  v9 = (((_BYTE)this - 76) & 7u) + 3;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->free_refresh_card_prob_weight_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->free_refresh_card_prob_weight_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->free_refresh_card_prob_weight_, v9, v10);
  this->free_refresh_card_prob_weight_ = 0;
  std::unordered_map<data::RoguelikeCardType,unsigned int>::clear(&this->card_add_weight_map_);
  std::unordered_map<data::RoguelikeCardType,unsigned int>::clear(&this->refresh_cell_card_add_weight_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_card_cost_sub_prob_weight_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_card_cost_sub_prob_weight_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->refresh_card_cost_sub_prob_weight_, v9, &this->refresh_card_cost_sub_prob_weight_);
  }
  this->refresh_card_cost_sub_prob_weight_ = 0;
  std::vector<unsigned int>::clear(&this->gm_wish_card_vec_);
};

// Line 721: range 00000000159562D4-0000000015956587
void __cdecl RoguelikeMiscMgr::clearRoguelikeDungeonToBinMiscData(RoguelikeMiscMgr *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->cur_dungeon_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_dungeon_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_dungeon_level_, v1, &this->cur_dungeon_level_);
  }
  this->cur_dungeon_level_ = 0;
  std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::clear(&this->chosen_rune_tuple_vec_);
  std::map<unsigned int,unsigned int>::clear(&this->select_card_map_);
  std::vector<unsigned int>::clear(&this->optional_card_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->optional_card_depot_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->optional_card_depot_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->optional_card_depot_id_, v1, &this->optional_card_depot_id_);
  }
  this->optional_card_depot_id_ = 0;
  v2 = ((_BYTE)this - 84) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_optional_card_can_refresh_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_optional_card_can_refresh_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_optional_card_can_refresh_, v2, v3);
  this->is_optional_card_can_refresh_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->refresh_count_, v2, &this->refresh_count_);
  }
  this->refresh_count_ = 0;
  v4 = (((_BYTE)this - 76) & 7u) + 3;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->card_cell_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_cell_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->card_cell_id_, v4, v5);
  this->card_cell_id_ = 0;
  std::map<unsigned int,unsigned int>::clear(&this->trigger_curse_map_);
  std::unordered_map<std::string,float>::clear(&this->dynamic_team_sgv_map_);
  std::unordered_set<unsigned long>::clear(&this->noheal_guid_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_rand_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_rand_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_rand_count_, v4, &this->cur_rand_count_);
  }
  this->cur_rand_count_ = 0;
  std::unordered_set<unsigned int>::clear(&this->viewed_card_set_);
  std::unordered_set<unsigned int>::clear(&this->viewed_curse_set_);
  std::unordered_set<unsigned long>::clear(&this->add_talent_guid_set_);
  std::map<unsigned int,unsigned int>::clear(&this->chosen_card_type_count_map_);
  std::unordered_set<unsigned int>::clear(&this->gacha_cell_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->use_refresh_free_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->use_refresh_free_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->use_refresh_free_count_, v4, &this->use_refresh_free_count_);
  }
  this->use_refresh_free_count_ = 0;
};

// Line 745: range 0000000015956588-00000000159568CC
void __cdecl RoguelikeMiscMgr::addRoguelikeTeamAbilityGroup(RoguelikeMiscMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  PlayerAbilityGroupComp *AbilityGroupComp; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  PlayerAbilityGroupComp *v6; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  PlayerAbilityGroupComp *v8; // rax
  std::shared_ptr<Config> v9; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-90h] BYREF
  char v11[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 19 team_entity_ptr:747";
  *(_QWORD *)(v1 + 16) = RoguelikeMiscMgr::addRoguelikeTeamAbilityGroup;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Player::getAvatarComp(this->player_);
  PlayerAvatarComp::getTeamEntity((const PlayerAvatarComp *const)(v1 + 32));
  if ( std::operator==<AvatarTeamEntity>(0LL, (const std::shared_ptr<AvatarTeamEntity> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "addRoguelikeTeamAbilityGroup",
      750);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      &v10,
      (const char (*)[34])"[ROGUELIKE] getTeamEntity nullptr");
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    AbilityGroupComp = Player::getAbilityGroupComp(this->player_);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v9);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
    PlayerAbilityGroupComp::addNoneFilterAbilityGroup(
      AbilityGroupComp,
      &v5->design_config.txt_config_mgr.activity_rogue_config_mgr.avatar_ability_group_vec,
      0);
    std::shared_ptr<Config>::~shared_ptr(&v9);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v6 = Player::getAbilityGroupComp(this->player_);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v9);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
    PlayerAbilityGroupComp::addTeamAbilityGroup(
      v6,
      &v7->design_config.txt_config_mgr.activity_rogue_config_mgr.team_ability_group_vec,
      0);
    std::shared_ptr<Config>::~shared_ptr(&v9);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v8 = Player::getAbilityGroupComp(this->player_);
    PlayerAbilityGroupComp::tryRefreshAbilityGroup(v8);
  }
  std::shared_ptr<AvatarTeamEntity>::~shared_ptr((std::shared_ptr<AvatarTeamEntity> *const)(v1 + 32));
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 759: range 00000000159568CE-0000000015956A45
void __cdecl RoguelikeMiscMgr::delRoguelikeTeamAbilityGroup(RoguelikeMiscMgr *const this)
{
  PlayerAbilityGroupComp *AbilityGroupComp; // rbx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  PlayerAbilityGroupComp *v3; // rbx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  PlayerAbilityGroupComp *v5; // rax
  std::shared_ptr<Config> v6[2]; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  AbilityGroupComp = Player::getAbilityGroupComp(this->player_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v6);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v6);
  PlayerAbilityGroupComp::delNoneFilterAbilityGroup(
    AbilityGroupComp,
    &v2->design_config.txt_config_mgr.activity_rogue_config_mgr.avatar_ability_group_vec);
  std::shared_ptr<Config>::~shared_ptr(v6);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v3 = Player::getAbilityGroupComp(this->player_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v6);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v6);
  PlayerAbilityGroupComp::delTeamAbilityGroup(
    v3,
    &v4->design_config.txt_config_mgr.activity_rogue_config_mgr.team_ability_group_vec);
  std::shared_ptr<Config>::~shared_ptr(v6);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v5 = Player::getAbilityGroupComp(this->player_);
  PlayerAbilityGroupComp::tryRefreshAbilityGroup(v5);
};

// Line 773: range 0000000015956A46-0000000015956DA1
void __cdecl RoguelikeMiscMgr::setRoguelikeTeamSgv(RoguelikeMiscMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  char v4; // r15
  bool v5; // r14
  Creature *v6; // rdi
  std::unordered_map<std::string,float>::iterator __for_begin; // [rsp+10h] [rbp-D0h] BYREF
  std::unordered_map<std::string,float>::iterator __for_end; // [rsp+18h] [rbp-C8h] BYREF
  std::unordered_map<std::string,float> *__for_range; // [rsp+20h] [rbp-C0h]
  const std::pair<const std::string,float> *v10; // [rsp+28h] [rbp-B8h]
  std::tuple_element<0,const std::pair<const std::string,float> >::type *key; // [rsp+30h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const std::string,float> >::type *value; // [rsp+38h] [rbp-A8h]
  std::shared_ptr<Scene> __a; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v14; // [rsp+50h] [rbp-90h] BYREF
  char v15[112]; // [rsp+70h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 19 team_entity_ptr:774";
  *(_QWORD *)(v1 + 16) = RoguelikeMiscMgr::setRoguelikeTeamSgv;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Player::getAvatarComp(this->player_);
  PlayerAvatarComp::getTeamEntity((const PlayerAvatarComp *const)(v1 + 32));
  v4 = 0;
  v5 = 1;
  if ( !std::operator==<AvatarTeamEntity>(0LL, (const std::shared_ptr<AvatarTeamEntity> *)(v1 + 32)) )
  {
    std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    Entity::getScene((const Entity *const)&__a);
    v4 = 1;
    if ( !std::operator==<Scene>(0LL, &__a) )
      v5 = 0;
  }
  if ( v4 )
    std::shared_ptr<Scene>::~shared_ptr(&__a);
  if ( v5 )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "setRoguelikeTeamSgv",
      777);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      &v14,
      (const char (*)[34])"[ROGUELIKE] getTeamEntity nullptr");
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  else
  {
    __for_range = &this->team_sgv_map_;
    __for_begin._M_cur = std::unordered_map<std::string,float>::begin(&this->team_sgv_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<std::string,float>::end(&this->team_sgv_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<std::string const,float>,true>(&__for_begin, &__for_end) )
    {
      v10 = std::__detail::_Node_iterator<std::pair<std::string const,float>,false,true>::operator*(&__for_begin);
      key = std::get<0ul,std::string const,float>(v10);
      value = (std::tuple_element<1,const std::pair<const std::string,float> >::type *)std::get<1ul,std::string const,float>(v10);
      v6 = std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
      {
        v6 = (Creature *)value;
        __asan_report_load4(value);
      }
      Creature::setServerGlobalValue(v6, key, *value, 1);
      std::__detail::_Node_iterator<std::pair<std::string const,float>,false,true>::operator++(&__for_begin);
    }
  }
  std::shared_ptr<AvatarTeamEntity>::~shared_ptr((std::shared_ptr<AvatarTeamEntity> *const)(v1 + 32));
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 787: range 0000000015956DA2-00000000159570BD
void __cdecl RoguelikeMiscMgr::clearRoguelikeTeamSgv(RoguelikeMiscMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  char v4; // r15
  bool v5; // r14
  std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::unordered_map<std::string,float>::iterator __for_begin; // [rsp+10h] [rbp-D0h] BYREF
  std::unordered_map<std::string,float>::iterator __for_end; // [rsp+18h] [rbp-C8h] BYREF
  std::unordered_map<std::string,float> *__for_range; // [rsp+20h] [rbp-C0h]
  const std::pair<const std::string,float> *v10; // [rsp+28h] [rbp-B8h]
  std::tuple_element<0,const std::pair<const std::string,float> >::type *key; // [rsp+30h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const std::string,float> >::type *value; // [rsp+38h] [rbp-A8h]
  std::shared_ptr<Scene> __a; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v14; // [rsp+50h] [rbp-90h] BYREF
  char v15[112]; // [rsp+70h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 19 team_entity_ptr:788";
  *(_QWORD *)(v1 + 16) = RoguelikeMiscMgr::clearRoguelikeTeamSgv;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Player::getAvatarComp(this->player_);
  PlayerAvatarComp::getTeamEntity((const PlayerAvatarComp *const)(v1 + 32));
  v4 = 0;
  v5 = 1;
  if ( !std::operator==<AvatarTeamEntity>(0LL, (const std::shared_ptr<AvatarTeamEntity> *)(v1 + 32)) )
  {
    std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    Entity::getScene((const Entity *const)&__a);
    v4 = 1;
    if ( !std::operator==<Scene>(0LL, &__a) )
      v5 = 0;
  }
  if ( v4 )
    std::shared_ptr<Scene>::~shared_ptr(&__a);
  if ( v5 )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "clearRoguelikeTeamSgv",
      791);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      &v14,
      (const char (*)[34])"[ROGUELIKE] getTeamEntity nullptr");
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  else
  {
    __for_range = &this->team_sgv_map_;
    __for_begin._M_cur = std::unordered_map<std::string,float>::begin(&this->team_sgv_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<std::string,float>::end(&this->team_sgv_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<std::string const,float>,true>(&__for_begin, &__for_end) )
    {
      v10 = std::__detail::_Node_iterator<std::pair<std::string const,float>,false,true>::operator*(&__for_begin);
      key = std::get<0ul,std::string const,float>(v10);
      value = (std::tuple_element<1,const std::pair<const std::string,float> >::type *)std::get<1ul,std::string const,float>(v10);
      v6 = std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      Creature::setServerGlobalValue(v6, key, 0.0, 1);
      std::__detail::_Node_iterator<std::pair<std::string const,float>,false,true>::operator++(&__for_begin);
    }
  }
  std::shared_ptr<AvatarTeamEntity>::~shared_ptr((std::shared_ptr<AvatarTeamEntity> *const)(v1 + 32));
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 801: range 00000000159570BE-0000000015957738
void __cdecl RoguelikeMiscMgr::setRoguelikeAvatarSgv(RoguelikeMiscMgr *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  unsigned __int64 v4; // rax
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  int v9; // r14d
  bool v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r15
  TxtConfigMgr *p_txt_config_mgr; // rax
  float noheal_avatar_sgv_value; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rcx
  std::vector<long unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-F0h] BYREF
  std::vector<long unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-E8h] BYREF
  RogueLikeDungeonRuntimeMgr *runtime_mgr; // [rsp+20h] [rbp-E0h]
  const std::vector<long unsigned int> *__for_range; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<Config> v24; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<Scene> __a; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v26; // [rsp+50h] [rbp-B0h] BYREF
  char v27[144]; // [rsp+70h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 8 guid:803 64 16 14 avatar_ptr:807";
  *(_QWORD *)(v1 + 16) = RoguelikeMiscMgr::setRoguelikeAvatarSgv;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->activity_);
  runtime_mgr = RoguelikeDungeonActivity::getRogueDungeonRuntimeMgr(this->activity_);
  __for_range = (const std::vector<long unsigned int> *)RogueLikeDungeonRuntimeMgr::getRogueTeam(runtime_mgr);
  __for_begin._M_current = std::vector<unsigned long>::begin(__for_range)._M_current;
  __for_end._M_current = std::vector<unsigned long>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<unsigned long const*,std::vector<unsigned long>>(&__for_begin, &__for_end) )
  {
    v4 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator*(&__for_begin);
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(v4);
    *(_QWORD *)(v1 + 32) = *(_QWORD *)v4;
    if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned long>,unsigned long>(
            &this->noheal_guid_set_,
            (const unsigned __int64 *)(v1 + 32)) )
      goto LABEL_25;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    AvatarComp = Player::getAvatarComp(this->player_);
    PlayerAvatarComp::findAvatar<MirrorAvatar>((const PlayerAvatarComp *const)(v1 + 64), (uint64_t)AvatarComp);
    if ( std::operator==<MirrorAvatar>(0LL, (const std::shared_ptr<MirrorAvatar> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "setRoguelikeAvatarSgv",
        810);
      v6 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v26,
             (const char (*)[35])"[ROGUELIKE] findAvatar fail, guid:");
      v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
             v6,
             (const unsigned __int64 *)(v1 + 32));
      v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v7, (const char (*)[10])", player:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
LABEL_16:
      operator<<(v8, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v26);
      v9 = 0;
      goto LABEL_24;
    }
    std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    Entity::getScene((const Entity *const)&__a);
    v10 = std::operator==<Scene>(0LL, &__a);
    std::shared_ptr<Scene>::~shared_ptr(&__a);
    if ( v10 )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "setRoguelikeAvatarSgv",
        815);
      v11 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v26,
              (const char (*)[44])"[ROGUELIKE] avatar get scene nullptr, guid:");
      v12 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v11,
              (const unsigned __int64 *)(v1 + 32));
      v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])", player:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      goto LABEL_16;
    }
    v13 = std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&__a);
    p_txt_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__a)->design_config.txt_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&p_txt_config_mgr->activity_rogue_config_mgr.noheal_avatar_sgv_value >> 3)
                  + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&p_txt_config_mgr->activity_rogue_config_mgr.noheal_avatar_sgv_value >> 3)
                  + 0x7FFF8000) <= 3 )
    {
      p_txt_config_mgr = (TxtConfigMgr *)__asan_report_load4(&p_txt_config_mgr->activity_rogue_config_mgr.noheal_avatar_sgv_value);
    }
    noheal_avatar_sgv_value = p_txt_config_mgr->activity_rogue_config_mgr.noheal_avatar_sgv_value;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v24);
    v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
    Creature::setServerGlobalValue(
      v13,
      &v16->design_config.txt_config_mgr.activity_rogue_config_mgr.noheal_avatar_sgv_key,
      noheal_avatar_sgv_value,
      1);
    std::shared_ptr<Config>::~shared_ptr(&v24);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__a);
    v9 = 1;
LABEL_24:
    std::shared_ptr<MirrorAvatar>::~shared_ptr((std::shared_ptr<MirrorAvatar> *const)(v1 + 64));
    if ( v9 != 1 )
      break;
LABEL_25:
    __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v26,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
    "setRoguelikeAvatarSgv",
    822);
  v17 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
          &v26,
          (const char (*)[52])"[ROGUELIKE] setRoguelikeAvatarSgv, noheal_guid_set:");
  v18 = common::milog::MiLogStream::operator<<<unsigned long>(v17, &this->noheal_guid_set_);
  v19 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v18, (const char (*)[10])", player:");
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  operator<<(v19, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v26);
  if ( v27 == (char *)v1 )
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

// Line 826: range 000000001595773A-0000000015957D17
void __cdecl RoguelikeMiscMgr::clearRoguelikeAvatarSgv(RoguelikeMiscMgr *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  unsigned __int64 v4; // rax
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  int v9; // r14d
  bool v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  std::vector<long unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-E0h] BYREF
  std::vector<long unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-D8h] BYREF
  RogueLikeDungeonRuntimeMgr *runtime_mgr; // [rsp+20h] [rbp-D0h]
  const std::vector<long unsigned int> *__for_range; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Scene> __a; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-B0h] BYREF
  char v24[144]; // [rsp+60h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 8 guid:828 64 16 14 avatar_ptr:832";
  *(_QWORD *)(v1 + 16) = RoguelikeMiscMgr::clearRoguelikeAvatarSgv;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->activity_);
  runtime_mgr = RoguelikeDungeonActivity::getRogueDungeonRuntimeMgr(this->activity_);
  __for_range = (const std::vector<long unsigned int> *)RogueLikeDungeonRuntimeMgr::getRogueTeam(runtime_mgr);
  __for_begin._M_current = std::vector<unsigned long>::begin(__for_range)._M_current;
  __for_end._M_current = std::vector<unsigned long>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<unsigned long const*,std::vector<unsigned long>>(&__for_begin, &__for_end) )
  {
    v4 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator*(&__for_begin);
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(v4);
    *(_QWORD *)(v1 + 32) = *(_QWORD *)v4;
    if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned long>,unsigned long>(
            &this->noheal_guid_set_,
            (const unsigned __int64 *)(v1 + 32)) )
      goto LABEL_23;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    AvatarComp = Player::getAvatarComp(this->player_);
    PlayerAvatarComp::findAvatar<MirrorAvatar>((const PlayerAvatarComp *const)(v1 + 64), (uint64_t)AvatarComp);
    if ( std::operator==<MirrorAvatar>(0LL, (const std::shared_ptr<MirrorAvatar> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "clearRoguelikeAvatarSgv",
        835);
      v6 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v23,
             (const char (*)[35])"[ROGUELIKE] findAvatar fail, guid:");
      v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
             v6,
             (const unsigned __int64 *)(v1 + 32));
      v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v7, (const char (*)[10])", player:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
LABEL_16:
      operator<<(v8, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v23);
      v9 = 0;
      goto LABEL_22;
    }
    std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    Entity::getScene((const Entity *const)&__a);
    v10 = std::operator==<Scene>(0LL, &__a);
    std::shared_ptr<Scene>::~shared_ptr(&__a);
    if ( v10 )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "clearRoguelikeAvatarSgv",
        840);
      v11 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v23,
              (const char (*)[44])"[ROGUELIKE] avatar get scene nullptr, guid:");
      v12 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v11,
              (const unsigned __int64 *)(v1 + 32));
      v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])", player:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      goto LABEL_16;
    }
    v13 = std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&__a);
    v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__a);
    Creature::setServerGlobalValue(
      v13,
      &v14->design_config.txt_config_mgr.activity_rogue_config_mgr.noheal_avatar_sgv_key,
      0.0,
      1);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__a);
    v9 = 1;
LABEL_22:
    std::shared_ptr<MirrorAvatar>::~shared_ptr((std::shared_ptr<MirrorAvatar> *const)(v1 + 64));
    if ( v9 != 1 )
      break;
LABEL_23:
    __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v23,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
    "clearRoguelikeAvatarSgv",
    846);
  v15 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
          &v23,
          (const char (*)[54])"[ROGUELIKE] clearRoguelikeAvatarSgv, noheal_guid_set:");
  v16 = common::milog::MiLogStream::operator<<<unsigned long>(v15, &this->noheal_guid_set_);
  v17 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v16, (const char (*)[10])", player:");
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  operator<<(v17, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v23);
  if ( v24 == (char *)v1 )
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

// Line 851: range 0000000015957D18-0000000015957E5C
int32_t __cdecl RoguelikeMiscMgr::addRoguelikeTeamDynamicSgvMap(RoguelikeMiscMgr *const this)
{
  const float *v1; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,float>,false,true>,bool> v2; // rax
  common::milog::MiLogStream *v3; // rax
  std::unordered_map<std::string,float>::iterator __for_begin; // [rsp+10h] [rbp-60h] BYREF
  std::unordered_map<std::string,float>::iterator __for_end; // [rsp+18h] [rbp-58h] BYREF
  std::unordered_map<std::string,float> *__for_range; // [rsp+20h] [rbp-50h]
  const std::pair<const std::string,float> *v8; // [rsp+28h] [rbp-48h]
  std::tuple_element<0,const std::pair<const std::string,float> >::type *key; // [rsp+30h] [rbp-40h]
  std::tuple_element<1,const std::pair<const std::string,float> >::type *value; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v11; // [rsp+40h] [rbp-30h] BYREF

  __for_range = &this->dynamic_team_sgv_map_;
  __for_begin._M_cur = std::unordered_map<std::string,float>::begin(&this->dynamic_team_sgv_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<std::string,float>::end(&this->dynamic_team_sgv_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<std::string const,float>,true>(&__for_begin, &__for_end) )
  {
    v8 = std::__detail::_Node_iterator<std::pair<std::string const,float>,false,true>::operator*(&__for_begin);
    key = std::get<0ul,std::string const,float>(v8);
    value = (std::tuple_element<1,const std::pair<const std::string,float> >::type *)std::get<1ul,std::string const,float>(v8);
    v2 = std::unordered_map<std::string,float>::emplace<std::string const&,float const&>(
           &this->team_sgv_map_,
           key,
           value,
           (const std::string *)&this->team_sgv_map_,
           v1);
    if ( !v2.second )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "addRoguelikeTeamDynamicSgvMap",
        857);
      v3 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
             &v11,
             (const char (*)[53])"[ROGUELIKE] duplicate sgv key in team_sgv_map_, key:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v3, key);
      common::milog::MiLogStream::~MiLogStream(&v11);
    }
    std::__detail::_Node_iterator<std::pair<std::string const,float>,false,true>::operator++(&__for_begin);
  }
  return 0;
};

// Line 865: range 0000000015957E5E-000000001595DE61
std::vector<unsigned int> *__cdecl RoguelikeMiscMgr::doRoguelikeEffectAndGetParamVec(
        std::vector<unsigned int> *retstr,
        RoguelikeMiscMgr *const this,
        const data::RoguelikeEffectExcelConfig *effect_config,
        uint32_t effect_count,
        RoguelikeMiscMgr::EffectSourceType source_type,
        uint32_t source_id)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  GameserverService *v9; // rsi
  common::milog::MiLogStream *v10; // rax
  std::unordered_map<std::string,float>::mapped_type *v11; // rax
  unsigned int *v12; // rdx
  __m128i v13; // xmm0
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  char v16; // r15
  bool v17; // r14
  std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  unsigned int v22; // ecx
  SelectType v23; // ecx
  char v24; // dl
  __int64 v25; // rsi
  __int64 v26; // rdx
  unsigned int v27; // ecx
  std::tuple_element<0,std::tuple<unsigned int> >::type v28; // ecx
  char v29; // dl
  __int64 v30; // rsi
  __int64 v31; // rdx
  unsigned int v32; // ecx
  std::tuple_element<0,std::tuple<unsigned int> >::type *v33; // rsi
  std::tuple_element<0,std::tuple<unsigned int,unsigned int> >::type *v34; // rax
  std::tuple_element<0,std::tuple<unsigned int,unsigned int> >::type *v35; // rdx
  std::tuple_element<0,std::tuple<unsigned int,unsigned int> >::type v36; // ecx
  char v37; // dl
  __int64 v38; // rdx
  __int64 v39; // rsi
  std::tuple_element<0,std::tuple<unsigned int> >::type v40; // ecx
  char v41; // dl
  __int64 v42; // rdx
  int32_t v43; // edi
  google::protobuf::RepeatedPtrField<proto::RoguelikeRuneRecord> *v44; // rdx
  __int64 v45; // rsi
  __int64 v46; // rdx
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rcx
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rcx
  common::milog::MiLogStream *v52; // rcx
  common::milog::MiLogStream *v53; // rax
  char *v54; // rsi
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  uint32_t v57; // ecx
  char v58; // dl
  __int64 v59; // rdx
  char *v60; // rsi
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  uint32_t v63; // ecx
  int v64; // eax
  bool v65; // r14
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // r14
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  std::vector<std::string>::reference v71; // rax
  const char *v72; // rax
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  const std::string *v75; // rax
  common::milog::MiLogStream *v76; // r14
  const std::string *v77; // rax
  common::milog::MiLogStream *v78; // rax
  unsigned __int64 v79; // rax
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rax
  unsigned int v82; // edx
  common::milog::MiLogStream *v83; // rax
  unsigned int v84; // edx
  __int64 v85; // rsi
  __int64 v86; // rdx
  char v87; // al
  bool v88; // r14
  common::milog::MiLogStream *v89; // rax
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // r14
  common::milog::MiLogStream *v92; // rax
  common::milog::MiLogStream *v93; // rax
  std::vector<unsigned int>::reference v94; // rax
  _DWORD *v95; // rdx
  std::vector<unsigned int>::reference v96; // rax
  _DWORD *v97; // rdx
  char v98; // al
  common::milog::MiLogStream *v99; // rax
  common::milog::MiLogStream *v100; // rax
  unsigned __int64 v101; // rax
  unsigned __int64 v102; // rax
  std::vector<unsigned int>::reference v103; // rax
  uint32_t *v104; // rdx
  unsigned __int64 v105; // rax
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v107; // rax
  common::milog::MiLogStream *v108; // rax
  common::milog::MiLogStream *v109; // rcx
  std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v110; // rax
  TalentComp *TalentComp; // r14
  std::vector<unsigned int>::reference v112; // rax
  uint32_t *v113; // rdx
  common::milog::MiLogStream *v114; // rax
  common::milog::MiLogStream *v115; // rax
  std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v116; // rax
  std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v117; // rax
  common::milog::MiLogStream *v118; // rax
  common::milog::MiLogStream *v119; // rax
  common::milog::MiLogStream *v120; // r14
  const unsigned int *v121; // rax
  common::milog::MiLogStream *v122; // rax
  common::milog::MiLogStream *v123; // rax
  unsigned int v124; // ecx
  uint32_t v125; // ecx
  char v126; // dl
  __int64 v127; // rsi
  __int64 v128; // rdx
  bool v129; // r14
  common::milog::MiLogStream *v130; // rax
  common::milog::MiLogStream *v131; // rax
  common::milog::MiLogStream *v132; // r14
  common::milog::MiLogStream *v133; // rax
  common::milog::MiLogStream *v134; // rax
  std::vector<unsigned int>::reference v135; // rax
  uint32_t *v136; // rdx
  uint32_t v137; // ecx
  char v138; // dl
  __int64 v139; // rsi
  __int64 v140; // rdx
  common::milog::MiLogStream *v141; // rax
  common::milog::MiLogStream *v142; // rax
  unsigned __int64 v143; // rax
  unsigned __int64 v144; // rax
  common::milog::MiLogStream *v145; // rax
  common::milog::MiLogStream *v146; // rax
  common::milog::MiLogStream *v147; // rcx
  common::milog::MiLogStream *v148; // rcx
  unsigned __int64 v149; // rax
  PlayerAvatarComp *v150; // rax
  common::milog::MiLogStream *v151; // rax
  common::milog::MiLogStream *v152; // rax
  common::milog::MiLogStream *v153; // rcx
  const RogueTeam *RogueTeam; // rax
  std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v155; // rax
  std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v156; // rax
  common::milog::MiLogStream *v157; // rax
  common::milog::MiLogStream *v158; // rax
  common::milog::MiLogStream *v159; // rax
  common::milog::MiLogStream *v160; // rax
  bool v161; // r14
  common::milog::MiLogStream *v162; // rax
  common::milog::MiLogStream *v163; // rax
  common::milog::MiLogStream *v164; // rax
  common::milog::MiLogStream *v165; // rax
  std::vector<std::string>::reference v166; // rax
  const char *v167; // rax
  common::milog::MiLogStream *v168; // rax
  common::milog::MiLogStream *v169; // rax
  common::milog::MiLogStream *v170; // rax
  common::milog::MiLogStream *v171; // rax
  const std::string *v172; // rax
  common::milog::MiLogStream *v173; // r14
  const std::string *v174; // rax
  common::milog::MiLogStream *v175; // rax
  unsigned int v176; // r14d
  std::unordered_map<data::RoguelikeCardType,unsigned int>::mapped_type *v177; // rax
  unsigned int *v178; // rdx
  SelectType v179; // r14d
  char *v180; // rsi
  std::unordered_map<data::RoguelikeCardType,unsigned int>::mapped_type *v181; // rax
  SelectType *v182; // rdx
  char v183; // cl
  unsigned int v184; // r14d
  std::unordered_map<data::RoguelikeCardType,unsigned int>::mapped_type *v185; // rax
  unsigned int *v186; // rdx
  SelectType v187; // r14d
  char *v188; // rsi
  std::unordered_map<data::RoguelikeCardType,unsigned int>::mapped_type *v189; // rax
  SelectType *v190; // rdx
  char v191; // cl
  common::milog::MiLogStream *v192; // rax
  common::milog::MiLogStream *v193; // rax
  unsigned int v194; // edx
  common::milog::MiLogStream *v195; // rax
  unsigned int v196; // edx
  __int64 v197; // rsi
  __int64 v198; // rdx
  char v199; // al
  common::milog::MiLogStream *v200; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v201; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v202; // r14d
  google::protobuf::Map<unsigned int,unsigned int> *v203; // rax
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v204; // rsi
  unsigned int *v205; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v206; // rdx
  char v207; // cl
  common::milog::MiLogStream *v208; // rax
  google::protobuf::Map<unsigned int,unsigned int> *v209; // rax
  unsigned __int64 v210; // rax
  bool v211; // al
  __int64 v212; // rsi
  __int64 v213; // rdx
  __int64 v214; // rsi
  __int64 v215; // rdx
  std::allocator<char> __a; // [rsp+3Bh] [rbp-3D5h] BYREF
  uint32_t clear_count; // [rsp+3Ch] [rbp-3D4h]
  uint32_t base_count; // [rsp+40h] [rbp-3D0h]
  float delta_prob; // [rsp+44h] [rbp-3CCh]
  uint32_t old_count; // [rsp+48h] [rbp-3C8h]
  float value; // [rsp+4Ch] [rbp-3C4h]
  std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::iterator __for_begin; // [rsp+50h] [rbp-3C0h] BYREF
  const ActivityRogueExcelConfigMgr *rogue_config_mgr; // [rsp+58h] [rbp-3B8h]
  RogueLikeDungeonRuntimeMgr *runtime_mgr_4; // [rsp+60h] [rbp-3B0h]
  RogueLikeDungeonRuntimeMgr *runtime_mgr_2; // [rsp+68h] [rbp-3A8h]
  const std::vector<long unsigned int> *__for_range_3; // [rsp+70h] [rbp-3A0h]
  const std::vector<long unsigned int> *__for_range_4; // [rsp+78h] [rbp-398h]
  std::vector<std::tuple<unsigned int,unsigned int,unsigned int>> *__for_range; // [rsp+80h] [rbp-390h]
  std::tuple<unsigned int,unsigned int,unsigned int> *__t; // [rsp+88h] [rbp-388h]
  std::tuple_element<0,std::tuple<unsigned int,unsigned int,unsigned int> >::type *rune_id; // [rsp+90h] [rbp-380h]
  std::tuple_element<0,std::tuple<unsigned int,unsigned int> >::type *left_count; // [rsp+98h] [rbp-378h]
  std::tuple_element<0,std::tuple<unsigned int> >::type *max_count; // [rsp+A0h] [rbp-370h]
  std::map<unsigned int,unsigned int> *__for_range_5; // [rsp+A8h] [rbp-368h]
  const std::pair<unsigned int const,unsigned int> *v241; // [rsp+B0h] [rbp-360h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *curse_id; // [rsp+B8h] [rbp-358h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+C0h] [rbp-350h]
  RogueLikeDungeonRuntimeMgr *runtime_mgr; // [rsp+C8h] [rbp-348h]
  RogueLikeDungeonRuntimeMgr *runtime_mgr_0; // [rsp+D0h] [rbp-340h]
  RogueLikeDungeonRuntimeMgr *runtime_mgr_1; // [rsp+D8h] [rbp-338h]
  const std::vector<long unsigned int> *__for_range_0; // [rsp+E0h] [rbp-330h]
  const std::vector<long unsigned int> *__for_range_1; // [rsp+E8h] [rbp-328h]
  std::vector<long unsigned int> *__for_range_2; // [rsp+F0h] [rbp-320h]
  RogueLikeDungeonRuntimeMgr *runtime_mgr_3; // [rsp+F8h] [rbp-318h]
  common::milog::MiLogStream v251; // [rsp+100h] [rbp-310h] BYREF
  char v252[752]; // [rsp+120h] [rbp-2F0h] BYREF

  v6 = (unsigned __int64)v252;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_4(704LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "12 48 4 14 card_type:1274 64 4 13 curse_id:1360 80 8 9 guid:1221 112 8 16 chosen_guid:1241 144 1"
                        "6 19 team_entity_ptr:889 176 16 15 avatar_ptr:1242 208 24 14 param_vec:1103 272 24 22 optional_g"
                        "uid_vec:1210 336 24 18 param_str_vec:1263 400 48 21 fight_prop_guard:1143 480 48 14 count_map:13"
                        "45 560 104 11 notify:1339";
  *(_QWORD *)(v6 + 16) = RoguelikeMiscMgr::doRoguelikeEffectAndGetParamVec;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = 61956;
  v8[536862722] = -234881024;
  v8[536862723] = 62194;
  v8[536862723] = -234881024;
  v8[536862724] = 62194;
  v8[536862725] = 62194;
  v8[536862726] = 62194;
  v8[536862727] = -218959360;
  v8[536862728] = 62194;
  v8[536862729] = -218959360;
  v8[536862730] = 62194;
  v8[536862731] = -218959360;
  v8[536862732] = 62194;
  v8[536862734] = -218959118;
  v8[536862736] = -219021312;
  v8[536862737] = 62194;
  v8[536862740] = -218103808;
  v8[536862741] = -202116109;
  v9 = ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v6 + 176));
  rogue_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 176))->design_config.txt_config_mgr.activity_rogue_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v6 + 176));
  std::vector<unsigned int>::vector(retstr);
  if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&effect_config->effect_type);
  }
  switch ( effect_config->effect_type )
  {
    case ROGUELIKE_EFFECT_STATIC_COMBAT:
    case ROGUELIKE_EFFECT_DYNAMIC_COMBAT:
      if ( !common::tools::MiscUtils::isContains<std::unordered_map<std::string,float> const,std::string>(
              &rogue_config_mgr->team_sgv_value_map,
              &effect_config->effect_key) )
      {
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          876);
        v10 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                &v251,
                (const char (*)[40])"[ROGUELIKE] can not find team sgv, key:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &effect_config->effect_key);
        common::milog::MiLogStream::~MiLogStream(&v251);
      }
      else
      {
        v11 = (std::unordered_map<std::string,float>::mapped_type *)std::unordered_map<std::string,float>::at(
                                                                      &rogue_config_mgr->team_sgv_value_map,
                                                                      &effect_config->effect_key);
        v12 = (unsigned int *)v11;
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v11);
        }
        v13 = _mm_cvtsi32_si128(*v12);
        *(float *)v13.m128i_i32 = SAFE_MULTIPLY<unsigned int,float>(effect_count, *(float *)v13.m128i_i32);
        value = COERCE_FLOAT(_mm_cvtsi128_si32(v13));
        v14 = (unsigned __int64)std::unordered_map<std::string,float>::operator[](
                                  &this->team_sgv_map_,
                                  &effect_config->effect_key);
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) != 0 && (char)((v14 & 7) + 3) >= *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
          v14 = __asan_report_load4(v14);
        *(float *)v14 = *(float *)v14 + value;
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        if ( effect_config->effect_type == ROGUELIKE_EFFECT_DYNAMIC_COMBAT )
        {
          v15 = (unsigned __int64)std::unordered_map<std::string,float>::operator[](
                                    &this->dynamic_team_sgv_map_,
                                    &effect_config->effect_key);
          if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) != 0 && (char)((v15 & 7) + 3) >= *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
            v15 = __asan_report_load4(v15);
          *(float *)v15 = *(float *)v15 + value;
        }
        if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&this->is_init_);
        if ( this->is_init_ )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3)
                                                              + 0x7FFF8000) )
          {
            __asan_report_load1(&this->is_in_roguelike_dungeon_);
          }
          if ( this->is_in_roguelike_dungeon_ )
          {
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            Player::getAvatarComp(this->player_);
            PlayerAvatarComp::getTeamEntity((const PlayerAvatarComp *const)(v6 + 144));
            v16 = 0;
            v17 = 1;
            if ( !std::operator==<AvatarTeamEntity>(0LL, (const std::shared_ptr<AvatarTeamEntity> *)(v6 + 144)) )
            {
              std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 144));
              Entity::getScene((const Entity *const)(v6 + 176));
              v16 = 1;
              if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v6 + 176)) )
                v17 = 0;
            }
            if ( v16 )
              std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v6 + 176));
            if ( v17 )
            {
              common::milog::MiLogStream::create(
                &v251,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
                "doRoguelikeEffectAndGetParamVec",
                892);
              common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v251,
                (const char (*)[34])"[ROGUELIKE] getTeamEntity nullptr");
              common::milog::MiLogStream::~MiLogStream(&v251);
            }
            else
            {
              v18 = std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 144));
              Creature::addOrCreateServerGlobalValue(v18, &effect_config->effect_key, value, 1);
            }
            std::shared_ptr<AvatarTeamEntity>::~shared_ptr((std::shared_ptr<AvatarTeamEntity> *const)(v6 + 144));
          }
        }
      }
      goto LABEL_484;
    case ROGUELIKE_EFFECT_DISABLE_SPRING_CELL:
      v212 = ((_BYTE)this - 86) & 7;
      v213 = (*(_BYTE *)(((unsigned __int64)&this->cell_param_.is_ban_spring >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v212 >= *(_BYTE *)(((unsigned __int64)&this->cell_param_.is_ban_spring >> 3) + 0x7FFF8000));
      if ( (_BYTE)v213 )
        __asan_report_store1(&this->cell_param_.is_ban_spring, v212, v213);
      this->cell_param_.is_ban_spring = 1;
      if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_init_);
      if ( !this->is_init_ )
        goto LABEL_467;
      if ( *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_in_roguelike_dungeon_);
      }
      if ( !this->is_in_roguelike_dungeon_ )
        goto LABEL_467;
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->activity_);
      runtime_mgr_3 = RoguelikeDungeonActivity::getRogueDungeonRuntimeMgr(this->activity_);
      if ( RogueLikeDungeonRuntimeMgr::banSpring(runtime_mgr_3) )
      {
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          1386);
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          &v251,
          (const char (*)[29])"[ROGUELIKE] banSpring failed");
        common::milog::MiLogStream::~MiLogStream(&v251);
      }
      else
      {
LABEL_467:
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          1390);
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          &v251,
          (const char (*)[32])"[ROGUELIKE] banSpring exec succ");
        common::milog::MiLogStream::~MiLogStream(&v251);
      }
      goto LABEL_484;
    case ROGUELIKE_EFFECT_ADD_TALENT:
      if ( !effect_count )
      {
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          1100);
        v21 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                &v251,
                (const char (*)[55])"[ROGUELIKE] effect can not support 1 more count, type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_483;
      }
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v6 + 208));
      std::allocator<char>::allocator(&__a, v9);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v251, ",", &__a);
      v88 = common::tools::StringUtils::splitToList<unsigned int>(
              &effect_config->effect_param,
              (const std::string *)&v251,
              (std::vector<unsigned int> *)(v6 + 208),
              0) != 0;
      std::string::~string(&v251);
      std::allocator<char>::~allocator(&__a);
      if ( v88 )
      {
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          1106);
        v89 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                &v251,
                (const char (*)[52])"[ROGUELIKE] effect param splitToList failed, value:");
        v90 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v89, &effect_config->effect_param);
        v91 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v90, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
LABEL_251:
        *(_QWORD *)(v6 + 112) = data::enumValToStr(effect_config->effect_type);
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v91, (const char *const *)(v6 + 112));
        common::milog::MiLogStream::~MiLogStream(&v251);
        goto LABEL_292;
      }
      if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v6 + 208)) <= 1 )
      {
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          1111);
        v92 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v251,
                (const char (*)[48])"[ROGUELIKE] effect param size too small, value:");
        v93 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v92, &effect_config->effect_param);
        v91 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v93, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_251;
      }
      v94 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v6 + 208), 0LL);
      v95 = v94;
      if ( *(_BYTE *)(((unsigned __int64)v94 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v94 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v94 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v94);
      }
      if ( !*v95 )
        goto LABEL_246;
      v96 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v6 + 208), 1uLL);
      v97 = v96;
      if ( *(_BYTE *)(((unsigned __int64)v96 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v96 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v96 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v96);
      }
      if ( *v97 )
        v98 = 0;
      else
LABEL_246:
        v98 = 1;
      if ( v98 )
      {
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          1117);
        v99 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                &v251,
                (const char (*)[46])"[ROGUELIKE] effect param config error, value:");
        v100 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v99, &effect_config->effect_param);
        v91 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v100, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_251;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->activity_);
      runtime_mgr_1 = RoguelikeDungeonActivity::getRogueDungeonRuntimeMgr(this->activity_);
      std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v6 + 272));
      __for_range_0 = (const std::vector<long unsigned int> *)RogueLikeDungeonRuntimeMgr::getRogueTeam(runtime_mgr_1);
      __for_begin._M_current = (std::tuple<unsigned int,unsigned int,unsigned int> *)std::vector<unsigned long>::begin(__for_range_0)._M_current;
      *(std::vector<long unsigned int>::const_iterator *)(v6 + 112) = std::vector<unsigned long>::end(__for_range_0);
      while ( __gnu_cxx::operator!=<unsigned long const*,std::vector<unsigned long>>(
                (const __gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > *)&__for_begin,
                (const __gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > *)(v6 + 112)) )
      {
        v101 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator*((const __gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > *const)&__for_begin);
        if ( *(_BYTE *)((v101 >> 3) + 0x7FFF8000) )
          v101 = __asan_report_load8(v101);
        *(_QWORD *)(v6 + 80) = *(_QWORD *)v101;
        if ( RoguelikeMiscMgr::canAvatarUnlockTalent(this, *(_QWORD *)(v6 + 80)) )
          std::vector<unsigned long>::push_back(
            (std::vector<long unsigned int> *const)(v6 + 272),
            (const std::vector<long unsigned int>::value_type *)(v6 + 80));
        __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator++((__gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > *const)&__for_begin);
      }
      __for_range_1 = &RogueLikeDungeonRuntimeMgr::getRogueTeam(runtime_mgr_1)->backstage_mirror_avatar_guid_vec;
      __for_begin._M_current = (std::tuple<unsigned int,unsigned int,unsigned int> *)std::vector<unsigned long>::begin(__for_range_1)._M_current;
      *(std::vector<long unsigned int>::const_iterator *)(v6 + 112) = std::vector<unsigned long>::end(__for_range_1);
      while ( __gnu_cxx::operator!=<unsigned long const*,std::vector<unsigned long>>(
                (const __gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > *)&__for_begin,
                (const __gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > *)(v6 + 112)) )
      {
        v102 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator*((const __gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > *const)&__for_begin);
        if ( *(_BYTE *)((v102 >> 3) + 0x7FFF8000) )
          v102 = __asan_report_load8(v102);
        *(_QWORD *)(v6 + 80) = *(_QWORD *)v102;
        if ( RoguelikeMiscMgr::canAvatarUnlockTalent(this, *(_QWORD *)(v6 + 80)) )
          std::vector<unsigned long>::push_back(
            (std::vector<long unsigned int> *const)(v6 + 272),
            (const std::vector<long unsigned int>::value_type *)(v6 + 80));
        __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator++((__gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > *const)&__for_begin);
      }
      if ( !std::vector<unsigned long>::empty((const std::vector<long unsigned int> *const)(v6 + 272)) )
      {
        std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v6 + 336));
        v103 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v6 + 208), 0LL);
        v104 = v103;
        if ( *(_BYTE *)(((unsigned __int64)v103 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v103 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v103 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v103);
        }
        common::tools::RandomUtils::randomSelect<unsigned long>(
          (const std::vector<long unsigned int> *)(v6 + 272),
          (std::vector<long unsigned int> *)(v6 + 336),
          *v104);
        FightPropGuard::FightPropGuard((FightPropGuard *const)(v6 + 400));
        RefreshAbilityGuard::RefreshAbilityGuard((RefreshAbilityGuard *const)(v6 + 480));
        __for_range_2 = (std::vector<long unsigned int> *)(v6 + 336);
        __for_begin._M_current = (std::tuple<unsigned int,unsigned int,unsigned int> *)std::vector<unsigned long>::begin((std::vector<long unsigned int> *const)(v6 + 336))._M_current;
        *(std::vector<long unsigned int>::iterator *)(v6 + 112) = std::vector<unsigned long>::end(__for_range_2);
        while ( 1 )
        {
          if ( !__gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(
                  (const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *)&__for_begin,
                  (const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *)(v6 + 112)) )
          {
            common::milog::MiLogStream::create(
              &v251,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
              "doRoguelikeEffectAndGetParamVec",
              1162);
            v118 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                     &v251,
                     (const char (*)[55])"[ROGUELIKE] tryUnlockTalentForMirrorAvatar, guid_list:");
            v119 = common::milog::MiLogStream::operator<<<unsigned long>(
                     v118,
                     (const std::vector<long unsigned int> *)(v6 + 336));
            v120 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v119, (const char (*)[9])", level:");
            v121 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v6 + 208), 1uLL);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v120, v121);
            common::milog::MiLogStream::~MiLogStream(&v251);
            RefreshAbilityGuard::~RefreshAbilityGuard((RefreshAbilityGuard *const)(v6 + 480));
            FightPropGuard::~FightPropGuard((FightPropGuard *const)(v6 + 400));
            std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v6 + 336));
            goto LABEL_291;
          }
          v105 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*((const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *const)&__for_begin);
          if ( *(_BYTE *)((v105 >> 3) + 0x7FFF8000) )
            v105 = __asan_report_load8(v105);
          *(_QWORD *)(v6 + 80) = *(_QWORD *)v105;
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          AvatarComp = Player::getAvatarComp(this->player_);
          PlayerAvatarComp::findAvatar<MirrorAvatar>((const PlayerAvatarComp *const)(v6 + 176), (uint64_t)AvatarComp);
          if ( std::operator==<MirrorAvatar>(0LL, (const std::shared_ptr<MirrorAvatar> *)(v6 + 176)) )
            break;
          v110 = std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 176));
          TalentComp = Avatar::getTalentComp(v110);
          v112 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v6 + 208), 1uLL);
          v113 = v112;
          if ( *(_BYTE *)(((unsigned __int64)v112 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v112 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v112 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v112);
          }
          if ( TalentComp::tryUnlockTalentForMirrorAvatar(TalentComp, *v113) )
          {
            common::milog::MiLogStream::create(
              &v251,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
              "doRoguelikeEffectAndGetParamVec",
              1155);
            v114 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                     &v251,
                     (const char (*)[55])"[ROGUELIKE] tryUnlockTalentForMirrorAvatar fail, guid:");
            v115 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                     v114,
                     (const unsigned __int64 *)(v6 + 80));
            v109 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v115, (const char (*)[9])" player:");
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            goto LABEL_281;
          }
          std::unordered_set<unsigned long>::insert(
            &this->add_talent_guid_set_,
            (const std::unordered_set<long unsigned int>::value_type *)(v6 + 80));
          v116 = std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 176));
          FightPropGuard::addCreature((FightPropGuard *const)(v6 + 400), v116, 0);
          v117 = std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 176));
          RefreshAbilityGuard::addCreature((RefreshAbilityGuard *const)(v6 + 480), v117);
LABEL_289:
          std::shared_ptr<MirrorAvatar>::~shared_ptr((std::shared_ptr<MirrorAvatar> *const)(v6 + 176));
          __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++((__gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *const)&__for_begin);
        }
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          1150);
        v107 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                 &v251,
                 (const char (*)[35])"[ROGUELIKE] findAvatar fail, guid:");
        v108 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                 v107,
                 (const unsigned __int64 *)(v6 + 80));
        v109 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v108, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
LABEL_281:
        operator<<(v109, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v251);
        goto LABEL_289;
      }
      common::milog::MiLogStream::create(
        &v251,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "doRoguelikeEffectAndGetParamVec",
        1138);
      common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
        &v251,
        (const char (*)[51])"[ROGUELIKE] player have no avatar talent to unlock");
      common::milog::MiLogStream::~MiLogStream(&v251);
LABEL_291:
      std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v6 + 272));
LABEL_292:
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v6 + 208));
LABEL_484:
      if ( v252 == (char *)v6 )
      {
        *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
        *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
        *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
        *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0LL;
        *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0LL;
        *(_QWORD *)((v6 >> 3) + 0x7FFF8028) = 0LL;
        *(_DWORD *)((v6 >> 3) + 0x7FFF8030) = 0;
        *(_DWORD *)((v6 >> 3) + 0x7FFF8038) = 0;
        *(_QWORD *)((v6 >> 3) + 0x7FFF8040) = 0LL;
        *(_QWORD *)((v6 >> 3) + 0x7FFF8050) = 0LL;
      }
      else
      {
        *(_QWORD *)v6 = 1172321806LL;
        *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
        *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
        *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
        *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
        *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
        *(_QWORD *)((v6 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
        *(_QWORD *)((v6 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
        *(_QWORD *)((v6 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
        *(_QWORD *)((v6 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
        *(_QWORD *)((v6 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
        *(_QWORD *)((v6 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
      }
      return retstr;
    case ROGUELIKE_EFFECT_ADD_LEVEL_TRAP:
      if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_init_);
      if ( !this->is_init_ )
        goto LABEL_147;
      if ( *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_in_roguelike_dungeon_);
      }
      if ( !this->is_in_roguelike_dungeon_ )
      {
LABEL_147:
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          998);
        v52 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v251,
                (const char (*)[36])"[ROGUELIKE] invalid state, is_init:");
        if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&this->is_init_);
        v53 = common::milog::MiLogStream::operator<<(v52, this->is_init_);
        v51 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                v53,
                (const char (*)[27])", is_in_roguelike_dungeon:");
        if ( *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_load1(&this->is_in_roguelike_dungeon_);
        }
        goto LABEL_137;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->activity_);
      runtime_mgr_0 = RoguelikeDungeonActivity::getRogueDungeonRuntimeMgr(this->activity_);
      RogueLikeDungeonRuntimeMgr::addOneTrap(runtime_mgr_0);
      goto LABEL_484;
    case ROGUELIKE_EFFECT_CLEAR_LEVEL_TRAP:
      if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_init_);
      if ( !this->is_init_ )
        goto LABEL_133;
      if ( *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_in_roguelike_dungeon_);
      }
      if ( this->is_in_roguelike_dungeon_ )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->activity_);
        runtime_mgr = RoguelikeDungeonActivity::getRogueDungeonRuntimeMgr(this->activity_);
        RogueLikeDungeonRuntimeMgr::clearAllTraps(runtime_mgr);
      }
      else
      {
LABEL_133:
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          984);
        v49 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v251,
                (const char (*)[36])"[ROGUELIKE] invalid state, is_init:");
        if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&this->is_init_);
        v50 = common::milog::MiLogStream::operator<<(v49, this->is_init_);
        v51 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                v50,
                (const char (*)[27])", is_in_roguelike_dungeon:");
        if ( *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_load1(&this->is_in_roguelike_dungeon_);
        }
LABEL_137:
        common::milog::MiLogStream::operator<<(v51, this->is_in_roguelike_dungeon_);
        common::milog::MiLogStream::~MiLogStream(&v251);
      }
      goto LABEL_484;
    case ROGUELIKE_EFFECT_RANDOM_CLEAR_A_CURSE:
    case ROGUELIKE_EFFECT_CLEAR_ALL_CURSE:
      if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_init_);
      if ( !this->is_init_ )
        goto LABEL_423;
      if ( *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_in_roguelike_dungeon_);
      }
      if ( !this->is_in_roguelike_dungeon_ )
      {
LABEL_423:
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          1331);
        common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
          &v251,
          (const char (*)[44])"[ROGUELIKE] effect effects in dungeon,error");
        common::milog::MiLogStream::~MiLogStream(&v251);
      }
      else
      {
        if ( source_type != SOURCE_CARD )
        {
          common::milog::MiLogStream::create(
            &v251,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
            "doRoguelikeEffectAndGetParamVec",
            1336);
          v21 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                  &v251,
                  (const char (*)[49])"[ROGUELIKE] only card support this effect, type:");
          if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&effect_config->effect_type);
          }
          goto LABEL_483;
        }
        proto::ClearRoguelikeCurseNotify::ClearRoguelikeCurseNotify((proto::ClearRoguelikeCurseNotify *const)(v6 + 560));
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        proto::ClearRoguelikeCurseNotify::set_is_clear_all(
          (proto::ClearRoguelikeCurseNotify *const)(v6 + 560),
          effect_config->effect_type == ROGUELIKE_EFFECT_CLEAR_ALL_CURSE);
        proto::ClearRoguelikeCurseNotify::set_card_id((proto::ClearRoguelikeCurseNotify *const)(v6 + 560), source_id);
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        if ( effect_config->effect_type == ROGUELIKE_EFFECT_CLEAR_ALL_CURSE )
        {
          std::map<unsigned int,unsigned int>::map(
            (std::map<unsigned int,unsigned int> *const)(v6 + 480),
            &this->trigger_curse_map_);
          RoguelikeMiscMgr::clearAllCurse(this);
          __for_range_5 = (std::map<unsigned int,unsigned int> *)(v6 + 480);
          __for_begin._M_current = (std::tuple<unsigned int,unsigned int,unsigned int> *)std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v6 + 480))._M_node;
          *(std::map<unsigned int,unsigned int>::iterator *)(v6 + 112) = std::map<unsigned int,unsigned int>::end((std::map<unsigned int,unsigned int> *const)(v6 + 480));
          while ( std::operator!=(
                    (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
                    (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v6 + 112)) )
          {
            v241 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
            curse_id = std::get<0ul,unsigned int const,unsigned int>(v241);
            v201 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v241);
            count = v201;
            if ( *(_BYTE *)(((unsigned __int64)v201 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v201 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v201 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v201);
            }
            v202 = *count;
            v203 = proto::ClearRoguelikeCurseNotify::mutable_clear_curse_map((proto::ClearRoguelikeCurseNotify *const)(v6 + 560));
            v204 = curse_id;
            v205 = google::protobuf::Map<unsigned int,unsigned int>::operator[](v203, curse_id);
            v206 = v205;
            v207 = *(_BYTE *)(((unsigned __int64)v205 >> 3) + 0x7FFF8000);
            if ( v207 != 0 && (char)(((unsigned __int8)v205 & 7) + 3) >= v207 )
            {
              LOBYTE(v204) = v207 != 0;
              __asan_report_store4(v205, v204, v205);
            }
            *v206 = v202;
            std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
          }
          std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v6 + 480));
        }
        else
        {
          for ( clear_count = 0;
                clear_count != effect_count && !std::map<unsigned int,unsigned int>::empty(&this->trigger_curse_map_);
                ++clear_count )
          {
            *(_DWORD *)(v6 + 64) = 0;
            if ( common::tools::RandomUtils::weightSelectOne<unsigned int,unsigned int>(
                   &this->trigger_curse_map_,
                   (unsigned int *)(v6 + 64),
                   0) )
            {
              common::milog::MiLogStream::create(
                &v251,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
                "doRoguelikeEffectAndGetParamVec",
                1363);
              common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v251,
                (const char (*)[35])"[ROGUELIKE] weightSelectOne failed");
              common::milog::MiLogStream::~MiLogStream(&v251);
            }
            else if ( RoguelikeMiscMgr::clearCurse(this, *(_DWORD *)(v6 + 64)) )
            {
              common::milog::MiLogStream::create(
                &v251,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
                "doRoguelikeEffectAndGetParamVec",
                1368);
              v208 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                       &v251,
                       (const char (*)[41])"[ROGUELIKE] clearCurse failed, curse_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v208,
                (const unsigned int *)(v6 + 64));
              common::milog::MiLogStream::~MiLogStream(&v251);
            }
            else
            {
              v209 = proto::ClearRoguelikeCurseNotify::mutable_clear_curse_map((proto::ClearRoguelikeCurseNotify *const)(v6 + 560));
              v210 = (unsigned __int64)google::protobuf::Map<unsigned int,unsigned int>::operator[](
                                         v209,
                                         (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)(v6 + 64));
              if ( *(_BYTE *)((v210 >> 3) + 0x7FFF8000) != 0
                && (char)((v210 & 7) + 3) >= *(_BYTE *)((v210 >> 3) + 0x7FFF8000) )
              {
                v210 = __asan_report_load4(v210);
              }
              ++*(_DWORD *)v210;
            }
          }
        }
        v211 = std::map<unsigned int,unsigned int>::empty(&this->trigger_curse_map_);
        proto::ClearRoguelikeCurseNotify::set_is_curse_all_clear(
          (proto::ClearRoguelikeCurseNotify *const)(v6 + 560),
          v211);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        Player::sendProto(this->player_, (const google::protobuf::Message *)(v6 + 560));
        proto::ClearRoguelikeCurseNotify::~ClearRoguelikeCurseNotify((proto::ClearRoguelikeCurseNotify *const)(v6 + 560));
      }
      goto LABEL_484;
    case ROGUELIKE_EFFECT_ADD_RUNE_MAX_COUNT:
    case ROGUELIKE_EFFECT_ADD_RUNE_USE_COUNT:
    case ROGUELIKE_EFFECT_FILL_RUNE_USE_COUNT:
      *(_DWORD *)(v6 + 48) = 0;
      if ( common::tools::StringUtils::strToNum<unsigned int>(
             &effect_config->effect_param,
             (unsigned int *)(v6 + 48),
             1) )
      {
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          907);
        v19 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v251,
                (const char (*)[49])"[ROGUELIKE] effect param strToNum failed, value:");
        v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, &effect_config->effect_param);
        v21 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v20, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_483;
      }
      __for_range = &this->chosen_rune_tuple_vec_;
      __for_begin._M_current = std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::begin(&this->chosen_rune_tuple_vec_)._M_current;
      *(std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::iterator *)(v6 + 112) = std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::end(&this->chosen_rune_tuple_vec_);
      while ( __gnu_cxx::operator!=<std::tuple<unsigned int,unsigned int,unsigned int> *,std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>>(
                &__for_begin,
                (const __gnu_cxx::__normal_iterator<std::tuple<unsigned int,unsigned int,unsigned int>*,std::vector<std::tuple<unsigned int,unsigned int,unsigned int>> > *)(v6 + 112)) )
      {
        __t = __gnu_cxx::__normal_iterator<std::tuple<unsigned int,unsigned int,unsigned int> *,std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>>::operator*(&__for_begin);
        rune_id = std::get<0ul,unsigned int,unsigned int,unsigned int>(__t);
        left_count = std::get<1ul,unsigned int,unsigned int,unsigned int>(__t);
        max_count = std::get<2ul,unsigned int,unsigned int,unsigned int>(__t);
        if ( *(_BYTE *)(((unsigned __int64)left_count >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)left_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)left_count >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(left_count);
        }
        old_count = *left_count;
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        if ( effect_config->effect_type == ROGUELIKE_EFFECT_ADD_RUNE_MAX_COUNT )
        {
          v22 = SAFE_MULTIPLY<unsigned int,unsigned int>(effect_count, *(_DWORD *)(v6 + 48));
          if ( *(_BYTE *)(((unsigned __int64)left_count >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)left_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)left_count >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(left_count);
          }
          v25 = v22;
          v23 = SAFE_ADD<unsigned int,unsigned int>(*left_count, v22);
          v24 = *(_BYTE *)(((unsigned __int64)left_count >> 3) + 0x7FFF8000);
          LOBYTE(v25) = v24 != 0;
          v26 = (v24 != 0) & (unsigned __int8)((char)(((unsigned __int8)left_count & 7) + 3) >= v24);
          if ( (_BYTE)v26 )
            __asan_report_store4(left_count, v25, v26);
          *left_count = v23;
          v27 = SAFE_MULTIPLY<unsigned int,unsigned int>(effect_count, *(_DWORD *)(v6 + 48));
          if ( *(_BYTE *)(((unsigned __int64)max_count >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)max_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)max_count >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(max_count);
          }
          v30 = v27;
          v28 = SAFE_ADD<unsigned int,unsigned int>(*max_count, v27);
          v29 = *(_BYTE *)(((unsigned __int64)max_count >> 3) + 0x7FFF8000);
          LOBYTE(v30) = v29 != 0;
          v31 = (v29 != 0) & (unsigned __int8)((char)(((unsigned __int8)max_count & 7) + 3) >= v29);
          if ( (_BYTE)v31 )
            __asan_report_store4(max_count, v30, v31);
          *max_count = v28;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&effect_config->effect_type);
          }
          if ( effect_config->effect_type == ROGUELIKE_EFFECT_ADD_RUNE_USE_COUNT )
          {
            v32 = SAFE_MULTIPLY<unsigned int,unsigned int>(effect_count, *(_DWORD *)(v6 + 48));
            if ( *(_BYTE *)(((unsigned __int64)left_count >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)left_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)left_count >> 3)
                                                                           + 0x7FFF8000) )
            {
              __asan_report_load4(left_count);
            }
            *(_DWORD *)(v6 + 64) = SAFE_ADD<unsigned int,unsigned int>(*left_count, v32);
            v33 = max_count;
            v34 = (std::tuple_element<0,std::tuple<unsigned int,unsigned int> >::type *)std::min<unsigned int>(
                                                                                          (const unsigned int *)(v6 + 64),
                                                                                          max_count);
            v35 = v34;
            if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v34);
            }
            v36 = *v35;
            v37 = *(_BYTE *)(((unsigned __int64)left_count >> 3) + 0x7FFF8000);
            LOBYTE(v33) = v37 != 0;
            v38 = (v37 != 0) & (unsigned __int8)((char)(((unsigned __int8)left_count & 7) + 3) >= v37);
            if ( (_BYTE)v38 )
              __asan_report_store4(left_count, v33, v38);
            *left_count = v36;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&effect_config->effect_type);
            }
            if ( effect_config->effect_type == ROGUELIKE_EFFECT_FILL_RUNE_USE_COUNT )
            {
              v39 = ((unsigned __int8)max_count & 7u) + 3;
              if ( *(_BYTE *)(((unsigned __int64)max_count >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)max_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)max_count >> 3)
                                                                            + 0x7FFF8000) )
              {
                __asan_report_load4(max_count);
              }
              v40 = *max_count;
              v41 = *(_BYTE *)(((unsigned __int64)left_count >> 3) + 0x7FFF8000);
              LOBYTE(v39) = v41 != 0;
              v42 = (v41 != 0) & (unsigned __int8)((char)(((unsigned __int8)left_count & 7) + 3) >= v41);
              if ( (_BYTE)v42 )
                __asan_report_store4(left_count, v39, v42);
              *left_count = v40;
            }
          }
        }
        if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&this->is_init_);
        if ( this->is_init_ )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3)
                                                              + 0x7FFF8000) )
          {
            __asan_report_load1(&this->is_in_roguelike_dungeon_);
          }
          if ( this->is_in_roguelike_dungeon_ )
          {
            if ( *(_BYTE *)(((unsigned __int64)left_count >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)left_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)left_count >> 3)
                                                                           + 0x7FFF8000) )
            {
              __asan_report_load4(left_count);
            }
            v43 = *left_count - old_count;
            if ( *(_BYTE *)(((unsigned __int64)rune_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)rune_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rune_id >> 3) + 0x7FFF8000) )
            {
              v43 = (int)rune_id;
              __asan_report_load4(rune_id);
            }
            RoguelikeMiscMgr::logRogueTriggerRune(this, *rune_id, v43);
          }
        }
        __gnu_cxx::__normal_iterator<std::tuple<unsigned int,unsigned int,unsigned int> *,std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>>::operator++(&__for_begin);
      }
      if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_init_);
      if ( this->is_init_ )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_load1(&this->is_in_roguelike_dungeon_);
        }
        if ( this->is_in_roguelike_dungeon_ )
        {
          proto::RoguelikeRuneRecordUpdateNotify::RoguelikeRuneRecordUpdateNotify((proto::RoguelikeRuneRecordUpdateNotify *const)(v6 + 480));
          v44 = proto::RoguelikeRuneRecordUpdateNotify::mutable_rune_record_list((proto::RoguelikeRuneRecordUpdateNotify *const)(v6 + 480));
          RoguelikeMiscMgr::roguelikeRuneRecordToClient(this, v44);
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          Player::sendProto(this->player_, (const google::protobuf::Message *)(v6 + 480));
          proto::RoguelikeRuneRecordUpdateNotify::~RoguelikeRuneRecordUpdateNotify((proto::RoguelikeRuneRecordUpdateNotify *const)(v6 + 480));
        }
      }
      goto LABEL_484;
    case ROGUELIKE_EFFECT_USE_RUNE_PROB_NOT_SUB:
      *(_DWORD *)(v6 + 64) = 0;
      if ( common::tools::StringUtils::strToNum<unsigned int>(
             &effect_config->effect_param,
             (unsigned int *)(v6 + 64),
             1) )
      {
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          1083);
        v80 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v251,
                (const char (*)[49])"[ROGUELIKE] effect param strToNum failed, value:");
        v81 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v80, &effect_config->effect_param);
        v21 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v81, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_483;
      }
      *(_DWORD *)(v6 + 64) = SAFE_MULTIPLY<unsigned int,unsigned int>(*(_DWORD *)(v6 + 64), effect_count);
      v82 = *(_DWORD *)(v6 + 64);
      if ( *(_BYTE *)(((unsigned __int64)&this->rune_free_prob_weight_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->rune_free_prob_weight_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->rune_free_prob_weight_);
      }
      if ( SAFE_ADD<unsigned int,unsigned int>(this->rune_free_prob_weight_, v82) > 0x63 )
      {
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          1090);
        v83 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v251,
                (const char (*)[42])"[ROGUELIKE] effect aim prob weight exceed");
        v21 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v83, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_483;
      }
      v84 = *(_DWORD *)(v6 + 64);
      if ( *(_BYTE *)(((unsigned __int64)&this->rune_free_prob_weight_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->rune_free_prob_weight_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->rune_free_prob_weight_);
      }
      v85 = v84;
      v86 = SAFE_ADD<unsigned int,unsigned int>(this->rune_free_prob_weight_, v84);
      v87 = *(_BYTE *)(((unsigned __int64)&this->rune_free_prob_weight_ >> 3) + 0x7FFF8000);
      if ( v87 != 0 && v87 <= 3 )
      {
        LOBYTE(v85) = v87 != 0;
        __asan_report_store4(&this->rune_free_prob_weight_, v85, v86);
      }
      this->rune_free_prob_weight_ = v86;
      goto LABEL_484;
    case ROGUELIKE_EFFECT_CLEAR_MIST:
      v45 = ((_BYTE)this + 108) & 7;
      v46 = (*(_BYTE *)(((unsigned __int64)&this->is_mist_clear_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v45 >= *(_BYTE *)(((unsigned __int64)&this->is_mist_clear_ >> 3) + 0x7FFF8000));
      if ( (_BYTE)v46 )
        __asan_report_store1(&this->is_mist_clear_, v45, v46);
      this->is_mist_clear_ = 1;
      if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_init_);
      if ( this->is_init_ )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_load1(&this->is_in_roguelike_dungeon_);
        }
        if ( this->is_in_roguelike_dungeon_ )
        {
          proto::RoguelikeMistClearNotify::RoguelikeMistClearNotify((proto::RoguelikeMistClearNotify *const)(v6 + 336));
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          Player::sendProto(this->player_, (const google::protobuf::Message *)(v6 + 336));
          proto::RoguelikeMistClearNotify::~RoguelikeMistClearNotify((proto::RoguelikeMistClearNotify *const)(v6 + 336));
        }
      }
      goto LABEL_484;
    case ROGUELIKE_EFFECT_ADD_RESOURCE:
      *(_DWORD *)(v6 + 64) = 0;
      if ( common::tools::StringUtils::strToNum<unsigned int>(
             &effect_config->effect_param,
             (unsigned int *)(v6 + 64),
             1) )
      {
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          957);
        v47 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v251,
                (const char (*)[49])"[ROGUELIKE] effect param strToNum failed, value:");
        v48 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v47, &effect_config->effect_param);
        v21 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v48, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_483;
      }
      *(_DWORD *)(v6 + 64) = SAFE_MULTIPLY<unsigned int,unsigned int>(*(_DWORD *)(v6 + 64), effect_count);
      delta_prob = (float)*(int *)(v6 + 64) / 100.0;
      if ( *(_BYTE *)(((unsigned __int64)&this->bonus_resource_prop_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->bonus_resource_prop_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->bonus_resource_prop_);
      }
      this->bonus_resource_prop_ = this->bonus_resource_prop_ + delta_prob;
      if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_init_);
      if ( this->is_init_ )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_load1(&this->is_in_roguelike_dungeon_);
        }
        if ( this->is_in_roguelike_dungeon_ )
        {
          proto::RoguelikeResourceBonusPropUpdateNotify::RoguelikeResourceBonusPropUpdateNotify((proto::RoguelikeResourceBonusPropUpdateNotify *const)(v6 + 336));
          if ( *(_BYTE *)(((unsigned __int64)&this->bonus_resource_prop_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->bonus_resource_prop_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->bonus_resource_prop_);
          }
          proto::RoguelikeResourceBonusPropUpdateNotify::set_bonus_resource_prop(
            (proto::RoguelikeResourceBonusPropUpdateNotify *const)(v6 + 336),
            this->bonus_resource_prop_);
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          Player::sendProto(this->player_, (const google::protobuf::Message *)(v6 + 336));
          proto::RoguelikeResourceBonusPropUpdateNotify::~RoguelikeResourceBonusPropUpdateNotify((proto::RoguelikeResourceBonusPropUpdateNotify *const)(v6 + 336));
        }
      }
      goto LABEL_484;
    case ROGUELIKE_EFFECT_RANDOM_AVATAR_NOHEAL:
      *(_DWORD *)(v6 + 48) = 0;
      if ( common::tools::StringUtils::strToNum<float>(&effect_config->effect_param, (float *)(v6 + 48), 1) )
      {
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          1206);
        v141 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                 &v251,
                 (const char (*)[49])"[ROGUELIKE] effect param strToNum failed, value:");
        v142 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v141, &effect_config->effect_param);
        v21 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v142, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_483;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->activity_);
      runtime_mgr_2 = RoguelikeDungeonActivity::getRogueDungeonRuntimeMgr(this->activity_);
      std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v6 + 272));
      __for_range_3 = (const std::vector<long unsigned int> *)RogueLikeDungeonRuntimeMgr::getRogueTeam(runtime_mgr_2);
      __for_begin._M_current = (std::tuple<unsigned int,unsigned int,unsigned int> *)std::vector<unsigned long>::begin(__for_range_3)._M_current;
      *(std::vector<long unsigned int>::const_iterator *)(v6 + 112) = std::vector<unsigned long>::end(__for_range_3);
      while ( __gnu_cxx::operator!=<unsigned long const*,std::vector<unsigned long>>(
                (const __gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > *)&__for_begin,
                (const __gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > *)(v6 + 112)) )
      {
        v143 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator*((const __gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > *const)&__for_begin);
        if ( *(_BYTE *)((v143 >> 3) + 0x7FFF8000) )
          v143 = __asan_report_load8(v143);
        *(_QWORD *)(v6 + 80) = *(_QWORD *)v143;
        if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned long>,unsigned long>(
                &this->noheal_guid_set_,
                (const unsigned __int64 *)(v6 + 80)) )
          std::vector<unsigned long>::push_back(
            (std::vector<long unsigned int> *const)(v6 + 272),
            (const std::vector<long unsigned int>::value_type *)(v6 + 80));
        __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator++((__gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > *const)&__for_begin);
      }
      if ( std::vector<unsigned long>::empty((const std::vector<long unsigned int> *const)(v6 + 272)) )
      {
        __for_range_4 = &RogueLikeDungeonRuntimeMgr::getRogueTeam(runtime_mgr_2)->backstage_mirror_avatar_guid_vec;
        __for_begin._M_current = (std::tuple<unsigned int,unsigned int,unsigned int> *)std::vector<unsigned long>::begin(__for_range_4)._M_current;
        *(std::vector<long unsigned int>::const_iterator *)(v6 + 112) = std::vector<unsigned long>::end(__for_range_4);
        while ( __gnu_cxx::operator!=<unsigned long const*,std::vector<unsigned long>>(
                  (const __gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > *)&__for_begin,
                  (const __gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > *)(v6 + 112)) )
        {
          v144 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator*((const __gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > *const)&__for_begin);
          if ( *(_BYTE *)((v144 >> 3) + 0x7FFF8000) )
            v144 = __asan_report_load8(v144);
          *(_QWORD *)(v6 + 80) = *(_QWORD *)v144;
          if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned long>,unsigned long>(
                  &this->noheal_guid_set_,
                  (const unsigned __int64 *)(v6 + 80)) )
            std::vector<unsigned long>::push_back(
              (std::vector<long unsigned int> *const)(v6 + 272),
              (const std::vector<long unsigned int>::value_type *)(v6 + 80));
          __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator++((__gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > *const)&__for_begin);
        }
      }
      if ( std::vector<unsigned long>::empty((const std::vector<long unsigned int> *const)(v6 + 272)) )
      {
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          1231);
        v145 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                 &v251,
                 (const char (*)[57])"[ROGUELIKE] all avatar in noheal curse, noheal_guid_set:");
        v146 = common::milog::MiLogStream::operator<<<unsigned long>(v145, &this->noheal_guid_set_);
        v147 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v146, (const char (*)[10])", player:");
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        operator<<(v147, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v251);
      }
      else
      {
        std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v6 + 336));
        common::tools::RandomUtils::randomSelect<unsigned long>(
          (const std::vector<long unsigned int> *)(v6 + 272),
          (std::vector<long unsigned int> *)(v6 + 336),
          1u);
        if ( std::vector<unsigned long>::empty((const std::vector<long unsigned int> *const)(v6 + 336)) )
        {
          common::milog::MiLogStream::create(
            &v251,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
            "doRoguelikeEffectAndGetParamVec",
            1238);
          v148 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                   &v251,
                   (const char (*)[64])"[ROGUELIKE] chosen_guid_vec empty, randomSelect failed, player:");
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          operator<<(v148, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v251);
        }
        else
        {
          v149 = (unsigned __int64)std::vector<unsigned long>::operator[](
                                     (std::vector<long unsigned int> *const)(v6 + 336),
                                     0LL);
          if ( *(_BYTE *)((v149 >> 3) + 0x7FFF8000) )
            v149 = __asan_report_load8(v149);
          *(_QWORD *)(v6 + 112) = *(_QWORD *)v149;
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          v150 = Player::getAvatarComp(this->player_);
          PlayerAvatarComp::findAvatar<MirrorAvatar>((const PlayerAvatarComp *const)(v6 + 176), (uint64_t)v150);
          if ( std::operator==<MirrorAvatar>(0LL, (const std::shared_ptr<MirrorAvatar> *)(v6 + 176)) )
          {
            common::milog::MiLogStream::create(
              &v251,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
              "doRoguelikeEffectAndGetParamVec",
              1245);
            v151 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                     &v251,
                     (const char (*)[42])"[ROGUELIKE] findAvatar fail, chosen_guid:");
            v152 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                     v151,
                     (const unsigned __int64 *)(v6 + 112));
            v153 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                     v152,
                     (const char (*)[10])", player:");
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
          }
          else
          {
            RogueTeam = RogueLikeDungeonRuntimeMgr::getRogueTeam(runtime_mgr_2);
            if ( common::tools::MiscUtils::isContains<unsigned long>(
                   &RogueTeam->onstage_mirror_avatar_guid_vec,
                   (const unsigned __int64 *)(v6 + 112)) )
            {
              v155 = std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 176));
              Creature::setServerGlobalValue(v155, &effect_config->effect_key, *(float *)(v6 + 48), 1);
            }
            v156 = std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 176));
            *(_DWORD *)(v6 + 64) = Avatar::getAvatarId(v156);
            std::vector<unsigned int>::push_back(retstr, (std::vector<unsigned int>::value_type *)(v6 + 64));
            std::unordered_set<unsigned long>::insert(
              &this->noheal_guid_set_,
              (const std::unordered_set<long unsigned int>::value_type *)(v6 + 112));
            common::milog::MiLogStream::create(
              &v251,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
              "doRoguelikeEffectAndGetParamVec",
              1257);
            v157 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                     &v251,
                     (const char (*)[36])"[ROGUELIKE] do noheal effect, guid:");
            v158 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                     v157,
                     (const unsigned __int64 *)(v6 + 112));
            v159 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     v158,
                     (const char (*)[16])", opt_guid_vec:");
            v160 = common::milog::MiLogStream::operator<<<unsigned long>(
                     v159,
                     (const std::vector<long unsigned int> *)(v6 + 272));
            v153 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                     v160,
                     (const char (*)[10])", player:");
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
          }
          operator<<(v153, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v251);
          std::shared_ptr<MirrorAvatar>::~shared_ptr((std::shared_ptr<MirrorAvatar> *const)(v6 + 176));
        }
        std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v6 + 336));
      }
      std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v6 + 272));
      goto LABEL_484;
    case ROGUELIKE_EFFECT_ADD_CARD_TYPE_WEIGHT:
    case ROGUELIKE_EFFECT_ADD_CARD_TYPE_WEIGHT_ROOM_FIRST:
      std::vector<std::string>::vector((std::vector<std::string> *const)(v6 + 336));
      std::allocator<char>::allocator(&__a, v9);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v251, ",", &__a);
      v161 = common::tools::StringUtils::splitToList(
               &effect_config->effect_param,
               (const std::string *)&v251,
               (std::vector<std::string> *)(v6 + 336),
               0) != 0;
      std::string::~string(&v251);
      std::allocator<char>::~allocator(&__a);
      if ( v161 )
      {
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          1266);
        v162 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                 &v251,
                 (const char (*)[52])"[ROGUELIKE] effect param splitToList failed, value:");
        v163 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v162, &effect_config->effect_param);
        v68 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v163, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_381;
      }
      if ( std::vector<std::string>::size((const std::vector<std::string> *const)(v6 + 336)) <= 1 )
      {
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          1271);
        v164 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                 &v251,
                 (const char (*)[48])"[ROGUELIKE] effect param size too small, value:");
        v165 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v164, &effect_config->effect_param);
        v68 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v165, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_381;
      }
      *(_DWORD *)(v6 + 48) = 0;
      v166 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v6 + 336), 0LL);
      v167 = (const char *)std::string::c_str(v166);
      if ( data::enumStrToVal(v167, (data::RoguelikeCardType *)(v6 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          1277);
        v168 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                 &v251,
                 (const char (*)[53])"[ROGUELIKE] effect param enumStrToVal failed, value:");
        v169 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v168, &effect_config->effect_param);
        v68 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v169, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_381;
      }
      if ( !*(_DWORD *)(v6 + 48) )
      {
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          1282);
        v170 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                 &v251,
                 (const char (*)[51])"[ROGUELIKE] effect param config type error, value:");
        v171 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v170, &effect_config->effect_param);
        v68 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v171, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_381;
      }
      *(_DWORD *)(v6 + 64) = 0;
      v172 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v6 + 336), 1uLL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v172, (unsigned int *)(v6 + 64), 1) )
      {
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          1288);
        v173 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                 &v251,
                 (const char (*)[49])"[ROGUELIKE] effect param strToNum failed, value:");
        v174 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v6 + 336), 1uLL);
        v175 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v173, v174);
        v68 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v175, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_381;
      }
      *(_DWORD *)(v6 + 64) = SAFE_MULTIPLY<unsigned int,unsigned int>(*(_DWORD *)(v6 + 64), effect_count);
      if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect_config->effect_type);
      }
      if ( effect_config->effect_type == ROGUELIKE_EFFECT_ADD_CARD_TYPE_WEIGHT )
      {
        v176 = *(_DWORD *)(v6 + 64);
        v177 = std::unordered_map<data::RoguelikeCardType,unsigned int>::operator[](
                 &this->card_add_weight_map_,
                 (const std::unordered_map<data::RoguelikeCardType,unsigned int>::key_type *)(v6 + 48));
        v178 = v177;
        if ( *(_BYTE *)(((unsigned __int64)v177 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v177 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v177 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v177);
        }
        v179 = SAFE_ADD<unsigned int,unsigned int>(*v178, v176);
        v180 = (char *)(v6 + 48);
        v181 = std::unordered_map<data::RoguelikeCardType,unsigned int>::operator[](
                 &this->card_add_weight_map_,
                 (const std::unordered_map<data::RoguelikeCardType,unsigned int>::key_type *)(v6 + 48));
        v182 = v181;
        v183 = *(_BYTE *)(((unsigned __int64)v181 >> 3) + 0x7FFF8000);
        if ( v183 != 0 && (char)(((unsigned __int8)v181 & 7) + 3) >= v183 )
        {
          LOBYTE(v180) = v183 != 0;
          __asan_report_store4(v181, v180, v181);
        }
        *v182 = v179;
      }
      else
      {
        v184 = *(_DWORD *)(v6 + 64);
        v185 = std::unordered_map<data::RoguelikeCardType,unsigned int>::operator[](
                 &this->refresh_cell_card_add_weight_map_,
                 (const std::unordered_map<data::RoguelikeCardType,unsigned int>::key_type *)(v6 + 48));
        v186 = v185;
        if ( *(_BYTE *)(((unsigned __int64)v185 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v185 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v185 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v185);
        }
        v187 = SAFE_ADD<unsigned int,unsigned int>(*v186, v184);
        v188 = (char *)(v6 + 48);
        v189 = std::unordered_map<data::RoguelikeCardType,unsigned int>::operator[](
                 &this->refresh_cell_card_add_weight_map_,
                 (const std::unordered_map<data::RoguelikeCardType,unsigned int>::key_type *)(v6 + 48));
        v190 = v189;
        v191 = *(_BYTE *)(((unsigned __int64)v189 >> 3) + 0x7FFF8000);
        if ( v191 != 0 && (char)(((unsigned __int8)v189 & 7) + 3) >= v191 )
        {
          LOBYTE(v188) = v191 != 0;
          __asan_report_store4(v189, v188, v189);
        }
        *v190 = v187;
      }
      goto LABEL_212;
    case ROGUELIKE_EFFECT_SUB_REFRESH_CARD_COST:
      *(_DWORD *)(v6 + 64) = 0;
      if ( common::tools::StringUtils::strToNum<unsigned int>(
             &effect_config->effect_param,
             (unsigned int *)(v6 + 64),
             1) )
      {
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          1307);
        v192 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                 &v251,
                 (const char (*)[49])"[ROGUELIKE] effect param strToNum failed, value:");
        v193 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v192, &effect_config->effect_param);
        v21 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v193, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_483;
      }
      *(_DWORD *)(v6 + 64) = SAFE_MULTIPLY<unsigned int,unsigned int>(*(_DWORD *)(v6 + 64), effect_count);
      v194 = *(_DWORD *)(v6 + 64);
      if ( *(_BYTE *)(((unsigned __int64)&this->refresh_card_cost_sub_prob_weight_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->refresh_card_cost_sub_prob_weight_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->refresh_card_cost_sub_prob_weight_);
      }
      if ( SAFE_ADD<unsigned int,unsigned int>(this->refresh_card_cost_sub_prob_weight_, v194) > 0x63 )
      {
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          1313);
        v195 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                 &v251,
                 (const char (*)[42])"[ROGUELIKE] effect aim prob weight exceed");
        v21 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v195, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_483;
      }
      v196 = *(_DWORD *)(v6 + 64);
      if ( *(_BYTE *)(((unsigned __int64)&this->refresh_card_cost_sub_prob_weight_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->refresh_card_cost_sub_prob_weight_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->refresh_card_cost_sub_prob_weight_);
      }
      v197 = v196;
      v198 = SAFE_ADD<unsigned int,unsigned int>(this->refresh_card_cost_sub_prob_weight_, v196);
      v199 = *(_BYTE *)(((unsigned __int64)&this->refresh_card_cost_sub_prob_weight_ >> 3) + 0x7FFF8000);
      if ( v199 != 0 && v199 <= 3 )
      {
        LOBYTE(v197) = v199 != 0;
        __asan_report_store4(&this->refresh_card_cost_sub_prob_weight_, v197, v198);
      }
      this->refresh_card_cost_sub_prob_weight_ = v198;
      if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_init_);
      if ( this->is_init_ )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_load1(&this->is_in_roguelike_dungeon_);
        }
        if ( this->is_in_roguelike_dungeon_ )
          RoguelikeMiscMgr::notifyRefreshCostUpdate(this);
      }
      common::milog::MiLogStream::create(
        &v251,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "doRoguelikeEffectAndGetParamVec",
        1322);
      v200 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
               &v251,
               (const char (*)[55])"[ROGUELIKE] current refresh_card_cost_sub_prob_weight:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v200,
        &this->refresh_card_cost_sub_prob_weight_);
      common::milog::MiLogStream::~MiLogStream(&v251);
      goto LABEL_484;
    case ROGUELIKE_EFFECT_CHANGE_GADGET_NUM:
      if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_init_);
      if ( this->is_init_ )
      {
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          1048);
        v21 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                &v251,
                (const char (*)[53])"[ROGUELIKE] cannot effect when data is inited, type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
LABEL_483:
        *(_QWORD *)(v6 + 112) = data::enumValToStr(effect_config->effect_type);
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v21, (const char *const *)(v6 + 112));
        common::milog::MiLogStream::~MiLogStream(&v251);
        goto LABEL_484;
      }
      std::vector<std::string>::vector((std::vector<std::string> *const)(v6 + 336));
      std::allocator<char>::allocator(&__a, v9);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v251, ",", &__a);
      v65 = common::tools::StringUtils::splitToList(
              &effect_config->effect_param,
              (const std::string *)&v251,
              (std::vector<std::string> *)(v6 + 336),
              0) != 0;
      std::string::~string(&v251);
      std::allocator<char>::~allocator(&__a);
      if ( v65 )
      {
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          1054);
        v66 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                &v251,
                (const char (*)[52])"[ROGUELIKE] effect param splitToList failed, value:");
        v67 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v66, &effect_config->effect_param);
        v68 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v67, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
      }
      else if ( std::vector<std::string>::size((const std::vector<std::string> *const)(v6 + 336)) > 1 )
      {
        *(_DWORD *)(v6 + 48) = 0;
        v71 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v6 + 336), 0LL);
        v72 = (const char *)std::string::c_str(v71);
        if ( data::enumStrToVal(v72, (data::RogueCreateGadgetType *)(v6 + 48)) )
        {
          common::milog::MiLogStream::create(
            &v251,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
            "doRoguelikeEffectAndGetParamVec",
            1065);
          v73 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                  &v251,
                  (const char (*)[53])"[ROGUELIKE] effect param enumStrToVal failed, value:");
          v74 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v73, &effect_config->effect_param);
          v68 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v74, (const char (*)[8])", type:");
          if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&effect_config->effect_type);
          }
        }
        else
        {
          *(_DWORD *)(v6 + 64) = 0;
          v75 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v6 + 336), 1uLL);
          if ( !common::tools::StringUtils::strToNum<int>(v75, (int *)(v6 + 64), 1) )
          {
            *(_DWORD *)(v6 + 64) = SAFE_MULTIPLY<int,unsigned int>(*(_DWORD *)(v6 + 64), effect_count);
            v79 = (unsigned __int64)std::map<data::RogueCreateGadgetType,int>::operator[](
                                      &this->cell_param_.gadget_delta_map,
                                      (const std::map<data::RogueCreateGadgetType,int>::key_type *)(v6 + 48));
            if ( *(_BYTE *)((v79 >> 3) + 0x7FFF8000) != 0
              && (char)((v79 & 7) + 3) >= *(_BYTE *)((v79 >> 3) + 0x7FFF8000) )
            {
              v79 = __asan_report_load4(v79);
            }
            *(_DWORD *)v79 += *(_DWORD *)(v6 + 64);
            goto LABEL_212;
          }
          common::milog::MiLogStream::create(
            &v251,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
            "doRoguelikeEffectAndGetParamVec",
            1071);
          v76 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                  &v251,
                  (const char (*)[49])"[ROGUELIKE] effect param strToNum failed, value:");
          v77 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v6 + 336), 1uLL);
          v78 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v76, v77);
          v68 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v78, (const char (*)[8])", type:");
          if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&effect_config->effect_type);
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          1059);
        v69 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v251,
                (const char (*)[48])"[ROGUELIKE] effect param size too small, value:");
        v70 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v69, &effect_config->effect_param);
        v68 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v70, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
      }
LABEL_381:
      *(_QWORD *)(v6 + 112) = data::enumValToStr(effect_config->effect_type);
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v68, (const char *const *)(v6 + 112));
      common::milog::MiLogStream::~MiLogStream(&v251);
LABEL_212:
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v6 + 336));
      goto LABEL_484;
    case ROGUELIKE_EFFECT_SUB_CURSE_PROB:
      *(_DWORD *)(v6 + 64) = 0;
      if ( common::tools::StringUtils::strToNum<unsigned int>(
             &effect_config->effect_param,
             (unsigned int *)(v6 + 64),
             1) )
      {
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          1170);
        v122 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                 &v251,
                 (const char (*)[49])"[ROGUELIKE] effect param strToNum failed, value:");
        v123 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v122, &effect_config->effect_param);
        v21 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v123, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_483;
      }
      *(_DWORD *)(v6 + 64) = SAFE_MULTIPLY<unsigned int,unsigned int>(*(_DWORD *)(v6 + 64), effect_count);
      v124 = *(_DWORD *)(v6 + 64);
      if ( *(_BYTE *)(((unsigned __int64)&this->trigger_curse_sub_weight_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_curse_sub_weight_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->trigger_curse_sub_weight_);
      }
      v127 = v124;
      v125 = SAFE_ADD<unsigned int,unsigned int>(this->trigger_curse_sub_weight_, v124);
      v126 = *(_BYTE *)(((unsigned __int64)&this->trigger_curse_sub_weight_ >> 3) + 0x7FFF8000);
      LOBYTE(v127) = v126 != 0;
      v128 = (v126 != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= v126);
      if ( (_BYTE)v128 )
        __asan_report_store4(&this->trigger_curse_sub_weight_, v127, v128);
      this->trigger_curse_sub_weight_ = v125;
      goto LABEL_484;
    case ROGUELIKE_EFFECT_PROB_FREE_REFRESH_CARD:
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v6 + 336));
      std::allocator<char>::allocator(&__a, v9);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v251, ",", &__a);
      v129 = common::tools::StringUtils::splitToList<unsigned int>(
               &effect_config->effect_param,
               (const std::string *)&v251,
               (std::vector<unsigned int> *)(v6 + 336),
               0) != 0;
      std::string::~string(&v251);
      std::allocator<char>::~allocator(&__a);
      if ( v129 )
      {
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          1182);
        v130 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                 &v251,
                 (const char (*)[52])"[ROGUELIKE] effect param splitToList failed, value:");
        v131 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v130, &effect_config->effect_param);
        v132 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v131, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
      }
      else
      {
        if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v6 + 336)) > 1 )
        {
          v135 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v6 + 336), 0LL);
          v136 = v135;
          if ( *(_BYTE *)(((unsigned __int64)v135 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v135 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v135 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v135);
          }
          base_count = *v136;
          base_count = SAFE_MULTIPLY<unsigned int,unsigned int>(base_count, effect_count);
          if ( *(_BYTE *)(((unsigned __int64)&this->free_refresh_card_prob_weight_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->free_refresh_card_prob_weight_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&this->free_refresh_card_prob_weight_);
          }
          v139 = base_count;
          v137 = SAFE_ADD<unsigned int,unsigned int>(this->free_refresh_card_prob_weight_, base_count);
          v138 = *(_BYTE *)(((unsigned __int64)&this->free_refresh_card_prob_weight_ >> 3) + 0x7FFF8000);
          LOBYTE(v139) = v138 != 0;
          v140 = (v138 != 0) & (unsigned __int8)((char)((((_BYTE)this - 76) & 7) + 3) >= v138);
          if ( (_BYTE)v140 )
            __asan_report_store4(&this->free_refresh_card_prob_weight_, v139, v140);
          this->free_refresh_card_prob_weight_ = v137;
LABEL_317:
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v6 + 336));
          goto LABEL_484;
        }
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          1187);
        v133 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                 &v251,
                 (const char (*)[48])"[ROGUELIKE] effect param size too small, value:");
        v134 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v133, &effect_config->effect_param);
        v132 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v134, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
      }
      *(_QWORD *)(v6 + 112) = data::enumValToStr(effect_config->effect_type);
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v132, (const char *const *)(v6 + 112));
      common::milog::MiLogStream::~MiLogStream(&v251);
      goto LABEL_317;
    case ROGUELIKE_EFFECT_AT_MOST_TRAP_COUNT:
      if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_init_);
      if ( this->is_init_ )
      {
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          1022);
        v21 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                &v251,
                (const char (*)[53])"[ROGUELIKE] cannot effect when data is inited, type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_483;
      }
      *(_DWORD *)(v6 + 64) = 0;
      v60 = (char *)(v6 + 64);
      if ( common::tools::StringUtils::strToNum<unsigned int>(
             &effect_config->effect_param,
             (unsigned int *)(v6 + 64),
             1) )
      {
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          1028);
        v61 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v251,
                (const char (*)[49])"[ROGUELIKE] effect param strToNum failed, value:");
        v62 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v61, &effect_config->effect_param);
        v21 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v62, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_483;
      }
      v63 = *(_DWORD *)(v6 + 64);
      v64 = *(unsigned __int8 *)(((unsigned __int64)&this->cell_param_.expected_max_trap_count >> 3) + 0x7FFF8000);
      if ( (_BYTE)v64 != 0 && (char)v64 <= 3 )
      {
        LOBYTE(v60) = (_BYTE)v64 != 0;
        __asan_report_store4(
          &this->cell_param_.expected_max_trap_count,
          v60,
          &this->cell_param_.expected_max_trap_count);
      }
      this->cell_param_.expected_max_trap_count = v63;
      goto LABEL_484;
    case ROGUELIKE_EFFECT_SPRING_AND_BOSS:
      if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_init_);
      if ( this->is_init_ )
      {
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          1038);
        v21 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                &v251,
                (const char (*)[53])"[ROGUELIKE] cannot effect when data is inited, type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_483;
      }
      if ( *(char *)(((unsigned __int64)&this->cell_param_.is_spring_next_to_boss >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->cell_param_.is_spring_next_to_boss, v9, &this->cell_param_.is_spring_next_to_boss);
      this->cell_param_.is_spring_next_to_boss = 1;
      goto LABEL_484;
    case ROGUELIKE_EFFECT_AT_LEAST_STORE_COUNT:
      if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_init_);
      if ( this->is_init_ )
      {
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          1006);
        v21 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                &v251,
                (const char (*)[53])"[ROGUELIKE] cannot effect when data is inited, type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_483;
      }
      *(_DWORD *)(v6 + 64) = 0;
      v54 = (char *)(v6 + 64);
      if ( common::tools::StringUtils::strToNum<unsigned int>(
             &effect_config->effect_param,
             (unsigned int *)(v6 + 64),
             1) )
      {
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          1012);
        v55 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v251,
                (const char (*)[49])"[ROGUELIKE] effect param strToNum failed, value:");
        v56 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v55, &effect_config->effect_param);
        v21 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v56, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_483;
      }
      v57 = *(_DWORD *)(v6 + 64);
      v58 = *(_BYTE *)(((unsigned __int64)&this->cell_param_.expected_min_store_count >> 3) + 0x7FFF8000);
      LOBYTE(v54) = v58 != 0;
      v59 = (v58 != 0) & (unsigned __int8)((char)((((_BYTE)this - 92) & 7) + 3) >= v58);
      if ( (_BYTE)v59 )
        __asan_report_store4(&this->cell_param_.expected_min_store_count, v54, v59);
      this->cell_param_.expected_min_store_count = v57;
      goto LABEL_484;
    case ROGUELIKE_EFFECT_BAN_GUARD:
      v214 = ((_BYTE)this - 87) & 7;
      v215 = (*(_BYTE *)(((unsigned __int64)&this->cell_param_.is_ban_guardian >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v214 >= *(_BYTE *)(((unsigned __int64)&this->cell_param_.is_ban_guardian >> 3) + 0x7FFF8000));
      if ( (_BYTE)v215 )
        __asan_report_store1(&this->cell_param_.is_ban_guardian, v214, v215);
      this->cell_param_.is_ban_guardian = 1;
      if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_init_);
      if ( !this->is_init_ )
        goto LABEL_480;
      if ( *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_in_roguelike_dungeon_);
      }
      if ( !this->is_in_roguelike_dungeon_ )
        goto LABEL_480;
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->activity_);
      runtime_mgr_4 = RoguelikeDungeonActivity::getRogueDungeonRuntimeMgr(this->activity_);
      if ( RogueLikeDungeonRuntimeMgr::banGuardian(runtime_mgr_4) )
      {
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          1401);
        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          &v251,
          (const char (*)[31])"[ROGUELIKE] banGuardian failed");
        common::milog::MiLogStream::~MiLogStream(&v251);
      }
      else
      {
LABEL_480:
        common::milog::MiLogStream::create(
          &v251,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "doRoguelikeEffectAndGetParamVec",
          1405);
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          &v251,
          (const char (*)[29])"[ROGUELIKE] banGuardian succ");
        common::milog::MiLogStream::~MiLogStream(&v251);
      }
      goto LABEL_484;
    default:
      common::milog::MiLogStream::create(
        &v251,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "doRoguelikeEffectAndGetParamVec",
        1409);
      v21 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              &v251,
              (const char (*)[45])"[ROGUELIKE] unsupported effect, effect_type:");
      if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect_config->effect_type);
      }
      goto LABEL_483;
  }
};

// Line 1417: range 000000001595DE62-00000000159604DE
void __cdecl RoguelikeMiscMgr::recoverRoguelikeEffect(
        RoguelikeMiscMgr *const this,
        const data::RoguelikeEffectExcelConfig *effect_config,
        uint32_t effect_count,
        RoguelikeMiscMgr::EffectSourceType source_type,
        uint32_t source_id)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  GameserverService *v8; // rsi
  common::milog::MiLogStream *v9; // rax
  std::unordered_map<std::string,float>::mapped_type *v10; // rax
  unsigned int *v11; // rdx
  __m128i v12; // xmm0
  float *v13; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,float>,false,true>,bool> v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rdx
  char *v21; // rsi
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  uint32_t v24; // ecx
  char v25; // dl
  __int64 v26; // rdx
  char *v27; // rsi
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  uint32_t v30; // ecx
  int v31; // eax
  bool v32; // r14
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // r14
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  std::vector<std::string>::reference v38; // rax
  const char *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  const std::string *v42; // rax
  common::milog::MiLogStream *v43; // r14
  const std::string *v44; // rax
  common::milog::MiLogStream *v45; // rax
  unsigned __int64 v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  unsigned int v49; // edx
  common::milog::MiLogStream *v50; // rax
  unsigned int v51; // edx
  __int64 v52; // rsi
  __int64 v53; // rdx
  char v54; // al
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  unsigned int v57; // ecx
  uint32_t v58; // ecx
  char v59; // dl
  __int64 v60; // rsi
  __int64 v61; // rdx
  bool v62; // r14
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // r14
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  std::vector<unsigned int>::reference v68; // rax
  uint32_t *v69; // rdx
  uint32_t v70; // ecx
  char v71; // dl
  __int64 v72; // rsi
  __int64 v73; // rdx
  bool v74; // r14
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rax
  std::vector<std::string>::reference v79; // rax
  const char *v80; // rax
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rax
  const std::string *v85; // rax
  common::milog::MiLogStream *v86; // r14
  const std::string *v87; // rax
  common::milog::MiLogStream *v88; // rax
  unsigned int v89; // r14d
  std::unordered_map<data::RoguelikeCardType,unsigned int>::mapped_type *v90; // rax
  unsigned int *v91; // rdx
  SelectType v92; // r14d
  char *v93; // rsi
  std::unordered_map<data::RoguelikeCardType,unsigned int>::mapped_type *v94; // rax
  SelectType *v95; // rdx
  char v96; // cl
  unsigned int v97; // r14d
  std::unordered_map<data::RoguelikeCardType,unsigned int>::mapped_type *v98; // rax
  unsigned int *v99; // rdx
  SelectType v100; // r14d
  char *v101; // rsi
  std::unordered_map<data::RoguelikeCardType,unsigned int>::mapped_type *v102; // rax
  SelectType *v103; // rdx
  char v104; // cl
  common::milog::MiLogStream *v105; // rax
  common::milog::MiLogStream *v106; // rax
  unsigned int v107; // edx
  common::milog::MiLogStream *v108; // rax
  unsigned int v109; // edx
  __int64 v110; // rsi
  __int64 v111; // rdx
  char v112; // al
  __int64 v113; // rsi
  __int64 v114; // rdx
  __int64 v115; // rsi
  __int64 v116; // rdx
  std::allocator<char> __a; // [rsp+27h] [rbp-F9h] BYREF
  uint32_t base_count; // [rsp+28h] [rbp-F8h]
  float delta_prob; // [rsp+2Ch] [rbp-F4h]
  char *val; // [rsp+30h] [rbp-F0h] BYREF
  const ActivityRogueExcelConfigMgr *rogue_config_mgr; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Config> v124; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v125; // [rsp+50h] [rbp-D0h] BYREF
  char v126[176]; // [rsp+70h] [rbp-B0h] BYREF

  v5 = (unsigned __int64)v126;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 4 14 card_type:1583 48 4 15 base_count:1613 64 24 18 param_str_vec:1572";
  *(_QWORD *)(v5 + 16) = RoguelikeMiscMgr::recoverRoguelikeEffect;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -218103808;
  v7[536862723] = -202116109;
  v8 = ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v124);
  rogue_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v124)->design_config.txt_config_mgr.activity_rogue_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v124);
  if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&effect_config->effect_type);
  }
  switch ( effect_config->effect_type )
  {
    case ROGUELIKE_EFFECT_STATIC_COMBAT:
      if ( !common::tools::MiscUtils::isContains<std::unordered_map<std::string,float> const,std::string>(
              &rogue_config_mgr->team_sgv_value_map,
              &effect_config->effect_key) )
      {
        common::milog::MiLogStream::create(
          &v125,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "recoverRoguelikeEffect",
          1427);
        v9 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
               &v125,
               (const char (*)[40])"[ROGUELIKE] can not find team sgv, key:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &effect_config->effect_key);
        common::milog::MiLogStream::~MiLogStream(&v125);
      }
      else
      {
        v10 = (std::unordered_map<std::string,float>::mapped_type *)std::unordered_map<std::string,float>::at(
                                                                      &rogue_config_mgr->team_sgv_value_map,
                                                                      &effect_config->effect_key);
        v11 = (unsigned int *)v10;
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v10);
        }
        v12 = _mm_cvtsi32_si128(*v11);
        *(float *)v12.m128i_i32 = SAFE_MULTIPLY<unsigned int,float>(effect_count, *(float *)v12.m128i_i32);
        *(_DWORD *)(v5 + 48) = _mm_cvtsi128_si32(v12);
        v14 = std::unordered_map<std::string,float>::emplace<std::string const&,float &>(
                &this->team_sgv_map_,
                &effect_config->effect_key,
                (float *)(v5 + 48),
                &effect_config->effect_key,
                v13);
        if ( !v14.second )
        {
          common::milog::MiLogStream::create(
            &v125,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
            "recoverRoguelikeEffect",
            1433);
          v15 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                  &v125,
                  (const char (*)[37])"[ROGUELIKE] duplicate team sgv, key:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, &effect_config->effect_key);
          common::milog::MiLogStream::~MiLogStream(&v125);
        }
      }
      goto LABEL_161;
    case ROGUELIKE_EFFECT_DYNAMIC_COMBAT:
    case ROGUELIKE_EFFECT_ADD_TALENT:
    case ROGUELIKE_EFFECT_ADD_LEVEL_TRAP:
    case ROGUELIKE_EFFECT_CLEAR_LEVEL_TRAP:
    case ROGUELIKE_EFFECT_RANDOM_CLEAR_A_CURSE:
    case ROGUELIKE_EFFECT_CLEAR_ALL_CURSE:
    case ROGUELIKE_EFFECT_ADD_RUNE_MAX_COUNT:
    case ROGUELIKE_EFFECT_ADD_RUNE_USE_COUNT:
    case ROGUELIKE_EFFECT_FILL_RUNE_USE_COUNT:
    case ROGUELIKE_EFFECT_RANDOM_AVATAR_NOHEAL:
      common::milog::MiLogStream::create(
        &v125,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "recoverRoguelikeEffect",
        1656);
      v18 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              &v125,
              (const char (*)[52])"[ROGUELIKE] recover effect do nothing, effect_type:");
      if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect_config->effect_type);
      }
      goto LABEL_160;
    case ROGUELIKE_EFFECT_DISABLE_SPRING_CELL:
      v115 = ((_BYTE)this - 86) & 7;
      v116 = (*(_BYTE *)(((unsigned __int64)&this->cell_param_.is_ban_spring >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v115 >= *(_BYTE *)(((unsigned __int64)&this->cell_param_.is_ban_spring >> 3) + 0x7FFF8000));
      if ( (_BYTE)v116 )
        __asan_report_store1(&this->cell_param_.is_ban_spring, v115, v116);
      this->cell_param_.is_ban_spring = 1;
      goto LABEL_161;
    case ROGUELIKE_EFFECT_USE_RUNE_PROB_NOT_SUB:
      *(_DWORD *)(v5 + 48) = 0;
      if ( common::tools::StringUtils::strToNum<unsigned int>(
             &effect_config->effect_param,
             (unsigned int *)(v5 + 48),
             1) )
      {
        common::milog::MiLogStream::create(
          &v125,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "recoverRoguelikeEffect",
          1520);
        v47 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v125,
                (const char (*)[49])"[ROGUELIKE] effect param strToNum failed, value:");
        v48 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v47, &effect_config->effect_param);
        v18 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v48, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_160;
      }
      *(_DWORD *)(v5 + 48) = SAFE_MULTIPLY<unsigned int,unsigned int>(*(_DWORD *)(v5 + 48), effect_count);
      v49 = *(_DWORD *)(v5 + 48);
      if ( *(_BYTE *)(((unsigned __int64)&this->rune_free_prob_weight_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->rune_free_prob_weight_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->rune_free_prob_weight_);
      }
      if ( SAFE_ADD<unsigned int,unsigned int>(this->rune_free_prob_weight_, v49) > 0x63 )
      {
        common::milog::MiLogStream::create(
          &v125,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "recoverRoguelikeEffect",
          1527);
        v50 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v125,
                (const char (*)[42])"[ROGUELIKE] effect aim prob weight exceed");
        v18 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v50, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_160;
      }
      v51 = *(_DWORD *)(v5 + 48);
      if ( *(_BYTE *)(((unsigned __int64)&this->rune_free_prob_weight_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->rune_free_prob_weight_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->rune_free_prob_weight_);
      }
      v52 = v51;
      v53 = SAFE_ADD<unsigned int,unsigned int>(this->rune_free_prob_weight_, v51);
      v54 = *(_BYTE *)(((unsigned __int64)&this->rune_free_prob_weight_ >> 3) + 0x7FFF8000);
      if ( v54 != 0 && v54 <= 3 )
      {
        LOBYTE(v52) = v54 != 0;
        __asan_report_store4(&this->rune_free_prob_weight_, v52, v53);
      }
      this->rune_free_prob_weight_ = v53;
      goto LABEL_161;
    case ROGUELIKE_EFFECT_CLEAR_MIST:
      v19 = ((_BYTE)this + 108) & 7;
      v20 = (*(_BYTE *)(((unsigned __int64)&this->is_mist_clear_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v19 >= *(_BYTE *)(((unsigned __int64)&this->is_mist_clear_ >> 3) + 0x7FFF8000));
      if ( (_BYTE)v20 )
        __asan_report_store1(&this->is_mist_clear_, v19, v20);
      this->is_mist_clear_ = 1;
      goto LABEL_161;
    case ROGUELIKE_EFFECT_ADD_RESOURCE:
      *(_DWORD *)(v5 + 48) = 0;
      if ( common::tools::StringUtils::strToNum<unsigned int>(
             &effect_config->effect_param,
             (unsigned int *)(v5 + 48),
             1) )
      {
        common::milog::MiLogStream::create(
          &v125,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "recoverRoguelikeEffect",
          1443);
        v16 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v125,
                (const char (*)[49])"[ROGUELIKE] effect param strToNum failed, value:");
        v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, &effect_config->effect_param);
        v18 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v17, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_160;
      }
      *(_DWORD *)(v5 + 48) = SAFE_MULTIPLY<unsigned int,unsigned int>(*(_DWORD *)(v5 + 48), effect_count);
      delta_prob = (float)*(int *)(v5 + 48) / 100.0;
      if ( *(_BYTE *)(((unsigned __int64)&this->bonus_resource_prop_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->bonus_resource_prop_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->bonus_resource_prop_);
      }
      this->bonus_resource_prop_ = this->bonus_resource_prop_ + delta_prob;
      goto LABEL_161;
    case ROGUELIKE_EFFECT_ADD_CARD_TYPE_WEIGHT:
    case ROGUELIKE_EFFECT_ADD_CARD_TYPE_WEIGHT_ROOM_FIRST:
      std::vector<std::string>::vector((std::vector<std::string> *const)(v5 + 64));
      std::allocator<char>::allocator(&__a, v8);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v125, ",", &__a);
      v74 = common::tools::StringUtils::splitToList(
              &effect_config->effect_param,
              (const std::string *)&v125,
              (std::vector<std::string> *)(v5 + 64),
              0) != 0;
      std::string::~string(&v125);
      std::allocator<char>::~allocator(&__a);
      if ( v74 )
      {
        common::milog::MiLogStream::create(
          &v125,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "recoverRoguelikeEffect",
          1575);
        v75 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                &v125,
                (const char (*)[52])"[ROGUELIKE] effect param splitToList failed, value:");
        v76 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v75, &effect_config->effect_param);
        v35 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v76, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_55;
      }
      if ( std::vector<std::string>::size((const std::vector<std::string> *const)(v5 + 64)) <= 1 )
      {
        common::milog::MiLogStream::create(
          &v125,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "recoverRoguelikeEffect",
          1580);
        v77 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v125,
                (const char (*)[48])"[ROGUELIKE] effect param size too small, value:");
        v78 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v77, &effect_config->effect_param);
        v35 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v78, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_55;
      }
      *(_DWORD *)(v5 + 32) = 0;
      v79 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v5 + 64), 0LL);
      v80 = (const char *)std::string::c_str(v79);
      if ( data::enumStrToVal(v80, (data::RoguelikeCardType *)(v5 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v125,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "recoverRoguelikeEffect",
          1586);
        v81 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                &v125,
                (const char (*)[53])"[ROGUELIKE] effect param enumStrToVal failed, value:");
        v82 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v81, &effect_config->effect_param);
        v35 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v82, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_55;
      }
      if ( !*(_DWORD *)(v5 + 32) )
      {
        common::milog::MiLogStream::create(
          &v125,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "recoverRoguelikeEffect",
          1591);
        v83 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                &v125,
                (const char (*)[51])"[ROGUELIKE] effect param config type error, value:");
        v84 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v83, &effect_config->effect_param);
        v35 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v84, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_55;
      }
      *(_DWORD *)(v5 + 48) = 0;
      v85 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v5 + 64), 1uLL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v85, (unsigned int *)(v5 + 48), 1) )
      {
        common::milog::MiLogStream::create(
          &v125,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "recoverRoguelikeEffect",
          1597);
        v86 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v125,
                (const char (*)[49])"[ROGUELIKE] effect param strToNum failed, value:");
        v87 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v5 + 64), 1uLL);
        v88 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v86, v87);
        v35 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v88, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_55;
      }
      *(_DWORD *)(v5 + 48) = SAFE_MULTIPLY<unsigned int,unsigned int>(*(_DWORD *)(v5 + 48), effect_count);
      if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect_config->effect_type);
      }
      if ( effect_config->effect_type == ROGUELIKE_EFFECT_ADD_CARD_TYPE_WEIGHT )
      {
        v89 = *(_DWORD *)(v5 + 48);
        v90 = std::unordered_map<data::RoguelikeCardType,unsigned int>::operator[](
                &this->card_add_weight_map_,
                (const std::unordered_map<data::RoguelikeCardType,unsigned int>::key_type *)(v5 + 32));
        v91 = v90;
        if ( *(_BYTE *)(((unsigned __int64)v90 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v90 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v90 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v90);
        }
        v92 = SAFE_ADD<unsigned int,unsigned int>(*v91, v89);
        v93 = (char *)(v5 + 32);
        v94 = std::unordered_map<data::RoguelikeCardType,unsigned int>::operator[](
                &this->card_add_weight_map_,
                (const std::unordered_map<data::RoguelikeCardType,unsigned int>::key_type *)(v5 + 32));
        v95 = v94;
        v96 = *(_BYTE *)(((unsigned __int64)v94 >> 3) + 0x7FFF8000);
        if ( v96 != 0 && (char)(((unsigned __int8)v94 & 7) + 3) >= v96 )
        {
          LOBYTE(v93) = v96 != 0;
          __asan_report_store4(v94, v93, v94);
        }
        *v95 = v92;
      }
      else
      {
        v97 = *(_DWORD *)(v5 + 48);
        v98 = std::unordered_map<data::RoguelikeCardType,unsigned int>::operator[](
                &this->refresh_cell_card_add_weight_map_,
                (const std::unordered_map<data::RoguelikeCardType,unsigned int>::key_type *)(v5 + 32));
        v99 = v98;
        if ( *(_BYTE *)(((unsigned __int64)v98 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v98 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v98 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v98);
        }
        v100 = SAFE_ADD<unsigned int,unsigned int>(*v99, v97);
        v101 = (char *)(v5 + 32);
        v102 = std::unordered_map<data::RoguelikeCardType,unsigned int>::operator[](
                 &this->refresh_cell_card_add_weight_map_,
                 (const std::unordered_map<data::RoguelikeCardType,unsigned int>::key_type *)(v5 + 32));
        v103 = v102;
        v104 = *(_BYTE *)(((unsigned __int64)v102 >> 3) + 0x7FFF8000);
        if ( v104 != 0 && (char)(((unsigned __int8)v102 & 7) + 3) >= v104 )
        {
          LOBYTE(v101) = v104 != 0;
          __asan_report_store4(v102, v101, v102);
        }
        *v103 = v100;
      }
      goto LABEL_59;
    case ROGUELIKE_EFFECT_SUB_REFRESH_CARD_COST:
      *(_DWORD *)(v5 + 48) = 0;
      if ( common::tools::StringUtils::strToNum<unsigned int>(
             &effect_config->effect_param,
             (unsigned int *)(v5 + 48),
             1) )
      {
        common::milog::MiLogStream::create(
          &v125,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "recoverRoguelikeEffect",
          1616);
        v105 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                 &v125,
                 (const char (*)[49])"[ROGUELIKE] effect param strToNum failed, value:");
        v106 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v105, &effect_config->effect_param);
        v18 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v106, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_160;
      }
      *(_DWORD *)(v5 + 48) = SAFE_MULTIPLY<unsigned int,unsigned int>(*(_DWORD *)(v5 + 48), effect_count);
      v107 = *(_DWORD *)(v5 + 48);
      if ( *(_BYTE *)(((unsigned __int64)&this->refresh_card_cost_sub_prob_weight_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->refresh_card_cost_sub_prob_weight_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->refresh_card_cost_sub_prob_weight_);
      }
      if ( SAFE_ADD<unsigned int,unsigned int>(this->refresh_card_cost_sub_prob_weight_, v107) > 0x63 )
      {
        common::milog::MiLogStream::create(
          &v125,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "recoverRoguelikeEffect",
          1622);
        v108 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                 &v125,
                 (const char (*)[42])"[ROGUELIKE] effect aim prob weight exceed");
        v18 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v108, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_160;
      }
      v109 = *(_DWORD *)(v5 + 48);
      if ( *(_BYTE *)(((unsigned __int64)&this->refresh_card_cost_sub_prob_weight_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->refresh_card_cost_sub_prob_weight_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->refresh_card_cost_sub_prob_weight_);
      }
      v110 = v109;
      v111 = SAFE_ADD<unsigned int,unsigned int>(this->refresh_card_cost_sub_prob_weight_, v109);
      v112 = *(_BYTE *)(((unsigned __int64)&this->refresh_card_cost_sub_prob_weight_ >> 3) + 0x7FFF8000);
      if ( v112 != 0 && v112 <= 3 )
      {
        LOBYTE(v110) = v112 != 0;
        __asan_report_store4(&this->refresh_card_cost_sub_prob_weight_, v110, v111);
      }
      this->refresh_card_cost_sub_prob_weight_ = v111;
      goto LABEL_161;
    case ROGUELIKE_EFFECT_CHANGE_GADGET_NUM:
      std::vector<std::string>::vector((std::vector<std::string> *const)(v5 + 64));
      std::allocator<char>::allocator(&__a, v8);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v125, ",", &__a);
      v32 = common::tools::StringUtils::splitToList(
              &effect_config->effect_param,
              (const std::string *)&v125,
              (std::vector<std::string> *)(v5 + 64),
              0) != 0;
      std::string::~string(&v125);
      std::allocator<char>::~allocator(&__a);
      if ( v32 )
      {
        common::milog::MiLogStream::create(
          &v125,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "recoverRoguelikeEffect",
          1491);
        v33 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                &v125,
                (const char (*)[52])"[ROGUELIKE] effect param splitToList failed, value:");
        v34 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v33, &effect_config->effect_param);
        v35 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v34, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
LABEL_55:
        val = (char *)data::enumValToStr(effect_config->effect_type);
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v35, (const char *const *)&val);
        common::milog::MiLogStream::~MiLogStream(&v125);
        goto LABEL_59;
      }
      if ( std::vector<std::string>::size((const std::vector<std::string> *const)(v5 + 64)) <= 1 )
      {
        common::milog::MiLogStream::create(
          &v125,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "recoverRoguelikeEffect",
          1496);
        v36 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v125,
                (const char (*)[48])"[ROGUELIKE] effect param size too small, value:");
        v37 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v36, &effect_config->effect_param);
        v35 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v37, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_55;
      }
      *(_DWORD *)(v5 + 32) = 0;
      v38 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v5 + 64), 0LL);
      v39 = (const char *)std::string::c_str(v38);
      if ( data::enumStrToVal(v39, (data::RogueCreateGadgetType *)(v5 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v125,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "recoverRoguelikeEffect",
          1502);
        v40 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                &v125,
                (const char (*)[53])"[ROGUELIKE] effect param enumStrToVal failed, value:");
        v41 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v40, &effect_config->effect_param);
        v35 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v41, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_55;
      }
      *(_DWORD *)(v5 + 48) = 0;
      v42 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v5 + 64), 1uLL);
      if ( common::tools::StringUtils::strToNum<int>(v42, (int *)(v5 + 48), 1) )
      {
        common::milog::MiLogStream::create(
          &v125,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "recoverRoguelikeEffect",
          1508);
        v43 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v125,
                (const char (*)[49])"[ROGUELIKE] effect param strToNum failed, value:");
        v44 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v5 + 64), 1uLL);
        v45 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v43, v44);
        v35 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v45, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_55;
      }
      *(_DWORD *)(v5 + 48) = SAFE_MULTIPLY<int,unsigned int>(*(_DWORD *)(v5 + 48), effect_count);
      v46 = (unsigned __int64)std::map<data::RogueCreateGadgetType,int>::operator[](
                                &this->cell_param_.gadget_delta_map,
                                (const std::map<data::RogueCreateGadgetType,int>::key_type *)(v5 + 32));
      if ( *(_BYTE *)((v46 >> 3) + 0x7FFF8000) != 0 && (char)((v46 & 7) + 3) >= *(_BYTE *)((v46 >> 3) + 0x7FFF8000) )
        v46 = __asan_report_load4(v46);
      *(_DWORD *)v46 += *(_DWORD *)(v5 + 48);
LABEL_59:
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v5 + 64));
      goto LABEL_161;
    case ROGUELIKE_EFFECT_SUB_CURSE_PROB:
      *(_DWORD *)(v5 + 48) = 0;
      if ( common::tools::StringUtils::strToNum<unsigned int>(
             &effect_config->effect_param,
             (unsigned int *)(v5 + 48),
             1) )
      {
        common::milog::MiLogStream::create(
          &v125,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "recoverRoguelikeEffect",
          1538);
        v55 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v125,
                (const char (*)[49])"[ROGUELIKE] effect param strToNum failed, value:");
        v56 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v55, &effect_config->effect_param);
        v18 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v56, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_160;
      }
      *(_DWORD *)(v5 + 48) = SAFE_MULTIPLY<unsigned int,unsigned int>(*(_DWORD *)(v5 + 48), effect_count);
      v57 = *(_DWORD *)(v5 + 48);
      if ( *(_BYTE *)(((unsigned __int64)&this->trigger_curse_sub_weight_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_curse_sub_weight_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->trigger_curse_sub_weight_);
      }
      v60 = v57;
      v58 = SAFE_ADD<unsigned int,unsigned int>(this->trigger_curse_sub_weight_, v57);
      v59 = *(_BYTE *)(((unsigned __int64)&this->trigger_curse_sub_weight_ >> 3) + 0x7FFF8000);
      LOBYTE(v60) = v59 != 0;
      v61 = (v59 != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= v59);
      if ( (_BYTE)v61 )
        __asan_report_store4(&this->trigger_curse_sub_weight_, v60, v61);
      this->trigger_curse_sub_weight_ = v58;
      goto LABEL_161;
    case ROGUELIKE_EFFECT_PROB_FREE_REFRESH_CARD:
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v5 + 64));
      std::allocator<char>::allocator(&__a, v8);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v125, ",", &__a);
      v62 = common::tools::StringUtils::splitToList<unsigned int>(
              &effect_config->effect_param,
              (const std::string *)&v125,
              (std::vector<unsigned int> *)(v5 + 64),
              0) != 0;
      std::string::~string(&v125);
      std::allocator<char>::~allocator(&__a);
      if ( v62 )
      {
        common::milog::MiLogStream::create(
          &v125,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "recoverRoguelikeEffect",
          1550);
        v63 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                &v125,
                (const char (*)[52])"[ROGUELIKE] effect param splitToList failed, value:");
        v64 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v63, &effect_config->effect_param);
        v65 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v64, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
LABEL_87:
        val = (char *)data::enumValToStr(effect_config->effect_type);
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v65, (const char *const *)&val);
        common::milog::MiLogStream::~MiLogStream(&v125);
        goto LABEL_99;
      }
      if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v5 + 64)) <= 1 )
      {
        common::milog::MiLogStream::create(
          &v125,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "recoverRoguelikeEffect",
          1555);
        v66 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v125,
                (const char (*)[48])"[ROGUELIKE] effect param size too small, value:");
        v67 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v66, &effect_config->effect_param);
        v65 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v67, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_87;
      }
      v68 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v5 + 64), 0LL);
      v69 = v68;
      if ( *(_BYTE *)(((unsigned __int64)v68 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v68 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v68 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v68);
      }
      base_count = *v69;
      base_count = SAFE_MULTIPLY<unsigned int,unsigned int>(base_count, effect_count);
      if ( *(_BYTE *)(((unsigned __int64)&this->free_refresh_card_prob_weight_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->free_refresh_card_prob_weight_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->free_refresh_card_prob_weight_);
      }
      v72 = base_count;
      v70 = SAFE_ADD<unsigned int,unsigned int>(this->free_refresh_card_prob_weight_, base_count);
      v71 = *(_BYTE *)(((unsigned __int64)&this->free_refresh_card_prob_weight_ >> 3) + 0x7FFF8000);
      LOBYTE(v72) = v71 != 0;
      v73 = (v71 != 0) & (unsigned __int8)((char)((((_BYTE)this - 76) & 7) + 3) >= v71);
      if ( (_BYTE)v73 )
        __asan_report_store4(&this->free_refresh_card_prob_weight_, v72, v73);
      this->free_refresh_card_prob_weight_ = v70;
LABEL_99:
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 64));
LABEL_161:
      if ( v126 == (char *)v5 )
      {
        *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
        *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
      }
      else
      {
        *(_QWORD *)v5 = 1172321806LL;
        *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
        *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
      }
      return;
    case ROGUELIKE_EFFECT_AT_MOST_TRAP_COUNT:
      *(_DWORD *)(v5 + 48) = 0;
      v27 = (char *)(v5 + 48);
      if ( common::tools::StringUtils::strToNum<unsigned int>(
             &effect_config->effect_param,
             (unsigned int *)(v5 + 48),
             1) )
      {
        common::milog::MiLogStream::create(
          &v125,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "recoverRoguelikeEffect",
          1475);
        v28 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v125,
                (const char (*)[49])"[ROGUELIKE] effect param strToNum failed, value:");
        v29 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v28, &effect_config->effect_param);
        v18 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v29, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        goto LABEL_160;
      }
      v30 = *(_DWORD *)(v5 + 48);
      v31 = *(unsigned __int8 *)(((unsigned __int64)&this->cell_param_.expected_max_trap_count >> 3) + 0x7FFF8000);
      if ( (_BYTE)v31 != 0 && (char)v31 <= 3 )
      {
        LOBYTE(v27) = (_BYTE)v31 != 0;
        __asan_report_store4(
          &this->cell_param_.expected_max_trap_count,
          v27,
          &this->cell_param_.expected_max_trap_count);
      }
      this->cell_param_.expected_max_trap_count = v30;
      goto LABEL_161;
    case ROGUELIKE_EFFECT_SPRING_AND_BOSS:
      if ( *(char *)(((unsigned __int64)&this->cell_param_.is_spring_next_to_boss >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->cell_param_.is_spring_next_to_boss, v8, &this->cell_param_.is_spring_next_to_boss);
      this->cell_param_.is_spring_next_to_boss = 1;
      goto LABEL_161;
    case ROGUELIKE_EFFECT_AT_LEAST_STORE_COUNT:
      *(_DWORD *)(v5 + 48) = 0;
      v21 = (char *)(v5 + 48);
      if ( common::tools::StringUtils::strToNum<unsigned int>(
             &effect_config->effect_param,
             (unsigned int *)(v5 + 48),
             1) )
      {
        common::milog::MiLogStream::create(
          &v125,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "recoverRoguelikeEffect",
          1464);
        v22 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v125,
                (const char (*)[49])"[ROGUELIKE] effect param strToNum failed, value:");
        v23 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, &effect_config->effect_param);
        v18 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v23, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
LABEL_160:
        val = (char *)data::enumValToStr(effect_config->effect_type);
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v18, (const char *const *)&val);
        common::milog::MiLogStream::~MiLogStream(&v125);
      }
      else
      {
        v24 = *(_DWORD *)(v5 + 48);
        v25 = *(_BYTE *)(((unsigned __int64)&this->cell_param_.expected_min_store_count >> 3) + 0x7FFF8000);
        LOBYTE(v21) = v25 != 0;
        v26 = (v25 != 0) & (unsigned __int8)((char)((((_BYTE)this - 92) & 7) + 3) >= v25);
        if ( (_BYTE)v26 )
          __asan_report_store4(&this->cell_param_.expected_min_store_count, v21, v26);
        this->cell_param_.expected_min_store_count = v24;
      }
      goto LABEL_161;
    case ROGUELIKE_EFFECT_BAN_GUARD:
      v113 = ((_BYTE)this - 87) & 7;
      v114 = (*(_BYTE *)(((unsigned __int64)&this->cell_param_.is_ban_guardian >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v113 >= *(_BYTE *)(((unsigned __int64)&this->cell_param_.is_ban_guardian >> 3) + 0x7FFF8000));
      if ( (_BYTE)v114 )
        __asan_report_store1(&this->cell_param_.is_ban_guardian, v113, v114);
      this->cell_param_.is_ban_guardian = 1;
      goto LABEL_161;
    default:
      common::milog::MiLogStream::create(
        &v125,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "recoverRoguelikeEffect",
        1660);
      v18 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              &v125,
              (const char (*)[45])"[ROGUELIKE] unsupported effect, effect_type:");
      if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect_config->effect_type);
      }
      goto LABEL_160;
  }
};

// Line 1667: range 00000000159604E0-0000000015961C33
void __cdecl RoguelikeMiscMgr::clearRoguelikeEffect(
        RoguelikeMiscMgr *const this,
        const data::RoguelikeEffectExcelConfig *effect_config,
        uint32_t effect_count,
        RoguelikeMiscMgr::EffectSourceType source_type,
        uint32_t source_id)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  GameserverService *v8; // rsi
  common::milog::MiLogStream *v9; // rax
  std::unordered_map<std::string,float>::mapped_type *v10; // rax
  unsigned int *v11; // rdx
  __m128i v12; // xmm0
  std::unordered_map<std::string,float>::mapped_type *v13; // rax
  _DWORD *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::string *p_effect_key; // rsi
  std::unordered_map<std::string,float>::mapped_type *v23; // rax
  float *v24; // rdx
  char v25; // cl
  char v26; // r15
  bool v27; // r14
  std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  std::__detail::_Node_iterator_base<long unsigned int,false>::__node_type *M_cur; // r14
  std::unordered_set<long unsigned int>::iterator v34; // rax
  common::milog::MiLogStream *v35; // rcx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  PlayerAvatarComp *AvatarComp; // rax
  char v39; // r15
  bool v40; // r14
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rcx
  std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rdx
  common::milog::MiLogStream *v49; // rbx
  float v50; // [rsp+10h] [rbp-1D0h]
  std::allocator<long unsigned int> __a; // [rsp+3Fh] [rbp-1A1h] BYREF
  unsigned int val; // [rsp+40h] [rbp-1A0h] BYREF
  float set_value; // [rsp+44h] [rbp-19Ch]
  std::vector<long unsigned int>::iterator __for_begin; // [rsp+48h] [rbp-198h] BYREF
  std::vector<long unsigned int>::iterator __for_end; // [rsp+50h] [rbp-190h] BYREF
  const ActivityRogueExcelConfigMgr *rogue_config_mgr; // [rsp+58h] [rbp-188h]
  std::vector<long unsigned int> *__for_range; // [rsp+60h] [rbp-180h]
  RogueLikeDungeonRuntimeMgr *runtime_mgr; // [rsp+68h] [rbp-178h]
  const std::vector<long unsigned int> *__for_range_0; // [rsp+70h] [rbp-170h]
  RogueLikeDungeonRuntimeMgr *runtime_mgr_0; // [rsp+78h] [rbp-168h]
  std::shared_ptr<Scene> v63; // [rsp+80h] [rbp-160h] BYREF
  common::milog::MiLogStream v64; // [rsp+90h] [rbp-150h] BYREF
  char v65[304]; // [rsp+B0h] [rbp-130h] BYREF

  v5 = (unsigned __int64)v65;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(256LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 32 4 16 delta_value:1681 48 4 18 current_value:1682 64 8 9 guid:1774 96 16 15 avatar_ptr:1778 "
                        "128 24 22 optional_guid_vec:1758 192 24 20 chosen_guid_vec:1759";
  *(_QWORD *)(v5 + 16) = RoguelikeMiscMgr::clearRoguelikeEffect;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -218959360;
  v7[536862723] = -219021312;
  v7[536862724] = -234881024;
  v7[536862725] = -218959118;
  v7[536862726] = -218103808;
  v7[536862727] = -202116109;
  v8 = ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v63);
  rogue_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v63)->design_config.txt_config_mgr.activity_rogue_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v63);
  if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&effect_config->effect_type);
  }
  switch ( effect_config->effect_type )
  {
    case ROGUELIKE_EFFECT_STATIC_COMBAT:
    case ROGUELIKE_EFFECT_DYNAMIC_COMBAT:
      if ( !common::tools::MiscUtils::isContains<std::unordered_map<std::string,float> const,std::string>(
              &rogue_config_mgr->team_sgv_value_map,
              &effect_config->effect_key) )
      {
        common::milog::MiLogStream::create(
          &v64,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "clearRoguelikeEffect",
          1678);
        v9 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
               &v64,
               (const char (*)[40])"[ROGUELIKE] can not find team sgv, key:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &effect_config->effect_key);
        common::milog::MiLogStream::~MiLogStream(&v64);
      }
      else
      {
        v10 = (std::unordered_map<std::string,float>::mapped_type *)std::unordered_map<std::string,float>::at(
                                                                      &rogue_config_mgr->team_sgv_value_map,
                                                                      &effect_config->effect_key);
        v11 = (unsigned int *)v10;
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v10);
        }
        v12 = _mm_cvtsi32_si128(*v11);
        *(float *)v12.m128i_i32 = SAFE_MULTIPLY<unsigned int,float>(effect_count, *(float *)v12.m128i_i32);
        *(_DWORD *)(v5 + 32) = _mm_cvtsi128_si32(v12);
        v13 = std::unordered_map<std::string,float>::operator[](&this->team_sgv_map_, &effect_config->effect_key);
        v14 = v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        *(_DWORD *)(v5 + 48) = *v14;
        set_value = 0.0;
        if ( *(float *)(v5 + 48) > *(float *)(v5 + 32) )
          set_value = *(float *)(v5 + 48) - *(float *)(v5 + 32);
        common::milog::MiLogStream::create(
          &v64,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "clearRoguelikeEffect",
          1689);
        v15 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v64,
                (const char (*)[38])"[ROGUELIKE] clear combat effect, key:");
        v16 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, &effect_config->effect_key);
        v17 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v16, (const char (*)[15])", delta_value:");
        v18 = common::milog::MiLogStream::operator<<<float,(float *)0>(v17, (const float *)(v5 + 32));
        v19 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v18,
                (const char (*)[17])", current_value:");
        v20 = common::milog::MiLogStream::operator<<<float,(float *)0>(v19, (const float *)(v5 + 48));
        v21 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v20, (const char (*)[7])", uid:");
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
        common::milog::MiLogStream::~MiLogStream(&v64);
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        if ( effect_config->effect_type == ROGUELIKE_EFFECT_DYNAMIC_COMBAT )
        {
          v50 = set_value;
          p_effect_key = &effect_config->effect_key;
          v23 = std::unordered_map<std::string,float>::operator[](
                  &this->dynamic_team_sgv_map_,
                  &effect_config->effect_key);
          v24 = v23;
          v25 = *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000);
          if ( v25 != 0 && (char)(((unsigned __int8)v23 & 7) + 3) >= v25 )
          {
            LOBYTE(p_effect_key) = v25 != 0;
            __asan_report_store4(v23, p_effect_key, v23);
          }
          *v24 = v50;
        }
        if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&this->is_init_);
        if ( this->is_init_ )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3)
                                                              + 0x7FFF8000) )
          {
            __asan_report_load1(&this->is_in_roguelike_dungeon_);
          }
          if ( this->is_in_roguelike_dungeon_ )
          {
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            Player::getAvatarComp(this->player_);
            PlayerAvatarComp::getTeamEntity((const PlayerAvatarComp *const)(v5 + 96));
            v26 = 0;
            v27 = 1;
            if ( !std::operator==<AvatarTeamEntity>(0LL, (const std::shared_ptr<AvatarTeamEntity> *)(v5 + 96)) )
            {
              std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
              Entity::getScene((const Entity *const)&v63);
              v26 = 1;
              if ( !std::operator==<Scene>(0LL, &v63) )
                v27 = 0;
            }
            if ( v26 )
              std::shared_ptr<Scene>::~shared_ptr(&v63);
            if ( v27 )
            {
              common::milog::MiLogStream::create(
                &v64,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
                "clearRoguelikeEffect",
                1701);
              common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v64,
                (const char (*)[34])"[ROGUELIKE] getTeamEntity nullptr");
              common::milog::MiLogStream::~MiLogStream(&v64);
            }
            else
            {
              v28 = std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
              Creature::setServerGlobalValue(v28, &effect_config->effect_key, set_value, 1);
            }
            std::shared_ptr<AvatarTeamEntity>::~shared_ptr((std::shared_ptr<AvatarTeamEntity> *const)(v5 + 96));
          }
        }
      }
      break;
    case ROGUELIKE_EFFECT_DISABLE_SPRING_CELL:
      v47 = ((_BYTE)this - 86) & 7;
      v48 = (*(_BYTE *)(((unsigned __int64)&this->cell_param_.is_ban_spring >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v47 >= *(_BYTE *)(((unsigned __int64)&this->cell_param_.is_ban_spring >> 3) + 0x7FFF8000));
      if ( (_BYTE)v48 )
        __asan_report_store1(&this->cell_param_.is_ban_spring, v47, v48);
      this->cell_param_.is_ban_spring = 0;
      if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_init_);
      if ( !this->is_init_ )
        goto LABEL_125;
      if ( *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_in_roguelike_dungeon_);
      }
      if ( !this->is_in_roguelike_dungeon_ )
        goto LABEL_125;
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->activity_);
      runtime_mgr_0 = RoguelikeDungeonActivity::getRogueDungeonRuntimeMgr(this->activity_);
      if ( RogueLikeDungeonRuntimeMgr::recoverSpring(runtime_mgr_0) )
      {
        common::milog::MiLogStream::create(
          &v64,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "clearRoguelikeEffect",
          1808);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          &v64,
          (const char (*)[33])"[ROGUELIKE] recoverSpring failed");
        common::milog::MiLogStream::~MiLogStream(&v64);
      }
      else
      {
LABEL_125:
        common::milog::MiLogStream::create(
          &v64,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "clearRoguelikeEffect",
          1812);
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          &v64,
          (const char (*)[36])"[ROGUELIKE] recoverSpring exec succ");
        common::milog::MiLogStream::~MiLogStream(&v64);
      }
      break;
    case ROGUELIKE_EFFECT_ADD_TALENT:
    case ROGUELIKE_EFFECT_ADD_LEVEL_TRAP:
    case ROGUELIKE_EFFECT_CLEAR_LEVEL_TRAP:
    case ROGUELIKE_EFFECT_RANDOM_CLEAR_A_CURSE:
    case ROGUELIKE_EFFECT_CLEAR_ALL_CURSE:
    case ROGUELIKE_EFFECT_ADD_RUNE_MAX_COUNT:
    case ROGUELIKE_EFFECT_ADD_RUNE_USE_COUNT:
    case ROGUELIKE_EFFECT_FILL_RUNE_USE_COUNT:
    case ROGUELIKE_EFFECT_CHANGE_GADGET_NUM:
    case ROGUELIKE_EFFECT_AT_MOST_TRAP_COUNT:
    case ROGUELIKE_EFFECT_SPRING_AND_BOSS:
    case ROGUELIKE_EFFECT_AT_LEAST_STORE_COUNT:
    case ROGUELIKE_EFFECT_BAN_GUARD:
      common::milog::MiLogStream::create(
        &v64,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "clearRoguelikeEffect",
        1832);
      v49 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              &v64,
              (const char (*)[50])"[ROGUELIKE] clear effect do nothing, effect_type:");
      if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect_config->effect_type);
      }
      goto LABEL_131;
    case ROGUELIKE_EFFECT_USE_RUNE_PROB_NOT_SUB:
      if ( *(_BYTE *)(((unsigned __int64)&this->rune_free_prob_weight_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->rune_free_prob_weight_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->rune_free_prob_weight_, v8, &this->rune_free_prob_weight_);
      }
      this->rune_free_prob_weight_ = 0;
      break;
    case ROGUELIKE_EFFECT_CLEAR_MIST:
      v29 = ((_BYTE)this + 108) & 7;
      v30 = (*(_BYTE *)(((unsigned __int64)&this->is_mist_clear_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v29 >= *(_BYTE *)(((unsigned __int64)&this->is_mist_clear_ >> 3) + 0x7FFF8000));
      if ( (_BYTE)v30 )
        __asan_report_store1(&this->is_mist_clear_, v29, v30);
      this->is_mist_clear_ = 0;
      break;
    case ROGUELIKE_EFFECT_ADD_RESOURCE:
      if ( *(_BYTE *)(((unsigned __int64)&this->bonus_resource_prop_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->bonus_resource_prop_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->bonus_resource_prop_, v8, &this->bonus_resource_prop_);
      }
      this->bonus_resource_prop_ = 0.0;
      if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_init_);
      if ( this->is_init_ )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_load1(&this->is_in_roguelike_dungeon_);
        }
        if ( this->is_in_roguelike_dungeon_ )
        {
          proto::RoguelikeResourceBonusPropUpdateNotify::RoguelikeResourceBonusPropUpdateNotify((proto::RoguelikeResourceBonusPropUpdateNotify *const)(v5 + 192));
          if ( *(_BYTE *)(((unsigned __int64)&this->bonus_resource_prop_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->bonus_resource_prop_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->bonus_resource_prop_);
          }
          proto::RoguelikeResourceBonusPropUpdateNotify::set_bonus_resource_prop(
            (proto::RoguelikeResourceBonusPropUpdateNotify *const)(v5 + 192),
            this->bonus_resource_prop_);
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          Player::sendProto(this->player_, (const google::protobuf::Message *)(v5 + 192));
          proto::RoguelikeResourceBonusPropUpdateNotify::~RoguelikeResourceBonusPropUpdateNotify((proto::RoguelikeResourceBonusPropUpdateNotify *const)(v5 + 192));
        }
      }
      break;
    case ROGUELIKE_EFFECT_RANDOM_AVATAR_NOHEAL:
      if ( std::unordered_set<unsigned long>::empty(&this->noheal_guid_set_) )
      {
        common::milog::MiLogStream::create(
          &v64,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "clearRoguelikeEffect",
          1755);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          &v64,
          (const char (*)[34])"[ROGUELIKE] noheal_guid_set empty");
        common::milog::MiLogStream::~MiLogStream(&v64);
      }
      else
      {
        std::allocator<unsigned long>::allocator(&__a);
        M_cur = std::unordered_set<unsigned long>::end(&this->noheal_guid_set_)._M_cur;
        v34._M_cur = std::unordered_set<unsigned long>::begin(&this->noheal_guid_set_)._M_cur;
        std::vector<unsigned long>::vector<std::__detail::_Node_iterator<unsigned long,true,false>,void>(
          (std::vector<long unsigned int> *const)(v5 + 128),
          v34,
          (std::__detail::_Node_iterator<long unsigned int,true,false>)M_cur,
          &__a);
        std::allocator<unsigned long>::~allocator(&__a);
        std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v5 + 192));
        common::tools::RandomUtils::randomSelect<unsigned long>(
          (const std::vector<long unsigned int> *)(v5 + 128),
          (std::vector<long unsigned int> *)(v5 + 192),
          effect_count);
        if ( std::vector<unsigned long>::empty((const std::vector<long unsigned int> *const)(v5 + 192)) )
        {
          common::milog::MiLogStream::create(
            &v64,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
            "clearRoguelikeEffect",
            1763);
          v35 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                  &v64,
                  (const char (*)[64])"[ROGUELIKE] chosen_guid_vec empty, randomSelect failed, player:");
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
        }
        else
        {
          __for_range = (std::vector<long unsigned int> *)(v5 + 192);
          __for_begin._M_current = std::vector<unsigned long>::begin((std::vector<long unsigned int> *const)(v5 + 192))._M_current;
          __for_end._M_current = std::vector<unsigned long>::end(__for_range)._M_current;
          while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(&__for_begin, &__for_end) )
          {
            v36 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*(&__for_begin);
            if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
              v36 = __asan_report_load8(v36);
            *(_QWORD *)(v5 + 64) = *(_QWORD *)v36;
            std::unordered_set<unsigned long>::erase(
              &this->noheal_guid_set_,
              (const std::unordered_set<long unsigned int>::key_type *)(v5 + 64));
            __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++(&__for_begin);
          }
          if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->activity_);
          runtime_mgr = RoguelikeDungeonActivity::getRogueDungeonRuntimeMgr(this->activity_);
          __for_range_0 = (const std::vector<long unsigned int> *)RogueLikeDungeonRuntimeMgr::getRogueTeam(runtime_mgr);
          __for_begin._M_current = (unsigned __int64 *)std::vector<unsigned long>::begin(__for_range_0)._M_current;
          __for_end._M_current = (unsigned __int64 *)std::vector<unsigned long>::end(__for_range_0)._M_current;
          while ( __gnu_cxx::operator!=<unsigned long const*,std::vector<unsigned long>>(
                    (const __gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > *)&__for_begin,
                    (const __gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > *)&__for_end) )
          {
            v37 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator*((const __gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > *const)&__for_begin);
            if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
              v37 = __asan_report_load8(v37);
            *(_QWORD *)(v5 + 64) = *(_QWORD *)v37;
            if ( common::tools::MiscUtils::isContains<unsigned long>(
                   (std::vector<long unsigned int> *)(v5 + 192),
                   (const unsigned __int64 *)(v5 + 64)) )
            {
              if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                __asan_report_load8(this);
              AvatarComp = Player::getAvatarComp(this->player_);
              PlayerAvatarComp::findAvatar<MirrorAvatar>((const PlayerAvatarComp *const)(v5 + 96), (uint64_t)AvatarComp);
              v39 = 0;
              v40 = 1;
              if ( !std::operator==<MirrorAvatar>(0LL, (const std::shared_ptr<MirrorAvatar> *)(v5 + 96)) )
              {
                std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
                Entity::getScene((const Entity *const)&v63);
                v39 = 1;
                if ( !std::operator==<Scene>(0LL, &v63) )
                  v40 = 0;
              }
              if ( v39 )
                std::shared_ptr<Scene>::~shared_ptr(&v63);
              if ( v40 )
              {
                common::milog::MiLogStream::create(
                  &v64,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
                  "clearRoguelikeEffect",
                  1781);
                v41 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                        &v64,
                        (const char (*)[35])"[ROGUELIKE] findAvatar fail, guid:");
                v42 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                        v41,
                        (const unsigned __int64 *)(v5 + 64));
                v43 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                        v42,
                        (const char (*)[10])", player:");
                if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                  __asan_report_load8(this);
                operator<<(v43, this->player_);
                common::milog::MiLogStream::~MiLogStream(&v64);
              }
              else
              {
                v44 = std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
                Creature::setServerGlobalValue(v44, &effect_config->effect_key, 0.0, 1);
              }
              std::shared_ptr<MirrorAvatar>::~shared_ptr((std::shared_ptr<MirrorAvatar> *const)(v5 + 96));
            }
            __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator++((__gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > *const)&__for_begin);
          }
          common::milog::MiLogStream::create(
            &v64,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
            "clearRoguelikeEffect",
            1787);
          v45 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                  &v64,
                  (const char (*)[51])"[ROGUELIKE] clear noheal effecet, chosen_guid_vec:");
          v46 = common::milog::MiLogStream::operator<<<unsigned long>(
                  v45,
                  (const std::vector<long unsigned int> *)(v5 + 192));
          v35 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v46, (const char (*)[10])", player:");
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
        }
        operator<<(v35, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v64);
        std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v5 + 192));
        std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v5 + 128));
      }
      break;
    case ROGUELIKE_EFFECT_ADD_CARD_TYPE_WEIGHT:
      std::unordered_map<data::RoguelikeCardType,unsigned int>::clear(&this->card_add_weight_map_);
      break;
    case ROGUELIKE_EFFECT_SUB_REFRESH_CARD_COST:
      if ( *(_BYTE *)(((unsigned __int64)&this->refresh_card_cost_sub_prob_weight_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->refresh_card_cost_sub_prob_weight_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->refresh_card_cost_sub_prob_weight_, v8, &this->refresh_card_cost_sub_prob_weight_);
      }
      this->refresh_card_cost_sub_prob_weight_ = 0;
      if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_init_);
      if ( this->is_init_ )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_load1(&this->is_in_roguelike_dungeon_);
        }
        if ( this->is_in_roguelike_dungeon_ )
          RoguelikeMiscMgr::notifyRefreshCostUpdate(this);
      }
      break;
    case ROGUELIKE_EFFECT_SUB_CURSE_PROB:
      v31 = (*(_BYTE *)(((unsigned __int64)&this->trigger_curse_sub_weight_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_curse_sub_weight_ >> 3) + 0x7FFF8000));
      if ( (_BYTE)v31 )
        __asan_report_store4(&this->trigger_curse_sub_weight_, (((_BYTE)this + 20) & 7u) + 3, v31);
      this->trigger_curse_sub_weight_ = 0;
      break;
    case ROGUELIKE_EFFECT_PROB_FREE_REFRESH_CARD:
      v32 = (*(_BYTE *)(((unsigned __int64)&this->free_refresh_card_prob_weight_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->free_refresh_card_prob_weight_ >> 3) + 0x7FFF8000));
      if ( (_BYTE)v32 )
        __asan_report_store4(&this->free_refresh_card_prob_weight_, (((_BYTE)this - 76) & 7u) + 3, v32);
      this->free_refresh_card_prob_weight_ = 0;
      break;
    case ROGUELIKE_EFFECT_ADD_CARD_TYPE_WEIGHT_ROOM_FIRST:
      std::unordered_map<data::RoguelikeCardType,unsigned int>::clear(&this->refresh_cell_card_add_weight_map_);
      break;
    default:
      common::milog::MiLogStream::create(
        &v64,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "clearRoguelikeEffect",
        1836);
      v49 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              &v64,
              (const char (*)[45])"[ROGUELIKE] unsupported effect, effect_type:");
      if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect_config->effect_type);
      }
LABEL_131:
      __for_end._M_current = (unsigned __int64 *)data::enumValToStr(effect_config->effect_type);
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v49, (const char *const *)&__for_end);
      common::milog::MiLogStream::~MiLogStream(&v64);
      break;
  }
  if ( v65 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1843: range 0000000015961C34-0000000015961EFF
void __cdecl RoguelikeMiscMgr::doRoguelikeShikigamiEffect(RoguelikeMiscMgr *const this)
{
  const ActivityRogueExcelConfigMgr *v1; // rcx
  common::milog::MiLogStream *v2; // rax
  uint32_t v3; // ecx
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-A0h] BYREF
  const ActivityRogueExcelConfigMgr *rogue_config_mgr; // [rsp+28h] [rbp-98h]
  const std::unordered_map<unsigned int,unsigned int> *shikigami_group; // [rsp+30h] [rbp-90h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+38h] [rbp-88h]
  const std::pair<unsigned int const,unsigned int> *v9; // [rsp+40h] [rbp-80h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *id; // [rsp+48h] [rbp-78h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+50h] [rbp-70h]
  const data::RoguelikeShikigamiGroupExcelConfig *shikigami_effect_config_ptr; // [rsp+58h] [rbp-68h]
  std::shared_ptr<Config> v13; // [rsp+60h] [rbp-60h] BYREF
  std::vector<unsigned int> v14; // [rsp+70h] [rbp-50h] BYREF
  common::milog::MiLogStream v15; // [rsp+90h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  rogue_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.txt_config_mgr.activity_rogue_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->activity_);
  shikigami_group = RoguelikeDungeonActivity::getShikigamiMap(this->activity_);
  __for_range = shikigami_group;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(shikigami_group)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(shikigami_group)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,unsigned int>(v9);
    count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v9);
    v1 = rogue_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    shikigami_effect_config_ptr = data::ActivityRogueExcelConfigMgrBase::findRoguelikeShikigamiGroupExcelConfig(v1, *id);
    if ( shikigami_effect_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(id);
      }
      v3 = *id;
      if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(count);
      }
      RoguelikeMiscMgr::doRoguelikeEffectAndGetParamVec(
        &v14,
        this,
        &shikigami_effect_config_ptr->effect_config,
        *count,
        SOURCE_SHIKIGAMI,
        v3);
      std::vector<unsigned int>::~vector(&v14);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "doRoguelikeShikigamiEffect",
        1851);
      v2 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
             &v15,
             (const char (*)[63])"[ROGUELIKE] findRoguelikeShikigamiGroupExcelConfig failed, id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, id);
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
};

// Line 1860: range 0000000015961F00-000000001596219A
void __cdecl RoguelikeMiscMgr::recoverRoguelikeShikigamiEffect(RoguelikeMiscMgr *const this)
{
  const ActivityRogueExcelConfigMgr *v1; // rcx
  common::milog::MiLogStream *v2; // rax
  uint32_t v3; // ecx
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-88h] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-80h] BYREF
  const ActivityRogueExcelConfigMgr *rogue_config_mgr; // [rsp+28h] [rbp-78h]
  const std::unordered_map<unsigned int,unsigned int> *shikigami_group; // [rsp+30h] [rbp-70h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  const std::pair<unsigned int const,unsigned int> *v9; // [rsp+40h] [rbp-60h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *id; // [rsp+48h] [rbp-58h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+50h] [rbp-50h]
  const data::RoguelikeShikigamiGroupExcelConfig *shikigami_effect_config_ptr; // [rsp+58h] [rbp-48h]
  std::shared_ptr<Config> v13; // [rsp+60h] [rbp-40h] BYREF
  common::milog::MiLogStream v14; // [rsp+70h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  rogue_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.txt_config_mgr.activity_rogue_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->activity_);
  shikigami_group = RoguelikeDungeonActivity::getShikigamiMap(this->activity_);
  __for_range = shikigami_group;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(shikigami_group)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(shikigami_group)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,unsigned int>(v9);
    count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v9);
    v1 = rogue_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    shikigami_effect_config_ptr = data::ActivityRogueExcelConfigMgrBase::findRoguelikeShikigamiGroupExcelConfig(v1, *id);
    if ( shikigami_effect_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(id);
      }
      v3 = *id;
      if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(count);
      }
      RoguelikeMiscMgr::recoverRoguelikeEffect(
        this,
        &shikigami_effect_config_ptr->effect_config,
        *count,
        SOURCE_SHIKIGAMI,
        v3);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "recoverRoguelikeShikigamiEffect",
        1868);
      v2 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
             &v14,
             (const char (*)[63])"[ROGUELIKE] findRoguelikeShikigamiGroupExcelConfig failed, id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, id);
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
};

// Line 1876: range 000000001596219C-000000001596225D
void __cdecl RoguelikeMiscMgr::initRoguelikeRuneCount(
        RoguelikeMiscMgr *const this,
        const std::vector<std::pair<unsigned int,unsigned int>> *rune_vec)
{
  const unsigned int *v2; // r8
  const unsigned int *v3; // r9
  __int128 v4; // rax
  std::vector<std::pair<unsigned int,unsigned int>>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::vector<std::pair<unsigned int,unsigned int>>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  const std::vector<std::pair<unsigned int,unsigned int>> *__for_range; // [rsp+20h] [rbp-30h]
  const std::pair<unsigned int,unsigned int> *pair; // [rsp+28h] [rbp-28h]
  std::tuple<unsigned int,unsigned int,unsigned int> v9; // [rsp+34h] [rbp-1Ch] BYREF

  std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::clear(&this->chosen_rune_tuple_vec_);
  __for_range = rune_vec;
  __for_begin._M_current = std::vector<std::pair<unsigned int,unsigned int>>::begin(rune_vec)._M_current;
  __for_end._M_current = std::vector<std::pair<unsigned int,unsigned int>>::end(rune_vec)._M_current;
  while ( __gnu_cxx::operator!=<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>(
            &__for_begin,
            &__for_end) )
  {
    pair = __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>::operator*(&__for_begin);
    *(std::tuple<unsigned int,unsigned int,unsigned int> *)&v4 = std::make_tuple<unsigned int const&,unsigned int const&,unsigned int const&>(
                                                                   (const unsigned int *)&v9.std::_Tuple_impl<1,unsigned int,unsigned int>,
                                                                   (const unsigned int *)pair,
                                                                   &pair->second,
                                                                   &pair->second,
                                                                   v2,
                                                                   v3);
    std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::emplace_back<std::tuple<unsigned int,unsigned int,unsigned int>>(
      &this->chosen_rune_tuple_vec_,
      &v9,
      *((std::tuple<unsigned int,unsigned int,unsigned int> **)&v4 + 1));
    __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>::operator++(&__for_begin);
  }
};

// Line 1885: range 000000001596225E-00000000159626F5
int32_t __cdecl RoguelikeMiscMgr::initRoguelikeCardData(RoguelikeMiscMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> >,false,false>::pointer v4; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> >,false,false>::pointer v5; // rax
  std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::mapped_type *v6; // r14
  std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> *p_second; // rcx
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> >,false,false>::pointer v8; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> >,false,false>::pointer v9; // rax
  std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::mapped_type *v10; // r14
  std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> *v11; // rcx
  int32_t v12; // r14d
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-174h]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> >,false> __y; // [rsp+20h] [rbp-170h] BYREF
  const ActivityRogueExcelConfigMgr *rogue_config_mgr; // [rsp+28h] [rbp-168h]
  std::shared_ptr<Config> v17; // [rsp+30h] [rbp-160h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-150h] BYREF
  char v19[304]; // [rsp+60h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 8 9 iter:1902 64 56 32 rune_related_card_depot_map:1896 160 56 32 elem_related_card_depot_map:1899";
  *(_QWORD *)(v1 + 16) = RoguelikeMiscMgr::initRoguelikeCardData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862723] = -234881024;
  v3[536862724] = -218959118;
  v3[536862726] = -218103808;
  v3[536862727] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  rogue_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.activity_rogue_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v17);
  std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>>::operator=(
    &this->depot_card_type_weight_map_,
    &rogue_config_mgr->depot_card_type_prob_map);
  std::unordered_map<unsigned int,unsigned int>::operator=(&this->card_count_map_, &rogue_config_mgr->card_pool_map);
  std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::operator=(
    &this->card_depot_map_,
    &rogue_config_mgr->basic_card_depot_map);
  std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::unordered_map((std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>> *const)(v1 + 64));
  RoguelikeMiscMgr::initRuneRelatedCardDepotMap(
    this,
    (std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>> *)(v1 + 64));
  std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::unordered_map((std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>> *const)(v1 + 160));
  RoguelikeMiscMgr::initElementRelatedCardDepotMap(
    this,
    (std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>> *)(v1 + 160));
  *(std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::iterator *)(v1 + 32) = std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::begin(&this->card_depot_map_);
  while ( 1 )
  {
    __y._M_cur = std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::end(&this->card_depot_map_)._M_cur;
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> >,false> *)(v1 + 32),
            &__y) )
      break;
    v4 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> >,false,false> *const)(v1 + 32));
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>,unsigned int>(
           (std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>> *)(v1 + 64),
           &v4->first) )
    {
      v5 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> >,false,false> *const)(v1 + 32));
      v6 = std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::operator[](
             (std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>> *const)(v1 + 64),
             &v5->first);
      p_second = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> >,false,false> *const)(v1 + 32))->second;
      RoguelikeMiscMgr::mergeRoguelikeCardDepotMap(this, p_second, v6);
    }
    v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> >,false,false> *const)(v1 + 32));
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>,unsigned int>(
           (std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>> *)(v1 + 160),
           &v8->first) )
    {
      v9 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> >,false,false> *const)(v1 + 32));
      v10 = std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::operator[](
              (std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>> *const)(v1 + 160),
              &v9->first);
      v11 = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> >,false,false> *const)(v1 + 32))->second;
      RoguelikeMiscMgr::mergeRoguelikeCardDepotMap(this, v11, v10);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>,false,false>::operator++(
      (std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> >,false,false> *const)(v1 + 32),
      0);
  }
  ret = RoguelikeMiscMgr::modifyRoguelikeCardDataBySelectCardMap(this, &this->select_card_map_);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "initRoguelikeCardData",
      1916);
    common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
      &v18,
      (const char (*)[58])"[ROGUELIKE] modifyRoguelikeCardDataBySelectCardMap failed");
    common::milog::MiLogStream::~MiLogStream(&v18);
    v12 = ret;
  }
  else
  {
    RoguelikeMiscMgr::recoverRoguelikeCardEffect(this);
    v12 = 0;
  }
  std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::~unordered_map((std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>> *const)(v1 + 160));
  std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::~unordered_map((std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>> *const)(v1 + 64));
  result = v12;
  if ( v19 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF800C) = 0LL;
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
  return result;
};

// Line 1925: range 00000000159626F6-00000000159628D4
void __cdecl RoguelikeMiscMgr::initRuneRelatedCardDepotMap(
        RoguelikeMiscMgr *const this,
        std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>> *rune_depot_card_map)
{
  std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::mapped_type *v2; // rcx
  std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::iterator __for_begin; // [rsp+10h] [rbp-80h] BYREF
  std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::iterator __for_end; // [rsp+18h] [rbp-78h] BYREF
  std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::const_iterator __for_begin_0; // [rsp+20h] [rbp-70h] BYREF
  std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::const_iterator __for_end_0; // [rsp+28h] [rbp-68h] BYREF
  const ActivityRogueExcelConfigMgr *rogue_config_mgr; // [rsp+30h] [rbp-60h]
  std::vector<std::tuple<unsigned int,unsigned int,unsigned int>> *__for_range; // [rsp+38h] [rbp-58h]
  const std::tuple<unsigned int,unsigned int,unsigned int> *v9; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,const std::tuple<unsigned int,unsigned int,unsigned int> >::type *rune_id; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,const std::tuple<unsigned int,unsigned int,unsigned int> >::type *left_count; // [rsp+50h] [rbp-40h]
  std::tuple_element<2,const std::tuple<unsigned int,unsigned int,unsigned int> >::type *max_count; // [rsp+58h] [rbp-38h]
  const std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>> *__for_range_0; // [rsp+60h] [rbp-30h]
  const std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> > *v14; // [rsp+68h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> > >::type *depot_id; // [rsp+70h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> > >::type *card_depot_map; // [rsp+78h] [rbp-18h]
  std::shared_ptr<Config> v17; // [rsp+80h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  rogue_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.activity_rogue_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v17);
  __for_range = &this->chosen_rune_tuple_vec_;
  __for_begin._M_current = std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::begin(&this->chosen_rune_tuple_vec_)._M_current;
  __for_end._M_current = std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::end(&this->chosen_rune_tuple_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::tuple<unsigned int,unsigned int,unsigned int> *,std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>>(
            &__for_begin,
            &__for_end) )
  {
    v9 = __gnu_cxx::__normal_iterator<std::tuple<unsigned int,unsigned int,unsigned int> *,std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>>::operator*(&__for_begin);
    rune_id = (std::tuple_element<0,const std::tuple<unsigned int,unsigned int,unsigned int> >::type *)std::get<0ul,unsigned int,unsigned int,unsigned int>(v9);
    left_count = (std::tuple_element<1,const std::tuple<unsigned int,unsigned int,unsigned int> >::type *)std::get<1ul,unsigned int,unsigned int,unsigned int>(v9);
    max_count = (std::tuple_element<2,const std::tuple<unsigned int,unsigned int,unsigned int> >::type *)std::get<2ul,unsigned int,unsigned int,unsigned int>(v9);
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>> const,unsigned int>(
           &rogue_config_mgr->rune_card_depot_map,
           rune_id) )
    {
      __for_range_0 = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>>::at(
                        &rogue_config_mgr->rune_card_depot_map,
                        rune_id);
      __for_begin_0._M_cur = std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::begin(__for_range_0)._M_cur;
      __for_end_0._M_cur = std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::end(__for_range_0)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>,false>(
                &__for_begin_0,
                &__for_end_0) )
      {
        v14 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>,false,false>::operator*(&__for_begin_0);
        depot_id = std::get<0ul,unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>(v14);
        card_depot_map = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> > >::type *)std::get<1ul,unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>(v14);
        v2 = std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::operator[](
               rune_depot_card_map,
               depot_id);
        RoguelikeMiscMgr::mergeRoguelikeCardDepotMap(this, v2, card_depot_map);
        std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>,false,false>::operator++(&__for_begin_0);
      }
    }
    __gnu_cxx::__normal_iterator<std::tuple<unsigned int,unsigned int,unsigned int> *,std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>>::operator++(&__for_begin);
  }
};

// Line 1942: range 00000000159628D6-00000000159630CC
void __cdecl RoguelikeMiscMgr::initElementRelatedCardDepotMap(
        RoguelikeMiscMgr *const this,
        std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>> *elem_depot_card_map)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  PlayerAvatarComp *v11; // rax
  common::milog::MiLogStream *v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::mapped_type *v15; // rcx
  uint32_t elem_pattern; // [rsp+14h] [rbp-12Ch]
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>>::const_iterator __for_begin_0; // [rsp+18h] [rbp-128h] BYREF
  std::vector<long unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-120h] BYREF
  std::vector<long unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-118h] BYREF
  const ActivityRogueExcelConfigMgr *rogue_config_mgr; // [rsp+30h] [rbp-110h]
  RogueLikeDungeonRuntimeMgr *runtime_mgr; // [rsp+38h] [rbp-108h]
  const std::vector<long unsigned int> *__for_range; // [rsp+40h] [rbp-100h]
  const std::vector<long unsigned int> *__for_range_0; // [rsp+48h] [rbp-F8h]
  const std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>> *__for_range_1; // [rsp+50h] [rbp-F0h]
  const std::pair<unsigned int const,std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>> > *v25; // [rsp+58h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>> > >::type *pattern; // [rsp+60h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>> > >::type *elem_card_map; // [rsp+68h] [rbp-D8h]
  const std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>> *__for_range_2; // [rsp+70h] [rbp-D0h]
  const std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> > *v29; // [rsp+78h] [rbp-C8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> > >::type *depot_id; // [rsp+80h] [rbp-C0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> > >::type *card_depot_map; // [rsp+88h] [rbp-B8h]
  common::milog::MiLogStream v32; // [rsp+90h] [rbp-B0h] BYREF
  char v33[144]; // [rsp+B0h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 guid:1946 64 16 15 avatar_ptr:1958";
  *(_QWORD *)(v2 + 16) = RoguelikeMiscMgr::initElementRelatedCardDepotMap;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 64));
  rogue_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->design_config.txt_config_mgr.activity_rogue_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->activity_);
  runtime_mgr = RoguelikeDungeonActivity::getRogueDungeonRuntimeMgr(this->activity_);
  elem_pattern = 0;
  __for_range = (const std::vector<long unsigned int> *)RogueLikeDungeonRuntimeMgr::getRogueTeam(runtime_mgr);
  __for_begin._M_current = std::vector<unsigned long>::begin(__for_range)._M_current;
  __for_end._M_current = std::vector<unsigned long>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<unsigned long const*,std::vector<unsigned long>>(&__for_begin, &__for_end) )
  {
    v5 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator*(&__for_begin);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(v5);
    *(_QWORD *)(v2 + 32) = *(_QWORD *)v5;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    AvatarComp = Player::getAvatarComp(this->player_);
    PlayerAvatarComp::findAvatar<MirrorAvatar>((const PlayerAvatarComp *const)(v2 + 64), (uint64_t)AvatarComp);
    if ( std::operator==<MirrorAvatar>(0LL, (const std::shared_ptr<MirrorAvatar> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "initElementRelatedCardDepotMap",
        1951);
      v7 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
             &v32,
             (const char (*)[50])"[ROGUELIKE] mirror avatar not found, avatar_guid:");
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, (const unsigned __int64 *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v32);
    }
    else
    {
      v8 = (unsigned __int64)std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8(v8);
      v9 = *(_QWORD *)v8 + 280LL;
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8(*(_QWORD *)v8 + 280LL);
      elem_pattern |= 1 << (*(__int64 (__fastcall **)(unsigned __int64))v9)(v8);
    }
    std::shared_ptr<MirrorAvatar>::~shared_ptr((std::shared_ptr<MirrorAvatar> *const)(v2 + 64));
    __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator++(&__for_begin);
  }
  __for_range_0 = &RogueLikeDungeonRuntimeMgr::getRogueTeam(runtime_mgr)->backstage_mirror_avatar_guid_vec;
  __for_begin._M_current = std::vector<unsigned long>::begin(__for_range_0)._M_current;
  __for_end._M_current = std::vector<unsigned long>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<unsigned long const*,std::vector<unsigned long>>(&__for_begin, &__for_end) )
  {
    v10 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator*(&__for_begin);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8(v10);
    *(_QWORD *)(v2 + 32) = *(_QWORD *)v10;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v11 = Player::getAvatarComp(this->player_);
    PlayerAvatarComp::findAvatar<MirrorAvatar>((const PlayerAvatarComp *const)(v2 + 64), (uint64_t)v11);
    if ( std::operator==<MirrorAvatar>(0LL, (const std::shared_ptr<MirrorAvatar> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "initElementRelatedCardDepotMap",
        1961);
      v12 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              &v32,
              (const char (*)[50])"[ROGUELIKE] mirror avatar not found, avatar_guid:");
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v12, (const unsigned __int64 *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v32);
    }
    else
    {
      v13 = (unsigned __int64)std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        v13 = __asan_report_load8(v13);
      v14 = *(_QWORD *)v13 + 280LL;
      if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        v13 = __asan_report_load8(*(_QWORD *)v13 + 280LL);
      elem_pattern |= 1 << (*(__int64 (__fastcall **)(unsigned __int64))v14)(v13);
    }
    std::shared_ptr<MirrorAvatar>::~shared_ptr((std::shared_ptr<MirrorAvatar> *const)(v2 + 64));
    __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator++(&__for_begin);
  }
  __for_range_1 = &rogue_config_mgr->elem_card_depot_map;
  __for_begin_0._M_cur = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>>::begin(&rogue_config_mgr->elem_card_depot_map)._M_cur;
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>>::end(__for_range_1);
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>>,false>(
            &__for_begin_0,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>> >,false> *)(v2 + 32)) )
  {
    v25 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>>,false,false>::operator*(&__for_begin_0);
    pattern = std::get<0ul,unsigned int const,std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>>(v25);
    elem_card_map = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>> > >::type *)std::get<1ul,unsigned int const,std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>>(v25);
    if ( *(_BYTE *)(((unsigned __int64)pattern >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)pattern & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pattern >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(pattern);
    }
    if ( (elem_pattern & *pattern) == *pattern )
    {
      __for_range_2 = elem_card_map;
      __for_begin._M_current = (const unsigned __int64 *)std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::begin(elem_card_map)._M_cur;
      __for_end._M_current = (const unsigned __int64 *)std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::end(__for_range_2)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> >,false> *)&__for_begin,
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> >,false> *)&__for_end) )
      {
        v29 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> >,false,false> *const)&__for_begin);
        depot_id = std::get<0ul,unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>(v29);
        card_depot_map = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> > >::type *)std::get<1ul,unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>(v29);
        v15 = std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::operator[](
                elem_depot_card_map,
                depot_id);
        RoguelikeMiscMgr::mergeRoguelikeCardDepotMap(this, v15, card_depot_map);
        std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> >,false,false> *const)&__for_begin);
      }
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>>,false,false>::operator++(&__for_begin_0);
  }
  if ( v33 == (char *)v2 )
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

// Line 1981: range 00000000159630CE-0000000015963464
void __cdecl RoguelikeMiscMgr::clearLevelRelatedRoguelikeCardData(RoguelikeMiscMgr *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v4; // rax
  _DWORD *v5; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v6; // rdx
  unsigned int *p_second; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+18h] [rbp-C8h] BYREF
  const ActivityRogueExcelConfigMgr *rogue_config_mgr; // [rsp+20h] [rbp-C0h]
  const data::RoguelikeCardExcelConfig *card_config_ptr; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v14; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-A0h] BYREF
  char v16[128]; // [rsp+60h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 12 card_id:1985 48 4 15 card_count:1986 64 8 9 iter:1983";
  *(_QWORD *)(v1 + 16) = RoguelikeMiscMgr::clearLevelRelatedRoguelikeCardData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -202116352;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  rogue_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.activity_rogue_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v14);
  *(std::map<unsigned int,unsigned int>::iterator *)(v1 + 64) = std::map<unsigned int,unsigned int>::begin(&this->select_card_map_);
  while ( 1 )
  {
    __y._M_node = std::map<unsigned int,unsigned int>::end(&this->select_card_map_)._M_node;
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v1 + 64),
            &__y) )
      break;
    v4 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v1 + 64));
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    *(_DWORD *)(v1 + 32) = *v5;
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v1 + 64));
    p_second = &v6->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    *(_DWORD *)(v1 + 48) = v6->second;
    card_config_ptr = data::ActivityRogueExcelConfigMgrBase::findRoguelikeCardExcelConfig(
                        rogue_config_mgr,
                        *(_DWORD *)(v1 + 32));
    if ( !card_config_ptr )
      goto LABEL_15;
    if ( *(char *)(((unsigned __int64)&card_config_ptr->is_clear_at_next_level >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&card_config_ptr->is_clear_at_next_level);
    if ( card_config_ptr->is_clear_at_next_level )
    {
      RoguelikeMiscMgr::clearRoguelikeEffect(
        this,
        &card_config_ptr->effect_config,
        *(_DWORD *)(v1 + 48),
        SOURCE_CARD,
        *(_DWORD *)(v1 + 32));
      *(std::map<unsigned int,unsigned int>::iterator *)(v1 + 64) = std::map<unsigned int,unsigned int>::erase[abi:cxx11](
                                                                      &this->select_card_map_,
                                                                      *(std::map<unsigned int,unsigned int>::iterator *)(v1 + 64));
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "clearLevelRelatedRoguelikeCardData",
        1995);
      v8 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v15,
             (const char (*)[38])"[ROGUELIKE] clear level related card:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v1 + 32));
      v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])", card_count:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
    else
    {
LABEL_15:
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v1 + 64));
    }
  }
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

// Line 2006: range 0000000015963466-000000001596359C
void __cdecl RoguelikeMiscMgr::clearOptionalRoguelikeCardData(RoguelikeMiscMgr *const this)
{
  __int64 v1; // rsi
  uint32_t *p_optional_card_depot_id; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  std::vector<unsigned int>::clear(&this->optional_card_vec_);
  p_optional_card_depot_id = &this->optional_card_depot_id_;
  if ( *(_BYTE *)(((unsigned __int64)p_optional_card_depot_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_optional_card_depot_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->optional_card_depot_id_, v1, p_optional_card_depot_id);
  }
  this->optional_card_depot_id_ = 0;
  v3 = ((_BYTE)this - 84) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_optional_card_can_refresh_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_optional_card_can_refresh_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_optional_card_can_refresh_, v3, v4);
  this->is_optional_card_can_refresh_ = 0;
  v5 = (((_BYTE)this - 76) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->card_cell_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_cell_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->card_cell_id_, v5, v6);
  this->card_cell_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->refresh_count_, v5, &this->refresh_count_);
  }
  this->refresh_count_ = 0;
};

// Line 2015: range 000000001596359E-000000001596394F
void __cdecl RoguelikeMiscMgr::recoverRoguelikeCardEffect(RoguelikeMiscMgr *const this)
{
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v1; // rax
  common::milog::MiLogStream *v2; // rax
  const ActivityRogueExcelConfigMgr *v3; // rcx
  common::milog::MiLogStream *v4; // rax
  uint32_t v5; // ecx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-80h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+18h] [rbp-78h] BYREF
  const ActivityRogueExcelConfigMgr *rogue_config_mgr; // [rsp+20h] [rbp-70h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+28h] [rbp-68h]
  const std::pair<unsigned int const,unsigned int> *v13; // [rsp+30h] [rbp-60h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *card_id; // [rsp+38h] [rbp-58h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+40h] [rbp-50h]
  const data::RoguelikeCardExcelConfig *card_config_ptr; // [rsp+48h] [rbp-48h]
  std::shared_ptr<Config> v17; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v18; // [rsp+60h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  rogue_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.activity_rogue_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v17);
  __for_range = &this->select_card_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->select_card_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->select_card_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v13 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    card_id = std::get<0ul,unsigned int const,unsigned int>(v13);
    v1 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v13);
    count = v1;
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v1);
    }
    if ( *count )
    {
      v3 = rogue_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)card_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(card_id);
      }
      card_config_ptr = data::ActivityRogueExcelConfigMgrBase::findRoguelikeCardExcelConfig(v3, *card_id);
      if ( card_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)card_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(card_id);
        }
        v5 = *card_id;
        if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(count);
        }
        RoguelikeMiscMgr::recoverRoguelikeEffect(this, &card_config_ptr->effect_config, *count, SOURCE_CARD, v5);
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "recoverRoguelikeCardEffect",
          2031);
        v6 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
               &v18,
               (const char (*)[49])"[ROGUELIKE] recoverRoguelikeCardEffect, card_id:");
        v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, card_id);
        v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])", count:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, count);
        common::milog::MiLogStream::~MiLogStream(&v18);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "recoverRoguelikeCardEffect",
          2027);
        v4 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
               &v18,
               (const char (*)[58])"[ROGUELIKE] findRoguelikeCardExcelConfig failed, card_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, card_id);
        common::milog::MiLogStream::~MiLogStream(&v18);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "recoverRoguelikeCardEffect",
        2021);
      v2 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
             &v18,
             (const char (*)[45])"[ROGUELIKE] select card count zero, card_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, card_id);
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
};

// Line 2037: range 0000000015963950-0000000015963B4C
void __fastcall RoguelikeMiscMgr::doRoguelikeCardEffect(RoguelikeMiscMgr *const this, uint32_t card_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  ActivityRogueExcelConfigMgr *rogue_config_mgr; // [rsp+10h] [rbp-C0h]
  const data::RoguelikeCardExcelConfig *card_config_ptr; // [rsp+18h] [rbp-B8h]
  std::shared_ptr<Config> v8; // [rsp+20h] [rbp-B0h] BYREF
  std::vector<unsigned int> v9; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v10; // [rsp+50h] [rbp-80h] BYREF
  char v11[96]; // [rsp+70h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 card_id:2036";
  *(_QWORD *)(v2 + 16) = RoguelikeMiscMgr::doRoguelikeCardEffect;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = card_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v8);
  rogue_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8)->design_config.txt_config_mgr.activity_rogue_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v8);
  card_config_ptr = data::ActivityRogueExcelConfigMgrBase::findRoguelikeCardExcelConfig(
                      rogue_config_mgr,
                      *(_DWORD *)(v2 + 32));
  if ( card_config_ptr )
  {
    RoguelikeMiscMgr::doRoguelikeEffectAndGetParamVec(
      &v9,
      this,
      &card_config_ptr->effect_config,
      1u,
      SOURCE_CARD,
      *(_DWORD *)(v2 + 32));
    std::vector<unsigned int>::~vector(&v9);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "doRoguelikeCardEffect",
      2042);
    v5 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
           &v10,
           (const char (*)[58])"[ROGUELIKE] findRoguelikeCardExcelConfig failed, card_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v10);
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
};

// Line 2050: range 0000000015963B4E-0000000015963EFF
void __cdecl RoguelikeMiscMgr::recoverRougelikeCurseEffect(RoguelikeMiscMgr *const this)
{
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v1; // rax
  common::milog::MiLogStream *v2; // rax
  const ActivityRogueExcelConfigMgr *v3; // rcx
  common::milog::MiLogStream *v4; // rax
  uint32_t v5; // ecx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-80h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+18h] [rbp-78h] BYREF
  const ActivityRogueExcelConfigMgr *rogue_config_mgr; // [rsp+20h] [rbp-70h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+28h] [rbp-68h]
  const std::pair<unsigned int const,unsigned int> *v13; // [rsp+30h] [rbp-60h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *curse_id; // [rsp+38h] [rbp-58h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+40h] [rbp-50h]
  const data::RoguelikeCurseExcelConfig *curse_config_ptr; // [rsp+48h] [rbp-48h]
  std::shared_ptr<Config> v17; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v18; // [rsp+60h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  rogue_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.activity_rogue_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v17);
  __for_range = &this->trigger_curse_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->trigger_curse_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->trigger_curse_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v13 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    curse_id = std::get<0ul,unsigned int const,unsigned int>(v13);
    v1 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v13);
    count = v1;
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v1);
    }
    if ( *count )
    {
      v3 = rogue_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)curse_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)curse_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)curse_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(curse_id);
      }
      curse_config_ptr = data::ActivityRogueExcelConfigMgrBase::findRoguelikeCurseExcelConfig(v3, *curse_id);
      if ( curse_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)curse_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)curse_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)curse_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(curse_id);
        }
        v5 = *curse_id;
        if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(count);
        }
        RoguelikeMiscMgr::recoverRoguelikeEffect(this, &curse_config_ptr->effect_config, *count, SOURCE_CURSE, v5);
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "recoverRougelikeCurseEffect",
          2066);
        v6 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
               &v18,
               (const char (*)[51])"[ROGUELIKE] recoverRougelikeCurseEffect, curse_id:");
        v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, curse_id);
        v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])", count:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, count);
        common::milog::MiLogStream::~MiLogStream(&v18);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "recoverRougelikeCurseEffect",
          2062);
        v4 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
               &v18,
               (const char (*)[60])"[ROGUELIKE] findRoguelikeCurseExcelConfig failed, curse_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, curse_id);
        common::milog::MiLogStream::~MiLogStream(&v18);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "recoverRougelikeCurseEffect",
        2056);
      v2 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v18,
             (const char (*)[40])"[ROGUELIKE] curse count zero, curse_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, curse_id);
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
};

// Line 2073: range 0000000015963F00-0000000015964202
data::RoguelikeEffectExcelConfig *__fastcall RoguelikeMiscMgr::doRougelikeCurseEffect(
        data::RoguelikeEffectExcelConfig *retstr,
        RoguelikeMiscMgr *const this,
        uint32_t curse_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  uint32_t v7; // r8d
  const data::RoguelikeEffectExcelConfig *p_effect_config; // rdi
  ActivityRogueExcelConfigMgr *rogue_config_mgr; // [rsp+20h] [rbp-A0h]
  const data::RoguelikeCurseExcelConfig *curse_config_ptr; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v14; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-80h] BYREF
  char v16[96]; // [rsp+60h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 13 curse_id:2072";
  *(_QWORD *)(v3 + 16) = RoguelikeMiscMgr::doRougelikeCurseEffect;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = curse_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  rogue_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.activity_rogue_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v14);
  curse_config_ptr = data::ActivityRogueExcelConfigMgrBase::findRoguelikeCurseExcelConfig(
                       rogue_config_mgr,
                       *(_DWORD *)(v3 + 32));
  if ( curse_config_ptr )
  {
    v7 = *(_DWORD *)(v3 + 32);
    p_effect_config = &curse_config_ptr->effect_config;
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->effect_key._M_dataplus._M_p + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->effect_key._M_dataplus._M_p + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      p_effect_config = retstr;
      __asan_report_store_n(retstr, 24LL);
    }
    RoguelikeMiscMgr::doRoguelikeEffectAndGetParamVec(
      (std::vector<unsigned int> *)retstr,
      this,
      p_effect_config,
      1u,
      SOURCE_CURSE,
      v7);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "doRougelikeCurseEffect",
      2078);
    v6 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
           &v15,
           (const char (*)[60])"[ROGUELIKE] findRoguelikeCurseExcelConfig failed, curse_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v15);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->effect_key._M_dataplus._M_p + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->effect_key._M_dataplus._M_p + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 24LL);
    }
    retstr->_vptr_RoguelikeEffectExcelConfig = 0LL;
    *(_QWORD *)&retstr->effect_type = 0LL;
    retstr->effect_key._M_dataplus._M_p = 0LL;
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)retstr);
  }
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 2086: range 0000000015964204-000000001596422E
int32_t __cdecl RoguelikeMiscMgr::initRoguelikeCurseData(RoguelikeMiscMgr *const this)
{
  RoguelikeMiscMgr::rebuildRoguelikeCurseData(this);
  RoguelikeMiscMgr::recoverRougelikeCurseEffect(this);
  return 0;
};

// Line 2095: range 0000000015964230-0000000015964786
void __cdecl RoguelikeMiscMgr::modifyRoguelikeCurseDataByTriggerCurseMap(
        RoguelikeMiscMgr *const this,
        const std::map<unsigned int,unsigned int> *trigger_curse_map)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v5; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v6; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v7; // ecx
  unsigned __int64 v8; // rax
  int v9; // esi
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-110h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-108h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-100h]
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>> *__for_range_0; // [rsp+28h] [rbp-F8h]
  std::pair<unsigned int const,std::map<unsigned int,unsigned int> > *__in; // [rsp+30h] [rbp-F0h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *pool_id; // [rsp+38h] [rbp-E8h]
  std::tuple_element<1,std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *curse_weight_map; // [rsp+40h] [rbp-E0h]
  const std::pair<unsigned int const,unsigned int> *v19; // [rsp+48h] [rbp-D8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *curse_id; // [rsp+50h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+58h] [rbp-C8h]
  common::milog::MiLogStream v22; // [rsp+60h] [rbp-C0h] BYREF
  char v23[160]; // [rsp+80h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 56 21 remove_curse_set:2097";
  *(_QWORD *)(v2 + 16) = RoguelikeMiscMgr::modifyRoguelikeCurseDataByTriggerCurseMap;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v2 + 32));
  __for_range = trigger_curse_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(trigger_curse_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(trigger_curse_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v19 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    curse_id = std::get<0ul,unsigned int const,unsigned int>(v19);
    count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v19);
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,unsigned int>(
           &this->curse_count_map_,
           curse_id) )
    {
      v5 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->curse_count_map_, curse_id);
      v6 = v5;
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v5);
      }
      v7 = *v6;
      if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(count);
      }
      if ( v7 <= *count )
      {
        std::unordered_map<unsigned int,unsigned int>::erase(&this->curse_count_map_, curse_id);
        std::unordered_set<unsigned int>::insert((std::unordered_set<unsigned int> *const)(v2 + 32), curse_id);
      }
      else
      {
        v8 = (unsigned __int64)std::unordered_map<unsigned int,unsigned int>::operator[](
                                 &this->curse_count_map_,
                                 curse_id);
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0 && (char)((v8 & 7) + 3) >= *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v8 = __asan_report_load4(v8);
        v9 = *(_DWORD *)v8;
        if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
        {
          v8 = __asan_report_load4(count);
        }
        *(_DWORD *)v8 = v9 - *count;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "modifyRoguelikeCurseDataByTriggerCurseMap",
        2115);
      v10 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
              &v22,
              (const char (*)[53])"[ROGUELIKE] curse_id is not in curse_pool, curse_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, curse_id);
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->curse_pool_weight_map_;
  __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::begin(&this->curse_pool_weight_map_)._M_cur;
  __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false> *)&__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false,false> *const)&__for_begin);
    pool_id = std::get<0ul,unsigned int const,std::map<unsigned int,unsigned int>>(__in);
    curse_weight_map = std::get<1ul,unsigned int const,std::map<unsigned int,unsigned int>>(__in);
    common::tools::MiscUtils::erase_if<unsigned int,unsigned int,RoguelikeMiscMgr::modifyRoguelikeCurseDataByTriggerCurseMap(std::map<unsigned int,unsigned int> const&)::{lambda(unsigned int &)#1}>(
      curse_weight_map,
      (RoguelikeMiscMgr::modifyRoguelikeCurseDataByTriggerCurseMap::<lambda(auto:23&)>)(v2 + 32));
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false,false> *const)&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v22,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
    "modifyRoguelikeCurseDataByTriggerCurseMap",
    2131);
  v11 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
          &v22,
          (const char (*)[73])"[ROGUELIKE] modifyRoguelikeCurseDataByTriggerCurseMap, remove_curse_set:");
  common::milog::MiLogStream::operator<<<unsigned int>(v11, (const std::unordered_set<unsigned int> *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v22);
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v2 + 32));
  if ( v23 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2122: range 00000000159F1426-00000000159F147E
bool __cdecl RoguelikeMiscMgr::modifyRoguelikeCurseDataByTriggerCurseMap::_lambda_auto_23___::operator()_std::pair_unsigned_int_const_unsigned_int___(
        const RoguelikeMiscMgr::modifyRoguelikeCurseDataByTriggerCurseMap::<lambda(auto:23&)> *const __closure,
        std::pair<unsigned int const,unsigned int> *p)
{
  std::pair<unsigned int const,unsigned int> *v2; // rdx

  v2 = p;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  return common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
           __closure->__remove_curse_set,
           (const unsigned int *)v2);
};

// Line 2136: range 0000000015964788-0000000015964B1E
void __cdecl RoguelikeMiscMgr::clearLevelRelatedRoguelikeCurseData(RoguelikeMiscMgr *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v4; // rax
  _DWORD *v5; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v6; // rdx
  unsigned int *p_second; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+18h] [rbp-C8h] BYREF
  const ActivityRogueExcelConfigMgr *rogue_config_mgr; // [rsp+20h] [rbp-C0h]
  const data::RoguelikeCurseExcelConfig *curse_config_ptr; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v14; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-A0h] BYREF
  char v16[128]; // [rsp+60h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 13 curse_id:2140 48 4 16 curse_count:2141 64 8 9 iter:2138";
  *(_QWORD *)(v1 + 16) = RoguelikeMiscMgr::clearLevelRelatedRoguelikeCurseData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -202116352;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  rogue_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.activity_rogue_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v14);
  *(std::map<unsigned int,unsigned int>::iterator *)(v1 + 64) = std::map<unsigned int,unsigned int>::begin(&this->trigger_curse_map_);
  while ( 1 )
  {
    __y._M_node = std::map<unsigned int,unsigned int>::end(&this->trigger_curse_map_)._M_node;
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v1 + 64),
            &__y) )
      break;
    v4 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v1 + 64));
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    *(_DWORD *)(v1 + 32) = *v5;
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v1 + 64));
    p_second = &v6->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    *(_DWORD *)(v1 + 48) = v6->second;
    curse_config_ptr = data::ActivityRogueExcelConfigMgrBase::findRoguelikeCurseExcelConfig(
                         rogue_config_mgr,
                         *(_DWORD *)(v1 + 32));
    if ( !curse_config_ptr )
      goto LABEL_15;
    if ( *(_BYTE *)(((unsigned __int64)&curse_config_ptr->is_clear_at_next_level >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)curse_config_ptr + 105) & 7) >= *(_BYTE *)(((unsigned __int64)&curse_config_ptr->is_clear_at_next_level >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load1(&curse_config_ptr->is_clear_at_next_level);
    }
    if ( curse_config_ptr->is_clear_at_next_level )
    {
      RoguelikeMiscMgr::clearRoguelikeEffect(
        this,
        &curse_config_ptr->effect_config,
        *(_DWORD *)(v1 + 48),
        SOURCE_CURSE,
        *(_DWORD *)(v1 + 32));
      *(std::map<unsigned int,unsigned int>::iterator *)(v1 + 64) = std::map<unsigned int,unsigned int>::erase[abi:cxx11](
                                                                      &this->trigger_curse_map_,
                                                                      *(std::map<unsigned int,unsigned int>::iterator *)(v1 + 64));
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "clearLevelRelatedRoguelikeCurseData",
        2150);
      v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v15,
             (const char (*)[39])"[ROGUELIKE] clear level related curse:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v1 + 32));
      v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])", curse_count:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
    else
    {
LABEL_15:
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v1 + 64));
    }
  }
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

// Line 2160: range 0000000015964B20-0000000015964E9D
__int64 __fastcall RoguelikeMiscMgr::clearCurse(RoguelikeMiscMgr *const this, uint32_t curse_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  unsigned __int64 v7; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v8; // rax
  _DWORD *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  ActivityRogueExcelConfigMgr *rogue_config_mgr; // [rsp+10h] [rbp-A0h]
  const data::RoguelikeCurseExcelConfig *curse_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v13; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-80h] BYREF
  char v15[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 curse_id:2159";
  *(_QWORD *)(v2 + 16) = RoguelikeMiscMgr::clearCurse;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = curse_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  rogue_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.txt_config_mgr.activity_rogue_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int>,unsigned int>(
          &this->trigger_curse_map_,
          (const unsigned int *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "clearCurse",
      2164);
    v5 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v14,
           (const char (*)[43])"[ROGUELIKE] curse is not effect, curse_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    curse_config_ptr = data::ActivityRogueExcelConfigMgrBase::findRoguelikeCurseExcelConfig(
                         rogue_config_mgr,
                         *(_DWORD *)(v2 + 32));
    if ( curse_config_ptr )
      RoguelikeMiscMgr::clearRoguelikeEffect(
        this,
        &curse_config_ptr->effect_config,
        1u,
        SOURCE_CURSE,
        *(_DWORD *)(v2 + 32));
    v7 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](
                             &this->trigger_curse_map_,
                             (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && (char)((v7 & 7) + 3) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load4(v7);
    --*(_DWORD *)v7;
    v8 = std::map<unsigned int,unsigned int>::operator[](
           &this->trigger_curse_map_,
           (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    if ( !*v9 )
      std::map<unsigned int,unsigned int>::erase(
        &this->trigger_curse_map_,
        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
    RoguelikeMiscMgr::rebuildRoguelikeCurseData(this);
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "clearCurse",
      2178);
    v10 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
            &v14,
            (const char (*)[37])"[ROGUELIKE] clear a curse, curse_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = 0LL;
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
  return result;
};

// Line 2183: range 0000000015964E9E-0000000015965108
void __cdecl RoguelikeMiscMgr::clearAllCurse(RoguelikeMiscMgr *const this)
{
  const ActivityRogueExcelConfigMgr *v1; // rcx
  uint32_t v2; // ecx
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-80h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+18h] [rbp-78h] BYREF
  const ActivityRogueExcelConfigMgr *rogue_config_mgr; // [rsp+20h] [rbp-70h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+28h] [rbp-68h]
  const std::pair<unsigned int const,unsigned int> *v7; // [rsp+30h] [rbp-60h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *curse_id; // [rsp+38h] [rbp-58h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *curse_count; // [rsp+40h] [rbp-50h]
  const data::RoguelikeCurseExcelConfig *curse_config_ptr; // [rsp+48h] [rbp-48h]
  std::shared_ptr<Config> v11; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v12; // [rsp+60h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  rogue_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11)->design_config.txt_config_mgr.activity_rogue_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v11);
  __for_range = &this->trigger_curse_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->trigger_curse_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->trigger_curse_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    curse_id = std::get<0ul,unsigned int const,unsigned int>(v7);
    curse_count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v7);
    v1 = rogue_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)curse_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)curse_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)curse_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(curse_id);
    }
    curse_config_ptr = data::ActivityRogueExcelConfigMgrBase::findRoguelikeCurseExcelConfig(v1, *curse_id);
    if ( curse_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)curse_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)curse_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)curse_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(curse_id);
      }
      v2 = *curse_id;
      if ( *(_BYTE *)(((unsigned __int64)curse_count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)curse_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)curse_count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(curse_count);
      }
      RoguelikeMiscMgr::clearRoguelikeEffect(this, &curse_config_ptr->effect_config, *curse_count, SOURCE_CURSE, v2);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  std::map<unsigned int,unsigned int>::clear(&this->trigger_curse_map_);
  RoguelikeMiscMgr::rebuildRoguelikeCurseData(this);
  common::milog::MiLogStream::create(
    &v12,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
    "clearAllCurse",
    2196);
  common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
    &v12,
    (const char (*)[28])"[ROGUELIKE] clear all curse");
  common::milog::MiLogStream::~MiLogStream(&v12);
};

// Line 2200: range 000000001596510A-00000000159651B1
void __cdecl RoguelikeMiscMgr::rebuildRoguelikeCurseData(RoguelikeMiscMgr *const this)
{
  ActivityRogueExcelConfigMgr *rogue_config_mgr; // [rsp+18h] [rbp-18h]
  std::shared_ptr<Config> v2; // [rsp+20h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v2);
  rogue_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v2)->design_config.txt_config_mgr.activity_rogue_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v2);
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::operator=(
    &this->curse_pool_weight_map_,
    &rogue_config_mgr->curse_pool_weight_map);
  std::unordered_map<unsigned int,unsigned int>::operator=(&this->curse_count_map_, &rogue_config_mgr->curse_count_map);
  RoguelikeMiscMgr::modifyRoguelikeCurseDataByTriggerCurseMap(this, &this->trigger_curse_map_);
};

// Line 2208: range 00000000159651B2-00000000159659F0
__int64 __fastcall RoguelikeMiscMgr::doRoguelikeGacha(
        RoguelikeMiscMgr *const this,
        uint32_t depot_id,
        std::vector<unsigned int> *res_card_vec,
        uint32_t cell_id,
        bool is_can_refresh)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  __int64 result; // rax
  common::milog::MiLogStream *v9; // rax
  RogueLikeDungeonRuntimeMgr *RogueDungeonRuntimeMgr; // rcx
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
  std::vector<unsigned int> *v22; // rsi
  uint32_t v23; // ecx
  char v24; // al
  __int64 v25; // rsi
  __int64 v26; // rdx
  uint32_t v27; // ecx
  char v28; // dl
  __int64 v29; // rdx
  common::milog::MiLogStream v33; // [rsp+30h] [rbp-A0h] BYREF
  char v34[128]; // [rsp+50h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 13 depot_id:2207 64 4 12 cell_id:2207";
  *(_QWORD *)(v5 + 16) = RoguelikeMiscMgr::doRoguelikeGacha;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = depot_id;
  *(_DWORD *)(v5 + 64) = cell_id;
  if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_init_);
  if ( !this->is_init_ )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_in_roguelike_dungeon_);
  }
  if ( !this->is_in_roguelike_dungeon_ )
  {
LABEL_10:
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "doRoguelikeGacha",
      2211);
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      &v33,
      (const char (*)[43])"[ROGUELIKE] player misc data is not inited");
    common::milog::MiLogStream::~MiLogStream(&v33);
    result = 0xFFFFFFFFLL;
    goto LABEL_40;
  }
  if ( !std::vector<unsigned int>::empty(&this->optional_card_vec_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->card_cell_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_cell_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->card_cell_id_);
    }
    if ( this->card_cell_id_ == *(_DWORD *)(v5 + 64) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "doRoguelikeGacha",
        2221);
      v9 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
             &v33,
             (const char (*)[63])"[ROGUELIKE] have optional_card_vec, return. optional_card_vec:");
      common::milog::MiLogStream::operator<<<unsigned int>(v9, &this->optional_card_vec_);
      common::milog::MiLogStream::~MiLogStream(&v33);
      std::vector<unsigned int>::operator=(res_card_vec, &this->optional_card_vec_);
      result = 0LL;
      goto LABEL_40;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->is_optional_card_can_refresh_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_optional_card_can_refresh_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_optional_card_can_refresh_);
    }
    if ( !this->is_optional_card_can_refresh_
      || common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
           &this->gacha_cell_set_,
           (const unsigned int *)(v5 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "doRoguelikeGacha",
        2234);
      v12 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              &v33,
              (const char (*)[45])"[ROGUELIKE] invalid gacha request, depot_id:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v5 + 48));
      v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])", cell_id:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v5 + 64));
      v16 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v15,
              (const char (*)[21])", optional_card_vec:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int>(v16, &this->optional_card_vec_);
      v18 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              v17,
              (const char (*)[26])", optional_card_depot_id:");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &this->optional_card_depot_id_);
      v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v19, (const char (*)[16])", card_cell_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->card_cell_id_);
      common::milog::MiLogStream::~MiLogStream(&v33);
      result = 0xFFFFFFFFLL;
      goto LABEL_40;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->activity_);
    RogueDungeonRuntimeMgr = RoguelikeDungeonActivity::getRogueDungeonRuntimeMgr(this->activity_);
    if ( *(_BYTE *)(((unsigned __int64)&this->card_cell_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_cell_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->card_cell_id_);
    }
    RogueLikeDungeonRuntimeMgr::afterDrawCard(RogueDungeonRuntimeMgr, this->card_cell_id_);
    RoguelikeMiscMgr::clearOptionalRoguelikeCardData(this);
  }
  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
         &this->gacha_cell_set_,
         (const unsigned int *)(v5 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "doRoguelikeGacha",
      2241);
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      &v33,
      (const char (*)[41])"[ROGUELIKE] cannot gacha twice in a cell");
    common::milog::MiLogStream::~MiLogStream(&v33);
    result = 0xFFFFFFFFLL;
  }
  else if ( RoguelikeMiscMgr::randRoguelikeCardVec(this, *(_DWORD *)(v5 + 48), res_card_vec, is_can_refresh) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "doRoguelikeGacha",
      2247);
    v21 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
            &v33,
            (const char (*)[51])"[ROGUELIKE] randRoguelikeCardVec failed, depot_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream(&v33);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v22 = res_card_vec;
    std::vector<unsigned int>::operator=(&this->optional_card_vec_, res_card_vec);
    v23 = *(_DWORD *)(v5 + 48);
    v24 = *(_BYTE *)(((unsigned __int64)&this->optional_card_depot_id_ >> 3) + 0x7FFF8000);
    if ( v24 != 0 && v24 <= 3 )
    {
      LOBYTE(v22) = v24 != 0;
      __asan_report_store4(&this->optional_card_depot_id_, v22, &this->optional_card_depot_id_);
    }
    this->optional_card_depot_id_ = v23;
    v25 = ((_BYTE)this - 84) & 7;
    v26 = (*(_BYTE *)(((unsigned __int64)&this->is_optional_card_can_refresh_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v25 >= *(_BYTE *)(((unsigned __int64)&this->is_optional_card_can_refresh_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v26 )
      __asan_report_store1(&this->is_optional_card_can_refresh_, v25, v26);
    this->is_optional_card_can_refresh_ = is_can_refresh;
    v27 = *(_DWORD *)(v5 + 64);
    v28 = *(_BYTE *)(((unsigned __int64)&this->card_cell_id_ >> 3) + 0x7FFF8000);
    LOBYTE(v25) = v28 != 0;
    v29 = (v28 != 0) & (unsigned __int8)((char)((((_BYTE)this - 76) & 7) + 3) >= v28);
    if ( (_BYTE)v29 )
      __asan_report_store4(&this->card_cell_id_, v25, v29);
    this->card_cell_id_ = v27;
    std::unordered_set<unsigned int>::insert(
      &this->gacha_cell_set_,
      (const std::unordered_set<unsigned int>::value_type *)(v5 + 64));
    result = 0LL;
  }
LABEL_40:
  if ( v34 == (char *)v5 )
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

// Line 2260: range 00000000159659F2-00000000159666A1
int32_t __cdecl RoguelikeMiscMgr::refreshRoguelikeCard(
        RoguelikeMiscMgr *const this,
        std::vector<unsigned int> *res_card_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t result; // eax
  char v6; // al
  uint32_t DungeonId; // ecx
  common::milog::MiLogStream *v8; // r14
  PlayerItemComp *ItemComp; // rax
  GameserverService *v10; // rsi
  char v11; // r14
  uint32_t use_refresh_free_count; // r15d
  TxtConfigMgr *p_txt_config_mgr; // rax
  char v14; // dl
  bool v15; // al
  PlayerItemComp *v16; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  bool v18; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  google::protobuf::uint32 *v20; // rax
  google::protobuf::uint32 *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  std::allocator<char> __a; // [rsp+2Ah] [rbp-156h] BYREF
  bool is_free; // [rsp+2Bh] [rbp-155h]
  unsigned int val; // [rsp+2Ch] [rbp-154h] BYREF
  int32_t ret; // [rsp+30h] [rbp-150h]
  float free_prob; // [rsp+34h] [rbp-14Ch]
  RogueLikeDungeonRuntimeMgr *runtime_mgr; // [rsp+38h] [rbp-148h]
  std::shared_ptr<Config> v30; // [rsp+40h] [rbp-140h] BYREF
  char v31[304]; // [rsp+50h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 14 cost_pair:2279 64 8 20 sub_item_reason:2299 96 16 10 param:2285 128 24 11 notify:2314 "
                        "192 32 8 key:2311";
  *(_QWORD *)(v2 + 16) = RoguelikeMiscMgr::refreshRoguelikeCard;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_init_);
  if ( !this->is_init_ )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_in_roguelike_dungeon_);
  }
  if ( !this->is_in_roguelike_dungeon_ )
  {
LABEL_10:
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "refreshRoguelikeCard",
      2264);
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[43])"[ROGUELIKE] player misc data is not inited");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = -1;
    goto LABEL_64;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->is_optional_card_can_refresh_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_optional_card_can_refresh_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_optional_card_can_refresh_);
  }
  if ( !this->is_optional_card_can_refresh_ )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "refreshRoguelikeCard",
      2269);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[32])"[ROGUELIKE] mark cannot refresh");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = -1;
    goto LABEL_64;
  }
  if ( std::vector<unsigned int>::empty(&this->optional_card_vec_) )
    goto LABEL_19;
  if ( *(_BYTE *)(((unsigned __int64)&this->optional_card_depot_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->optional_card_depot_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->optional_card_depot_id_);
  }
  if ( this->optional_card_depot_id_ )
    v6 = 0;
  else
LABEL_19:
    v6 = 1;
  if ( v6 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "refreshRoguelikeCard",
      2274);
    common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[52])"[ROGUELIKE] optional_card_vec empty, cannot refresh");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = -1;
    goto LABEL_64;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->activity_);
  runtime_mgr = RoguelikeDungeonActivity::getRogueDungeonRuntimeMgr(this->activity_);
  *(_QWORD *)(v2 + 32) = 0LL;
  DungeonId = RogueLikeDungeonRuntimeMgr::getDungeonId(runtime_mgr);
  if ( RoguelikeMiscMgr::getDungeonCurRefreshCost(this, DungeonId, (std::pair<unsigned int,unsigned int> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "refreshRoguelikeCard",
      2282);
    v8 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           (common::milog::MiLogStream *const)(v2 + 192),
           (const char (*)[57])"[ROGUELIKE] getDungeonCurRefreshCost failed, dungeon_id:");
    val = RogueLikeDungeonRuntimeMgr::getDungeonId(runtime_mgr);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = -1;
    goto LABEL_64;
  }
  *(_QWORD *)(v2 + 96) = 0LL;
  *(_QWORD *)(v2 + 104) = 0LL;
  *(_DWORD *)(v2 + 96) = *(_DWORD *)(v2 + 32);
  *(_DWORD *)(v2 + 100) = *(_DWORD *)(v2 + 36);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  ItemComp = Player::getItemComp(this->player_);
  ret = PlayerItemComp::checkSubItem(ItemComp, (const ItemParam *)(v2 + 96));
  if ( ret )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "refreshRoguelikeCard",
      2289);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[32])"[ROGUELIKE] checkSubItem failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = ret;
    goto LABEL_64;
  }
  v10 = (GameserverService *)((((_BYTE)this - 76) & 7u) + 3);
  if ( *(_BYTE *)(((unsigned __int64)&this->free_refresh_card_prob_weight_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->free_refresh_card_prob_weight_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->free_refresh_card_prob_weight_);
  }
  free_prob = (float)(int)this->free_refresh_card_prob_weight_ / 100.0;
  v11 = 0;
  if ( !common::tools::RandomUtils::randomTestProbability(100.0) )
    goto LABEL_40;
  if ( *(_BYTE *)(((unsigned __int64)&this->use_refresh_free_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->use_refresh_free_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->use_refresh_free_count_);
  }
  use_refresh_free_count = this->use_refresh_free_count_;
  v10 = ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v30);
  v11 = 1;
  p_txt_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30)->design_config.txt_config_mgr;
  v14 = *(_BYTE *)(((unsigned __int64)&p_txt_config_mgr->activity_rogue_config_mgr.max_refresh_free_count >> 3)
                 + 0x7FFF8000);
  LOBYTE(v10) = v14 != 0;
  if ( v14 != 0 && v14 <= 3 )
    p_txt_config_mgr = (TxtConfigMgr *)__asan_report_load4(&p_txt_config_mgr->activity_rogue_config_mgr.max_refresh_free_count);
  if ( use_refresh_free_count < p_txt_config_mgr->activity_rogue_config_mgr.max_refresh_free_count )
    v15 = 1;
  else
LABEL_40:
    v15 = 0;
  is_free = v15;
  if ( v11 )
    std::shared_ptr<Config>::~shared_ptr(&v30);
  if ( !is_free )
  {
    SubItemReason::SubItemReason((SubItemReason *const)(v2 + 64), ACTION_REASON_ROGUE_REFRESH_CARD);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v16 = Player::getItemComp(this->player_);
    ret = PlayerItemComp::subItem(v16, (const ItemParam *)(v2 + 96), (const SubItemReason *)(v2 + 64));
    if ( ret )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "refreshRoguelikeCard",
        2303);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        (common::milog::MiLogStream *const)(v2 + 192),
        (const char (*)[27])"[ROGUELIKE] subItem failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      result = ret;
      goto LABEL_64;
    }
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->use_refresh_free_count_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->use_refresh_free_count_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->use_refresh_free_count_);
    }
    ++this->use_refresh_free_count_;
    std::allocator<char>::allocator(&__a, v10);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 192), "ROGUE_FREE_REFRESH_CARD", &__a);
    std::allocator<char>::~allocator(&__a);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v30);
    v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
    v18 = common::tools::MiscUtils::isContains<std::unordered_map<std::string,unsigned int> const,std::string>(
            &v17->design_config.txt_config_mgr.reminder_config_mgr.key_to_message_map,
            (const std::string *)(v2 + 192));
    std::shared_ptr<Config>::~shared_ptr(&v30);
    if ( v18 )
    {
      proto::ServerMessageNotify::ServerMessageNotify((proto::ServerMessageNotify *const)(v2 + 128));
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v30);
      v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
      v20 = (google::protobuf::uint32 *)std::unordered_map<std::string,unsigned int>::at(
                                          &v19->design_config.txt_config_mgr.reminder_config_mgr.key_to_message_map,
                                          (const std::unordered_map<std::string,unsigned int>::key_type *)(v2 + 192));
      v21 = v20;
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v20);
      }
      proto::ServerMessageNotify::set_index((proto::ServerMessageNotify *const)(v2 + 128), *v21);
      std::shared_ptr<Config>::~shared_ptr(&v30);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 128));
      proto::ServerMessageNotify::~ServerMessageNotify((proto::ServerMessageNotify *const)(v2 + 128));
    }
    std::string::~string((void *)(v2 + 192));
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->optional_card_depot_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->optional_card_depot_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->optional_card_depot_id_);
  }
  ret = RoguelikeMiscMgr::randRoguelikeCardVec(this, this->optional_card_depot_id_, res_card_vec, 0);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "refreshRoguelikeCard",
      2322);
    v22 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
            (common::milog::MiLogStream *const)(v2 + 192),
            (const char (*)[51])"[ROGUELIKE] randRoguelikeCardVec failed, depot_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &this->optional_card_depot_id_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = -1;
  }
  else
  {
    std::vector<unsigned int>::operator=(&this->optional_card_vec_, res_card_vec);
    if ( *(_BYTE *)(((unsigned __int64)&this->refresh_count_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->refresh_count_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->refresh_count_);
    }
    ++this->refresh_count_;
    result = 0;
  }
LABEL_64:
  if ( v31 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2332: range 00000000159666A2-0000000015966EF5
__int64 __fastcall RoguelikeMiscMgr::selectRoguelikeCard(RoguelikeMiscMgr *const this, uint32_t card_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int v5; // r14d
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned __int64 v10; // rax
  std::map<unsigned int,unsigned int> *p_chosen_card_type_count_map; // rcx
  unsigned __int64 v12; // rax
  PlayerWatcherComp *WatcherComp; // rdi
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::map<unsigned int,unsigned int>::mapped_type *v17; // rax
  __int64 result; // rax
  std::less<unsigned int> __comp; // [rsp+2Fh] [rbp-121h] BYREF
  int __y; // [rsp+30h] [rbp-120h] BYREF
  const ActivityRogueExcelConfigMgr *rogue_config_mgr; // [rsp+38h] [rbp-118h]
  const data::RoguelikeCardExcelConfig *card_config_ptr; // [rsp+40h] [rbp-110h]
  std::pair<unsigned int const,unsigned int> v25; // [rsp+48h] [rbp-108h] BYREF
  std::shared_ptr<Config> v26; // [rsp+50h] [rbp-100h] BYREF
  common::milog::MiLogStream v27; // [rsp+60h] [rbp-F0h] BYREF
  char v28[208]; // [rsp+80h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 21 is_trigger_curse:2371 64 4 12 card_id:2331 80 48 20 select_card_map:2351";
  *(_QWORD *)(v2 + 16) = RoguelikeMiscMgr::selectRoguelikeCard;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = 61956;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 64) = card_id;
  if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_init_);
  if ( !this->is_init_ )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_in_roguelike_dungeon_);
  }
  if ( !this->is_in_roguelike_dungeon_ )
  {
LABEL_10:
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "selectRoguelikeCard",
      2336);
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      &v27,
      (const char (*)[43])"[ROGUELIKE] player misc data is not inited");
    common::milog::MiLogStream::~MiLogStream(&v27);
    v5 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v26);
    rogue_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.activity_rogue_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v26);
    card_config_ptr = data::ActivityRogueExcelConfigMgrBase::findRoguelikeCardExcelConfig(
                        rogue_config_mgr,
                        *(_DWORD *)(v2 + 64));
    if ( card_config_ptr )
    {
      if ( !common::tools::MiscUtils::isContains<unsigned int>(
              &this->optional_card_vec_,
              (const unsigned int *)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "selectRoguelikeCard",
          2348);
        v7 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
               &v27,
               (const char (*)[62])"[ROUGELIKE] select card is not in optional_card_vec, card_id:");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 64));
        v9 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
               v8,
               (const char (*)[21])", optional_card_vec:");
        common::milog::MiLogStream::operator<<<unsigned int>(v9, &this->optional_card_vec_);
        common::milog::MiLogStream::~MiLogStream(&v27);
        v5 = -1;
      }
      else
      {
        __y = 1;
        std::pair<unsigned int const,unsigned int>::pair<unsigned int &,int,true>(&v25, (unsigned int *)(v2 + 64), &__y);
        std::allocator<std::pair<unsigned int const,unsigned int>>::allocator((std::allocator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 48));
        std::map<unsigned int,unsigned int>::map(
          (std::map<unsigned int,unsigned int> *const)(v2 + 80),
          (std::initializer_list<std::pair<unsigned int const,unsigned int> >)__PAIR128__(1LL, &v25),
          &__comp,
          (const std::map<unsigned int,unsigned int>::allocator_type *)(v2 + 48));
        std::allocator<std::pair<unsigned int const,unsigned int>>::~allocator((std::allocator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 48));
        if ( RoguelikeMiscMgr::modifyRoguelikeCardDataBySelectCardMap(
               this,
               (const std::map<unsigned int,unsigned int> *)(v2 + 80)) )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
            "selectRoguelikeCard",
            2355);
          common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
            &v27,
            (const char (*)[58])"[ROGUELIKE] modifyRoguelikeCardDataBySelectCardMap failed");
          common::milog::MiLogStream::~MiLogStream(&v27);
        }
        RoguelikeMiscMgr::doRoguelikeCardEffect(this, *(_DWORD *)(v2 + 64));
        v10 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](
                                  &this->select_card_map_,
                                  (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 64));
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0 && (char)((v10 & 7) + 3) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load4(v10);
        ++*(_DWORD *)v10;
        p_chosen_card_type_count_map = &this->chosen_card_type_count_map_;
        if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&card_config_ptr->type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&card_config_ptr->type);
        }
        __y = card_config_ptr->type;
        v12 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](
                                  p_chosen_card_type_count_map,
                                  (std::map<unsigned int,unsigned int>::key_type *)&__y);
        if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0 && (char)((v12 & 7) + 3) >= *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
          v12 = __asan_report_load4(v12);
        ++*(_DWORD *)v12;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        WatcherComp = Player::getWatcherComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&card_config_ptr->type >> 3) + 0x7FFF8000) <= 3 )
        {
          WatcherComp = (PlayerWatcherComp *)&card_config_ptr->type;
          __asan_report_load4(&card_config_ptr->type);
        }
        PlayerWatcherComp::triggerRogueSelectCard(WatcherComp, card_config_ptr->type, 1u, 0);
        std::unordered_set<unsigned int>::erase(
          &this->viewed_card_set_,
          (const std::unordered_set<unsigned int>::key_type *)(v2 + 64));
        RoguelikeMiscMgr::notifyRoguelikeEffectData(this);
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "selectRoguelikeCard",
          2368);
        v14 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                &v27,
                (const char (*)[47])"[ROGUELIKE] selectRoguelikeCard succ, card_id:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v2 + 64));
        v16 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                v15,
                (const char (*)[23])", current stack_level:");
        v17 = std::map<unsigned int,unsigned int>::operator[](
                &this->select_card_map_,
                (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 64));
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, v17);
        common::milog::MiLogStream::~MiLogStream(&v27);
        *(_BYTE *)(v2 + 48) = 0;
        RoguelikeMiscMgr::afterSelectCard(this, *(_DWORD *)(v2 + 64), (bool *)(v2 + 48));
        RoguelikeMiscMgr::logRogueSelectCard(this, 0, *(_DWORD *)(v2 + 64), *(_BYTE *)(v2 + 48));
        RoguelikeMiscMgr::clearOptionalRoguelikeCardData(this);
        v5 = 0;
        std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 80));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "selectRoguelikeCard",
        2343);
      v6 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
             &v27,
             (const char (*)[58])"[ROGUELIKE] findRoguelikeCardExcelConfig failed, card_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v27);
      v5 = -1;
    }
  }
  result = v5;
  if ( v28 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
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

// Line 2382: range 0000000015966EF6-0000000015967517
void __cdecl RoguelikeMiscMgr::afterSelectCard(RoguelikeMiscMgr *const this, uint32_t card_id, bool *is_trigger_curse)
{
  int v3; // xmm1_4
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rax
  char v8; // al
  __int64 v9; // rsi
  __int64 v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  bool is_can_trigger_curse; // [rsp+23h] [rbp-10Dh]
  ActivityRogueExcelConfigMgr *rogue_config_mgr; // [rsp+28h] [rbp-108h]
  const RogueLikeDungeonRuntimeMgr *runtime_mgr; // [rsp+30h] [rbp-100h]
  const std::pair<unsigned int,unsigned int> *curse_pair_ptr; // [rsp+38h] [rbp-F8h]
  std::shared_ptr<Config> v23; // [rsp+40h] [rbp-F0h] BYREF
  common::milog::MiLogStream v24; // [rsp+50h] [rbp-E0h] BYREF
  char v25[192]; // [rsp+70h] [rbp-C0h] BYREF

  v4 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 15 dungeon_id:2390 48 4 24 trigger_prob_weight:2397 64 56 11 notify:2417";
  *(_QWORD *)(v4 + 16) = RoguelikeMiscMgr::afterSelectCard;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_optional_card_can_refresh_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_optional_card_can_refresh_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_optional_card_can_refresh_);
  }
  if ( this->is_optional_card_can_refresh_ )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v23);
    rogue_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.txt_config_mgr.activity_rogue_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v23);
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->activity_);
    runtime_mgr = RoguelikeDungeonActivity::getRogueDungeonRuntimeMgr(this->activity_);
    *(_DWORD *)(v4 + 32) = RogueLikeDungeonRuntimeMgr::getDungeonId(runtime_mgr);
    curse_pair_ptr = ActivityRogueExcelConfigMgr::getRoguelikeDungeonCurseDataPair(
                       rogue_config_mgr,
                       *(_DWORD *)(v4 + 32));
    if ( curse_pair_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&curse_pair_ptr->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)curse_pair_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&curse_pair_ptr->second >> 3)
                                                                     + 0x7FFF8000) )
      {
        __asan_report_load4(&curse_pair_ptr->second);
      }
      *(_DWORD *)(v4 + 48) = curse_pair_ptr->second;
      if ( *(_BYTE *)(((unsigned __int64)&this->trigger_curse_sub_weight_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_curse_sub_weight_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->trigger_curse_sub_weight_);
      }
      if ( this->trigger_curse_sub_weight_ < *(_DWORD *)(v4 + 48) )
        v3 = 1120403456;
      is_can_trigger_curse = common::tools::RandomUtils::randomTestProbability(*(float *)&v3);
      if ( !is_can_trigger_curse )
        goto LABEL_22;
      if ( *(_BYTE *)(((unsigned __int64)curse_pair_ptr >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)curse_pair_ptr & 7) + 3) >= *(_BYTE *)(((unsigned __int64)curse_pair_ptr >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(curse_pair_ptr);
      }
      if ( RoguelikeMiscMgr::triggetRoguelikeCurse(this, curse_pair_ptr->first) )
LABEL_22:
        v8 = 0;
      else
        v8 = 1;
      if ( v8 )
      {
        v9 = (unsigned __int8)is_trigger_curse & 7;
        v10 = (*(_BYTE *)(((unsigned __int64)is_trigger_curse >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)is_trigger_curse >> 3) + 0x7FFF8000));
        if ( (_BYTE)v10 )
          __asan_report_store1(is_trigger_curse, v9, v10);
        *is_trigger_curse = 1;
      }
      else
      {
        proto::TriggerRoguelikeCurseNotify::TriggerRoguelikeCurseNotify((proto::TriggerRoguelikeCurseNotify *const)(v4 + 64));
        proto::TriggerRoguelikeCurseNotify::set_is_trigger_curse(
          (proto::TriggerRoguelikeCurseNotify *const)(v4 + 64),
          0);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        Player::sendProto(this->player_, (const google::protobuf::Message *)(v4 + 64));
        proto::TriggerRoguelikeCurseNotify::~TriggerRoguelikeCurseNotify((proto::TriggerRoguelikeCurseNotify *const)(v4 + 64));
      }
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "afterSelectCard",
        2422);
      v11 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
              &v24,
              (const char (*)[65])"[ROGUELIKE] triggerRoguelikeCurseByServer, is_can_trigger_curse:");
      v12 = common::milog::MiLogStream::operator<<(v11, is_can_trigger_curse);
      v13 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v12,
              (const char (*)[20])", is_trigger_curse:");
      if ( *(_BYTE *)(((unsigned __int64)is_trigger_curse >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)is_trigger_curse & 7) >= *(_BYTE *)(((unsigned __int64)is_trigger_curse >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(is_trigger_curse);
      }
      v14 = common::milog::MiLogStream::operator<<(v13, *is_trigger_curse);
      v15 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              v14,
              (const char (*)[23])", trigger_prob_weight:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 48));
      v17 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v16,
              (const char (*)[19])", sub_prob_weight:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->trigger_curse_sub_weight_);
      common::milog::MiLogStream::~MiLogStream(&v24);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "afterSelectCard",
        2394);
      v7 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
             &v24,
             (const char (*)[65])"[ROGUELIKE] getRoguelikeDungeonCurseDataPair failed, dungeon_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 32));
      common::milog::MiLogStream::~MiLogStream(&v24);
    }
  }
  if ( v25 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF800C) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 2428: range 0000000015967518-00000000159676D7
int32_t __cdecl RoguelikeMiscMgr::giveUpRoguelikeDungeonCard(RoguelikeMiscMgr *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_init_);
  if ( !this->is_init_ )
    goto LABEL_7;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_in_roguelike_dungeon_);
  }
  if ( !this->is_in_roguelike_dungeon_ )
  {
LABEL_7:
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "giveUpRoguelikeDungeonCard",
      2432);
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      &v2,
      (const char (*)[43])"[ROGUELIKE] player misc data is not inited");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else if ( std::vector<unsigned int>::empty(&this->optional_card_vec_) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "giveUpRoguelikeDungeonCard",
      2438);
    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
      &v2,
      (const char (*)[48])"[ROGUELIKE] optional_card_vec empty, do nothing");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else
  {
    RoguelikeMiscMgr::logRogueSelectCard(this, 1, 0, 0);
    RoguelikeMiscMgr::clearOptionalRoguelikeCardData(this);
    return 0;
  }
};

// Line 2450: range 00000000159676D8-0000000015968B63
int32_t __cdecl RoguelikeMiscMgr::modifyRoguelikeCardDataBySelectCardMap(
        RoguelikeMiscMgr *const this,
        const std::map<unsigned int,unsigned int> *select_card_map)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v7; // rdx
  unsigned int *p_second; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type second; // ecx
  char v10; // al
  const std::unordered_map<unsigned int,unsigned int>::mapped_type *v11; // rax
  _DWORD *v12; // rdx
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v13; // rax
  _DWORD *v14; // rdx
  const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::mapped_type *v15; // rax
  _DWORD *v16; // rdx
  const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::mapped_type *v17; // rdx
  unsigned int *v18; // rax
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v19; // rax
  _DWORD *v20; // rdx
  unsigned __int64 v21; // rax
  common::milog::MiLogStream *v22; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v23; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v24; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v25; // rdx
  unsigned int *v26; // rax
  unsigned int v27; // r14d
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v28; // rdx
  std::map<unsigned int,unsigned int>::mapped_type *v29; // rax
  unsigned int *v30; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v31; // rdx
  std::map<unsigned int,unsigned int>::mapped_type *v32; // rax
  int *v33; // rdx
  int v34; // r14d
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v35; // rax
  common::milog::MiLogStream *v36; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v43; // rdx
  const unsigned int *v44; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // r14
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v51; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // r14
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v61; // rax
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v62; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v63; // rax
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v64; // rax
  int *v65; // rdx
  int v66; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v67; // rax
  std::__detail::_Node_iterator<std::pair<const data::RoguelikeCardType,std::map<unsigned int,unsigned int> >,false,false>::pointer v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // r14
  unsigned __int64 v72; // rax
  int32_t result; // eax
  uint32_t add_weight; // [rsp+1Ch] [rbp-2C4h]
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-2C0h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-2B8h] BYREF
  std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::iterator __for_end_2; // [rsp+30h] [rbp-2B0h] BYREF
  std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::iterator __for_begin_0; // [rsp+38h] [rbp-2A8h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end_1; // [rsp+40h] [rbp-2A0h] BYREF
  const ActivityRogueExcelConfigMgr *rogue_config_mgr; // [rsp+48h] [rbp-298h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+50h] [rbp-290h]
  std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>> *__for_range_2; // [rsp+58h] [rbp-288h]
  std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> > *__in; // [rsp+60h] [rbp-280h]
  std::tuple_element<0,std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> > >::type *depot_id; // [rsp+68h] [rbp-278h]
  std::tuple_element<1,std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> > >::type *type_card_map; // [rsp+70h] [rbp-270h]
  std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> *__for_range_3; // [rsp+78h] [rbp-268h]
  std::pair<const data::RoguelikeCardType,std::map<unsigned int,unsigned int> > *v87; // [rsp+80h] [rbp-260h]
  std::tuple_element<0,std::pair<const data::RoguelikeCardType,std::map<unsigned int,unsigned int> > >::type *type; // [rsp+88h] [rbp-258h]
  std::tuple_element<1,std::pair<const data::RoguelikeCardType,std::map<unsigned int,unsigned int> > >::type *card_map; // [rsp+90h] [rbp-250h]
  const std::pair<unsigned int const,unsigned int> *v90; // [rsp+98h] [rbp-248h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *id; // [rsp+A0h] [rbp-240h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+A8h] [rbp-238h]
  const std::unordered_set<unsigned int> *__for_range_0; // [rsp+B0h] [rbp-230h]
  const std::unordered_set<unsigned int> *__for_range_1; // [rsp+B8h] [rbp-228h]
  std::shared_ptr<Config> v95; // [rsp+C0h] [rbp-220h] BYREF
  common::milog::MiLogStream v96; // [rsp+D0h] [rbp-210h] BYREF
  common::milog::MiLogStream v97; // [rsp+F0h] [rbp-1F0h] BYREF
  char v98[464]; // [rsp+110h] [rbp-1D0h] BYREF

  v2 = (unsigned __int64)v98;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 32 4 23 exclusive_group_id:2469 48 4 12 card_id:2474 64 4 21 related_group_id:2486 80 4 12 ca"
                        "rd_id:2491 96 8 9 iter:2462 128 8 13 set_iter:2470 160 8 13 set_iter:2488 192 8 14 type_iter:254"
                        "7 224 56 20 remove_card_set:2452 320 56 24 card_add_weight_map:2453";
  *(_QWORD *)(v2 + 16) = RoguelikeMiscMgr::modifyRoguelikeCardDataBySelectCardMap;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862728] = -234881024;
  v4[536862729] = -218959118;
  v4[536862731] = -218103808;
  v4[536862732] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v95);
  rogue_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v95)->design_config.txt_config_mgr.activity_rogue_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v95);
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v2 + 224));
  std::unordered_map<unsigned int,unsigned int>::unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v2 + 320));
  __for_range = select_card_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(select_card_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(select_card_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v90 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,unsigned int>(v90);
    v5 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v90);
    count = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    if ( *count )
    {
      *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                &this->card_count_map_,
                                                                                id);
      __for_end_1._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::unordered_map<unsigned int,unsigned int>::end(&this->card_count_map_)._M_cur;
      if ( !std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 96),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_end_1) )
        goto LABEL_17;
      v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 96));
      p_second = &v7->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      second = v7->second;
      if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(count);
      }
      if ( second <= *count )
        v10 = 1;
      else
LABEL_17:
        v10 = 0;
      if ( v10 )
        std::unordered_set<unsigned int>::insert((std::unordered_set<unsigned int> *const)(v2 + 224), id);
      if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int> const,unsigned int>(
             &rogue_config_mgr->card_to_exclusive_group_map,
             id) )
      {
        v11 = std::unordered_map<unsigned int,unsigned int>::at(&rogue_config_mgr->card_to_exclusive_group_map, id);
        v12 = v11;
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v11);
        }
        *(_DWORD *)(v2 + 32) = *v12;
        *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v2 + 128) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::find(&rogue_config_mgr->exclusive_group_to_card_map, (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v2 + 32));
        __for_end_1._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::end(&rogue_config_mgr->exclusive_group_to_card_map)._M_cur;
        if ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v2 + 128),
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)&__for_end_1) )
        {
          __for_range_0 = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false> *const)(v2 + 128))->second;
          __for_end_2._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> >,false>::__node_type *)std::unordered_set<unsigned int>::begin(__for_range_0)._M_cur;
          __for_begin_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<const data::RoguelikeCardType,std::map<unsigned int,unsigned int> >,false>::__node_type *)std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
          while ( std::__detail::operator!=<unsigned int,false>(
                    (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end_2,
                    (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_begin_0) )
          {
            v13 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_const_iterator<unsigned int,true,false> *const)&__for_end_2);
            v14 = v13;
            if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v13);
            }
            *(_DWORD *)(v2 + 48) = *v14;
            if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(id);
            }
            if ( *id != *(_DWORD *)(v2 + 48) )
              std::unordered_set<unsigned int>::insert(
                (std::unordered_set<unsigned int> *const)(v2 + 224),
                (const std::unordered_set<unsigned int>::value_type *)(v2 + 48));
            std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_const_iterator<unsigned int,true,false> *const)&__for_end_2);
          }
        }
      }
      if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> const,unsigned int>(
             &rogue_config_mgr->card_to_related_group_map,
             id) )
      {
        v15 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::at(
                &rogue_config_mgr->card_to_related_group_map,
                id);
        v16 = v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v15);
        }
        *(_DWORD *)(v2 + 64) = *v16;
        v17 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::at(
                &rogue_config_mgr->card_to_related_group_map,
                id);
        v18 = &v17->second;
        if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v18);
        }
        add_weight = v17->second;
        *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v2 + 160) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::find(&rogue_config_mgr->related_group_to_card_map, (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v2 + 64));
        __for_end_1._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::end(&rogue_config_mgr->related_group_to_card_map)._M_cur;
        if ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v2 + 160),
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)&__for_end_1) )
        {
          __for_range_1 = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false> *const)(v2 + 160))->second;
          *(std::unordered_set<unsigned int>::const_iterator *)(v2 + 192) = std::unordered_set<unsigned int>::begin(__for_range_1);
          __for_end_1._M_cur = std::unordered_set<unsigned int>::end(__for_range_1)._M_cur;
          while ( std::__detail::operator!=<unsigned int,false>(
                    (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v2 + 192),
                    &__for_end_1) )
          {
            v19 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_const_iterator<unsigned int,true,false> *const)(v2 + 192));
            v20 = v19;
            if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v19);
            }
            *(_DWORD *)(v2 + 80) = *v20;
            v21 = (unsigned __int64)std::unordered_map<unsigned int,unsigned int>::operator[](
                                      (std::unordered_map<unsigned int,unsigned int> *const)(v2 + 320),
                                      (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 80));
            if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) != 0
              && (char)((v21 & 7) + 3) >= *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
            {
              v21 = __asan_report_load4(v21);
            }
            *(_DWORD *)v21 += add_weight;
            std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_const_iterator<unsigned int,true,false> *const)(v2 + 192));
          }
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v97,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "modifyRoguelikeCardDataBySelectCardMap",
        2459);
      v6 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
             &v97,
             (const char (*)[45])"[ROGUELIKE] select card count zero, card_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, id);
      common::milog::MiLogStream::~MiLogStream(&v97);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v97,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
    "modifyRoguelikeCardDataBySelectCardMap",
    2498);
  v22 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          &v97,
          (const char (*)[33])"[ROGUELIKE] get remove_card_set:");
  common::milog::MiLogStream::operator<<<unsigned int>(v22, (const std::unordered_set<unsigned int> *)(v2 + 224));
  common::milog::MiLogStream::~MiLogStream(&v97);
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 192) = std::unordered_map<unsigned int,unsigned int>::begin(&this->card_count_map_);
  while ( 1 )
  {
    __for_end_1._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::unordered_map<unsigned int,unsigned int>::end(&this->card_count_map_)._M_cur;
    if ( !std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 192),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_end_1) )
      break;
    v23 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 192));
    if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
           (std::unordered_set<unsigned int> *)(v2 + 224),
           (const unsigned int *)v23) )
    {
      *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 192) = std::unordered_map<unsigned int,unsigned int>::erase(
                                                                                 &this->card_count_map_,
                                                                                 *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 192));
    }
    else
    {
      v24 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 192));
      if ( common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int> const,unsigned int>(
             select_card_map,
             (const unsigned int *)v24) )
      {
        v25 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 192));
        v26 = &v25->second;
        if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v26);
        }
        v27 = v25->second;
        v28 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 192));
        v29 = (std::map<unsigned int,unsigned int>::mapped_type *)std::map<unsigned int,unsigned int>::at(
                                                                    select_card_map,
                                                                    (const std::map<unsigned int,unsigned int>::key_type *)v28);
        v30 = v29;
        if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v29);
        }
        if ( v27 <= *v30 )
        {
          common::milog::MiLogStream::create(
            &v97,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
            "modifyRoguelikeCardDataBySelectCardMap",
            2518);
          v36 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                  &v97,
                  (const char (*)[66])"[ROGUELIKE] card count less equal than selected count, error! id:");
          v37 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 192));
          v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, (const unsigned int *)v37);
          v39 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v38, (const char (*)[13])", cur_count:");
          v40 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 192));
          v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &v40->second);
          v42 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  v41,
                  (const char (*)[18])", selected count:");
          v43 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 192));
          v44 = std::map<unsigned int,unsigned int>::at(
                  select_card_map,
                  (const std::map<unsigned int,unsigned int>::key_type *)v43);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, v44);
          common::milog::MiLogStream::~MiLogStream(&v97);
        }
        else
        {
          v31 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 192));
          v32 = (std::map<unsigned int,unsigned int>::mapped_type *)std::map<unsigned int,unsigned int>::at(
                                                                      select_card_map,
                                                                      (const std::map<unsigned int,unsigned int>::key_type *)v31);
          v33 = (int *)v32;
          if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v32);
          }
          v34 = *v33;
          v35 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 192));
          if ( *(_BYTE *)(((unsigned __int64)&v35->second >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)v35 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v35->second >> 3) + 0x7FFF8000) )
          {
            v35 = (std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer)__asan_report_load4(&v35->second);
          }
          v35->second -= v34;
        }
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 192));
    }
  }
  __for_range_2 = &this->card_depot_map_;
  *(std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::begin(&this->card_depot_map_);
  __for_end_2._M_cur = std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::end(__for_range_2)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> >,false> *)(v2 + 128),
            &__for_end_2) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> >,false,false> *const)(v2 + 128));
    depot_id = std::get<0ul,unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>(__in);
    type_card_map = std::get<1ul,unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>(__in);
    __for_range_3 = type_card_map;
    __for_begin_0._M_cur = std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::begin(type_card_map)._M_cur;
    *(std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::iterator *)(v2 + 160) = std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::end(__for_range_3);
    while ( std::__detail::operator!=<std::pair<data::RoguelikeCardType const,std::map<unsigned int,unsigned int>>,false>(
              &__for_begin_0,
              (const std::__detail::_Node_iterator_base<std::pair<const data::RoguelikeCardType,std::map<unsigned int,unsigned int> >,false> *)(v2 + 160)) )
    {
      v87 = std::__detail::_Node_iterator<std::pair<data::RoguelikeCardType const,std::map<unsigned int,unsigned int>>,false,false>::operator*(&__for_begin_0);
      type = std::get<0ul,data::RoguelikeCardType const,std::map<unsigned int,unsigned int>>(v87);
      card_map = std::get<1ul,data::RoguelikeCardType const,std::map<unsigned int,unsigned int>>(v87);
      *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 192) = std::map<unsigned int,unsigned int>::begin(card_map);
      while ( 1 )
      {
        __for_end_1._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::map<unsigned int,unsigned int>::end(card_map)._M_node;
        if ( !std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 192),
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end_1) )
          break;
        v45 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 192));
        if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
               (std::unordered_set<unsigned int> *)(v2 + 224),
               (const unsigned int *)v45) )
        {
          common::milog::MiLogStream::create(
            &v96,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
            "modifyRoguelikeCardDataBySelectCardMap",
            2533);
          v46 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                  &v96,
                  (const char (*)[58])"[ROGUELIKE] type card_weight_map erase card_id, depot_id:");
          v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, depot_id);
          v48 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v47, (const char (*)[8])", type:");
          if ( *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(type);
          }
          __for_end_1._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)data::enumValToStr(*type);
          v49 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                  v48,
                  (const char *const *)&__for_end_1);
          v50 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v49, (const char (*)[11])", card_id:");
          v51 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 192));
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, (const unsigned int *)v51);
          common::milog::MiLogStream::~MiLogStream(&v96);
          *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 192) = std::map<unsigned int,unsigned int>::erase[abi:cxx11](
                                                                           card_map,
                                                                           *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 192));
        }
        else
        {
          v52 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 192));
          if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,unsigned int>(
                 (std::unordered_map<unsigned int,unsigned int> *)(v2 + 320),
                 (const unsigned int *)v52) )
          {
            common::milog::MiLogStream::create(
              &v97,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
              "modifyRoguelikeCardDataBySelectCardMap",
              2539);
            v53 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                    &v97,
                    (const char (*)[60])"[ROGUELIKE] type card_weight_map add card weight, depot_id:");
            v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, depot_id);
            v55 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v54, (const char (*)[8])", type:");
            if ( *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(type);
            }
            __for_end_1._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)data::enumValToStr(*type);
            v56 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                    v55,
                    (const char *const *)&__for_end_1);
            v57 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v56, (const char (*)[11])", card_id:");
            v58 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 192));
            v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, (const unsigned int *)v58);
            v60 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v59,
                    (const char (*)[14])", add_weight:");
            v61 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 192));
            v62 = std::unordered_map<unsigned int,unsigned int>::operator[](
                    (std::unordered_map<unsigned int,unsigned int> *const)(v2 + 320),
                    (const std::unordered_map<unsigned int,unsigned int>::key_type *)v61);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, v62);
            common::milog::MiLogStream::~MiLogStream(&v97);
            v63 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 192));
            v64 = std::unordered_map<unsigned int,unsigned int>::operator[](
                    (std::unordered_map<unsigned int,unsigned int> *const)(v2 + 320),
                    (const std::unordered_map<unsigned int,unsigned int>::key_type *)v63);
            v65 = (int *)v64;
            if ( *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v64 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v64);
            }
            v66 = *v65;
            v67 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 192));
            if ( *(_BYTE *)(((unsigned __int64)&v67->second >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)v67 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v67->second >> 3) + 0x7FFF8000) )
            {
              v67 = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer)__asan_report_load4(&v67->second);
            }
            v67->second += v66;
          }
          std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 192));
        }
      }
      std::__detail::_Node_iterator<std::pair<data::RoguelikeCardType const,std::map<unsigned int,unsigned int>>,false,false>::operator++(&__for_begin_0);
    }
    *(std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::iterator *)(v2 + 192) = std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::begin(type_card_map);
    while ( 1 )
    {
      __for_end_1._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::end(type_card_map)._M_cur;
      if ( !std::__detail::operator!=<std::pair<data::RoguelikeCardType const,std::map<unsigned int,unsigned int>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<const data::RoguelikeCardType,std::map<unsigned int,unsigned int> >,false> *)(v2 + 192),
              (const std::__detail::_Node_iterator_base<std::pair<const data::RoguelikeCardType,std::map<unsigned int,unsigned int> >,false> *)&__for_end_1) )
        break;
      v68 = std::__detail::_Node_iterator<std::pair<data::RoguelikeCardType const,std::map<unsigned int,unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<const data::RoguelikeCardType,std::map<unsigned int,unsigned int> >,false,false> *const)(v2 + 192));
      if ( std::map<unsigned int,unsigned int>::size(&v68->second) )
      {
        std::__detail::_Node_iterator<std::pair<data::RoguelikeCardType const,std::map<unsigned int,unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<const data::RoguelikeCardType,std::map<unsigned int,unsigned int> >,false,false> *const)(v2 + 192));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v97,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "modifyRoguelikeCardDataBySelectCardMap",
          2551);
        v69 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                &v97,
                (const char (*)[57])"[ROGUELIKE] depot remove type card_weight_map, depot_id:");
        v70 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v69, depot_id);
        v71 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v70, (const char (*)[8])", type:");
        v72 = (unsigned __int64)std::__detail::_Node_iterator<std::pair<data::RoguelikeCardType const,std::map<unsigned int,unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<const data::RoguelikeCardType,std::map<unsigned int,unsigned int> >,false,false> *const)(v2 + 192));
        if ( *(_BYTE *)((v72 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v72 >> 3) + 0x7FFF8000) <= 3 )
          v72 = __asan_report_load4(v72);
        __for_end_1._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)data::enumValToStr((data::RoguelikeCardType)*(_DWORD *)v72);
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v71, (const char *const *)&__for_end_1);
        common::milog::MiLogStream::~MiLogStream(&v97);
        *(std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::iterator *)(v2 + 192) = std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::erase(type_card_map, *(std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::iterator *)(v2 + 192));
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> >,false,false> *const)(v2 + 128));
  }
  std::unordered_map<unsigned int,unsigned int>::~unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v2 + 320));
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v2 + 224));
  result = 0;
  if ( v98 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 2564: range 0000000015968B64-0000000015969B4E
__int64 __fastcall RoguelikeMiscMgr::randRoguelikeCardVec(
        RoguelikeMiscMgr *const this,
        uint32_t depot_id,
        std::vector<unsigned int> *res_card_vec,
        bool is_first_refresh_cell_gacha)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::unordered_map<data::RoguelikeCardType,unsigned int> *v11; // rax
  std::unordered_map<data::RoguelikeCardType,unsigned int>::mapped_type *v12; // rax
  uint32_t *v13; // rdx
  std::unordered_map<data::RoguelikeCardType,unsigned int> *v14; // rax
  std::unordered_map<data::RoguelikeCardType,unsigned int>::mapped_type *v15; // rax
  _DWORD *v16; // rdx
  std::unordered_map<data::RoguelikeCardType,unsigned int> *v17; // rax
  std::unordered_map<data::RoguelikeCardType,unsigned int>::mapped_type *v18; // rax
  _DWORD *v19; // rdx
  std::unordered_map<data::RoguelikeCardType,unsigned int>::mapped_type *v20; // rax
  unsigned int *v21; // rdx
  unsigned int v22; // r14d
  std::unordered_map<data::RoguelikeCardType,unsigned int>::mapped_type *v23; // rax
  unsigned int *v24; // rdx
  std::unordered_map<data::RoguelikeCardType,unsigned int>::mapped_type *v25; // rax
  unsigned int *v26; // rdx
  unsigned int v27; // r14d
  std::unordered_map<data::RoguelikeCardType,unsigned int>::mapped_type *v28; // rax
  unsigned int *v29; // rdx
  std::unordered_map<data::RoguelikeCardType,unsigned int>::mapped_type *v30; // rax
  unsigned int *v31; // rdx
  unsigned int v32; // r14d
  std::unordered_map<data::RoguelikeCardType,unsigned int>::mapped_type *v33; // rax
  unsigned int *v34; // rdx
  common::milog::MiLogStream *v35; // rax
  uint32_t v36; // r14d
  char *v37; // rsi
  std::map<data::RoguelikeCardType,unsigned int>::mapped_type *v38; // rax
  uint32_t *v39; // rdx
  char v40; // cl
  uint32_t v41; // eax
  unsigned int *v42; // rax
  int *v43; // rdx
  int v44; // r14d
  std::unordered_map<data::RoguelikeCardType,unsigned int>::key_type *p_k; // rsi
  std::map<data::RoguelikeCardType,unsigned int>::mapped_type *v46; // rax
  _DWORD *v47; // rdx
  char v48; // cl
  uint32_t v49; // eax
  unsigned int *v50; // rax
  int *v51; // rdx
  int v52; // r14d
  std::unordered_map<data::RoguelikeCardType,unsigned int>::key_type *v53; // rsi
  std::map<data::RoguelikeCardType,unsigned int>::mapped_type *v54; // rax
  _DWORD *v55; // rdx
  char v56; // cl
  common::milog::MiLogStream *v57; // r14
  std::map<data::RoguelikeCardType,unsigned int>::mapped_type *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // r14
  std::map<data::RoguelikeCardType,unsigned int>::mapped_type *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // r14
  std::map<data::RoguelikeCardType,unsigned int>::mapped_type *v64; // rax
  std::vector<unsigned int>::size_type v65; // r14
  std::vector<unsigned int>::reference v66; // rax
  _DWORD *v67; // rdx
  common::milog::MiLogStream *v68; // rax
  __int64 result; // rax
  bool is_succ; // [rsp+27h] [rbp-199h]
  std::map<data::RoguelikeCardType,unsigned int>::key_type v73; // [rsp+28h] [rbp-198h] BYREF
  std::unordered_map<data::RoguelikeCardType,unsigned int>::key_type __k; // [rsp+2Ch] [rbp-194h] BYREF
  uint32_t cnt; // [rsp+30h] [rbp-190h]
  uint32_t ssr_weight; // [rsp+34h] [rbp-18Ch]
  uint32_t delta_ssr_weight; // [rsp+38h] [rbp-188h]
  uint32_t delta_sr_weight; // [rsp+3Ch] [rbp-184h]
  uint32_t delta_r_weight; // [rsp+40h] [rbp-180h]
  uint32_t max_weight; // [rsp+44h] [rbp-17Ch]
  RoguelikeCardDepotMap *card_depot_map; // [rsp+48h] [rbp-178h]
  common::milog::MiLogStream v82; // [rsp+50h] [rbp-170h] BYREF
  char v83[336]; // [rsp+70h] [rbp-150h] BYREF

  v4 = (unsigned __int64)v83;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 48 4 14 sr_weight:2583 64 4 13 r_weight:2584 80 4 12 card_id:2615 96 4 13 depot_id:2563 112 48"
                        " 25 type_card_weight_map:2602 192 56 18 temp_card_map:2612";
  *(_QWORD *)(v4 + 16) = RoguelikeMiscMgr::randRoguelikeCardVec;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = 61956;
  v6[536862725] = -218959118;
  v6[536862727] = -218103808;
  v6[536862728] = -202116109;
  *(_DWORD *)(v4 + 96) = depot_id;
  std::vector<unsigned int>::clear(res_card_vec);
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>>,unsigned int>(
          &this->depot_card_type_weight_map_,
          (const unsigned int *)(v4 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v82,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "randRoguelikeCardVec",
      2568);
    v7 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
           &v82,
           (const char (*)[75])"[ROGUELIKE] cannot find depot_id in depot_card_type_weight_map_, depot_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 96));
    common::milog::MiLogStream::~MiLogStream(&v82);
    v8 = -1;
  }
  else if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>,unsigned int>(
               &this->card_depot_map_,
               (const unsigned int *)(v4 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v82,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "randRoguelikeCardVec",
      2573);
    v9 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v82,
           (const char (*)[42])"[ROGUELIKE] invalid card depot, depot_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 96));
    common::milog::MiLogStream::~MiLogStream(&v82);
    v8 = -1;
  }
  else
  {
    card_depot_map = std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::operator[](
                       &this->card_depot_map_,
                       (const std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::key_type *)(v4 + 96));
    if ( std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::empty(card_depot_map) )
    {
      common::milog::MiLogStream::create(
        &v82,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "randRoguelikeCardVec",
        2579);
      v10 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v82,
              (const char (*)[40])"[ROGUELIKE] empty card depot, depot_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 96));
      common::milog::MiLogStream::~MiLogStream(&v82);
      v8 = -1;
    }
    else
    {
      v11 = std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>>::operator[](
              &this->depot_card_type_weight_map_,
              (const std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>>::key_type *)(v4 + 96));
      *(_DWORD *)(v4 + 80) = 1;
      v12 = std::unordered_map<data::RoguelikeCardType,unsigned int>::operator[](
              v11,
              (std::unordered_map<data::RoguelikeCardType,unsigned int>::key_type *)(v4 + 80));
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      ssr_weight = *v13;
      v14 = std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>>::operator[](
              &this->depot_card_type_weight_map_,
              (const std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>>::key_type *)(v4 + 96));
      *(_DWORD *)(v4 + 80) = 2;
      v15 = std::unordered_map<data::RoguelikeCardType,unsigned int>::operator[](
              v14,
              (std::unordered_map<data::RoguelikeCardType,unsigned int>::key_type *)(v4 + 80));
      v16 = v15;
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v15);
      }
      *(_DWORD *)(v4 + 48) = *v16;
      v17 = std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>>::operator[](
              &this->depot_card_type_weight_map_,
              (const std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>>::key_type *)(v4 + 96));
      *(_DWORD *)(v4 + 80) = 3;
      v18 = std::unordered_map<data::RoguelikeCardType,unsigned int>::operator[](
              v17,
              (std::unordered_map<data::RoguelikeCardType,unsigned int>::key_type *)(v4 + 80));
      v19 = v18;
      if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v18);
      }
      *(_DWORD *)(v4 + 64) = *v19;
      if ( is_first_refresh_cell_gacha )
      {
        *(_DWORD *)(v4 + 80) = 1;
        v20 = std::unordered_map<data::RoguelikeCardType,unsigned int>::operator[](
                &this->refresh_cell_card_add_weight_map_,
                (std::unordered_map<data::RoguelikeCardType,unsigned int>::key_type *)(v4 + 80));
        v21 = v20;
        if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v20);
        }
        v22 = *v21;
      }
      else
      {
        v22 = 0;
      }
      __k = ROGUELIKE_CARD_TPYE_SSR;
      v23 = std::unordered_map<data::RoguelikeCardType,unsigned int>::operator[](&this->card_add_weight_map_, &__k);
      v24 = v23;
      if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v23);
      }
      delta_ssr_weight = SAFE_ADD<unsigned int,unsigned int>(*v24, v22);
      if ( is_first_refresh_cell_gacha )
      {
        *(_DWORD *)(v4 + 80) = 2;
        v25 = std::unordered_map<data::RoguelikeCardType,unsigned int>::operator[](
                &this->refresh_cell_card_add_weight_map_,
                (std::unordered_map<data::RoguelikeCardType,unsigned int>::key_type *)(v4 + 80));
        v26 = v25;
        if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v25);
        }
        v27 = *v26;
      }
      else
      {
        v27 = 0;
      }
      __k = ROGUELIKE_CARD_TPYE_SR;
      v28 = std::unordered_map<data::RoguelikeCardType,unsigned int>::operator[](&this->card_add_weight_map_, &__k);
      v29 = v28;
      if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v28);
      }
      delta_sr_weight = SAFE_ADD<unsigned int,unsigned int>(*v29, v27);
      if ( is_first_refresh_cell_gacha )
      {
        *(_DWORD *)(v4 + 80) = 3;
        v30 = std::unordered_map<data::RoguelikeCardType,unsigned int>::operator[](
                &this->refresh_cell_card_add_weight_map_,
                (std::unordered_map<data::RoguelikeCardType,unsigned int>::key_type *)(v4 + 80));
        v31 = v30;
        if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v30);
        }
        v32 = *v31;
      }
      else
      {
        v32 = 0;
      }
      __k = ROGUELIKE_CARD_TPYE_R;
      v33 = std::unordered_map<data::RoguelikeCardType,unsigned int>::operator[](&this->card_add_weight_map_, &__k);
      v34 = v33;
      if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v33 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v33);
      }
      delta_r_weight = SAFE_ADD<unsigned int,unsigned int>(*v34, v32);
      ssr_weight = SAFE_ADD<unsigned int,unsigned int>(ssr_weight, delta_ssr_weight);
      *(_DWORD *)(v4 + 48) = SAFE_ADD<unsigned int,unsigned int>(*(_DWORD *)(v4 + 48), delta_sr_weight);
      *(_DWORD *)(v4 + 64) = SAFE_ADD<unsigned int,unsigned int>(*(_DWORD *)(v4 + 64), *(_DWORD *)(v4 + 64));
      if ( ssr_weight || *(_DWORD *)(v4 + 48) || *(_DWORD *)(v4 + 64) )
      {
        max_weight = 100;
        std::map<data::RoguelikeCardType,unsigned int>::map((std::map<data::RoguelikeCardType,unsigned int> *const)(v4 + 112));
        if ( ssr_weight < max_weight )
          v36 = ssr_weight;
        else
          v36 = max_weight;
        *(_DWORD *)(v4 + 80) = 1;
        v37 = (char *)(v4 + 80);
        v38 = std::map<data::RoguelikeCardType,unsigned int>::operator[](
                (std::map<data::RoguelikeCardType,unsigned int> *const)(v4 + 112),
                (std::map<data::RoguelikeCardType,unsigned int>::key_type *)(v4 + 80));
        v39 = v38;
        v40 = *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000);
        if ( v40 != 0 && (char)(((unsigned __int8)v38 & 7) + 3) >= v40 )
        {
          LOBYTE(v37) = v40 != 0;
          __asan_report_store4(v38, v37, v38);
        }
        *v39 = v36;
        if ( max_weight < ssr_weight )
          v41 = 0;
        else
          v41 = max_weight - ssr_weight;
        *(_DWORD *)(v4 + 80) = v41;
        v42 = (unsigned int *)std::min<unsigned int>((const unsigned int *)(v4 + 48), (const unsigned int *)(v4 + 80));
        v43 = (int *)v42;
        if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v42 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v42);
        }
        v44 = *v43;
        __k = ROGUELIKE_CARD_TPYE_SR;
        p_k = &__k;
        v46 = std::map<data::RoguelikeCardType,unsigned int>::operator[](
                (std::map<data::RoguelikeCardType,unsigned int> *const)(v4 + 112),
                &__k);
        v47 = v46;
        v48 = *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000);
        if ( v48 != 0 && (char)(((unsigned __int8)v46 & 7) + 3) >= v48 )
        {
          LOBYTE(p_k) = v48 != 0;
          __asan_report_store4(v46, p_k, v46);
        }
        *v47 = v44;
        if ( max_weight < *(_DWORD *)(v4 + 48) + ssr_weight )
          v49 = 0;
        else
          v49 = max_weight - ssr_weight - *(_DWORD *)(v4 + 48);
        *(_DWORD *)(v4 + 80) = v49;
        v50 = (unsigned int *)std::min<unsigned int>((const unsigned int *)(v4 + 64), (const unsigned int *)(v4 + 80));
        v51 = (int *)v50;
        if ( *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v50 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v50);
        }
        v52 = *v51;
        __k = ROGUELIKE_CARD_TPYE_R;
        v53 = &__k;
        v54 = std::map<data::RoguelikeCardType,unsigned int>::operator[](
                (std::map<data::RoguelikeCardType,unsigned int> *const)(v4 + 112),
                &__k);
        v55 = v54;
        v56 = *(_BYTE *)(((unsigned __int64)v54 >> 3) + 0x7FFF8000);
        if ( v56 != 0 && (char)(((unsigned __int8)v54 & 7) + 3) >= v56 )
        {
          LOBYTE(v53) = v56 != 0;
          __asan_report_store4(v54, v53, v54);
        }
        *v55 = v52;
        common::milog::MiLogStream::create(
          &v82,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "randRoguelikeCardVec",
          2607);
        v57 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v82,
                (const char (*)[36])"[ROGUELIKE] gacha type weight, ssr:");
        v73 = ROGUELIKE_CARD_TPYE_SSR;
        v58 = std::map<data::RoguelikeCardType,unsigned int>::operator[](
                (std::map<data::RoguelikeCardType,unsigned int> *const)(v4 + 112),
                &v73);
        v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, v58);
        v60 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v59, (const char (*)[6])", sr:");
        __k = ROGUELIKE_CARD_TPYE_SR;
        v61 = std::map<data::RoguelikeCardType,unsigned int>::operator[](
                (std::map<data::RoguelikeCardType,unsigned int> *const)(v4 + 112),
                &__k);
        v62 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, v61);
        v63 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v62, (const char (*)[5])". r:");
        *(_DWORD *)(v4 + 80) = 3;
        v64 = std::map<data::RoguelikeCardType,unsigned int>::operator[](
                (std::map<data::RoguelikeCardType,unsigned int> *const)(v4 + 112),
                (std::map<data::RoguelikeCardType,unsigned int>::key_type *)(v4 + 80));
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v63, v64);
        common::milog::MiLogStream::~MiLogStream(&v82);
        is_succ = 1;
        std::unordered_map<unsigned int,unsigned int>::unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v4 + 192));
        for ( cnt = 0; cnt <= 2; ++cnt )
        {
          *(_DWORD *)(v4 + 80) = 0;
          v65 = cnt;
          if ( v65 >= std::vector<unsigned int>::size(&this->gm_wish_card_vec_) )
          {
            *(_DWORD *)(v4 + 80) = RoguelikeMiscMgr::getRandRoguelikeCard(
                                     this,
                                     card_depot_map,
                                     (const std::map<data::RoguelikeCardType,unsigned int> *)(v4 + 112));
          }
          else
          {
            v66 = std::vector<unsigned int>::operator[](&this->gm_wish_card_vec_, cnt);
            v67 = v66;
            if ( *(_BYTE *)(((unsigned __int64)v66 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v66 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v66 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v66);
            }
            *(_DWORD *)(v4 + 80) = *v67;
          }
          if ( !*(_DWORD *)(v4 + 80) )
          {
            common::milog::MiLogStream::create(
              &v82,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
              "randRoguelikeCardVec",
              2628);
            common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v82,
              (const char (*)[28])"getRandRoguelikeCard failed");
            common::milog::MiLogStream::~MiLogStream(&v82);
            is_succ = 0;
            break;
          }
          std::vector<unsigned int>::push_back(res_card_vec, (const std::vector<unsigned int>::value_type *)(v4 + 80));
          if ( std::vector<unsigned int>::size(res_card_vec) <= 2 )
            RoguelikeMiscMgr::tempRemoveRoguelikeCard(
              this,
              card_depot_map,
              (std::unordered_map<unsigned int,unsigned int> *)(v4 + 192),
              *(_DWORD *)(v4 + 80));
        }
        RoguelikeMiscMgr::recoverRoguelikeCardData(
          this,
          card_depot_map,
          (const std::unordered_map<unsigned int,unsigned int> *)(v4 + 192));
        std::vector<unsigned int>::clear(&this->gm_wish_card_vec_);
        if ( !is_succ )
        {
          common::milog::MiLogStream::create(
            &v82,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
            "randRoguelikeCardVec",
            2647);
          common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            &v82,
            (const char (*)[28])"randRoguelikeCardVec failed");
          common::milog::MiLogStream::~MiLogStream(&v82);
          std::vector<unsigned int>::clear(res_card_vec);
          v8 = -1;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v82,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
            "randRoguelikeCardVec",
            2651);
          v68 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                  &v82,
                  (const char (*)[53])"[ROGUELIKE] randRoguelikeCardVec succ, res_card_vec:");
          common::milog::MiLogStream::operator<<<unsigned int>(v68, res_card_vec);
          common::milog::MiLogStream::~MiLogStream(&v82);
          v8 = 0;
        }
        std::unordered_map<unsigned int,unsigned int>::~unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v4 + 192));
        std::map<data::RoguelikeCardType,unsigned int>::~map((std::map<data::RoguelikeCardType,unsigned int> *const)(v4 + 112));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v82,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "randRoguelikeCardVec",
          2596);
        v35 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                &v82,
                (const char (*)[55])"[ROGUELIKE] card depot all type weight zero, depot_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, (const unsigned int *)(v4 + 96));
        common::milog::MiLogStream::~MiLogStream(&v82);
        v8 = -1;
      }
    }
  }
  result = v8;
  if ( v83 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF801C) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 2656: range 0000000015969B50-000000001596A63F
uint32_t __cdecl RoguelikeMiscMgr::getRandRoguelikeCard(
        RoguelikeMiscMgr *const this,
        RoguelikeCardDepotMap *card_map,
        const std::map<data::RoguelikeCardType,unsigned int> *type_card_weight_map)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,unsigned int> *p_stage_ssr_max_rand_count_map; // r14
  uint32_t *v7; // rax
  uint32_t *v8; // rdx
  common::milog::MiLogStream *v10; // rax
  uint32_t result; // eax
  int v12; // eax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rbx
  std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::mapped_type *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::mapped_type *v17; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::mapped_type *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r14
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  bool is_trigger_guarantee; // [rsp+23h] [rbp-EDh]
  uint32_t guarantee_count; // [rsp+24h] [rbp-ECh]
  char *v36; // [rsp+28h] [rbp-E8h] BYREF
  char *v37; // [rsp+30h] [rbp-E0h] BYREF
  char *val; // [rsp+38h] [rbp-D8h] BYREF
  const ActivityRogueExcelConfigMgr *rogue_config_mgr; // [rsp+40h] [rbp-D0h]
  RogueLikeDungeonRuntimeMgr *runtime_mgr; // [rsp+48h] [rbp-C8h]
  std::shared_ptr<Config> v41; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v42; // [rsp+60h] [rbp-B0h] BYREF
  char v43[144]; // [rsp+80h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 9 type:2657 48 4 16 actual_type:2686 64 4 12 card_id:2757";
  *(_QWORD *)(v3 + 16) = RoguelikeMiscMgr::getRandRoguelikeCard;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 32) = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v41);
  rogue_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41)->design_config.txt_config_mgr.activity_rogue_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v41);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->activity_);
  runtime_mgr = RoguelikeDungeonActivity::getRogueDungeonRuntimeMgr(this->activity_);
  is_trigger_guarantee = 0;
  *(_DWORD *)(v3 + 64) = RogueLikeDungeonRuntimeMgr::getStageId(runtime_mgr);
  if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int> const,unsigned int>(
         &rogue_config_mgr->stage_ssr_max_rand_count_map,
         (const unsigned int *)(v3 + 64)) )
  {
    p_stage_ssr_max_rand_count_map = &rogue_config_mgr->stage_ssr_max_rand_count_map;
    *(_DWORD *)(v3 + 64) = RogueLikeDungeonRuntimeMgr::getStageId(runtime_mgr);
    v7 = (uint32_t *)std::unordered_map<unsigned int,unsigned int>::at(
                       p_stage_ssr_max_rand_count_map,
                       (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 64));
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    guarantee_count = *v8;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_rand_count_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_rand_count_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_rand_count_);
    }
    if ( guarantee_count <= SAFE_ADD<unsigned int,int>(this->cur_rand_count_, 1) )
    {
      *(_DWORD *)(v3 + 64) = 1;
      if ( common::tools::MiscUtils::isContains<std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>,data::RoguelikeCardType>(
             card_map,
             (const data::RoguelikeCardType *)(v3 + 64)) )
      {
        is_trigger_guarantee = 1;
      }
    }
  }
  if ( is_trigger_guarantee )
  {
    *(_DWORD *)(v3 + 32) = 1;
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "getRandRoguelikeCard",
      2674);
    v10 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
            &v42,
            (const char (*)[63])"[ROGUELIKE] trigger roguelike gacha guarantee, cur rand_count:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->cur_rand_count_);
    common::milog::MiLogStream::~MiLogStream(&v42);
  }
  else if ( common::tools::RandomUtils::weightSelectOne<data::RoguelikeCardType,unsigned int>(
              type_card_weight_map,
              (data::RoguelikeCardType *)(v3 + 32),
              0) )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "getRandRoguelikeCard",
      2681);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      &v42,
      (const char (*)[35])"[ROGUELIKE] weightSelectOne failed");
    common::milog::MiLogStream::~MiLogStream(&v42);
    result = 0;
    goto LABEL_56;
  }
  *(_DWORD *)(v3 + 48) = 0;
  v12 = *(_DWORD *)(v3 + 32);
  if ( v12 == 3 )
  {
    *(_DWORD *)(v3 + 64) = 3;
    if ( common::tools::MiscUtils::isContains<std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>,data::RoguelikeCardType>(
           card_map,
           (const data::RoguelikeCardType *)(v3 + 64)) )
    {
      *(_DWORD *)(v3 + 48) = 3;
    }
    else
    {
      *(_DWORD *)(v3 + 64) = 2;
      if ( common::tools::MiscUtils::isContains<std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>,data::RoguelikeCardType>(
             card_map,
             (const data::RoguelikeCardType *)(v3 + 64)) )
      {
        *(_DWORD *)(v3 + 48) = 2;
      }
      else
      {
        *(_DWORD *)(v3 + 48) = 1;
      }
    }
  }
  else
  {
    if ( v12 > 3 )
    {
LABEL_41:
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "getRandRoguelikeCard",
        2742);
      v13 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v42,
              (const char (*)[36])"[ROGUELIKE] invalid rand card_type:");
      val = (char *)data::enumValToStr((data::RoguelikeCardType)*(_DWORD *)(v3 + 32));
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v13, (const char *const *)&val);
      common::milog::MiLogStream::~MiLogStream(&v42);
      result = 0;
      goto LABEL_56;
    }
    if ( v12 == 1 )
    {
      *(_DWORD *)(v3 + 64) = 1;
      if ( common::tools::MiscUtils::isContains<std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>,data::RoguelikeCardType>(
             card_map,
             (const data::RoguelikeCardType *)(v3 + 64)) )
      {
        *(_DWORD *)(v3 + 48) = 1;
      }
      else
      {
        *(_DWORD *)(v3 + 64) = 2;
        if ( common::tools::MiscUtils::isContains<std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>,data::RoguelikeCardType>(
               card_map,
               (const data::RoguelikeCardType *)(v3 + 64)) )
        {
          *(_DWORD *)(v3 + 48) = 2;
        }
        else
        {
          *(_DWORD *)(v3 + 48) = 3;
        }
      }
    }
    else
    {
      if ( v12 != 2 )
        goto LABEL_41;
      *(_DWORD *)(v3 + 64) = 2;
      if ( common::tools::MiscUtils::isContains<std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>,data::RoguelikeCardType>(
             card_map,
             (const data::RoguelikeCardType *)(v3 + 64)) )
      {
        *(_DWORD *)(v3 + 48) = 2;
      }
      else
      {
        *(_DWORD *)(v3 + 64) = 3;
        if ( common::tools::MiscUtils::isContains<std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>,data::RoguelikeCardType>(
               card_map,
               (const data::RoguelikeCardType *)(v3 + 64)) )
        {
          *(_DWORD *)(v3 + 48) = 3;
        }
        else
        {
          *(_DWORD *)(v3 + 48) = 1;
        }
      }
    }
  }
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>,data::RoguelikeCardType>(
          card_map,
          (const data::RoguelikeCardType *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "getRandRoguelikeCard",
      2749);
    v14 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
            &v42,
            (const char (*)[65])"[ROGUELIKE] card depot empty, cannot rand a card! card_map size:");
    val = (char *)std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::size(card_map);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v14, (const unsigned __int64 *)&val);
    common::milog::MiLogStream::~MiLogStream(&v42);
    result = 0;
  }
  else
  {
    v15 = std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::operator[](
            card_map,
            (const std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::key_type *)(v3 + 48));
    if ( std::map<unsigned int,unsigned int>::empty(v15) )
    {
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "getRandRoguelikeCard",
        2754);
      v16 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
              &v42,
              (const char (*)[66])"[ROGUELIKE] card depot type card empty, cannot rand a card! type:");
      val = (char *)data::enumValToStr((data::RoguelikeCardType)*(_DWORD *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v16, (const char *const *)&val);
      common::milog::MiLogStream::~MiLogStream(&v42);
      result = 0;
    }
    else
    {
      *(_DWORD *)(v3 + 64) = 0;
      v17 = std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::operator[](
              card_map,
              (const std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::key_type *)(v3 + 48));
      if ( common::tools::RandomUtils::weightSelectOne<unsigned int,unsigned int>(v17, (unsigned int *)(v3 + 64), 0) )
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "getRandRoguelikeCard",
          2760);
        v18 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v42,
                (const char (*)[35])"weightSelectOne failed, rand_type:");
        v36 = (char *)data::enumValToStr((data::RoguelikeCardType)*(_DWORD *)(v3 + 32));
        v19 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v18, (const char *const *)&v36);
        v20 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v19, (const char (*)[15])", actual_type:");
        v37 = (char *)data::enumValToStr((data::RoguelikeCardType)*(_DWORD *)(v3 + 48));
        v21 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v20, (const char *const *)&v37);
        v22 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v21,
                (const char (*)[19])", weight_map size:");
        v23 = std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::operator[](
                card_map,
                (const std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::key_type *)(v3 + 48));
        val = (char *)std::map<unsigned int,unsigned int>::size(v23);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v22, (const unsigned __int64 *)&val);
        common::milog::MiLogStream::~MiLogStream(&v42);
        result = 0;
      }
      else
      {
        if ( *(_DWORD *)(v3 + 48) == 1 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->cur_rand_count_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->cur_rand_count_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->cur_rand_count_, v3 + 64, &this->cur_rand_count_);
          }
          this->cur_rand_count_ = 0;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->cur_rand_count_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->cur_rand_count_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->cur_rand_count_);
          }
          ++this->cur_rand_count_;
        }
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "getRandRoguelikeCard",
          2772);
        v24 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                &v42,
                (const char (*)[45])"[ROGUELIKE] randRoguelikeCard succ, card_id:");
        v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v24,
                (const unsigned int *)(v3 + 64));
        v26 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                v25,
                (const char (*)[23])", is_trigger_gurantee:");
        v27 = common::milog::MiLogStream::operator<<(v26, is_trigger_guarantee);
        v28 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v27, (const char (*)[13])", rand_type:");
        v37 = (char *)data::enumValToStr((data::RoguelikeCardType)*(_DWORD *)(v3 + 32));
        v29 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v28, (const char *const *)&v37);
        v30 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v29, (const char (*)[15])", actual_type:");
        val = (char *)data::enumValToStr((data::RoguelikeCardType)*(_DWORD *)(v3 + 48));
        v31 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v30, (const char *const *)&val);
        v32 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v31,
                (const char (*)[18])", cur rand_count:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &this->cur_rand_count_);
        common::milog::MiLogStream::~MiLogStream(&v42);
        result = *(_DWORD *)(v3 + 64);
      }
    }
  }
LABEL_56:
  if ( v43 == (char *)v3 )
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

// Line 2779: range 000000001596A640-000000001596AA63
void __fastcall RoguelikeMiscMgr::tempRemoveRoguelikeCard(
        RoguelikeMiscMgr *const this,
        RoguelikeCardDepotMap *card_map,
        std::unordered_map<unsigned int,unsigned int> *temp_card_map,
        uint32_t card_id)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::map<unsigned int,unsigned int> *v8; // rax
  std::map<unsigned int,unsigned int> *v10; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v11; // rax
  int *v12; // rdx
  int v13; // r14d
  char *v14; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v15; // rax
  _DWORD *v16; // rdx
  char v17; // cl
  std::map<unsigned int,unsigned int> *v18; // rax
  std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::mapped_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  std::shared_ptr<Config> v25; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v26; // [rsp+30h] [rbp-B0h] BYREF
  char v27[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 9 type:2780 64 4 12 card_id:2778";
  *(_QWORD *)(v4 + 16) = RoguelikeMiscMgr::tempRemoveRoguelikeCard;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 64) = card_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v25);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
  *(_DWORD *)(v4 + 48) = ActivityRogueExcelConfigMgr::getRoguelikeCardType(
                           &v7->design_config.txt_config_mgr.activity_rogue_config_mgr,
                           *(_DWORD *)(v4 + 64));
  std::shared_ptr<Config>::~shared_ptr(&v25);
  if ( common::tools::MiscUtils::isContains<std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>,data::RoguelikeCardType>(
         card_map,
         (const data::RoguelikeCardType *)(v4 + 48))
    && (v8 = std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::operator[](
               card_map,
               (const std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::key_type *)(v4 + 48)),
        common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int>,unsigned int>(
          v8,
          (const unsigned int *)(v4 + 64))) )
  {
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,unsigned int>(
            temp_card_map,
            (const unsigned int *)(v4 + 64)) )
    {
      v10 = std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::operator[](
              card_map,
              (const std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::key_type *)(v4 + 48));
      v11 = std::map<unsigned int,unsigned int>::operator[](
              v10,
              (const std::map<unsigned int,unsigned int>::key_type *)(v4 + 64));
      v12 = (int *)v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      v13 = *v12;
      v14 = (char *)(v4 + 64);
      v15 = std::unordered_map<unsigned int,unsigned int>::operator[](
              temp_card_map,
              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v4 + 64));
      v16 = v15;
      v17 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
      if ( v17 != 0 && (char)(((unsigned __int8)v15 & 7) + 3) >= v17 )
      {
        LOBYTE(v14) = v17 != 0;
        __asan_report_store4(v15, v14, v15);
      }
      *v16 = v13;
      v18 = std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::operator[](
              card_map,
              (const std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::key_type *)(v4 + 48));
      std::map<unsigned int,unsigned int>::erase(v18, (const std::map<unsigned int,unsigned int>::key_type *)(v4 + 64));
      v19 = std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::operator[](
              card_map,
              (const std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::key_type *)(v4 + 48));
      if ( std::map<unsigned int,unsigned int>::empty(v19) )
        std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::erase(
          card_map,
          (const std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::key_type *)(v4 + 48));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "tempRemoveRoguelikeCard",
        2795);
      v20 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
              &v26,
              (const char (*)[61])"[ROGUELIKE] rand a duplicate card in temp_card_map, card_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v4 + 64));
      common::milog::MiLogStream::~MiLogStream(&v26);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "tempRemoveRoguelikeCard",
      2802);
    v21 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
            &v26,
            (const char (*)[56])"[ROGUELIKE] rand a card not in card_count_map, card_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  if ( v27 == (char *)v4 )
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

// Line 2808: range 000000001596AA64-000000001596AEBA
void __cdecl RoguelikeMiscMgr::recoverRoguelikeCardData(
        RoguelikeMiscMgr *const this,
        RoguelikeCardDepotMap *card_map,
        const std::unordered_map<unsigned int,unsigned int> *temp_card_map)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  ActivityRogueExcelConfigMgr *p_activity_rogue_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  std::map<unsigned int,unsigned int> *v8; // rax
  common::milog::MiLogStream *v10; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v11; // r14d
  std::map<unsigned int,unsigned int> *v12; // rax
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v13; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v14; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v15; // rdx
  char v16; // cl
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  const std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-E0h]
  const std::pair<unsigned int const,unsigned int> *v22; // [rsp+38h] [rbp-D8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *card_id; // [rsp+40h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *weight; // [rsp+48h] [rbp-C8h]
  std::shared_ptr<Config> v25; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v26; // [rsp+60h] [rbp-B0h] BYREF
  common::milog::MiLogStream v27; // [rsp+80h] [rbp-90h] BYREF
  char v28[112]; // [rsp+A0h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 type:2812";
  *(_QWORD *)(v3 + 16) = RoguelikeMiscMgr::recoverRoguelikeCardData;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  __for_range = temp_card_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(temp_card_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(temp_card_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v22 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    card_id = std::get<0ul,unsigned int const,unsigned int>(v22);
    weight = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v22);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v25);
    p_activity_rogue_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25)->design_config.txt_config_mgr.activity_rogue_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)card_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(card_id);
    }
    *(_DWORD *)(v3 + 32) = ActivityRogueExcelConfigMgr::getRoguelikeCardType(p_activity_rogue_config_mgr, *card_id);
    std::shared_ptr<Config>::~shared_ptr(&v25);
    if ( *(_DWORD *)(v3 + 32) )
    {
      if ( common::tools::MiscUtils::isContains<std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>,data::RoguelikeCardType>(
             card_map,
             (const data::RoguelikeCardType *)(v3 + 32))
        && (v8 = std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::operator[](
                   card_map,
                   (const std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::key_type *)(v3 + 32)),
            common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int>,unsigned int>(v8, card_id)) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "recoverRoguelikeCardData",
          2820);
        v10 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v27,
                (const char (*)[48])"[ROGUELIKE] card is still in card map, card_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, card_id);
        common::milog::MiLogStream::~MiLogStream(&v27);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)weight >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)weight & 7) + 3) >= *(_BYTE *)(((unsigned __int64)weight >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(weight);
        }
        v11 = *weight;
        v12 = std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::operator[](
                card_map,
                (const std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::key_type *)(v3 + 32));
        v13 = card_id;
        v14 = std::map<unsigned int,unsigned int>::operator[](v12, card_id);
        v15 = v14;
        v16 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
        if ( v16 != 0 && (char)(((unsigned __int8)v14 & 7) + 3) >= v16 )
        {
          LOBYTE(v13) = v16 != 0;
          __asan_report_store4(v14, v13, v14);
        }
        *v15 = v11;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "recoverRoguelikeCardData",
        2815);
      v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
             &v26,
             (const char (*)[37])"[ROGUELIKE] card_type none, card_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, card_id);
      common::milog::MiLogStream::~MiLogStream(&v26);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  if ( v28 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2829: range 000000001596AEBC-000000001596B08C
void __cdecl RoguelikeMiscMgr::mergeRoguelikeCardDepotMap(
        RoguelikeMiscMgr *const this,
        RoguelikeCardDepotMap *source_map,
        const RoguelikeCardDepotMap *add_map)
{
  std::map<unsigned int,unsigned int> *v3; // rbx
  const std::map<unsigned int,unsigned int> *v4; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr M_node; // r12
  const std::map<unsigned int,unsigned int> *v6; // rax
  std::map<unsigned int,unsigned int>::const_iterator v7; // rax
  std::map<unsigned int,unsigned int> *v8; // rbx
  const std::map<unsigned int,unsigned int> *v9; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr v10; // r12
  const std::map<unsigned int,unsigned int> *v11; // rax
  std::map<unsigned int,unsigned int>::const_iterator v12; // rax
  std::map<unsigned int,unsigned int> *v13; // rbx
  const std::map<unsigned int,unsigned int> *v14; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr v15; // r12
  const std::map<unsigned int,unsigned int> *v16; // rax
  std::map<unsigned int,unsigned int>::const_iterator v17; // rax
  std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::key_type __k; // [rsp+24h] [rbp-1Ch] BYREF
  std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::key_type v20; // [rsp+28h] [rbp-18h] BYREF
  data::RoguelikeCardType value[5]; // [rsp+2Ch] [rbp-14h] BYREF

  value[0] = ROGUELIKE_CARD_TPYE_SSR;
  if ( common::tools::MiscUtils::isContains<std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> const,data::RoguelikeCardType>(
         add_map,
         value) )
  {
    __k = ROGUELIKE_CARD_TPYE_SSR;
    v3 = std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::operator[](source_map, &__k);
    value[0] = ROGUELIKE_CARD_TPYE_SSR;
    v4 = std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::at(add_map, value);
    M_node = std::map<unsigned int,unsigned int>::end(v4)._M_node;
    v20 = ROGUELIKE_CARD_TPYE_SSR;
    v6 = std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::at(add_map, &v20);
    v7._M_node = std::map<unsigned int,unsigned int>::begin(v6)._M_node;
    std::map<unsigned int,unsigned int>::insert<std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>>(
      v3,
      v7,
      (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >)M_node);
  }
  value[0] = ROGUELIKE_CARD_TPYE_SR;
  if ( common::tools::MiscUtils::isContains<std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> const,data::RoguelikeCardType>(
         add_map,
         value) )
  {
    __k = ROGUELIKE_CARD_TPYE_SR;
    v8 = std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::operator[](source_map, &__k);
    value[0] = ROGUELIKE_CARD_TPYE_SR;
    v9 = std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::at(add_map, value);
    v10 = std::map<unsigned int,unsigned int>::end(v9)._M_node;
    v20 = ROGUELIKE_CARD_TPYE_SR;
    v11 = std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::at(add_map, &v20);
    v12._M_node = std::map<unsigned int,unsigned int>::begin(v11)._M_node;
    std::map<unsigned int,unsigned int>::insert<std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>>(
      v8,
      v12,
      (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >)v10);
  }
  value[0] = ROGUELIKE_CARD_TPYE_R;
  if ( common::tools::MiscUtils::isContains<std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> const,data::RoguelikeCardType>(
         add_map,
         value) )
  {
    __k = ROGUELIKE_CARD_TPYE_R;
    v13 = std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::operator[](source_map, &__k);
    value[0] = ROGUELIKE_CARD_TPYE_R;
    v14 = std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::at(add_map, value);
    v15 = std::map<unsigned int,unsigned int>::end(v14)._M_node;
    v20 = ROGUELIKE_CARD_TPYE_R;
    v16 = std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::at(add_map, &v20);
    v17._M_node = std::map<unsigned int,unsigned int>::begin(v16)._M_node;
    std::map<unsigned int,unsigned int>::insert<std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>>(
      v13,
      v17,
      (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >)v15);
  }
};

// Line 2848: range 000000001596B08E-000000001596B94A
__int64 __fastcall RoguelikeMiscMgr::triggerRoguelikeRune(RoguelikeMiscMgr *const this, uint32_t rune_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  __int64 v6; // rsi
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  bool v9; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  google::protobuf::uint32 *v11; // rax
  google::protobuf::uint32 *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::allocator<char> __a; // [rsp+16h] [rbp-17Ah] BYREF
  bool is_free; // [rsp+17h] [rbp-179h]
  std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::iterator __for_begin; // [rsp+18h] [rbp-178h] BYREF
  std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::iterator __for_end; // [rsp+20h] [rbp-170h] BYREF
  std::vector<std::tuple<unsigned int,unsigned int,unsigned int>> *__for_range; // [rsp+28h] [rbp-168h]
  std::tuple<unsigned int,unsigned int,unsigned int> *__t; // [rsp+30h] [rbp-160h]
  std::tuple_element<0,std::tuple<unsigned int,unsigned int,unsigned int> >::type *id; // [rsp+38h] [rbp-158h]
  std::tuple_element<0,std::tuple<unsigned int,unsigned int> >::type *left_count; // [rsp+40h] [rbp-150h]
  std::tuple_element<0,std::tuple<unsigned int> >::type *max_count; // [rsp+48h] [rbp-148h]
  std::shared_ptr<Config> v28; // [rsp+50h] [rbp-140h] BYREF
  common::milog::MiLogStream v29; // [rsp+60h] [rbp-130h] BYREF
  common::milog::MiLogStream v30; // [rsp+80h] [rbp-110h] BYREF
  char v31[240]; // [rsp+A0h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 14 free_prob:2865 48 4 12 rune_id:2847 64 24 11 notify:2879 128 32 8 key:2876";
  *(_QWORD *)(v2 + 16) = RoguelikeMiscMgr::triggerRoguelikeRune;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = rune_id;
  if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_init_);
  if ( !this->is_init_ )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_in_roguelike_dungeon_);
  }
  if ( !this->is_in_roguelike_dungeon_ )
  {
LABEL_10:
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "triggerRoguelikeRune",
      2852);
    common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
      &v30,
      (const char (*)[51])"[ROGUELIKE] current misc data is not inited,error!");
    common::milog::MiLogStream::~MiLogStream(&v30);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    __for_range = &this->chosen_rune_tuple_vec_;
    __for_begin._M_current = std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::begin(&this->chosen_rune_tuple_vec_)._M_current;
    __for_end._M_current = std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::end(&this->chosen_rune_tuple_vec_)._M_current;
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<std::tuple<unsigned int,unsigned int,unsigned int> *,std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>>(
              &__for_begin,
              &__for_end) )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
          "triggerRoguelikeRune",
          2888);
        v18 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                &v30,
                (const char (*)[37])"[ROGUELIKE] trigger invalid rune_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v30);
        result = 0xFFFFFFFFLL;
        goto LABEL_36;
      }
      __t = __gnu_cxx::__normal_iterator<std::tuple<unsigned int,unsigned int,unsigned int> *,std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>>::operator*(&__for_begin);
      id = std::get<0ul,unsigned int,unsigned int,unsigned int>(__t);
      left_count = std::get<1ul,unsigned int,unsigned int,unsigned int>(__t);
      max_count = std::get<2ul,unsigned int,unsigned int,unsigned int>(__t);
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(id);
      }
      if ( *id == *(_DWORD *)(v2 + 48) )
        break;
      __gnu_cxx::__normal_iterator<std::tuple<unsigned int,unsigned int,unsigned int> *,std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>>::operator++(&__for_begin);
    }
    v6 = ((unsigned __int8)left_count & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)left_count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)left_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)left_count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(left_count);
    }
    if ( *left_count )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->rune_free_prob_weight_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->rune_free_prob_weight_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->rune_free_prob_weight_);
      }
      *(float *)(v2 + 32) = (float)(int)this->rune_free_prob_weight_ / 100.0;
      is_free = common::tools::RandomUtils::randomTestProbability(100.0);
      if ( !is_free )
      {
        if ( *(_BYTE *)(((unsigned __int64)left_count >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)left_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)left_count >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(left_count);
        }
        --*left_count;
        RoguelikeMiscMgr::logRogueTriggerRune(this, *(_DWORD *)(v2 + 48), -1);
      }
      else
      {
        std::allocator<char>::allocator(&__a, v6);
        std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 128), "ROGUE_FREE_TRIGGER_RUNE", &__a);
        std::allocator<char>::~allocator(&__a);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v28);
        v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
        v9 = common::tools::MiscUtils::isContains<std::unordered_map<std::string,unsigned int> const,std::string>(
               &v8->design_config.txt_config_mgr.reminder_config_mgr.key_to_message_map,
               (const std::string *)(v2 + 128));
        std::shared_ptr<Config>::~shared_ptr(&v28);
        if ( v9 )
        {
          proto::ServerMessageNotify::ServerMessageNotify((proto::ServerMessageNotify *const)(v2 + 64));
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v28);
          v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
          v11 = (google::protobuf::uint32 *)std::unordered_map<std::string,unsigned int>::at(
                                              &v10->design_config.txt_config_mgr.reminder_config_mgr.key_to_message_map,
                                              (const std::unordered_map<std::string,unsigned int>::key_type *)(v2 + 128));
          v12 = v11;
          if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v11);
          }
          proto::ServerMessageNotify::set_index((proto::ServerMessageNotify *const)(v2 + 64), *v12);
          std::shared_ptr<Config>::~shared_ptr(&v28);
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 64));
          proto::ServerMessageNotify::~ServerMessageNotify((proto::ServerMessageNotify *const)(v2 + 64));
        }
        std::string::~string((void *)(v2 + 128));
      }
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "triggerRoguelikeRune",
        2884);
      v13 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              &v30,
              (const char (*)[48])"[ROGUELIKE] triggerRoguelikeRune succ, rune_id:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
      v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])", is_free:");
      v16 = common::milog::MiLogStream::operator<<(v15, is_free);
      v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v16, (const char (*)[13])", free_prob:");
      common::milog::MiLogStream::operator<<<float,(float *)0>(v17, (const float *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v30);
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "triggerRoguelikeRune",
        2861);
      v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v29,
             (const char (*)[39])"rune_id available count zero, rune_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v29);
      result = 10037LL;
    }
  }
LABEL_36:
  if ( v31 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
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

// Line 2893: range 000000001596B94C-000000001596BBF5
__int64 __fastcall RoguelikeMiscMgr::getRoguelikeRuneAvailableCount(
        const RoguelikeMiscMgr *const this,
        uint32_t rune_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  common::milog::MiLogStream *v6; // rax
  std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::const_iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::const_iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  const std::vector<std::tuple<unsigned int,unsigned int,unsigned int>> *__for_range; // [rsp+28h] [rbp-A8h]
  const std::tuple<unsigned int,unsigned int,unsigned int> *v10; // [rsp+30h] [rbp-A0h]
  std::tuple_element<0,const std::tuple<unsigned int,unsigned int,unsigned int> >::type *id; // [rsp+38h] [rbp-98h]
  std::tuple_element<1,const std::tuple<unsigned int,unsigned int,unsigned int> >::type *left_count; // [rsp+40h] [rbp-90h]
  std::tuple_element<2,const std::tuple<unsigned int,unsigned int,unsigned int> >::type *max_count; // [rsp+48h] [rbp-88h]
  common::milog::MiLogStream v14; // [rsp+50h] [rbp-80h] BYREF
  char v15[96]; // [rsp+70h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 rune_id:2892";
  *(_QWORD *)(v2 + 16) = RoguelikeMiscMgr::getRoguelikeRuneAvailableCount;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = rune_id;
  __for_range = &this->chosen_rune_tuple_vec_;
  __for_begin._M_current = std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::begin(&this->chosen_rune_tuple_vec_)._M_current;
  __for_end._M_current = std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::end(&this->chosen_rune_tuple_vec_)._M_current;
  while ( 1 )
  {
    if ( !__gnu_cxx::operator!=<std::tuple<unsigned int,unsigned int,unsigned int> const*,std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>>(
            &__for_begin,
            &__for_end) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "getRoguelikeRuneAvailableCount",
        2901);
      v6 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
             &v14,
             (const char (*)[51])"rune_id is not in chosen_rune_tuple_vec_, rune_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v14);
      result = 0LL;
      goto LABEL_14;
    }
    v10 = __gnu_cxx::__normal_iterator<std::tuple<unsigned int,unsigned int,unsigned int> const*,std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>>::operator*(&__for_begin);
    id = (std::tuple_element<0,const std::tuple<unsigned int,unsigned int,unsigned int> >::type *)std::get<0ul,unsigned int,unsigned int,unsigned int>(v10);
    left_count = (std::tuple_element<1,const std::tuple<unsigned int,unsigned int,unsigned int> >::type *)std::get<1ul,unsigned int,unsigned int,unsigned int>(v10);
    max_count = (std::tuple_element<2,const std::tuple<unsigned int,unsigned int,unsigned int> >::type *)std::get<2ul,unsigned int,unsigned int,unsigned int>(v10);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    if ( *id == *(_DWORD *)(v2 + 32) )
      break;
    __gnu_cxx::__normal_iterator<std::tuple<unsigned int,unsigned int,unsigned int> const*,std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)left_count >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)left_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)left_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(left_count);
  }
  result = *left_count;
LABEL_14:
  if ( v15 == (char *)v2 )
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

// Line 2906: range 000000001596BBF6-000000001596BE29
std::vector<unsigned int> *__cdecl RoguelikeMiscMgr::wishNextRoguelikeCardByGm(
        std::vector<unsigned int> *retstr,
        RoguelikeMiscMgr *const this,
        const std::vector<unsigned int> *card_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v6; // rax
  _DWORD *v7; // rdx
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 12 card_id:2908";
  *(_QWORD *)(v3 + 16) = RoguelikeMiscMgr::wishNextRoguelikeCardByGm;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  std::vector<unsigned int>::clear(&this->gm_wish_card_vec_);
  __for_range = card_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(card_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(card_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v3 + 32) = *v7;
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,unsigned int>(
           &this->card_count_map_,
           (const unsigned int *)(v3 + 32))
      && !common::tools::MiscUtils::isContains<unsigned int>(&this->gm_wish_card_vec_, (const unsigned int *)(v3 + 32)) )
    {
      std::vector<unsigned int>::push_back(
        &this->gm_wish_card_vec_,
        (const std::vector<unsigned int>::value_type *)(v3 + 32));
      if ( std::vector<unsigned int>::size(&this->gm_wish_card_vec_) == 3 )
        break;
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  std::vector<unsigned int>::vector(retstr, &this->gm_wish_card_vec_);
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 2923: range 000000001596BE2A-000000001596C0B0
_BOOL8 __fastcall RoguelikeMiscMgr::canAvatarUnlockTalent(RoguelikeMiscMgr *const this, uint64_t guid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  _BOOL4 v9; // r15d
  std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  TalentComp *TalentComp; // rax
  _BOOL8 result; // rax
  common::milog::MiLogStream v13; // [rsp+10h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 guid:2922 64 16 15 avatar_ptr:2924";
  *(_QWORD *)(v2 + 16) = RoguelikeMiscMgr::canAvatarUnlockTalent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  *(_QWORD *)(v2 + 32) = guid;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  AvatarComp = Player::getAvatarComp(this->player_);
  PlayerAvatarComp::findAvatar<MirrorAvatar>((const PlayerAvatarComp *const)(v2 + 64), (uint64_t)AvatarComp);
  if ( std::operator==<MirrorAvatar>(0LL, (const std::shared_ptr<MirrorAvatar> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "canAvatarUnlockTalent",
      2927);
    v6 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v13,
           (const char (*)[35])"[ROGUELIKE] findAvatar fail, guid:");
    v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
           v6,
           (const unsigned __int64 *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v9 = 0;
  }
  else
  {
    v10 = std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    TalentComp = Avatar::getTalentComp(v10);
    v9 = !TalentComp::isTalentAllUnlock(TalentComp);
  }
  std::shared_ptr<MirrorAvatar>::~shared_ptr((std::shared_ptr<MirrorAvatar> *const)(v2 + 64));
  result = v9;
  if ( v14 == (char *)v2 )
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

// Line 2938: range 000000001596C0B2-000000001596C0CC
void __cdecl RoguelikeMiscMgr::onRoguelikeDungeonSwitchAvatar(RoguelikeMiscMgr *const this)
{
  RoguelikeMiscMgr::setRoguelikeAvatarSgv(this);
};

// Line 2943: range 000000001596C0CE-000000001596C434
int32_t __cdecl RoguelikeMiscMgr::onRoguelikeEffectViewReq(
        RoguelikeMiscMgr *const this,
        const proto::RoguelikeEffectViewReq *req,
        proto::RoguelikeEffectViewRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-B0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-A8h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+30h] [rbp-A0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-98h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+40h] [rbp-90h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+48h] [rbp-88h]
  common::milog::MiLogStream v13; // [rsp+50h] [rbp-80h] BYREF
  char v14[96]; // [rsp+70h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 13 curse_id:2953";
  *(_QWORD *)(v3 + 16) = RoguelikeMiscMgr::onRoguelikeEffectViewReq;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_init_);
  if ( !this->is_init_ )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_in_roguelike_dungeon_);
  }
  if ( !this->is_in_roguelike_dungeon_ )
  {
LABEL_10:
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "onRoguelikeEffectViewReq",
      2946);
    common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
      &v13,
      (const char (*)[51])"[ROGUELIKE] current misc data is not inited,error!");
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = -1;
  }
  else
  {
    __for_range = proto::RoguelikeEffectViewReq::view_card_list(req);
    __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
    __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
    while ( __for_begin != __for_end )
    {
      if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(__for_begin);
      }
      *(_DWORD *)(v3 + 32) = *__for_begin;
      std::unordered_set<unsigned int>::insert(
        &this->viewed_card_set_,
        (const std::unordered_set<unsigned int>::value_type *)(v3 + 32));
      ++__for_begin;
    }
    __for_range_0 = proto::RoguelikeEffectViewReq::view_curse_list(req);
    __for_begin_0 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_0);
    __for_end_0 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_0);
    while ( __for_begin_0 != __for_end_0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)__for_begin_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(__for_begin_0);
      }
      *(_DWORD *)(v3 + 32) = *__for_begin_0;
      std::unordered_set<unsigned int>::insert(
        &this->viewed_curse_set_,
        (const std::unordered_set<unsigned int>::value_type *)(v3 + 32));
      ++__for_begin_0;
    }
    RoguelikeMiscMgr::notifyRoguelikeEffectData(this);
    result = 0;
  }
  if ( v14 == (char *)v3 )
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

// Line 2962: range 000000001596C436-000000001596C58B
void __cdecl RoguelikeMiscMgr::onRoguelikeDungeonSettle(RoguelikeMiscMgr *const this)
{
  PlayerWatcherComp *WatcherComp; // rdi
  uint32_t v2; // esi
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<unsigned int const,unsigned int> *v7; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *type; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+38h] [rbp-8h]

  __for_range = &this->chosen_card_type_count_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->chosen_card_type_count_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->chosen_card_type_count_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    type = std::get<0ul,unsigned int const,unsigned int>(v7);
    count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v7);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    WatcherComp = Player::getWatcherComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
    {
      WatcherComp = (PlayerWatcherComp *)count;
      __asan_report_load4(count);
    }
    v2 = *count;
    if ( *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) )
    {
      WatcherComp = (PlayerWatcherComp *)type;
      __asan_report_load4(type);
    }
    PlayerWatcherComp::triggerRogueSelectCard(WatcherComp, *type, v2, 1);
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
};

// Line 2972: range 000000001596C58C-000000001596CACD
void __cdecl RoguelikeMiscMgr::logRogueSelectCard(
        RoguelikeMiscMgr *const this,
        bool is_give_up,
        uint32_t card_id,
        bool is_trigger_curse)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSelectCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  uint32_t StageId; // eax
  RoguelikeDungeonActivity *activity; // r14
  uint32_t v11; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSelectCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSelectCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  uint32_t CurLevel; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSelectCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSelectCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSelectCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSelectCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSelectCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSelectCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  Player *player; // r14
  std::string v22; // [rsp+0h] [rbp-100h]
  bool is_trigger_cursea; // [rsp+Ch] [rbp-F4h]
  _BYTE card_ida[5]; // [rsp+10h] [rbp-F0h]
  RoguelikeMiscMgr *thisa; // [rsp+18h] [rbp-E8h]
  const RogueLikeDungeonRuntimeMgr *runtime_mgr; // [rsp+20h] [rbp-E0h]
  RogueStageData *stage_ptr; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-C0h] BYREF
  std::string v30; // [rsp+50h] [rbp-B0h] BYREF
  char v31[144]; // [rsp+70h] [rbp-90h] BYREF

  *(&v22._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  *(_DWORD *)v22._anon_0._M_local_buf = card_id;
  v22._anon_0._M_local_buf[4] = is_give_up;
  BYTE4(v22._M_string_length) = is_trigger_curse;
  v4 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 1 11 holder:2974 64 16 12 log_ptr:2975";
  *(_QWORD *)(v4 + 16) = RoguelikeMiscMgr::logRogueSelectCard;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->activity_);
  runtime_mgr = RoguelikeDungeonActivity::getRogueDungeonRuntimeMgr(this->activity_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v30, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0xDD1u, v22);
  std::string::~string(&v30);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyRogueSelectCard>();
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSelectCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSelectCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  StageId = RogueLikeDungeonRuntimeMgr::getStageId(runtime_mgr);
  proto_log::PlayerLogBodyRogueSelectCard::set_stage_id(v8, StageId);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->activity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->activity_);
  activity = thisa->activity_;
  v11 = RogueLikeDungeonRuntimeMgr::getStageId(runtime_mgr);
  stage_ptr = RoguelikeDungeonActivity::findStage(activity, v11);
  if ( stage_ptr )
  {
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSelectCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSelectCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    proto_log::PlayerLogBodyRogueSelectCard::set_rogue_transaction(v12, &stage_ptr->transaction);
  }
  v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSelectCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSelectCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  CurLevel = RogueLikeDungeonRuntimeMgr::getCurLevel(runtime_mgr);
  proto_log::PlayerLogBodyRogueSelectCard::set_level(v13, CurLevel);
  v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSelectCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSelectCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->card_cell_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->card_cell_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&thisa->card_cell_id_);
  }
  proto_log::PlayerLogBodyRogueSelectCard::set_cell_id(v15, thisa->card_cell_id_);
  v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSelectCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSelectCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->is_optional_card_can_refresh_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)thisa - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&thisa->is_optional_card_can_refresh_ >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load1(&thisa->is_optional_card_can_refresh_);
  }
  proto_log::PlayerLogBodyRogueSelectCard::set_is_refresh(v16, thisa->is_optional_card_can_refresh_);
  v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSelectCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSelectCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  proto_log::PlayerLogBodyRogueSelectCard::set_is_give_up(v17, card_ida[4]);
  v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSelectCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSelectCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  proto_log::PlayerLogBodyRogueSelectCard::set_card_id(v18, *(google::protobuf::uint32 *)card_ida);
  v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSelectCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSelectCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->refresh_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->refresh_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&thisa->refresh_count_);
  }
  proto_log::PlayerLogBodyRogueSelectCard::set_refresh_count(v19, thisa->refresh_count_);
  v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSelectCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueSelectCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  proto_log::PlayerLogBodyRogueSelectCard::set_is_trigger_curse(v20, is_trigger_cursea);
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
    __asan_report_load8(thisa);
  player = thisa->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyRogueSelectCard,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyRogueSelectCard> *)(v4 + 64));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyRogueSelectCard>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyRogueSelectCard> *const)(v4 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
  if ( v31 == (char *)v4 )
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

// Line 2995: range 000000001596CACE-000000001596CE91
void __cdecl RoguelikeMiscMgr::logRogueTriggerCurse(RoguelikeMiscMgr *const this, uint32_t curse_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueTriggerCurse,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  uint32_t StageId; // eax
  RoguelikeDungeonActivity *activity; // r14
  uint32_t v9; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueTriggerCurse,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueTriggerCurse,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  uint32_t CurLevel; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueTriggerCurse,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  Player *player; // r14
  std::string v15; // [rsp+0h] [rbp-F0h]
  uint32_t curse_ida; // [rsp+4h] [rbp-ECh]
  RoguelikeMiscMgr *thisa; // [rsp+8h] [rbp-E8h]
  RogueLikeDungeonRuntimeMgr *runtime_mgr; // [rsp+10h] [rbp-E0h]
  RogueStageData *stage_ptr; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-C0h] BYREF
  std::string v22; // [rsp+40h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+60h] [rbp-90h] BYREF

  v15._M_string_length = (std::string::size_type)this;
  HIDWORD(v15._M_dataplus._M_p) = curse_id;
  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 11 holder:2997 64 16 12 log_ptr:2998";
  *(_QWORD *)(v2 + 16) = RoguelikeMiscMgr::logRogueTriggerCurse;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->activity_);
  v15._anon_0._M_allocated_capacity = (std::string::size_type)RoguelikeDungeonActivity::getRogueDungeonRuntimeMgr(this->activity_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v22, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xDD2u, v15);
  std::string::~string(&v22);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyRogueTriggerCurse>();
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueTriggerCurse,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueTriggerCurse,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  StageId = RogueLikeDungeonRuntimeMgr::getStageId(runtime_mgr);
  proto_log::PlayerLogBodyRogueTriggerCurse::set_stage_id(v6, StageId);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->activity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->activity_);
  activity = thisa->activity_;
  v9 = RogueLikeDungeonRuntimeMgr::getStageId(runtime_mgr);
  stage_ptr = RoguelikeDungeonActivity::findStage(activity, v9);
  if ( stage_ptr )
  {
    v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueTriggerCurse,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueTriggerCurse,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto_log::PlayerLogBodyRogueTriggerCurse::set_rogue_transaction(v10, &stage_ptr->transaction);
  }
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueTriggerCurse,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueTriggerCurse,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  CurLevel = RogueLikeDungeonRuntimeMgr::getCurLevel(runtime_mgr);
  proto_log::PlayerLogBodyRogueTriggerCurse::set_level(v11, CurLevel);
  v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueTriggerCurse,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueTriggerCurse,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  proto_log::PlayerLogBodyRogueTriggerCurse::set_curse_id(v13, curse_ida);
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
    __asan_report_load8(thisa);
  player = thisa->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyRogueTriggerCurse,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyRogueTriggerCurse> *)(v2 + 64));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyRogueTriggerCurse>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyRogueTriggerCurse> *const)(v2 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  if ( v23 == (char *)v2 )
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

// Line 3013: range 000000001596CE92-000000001596D27A
void __cdecl RoguelikeMiscMgr::logRogueTriggerRune(RoguelikeMiscMgr *const this, uint32_t rune_id, int32_t delta_count)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueTriggerRune,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  uint32_t StageId; // eax
  RoguelikeDungeonActivity *activity; // r14
  uint32_t v10; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueTriggerRune,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueTriggerRune,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  uint32_t CurLevel; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueTriggerRune,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRogueTriggerRune,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  Player *player; // r14
  std::string delta_counta; // [rsp+0h] [rbp-F0h]
  __int64 delta_countb; // [rsp+0h] [rbp-F0h]
  RoguelikeMiscMgr *thisa; // [rsp+8h] [rbp-E8h]
  RogueLikeDungeonRuntimeMgr *runtime_mgr; // [rsp+10h] [rbp-E0h]
  RogueStageData *stage_ptr; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-C0h] BYREF
  std::string v24; // [rsp+40h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+60h] [rbp-90h] BYREF

  delta_counta._M_string_length = (std::string::size_type)this;
  HIDWORD(delta_counta._M_dataplus._M_p) = rune_id;
  LODWORD(delta_counta._M_dataplus._M_p) = delta_count;
  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 11 holder:3015 64 16 12 log_ptr:3016";
  *(_QWORD *)(v3 + 16) = RoguelikeMiscMgr::logRogueTriggerRune;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->activity_);
  delta_counta._anon_0._M_allocated_capacity = (std::string::size_type)RoguelikeDungeonActivity::getRogueDungeonRuntimeMgr(this->activity_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v24, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xDD3u, delta_counta);
  std::string::~string(&v24);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyRogueTriggerRune>();
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueTriggerRune,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueTriggerRune,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  StageId = RogueLikeDungeonRuntimeMgr::getStageId(runtime_mgr);
  proto_log::PlayerLogBodyRogueTriggerRune::set_stage_id(v7, StageId);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->activity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->activity_);
  activity = thisa->activity_;
  v10 = RogueLikeDungeonRuntimeMgr::getStageId(runtime_mgr);
  stage_ptr = RoguelikeDungeonActivity::findStage(activity, v10);
  if ( stage_ptr )
  {
    v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueTriggerRune,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueTriggerRune,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    proto_log::PlayerLogBodyRogueTriggerRune::set_rogue_transaction(v11, &stage_ptr->transaction);
  }
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueTriggerRune,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueTriggerRune,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  CurLevel = RogueLikeDungeonRuntimeMgr::getCurLevel(runtime_mgr);
  proto_log::PlayerLogBodyRogueTriggerRune::set_level(v12, CurLevel);
  v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueTriggerRune,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueTriggerRune,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  proto_log::PlayerLogBodyRogueTriggerRune::set_rune_id(v14, HIDWORD(delta_countb));
  v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyRogueTriggerRune,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRogueTriggerRune,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  proto_log::PlayerLogBodyRogueTriggerRune::set_delta_count(v15, delta_countb);
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
    __asan_report_load8(thisa);
  player = thisa->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyRogueTriggerRune,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyRogueTriggerRune> *)(v3 + 64));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyRogueTriggerRune>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyRogueTriggerRune> *const)(v3 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
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
};

// Line 3032: range 000000001596D27C-000000001596D4EE
void __cdecl RoguelikeMiscMgr::fillStageSettleLog(
        RoguelikeMiscMgr *const this,
        proto_log::PlayerLogBodyRogueSettle *stat_log)
{
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-60h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+18h] [rbp-58h] BYREF
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-50h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+28h] [rbp-48h]
  const std::pair<unsigned int const,unsigned int> *v6; // [rsp+30h] [rbp-40h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *id_0; // [rsp+38h] [rbp-38h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *cnt_0; // [rsp+40h] [rbp-30h]
  proto_log::RogueEffectInfo *info_0; // [rsp+48h] [rbp-28h]
  const std::pair<unsigned int const,unsigned int> *v10; // [rsp+50h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *id; // [rsp+58h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *cnt; // [rsp+60h] [rbp-10h]
  proto_log::RogueEffectInfo *info; // [rsp+68h] [rbp-8h]

  __for_range = &this->select_card_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->select_card_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->select_card_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,unsigned int>(v10);
    cnt = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v10);
    info = proto_log::PlayerLogBodyRogueSettle::add_select_card_list(stat_log);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    proto_log::RogueEffectInfo::set_id(info, *id);
    if ( *(_BYTE *)(((unsigned __int64)cnt >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)cnt & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cnt >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(cnt);
    }
    proto_log::RogueEffectInfo::set_count(info, *cnt);
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->trigger_curse_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->trigger_curse_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    id_0 = std::get<0ul,unsigned int const,unsigned int>(v6);
    cnt_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v6);
    info_0 = proto_log::PlayerLogBodyRogueSettle::add_trigger_curse_list(stat_log);
    if ( *(_BYTE *)(((unsigned __int64)id_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id_0);
    }
    proto_log::RogueEffectInfo::set_id(info_0, *id_0);
    if ( *(_BYTE *)(((unsigned __int64)cnt_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)cnt_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cnt_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(cnt_0);
    }
    proto_log::RogueEffectInfo::set_count(info_0, *cnt_0);
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
};

// Line 3048: range 000000001596D4F0-000000001596D509
int32_t __cdecl RoguelikeMiscMgr::initRoguelikeDungeonMiscDataByGm(RoguelikeMiscMgr *const this)
{
  return RoguelikeMiscMgr::initRoguelikeDungeonMiscData(this);
};

// Line 3053: range 000000001596D50A-000000001596D533
int32_t __cdecl RoguelikeMiscMgr::recoverRoguelikeDungeonMiscDataByGm(RoguelikeMiscMgr *const this)
{
  uint32_t CurDungeonLevel; // edx

  CurDungeonLevel = RoguelikeMiscMgr::getCurDungeonLevel(this);
  return RoguelikeMiscMgr::recoverRoguelikeDungeonMiscData(this, (const char *)CurDungeonLevel);
};

// Line 3058: range 000000001596D534-000000001596D54E
void __cdecl RoguelikeMiscMgr::saveRoguelikeDungeonMiscDataByGm(RoguelikeMiscMgr *const this)
{
  RoguelikeMiscMgr::saveRoguelikeDungeonMiscData(this);
};

// Line 3063: range 000000001596D550-000000001596D56A
void __cdecl RoguelikeMiscMgr::clearRoguelikeDungeonMiscDataByGm(RoguelikeMiscMgr *const this)
{
  RoguelikeMiscMgr::clearRoguelikeDungeonMiscData(this);
};

// Line 3068: range 000000001596D56C-000000001596D586
void __cdecl RoguelikeMiscMgr::initRoguelikeDungeonCombatByGm(RoguelikeMiscMgr *const this)
{
  RoguelikeMiscMgr::onPlayerEnterRoguelikeDungeon(this);
};

// Line 3073: range 000000001596D588-000000001596D5A9
int32_t __cdecl RoguelikeMiscMgr::triggerRoguelikeCurseByGm(RoguelikeMiscMgr *const this, uint32_t curse_id)
{
  return RoguelikeMiscMgr::internalTriggerCurse(this, curse_id);
};

// Line 3078: range 000000001596D5AA-000000001596DAFB
int32_t __cdecl RoguelikeMiscMgr::doRoguelikeDungeonCardByGm(RoguelikeMiscMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::tuple_element<0,const std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> > >::type *v4; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v5; // rax
  _DWORD *v6; // rdx
  char v7; // cl
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  common::milog::MiLogStream *v10; // rax
  google::protobuf::RepeatedField<unsigned int> *v11; // rax
  int32_t result; // eax
  std::unordered_set<unsigned int>::key_type __x; // [rsp+1Ch] [rbp-1B4h] BYREF
  std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::const_iterator __for_begin; // [rsp+20h] [rbp-1B0h] BYREF
  std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::const_iterator __for_end; // [rsp+28h] [rbp-1A8h] BYREF
  const std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>> *__for_range; // [rsp+30h] [rbp-1A0h]
  const std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> > *v17; // [rsp+38h] [rbp-198h]
  std::tuple_element<0,const std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> > >::type *depot_id; // [rsp+40h] [rbp-190h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> > >::type *card_map; // [rsp+48h] [rbp-188h]
  std::shared_ptr<Config> v20; // [rsp+50h] [rbp-180h] BYREF
  common::milog::MiLogStream v21; // [rsp+60h] [rbp-170h] BYREF
  char v22[336]; // [rsp+80h] [rbp-150h] BYREF

  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(288LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 4 13 depot_id:3085 64 24 13 card_vec:3091 128 48 14 depot_map:3080 208 48 11 notify:3100";
  *(_QWORD *)(v1 + 16) = RoguelikeMiscMgr::doRoguelikeDungeonCardByGm;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -234881024;
  v3[536862723] = -218959118;
  v3[536862725] = -219021312;
  v3[536862726] = 62194;
  v3[536862728] = -202116109;
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v1 + 128));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.activity_rogue_config_mgr.basic_card_depot_map;
  std::shared_ptr<Config>::~shared_ptr(&v20);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v17 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>,false,false>::operator*(&__for_begin);
    depot_id = std::get<0ul,unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>(v17);
    card_map = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> > >::type *)std::get<1ul,unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>(v17);
    v4 = depot_id;
    v5 = std::map<unsigned int,unsigned int>::operator[](
           (std::map<unsigned int,unsigned int> *const)(v1 + 128),
           depot_id);
    v6 = v5;
    v7 = *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000);
    if ( v7 != 0 && (char)(((unsigned __int8)v5 & 7) + 3) >= v7 )
    {
      LOBYTE(v4) = v7 != 0;
      __asan_report_store4(v5, v4, v5);
    }
    *v6 = 1;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>,false,false>::operator++(&__for_begin);
  }
  *(_DWORD *)(v1 + 48) = 0;
  if ( common::tools::RandomUtils::weightSelectOne<unsigned int,unsigned int>(
         (const std::map<unsigned int,unsigned int> *)(v1 + 128),
         (unsigned int *)(v1 + 48),
         0) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "doRoguelikeDungeonCardByGm",
      3088);
    v8 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v21,
           (const char (*)[46])"[ROGUELIKE] weightSelectOne failed, depot_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v1 + 48));
    common::milog::MiLogStream::~MiLogStream(&v21);
    v9 = -1;
  }
  else
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 64));
    if ( (unsigned int)RoguelikeMiscMgr::doRoguelikeGacha(
                         this,
                         *(_DWORD *)(v1 + 48),
                         (std::vector<unsigned int> *)(v1 + 64),
                         0,
                         1) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "doRoguelikeDungeonCardByGm",
        3095);
      v10 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              &v21,
              (const char (*)[47])"[ROGUELIKE] doRoguelikeGacha failed, depot_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::~MiLogStream(&v21);
      v9 = -1;
    }
    else
    {
      __x = 0;
      std::unordered_set<unsigned int>::erase(&this->gacha_cell_set_, &__x);
      proto::RoguelikeCardGachaNotify::RoguelikeCardGachaNotify((proto::RoguelikeCardGachaNotify *const)(v1 + 208));
      v11 = proto::RoguelikeCardGachaNotify::mutable_card_list((proto::RoguelikeCardGachaNotify *const)(v1 + 208));
      common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
        (const std::vector<unsigned int> *)(v1 + 64),
        v11);
      proto::RoguelikeCardGachaNotify::set_is_can_refresh((proto::RoguelikeCardGachaNotify *const)(v1 + 208), 1);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 208));
      v9 = 0;
      proto::RoguelikeCardGachaNotify::~RoguelikeCardGachaNotify((proto::RoguelikeCardGachaNotify *const)(v1 + 208));
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 64));
  }
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v1 + 128));
  result = v9;
  if ( v22 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 3108: range 000000001596DAFC-000000001596DDA0
int32_t __cdecl RoguelikeMiscMgr::refreshRoguelikeDungeonCardByGm(RoguelikeMiscMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  google::protobuf::RepeatedField<unsigned int> *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-110h] BYREF
  char v8[240]; // [rsp+30h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 24 13 card_vec:3109 112 48 11 notify:3115";
  *(_QWORD *)(v1 + 16) = RoguelikeMiscMgr::refreshRoguelikeDungeonCardByGm;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = -218959360;
  v3[536862723] = 62194;
  v3[536862725] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 48));
  if ( RoguelikeMiscMgr::refreshRoguelikeCard(this, (std::vector<unsigned int> *)(v1 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "refreshRoguelikeDungeonCardByGm",
      3112);
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      &v7,
      (const char (*)[40])"[ROGUELIKE] refreshRoguelikeCard failed");
    common::milog::MiLogStream::~MiLogStream(&v7);
    v4 = -1;
  }
  else
  {
    proto::RoguelikeCardGachaNotify::RoguelikeCardGachaNotify((proto::RoguelikeCardGachaNotify *const)(v1 + 112));
    v5 = proto::RoguelikeCardGachaNotify::mutable_card_list((proto::RoguelikeCardGachaNotify *const)(v1 + 112));
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
      (const std::vector<unsigned int> *)(v1 + 48),
      v5);
    proto::RoguelikeCardGachaNotify::set_is_can_refresh((proto::RoguelikeCardGachaNotify *const)(v1 + 112), 1);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 112));
    v4 = 0;
    proto::RoguelikeCardGachaNotify::~RoguelikeCardGachaNotify((proto::RoguelikeCardGachaNotify *const)(v1 + 112));
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 48));
  result = v4;
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3123: range 000000001596DDA2-000000001596DF1C
__int64 __fastcall RoguelikeMiscMgr::clearCurseByGm(RoguelikeMiscMgr *const this, uint32_t curse_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-80h] BYREF
  char v8[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 curse_id:3122";
  *(_QWORD *)(v2 + 16) = RoguelikeMiscMgr::clearCurseByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = curse_id;
  if ( (unsigned int)RoguelikeMiscMgr::clearCurse(this, *(_DWORD *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "clearCurseByGm",
      3126);
    v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v7,
           (const char (*)[42])"[ROGUELIKE] clear curse failed, curse_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v7);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    RoguelikeMiscMgr::notifyRoguelikeEffectData(this);
    result = 0LL;
  }
  if ( v8 == (char *)v2 )
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

// Line 3134: range 000000001596DF1E-000000001596DF44
void __cdecl RoguelikeMiscMgr::clearAllCurseByGm(RoguelikeMiscMgr *const this)
{
  RoguelikeMiscMgr::clearAllCurse(this);
  RoguelikeMiscMgr::notifyRoguelikeEffectData(this);
};

// Line 3140: range 000000001596DF46-000000001596E21F
__int64 __fastcall RoguelikeMiscMgr::doDirectDepotRoguelikeDungeonCardByGm(
        RoguelikeMiscMgr *const this,
        uint32_t depot_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  google::protobuf::RepeatedField<unsigned int> *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-110h] BYREF
  char v10[240]; // [rsp+30h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 13 depot_id:3139 48 24 13 card_vec:3141 112 48 11 notify:3148";
  *(_QWORD *)(v2 + 16) = RoguelikeMiscMgr::doDirectDepotRoguelikeDungeonCardByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = -218959360;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 32) = depot_id;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 48));
  if ( (unsigned int)RoguelikeMiscMgr::doRoguelikeGacha(
                       this,
                       *(_DWORD *)(v2 + 32),
                       (std::vector<unsigned int> *)(v2 + 48),
                       0,
                       1) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "doDirectDepotRoguelikeDungeonCardByGm",
      3145);
    v5 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v9,
           (const char (*)[47])"[ROGUELIKE] doRoguelikeGacha failed, depot_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    v6 = -1;
  }
  else
  {
    proto::RoguelikeCardGachaNotify::RoguelikeCardGachaNotify((proto::RoguelikeCardGachaNotify *const)(v2 + 112));
    v7 = proto::RoguelikeCardGachaNotify::mutable_card_list((proto::RoguelikeCardGachaNotify *const)(v2 + 112));
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
      (const std::vector<unsigned int> *)(v2 + 48),
      v7);
    proto::RoguelikeCardGachaNotify::set_is_can_refresh((proto::RoguelikeCardGachaNotify *const)(v2 + 112), 1);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 112));
    v6 = 0;
    proto::RoguelikeCardGachaNotify::~RoguelikeCardGachaNotify((proto::RoguelikeCardGachaNotify *const)(v2 + 112));
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 48));
  result = v6;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
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

// Line 3156: range 000000001596E220-000000001596E58C
void __cdecl RoguelikeMiscMgr::addRuneLeftCountToMaxCountByGm(RoguelikeMiscMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::tuple_element<0,std::tuple<unsigned int> >::type *v4; // rax
  __int64 v5; // rsi
  std::tuple_element<0,std::tuple<unsigned int> >::type v6; // ecx
  char v7; // dl
  __int64 v8; // rdx
  google::protobuf::RepeatedPtrField<proto::RoguelikeRuneRecord> *v9; // rdx
  std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::iterator __for_begin; // [rsp+18h] [rbp-D8h] BYREF
  std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::iterator __for_end; // [rsp+20h] [rbp-D0h] BYREF
  std::vector<std::tuple<unsigned int,unsigned int,unsigned int>> *__for_range; // [rsp+28h] [rbp-C8h]
  std::tuple<unsigned int,unsigned int,unsigned int> *__t; // [rsp+30h] [rbp-C0h]
  std::tuple_element<0,std::tuple<unsigned int,unsigned int,unsigned int> >::type *id; // [rsp+38h] [rbp-B8h]
  std::tuple_element<0,std::tuple<unsigned int,unsigned int> >::type *left_count; // [rsp+40h] [rbp-B0h]
  std::tuple_element<0,std::tuple<unsigned int> >::type *max_count; // [rsp+48h] [rbp-A8h]
  char v17[160]; // [rsp+50h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 48 11 notify:3164";
  *(_QWORD *)(v1 + 16) = RoguelikeMiscMgr::addRuneLeftCountToMaxCountByGm;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  __for_range = &this->chosen_rune_tuple_vec_;
  __for_begin._M_current = std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::begin(&this->chosen_rune_tuple_vec_)._M_current;
  __for_end._M_current = std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>::end(&this->chosen_rune_tuple_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::tuple<unsigned int,unsigned int,unsigned int> *,std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>>(
            &__for_begin,
            &__for_end) )
  {
    __t = __gnu_cxx::__normal_iterator<std::tuple<unsigned int,unsigned int,unsigned int> *,std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int,unsigned int,unsigned int>(__t);
    left_count = std::get<1ul,unsigned int,unsigned int,unsigned int>(__t);
    v4 = std::get<2ul,unsigned int,unsigned int,unsigned int>(__t);
    max_count = v4;
    v5 = ((unsigned __int8)v4 & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    v6 = *max_count;
    v7 = *(_BYTE *)(((unsigned __int64)left_count >> 3) + 0x7FFF8000);
    LOBYTE(v5) = v7 != 0;
    v8 = (v7 != 0) & (unsigned __int8)((char)(((unsigned __int8)left_count & 7) + 3) >= v7);
    if ( (_BYTE)v8 )
      __asan_report_store4(left_count, v5, v8);
    *left_count = v6;
    __gnu_cxx::__normal_iterator<std::tuple<unsigned int,unsigned int,unsigned int> *,std::vector<std::tuple<unsigned int,unsigned int,unsigned int>>>::operator++(&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_init_);
  if ( this->is_init_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_roguelike_dungeon_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_in_roguelike_dungeon_);
    }
    if ( this->is_in_roguelike_dungeon_ )
    {
      proto::RoguelikeRuneRecordUpdateNotify::RoguelikeRuneRecordUpdateNotify((proto::RoguelikeRuneRecordUpdateNotify *const)(v1 + 48));
      v9 = proto::RoguelikeRuneRecordUpdateNotify::mutable_rune_record_list((proto::RoguelikeRuneRecordUpdateNotify *const)(v1 + 48));
      RoguelikeMiscMgr::roguelikeRuneRecordToClient(this, v9);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 48));
      proto::RoguelikeRuneRecordUpdateNotify::~RoguelikeRuneRecordUpdateNotify((proto::RoguelikeRuneRecordUpdateNotify *const)(v1 + 48));
    }
  }
  if ( v17 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 3172: range 000000001596E58E-000000001596EACC
__int64 __fastcall RoguelikeMiscMgr::getDungeonCurRefreshCost(
        RoguelikeMiscMgr *const this,
        uint32_t dungeon_id,
        std::pair<unsigned int,unsigned int> *cost_pair)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  const std::pair<unsigned int,unsigned int> *v9; // rax
  float v10; // xmm0_4
  float v11; // xmm0_4
  unsigned int v12; // edi
  __int64 v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  ActivityRogueExcelConfigMgr *rogue_config_mgr; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v24; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-A0h] BYREF
  char v26[128]; // [rsp+60h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 sub_prob:3186 64 4 15 dungeon_id:3171";
  *(_QWORD *)(v3 + 16) = RoguelikeMiscMgr::getDungeonCurRefreshCost;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = dungeon_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v24);
  rogue_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24)->design_config.txt_config_mgr.activity_rogue_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v24);
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> const,unsigned int>(
          &rogue_config_mgr->dungeon_refresh_cost_map,
          (const unsigned int *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "getDungeonCurRefreshCost",
      3176);
    v6 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v25,
           (const char (*)[55])"[ROGUELIKE] find refresh card cost failed, dungeon_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v25);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->refresh_card_cost_sub_prob_weight_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->refresh_card_cost_sub_prob_weight_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->refresh_card_cost_sub_prob_weight_);
    }
    if ( this->refresh_card_cost_sub_prob_weight_ <= 0x63 )
    {
      v9 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::at(
             &rogue_config_mgr->dungeon_refresh_cost_map,
             (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v3 + 64));
      std::pair<unsigned int,unsigned int>::operator=(cost_pair, v9);
      if ( *(_BYTE *)(((unsigned __int64)&this->refresh_card_cost_sub_prob_weight_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->refresh_card_cost_sub_prob_weight_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->refresh_card_cost_sub_prob_weight_);
      }
      *(float *)(v3 + 48) = (float)(int)this->refresh_card_cost_sub_prob_weight_ / 100.0;
      v10 = 1.0 - *(float *)(v3 + 48);
      if ( *(_BYTE *)(((unsigned __int64)&cost_pair->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cost_pair + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cost_pair->second >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_load4(&cost_pair->second);
      }
      v11 = SAFE_MULTIPLY<unsigned int,float>(cost_pair->second, v10);
      v12 = (int)std::ceil(v11);
      v13 = (*(_BYTE *)(((unsigned __int64)&cost_pair->second >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)cost_pair + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cost_pair->second >> 3) + 0x7FFF8000));
      if ( (_BYTE)v13 )
      {
        v12 = (_DWORD)cost_pair + 4;
        __asan_report_store4(&cost_pair->second, (((_BYTE)cost_pair + 4) & 7u) + 3, v13);
      }
      cost_pair->second = v12;
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "getDungeonCurRefreshCost",
        3189);
      v14 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v25,
              (const char (*)[39])"[ROGUELIKE] current refresh card cost:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)cost_pair);
      v16 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v15, (const char (*)[3])", ");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &cost_pair->second);
      v18 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v17, (const char (*)[12])", sub_prob:");
      v19 = common::milog::MiLogStream::operator<<<float,(float *)0>(v18, (const float *)(v3 + 48));
      v20 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              v19,
              (const char (*)[37])", refresh_card_cost_sub_prob_weight:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v20,
        &this->refresh_card_cost_sub_prob_weight_);
      common::milog::MiLogStream::~MiLogStream(&v25);
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
        "getDungeonCurRefreshCost",
        3181);
      v8 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
             &v25,
             (const char (*)[69])"[ROGUELIKE] refresh_card_cost_sub_prob_weight too large, sub_weight:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v8,
        &this->refresh_card_cost_sub_prob_weight_);
      common::milog::MiLogStream::~MiLogStream(&v25);
      result = 0xFFFFFFFFLL;
    }
  }
  if ( v26 == (char *)v3 )
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

// Line 3195: range 000000001596EACE-000000001596ED66
void __cdecl RoguelikeMiscMgr::notifyRefreshCostUpdate(RoguelikeMiscMgr *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  uint32_t DungeonId; // ecx
  common::milog::MiLogStream *v5; // r14
  unsigned int val; // [rsp+14h] [rbp-BCh] BYREF
  RogueLikeDungeonRuntimeMgr *runtime_mgr; // [rsp+18h] [rbp-B8h]
  char v8[176]; // [rsp+20h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 14 cost_pair:3197 64 32 11 notify:3203";
  *(_QWORD *)(v1 + 16) = RoguelikeMiscMgr::notifyRefreshCostUpdate;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->activity_);
  runtime_mgr = RoguelikeDungeonActivity::getRogueDungeonRuntimeMgr(this->activity_);
  *(_QWORD *)(v1 + 32) = 0LL;
  DungeonId = RogueLikeDungeonRuntimeMgr::getDungeonId(runtime_mgr);
  if ( (unsigned int)RoguelikeMiscMgr::getDungeonCurRefreshCost(
                       this,
                       DungeonId,
                       (std::pair<unsigned int,unsigned int> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/roguelike/roguelike_misc_mgr.cpp",
      "notifyRefreshCostUpdate",
      3200);
    v5 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           (common::milog::MiLogStream *const)(v1 + 64),
           (const char (*)[57])"[ROGUELIKE] getDungeonCurRefreshCost failed, dungeon_id:");
    val = RogueLikeDungeonRuntimeMgr::getDungeonId(runtime_mgr);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
  }
  else
  {
    proto::RoguelikeRefreshCardCostUpdateNotify::RoguelikeRefreshCardCostUpdateNotify((proto::RoguelikeRefreshCardCostUpdateNotify *const)(v1 + 64));
    proto::RoguelikeRefreshCardCostUpdateNotify::set_item_id(
      (proto::RoguelikeRefreshCardCostUpdateNotify *const)(v1 + 64),
      *(_DWORD *)(v1 + 32));
    proto::RoguelikeRefreshCardCostUpdateNotify::set_item_count(
      (proto::RoguelikeRefreshCardCostUpdateNotify *const)(v1 + 64),
      *(_DWORD *)(v1 + 36));
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 64));
    proto::RoguelikeRefreshCardCostUpdateNotify::~RoguelikeRefreshCardCostUpdateNotify((proto::RoguelikeRefreshCardCostUpdateNotify *const)(v1 + 64));
  }
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 3210: range 000000001596ED68-000000001596F90B
std::string *__cdecl RoguelikeMiscMgr::getAndNotifyCardDesc[abi:cxx11](
        std::string *retstr,
        const RoguelikeMiscMgr *const this)
{
  unsigned __int64 v2; // r12
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
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v16; // r14
  const char *v17; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v18; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v19; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v20; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v21; // r14
  const char *v22; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v23; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v24; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v25; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v26; // r14
  const char *v27; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v28; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v29; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v30; // rax
  Player *player; // r14
  std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>>::const_iterator __for_begin_0; // [rsp+10h] [rbp-150h] BYREF
  std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>>::const_iterator __for_end_0; // [rsp+18h] [rbp-148h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-140h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-138h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-130h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range_0; // [rsp+38h] [rbp-128h]
  const std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>> *__for_range_1; // [rsp+40h] [rbp-120h]
  const std::unordered_map<data::RoguelikeCardType,unsigned int> *__for_range_3; // [rsp+48h] [rbp-118h]
  const std::unordered_map<data::RoguelikeCardType,unsigned int> *__for_range_4; // [rsp+50h] [rbp-110h]
  const std::pair<const data::RoguelikeCardType,unsigned int> *v42; // [rsp+58h] [rbp-108h]
  std::tuple_element<0,const std::pair<const data::RoguelikeCardType,unsigned int> >::type *type_1; // [rsp+60h] [rbp-100h]
  std::tuple_element<1,const std::pair<const data::RoguelikeCardType,unsigned int> >::type *weight_1; // [rsp+68h] [rbp-F8h]
  const std::pair<const data::RoguelikeCardType,unsigned int> *v45; // [rsp+70h] [rbp-F0h]
  std::tuple_element<0,const std::pair<const data::RoguelikeCardType,unsigned int> >::type *type_0; // [rsp+78h] [rbp-E8h]
  std::tuple_element<1,const std::pair<const data::RoguelikeCardType,unsigned int> >::type *weight_0; // [rsp+80h] [rbp-E0h]
  const std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,unsigned int> > *v48; // [rsp+88h] [rbp-D8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,unsigned int> > >::type *depot_id; // [rsp+90h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,unsigned int> > >::type *type_weight_map; // [rsp+98h] [rbp-C8h]
  const std::unordered_map<data::RoguelikeCardType,unsigned int> *__for_range_2; // [rsp+A0h] [rbp-C0h]
  const std::pair<const data::RoguelikeCardType,unsigned int> *v52; // [rsp+A8h] [rbp-B8h]
  std::tuple_element<0,const std::pair<const data::RoguelikeCardType,unsigned int> >::type *type; // [rsp+B0h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const data::RoguelikeCardType,unsigned int> >::type *weight; // [rsp+B8h] [rbp-A8h]
  const std::pair<unsigned int const,unsigned int> *pair_0; // [rsp+C0h] [rbp-A0h]
  const std::pair<unsigned int const,unsigned int> *pair; // [rsp+C8h] [rbp-98h]
  std::string server_log; // [rsp+D0h] [rbp-90h] BYREF
  char v58[112]; // [rsp+F0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 8 oss:3211";
  *(_QWORD *)(v2 + 16) = RoguelikeMiscMgr::getAndNotifyCardDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
    &byte_258D66C0);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
    a1_3);
  __for_range = &this->select_card_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->select_card_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->select_card_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    pair = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
           (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
           "[id:");
    if ( *(_BYTE *)(((unsigned __int64)pair >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)pair & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pair >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(pair);
    }
    v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, pair->first);
    v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, ",cnt:");
    if ( *(_BYTE *)(((unsigned __int64)&pair->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)pair + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pair->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&pair->second);
    }
    v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, pair->second);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, "]");
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         off_258D67E0);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_rand_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_rand_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_rand_count_);
  }
  v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, this->cur_rand_count_);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, "\n");
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
    a3_0);
  __for_range_0 = &this->card_count_map_;
  __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::unordered_map<unsigned int,unsigned int>::begin(&this->card_count_map_)._M_cur;
  __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::unordered_map<unsigned int,unsigned int>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_end) )
  {
    pair_0 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&__for_begin);
    v11 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
            "[id:");
    if ( *(_BYTE *)(((unsigned __int64)pair_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)pair_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pair_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(pair_0);
    }
    v12 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v11, pair_0->first);
    v13 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v12, ",cnt:");
    if ( *(_BYTE *)(((unsigned __int64)&pair_0->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)pair_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pair_0->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&pair_0->second);
    }
    v14 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v13, pair_0->second);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v14, "]");
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&__for_begin);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
    off_258D68C0);
  __for_range_1 = &this->depot_card_type_weight_map_;
  __for_begin_0._M_cur = std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>>::begin(&this->depot_card_type_weight_map_)._M_cur;
  __for_end_0._M_cur = std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>>::end(__for_range_1)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,unsigned int>>,false>(
            &__for_begin_0,
            &__for_end_0) )
  {
    v48 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,unsigned int>>,false,false>::operator*(&__for_begin_0);
    depot_id = std::get<0ul,unsigned int const,std::unordered_map<data::RoguelikeCardType,unsigned int>>(v48);
    type_weight_map = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::unordered_map<data::RoguelikeCardType,unsigned int>>(v48);
    v15 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
            "[depot_id:");
    if ( *(_BYTE *)(((unsigned __int64)depot_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)depot_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)depot_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(depot_id);
    }
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v15, *depot_id);
    __for_range_2 = type_weight_map;
    __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::unordered_map<data::RoguelikeCardType,unsigned int>::begin(type_weight_map)._M_cur;
    __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::unordered_map<data::RoguelikeCardType,unsigned int>::end(__for_range_2)._M_cur;
    while ( std::__detail::operator!=<std::pair<data::RoguelikeCardType const,unsigned int>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<const data::RoguelikeCardType,unsigned int>,false> *)&__for_begin,
              (const std::__detail::_Node_iterator_base<std::pair<const data::RoguelikeCardType,unsigned int>,false> *)&__for_end) )
    {
      v52 = std::__detail::_Node_const_iterator<std::pair<data::RoguelikeCardType const,unsigned int>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<const data::RoguelikeCardType,unsigned int>,false,false> *const)&__for_begin);
      type = std::get<0ul,data::RoguelikeCardType const,unsigned int>(v52);
      weight = (std::tuple_element<1,const std::pair<const data::RoguelikeCardType,unsigned int> >::type *)std::get<1ul,data::RoguelikeCardType const,unsigned int>(v52);
      v16 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
              (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
              "(type:");
      if ( *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(type);
      }
      v17 = data::enumValToStr(*type);
      v18 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v16, v17);
      v19 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v18, ",weight:");
      if ( *(_BYTE *)(((unsigned __int64)weight >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)weight & 7) + 3) >= *(_BYTE *)(((unsigned __int64)weight >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(weight);
      }
      v20 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v19, *weight);
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v20, ")");
      std::__detail::_Node_const_iterator<std::pair<data::RoguelikeCardType const,unsigned int>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<const data::RoguelikeCardType,unsigned int>,false,false> *const)&__for_begin);
    }
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
      "]\n");
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,unsigned int>>,false,false>::operator++(&__for_begin_0);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
    off_258D6A60);
  __for_range_3 = &this->card_add_weight_map_;
  __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::unordered_map<data::RoguelikeCardType,unsigned int>::begin(&this->card_add_weight_map_)._M_cur;
  __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::unordered_map<data::RoguelikeCardType,unsigned int>::end(__for_range_3)._M_cur;
  while ( std::__detail::operator!=<std::pair<data::RoguelikeCardType const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const data::RoguelikeCardType,unsigned int>,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<const data::RoguelikeCardType,unsigned int>,false> *)&__for_end) )
  {
    v45 = std::__detail::_Node_const_iterator<std::pair<data::RoguelikeCardType const,unsigned int>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<const data::RoguelikeCardType,unsigned int>,false,false> *const)&__for_begin);
    type_0 = std::get<0ul,data::RoguelikeCardType const,unsigned int>(v45);
    weight_0 = (std::tuple_element<1,const std::pair<const data::RoguelikeCardType,unsigned int> >::type *)std::get<1ul,data::RoguelikeCardType const,unsigned int>(v45);
    v21 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
            "(type:");
    if ( *(_BYTE *)(((unsigned __int64)type_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)type_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)type_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(type_0);
    }
    v22 = data::enumValToStr(*type_0);
    v23 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v21, v22);
    v24 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v23, ",weight:");
    if ( *(_BYTE *)(((unsigned __int64)weight_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)weight_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)weight_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(weight_0);
    }
    v25 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v24, *weight_0);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v25, ")");
    std::__detail::_Node_const_iterator<std::pair<data::RoguelikeCardType const,unsigned int>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<const data::RoguelikeCardType,unsigned int>,false,false> *const)&__for_begin);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
    off_258D6AC0);
  __for_range_4 = &this->refresh_cell_card_add_weight_map_;
  __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::unordered_map<data::RoguelikeCardType,unsigned int>::begin(&this->refresh_cell_card_add_weight_map_)._M_cur;
  __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::unordered_map<data::RoguelikeCardType,unsigned int>::end(__for_range_4)._M_cur;
  while ( std::__detail::operator!=<std::pair<data::RoguelikeCardType const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const data::RoguelikeCardType,unsigned int>,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<const data::RoguelikeCardType,unsigned int>,false> *)&__for_end) )
  {
    v42 = std::__detail::_Node_const_iterator<std::pair<data::RoguelikeCardType const,unsigned int>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<const data::RoguelikeCardType,unsigned int>,false,false> *const)&__for_begin);
    type_1 = std::get<0ul,data::RoguelikeCardType const,unsigned int>(v42);
    weight_1 = (std::tuple_element<1,const std::pair<const data::RoguelikeCardType,unsigned int> >::type *)std::get<1ul,data::RoguelikeCardType const,unsigned int>(v42);
    v26 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
            "(type:");
    if ( *(_BYTE *)(((unsigned __int64)type_1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)type_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)type_1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(type_1);
    }
    v27 = data::enumValToStr(*type_1);
    v28 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v26, v27);
    v29 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v28, ",weight:");
    if ( *(_BYTE *)(((unsigned __int64)weight_1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)weight_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)weight_1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(weight_1);
    }
    v30 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v29, *weight_1);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v30, ")");
    std::__detail::_Node_const_iterator<std::pair<data::RoguelikeCardType const,unsigned int>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<const data::RoguelikeCardType,unsigned int>,false,false> *const)&__for_begin);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
    "}");
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
  if ( v58 == (char *)v2 )
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

// Line 3252: range 000000001596F90C-000000001596FEF7
std::string *__cdecl RoguelikeMiscMgr::getAndNotifyCardDepotDesc[abi:cxx11](
        std::string *retstr,
        const RoguelikeMiscMgr *const this,
        uint32_t depot_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // r14
  const char *v9; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v11; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v12; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v13; // rax
  Player *player; // r14
  std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::const_iterator __for_begin; // [rsp+20h] [rbp-110h] BYREF
  std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::const_iterator __for_end; // [rsp+28h] [rbp-108h] BYREF
  std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::const_iterator __for_begin_0; // [rsp+30h] [rbp-100h] BYREF
  std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::const_iterator __for_end_0; // [rsp+38h] [rbp-F8h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin_1; // [rsp+40h] [rbp-F0h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end_1; // [rsp+48h] [rbp-E8h] BYREF
  const std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>> *__for_range; // [rsp+50h] [rbp-E0h]
  const std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> > *v24; // [rsp+58h] [rbp-D8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> > >::type *id; // [rsp+60h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> > >::type *card_depot_map; // [rsp+68h] [rbp-C8h]
  const std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> *__for_range_0; // [rsp+70h] [rbp-C0h]
  const std::pair<const data::RoguelikeCardType,std::map<unsigned int,unsigned int> > *v28; // [rsp+78h] [rbp-B8h]
  std::tuple_element<0,const std::pair<const data::RoguelikeCardType,std::map<unsigned int,unsigned int> > >::type *type; // [rsp+80h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const data::RoguelikeCardType,std::map<unsigned int,unsigned int> > >::type *weight_map; // [rsp+88h] [rbp-A8h]
  const std::map<unsigned int,unsigned int> *__for_range_1; // [rsp+90h] [rbp-A0h]
  const std::pair<unsigned int const,unsigned int> *pair; // [rsp+98h] [rbp-98h]
  std::string server_log; // [rsp+A0h] [rbp-90h] BYREF
  char v34[112]; // [rsp+C0h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 8 oss:3253";
  *(_QWORD *)(v3 + 16) = RoguelikeMiscMgr::getAndNotifyCardDepotDesc[abi:cxx11];
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 32));
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 32),
         &byte_258D6B80);
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, depot_id);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, &byte_258D6BC0);
  __for_range = &this->card_depot_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::begin(&this->card_depot_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::end(&this->card_depot_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v24 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>,false,false>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>(v24);
    card_depot_map = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> > >::type *)std::get<1ul,unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>(v24);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    if ( depot_id == *id )
    {
      __for_range_0 = card_depot_map;
      __for_begin_0._M_cur = std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::begin(card_depot_map)._M_cur;
      __for_end_0._M_cur = std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::end(__for_range_0)._M_cur;
      while ( std::__detail::operator!=<std::pair<data::RoguelikeCardType const,std::map<unsigned int,unsigned int>>,false>(
                &__for_begin_0,
                &__for_end_0) )
      {
        v28 = std::__detail::_Node_const_iterator<std::pair<data::RoguelikeCardType const,std::map<unsigned int,unsigned int>>,false,false>::operator*(&__for_begin_0);
        type = std::get<0ul,data::RoguelikeCardType const,std::map<unsigned int,unsigned int>>(v28);
        weight_map = (std::tuple_element<1,const std::pair<const data::RoguelikeCardType,std::map<unsigned int,unsigned int> > >::type *)std::get<1ul,data::RoguelikeCardType const,std::map<unsigned int,unsigned int>>(v28);
        v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
               (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 32),
               "(type:");
        if ( *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(type);
        }
        v9 = data::enumValToStr(*type);
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, v9);
        __for_range_1 = weight_map;
        __for_begin_1._M_node = std::map<unsigned int,unsigned int>::begin(weight_map)._M_node;
        __for_end_1._M_node = std::map<unsigned int,unsigned int>::end(__for_range_1)._M_node;
        while ( std::operator!=(&__for_begin_1, &__for_end_1) )
        {
          pair = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_1);
          v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                  (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 32),
                  "[id:");
          if ( *(_BYTE *)(((unsigned __int64)pair >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)pair & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pair >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(pair);
          }
          v11 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, pair->first);
          v12 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v11, ",weight:");
          if ( *(_BYTE *)(((unsigned __int64)&pair->second >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)pair + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pair->second >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&pair->second);
          }
          v13 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v12, pair->second);
          common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v13, "]");
          std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_1);
        }
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
          (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 32),
          ")");
        std::__detail::_Node_const_iterator<std::pair<data::RoguelikeCardType const,std::map<unsigned int,unsigned int>>,false,false>::operator++(&__for_begin_0);
      }
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
        (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 32),
        "\n");
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  player = this->player_;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    &server_log,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 32));
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
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 32));
  if ( v34 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 3279: range 000000001596FEF8-0000000015970765
std::string *__cdecl RoguelikeMiscMgr::getAndNotifyCurseDesc[abi:cxx11](
        std::string *retstr,
        const RoguelikeMiscMgr *const this)
{
  unsigned __int64 v2; // r12
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
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v14; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v15; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v16; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v17; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v18; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v19; // rax
  Player *player; // r14
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator __for_begin_0; // [rsp+10h] [rbp-120h] BYREF
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator __for_end_0; // [rsp+18h] [rbp-118h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-110h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-108h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-100h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range_0; // [rsp+38h] [rbp-F8h]
  const std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>> *__for_range_1; // [rsp+40h] [rbp-F0h]
  const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > *v29; // [rsp+48h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *pool_id; // [rsp+50h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *curse_map; // [rsp+58h] [rbp-D8h]
  const std::map<unsigned int,unsigned int> *__for_range_2; // [rsp+60h] [rbp-D0h]
  const std::pair<unsigned int const,unsigned int> *pair; // [rsp+68h] [rbp-C8h]
  const std::pair<unsigned int const,unsigned int> *v34; // [rsp+70h] [rbp-C0h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *id_0; // [rsp+78h] [rbp-B8h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count_0; // [rsp+80h] [rbp-B0h]
  const std::pair<unsigned int const,unsigned int> *v37; // [rsp+88h] [rbp-A8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *id; // [rsp+90h] [rbp-A0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+98h] [rbp-98h]
  std::string server_log; // [rsp+A0h] [rbp-90h] BYREF
  char v41[112]; // [rsp+C0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 8 oss:3280";
  *(_QWORD *)(v2 + 16) = RoguelikeMiscMgr::getAndNotifyCurseDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
    &byte_258D6C20);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
    a1_4);
  __for_range = &this->trigger_curse_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->trigger_curse_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->trigger_curse_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v37 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,unsigned int>(v37);
    count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v37);
    v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
           (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
           "[id:");
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, *id);
    v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, ",cnt:");
    if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(count);
    }
    v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, *count);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, "]");
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
    off_258D6CA0);
  __for_range_0 = &this->curse_count_map_;
  __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::unordered_map<unsigned int,unsigned int>::begin(&this->curse_count_map_)._M_cur;
  __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::unordered_map<unsigned int,unsigned int>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_end) )
  {
    v34 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&__for_begin);
    id_0 = std::get<0ul,unsigned int const,unsigned int>(v34);
    count_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v34);
    v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
           (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
           "[id:");
    if ( *(_BYTE *)(((unsigned __int64)id_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id_0);
    }
    v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, *id_0);
    v11 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, ",cnt:");
    if ( *(_BYTE *)(((unsigned __int64)count_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)count_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(count_0);
    }
    v12 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v11, *count_0);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v12, "]");
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&__for_begin);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
    off_258D6CE0);
  __for_range_1 = &this->curse_pool_weight_map_;
  __for_begin_0._M_cur = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::begin(&this->curse_pool_weight_map_)._M_cur;
  __for_end_0._M_cur = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::end(__for_range_1)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false>(
            &__for_begin_0,
            &__for_end_0) )
  {
    v29 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false,false>::operator*(&__for_begin_0);
    pool_id = std::get<0ul,unsigned int const,std::map<unsigned int,unsigned int>>(v29);
    curse_map = (std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::map<unsigned int,unsigned int>>(v29);
    v13 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
            "[pool_id:");
    if ( *(_BYTE *)(((unsigned __int64)pool_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)pool_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pool_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(pool_id);
    }
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v13, *pool_id);
    __for_range_2 = curse_map;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(curse_map)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_2)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      pair = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      v14 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
              (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
              "(id:");
      if ( *(_BYTE *)(((unsigned __int64)pair >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)pair & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pair >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(pair);
      }
      v15 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v14, pair->first);
      v16 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v15, ",weight:");
      if ( *(_BYTE *)(((unsigned __int64)&pair->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)pair + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pair->second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&pair->second);
      }
      v17 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v16, pair->second);
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v17, ")");
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
      "]\n");
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false,false>::operator++(&__for_begin_0);
  }
  v18 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
          (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
          off_258D6DA0);
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_curse_sub_weight_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_curse_sub_weight_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->trigger_curse_sub_weight_);
  }
  v19 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v18, this->trigger_curse_sub_weight_);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v19, "\n");
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
  if ( v41 == (char *)v2 )
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

// Line 3310: range 0000000015970766-0000000015970D8E
std::string *__cdecl RoguelikeMiscMgr::getAndNotifyCellEffectDesc[abi:cxx11](
        std::string *retstr,
        const RoguelikeMiscMgr *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // r14
  const char *v6; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v11; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v12; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v13; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v14; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v15; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v16; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v17; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v18; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v19; // rax
  Player *player; // r14
  std::map<data::RogueCreateGadgetType,int>::const_iterator __for_begin; // [rsp+10h] [rbp-C0h] BYREF
  std::map<data::RogueCreateGadgetType,int>::const_iterator __for_end; // [rsp+18h] [rbp-B8h] BYREF
  const std::map<data::RogueCreateGadgetType,int> *__for_range; // [rsp+20h] [rbp-B0h]
  const std::pair<const data::RogueCreateGadgetType,int> *v25; // [rsp+28h] [rbp-A8h]
  std::tuple_element<0,const std::pair<const data::RogueCreateGadgetType,int> >::type *type; // [rsp+30h] [rbp-A0h]
  std::tuple_element<1,const std::pair<const data::RogueCreateGadgetType,int> >::type *delta; // [rsp+38h] [rbp-98h]
  std::string server_log; // [rsp+40h] [rbp-90h] BYREF
  char v29[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 8 oss:3311";
  *(_QWORD *)(v2 + 16) = RoguelikeMiscMgr::getAndNotifyCellEffectDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
    &byte_258D6E20);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
    &byte_258D6E80);
  __for_range = &this->cell_param_.gadget_delta_map;
  __for_begin._M_node = std::map<data::RogueCreateGadgetType,int>::begin(&this->cell_param_.gadget_delta_map)._M_node;
  __for_end._M_node = std::map<data::RogueCreateGadgetType,int>::end(&this->cell_param_.gadget_delta_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v25 = std::_Rb_tree_const_iterator<std::pair<data::RogueCreateGadgetType const,int>>::operator*(&__for_begin);
    type = std::get<0ul,data::RogueCreateGadgetType const,int>(v25);
    delta = (std::tuple_element<1,const std::pair<const data::RogueCreateGadgetType,int> >::type *)std::get<1ul,data::RogueCreateGadgetType const,int>(v25);
    v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
           (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
           "[type:");
    if ( *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(type);
    }
    v6 = data::enumValToStr(*type);
    v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, v6);
    v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, ",delta_cnt:");
    if ( *(_BYTE *)(((unsigned __int64)delta >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)delta & 7) + 3) >= *(_BYTE *)(((unsigned __int64)delta >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(delta);
    }
    v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, *delta);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, "]");
    std::_Rb_tree_const_iterator<std::pair<data::RogueCreateGadgetType const,int>>::operator++(&__for_begin);
  }
  v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
          (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
          asc_258D6F60);
  if ( *(_BYTE *)(((unsigned __int64)&this->cell_param_.expected_max_trap_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cell_param_.expected_max_trap_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cell_param_.expected_max_trap_count);
  }
  v11 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
          v10,
          this->cell_param_.expected_max_trap_count);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v11, "\n");
  v12 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
          (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
          &byte_258D6FA0);
  if ( *(_BYTE *)(((unsigned __int64)&this->cell_param_.expected_min_store_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cell_param_.expected_min_store_count >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cell_param_.expected_min_store_count);
  }
  v13 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
          v12,
          this->cell_param_.expected_min_store_count);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v13, "\n");
  v14 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
          (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
          aBoss_4);
  if ( *(char *)(((unsigned __int64)&this->cell_param_.is_spring_next_to_boss >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->cell_param_.is_spring_next_to_boss);
  v15 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
          v14,
          this->cell_param_.is_spring_next_to_boss);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v15, "\n");
  v16 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
          (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
          &byte_258D7040);
  if ( *(_BYTE *)(((unsigned __int64)&this->cell_param_.is_ban_guardian >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 87) & 7) >= *(_BYTE *)(((unsigned __int64)&this->cell_param_.is_ban_guardian >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->cell_param_.is_ban_guardian);
  }
  v17 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
          v16,
          this->cell_param_.is_ban_guardian);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v17, "\n");
  v18 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
          (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
          &byte_258D7080);
  if ( *(_BYTE *)(((unsigned __int64)&this->cell_param_.is_ban_spring >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 86) & 7) >= *(_BYTE *)(((unsigned __int64)&this->cell_param_.is_ban_spring >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->cell_param_.is_ban_spring);
  }
  v19 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v18, this->cell_param_.is_ban_spring);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v19, "\n");
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
  if ( v29 == (char *)v2 )
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

// Line 3330: range 0000000015970D90-00000000159711E7
std::string *__cdecl RoguelikeMiscMgr::getAndNotifyOtherEffectDesc[abi:cxx11](
        std::string *retstr,
        const RoguelikeMiscMgr *const this)
{
  unsigned __int64 v2; // r12
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
  Player *player; // r14
  std::string server_log; // [rsp+10h] [rbp-90h] BYREF
  char v18[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 8 oss:3331";
  *(_QWORD *)(v2 + 16) = RoguelikeMiscMgr::getAndNotifyOtherEffectDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
    &byte_258D70E0);
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         &byte_258D7140);
  if ( *(_BYTE *)(((unsigned __int64)&this->bonus_resource_prop_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bonus_resource_prop_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->bonus_resource_prop_);
  }
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, this->bonus_resource_prop_);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, "\n");
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         &byte_258D7180);
  if ( *(_BYTE *)(((unsigned __int64)&this->rune_free_prob_weight_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rune_free_prob_weight_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->rune_free_prob_weight_);
  }
  v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, this->rune_free_prob_weight_);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, "\n");
  v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         &byte_258D71E0);
  if ( *(_BYTE *)(((unsigned __int64)&this->free_refresh_card_prob_weight_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->free_refresh_card_prob_weight_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->free_refresh_card_prob_weight_);
  }
  v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
          v9,
          this->free_refresh_card_prob_weight_);
  v11 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, asc_258D7240);
  if ( *(_BYTE *)(((unsigned __int64)&this->use_refresh_free_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->use_refresh_free_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->use_refresh_free_count_);
  }
  v12 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v11, this->use_refresh_free_count_);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v12, "\n");
  v13 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
          (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
          &byte_258D7280);
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_card_cost_sub_prob_weight_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_card_cost_sub_prob_weight_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->refresh_card_cost_sub_prob_weight_);
  }
  v14 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
          v13,
          this->refresh_card_cost_sub_prob_weight_);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v14, "\n");
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
  if ( v18 == (char *)v2 )
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
