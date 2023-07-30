// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/reputation/city_reputation.cpp

// Line 29: range 0000000015CB279E-0000000015CB2A5F
void __cdecl CityReputation::CityReputation(CityReputation *const this, Player *player, uint32_t city_id)
{
  __int64 v3; // rsi
  bool v4; // dl
  __int64 v5; // rsi
  __int64 v6; // rdx
  std::shared_ptr<Player> *p_r; // rsi
  uint32_t Uid; // edx
  char v9; // al
  std::shared_ptr<Player> __r; // [rsp+20h] [rbp-20h] BYREF

  std::enable_shared_from_this<CityReputation>::enable_shared_from_this(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->city_id_, player, (_BYTE)this + 16);
  }
  this->city_id_ = city_id;
  v3 = (((_BYTE)this + 20) & 7u) + 3;
  v4 = *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->level_, v3, v4);
  this->level_ = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->exp_, v3, (_BYTE)this + 24);
  }
  this->exp_ = 0;
  std::set<unsigned int>::set(&this->taken_level_reward_set_);
  std::set<unsigned int>::set(&this->taken_parent_quest_reward_set_);
  std::deque<unsigned int>::deque(&this->history_request_deque_);
  std::map<unsigned int,CityReputation::RequestInfo>::map(&this->request_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_request_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_request_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_refresh_request_time_, v3, (_BYTE)this);
  }
  this->last_refresh_request_time_ = 0;
  v5 = ((_BYTE)this + 4) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_new_request_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_new_request_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_new_request_, v5, v6);
  this->is_new_request_ = 0;
  std::set<unsigned int>::set(&this->taken_explore_reward_set_);
  toThisPtr<Player>((Player *)&__r);
  p_r = &__r;
  std::weak_ptr<Player>::weak_ptr<Player,void>(&this->player_wtr_, &__r);
  std::shared_ptr<Player>::~shared_ptr(&__r);
  Uid = Player::getUid(player);
  v9 = *(_BYTE *)(((unsigned __int64)&this->player_uid_ >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(p_r) = v9 != 0;
    __asan_report_store4(&this->player_uid_, p_r, Uid);
  }
  this->player_uid_ = Uid;
};

// Line 34: range 0000000015CB2A60-0000000015CB3007
int32_t __cdecl CityReputation::fromBin(CityReputation *const this, const proto::CityReputationBin *reputation_bin)
{
  uint32_t city_id; // ebx
  uint32_t v4; // ecx
  char v5; // dl
  bool v6; // dl
  uint32_t v7; // edx
  char v8; // al
  const google::protobuf::RepeatedField<unsigned int> *v9; // rax
  const unsigned int *v10; // r12
  const google::protobuf::RepeatedField<unsigned int> *v11; // rax
  const unsigned int *v12; // rax
  const google::protobuf::RepeatedField<unsigned int> *v13; // rax
  const unsigned int *v14; // r12
  const google::protobuf::RepeatedField<unsigned int> *v15; // rax
  const unsigned int *v16; // rax
  const google::protobuf::RepeatedField<unsigned int> *v17; // rax
  const unsigned int *v18; // r13
  const google::protobuf::RepeatedField<unsigned int> *v19; // rax
  const unsigned int *v20; // r12
  google::protobuf::RepeatedPtrField<proto::CityReputationRequestBin>::const_iterator *p_for_end; // rsi
  uint32_t v22; // ecx
  char v23; // dl
  std::map<unsigned int,CityReputation::RequestInfo>::key_type *p_k; // rsi
  bool v25; // dl
  bool is_taken_reward; // cl
  char v27; // dl
  __int64 v28; // rdx
  uint32_t refresh_request_time; // edx
  char v30; // al
  bool is_new_request; // cl
  char v32; // dl
  __int64 v33; // rdx
  const google::protobuf::RepeatedField<unsigned int> *v34; // rax
  const unsigned int *v35; // r12
  const google::protobuf::RepeatedField<unsigned int> *v36; // rax
  const unsigned int *v37; // rax
  const proto::CityReputationBin *reputation_bina; // [rsp+0h] [rbp-C0h]
  std::map<unsigned int,CityReputation::RequestInfo>::key_type __k; // [rsp+14h] [rbp-ACh] BYREF
  google::protobuf::RepeatedPtrField<proto::CityReputationRequestBin>::const_iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  google::protobuf::RepeatedPtrField<proto::CityReputationRequestBin>::const_iterator __for_end; // [rsp+20h] [rbp-A0h] BYREF
  const google::protobuf::RepeatedPtrField<proto::CityReputationRequestBin> *__for_range; // [rsp+28h] [rbp-98h]
  const proto::CityReputationRequestBin *request_bin; // [rsp+30h] [rbp-90h]
  CityReputation::RequestInfo *request_info; // [rsp+38h] [rbp-88h]
  std::deque<unsigned int>::iterator __x; // [rsp+40h] [rbp-80h] BYREF
  std::_Deque_iterator<unsigned int,unsigned int const&,unsigned int const*> __position; // [rsp+60h] [rbp-60h] BYREF
  common::milog::MiLogStream v47; // [rsp+80h] [rbp-40h] BYREF

  reputation_bina = reputation_bin;
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->city_id_);
  }
  city_id = this->city_id_;
  if ( city_id == proto::CityReputationBin::city_id(reputation_bin) )
  {
    v4 = proto::CityReputationBin::level(reputation_bin);
    v5 = *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000);
    LOBYTE(reputation_bin) = v5 != 0;
    v6 = v5 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v5;
    if ( v6 )
      __asan_report_store4(&this->level_, reputation_bin, v6);
    this->level_ = v4;
    v7 = proto::CityReputationBin::exp(reputation_bina);
    v8 = *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000);
    if ( v8 != 0 && v8 <= 3 )
    {
      LOBYTE(reputation_bin) = v8 != 0;
      __asan_report_store4(&this->exp_, reputation_bin, v7);
    }
    this->exp_ = v7;
    std::set<unsigned int>::clear(&this->taken_level_reward_set_);
    v9 = proto::CityReputationBin::taken_level_reward_list(reputation_bina);
    v10 = google::protobuf::RepeatedField<unsigned int>::cend(v9);
    v11 = proto::CityReputationBin::taken_level_reward_list(reputation_bina);
    v12 = google::protobuf::RepeatedField<unsigned int>::cbegin(v11);
    std::set<unsigned int>::insert<unsigned int const*>(&this->taken_level_reward_set_, v12, v10);
    std::set<unsigned int>::clear(&this->taken_parent_quest_reward_set_);
    v13 = proto::CityReputationBin::taken_parent_quest_reward_list(reputation_bina);
    v14 = google::protobuf::RepeatedField<unsigned int>::cend(v13);
    v15 = proto::CityReputationBin::taken_parent_quest_reward_list(reputation_bina);
    v16 = google::protobuf::RepeatedField<unsigned int>::cbegin(v15);
    std::set<unsigned int>::insert<unsigned int const*>(&this->taken_parent_quest_reward_set_, v16, v14);
    std::deque<unsigned int>::clear(&this->history_request_deque_);
    v17 = proto::CityReputationBin::history_request_list(reputation_bina);
    v18 = google::protobuf::RepeatedField<unsigned int>::cend(v17);
    v19 = proto::CityReputationBin::history_request_list(reputation_bina);
    v20 = google::protobuf::RepeatedField<unsigned int>::cbegin(v19);
    std::deque<unsigned int>::end(&__x, &this->history_request_deque_);
    std::_Deque_iterator<unsigned int,unsigned int const&,unsigned int const*>::_Deque_iterator<std::_Deque_iterator<unsigned int,unsigned int &,unsigned int *>,void>(
      &__position,
      &__x);
    std::deque<unsigned int>::insert<unsigned int const*,void>(
      (std::deque<unsigned int>::iterator *)&v47,
      &this->history_request_deque_,
      __position,
      v20,
      v18);
    std::map<unsigned int,CityReputation::RequestInfo>::clear(&this->request_map_);
    __for_range = proto::CityReputationBin::request_list(reputation_bina);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::CityReputationRequestBin>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::CityReputationRequestBin>::end(__for_range).it_;
    while ( 1 )
    {
      p_for_end = &__for_end;
      if ( !google::protobuf::internal::RepeatedPtrIterator<proto::CityReputationRequestBin const>::operator!=(
              &__for_begin,
              &__for_end) )
        break;
      request_bin = google::protobuf::internal::RepeatedPtrIterator<proto::CityReputationRequestBin const>::operator*(&__for_begin);
      __k = proto::CityReputationRequestBin::request_id(request_bin);
      p_k = &__k;
      request_info = std::map<unsigned int,CityReputation::RequestInfo>::operator[](&this->request_map_, &__k);
      v22 = proto::CityReputationRequestBin::quest_id(request_bin);
      v23 = *(_BYTE *)(((unsigned __int64)request_info >> 3) + 0x7FFF8000);
      LOBYTE(p_k) = v23 != 0;
      v25 = v23 != 0 && (char)(((unsigned __int8)request_info & 7) + 3) >= v23;
      if ( v25 )
        __asan_report_store4(request_info, p_k, v25);
      request_info->quest_id = v22;
      is_taken_reward = proto::CityReputationRequestBin::is_taken_reward(request_bin);
      v27 = *(_BYTE *)(((unsigned __int64)&request_info->is_taken_reward >> 3) + 0x7FFF8000);
      LOBYTE(p_k) = v27 != 0;
      v28 = (v27 != 0) & (unsigned __int8)((((unsigned __int8)request_info + 4) & 7) >= v27);
      if ( (_BYTE)v28 )
        __asan_report_store1(&request_info->is_taken_reward, p_k, v28);
      request_info->is_taken_reward = is_taken_reward;
      google::protobuf::internal::RepeatedPtrIterator<proto::CityReputationRequestBin const>::operator++(&__for_begin);
    }
    refresh_request_time = proto::CityReputationBin::last_refresh_request_time(reputation_bina);
    v30 = *(_BYTE *)(((unsigned __int64)&this->last_refresh_request_time_ >> 3) + 0x7FFF8000);
    if ( v30 != 0 && v30 <= 3 )
    {
      LOBYTE(p_for_end) = v30 != 0;
      __asan_report_store4(&this->last_refresh_request_time_, p_for_end, refresh_request_time);
    }
    this->last_refresh_request_time_ = refresh_request_time;
    is_new_request = proto::CityReputationBin::is_new_request(reputation_bina);
    v32 = *(_BYTE *)(((unsigned __int64)&this->is_new_request_ >> 3) + 0x7FFF8000);
    LOBYTE(p_for_end) = v32 != 0;
    v33 = (v32 != 0) & (unsigned __int8)((((unsigned __int8)this + 4) & 7) >= v32);
    if ( (_BYTE)v33 )
      __asan_report_store1(&this->is_new_request_, p_for_end, v33);
    this->is_new_request_ = is_new_request;
    std::set<unsigned int>::clear(&this->taken_explore_reward_set_);
    v34 = proto::CityReputationBin::taken_explore_reward_list(reputation_bina);
    v35 = google::protobuf::RepeatedField<unsigned int>::cend(v34);
    v36 = proto::CityReputationBin::taken_explore_reward_list(reputation_bina);
    v37 = google::protobuf::RepeatedField<unsigned int>::cbegin(v36);
    std::set<unsigned int>::insert<unsigned int const*>(&this->taken_explore_reward_set_, v37, v35);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/reputation/city_reputation.cpp",
      "fromBin",
      37);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v47, (const char (*)[21])"it should not happen");
    common::milog::MiLogStream::~MiLogStream(&v47);
    return -1;
  }
};

// Line 67: range 0000000015CB3008-0000000015CB36A7
int32_t __cdecl CityReputation::toBin(CityReputation *const this, proto::CityReputationBin *reputation_bin)
{
  unsigned int *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  unsigned int *v4; // rax
  google::protobuf::uint32 *v5; // rdx
  std::_Deque_iterator<unsigned int,unsigned int&,unsigned int*>::reference v6; // rax
  google::protobuf::uint32 *v7; // rdx
  unsigned int *v8; // rax
  google::protobuf::uint32 *v9; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-98h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-90h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-88h]
  std::set<unsigned int> *__for_range_0; // [rsp+40h] [rbp-80h]
  std::deque<unsigned int> *__for_range_1; // [rsp+48h] [rbp-78h]
  std::map<unsigned int,CityReputation::RequestInfo> *__for_range_2; // [rsp+50h] [rbp-70h]
  std::set<unsigned int> *__for_range_3; // [rsp+58h] [rbp-68h]
  const std::pair<unsigned int const,CityReputation::RequestInfo> *v18; // [rsp+60h] [rbp-60h]
  std::tuple_element<0,const std::pair<unsigned int const,CityReputation::RequestInfo> >::type *request_id_0; // [rsp+68h] [rbp-58h]
  std::tuple_element<1,const std::pair<unsigned int const,CityReputation::RequestInfo> >::type *request_info; // [rsp+70h] [rbp-50h]
  proto::CityReputationRequestBin *request_bin; // [rsp+78h] [rbp-48h]
  std::deque<unsigned int>::iterator __for_begin_0; // [rsp+80h] [rbp-40h] BYREF
  std::deque<unsigned int>::iterator __for_end_0; // [rsp+A0h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->city_id_);
  }
  proto::CityReputationBin::set_city_id(reputation_bin, this->city_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  proto::CityReputationBin::set_level(reputation_bin, this->level_);
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->exp_);
  }
  proto::CityReputationBin::set_exp(reputation_bin, this->exp_);
  __for_range = &this->taken_level_reward_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->taken_level_reward_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->taken_level_reward_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::CityReputationBin::add_taken_level_reward_list(reputation_bin, *v3);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  __for_range_0 = &this->taken_parent_quest_reward_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->taken_parent_quest_reward_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v4 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    proto::CityReputationBin::add_taken_parent_quest_reward_list(reputation_bin, *v5);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  __for_range_1 = &this->history_request_deque_;
  std::deque<unsigned int>::begin(&__for_begin_0, &this->history_request_deque_);
  std::deque<unsigned int>::end(&__for_end_0, __for_range_1);
  while ( std::operator!=<unsigned int,unsigned int &,unsigned int *>(&__for_begin_0, &__for_end_0) )
  {
    v6 = std::_Deque_iterator<unsigned int,unsigned int &,unsigned int *>::operator*(&__for_begin_0);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    proto::CityReputationBin::add_history_request_list(reputation_bin, *v7);
    std::_Deque_iterator<unsigned int,unsigned int &,unsigned int *>::operator++(&__for_begin_0);
  }
  __for_range_2 = &this->request_map_;
  __for_begin._M_node = std::map<unsigned int,CityReputation::RequestInfo>::begin(&this->request_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,CityReputation::RequestInfo>::end(__for_range_2)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,CityReputation::RequestInfo> >::_Self *)&__for_begin,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,CityReputation::RequestInfo> >::_Self *)&__for_end) )
  {
    v18 = std::_Rb_tree_iterator<std::pair<unsigned int const,CityReputation::RequestInfo>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,CityReputation::RequestInfo> > *const)&__for_begin);
    request_id_0 = std::get<0ul,unsigned int const,CityReputation::RequestInfo>(v18);
    request_info = (std::tuple_element<1,const std::pair<unsigned int const,CityReputation::RequestInfo> >::type *)std::get<1ul,unsigned int const,CityReputation::RequestInfo>(v18);
    request_bin = proto::CityReputationBin::add_request_list(reputation_bin);
    if ( *(_BYTE *)(((unsigned __int64)request_id_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)request_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)request_id_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(request_id_0);
    }
    proto::CityReputationRequestBin::set_request_id(request_bin, *request_id_0);
    if ( *(_BYTE *)(((unsigned __int64)request_info >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)request_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)request_info >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(request_info);
    }
    proto::CityReputationRequestBin::set_quest_id(request_bin, request_info->quest_id);
    if ( *(_BYTE *)(((unsigned __int64)&request_info->is_taken_reward >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)request_info + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&request_info->is_taken_reward >> 3)
                                                               + 0x7FFF8000) )
    {
      __asan_report_load1(&request_info->is_taken_reward);
    }
    proto::CityReputationRequestBin::set_is_taken_reward(request_bin, request_info->is_taken_reward);
    std::_Rb_tree_iterator<std::pair<unsigned int const,CityReputation::RequestInfo>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,CityReputation::RequestInfo> > *const)&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_request_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_request_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_refresh_request_time_);
  }
  proto::CityReputationBin::set_last_refresh_request_time(reputation_bin, this->last_refresh_request_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_new_request_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_new_request_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_new_request_);
  }
  proto::CityReputationBin::set_is_new_request(reputation_bin, this->is_new_request_);
  __for_range_3 = &this->taken_explore_reward_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->taken_explore_reward_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(__for_range_3)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    proto::CityReputationBin::add_taken_explore_reward_list(reputation_bin, *v9);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  return 0;
};

// Line 103: range 0000000015CB36A8-0000000015CB4238
int32_t __cdecl CityReputation::toClient(CityReputation *const this, proto::CityReputationInfo *reputation_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  unsigned int *v6; // rax
  google::protobuf::uint32 *v7; // rdx
  Player *v8; // rax
  PlayerReputationComp *ReputationComp; // rax
  uint32_t AcceptRequestNum; // edx
  bool isQuestEntranceOpen; // al
  unsigned int *v12; // rax
  google::protobuf::uint32 *v13; // rdx
  ReputationExcelConfigMgr *p_reputation_config_mgr; // rcx
  Player *v15; // rax
  bool isRequestEntranceOpen; // al
  bool isExploreEntranceOpen; // al
  unsigned int *v18; // rax
  google::protobuf::uint32 *v19; // rdx
  uint32_t v20; // eax
  bool isHunterEntranceOpen; // al
  Player *v22; // rax
  PlayerHuntingComp *HuntingComp; // rax
  uint32_t CurWeekFinishNum; // eax
  Player *v25; // rax
  PlayerHuntingComp *v26; // rcx
  bool hasReward; // al
  int32_t result; // eax
  google::protobuf::uint32 next_refresh_time; // [rsp+1Ch] [rbp-154h]
  int32_t ret; // [rsp+20h] [rbp-150h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-140h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-138h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+40h] [rbp-130h]
  proto::CityReputationQuestInfo *quest_info; // [rsp+48h] [rbp-128h]
  std::set<unsigned int> *__for_range_0; // [rsp+50h] [rbp-120h]
  const std::map<unsigned int,data::ReputationQuestExcelConfig> *parent_quest_config_map_ptr; // [rsp+58h] [rbp-118h]
  PlayerQuestComp *quest_comp; // [rsp+60h] [rbp-110h]
  const std::map<unsigned int,data::ReputationQuestExcelConfig> *__for_range_1; // [rsp+68h] [rbp-108h]
  const std::pair<unsigned int const,data::ReputationQuestExcelConfig> *v39; // [rsp+70h] [rbp-100h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ReputationQuestExcelConfig> >::type *parent_quest_id_0; // [rsp+78h] [rbp-F8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ReputationQuestExcelConfig> >::type *_; // [rsp+80h] [rbp-F0h]
  proto::CityReputationRequestInfo *request_info; // [rsp+88h] [rbp-E8h]
  std::map<unsigned int,CityReputation::RequestInfo> *__for_range_2; // [rsp+90h] [rbp-E0h]
  const std::pair<unsigned int const,CityReputation::RequestInfo> *v44; // [rsp+98h] [rbp-D8h]
  std::tuple_element<0,const std::pair<unsigned int const,CityReputation::RequestInfo> >::type *request_id; // [rsp+A0h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,CityReputation::RequestInfo> >::type *info; // [rsp+A8h] [rbp-C8h]
  proto::CityReputationRequestInfo_RequestInfo *request_bin; // [rsp+B0h] [rbp-C0h]
  proto::CityReputationExploreInfo *explore_info; // [rsp+B8h] [rbp-B8h]
  std::set<unsigned int> *__for_range_3; // [rsp+C0h] [rbp-B0h]
  proto::CityReputationHuntInfo *hunt_info; // [rsp+C8h] [rbp-A8h]
  std::shared_ptr<Config> v51; // [rsp+D0h] [rbp-A0h] BYREF
  common::milog::MiLogStream v52; // [rsp+E0h] [rbp-90h] BYREF
  char v53[112]; // [rsp+100h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 player_ptr:109";
  *(_QWORD *)(v2 + 16) = CityReputation::toClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  ret = CityReputation::checkCityReputationOpen(this);
  if ( ret )
  {
    v5 = ret;
  }
  else
  {
    CityReputation::getPlayer((const CityReputation *const)(v2 + 32));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v52,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/reputation/city_reputation.cpp",
        "toClient",
        112);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        &v52,
        (const char (*)[25])"getPlayer return nullptr");
      common::milog::MiLogStream::~MiLogStream(&v52);
      v5 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->level_);
      }
      proto::CityReputationInfo::set_level(reputation_info, this->level_);
      if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->exp_);
      }
      proto::CityReputationInfo::set_exp(reputation_info, this->exp_);
      __for_range = &this->taken_level_reward_set_;
      __for_begin._M_node = std::set<unsigned int>::begin(&this->taken_level_reward_set_)._M_node;
      __for_end._M_node = std::set<unsigned int>::end(&this->taken_level_reward_set_)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v6 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
        v7 = v6;
        if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v6);
        }
        proto::CityReputationInfo::add_taken_level_reward_list(reputation_info, *v7);
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
      }
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      ReputationComp = Player::getReputationComp(v8);
      AcceptRequestNum = PlayerReputationComp::getAcceptRequestNum(ReputationComp);
      proto::CityReputationInfo::set_total_accept_request_num(reputation_info, AcceptRequestNum);
      quest_info = proto::CityReputationInfo::mutable_quest_info(reputation_info);
      isQuestEntranceOpen = CityReputation::isQuestEntranceOpen(this);
      proto::CityReputationQuestInfo::set_is_open(quest_info, isQuestEntranceOpen);
      if ( proto::CityReputationQuestInfo::is_open(quest_info) )
      {
        __for_range_0 = &this->taken_parent_quest_reward_set_;
        __for_begin._M_node = std::set<unsigned int>::begin(&this->taken_parent_quest_reward_set_)._M_node;
        __for_end._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v12 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
          v13 = v12;
          if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v12);
          }
          proto::CityReputationQuestInfo::add_taken_parent_quest_reward_list(quest_info, *v13);
          std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
        }
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v51);
        p_reputation_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v51)->design_config.txt_config_mgr.reputation_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->city_id_);
        }
        parent_quest_config_map_ptr = ReputationExcelConfigMgr::findCityParentQuestVec(
                                        p_reputation_config_mgr,
                                        this->city_id_);
        std::shared_ptr<Config>::~shared_ptr(&v51);
        if ( parent_quest_config_map_ptr )
        {
          v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          quest_comp = Player::getQuestComp(v15);
          __for_range_1 = parent_quest_config_map_ptr;
          __for_begin._M_node = std::map<unsigned int,data::ReputationQuestExcelConfig>::begin(parent_quest_config_map_ptr)._M_node;
          __for_end._M_node = std::map<unsigned int,data::ReputationQuestExcelConfig>::end(__for_range_1)._M_node;
          while ( std::operator!=(
                    (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationQuestExcelConfig> >::_Self *)&__for_begin,
                    (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationQuestExcelConfig> >::_Self *)&__for_end) )
          {
            v39 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationQuestExcelConfig>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationQuestExcelConfig> > *const)&__for_begin);
            parent_quest_id_0 = std::get<0ul,unsigned int const,data::ReputationQuestExcelConfig>(v39);
            _ = (std::tuple_element<1,const std::pair<unsigned int const,data::ReputationQuestExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ReputationQuestExcelConfig>(v39);
            if ( *(_BYTE *)(((unsigned __int64)parent_quest_id_0 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)parent_quest_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)parent_quest_id_0 >> 3)
                                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4(parent_quest_id_0);
            }
            if ( PlayerQuestComp::isParentQuestOnceFinished(quest_comp, *parent_quest_id_0) )
            {
              if ( *(_BYTE *)(((unsigned __int64)parent_quest_id_0 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)parent_quest_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)parent_quest_id_0 >> 3)
                                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4(parent_quest_id_0);
              }
              proto::CityReputationQuestInfo::add_finished_parent_quest_list(quest_info, *parent_quest_id_0);
            }
            std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationQuestExcelConfig>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationQuestExcelConfig> > *const)&__for_begin);
          }
        }
      }
      next_refresh_time = 0;
      request_info = proto::CityReputationInfo::mutable_request_info(reputation_info);
      isRequestEntranceOpen = CityReputation::isRequestEntranceOpen(this);
      proto::CityReputationRequestInfo::set_is_open(request_info, isRequestEntranceOpen);
      if ( proto::CityReputationRequestInfo::is_open(request_info) )
      {
        CityReputation::refreshRequest(this);
        __for_range_2 = &this->request_map_;
        __for_begin._M_node = std::map<unsigned int,CityReputation::RequestInfo>::begin(&this->request_map_)._M_node;
        __for_end._M_node = std::map<unsigned int,CityReputation::RequestInfo>::end(__for_range_2)._M_node;
        while ( std::operator!=(
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,CityReputation::RequestInfo> >::_Self *)&__for_begin,
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,CityReputation::RequestInfo> >::_Self *)&__for_end) )
        {
          v44 = std::_Rb_tree_iterator<std::pair<unsigned int const,CityReputation::RequestInfo>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,CityReputation::RequestInfo> > *const)&__for_begin);
          request_id = std::get<0ul,unsigned int const,CityReputation::RequestInfo>(v44);
          info = (std::tuple_element<1,const std::pair<unsigned int const,CityReputation::RequestInfo> >::type *)std::get<1ul,unsigned int const,CityReputation::RequestInfo>(v44);
          request_bin = proto::CityReputationRequestInfo::add_request_info_list(request_info);
          if ( *(_BYTE *)(((unsigned __int64)request_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)request_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)request_id >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(request_id);
          }
          proto::CityReputationRequestInfo_RequestInfo::set_request_id(request_bin, *request_id);
          if ( *(_BYTE *)(((unsigned __int64)info >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)info >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(info);
          }
          proto::CityReputationRequestInfo_RequestInfo::set_quest_id(request_bin, info->quest_id);
          if ( *(_BYTE *)(((unsigned __int64)&info->is_taken_reward >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)info + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&info->is_taken_reward >> 3)
                                                             + 0x7FFF8000) )
          {
            __asan_report_load1(&info->is_taken_reward);
          }
          proto::CityReputationRequestInfo_RequestInfo::set_is_taken_reward(request_bin, info->is_taken_reward);
          std::_Rb_tree_iterator<std::pair<unsigned int const,CityReputation::RequestInfo>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,CityReputation::RequestInfo> > *const)&__for_begin);
        }
        next_refresh_time = CityReputation::getNextRefreshTime(this);
      }
      explore_info = proto::CityReputationInfo::mutable_explore_info(reputation_info);
      isExploreEntranceOpen = CityReputation::isExploreEntranceOpen(this);
      proto::CityReputationExploreInfo::set_is_open(explore_info, isExploreEntranceOpen);
      if ( proto::CityReputationExploreInfo::is_open(explore_info) )
      {
        __for_range_3 = &this->taken_explore_reward_set_;
        __for_begin._M_node = std::set<unsigned int>::begin(&this->taken_explore_reward_set_)._M_node;
        __for_end._M_node = std::set<unsigned int>::end(__for_range_3)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v18 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
          v19 = v18;
          if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v18);
          }
          proto::CityReputationExploreInfo::add_taken_explore_reward_list(explore_info, *v19);
          std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
        }
        v20 = CityReputation::calculateCityExplorePercent(this);
        proto::CityReputationExploreInfo::set_explore_percent(explore_info, v20);
      }
      hunt_info = proto::CityReputationInfo::mutable_hunt_info(reputation_info);
      isHunterEntranceOpen = CityReputation::isHunterEntranceOpen(this);
      proto::CityReputationHuntInfo::set_is_open(hunt_info, isHunterEntranceOpen);
      if ( proto::CityReputationHuntInfo::is_open(hunt_info) )
      {
        v22 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        HuntingComp = Player::getHuntingComp(v22);
        CurWeekFinishNum = PlayerHuntingComp::getCurWeekFinishNum(HuntingComp);
        proto::CityReputationHuntInfo::set_cur_week_finish_num(hunt_info, CurWeekFinishNum);
        v25 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        v26 = Player::getHuntingComp(v25);
        if ( *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->city_id_);
        }
        hasReward = PlayerHuntingComp::hasReward(v26, this->city_id_);
        proto::CityReputationHuntInfo::set_has_reward(hunt_info, hasReward);
        if ( !next_refresh_time )
          next_refresh_time = CityReputation::getNextRefreshTime(this);
      }
      proto::CityReputationInfo::set_next_refresh_time(reputation_info, next_refresh_time);
      v5 = 0;
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  }
  result = v5;
  if ( v53 == (char *)v2 )
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

// Line 194: range 0000000015CB423A-0000000015CB4A13
// local variable allocation has failed, the output may be wrong!
void __fastcall CityReputation::addExp(CityReputation *const this, uint32_t exp, uint32_t reason)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  unsigned int v11; // edx
  __int64 v12; // rsi
  SelectType v13; // edx
  char v14; // al
  Player *v15; // rax
  Player *v16; // rax
  PlayerBasicComp *BasicComp; // rcx
  Player *v18; // rax
  PlayerBasicComp *v19; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  Player *v25; // r14
  std::string reasona; // [rsp+0h] [rbp-110h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v29; // [rsp+40h] [rbp-D0h] BYREF
  char v30[176]; // [rsp+60h] [rbp-B0h] BYREF

  reasona._M_string_length = (std::string::size_type)this;
  reasona._M_dataplus._M_p = (std::string::pointer)__PAIR64__(exp, reason);
  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 1 10 holder:218 48 4 7 exp:193 64 16 14 player_ptr:199 96 16 11 log_ptr:219";
  *(_QWORD *)(v3 + 16) = CityReputation::addExp;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = HIDWORD(reasona._M_dataplus._M_p);
  if ( *(_DWORD *)(v3 + 48) )
  {
    CityReputation::getPlayer((const CityReputation *const)(v3 + 64));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/reputation/city_reputation.cpp",
        "addExp",
        202);
      common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v29, (const char (*)[16])"getPlayer fails");
      common::milog::MiLogStream::~MiLogStream(&v29);
    }
    else
    {
      if ( *(_BYTE *)(((reasona._M_string_length + 24) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((reasona._M_string_length + 24) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(reasona._M_string_length + 24);
      }
      if ( *(_DWORD *)(reasona._M_string_length + 24)
        && *(_DWORD *)(v3 + 48)
        && (unsigned int)(*(_DWORD *)(v3 + 48) + *(_DWORD *)(reasona._M_string_length + 24)) < *(_DWORD *)(reasona._M_string_length + 24) )
      {
        goto LABEL_17;
      }
      if ( *(_BYTE *)(((reasona._M_string_length + 24) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((reasona._M_string_length + 24) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(reasona._M_string_length + 24);
      }
      if ( !*(_DWORD *)(reasona._M_string_length + 24)
        && !*(_DWORD *)(v3 + 48)
        && (unsigned int)(*(_DWORD *)(v3 + 48) + *(_DWORD *)(reasona._M_string_length + 24)) > *(_DWORD *)(reasona._M_string_length + 24) )
      {
LABEL_17:
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/reputation/city_reputation.cpp",
          "addExp",
          207);
        v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v29, (const char (*)[5])"uid:");
        v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        *((_DWORD *)&reasona._anon_0._M_allocated_capacity + 2) = Player::getUid(v7);
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v6,
               (const unsigned int *)&reasona._anon_0._M_allocated_capacity + 2);
        v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v8, (const char (*)[10])" add_exp:");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v10, (const char (*)[10])" overflow");
        common::milog::MiLogStream::~MiLogStream(&v29);
      }
      v11 = *(_DWORD *)(v3 + 48);
      if ( *(_BYTE *)(((reasona._M_string_length + 24) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((reasona._M_string_length + 24) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(reasona._M_string_length + 24);
      }
      v12 = v11;
      v13 = SAFE_ADD<unsigned int,unsigned int>(*(_DWORD *)(reasona._M_string_length + 24), v11);
      v14 = *(_BYTE *)(((reasona._M_string_length + 24) >> 3) + 0x7FFF8000);
      if ( v14 != 0 && v14 <= 3 )
      {
        LOBYTE(v12) = v14 != 0;
        __asan_report_store4(reasona._M_string_length + 24, v12, v13);
      }
      *(_DWORD *)(reasona._M_string_length + 24) = v13;
      if ( *(_BYTE *)(((reasona._M_string_length + 20) >> 3) + 0x7FFF8000) != 0
        && (char)(((LOBYTE(reasona._M_string_length) + 20) & 7) + 3) >= *(_BYTE *)(((reasona._M_string_length + 20) >> 3)
                                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(reasona._M_string_length + 20);
      }
      *((_DWORD *)&reasona._anon_0._M_allocated_capacity + 3) = *(_DWORD *)(reasona._M_string_length + 20);
      v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      CityReputation::tryLevelup((CityReputation *const)reasona._M_string_length, v15);
      if ( *(_BYTE *)(((reasona._M_string_length + 20) >> 3) + 0x7FFF8000) != 0
        && (char)(((LOBYTE(reasona._M_string_length) + 20) & 7) + 3) >= *(_BYTE *)(((reasona._M_string_length + 20) >> 3)
                                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(reasona._M_string_length + 20);
      }
      if ( *((_DWORD *)&reasona._anon_0._M_allocated_capacity + 3) < *(_DWORD *)(reasona._M_string_length + 20) )
      {
        v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        BasicComp = Player::getBasicComp(v16);
        if ( *(_BYTE *)(((reasona._M_string_length + 16) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((reasona._M_string_length + 16) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(reasona._M_string_length + 16);
        }
        PlayerBasicComp::onOpenStateCond(
          BasicComp,
          OPEN_STATE_CITY_REPUTATION_LEVEL,
          *(_DWORD *)(reasona._M_string_length + 16));
      }
      v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      v19 = Player::getBasicComp(v18);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v29, v19);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0xB5Eu, reasona);
      std::string::~string(&v29);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyCityReputationAddExp>();
      v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationAddExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(_BYTE *)(((reasona._M_string_length + 16) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((reasona._M_string_length + 16) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(reasona._M_string_length + 16);
      }
      proto_log::PlayerLogBodyCityReputationAddExp::set_city_id(v20, *(_DWORD *)(reasona._M_string_length + 16));
      v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationAddExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      proto_log::PlayerLogBodyCityReputationAddExp::set_reason_type(
        v21,
        (google::protobuf::uint32)reasona._M_dataplus._M_p);
      v22 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationAddExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(_BYTE *)(((reasona._M_string_length + 20) >> 3) + 0x7FFF8000) != 0
        && (char)(((LOBYTE(reasona._M_string_length) + 20) & 7) + 3) >= *(_BYTE *)(((reasona._M_string_length + 20) >> 3)
                                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(reasona._M_string_length + 20);
      }
      proto_log::PlayerLogBodyCityReputationAddExp::set_after_level(v22, *(_DWORD *)(reasona._M_string_length + 20));
      v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationAddExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(_BYTE *)(((reasona._M_string_length + 24) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((reasona._M_string_length + 24) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(reasona._M_string_length + 24);
      }
      proto_log::PlayerLogBodyCityReputationAddExp::set_after_exp(v23, *(_DWORD *)(reasona._M_string_length + 24));
      v24 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationAddExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      proto_log::PlayerLogBodyCityReputationAddExp::set_add_exp(v24, *(_DWORD *)(v3 + 48));
      v25 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyCityReputationAddExp,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyCityReputationAddExp> *)(v3 + 96));
      Player::printStatLog(v25, &p_body_ptr, &p_body_ext_ptr, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
      std::shared_ptr<proto_log::PlayerLogBodyCityReputationAddExp>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyCityReputationAddExp> *const)(v3 + 96));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  }
  if ( v30 == (char *)v3 )
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

// Line 229: range 0000000015CB4A14-0000000015CB5809
void __cdecl CityReputation::tryLevelup(CityReputation *const this, Player *player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const ReputationExcelConfigMgr *p_reputation_config_mgr; // rdi
  uint32_t level; // edx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  ReputationExcelConfigMgr *v10; // rcx
  uint32_t exp; // ecx
  ReputationExcelConfigMgr *v12; // rcx
  uint32_t v13; // esi
  common::milog::MiLogStream *v14; // rcx
  uint32_t v15; // ecx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  PlayerEventComp *EventComp; // r14
  const ReputationExcelConfigMgr *p_level; // rdi
  uint32_t v23; // edx
  uint32_t v24; // ecx
  common::milog::MiLogStream *v25; // r14
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  __int64 v32; // rsi
  uint32_t next_level_exp; // ecx
  char v34; // al
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  unsigned int val; // [rsp+10h] [rbp-E0h] BYREF
  uint32_t max_level; // [rsp+14h] [rbp-DCh]
  const data::ReputationLevelExcelConfig *level_config_ptr; // [rsp+18h] [rbp-D8h]
  const data::ReputationLevelExcelConfig *next_level_config_ptr; // [rsp+20h] [rbp-D0h]
  const data::ReputationLevelExcelConfig *level_config_ptr_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v45; // [rsp+30h] [rbp-C0h] BYREF
  char v46[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 event_ptr:251 64 32 10 notify:257";
  *(_QWORD *)(v2 + 16) = CityReputation::tryLevelup;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v45);
  p_reputation_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v45)->design_config.txt_config_mgr.reputation_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    p_reputation_config_mgr = (const ReputationExcelConfigMgr *)&this->level_;
    __asan_report_load4(&this->level_);
  }
  level = this->level_;
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    p_reputation_config_mgr = (const ReputationExcelConfigMgr *)&this->city_id_;
    __asan_report_load4(&this->city_id_);
  }
  level_config_ptr = ReputationExcelConfigMgr::findReputationLevelConfig(p_reputation_config_mgr, this->city_id_, level);
  std::shared_ptr<Config>::~shared_ptr(&v45);
  if ( level_config_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v45);
    v10 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v45)->design_config.txt_config_mgr.reputation_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->city_id_);
    }
    max_level = ReputationExcelConfigMgr::getCityReputationMaxLevel(v10, this->city_id_);
    std::shared_ptr<Config>::~shared_ptr(&v45);
    while ( 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->exp_);
      }
      exp = this->exp_;
      if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->next_level_exp >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)level_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->next_level_exp >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&level_config_ptr->next_level_exp);
      }
      if ( exp < level_config_ptr->next_level_exp )
        break;
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->level_);
      }
      if ( max_level <= this->level_ )
        break;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v45);
      v12 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v45)->design_config.txt_config_mgr.reputation_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->level_);
      }
      v13 = this->level_ + 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->city_id_);
      }
      next_level_config_ptr = ReputationExcelConfigMgr::findReputationLevelConfig(v12, this->city_id_, v13);
      std::shared_ptr<Config>::~shared_ptr(&v45);
      if ( !next_level_config_ptr )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 64),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/reputation/city_reputation.cpp",
          "tryLevelup",
          242);
        v14 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                (common::milog::MiLogStream *const)(v2 + 64),
                (const char (*)[40])"findReputationLevelConfig fails, level:");
        if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->level_);
        }
        val = this->level_ + 1;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
        break;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->exp_);
      }
      v15 = this->exp_;
      if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->next_level_exp >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)level_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->next_level_exp >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&level_config_ptr->next_level_exp);
      }
      this->exp_ = v15 - level_config_ptr->next_level_exp;
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->level_);
      }
      ++this->level_;
      CityReputation::logLevelup(this);
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 64),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/reputation/city_reputation.cpp",
        "tryLevelup",
        249);
      v16 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              (common::milog::MiLogStream *const)(v2 + 64),
              (const char (*)[18])"levelup need exp:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v16,
              &level_config_ptr->next_level_exp);
      v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])" ");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &this->level_);
      v20 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])" exp_:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->exp_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
      common::tools::perf::make_shared<CityReputationLevelup,unsigned int &,unsigned int &>(
        (unsigned int *)(v2 + 32),
        &this->city_id_,
        &this->level_,
        &this->city_id_);
      EventComp = Player::getEventComp(player);
      std::shared_ptr<BaseEvent>::shared_ptr<CityReputationLevelup,void>(
        (std::shared_ptr<BaseEvent> *const)&v45,
        (const std::shared_ptr<CityReputationLevelup> *)(v2 + 32));
      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v45);
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v45);
      if ( !CityReputation::checkCityReputationOpen(this) )
      {
        proto::CityReputationLevelupNotify::CityReputationLevelupNotify((proto::CityReputationLevelupNotify *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->city_id_);
        }
        proto::CityReputationLevelupNotify::set_city_id(
          (proto::CityReputationLevelupNotify *const)(v2 + 64),
          this->city_id_);
        if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->level_);
        }
        proto::CityReputationLevelupNotify::set_level(
          (proto::CityReputationLevelupNotify *const)(v2 + 64),
          this->level_);
        Player::sendProto(player, (const google::protobuf::Message *)(v2 + 64));
        proto::CityReputationLevelupNotify::~CityReputationLevelupNotify((proto::CityReputationLevelupNotify *const)(v2 + 64));
      }
      level_config_ptr = next_level_config_ptr;
      std::shared_ptr<CityReputationLevelup>::~shared_ptr((std::shared_ptr<CityReputationLevelup> *const)(v2 + 32));
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->level_);
    }
    if ( max_level <= this->level_ )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v45);
      p_level = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v45)->design_config.txt_config_mgr.reputation_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
      {
        p_level = (const ReputationExcelConfigMgr *)&this->level_;
        __asan_report_load4(&this->level_);
      }
      v23 = this->level_;
      if ( *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        p_level = (const ReputationExcelConfigMgr *)&this->city_id_;
        __asan_report_load4(&this->city_id_);
      }
      level_config_ptr_0 = ReputationExcelConfigMgr::findReputationLevelConfig(p_level, this->city_id_, v23);
      std::shared_ptr<Config>::~shared_ptr(&v45);
      if ( level_config_ptr_0 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->exp_);
        }
        v24 = this->exp_;
        if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr_0->next_level_exp >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_config_ptr_0 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr_0->next_level_exp >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&level_config_ptr_0->next_level_exp);
        }
        if ( v24 > level_config_ptr_0->next_level_exp )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 64),
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/reputation/city_reputation.cpp",
            "tryLevelup",
            273);
          v25 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
                  (common::milog::MiLogStream *const)(v2 + 64),
                  (const char (*)[5])"uid:");
          val = Player::getUid(player);
          v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
          v27 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v26, (const char (*)[10])" city_id:");
          v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &this->city_id_);
          v29 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v28, (const char (*)[2])" ");
          v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &this->exp_);
          v31 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v30, (const char (*)[10])" limitto ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v31,
            &level_config_ptr_0->next_level_exp);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
          v32 = (((_BYTE)level_config_ptr_0 + 20) & 7u) + 3;
          if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr_0->next_level_exp >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)level_config_ptr_0 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr_0->next_level_exp >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4(&level_config_ptr_0->next_level_exp);
          }
          next_level_exp = level_config_ptr_0->next_level_exp;
          v34 = *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000);
          if ( v34 != 0 && v34 <= 3 )
          {
            LOBYTE(v32) = v34 != 0;
            __asan_report_store4(&this->exp_, v32, (_BYTE)this + 24);
          }
          this->exp_ = next_level_exp;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 64),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/reputation/city_reputation.cpp",
          "tryLevelup",
          279);
        v35 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                (common::milog::MiLogStream *const)(v2 + 64),
                (const char (*)[34])"findReputationLevelConfig fails, ");
        v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &this->city_id_);
        v37 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v36, (const char (*)[2])" ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &this->level_);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reputation/city_reputation.cpp",
      "tryLevelup",
      233);
    v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[34])"findReputationLevelConfig fails, ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->city_id_);
    v9 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v8, (const char (*)[2])" ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->level_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
  }
  if ( v46 == (char *)v2 )
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
};

// Line 286: range 0000000015CB580A-0000000015CB5C32
// local variable allocation has failed, the output may be wrong!
void __cdecl CityReputation::logLevelup(CityReputation *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  Player *v4; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationLevelUp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationLevelUp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationLevelUp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  Player *v9; // r14
  std::string v10; // [rsp+0h] [rbp-100h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-D0h] BYREF
  char v13[176]; // [rsp+50h] [rbp-B0h] BYREF

  v10._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 10 holder:293 64 16 14 player_ptr:287 96 16 11 log_ptr:294";
  *(_QWORD *)(v1 + 16) = CityReputation::logLevelup;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  CityReputation::getPlayer((const CityReputation *const)(v1 + 64));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reputation/city_reputation.cpp",
      "logLevelup",
      290);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v12, (const char (*)[16])"getPlayer fails");
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    v4 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    BasicComp = Player::getBasicComp(v4);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v12, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0xB5Fu, v10);
    std::string::~string(&v12);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyCityReputationLevelUp>();
    v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationLevelUp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationLevelUp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( *(_BYTE *)(((v10._M_string_length + 16) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v10._M_string_length + 16) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(v10._M_string_length + 16);
    }
    proto_log::PlayerLogBodyCityReputationLevelUp::set_city_id(v6, *(_DWORD *)(v10._M_string_length + 16));
    v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationLevelUp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationLevelUp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( *(_BYTE *)(((v10._M_string_length + 20) >> 3) + 0x7FFF8000) != 0
      && (char)(((LOBYTE(v10._M_string_length) + 20) & 7) + 3) >= *(_BYTE *)(((v10._M_string_length + 20) >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(v10._M_string_length + 20);
    }
    proto_log::PlayerLogBodyCityReputationLevelUp::set_level(v7, *(_DWORD *)(v10._M_string_length + 20));
    v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationLevelUp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationLevelUp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( *(_BYTE *)(((v10._M_string_length + 24) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v10._M_string_length + 24) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(v10._M_string_length + 24);
    }
    proto_log::PlayerLogBodyCityReputationLevelUp::set_exp(v8, *(_DWORD *)(v10._M_string_length + 24));
    v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyCityReputationLevelUp,void>(
      (std::shared_ptr<google::protobuf::Message> *const)&v10._anon_0,
      (const std::shared_ptr<proto_log::PlayerLogBodyCityReputationLevelUp> *)(v1 + 96));
    Player::printStatLog(v9, (MessagePtr *)&v10._anon_0, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v10._anon_0);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<proto_log::PlayerLogBodyCityReputationLevelUp>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyCityReputationLevelUp> *const)(v1 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
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
};

// Line 302: range 0000000015CB5C34-0000000015CB67AA
__int64 __fastcall CityReputation::takeLevelReward(
        CityReputation *const this,
        uint32_t level,
        std::vector<ItemParam> *display_item_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  const ReputationExcelConfigMgr *p_reputation_config_mgr; // rdi
  uint32_t v9; // edx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  Player *v13; // rax
  PlayerItemComp *ItemComp; // rcx
  Player *v15; // rax
  PlayerItemComp *v16; // rdi
  common::milog::MiLogStream *v17; // rax
  Player *v18; // rax
  bool v19; // r14
  common::milog::MiLogStream *v20; // rax
  Player *v21; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rcx
  Player *v27; // r14
  __int64 result; // rax
  std::string v29; // [rsp+0h] [rbp-1E0h]
  _DWORD __l[5]; // [rsp+3Ch] [rbp-1A4h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+50h] [rbp-190h] BYREF
  std::shared_ptr<google::protobuf::Message> v33; // [rsp+60h] [rbp-180h] BYREF
  std::vector<unsigned int> reward_id_vec; // [rsp+70h] [rbp-170h] BYREF
  common::milog::MiLogStream v35; // [rsp+90h] [rbp-150h] BYREF
  char v36[304]; // [rsp+B0h] [rbp-130h] BYREF

  *(&v29._anon_0._M_allocated_capacity + 1) = (std::string::size_type)display_item_vec;
  v3 = (unsigned __int64)v36;
  v29._M_string_length = (std::string::size_type)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 1 10 holder:351 64 4 7 ret:303 80 4 9 level:301 96 8 8 iter:310 128 16 14 player_ptr:325 16"
                        "0 16 11 log_ptr:352 192 24 10 reason:331";
  *(_QWORD *)(v3 + 16) = CityReputation::takeLevelReward;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  *(_DWORD *)(v3 + 80) = level;
  *(_DWORD *)(v3 + 64) = CityReputation::checkCityReputationOpen(this);
  if ( *(_DWORD *)(v3 + 64) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reputation/city_reputation.cpp",
      "takeLevelReward",
      306);
    v6 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v35,
           (const char (*)[37])"checkCityReputationOpen fails, ret: ");
    common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v35);
    v7 = *(_DWORD *)(v3 + 64);
  }
  else
  {
    *(std::set<unsigned int>::iterator *)(v3 + 96) = std::set<unsigned int>::find(
                                                       &this->taken_level_reward_set_,
                                                       (const std::set<unsigned int>::key_type *)(v3 + 80));
    *(std::set<unsigned int>::iterator *)&__l[1] = std::set<unsigned int>::end(&this->taken_level_reward_set_);
    if ( std::operator!=(
           (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 96),
           (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__l[1]) )
    {
      v7 = 7102;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->level_);
      }
      if ( this->level_ >= *(_DWORD *)(v3 + 80) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v33);
        p_reputation_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33)->design_config.txt_config_mgr.reputation_config_mgr;
        v9 = *(_DWORD *)(v3 + 80);
        if ( *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          p_reputation_config_mgr = (const ReputationExcelConfigMgr *)&this->city_id_;
          __asan_report_load4(&this->city_id_);
        }
        *(_QWORD *)&__l[3] = ReputationExcelConfigMgr::findReputationLevelConfig(
                               p_reputation_config_mgr,
                               this->city_id_,
                               v9);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v33);
        if ( *(_QWORD *)&__l[3] )
        {
          CityReputation::getPlayer((const CityReputation *const)(v3 + 128));
          if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 128)) )
          {
            common::milog::MiLogStream::create(
              &v35,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/reputation/city_reputation.cpp",
              "takeLevelReward",
              328);
            common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              &v35,
              (const char (*)[25])"getPlayer return nullptr");
            common::milog::MiLogStream::~MiLogStream(&v35);
            v7 = -1;
          }
          else
          {
            ActionReason::ActionReason(
              (ActionReason *const)(v3 + 192),
              ACTION_REASON_CITY_REPUTATION_LEVEL,
              ITEM_LIMIT_CITY_REPUTATION_LEVEL);
            v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            ItemComp = Player::getItemComp(v13);
            if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 24LL) >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 24LL) >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(*(_QWORD *)&__l[3] + 24LL);
            }
            *(_DWORD *)(v3 + 64) = PlayerItemComp::checkGrantReward(
                                     ItemComp,
                                     *(_DWORD *)(*(_QWORD *)&__l[3] + 24LL),
                                     (const ActionReason *)(v3 + 192));
            if ( *(_DWORD *)(v3 + 64) )
            {
              common::milog::MiLogStream::create(
                &v35,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/reputation/city_reputation.cpp",
                "takeLevelReward",
                335);
              common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                &v35,
                (const char (*)[23])"checkGrantReward fails");
              common::milog::MiLogStream::~MiLogStream(&v35);
              v7 = *(_DWORD *)(v3 + 64);
            }
            else
            {
              std::set<unsigned int>::insert(
                &this->taken_level_reward_set_,
                (const std::set<unsigned int>::value_type *)(v3 + 80));
              v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              v16 = Player::getItemComp(v15);
              if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 24LL) >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 24LL) >> 3) + 0x7FFF8000) <= 3 )
              {
                v16 = (PlayerItemComp *)(*(_QWORD *)&__l[3] + 24LL);
                __asan_report_load4(*(_QWORD *)&__l[3] + 24LL);
              }
              if ( PlayerItemComp::grantReward(
                     v16,
                     *(_DWORD *)(*(_QWORD *)&__l[3] + 24LL),
                     (const ActionReason *)(v3 + 192),
                     0LL) )
              {
                common::milog::MiLogStream::create(
                  &v35,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/reputation/city_reputation.cpp",
                  "takeLevelReward",
                  343);
                v17 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                        &v35,
                        (const char (*)[19])"grantReward fails:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  (const unsigned int *)(*(_QWORD *)&__l[3] + 24LL));
                common::milog::MiLogStream::~MiLogStream(&v35);
              }
              v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              v29._anon_0._M_allocated_capacity = (std::string::size_type)Player::getItemComp(v18);
              if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 24LL) >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 24LL) >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(*(_QWORD *)&__l[3] + 24LL);
              }
              __l[0] = *(_DWORD *)(*(_QWORD *)&__l[3] + 24LL);
              std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v3 + 48));
              std::vector<unsigned int>::vector(
                &reward_id_vec,
                (std::initializer_list<unsigned int>)__PAIR128__(1LL, __l),
                (const std::vector<unsigned int>::allocator_type *)(v3 + 48));
              v19 = PlayerItemComp::getItemParamVecByRewardIdVec(
                      (const PlayerItemComp *const)v29._anon_0._M_allocated_capacity,
                      &reward_id_vec,
                      *((std::vector<ItemParam> **)&v29._anon_0._M_allocated_capacity + 1)) != 0;
              std::vector<unsigned int>::~vector(&reward_id_vec);
              std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v3 + 48));
              if ( v19 )
              {
                common::milog::MiLogStream::create(
                  &v35,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/reputation/city_reputation.cpp",
                  "takeLevelReward",
                  348);
                v20 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                        &v35,
                        (const char (*)[31])"getItemParam fails, reward_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v20,
                  (const unsigned int *)(*(_QWORD *)&__l[3] + 24LL));
                common::milog::MiLogStream::~MiLogStream(&v35);
              }
              v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              BasicComp = Player::getBasicComp(v21);
              PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v35, BasicComp);
              StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xB60u, v29);
              std::string::~string(&v35);
              common::tools::perf::make_shared<proto_log::PlayerLogBodyCityReputationTakeLevelReward>();
              v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              if ( *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->city_id_);
              }
              proto_log::PlayerLogBodyCityReputationTakeLevelReward::set_city_id(v23, this->city_id_);
              v24 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              proto_log::PlayerLogBodyCityReputationTakeLevelReward::set_take_level(v24, *(_DWORD *)(v3 + 80));
              v25 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 24LL) >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 24LL) >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(*(_QWORD *)&__l[3] + 24LL);
              }
              proto_log::PlayerLogBodyCityReputationTakeLevelReward::set_take_reward_id(
                v25,
                *(_DWORD *)(*(_QWORD *)&__l[3] + 24LL));
              v26 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationTakeLevelReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(&this->level_);
              }
              proto_log::PlayerLogBodyCityReputationTakeLevelReward::set_cur_level(v26, this->level_);
              v27 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              std::shared_ptr<google::protobuf::Message>::shared_ptr(&v33, 0LL);
              std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyCityReputationTakeLevelReward,void>(
                &p_body_ptr,
                (const std::shared_ptr<proto_log::PlayerLogBodyCityReputationTakeLevelReward> *)(v3 + 160));
              Player::printStatLog(v27, &p_body_ptr, &v33, 0xEu);
              std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
              std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v33);
              v7 = 0;
              std::shared_ptr<proto_log::PlayerLogBodyCityReputationTakeLevelReward>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyCityReputationTakeLevelReward> *const)(v3 + 160));
              StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
            }
          }
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 128));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/reputation/city_reputation.cpp",
            "takeLevelReward",
            322);
          v10 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  &v35,
                  (const char (*)[34])"findReputationLevelConfig fails, ");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->city_id_);
          v12 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v11, (const char (*)[2])":");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream(&v35);
          v7 = -1;
        }
      }
      else
      {
        v7 = 7103;
      }
    }
  }
  result = v7;
  if ( v29._M_string_length == v3 )
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
  return result;
};

// Line 364: range 0000000015CB67AC-0000000015CB6BC5
int32_t __cdecl CityReputation::checkCityReputationOpen(const CityReputation *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  ReputationExcelConfigMgr *p_reputation_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  Player *v7; // rax
  PlayerBasicComp *BasicComp; // rcx
  FeatureSwitchMgr *p_feature_switch_mgr; // rcx
  bool isCityReputationClosed; // r14
  int32_t result; // eax
  const data::ReputationCityExcelConfig *city_config_ptr; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Config> v13; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-90h] BYREF
  char v15[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 player_ptr:371";
  *(_QWORD *)(v1 + 16) = CityReputation::checkCityReputationOpen;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  p_reputation_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.txt_config_mgr.reputation_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->city_id_);
  }
  city_config_ptr = data::ReputationExcelConfigMgrBase::findReputationCityExcelConfig(
                      p_reputation_config_mgr,
                      this->city_id_);
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( city_config_ptr )
  {
    CityReputation::getPlayer((const CityReputation *const)(v1 + 32));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/reputation/city_reputation.cpp",
        "checkCityReputationOpen",
        374);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        &v14,
        (const char (*)[25])"getPlayer return nullptr");
      common::milog::MiLogStream::~MiLogStream(&v14);
      v6 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      BasicComp = Player::getBasicComp(v7);
      if ( *(_BYTE *)(((unsigned __int64)&city_config_ptr->open_state >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)city_config_ptr + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&city_config_ptr->open_state >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&city_config_ptr->open_state);
      }
      if ( !PlayerBasicComp::isStateOpen(BasicComp, city_config_ptr->open_state) )
      {
        v6 = 7101;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v13);
        p_feature_switch_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->feature_switch_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->city_id_);
        }
        isCityReputationClosed = FeatureSwitchMgr::isCityReputationClosed(p_feature_switch_mgr, this->city_id_);
        std::shared_ptr<Config>::~shared_ptr(&v13);
        if ( isCityReputationClosed )
          v6 = 7111;
        else
          v6 = 0;
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reputation/city_reputation.cpp",
      "checkCityReputationOpen",
      368);
    v5 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v14,
           (const char (*)[38])"findReputationCityExcelConfig fails, ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->city_id_);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v6 = -1;
  }
  result = v6;
  if ( v15 == (char *)v1 )
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

// Line 391: range 0000000015CB6BC6-0000000015CB6BE4
bool __cdecl CityReputation::isQuestEntranceOpen(const CityReputation *const this)
{
  return CityReputation::isEntranceOpen(this, REPUTATION_ENTRANCE_QUEST);
};

// Line 397: range 0000000015CB6BE6-0000000015CB6C04
bool __cdecl CityReputation::isRequestEntranceOpen(const CityReputation *const this)
{
  return CityReputation::isEntranceOpen(this, REPUTATION_ENTRANCE_REQUEST);
};

// Line 403: range 0000000015CB6C06-0000000015CB6C24
bool __cdecl CityReputation::isExploreEntranceOpen(const CityReputation *const this)
{
  return CityReputation::isEntranceOpen(this, REPUTATION_ENTRANCE_EXPLORE);
};

// Line 409: range 0000000015CB6C26-0000000015CB6C44
bool __cdecl CityReputation::isHunterEntranceOpen(const CityReputation *const this)
{
  return CityReputation::isEntranceOpen(this, REPUTATION_ENTRANCE_HUNTER);
};

// Line 414: range 0000000015CB6C46-0000000015CB7747
__int64 __fastcall CityReputation::takeParentQuestReward(
        CityReputation *const this,
        uint32_t parent_quest,
        std::vector<ItemParam> *display_item_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  Player *v8; // rax
  PlayerQuestComp *QuestComp; // rax
  const ReputationExcelConfigMgr *p_reputation_config_mgr; // rdi
  uint32_t v11; // edx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  Player *v15; // rax
  PlayerItemComp *ItemComp; // rcx
  Player *v17; // rax
  PlayerItemComp *v18; // rdi
  common::milog::MiLogStream *v19; // rax
  Player *v20; // rax
  bool v21; // r14
  common::milog::MiLogStream *v22; // rax
  Player *v23; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationTakeQuestReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationTakeQuestReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationTakeQuestReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rcx
  Player *v28; // r14
  __int64 result; // rax
  std::string v30; // [rsp+0h] [rbp-1E0h]
  _DWORD __l[5]; // [rsp+3Ch] [rbp-1A4h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+50h] [rbp-190h] BYREF
  std::shared_ptr<google::protobuf::Message> v34; // [rsp+60h] [rbp-180h] BYREF
  std::vector<unsigned int> reward_id_vec; // [rsp+70h] [rbp-170h] BYREF
  common::milog::MiLogStream v36; // [rsp+90h] [rbp-150h] BYREF
  char v37[304]; // [rsp+B0h] [rbp-130h] BYREF

  *(&v30._anon_0._M_allocated_capacity + 1) = (std::string::size_type)display_item_vec;
  v3 = (unsigned __int64)v37;
  v30._M_string_length = (std::string::size_type)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 1 10 holder:467 64 4 7 ret:415 80 4 16 parent_quest:413 96 8 8 iter:426 128 16 14 player_pt"
                        "r:431 160 16 11 log_ptr:468 192 24 10 reason:447";
  *(_QWORD *)(v3 + 16) = CityReputation::takeParentQuestReward;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  *(_DWORD *)(v3 + 80) = parent_quest;
  *(_DWORD *)(v3 + 64) = CityReputation::checkCityReputationOpen(this);
  if ( *(_DWORD *)(v3 + 64) )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reputation/city_reputation.cpp",
      "takeParentQuestReward",
      418);
    v6 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v36,
           (const char (*)[37])"checkCityReputationOpen fails, ret: ");
    common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v36);
    v7 = *(_DWORD *)(v3 + 64);
  }
  else if ( !CityReputation::isQuestEntranceOpen(this) )
  {
    v7 = 7109;
  }
  else
  {
    *(std::set<unsigned int>::iterator *)(v3 + 96) = std::set<unsigned int>::find(
                                                       &this->taken_parent_quest_reward_set_,
                                                       (const std::set<unsigned int>::key_type *)(v3 + 80));
    *(std::set<unsigned int>::iterator *)&__l[1] = std::set<unsigned int>::end(&this->taken_parent_quest_reward_set_);
    if ( std::operator!=(
           (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 96),
           (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__l[1]) )
    {
      v7 = 7104;
    }
    else
    {
      CityReputation::getPlayer((const CityReputation *const)(v3 + 128));
      if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/reputation/city_reputation.cpp",
          "takeParentQuestReward",
          434);
        common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
          &v36,
          (const char (*)[25])"getPlayer return nullptr");
        common::milog::MiLogStream::~MiLogStream(&v36);
        v7 = -1;
      }
      else
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        QuestComp = Player::getQuestComp(v8);
        if ( !PlayerQuestComp::isParentQuestOnceFinished(QuestComp, *(_DWORD *)(v3 + 80)) )
        {
          v7 = 7105;
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v34);
          p_reputation_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->design_config.txt_config_mgr.reputation_config_mgr;
          v11 = *(_DWORD *)(v3 + 80);
          if ( *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            p_reputation_config_mgr = (const ReputationExcelConfigMgr *)&this->city_id_;
            __asan_report_load4(&this->city_id_);
          }
          *(_QWORD *)&__l[3] = ReputationExcelConfigMgr::findParentQuestConfig(
                                 p_reputation_config_mgr,
                                 this->city_id_,
                                 v11);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v34);
          if ( *(_QWORD *)&__l[3] )
          {
            ActionReason::ActionReason(
              (ActionReason *const)(v3 + 192),
              ACTION_REASON_CITY_REPUTATION_QUEST,
              ITEM_LIMIT_CITY_REPUTATION_QUEST);
            v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            ItemComp = Player::getItemComp(v15);
            if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 16LL) >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 16LL) >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(*(_QWORD *)&__l[3] + 16LL);
            }
            *(_DWORD *)(v3 + 64) = PlayerItemComp::checkGrantReward(
                                     ItemComp,
                                     *(_DWORD *)(*(_QWORD *)&__l[3] + 16LL),
                                     (const ActionReason *)(v3 + 192));
            if ( *(_DWORD *)(v3 + 64) )
            {
              common::milog::MiLogStream::create(
                &v36,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/reputation/city_reputation.cpp",
                "takeParentQuestReward",
                451);
              common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                &v36,
                (const char (*)[23])"checkGrantReward fails");
              common::milog::MiLogStream::~MiLogStream(&v36);
              v7 = *(_DWORD *)(v3 + 64);
            }
            else
            {
              std::set<unsigned int>::insert(
                &this->taken_parent_quest_reward_set_,
                (const std::set<unsigned int>::value_type *)(v3 + 80));
              v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              v18 = Player::getItemComp(v17);
              if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 16LL) >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 16LL) >> 3) + 0x7FFF8000) <= 3 )
              {
                v18 = (PlayerItemComp *)(*(_QWORD *)&__l[3] + 16LL);
                __asan_report_load4(*(_QWORD *)&__l[3] + 16LL);
              }
              if ( PlayerItemComp::grantReward(
                     v18,
                     *(_DWORD *)(*(_QWORD *)&__l[3] + 16LL),
                     (const ActionReason *)(v3 + 192),
                     0LL) )
              {
                common::milog::MiLogStream::create(
                  &v36,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/reputation/city_reputation.cpp",
                  "takeParentQuestReward",
                  459);
                v19 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                        &v36,
                        (const char (*)[19])"grantReward fails:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v19,
                  (const unsigned int *)(*(_QWORD *)&__l[3] + 16LL));
                common::milog::MiLogStream::~MiLogStream(&v36);
              }
              v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              v30._anon_0._M_allocated_capacity = (std::string::size_type)Player::getItemComp(v20);
              if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 16LL) >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 16LL) >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(*(_QWORD *)&__l[3] + 16LL);
              }
              __l[0] = *(_DWORD *)(*(_QWORD *)&__l[3] + 16LL);
              std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v3 + 48));
              std::vector<unsigned int>::vector(
                &reward_id_vec,
                (std::initializer_list<unsigned int>)__PAIR128__(1LL, __l),
                (const std::vector<unsigned int>::allocator_type *)(v3 + 48));
              v21 = PlayerItemComp::getItemParamVecByRewardIdVec(
                      (const PlayerItemComp *const)v30._anon_0._M_allocated_capacity,
                      &reward_id_vec,
                      *((std::vector<ItemParam> **)&v30._anon_0._M_allocated_capacity + 1)) != 0;
              std::vector<unsigned int>::~vector(&reward_id_vec);
              std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v3 + 48));
              if ( v21 )
              {
                common::milog::MiLogStream::create(
                  &v36,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/reputation/city_reputation.cpp",
                  "takeParentQuestReward",
                  464);
                v22 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                        &v36,
                        (const char (*)[31])"getItemParam fails, reward_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v22,
                  (const unsigned int *)(*(_QWORD *)&__l[3] + 16LL));
                common::milog::MiLogStream::~MiLogStream(&v36);
              }
              v23 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              BasicComp = Player::getBasicComp(v23);
              PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v36, BasicComp);
              StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xB61u, v30);
              std::string::~string(&v36);
              common::tools::perf::make_shared<proto_log::PlayerLogBodyCityReputationTakeQuestReward>();
              v25 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationTakeQuestReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationTakeQuestReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              if ( *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->city_id_);
              }
              proto_log::PlayerLogBodyCityReputationTakeQuestReward::set_city_id(v25, this->city_id_);
              v26 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationTakeQuestReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationTakeQuestReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              proto_log::PlayerLogBodyCityReputationTakeQuestReward::set_parent_quest_id(v26, *(_DWORD *)(v3 + 80));
              v27 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationTakeQuestReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationTakeQuestReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 16LL) >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&__l[3] + 16LL) >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(*(_QWORD *)&__l[3] + 16LL);
              }
              proto_log::PlayerLogBodyCityReputationTakeQuestReward::set_reward_id(
                v27,
                *(_DWORD *)(*(_QWORD *)&__l[3] + 16LL));
              v28 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              std::shared_ptr<google::protobuf::Message>::shared_ptr(&v34, 0LL);
              std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyCityReputationTakeQuestReward,void>(
                &p_body_ptr,
                (const std::shared_ptr<proto_log::PlayerLogBodyCityReputationTakeQuestReward> *)(v3 + 160));
              Player::printStatLog(v28, &p_body_ptr, &v34, 0xEu);
              std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
              std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v34);
              v7 = 0;
              std::shared_ptr<proto_log::PlayerLogBodyCityReputationTakeQuestReward>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyCityReputationTakeQuestReward> *const)(v3 + 160));
              StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v36,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/reputation/city_reputation.cpp",
              "takeParentQuestReward",
              444);
            v12 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    &v36,
                    (const char (*)[30])"findParentQuestConfig fails, ");
            v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->city_id_);
            v14 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v13, (const char (*)[2])":");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 80));
            common::milog::MiLogStream::~MiLogStream(&v36);
            v7 = -1;
          }
        }
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 128));
    }
  }
  result = v7;
  if ( v30._M_string_length == v3 )
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
  return result;
};

// Line 478: range 0000000015CB7748-0000000015CB78C7
void __cdecl CityReputation::refreshRequest(CityReputation *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  time_t v3; // rdx
  char v4; // al
  uint32_t day_offset; // [rsp+14h] [rbp-1Ch]
  uint32_t refresh_time; // [rsp+18h] [rbp-18h]
  uint32_t now; // [rsp+1Ch] [rbp-14h]
  std::shared_ptr<Config> v8; // [rsp+20h] [rbp-10h] BYREF

  if ( !CityReputation::checkCityReputationOpen(this) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v8);
    v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8);
    day_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v1->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v8);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v8);
    v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8);
    refresh_time = ConstValueExcelConfigMgr::getCityReputationRefreshTime(&v2->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v8);
    now = common::tools::TimeUtils::getNow();
    v3 = day_offset;
    if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_request_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_refresh_request_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->last_refresh_request_time_);
    }
    if ( !common::tools::TimeUtils::isSameWeek(now, this->last_refresh_request_time_, v3) )
      goto LABEL_9;
    if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_request_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_refresh_request_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->last_refresh_request_time_);
    }
    if ( refresh_time > this->last_refresh_request_time_ && refresh_time <= now )
LABEL_9:
      v4 = 1;
    else
      v4 = 0;
    if ( v4 )
      CityReputation::doRefreshRequest(this);
  }
};

// Line 504: range 0000000015CB78C8-0000000015CB7939
uint32_t __cdecl CityReputation::getNextRefreshTime(CityReputation *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  uint32_t now; // [rsp+18h] [rbp-18h]
  uint32_t day_offset; // [rsp+1Ch] [rbp-14h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-10h] BYREF

  now = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5);
  day_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v1->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v5);
  return common::tools::TimeUtils::getWeekTime(now, day_offset) + 604800;
};

// Line 511: range 0000000015CB793A-0000000015CB9037
int32_t __cdecl CityReputation::doRefreshRequest(CityReputation *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  ReputationExcelConfigMgr *p_reputation_config_mgr; // rdi
  uint32_t v7; // edx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::deque<unsigned int>::size_type v13; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  Player *v15; // rax
  PlayerBasicComp *BasicComp; // rax
  __int64 Now; // rsi
  __int64 v18; // rsi
  __int64 v19; // rdx
  ReputationExcelConfigMgr *v20; // r14
  std::deque<unsigned int>::reference v21; // rax
  uint32_t *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v42; // rax
  _DWORD *v43; // rdx
  std::vector<unsigned int>::size_type v44; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v45; // rax
  int *v46; // rdx
  int v47; // r14d
  __int64 v48; // rsi
  std::vector<CityReputation::RequestWeight>::reference v49; // rax
  _DWORD *v50; // rdx
  char v51; // cl
  ReputationExcelConfigMgr *v52; // r14
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v53; // rax
  uint32_t *v54; // rdx
  uint32_t weight; // r14d
  __int64 v56; // rsi
  std::vector<CityReputation::RequestWeight>::reference v57; // rdx
  char v58; // cl
  __int64 v59; // rsi
  std::vector<CityReputation::RequestWeight>::reference v60; // rdx
  char v61; // cl
  std::vector<CityReputation::RequestWeight>::size_type v62; // r14
  std::vector<CityReputation::RequestWeight>::reference v64; // rax
  _DWORD *v65; // rdx
  std::map<unsigned int,CityReputation::RequestInfo>::iterator *v66; // rax
  std::map<unsigned int,CityReputation::RequestInfo>::iterator *v67; // rdx
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v75; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v76; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v77; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v78; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v79; // rax
  Player *v80; // r14
  int32_t result; // eax
  std::string v82; // [rsp+0h] [rbp-2B0h]
  CityReputation *thisa; // [rsp+8h] [rbp-2A8h]
  uint32_t idx; // [rsp+14h] [rbp-29Ch]
  uint32_t group_id; // [rsp+18h] [rbp-298h]
  uint32_t request_num; // [rsp+1Ch] [rbp-294h]
  std::vector<unsigned int>::iterator __for_begin_0; // [rsp+20h] [rbp-290h] BYREF
  std::vector<unsigned int>::iterator __for_end_0; // [rsp+28h] [rbp-288h] BYREF
  const data::ReputationLevelExcelConfig *level_config_ptr; // [rsp+30h] [rbp-280h]
  std::map<unsigned int,CityReputation::RequestInfo> *__for_range; // [rsp+38h] [rbp-278h]
  const data::ReputationRequestExcelConfig *request_config_ptr; // [rsp+40h] [rbp-270h]
  std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-268h]
  const std::vector<unsigned int> *request_id_vec; // [rsp+50h] [rbp-260h]
  const data::ReputationRequestExcelConfig *request_config_ptr_0; // [rsp+58h] [rbp-258h]
  const std::pair<unsigned int const,CityReputation::RequestInfo> *v95; // [rsp+60h] [rbp-250h]
  std::tuple_element<0,const std::pair<unsigned int const,CityReputation::RequestInfo> >::type *request_id; // [rsp+68h] [rbp-248h]
  std::tuple_element<1,const std::pair<unsigned int const,CityReputation::RequestInfo> >::type *_; // [rsp+70h] [rbp-240h]
  std::map<unsigned int,CityReputation::RequestInfo>::iterator __for_end; // [rsp+78h] [rbp-238h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+80h] [rbp-230h] BYREF
  std::shared_ptr<google::protobuf::Message> v100; // [rsp+90h] [rbp-220h] BYREF
  common::milog::MiLogStream v101; // [rsp+A0h] [rbp-210h] BYREF
  char v102[496]; // [rsp+C0h] [rbp-1F0h] BYREF

  v82._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v102;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(448LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "11 32 1 10 holder:544 48 4 7 uid:518 64 4 10 npc_id:601 80 4 14 select_idx:621 96 4 10 target:62"
                        "7 112 16 14 player_ptr:512 144 16 11 log_ptr:631 176 24 21 candidate_npc_vec:566 240 24 20 selec"
                        "ted_npc_vec:591 304 24 22 request_weight_vec:600 368 48 29 candidate_npc_request_map:567";
  *(_QWORD *)(v1 + 16) = CityReputation::doRefreshRequest;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556927;
  v3[536862722] = -234556924;
  v3[536862723] = 61956;
  v3[536862724] = 62194;
  v3[536862725] = 62194;
  v3[536862726] = -218959360;
  v3[536862727] = 62194;
  v3[536862728] = -218959360;
  v3[536862729] = 62194;
  v3[536862730] = -218959360;
  v3[536862731] = 62194;
  v3[536862733] = -202116109;
  CityReputation::getPlayer((const CityReputation *const)(v1 + 112));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v101,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reputation/city_reputation.cpp",
      "doRefreshRequest",
      515);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v101, (const char (*)[16])"getPlayer fails");
    common::milog::MiLogStream::~MiLogStream(&v101);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 112));
    *(_DWORD *)(v1 + 48) = Player::getUid(v5);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v100);
    p_reputation_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v100)->design_config.txt_config_mgr.reputation_config_mgr;
    if ( *(_BYTE *)(((v82._M_string_length + 20) >> 3) + 0x7FFF8000) != 0
      && (char)(((LOBYTE(v82._M_string_length) + 20) & 7) + 3) >= *(_BYTE *)(((v82._M_string_length + 20) >> 3)
                                                                           + 0x7FFF8000) )
    {
      p_reputation_config_mgr = (ReputationExcelConfigMgr *)(v82._M_string_length + 20);
      __asan_report_load4(v82._M_string_length + 20);
    }
    v7 = *(_DWORD *)(v82._M_string_length + 20);
    if ( *(_BYTE *)(((v82._M_string_length + 16) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v82._M_string_length + 16) >> 3) + 0x7FFF8000) <= 3 )
    {
      p_reputation_config_mgr = (ReputationExcelConfigMgr *)(v82._M_string_length + 16);
      __asan_report_load4(v82._M_string_length + 16);
    }
    level_config_ptr = ReputationExcelConfigMgr::findReputationLevelConfig(
                         p_reputation_config_mgr,
                         *(_DWORD *)(v82._M_string_length + 16),
                         v7);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v100);
    if ( level_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->request_num >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&level_config_ptr->request_num >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&level_config_ptr->request_num);
      }
      if ( level_config_ptr->request_num )
      {
        if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->request_group_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->request_group_id >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&level_config_ptr->request_group_id);
        }
        *((_DWORD *)&v82._anon_0._M_allocated_capacity + 2) = level_config_ptr->request_group_id;
        if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->request_num >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&level_config_ptr->request_num >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&level_config_ptr->request_num);
        }
        *((_DWORD *)&v82._anon_0._M_allocated_capacity + 3) = level_config_ptr->request_num;
        __for_range = (std::map<unsigned int,CityReputation::RequestInfo> *)(v82._M_string_length + 208);
        __for_end_0._M_current = (unsigned int *)std::map<unsigned int,CityReputation::RequestInfo>::begin((std::map<unsigned int,CityReputation::RequestInfo> *const)(v82._M_string_length + 208))._M_node;
        __for_end._M_node = std::map<unsigned int,CityReputation::RequestInfo>::end((std::map<unsigned int,CityReputation::RequestInfo> *const)(v82._M_string_length + 208))._M_node;
        while ( std::operator!=(
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,CityReputation::RequestInfo> >::_Self *)&__for_end_0,
                  &__for_end) )
        {
          v95 = std::_Rb_tree_iterator<std::pair<unsigned int const,CityReputation::RequestInfo>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,CityReputation::RequestInfo> > *const)&__for_end_0);
          request_id = std::get<0ul,unsigned int const,CityReputation::RequestInfo>(v95);
          _ = (std::tuple_element<1,const std::pair<unsigned int const,CityReputation::RequestInfo> >::type *)std::get<1ul,unsigned int const,CityReputation::RequestInfo>(v95);
          std::deque<unsigned int>::push_back((std::deque<unsigned int> *const)(v82._M_string_length + 128), request_id);
          std::_Rb_tree_iterator<std::pair<unsigned int const,CityReputation::RequestInfo>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,CityReputation::RequestInfo> > *const)&__for_end_0);
        }
        while ( 1 )
        {
          v13 = std::deque<unsigned int>::size((const std::deque<unsigned int> *const)(v82._M_string_length + 128));
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v100);
          v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v100);
          LOBYTE(v13) = v13 > ConstValueExcelConfigMgr::getCityReputationHistoryRequestNum(&v14->design_config.txt_config_mgr.const_value_config_mgr);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v100);
          if ( !(_BYTE)v13 )
            break;
          std::deque<unsigned int>::pop_front((std::deque<unsigned int> *const)(v82._M_string_length + 128));
        }
        v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 112));
        BasicComp = Player::getBasicComp(v15);
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v101, BasicComp);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 32), 0xB63u, v82);
        std::string::~string(&v101);
        Now = (unsigned int)common::tools::TimeUtils::getNow();
        if ( *(_BYTE *)(((unsigned __int64)&thisa->last_refresh_request_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&thisa->last_refresh_request_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&thisa->last_refresh_request_time_, Now, (_BYTE)thisa);
        }
        thisa->last_refresh_request_time_ = Now;
        v18 = ((_BYTE)thisa + 4) & 7;
        v19 = (*(_BYTE *)(((unsigned __int64)&thisa->is_new_request_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v18 >= *(_BYTE *)(((unsigned __int64)&thisa->is_new_request_ >> 3) + 0x7FFF8000));
        if ( (_BYTE)v19 )
          __asan_report_store1(&thisa->is_new_request_, v18, v19);
        thisa->is_new_request_ = 1;
        CityReputation::clearAllRequest(thisa);
        if ( !std::deque<unsigned int>::empty(&thisa->history_request_deque_) )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v100);
          v20 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v100)->design_config.txt_config_mgr.reputation_config_mgr;
          v21 = std::deque<unsigned int>::front(&thisa->history_request_deque_);
          v22 = v21;
          if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v21);
          }
          request_config_ptr = data::ReputationExcelConfigMgrBase::findReputationRequestExcelConfig(v20, *v22);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v100);
          if ( !request_config_ptr )
            goto LABEL_36;
          if ( *(_BYTE *)(((unsigned __int64)&request_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&request_config_ptr->group_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&request_config_ptr->group_id);
          }
          if ( group_id != request_config_ptr->group_id )
          {
LABEL_36:
            std::deque<unsigned int>::clear(&thisa->history_request_deque_);
            common::milog::MiLogStream::create(
              &v101,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/reputation/city_reputation.cpp",
              "doRefreshRequest",
              561);
            v23 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                    &v101,
                    (const char (*)[57])"clear history_request_vec_ becauseof new group, city_id:");
            v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &thisa->city_id_);
            v25 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v24, (const char (*)[6])" uid:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v1 + 48));
            common::milog::MiLogStream::~MiLogStream(&v101);
          }
        }
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 176));
        std::map<unsigned int,std::vector<unsigned int>>::map((std::map<unsigned int,std::vector<unsigned int>> *const)(v1 + 368));
        CityReputation::calculateCandidateNpcRequest(
          thisa,
          group_id,
          (std::vector<unsigned int> *)(v1 + 176),
          (std::map<unsigned int,std::vector<unsigned int>> *)(v1 + 368));
        if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v1 + 176)) < request_num
          && !std::deque<unsigned int>::empty(&thisa->history_request_deque_) )
        {
          std::deque<unsigned int>::clear(&thisa->history_request_deque_);
          std::vector<unsigned int>::clear((std::vector<unsigned int> *const)(v1 + 176));
          std::map<unsigned int,std::vector<unsigned int>>::clear((std::map<unsigned int,std::vector<unsigned int>> *const)(v1 + 368));
          CityReputation::calculateCandidateNpcRequest(
            thisa,
            group_id,
            (std::vector<unsigned int> *)(v1 + 176),
            (std::map<unsigned int,std::vector<unsigned int>> *)(v1 + 368));
          common::milog::MiLogStream::create(
            &v101,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/reputation/city_reputation.cpp",
            "doRefreshRequest",
            576);
          v27 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v101, (const char (*)[5])"uid:");
          v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v27,
                  (const unsigned int *)(v1 + 48));
          v29 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v28, (const char (*)[10])" city_id:");
          v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &thisa->city_id_);
          common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            v30,
            (const char (*)[23])" clear history request");
          common::milog::MiLogStream::~MiLogStream(&v101);
        }
        if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v1 + 176)) )
        {
          common::milog::MiLogStream::create(
            &v101,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/reputation/city_reputation.cpp",
            "doRefreshRequest",
            581);
          v31 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v101, (const char (*)[5])"uid:");
          v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v31,
                  (const unsigned int *)(v1 + 48));
          v33 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v32, (const char (*)[10])" city_id:");
          v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &thisa->city_id_);
          v35 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  v34,
                  (const char (*)[20])" candidate_npc_vec:");
          common::milog::MiLogStream::operator<<<unsigned int>(v35, (const std::vector<unsigned int> *)(v1 + 176));
          common::milog::MiLogStream::~MiLogStream(&v101);
          v4 = -1;
        }
        else
        {
          if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v1 + 176)) < request_num )
          {
            common::milog::MiLogStream::create(
              &v101,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/reputation/city_reputation.cpp",
              "doRefreshRequest",
              587);
            v36 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v101, (const char (*)[5])"uid:");
            v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v36,
                    (const unsigned int *)(v1 + 48));
            v38 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v37, (const char (*)[10])" city_id:");
            v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &thisa->city_id_);
            v40 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                    v39,
                    (const char (*)[20])" candidate_npc_vec:");
            common::milog::MiLogStream::operator<<<unsigned int>(v40, (const std::vector<unsigned int> *)(v1 + 176));
            common::milog::MiLogStream::~MiLogStream(&v101);
          }
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 240));
          common::tools::RandomUtils::randomSelect<unsigned int>(
            (const std::vector<unsigned int> *)(v1 + 176),
            (std::vector<unsigned int> *)(v1 + 240),
            request_num);
          if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v1 + 240)) )
          {
            common::milog::MiLogStream::create(
              &v101,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/reputation/city_reputation.cpp",
              "doRefreshRequest",
              595);
            v41 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    &v101,
                    (const char (*)[29])"randomSelect npc fails, uid:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, (const unsigned int *)(v1 + 48));
            common::milog::MiLogStream::~MiLogStream(&v101);
            v4 = -1;
          }
          else
          {
            std::vector<CityReputation::RequestWeight>::vector((std::vector<CityReputation::RequestWeight> *const)(v1 + 304));
            __for_range_0 = (std::vector<unsigned int> *)(v1 + 240);
            __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 240))._M_current;
            __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
            while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
            {
              v42 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
              v43 = v42;
              if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v42 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v42);
              }
              *(_DWORD *)(v1 + 64) = *v43;
              request_id_vec = std::map<unsigned int,std::vector<unsigned int>>::operator[](
                                 (std::map<unsigned int,std::vector<unsigned int>> *const)(v1 + 368),
                                 (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v1 + 64));
              v44 = std::vector<unsigned int>::size(request_id_vec);
              std::vector<CityReputation::RequestWeight>::resize(
                (std::vector<CityReputation::RequestWeight> *const)(v1 + 304),
                v44);
              for ( idx = 0; idx < std::vector<unsigned int>::size(request_id_vec); ++idx )
              {
                v45 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](request_id_vec, idx);
                v46 = (int *)v45;
                if ( *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v45 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v45);
                }
                v47 = *v46;
                v48 = idx;
                v49 = std::vector<CityReputation::RequestWeight>::operator[](
                        (std::vector<CityReputation::RequestWeight> *const)(v1 + 304),
                        idx);
                v50 = v49;
                v51 = *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000);
                if ( v51 != 0 && (char)(((unsigned __int8)v49 & 7) + 3) >= v51 )
                {
                  LOBYTE(v48) = v51 != 0;
                  __asan_report_store4(v49, v48, (_BYTE)v49);
                }
                *v50 = v47;
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)&v100);
                v52 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v100)->design_config.txt_config_mgr.reputation_config_mgr;
                v53 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](request_id_vec, idx);
                v54 = v53;
                if ( *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v53 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v53);
                }
                request_config_ptr_0 = data::ReputationExcelConfigMgrBase::findReputationRequestExcelConfig(v52, *v54);
                std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v100);
                if ( request_config_ptr_0 )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&request_config_ptr_0->weight >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)request_config_ptr_0 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&request_config_ptr_0->weight >> 3)
                                                                                        + 0x7FFF8000) )
                  {
                    __asan_report_load4(&request_config_ptr_0->weight);
                  }
                  weight = request_config_ptr_0->weight;
                  v56 = idx;
                  v57 = std::vector<CityReputation::RequestWeight>::operator[](
                          (std::vector<CityReputation::RequestWeight> *const)(v1 + 304),
                          idx);
                  v58 = *(_BYTE *)(((unsigned __int64)&v57->weight >> 3) + 0x7FFF8000);
                  if ( v58 != 0 && (char)((((_BYTE)v57 + 4) & 7) + 3) >= v58 )
                  {
                    LOBYTE(v56) = v58 != 0;
                    __asan_report_store4(&v57->weight, v56, (_BYTE)v57);
                  }
                  v57->weight = weight;
                }
                else
                {
                  v59 = idx;
                  v60 = std::vector<CityReputation::RequestWeight>::operator[](
                          (std::vector<CityReputation::RequestWeight> *const)(v1 + 304),
                          idx);
                  v61 = *(_BYTE *)(((unsigned __int64)&v60->weight >> 3) + 0x7FFF8000);
                  if ( v61 != 0 && (char)((((_BYTE)v60 + 4) & 7) + 3) >= v61 )
                  {
                    LOBYTE(v59) = v61 != 0;
                    __asan_report_store4(&v60->weight, v59, (_BYTE)v60);
                  }
                  v60->weight = 0;
                }
              }
              *(_DWORD *)(v1 + 80) = 0;
              if ( !common::tools::RandomUtils::weightSelectOne<CityReputation::RequestWeight,unsigned int CityReputation::RequestWeight::*>(
                      (const std::vector<CityReputation::RequestWeight> *)(v1 + 304),
                      (uint32_t *)(v1 + 80),
                      (unsigned int *)4,
                      0) )
              {
                v62 = *(unsigned int *)(v1 + 80);
                if ( v62 < std::vector<CityReputation::RequestWeight>::size((const std::vector<CityReputation::RequestWeight> *const)(v1 + 304)) )
                {
                  v64 = std::vector<CityReputation::RequestWeight>::operator[](
                          (std::vector<CityReputation::RequestWeight> *const)(v1 + 304),
                          *(unsigned int *)(v1 + 80));
                  v65 = v64;
                  if ( *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v64 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v64);
                  }
                  *(_DWORD *)(v1 + 96) = *v65;
                  LODWORD(__for_end._M_node) = 0;
                  BYTE4(__for_end._M_node) = 0;
                  CityReputation::RequestInfo::RequestInfo((CityReputation::RequestInfo *const)&__for_end);
                  v66 = (std::map<unsigned int,CityReputation::RequestInfo>::iterator *)std::map<unsigned int,CityReputation::RequestInfo>::operator[](
                                                                                          &thisa->request_map_,
                                                                                          (const std::map<unsigned int,CityReputation::RequestInfo>::key_type *)(v1 + 96));
                  v67 = v66;
                  if ( ((unsigned __int8)v66 & 7) >= *(_BYTE *)(((unsigned __int64)v66 >> 3) + 0x7FFF8000)
                    && *(_BYTE *)(((unsigned __int64)v66 >> 3) + 0x7FFF8000) != 0
                    || *(_BYTE *)((((unsigned __int64)&v66->_M_node + 7) >> 3) + 0x7FFF8000) != 0
                    && (((unsigned __int8)v66 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v66->_M_node + 7) >> 3)
                                                                    + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v66, 8LL);
                  }
                  v67->_M_node = __for_end._M_node;
                  common::milog::MiLogStream::create(
                    &v101,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/reputation/city_reputation.cpp",
                    "doRefreshRequest",
                    629);
                  v68 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v101, (const char (*)[6])"uid: ");
                  v69 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v68,
                          (const unsigned int *)(v1 + 48));
                  v70 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                          v69,
                          (const char (*)[10])" city_id:");
                  v71 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v70, &thisa->city_id_);
                  v72 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                          v71,
                          (const char (*)[20])" select request_id:");
                  v73 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v72,
                          (const unsigned int *)(v1 + 96));
                  v74 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v73, (const char (*)[6])" npc:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v74,
                    (const unsigned int *)(v1 + 64));
                  common::milog::MiLogStream::~MiLogStream(&v101);
                  common::tools::perf::make_shared<proto_log::PlayerLogBodyCityReputationRequestStatus>();
                  v75 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 144));
                  if ( *(_BYTE *)(((unsigned __int64)&thisa->city_id_ >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&thisa->city_id_ >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&thisa->city_id_);
                  }
                  proto_log::PlayerLogBodyCityReputationRequestStatus::set_city_id(v75, thisa->city_id_);
                  v76 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 144));
                  proto_log::PlayerLogBodyCityReputationRequestStatus::set_request_id(v76, *(_DWORD *)(v1 + 96));
                  v77 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 144));
                  proto_log::PlayerLogBodyCityReputationRequestStatus::set_quest_id(v77, 0);
                  v78 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 144));
                  proto_log::PlayerLogBodyCityReputationRequestStatus::set_status(v78, 1u);
                  v79 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 144));
                  proto_log::PlayerLogBodyCityReputationRequestStatus::set_reward_id(v79, 0);
                  v80 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 112));
                  std::shared_ptr<google::protobuf::Message>::shared_ptr(&v100, 0LL);
                  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyCityReputationRequestStatus,void>(
                    &p_body_ptr,
                    (const std::shared_ptr<proto_log::PlayerLogBodyCityReputationRequestStatus> *)(v1 + 144));
                  Player::printStatLog(v80, &p_body_ptr, &v100, 0xEu);
                  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
                  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v100);
                  std::shared_ptr<proto_log::PlayerLogBodyCityReputationRequestStatus>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyCityReputationRequestStatus> *const)(v1 + 144));
                }
              }
              __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
            }
            v4 = 0;
            std::vector<CityReputation::RequestWeight>::~vector((std::vector<CityReputation::RequestWeight> *const)(v1 + 304));
          }
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 240));
        }
        std::map<unsigned int,std::vector<unsigned int>>::~map((std::map<unsigned int,std::vector<unsigned int>> *const)(v1 + 368));
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 176));
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 32));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v101,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/reputation/city_reputation.cpp",
          "doRefreshRequest",
          528);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          &v101,
          (const char (*)[35])"level_config_ptr->request_num is 0");
        common::milog::MiLogStream::~MiLogStream(&v101);
        v4 = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v101,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/reputation/city_reputation.cpp",
        "doRefreshRequest",
        523);
      v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v101,
             (const char (*)[34])"findReputationLevelConfig fails, ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
             v8,
             (const unsigned int *)(v82._M_string_length + 16));
      v10 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v9, (const char (*)[2])" ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v10,
              (const unsigned int *)(v82._M_string_length + 20));
      v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::~MiLogStream(&v101);
      v4 = -1;
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 112));
  result = v4;
  if ( v102 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8034) = 0;
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
  }
  return result;
};

// Line 643: range 0000000015CB9038-0000000015CB95AE
void __cdecl CityReputation::clearAllRequest(CityReputation *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::tuple_element<1,const std::pair<unsigned int const,CityReputation::RequestInfo> >::type *v4; // rax
  Player *v5; // rax
  PlayerQuestComp *QuestComp; // rcx
  Player *v7; // rax
  PlayerQuestComp *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  Player *v14; // r14
  uint32_t parent_quest_id; // [rsp+1Ch] [rbp-104h]
  std::map<unsigned int,CityReputation::RequestInfo>::iterator __for_begin; // [rsp+20h] [rbp-100h] BYREF
  std::map<unsigned int,CityReputation::RequestInfo>::iterator __for_end; // [rsp+28h] [rbp-F8h] BYREF
  std::map<unsigned int,CityReputation::RequestInfo> *__for_range; // [rsp+30h] [rbp-F0h]
  const std::pair<unsigned int const,CityReputation::RequestInfo> *v19; // [rsp+38h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,CityReputation::RequestInfo> >::type *request_id; // [rsp+40h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,CityReputation::RequestInfo> >::type *request_info; // [rsp+48h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+50h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+60h] [rbp-C0h] BYREF
  common::milog::MiLogStream v24; // [rsp+70h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+90h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 14 player_ptr:644 64 16 11 log_ptr:658";
  *(_QWORD *)(v1 + 16) = CityReputation::clearAllRequest;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  CityReputation::getPlayer((const CityReputation *const)(v1 + 32));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reputation/city_reputation.cpp",
      "clearAllRequest",
      647);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v24, (const char (*)[16])"getPlayer fails");
    common::milog::MiLogStream::~MiLogStream(&v24);
  }
  else
  {
    __for_range = &this->request_map_;
    __for_begin._M_node = std::map<unsigned int,CityReputation::RequestInfo>::begin(&this->request_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,CityReputation::RequestInfo>::end(&this->request_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v19 = std::_Rb_tree_iterator<std::pair<unsigned int const,CityReputation::RequestInfo>>::operator*(&__for_begin);
      request_id = std::get<0ul,unsigned int const,CityReputation::RequestInfo>(v19);
      v4 = (std::tuple_element<1,const std::pair<unsigned int const,CityReputation::RequestInfo> >::type *)std::get<1ul,unsigned int const,CityReputation::RequestInfo>(v19);
      request_info = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4);
      }
      if ( request_info->quest_id )
      {
        v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        QuestComp = Player::getQuestComp(v5);
        if ( *(_BYTE *)(((unsigned __int64)request_info >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)request_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)request_info >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(request_info);
        }
        parent_quest_id = PlayerQuestComp::findParentQuestId(QuestComp, request_info->quest_id);
        v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        v8 = Player::getQuestComp(v7);
        PlayerQuestComp::cancelParentQuest(v8, parent_quest_id, 1);
      }
      common::tools::perf::make_shared<proto_log::PlayerLogBodyCityReputationRequestStatus>();
      v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->city_id_);
      }
      proto_log::PlayerLogBodyCityReputationRequestStatus::set_city_id(v9, this->city_id_);
      v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( *(_BYTE *)(((unsigned __int64)request_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)request_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)request_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(request_id);
      }
      proto_log::PlayerLogBodyCityReputationRequestStatus::set_request_id(v10, *request_id);
      v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( *(_BYTE *)(((unsigned __int64)request_info >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)request_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)request_info >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(request_info);
      }
      proto_log::PlayerLogBodyCityReputationRequestStatus::set_quest_id(v11, request_info->quest_id);
      v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      proto_log::PlayerLogBodyCityReputationRequestStatus::set_status(v12, 3u);
      v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      proto_log::PlayerLogBodyCityReputationRequestStatus::set_reward_id(v13, 0);
      v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyCityReputationRequestStatus,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyCityReputationRequestStatus> *)(v1 + 64));
      Player::printStatLog(v14, &p_body_ptr, &p_body_ext_ptr, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
      std::shared_ptr<proto_log::PlayerLogBodyCityReputationRequestStatus>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyCityReputationRequestStatus> *const)(v1 + 64));
      std::_Rb_tree_iterator<std::pair<unsigned int const,CityReputation::RequestInfo>>::operator++(&__for_begin);
    }
    std::map<unsigned int,CityReputation::RequestInfo>::clear(&this->request_map_);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  if ( v25 == (char *)v1 )
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

// Line 670: range 0000000015CB95B0-0000000015CB9AF3
void __fastcall CityReputation::calculateCandidateNpcRequest(
        CityReputation *const this,
        uint32_t group_id,
        std::vector<unsigned int> *candidate_npc_vec,
        std::map<unsigned int,std::vector<unsigned int>> *candidate_npc_request_map)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::vector<unsigned int> *v10; // r14
  std::vector<unsigned int>::size_type v11; // rax
  std::vector<unsigned int> *v12; // rax
  const unsigned int *v13; // r15
  const unsigned int *v14; // r14
  std::vector<unsigned int>::const_iterator v15; // rax
  std::map<unsigned int,std::vector<unsigned int>>::mapped_type *v16; // rax
  std::vector<unsigned int> *__result; // [rsp+10h] [rbp-1B0h]
  const unsigned int *__last2; // [rsp+18h] [rbp-1A8h]
  std::map<unsigned int,std::vector<unsigned int>>::const_iterator __for_begin; // [rsp+40h] [rbp-180h] BYREF
  std::map<unsigned int,std::vector<unsigned int>>::const_iterator __for_end; // [rsp+48h] [rbp-178h] BYREF
  const std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>> *group_npc_request_config_map; // [rsp+50h] [rbp-170h]
  const std::map<unsigned int,std::vector<unsigned int>> *npc_request_config_map; // [rsp+58h] [rbp-168h]
  const std::map<unsigned int,std::vector<unsigned int>> *__for_range; // [rsp+60h] [rbp-160h]
  const std::pair<unsigned int const,std::vector<unsigned int> > *v26; // [rsp+68h] [rbp-158h]
  std::tuple_element<0,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *npc_id; // [rsp+70h] [rbp-150h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *request_id_vec; // [rsp+78h] [rbp-148h]
  std::shared_ptr<Config> v29; // [rsp+80h] [rbp-140h] BYREF
  common::milog::MiLogStream v30; // [rsp+90h] [rbp-130h] BYREF
  std::deque<unsigned int>::iterator __last; // [rsp+B0h] [rbp-110h] BYREF
  std::deque<unsigned int>::iterator __first; // [rsp+D0h] [rbp-F0h] BYREF
  char v33[208]; // [rsp+F0h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 12 group_id:669 64 8 8 iter:676 96 24 23 exclude_request_vec:671";
  *(_QWORD *)(v4 + 16) = CityReputation::calculateCandidateNpcRequest;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  *(_DWORD *)(v4 + 48) = group_id;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 96));
  std::deque<unsigned int>::end(&__last, &this->history_request_deque_);
  std::deque<unsigned int>::begin(&__first, &this->history_request_deque_);
  __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Base_ptr)std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v4 + 96))._M_current;
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
    (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_end,
    (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin);
  std::vector<unsigned int>::insert<std::_Deque_iterator<unsigned int,unsigned int &,unsigned int *>,void>(
    (std::vector<unsigned int> *const)(v4 + 96),
    (std::vector<unsigned int>::const_iterator)__for_end._M_node,
    __first,
    __last);
  M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v4 + 96))._M_current;
  v8._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v4 + 96))._M_current;
  std::sort<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
    v8,
    (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v29);
  group_npc_request_config_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29)->design_config.txt_config_mgr.reputation_config_mgr.group_npc_request_map;
  std::shared_ptr<Config>::~shared_ptr(&v29);
  *(std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>::const_iterator *)(v4 + 64) = std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>::find(group_npc_request_config_map, (const std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>::key_type *)(v4 + 48));
  __for_end._M_node = std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>::end(group_npc_request_config_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<unsigned int>> > >::_Self *)(v4 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<unsigned int>> > >::_Self *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reputation/city_reputation.cpp",
      "calculateCandidateNpcRequest",
      679);
    v9 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v30,
           (const char (*)[42])"find group_npc_request_config_map fails, ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v30);
  }
  else
  {
    npc_request_config_map = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<unsigned int>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<unsigned int>> > > *const)(v4 + 64))->second;
    __for_range = npc_request_config_map;
    __for_begin._M_node = std::map<unsigned int,std::vector<unsigned int>>::begin(npc_request_config_map)._M_node;
    __for_end._M_node = std::map<unsigned int,std::vector<unsigned int>>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v26 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator*(&__for_begin);
      npc_id = std::get<0ul,unsigned int const,std::vector<unsigned int>>(v26);
      request_id_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::vector<unsigned int>>(v26);
      v10 = std::map<unsigned int,std::vector<unsigned int>>::operator[](candidate_npc_request_map, npc_id);
      v11 = std::vector<unsigned int>::size(request_id_vec);
      std::vector<unsigned int>::reserve(v10, v11);
      v12 = std::map<unsigned int,std::vector<unsigned int>>::operator[](candidate_npc_request_map, npc_id);
      __result = std::back_inserter<std::vector<unsigned int>>(v12).container;
      __last2 = std::vector<unsigned int>::cend((const std::vector<unsigned int> *const)(v4 + 96))._M_current;
      v13 = std::vector<unsigned int>::cbegin((const std::vector<unsigned int> *const)(v4 + 96))._M_current;
      v14 = std::vector<unsigned int>::cend(request_id_vec)._M_current;
      v15._M_current = std::vector<unsigned int>::cbegin(request_id_vec)._M_current;
      std::set_difference<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,std::back_insert_iterator<std::vector<unsigned int>>>(
        v15,
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v14,
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v13,
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)__last2,
        (std::back_insert_iterator<std::vector<unsigned int> >)__result);
      v16 = std::map<unsigned int,std::vector<unsigned int>>::operator[](candidate_npc_request_map, npc_id);
      if ( !std::vector<unsigned int>::empty(v16) )
        std::vector<unsigned int>::push_back(candidate_npc_vec, npc_id);
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator++(&__for_begin);
    }
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 96));
  if ( v33 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 700: range 0000000015CB9AF4-0000000015CBA68E
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CityReputation::acceptRequest(CityReputation *const this, uint32_t request_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  ReputationExcelConfigMgr *p_reputation_config_mgr; // rdi
  uint32_t v12; // edx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  Player *v16; // rax
  PlayerReputationComp *ReputationComp; // rax
  uint32_t AcceptRequestNum; // ecx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  __int64 v23; // rsi
  uint32_t quest_id; // ecx
  char v25; // dl
  bool v26; // dl
  Player *v27; // rax
  PlayerQuestComp *QuestComp; // rax
  Player *v29; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  Player *v36; // r14
  __int64 result; // rax
  std::string v38; // [rsp+0h] [rbp-170h] OVERLAPPED BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,CityReputation::RequestInfo> >::_Self __y; // [rsp+20h] [rbp-150h] BYREF
  CityReputation::RequestInfo *request_info; // [rsp+28h] [rbp-148h]
  const data::ReputationLevelExcelConfig *level_config_ptr; // [rsp+30h] [rbp-140h]
  const data::ReputationRequestExcelConfig *request_config_ptr; // [rsp+38h] [rbp-138h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+40h] [rbp-130h] BYREF
  std::shared_ptr<google::protobuf::Message> v44; // [rsp+50h] [rbp-120h] BYREF
  common::milog::MiLogStream v45; // [rsp+60h] [rbp-110h] BYREF
  char v46[240]; // [rsp+80h] [rbp-F0h] BYREF

  v38._M_string_length = (std::string::size_type)this;
  HIDWORD(v38._M_dataplus._M_p) = request_id;
  v2 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 1 10 holder:761 64 4 7 ret:701 80 4 14 request_id:699 96 8 8 iter:718 128 16 14 player_ptr:"
                        "712 160 16 11 log_ptr:762";
  *(_QWORD *)(v2 + 16) = CityReputation::acceptRequest;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  *(_DWORD *)(v2 + 80) = HIDWORD(v38._M_dataplus._M_p);
  *(_DWORD *)(v2 + 64) = CityReputation::checkCityReputationOpen((const CityReputation *const)v38._M_string_length);
  if ( *(_DWORD *)(v2 + 64) )
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reputation/city_reputation.cpp",
      "acceptRequest",
      704);
    v5 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v45,
           (const char (*)[36])"checkCityReputationOpen fails, ret:");
    common::milog::MiLogStream::operator<<<int,(int *)0>(v5, (const int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v45);
    v6 = *(_DWORD *)(v2 + 64);
  }
  else if ( !CityReputation::isRequestEntranceOpen((const CityReputation *const)v38._M_string_length) )
  {
    v6 = 7109;
  }
  else
  {
    CityReputation::getPlayer((const CityReputation *const)(v2 + 128));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/reputation/city_reputation.cpp",
        "acceptRequest",
        715);
      common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v45, (const char (*)[16])"getPlayer fails");
      common::milog::MiLogStream::~MiLogStream(&v45);
      v6 = -1;
    }
    else
    {
      *(std::map<unsigned int,CityReputation::RequestInfo>::iterator *)(v2 + 96) = std::map<unsigned int,CityReputation::RequestInfo>::find(
                                                                                     (std::map<unsigned int,CityReputation::RequestInfo> *const)(v38._M_string_length + 208),
                                                                                     (const std::map<unsigned int,CityReputation::RequestInfo>::key_type *)(v2 + 80));
      __y._M_node = std::map<unsigned int,CityReputation::RequestInfo>::end((std::map<unsigned int,CityReputation::RequestInfo> *const)(v38._M_string_length + 208))._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,CityReputation::RequestInfo> >::_Self *)(v2 + 96),
             &__y) )
      {
        common::milog::MiLogStream::create(
          &v45,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/reputation/city_reputation.cpp",
          "acceptRequest",
          721);
        v7 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v45, (const char (*)[5])"uid:");
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        *((_DWORD *)&v38._anon_0._M_allocated_capacity + 3) = Player::getUid(v8);
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v7,
               (const unsigned int *)&v38._anon_0._M_allocated_capacity + 3);
        v10 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v9,
                (const char (*)[21])" not has request_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 80));
        common::milog::MiLogStream::~MiLogStream(&v45);
        v6 = -1;
      }
      else
      {
        request_info = &std::_Rb_tree_iterator<std::pair<unsigned int const,CityReputation::RequestInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CityReputation::RequestInfo> > *const)(v2 + 96))->second;
        if ( *(_BYTE *)(((unsigned __int64)request_info >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)request_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)request_info >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(request_info);
        }
        if ( request_info->quest_id )
        {
          v6 = 7106;
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v44);
          p_reputation_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v44)->design_config.txt_config_mgr.reputation_config_mgr;
          if ( *(_BYTE *)(((v38._M_string_length + 20) >> 3) + 0x7FFF8000) != 0
            && (char)(((LOBYTE(v38._M_string_length) + 20) & 7) + 3) >= *(_BYTE *)(((v38._M_string_length + 20) >> 3)
                                                                                 + 0x7FFF8000) )
          {
            p_reputation_config_mgr = (ReputationExcelConfigMgr *)(v38._M_string_length + 20);
            __asan_report_load4(v38._M_string_length + 20);
          }
          v12 = *(_DWORD *)(v38._M_string_length + 20);
          if ( *(_BYTE *)(((v38._M_string_length + 16) >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((v38._M_string_length + 16) >> 3) + 0x7FFF8000) <= 3 )
          {
            p_reputation_config_mgr = (ReputationExcelConfigMgr *)(v38._M_string_length + 16);
            __asan_report_load4(v38._M_string_length + 16);
          }
          level_config_ptr = ReputationExcelConfigMgr::findReputationLevelConfig(
                               p_reputation_config_mgr,
                               *(_DWORD *)(v38._M_string_length + 16),
                               v12);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v44);
          if ( level_config_ptr )
          {
            v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            ReputationComp = Player::getReputationComp(v16);
            AcceptRequestNum = PlayerReputationComp::getAcceptRequestNum(ReputationComp);
            if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->request_accept_num >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)level_config_ptr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->request_accept_num >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4(&level_config_ptr->request_accept_num);
            }
            if ( AcceptRequestNum < level_config_ptr->request_accept_num )
            {
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v44);
              v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v44);
              request_config_ptr = data::ReputationExcelConfigMgrBase::findReputationRequestExcelConfig(
                                     &v19->design_config.txt_config_mgr.reputation_config_mgr,
                                     *(_DWORD *)(v2 + 80));
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v44);
              if ( request_config_ptr )
              {
                if ( *(_BYTE *)(((unsigned __int64)&request_config_ptr->quest_id >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)request_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&request_config_ptr->quest_id >> 3)
                                                                                    + 0x7FFF8000) )
                {
                  __asan_report_load4(&request_config_ptr->quest_id);
                }
                if ( request_config_ptr->quest_id )
                {
                  v23 = (((_BYTE)request_config_ptr + 12) & 7u) + 3;
                  if ( *(_BYTE *)(((unsigned __int64)&request_config_ptr->quest_id >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)request_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&request_config_ptr->quest_id >> 3)
                                                                                      + 0x7FFF8000) )
                  {
                    __asan_report_load4(&request_config_ptr->quest_id);
                  }
                  quest_id = request_config_ptr->quest_id;
                  v25 = *(_BYTE *)(((unsigned __int64)request_info >> 3) + 0x7FFF8000);
                  LOBYTE(v23) = v25 != 0;
                  v26 = v25 != 0 && (char)(((unsigned __int8)request_info & 7) + 3) >= v25;
                  if ( v26 )
                    __asan_report_store4(request_info, v23, v26);
                  request_info->quest_id = quest_id;
                  CityReputation::clearNewRefreshRequest((CityReputation *const)v38._M_string_length);
                  v27 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                  QuestComp = Player::getQuestComp(v27);
                  PlayerQuestComp::tryAcceptQuestByCond(QuestComp, QUEST_COND_CITY_REPUTATION_REQUEST, 1, 0);
                  v29 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                  BasicComp = Player::getBasicComp(v29);
                  PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v45, BasicComp);
                  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xB63u, v38);
                  std::string::~string(&v45);
                  common::tools::perf::make_shared<proto_log::PlayerLogBodyCityReputationRequestStatus>();
                  v31 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                  if ( *(_BYTE *)(((v38._M_string_length + 16) >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((v38._M_string_length + 16) >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(v38._M_string_length + 16);
                  }
                  proto_log::PlayerLogBodyCityReputationRequestStatus::set_city_id(
                    v31,
                    *(_DWORD *)(v38._M_string_length + 16));
                  v32 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                  proto_log::PlayerLogBodyCityReputationRequestStatus::set_request_id(v32, *(_DWORD *)(v2 + 80));
                  v33 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                  if ( *(_BYTE *)(((unsigned __int64)request_info >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)request_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)request_info >> 3)
                                                                                   + 0x7FFF8000) )
                  {
                    __asan_report_load4(request_info);
                  }
                  proto_log::PlayerLogBodyCityReputationRequestStatus::set_quest_id(v33, request_info->quest_id);
                  v34 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                  proto_log::PlayerLogBodyCityReputationRequestStatus::set_status(v34, 2u);
                  v35 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                  proto_log::PlayerLogBodyCityReputationRequestStatus::set_reward_id(v35, 0);
                  v36 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                  std::shared_ptr<google::protobuf::Message>::shared_ptr(&v44, 0LL);
                  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyCityReputationRequestStatus,void>(
                    &p_body_ptr,
                    (const std::shared_ptr<proto_log::PlayerLogBodyCityReputationRequestStatus> *)(v2 + 160));
                  Player::printStatLog(v36, &p_body_ptr, &v44, 0xEu);
                  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
                  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v44);
                  v6 = 0;
                  std::shared_ptr<proto_log::PlayerLogBodyCityReputationRequestStatus>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyCityReputationRequestStatus> *const)(v2 + 160));
                  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v45,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/reputation/city_reputation.cpp",
                    "acceptRequest",
                    748);
                  v21 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                          &v45,
                          (const char (*)[12])"request_id:");
                  v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v21,
                          (const unsigned int *)(v2 + 80));
                  common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v22,
                    (const char (*)[15])" quest_id is 0");
                  common::milog::MiLogStream::~MiLogStream(&v45);
                  v6 = -1;
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v45,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/reputation/city_reputation.cpp",
                  "acceptRequest",
                  743);
                v20 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                        &v45,
                        (const char (*)[40])"findReputationRequestExcelConfig fails:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v20,
                  (const unsigned int *)(v2 + 80));
                common::milog::MiLogStream::~MiLogStream(&v45);
                v6 = -1;
              }
            }
            else
            {
              v6 = 7108;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v45,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/reputation/city_reputation.cpp",
              "acceptRequest",
              732);
            v13 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                    &v45,
                    (const char (*)[34])"findReputationLevelConfig fails, ");
            v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v13,
                    (const unsigned int *)(v38._M_string_length + 16));
            v15 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v14, (const char (*)[2])":");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v15,
              (const unsigned int *)(v38._M_string_length + 20));
            common::milog::MiLogStream::~MiLogStream(&v45);
            v6 = -1;
          }
        }
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
  }
  result = v6;
  if ( v46 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 774: range 0000000015CBA690-0000000015CBAFE5
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CityReputation::cancelRequest(CityReputation *const this, uint32_t request_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  Player *v11; // rax
  PlayerQuestComp *QuestComp; // rcx
  common::milog::MiLogStream *v13; // rax
  Player *v14; // rax
  PlayerQuestComp *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  Player *v21; // rax
  PlayerQuestComp *v22; // rax
  Player *v23; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  Player *v30; // r14
  __int64 result; // rax
  std::string v32; // [rsp+0h] [rbp-160h] OVERLAPPED BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,CityReputation::RequestInfo> >::_Self __y; // [rsp+20h] [rbp-140h] BYREF
  CityReputation::RequestInfo *request_info; // [rsp+28h] [rbp-138h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-130h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v37; // [rsp+50h] [rbp-110h] BYREF
  char v38[240]; // [rsp+70h] [rbp-F0h] BYREF

  v32._M_string_length = (std::string::size_type)this;
  HIDWORD(v32._M_dataplus._M_p) = request_id;
  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 10 holder:826 48 4 7 ret:775 64 4 19 parent_quest_id:808 80 4 14 request_id:773 96 8 8 it"
                        "er:792 128 16 14 player_ptr:786 160 16 11 log_ptr:827";
  *(_QWORD *)(v2 + 16) = CityReputation::cancelRequest;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  *(_DWORD *)(v2 + 80) = HIDWORD(v32._M_dataplus._M_p);
  *(_DWORD *)(v2 + 48) = CityReputation::checkCityReputationOpen((const CityReputation *const)v32._M_string_length);
  if ( *(_DWORD *)(v2 + 48) )
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reputation/city_reputation.cpp",
      "cancelRequest",
      778);
    v5 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v37,
           (const char (*)[36])"checkCityReputationOpen fails, ret:");
    common::milog::MiLogStream::operator<<<int,(int *)0>(v5, (const int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v37);
    v6 = *(_DWORD *)(v2 + 48);
  }
  else if ( !CityReputation::isRequestEntranceOpen((const CityReputation *const)v32._M_string_length) )
  {
    v6 = 7109;
  }
  else
  {
    CityReputation::getPlayer((const CityReputation *const)(v2 + 128));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/reputation/city_reputation.cpp",
        "cancelRequest",
        789);
      common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v37, (const char (*)[16])"getPlayer fails");
      common::milog::MiLogStream::~MiLogStream(&v37);
      v6 = -1;
    }
    else
    {
      *(std::map<unsigned int,CityReputation::RequestInfo>::iterator *)(v2 + 96) = std::map<unsigned int,CityReputation::RequestInfo>::find(
                                                                                     (std::map<unsigned int,CityReputation::RequestInfo> *const)(v32._M_string_length + 208),
                                                                                     (const std::map<unsigned int,CityReputation::RequestInfo>::key_type *)(v2 + 80));
      __y._M_node = std::map<unsigned int,CityReputation::RequestInfo>::end((std::map<unsigned int,CityReputation::RequestInfo> *const)(v32._M_string_length + 208))._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,CityReputation::RequestInfo> >::_Self *)(v2 + 96),
             &__y) )
      {
        common::milog::MiLogStream::create(
          &v37,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/reputation/city_reputation.cpp",
          "cancelRequest",
          795);
        v7 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v37, (const char (*)[5])"uid:");
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        *((_DWORD *)&v32._anon_0._M_allocated_capacity + 2) = Player::getUid(v8);
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v7,
               (const unsigned int *)&v32._anon_0._M_allocated_capacity + 2);
        v10 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v9,
                (const char (*)[21])" not has request_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 80));
        common::milog::MiLogStream::~MiLogStream(&v37);
        v6 = -1;
      }
      else
      {
        request_info = &std::_Rb_tree_iterator<std::pair<unsigned int const,CityReputation::RequestInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CityReputation::RequestInfo> > *const)(v2 + 96))->second;
        if ( *(_BYTE *)(((unsigned __int64)request_info >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)request_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)request_info >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(request_info);
        }
        if ( request_info->quest_id )
        {
          if ( *(_BYTE *)(((unsigned __int64)&request_info->is_taken_reward >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)request_info + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&request_info->is_taken_reward >> 3)
                                                                     + 0x7FFF8000) )
          {
            __asan_report_load1(&request_info->is_taken_reward);
          }
          if ( request_info->is_taken_reward )
          {
            v6 = 7110;
          }
          else
          {
            v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            QuestComp = Player::getQuestComp(v11);
            if ( *(_BYTE *)(((unsigned __int64)request_info >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)request_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)request_info >> 3)
                                                                             + 0x7FFF8000) )
            {
              __asan_report_load4(request_info);
            }
            *(_DWORD *)(v2 + 64) = PlayerQuestComp::findParentQuestId(QuestComp, request_info->quest_id);
            if ( *(_DWORD *)(v2 + 64) )
            {
              v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              v15 = Player::getQuestComp(v14);
              if ( PlayerQuestComp::isParentQuestOnceFinished(v15, *(_DWORD *)(v2 + 64)) )
              {
                common::milog::MiLogStream::create(
                  &v37,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/reputation/city_reputation.cpp",
                  "cancelRequest",
                  816);
                v16 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v37, (const char (*)[5])"uid:");
                v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                *((_DWORD *)&v32._anon_0._M_allocated_capacity + 2) = Player::getUid(v17);
                v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v16,
                        (const unsigned int *)&v32._anon_0._M_allocated_capacity + 2);
                v19 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                        v18,
                        (const char (*)[18])" parent_quest_id:");
                v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v19,
                        (const unsigned int *)(v2 + 64));
                common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v20, (const char (*)[11])" finished!");
                common::milog::MiLogStream::~MiLogStream(&v37);
                v6 = -1;
              }
              else
              {
                v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                v22 = Player::getQuestComp(v21);
                PlayerQuestComp::cancelParentQuest(v22, *(_DWORD *)(v2 + 64), 1);
                if ( *(_BYTE *)(((unsigned __int64)request_info >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)request_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)request_info >> 3)
                                                                                 + 0x7FFF8000) )
                {
                  __asan_report_load4(request_info);
                }
                *((_DWORD *)&v32._anon_0._M_allocated_capacity + 3) = request_info->quest_id;
                request_info->quest_id = 0;
                v23 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                BasicComp = Player::getBasicComp(v23);
                PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v37, BasicComp);
                StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xB63u, v32);
                std::string::~string(&v37);
                common::tools::perf::make_shared<proto_log::PlayerLogBodyCityReputationRequestStatus>();
                v25 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                if ( *(_BYTE *)(((v32._M_string_length + 16) >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((v32._M_string_length + 16) >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(v32._M_string_length + 16);
                }
                proto_log::PlayerLogBodyCityReputationRequestStatus::set_city_id(
                  v25,
                  *(_DWORD *)(v32._M_string_length + 16));
                v26 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                proto_log::PlayerLogBodyCityReputationRequestStatus::set_request_id(v26, *(_DWORD *)(v2 + 80));
                v27 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                proto_log::PlayerLogBodyCityReputationRequestStatus::set_quest_id(
                  v27,
                  *((google::protobuf::uint32 *)&v32._anon_0._M_allocated_capacity + 3));
                v28 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                proto_log::PlayerLogBodyCityReputationRequestStatus::set_status(v28, 3u);
                v29 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                proto_log::PlayerLogBodyCityReputationRequestStatus::set_reward_id(v29, 0);
                v30 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
                std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyCityReputationRequestStatus,void>(
                  &p_body_ptr,
                  (const std::shared_ptr<proto_log::PlayerLogBodyCityReputationRequestStatus> *)(v2 + 160));
                Player::printStatLog(v30, &p_body_ptr, &p_body_ext_ptr, 0xEu);
                std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
                std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
                v6 = 0;
                std::shared_ptr<proto_log::PlayerLogBodyCityReputationRequestStatus>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyCityReputationRequestStatus> *const)(v2 + 160));
                StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v37,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/reputation/city_reputation.cpp",
                "cancelRequest",
                811);
              v13 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                      &v37,
                      (const char (*)[35])"findParentQuestId fails, quest_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)request_info);
              common::milog::MiLogStream::~MiLogStream(&v37);
              v6 = -1;
            }
          }
        }
        else
        {
          v6 = 7107;
        }
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
  }
  result = v6;
  if ( v38 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 839: range 0000000015CBAFE6-0000000015CBB0CE
bool __cdecl CityReputation::isAcceptedByRequest(const CityReputation *const this, uint32_t quest_id)
{
  std::tuple_element<1,const std::pair<unsigned int const,CityReputation::RequestInfo> >::type *v2; // rax
  std::map<unsigned int,CityReputation::RequestInfo>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,CityReputation::RequestInfo>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::map<unsigned int,CityReputation::RequestInfo> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<unsigned int const,CityReputation::RequestInfo> *v7; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,CityReputation::RequestInfo> >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,CityReputation::RequestInfo> >::type *info; // [rsp+38h] [rbp-8h]

  __for_range = &this->request_map_;
  __for_begin._M_node = std::map<unsigned int,CityReputation::RequestInfo>::begin(&this->request_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,CityReputation::RequestInfo>::end(&this->request_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,CityReputation::RequestInfo>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,CityReputation::RequestInfo>(v7);
    v2 = (std::tuple_element<1,const std::pair<unsigned int const,CityReputation::RequestInfo> >::type *)std::get<1ul,unsigned int const,CityReputation::RequestInfo>(v7);
    info = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    if ( quest_id == info->quest_id )
      return 1;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,CityReputation::RequestInfo>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 851: range 0000000015CBB0D0-0000000015CBB1B6
uint32_t __cdecl CityReputation::getAcceptRequestNum(const CityReputation *const this)
{
  std::tuple_element<1,const std::pair<unsigned int const,CityReputation::RequestInfo> >::type *v1; // rax
  uint32_t num; // [rsp+1Ch] [rbp-34h]
  std::map<unsigned int,CityReputation::RequestInfo>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::map<unsigned int,CityReputation::RequestInfo>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::map<unsigned int,CityReputation::RequestInfo> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,CityReputation::RequestInfo> *v7; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,CityReputation::RequestInfo> >::type *_; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,CityReputation::RequestInfo> >::type *info; // [rsp+48h] [rbp-8h]

  num = 0;
  __for_range = &this->request_map_;
  __for_begin._M_node = std::map<unsigned int,CityReputation::RequestInfo>::begin(&this->request_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,CityReputation::RequestInfo>::end(&this->request_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,CityReputation::RequestInfo>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,CityReputation::RequestInfo>(v7);
    v1 = (std::tuple_element<1,const std::pair<unsigned int const,CityReputation::RequestInfo> >::type *)std::get<1ul,unsigned int const,CityReputation::RequestInfo>(v7);
    info = v1;
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v1);
    }
    if ( info->quest_id )
      ++num;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,CityReputation::RequestInfo>>::operator++(&__for_begin);
  }
  return num;
};

// Line 864: range 0000000015CBB1B8-0000000015CBB787
void __fastcall CityReputation::onParentQuestFinish(CityReputation *const this, uint32_t parent_quest_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  Player *v5; // rax
  std::tuple_element<1,std::pair<unsigned int const,CityReputation::RequestInfo> >::type *v6; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  uint32_t quest_id; // esi
  Player *v16; // rax
  PlayerEventComp *EventComp; // r14
  std::map<unsigned int,CityReputation::RequestInfo>::iterator __for_begin; // [rsp+18h] [rbp-118h] BYREF
  std::map<unsigned int,CityReputation::RequestInfo>::iterator __for_end; // [rsp+20h] [rbp-110h] BYREF
  PlayerQuestComp *quest_comp; // [rsp+28h] [rbp-108h]
  std::map<unsigned int,CityReputation::RequestInfo> *__for_range; // [rsp+30h] [rbp-100h]
  std::pair<unsigned int const,CityReputation::RequestInfo> *__in; // [rsp+38h] [rbp-F8h]
  std::tuple_element<0,std::pair<unsigned int const,CityReputation::RequestInfo> >::type *request_id; // [rsp+40h] [rbp-F0h]
  std::tuple_element<1,std::pair<unsigned int const,CityReputation::RequestInfo> >::type *info; // [rsp+48h] [rbp-E8h]
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+50h] [rbp-E0h] BYREF
  common::milog::MiLogStream v26; // [rsp+60h] [rbp-D0h] BYREF
  char v27[176]; // [rsp+80h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 19 parent_quest_id:863 64 16 14 player_ptr:865 96 16 13 event_ptr:885";
  *(_QWORD *)(v2 + 16) = CityReputation::onParentQuestFinish;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = parent_quest_id;
  CityReputation::getPlayer((const CityReputation *const)(v2 + 64));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reputation/city_reputation.cpp",
      "onParentQuestFinish",
      868);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v26, (const char (*)[16])"getPlayer fails");
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  else
  {
    v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    quest_comp = Player::getQuestComp(v5);
    __for_range = &this->request_map_;
    __for_begin._M_node = std::map<unsigned int,CityReputation::RequestInfo>::begin(&this->request_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,CityReputation::RequestInfo>::end(&this->request_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,CityReputation::RequestInfo>>::operator*(&__for_begin);
      request_id = std::get<0ul,unsigned int const,CityReputation::RequestInfo>(__in);
      v6 = std::get<1ul,unsigned int const,CityReputation::RequestInfo>(__in);
      info = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      if ( info->quest_id && PlayerQuestComp::findParentQuestId(quest_comp, info->quest_id) == *(_DWORD *)(v2 + 48) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&info->is_taken_reward >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)info + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&info->is_taken_reward >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&info->is_taken_reward);
        }
        if ( info->is_taken_reward )
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/reputation/city_reputation.cpp",
            "onParentQuestFinish",
            878);
          v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v26, (const char (*)[9])"city_id:");
          v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->city_id_);
          v10 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  v9,
                  (const char (*)[18])" parent_quest_id:");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v10,
                  (const unsigned int *)(v2 + 48));
          v12 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  v11,
                  (const char (*)[22])" is_taken_reward uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->player_uid_);
          common::milog::MiLogStream::~MiLogStream(&v26);
        }
        else
        {
          v13 = ((_BYTE)info + 4) & 7;
          v14 = (*(_BYTE *)(((unsigned __int64)&info->is_taken_reward >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&info->is_taken_reward >> 3) + 0x7FFF8000));
          if ( (_BYTE)v14 )
            __asan_report_store1(&info->is_taken_reward, v13, v14);
          info->is_taken_reward = 1;
          if ( *(_BYTE *)(((unsigned __int64)info >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)info >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(info);
          }
          quest_id = info->quest_id;
          if ( *(_BYTE *)(((unsigned __int64)request_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)request_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)request_id >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(request_id);
          }
          CityReputation::takeRequestFinishReward(this, *request_id, quest_id);
          common::tools::perf::make_shared<CityReputationFinishRequest,unsigned int &,unsigned int const&>(
            (unsigned int *)(v2 + 96),
            &this->city_id_,
            request_id,
            &this->city_id_);
          v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          EventComp = Player::getEventComp(v16);
          std::shared_ptr<BaseEvent>::shared_ptr<CityReputationFinishRequest,void>(
            &p_event_ptr,
            (const std::shared_ptr<CityReputationFinishRequest> *)(v2 + 96));
          PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
          std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
          std::shared_ptr<CityReputationFinishRequest>::~shared_ptr((std::shared_ptr<CityReputationFinishRequest> *const)(v2 + 96));
        }
        break;
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,CityReputation::RequestInfo>>::operator++(&__for_begin);
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  if ( v27 == (char *)v2 )
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

// Line 894: range 0000000015CBB788-0000000015CBBE71
// local variable allocation has failed, the output may be wrong!
void __fastcall CityReputation::takeRequestFinishReward(
        CityReputation *const this,
        uint32_t request_id,
        uint32_t quest_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  Player *v8; // rax
  PlayerItemComp *ItemComp; // rdi
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  Player *v15; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rcx
  Player *v22; // r14
  std::string quest_ida; // [rsp+0h] [rbp-150h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-130h] BYREF
  std::shared_ptr<google::protobuf::Message> v25; // [rsp+30h] [rbp-120h] BYREF
  common::milog::MiLogStream v26; // [rsp+40h] [rbp-110h] BYREF
  char v27[240]; // [rsp+60h] [rbp-F0h] BYREF

  quest_ida._M_string_length = (std::string::size_type)this;
  quest_ida._M_dataplus._M_p = (std::string::pointer)__PAIR64__(request_id, quest_id);
  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 1 10 holder:914 48 4 14 request_id:893 64 16 14 player_ptr:896 96 16 11 log_ptr:915 128 24 10 reason:908";
  *(_QWORD *)(v3 + 16) = CityReputation::takeRequestFinishReward;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = HIDWORD(quest_ida._M_dataplus._M_p);
  CityReputation::getPlayer((const CityReputation *const)(v3 + 64));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reputation/city_reputation.cpp",
      "takeRequestFinishReward",
      899);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v26, (const char (*)[16])"getPlayer fails");
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v25);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
    *(&quest_ida._anon_0._M_allocated_capacity + 1) = (std::string::size_type)data::ReputationExcelConfigMgrBase::findReputationRequestExcelConfig(
                                                                                &v6->design_config.txt_config_mgr.reputation_config_mgr,
                                                                                *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v25);
    if ( *(&quest_ida._anon_0._M_allocated_capacity + 1) )
    {
      ActionReason::ActionReason(
        (ActionReason *const)(v3 + 128),
        ACTION_REASON_CITY_REPUTATION_REQUEST,
        ITEM_LIMIT_CITY_REPUTATION_REQUEST);
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      ItemComp = Player::getItemComp(v8);
      if ( *(_BYTE *)(((*(&quest_ida._anon_0._M_allocated_capacity + 1) + 28) >> 3) + 0x7FFF8000) != 0
        && (char)(((quest_ida._anon_0._M_local_buf[8] + 28) & 7) + 3) >= *(_BYTE *)(((*(&quest_ida._anon_0._M_allocated_capacity
                                                                                      + 1)
                                                                                    + 28) >> 3)
                                                                                  + 0x7FFF8000) )
      {
        ItemComp = (PlayerItemComp *)(*(&quest_ida._anon_0._M_allocated_capacity + 1) + 28);
        __asan_report_load4(*(&quest_ida._anon_0._M_allocated_capacity + 1) + 28);
      }
      if ( PlayerItemComp::grantReward(
             ItemComp,
             *(_DWORD *)(*(&quest_ida._anon_0._M_allocated_capacity + 1) + 28),
             (const ActionReason *)(v3 + 128),
             0LL) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/reputation/city_reputation.cpp",
          "takeRequestFinishReward",
          911);
        v10 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v26, (const char (*)[5])"uid:");
        v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        HIDWORD(quest_ida._anon_0._M_allocated_capacity) = Player::getUid(v11);
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)&quest_ida._anon_0._M_allocated_capacity + 1);
        v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v12, (const char (*)[14])" grantReward:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(*(&quest_ida._anon_0._M_allocated_capacity + 1) + 28));
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])" fails");
        common::milog::MiLogStream::~MiLogStream(&v26);
      }
      v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      BasicComp = Player::getBasicComp(v15);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v26, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0xB63u, quest_ida);
      std::string::~string(&v26);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyCityReputationRequestStatus>();
      v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(_BYTE *)(((quest_ida._M_string_length + 16) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((quest_ida._M_string_length + 16) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(quest_ida._M_string_length + 16);
      }
      proto_log::PlayerLogBodyCityReputationRequestStatus::set_city_id(
        v17,
        *(_DWORD *)(quest_ida._M_string_length + 16));
      v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      proto_log::PlayerLogBodyCityReputationRequestStatus::set_request_id(v18, *(_DWORD *)(v3 + 48));
      v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      proto_log::PlayerLogBodyCityReputationRequestStatus::set_quest_id(
        v19,
        (google::protobuf::uint32)quest_ida._M_dataplus._M_p);
      v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      proto_log::PlayerLogBodyCityReputationRequestStatus::set_status(v20, 4u);
      v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationRequestStatus,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(_BYTE *)(((*(&quest_ida._anon_0._M_allocated_capacity + 1) + 28) >> 3) + 0x7FFF8000) != 0
        && (char)(((quest_ida._anon_0._M_local_buf[8] + 28) & 7) + 3) >= *(_BYTE *)(((*(&quest_ida._anon_0._M_allocated_capacity
                                                                                      + 1)
                                                                                    + 28) >> 3)
                                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(*(&quest_ida._anon_0._M_allocated_capacity + 1) + 28);
      }
      proto_log::PlayerLogBodyCityReputationRequestStatus::set_reward_id(
        v21,
        *(_DWORD *)(*(&quest_ida._anon_0._M_allocated_capacity + 1) + 28));
      v22 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&v25, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyCityReputationRequestStatus,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyCityReputationRequestStatus> *)(v3 + 96));
      Player::printStatLog(v22, &p_body_ptr, &v25, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v25);
      std::shared_ptr<proto_log::PlayerLogBodyCityReputationRequestStatus>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyCityReputationRequestStatus> *const)(v3 + 96));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/reputation/city_reputation.cpp",
        "takeRequestFinishReward",
        905);
      v7 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v26,
             (const char (*)[40])"findReputationRequestExcelConfig fails:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v26);
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  if ( v27 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 925: range 0000000015CBBE72-0000000015CBC285
bool __cdecl CityReputation::isEntranceOpen(
        const CityReputation *const this,
        data::ReputationEntranceType entrance_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  FeatureSwitchMgr *p_feature_switch_mgr; // rcx
  bool isCityReputationEntranceClosed; // r14
  bool v7; // r14
  ReputationExcelConfigMgr *p_reputation_config_mgr; // rcx
  std::vector<bool>::size_type v9; // rax
  bool isCondSatisfied; // al
  bool result; // al
  data::LogicType logic_type; // [rsp+14h] [rbp-ECh]
  std::vector<data::ReputationEntranceCond>::const_iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::vector<data::ReputationEntranceCond>::const_iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  const data::ReputationEntranceExcelConfig *entrance_config_ptr; // [rsp+28h] [rbp-D8h]
  const std::vector<data::ReputationEntranceCond> *__for_range; // [rsp+30h] [rbp-D0h]
  const data::ReputationEntranceCond *cond; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Config> v18; // [rsp+40h] [rbp-C0h] BYREF
  char v19[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 40 18 cond_check_vec:942";
  *(_QWORD *)(v2 + 16) = CityReputation::isEntranceOpen;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v18);
  p_feature_switch_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->feature_switch_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->city_id_);
  }
  isCityReputationEntranceClosed = FeatureSwitchMgr::isCityReputationEntranceClosed(
                                     p_feature_switch_mgr,
                                     this->city_id_,
                                     entrance_type);
  std::shared_ptr<Config>::~shared_ptr(&v18);
  if ( isCityReputationEntranceClosed )
  {
    v7 = 0;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v18);
    p_reputation_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.reputation_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->city_id_);
    }
    entrance_config_ptr = ReputationExcelConfigMgr::findEntranceConfig(
                            p_reputation_config_mgr,
                            this->city_id_,
                            entrance_type);
    std::shared_ptr<Config>::~shared_ptr(&v18);
    if ( entrance_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&entrance_config_ptr->cond_comb >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&entrance_config_ptr->cond_comb >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&entrance_config_ptr->cond_comb);
      }
      logic_type = entrance_config_ptr->cond_comb;
      if ( logic_type == LOGIC_NONE )
        logic_type = LOGIC_AND;
      std::vector<bool>::vector((std::vector<bool> *const)(v2 + 48));
      v9 = std::vector<data::ReputationEntranceCond>::size(&entrance_config_ptr->cond_vec);
      std::vector<bool>::reserve((std::vector<bool> *const)(v2 + 48), v9);
      __for_range = &entrance_config_ptr->cond_vec;
      __for_begin._M_current = std::vector<data::ReputationEntranceCond>::begin(&entrance_config_ptr->cond_vec)._M_current;
      __for_end._M_current = std::vector<data::ReputationEntranceCond>::end(&entrance_config_ptr->cond_vec)._M_current;
      while ( __gnu_cxx::operator!=<data::ReputationEntranceCond const*,std::vector<data::ReputationEntranceCond>>(
                &__for_begin,
                &__for_end) )
      {
        cond = __gnu_cxx::__normal_iterator<data::ReputationEntranceCond const*,std::vector<data::ReputationEntranceCond>>::operator*(&__for_begin);
        isCondSatisfied = CityReputation::isCondSatisfied(this, cond);
        std::vector<bool>::push_back((std::vector<bool> *const)(v2 + 48), isCondSatisfied);
        __gnu_cxx::__normal_iterator<data::ReputationEntranceCond const*,std::vector<data::ReputationEntranceCond>>::operator++(&__for_begin);
      }
      v7 = CommonMiscs::evaluateLogicComb(logic_type, (const std::vector<bool> *)(v2 + 48));
      std::vector<bool>::~vector((std::vector<bool> *const)(v2 + 48));
    }
    else
    {
      v7 = 1;
    }
  }
  result = v7;
  if ( v19 == (char *)v2 )
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

// Line 952: range 0000000015CBC286-0000000015CBC681
bool __cdecl CityReputation::isCondSatisfied(
        const CityReputation *const this,
        const data::ReputationEntranceCond *cond)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  bool v5; // r14
  data::ReputationEntranceCondType type; // eax
  uint32_t level; // ecx
  Player *v8; // rax
  PlayerBasicComp *BasicComp; // rax
  uint32_t v10; // ecx
  Player *v11; // rax
  PlayerQuestComp *QuestComp; // rcx
  common::milog::MiLogStream *v13; // rax
  bool result; // al
  common::milog::MiLogStream v15; // [rsp+10h] [rbp-90h] BYREF
  char v16[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 player_ptr:953";
  *(_QWORD *)(v2 + 16) = CityReputation::isCondSatisfied;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  CityReputation::getPlayer((const CityReputation *const)(v2 + 32));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reputation/city_reputation.cpp",
      "isCondSatisfied",
      956);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v15, (const char (*)[16])"getPlayer fails");
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = 0;
    goto LABEL_25;
  }
  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&cond->type);
  }
  type = cond->type;
  if ( type == REPUTATION_ENTRANCE_COND_QUEST )
  {
    v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    QuestComp = Player::getQuestComp(v11);
    if ( *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&cond->param1);
    }
    v5 = PlayerQuestComp::getQuestState(QuestComp, cond->param1) == QUEST_STATE_FINISHED;
  }
  else
  {
    if ( type > REPUTATION_ENTRANCE_COND_QUEST )
    {
LABEL_24:
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/reputation/city_reputation.cpp",
        "isCondSatisfied",
        978);
      v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v15, (const char (*)[22])off_259CE020);
      common::milog::MiLogStream::operator<<<data::ReputationEntranceCondType,(data::ReputationEntranceCondType*)0>(
        v13,
        &cond->type);
      common::milog::MiLogStream::~MiLogStream(&v15);
      v5 = 0;
      goto LABEL_25;
    }
    if ( type == REPUTATION_ENTRANCE_COND_REPUTATION_LEVEL )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->level_);
      }
      level = this->level_;
      if ( *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&cond->param1);
      }
      v5 = level >= cond->param1;
    }
    else
    {
      if ( type != REPUTATION_ENTRANCE_COND_PLAYER_LEVEL )
        goto LABEL_24;
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      BasicComp = Player::getBasicComp(v8);
      v10 = PlayerBasicComp::getLevel(BasicComp);
      if ( *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&cond->param1);
      }
      v5 = v10 >= cond->param1;
    }
  }
LABEL_25:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  result = v5;
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

// Line 986: range 0000000015CBC682-0000000015CBD1F1
__int64 __fastcall CityReputation::takeExploreReward(
        CityReputation *const this,
        uint32_t explore_id,
        std::vector<ItemParam> *display_item_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  const ReputationExcelConfigMgr *p_reputation_config_mgr; // rdi
  uint32_t v9; // edx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  Player *v13; // rax
  PlayerItemComp *ItemComp; // rcx
  Player *v15; // rax
  PlayerItemComp *p_reward_id; // rdi
  common::milog::MiLogStream *v17; // rax
  Player *v18; // rax
  bool v19; // r14
  common::milog::MiLogStream *v20; // rax
  Player *v21; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationTakeExploreReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationTakeExploreReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationTakeExploreReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationTakeExploreReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  Player *v27; // r14
  __int64 result; // rax
  std::string v29; // [rsp+0h] [rbp-1E0h]
  std::initializer_list<unsigned int> __l; // [rsp+38h] [rbp-1A8h] BYREF
  const data::ReputationExploreExcelConfig *explore_config_ptr; // [rsp+48h] [rbp-198h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+50h] [rbp-190h] BYREF
  std::shared_ptr<google::protobuf::Message> v34; // [rsp+60h] [rbp-180h] BYREF
  std::vector<unsigned int> reward_id_vec; // [rsp+70h] [rbp-170h] BYREF
  common::milog::MiLogStream v36; // [rsp+90h] [rbp-150h] BYREF
  char v37[304]; // [rsp+B0h] [rbp-130h] BYREF

  *(&v29._anon_0._M_allocated_capacity + 1) = (std::string::size_type)display_item_vec;
  v3 = (unsigned __int64)v37;
  v29._M_string_length = (std::string::size_type)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 1 11 holder:1043 64 4 7 ret:987 80 4 14 explore_id:985 96 8 9 iter:1004 128 16 14 player_pt"
                        "r:998 160 16 12 log_ptr:1044 192 24 11 reason:1023";
  *(_QWORD *)(v3 + 16) = CityReputation::takeExploreReward;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  *(_DWORD *)(v3 + 80) = explore_id;
  *(_DWORD *)(v3 + 64) = CityReputation::checkCityReputationOpen(this);
  if ( *(_DWORD *)(v3 + 64) )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reputation/city_reputation.cpp",
      "takeExploreReward",
      990);
    v6 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v36,
           (const char (*)[36])"checkCityReputationOpen fails, ret:");
    common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v36);
    v7 = *(_DWORD *)(v3 + 64);
  }
  else if ( !CityReputation::isExploreEntranceOpen(this) )
  {
    v7 = 7109;
  }
  else
  {
    CityReputation::getPlayer((const CityReputation *const)(v3 + 128));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/reputation/city_reputation.cpp",
        "takeExploreReward",
        1001);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        &v36,
        (const char (*)[25])"getPlayer return nullptr");
      common::milog::MiLogStream::~MiLogStream(&v36);
      v7 = -1;
    }
    else
    {
      *(std::set<unsigned int>::iterator *)(v3 + 96) = std::set<unsigned int>::find(
                                                         &this->taken_explore_reward_set_,
                                                         (const std::set<unsigned int>::key_type *)(v3 + 80));
      __l._M_len = (std::initializer_list<unsigned int>::size_type)std::set<unsigned int>::end(&this->taken_explore_reward_set_)._M_node;
      if ( std::operator!=(
             (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 96),
             (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__l._M_len) )
      {
        v7 = 7113;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v34);
        p_reputation_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->design_config.txt_config_mgr.reputation_config_mgr;
        v9 = *(_DWORD *)(v3 + 80);
        if ( *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          p_reputation_config_mgr = (const ReputationExcelConfigMgr *)&this->city_id_;
          __asan_report_load4(&this->city_id_);
        }
        explore_config_ptr = ReputationExcelConfigMgr::findExploreConfig(p_reputation_config_mgr, this->city_id_, v9);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v34);
        if ( explore_config_ptr )
        {
          HIDWORD(__l._M_array) = CityReputation::calculateCityExplorePercent(this);
          if ( *(_BYTE *)(((unsigned __int64)&explore_config_ptr->explore_progress >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&explore_config_ptr->explore_progress >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&explore_config_ptr->explore_progress);
          }
          if ( HIDWORD(__l._M_array) >= explore_config_ptr->explore_progress )
          {
            ActionReason::ActionReason(
              (ActionReason *const)(v3 + 192),
              ACTION_REASON_CITY_REPUTATION_EXPLORE,
              ITEM_LIMIT_CITY_REPUTATION_EXPLORE);
            v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            ItemComp = Player::getItemComp(v13);
            if ( *(_BYTE *)(((unsigned __int64)&explore_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)explore_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&explore_config_ptr->reward_id >> 3)
                                                                                + 0x7FFF8000) )
            {
              __asan_report_load4(&explore_config_ptr->reward_id);
            }
            *(_DWORD *)(v3 + 64) = PlayerItemComp::checkGrantReward(
                                     ItemComp,
                                     explore_config_ptr->reward_id,
                                     (const ActionReason *)(v3 + 192));
            if ( *(_DWORD *)(v3 + 64) )
            {
              common::milog::MiLogStream::create(
                &v36,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/reputation/city_reputation.cpp",
                "takeExploreReward",
                1027);
              common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                &v36,
                (const char (*)[23])"checkGrantReward fails");
              common::milog::MiLogStream::~MiLogStream(&v36);
              v7 = *(_DWORD *)(v3 + 64);
            }
            else
            {
              std::set<unsigned int>::insert(
                &this->taken_explore_reward_set_,
                (const std::set<unsigned int>::value_type *)(v3 + 80));
              v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              p_reward_id = Player::getItemComp(v15);
              if ( *(_BYTE *)(((unsigned __int64)&explore_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)explore_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&explore_config_ptr->reward_id >> 3)
                                                                                  + 0x7FFF8000) )
              {
                p_reward_id = (PlayerItemComp *)&explore_config_ptr->reward_id;
                __asan_report_load4(&explore_config_ptr->reward_id);
              }
              if ( PlayerItemComp::grantReward(
                     p_reward_id,
                     explore_config_ptr->reward_id,
                     (const ActionReason *)(v3 + 192),
                     0LL) )
              {
                common::milog::MiLogStream::create(
                  &v36,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/reputation/city_reputation.cpp",
                  "takeExploreReward",
                  1036);
                v17 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                        &v36,
                        (const char (*)[19])"grantReward fails:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  &explore_config_ptr->reward_id);
                common::milog::MiLogStream::~MiLogStream(&v36);
              }
              v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              v29._anon_0._M_allocated_capacity = (std::string::size_type)Player::getItemComp(v18);
              if ( *(_BYTE *)(((unsigned __int64)&explore_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)explore_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&explore_config_ptr->reward_id >> 3)
                                                                                  + 0x7FFF8000) )
              {
                __asan_report_load4(&explore_config_ptr->reward_id);
              }
              LODWORD(__l._M_array) = explore_config_ptr->reward_id;
              std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v3 + 48));
              std::vector<unsigned int>::vector(
                &reward_id_vec,
                (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
                (const std::vector<unsigned int>::allocator_type *)(v3 + 48));
              v19 = PlayerItemComp::getItemParamVecByRewardIdVec(
                      (const PlayerItemComp *const)v29._anon_0._M_allocated_capacity,
                      &reward_id_vec,
                      *((std::vector<ItemParam> **)&v29._anon_0._M_allocated_capacity + 1)) != 0;
              std::vector<unsigned int>::~vector(&reward_id_vec);
              std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v3 + 48));
              if ( v19 )
              {
                common::milog::MiLogStream::create(
                  &v36,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/reputation/city_reputation.cpp",
                  "takeExploreReward",
                  1040);
                v20 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                        &v36,
                        (const char (*)[31])"getItemParam fails, reward_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v20,
                  &explore_config_ptr->reward_id);
                common::milog::MiLogStream::~MiLogStream(&v36);
              }
              v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              BasicComp = Player::getBasicComp(v21);
              PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v36, BasicComp);
              StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xB62u, v29);
              std::string::~string(&v36);
              common::tools::perf::make_shared<proto_log::PlayerLogBodyCityReputationTakeExploreReward>();
              v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationTakeExploreReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationTakeExploreReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              if ( *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->city_id_);
              }
              proto_log::PlayerLogBodyCityReputationTakeExploreReward::set_city_id(v23, this->city_id_);
              v24 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationTakeExploreReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationTakeExploreReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              proto_log::PlayerLogBodyCityReputationTakeExploreReward::set_explore_id(v24, *(_DWORD *)(v3 + 80));
              v25 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationTakeExploreReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationTakeExploreReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              if ( *(_BYTE *)(((unsigned __int64)&explore_config_ptr->explore_progress >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&explore_config_ptr->explore_progress >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&explore_config_ptr->explore_progress);
              }
              proto_log::PlayerLogBodyCityReputationTakeExploreReward::set_explore_percent(
                v25,
                explore_config_ptr->explore_progress);
              v26 = std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationTakeExploreReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCityReputationTakeExploreReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              proto_log::PlayerLogBodyCityReputationTakeExploreReward::set_cur_percent(v26, HIDWORD(__l._M_array));
              v27 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              std::shared_ptr<google::protobuf::Message>::shared_ptr(&v34, 0LL);
              std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyCityReputationTakeExploreReward,void>(
                &p_body_ptr,
                (const std::shared_ptr<proto_log::PlayerLogBodyCityReputationTakeExploreReward> *)(v3 + 160));
              Player::printStatLog(v27, &p_body_ptr, &v34, 0xEu);
              std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
              std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v34);
              v7 = 0;
              std::shared_ptr<proto_log::PlayerLogBodyCityReputationTakeExploreReward>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyCityReputationTakeExploreReward> *const)(v3 + 160));
              StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
            }
          }
          else
          {
            v7 = 7114;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v36,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/reputation/city_reputation.cpp",
            "takeExploreReward",
            1012);
          v10 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  &v36,
                  (const char (*)[36])"findReputationExploreConfig fails, ");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->city_id_);
          v12 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v11, (const char (*)[2])":");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream(&v36);
          v7 = -1;
        }
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 128));
  }
  result = v7;
  if ( v29._M_string_length == v3 )
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
  return result;
};

// Line 1055: range 0000000015CBD1F2-0000000015CBDF4C
uint32_t __cdecl CityReputation::calculateCityExplorePercent(const CityReputation *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  uint32_t v4; // r14d
  Player *v5; // rax
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  ReputationExcelConfigMgr *p_reputation_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v10; // rax
  _DWORD *v11; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  uint32_t v14; // eax
  std::__shared_ptr_access<Area,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  int v19; // eax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v20; // rax
  _DWORD *v21; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v23; // rax
  uint32_t v24; // eax
  std::__shared_ptr_access<Area,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  unsigned int ExplorePoint; // eax
  uint32_t result; // eax
  unsigned int explore; // [rsp+10h] [rbp-170h]
  unsigned int explore_0; // [rsp+14h] [rbp-16Ch]
  unsigned int explore_limit; // [rsp+18h] [rbp-168h]
  uint32_t percent; // [rsp+1Ch] [rbp-164h]
  float total_exp; // [rsp+20h] [rbp-160h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-158h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-150h] BYREF
  const data::ReputationCityExcelConfig *city_config_ptr; // [rsp+38h] [rbp-148h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-140h]
  const data::ExploreAreaTotalExpExcelConfig *area_config_ptr_0; // [rsp+48h] [rbp-138h]
  const std::vector<unsigned int> *__for_range; // [rsp+50h] [rbp-130h]
  const data::ExploreAreaTotalExpExcelConfig *area_config_ptr; // [rsp+58h] [rbp-128h]
  std::shared_ptr<Config> v40; // [rsp+60h] [rbp-120h] BYREF
  common::milog::MiLogStream v41; // [rsp+70h] [rbp-110h] BYREF
  common::milog::MiLogStream v42; // [rsp+90h] [rbp-F0h] BYREF
  char v43[208]; // [rsp+B0h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 32 4 12 area_id:1078 48 4 12 area_id:1114 64 16 15 player_ptr:1056 96 16 14 scene_ptr:1062 128"
                        " 16 13 area_ptr:1124";
  *(_QWORD *)(v1 + 16) = CityReputation::calculateCityExplorePercent;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -202178560;
  CityReputation::getPlayer((const CityReputation *const)(v1 + 64));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reputation/city_reputation.cpp",
      "calculateCityExplorePercent",
      1059);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v42,
      (const char (*)[25])"getPlayer return nullptr");
    common::milog::MiLogStream::~MiLogStream(&v42);
    v4 = 0;
  }
  else
  {
    v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    Player::getSceneComp(v5);
    PlayerSceneComp::findMainWorldScene((const PlayerSceneComp *const)(v1 + 96));
    if ( std::operator==<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v1 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/reputation/city_reputation.cpp",
        "calculateCityExplorePercent",
        1065);
      v6 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v42,
             (const char (*)[31])"findMainWorldScene fails, uid:");
      v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      *(_DWORD *)(v1 + 48) = Player::getUid(v7);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::~MiLogStream(&v42);
      v4 = 0;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v1 + 128));
      p_reputation_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128))->design_config.txt_config_mgr.reputation_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->city_id_);
      }
      city_config_ptr = data::ReputationExcelConfigMgrBase::findReputationCityExcelConfig(
                          p_reputation_config_mgr,
                          this->city_id_);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 128));
      if ( city_config_ptr )
      {
        if ( *(char *)(((unsigned __int64)&city_config_ptr->is_sectional_releasing >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&city_config_ptr->is_sectional_releasing);
        if ( city_config_ptr->is_sectional_releasing )
        {
          explore = 0;
          __for_range = &city_config_ptr->explore_area_vec;
          __for_begin._M_current = std::vector<unsigned int>::begin(&city_config_ptr->explore_area_vec)._M_current;
          __for_end._M_current = std::vector<unsigned int>::end(&city_config_ptr->explore_area_vec)._M_current;
          while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
          {
            v10 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
            v11 = v10;
            if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v10);
            }
            *(_DWORD *)(v1 + 32) = *v11;
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v40);
            v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v40);
            area_config_ptr = data::ExploreExcelConfigMgrBase::findExploreAreaTotalExpExcelConfig(
                                &v12->design_config.txt_config_mgr.explore_config_mgr,
                                *(_DWORD *)(v1 + 32));
            std::shared_ptr<Config>::~shared_ptr(&v40);
            if ( area_config_ptr )
            {
              if ( *(_BYTE *)(((unsigned __int64)&area_config_ptr->total_exp >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)area_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&area_config_ptr->total_exp >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4(&area_config_ptr->total_exp);
              }
              total_exp = (float)(int)area_config_ptr->total_exp;
              if ( total_exp == 0.0 )
              {
                common::milog::MiLogStream::create(
                  &v42,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/reputation/city_reputation.cpp",
                  "calculateCityExplorePercent",
                  1089);
                common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  &v42,
                  (const char (*)[15])"total exp is 0");
                common::milog::MiLogStream::~MiLogStream(&v42);
              }
              else
              {
                v14 = (unsigned int)std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
                Scene::findArea((Scene *const)(v1 + 128), v14);
                if ( !std::operator==<Area>(0LL, (const std::shared_ptr<Area> *)(v1 + 128)) )
                {
                  v15 = std::__shared_ptr_access<Area,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Area,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
                  *(float *)(v1 + 48) = (float)(int)(100 * Area::getExplorePoint(v15)) / total_exp;
                  if ( *(_BYTE *)(((unsigned __int64)&area_config_ptr->reputation_ratio >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&area_config_ptr->reputation_ratio >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&area_config_ptr->reputation_ratio);
                  }
                  if ( area_config_ptr->reputation_ratio == 0.0 )
                  {
                    common::milog::MiLogStream::create(
                      &v42,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/player/reputation/city_reputation.cpp",
                      "calculateCityExplorePercent",
                      1101);
                    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      &v42,
                      (const char (*)[22])"reputation_ratio is 0");
                    common::milog::MiLogStream::~MiLogStream(&v42);
                  }
                  else
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&area_config_ptr->reputation_ratio >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&area_config_ptr->reputation_ratio >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&area_config_ptr->reputation_ratio);
                    }
                    explore = SAFE_ADD<unsigned int,unsigned int>(
                                explore,
                                (int)(float)(*(float *)(v1 + 48) * area_config_ptr->reputation_ratio));
                    common::milog::MiLogStream::create(
                      &v42,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/player/reputation/city_reputation.cpp",
                      "calculateCityExplorePercent",
                      1106);
                    v16 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                            &v42,
                            (const char (*)[45])"[Reputaion] city area explore rate, area_id:");
                    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v16,
                            (const unsigned int *)(v1 + 32));
                    v18 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                            v17,
                            (const char (*)[31])" original explore completaion:");
                    common::milog::MiLogStream::operator<<<float,(float *)0>(v18, (const float *)(v1 + 48));
                    common::milog::MiLogStream::~MiLogStream(&v42);
                  }
                }
                std::shared_ptr<Area>::~shared_ptr((std::shared_ptr<Area> *const)(v1 + 128));
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v41,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/reputation/city_reputation.cpp",
                "calculateCityExplorePercent",
                1083);
              v13 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                      &v41,
                      (const char (*)[51])"findExploreAreaTotalExpExcelConfig fails, area_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v1 + 32));
              common::milog::MiLogStream::~MiLogStream(&v41);
            }
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
          }
          v19 = 100;
          if ( explore <= 0x64 )
            v19 = explore;
          v4 = v19;
        }
        else
        {
          explore_0 = 0;
          explore_limit = 0;
          __for_range_0 = &city_config_ptr->explore_area_vec;
          __for_begin._M_current = std::vector<unsigned int>::begin(&city_config_ptr->explore_area_vec)._M_current;
          __for_end._M_current = std::vector<unsigned int>::end(&city_config_ptr->explore_area_vec)._M_current;
          while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
          {
            v20 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
            v21 = v20;
            if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v20);
            }
            *(_DWORD *)(v1 + 48) = *v21;
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v40);
            v22 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v40);
            area_config_ptr_0 = data::ExploreExcelConfigMgrBase::findExploreAreaTotalExpExcelConfig(
                                  &v22->design_config.txt_config_mgr.explore_config_mgr,
                                  *(_DWORD *)(v1 + 48));
            std::shared_ptr<Config>::~shared_ptr(&v40);
            if ( area_config_ptr_0 )
            {
              if ( *(_BYTE *)(((unsigned __int64)&area_config_ptr_0->total_exp >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)area_config_ptr_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&area_config_ptr_0->total_exp >> 3)
                                                                                 + 0x7FFF8000) )
              {
                __asan_report_load4(&area_config_ptr_0->total_exp);
              }
              explore_limit = SAFE_ADD<unsigned int,unsigned int>(explore_limit, area_config_ptr_0->total_exp);
              v24 = (unsigned int)std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
              Scene::findArea((Scene *const)(v1 + 128), v24);
              if ( !std::operator==<Area>(0LL, (const std::shared_ptr<Area> *)(v1 + 128)) )
              {
                v25 = std::__shared_ptr_access<Area,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Area,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
                ExplorePoint = Area::getExplorePoint(v25);
                explore_0 = SAFE_ADD<unsigned int,unsigned int>(explore_0, ExplorePoint);
              }
              std::shared_ptr<Area>::~shared_ptr((std::shared_ptr<Area> *const)(v1 + 128));
            }
            else
            {
              common::milog::MiLogStream::create(
                &v42,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/reputation/city_reputation.cpp",
                "calculateCityExplorePercent",
                1119);
              v23 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                      &v42,
                      (const char (*)[51])"findExploreAreaTotalExpExcelConfig fails, area_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v23,
                (const unsigned int *)(v1 + 48));
              common::milog::MiLogStream::~MiLogStream(&v42);
            }
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
          }
          if ( explore_limit )
          {
            percent = 100 * (unsigned __int64)explore_0 / explore_limit;
            if ( percent > 0x64 )
              percent = 100;
            v4 = percent;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v42,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/reputation/city_reputation.cpp",
              "calculateCityExplorePercent",
              1134);
            common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v42,
              (const char (*)[22])"explore_limit is 0!!!");
            common::milog::MiLogStream::~MiLogStream(&v42);
            v4 = 0;
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/reputation/city_reputation.cpp",
          "calculateCityExplorePercent",
          1072);
        v9 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
               &v42,
               (const char (*)[46])"findReputationCityExcelConfig fails, city_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->city_id_);
        common::milog::MiLogStream::~MiLogStream(&v42);
        v4 = 0;
      }
    }
    std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v1 + 96));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
  result = v4;
  if ( v43 == (char *)v1 )
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

// Line 1152: range 0000000015CBDF4E-0000000015CBE62D
bool __cdecl CityReputation::hasReward(CityReputation *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  bool hasReward; // r14
  Player *v5; // rax
  ReputationExcelConfigMgr *p_reputation_config_mgr; // rcx
  ReputationExcelConfigMgr *v8; // rcx
  Player *v10; // rax
  PlayerHuntingComp *HuntingComp; // rcx
  bool result; // al
  uint32_t percent; // [rsp+14h] [rbp-12Ch]
  std::map<unsigned int,data::ReputationQuestExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::map<unsigned int,data::ReputationQuestExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  PlayerQuestComp *quest_comp; // [rsp+28h] [rbp-118h]
  const std::map<unsigned int,data::ReputationQuestExcelConfig> *parent_quest_config_map_ptr; // [rsp+30h] [rbp-110h]
  const std::map<unsigned int,data::ReputationQuestExcelConfig> *__for_range; // [rsp+38h] [rbp-108h]
  const std::pair<unsigned int const,data::ReputationQuestExcelConfig> *v19; // [rsp+40h] [rbp-100h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ReputationQuestExcelConfig> >::type *parent_quest_id; // [rsp+48h] [rbp-F8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ReputationQuestExcelConfig> >::type *_; // [rsp+50h] [rbp-F0h]
  const std::map<unsigned int,data::ReputationExploreExcelConfig> *explore_config_map_ptr; // [rsp+58h] [rbp-E8h]
  const std::map<unsigned int,data::ReputationExploreExcelConfig> *__for_range_0; // [rsp+60h] [rbp-E0h]
  const std::pair<unsigned int const,data::ReputationExploreExcelConfig> *v24; // [rsp+68h] [rbp-D8h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ReputationExploreExcelConfig> >::type *explore_id; // [rsp+70h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ReputationExploreExcelConfig> >::type *explore_config; // [rsp+78h] [rbp-C8h]
  std::shared_ptr<Config> v27; // [rsp+80h] [rbp-C0h] BYREF
  common::milog::MiLogStream v28; // [rsp+90h] [rbp-B0h] BYREF
  char v29[144]; // [rsp+B0h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 7 lv:1159 64 16 15 player_ptr:1153";
  *(_QWORD *)(v1 + 16) = CityReputation::hasReward;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  CityReputation::getPlayer((const CityReputation *const)(v1 + 64));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reputation/city_reputation.cpp",
      "hasReward",
      1156);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v28,
      (const char (*)[25])"getPlayer return nullptr");
    common::milog::MiLogStream::~MiLogStream(&v28);
    hasReward = 0;
  }
  else
  {
    for ( *(_DWORD *)(v1 + 48) = 1; ; ++*(_DWORD *)(v1 + 48) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->level_);
      }
      if ( this->level_ < *(_DWORD *)(v1 + 48) )
        break;
      if ( !std::set<unsigned int>::count(
              &this->taken_level_reward_set_,
              (const std::set<unsigned int>::key_type *)(v1 + 48)) )
      {
        hasReward = 1;
        goto LABEL_44;
      }
    }
    v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    quest_comp = Player::getQuestComp(v5);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v27);
    p_reputation_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.reputation_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->city_id_);
    }
    parent_quest_config_map_ptr = ReputationExcelConfigMgr::findCityParentQuestVec(
                                    p_reputation_config_mgr,
                                    this->city_id_);
    std::shared_ptr<Config>::~shared_ptr(&v27);
    if ( parent_quest_config_map_ptr )
    {
      __for_range = parent_quest_config_map_ptr;
      __for_begin._M_node = std::map<unsigned int,data::ReputationQuestExcelConfig>::begin(parent_quest_config_map_ptr)._M_node;
      __for_end._M_node = std::map<unsigned int,data::ReputationQuestExcelConfig>::end(parent_quest_config_map_ptr)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v19 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationQuestExcelConfig>>::operator*(&__for_begin);
        parent_quest_id = std::get<0ul,unsigned int const,data::ReputationQuestExcelConfig>(v19);
        _ = (std::tuple_element<1,const std::pair<unsigned int const,data::ReputationQuestExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ReputationQuestExcelConfig>(v19);
        if ( *(_BYTE *)(((unsigned __int64)parent_quest_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)parent_quest_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)parent_quest_id >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(parent_quest_id);
        }
        if ( PlayerQuestComp::isParentQuestOnceFinished(quest_comp, *parent_quest_id)
          && !std::set<unsigned int>::count(&this->taken_parent_quest_reward_set_, parent_quest_id) )
        {
          hasReward = 1;
          goto LABEL_44;
        }
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationQuestExcelConfig>>::operator++(&__for_begin);
      }
    }
    percent = CityReputation::calculateCityExplorePercent(this);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v27);
    v8 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.reputation_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->city_id_);
    }
    explore_config_map_ptr = ReputationExcelConfigMgr::findCityExploreConfigVec(v8, this->city_id_);
    std::shared_ptr<Config>::~shared_ptr(&v27);
    if ( explore_config_map_ptr )
    {
      __for_range_0 = explore_config_map_ptr;
      __for_begin._M_node = std::map<unsigned int,data::ReputationExploreExcelConfig>::begin(explore_config_map_ptr)._M_node;
      __for_end._M_node = std::map<unsigned int,data::ReputationExploreExcelConfig>::end(__for_range_0)._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationExploreExcelConfig> >::_Self *)&__for_begin,
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationExploreExcelConfig> >::_Self *)&__for_end) )
      {
        v24 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationExploreExcelConfig>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationExploreExcelConfig> > *const)&__for_begin);
        explore_id = std::get<0ul,unsigned int const,data::ReputationExploreExcelConfig>(v24);
        explore_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ReputationExploreExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ReputationExploreExcelConfig>(v24);
        if ( *(_BYTE *)(((unsigned __int64)&explore_config->explore_progress >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&explore_config->explore_progress >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&explore_config->explore_progress);
        }
        if ( percent >= explore_config->explore_progress
          && !std::set<unsigned int>::count(&this->taken_explore_reward_set_, explore_id) )
        {
          hasReward = 1;
          goto LABEL_44;
        }
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationExploreExcelConfig>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationExploreExcelConfig> > *const)&__for_begin);
      }
    }
    v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    HuntingComp = Player::getHuntingComp(v10);
    if ( *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->city_id_);
    }
    hasReward = PlayerHuntingComp::hasReward(HuntingComp, this->city_id_);
  }
LABEL_44:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
  result = hasReward;
  if ( v29 == (char *)v1 )
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

// Line 1206: range 0000000015CBE62E-0000000015CBE822
int32_t __cdecl CityReputation::refreshRequestByGm(CityReputation *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v7,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/reputation/city_reputation.cpp",
    "refreshRequestByGm",
    1207);
  v1 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
         &v7,
         (const char (*)[28])"refreshRequestByGm city_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->city_id_);
  common::milog::MiLogStream::~MiLogStream(&v7);
  if ( CityReputation::checkCityReputationOpen(this) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/reputation/city_reputation.cpp",
      "refreshRequestByGm",
      1210);
    v2 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v7, (const char (*)[9])"city_id:");
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->city_id_);
    common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v3, (const char (*)[10])" not open");
    common::milog::MiLogStream::~MiLogStream(&v7);
    return -1;
  }
  else if ( !CityReputation::isRequestEntranceOpen(this) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/reputation/city_reputation.cpp",
      "refreshRequestByGm",
      1215);
    v5 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v7, (const char (*)[9])"city_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->city_id_);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      v6,
      (const char (*)[27])" request entrance not open");
    common::milog::MiLogStream::~MiLogStream(&v7);
    return -1;
  }
  else
  {
    CityReputation::doRefreshRequest(this);
    return 0;
  }
};

// Line 1223: range 0000000015CBE824-0000000015CBF0FD
__int64 __fastcall CityReputation::addRequestByGm(CityReputation *const this, uint32_t request_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  const ReputationExcelConfigMgr *p_reputation_config_mgr; // rdi
  uint32_t level; // edx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  uint32_t group_id; // ecx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  std::map<unsigned int,CityReputation::RequestInfo>::mapped_type *v24; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,CityReputation::RequestInfo> >::_Self *v25; // rdx
  const data::ReputationRequestExcelConfig *request_config_ptr; // [rsp+18h] [rbp-C8h]
  const data::ReputationLevelExcelConfig *level_config_ptr; // [rsp+20h] [rbp-C0h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,CityReputation::RequestInfo> >::_Self __y; // [rsp+28h] [rbp-B8h] BYREF
  std::shared_ptr<Config> v30; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v31; // [rsp+40h] [rbp-A0h] BYREF
  char v32[128]; // [rsp+60h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 request_id:1222 64 8 9 iter:1252";
  *(_QWORD *)(v2 + 16) = CityReputation::addRequestByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = request_id;
  common::milog::MiLogStream::create(
    &v31,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/reputation/city_reputation.cpp",
    "addRequestByGm",
    1224);
  v5 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
         &v31,
         (const char (*)[24])"addRequestByGm city_id:");
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->city_id_);
  v7 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v6, (const char (*)[13])" request_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream(&v31);
  if ( CityReputation::checkCityReputationOpen(this) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/reputation/city_reputation.cpp",
      "addRequestByGm",
      1227);
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v31, (const char (*)[9])"city_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->city_id_);
    common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v9, (const char (*)[10])" not open");
    common::milog::MiLogStream::~MiLogStream(&v31);
    result = 0xFFFFFFFFLL;
  }
  else if ( !CityReputation::isRequestEntranceOpen(this) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/reputation/city_reputation.cpp",
      "addRequestByGm",
      1232);
    v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v31, (const char (*)[9])"city_id:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->city_id_);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      v12,
      (const char (*)[27])" request entrance not open");
    common::milog::MiLogStream::~MiLogStream(&v31);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v30);
    v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
    request_config_ptr = data::ReputationExcelConfigMgrBase::findReputationRequestExcelConfig(
                           &v13->design_config.txt_config_mgr.reputation_config_mgr,
                           *(_DWORD *)(v2 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v30);
    if ( request_config_ptr )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v30);
      p_reputation_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30)->design_config.txt_config_mgr.reputation_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
      {
        p_reputation_config_mgr = (const ReputationExcelConfigMgr *)&this->level_;
        __asan_report_load4(&this->level_);
      }
      level = this->level_;
      if ( *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->city_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        p_reputation_config_mgr = (const ReputationExcelConfigMgr *)&this->city_id_;
        __asan_report_load4(&this->city_id_);
      }
      level_config_ptr = ReputationExcelConfigMgr::findReputationLevelConfig(
                           p_reputation_config_mgr,
                           this->city_id_,
                           level);
      std::shared_ptr<Config>::~shared_ptr(&v30);
      if ( level_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&request_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&request_config_ptr->group_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&request_config_ptr->group_id);
        }
        group_id = request_config_ptr->group_id;
        if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->request_group_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->request_group_id >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&level_config_ptr->request_group_id);
        }
        if ( group_id == level_config_ptr->request_group_id )
        {
          *(std::map<unsigned int,CityReputation::RequestInfo>::iterator *)(v2 + 64) = std::map<unsigned int,CityReputation::RequestInfo>::find(
                                                                                         &this->request_map_,
                                                                                         (const std::map<unsigned int,CityReputation::RequestInfo>::key_type *)(v2 + 48));
          __y._M_node = std::map<unsigned int,CityReputation::RequestInfo>::end(&this->request_map_)._M_node;
          if ( std::operator!=(
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,CityReputation::RequestInfo> >::_Self *)(v2 + 64),
                 &__y) )
          {
            common::milog::MiLogStream::create(
              &v31,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/reputation/city_reputation.cpp",
              "addRequestByGm",
              1255);
            common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v31, (const char (*)[16])"already in map!");
            common::milog::MiLogStream::~MiLogStream(&v31);
            result = 0xFFFFFFFFLL;
          }
          else
          {
            LODWORD(__y._M_node) = 0;
            BYTE4(__y._M_node) = 0;
            CityReputation::RequestInfo::RequestInfo((CityReputation::RequestInfo *const)&__y);
            v24 = std::map<unsigned int,CityReputation::RequestInfo>::operator[](
                    &this->request_map_,
                    (const std::map<unsigned int,CityReputation::RequestInfo>::key_type *)(v2 + 48));
            v25 = (std::_Rb_tree_iterator<std::pair<unsigned int const,CityReputation::RequestInfo> >::_Self *)v24;
            if ( ((unsigned __int8)v24 & 7) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)(((unsigned __int64)(&v24->is_taken_reward + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)v24 + 7) & 7) >= *(_BYTE *)(((unsigned __int64)(&v24->is_taken_reward + 3) >> 3)
                                                              + 0x7FFF8000) )
            {
              __asan_report_store_n(v24, 8LL);
            }
            v25->_M_node = __y._M_node;
            result = 0LL;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/reputation/city_reputation.cpp",
            "addRequestByGm",
            1249);
          v21 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v31, (const char (*)[12])"request_id:");
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v21,
                  (const unsigned int *)(v2 + 48));
          v23 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  v22,
                  (const char (*)[31])" not belong request_group_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v23,
            &level_config_ptr->request_group_id);
          common::milog::MiLogStream::~MiLogStream(&v31);
          result = 0xFFFFFFFFLL;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/reputation/city_reputation.cpp",
          "addRequestByGm",
          1244);
        v17 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v31,
                (const char (*)[34])"findReputationLevelConfig fails, ");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->city_id_);
        v19 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v18, (const char (*)[2])" ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &this->level_);
        common::milog::MiLogStream::~MiLogStream(&v31);
        result = 0xFFFFFFFFLL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/reputation/city_reputation.cpp",
        "addRequestByGm",
        1238);
      v14 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v31,
              (const char (*)[40])"findReputationRequestExcelConfig fails:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v31);
      result = 0xFFFFFFFFLL;
    }
  }
  if ( v32 == (char *)v2 )
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
