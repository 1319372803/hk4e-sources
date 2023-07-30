// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/hunting/player_hunting_comp.cpp

// Line 31: range 0000000016C82ECC-0000000016C830C0
int32_t __cdecl HuntingOfferData::fromBin(HuntingOfferData *const this, const proto::HuntingOfferDataBin *data_bin)
{
  uint32_t refreshed; // ecx
  char v3; // dl
  __int64 v4; // rdx
  uint32_t v5; // ecx
  char v6; // dl
  __int64 v7; // rdx
  uint32_t v8; // ecx
  char v9; // dl
  __int64 v10; // rdx
  uint32_t v11; // ecx
  char v12; // dl
  __int64 v13; // rdx
  proto::HuntingOfferState v14; // ecx
  char v15; // dl
  __int64 v16; // rdx
  bool is_taken_reward; // cl
  char v18; // dl
  __int64 v19; // rdx
  const proto::HuntingOfferDataBin *data_bina; // [rsp+0h] [rbp-10h]

  data_bina = data_bin;
  refreshed = proto::HuntingOfferDataBin::refresh_id(data_bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(data_bin) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, data_bin, v4);
  this->refresh_id = refreshed;
  v5 = proto::HuntingOfferDataBin::monster_config_id(data_bina);
  v6 = *(_BYTE *)(((unsigned __int64)&this->monster_config_id >> 3) + 0x7FFF8000);
  LOBYTE(data_bin) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->monster_config_id, data_bin, v7);
  this->monster_config_id = v5;
  v8 = proto::HuntingOfferDataBin::difficulty(data_bina);
  v9 = *(_BYTE *)(((unsigned __int64)&this->difficulty >> 3) + 0x7FFF8000);
  LOBYTE(data_bin) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->difficulty, data_bin, v10);
  this->difficulty = v8;
  v11 = proto::HuntingOfferDataBin::city_id(data_bina);
  v12 = *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000);
  LOBYTE(data_bin) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store4(&this->city_id, data_bin, v13);
  this->city_id = v11;
  v14 = proto::HuntingOfferDataBin::state(data_bina);
  v15 = *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000);
  LOBYTE(data_bin) = v15 != 0;
  v16 = (v15 != 0) & (unsigned __int8)((char)((((_BYTE)this + 16) & 7) + 3) >= v15);
  if ( (_BYTE)v16 )
    __asan_report_store4(&this->state, data_bin, v16);
  this->state = v14;
  is_taken_reward = proto::HuntingOfferDataBin::is_taken_reward(data_bina);
  v18 = *(_BYTE *)(((unsigned __int64)&this->is_taken_reward >> 3) + 0x7FFF8000);
  LOBYTE(data_bin) = v18 != 0;
  v19 = (v18 != 0) & (unsigned __int8)((((unsigned __int8)this + 20) & 7) >= v18);
  if ( (_BYTE)v19 )
    __asan_report_store1(&this->is_taken_reward, data_bin, v19);
  this->is_taken_reward = is_taken_reward;
  return 0;
};

// Line 42: range 0000000016C830C2-0000000016C832B4
int32_t __cdecl HuntingOfferData::toBin(const HuntingOfferData *const this, proto::HuntingOfferDataBin *data_bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::HuntingOfferDataBin::set_refresh_id(data_bin, this->refresh_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->monster_config_id);
  }
  proto::HuntingOfferDataBin::set_monster_config_id(data_bin, this->monster_config_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->difficulty >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficulty >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->difficulty);
  }
  proto::HuntingOfferDataBin::set_difficulty(data_bin, this->difficulty);
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->city_id);
  }
  proto::HuntingOfferDataBin::set_city_id(data_bin, this->city_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->state);
  }
  proto::HuntingOfferDataBin::set_state(data_bin, this->state);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_taken_reward >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_taken_reward >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_taken_reward);
  }
  proto::HuntingOfferDataBin::set_is_taken_reward(data_bin, this->is_taken_reward);
  return 0;
};

// Line 53: range 0000000016C832B6-0000000016C83413
void __cdecl HuntingOfferData::toClient(const HuntingOfferData *const this, proto::HuntingOfferData *client_data)
{
  proto::HuntingPair *hunting_pair; // [rsp+18h] [rbp-8h]

  hunting_pair = proto::HuntingOfferData::mutable_hunting_pair(client_data);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::HuntingPair::set_refresh_id(hunting_pair, this->refresh_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->monster_config_id);
  }
  proto::HuntingPair::set_monster_config_id(hunting_pair, this->monster_config_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->city_id);
  }
  proto::HuntingOfferData::set_city_id(client_data, this->city_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->state);
  }
  proto::HuntingOfferData::set_state(client_data, this->state);
};

// Line 62: range 0000000016C83414-0000000016C839F7
int32_t __cdecl PlayerHuntingComp::fromBin(PlayerHuntingComp *const this, const proto::PlayerDataBin *player_data_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 refresh_time; // rdx
  char v6; // al
  google::protobuf::RepeatedPtrField<proto::HuntingOfferDataBin>::const_iterator *p_for_end; // rsi
  std::vector<HuntingOfferData>::size_type v8; // r14
  google::protobuf::uint32 v9; // eax
  HuntingOfferData *v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rdx
  char v13; // al
  int32_t result; // eax
  unsigned int __x; // [rsp+14h] [rbp-10Ch] BYREF
  google::protobuf::RepeatedPtrField<proto::HuntingOfferPair>::const_iterator __for_begin; // [rsp+18h] [rbp-108h] BYREF
  google::protobuf::RepeatedPtrField<proto::HuntingOfferDataBin>::const_iterator __for_begin_0; // [rsp+20h] [rbp-100h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_1; // [rsp+28h] [rbp-F8h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_2; // [rsp+30h] [rbp-F0h]
  const proto::PlayerHuntingCompBin *comp_bin; // [rsp+38h] [rbp-E8h]
  const google::protobuf::RepeatedPtrField<proto::HuntingOfferPair> *__for_range; // [rsp+40h] [rbp-E0h]
  const google::protobuf::RepeatedPtrField<proto::HuntingOfferDataBin> *__for_range_0; // [rsp+48h] [rbp-D8h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_1; // [rsp+50h] [rbp-D0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+58h] [rbp-C8h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_2; // [rsp+60h] [rbp-C0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_1; // [rsp+68h] [rbp-B8h]
  const proto::HuntingOfferDataBin *hunting_offer_bin; // [rsp+70h] [rbp-B0h]
  std::vector<HuntingOfferData> *city_hunting_offer_vec; // [rsp+78h] [rbp-A8h]
  const proto::HuntingOfferPair *hunting_pair; // [rsp+80h] [rbp-A0h]
  google::protobuf::RepeatedPtrField<proto::HuntingOfferDataBin>::const_iterator __for_end; // [rsp+88h] [rbp-98h] BYREF
  common::milog::MiLogStream v31; // [rsp+90h] [rbp-90h] BYREF
  char v32[112]; // [rsp+B0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 refresh_id:88";
  *(_QWORD *)(v2 + 16) = PlayerHuntingComp::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  comp_bin = proto::PlayerDataBin::hunting_bin(player_data_bin);
  refresh_time = proto::PlayerHuntingCompBin::last_refresh_time(comp_bin);
  v6 = *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(player_data_bin) = v6 != 0;
    __asan_report_store4(&this->last_refresh_time_, player_data_bin, refresh_time);
  }
  this->last_refresh_time_ = refresh_time;
  std::vector<std::pair<unsigned int,unsigned int>>::clear(&this->cur_week_finished_hunting_pair_vec_);
  __for_range = proto::PlayerHuntingCompBin::cur_week_finished_hunting_pair_vec(comp_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HuntingOfferPair>::begin(__for_range).it_;
  __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::HuntingOfferPair>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HuntingOfferPair const>::operator!=(
            &__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::HuntingOfferPair>::iterator *)&__for_begin_0) )
  {
    hunting_pair = google::protobuf::internal::RepeatedPtrIterator<proto::HuntingOfferPair const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = proto::HuntingOfferPair::monster_config_id(hunting_pair);
    __x = proto::HuntingOfferPair::refresh_id(hunting_pair);
    __for_end.it_ = (void *const *)std::make_pair<unsigned int,unsigned int>(&__x, (unsigned int *)(v2 + 32));
    std::vector<std::pair<unsigned int,unsigned int>>::push_back(
      &this->cur_week_finished_hunting_pair_vec_,
      (std::vector<std::pair<unsigned int,unsigned int>>::value_type *)&__for_end);
    google::protobuf::internal::RepeatedPtrIterator<proto::HuntingOfferPair const>::operator++(&__for_begin);
  }
  __for_range_0 = proto::PlayerHuntingCompBin::hunting_offer_data_list(comp_bin);
  __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::HuntingOfferDataBin>::begin(__for_range_0).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HuntingOfferDataBin>::end(__for_range_0).it_;
  while ( 1 )
  {
    p_for_end = &__for_end;
    if ( !google::protobuf::internal::RepeatedPtrIterator<proto::HuntingOfferDataBin const>::operator!=(
            &__for_begin_0,
            &__for_end) )
      break;
    hunting_offer_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HuntingOfferDataBin const>::operator*(&__for_begin_0);
    *(_DWORD *)(v2 + 32) = proto::HuntingOfferDataBin::city_id(hunting_offer_bin);
    city_hunting_offer_vec = std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::operator[](
                               &this->city_hunting_offer_map_,
                               (std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::key_type *)(v2 + 32));
    if ( !std::vector<HuntingOfferData>::size(city_hunting_offer_vec) )
      std::vector<HuntingOfferData>::resize(city_hunting_offer_vec, 3uLL);
    v8 = proto::HuntingOfferDataBin::difficulty(hunting_offer_bin);
    if ( v8 < std::vector<HuntingOfferData>::size(city_hunting_offer_vec) )
    {
      v9 = proto::HuntingOfferDataBin::difficulty(hunting_offer_bin);
      v10 = std::vector<HuntingOfferData>::operator[](city_hunting_offer_vec, v9);
      HuntingOfferData::fromBin(v10, hunting_offer_bin);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/hunting/player_hunting_comp.cpp",
        "fromBin",
        79);
      common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
        &v31,
        (const char (*)[38])"[HUNTING] difficulty exceed vec size!");
      common::milog::MiLogStream::~MiLogStream(&v31);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::HuntingOfferDataBin const>::operator++(&__for_begin_0);
  }
  __for_range_1 = proto::PlayerHuntingCompBin::cur_week_refreshed_monster_id_list(comp_bin);
  __for_begin_1 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_1);
  __for_end_0 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_1);
  while ( __for_begin_1 != __for_end_0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_1 >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin_1);
    }
    *(_DWORD *)(v2 + 32) = *__for_begin_1;
    p_for_end = (google::protobuf::RepeatedPtrField<proto::HuntingOfferDataBin>::const_iterator *)(v2 + 32);
    std::set<unsigned int>::insert(
      &this->cur_week_refreshed_monster_config_id_set_,
      (const std::set<unsigned int>::value_type *)(v2 + 32));
    ++__for_begin_1;
  }
  __for_range_2 = proto::PlayerHuntingCompBin::cur_week_refreshed_refresh_id_list(comp_bin);
  __for_begin_2 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_2);
  __for_end_1 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_2);
  while ( __for_begin_2 != __for_end_1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin_2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_2 >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin_2);
    }
    *(_DWORD *)(v2 + 32) = *__for_begin_2;
    p_for_end = (google::protobuf::RepeatedPtrField<proto::HuntingOfferDataBin>::const_iterator *)(v2 + 32);
    std::set<unsigned int>::insert(
      &this->cur_week_refreshed_refresh_id_set_,
      (const std::set<unsigned int>::value_type *)(v2 + 32));
    ++__for_begin_2;
  }
  LOBYTE(v11) = proto::PlayerHuntingCompBin::is_new_hunting(comp_bin);
  v12 = v11;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_new_hunting_ >> 3) + 0x7FFF8000);
  if ( v13 < 0 )
  {
    LOBYTE(p_for_end) = v13 != 0;
    __asan_report_store1(&this->is_new_hunting_, p_for_end, v12);
  }
  this->is_new_hunting_ = v12;
  result = 0;
  if ( v32 == (char *)v2 )
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

// Line 97: range 0000000016C839F8-0000000016C83EF8
int32_t __cdecl PlayerHuntingComp::toBin(PlayerHuntingComp *const this, proto::PlayerDataBin *player_data_bin)
{
  proto::HuntingOfferDataBin *v2; // rax
  unsigned int *v3; // rax
  google::protobuf::uint32 *v4; // rdx
  unsigned int *v5; // rax
  google::protobuf::uint32 *v6; // rdx
  std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::iterator __for_begin_0; // [rsp+20h] [rbp-A0h] BYREF
  std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::iterator __for_end_0; // [rsp+28h] [rbp-98h] BYREF
  std::vector<std::pair<unsigned int,unsigned int>>::iterator __for_begin; // [rsp+30h] [rbp-90h] BYREF
  std::vector<std::pair<unsigned int,unsigned int>>::iterator __for_end; // [rsp+38h] [rbp-88h] BYREF
  proto::PlayerHuntingCompBin *comp_bin; // [rsp+40h] [rbp-80h]
  std::vector<std::pair<unsigned int,unsigned int>> *__for_range; // [rsp+48h] [rbp-78h]
  std::unordered_map<unsigned int,std::vector<HuntingOfferData>> *__for_range_0; // [rsp+50h] [rbp-70h]
  std::set<unsigned int> *__for_range_2; // [rsp+58h] [rbp-68h]
  std::set<unsigned int> *__for_range_3; // [rsp+60h] [rbp-60h]
  const std::pair<unsigned int const,std::vector<HuntingOfferData> > *v17; // [rsp+68h] [rbp-58h]
  std::tuple_element<0,const std::pair<unsigned int const,std::vector<HuntingOfferData> > >::type *city_id; // [rsp+70h] [rbp-50h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<HuntingOfferData> > >::type *hunting_offer_data_vec; // [rsp+78h] [rbp-48h]
  const std::vector<HuntingOfferData> *__for_range_1; // [rsp+80h] [rbp-40h]
  const HuntingOfferData *hunting_offer_data; // [rsp+88h] [rbp-38h]
  const std::pair<unsigned int,unsigned int> *v22; // [rsp+90h] [rbp-30h]
  std::tuple_element<0,const std::pair<unsigned int,unsigned int> >::type *refresh_id; // [rsp+98h] [rbp-28h]
  std::tuple_element<1,const std::pair<unsigned int,unsigned int> >::type *monster_config_id; // [rsp+A0h] [rbp-20h]
  proto::HuntingOfferPair *pair; // [rsp+A8h] [rbp-18h]

  comp_bin = proto::PlayerDataBin::mutable_hunting_bin(player_data_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_refresh_time_);
  }
  proto::PlayerHuntingCompBin::set_last_refresh_time(comp_bin, this->last_refresh_time_);
  __for_range = &this->cur_week_finished_hunting_pair_vec_;
  __for_begin._M_current = std::vector<std::pair<unsigned int,unsigned int>>::begin(&this->cur_week_finished_hunting_pair_vec_)._M_current;
  __for_end._M_current = std::vector<std::pair<unsigned int,unsigned int>>::end(&this->cur_week_finished_hunting_pair_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>(
            &__for_begin,
            &__for_end) )
  {
    v22 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>::operator*(&__for_begin);
    refresh_id = (std::tuple_element<0,const std::pair<unsigned int,unsigned int> >::type *)std::get<0ul,unsigned int,unsigned int>(v22);
    monster_config_id = (std::tuple_element<1,const std::pair<unsigned int,unsigned int> >::type *)std::get<1ul,unsigned int,unsigned int>(v22);
    pair = proto::PlayerHuntingCompBin::add_cur_week_finished_hunting_pair_vec(comp_bin);
    if ( *(_BYTE *)(((unsigned __int64)refresh_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)refresh_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)refresh_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(refresh_id);
    }
    proto::HuntingOfferPair::set_refresh_id(pair, *refresh_id);
    if ( *(_BYTE *)(((unsigned __int64)monster_config_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)monster_config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)monster_config_id >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(monster_config_id);
    }
    proto::HuntingOfferPair::set_monster_config_id(pair, *monster_config_id);
    __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->city_hunting_offer_map_;
  __for_begin_0._M_cur = std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::begin(&this->city_hunting_offer_map_)._M_cur;
  __for_end_0._M_cur = std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<HuntingOfferData>>,false>(
            &__for_begin_0,
            &__for_end_0) )
  {
    v17 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<HuntingOfferData>>,false,false>::operator*(&__for_begin_0);
    city_id = std::get<0ul,unsigned int const,std::vector<HuntingOfferData>>(v17);
    hunting_offer_data_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<HuntingOfferData> > >::type *)std::get<1ul,unsigned int const,std::vector<HuntingOfferData>>(v17);
    __for_range_1 = hunting_offer_data_vec;
    __for_begin._M_current = (std::pair<unsigned int,unsigned int> *)std::vector<HuntingOfferData>::begin(hunting_offer_data_vec)._M_current;
    __for_end._M_current = (std::pair<unsigned int,unsigned int> *)std::vector<HuntingOfferData>::end(__for_range_1)._M_current;
    while ( __gnu_cxx::operator!=<HuntingOfferData const*,std::vector<HuntingOfferData>>(
              (const __gnu_cxx::__normal_iterator<const HuntingOfferData*,std::vector<HuntingOfferData> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<const HuntingOfferData*,std::vector<HuntingOfferData> > *)&__for_end) )
    {
      hunting_offer_data = __gnu_cxx::__normal_iterator<HuntingOfferData const*,std::vector<HuntingOfferData>>::operator*((const __gnu_cxx::__normal_iterator<const HuntingOfferData*,std::vector<HuntingOfferData> > *const)&__for_begin);
      v2 = proto::PlayerHuntingCompBin::add_hunting_offer_data_list(comp_bin);
      HuntingOfferData::toBin(hunting_offer_data, v2);
      __gnu_cxx::__normal_iterator<HuntingOfferData const*,std::vector<HuntingOfferData>>::operator++((__gnu_cxx::__normal_iterator<const HuntingOfferData*,std::vector<HuntingOfferData> > *const)&__for_begin);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<HuntingOfferData>>,false,false>::operator++(&__for_begin_0);
  }
  __for_range_2 = &this->cur_week_refreshed_monster_config_id_set_;
  __for_begin._M_current = (std::pair<unsigned int,unsigned int> *)std::set<unsigned int>::begin(&this->cur_week_refreshed_monster_config_id_set_)._M_node;
  __for_end._M_current = (std::pair<unsigned int,unsigned int> *)std::set<unsigned int>::end(__for_range_2)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v3 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    proto::PlayerHuntingCompBin::add_cur_week_refreshed_monster_id_list(comp_bin, *v4);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  __for_range_3 = &this->cur_week_refreshed_refresh_id_set_;
  __for_begin._M_current = (std::pair<unsigned int,unsigned int> *)std::set<unsigned int>::begin(&this->cur_week_refreshed_refresh_id_set_)._M_node;
  __for_end._M_current = (std::pair<unsigned int,unsigned int> *)std::set<unsigned int>::end(__for_range_3)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v5 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    proto::PlayerHuntingCompBin::add_cur_week_refreshed_refresh_id_list(comp_bin, *v6);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_new_hunting_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_new_hunting_);
  proto::PlayerHuntingCompBin::set_is_new_hunting(comp_bin, this->is_new_hunting_);
  return 0;
};

// Line 126: range 0000000016C83EFA-0000000016C84400
int32_t __cdecl PlayerHuntingComp::onLogin(PlayerHuntingComp *const this, bool is_new_player)
{
  std::weak_ptr<PlayerHuntingComp> *v2; // r13
  __int64 v3; // rax
  unsigned __int64 v4; // r15
  HuntingRecord *v5; // rax
  int32_t v6; // ebx
  PlayerEventComp *EventComp; // r12
  PlayerEventComp *v8; // r12
  PlayerEventComp *v9; // rbx
  PlayerEventComp *v10; // rbx
  PlayerEventComp *v11; // rbx
  int32_t result; // eax
  std::shared_ptr<PlayerHuntingComp> __r; // [rsp+70h] [rbp-80h] BYREF
  char v14[112]; // [rsp+80h] [rbp-70h] BYREF

  v2 = (std::weak_ptr<PlayerHuntingComp> *)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (std::weak_ptr<PlayerHuntingComp> *)v3;
  }
  v2->_M_ptr = (std::__weak_ptr<PlayerHuntingComp,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v2->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 12 this_wtr:132";
  v2[1]._M_ptr = (std::__weak_ptr<PlayerHuntingComp,(__gnu_cxx::_Lock_policy)2>::element_type *)PlayerHuntingComp::onLogin;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  PlayerHuntingComp::refreshAll(this, 0);
  if ( std::operator!=<HuntingRecord>(0LL, &this->ongoing_hunting_record_ptr_) )
  {
    v5 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ongoing_hunting_record_ptr_);
    v6 = HuntingRecord::onLogin(v5);
  }
  else
  {
    toThisPtr<PlayerHuntingComp>((PlayerHuntingComp *)&__r);
    std::weak_ptr<PlayerHuntingComp>::weak_ptr<PlayerHuntingComp,void>(v2 + 2, &__r);
    std::shared_ptr<PlayerHuntingComp>::~shared_ptr(&__r);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(this->player_);
    std::weak_ptr<PlayerHuntingComp>::weak_ptr((std::weak_ptr<PlayerHuntingComp> *const)&__r, v2 + 2);
    PlayerEventComp::tryRegisterObserver<PlayerHuntingComp,PostEnterSceneEvent>(
      EventComp,
      (std::weak_ptr<PlayerHuntingComp> *)&__r,
      (void (*)(PlayerHuntingComp *, const PostEnterSceneEvent *))PlayerHuntingComp::onPostEnterSceneEvent,
      0LL);
    std::weak_ptr<PlayerHuntingComp>::~weak_ptr((std::weak_ptr<PlayerHuntingComp> *const)&__r);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v8 = Player::getEventComp(this->player_);
    std::weak_ptr<PlayerHuntingComp>::weak_ptr((std::weak_ptr<PlayerHuntingComp> *const)&__r, v2 + 2);
    PlayerEventComp::tryRegisterObserver<PlayerHuntingComp,PostEnterSceneEvent>(
      v8,
      (std::weak_ptr<PlayerHuntingComp> *)&__r,
      (void (*)(PlayerHuntingComp *, const PostEnterSceneEvent *))PlayerHuntingComp::onPostEnterSceneEvent,
      0LL);
    std::weak_ptr<PlayerHuntingComp>::~weak_ptr((std::weak_ptr<PlayerHuntingComp> *const)&__r);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = Player::getEventComp(this->player_);
    std::weak_ptr<PlayerHuntingComp>::weak_ptr((std::weak_ptr<PlayerHuntingComp> *const)&__r, v2 + 2);
    PlayerEventComp::tryRegisterObserver<PlayerHuntingComp,WorldHuntingStartEvent>(
      v9,
      (std::weak_ptr<PlayerHuntingComp> *)&__r,
      (void (*)(PlayerHuntingComp *, const WorldHuntingStartEvent *))PlayerHuntingComp::onWorldHuntingStartEvent,
      0LL);
    std::weak_ptr<PlayerHuntingComp>::~weak_ptr((std::weak_ptr<PlayerHuntingComp> *const)&__r);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v10 = Player::getEventComp(this->player_);
    std::weak_ptr<PlayerHuntingComp>::weak_ptr((std::weak_ptr<PlayerHuntingComp> *const)&__r, v2 + 2);
    PlayerEventComp::tryRegisterObserver<PlayerHuntingComp,WorldHuntingEndEvent>(
      v10,
      (std::weak_ptr<PlayerHuntingComp> *)&__r,
      (void (*)(PlayerHuntingComp *, const WorldHuntingEndEvent *))PlayerHuntingComp::onWorldHuntingEndEvent,
      0LL);
    std::weak_ptr<PlayerHuntingComp>::~weak_ptr((std::weak_ptr<PlayerHuntingComp> *const)&__r);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v11 = Player::getEventComp(this->player_);
    std::weak_ptr<PlayerHuntingComp>::weak_ptr((std::weak_ptr<PlayerHuntingComp> *const)&__r, v2 + 2);
    PlayerEventComp::tryRegisterObserver<PlayerHuntingComp,LeaveSceneEvent>(
      v11,
      (std::weak_ptr<PlayerHuntingComp> *)&__r,
      (void (*)(PlayerHuntingComp *, const LeaveSceneEvent *))PlayerHuntingComp::onLeaveSceneEvent,
      0LL);
    std::weak_ptr<PlayerHuntingComp>::~weak_ptr((std::weak_ptr<PlayerHuntingComp> *const)&__r);
    v6 = 0;
    std::weak_ptr<PlayerHuntingComp>::~weak_ptr(v2 + 2);
  }
  result = v6;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->_M_ptr = (std::__weak_ptr<PlayerHuntingComp,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000016C84402-0000000016C84507
int32_t __cdecl PlayerHuntingComp::onLogout(PlayerHuntingComp *const this)
{
  PlayerEventComp *EventComp; // rax
  std::map<std::type_index,std::weak_ptr<Observer>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<std::type_index,std::weak_ptr<Observer>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<std::type_index,std::weak_ptr<Observer>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<const std::type_index,std::weak_ptr<Observer> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<const std::type_index,std::weak_ptr<Observer> > >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<const std::type_index,std::weak_ptr<Observer> > >::type *obs_wtr; // [rsp+38h] [rbp-8h]

  PlayerHuntingComp::internalTerminateHunting(this, 1);
  __for_range = &this->event_observer_map_;
  __for_begin._M_node = std::map<std::type_index,std::weak_ptr<Observer>>::begin(&this->event_observer_map_)._M_node;
  __for_end._M_node = std::map<std::type_index,std::weak_ptr<Observer>>::end(&this->event_observer_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<std::type_index const,std::weak_ptr<Observer>>>::operator*(&__for_begin);
    _ = std::get<0ul,std::type_index const,std::weak_ptr<Observer>>(__in);
    obs_wtr = std::get<1ul,std::type_index const,std::weak_ptr<Observer>>(__in);
    if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(obs_wtr) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EventComp = Player::getEventComp(this->player_);
      PlayerEventComp::unregisterObserver(EventComp, obs_wtr);
    }
    std::_Rb_tree_iterator<std::pair<std::type_index const,std::weak_ptr<Observer>>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 155: range 0000000016C84508-0000000016C84527
void __cdecl PlayerHuntingComp::onDailyRefresh(PlayerHuntingComp *const this)
{
  PlayerHuntingComp::refreshAll(this, 1);
};

// Line 160: range 0000000016C84528-0000000016C84C7E
void __cdecl PlayerHuntingComp::repairHuntingOffer(PlayerHuntingComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  proto::HuntingOfferState *p_state; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned int *v8; // r9
  std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  HuntingRecord *v17; // rax
  unsigned int *v18; // [rsp+0h] [rbp-130h]
  PlayerHuntingComp *thisa; // [rsp+8h] [rbp-128h]
  unsigned int val; // [rsp+18h] [rbp-118h] BYREF
  unsigned int MonsterConfigId; // [rsp+1Ch] [rbp-114h] BYREF
  std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::iterator __for_begin; // [rsp+20h] [rbp-110h] BYREF
  std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::iterator __for_end; // [rsp+28h] [rbp-108h] BYREF
  std::vector<HuntingOfferData>::iterator __for_begin_0; // [rsp+30h] [rbp-100h] BYREF
  std::vector<HuntingOfferData>::iterator __for_end_0; // [rsp+38h] [rbp-F8h] BYREF
  std::unordered_map<unsigned int,std::vector<HuntingOfferData>> *__for_range; // [rsp+40h] [rbp-F0h]
  std::pair<unsigned int const,std::vector<HuntingOfferData> > *__in; // [rsp+48h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<HuntingOfferData> > >::type *city_id; // [rsp+50h] [rbp-E0h]
  std::tuple_element<1,std::pair<unsigned int const,std::vector<HuntingOfferData> > >::type *hunting_offer_vec; // [rsp+58h] [rbp-D8h]
  std::vector<HuntingOfferData> *__for_range_0; // [rsp+60h] [rbp-D0h]
  HuntingOfferData *hunting_offer; // [rsp+68h] [rbp-C8h]
  std::shared_ptr<HuntingRecord> __r; // [rsp+70h] [rbp-C0h] BYREF
  common::milog::MiLogStream v33; // [rsp+80h] [rbp-B0h] BYREF
  char v34[144]; // [rsp+A0h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 22 started_refresh_id:162 48 4 29 statred_monster_config_id:162 64 4 18 stared_city_id:162";
  *(_QWORD *)(v1 + 16) = PlayerHuntingComp::repairHuntingOffer;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -202116348;
  *(_DWORD *)(v1 + 32) = 0;
  *(_DWORD *)(v1 + 48) = 0;
  *(_DWORD *)(v1 + 64) = 0;
  __for_range = &this->city_hunting_offer_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::begin(&this->city_hunting_offer_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::end(&this->city_hunting_offer_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<HuntingOfferData>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<HuntingOfferData>>,false,false>::operator*(&__for_begin);
    city_id = std::get<0ul,unsigned int const,std::vector<HuntingOfferData>>(__in);
    hunting_offer_vec = std::get<1ul,unsigned int const,std::vector<HuntingOfferData>>(__in);
    __for_range_0 = hunting_offer_vec;
    __for_begin_0._M_current = std::vector<HuntingOfferData>::begin(hunting_offer_vec)._M_current;
    __for_end_0._M_current = std::vector<HuntingOfferData>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<HuntingOfferData *,std::vector<HuntingOfferData>>(&__for_begin_0, &__for_end_0) )
    {
      hunting_offer = __gnu_cxx::__normal_iterator<HuntingOfferData *,std::vector<HuntingOfferData>>::operator*(&__for_begin_0);
      p_state = &hunting_offer->state;
      if ( *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_state);
      }
      if ( hunting_offer->state == HUNTING_OFFER_STATE_STARTED )
      {
        if ( *(_DWORD *)(v1 + 32) )
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/hunting/player_hunting_comp.cpp",
            "repairHuntingOffer",
            171);
          v5 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                 &v33,
                 (const char (*)[57])"[HUNTING] duplicated started hunting offer, refresh_id: ");
          v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &hunting_offer->refresh_id);
          v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                 v6,
                 (const char (*)[21])", monster_config_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &hunting_offer->monster_config_id);
          common::milog::MiLogStream::~MiLogStream(&v33);
          goto LABEL_36;
        }
        if ( *(_BYTE *)(((unsigned __int64)hunting_offer >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)hunting_offer & 7) + 3) >= *(_BYTE *)(((unsigned __int64)hunting_offer >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(hunting_offer);
        }
        *(_DWORD *)(v1 + 32) = hunting_offer->refresh_id;
        if ( *(_BYTE *)(((unsigned __int64)&hunting_offer->monster_config_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)hunting_offer + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&hunting_offer->monster_config_id >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&hunting_offer->monster_config_id);
        }
        *(_DWORD *)(v1 + 48) = hunting_offer->monster_config_id;
        if ( *(_BYTE *)(((unsigned __int64)&hunting_offer->city_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)hunting_offer + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&hunting_offer->city_id >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&hunting_offer->city_id);
        }
        *(_DWORD *)(v1 + 64) = hunting_offer->city_id;
      }
      __gnu_cxx::__normal_iterator<HuntingOfferData *,std::vector<HuntingOfferData>>::operator++(&__for_begin_0);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<HuntingOfferData>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_DWORD *)(v1 + 32) && *(_DWORD *)(v1 + 48) )
  {
    if ( std::operator!=<HuntingRecord>(&this->ongoing_hunting_record_ptr_, 0LL) )
    {
      v9 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ongoing_hunting_record_ptr_);
      if ( HuntingRecord::getRefreshId(v9) == *(_DWORD *)(v1 + 32) )
      {
        v10 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ongoing_hunting_record_ptr_);
        if ( HuntingRecord::getMonsterConfigId(v10) == *(_DWORD *)(v1 + 48) )
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/hunting/player_hunting_comp.cpp",
            "repairHuntingOffer",
            191);
          common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            &v33,
            (const char (*)[28])"[HUNTING] no need to repair");
          common::milog::MiLogStream::~MiLogStream(&v33);
          goto LABEL_36;
        }
      }
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/hunting/player_hunting_comp.cpp",
        "repairHuntingOffer",
        186);
      v12 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
              &v33,
              (const char (*)[70])"[HUNTING] ongoing hunting record param not match, ongoing refresh_id:");
      v13 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ongoing_hunting_record_ptr_);
      val = HuntingRecord::getRefreshId(v13);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      v15 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              v14,
              (const char (*)[29])", ongoing monster_config_id:");
      v16 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ongoing_hunting_record_ptr_);
      MonsterConfigId = HuntingRecord::getMonsterConfigId(v16);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &MonsterConfigId);
      common::milog::MiLogStream::~MiLogStream(&v33);
      PlayerHuntingComp::clearOngoingHuntingPtr(this);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::tools::perf::make_shared<HuntingRecord,Player &,unsigned int &,unsigned int &,unsigned int &>(
      (Player *)&__r,
      (unsigned int *)this->player_,
      (unsigned int *)(v1 + 32),
      (unsigned int *)(v1 + 48),
      (Player *)(v1 + 64),
      v8,
      v18,
      (unsigned int *)this);
    std::shared_ptr<HuntingRecord>::operator=(&thisa->ongoing_hunting_record_ptr_, &__r);
    std::shared_ptr<HuntingRecord>::~shared_ptr(&__r);
    v17 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)&thisa->ongoing_hunting_record_ptr_);
    if ( HuntingRecord::start(v17, 1) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/hunting/player_hunting_comp.cpp",
        "repairHuntingOffer",
        198);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        &v33,
        (const char (*)[31])"[HUNTING] hunting start failed");
      common::milog::MiLogStream::~MiLogStream(&v33);
    }
  }
LABEL_36:
  if ( v34 == (char *)v1 )
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

// Line 205: range 0000000016C84C80-0000000016C851A5
int32_t __cdecl PlayerHuntingComp::refreshAll(PlayerHuntingComp *const this, bool is_notify)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  time_t v7; // rdx
  time_t v8; // rcx
  char v9; // al
  int32_t v10; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v12; // rax
  _DWORD *v13; // rdx
  int32_t result; // eax
  uint32_t now; // [rsp+1Ch] [rbp-164h]
  uint32_t time_offset; // [rsp+20h] [rbp-160h]
  uint32_t refresh_time; // [rsp+24h] [rbp-15Ch]
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-158h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-150h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-148h]
  std::shared_ptr<Config> v21; // [rsp+40h] [rbp-140h] BYREF
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-130h] BYREF
  char v23[272]; // [rsp+70h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 18 config_city_id:221 64 48 22 refreshed_city_set:219 144 48 19 config_city_set:220";
  *(_QWORD *)(v2 + 16) = PlayerHuntingComp::refreshAll;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -219021312;
  v4[536862724] = 62194;
  v4[536862726] = -202116109;
  now = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
  time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v5->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v21);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
  refresh_time = ConstValueExcelConfigMgr::getCityReputationRefreshTime(&v6->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v21);
  v7 = time_offset;
  v8 = now;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_refresh_time_);
  }
  if ( !common::tools::TimeUtils::isSameWeek(this->last_refresh_time_, v8, v7) )
    goto LABEL_11;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_refresh_time_);
  }
  if ( refresh_time > this->last_refresh_time_ && refresh_time <= now )
LABEL_11:
    v9 = 1;
  else
    v9 = 0;
  if ( v9 && PlayerHuntingComp::internalRefreshAllHuntingOffer(this) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/player_hunting_comp.cpp",
      "refreshAll",
      214);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      &v22,
      (const char (*)[38])"internalRefreshAllHuntingOffer failed");
    common::milog::MiLogStream::~MiLogStream(&v22);
    v10 = -1;
  }
  else
  {
    common::tools::MiscUtils::getAllMapKeysSet<std::unordered_map<unsigned int,std::vector<HuntingOfferData>>>(
      (std::set<unsigned int> *)(v2 + 64),
      &this->city_hunting_offer_map_);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
    common::tools::MiscUtils::getAllMapKeysSet<std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>>(
      (std::set<unsigned int> *)(v2 + 144),
      &v11->design_config.txt_config_mgr.hunting_config_mgr.city_difficulty_hunting_refresh_config_map_);
    std::shared_ptr<Config>::~shared_ptr(&v21);
    __for_range = (std::set<unsigned int> *)(v2 + 144);
    __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 144))._M_node;
    __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v2 + 144))._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v12 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      *(_DWORD *)(v2 + 48) = *v13;
      if ( !std::set<unsigned int>::count(
              (const std::set<unsigned int> *const)(v2 + 64),
              (const std::set<unsigned int>::key_type *)(v2 + 48)) )
        PlayerHuntingComp::internalRefreshCityHuntingOffer(this, *(_DWORD *)(v2 + 48));
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    v10 = 0;
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 144));
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 64));
  }
  result = v10;
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
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

// Line 234: range 0000000016C851A6-0000000016C85255
int32_t __cdecl PlayerHuntingComp::forceRefreshAll(PlayerHuntingComp *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( PlayerHuntingComp::internalRefreshAllHuntingOffer(this) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/player_hunting_comp.cpp",
      "forceRefreshAll",
      237);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      &v2,
      (const char (*)[38])"internalRefreshAllHuntingOffer failed");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else
  {
    std::vector<std::pair<unsigned int,unsigned int>>::clear(&this->cur_week_finished_hunting_pair_vec_);
    return 0;
  }
};

// Line 246: range 0000000016C85256-0000000016C857BB
int32_t __fastcall PlayerHuntingComp::forceRefresh(
        PlayerHuntingComp *const this,
        uint32_t refresh_id,
        uint32_t monster_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  data::HuntingOfferDifficultyType difficulty; // ecx
  const unsigned int *M_current; // r15
  std::vector<unsigned int>::const_iterator v13; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __lhs; // [rsp+20h] [rbp-E0h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __rhs; // [rsp+28h] [rbp-D8h] BYREF
  const data::HuntingRefreshExcelConfig *refresh_config_ptr; // [rsp+30h] [rbp-D0h]
  const data::HuntingMonsterExcelConfig *monster_config_ptr; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Config> v19; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 14 refresh_id:245 64 4 14 monster_id:245";
  *(_QWORD *)(v3 + 16) = PlayerHuntingComp::forceRefresh;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = refresh_id;
  *(_DWORD *)(v3 + 64) = monster_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
  refresh_config_ptr = data::HuntingExcelConfigMgrBase::findHuntingRefreshExcelConfig(
                         &v6->design_config.txt_config_mgr.hunting_config_mgr,
                         *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v19);
  if ( refresh_config_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v19);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
    monster_config_ptr = data::HuntingExcelConfigMgrBase::findHuntingMonsterExcelConfig(
                           &v9->design_config.txt_config_mgr.hunting_config_mgr,
                           *(_DWORD *)(v3 + 64));
    std::shared_ptr<Config>::~shared_ptr(&v19);
    if ( monster_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->difficulty >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->difficulty >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&refresh_config_ptr->difficulty);
      }
      difficulty = refresh_config_ptr->difficulty;
      if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->difficulty >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&monster_config_ptr->difficulty >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&monster_config_ptr->difficulty);
      }
      if ( difficulty == monster_config_ptr->difficulty )
      {
        __rhs._M_current = std::vector<unsigned int>::end(&monster_config_ptr->city_list)._M_current;
        M_current = std::vector<unsigned int>::end(&monster_config_ptr->city_list)._M_current;
        v13._M_current = std::vector<unsigned int>::begin(&monster_config_ptr->city_list)._M_current;
        __lhs._M_current = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                             v13,
                             (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                             &refresh_config_ptr->city_id)._M_current;
        if ( __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(&__lhs, &__rhs) )
        {
          common::milog::MiLogStream::create(
            &v20,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/hunting/player_hunting_comp.cpp",
            "forceRefresh",
            270);
          common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            &v20,
            (const char (*)[25])"[HUNTING] city not match");
          common::milog::MiLogStream::~MiLogStream(&v20);
          result = -1;
        }
        else
        {
          PlayerHuntingComp::internalTerminateHunting(this, 0);
          result = PlayerHuntingComp::internalRefreshOfferByRefreshIdAndMonsterId(
                     this,
                     *(_DWORD *)(v3 + 48),
                     *(_DWORD *)(v3 + 64));
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/hunting/player_hunting_comp.cpp",
          "forceRefresh",
          264);
        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          &v20,
          (const char (*)[31])"[HUNTING] difficulty not match");
        common::milog::MiLogStream::~MiLogStream(&v20);
        result = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/hunting/player_hunting_comp.cpp",
        "forceRefresh",
        258);
      v10 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
              &v20,
              (const char (*)[59])"[HUNTING] cannot find hunting monster config, monster_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v20);
      result = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/player_hunting_comp.cpp",
      "forceRefresh",
      251);
    v7 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v20,
           (const char (*)[59])"[HUNTING] huting refresh config_id not found, refresh_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = -1;
  }
  if ( v21 == (char *)v3 )
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

// Line 281: range 0000000016C857BC-0000000016C866D7
int32_t __cdecl PlayerHuntingComp::internalRefreshAllHuntingOffer(PlayerHuntingComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // r14
  int32_t v5; // r14d
  const std::vector<unsigned int> *v6; // rax
  common::milog::MiLogStream *v7; // rax
  const std::vector<unsigned int> *v8; // rax
  int v9; // eax
  const std::vector<unsigned int> *v10; // rax
  std::vector<unsigned int>::const_reference v11; // rax
  _DWORD *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  const HuntingExcelConfigMgr *v14; // rcx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // eax
  std::vector<unsigned int>::const_reference v18; // rax
  _DWORD *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  std::vector<std::vector<unsigned int>>::size_type v21; // r14
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false>::pointer v22; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false>::pointer v23; // rax
  const std::vector<unsigned int> *v24; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false>::pointer v25; // rax
  const std::vector<unsigned int> *v26; // rax
  int v27; // eax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false>::pointer v28; // rax
  const std::vector<unsigned int> *v29; // rax
  std::vector<unsigned int>::const_reference v30; // rax
  _DWORD *v31; // rdx
  unsigned int *v32; // r8
  std::pair<std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int> >,bool> v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  HuntingOfferData *v39; // rax
  __int64 Now; // rsi
  int32_t result; // eax
  uint32_t rand; // [rsp+14h] [rbp-2FCh]
  uint32_t randa; // [rsp+14h] [rbp-2FCh]
  uint32_t randb; // [rsp+14h] [rbp-2FCh]
  std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::const_iterator __for_begin; // [rsp+18h] [rbp-2F8h] BYREF
  std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::const_iterator __for_end; // [rsp+20h] [rbp-2F0h] BYREF
  unsigned __int64 val; // [rsp+28h] [rbp-2E8h] BYREF
  const HuntingExcelConfigMgr *config_mgr; // [rsp+30h] [rbp-2E0h]
  const std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>> *city_refresh_config_map; // [rsp+38h] [rbp-2D8h]
  const std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>> *__for_range; // [rsp+40h] [rbp-2D0h]
  const std::pair<unsigned int const,std::vector<std::vector<unsigned int>> > *v51; // [rsp+48h] [rbp-2C8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::vector<std::vector<unsigned int>> > >::type *city_id; // [rsp+50h] [rbp-2C0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<std::vector<unsigned int>> > >::type *difficulty_config_vec; // [rsp+58h] [rbp-2B8h]
  std::vector<HuntingOfferData> *city_hunting_offer_vec; // [rsp+60h] [rbp-2B0h]
  const data::HuntingRefreshExcelConfig *refresh_config_ptr; // [rsp+68h] [rbp-2A8h]
  const std::vector<std::vector<unsigned int>> *certian_monster_vec_ptr; // [rsp+78h] [rbp-298h]
  const std::vector<unsigned int> *monster_vec; // [rsp+80h] [rbp-290h]
  std::set<std::pair<unsigned int,unsigned int>> *city_set; // [rsp+88h] [rbp-288h]
  std::shared_ptr<Config> v60; // [rsp+90h] [rbp-280h] BYREF
  common::milog::MiLogStream v61; // [rsp+A0h] [rbp-270h] BYREF
  common::milog::MiLogStream v62; // [rsp+C0h] [rbp-250h] BYREF
  common::milog::MiLogStream v63; // [rsp+E0h] [rbp-230h] BYREF
  common::milog::MiLogStream v64; // [rsp+100h] [rbp-210h] BYREF
  common::milog::MiLogStream v65; // [rsp+120h] [rbp-1F0h] BYREF
  common::milog::MiLogStream v66; // [rsp+140h] [rbp-1D0h] BYREF
  common::milog::MiLogStream v67; // [rsp+160h] [rbp-1B0h] BYREF
  common::milog::MiLogStream v68; // [rsp+180h] [rbp-190h] BYREF
  common::milog::MiLogStream v69; // [rsp+1A0h] [rbp-170h] BYREF
  common::milog::MiLogStream v70; // [rsp+1C0h] [rbp-150h] BYREF
  char v71[304]; // [rsp+1E0h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v71;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "6 32 4 8 diff:295 48 4 14 refresh_id:310 64 4 21 monster_config_id:327 80 8 16 monster_iter:350 "
                        "112 24 14 offer_data:379 176 48 26 city_hunting_offer_map:291";
  *(_QWORD *)(v1 + 16) = PlayerHuntingComp::internalRefreshAllHuntingOffer;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = 61956;
  v3[536862722] = -234881024;
  v3[536862723] = 62194;
  v3[536862724] = -218959360;
  v3[536862725] = 62194;
  v3[536862727] = -202116109;
  PlayerHuntingComp::internalTerminateHunting(this, 0);
  std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::clear(&this->city_hunting_offer_map_);
  std::vector<std::pair<unsigned int,unsigned int>>::clear(&this->cur_week_finished_hunting_pair_vec_);
  std::set<unsigned int>::clear(&this->cur_week_refreshed_monster_config_id_set_);
  std::set<unsigned int>::clear(&this->cur_week_refreshed_refresh_id_set_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v60);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v60)->design_config.txt_config_mgr.hunting_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v60);
  city_refresh_config_map = &config_mgr->city_difficulty_hunting_refresh_config_map_;
  std::map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::map((std::map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>> *const)(v1 + 176));
  __for_range = &config_mgr->city_difficulty_hunting_refresh_config_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::begin(&config_mgr->city_difficulty_hunting_refresh_config_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::end(&config_mgr->city_difficulty_hunting_refresh_config_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<std::vector<unsigned int>>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v51 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>>>,false,false>::operator*(&__for_begin);
    city_id = std::get<0ul,unsigned int const,std::vector<std::vector<unsigned int>>>(v51);
    difficulty_config_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<std::vector<unsigned int>> > >::type *)std::get<1ul,unsigned int const,std::vector<std::vector<unsigned int>>>(v51);
    city_hunting_offer_vec = std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::operator[](
                               &this->city_hunting_offer_map_,
                               city_id);
    for ( *(_DWORD *)(v1 + 32) = 0; *(_DWORD *)(v1 + 32) <= 2u; ++*(_DWORD *)(v1 + 32) )
    {
      if ( std::vector<std::vector<unsigned int>>::size(difficulty_config_vec) != 3 )
      {
        common::milog::MiLogStream::create(
          &v61,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/hunting/player_hunting_comp.cpp",
          "internalRefreshAllHuntingOffer",
          299);
        v4 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
               &v61,
               (const char (*)[73])"[HUNTING] difficulty_config_vec not enough, difficulty_config_vec.size: ");
        val = std::vector<std::vector<unsigned int>>::size(difficulty_config_vec);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v4, &val);
        common::milog::MiLogStream::~MiLogStream(&v61);
        v5 = -1;
        goto LABEL_52;
      }
      v6 = std::vector<std::vector<unsigned int>>::operator[](difficulty_config_vec, *(unsigned int *)(v1 + 32));
      if ( !std::vector<unsigned int>::size(v6) )
      {
        common::milog::MiLogStream::create(
          &v62,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/hunting/player_hunting_comp.cpp",
          "internalRefreshAllHuntingOffer",
          305);
        v7 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
               &v62,
               (const char (*)[66])"[HUNTING] difficulty_config_vec[diff] should not be empty, diff: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 32));
        common::milog::MiLogStream::~MiLogStream(&v62);
        v5 = -1;
        goto LABEL_52;
      }
      v8 = std::vector<std::vector<unsigned int>>::operator[](difficulty_config_vec, *(unsigned int *)(v1 + 32));
      v9 = std::vector<unsigned int>::size(v8);
      rand = common::tools::RandomUtils::rand<unsigned int>(0, v9 - 1);
      v10 = std::vector<std::vector<unsigned int>>::operator[](difficulty_config_vec, *(unsigned int *)(v1 + 32));
      v11 = std::vector<unsigned int>::operator[](v10, rand);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      *(_DWORD *)(v1 + 48) = *v12;
      refresh_config_ptr = data::HuntingExcelConfigMgrBase::findHuntingRefreshExcelConfig(
                             config_mgr,
                             *(_DWORD *)(v1 + 48));
      if ( !refresh_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v63,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/hunting/player_hunting_comp.cpp",
          "internalRefreshAllHuntingOffer",
          315);
        v13 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                &v63,
                (const char (*)[59])"[HUNTING] huting refresh config_id not found, refresh_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v1 + 48));
        common::milog::MiLogStream::~MiLogStream(&v63);
        v5 = -1;
        goto LABEL_52;
      }
      v14 = config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->region_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)refresh_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->region_id >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&refresh_config_ptr->region_id);
      }
      if ( !data::HuntingExcelConfigMgrBase::findHuntingRegionExcelConfig(v14, refresh_config_ptr->region_id) )
      {
        common::milog::MiLogStream::create(
          &v64,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/hunting/player_hunting_comp.cpp",
          "internalRefreshAllHuntingOffer",
          323);
        v15 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                &v64,
                (const char (*)[57])"[HUNTING] huting region config_id not found, region_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &refresh_config_ptr->region_id);
        common::milog::MiLogStream::~MiLogStream(&v64);
        v5 = -1;
        goto LABEL_52;
      }
      *(_DWORD *)(v1 + 64) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->region_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)refresh_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->region_id >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&refresh_config_ptr->region_id);
      }
      certian_monster_vec_ptr = HuntingExcelConfigMgr::findRegionCertainMonsterVec(
                                  config_mgr,
                                  refresh_config_ptr->region_id);
      if ( certian_monster_vec_ptr )
      {
        if ( std::vector<std::vector<unsigned int>>::size(certian_monster_vec_ptr) != 3 )
        {
          common::milog::MiLogStream::create(
            &v65,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/hunting/player_hunting_comp.cpp",
            "internalRefreshAllHuntingOffer",
            333);
          v16 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                  &v65,
                  (const char (*)[58])"[HUNTING] certian_monster_vec is less than 3, region_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &refresh_config_ptr->region_id);
          common::milog::MiLogStream::~MiLogStream(&v65);
          v5 = -1;
          goto LABEL_52;
        }
        monster_vec = std::vector<std::vector<unsigned int>>::at(certian_monster_vec_ptr, *(unsigned int *)(v1 + 32));
        if ( std::vector<unsigned int>::empty(monster_vec) )
        {
          common::milog::MiLogStream::create(
            &v66,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/hunting/player_hunting_comp.cpp",
            "internalRefreshAllHuntingOffer",
            339);
          common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            &v66,
            (const char (*)[31])"[HUNTING] monster_vec is empty");
          common::milog::MiLogStream::~MiLogStream(&v66);
          v5 = -1;
          goto LABEL_52;
        }
        v17 = std::vector<unsigned int>::size(monster_vec);
        randa = common::tools::RandomUtils::rand<unsigned int>(0, v17 - 1);
        v18 = std::vector<unsigned int>::operator[](monster_vec, randa);
        v19 = v18;
        if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v18);
        }
        *(_DWORD *)(v1 + 64) = *v19;
      }
      else
      {
        *(std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::const_iterator *)(v1 + 80) = std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::find(&config_mgr->city_difficulty_hunting_monster_config_map_, city_id);
        val = (unsigned __int64)std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::end(&config_mgr->city_difficulty_hunting_monster_config_map_)._M_cur;
        if ( std::__detail::operator==<std::pair<unsigned int const,std::vector<std::vector<unsigned int>>>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false> *)(v1 + 80),
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false> *)&val) )
        {
          common::milog::MiLogStream::create(
            &v67,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/hunting/player_hunting_comp.cpp",
            "internalRefreshAllHuntingOffer",
            353);
          v20 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                  &v67,
                  (const char (*)[51])"[HUNTING] huting monster city not found, city_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, city_id);
          common::milog::MiLogStream::~MiLogStream(&v67);
          v5 = -1;
          goto LABEL_52;
        }
        v21 = *(unsigned int *)(v1 + 32);
        v22 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false> *const)(v1 + 80));
        if ( v21 >= std::vector<std::vector<unsigned int>>::size(&v22->second) )
        {
          common::milog::MiLogStream::create(
            &v68,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/hunting/player_hunting_comp.cpp",
            "internalRefreshAllHuntingOffer",
            359);
          common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            &v68,
            (const char (*)[40])"[HUNTING] monster difficulty not enough");
          common::milog::MiLogStream::~MiLogStream(&v68);
          v5 = -1;
          goto LABEL_52;
        }
        v23 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false> *const)(v1 + 80));
        v24 = std::vector<std::vector<unsigned int>>::operator[](&v23->second, *(unsigned int *)(v1 + 32));
        if ( !std::vector<unsigned int>::size(v24) )
        {
          common::milog::MiLogStream::create(
            &v69,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/hunting/player_hunting_comp.cpp",
            "internalRefreshAllHuntingOffer",
            365);
          common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
            &v69,
            (const char (*)[54])"[HUNTING] monster_iter->second[diff] should not empty");
          common::milog::MiLogStream::~MiLogStream(&v69);
          v5 = -1;
          goto LABEL_52;
        }
        v25 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false> *const)(v1 + 80));
        v26 = std::vector<std::vector<unsigned int>>::operator[](&v25->second, *(unsigned int *)(v1 + 32));
        v27 = std::vector<unsigned int>::size(v26);
        randb = common::tools::RandomUtils::rand<unsigned int>(0, v27 - 1);
        v28 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false> *const)(v1 + 80));
        v29 = std::vector<std::vector<unsigned int>>::operator[](&v28->second, *(unsigned int *)(v1 + 32));
        v30 = std::vector<unsigned int>::operator[](v29, randb);
        v31 = v30;
        if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v30);
        }
        *(_DWORD *)(v1 + 64) = *v31;
      }
      city_set = std::map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::operator[](
                   (std::map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>> *const)(v1 + 176),
                   city_id);
      v33 = std::set<std::pair<unsigned int,unsigned int>>::emplace<unsigned int &,unsigned int &>(
              city_set,
              (unsigned int *)(v1 + 48),
              (unsigned int *)(v1 + 64),
              (unsigned int *)(v1 + 48),
              v32);
      if ( !v33.second )
      {
        common::milog::MiLogStream::create(
          &v70,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/hunting/player_hunting_comp.cpp",
          "internalRefreshAllHuntingOffer",
          376);
        v34 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v70,
                (const char (*)[33])"[HUNTING] duplicated refresh_id:");
        v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v34,
                (const unsigned int *)(v1 + 48));
        v36 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                v35,
                (const char (*)[20])" monster_config_id:");
        v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v36,
                (const unsigned int *)(v1 + 64));
        v38 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v37, (const char (*)[10])" city_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, city_id);
        common::milog::MiLogStream::~MiLogStream(&v70);
        v5 = -1;
        goto LABEL_52;
      }
      HuntingOfferData::HuntingOfferData((HuntingOfferData *const)(v1 + 112));
      *(_DWORD *)(v1 + 112) = *(_DWORD *)(v1 + 48);
      *(_DWORD *)(v1 + 116) = *(_DWORD *)(v1 + 64);
      if ( *(_BYTE *)(((unsigned __int64)city_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)city_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)city_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(city_id);
      }
      *(_DWORD *)(v1 + 120) = *city_id;
      if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->difficulty >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->difficulty >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&refresh_config_ptr->difficulty);
      }
      *(_DWORD *)(v1 + 124) = refresh_config_ptr->difficulty;
      *(_DWORD *)(v1 + 128) = 2;
      v39 = std::move<HuntingOfferData &>((HuntingOfferData *)(v1 + 112));
      std::vector<HuntingOfferData>::emplace_back<HuntingOfferData>(city_hunting_offer_vec, v39, v39);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>>>,false,false>::operator++(&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_new_hunting_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_new_hunting_, &__for_end, &this->is_new_hunting_);
  this->is_new_hunting_ = 1;
  Now = (unsigned int)common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_refresh_time_, Now, &this->last_refresh_time_);
  }
  this->last_refresh_time_ = Now;
  v5 = 0;
LABEL_52:
  std::map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::~map((std::map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>> *const)(v1 + 176));
  result = v5;
  if ( v71 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF801C) = 0;
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

// Line 394: range 0000000016C866D8-0000000016C87495
void __fastcall PlayerHuntingComp::internalRefreshCityHuntingOffer(PlayerHuntingComp *const this, uint32_t city_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  const std::vector<unsigned int> *v8; // rax
  common::milog::MiLogStream *v9; // rax
  const std::vector<unsigned int> *v10; // rax
  int v11; // eax
  const std::vector<unsigned int> *v12; // rax
  std::vector<unsigned int>::const_reference v13; // rax
  _DWORD *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  const HuntingExcelConfigMgr *v16; // rcx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  int v19; // eax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v20; // rax
  uint32_t *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  std::vector<std::vector<unsigned int>>::size_type v23; // r15
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false>::pointer v24; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false>::pointer v25; // rax
  const std::vector<unsigned int> *v26; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false>::pointer v27; // rax
  const std::vector<unsigned int> *v28; // rax
  int v29; // eax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false>::pointer v30; // rax
  const std::vector<unsigned int> *v31; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v32; // rax
  uint32_t *v33; // rdx
  HuntingOfferData *v34; // rax
  common::milog::MiLogStream *v35; // rax
  uint32_t monster_config_id; // [rsp+10h] [rbp-290h]
  uint32_t rand; // [rsp+14h] [rbp-28Ch]
  uint32_t randa; // [rsp+14h] [rbp-28Ch]
  uint32_t randb; // [rsp+14h] [rbp-28Ch]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false> __y; // [rsp+18h] [rbp-288h] BYREF
  const HuntingExcelConfigMgr *config_mgr; // [rsp+20h] [rbp-280h]
  const std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>> *city_refresh_config_map; // [rsp+28h] [rbp-278h]
  const std::vector<std::vector<unsigned int>> *difficulty_config_vec; // [rsp+30h] [rbp-270h]
  std::vector<HuntingOfferData> *city_hunting_offer_vec; // [rsp+38h] [rbp-268h]
  const data::HuntingRefreshExcelConfig *refresh_config_ptr; // [rsp+40h] [rbp-260h]
  const std::vector<std::vector<unsigned int>> *certian_monster_vec_ptr; // [rsp+50h] [rbp-250h]
  const std::vector<unsigned int> *monster_vec; // [rsp+58h] [rbp-248h]
  std::shared_ptr<Config> v49; // [rsp+60h] [rbp-240h] BYREF
  common::milog::MiLogStream v50; // [rsp+70h] [rbp-230h] BYREF
  common::milog::MiLogStream v51; // [rsp+90h] [rbp-210h] BYREF
  common::milog::MiLogStream v52; // [rsp+B0h] [rbp-1F0h] BYREF
  common::milog::MiLogStream v53; // [rsp+D0h] [rbp-1D0h] BYREF
  common::milog::MiLogStream v54; // [rsp+F0h] [rbp-1B0h] BYREF
  common::milog::MiLogStream v55; // [rsp+110h] [rbp-190h] BYREF
  common::milog::MiLogStream v56; // [rsp+130h] [rbp-170h] BYREF
  common::milog::MiLogStream v57; // [rsp+150h] [rbp-150h] BYREF
  common::milog::MiLogStream v58; // [rsp+170h] [rbp-130h] BYREF
  char v59[272]; // [rsp+190h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v59;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 8 diff:410 64 4 14 refresh_id:425 80 4 11 city_id:393 96 8 30 difficulty_config_vec_iter:"
                        "402 128 8 16 monster_iter:465 160 24 14 offer_data:487";
  *(_QWORD *)(v2 + 16) = PlayerHuntingComp::internalRefreshCityHuntingOffer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  *(_DWORD *)(v2 + 80) = city_id;
  if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::vector<HuntingOfferData>>,unsigned int>(
         &this->city_hunting_offer_map_,
         (const unsigned int *)(v2 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v58,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/hunting/player_hunting_comp.cpp",
      "internalRefreshCityHuntingOffer",
      397);
    v5 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v58,
           (const char (*)[47])"[HUNTING] city has already has offer, city_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 80));
    common::milog::MiLogStream::~MiLogStream(&v58);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v49);
    config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49)->design_config.txt_config_mgr.hunting_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v49);
    city_refresh_config_map = &config_mgr->city_difficulty_hunting_refresh_config_map_;
    *(std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::find(&config_mgr->city_difficulty_hunting_refresh_config_map_, (const std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::key_type *)(v2 + 80));
    __y._M_cur = std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::end(city_refresh_config_map)._M_cur;
    if ( std::__detail::operator==<std::pair<unsigned int const,std::vector<std::vector<unsigned int>>>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false> *)(v2 + 96),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v58,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/hunting/player_hunting_comp.cpp",
        "internalRefreshCityHuntingOffer",
        405);
      v6 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v58,
             (const char (*)[47])"[HUNTING] city has no refresh config, city_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 80));
      common::milog::MiLogStream::~MiLogStream(&v58);
    }
    else
    {
      difficulty_config_vec = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false> *const)(v2 + 96))->second;
      city_hunting_offer_vec = std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::operator[](
                                 &this->city_hunting_offer_map_,
                                 (const std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::key_type *)(v2 + 80));
      for ( *(_DWORD *)(v2 + 48) = 0; *(_DWORD *)(v2 + 48) <= 2u; ++*(_DWORD *)(v2 + 48) )
      {
        if ( std::vector<std::vector<unsigned int>>::size(difficulty_config_vec) != 3 )
        {
          common::milog::MiLogStream::create(
            &v50,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/hunting/player_hunting_comp.cpp",
            "internalRefreshCityHuntingOffer",
            414);
          v7 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
                 &v50,
                 (const char (*)[73])"[HUNTING] difficulty_config_vec not enough, difficulty_config_vec.size: ");
          __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false>::__node_type *)std::vector<std::vector<unsigned int>>::size(difficulty_config_vec);
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, (const unsigned __int64 *)&__y);
          common::milog::MiLogStream::~MiLogStream(&v50);
          goto LABEL_45;
        }
        v8 = std::vector<std::vector<unsigned int>>::operator[](difficulty_config_vec, *(unsigned int *)(v2 + 48));
        if ( !std::vector<unsigned int>::size(v8) )
        {
          common::milog::MiLogStream::create(
            &v51,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/hunting/player_hunting_comp.cpp",
            "internalRefreshCityHuntingOffer",
            420);
          v9 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                 &v51,
                 (const char (*)[66])"[HUNTING] difficulty_config_vec[diff] should not be empty, diff: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v51);
          goto LABEL_45;
        }
        v10 = std::vector<std::vector<unsigned int>>::operator[](difficulty_config_vec, *(unsigned int *)(v2 + 48));
        v11 = std::vector<unsigned int>::size(v10);
        rand = common::tools::RandomUtils::rand<unsigned int>(0, v11 - 1);
        v12 = std::vector<std::vector<unsigned int>>::operator[](difficulty_config_vec, *(unsigned int *)(v2 + 48));
        v13 = std::vector<unsigned int>::operator[](v12, rand);
        v14 = v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        *(_DWORD *)(v2 + 64) = *v14;
        refresh_config_ptr = data::HuntingExcelConfigMgrBase::findHuntingRefreshExcelConfig(
                               config_mgr,
                               *(_DWORD *)(v2 + 64));
        if ( !refresh_config_ptr )
        {
          common::milog::MiLogStream::create(
            &v52,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/hunting/player_hunting_comp.cpp",
            "internalRefreshCityHuntingOffer",
            430);
          v15 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                  &v52,
                  (const char (*)[59])"[HUNTING] huting refresh config_id not found, refresh_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 64));
          common::milog::MiLogStream::~MiLogStream(&v52);
          goto LABEL_45;
        }
        v16 = config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->region_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)refresh_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->region_id >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&refresh_config_ptr->region_id);
        }
        if ( !data::HuntingExcelConfigMgrBase::findHuntingRegionExcelConfig(v16, refresh_config_ptr->region_id) )
        {
          common::milog::MiLogStream::create(
            &v53,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/hunting/player_hunting_comp.cpp",
            "internalRefreshCityHuntingOffer",
            438);
          v17 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                  &v53,
                  (const char (*)[57])"[HUNTING] huting region config_id not found, region_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &refresh_config_ptr->region_id);
          common::milog::MiLogStream::~MiLogStream(&v53);
          goto LABEL_45;
        }
        if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->region_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)refresh_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->region_id >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&refresh_config_ptr->region_id);
        }
        certian_monster_vec_ptr = HuntingExcelConfigMgr::findRegionCertainMonsterVec(
                                    config_mgr,
                                    refresh_config_ptr->region_id);
        if ( certian_monster_vec_ptr )
        {
          if ( std::vector<std::vector<unsigned int>>::size(certian_monster_vec_ptr) != 3 )
          {
            common::milog::MiLogStream::create(
              &v54,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/hunting/player_hunting_comp.cpp",
              "internalRefreshCityHuntingOffer",
              448);
            v18 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                    &v54,
                    (const char (*)[58])"[HUNTING] certian_monster_vec is less than 3, region_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &refresh_config_ptr->region_id);
            common::milog::MiLogStream::~MiLogStream(&v54);
            goto LABEL_45;
          }
          monster_vec = std::vector<std::vector<unsigned int>>::at(certian_monster_vec_ptr, *(unsigned int *)(v2 + 48));
          if ( std::vector<unsigned int>::empty(monster_vec) )
          {
            common::milog::MiLogStream::create(
              &v55,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/hunting/player_hunting_comp.cpp",
              "internalRefreshCityHuntingOffer",
              454);
            common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v55,
              (const char (*)[31])"[HUNTING] monster_vec is empty");
            common::milog::MiLogStream::~MiLogStream(&v55);
            goto LABEL_45;
          }
          v19 = std::vector<unsigned int>::size(monster_vec);
          randa = common::tools::RandomUtils::rand<unsigned int>(0, v19 - 1);
          v20 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](monster_vec, randa);
          v21 = v20;
          if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v20);
          }
          monster_config_id = *v21;
        }
        else
        {
          *(std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::const_iterator *)(v2 + 128) = std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::find(&config_mgr->city_difficulty_hunting_monster_config_map_, (const std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::key_type *)(v2 + 80));
          __y._M_cur = std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::end(&config_mgr->city_difficulty_hunting_monster_config_map_)._M_cur;
          if ( std::__detail::operator==<std::pair<unsigned int const,std::vector<std::vector<unsigned int>>>,false>(
                 (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false> *)(v2 + 128),
                 &__y) )
          {
            common::milog::MiLogStream::create(
              &v56,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/hunting/player_hunting_comp.cpp",
              "internalRefreshCityHuntingOffer",
              468);
            v22 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                    &v56,
                    (const char (*)[51])"[HUNTING] huting monster city not found, city_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v2 + 80));
            common::milog::MiLogStream::~MiLogStream(&v56);
            goto LABEL_45;
          }
          v23 = *(unsigned int *)(v2 + 48);
          v24 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false> *const)(v2 + 128));
          if ( v23 >= std::vector<std::vector<unsigned int>>::size(&v24->second) )
          {
            common::milog::MiLogStream::create(
              &v57,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/hunting/player_hunting_comp.cpp",
              "internalRefreshCityHuntingOffer",
              474);
            common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v57,
              (const char (*)[40])"[HUNTING] monster difficulty not enough");
            common::milog::MiLogStream::~MiLogStream(&v57);
            goto LABEL_45;
          }
          v25 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false> *const)(v2 + 128));
          v26 = std::vector<std::vector<unsigned int>>::operator[](&v25->second, *(unsigned int *)(v2 + 48));
          if ( !std::vector<unsigned int>::size(v26) )
          {
            common::milog::MiLogStream::create(
              &v58,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/hunting/player_hunting_comp.cpp",
              "internalRefreshCityHuntingOffer",
              480);
            common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
              &v58,
              (const char (*)[54])"[HUNTING] monster_iter->second[diff] should not empty");
            common::milog::MiLogStream::~MiLogStream(&v58);
            goto LABEL_45;
          }
          v27 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false> *const)(v2 + 128));
          v28 = std::vector<std::vector<unsigned int>>::operator[](&v27->second, *(unsigned int *)(v2 + 48));
          v29 = std::vector<unsigned int>::size(v28);
          randb = common::tools::RandomUtils::rand<unsigned int>(0, v29 - 1);
          v30 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false> *const)(v2 + 128));
          v31 = std::vector<std::vector<unsigned int>>::operator[](&v30->second, *(unsigned int *)(v2 + 48));
          v32 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](v31, randb);
          v33 = v32;
          if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v32);
          }
          monster_config_id = *v33;
        }
        HuntingOfferData::HuntingOfferData((HuntingOfferData *const)(v2 + 160));
        *(_DWORD *)(v2 + 160) = *(_DWORD *)(v2 + 64);
        *(_DWORD *)(v2 + 164) = monster_config_id;
        *(_DWORD *)(v2 + 168) = *(_DWORD *)(v2 + 80);
        if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->difficulty >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->difficulty >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&refresh_config_ptr->difficulty);
        }
        *(_DWORD *)(v2 + 172) = refresh_config_ptr->difficulty;
        *(_DWORD *)(v2 + 176) = 2;
        v34 = std::move<HuntingOfferData &>((HuntingOfferData *)(v2 + 160));
        std::vector<HuntingOfferData>::emplace_back<HuntingOfferData>(city_hunting_offer_vec, v34, v34);
      }
      common::milog::MiLogStream::create(
        &v58,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/hunting/player_hunting_comp.cpp",
        "internalRefreshCityHuntingOffer",
        495);
      v35 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
              &v58,
              (const char (*)[49])"[HUNTING] refresh single hunting offer, city_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, (const unsigned int *)(v2 + 80));
      common::milog::MiLogStream::~MiLogStream(&v58);
    }
  }
LABEL_45:
  if ( v59 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
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
};

// Line 499: range 0000000016C87496-0000000016C87687
int32_t __cdecl PlayerHuntingComp::internalTakeHuntingOffer(
        PlayerHuntingComp *const this,
        const HuntingOfferData *hunting_off_data)
{
  HuntingRecord *v2; // rax
  const unsigned int *v4; // r9
  uint32_t *p_city_id; // rdi
  uint32_t *p_monster_config_id; // rcx
  const HuntingOfferData *v7; // rdx
  HuntingRecord *v8; // rax
  PlayerHuntingComp *thisa; // [rsp+8h] [rbp-58h]
  int32_t ret; // [rsp+1Ch] [rbp-44h]
  std::shared_ptr<HuntingRecord> __r; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-30h] BYREF

  thisa = this;
  if ( std::operator!=<HuntingRecord>(&this->ongoing_hunting_record_ptr_, 0LL) )
  {
    v2 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ongoing_hunting_record_ptr_);
    if ( !HuntingRecord::isFinish(v2) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/hunting/player_hunting_comp.cpp",
        "internalTakeHuntingOffer",
        508);
      common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
        &v12,
        (const char (*)[38])"[HUNTING] player has unfinished offer");
      common::milog::MiLogStream::~MiLogStream(&v12);
      return 8202;
    }
    PlayerHuntingComp::clearOngoingHuntingPtr(this);
  }
  if ( std::operator==<HuntingRecord>(&this->ongoing_hunting_record_ptr_, 0LL) )
  {
    p_city_id = &hunting_off_data->city_id;
    p_monster_config_id = &hunting_off_data->monster_config_id;
    v7 = hunting_off_data;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    {
      p_city_id = (uint32_t *)&thisa->player_;
      __asan_report_load8();
    }
    common::tools::perf::make_shared<HuntingRecord,Player &,unsigned int const&,unsigned int const&,unsigned int const&>(
      (Player *)&__r,
      (const unsigned int *)thisa->player_,
      &v7->refresh_id,
      p_monster_config_id,
      (Player *)p_city_id,
      v4,
      &hunting_off_data->refresh_id,
      (const unsigned int *)thisa);
    std::shared_ptr<HuntingRecord>::operator=(&thisa->ongoing_hunting_record_ptr_, &__r);
    std::shared_ptr<HuntingRecord>::~shared_ptr(&__r);
  }
  v8 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)&thisa->ongoing_hunting_record_ptr_);
  ret = HuntingRecord::start(v8, 0);
  if ( !ret )
    return 0;
  common::milog::MiLogStream::create(
    &v12,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/hunting/player_hunting_comp.cpp",
    "internalTakeHuntingOffer",
    521);
  common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
    &v12,
    (const char (*)[31])"[HUNTING] hunting start failed");
  common::milog::MiLogStream::~MiLogStream(&v12);
  return ret;
};

// Line 529: range 0000000016C87688-0000000016C87C47
int32_t __cdecl PlayerHuntingComp::clientRequestOfferData(
        PlayerHuntingComp *const this,
        const proto::GetCityHuntingOfferReq *req,
        proto::GetCityHuntingOfferRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint32_t ReputationComp; // eax
  common::milog::MiLogStream *v7; // rax
  int32_t v8; // r14d
  std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  google::protobuf::uint32 v12; // edx
  proto::HuntingOfferData *v13; // rax
  std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t RefreshId; // eax
  std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t MonsterConfigId; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  google::protobuf::uint32 v19; // edx
  int32_t result; // eax
  uint32_t now; // [rsp+2Ch] [rbp-114h]
  uint32_t time_offset; // [rsp+30h] [rbp-110h]
  std::vector<HuntingOfferData>::iterator __for_begin; // [rsp+38h] [rbp-108h] BYREF
  std::vector<HuntingOfferData>::iterator __for_end; // [rsp+40h] [rbp-100h] BYREF
  std::vector<HuntingOfferData> *__for_range; // [rsp+48h] [rbp-F8h]
  proto::HuntingPair *ongoing_hunting_pair; // [rsp+50h] [rbp-F0h]
  const HuntingOfferData *hunting_offer; // [rsp+58h] [rbp-E8h]
  std::shared_ptr<Config> v29; // [rsp+60h] [rbp-E0h] BYREF
  common::milog::MiLogStream v30; // [rsp+70h] [rbp-D0h] BYREF
  char v31[176]; // [rsp+90h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 11 city_id:530 64 8 13 city_iter:544 96 16 23 city_reputation_ptr:532";
  *(_QWORD *)(v3 + 16) = PlayerHuntingComp::clientRequestOfferData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = proto::GetCityHuntingOfferReq::city_id(req);
  proto::GetCityHuntingOfferRsp::set_city_id(rsp_0, *(_DWORD *)(v3 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ReputationComp = (unsigned int)Player::getReputationComp(this->player_);
  PlayerReputationComp::findCityReputationPtr((PlayerReputationComp *const)(v3 + 96), ReputationComp);
  if ( std::operator==<CityReputation>(0LL, (const std::shared_ptr<CityReputation> *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/hunting/player_hunting_comp.cpp",
      "clientRequestOfferData",
      535);
    v7 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v30,
           (const char (*)[51])"[HUNTING] city_reputation_ptr not found, city_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v30);
    v8 = -1;
  }
  else
  {
    v9 = std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    if ( !CityReputation::isHunterEntranceOpen(v9) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/hunting/player_hunting_comp.cpp",
        "clientRequestOfferData",
        540);
      v10 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
              &v30,
              (const char (*)[54])"[HUNTING] city hunter entrance is not open, city_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v30);
      v8 = 7109;
    }
    else
    {
      *(std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::find(
                                                                                                 &this->city_hunting_offer_map_,
                                                                                                 (const std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::key_type *)(v3 + 48));
      __for_end._M_current = (HuntingOfferData *)std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::end(&this->city_hunting_offer_map_)._M_cur;
      if ( std::__detail::operator==<std::pair<unsigned int const,std::vector<HuntingOfferData>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<HuntingOfferData> >,false> *)(v3 + 64),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<HuntingOfferData> >,false> *)&__for_end) )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/hunting/player_hunting_comp.cpp",
          "clientRequestOfferData",
          547);
        v11 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                &v30,
                (const char (*)[46])"[HUNTING] city has no hunting offer, city_id ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v30);
        v8 = -1;
      }
      else
      {
        v12 = std::vector<std::pair<unsigned int,unsigned int>>::size(&this->cur_week_finished_hunting_pair_vec_);
        proto::GetCityHuntingOfferRsp::set_cur_week_finished_count(rsp_0, v12);
        __for_range = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<HuntingOfferData>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<HuntingOfferData> >,false,false> *const)(v3 + 64))->second;
        __for_begin._M_current = std::vector<HuntingOfferData>::begin(__for_range)._M_current;
        __for_end._M_current = std::vector<HuntingOfferData>::end(__for_range)._M_current;
        while ( __gnu_cxx::operator!=<HuntingOfferData *,std::vector<HuntingOfferData>>(&__for_begin, &__for_end) )
        {
          hunting_offer = __gnu_cxx::__normal_iterator<HuntingOfferData *,std::vector<HuntingOfferData>>::operator*(&__for_begin);
          v13 = proto::GetCityHuntingOfferRsp::add_hunting_offer_list(rsp_0);
          HuntingOfferData::toClient(hunting_offer, v13);
          __gnu_cxx::__normal_iterator<HuntingOfferData *,std::vector<HuntingOfferData>>::operator++(&__for_begin);
        }
        if ( std::operator!=<HuntingRecord>(0LL, &this->ongoing_hunting_record_ptr_) )
        {
          ongoing_hunting_pair = proto::GetCityHuntingOfferRsp::mutable_ongoing_hunting_pair(rsp_0);
          v14 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ongoing_hunting_record_ptr_);
          RefreshId = HuntingRecord::getRefreshId(v14);
          proto::HuntingPair::set_refresh_id(ongoing_hunting_pair, RefreshId);
          v16 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ongoing_hunting_record_ptr_);
          MonsterConfigId = HuntingRecord::getMonsterConfigId(v16);
          proto::HuntingPair::set_monster_config_id(ongoing_hunting_pair, MonsterConfigId);
        }
        now = common::tools::TimeUtils::getNow();
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v29);
        v18 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
        time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v18->design_config.txt_config_mgr.const_value_config_mgr);
        std::shared_ptr<Config>::~shared_ptr(&v29);
        v19 = common::tools::TimeUtils::getWeekTime(now, time_offset) + 604800;
        proto::GetCityHuntingOfferRsp::set_next_refresh_time(rsp_0, v19);
        v8 = 0;
      }
    }
  }
  std::shared_ptr<CityReputation>::~shared_ptr((std::shared_ptr<CityReputation> *const)(v3 + 96));
  result = v8;
  if ( v31 == (char *)v3 )
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

// Line 574: range 0000000016C87C48-0000000016C88885
int32_t __cdecl PlayerHuntingComp::takeHuntingOffer(
        PlayerHuntingComp *const this,
        const proto::TakeHuntingOfferReq *req,
        proto::TakeHuntingOfferRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  google::protobuf::uint32 v6; // edx
  PlayerSceneComp *SceneComp; // rax
  int32_t v8; // r14d
  uint32_t ReputationComp; // r14d
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // r14
  const proto::HuntingPair *v13; // rax
  const proto::HuntingPair *v14; // rax
  std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::tuple_element<1,const std::pair<unsigned int,unsigned int> >::type *v18; // rax
  uint32_t v19; // esi
  __int64 v20; // rdx
  std::vector<std::pair<unsigned int,unsigned int>>::size_type v21; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v23; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  uint32_t v25; // ecx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rdx
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-15Ch] BYREF
  uint32_t monster_config_id; // [rsp+28h] [rbp-158h]
  int32_t ret; // [rsp+2Ch] [rbp-154h]
  std::vector<std::pair<unsigned int,unsigned int>>::iterator __for_begin; // [rsp+30h] [rbp-150h] BYREF
  std::vector<std::pair<unsigned int,unsigned int>>::iterator __for_end; // [rsp+38h] [rbp-148h] BYREF
  proto::HuntingPair *hunting_pair; // [rsp+40h] [rbp-140h]
  std::vector<std::pair<unsigned int,unsigned int>> *__for_range; // [rsp+48h] [rbp-138h]
  HuntingOfferData *hunting_offer_data_ptr; // [rsp+50h] [rbp-130h]
  HuntingOfferData *hunting_offer_data; // [rsp+58h] [rbp-128h]
  const std::pair<unsigned int,unsigned int> *v45; // [rsp+60h] [rbp-120h]
  std::tuple_element<0,const std::pair<unsigned int,unsigned int> >::type *refresh; // [rsp+68h] [rbp-118h]
  std::tuple_element<1,const std::pair<unsigned int,unsigned int> >::type *monster_config; // [rsp+70h] [rbp-110h]
  HuntingOfferData *hunting_offer_ptr; // [rsp+78h] [rbp-108h]
  std::shared_ptr<Config> v49; // [rsp+80h] [rbp-100h] BYREF
  common::milog::MiLogStream v50; // [rsp+90h] [rbp-F0h] BYREF
  char v51[208]; // [rsp+B0h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 14 refresh_id:592 64 16 23 city_reputation_ptr:581 96 24 27 hunting_offer_index_vec:613";
  *(_QWORD *)(v3 + 16) = PlayerHuntingComp::takeHuntingOffer;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  v6 = proto::TakeHuntingOfferReq::city_id(req);
  proto::TakeHuntingOfferRsp::set_city_id(rsp_0, v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v50,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/hunting/player_hunting_comp.cpp",
      "takeHuntingOffer",
      578);
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      &v50,
      (const char (*)[44])"[HUNTING] not in my world,cannot take offer");
    common::milog::MiLogStream::~MiLogStream(&v50);
    v8 = -1;
    goto LABEL_51;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ReputationComp = (unsigned int)Player::getReputationComp(this->player_);
  proto::TakeHuntingOfferReq::city_id(req);
  PlayerReputationComp::findCityReputationPtr((PlayerReputationComp *const)(v3 + 64), ReputationComp);
  if ( std::operator==<CityReputation>(0LL, (const std::shared_ptr<CityReputation> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v50,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/hunting/player_hunting_comp.cpp",
      "takeHuntingOffer",
      584);
    v10 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
            &v50,
            (const char (*)[51])"[HUNTING] city_reputation_ptr not found, city_id: ");
    val = proto::TakeHuntingOfferReq::city_id(req);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    common::milog::MiLogStream::~MiLogStream(&v50);
    v8 = -1;
  }
  else
  {
    v11 = std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( CityReputation::isHunterEntranceOpen(v11) )
    {
      v13 = proto::TakeHuntingOfferReq::hunting_pair(req);
      *(_DWORD *)(v3 + 48) = proto::HuntingPair::refresh_id(v13);
      v14 = proto::TakeHuntingOfferReq::hunting_pair(req);
      monster_config_id = proto::HuntingPair::monster_config_id(v14);
      hunting_pair = proto::TakeHuntingOfferRsp::mutable_hunting_pair(rsp_0);
      proto::HuntingPair::set_refresh_id(hunting_pair, *(_DWORD *)(v3 + 48));
      proto::HuntingPair::set_monster_config_id(hunting_pair, monster_config_id);
      if ( std::operator!=<HuntingRecord>(0LL, &this->ongoing_hunting_record_ptr_) )
      {
        v15 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ongoing_hunting_record_ptr_);
        if ( monster_config_id == HuntingRecord::getMonsterConfigId(v15) )
        {
          v16 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ongoing_hunting_record_ptr_);
          if ( HuntingRecord::getRefreshId(v16) == *(_DWORD *)(v3 + 48) )
          {
            v8 = 8205;
            goto LABEL_50;
          }
        }
        if ( PlayerHuntingComp::internalTerminateHunting(this, 0) )
        {
          common::milog::MiLogStream::create(
            &v50,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/hunting/player_hunting_comp.cpp",
            "takeHuntingOffer",
            607);
          common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            &v50,
            (const char (*)[43])"[HUNTING] internalTerminateHunting failed ");
          common::milog::MiLogStream::~MiLogStream(&v50);
          v8 = -1;
          goto LABEL_50;
        }
      }
      std::vector<std::pair<unsigned int,unsigned int>>::vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v3 + 96));
      PlayerHuntingComp::findAllStartedHungingOffer(
        this,
        (std::vector<std::pair<unsigned int,unsigned int>> *)(v3 + 96));
      __for_range = (std::vector<std::pair<unsigned int,unsigned int>> *)(v3 + 96);
      __for_begin._M_current = std::vector<std::pair<unsigned int,unsigned int>>::begin((std::vector<std::pair<unsigned int,unsigned int>> *const)(v3 + 96))._M_current;
      __for_end._M_current = std::vector<std::pair<unsigned int,unsigned int>>::end((std::vector<std::pair<unsigned int,unsigned int>> *const)(v3 + 96))._M_current;
      while ( __gnu_cxx::operator!=<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>(
                &__for_begin,
                &__for_end) )
      {
        v45 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>::operator*(&__for_begin);
        refresh = (std::tuple_element<0,const std::pair<unsigned int,unsigned int> >::type *)std::get<0ul,unsigned int,unsigned int>(v45);
        v18 = (std::tuple_element<1,const std::pair<unsigned int,unsigned int> >::type *)std::get<1ul,unsigned int,unsigned int>(v45);
        monster_config = v18;
        if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v18);
        }
        v19 = *monster_config;
        if ( *(_BYTE *)(((unsigned __int64)refresh >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)refresh & 7) + 3) >= *(_BYTE *)(((unsigned __int64)refresh >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(refresh);
        }
        hunting_offer_ptr = PlayerHuntingComp::findHuntingOfferData(this, *refresh, v19);
        if ( hunting_offer_ptr )
        {
          v20 = (*(_BYTE *)(((unsigned __int64)&hunting_offer_ptr->state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)hunting_offer_ptr + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&hunting_offer_ptr->state >> 3) + 0x7FFF8000));
          if ( (_BYTE)v20 )
            __asan_report_store4(&hunting_offer_ptr->state, (((_BYTE)hunting_offer_ptr + 16) & 7u) + 3, v20);
          hunting_offer_ptr->state = HUNTING_OFFER_STATE_UNSTARTED;
        }
        __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>::operator++(&__for_begin);
      }
      v21 = std::vector<std::pair<unsigned int,unsigned int>>::size(&this->cur_week_finished_hunting_pair_vec_);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v49);
      v22 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49);
      LOBYTE(v21) = v21 >= ConstValueExcelConfigMgr::getHuntingWeeklyFinishNum(&v22->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v49);
      if ( (_BYTE)v21 )
      {
        common::milog::MiLogStream::create(
          &v50,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/hunting/player_hunting_comp.cpp",
          "takeHuntingOffer",
          627);
        v23 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v50,
                (const char (*)[42])"[HUNTING] this week has already finished ");
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v49);
        v24 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49);
        val = ConstValueExcelConfigMgr::getHuntingWeeklyFinishNum(&v24->design_config.txt_config_mgr.const_value_config_mgr);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
        std::shared_ptr<Config>::~shared_ptr(&v49);
        common::milog::MiLogStream::~MiLogStream(&v50);
        v8 = 8201;
      }
      else
      {
        v25 = proto::TakeHuntingOfferReq::city_id(req);
        hunting_offer_data_ptr = PlayerHuntingComp::findHuntingOfferData(
                                   this,
                                   *(_DWORD *)(v3 + 48),
                                   monster_config_id,
                                   v25);
        if ( hunting_offer_data_ptr )
        {
          hunting_offer_data = hunting_offer_data_ptr;
          if ( *(_BYTE *)(((unsigned __int64)&hunting_offer_data_ptr->state >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)hunting_offer_data_ptr + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&hunting_offer_data_ptr->state >> 3)
                                                                                  + 0x7FFF8000) )
          {
            __asan_report_load4(&hunting_offer_data_ptr->state);
          }
          if ( hunting_offer_data->state == HUNTING_OFFER_STATE_UNSTARTED )
          {
            ret = PlayerHuntingComp::internalTakeHuntingOffer(this, hunting_offer_data);
            if ( ret )
            {
              common::milog::MiLogStream::create(
                &v50,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/hunting/player_hunting_comp.cpp",
                "takeHuntingOffer",
                648);
              v30 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                      &v50,
                      (const char (*)[56])"[HUNTING] internalTakeHuntingOffer failed, refresh_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v30,
                (const unsigned int *)(v3 + 48));
              common::milog::MiLogStream::~MiLogStream(&v50);
              v8 = ret;
            }
            else
            {
              v31 = (((_BYTE)hunting_offer_data + 16) & 7u) + 3;
              v32 = (*(_BYTE *)(((unsigned __int64)&hunting_offer_data->state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)hunting_offer_data + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&hunting_offer_data->state >> 3) + 0x7FFF8000));
              if ( (_BYTE)v32 )
                __asan_report_store4(&hunting_offer_data->state, v31, v32);
              hunting_offer_data->state = HUNTING_OFFER_STATE_STARTED;
              if ( *(char *)(((unsigned __int64)&this->is_new_hunting_ >> 3) + 0x7FFF8000) < 0 )
                __asan_report_store1(&this->is_new_hunting_, v31, &this->is_new_hunting_);
              this->is_new_hunting_ = 0;
              PlayerHuntingComp::logOpHuntingOffer(this, hunting_offer_data, 0);
              v8 = 0;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v50,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/hunting/player_hunting_comp.cpp",
              "takeHuntingOffer",
              641);
            v29 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                    &v50,
                    (const char (*)[56])"[HUNTING] hunting offer state is not unstarted, state: ");
            common::milog::MiLogStream::operator<<<proto::HuntingOfferState,(proto::HuntingOfferState*)0>(
              v29,
              &hunting_offer_data_ptr->state);
            common::milog::MiLogStream::~MiLogStream(&v50);
            v8 = -1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v50,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/hunting/player_hunting_comp.cpp",
            "takeHuntingOffer",
            634);
          v26 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                  &v50,
                  (const char (*)[53])"[HUNTING] hunting offer data not exist, refresh_id: ");
          v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v26,
                  (const unsigned int *)(v3 + 48));
          v28 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v27, (const char (*)[12])" ,city_id: ");
          val = proto::TakeHuntingOfferReq::city_id(req);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &val);
          common::milog::MiLogStream::~MiLogStream(&v50);
          v8 = -1;
        }
      }
      std::vector<std::pair<unsigned int,unsigned int>>::~vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v3 + 96));
      goto LABEL_50;
    }
    common::milog::MiLogStream::create(
      &v50,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/hunting/player_hunting_comp.cpp",
      "takeHuntingOffer",
      589);
    v12 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
            &v50,
            (const char (*)[54])"[HUNTING] city hunter entrance is not open, city_id: ");
    val = proto::TakeHuntingOfferReq::city_id(req);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
    common::milog::MiLogStream::~MiLogStream(&v50);
    v8 = 7109;
  }
LABEL_50:
  std::shared_ptr<CityReputation>::~shared_ptr((std::shared_ptr<CityReputation> *const)(v3 + 64));
LABEL_51:
  result = v8;
  if ( v51 == (char *)v3 )
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

// Line 658: range 0000000016C88886-0000000016C88FDD
__int64 __fastcall PlayerHuntingComp::takeHuntingOfferByGm(
        PlayerHuntingComp *const this,
        uint32_t city_id,
        uint32_t refresh_id,
        uint32_t monster_id)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::vector<std::pair<unsigned int,unsigned int>>::size_type v7; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rbx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  unsigned int v11; // r14d
  std::tuple_element<1,const std::pair<unsigned int,unsigned int> >::type *v12; // rax
  uint32_t v13; // esi
  __int64 v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  __int64 v20; // rdx
  __int64 result; // rax
  unsigned int val; // [rsp+20h] [rbp-130h] BYREF
  int32_t ret; // [rsp+24h] [rbp-12Ch]
  std::vector<std::pair<unsigned int,unsigned int>>::iterator __for_begin; // [rsp+28h] [rbp-128h] BYREF
  std::vector<std::pair<unsigned int,unsigned int>>::iterator __for_end; // [rsp+30h] [rbp-120h] BYREF
  std::vector<std::pair<unsigned int,unsigned int>> *__for_range; // [rsp+38h] [rbp-118h]
  HuntingOfferData *hunting_offer_data_ptr; // [rsp+40h] [rbp-110h]
  HuntingOfferData *hunting_offer_data; // [rsp+48h] [rbp-108h]
  const std::pair<unsigned int,unsigned int> *v31; // [rsp+50h] [rbp-100h]
  std::tuple_element<0,const std::pair<unsigned int,unsigned int> >::type *refresh; // [rsp+58h] [rbp-F8h]
  std::tuple_element<1,const std::pair<unsigned int,unsigned int> >::type *monster_config; // [rsp+60h] [rbp-F0h]
  HuntingOfferData *hunting_offer_ptr; // [rsp+68h] [rbp-E8h]
  std::shared_ptr<Config> v35; // [rsp+70h] [rbp-E0h] BYREF
  common::milog::MiLogStream v36; // [rsp+80h] [rbp-D0h] BYREF
  char v37[176]; // [rsp+A0h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 11 city_id:657 48 4 14 refresh_id:657 64 24 27 hunting_offer_index_vec:670";
  *(_QWORD *)(v4 + 16) = PlayerHuntingComp::takeHuntingOfferByGm;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218103808;
  v6[536862723] = -202116109;
  *(_DWORD *)(v4 + 32) = city_id;
  *(_DWORD *)(v4 + 48) = refresh_id;
  PlayerHuntingComp::internalTerminateHunting(this, 0);
  v7 = std::vector<std::pair<unsigned int,unsigned int>>::size(&this->cur_week_finished_hunting_pair_vec_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v35);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35);
  LOBYTE(v7) = v7 >= ConstValueExcelConfigMgr::getHuntingWeeklyFinishNum(&v8->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v35);
  if ( (_BYTE)v7 )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/hunting/player_hunting_comp.cpp",
      "takeHuntingOfferByGm",
      665);
    v9 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v36,
           (const char (*)[42])"[HUNTING] this week has already finished ");
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v35);
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35);
    val = ConstValueExcelConfigMgr::getHuntingWeeklyFinishNum(&v10->design_config.txt_config_mgr.const_value_config_mgr);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    std::shared_ptr<Config>::~shared_ptr(&v35);
    common::milog::MiLogStream::~MiLogStream(&v36);
    v11 = 8201;
  }
  else
  {
    std::vector<std::pair<unsigned int,unsigned int>>::vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v4 + 64));
    PlayerHuntingComp::findAllStartedHungingOffer(this, (std::vector<std::pair<unsigned int,unsigned int>> *)(v4 + 64));
    __for_range = (std::vector<std::pair<unsigned int,unsigned int>> *)(v4 + 64);
    __for_begin._M_current = std::vector<std::pair<unsigned int,unsigned int>>::begin((std::vector<std::pair<unsigned int,unsigned int>> *const)(v4 + 64))._M_current;
    __for_end._M_current = std::vector<std::pair<unsigned int,unsigned int>>::end((std::vector<std::pair<unsigned int,unsigned int>> *const)(v4 + 64))._M_current;
    while ( __gnu_cxx::operator!=<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>(
              &__for_begin,
              &__for_end) )
    {
      v31 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>::operator*(&__for_begin);
      refresh = (std::tuple_element<0,const std::pair<unsigned int,unsigned int> >::type *)std::get<0ul,unsigned int,unsigned int>(v31);
      v12 = (std::tuple_element<1,const std::pair<unsigned int,unsigned int> >::type *)std::get<1ul,unsigned int,unsigned int>(v31);
      monster_config = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      v13 = *monster_config;
      if ( *(_BYTE *)(((unsigned __int64)refresh >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)refresh & 7) + 3) >= *(_BYTE *)(((unsigned __int64)refresh >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(refresh);
      }
      hunting_offer_ptr = PlayerHuntingComp::findHuntingOfferData(this, *refresh, v13);
      if ( hunting_offer_ptr )
      {
        v14 = (*(_BYTE *)(((unsigned __int64)&hunting_offer_ptr->state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)hunting_offer_ptr + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&hunting_offer_ptr->state >> 3) + 0x7FFF8000));
        if ( (_BYTE)v14 )
          __asan_report_store4(&hunting_offer_ptr->state, (((_BYTE)hunting_offer_ptr + 16) & 7u) + 3, v14);
        hunting_offer_ptr->state = HUNTING_OFFER_STATE_UNSTARTED;
      }
      __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>::operator++(&__for_begin);
    }
    hunting_offer_data_ptr = PlayerHuntingComp::findHuntingOfferData(
                               this,
                               *(_DWORD *)(v4 + 48),
                               monster_id,
                               *(_DWORD *)(v4 + 32));
    if ( hunting_offer_data_ptr )
    {
      hunting_offer_data = hunting_offer_data_ptr;
      if ( *(_BYTE *)(((unsigned __int64)&hunting_offer_data_ptr->state >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)hunting_offer_data_ptr + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&hunting_offer_data_ptr->state >> 3)
                                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&hunting_offer_data_ptr->state);
      }
      if ( hunting_offer_data->state == HUNTING_OFFER_STATE_UNSTARTED )
      {
        ret = PlayerHuntingComp::internalTakeHuntingOffer(this, hunting_offer_data);
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v36,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/hunting/player_hunting_comp.cpp",
            "takeHuntingOfferByGm",
            698);
          v19 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                  &v36,
                  (const char (*)[56])"[HUNTING] internalTakeHuntingOffer failed, refresh_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v4 + 48));
          common::milog::MiLogStream::~MiLogStream(&v36);
          v11 = ret;
        }
        else
        {
          v20 = (*(_BYTE *)(((unsigned __int64)&hunting_offer_data->state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)hunting_offer_data + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&hunting_offer_data->state >> 3) + 0x7FFF8000));
          if ( (_BYTE)v20 )
            __asan_report_store4(&hunting_offer_data->state, (((_BYTE)hunting_offer_data + 16) & 7u) + 3, v20);
          hunting_offer_data->state = HUNTING_OFFER_STATE_STARTED;
          v11 = 0;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/hunting/player_hunting_comp.cpp",
          "takeHuntingOfferByGm",
          691);
        v18 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                &v36,
                (const char (*)[56])"[HUNTING] hunting offer state is not unstarted, state: ");
        common::milog::MiLogStream::operator<<<proto::HuntingOfferState,(proto::HuntingOfferState*)0>(
          v18,
          &hunting_offer_data_ptr->state);
        common::milog::MiLogStream::~MiLogStream(&v36);
        v11 = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/hunting/player_hunting_comp.cpp",
        "takeHuntingOfferByGm",
        684);
      v15 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
              &v36,
              (const char (*)[53])"[HUNTING] hunting offer data not exist, refresh_id: ");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 48));
      v17 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])" ,city_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 32));
      common::milog::MiLogStream::~MiLogStream(&v36);
      v11 = -1;
    }
    std::vector<std::pair<unsigned int,unsigned int>>::~vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v4 + 64));
  }
  result = v11;
  if ( v37 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 707: range 0000000016C88FDE-0000000016C891A2
int32_t __cdecl PlayerHuntingComp::takeHuntingOfferByGm(
        PlayerHuntingComp *const this,
        uint32_t city_id,
        uint32_t refresh_id,
        uint32_t monster_id,
        uint32_t destination_group_index)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  HuntingRecord *v10; // rax
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-80h] BYREF
  char v15[96]; // [rsp+40h] [rbp-60h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 4 7 ret:708";
  *(_QWORD *)(v5 + 16) = PlayerHuntingComp::takeHuntingOfferByGm;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116348;
  *(_DWORD *)(v5 + 32) = PlayerHuntingComp::takeHuntingOfferByGm(this, city_id, refresh_id, monster_id);
  if ( *(_DWORD *)(v5 + 32) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/player_hunting_comp.cpp",
      "takeHuntingOfferByGm",
      711);
    v8 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v14,
           (const char (*)[45])"[HUNTING] takeHuntingOfferByGm failed, ret: ");
    common::milog::MiLogStream::operator<<<int,(int *)0>(v8, (const int *)(v5 + 32));
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = *(_DWORD *)(v5 + 32);
  }
  else
  {
    if ( std::operator!=<HuntingRecord>(&this->ongoing_hunting_record_ptr_, 0LL) )
    {
      v10 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ongoing_hunting_record_ptr_);
      HuntingRecord::forceSetDestinationGroup(v10, destination_group_index);
    }
    result = 0;
  }
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 723: range 0000000016C891A4-0000000016C8A357
__int64 __fastcall PlayerHuntingComp::getHuntingOfferReward(
        PlayerHuntingComp *const this,
        uint32_t city_id,
        uint32_t monster_config_id,
        uint32_t refresh_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  PlayerBasicComp *BasicComp; // rax
  uint32_t ReputationComp; // eax
  common::milog::MiLogStream *v9; // rax
  unsigned int v10; // r14d
  std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  common::milog::MiLogStream *v28; // r14
  std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  common::milog::MiLogStream *v31; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rcx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingTakeReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingTakeReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingTakeReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingTakeReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingTakeReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  Player *player; // r14
  __int64 result; // rax
  std::string v46; // [rsp+0h] [rbp-210h]
  char *v47; // [rsp+8h] [rbp-208h]
  std::initializer_list<unsigned int> __l; // [rsp+10h] [rbp-200h]
  PlayerItemComp *__la; // [rsp+10h] [rbp-200h]
  std::vector<std::pair<unsigned int,unsigned int>> *v50; // [rsp+20h] [rbp-1F0h]
  PlayerItemComp *ItemComp; // [rsp+20h] [rbp-1F0h]
  std::allocator<unsigned int> __a; // [rsp+4Fh] [rbp-1C1h] BYREF
  unsigned int val; // [rsp+50h] [rbp-1C0h] BYREF
  int32_t ret; // [rsp+54h] [rbp-1BCh]
  const data::HuntingRefreshExcelConfig *refresh_config_ptr; // [rsp+58h] [rbp-1B8h]
  const data::HuntingMonsterExcelConfig *monster_config_ptr; // [rsp+60h] [rbp-1B0h]
  HuntingOfferData *offer_data_ptr; // [rsp+68h] [rbp-1A8h]
  HuntingOfferData *offer_data; // [rsp+70h] [rbp-1A0h]
  std::vector<std::pair<unsigned int,unsigned int>>::value_type __x; // [rsp+78h] [rbp-198h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+80h] [rbp-190h] BYREF
  std::shared_ptr<google::protobuf::Message> v63; // [rsp+90h] [rbp-180h] BYREF
  std::vector<unsigned int> reward_id_vec; // [rsp+A0h] [rbp-170h] BYREF
  std::string v65; // [rsp+C0h] [rbp-150h] BYREF
  char v66[304]; // [rsp+E0h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v66;
  v46._M_string_length = (std::string::size_type)v66;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 48 1 10 holder:724 64 4 13 reward_id:781 80 4 11 city_id:722 96 4 21 monster_config_id:722 112"
                        " 4 14 refresh_id:722 128 16 23 city_reputation_ptr:725 160 16 11 log_ptr:807 192 24 17 action_reason:784";
  *(_QWORD *)(v4 + 16) = PlayerHuntingComp::getHuntingOfferReward;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = -218103808;
  v6[536862727] = -202116109;
  *(_DWORD *)(v4 + 80) = city_id;
  *(_DWORD *)(v4 + 96) = monster_config_id;
  *(_DWORD *)(v4 + 112) = refresh_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v65, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0xB67u, v46);
  std::string::~string(&v65);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ReputationComp = (unsigned int)Player::getReputationComp(this->player_);
  PlayerReputationComp::findCityReputationPtr((PlayerReputationComp *const)(v4 + 128), ReputationComp);
  if ( std::operator==<CityReputation>(0LL, (const std::shared_ptr<CityReputation> *)(v4 + 128)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v65,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/hunting/player_hunting_comp.cpp",
      "getHuntingOfferReward",
      728);
    v9 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           (common::milog::MiLogStream *const)&v65,
           (const char (*)[51])"[HUNTING] city_reputation_ptr not found, city_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v65);
    v10 = -1;
    goto LABEL_53;
  }
  v11 = std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
  if ( !CityReputation::isHunterEntranceOpen(v11) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v65,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/hunting/player_hunting_comp.cpp",
      "getHuntingOfferReward",
      733);
    v12 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
            (common::milog::MiLogStream *const)&v65,
            (const char (*)[54])"[HUNTING] city hunter entrance is not open, city_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v65);
    v10 = 7109;
    goto LABEL_53;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v63);
  v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v63);
  refresh_config_ptr = data::HuntingExcelConfigMgrBase::findHuntingRefreshExcelConfig(
                         &v13->design_config.txt_config_mgr.hunting_config_mgr,
                         *(_DWORD *)(v4 + 112));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v63);
  if ( !refresh_config_ptr )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v65,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/player_hunting_comp.cpp",
      "getHuntingOfferReward",
      739);
    v14 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
            (common::milog::MiLogStream *const)&v65,
            (const char (*)[56])"[HUNTING] cannot find hunting refresh config, city_id: ");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 80));
    v16 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v15, (const char (*)[15])" ,refresh_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v4 + 112));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v65);
    v10 = -1;
    goto LABEL_53;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v63);
  v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v63);
  monster_config_ptr = data::HuntingExcelConfigMgrBase::findHuntingMonsterExcelConfig(
                         &v17->design_config.txt_config_mgr.hunting_config_mgr,
                         *(_DWORD *)(v4 + 96));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v63);
  if ( !monster_config_ptr )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v65,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/player_hunting_comp.cpp",
      "getHuntingOfferReward",
      746);
    v18 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
            (common::milog::MiLogStream *const)&v65,
            (const char (*)[56])"[HUNTING] cannot find hunting monster config, city_id: ");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 80));
    v20 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v19, (const char (*)[15])" ,refresh_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v4 + 96));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v65);
    v10 = -1;
    goto LABEL_53;
  }
  offer_data_ptr = PlayerHuntingComp::findHuntingOfferData(
                     this,
                     *(_DWORD *)(v4 + 112),
                     *(_DWORD *)(v4 + 96),
                     *(_DWORD *)(v4 + 80));
  if ( !offer_data_ptr )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v65,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/hunting/player_hunting_comp.cpp",
      "getHuntingOfferReward",
      753);
    v21 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
            (common::milog::MiLogStream *const)&v65,
            (const char (*)[52])"[HUNTING] cannot find hunting offer data, city_id: ");
    v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v4 + 80));
    v23 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v22, (const char (*)[15])" ,refresh_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v4 + 112));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v65);
    v10 = -1;
    goto LABEL_53;
  }
  offer_data = offer_data_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&offer_data_ptr->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)offer_data_ptr + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&offer_data_ptr->state >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load4(&offer_data_ptr->state);
  }
  if ( offer_data->state != HUNTING_OFFER_STATE_SUCC )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v65,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/player_hunting_comp.cpp",
      "getHuntingOfferReward",
      760);
    v24 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
            (common::milog::MiLogStream *const)&v65,
            (const char (*)[54])"[HUNTING] hunting offer is not finished, refresh_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v4 + 112));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v65);
    v10 = -1;
    goto LABEL_53;
  }
  if ( std::operator!=<HuntingRecord>(&this->ongoing_hunting_record_ptr_, 0LL) )
  {
    v25 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ongoing_hunting_record_ptr_);
    if ( HuntingRecord::getMonsterConfigId(v25) != *(_DWORD *)(v4 + 96)
      || (v26 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ongoing_hunting_record_ptr_),
          HuntingRecord::getRefreshId(v26) != *(_DWORD *)(v4 + 112)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v65,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/hunting/player_hunting_comp.cpp",
        "getHuntingOfferReward",
        768);
      v28 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
              (common::milog::MiLogStream *const)&v65,
              (const char (*)[57])"[HUNTING] ongoing hunting record not match, refresh_id: ");
      v29 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ongoing_hunting_record_ptr_);
      val = HuntingRecord::getRefreshId(v29);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v65);
      v10 = -1;
      goto LABEL_53;
    }
    PlayerHuntingComp::clearOngoingHuntingPtr(this);
  }
  __x = std::make_pair<unsigned int &,unsigned int &>((unsigned int *)(v4 + 112), (unsigned int *)(v4 + 96));
  std::vector<std::pair<unsigned int,unsigned int>>::push_back(&this->cur_week_finished_hunting_pair_vec_, &__x);
  v50 = (std::vector<std::pair<unsigned int,unsigned int>> *)std::vector<std::pair<unsigned int,unsigned int>>::size(&this->cur_week_finished_hunting_pair_vec_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v63);
  v30 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v63);
  LOBYTE(v50) = (unsigned __int64)v50 > ConstValueExcelConfigMgr::getHuntingWeeklyFinishNum(&v30->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v63);
  if ( (_BYTE)v50 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v65,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/hunting/player_hunting_comp.cpp",
      "getHuntingOfferReward",
      777);
    v31 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
            (common::milog::MiLogStream *const)&v65,
            (const char (*)[42])"[HUNTING] this week has already finished ");
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v63);
    v32 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v63);
    val = ConstValueExcelConfigMgr::getHuntingWeeklyFinishNum(&v32->design_config.txt_config_mgr.const_value_config_mgr);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &val);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v63);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v65);
    v10 = -1;
    goto LABEL_53;
  }
  if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->finish_reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->finish_reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&refresh_config_ptr->finish_reward_id);
  }
  *(_DWORD *)(v4 + 64) = refresh_config_ptr->finish_reward_id;
  if ( *(_DWORD *)(v4 + 64) )
  {
    ActionReason::ActionReason(
      (ActionReason *const)(v4 + 192),
      ACTION_REASON_HUNTING_OFFER_REWARD,
      ITEM_LIMIT_HUNTING_REWARD);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(this->player_);
    val = *(_DWORD *)(v4 + 64);
    __l._M_array = &val;
    __l._M_len = 1LL;
    std::allocator<unsigned int>::allocator(&__a);
    std::vector<unsigned int>::vector(&reward_id_vec, __l, &__a);
    ret = PlayerItemComp::checkGrantRewards(ItemComp, &reward_id_vec, (const ActionReason *)(v4 + 192));
    std::vector<unsigned int>::~vector(&reward_id_vec);
    std::allocator<unsigned int>::~allocator(&__a);
    if ( ret )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v65,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/hunting/player_hunting_comp.cpp",
        "getHuntingOfferReward",
        790);
      v33 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              (common::milog::MiLogStream *const)&v65,
              (const char (*)[36])"checkGrantRewards fail, reward_id: ");
      v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, (const unsigned int *)(v4 + 64));
      v35 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v34, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v35, this->player_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v65);
      v10 = ret;
      goto LABEL_53;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    __la = Player::getItemComp(this->player_);
    val = *(_DWORD *)(v4 + 64);
    std::allocator<unsigned int>::allocator(&__a);
    std::vector<unsigned int>::vector(&reward_id_vec, (std::initializer_list<unsigned int>)__PAIR128__(1LL, &val), &__a);
    PlayerItemComp::grantRewards(__la, &reward_id_vec, (const ActionReason *)(v4 + 192), 0LL);
    std::vector<unsigned int>::~vector(&reward_id_vec);
    std::allocator<unsigned int>::~allocator(&__a);
  }
  std::set<unsigned int>::insert(
    &this->cur_week_refreshed_monster_config_id_set_,
    (const std::set<unsigned int>::value_type *)(v4 + 96));
  std::set<unsigned int>::insert(
    &this->cur_week_refreshed_refresh_id_set_,
    (const std::set<unsigned int>::value_type *)(v4 + 112));
  if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->difficulty >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->difficulty >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&refresh_config_ptr->difficulty);
  }
  if ( PlayerHuntingComp::internalRandomHuntingOfferByCityAndDifficulty(
         this,
         *(_DWORD *)(v4 + 80),
         refresh_config_ptr->difficulty) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v65,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/player_hunting_comp.cpp",
      "getHuntingOfferReward",
      803);
    v36 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
            (common::milog::MiLogStream *const)&v65,
            (const char (*)[72])"[HUNTING] internalRandomHuntingOfferByCityAndDifficulty failed, city_id");
    v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, (const unsigned int *)(v4 + 80));
    v38 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v37, (const char (*)[14])" difficulty: ");
    common::milog::MiLogStream::operator<<<data::HuntingOfferDifficultyType,(data::HuntingOfferDifficultyType*)0>(
      v38,
      &refresh_config_ptr->difficulty);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v65);
    v10 = -1;
  }
  else
  {
    common::tools::perf::make_shared<proto_log::PlayerLogBodyHuntingTakeReward>();
    v39 = std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingTakeReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingTakeReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
    proto_log::PlayerLogBodyHuntingTakeReward::set_city_id(v39, *(_DWORD *)(v4 + 80));
    v40 = std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingTakeReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingTakeReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
    proto_log::PlayerLogBodyHuntingTakeReward::set_refresh_id(v40, *(_DWORD *)(v4 + 112));
    v41 = std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingTakeReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingTakeReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
    proto_log::PlayerLogBodyHuntingTakeReward::set_monster_config_id(v41, *(_DWORD *)(v4 + 96));
    v42 = std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingTakeReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingTakeReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
    if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->difficulty >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->difficulty >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&refresh_config_ptr->difficulty);
    }
    proto_log::PlayerLogBodyHuntingTakeReward::set_difficulty(v42, refresh_config_ptr->difficulty);
    v43 = std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingTakeReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingTakeReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
    proto_log::PlayerLogBodyHuntingTakeReward::set_reward_id(v43, *(_DWORD *)(v4 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = this->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&v63, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyHuntingTakeReward,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyHuntingTakeReward> *)(v4 + 160));
    Player::printStatLog(player, &p_body_ptr, &v63, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v63);
    v10 = 0;
    std::shared_ptr<proto_log::PlayerLogBodyHuntingTakeReward>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyHuntingTakeReward> *const)(v4 + 160));
  }
LABEL_53:
  std::shared_ptr<CityReputation>::~shared_ptr((std::shared_ptr<CityReputation> *const)(v4 + 128));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
  result = v10;
  if ( v47 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 819: range 0000000016C8A358-0000000016C8A81B
__int64 __fastcall PlayerHuntingComp::giveUpHuntingOffer(
        PlayerHuntingComp *const this,
        uint32_t refresh_id,
        uint32_t monster_config_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v11; // r13
  std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r13
  std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  unsigned int val; // [rsp+10h] [rbp-90h] BYREF
  unsigned int RefreshId; // [rsp+14h] [rbp-8Ch] BYREF
  HuntingOfferData *offer_data_ptr; // [rsp+18h] [rbp-88h]
  common::milog::MiLogStream v20; // [rsp+20h] [rbp-80h] BYREF
  char v21[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 14 refresh_id:818";
  *(_QWORD *)(v3 + 16) = PlayerHuntingComp::giveUpHuntingOffer;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = refresh_id;
  offer_data_ptr = PlayerHuntingComp::findHuntingOfferData(this, *(_DWORD *)(v3 + 32), monster_config_id);
  if ( offer_data_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&offer_data_ptr->state >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)offer_data_ptr + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&offer_data_ptr->state >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&offer_data_ptr->state);
    }
    if ( offer_data_ptr->state == HUNTING_OFFER_STATE_STARTED )
    {
      if ( std::operator==<HuntingRecord>(0LL, &this->ongoing_hunting_record_ptr_) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/hunting/player_hunting_comp.cpp",
          "giveUpHuntingOffer",
          835);
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          &v20,
          (const char (*)[36])"[HUNTING] no ongoing hunting record");
        common::milog::MiLogStream::~MiLogStream(&v20);
        result = 0xFFFFFFFFLL;
      }
      else
      {
        v8 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ongoing_hunting_record_ptr_);
        if ( monster_config_id != HuntingRecord::getMonsterConfigId(v8)
          || (v9 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ongoing_hunting_record_ptr_),
              HuntingRecord::getRefreshId(v9) != *(_DWORD *)(v3 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v20,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/hunting/player_hunting_comp.cpp",
            "giveUpHuntingOffer",
            841);
          v11 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                  &v20,
                  (const char (*)[57])"[HUNTING] ongoing record not match!, monster_config_id: ");
          v12 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ongoing_hunting_record_ptr_);
          val = HuntingRecord::getMonsterConfigId(v12);
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
          v14 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v13,
                  (const char (*)[14])" refresh_id: ");
          v15 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ongoing_hunting_record_ptr_);
          RefreshId = HuntingRecord::getRefreshId(v15);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &RefreshId);
          common::milog::MiLogStream::~MiLogStream(&v20);
          result = 0xFFFFFFFFLL;
        }
        else if ( PlayerHuntingComp::internalTerminateHunting(this, 0) )
        {
          common::milog::MiLogStream::create(
            &v20,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/hunting/player_hunting_comp.cpp",
            "giveUpHuntingOffer",
            847);
          common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
            &v20,
            (const char (*)[42])"[HUNTING] internalTerminateHunting failed");
          common::milog::MiLogStream::~MiLogStream(&v20);
          result = 0xFFFFFFFFLL;
        }
        else
        {
          PlayerHuntingComp::logOpHuntingOffer(this, offer_data_ptr, 1);
          result = 0LL;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/hunting/player_hunting_comp.cpp",
        "giveUpHuntingOffer",
        829);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        &v20,
        (const char (*)[30])"[HUNTING] hunting not started");
      common::milog::MiLogStream::~MiLogStream(&v20);
      result = 8204LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/player_hunting_comp.cpp",
      "giveUpHuntingOffer",
      823);
    v6 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v20,
           (const char (*)[55])"[HUNTING] cannot find hunting offer data, refresh_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = 0xFFFFFFFFLL;
  }
  if ( v21 == (char *)v3 )
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

// Line 856: range 0000000016C8AA08-0000000016C8C246
__int64 __fastcall PlayerHuntingComp::internalRandomHuntingOfferByCityAndDifficulty(
        PlayerHuntingComp *const this,
        uint32_t city_id,
        uint32_t difficulty)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false>::pointer v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false>::pointer v10; // rax
  const std::vector<unsigned int> *v11; // rax
  unsigned int *M_current; // r15
  std::vector<unsigned int>::iterator v13; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false>::pointer v14; // rax
  const std::vector<unsigned int> *v15; // rax
  const unsigned int *v16; // r15
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false>::pointer v17; // rax
  const std::vector<unsigned int> *v18; // rax
  std::vector<unsigned int>::const_iterator v19; // rax
  std::vector<unsigned int>::reference v20; // rax
  _DWORD *v21; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v23; // rax
  HuntingExcelConfigMgr *p_hunting_config_mgr; // rcx
  common::milog::MiLogStream *v25; // rax
  HuntingExcelConfigMgr *v26; // rcx
  common::milog::MiLogStream *v27; // rax
  const std::vector<unsigned int> *v28; // rax
  _BOOL4 v29; // r15d
  unsigned int *v30; // r15
  std::vector<unsigned int>::iterator v31; // rax
  const std::vector<unsigned int> *v32; // rax
  const unsigned int *v33; // r15
  const std::vector<unsigned int> *v34; // rax
  std::vector<unsigned int>::const_iterator v35; // rax
  int v36; // r15d
  std::vector<unsigned int>::reference v37; // rax
  _DWORD *v38; // rdx
  common::milog::MiLogStream *v39; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false>::pointer v40; // rax
  common::milog::MiLogStream *v41; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false>::pointer v42; // rax
  const std::vector<unsigned int> *v43; // rax
  unsigned int *v44; // r15
  std::vector<unsigned int>::iterator v45; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false>::pointer v46; // rax
  const std::vector<unsigned int> *v47; // rax
  const unsigned int *v48; // r15
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false>::pointer v49; // rax
  const std::vector<unsigned int> *v50; // rax
  std::vector<unsigned int>::const_iterator v51; // rax
  int v52; // r15d
  std::vector<unsigned int>::reference v53; // rax
  _DWORD *v54; // rdx
  common::milog::MiLogStream *v55; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<HuntingOfferData> >,false,false>::pointer v56; // rax
  common::milog::MiLogStream *v57; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  std::remove_reference<HuntingOfferData&>::type *v65; // r14
  std::vector<HuntingOfferData> *p_second; // rcx
  unsigned __int64 n; // rax
  __int64 v68; // rdi
  __int64 result; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > __i; // [rsp+20h] [rbp-2E0h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false> __y; // [rsp+28h] [rbp-2D8h] BYREF
  const std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>> *city_refresh_config_map; // [rsp+30h] [rbp-2D0h]
  const std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>> *city_monster_config_map; // [rsp+38h] [rbp-2C8h]
  const data::HuntingRefreshExcelConfig *refresh_config_ptr; // [rsp+40h] [rbp-2C0h]
  const data::HuntingRegionExcelConfig *region_config_ptr; // [rsp+48h] [rbp-2B8h]
  const std::vector<std::vector<unsigned int>> *certian_monster_vec_ptr; // [rsp+50h] [rbp-2B0h]
  const data::HuntingRefreshExcelConfig *new_refresh_config_ptr; // [rsp+58h] [rbp-2A8h]
  std::shared_ptr<Config> v79; // [rsp+60h] [rbp-2A0h] BYREF
  common::milog::MiLogStream v80; // [rsp+70h] [rbp-290h] BYREF
  char v81[624]; // [rsp+90h] [rbp-270h] BYREF

  v4 = (unsigned __int64)v81;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(576LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "14 48 4 18 new_refresh_id:857 64 4 21 monster_config_id:911 80 4 11 city_id:855 96 8 13 city_ite"
                        "r:860 128 8 22 refresh_id_predict:873 160 8 29 monster_config_id_predict:877 192 8 25 refresh_id"
                        "_erase_iter:883 224 8 21 monster_city_iter:945 256 8 32 monster_config_id_erase_iter:958 288 8 8"
                        " iter:975 320 24 29 difficulty_refresh_id_vec:882 384 24 32 random_select_refresh_id_vec:890 448"
                        " 24 36 difficulty_monster_config_id_vec:957 512 24 19 new_offer_data:1001";
  *(_QWORD *)(v4 + 16) = PlayerHuntingComp::internalRandomHuntingOfferByCityAndDifficulty;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -218959360;
  v6[536862727] = -218959360;
  v6[536862728] = -218959360;
  v6[536862729] = -218959360;
  v6[536862730] = -234881024;
  v6[536862731] = -218959118;
  v6[536862732] = -234881024;
  v6[536862733] = -218959118;
  v6[536862734] = -234881024;
  v6[536862735] = -218959118;
  v6[536862736] = -218103808;
  v6[536862737] = -202116109;
  *(_DWORD *)(v4 + 80) = city_id;
  *(_DWORD *)(v4 + 48) = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v79);
  city_refresh_config_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v79)->design_config.txt_config_mgr.hunting_config_mgr.city_difficulty_hunting_refresh_config_map_;
  std::shared_ptr<Config>::~shared_ptr(&v79);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v79);
  city_monster_config_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v79)->design_config.txt_config_mgr.hunting_config_mgr.city_difficulty_hunting_monster_config_map_;
  std::shared_ptr<Config>::~shared_ptr(&v79);
  *(std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::const_iterator *)(v4 + 96) = std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::find(city_refresh_config_map, (const std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::key_type *)(v4 + 80));
  __y._M_cur = std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::end(city_refresh_config_map)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::vector<std::vector<unsigned int>>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false> *)(v4 + 96),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v80,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/player_hunting_comp.cpp",
      "internalRandomHuntingOfferByCityAndDifficulty",
      863);
    v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v80,
           (const char (*)[39])"[HUNTING] city_id not found, city_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 80));
    common::milog::MiLogStream::~MiLogStream(&v80);
    v3 = -1;
    goto LABEL_67;
  }
  v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false> *const)(v4 + 96));
  if ( difficulty >= std::vector<std::vector<unsigned int>>::size(&v8->second) )
  {
    common::milog::MiLogStream::create(
      &v80,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/player_hunting_comp.cpp",
      "internalRandomHuntingOfferByCityAndDifficulty",
      869);
    v9 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v80,
           (const char (*)[47])"[HUNTING] difficulty vec size wrong, city_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 80));
    common::milog::MiLogStream::~MiLogStream(&v80);
    v3 = -1;
    goto LABEL_67;
  }
  *(_QWORD *)(v4 + 128) = this;
  *(_QWORD *)(v4 + 160) = this;
  v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false> *const)(v4 + 96));
  v11 = std::vector<std::vector<unsigned int>>::operator[](&v10->second, difficulty);
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 320), v11);
  M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v4 + 320))._M_current;
  v13._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v4 + 320))._M_current;
  *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v4 + 192) = std::remove_if<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,PlayerHuntingComp::internalRandomHuntingOfferByCityAndDifficulty(unsigned int,unsigned int)::{lambda(unsigned int)#1}>(
                                                                                            v13,
                                                                                            (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                                                                                            *(PlayerHuntingComp::internalRandomHuntingOfferByCityAndDifficulty::<lambda(uint32_t)> *)(v4 + 128));
  __i._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v4 + 320))._M_current;
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
    (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__y,
    &__i);
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
    (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 288),
    (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v4 + 192));
  std::vector<unsigned int>::erase(
    (std::vector<unsigned int> *const)(v4 + 320),
    *(std::vector<unsigned int>::const_iterator *)(v4 + 288),
    (std::vector<unsigned int>::const_iterator)__y._M_cur);
  if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v4 + 320)) )
  {
    v14 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false> *const)(v4 + 96));
    v15 = std::vector<std::vector<unsigned int>>::operator[](&v14->second, difficulty);
    v16 = std::vector<unsigned int>::end(v15)._M_current;
    v17 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false> *const)(v4 + 96));
    v18 = std::vector<std::vector<unsigned int>>::operator[](&v17->second, difficulty);
    v19._M_current = std::vector<unsigned int>::begin(v18)._M_current;
    std::vector<unsigned int>::assign<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,void>(
      (std::vector<unsigned int> *const)(v4 + 320),
      v19,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v16);
  }
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 384));
  common::tools::RandomUtils::randomSelect<unsigned int>(
    (const std::vector<unsigned int> *)(v4 + 320),
    (std::vector<unsigned int> *)(v4 + 384),
    1u);
  if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v4 + 384)) == 1 )
  {
    v20 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v4 + 384), 0LL);
    v21 = v20;
    if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v20);
    }
    *(_DWORD *)(v4 + 48) = *v21;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v79);
    v22 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v79);
    refresh_config_ptr = data::HuntingExcelConfigMgrBase::findHuntingRefreshExcelConfig(
                           &v22->design_config.txt_config_mgr.hunting_config_mgr,
                           *(_DWORD *)(v4 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v79);
    if ( refresh_config_ptr )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v79);
      p_hunting_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v79)->design_config.txt_config_mgr.hunting_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->region_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)refresh_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->region_id >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&refresh_config_ptr->region_id);
      }
      region_config_ptr = data::HuntingExcelConfigMgrBase::findHuntingRegionExcelConfig(
                            p_hunting_config_mgr,
                            refresh_config_ptr->region_id);
      std::shared_ptr<Config>::~shared_ptr(&v79);
      if ( region_config_ptr )
      {
        *(_DWORD *)(v4 + 64) = 0;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v79);
        v26 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v79)->design_config.txt_config_mgr.hunting_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->region_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)refresh_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->region_id >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&refresh_config_ptr->region_id);
        }
        certian_monster_vec_ptr = HuntingExcelConfigMgr::findRegionCertainMonsterVec(v26, refresh_config_ptr->region_id);
        std::shared_ptr<Config>::~shared_ptr(&v79);
        if ( certian_monster_vec_ptr )
        {
          if ( std::vector<std::vector<unsigned int>>::size(certian_monster_vec_ptr) != 3 )
          {
            common::milog::MiLogStream::create(
              &v80,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/hunting/player_hunting_comp.cpp",
              "internalRandomHuntingOfferByCityAndDifficulty",
              917);
            v27 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                    &v80,
                    (const char (*)[58])"[HUNTING] certian_monster_vec is less than 3, region_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &refresh_config_ptr->region_id);
            common::milog::MiLogStream::~MiLogStream(&v80);
            v3 = -1;
            goto LABEL_66;
          }
          v28 = std::vector<std::vector<unsigned int>>::at(certian_monster_vec_ptr, difficulty);
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 448), v28);
          if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v4 + 448)) )
          {
            common::milog::MiLogStream::create(
              &v80,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/hunting/player_hunting_comp.cpp",
              "internalRandomHuntingOfferByCityAndDifficulty",
              923);
            common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v80,
              (const char (*)[31])"[HUNTING] monster_vec is empty");
            common::milog::MiLogStream::~MiLogStream(&v80);
            v3 = -1;
            v29 = 0;
          }
          else
          {
            v30 = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v4 + 448))._M_current;
            v31._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v4 + 448))._M_current;
            *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v4 + 256) = std::remove_if<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,PlayerHuntingComp::internalRandomHuntingOfferByCityAndDifficulty(unsigned int,unsigned int)::{lambda(unsigned int)#2}>(v31, (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v30, *(PlayerHuntingComp::internalRandomHuntingOfferByCityAndDifficulty::<lambda(uint32_t)> *)(v4 + 160));
            __i._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v4 + 448))._M_current;
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
              (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__y,
              &__i);
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
              (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 288),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v4 + 256));
            std::vector<unsigned int>::erase(
              (std::vector<unsigned int> *const)(v4 + 448),
              *(std::vector<unsigned int>::const_iterator *)(v4 + 288),
              (std::vector<unsigned int>::const_iterator)__y._M_cur);
            if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v4 + 448)) )
            {
              v32 = std::vector<std::vector<unsigned int>>::at(certian_monster_vec_ptr, difficulty);
              v33 = std::vector<unsigned int>::end(v32)._M_current;
              v34 = std::vector<std::vector<unsigned int>>::at(certian_monster_vec_ptr, difficulty);
              v35._M_current = std::vector<unsigned int>::begin(v34)._M_current;
              std::vector<unsigned int>::assign<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,void>(
                (std::vector<unsigned int> *const)(v4 + 448),
                v35,
                (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v33);
            }
            std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 512));
            common::tools::RandomUtils::randomSelect<unsigned int>(
              (const std::vector<unsigned int> *)(v4 + 448),
              (std::vector<unsigned int> *)(v4 + 512),
              1u);
            if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v4 + 512)) == 1 )
            {
              v37 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v4 + 512), 0LL);
              v38 = v37;
              if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v37 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v37);
              }
              *(_DWORD *)(v4 + 64) = *v38;
              v36 = 1;
            }
            else
            {
              common::milog::MiLogStream::create(
                &v80,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/hunting/player_hunting_comp.cpp",
                "internalRandomHuntingOfferByCityAndDifficulty",
                937);
              common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v80,
                (const char (*)[31])"[HUNTING] random select failed");
              common::milog::MiLogStream::~MiLogStream(&v80);
              v3 = -1;
              v36 = 0;
            }
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 512));
            v29 = v36 == 1;
          }
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 448));
          if ( !v29 )
            goto LABEL_66;
        }
        else
        {
          *(std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::const_iterator *)(v4 + 224) = std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::find(city_monster_config_map, (const std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::key_type *)(v4 + 80));
          __y._M_cur = std::unordered_map<unsigned int,std::vector<std::vector<unsigned int>>>::end(city_monster_config_map)._M_cur;
          if ( std::__detail::operator==<std::pair<unsigned int const,std::vector<std::vector<unsigned int>>>,false>(
                 (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false> *)(v4 + 224),
                 &__y) )
          {
            common::milog::MiLogStream::create(
              &v80,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/hunting/player_hunting_comp.cpp",
              "internalRandomHuntingOfferByCityAndDifficulty",
              948);
            v39 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    &v80,
                    (const char (*)[39])"[HUNTING] city_id not found, city_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, (const unsigned int *)(v4 + 80));
            common::milog::MiLogStream::~MiLogStream(&v80);
            v3 = -1;
            goto LABEL_66;
          }
          v40 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false> *const)(v4 + 224));
          if ( difficulty >= std::vector<std::vector<unsigned int>>::size(&v40->second) )
          {
            common::milog::MiLogStream::create(
              &v80,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/hunting/player_hunting_comp.cpp",
              "internalRandomHuntingOfferByCityAndDifficulty",
              954);
            v41 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                    &v80,
                    (const char (*)[47])"[HUNTING] difficulty vec size wrong, city_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, (const unsigned int *)(v4 + 80));
            common::milog::MiLogStream::~MiLogStream(&v80);
            v3 = -1;
            goto LABEL_66;
          }
          v42 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false> *const)(v4 + 224));
          v43 = std::vector<std::vector<unsigned int>>::operator[](&v42->second, difficulty);
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 448), v43);
          v44 = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v4 + 448))._M_current;
          v45._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v4 + 448))._M_current;
          *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v4 + 256) = std::remove_if<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,PlayerHuntingComp::internalRandomHuntingOfferByCityAndDifficulty(unsigned int,unsigned int)::{lambda(unsigned int)#2}>(
                                                                                                    v45,
                                                                                                    (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v44,
                                                                                                    *(PlayerHuntingComp::internalRandomHuntingOfferByCityAndDifficulty::<lambda(uint32_t)> *)(v4 + 160));
          __i._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v4 + 448))._M_current;
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
            (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__y,
            &__i);
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
            (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 288),
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v4 + 256));
          std::vector<unsigned int>::erase(
            (std::vector<unsigned int> *const)(v4 + 448),
            *(std::vector<unsigned int>::const_iterator *)(v4 + 288),
            (std::vector<unsigned int>::const_iterator)__y._M_cur);
          if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v4 + 448)) )
          {
            v46 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false> *const)(v4 + 224));
            v47 = std::vector<std::vector<unsigned int>>::operator[](&v46->second, difficulty);
            v48 = std::vector<unsigned int>::end(v47)._M_current;
            v49 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false,false> *const)(v4 + 224));
            v50 = std::vector<std::vector<unsigned int>>::operator[](&v49->second, difficulty);
            v51._M_current = std::vector<unsigned int>::begin(v50)._M_current;
            std::vector<unsigned int>::assign<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,void>(
              (std::vector<unsigned int> *const)(v4 + 448),
              v51,
              (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v48);
          }
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 512));
          common::tools::RandomUtils::randomSelect<unsigned int>(
            (const std::vector<unsigned int> *)(v4 + 448),
            (std::vector<unsigned int> *)(v4 + 512),
            1u);
          if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v4 + 512)) == 1 )
          {
            v53 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v4 + 512), 0LL);
            v54 = v53;
            if ( *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v53 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v53);
            }
            *(_DWORD *)(v4 + 64) = *v54;
            v52 = 1;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v80,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/hunting/player_hunting_comp.cpp",
              "internalRandomHuntingOfferByCityAndDifficulty",
              969);
            common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v80,
              (const char (*)[31])"[HUNTING] random select failed");
            common::milog::MiLogStream::~MiLogStream(&v80);
            v3 = -1;
            v52 = 0;
          }
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 512));
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 448));
          if ( v52 != 1 )
            goto LABEL_66;
        }
        *(std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::iterator *)(v4 + 288) = std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::find(
                                                                                                    &this->city_hunting_offer_map_,
                                                                                                    (const std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::key_type *)(v4 + 80));
        __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<std::vector<unsigned int>> >,false>::__node_type *)std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::end(&this->city_hunting_offer_map_)._M_cur;
        if ( std::__detail::operator==<std::pair<unsigned int const,std::vector<HuntingOfferData>>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<HuntingOfferData> >,false> *)(v4 + 288),
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<HuntingOfferData> >,false> *)&__y) )
        {
          common::milog::MiLogStream::create(
            &v80,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/hunting/player_hunting_comp.cpp",
            "internalRandomHuntingOfferByCityAndDifficulty",
            978);
          v55 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  &v80,
                  (const char (*)[36])"[HUNTING] city not found, city_ud: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, (const unsigned int *)(v4 + 80));
          common::milog::MiLogStream::~MiLogStream(&v80);
          v3 = -1;
        }
        else
        {
          v56 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<HuntingOfferData>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<HuntingOfferData> >,false,false> *const)(v4 + 288));
          if ( std::vector<HuntingOfferData>::size(&v56->second) == 3 )
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v79);
            v58 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v79);
            new_refresh_config_ptr = data::HuntingExcelConfigMgrBase::findHuntingRefreshExcelConfig(
                                       &v58->design_config.txt_config_mgr.hunting_config_mgr,
                                       *(_DWORD *)(v4 + 48));
            std::shared_ptr<Config>::~shared_ptr(&v79);
            if ( new_refresh_config_ptr )
            {
              if ( PlayerHuntingComp::isRefreshIdAndMonsterConfigIdDuplicated(
                     this,
                     *(_DWORD *)(v4 + 80),
                     *(_DWORD *)(v4 + 48),
                     *(_DWORD *)(v4 + 64)) )
              {
                common::milog::MiLogStream::create(
                  &v80,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/hunting/player_hunting_comp.cpp",
                  "internalRandomHuntingOfferByCityAndDifficulty",
                  997);
                v62 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                        &v80,
                        (const char (*)[32])"[HUNTING] duplicate refresh_id:");
                v63 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v62,
                        (const unsigned int *)(v4 + 48));
                v64 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                        v63,
                        (const char (*)[20])" monster_config_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v64,
                  (const unsigned int *)(v4 + 64));
                common::milog::MiLogStream::~MiLogStream(&v80);
                v3 = -1;
              }
              else
              {
                HuntingOfferData::HuntingOfferData((HuntingOfferData *const)(v4 + 512));
                *(_DWORD *)(v4 + 512) = *(_DWORD *)(v4 + 48);
                *(_DWORD *)(v4 + 516) = *(_DWORD *)(v4 + 64);
                *(_DWORD *)(v4 + 520) = *(_DWORD *)(v4 + 80);
                if ( *(_BYTE *)(((unsigned __int64)&new_refresh_config_ptr->difficulty >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&new_refresh_config_ptr->difficulty >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&new_refresh_config_ptr->difficulty);
                }
                *(_DWORD *)(v4 + 524) = new_refresh_config_ptr->difficulty;
                *(_DWORD *)(v4 + 528) = 2;
                v65 = std::move<HuntingOfferData &>((HuntingOfferData *)(v4 + 512));
                p_second = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<HuntingOfferData>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<HuntingOfferData> >,false,false> *const)(v4 + 288))->second;
                if ( *(_BYTE *)(((unsigned __int64)&new_refresh_config_ptr->difficulty >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&new_refresh_config_ptr->difficulty >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&new_refresh_config_ptr->difficulty);
                }
                n = (unsigned __int64)std::vector<HuntingOfferData>::operator[](
                                        p_second,
                                        (unsigned int)new_refresh_config_ptr->difficulty);
                if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
                  || *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) != 0
                  && (char)((n + 23) & 7) >= *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) )
                {
                  n = __asan_report_store_n(n, 24LL);
                }
                if ( ((unsigned __int8)v65 & 7) >= *(_BYTE *)(((unsigned __int64)v65 >> 3) + 0x7FFF8000)
                  && *(_BYTE *)(((unsigned __int64)v65 >> 3) + 0x7FFF8000) != 0
                  || *(_BYTE *)(((unsigned __int64)(&v65->is_taken_reward + 3) >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)v65 + 23) & 7) >= *(_BYTE *)(((unsigned __int64)(&v65->is_taken_reward + 3) >> 3)
                                                                   + 0x7FFF8000) )
                {
                  n = __asan_report_load_n(v65, 24LL);
                }
                v68 = *(_QWORD *)&v65->city_id;
                *(_QWORD *)n = *(_QWORD *)&v65->refresh_id;
                *(_QWORD *)(n + 8) = v68;
                *(_QWORD *)(n + 16) = *(_QWORD *)&v65->state;
                v3 = 0;
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v80,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/hunting/player_hunting_comp.cpp",
                "internalRandomHuntingOfferByCityAndDifficulty",
                991);
              v59 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                      &v80,
                      (const char (*)[56])"[HUNTING] cannot find hunting refresh config, city_id: ");
              v60 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v59,
                      (const unsigned int *)(v4 + 80));
              v61 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      v60,
                      (const char (*)[15])" ,refresh_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v61,
                (const unsigned int *)(v4 + 48));
              common::milog::MiLogStream::~MiLogStream(&v80);
              v3 = -1;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v80,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/hunting/player_hunting_comp.cpp",
              "internalRandomHuntingOfferByCityAndDifficulty",
              984);
            v57 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    &v80,
                    (const char (*)[36])"[HUNTING] city not found, city_ud: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, (const unsigned int *)(v4 + 80));
            common::milog::MiLogStream::~MiLogStream(&v80);
            v3 = -1;
          }
        }
        goto LABEL_66;
      }
      common::milog::MiLogStream::create(
        &v80,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/hunting/player_hunting_comp.cpp",
        "internalRandomHuntingOfferByCityAndDifficulty",
        908);
      v25 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
              &v80,
              (const char (*)[57])"[HUNTING] huting region config_id not found, region_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &refresh_config_ptr->region_id);
      common::milog::MiLogStream::~MiLogStream(&v80);
      v3 = -1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v80,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/hunting/player_hunting_comp.cpp",
        "internalRandomHuntingOfferByCityAndDifficulty",
        902);
      v23 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
              &v80,
              (const char (*)[59])"[HUNTING] huting refresh config_id not found, refresh_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v80);
      v3 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v80,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/player_hunting_comp.cpp",
      "internalRandomHuntingOfferByCityAndDifficulty",
      894);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      &v80,
      (const char (*)[31])"[HUNTING] random select failed");
    common::milog::MiLogStream::~MiLogStream(&v80);
    v3 = -1;
  }
LABEL_66:
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 384));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 320));
LABEL_67:
  result = v3;
  if ( v81 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0LL;
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
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 873: range 0000000016C8A81C-0000000016C8A911
bool __fastcall PlayerHuntingComp::internalRandomHuntingOfferByCityAndDifficulty(unsigned int,unsigned int)::{lambda(unsigned int)#1}::operator()(
        unsigned __int64 __closure,
        uint32_t refresh_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rdx
  unsigned __int64 v5; // r12
  bool result; // al
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 refresh_id:873";
  *(_QWORD *)(v2 + 16) = PlayerHuntingComp::internalRandomHuntingOfferByCityAndDifficulty(unsigned int,unsigned int)::{lambda(unsigned int)#1}::operator();
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = refresh_id;
  if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  result = common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
             (std::set<unsigned int> *)(*(_QWORD *)__closure + 232LL),
             (const unsigned int *)v4 - 8);
  if ( v7 == (char *)v2 )
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

// Line 877: range 0000000016C8A912-0000000016C8AA07
bool __fastcall PlayerHuntingComp::internalRandomHuntingOfferByCityAndDifficulty(unsigned int,unsigned int)::{lambda(unsigned int)#2}::operator()(
        unsigned __int64 __closure,
        uint32_t monster_config_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rdx
  unsigned __int64 v5; // r12
  bool result; // al
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
  *(_QWORD *)(v2 + 8) = "1 32 4 21 monster_config_id:877";
  *(_QWORD *)(v2 + 16) = PlayerHuntingComp::internalRandomHuntingOfferByCityAndDifficulty(unsigned int,unsigned int)::{lambda(unsigned int)#2}::operator();
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = monster_config_id;
  if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  result = common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
             (std::set<unsigned int> *)(*(_QWORD *)__closure + 184LL),
             (const unsigned int *)v4 - 8);
  if ( v7 == (char *)v2 )
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

// Line 1014: range 0000000016C8C248-0000000016C8C96C
__int64 __fastcall PlayerHuntingComp::internalRefreshOfferByRefreshIdAndMonsterId(
        PlayerHuntingComp *const this,
        uint32_t refresh_id,
        uint32_t monster_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<HuntingOfferData> >,false,false>::pointer v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::remove_reference<HuntingOfferData&>::type *v14; // r14
  std::vector<HuntingOfferData> *p_second; // rcx
  unsigned __int64 n; // rax
  __int64 v17; // rbx
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<HuntingOfferData> >,false> __y; // [rsp+18h] [rbp-118h] BYREF
  const data::HuntingRefreshExcelConfig *refresh_config_ptr; // [rsp+20h] [rbp-110h]
  const data::HuntingMonsterExcelConfig *monster_config_ptr; // [rsp+28h] [rbp-108h]
  std::shared_ptr<Config> v22; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-F0h] BYREF
  char v24[208]; // [rsp+60h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 15 refresh_id:1013 48 4 15 monster_id:1013 64 8 9 iter:1030 96 24 19 new_offer_data:1043";
  *(_QWORD *)(v3 + 16) = PlayerHuntingComp::internalRefreshOfferByRefreshIdAndMonsterId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 32) = refresh_id;
  *(_DWORD *)(v3 + 48) = monster_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
  refresh_config_ptr = data::HuntingExcelConfigMgrBase::findHuntingRefreshExcelConfig(
                         &v6->design_config.txt_config_mgr.hunting_config_mgr,
                         *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v22);
  if ( refresh_config_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v22);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
    monster_config_ptr = data::HuntingExcelConfigMgrBase::findHuntingMonsterExcelConfig(
                           &v9->design_config.txt_config_mgr.hunting_config_mgr,
                           *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v22);
    if ( monster_config_ptr )
    {
      *(std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::find(
                                                                                                 &this->city_hunting_offer_map_,
                                                                                                 &refresh_config_ptr->city_id);
      __y._M_cur = std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::end(&this->city_hunting_offer_map_)._M_cur;
      if ( std::__detail::operator==<std::pair<unsigned int const,std::vector<HuntingOfferData>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<HuntingOfferData> >,false> *)(v3 + 64),
             &__y) )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/hunting/player_hunting_comp.cpp",
          "internalRefreshOfferByRefreshIdAndMonsterId",
          1033);
        v11 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v23,
                (const char (*)[36])"[HUNTING] city not found, city_ud: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &refresh_config_ptr->city_id);
        common::milog::MiLogStream::~MiLogStream(&v23);
        result = 0xFFFFFFFFLL;
      }
      else
      {
        v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<HuntingOfferData>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<HuntingOfferData> >,false,false> *const)(v3 + 64));
        if ( std::vector<HuntingOfferData>::size(&v12->second) == 3 )
        {
          HuntingOfferData::HuntingOfferData((HuntingOfferData *const)(v3 + 96));
          *(_DWORD *)(v3 + 96) = *(_DWORD *)(v3 + 32);
          *(_DWORD *)(v3 + 100) = *(_DWORD *)(v3 + 48);
          if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->city_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)refresh_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->city_id >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4(&refresh_config_ptr->city_id);
          }
          *(_DWORD *)(v3 + 104) = refresh_config_ptr->city_id;
          if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->difficulty >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->difficulty >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&refresh_config_ptr->difficulty);
          }
          *(_DWORD *)(v3 + 108) = refresh_config_ptr->difficulty;
          *(_DWORD *)(v3 + 112) = 2;
          v14 = std::move<HuntingOfferData &>((HuntingOfferData *)(v3 + 96));
          p_second = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<HuntingOfferData>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<HuntingOfferData> >,false,false> *const)(v3 + 64))->second;
          if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->difficulty >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->difficulty >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&refresh_config_ptr->difficulty);
          }
          n = (unsigned __int64)std::vector<HuntingOfferData>::operator[](
                                  p_second,
                                  (unsigned int)refresh_config_ptr->difficulty);
          if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) != 0
            && (char)((n + 23) & 7) >= *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) )
          {
            n = __asan_report_store_n(n, 24LL);
          }
          if ( ((unsigned __int8)v14 & 7) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((unsigned __int64)(&v14->is_taken_reward + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v14 + 23) & 7) >= *(_BYTE *)(((unsigned __int64)(&v14->is_taken_reward + 3) >> 3)
                                                             + 0x7FFF8000) )
          {
            n = __asan_report_load_n(v14, 24LL);
          }
          v17 = *(_QWORD *)&v14->city_id;
          *(_QWORD *)n = *(_QWORD *)&v14->refresh_id;
          *(_QWORD *)(n + 8) = v17;
          *(_QWORD *)(n + 16) = *(_QWORD *)&v14->state;
          result = 0LL;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/hunting/player_hunting_comp.cpp",
            "internalRefreshOfferByRefreshIdAndMonsterId",
            1039);
          v13 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  &v23,
                  (const char (*)[36])"[HUNTING] city not found, city_ud: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &refresh_config_ptr->city_id);
          common::milog::MiLogStream::~MiLogStream(&v23);
          result = 0xFFFFFFFFLL;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/hunting/player_hunting_comp.cpp",
        "internalRefreshOfferByRefreshIdAndMonsterId",
        1026);
      v10 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
              &v23,
              (const char (*)[59])"[HUNTING] cannot find hunting monster config, monster_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v23);
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/player_hunting_comp.cpp",
      "internalRefreshOfferByRefreshIdAndMonsterId",
      1019);
    v7 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v23,
           (const char (*)[59])"[HUNTING] huting refresh config_id not found, refresh_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v23);
    result = 0xFFFFFFFFLL;
  }
  if ( v24 == (char *)v3 )
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

// Line 1055: range 0000000016C8C96E-0000000016C8D032
int32_t __cdecl PlayerHuntingComp::internalTerminateHunting(PlayerHuntingComp *const this, bool is_logout)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  HuntingRecord *v14; // rax
  __int64 v15; // rdx
  int v16; // r15d
  std::__shared_ptr_access<proto::HuntingFailNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  Player *player; // r15
  __int64 v19; // rdx
  int v20; // r15d
  std::__shared_ptr_access<proto::HuntingFailNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  Player *v22; // r15
  int32_t result; // eax
  HuntingOfferData *offer_data_ptr; // [rsp+28h] [rbp-D8h]
  proto::HuntingPair *huting_pair_0; // [rsp+30h] [rbp-D0h]
  proto::HuntingPair *huting_pair; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<proto::HuntingFailNotify> __r; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v28; // [rsp+50h] [rbp-B0h] BYREF
  char v29[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 15 refresh_id:1058 48 4 22 monster_config_id:1059 64 16 15 notify_ptr:1098";
  *(_QWORD *)(v3 + 16) = PlayerHuntingComp::internalTerminateHunting;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  if ( !std::operator!=<HuntingRecord>(0LL, &this->ongoing_hunting_record_ptr_) )
    goto LABEL_30;
  v6 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ongoing_hunting_record_ptr_);
  *(_DWORD *)(v3 + 32) = HuntingRecord::getRefreshId(v6);
  v7 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ongoing_hunting_record_ptr_);
  *(_DWORD *)(v3 + 48) = HuntingRecord::getMonsterConfigId(v7);
  offer_data_ptr = PlayerHuntingComp::findHuntingOfferData(this, *(_DWORD *)(v3 + 32), *(_DWORD *)(v3 + 48));
  if ( !offer_data_ptr )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/player_hunting_comp.cpp",
      "internalTerminateHunting",
      1063);
    v8 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v28,
           (const char (*)[49])"[HUNTING] cannot find ongoing offer refresh_id: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
    v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            v9,
            (const char (*)[22])", monster_config_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v28);
    v2 = -1;
    goto LABEL_31;
  }
  common::milog::MiLogStream::create(
    &v28,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/hunting/player_hunting_comp.cpp",
    "internalTerminateHunting",
    1067);
  v11 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
          &v28,
          (const char (*)[50])"[HUNTING] internalTerminateHunting,  refresh_id: ");
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 32));
  v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          v12,
          (const char (*)[22])", monster_config_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
  common::milog::MiLogStream::~MiLogStream(&v28);
  if ( is_logout )
  {
    if ( *(_BYTE *)(((unsigned __int64)&offer_data_ptr->state >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)offer_data_ptr + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&offer_data_ptr->state >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&offer_data_ptr->state);
    }
    if ( offer_data_ptr->state != HUNTING_OFFER_STATE_STARTED )
      goto LABEL_29;
    v14 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ongoing_hunting_record_ptr_);
    if ( !HuntingRecord::isStart(v14) )
      goto LABEL_29;
    PlayerHuntingComp::logSettleHunting(this, offer_data_ptr, 2u);
    v15 = (*(_BYTE *)(((unsigned __int64)&offer_data_ptr->state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)offer_data_ptr + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&offer_data_ptr->state >> 3) + 0x7FFF8000));
    if ( (_BYTE)v15 )
      __asan_report_store4(&offer_data_ptr->state, (((_BYTE)offer_data_ptr + 16) & 7u) + 3, v15);
    offer_data_ptr->state = HUNTING_OFFER_STATE_UNSTARTED;
    PlayerHuntingComp::notifyHuntingEndEvent(this, *(_DWORD *)(v3 + 32), *(_DWORD *)(v3 + 48));
    common::tools::perf::make_shared<proto::HuntingFailNotify>();
    if ( std::operator==<proto::HuntingFailNotify>(0LL, (const std::shared_ptr<proto::HuntingFailNotify> *)(v3 + 64)) )
    {
      v2 = -1;
      v16 = 0;
    }
    else
    {
      v17 = std::__shared_ptr_access<proto::HuntingFailNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::HuntingFailNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      huting_pair = proto::HuntingFailNotify::mutable_hunting_pair(v17);
      proto::HuntingPair::set_refresh_id(huting_pair, *(_DWORD *)(v3 + 32));
      proto::HuntingPair::set_monster_config_id(huting_pair, *(_DWORD *)(v3 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = this->player_;
      std::dynamic_pointer_cast<google::protobuf::Message const,proto::HuntingFailNotify>(&__r);
      Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
      v16 = 1;
    }
    std::shared_ptr<proto::HuntingFailNotify>::~shared_ptr((std::shared_ptr<proto::HuntingFailNotify> *const)(v3 + 64));
    if ( v16 == 1 )
    {
LABEL_29:
      PlayerHuntingComp::clearOngoingHuntingPtr(this);
LABEL_30:
      v2 = 0;
    }
  }
  else
  {
    PlayerHuntingComp::notifyHuntingEndEvent(this, *(_DWORD *)(v3 + 32), *(_DWORD *)(v3 + 48));
    v19 = (*(_BYTE *)(((unsigned __int64)&offer_data_ptr->state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)offer_data_ptr + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&offer_data_ptr->state >> 3) + 0x7FFF8000));
    if ( (_BYTE)v19 )
      __asan_report_store4(&offer_data_ptr->state, (((_BYTE)offer_data_ptr + 16) & 7u) + 3, v19);
    offer_data_ptr->state = HUNTING_OFFER_STATE_UNSTARTED;
    common::tools::perf::make_shared<proto::HuntingFailNotify>();
    if ( std::operator==<proto::HuntingFailNotify>(0LL, (const std::shared_ptr<proto::HuntingFailNotify> *)(v3 + 64)) )
    {
      v2 = -1;
      v20 = 0;
    }
    else
    {
      v21 = std::__shared_ptr_access<proto::HuntingFailNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::HuntingFailNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      huting_pair_0 = proto::HuntingFailNotify::mutable_hunting_pair(v21);
      proto::HuntingPair::set_refresh_id(huting_pair_0, *(_DWORD *)(v3 + 32));
      proto::HuntingPair::set_monster_config_id(huting_pair_0, *(_DWORD *)(v3 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v22 = this->player_;
      std::dynamic_pointer_cast<google::protobuf::Message const,proto::HuntingFailNotify>(&__r);
      Player::sendMessage(v22, (common::minet::ConstMessagePtr *)&__r, 0LL);
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
      v20 = 1;
    }
    std::shared_ptr<proto::HuntingFailNotify>::~shared_ptr((std::shared_ptr<proto::HuntingFailNotify> *const)(v3 + 64));
    if ( v20 == 1 )
      goto LABEL_29;
  }
LABEL_31:
  result = v2;
  if ( v29 == (char *)v3 )
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

// Line 1115: range 0000000016C8D034-0000000016C8D271
__gnu_cxx::__normal_iterator<HuntingOfferData*,std::vector<HuntingOfferData> >::reference __fastcall PlayerHuntingComp::findHuntingOfferData(
        PlayerHuntingComp *const this,
        uint32_t refresh_id,
        uint32_t monster_config_id,
        uint32_t city_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __gnu_cxx::__normal_iterator<HuntingOfferData*,std::vector<HuntingOfferData> >::reference result; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<HuntingOfferData> >,false,false>::pointer v8; // rax
  HuntingOfferData *M_current; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<HuntingOfferData> >,false,false>::pointer v10; // rax
  std::vector<HuntingOfferData>::iterator v11; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<HuntingOfferData> >,false,false>::pointer v12; // rax
  __gnu_cxx::__normal_iterator<HuntingOfferData*,std::vector<HuntingOfferData> > __rhs; // [rsp+28h] [rbp-D8h] BYREF
  char v16[208]; // [rsp+30h] [rbp-D0h] BYREF
  PlayerHuntingComp::findHuntingOfferData::<lambda(const auto:24&)> v17; // 0:rdx.8

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 12 city_id:1114 64 8 13 map_iter:1116 96 8 13 vec_iter:1125 128 8 17 find_predict:1121";
  *(_QWORD *)(v4 + 16) = PlayerHuntingComp::findHuntingOfferData;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -202116352;
  *(_DWORD *)(v4 + 48) = city_id;
  *(std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::iterator *)(v4 + 64) = std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::find(
                                                                                             &this->city_hunting_offer_map_,
                                                                                             (const std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::key_type *)(v4 + 48));
  *(std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::iterator *)(v4 + 128) = std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::end(&this->city_hunting_offer_map_);
  if ( std::__detail::operator==<std::pair<unsigned int const,std::vector<HuntingOfferData>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<HuntingOfferData> >,false> *)(v4 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<HuntingOfferData> >,false> *)(v4 + 128)) )
  {
    result = 0LL;
  }
  else
  {
    *(_DWORD *)(v4 + 128) = refresh_id;
    *(_DWORD *)(v4 + 132) = monster_config_id;
    v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<HuntingOfferData>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<HuntingOfferData> >,false,false> *const)(v4 + 64));
    M_current = std::vector<HuntingOfferData>::end(&v8->second)._M_current;
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<HuntingOfferData>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<HuntingOfferData> >,false,false> *const)(v4 + 64));
    v11._M_current = std::vector<HuntingOfferData>::begin(&v10->second)._M_current;
    v17 = *(PlayerHuntingComp::findHuntingOfferData::<lambda(const auto:24&)> *)(v4 + 128);
    *(__gnu_cxx::__normal_iterator<HuntingOfferData*,std::vector<HuntingOfferData> > *)(v4 + 96) = std::find_if<__gnu_cxx::__normal_iterator<HuntingOfferData *,std::vector<HuntingOfferData>>,PlayerHuntingComp::findHuntingOfferData(unsigned int,unsigned int,unsigned int)::{lambda(__gnu_cxx::__normal_iterator<HuntingOfferData *,std::vector<HuntingOfferData>> const&)#1}>(
                                                                                                     v11,
                                                                                                     (__gnu_cxx::__normal_iterator<HuntingOfferData*,std::vector<HuntingOfferData> >)M_current,
                                                                                                     v17);
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<HuntingOfferData>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<HuntingOfferData> >,false,false> *const)(v4 + 64));
    __rhs._M_current = std::vector<HuntingOfferData>::end(&v12->second)._M_current;
    if ( __gnu_cxx::operator==<HuntingOfferData *,std::vector<HuntingOfferData>>(
           (const __gnu_cxx::__normal_iterator<HuntingOfferData*,std::vector<HuntingOfferData> > *)(v4 + 96),
           &__rhs) )
    {
      result = 0LL;
    }
    else
    {
      result = __gnu_cxx::__normal_iterator<HuntingOfferData *,std::vector<HuntingOfferData>>::operator*((const __gnu_cxx::__normal_iterator<HuntingOfferData*,std::vector<HuntingOfferData> > *const)(v4 + 96));
    }
  }
  if ( v16 == (char *)v4 )
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
  return result;
};

// Line 1121: range 0000000016D39EE4-0000000016D3A00D
bool __cdecl PlayerHuntingComp::findHuntingOfferData::_lambda_const_auto_24___::operator()_HuntingOfferData_(
        const PlayerHuntingComp::findHuntingOfferData::<lambda(const auto:24&)> *const __closure,
        const HuntingOfferData *offer_data)
{
  uint32_t refresh_id; // ecx
  uint32_t monster_config_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)offer_data >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)offer_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)offer_data >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(offer_data);
  }
  refresh_id = offer_data->refresh_id;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  if ( refresh_id != __closure->__refresh_id )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&offer_data->monster_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)offer_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&offer_data->monster_config_id >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_load4(&offer_data->monster_config_id);
  }
  monster_config_id = offer_data->monster_config_id;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__monster_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)__closure + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__monster_config_id >> 3)
                                                            + 0x7FFF8000) )
  {
    __asan_report_load4(&__closure->__monster_config_id);
  }
  return monster_config_id == __closure->__monster_config_id;
};

// Line 1134: range 0000000016C8D272-0000000016C8D4AA
__gnu_cxx::__normal_iterator<HuntingOfferData*,std::vector<HuntingOfferData> >::reference __fastcall PlayerHuntingComp::findHuntingOfferData(
        PlayerHuntingComp *const this,
        uint32_t refresh_id,
        uint32_t monster_config_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __gnu_cxx::__normal_iterator<HuntingOfferData*,std::vector<HuntingOfferData> >::reference result; // rax
  const data::HuntingRefreshExcelConfig *refresh_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v11; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-80h] BYREF
  char v13[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 15 refresh_id:1133";
  *(_QWORD *)(v3 + 16) = PlayerHuntingComp::findHuntingOfferData;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = refresh_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
  refresh_config_ptr = data::HuntingExcelConfigMgrBase::findHuntingRefreshExcelConfig(
                         &v6->design_config.txt_config_mgr.hunting_config_mgr,
                         *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( refresh_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->city_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)refresh_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->city_id >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&refresh_config_ptr->city_id);
    }
    result = PlayerHuntingComp::findHuntingOfferData(
               this,
               *(_DWORD *)(v3 + 32),
               monster_config_id,
               refresh_config_ptr->city_id);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/player_hunting_comp.cpp",
      "findHuntingOfferData",
      1138);
    v7 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v12,
           (const char (*)[45])"[HUNTING] refresh id not found, refresh_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v12);
    result = 0LL;
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

// Line 1145: range 0000000016C8D4AC-0000000016C8D59A
int32_t __cdecl PlayerHuntingComp::getOngoingHuntingRefreshIdAndMonsterConfigId(
        PlayerHuntingComp *const this,
        uint32_t *refresh_id,
        uint32_t *monster_config_id)
{
  HuntingRecordPtr *p_ongoing_hunting_record_ptr; // rsi
  std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t RefreshId; // ecx
  char v6; // dl
  __int64 v7; // rdx
  std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t MonsterConfigId; // ecx
  char v10; // dl
  __int64 v11; // rdx

  p_ongoing_hunting_record_ptr = &this->ongoing_hunting_record_ptr_;
  if ( !std::operator!=<HuntingRecord>(0LL, &this->ongoing_hunting_record_ptr_) )
    return -1;
  v4 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ongoing_hunting_record_ptr_);
  RefreshId = HuntingRecord::getRefreshId(v4);
  v6 = *(_BYTE *)(((unsigned __int64)refresh_id >> 3) + 0x7FFF8000);
  LOBYTE(p_ongoing_hunting_record_ptr) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)(((unsigned __int8)refresh_id & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(refresh_id, p_ongoing_hunting_record_ptr, v7);
  *refresh_id = RefreshId;
  v8 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ongoing_hunting_record_ptr_);
  MonsterConfigId = HuntingRecord::getMonsterConfigId(v8);
  v10 = *(_BYTE *)(((unsigned __int64)monster_config_id >> 3) + 0x7FFF8000);
  LOBYTE(p_ongoing_hunting_record_ptr) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((char)(((unsigned __int8)monster_config_id & 7) + 3) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store4(monster_config_id, p_ongoing_hunting_record_ptr, v11);
  *monster_config_id = MonsterConfigId;
  return 0;
};

// Line 1156: range 0000000016C8D59C-0000000016C8D62A
int32_t __cdecl PlayerHuntingComp::getOngoingHuntingRefIndex(PlayerHuntingComp *const this, uint32_t *cur_ref_index)
{
  HuntingRecordPtr *p_ongoing_hunting_record_ptr; // rsi
  std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  uint32_t CurRefIndex; // ecx
  char v5; // dl
  __int64 v6; // rdx

  p_ongoing_hunting_record_ptr = &this->ongoing_hunting_record_ptr_;
  if ( !std::operator!=<HuntingRecord>(0LL, &this->ongoing_hunting_record_ptr_) )
    return -1;
  v3 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ongoing_hunting_record_ptr_);
  CurRefIndex = HuntingRecord::getCurRefIndex(v3);
  v5 = *(_BYTE *)(((unsigned __int64)cur_ref_index >> 3) + 0x7FFF8000);
  LOBYTE(p_ongoing_hunting_record_ptr) = v5 != 0;
  v6 = (v5 != 0) & (unsigned __int8)((char)(((unsigned __int8)cur_ref_index & 7) + 3) >= v5);
  if ( (_BYTE)v6 )
    __asan_report_store4(cur_ref_index, p_ongoing_hunting_record_ptr, v6);
  *cur_ref_index = CurRefIndex;
  return 0;
};

// Line 1166: range 0000000016C8D62C-0000000016C8D671
bool __cdecl PlayerHuntingComp::hasOngoingStartedHunting(PlayerHuntingComp *const this)
{
  HuntingRecord *v2; // rax

  if ( std::operator==<HuntingRecord>(0LL, &this->ongoing_hunting_record_ptr_) )
    return 0;
  v2 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ongoing_hunting_record_ptr_);
  return HuntingRecord::isStart(v2);
};

// Line 1176: range 0000000016C8D672-0000000016C8D72A
int32_t __cdecl PlayerHuntingComp::getOngoingHuntingCurLoadedGroupId(PlayerHuntingComp *const this, uint32_t *group_id)
{
  HuntingRecordPtr *p_ongoing_hunting_record_ptr; // rsi
  HuntingRecord *v3; // rax
  std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t CurLoadedGroupId; // ecx
  char v7; // dl
  __int64 v8; // rdx

  p_ongoing_hunting_record_ptr = &this->ongoing_hunting_record_ptr_;
  if ( !std::operator!=<HuntingRecord>(0LL, &this->ongoing_hunting_record_ptr_) )
    return -1;
  v3 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ongoing_hunting_record_ptr_);
  if ( !HuntingRecord::isStart(v3) )
    return -1;
  v5 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ongoing_hunting_record_ptr_);
  CurLoadedGroupId = HuntingRecord::getCurLoadedGroupId(v5);
  v7 = *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000);
  LOBYTE(p_ongoing_hunting_record_ptr) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((char)(((unsigned __int8)group_id & 7) + 3) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store4(group_id, p_ongoing_hunting_record_ptr, v8);
  *group_id = CurLoadedGroupId;
  return 0;
};

// Line 1190: range 0000000016C8D72C-0000000016C8DD32
void __fastcall PlayerHuntingComp::onFailOngoingHunting(
        PlayerHuntingComp *const this,
        uint32_t refresh_id,
        uint32_t monster_config_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<proto::HuntingFailNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  Player *player; // r14
  unsigned int *v15; // r8
  unsigned int *v16; // r9
  PlayerEventComp *EventComp; // r14
  HuntingOfferData *offer_data_ptr; // [rsp+10h] [rbp-F0h]
  proto::HuntingPair *huting_pair; // [rsp+18h] [rbp-E8h]
  std::shared_ptr<proto::HuntingFailNotify> __r; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-D0h] BYREF
  char v23[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 15 refresh_id:1189 48 4 22 monster_config_id:1189 64 16 15 notify_ptr:1209 96 16 14 event_ptr:1219";
  *(_QWORD *)(v3 + 16) = PlayerHuntingComp::onFailOngoingHunting;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 32) = refresh_id;
  *(_DWORD *)(v3 + 48) = monster_config_id;
  offer_data_ptr = PlayerHuntingComp::findHuntingOfferData(this, *(_DWORD *)(v3 + 32), *(_DWORD *)(v3 + 48));
  if ( offer_data_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&offer_data_ptr->state >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)offer_data_ptr + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&offer_data_ptr->state >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&offer_data_ptr->state);
    }
    if ( offer_data_ptr->state == HUNTING_OFFER_STATE_STARTED )
    {
      v9 = (*(_BYTE *)(((unsigned __int64)&offer_data_ptr->state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)offer_data_ptr + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&offer_data_ptr->state >> 3) + 0x7FFF8000));
      if ( (_BYTE)v9 )
        __asan_report_store4(&offer_data_ptr->state, (((_BYTE)offer_data_ptr + 16) & 7u) + 3, v9);
      offer_data_ptr->state = HUNTING_OFFER_STATE_UNSTARTED;
      PlayerHuntingComp::logSettleHunting(this, offer_data_ptr, 1u);
      std::__shared_ptr<HuntingRecord,(__gnu_cxx::_Lock_policy)2>::reset(&this->ongoing_hunting_record_ptr_);
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/hunting/player_hunting_comp.cpp",
        "onFailOngoingHunting",
        1207);
      v10 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v22,
              (const char (*)[46])"[HUNTING] onFailOngoingHunting,  refresh_id: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
      v12 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v11,
              (const char (*)[22])", monster_config_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v22);
      common::tools::perf::make_shared<proto::HuntingFailNotify>();
      if ( !std::operator==<proto::HuntingFailNotify>(0LL, (const std::shared_ptr<proto::HuntingFailNotify> *)(v3 + 64)) )
      {
        v13 = std::__shared_ptr_access<proto::HuntingFailNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::HuntingFailNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        huting_pair = proto::HuntingFailNotify::mutable_hunting_pair(v13);
        proto::HuntingPair::set_refresh_id(huting_pair, *(_DWORD *)(v3 + 32));
        proto::HuntingPair::set_monster_config_id(huting_pair, *(_DWORD *)(v3 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        player = this->player_;
        std::dynamic_pointer_cast<google::protobuf::Message const,proto::HuntingFailNotify>(&__r);
        Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
        std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
        common::tools::perf::make_shared<HuntingFailEvent,unsigned int &,unsigned int &,unsigned int &>(
          (unsigned int *)&__r,
          (unsigned int *)(v3 + 32),
          (unsigned int *)(v3 + 48),
          &offer_data_ptr->city_id,
          v15,
          v16);
        std::shared_ptr<BaseEvent>::shared_ptr<HuntingFailEvent,void>(
          (std::shared_ptr<BaseEvent> *const)(v3 + 96),
          (std::shared_ptr<HuntingFailEvent> *)&__r);
        std::shared_ptr<HuntingFailEvent>::~shared_ptr((std::shared_ptr<HuntingFailEvent> *const)&__r);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        EventComp = Player::getEventComp(this->player_);
        std::shared_ptr<BaseEvent>::shared_ptr(
          (std::shared_ptr<BaseEvent> *const)&__r,
          (const std::shared_ptr<BaseEvent> *)(v3 + 96));
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&__r);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&__r);
        PlayerHuntingComp::notifyHuntingEndEvent(this, *(_DWORD *)(v3 + 32), *(_DWORD *)(v3 + 48));
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v3 + 96));
      }
      std::shared_ptr<proto::HuntingFailNotify>::~shared_ptr((std::shared_ptr<proto::HuntingFailNotify> *const)(v3 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/hunting/player_hunting_comp.cpp",
        "onFailOngoingHunting",
        1199);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        &v22,
        (const char (*)[36])"[HUNTING] offer state is not stated");
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/player_hunting_comp.cpp",
      "onFailOngoingHunting",
      1194);
    v6 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           &v22,
           (const char (*)[53])"[HUNTING] findHuntingOfferData is null, refresh_id: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           v7,
           (const char (*)[22])", monster_config_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  if ( v23 == (char *)v3 )
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

// Line 1225: range 0000000016C8DD34-0000000016C8E257
void __fastcall PlayerHuntingComp::onSuccOngoingHunting(
        PlayerHuntingComp *const this,
        uint32_t refresh_id,
        uint32_t monster_config_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 v9; // rdx
  std::__shared_ptr_access<proto::HuntingSuccessNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  Player *player; // r14
  unsigned int *v12; // r8
  unsigned int *v13; // r9
  PlayerEventComp *EventComp; // r14
  HuntingOfferData *offer_data_ptr; // [rsp+10h] [rbp-F0h]
  proto::HuntingPair *huting_pair; // [rsp+18h] [rbp-E8h]
  std::shared_ptr<proto::HuntingSuccessNotify> __r; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 15 refresh_id:1224 48 4 22 monster_config_id:1224 64 16 15 notify_ptr:1241 96 16 14 event_ptr:1247";
  *(_QWORD *)(v3 + 16) = PlayerHuntingComp::onSuccOngoingHunting;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 32) = refresh_id;
  *(_DWORD *)(v3 + 48) = monster_config_id;
  offer_data_ptr = PlayerHuntingComp::findHuntingOfferData(this, *(_DWORD *)(v3 + 32), *(_DWORD *)(v3 + 48));
  if ( offer_data_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&offer_data_ptr->state >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)offer_data_ptr + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&offer_data_ptr->state >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&offer_data_ptr->state);
    }
    if ( offer_data_ptr->state == HUNTING_OFFER_STATE_STARTED )
    {
      v9 = (*(_BYTE *)(((unsigned __int64)&offer_data_ptr->state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)offer_data_ptr + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&offer_data_ptr->state >> 3) + 0x7FFF8000));
      if ( (_BYTE)v9 )
        __asan_report_store4(&offer_data_ptr->state, (((_BYTE)offer_data_ptr + 16) & 7u) + 3, v9);
      offer_data_ptr->state = HUNTING_OFFER_STATE_SUCC;
      PlayerHuntingComp::logSettleHunting(this, offer_data_ptr, 0);
      common::tools::perf::make_shared<proto::HuntingSuccessNotify>();
      v10 = std::__shared_ptr_access<proto::HuntingSuccessNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::HuntingSuccessNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      huting_pair = proto::HuntingSuccessNotify::mutable_hunting_pair(v10);
      proto::HuntingPair::set_refresh_id(huting_pair, *(_DWORD *)(v3 + 32));
      proto::HuntingPair::set_monster_config_id(huting_pair, *(_DWORD *)(v3 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = this->player_;
      std::dynamic_pointer_cast<google::protobuf::Message const,proto::HuntingSuccessNotify>(&__r);
      Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
      common::tools::perf::make_shared<HuntingFinishEvent,unsigned int &,unsigned int &,unsigned int &>(
        (unsigned int *)&__r,
        (unsigned int *)(v3 + 32),
        (unsigned int *)(v3 + 48),
        &offer_data_ptr->city_id,
        v12,
        v13);
      std::shared_ptr<BaseEvent>::shared_ptr<HuntingFinishEvent,void>(
        (std::shared_ptr<BaseEvent> *const)(v3 + 96),
        (std::shared_ptr<HuntingFinishEvent> *)&__r);
      std::shared_ptr<HuntingFinishEvent>::~shared_ptr((std::shared_ptr<HuntingFinishEvent> *const)&__r);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EventComp = Player::getEventComp(this->player_);
      std::shared_ptr<BaseEvent>::shared_ptr(
        (std::shared_ptr<BaseEvent> *const)&__r,
        (const std::shared_ptr<BaseEvent> *)(v3 + 96));
      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&__r);
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&__r);
      PlayerHuntingComp::notifyHuntingEndEvent(this, *(_DWORD *)(v3 + 32), *(_DWORD *)(v3 + 48));
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v3 + 96));
      std::shared_ptr<proto::HuntingSuccessNotify>::~shared_ptr((std::shared_ptr<proto::HuntingSuccessNotify> *const)(v3 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/hunting/player_hunting_comp.cpp",
        "onSuccOngoingHunting",
        1234);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        &v19,
        (const char (*)[36])"[HUNTING] offer state is not stated");
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/player_hunting_comp.cpp",
      "onSuccOngoingHunting",
      1229);
    v6 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           &v19,
           (const char (*)[53])"[HUNTING] findHuntingOfferData is null, refresh_id: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           v7,
           (const char (*)[22])", monster_config_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
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
};

// Line 1254: range 0000000016C8E258-0000000016C8E48B
__int64 __fastcall PlayerHuntingComp::finishOngoingHuntingByGm(
        PlayerHuntingComp *const this,
        uint32_t refresh_id,
        uint32_t monster_config_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  HuntingRecord *v10; // rax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-A0h] BYREF
  char v13[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 15 refresh_id:1253 64 4 22 monster_config_id:1253";
  *(_QWORD *)(v3 + 16) = PlayerHuntingComp::finishOngoingHuntingByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = refresh_id;
  *(_DWORD *)(v3 + 64) = monster_config_id;
  if ( PlayerHuntingComp::findHuntingOfferData(this, *(_DWORD *)(v3 + 48), *(_DWORD *)(v3 + 64)) )
  {
    if ( std::operator!=<HuntingRecord>(0LL, &this->ongoing_hunting_record_ptr_) )
    {
      v10 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ongoing_hunting_record_ptr_);
      HuntingRecord::forceFinish(v10);
    }
    PlayerHuntingComp::onSuccOngoingHunting(this, *(_DWORD *)(v3 + 48), *(_DWORD *)(v3 + 64));
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/player_hunting_comp.cpp",
      "finishOngoingHuntingByGm",
      1258);
    v6 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           &v12,
           (const char (*)[53])"[HUNTING] findHuntingOfferData is null, refresh_id: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           v7,
           (const char (*)[22])", monster_config_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v12);
    result = 0xFFFFFFFFLL;
  }
  if ( v13 == (char *)v3 )
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

// Line 1272: range 0000000016C8E48C-0000000016C8E5D0
int32_t __cdecl PlayerHuntingComp::finishHuntingClueByGm(PlayerHuntingComp *const this)
{
  HuntingRecord *v2; // rax
  HuntingRecord *v3; // rax
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<HuntingRecord>(&this->ongoing_hunting_record_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/player_hunting_comp.cpp",
      "finishHuntingClueByGm",
      1275);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v4,
      (const char (*)[29])"[HUNTING] no ongoing hunting");
    common::milog::MiLogStream::~MiLogStream(&v4);
    return -1;
  }
  else
  {
    v2 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ongoing_hunting_record_ptr_);
    if ( !HuntingRecord::isStart(v2) )
    {
      common::milog::MiLogStream::create(
        &v4,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/hunting/player_hunting_comp.cpp",
        "finishHuntingClueByGm",
        1280);
      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
        &v4,
        (const char (*)[42])"[HUNTING] no ongoing hunting is not start");
      common::milog::MiLogStream::~MiLogStream(&v4);
      return -1;
    }
    else
    {
      v3 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ongoing_hunting_record_ptr_);
      return HuntingRecord::forceFinishClueByGm(v3);
    }
  }
};

// Line 1288: range 0000000016C8E5D2-0000000016C8E801
__int64 __fastcall PlayerHuntingComp::hasReward(PlayerHuntingComp *const this, uint32_t city_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  proto::HuntingOfferState *p_state; // rax
  std::vector<HuntingOfferData>::iterator __for_begin; // [rsp+10h] [rbp-A0h] BYREF
  std::vector<HuntingOfferData>::iterator __for_end; // [rsp+18h] [rbp-98h] BYREF
  std::vector<HuntingOfferData> *__for_range; // [rsp+20h] [rbp-90h]
  const HuntingOfferData *offer_data; // [rsp+28h] [rbp-88h]
  char v11[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 city_id:1287 64 8 9 iter:1289";
  *(_QWORD *)(v2 + 16) = PlayerHuntingComp::hasReward;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = city_id;
  *(std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::find(
                                                                                             &this->city_hunting_offer_map_,
                                                                                             (const std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::key_type *)(v2 + 48));
  __for_end._M_current = (HuntingOfferData *)std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::end(&this->city_hunting_offer_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::vector<HuntingOfferData>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<HuntingOfferData> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<HuntingOfferData> >,false> *)&__for_end) )
  {
    result = 0LL;
  }
  else
  {
    __for_range = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<HuntingOfferData>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<HuntingOfferData> >,false,false> *const)(v2 + 64))->second;
    __for_begin._M_current = std::vector<HuntingOfferData>::begin(__for_range)._M_current;
    __for_end._M_current = std::vector<HuntingOfferData>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<HuntingOfferData *,std::vector<HuntingOfferData>>(&__for_begin, &__for_end) )
    {
      offer_data = __gnu_cxx::__normal_iterator<HuntingOfferData *,std::vector<HuntingOfferData>>::operator*(&__for_begin);
      p_state = &offer_data->state;
      if ( *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_state);
      }
      if ( offer_data->state == HUNTING_OFFER_STATE_SUCC )
      {
        result = 1LL;
        goto LABEL_14;
      }
      __gnu_cxx::__normal_iterator<HuntingOfferData *,std::vector<HuntingOfferData>>::operator++(&__for_begin);
    }
    result = 0LL;
  }
LABEL_14:
  if ( v11 == (char *)v2 )
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

// Line 1307: range 0000000016C8E802-0000000016C8E858
int32_t __cdecl PlayerHuntingComp::loadHuntingGroupByGm(
        PlayerHuntingComp *const this,
        uint32_t group_id,
        uint32_t ref_index)
{
  double v3; // xmm0_8
  float v4; // xmm1_4
  HuntingRecord *v5; // rax

  if ( !std::operator!=<HuntingRecord>(&this->ongoing_hunting_record_ptr_, 0LL) )
    return -1;
  v5 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ongoing_hunting_record_ptr_);
  return HuntingRecord::loadGroupByGm(v5, group_id, ref_index, v3, v4);
};

// Line 1316: range 0000000016C8E92E-0000000016C8EC92
void __fastcall PlayerHuntingComp::notifyHuntingEndEvent(
        PlayerHuntingComp *const this,
        uint32_t refresh_id,
        uint32_t monster_config_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned int *v6; // r8
  unsigned int *v7; // r9
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  unsigned int __args_0; // [rsp+1Ch] [rbp-F4h] BYREF
  PlayerHuntingComp::notifyHuntingEndEvent::<lambda(Player&)> v11; // [rsp+20h] [rbp-F0h] BYREF
  common::milog::MiLogStream v12; // [rsp+40h] [rbp-D0h] BYREF
  char v13[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 15 refresh_id:1315 48 4 22 monster_config_id:1315 64 16 14 event_ptr:1317 96 16 14 world_ptr:1318";
  *(_QWORD *)(v3 + 16) = PlayerHuntingComp::notifyHuntingEndEvent;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 32) = refresh_id;
  *(_DWORD *)(v3 + 48) = monster_config_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __args_0 = Player::getUid(this->player_);
  common::tools::perf::make_shared<WorldHuntingEndEvent,unsigned int &,unsigned int &,unsigned int>(
    (unsigned int *)(v3 + 64),
    (unsigned int *)(v3 + 32),
    (unsigned int *)(v3 + 48),
    &__args_0,
    v6,
    v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 96));
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/hunting/player_hunting_comp.cpp",
      "notifyHuntingEndEvent",
      1321);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v12, (const char (*)[18])"world_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    v8 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    std::shared_ptr<PlayerWorld>::shared_ptr(&v11.__world_ptr, (const std::shared_ptr<PlayerWorld> *)(v3 + 96));
    std::shared_ptr<WorldHuntingEndEvent>::shared_ptr(
      &v11.__event_ptr,
      (const std::shared_ptr<WorldHuntingEndEvent> *)(v3 + 64));
    std::function<ForeachPolicy ()(Player &)>::function<PlayerHuntingComp::notifyHuntingEndEvent(unsigned int,unsigned int)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v12,
      &v11);
    World::foreachPlayer(v8, (std::function<ForeachPolicy(Player&)> *)&v12);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v12);
    PlayerHuntingComp::notifyHuntingEndEvent(unsigned int,unsigned int)::{lambda(Player &)#1}::~Player(&v11);
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 96));
  std::shared_ptr<WorldHuntingEndEvent>::~shared_ptr((std::shared_ptr<WorldHuntingEndEvent> *const)(v3 + 64));
  if ( v13 == (char *)v3 )
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

// Line 1324: range 0000000016C8E85A-0000000016C8E900
ForeachPolicy __cdecl PlayerHuntingComp::notifyHuntingEndEvent(unsigned int,unsigned int)::{lambda(Player &)#1}::operator()(
        const PlayerHuntingComp::notifyHuntingEndEvent::<lambda(Player&)> *const __closure,
        Player *player)
{
  uint32_t Uid; // ebx
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  PlayerEventComp *EventComp; // rbx
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+10h] [rbp-20h] BYREF

  Uid = Player::getUid(player);
  v3 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure);
  if ( Uid != World::getOwnerUid(v3) )
  {
    EventComp = Player::getEventComp(player);
    std::shared_ptr<BaseEvent>::shared_ptr<WorldHuntingEndEvent,void>(&p_event_ptr, &__closure->__event_ptr);
    PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
    std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
  }
  return 0;
};

// Line 1324: range 0000000016D358E0-0000000016D35920
void __cdecl PlayerHuntingComp::notifyHuntingEndEvent(unsigned int,unsigned int)::{lambda(Player &)#1}::Player(
        PlayerHuntingComp::notifyHuntingEndEvent::<lambda(Player&)> *const this,
        PlayerHuntingComp::notifyHuntingEndEvent::<lambda(Player&)> *a2)
{
  std::shared_ptr<PlayerWorld>::shared_ptr(&this->__world_ptr, &a2->__world_ptr);
  std::shared_ptr<WorldHuntingEndEvent>::shared_ptr(&this->__event_ptr, &a2->__event_ptr);
};

// Line 1324: range 0000000016D359EC-0000000016D35A2C
void __cdecl PlayerHuntingComp::notifyHuntingEndEvent(unsigned int,unsigned int)::{lambda(Player &)#1}::Player(
        PlayerHuntingComp::notifyHuntingEndEvent::<lambda(Player&)> *const this,
        const PlayerHuntingComp::notifyHuntingEndEvent::<lambda(Player&)> *a2)
{
  std::shared_ptr<PlayerWorld>::shared_ptr(&this->__world_ptr, &a2->__world_ptr);
  std::shared_ptr<WorldHuntingEndEvent>::shared_ptr(&this->__event_ptr, &a2->__event_ptr);
};

// Line 1324: range 0000000016C8E902-0000000016C8E92C
void __cdecl PlayerHuntingComp::notifyHuntingEndEvent(unsigned int,unsigned int)::{lambda(Player &)#1}::~Player(
        PlayerHuntingComp::notifyHuntingEndEvent::<lambda(Player&)> *const this)
{
  std::shared_ptr<WorldHuntingEndEvent>::~shared_ptr(&this->__event_ptr);
  std::shared_ptr<PlayerWorld>::~shared_ptr(&this->__world_ptr);
};

// Line 1334: range 0000000016C8EC94-0000000016C8F0ED
void __cdecl PlayerHuntingComp::logOpHuntingOffer(
        PlayerHuntingComp *const this,
        const HuntingOfferData *offer_data,
        bool give_up)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingOpOffer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingOpOffer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingOpOffer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingOpOffer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingOpOffer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  Player *player; // r14
  std::string v13; // [rsp+0h] [rbp-100h]
  bool give_upa; // [rsp+Ch] [rbp-F4h]
  const HuntingOfferData *offer_dataa; // [rsp+10h] [rbp-F0h]
  PlayerHuntingComp *thisa; // [rsp+18h] [rbp-E8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-C0h] BYREF
  std::string v19; // [rsp+50h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+70h] [rbp-90h] BYREF

  *(&v13._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v13._anon_0._M_allocated_capacity = (std::string::size_type)offer_data;
  BYTE4(v13._M_string_length) = give_up;
  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 11 holder:1335 64 16 12 log_ptr:1336";
  *(_QWORD *)(v3 + 16) = PlayerHuntingComp::logOpHuntingOffer;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v19, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xB64u, v13);
  std::string::~string(&v19);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyHuntingOpOffer>();
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingOpOffer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingOpOffer,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&offer_dataa->city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)offer_dataa + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&offer_dataa->city_id >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load4(&offer_dataa->city_id);
  }
  proto_log::PlayerLogBodyHuntingOpOffer::set_city_id(v7, offer_dataa->city_id);
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingOpOffer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingOpOffer,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)offer_dataa >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)offer_dataa & 7) + 3) >= *(_BYTE *)(((unsigned __int64)offer_dataa >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(offer_dataa);
  }
  proto_log::PlayerLogBodyHuntingOpOffer::set_refresh_id(v8, offer_dataa->refresh_id);
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingOpOffer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingOpOffer,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&offer_dataa->monster_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)offer_dataa + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&offer_dataa->monster_config_id >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load4(&offer_dataa->monster_config_id);
  }
  proto_log::PlayerLogBodyHuntingOpOffer::set_monster_config_id(v9, offer_dataa->monster_config_id);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingOpOffer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingOpOffer,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&offer_dataa->difficulty >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)offer_dataa + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&offer_dataa->difficulty >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load4(&offer_dataa->difficulty);
  }
  proto_log::PlayerLogBodyHuntingOpOffer::set_difficulty(v10, offer_dataa->difficulty);
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingOpOffer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingOpOffer,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  proto_log::PlayerLogBodyHuntingOpOffer::set_op(v11, give_upa);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = thisa->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyHuntingOpOffer,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyHuntingOpOffer> *)(v3 + 64));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyHuntingOpOffer>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyHuntingOpOffer> *const)(v3 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  if ( v20 == (char *)v3 )
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

// Line 1347: range 0000000016C8F0EE-0000000016C8F5BA
void __cdecl PlayerHuntingComp::logSettleHunting(
        PlayerHuntingComp *const this,
        const HuntingOfferData *offer_data,
        uint32_t settle_result)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  HuntingRecord *v13; // rax
  Player *player; // r14
  std::string v15; // [rsp+0h] [rbp-F0h]
  uint32_t settle_resulta; // [rsp+Ch] [rbp-E4h]
  const HuntingOfferData *offer_dataa; // [rsp+10h] [rbp-E0h]
  PlayerHuntingComp *thisa; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-C0h] BYREF
  std::string value; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  *(&v15._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v15._anon_0._M_allocated_capacity = (std::string::size_type)offer_data;
  HIDWORD(v15._M_string_length) = settle_result;
  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 11 holder:1352 64 16 12 log_ptr:1353";
  *(_QWORD *)(v3 + 16) = PlayerHuntingComp::logSettleHunting;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -202178560;
  if ( !std::operator==<HuntingRecord>(&this->ongoing_hunting_record_ptr_, 0LL) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&value, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xB66u, v15);
    std::string::~string(&value);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyHuntingSettle>();
    v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&offer_dataa->city_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)offer_dataa + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&offer_dataa->city_id >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&offer_dataa->city_id);
    }
    proto_log::PlayerLogBodyHuntingSettle::set_city_id(v7, offer_dataa->city_id);
    v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)offer_dataa >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)offer_dataa & 7) + 3) >= *(_BYTE *)(((unsigned __int64)offer_dataa >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(offer_dataa);
    }
    proto_log::PlayerLogBodyHuntingSettle::set_refresh_id(v8, offer_dataa->refresh_id);
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&offer_dataa->monster_config_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)offer_dataa + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&offer_dataa->monster_config_id >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&offer_dataa->monster_config_id);
    }
    proto_log::PlayerLogBodyHuntingSettle::set_monster_config_id(v9, offer_dataa->monster_config_id);
    v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&offer_dataa->difficulty >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)offer_dataa + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&offer_dataa->difficulty >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(&offer_dataa->difficulty);
    }
    proto_log::PlayerLogBodyHuntingSettle::set_difficulty(v10, offer_dataa->difficulty);
    v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    proto_log::PlayerLogBodyHuntingSettle::set_result(v11, settle_resulta);
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHuntingSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    v13 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)&thisa->ongoing_hunting_record_ptr_);
    HuntingRecord::getTransaction[abi:cxx11](&value, v13);
    proto_log::PlayerLogBodyHuntingSettle::set_hunting_transaction(v12, &value);
    std::string::~string(&value);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = thisa->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyHuntingSettle,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyHuntingSettle> *)(v3 + 64));
    Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<proto_log::PlayerLogBodyHuntingSettle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyHuntingSettle> *const)(v3 + 64));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  }
  if ( v22 == (char *)v3 )
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

// Line 1364: range 0000000016C8F5BC-0000000016C8F6E8
void __cdecl PlayerHuntingComp::onPostEnterSceneEvent(PlayerHuntingComp *const this, const PostEnterSceneEvent *event)
{
  char v2; // bl
  PlayerSceneComp *SceneComp; // rax
  uint32_t dst_scene_id; // r12d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  char v6; // r12
  std::shared_ptr<Config> v7[2]; // [rsp+10h] [rbp-20h] BYREF

  v2 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
    goto LABEL_8;
  if ( *(_BYTE *)(((unsigned __int64)&event->dst_scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->dst_scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->dst_scene_id);
  }
  dst_scene_id = event->dst_scene_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v7);
  v2 = 1;
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v7);
  if ( dst_scene_id == TxtConfigMgr::getDefaultWorldMainSceneId(&v5->design_config.txt_config_mgr) )
    v6 = 1;
  else
LABEL_8:
    v6 = 0;
  if ( v2 )
    std::shared_ptr<Config>::~shared_ptr(v7);
  if ( v6 )
    PlayerHuntingComp::repairHuntingOffer(this);
};

// Line 1373: range 0000000016C8F6EA-0000000016C8F70D
void __cdecl PlayerHuntingComp::onLeaveSceneEvent(PlayerHuntingComp *const this, const LeaveSceneEvent *event)
{
  PlayerHuntingComp::internalTerminateHunting(this, 1);
};

// Line 1378: range 0000000016C8F70E-0000000016C8FBBB
void __cdecl PlayerHuntingComp::onPlayerEnterWorld(PlayerHuntingComp *const this, uint32_t owner_uid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  Player *v5; // rax
  PlayerHuntingComp *HuntingComp; // rax
  Player *v7; // rax
  PlayerHuntingComp *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  const data::HuntingMonsterExcelConfig *monster_config_ptr; // [rsp+18h] [rbp-E8h]
  std::shared_ptr<Config> v12; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-D0h] BYREF
  char v14[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 15 refresh_id:1396 48 4 15 monster_id:1396 64 16 14 world_ptr:1382 96 16 21 owner_player_ptr:1388";
  *(_QWORD *)(v2 + 16) = PlayerHuntingComp::onPlayerEnterWorld;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( owner_uid != Player::getUid(this->player_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v2 + 64));
    if ( !std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v2 + 64)) )
    {
      std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      PlayerWorld::getOwnPlayer((const PlayerWorld *const)(v2 + 96));
      if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/hunting/player_hunting_comp.cpp",
          "onPlayerEnterWorld",
          1391);
        common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
          &v13,
          (const char (*)[25])"owner_player_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v13);
      }
      else
      {
        v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        HuntingComp = Player::getHuntingComp(v5);
        if ( PlayerHuntingComp::hasOngoingStartedHunting(HuntingComp) )
        {
          *(_DWORD *)(v2 + 32) = 0;
          *(_DWORD *)(v2 + 48) = 0;
          v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          v8 = Player::getHuntingComp(v7);
          if ( PlayerHuntingComp::getOngoingHuntingRefreshIdAndMonsterConfigId(
                 v8,
                 (uint32_t *)(v2 + 32),
                 (uint32_t *)(v2 + 48)) )
          {
            common::milog::MiLogStream::create(
              &v13,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/hunting/player_hunting_comp.cpp",
              "onPlayerEnterWorld",
              1399);
            common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              &v13,
              (const char (*)[52])"getOngoingHuntingRefreshIdAndMonsterConfigId failed");
            common::milog::MiLogStream::~MiLogStream(&v13);
          }
          else
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v12);
            v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
            monster_config_ptr = data::HuntingExcelConfigMgrBase::findHuntingMonsterExcelConfig(
                                   &v9->design_config.txt_config_mgr.hunting_config_mgr,
                                   *(_DWORD *)(v2 + 48));
            std::shared_ptr<Config>::~shared_ptr(&v12);
            if ( monster_config_ptr )
            {
              PlayerHuntingComp::initAbilityGroup(this, &monster_config_ptr->ability_group);
            }
            else
            {
              common::milog::MiLogStream::create(
                &v13,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/hunting/player_hunting_comp.cpp",
                "onPlayerEnterWorld",
                1405);
              v10 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                      &v13,
                      (const char (*)[46])"hunting monster config not found, monster_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v2 + 48));
              common::milog::MiLogStream::~MiLogStream(&v13);
            }
          }
        }
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
    }
    std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 64));
  }
  if ( v14 == (char *)v2 )
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

// Line 1414: range 0000000016C8FBBC-0000000016C8FFC4
void __cdecl PlayerHuntingComp::onPlayerLeaveWorld(PlayerHuntingComp *const this, uint32_t owner_uid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  GameserverService *v5; // rax
  unsigned int GameThreadLocal; // eax
  Player *v7; // rax
  PlayerHuntingComp *HuntingComp; // rax
  Player *v9; // rax
  PlayerHuntingComp *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  const data::HuntingMonsterExcelConfig *monster_config_ptr; // [rsp+18h] [rbp-C8h]
  std::shared_ptr<Config> v14; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 15 refresh_id:1426 48 4 15 monster_id:1426 64 16 21 owner_player_ptr:1418";
  *(_QWORD *)(v2 + 16) = PlayerHuntingComp::onPlayerLeaveWorld;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( owner_uid != Player::getUid(this->player_) )
  {
    v5 = ServiceBox::findService<GameserverService>();
    GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v5);
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v2 + 64), GameThreadLocal + 16);
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/hunting/player_hunting_comp.cpp",
        "onPlayerLeaveWorld",
        1421);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        &v15,
        (const char (*)[25])"owner_player_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
    else
    {
      v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      HuntingComp = Player::getHuntingComp(v7);
      if ( PlayerHuntingComp::hasOngoingStartedHunting(HuntingComp) )
      {
        *(_DWORD *)(v2 + 32) = 0;
        *(_DWORD *)(v2 + 48) = 0;
        v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v10 = Player::getHuntingComp(v9);
        if ( PlayerHuntingComp::getOngoingHuntingRefreshIdAndMonsterConfigId(
               v10,
               (uint32_t *)(v2 + 32),
               (uint32_t *)(v2 + 48)) )
        {
          common::milog::MiLogStream::create(
            &v15,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/hunting/player_hunting_comp.cpp",
            "onPlayerLeaveWorld",
            1429);
          common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
            &v15,
            (const char (*)[52])"getOngoingHuntingRefreshIdAndMonsterConfigId failed");
          common::milog::MiLogStream::~MiLogStream(&v15);
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v14);
          v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
          monster_config_ptr = data::HuntingExcelConfigMgrBase::findHuntingMonsterExcelConfig(
                                 &v11->design_config.txt_config_mgr.hunting_config_mgr,
                                 *(_DWORD *)(v2 + 48));
          std::shared_ptr<Config>::~shared_ptr(&v14);
          if ( monster_config_ptr )
          {
            PlayerHuntingComp::clearAbilityGroup(this, &monster_config_ptr->ability_group);
          }
          else
          {
            common::milog::MiLogStream::create(
              &v15,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/hunting/player_hunting_comp.cpp",
              "onPlayerLeaveWorld",
              1435);
            v12 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                    &v15,
                    (const char (*)[46])"hunting monster config not found, monster_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v15);
          }
        }
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  }
  if ( v16 == (char *)v2 )
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

// Line 1444: range 0000000016C8FFC6-0000000016C900E7
void __cdecl PlayerHuntingComp::initAbilityGroup(PlayerHuntingComp *const this, const std::string *ability_group_name)
{
  PlayerAbilityGroupComp *AbilityGroupComp; // rbx
  PlayerAbilityGroupComp *v3; // rax
  std::allocator<std::string > __a; // [rsp+1Fh] [rbp-31h] BYREF
  std::vector<std::string> group_vec; // [rsp+20h] [rbp-30h] BYREF

  if ( !(unsigned __int8)std::string::empty(ability_group_name) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    AbilityGroupComp = Player::getAbilityGroupComp(this->player_);
    std::allocator<std::string>::allocator(&__a);
    std::vector<std::string>::vector(&group_vec, 1uLL, ability_group_name, &__a);
    PlayerAbilityGroupComp::addNoneFilterAbilityGroup(AbilityGroupComp, &group_vec, 0);
    std::vector<std::string>::~vector(&group_vec);
    std::allocator<std::string>::~allocator(&__a);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v3 = Player::getAbilityGroupComp(this->player_);
    PlayerAbilityGroupComp::tryRefreshAbilityGroup(v3);
  }
};

// Line 1455: range 0000000016C900E8-0000000016C90204
void __cdecl PlayerHuntingComp::clearAbilityGroup(PlayerHuntingComp *const this, const std::string *ability_group_name)
{
  PlayerAbilityGroupComp *AbilityGroupComp; // rbx
  PlayerAbilityGroupComp *v3; // rax
  std::allocator<std::string > __a; // [rsp+1Fh] [rbp-31h] BYREF
  std::vector<std::string> group_vec; // [rsp+20h] [rbp-30h] BYREF

  if ( !(unsigned __int8)std::string::empty(ability_group_name) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    AbilityGroupComp = Player::getAbilityGroupComp(this->player_);
    std::allocator<std::string>::allocator(&__a);
    std::vector<std::string>::vector(&group_vec, 1uLL, ability_group_name, &__a);
    PlayerAbilityGroupComp::delNoneFilterAbilityGroup(AbilityGroupComp, &group_vec);
    std::vector<std::string>::~vector(&group_vec);
    std::allocator<std::string>::~allocator(&__a);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v3 = Player::getAbilityGroupComp(this->player_);
    PlayerAbilityGroupComp::tryRefreshAbilityGroup(v3);
  }
};

// Line 1466: range 0000000016C90206-0000000016C903E1
void __cdecl PlayerHuntingComp::onWorldHuntingStartEvent(
        PlayerHuntingComp *const this,
        const WorldHuntingStartEvent *event)
{
  uint32_t owner_uid; // ebx
  HuntingExcelConfigMgr *p_hunting_config_mgr; // rcx
  common::milog::MiLogStream *v4; // rax
  const data::HuntingMonsterExcelConfig *monster_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v6; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v7; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&event->owner_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->owner_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->owner_uid);
  }
  owner_uid = event->owner_uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( owner_uid != Player::getUid(this->player_) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v6);
    p_hunting_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6)->design_config.txt_config_mgr.hunting_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&event->monster_config_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->monster_config_id >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&event->monster_config_id);
    }
    monster_config_ptr = data::HuntingExcelConfigMgrBase::findHuntingMonsterExcelConfig(
                           p_hunting_config_mgr,
                           event->monster_config_id);
    std::shared_ptr<Config>::~shared_ptr(&v6);
    if ( monster_config_ptr )
    {
      PlayerHuntingComp::initAbilityGroup(this, &monster_config_ptr->ability_group);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v7,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/hunting/player_hunting_comp.cpp",
        "onWorldHuntingStartEvent",
        1472);
      v4 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             &v7,
             (const char (*)[46])"hunting monster config not found, monster_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &event->monster_config_id);
      common::milog::MiLogStream::~MiLogStream(&v7);
    }
  }
};

// Line 1480: range 0000000016C903E2-0000000016C905BD
void __cdecl PlayerHuntingComp::onWorldHuntingEndEvent(
        PlayerHuntingComp *const this,
        const WorldHuntingEndEvent *event)
{
  uint32_t owner_uid; // ebx
  HuntingExcelConfigMgr *p_hunting_config_mgr; // rcx
  common::milog::MiLogStream *v4; // rax
  const data::HuntingMonsterExcelConfig *monster_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v6; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v7; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&event->owner_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->owner_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->owner_uid);
  }
  owner_uid = event->owner_uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( owner_uid != Player::getUid(this->player_) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v6);
    p_hunting_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6)->design_config.txt_config_mgr.hunting_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&event->monster_config_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->monster_config_id >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&event->monster_config_id);
    }
    monster_config_ptr = data::HuntingExcelConfigMgrBase::findHuntingMonsterExcelConfig(
                           p_hunting_config_mgr,
                           event->monster_config_id);
    std::shared_ptr<Config>::~shared_ptr(&v6);
    if ( monster_config_ptr )
    {
      PlayerHuntingComp::clearAbilityGroup(this, &monster_config_ptr->ability_group);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v7,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/hunting/player_hunting_comp.cpp",
        "onWorldHuntingEndEvent",
        1486);
      v4 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             &v7,
             (const char (*)[46])"hunting monster config not found, monster_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &event->monster_config_id);
      common::milog::MiLogStream::~MiLogStream(&v7);
    }
  }
};

// Line 1494: range 0000000016C905BE-0000000016C9060D
void __cdecl PlayerHuntingComp::clearOngoingHuntingPtr(PlayerHuntingComp *const this)
{
  HuntingRecord *v1; // rax

  if ( std::operator!=<HuntingRecord>(0LL, &this->ongoing_hunting_record_ptr_) )
  {
    v1 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ongoing_hunting_record_ptr_);
    HuntingRecord::forceTerminate(v1);
    std::__shared_ptr<HuntingRecord,(__gnu_cxx::_Lock_policy)2>::reset(&this->ongoing_hunting_record_ptr_);
  }
};

// Line 1503: range 0000000016C9060E-0000000016C90772
int32_t __cdecl PlayerHuntingComp::findAllStartedHungingOffer(
        PlayerHuntingComp *const this,
        std::vector<std::pair<unsigned int,unsigned int>> *hunting_offer_index_vec)
{
  unsigned int *v2; // r8
  proto::HuntingOfferState *p_state; // rax
  std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::iterator __for_begin; // [rsp+10h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::iterator __for_end; // [rsp+18h] [rbp-48h] BYREF
  std::vector<HuntingOfferData>::iterator __for_begin_0; // [rsp+20h] [rbp-40h] BYREF
  std::vector<HuntingOfferData>::iterator __for_end_0; // [rsp+28h] [rbp-38h] BYREF
  std::unordered_map<unsigned int,std::vector<HuntingOfferData>> *__for_range; // [rsp+30h] [rbp-30h]
  std::pair<unsigned int const,std::vector<HuntingOfferData> > *__in; // [rsp+38h] [rbp-28h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<HuntingOfferData> > >::type *city_id; // [rsp+40h] [rbp-20h]
  std::tuple_element<1,std::pair<unsigned int const,std::vector<HuntingOfferData> > >::type *hunting_offer_vec; // [rsp+48h] [rbp-18h]
  std::vector<HuntingOfferData> *__for_range_0; // [rsp+50h] [rbp-10h]
  HuntingOfferData *hunting_offer; // [rsp+58h] [rbp-8h]

  __for_range = &this->city_hunting_offer_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::begin(&this->city_hunting_offer_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::end(&this->city_hunting_offer_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<HuntingOfferData>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<HuntingOfferData>>,false,false>::operator*(&__for_begin);
    city_id = std::get<0ul,unsigned int const,std::vector<HuntingOfferData>>(__in);
    hunting_offer_vec = std::get<1ul,unsigned int const,std::vector<HuntingOfferData>>(__in);
    __for_range_0 = hunting_offer_vec;
    __for_begin_0._M_current = std::vector<HuntingOfferData>::begin(hunting_offer_vec)._M_current;
    __for_end_0._M_current = std::vector<HuntingOfferData>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<HuntingOfferData *,std::vector<HuntingOfferData>>(&__for_begin_0, &__for_end_0) )
    {
      hunting_offer = __gnu_cxx::__normal_iterator<HuntingOfferData *,std::vector<HuntingOfferData>>::operator*(&__for_begin_0);
      p_state = &hunting_offer->state;
      if ( *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_state);
      }
      if ( hunting_offer->state != HUNTING_OFFER_STATE_UNSTARTED )
        std::vector<std::pair<unsigned int,unsigned int>>::emplace_back<unsigned int &,unsigned int &>(
          hunting_offer_index_vec,
          &hunting_offer->refresh_id,
          &hunting_offer->monster_config_id,
          &hunting_offer->refresh_id,
          v2);
      __gnu_cxx::__normal_iterator<HuntingOfferData *,std::vector<HuntingOfferData>>::operator++(&__for_begin_0);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<HuntingOfferData>>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 1519: range 0000000016C90774-0000000016C907B7
int32_t __cdecl PlayerHuntingComp::failOngoingHuntingByGm(PlayerHuntingComp *const this)
{
  HuntingRecord *v1; // rax

  if ( std::operator!=<HuntingRecord>(&this->ongoing_hunting_record_ptr_, 0LL) )
  {
    v1 = std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HuntingRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ongoing_hunting_record_ptr_);
    HuntingRecord::forceFail(v1);
  }
  return 0;
};

// Line 1528: range 0000000016C907B8-0000000016C90A83
__int64 __fastcall PlayerHuntingComp::isRefreshIdAndMonsterConfigIdDuplicated(
        PlayerHuntingComp *const this,
        uint32_t city_id,
        uint32_t refresh_id,
        uint32_t monster_config_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 result; // rax
  unsigned __int64 n; // rax
  __int64 v9; // rdi
  std::vector<HuntingOfferData>::iterator __for_begin; // [rsp+28h] [rbp-D8h] BYREF
  std::vector<HuntingOfferData>::iterator __for_end; // [rsp+30h] [rbp-D0h] BYREF
  std::vector<HuntingOfferData> *__for_range; // [rsp+38h] [rbp-C8h]
  char v15[192]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 12 city_id:1527 64 8 14 city_iter:1529 96 24 15 offer_data:1534";
  *(_QWORD *)(v4 + 16) = PlayerHuntingComp::isRefreshIdAndMonsterConfigIdDuplicated;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  *(_DWORD *)(v4 + 48) = city_id;
  *(std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::iterator *)(v4 + 64) = std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::find(
                                                                                             &this->city_hunting_offer_map_,
                                                                                             (const std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::key_type *)(v4 + 48));
  __for_end._M_current = (HuntingOfferData *)std::unordered_map<unsigned int,std::vector<HuntingOfferData>>::end(&this->city_hunting_offer_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::vector<HuntingOfferData>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<HuntingOfferData> >,false> *)(v4 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<HuntingOfferData> >,false> *)&__for_end) )
  {
    result = 0LL;
  }
  else
  {
    __for_range = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<HuntingOfferData>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<HuntingOfferData> >,false,false> *const)(v4 + 64))->second;
    __for_begin._M_current = std::vector<HuntingOfferData>::begin(__for_range)._M_current;
    __for_end._M_current = std::vector<HuntingOfferData>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<HuntingOfferData *,std::vector<HuntingOfferData>>(&__for_begin, &__for_end) )
    {
      n = (unsigned __int64)__gnu_cxx::__normal_iterator<HuntingOfferData *,std::vector<HuntingOfferData>>::operator*(&__for_begin);
      if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) != 0
        && (char)((n + 23) & 7) >= *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) )
      {
        n = __asan_report_load_n(n, 24LL);
      }
      v9 = *(_QWORD *)(n + 8);
      *(_QWORD *)(v4 + 96) = *(_QWORD *)n;
      *(_QWORD *)(v4 + 104) = v9;
      *(_QWORD *)(v4 + 112) = *(_QWORD *)(n + 16);
      if ( *(_DWORD *)(v4 + 112) != 3
        && refresh_id == *(_DWORD *)(v4 + 96)
        && monster_config_id == *(_DWORD *)(v4 + 100) )
      {
        result = 1LL;
        goto LABEL_16;
      }
      __gnu_cxx::__normal_iterator<HuntingOfferData *,std::vector<HuntingOfferData>>::operator++(&__for_begin);
    }
    result = 0LL;
  }
LABEL_16:
  if ( v15 == (char *)v4 )
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
  return result;
};
