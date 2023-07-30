// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/home/home_avatar.cpp

// Line 41: range 0000000016C6AAB0-0000000016C6AD3D
void __cdecl HomeAvatarData::fromBin(HomeAvatarData *const this, const proto::HomeAvatarDataBin *home_avatar_data_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 v5; // rdx
  char v6; // al
  const proto::HomeAvatarDataBin *home_avatar_data_bina; // [rsp+0h] [rbp-A0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-90h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+18h] [rbp-88h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+20h] [rbp-80h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-78h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+30h] [rbp-70h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+38h] [rbp-68h]
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  home_avatar_data_bina = home_avatar_data_bin;
  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 event_id:49";
  *(_QWORD *)(v2 + 16) = HomeAvatarData::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  std::set<unsigned int>::clear(&this->talk_id_set);
  std::set<unsigned int>::clear(&this->event_id_set);
  v5 = proto::HomeAvatarDataBin::avatar_id(home_avatar_data_bin);
  v6 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(home_avatar_data_bin) = v6 != 0;
    __asan_report_store4(this, home_avatar_data_bin, v5);
  }
  this->avatar_id = v5;
  __for_range = proto::HomeAvatarDataBin::talk_id_list(home_avatar_data_bina);
  __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
  __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin);
    }
    *(_DWORD *)(v2 + 32) = *__for_begin;
    std::set<unsigned int>::insert(&this->talk_id_set, (const std::set<unsigned int>::value_type *)(v2 + 32));
    ++__for_begin;
  }
  __for_range_0 = proto::HomeAvatarDataBin::event_id_list(home_avatar_data_bina);
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
    *(_DWORD *)(v2 + 32) = *__for_begin_0;
    std::set<unsigned int>::insert(&this->event_id_set, (const std::set<unsigned int>::value_type *)(v2 + 32));
    ++__for_begin_0;
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 56: range 0000000016C6AD3E-0000000016C6AEF3
void __cdecl HomeAvatarData::toBin(const HomeAvatarData *const this, proto::HomeAvatarDataBin *home_avatar_data_bin)
{
  unsigned int *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  unsigned int *v4; // rax
  google::protobuf::uint32 *v5; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-20h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-18h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+30h] [rbp-10h]
  const std::set<unsigned int> *__for_range_0; // [rsp+38h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::HomeAvatarDataBin::set_avatar_id(home_avatar_data_bin, this->avatar_id);
  __for_range = &this->talk_id_set;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->talk_id_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->talk_id_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::HomeAvatarDataBin::add_talk_id_list(home_avatar_data_bin, *v3);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  __for_range_0 = &this->event_id_set;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->event_id_set)._M_node;
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
    proto::HomeAvatarDataBin::add_event_id_list(home_avatar_data_bin, *v5);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
};

// Line 69: range 0000000016C6AEF4-0000000016C6B045
void __cdecl HomeRewardEventData::fromBin(
        HomeRewardEventData *const this,
        const proto::HomeAvatarRewardEventBin *reward_event_data_bin)
{
  uint32_t v2; // ecx
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
  const proto::HomeAvatarRewardEventBin *reward_event_data_bina; // [rsp+0h] [rbp-10h]

  reward_event_data_bina = reward_event_data_bin;
  v2 = proto::HomeAvatarRewardEventBin::order(reward_event_data_bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(reward_event_data_bin) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, reward_event_data_bin, v4);
  this->order = v2;
  v5 = proto::HomeAvatarRewardEventBin::event_id(reward_event_data_bina);
  v6 = *(_BYTE *)(((unsigned __int64)&this->event_id >> 3) + 0x7FFF8000);
  LOBYTE(reward_event_data_bin) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->event_id, reward_event_data_bin, v7);
  this->event_id = v5;
  v8 = proto::HomeAvatarRewardEventBin::random_position(reward_event_data_bina);
  v9 = *(_BYTE *)(((unsigned __int64)&this->random_position >> 3) + 0x7FFF8000);
  LOBYTE(reward_event_data_bin) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->random_position, reward_event_data_bin, v10);
  this->random_position = v8;
  v11 = proto::HomeAvatarRewardEventBin::guid(reward_event_data_bina);
  v12 = *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000);
  LOBYTE(reward_event_data_bin) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store4(&this->guid, reward_event_data_bin, v13);
  this->guid = v11;
};

// Line 77: range 0000000016C6B046-0000000016C6B193
void __cdecl HomeRewardEventData::toBin(
        const HomeRewardEventData *const this,
        proto::HomeAvatarRewardEventBin *reward_event_data_bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::HomeAvatarRewardEventBin::set_order(reward_event_data_bin, this->order);
  if ( *(_BYTE *)(((unsigned __int64)&this->event_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->event_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->event_id);
  }
  proto::HomeAvatarRewardEventBin::set_event_id(reward_event_data_bin, this->event_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->random_position >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->random_position >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->random_position);
  }
  proto::HomeAvatarRewardEventBin::set_random_position(reward_event_data_bin, this->random_position);
  if ( *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->guid);
  }
  proto::HomeAvatarRewardEventBin::set_guid(reward_event_data_bin, this->guid);
};

// Line 84: range 0000000016C6B194-0000000016C6B202
void __cdecl HomeAvatar::HomeAvatar(HomeAvatar *const this, Player *player)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, player);
  this->player_ = player;
  std::unordered_map<unsigned int,HomeAvatarData>::unordered_map(&this->avatar_data_map_);
  std::set<unsigned int>::set(&this->show_avatar_id_set_);
  std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData>>>::map(&this->reward_event_id_map_);
};

// Line 91: range 0000000016C6B204-0000000016C6B652
void __cdecl HomeAvatar::fromBin(HomeAvatar *const this, const proto::PlayerHomeAvatarBin *home_avatar_bin)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  HomeAvatarData *v5; // rax
  HomeRewardEventData *v6; // r8
  google::protobuf::RepeatedPtrField<proto::HomeAvatarDataBin>::const_iterator __for_begin; // [rsp+18h] [rbp-148h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeAvatarDataBin>::const_iterator __for_end; // [rsp+20h] [rbp-140h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-138h]
  const google::protobuf::RepeatedPtrField<proto::HomeAvatarDataBin> *__for_range; // [rsp+30h] [rbp-130h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+38h] [rbp-128h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+40h] [rbp-120h]
  const google::protobuf::RepeatedPtrField<proto::HomeAvatarRewardEventBin> *__for_range_1; // [rsp+48h] [rbp-118h]
  const proto::HomeAvatarRewardEventBin *reward_event_data_bin; // [rsp+50h] [rbp-110h]
  const proto::HomeAvatarDataBin *home_avatar_data_bin; // [rsp+58h] [rbp-108h]
  char v16[256]; // [rsp+60h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 13 avatar_id:101 48 16 14 event_data:107 80 104 14 avatar_data:97";
  *(_QWORD *)(v2 + 16) = HomeAvatar::fromBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  std::unordered_map<unsigned int,HomeAvatarData>::clear(&this->avatar_data_map_);
  std::set<unsigned int>::clear(&this->show_avatar_id_set_);
  std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData>>>::clear(&this->reward_event_id_map_);
  __for_range = proto::PlayerHomeAvatarBin::home_avatar_list(home_avatar_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeAvatarDataBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeAvatarDataBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeAvatarDataBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    home_avatar_data_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeAvatarDataBin const>::operator*(&__for_begin);
    HomeAvatarData::HomeAvatarData((HomeAvatarData *const)(v2 + 80));
    HomeAvatarData::fromBin((HomeAvatarData *const)(v2 + 80), home_avatar_data_bin);
    v5 = std::unordered_map<unsigned int,HomeAvatarData>::operator[](
           &this->avatar_data_map_,
           (const std::unordered_map<unsigned int,HomeAvatarData>::key_type *)(v2 + 80));
    HomeAvatarData::operator=(v5, (const HomeAvatarData *)(v2 + 80));
    HomeAvatarData::~HomeAvatarData((HomeAvatarData *const)(v2 + 80));
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeAvatarDataBin const>::operator++(&__for_begin);
  }
  __for_range_0 = proto::PlayerHomeAvatarBin::show_avatar_id_list(home_avatar_bin);
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
    *(_DWORD *)(v2 + 32) = *__for_begin_0;
    std::set<unsigned int>::emplace<unsigned int &>(
      &this->show_avatar_id_set_,
      (unsigned int *)(v2 + 32),
      (unsigned int *)&this->show_avatar_id_set_);
    ++__for_begin_0;
  }
  __for_range_1 = proto::PlayerHomeAvatarBin::reward_event_list(home_avatar_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeAvatarRewardEventBin>::begin(__for_range_1).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeAvatarRewardEventBin>::end(__for_range_1).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeAvatarRewardEventBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeAvatarRewardEventBin> *const)&__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeAvatarRewardEventBin>::iterator *)&__for_end) )
  {
    reward_event_data_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeAvatarRewardEventBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeAvatarRewardEventBin> *const)&__for_begin);
    *(_DWORD *)(v2 + 48) = 0;
    *(_DWORD *)(v2 + 52) = 0;
    *(_DWORD *)(v2 + 56) = 0;
    *(_DWORD *)(v2 + 60) = 0;
    HomeRewardEventData::fromBin((HomeRewardEventData *const)(v2 + 48), reward_event_data_bin);
    std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData>>>::emplace<unsigned int &,HomeRewardEventData&>(
      &this->reward_event_id_map_,
      (unsigned int *)(v2 + 48),
      (HomeRewardEventData *)(v2 + 48),
      (unsigned int *)&this->reward_event_id_map_,
      v6);
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeAvatarRewardEventBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::HomeAvatarRewardEventBin> *const)&__for_begin);
  }
  HomeAvatar::modifyRewardEventIdMap(this);
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
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
};

// Line 116: range 0000000016C6B654-0000000016C6B85E
void __cdecl HomeAvatar::toBin(const HomeAvatar *const this, proto::PlayerHomeAvatarBin *home_avatar_bin)
{
  unsigned int *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  std::unordered_map<unsigned int,HomeAvatarData>::const_iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::unordered_map<unsigned int,HomeAvatarData>::const_iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  const std::unordered_map<unsigned int,HomeAvatarData> *__for_range; // [rsp+28h] [rbp-58h]
  const std::set<unsigned int> *__for_range_0; // [rsp+30h] [rbp-50h]
  const std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData> > > *__for_range_1; // [rsp+38h] [rbp-48h]
  const std::pair<unsigned int const,HomeRewardEventData> *v9; // [rsp+40h] [rbp-40h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeRewardEventData> >::type *__0; // [rsp+48h] [rbp-38h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeRewardEventData> >::type *event_data; // [rsp+50h] [rbp-30h]
  proto::HomeAvatarRewardEventBin *event_bin; // [rsp+58h] [rbp-28h]
  const std::pair<unsigned int const,HomeAvatarData> *v13; // [rsp+60h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeAvatarData> >::type *_; // [rsp+68h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeAvatarData> >::type *avatar_data; // [rsp+70h] [rbp-10h]
  proto::HomeAvatarDataBin *data_bin; // [rsp+78h] [rbp-8h]

  __for_range = &this->avatar_data_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,HomeAvatarData>::begin(&this->avatar_data_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,HomeAvatarData>::end(&this->avatar_data_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,HomeAvatarData>,false>(&__for_begin, &__for_end) )
  {
    v13 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,HomeAvatarData>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,HomeAvatarData>(v13);
    avatar_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeAvatarData> >::type *)std::get<1ul,unsigned int const,HomeAvatarData>(v13);
    data_bin = proto::PlayerHomeAvatarBin::add_home_avatar_list(home_avatar_bin);
    HomeAvatarData::toBin(avatar_data, data_bin);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,HomeAvatarData>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = &this->show_avatar_id_set_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeAvatarData>,false>::__node_type *)std::set<unsigned int>::begin(&this->show_avatar_id_set_)._M_node;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeAvatarData>,false>::__node_type *)std::set<unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v2 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::PlayerHomeAvatarBin::add_show_avatar_id_list(home_avatar_bin, *v3);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  __for_range_1 = &this->reward_event_id_map_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeAvatarData>,false>::__node_type *)std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData>>>::begin(&this->reward_event_id_map_)._M_node;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeAvatarData>,false>::__node_type *)std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData>>>::end(__for_range_1)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeRewardEventData> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeRewardEventData> >::_Self *)&__for_end) )
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeRewardEventData>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeRewardEventData> > *const)&__for_begin);
    __0 = std::get<0ul,unsigned int const,HomeRewardEventData>(v9);
    event_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeRewardEventData> >::type *)std::get<1ul,unsigned int const,HomeRewardEventData>(v9);
    event_bin = proto::PlayerHomeAvatarBin::add_reward_event_list(home_avatar_bin);
    HomeRewardEventData::toBin(event_data, event_bin);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeRewardEventData>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeRewardEventData> > *const)&__for_begin);
  }
};

// Line 134: range 0000000016C6B860-0000000016C6BC39
void __cdecl HomeAvatar::updateAvatarsInHome(HomeAvatar *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  Home *v4; // rax
  common::milog::MiLogStream *v5; // r14
  std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-B0h] BYREF
  char v11[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 home_ptr:136 64 16 23 cur_module_data_ptr:142";
  *(_QWORD *)(v1 + 16) = HomeAvatar::updateAvatarsInHome;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::set<unsigned int>::clear(&this->show_avatar_id_set_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getHomeComp(this->player_);
  PlayerHomeComp::findMyHome((const PlayerHomeComp *const)(v1 + 32));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/home/home_avatar.cpp",
      "updateAvatarsInHome",
      139);
    common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(&v10, (const char (*)[53])off_25F16C00);
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    v4 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    Home::getSceneComp(v4);
    HomeSceneComp::getCurHomeModuleData((HomeSceneComp *const)(v1 + 64));
    if ( std::operator==<HomeModuleData>((const std::shared_ptr<HomeModuleData> *)(v1 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/home/home_avatar.cpp",
        "updateAvatarsInHome",
        145);
      v5 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             &v10,
             (const char (*)[46])"getCurHomeModuleData() return null. home_uid:");
      v6 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      val = Home::getHomeUid(v6);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
      common::milog::MiLogStream::~MiLogStream(&v10);
    }
    else
    {
      v7 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      HomeModuleData::fillModuleShowNpcAllAvatarId(v7, &this->show_avatar_id_set_);
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/home/home_avatar.cpp",
        "updateAvatarsInHome",
        149);
      v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
             &v10,
             (const char (*)[37])"updateAvatarsInHome success avatars:");
      common::milog::MiLogStream::operator<<<unsigned int>(v8, &this->show_avatar_id_set_);
      common::milog::MiLogStream::~MiLogStream(&v10);
      HomeAvatar::updateAllHomeAvatarCostumeInfo(this);
      HomeAvatar::updateAllRewardEventIdMap(this);
    }
    std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v1 + 64));
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v1 + 32));
  if ( v11 == (char *)v1 )
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

// Line 156: range 0000000016C6BC3A-0000000016C6C29D
int32_t __cdecl HomeAvatar::addAvatarsFetter(HomeAvatar *const this, uint32_t add_num)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rcx
  int32_t result; // eax
  PlayerAvatarComp *AvatarComp; // rax
  PlayerBasicComp *BasicComp; // rax
  unsigned int *v9; // rax
  unsigned int *v10; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAvatarAddFetter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAvatarAddFetter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  Home *v13; // rax
  Home *v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAvatarAddFetter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAvatarAddFetter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  uint32_t ModuleComfortValue; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAvatarAddFetter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // r14
  Home *v19; // rax
  uint32_t Level; // eax
  Player *player; // r14
  std::string v22; // [rsp+0h] [rbp-170h]
  uint32_t add_numa; // [rsp+4h] [rbp-16Ch]
  HomeAvatar *thisa; // [rsp+8h] [rbp-168h]
  google::protobuf::uint32 cur_module_id; // [rsp+18h] [rbp-158h]
  unsigned int avatar_id; // [rsp+1Ch] [rbp-154h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-150h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-148h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+30h] [rbp-140h]
  HomeSceneComp *scene_comp; // [rsp+38h] [rbp-138h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+40h] [rbp-130h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+50h] [rbp-120h] BYREF
  common::milog::MiLogStream v33; // [rsp+60h] [rbp-110h] BYREF
  char v34[240]; // [rsp+80h] [rbp-F0h] BYREF

  v22._M_string_length = (std::string::size_type)this;
  HIDWORD(v22._M_dataplus._M_p) = add_num;
  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 10 holder:168 64 16 11 log_ptr:169 96 16 12 home_ptr:175 128 24 17 action_reason:163";
  *(_QWORD *)(v2 + 16) = HomeAvatar::addAvatarsFetter;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  if ( std::set<unsigned int>::empty(&this->show_avatar_id_set_) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/home/home_avatar.cpp",
      "addAvatarsFetter",
      159);
    v5 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v33,
           (const char (*)[26])"avatars in home is empty ");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v33);
    result = -1;
  }
  else
  {
    ActionReason::ActionReason(
      (ActionReason *const)(v2 + 128),
      ACTION_REASON_HOME_FETTER_COLLECT,
      ITEM_LIMIT_HOME_FETTER);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    AvatarComp = Player::getAvatarComp(this->player_);
    PlayerAvatarComp::addMyAvatarFetterExpForIds(
      AvatarComp,
      add_num,
      &this->show_avatar_id_set_,
      (const ActionReason *)(v2 + 128));
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v33, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xCC7u, v22);
    std::string::~string(&v33);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyHomeAvatarAddFetter>();
    __for_range = &thisa->show_avatar_id_set_;
    __for_begin._M_node = std::set<unsigned int>::begin(&thisa->show_avatar_id_set_)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(&thisa->show_avatar_id_set_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v9 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      avatar_id = *v10;
      v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAvatarAddFetter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAvatarAddFetter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      proto_log::PlayerLogBodyHomeAvatarAddFetter::add_avatar_id_list(v11, avatar_id);
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAvatarAddFetter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAvatarAddFetter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto_log::PlayerLogBodyHomeAvatarAddFetter::set_add_fetter_num(v12, add_numa);
    if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getHomeComp(thisa->player_);
    PlayerHomeComp::findMyHome((const PlayerHomeComp *const)(v2 + 96));
    if ( std::operator!=<Home>((const std::shared_ptr<Home> *)(v2 + 96), 0LL) )
    {
      v13 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      scene_comp = Home::getSceneComp(v13);
      v14 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      cur_module_id = Home::getCurModuleId(v14);
      v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAvatarAddFetter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAvatarAddFetter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      proto_log::PlayerLogBodyHomeAvatarAddFetter::set_module_id(v15, cur_module_id);
      v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAvatarAddFetter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAvatarAddFetter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      ModuleComfortValue = HomeSceneComp::getModuleComfortValue(scene_comp, cur_module_id);
      proto_log::PlayerLogBodyHomeAvatarAddFetter::set_comfort_value(v16, ModuleComfortValue);
      v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAvatarAddFetter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeAvatarAddFetter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v19 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      Level = Home::getLevel(v19);
      proto_log::PlayerLogBodyHomeAvatarAddFetter::set_home_level(v18, Level);
    }
    if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = thisa->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyHomeAvatarAddFetter,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyHomeAvatarAddFetter> *)(v2 + 64));
    Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v2 + 96));
    std::shared_ptr<proto_log::PlayerLogBodyHomeAvatarAddFetter>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyHomeAvatarAddFetter> *const)(v2 + 64));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
    result = 0;
  }
  if ( v34 == (char *)v2 )
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

// Line 190: range 0000000016C6C29E-0000000016C6C378
void __cdecl HomeAvatar::updateAllRewardEventIdMap(HomeAvatar *const this)
{
  unsigned int *v1; // rax
  uint32_t *v2; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-18h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-10h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-8h]

  std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData>>>::clear(&this->reward_event_id_map_);
  __for_range = &this->show_avatar_id_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->show_avatar_id_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->show_avatar_id_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v1 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v2 = v1;
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v1);
    }
    HomeAvatar::updateRewardEventIdMapByAvatar(this, *v2);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  HomeAvatar::notifyHomeAvatarEventData(this);
};

// Line 201: range 0000000016C6C37A-0000000016C6C3B1
void __cdecl HomeAvatar::updateRewardEventIdMap(HomeAvatar *const this, uint32_t avatar_id)
{
  if ( HomeAvatar::updateRewardEventIdMapByAvatar(this, avatar_id) )
    HomeAvatar::notifyHomeAvatarEventData(this);
};

// Line 211: range 0000000016C6C3B2-0000000016C6C8A1
bool __cdecl HomeAvatar::updateRewardEventIdMapByAvatar(HomeAvatar *const this, uint32_t avatar_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v6; // rax
  _DWORD *v7; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  bool result; // al
  HomeRewardEventData *v11; // r8
  bool is_change; // [rsp+1Fh] [rbp-F1h]
  uint32_t random_position; // [rsp+20h] [rbp-F0h]
  uint32_t guid; // [rsp+24h] [rbp-ECh]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-E8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-E0h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,HomeRewardEventData> >::_Self __x; // [rsp+38h] [rbp-D8h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,HomeRewardEventData> >::_Self __y; // [rsp+40h] [rbp-D0h] BYREF
  const std::vector<unsigned int> *event_id_vec_ptr; // [rsp+48h] [rbp-C8h]
  const std::vector<unsigned int> *__for_range; // [rsp+50h] [rbp-C0h]
  const data::HomeWorldEventExcelConfig *event_config_ptr; // [rsp+58h] [rbp-B8h]
  std::shared_ptr<Config> v22; // [rsp+60h] [rbp-B0h] BYREF
  common::milog::MiLogStream v23; // [rsp+70h] [rbp-A0h] BYREF
  char v24[128]; // [rsp+90h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 event_id:216 64 16 14 event_data:237";
  *(_QWORD *)(v2 + 16) = HomeAvatar::updateRewardEventIdMapByAvatar;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  is_change = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 64));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  event_id_vec_ptr = HomeWorldExcelConfigMgr::findRewardEventIdVecByAvatarId(
                       &v5->design_config.txt_config_mgr.home_config_mgr,
                       avatar_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
  if ( event_id_vec_ptr )
  {
    __for_range = event_id_vec_ptr;
    __for_begin._M_current = std::vector<unsigned int>::begin(event_id_vec_ptr)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(event_id_vec_ptr)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v6 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      *(_DWORD *)(v2 + 48) = *v7;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v22);
      v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
      event_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldEventExcelConfig(
                           &v8->design_config.txt_config_mgr.home_config_mgr,
                           *(_DWORD *)(v2 + 48));
      std::shared_ptr<Config>::~shared_ptr(&v22);
      if ( !event_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/home/home_avatar.cpp",
          "updateRewardEventIdMapByAvatar",
          222);
        v9 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
               &v23,
               (const char (*)[53])"findHomeWorldEventExcelConfig return null. event_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v23);
        result = is_change;
        goto LABEL_20;
      }
      __y._M_node = std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData>>>::end(&this->reward_event_id_map_)._M_node;
      __x._M_node = std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData>>>::find(
                      &this->reward_event_id_map_,
                      &event_config_ptr->order)._M_node;
      if ( !std::operator!=(&__x, &__y) && HomeAvatar::isEventCanReward(this, *(_DWORD *)(v2 + 48), event_config_ptr) )
      {
        is_change = 1;
        random_position = common::tools::RandomUtils::rand<unsigned int>(1u, 0x64u);
        if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->furniture_suit_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)event_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event_config_ptr->furniture_suit_id >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&event_config_ptr->furniture_suit_id);
        }
        guid = HomeAvatar::getSuiteGuidCanSummonAvatar(this, event_config_ptr->furniture_suit_id);
        *(_DWORD *)(v2 + 64) = 0;
        *(_DWORD *)(v2 + 68) = 0;
        *(_DWORD *)(v2 + 72) = 0;
        *(_DWORD *)(v2 + 76) = 0;
        if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->order >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)event_config_ptr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event_config_ptr->order >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&event_config_ptr->order);
        }
        *(_DWORD *)(v2 + 64) = event_config_ptr->order;
        *(_DWORD *)(v2 + 68) = *(_DWORD *)(v2 + 48);
        *(_DWORD *)(v2 + 72) = random_position;
        *(_DWORD *)(v2 + 76) = guid;
        std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData>>>::emplace<unsigned int &,HomeRewardEventData&>(
          &this->reward_event_id_map_,
          (unsigned int *)(v2 + 64),
          (HomeRewardEventData *)(v2 + 64),
          (unsigned int *)&this->reward_event_id_map_,
          v11);
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
  }
  result = is_change;
LABEL_20:
  if ( v24 == (char *)v2 )
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

// Line 251: range 0000000016C6C8A2-0000000016C6C8D4
void __cdecl HomeAvatar::notifyAllData(HomeAvatar *const this)
{
  HomeAvatar::notifyHomeAvatarTalkData(this);
  HomeAvatar::notifyHomeAvatarEventData(this);
  HomeAvatar::notifyHomeFinishEventData(this);
};

// Line 258: range 0000000016C6C8D6-0000000016C6CC89
void __cdecl HomeAvatar::notifyHomeAvatarTalkData(HomeAvatar *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  unsigned int *v4; // rax
  google::protobuf::uint32 *v5; // rdx
  std::unordered_map<unsigned int,HomeAvatarData>::iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::unordered_map<unsigned int,HomeAvatarData>::iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  std::set<unsigned int>::iterator __for_begin_0; // [rsp+30h] [rbp-E0h] BYREF
  std::set<unsigned int>::iterator __for_end_0; // [rsp+38h] [rbp-D8h] BYREF
  std::unordered_map<unsigned int,HomeAvatarData> *__for_range; // [rsp+40h] [rbp-D0h]
  const std::pair<unsigned int const,HomeAvatarData> *v11; // [rsp+48h] [rbp-C8h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeAvatarData> >::type *avatar_id; // [rsp+50h] [rbp-C0h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeAvatarData> >::type *avatar_data; // [rsp+58h] [rbp-B8h]
  proto::HomeAvatarTalkFinishInfo *info_notify; // [rsp+60h] [rbp-B0h]
  const std::set<unsigned int> *__for_range_0; // [rsp+68h] [rbp-A8h]
  char v16[160]; // [rsp+70h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 48 10 notify:259";
  *(_QWORD *)(v1 + 16) = HomeAvatar::notifyHomeAvatarTalkData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  proto::HomeAvatarTalkFinishInfoNotify::HomeAvatarTalkFinishInfoNotify((proto::HomeAvatarTalkFinishInfoNotify *const)(v1 + 48));
  __for_range = &this->avatar_data_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,HomeAvatarData>::begin(&this->avatar_data_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,HomeAvatarData>::end(&this->avatar_data_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,HomeAvatarData>,false>(&__for_begin, &__for_end) )
  {
    v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeAvatarData>,false,false>::operator*(&__for_begin);
    avatar_id = std::get<0ul,unsigned int const,HomeAvatarData>(v11);
    avatar_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeAvatarData> >::type *)std::get<1ul,unsigned int const,HomeAvatarData>(v11);
    if ( *(_BYTE *)(((unsigned __int64)avatar_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)avatar_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)avatar_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(avatar_id);
    }
    if ( HomeAvatar::isAvatarInHome(this, *avatar_id) )
    {
      info_notify = proto::HomeAvatarTalkFinishInfoNotify::add_avatar_talk_info_list((proto::HomeAvatarTalkFinishInfoNotify *const)(v1 + 48));
      if ( *(_BYTE *)(((unsigned __int64)avatar_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)avatar_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)avatar_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(avatar_id);
      }
      proto::HomeAvatarTalkFinishInfo::set_avatar_id(info_notify, *avatar_id);
      __for_range_0 = &avatar_data->talk_id_set;
      __for_begin_0._M_node = std::set<unsigned int>::begin(&avatar_data->talk_id_set)._M_node;
      __for_end_0._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v4 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin_0);
        v5 = v4;
        if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v4);
        }
        proto::HomeAvatarTalkFinishInfo::add_finish_talk_id_list(info_notify, *v5);
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin_0);
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,HomeAvatarData>,false,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 48));
  proto::HomeAvatarTalkFinishInfoNotify::~HomeAvatarTalkFinishInfoNotify((proto::HomeAvatarTalkFinishInfoNotify *const)(v1 + 48));
  if ( v16 == (char *)v1 )
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

// Line 278: range 0000000016C6CC8A-0000000016C6D376
void __cdecl HomeAvatar::notifyHomeAvatarEventData(HomeAvatar *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::_Rb_tree_iterator<std::pair<unsigned int const,HomeRewardEventData> >::pointer v4; // rax
  uint32_t *p_event_id; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,HomeRewardEventData> >::_Self __y; // [rsp+18h] [rbp-138h] BYREF
  HomeRewardEventData *event_data; // [rsp+20h] [rbp-130h]
  const data::HomeWorldEventExcelConfig *event_config_ptr; // [rsp+28h] [rbp-128h]
  proto::HomeAvatarRewardEventInfo *pending_info; // [rsp+30h] [rbp-120h]
  proto::HomeAvatarRewardEventInfo *reward_info; // [rsp+38h] [rbp-118h]
  std::shared_ptr<Config> v13; // [rsp+40h] [rbp-110h] BYREF
  common::milog::MiLogStream v14; // [rsp+50h] [rbp-100h] BYREF
  char v15[224]; // [rsp+70h] [rbp-E0h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 12 event_id:286 64 8 8 iter:283 96 56 10 notify:280";
  *(_QWORD *)(v1 + 16) = HomeAvatar::notifyHomeAvatarEventData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862724] = -218103808;
  v3[536862725] = -202116109;
  proto::HomeAvatarRewardEventNotify::HomeAvatarRewardEventNotify((proto::HomeAvatarRewardEventNotify *const)(v1 + 96));
  proto::HomeAvatarRewardEventNotify::set_is_event_trigger((proto::HomeAvatarRewardEventNotify *const)(v1 + 96), 0);
  *(std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData> > >::iterator *)(v1 + 64) = std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData>>>::begin(&this->reward_event_id_map_);
  while ( 1 )
  {
    __y._M_node = std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData>>>::end(&this->reward_event_id_map_)._M_node;
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeRewardEventData> >::_Self *)(v1 + 64),
            &__y) )
      break;
    v4 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeRewardEventData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeRewardEventData> > *const)(v1 + 64));
    event_data = &v4->second;
    p_event_id = &v4->second.event_id;
    if ( *(_BYTE *)(((unsigned __int64)p_event_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_event_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_event_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_event_id);
    }
    *(_DWORD *)(v1 + 48) = event_data->event_id;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v13);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
    event_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldEventExcelConfig(
                         &v6->design_config.txt_config_mgr.home_config_mgr,
                         *(_DWORD *)(v1 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v13);
    if ( event_config_ptr )
    {
      proto::HomeAvatarRewardEventNotify::set_is_event_trigger((proto::HomeAvatarRewardEventNotify *const)(v1 + 96), 1);
      __y._M_node = std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData>>>::begin(&this->reward_event_id_map_)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeRewardEventData> >::_Self *)(v1 + 64),
             &__y) )
      {
        reward_info = proto::HomeAvatarRewardEventNotify::mutable_reward_event((proto::HomeAvatarRewardEventNotify *const)(v1 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->avatar_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&event_config_ptr->avatar_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&event_config_ptr->avatar_id);
        }
        proto::HomeAvatarRewardEventInfo::set_avatar_id(reward_info, event_config_ptr->avatar_id);
        proto::HomeAvatarRewardEventInfo::set_event_id(reward_info, *(_DWORD *)(v1 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->furniture_suit_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)event_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event_config_ptr->furniture_suit_id >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&event_config_ptr->furniture_suit_id);
        }
        proto::HomeAvatarRewardEventInfo::set_suite_id(reward_info, event_config_ptr->furniture_suit_id);
        if ( *(_BYTE *)(((unsigned __int64)&event_data->random_position >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)event_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event_data->random_position >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4(&event_data->random_position);
        }
        proto::HomeAvatarRewardEventInfo::set_random_position(reward_info, event_data->random_position);
        if ( *(_BYTE *)(((unsigned __int64)&event_data->guid >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)event_data + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event_data->guid >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4(&event_data->guid);
        }
        proto::HomeAvatarRewardEventInfo::set_guid(reward_info, event_data->guid);
      }
      else
      {
        pending_info = proto::HomeAvatarRewardEventNotify::add_pending_list((proto::HomeAvatarRewardEventNotify *const)(v1 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->avatar_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&event_config_ptr->avatar_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&event_config_ptr->avatar_id);
        }
        proto::HomeAvatarRewardEventInfo::set_avatar_id(pending_info, event_config_ptr->avatar_id);
        proto::HomeAvatarRewardEventInfo::set_event_id(pending_info, *(_DWORD *)(v1 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->furniture_suit_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)event_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event_config_ptr->furniture_suit_id >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&event_config_ptr->furniture_suit_id);
        }
        proto::HomeAvatarRewardEventInfo::set_suite_id(pending_info, event_config_ptr->furniture_suit_id);
        if ( *(_BYTE *)(((unsigned __int64)&event_data->random_position >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)event_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event_data->random_position >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4(&event_data->random_position);
        }
        proto::HomeAvatarRewardEventInfo::set_random_position(pending_info, event_data->random_position);
        if ( *(_BYTE *)(((unsigned __int64)&event_data->guid >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)event_data + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event_data->guid >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4(&event_data->guid);
        }
        proto::HomeAvatarRewardEventInfo::set_guid(pending_info, event_data->guid);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/home/home_avatar.cpp",
        "notifyHomeAvatarEventData",
        290);
      v7 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
             &v14,
             (const char (*)[53])"findHomeWorldEventExcelConfig return null. event_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,HomeRewardEventData>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,HomeRewardEventData> > *const)(v1 + 64));
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 96));
  HomeAvatar::updateHomeSceneRewardEventInfo(this, (const proto::HomeAvatarRewardEventNotify *)(v1 + 96));
  proto::HomeAvatarRewardEventNotify::~HomeAvatarRewardEventNotify((proto::HomeAvatarRewardEventNotify *const)(v1 + 96));
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
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

// Line 321: range 0000000016C6D378-0000000016C6D66D
void __cdecl HomeAvatar::notifyHomeFinishEventData(HomeAvatar *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  unsigned int *v4; // rax
  google::protobuf::uint32 *v5; // rdx
  std::unordered_map<unsigned int,HomeAvatarData>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::unordered_map<unsigned int,HomeAvatarData>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  std::set<unsigned int>::iterator __for_begin_0; // [rsp+28h] [rbp-D8h] BYREF
  std::set<unsigned int>::iterator __for_end_0; // [rsp+30h] [rbp-D0h] BYREF
  std::unordered_map<unsigned int,HomeAvatarData> *__for_range; // [rsp+38h] [rbp-C8h]
  const std::pair<unsigned int const,HomeAvatarData> *v11; // [rsp+40h] [rbp-C0h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeAvatarData> >::type *_; // [rsp+48h] [rbp-B8h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeAvatarData> >::type *avatar_data; // [rsp+50h] [rbp-B0h]
  const std::set<unsigned int> *__for_range_0; // [rsp+58h] [rbp-A8h]
  char v15[160]; // [rsp+60h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 40 10 notify:322";
  *(_QWORD *)(v1 + 16) = HomeAvatar::notifyHomeFinishEventData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  proto::HomeAvatarAllFinishRewardNotify::HomeAvatarAllFinishRewardNotify((proto::HomeAvatarAllFinishRewardNotify *const)(v1 + 48));
  __for_range = &this->avatar_data_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,HomeAvatarData>::begin(&this->avatar_data_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,HomeAvatarData>::end(&this->avatar_data_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,HomeAvatarData>,false>(&__for_begin, &__for_end) )
  {
    v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeAvatarData>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,HomeAvatarData>(v11);
    avatar_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeAvatarData> >::type *)std::get<1ul,unsigned int const,HomeAvatarData>(v11);
    __for_range_0 = &avatar_data->event_id_set;
    __for_begin_0._M_node = std::set<unsigned int>::begin(&avatar_data->event_id_set)._M_node;
    __for_end_0._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v4 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin_0);
      v5 = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4);
      }
      proto::HomeAvatarAllFinishRewardNotify::add_event_id_list(
        (proto::HomeAvatarAllFinishRewardNotify *const)(v1 + 48),
        *v5);
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin_0);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,HomeAvatarData>,false,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 48));
  proto::HomeAvatarAllFinishRewardNotify::~HomeAvatarAllFinishRewardNotify((proto::HomeAvatarAllFinishRewardNotify *const)(v1 + 48));
  if ( v15 == (char *)v1 )
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

// Line 335: range 0000000016C6D66E-0000000016C6DA6E
_BOOL8 __fastcall HomeAvatar::isEventCanReward(
        const HomeAvatar *const this,
        uint32_t event_id,
        const data::HomeWorldEventExcelConfig *event_config_ptr)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  _BOOL8 result; // rax
  uint32_t v8; // edx
  uint32_t condition_param1; // ecx
  data::HomeAvatarEventCondType condition_type1; // edx
  uint32_t condition_param2; // ecx
  data::HomeAvatarEventCondType condition_type2; // edx
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-80h] BYREF
  char v15[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 12 event_id:334";
  *(_QWORD *)(v3 + 16) = HomeAvatar::isEventCanReward;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = event_id;
  if ( event_config_ptr )
  {
    v8 = *(_DWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->avatar_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event_config_ptr->avatar_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event_config_ptr->avatar_id);
    }
    if ( HomeAvatar::isEventIdHaveReward(this, event_config_ptr->avatar_id, v8) )
    {
      result = 0LL;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->furniture_suit_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event_config_ptr->furniture_suit_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&event_config_ptr->furniture_suit_id);
      }
      if ( !HomeAvatar::isEventFurinitureSuitArrange(this, event_config_ptr->furniture_suit_id) )
      {
        result = 0LL;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->condition_param1 >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)event_config_ptr + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event_config_ptr->condition_param1 >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&event_config_ptr->condition_param1);
        }
        condition_param1 = event_config_ptr->condition_param1;
        if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->condition_type1 >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&event_config_ptr->condition_type1 >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&event_config_ptr->condition_type1);
        }
        condition_type1 = event_config_ptr->condition_type1;
        if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->avatar_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&event_config_ptr->avatar_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&event_config_ptr->avatar_id);
        }
        if ( !HomeAvatar::isEventConditionRight(this, event_config_ptr->avatar_id, condition_type1, condition_param1) )
        {
          result = 0LL;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->condition_param2 >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)event_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event_config_ptr->condition_param2 >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4(&event_config_ptr->condition_param2);
          }
          condition_param2 = event_config_ptr->condition_param2;
          if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->condition_type2 >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&event_config_ptr->condition_type2 >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&event_config_ptr->condition_type2);
          }
          condition_type2 = event_config_ptr->condition_type2;
          if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->avatar_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&event_config_ptr->avatar_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&event_config_ptr->avatar_id);
          }
          result = HomeAvatar::isEventConditionRight(
                     this,
                     event_config_ptr->avatar_id,
                     condition_type2,
                     condition_param2);
        }
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/home/home_avatar.cpp",
      "isEventCanReward",
      338);
    v6 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           &v14,
           (const char (*)[53])"findHomeWorldEventExcelConfig return null. event_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = 0LL;
  }
  if ( v15 == (char *)v3 )
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

// Line 362: range 0000000016C6DA70-0000000016C6E940
__int64 __fastcall HomeAvatar::getEventReward(
        HomeAvatar *const this,
        uint32_t event_id,
        std::vector<ItemParam> *display_item_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,HomeRewardEventData> >::pointer v9; // rdx
  uint32_t *p_event_id; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rbx
  std::_Rb_tree_iterator<std::pair<unsigned int const,HomeRewardEventData> >::pointer v14; // rax
  PlayerItemComp *ItemComp; // rcx
  HomeAvatarData *v16; // r8
  std::__detail::_Node_iterator<std::pair<unsigned int const,HomeAvatarData>,false,false>::pointer v17; // rax
  std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData> > >::iterator v18; // rax
  PlayerItemComp *p_reward_id; // rdi
  common::milog::MiLogStream *v20; // rax
  bool v21; // r14
  common::milog::MiLogStream *v22; // rax
  PlayerWatcherComp *WatcherComp; // rcx
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeEventReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeEventReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeEventReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeEventReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // r14
  Home *v29; // rax
  uint32_t CurModuleId; // eax
  Player *player; // r14
  std::string v32; // [rsp+0h] [rbp-260h]
  std::initializer_list<unsigned int> __l; // [rsp+38h] [rbp-228h] BYREF
  const data::HomeWorldEventExcelConfig *event_config_ptr; // [rsp+48h] [rbp-218h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+50h] [rbp-210h] BYREF
  std::shared_ptr<google::protobuf::Message> v37; // [rsp+60h] [rbp-200h] BYREF
  std::vector<unsigned int> reward_id_vec; // [rsp+70h] [rbp-1F0h] BYREF
  common::milog::MiLogStream v39; // [rsp+90h] [rbp-1D0h] BYREF
  char v40[432]; // [rsp+B0h] [rbp-1B0h] BYREF

  *(&v32._anon_0._M_allocated_capacity + 1) = (std::string::size_type)display_item_vec;
  v3 = (unsigned __int64)v40;
  v32._M_string_length = (std::string::size_type)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 1 10 holder:426 64 4 12 event_id:361 80 8 13 data_iter:394 112 16 11 log_ptr:427 144 16 12 "
                        "home_ptr:432 176 24 10 reason:386 240 104 15 avatar_data:397";
  *(_QWORD *)(v3 + 16) = HomeAvatar::getEventReward;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = -218959360;
  v5[536862727] = 62194;
  v5[536862730] = -218103808;
  v5[536862731] = -202116109;
  *(_DWORD *)(v3 + 64) = event_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v37);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37);
  event_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldEventExcelConfig(
                       &v6->design_config.txt_config_mgr.home_config_mgr,
                       *(_DWORD *)(v3 + 64));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v37);
  if ( event_config_ptr )
  {
    if ( !HomeAvatar::isEventCanReward(this, *(_DWORD *)(v3 + 64), event_config_ptr) )
    {
      result = 9763LL;
    }
    else if ( std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData>>>::empty(&this->reward_event_id_map_) )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/home/home_avatar.cpp",
        "getEventReward",
        377);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        &v39,
        (const char (*)[30])"reward_event_id_map_ is empty");
      common::milog::MiLogStream::~MiLogStream(&v39);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      __l._M_len = (std::initializer_list<unsigned int>::size_type)std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData>>>::begin(&this->reward_event_id_map_)._M_node;
      v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeRewardEventData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeRewardEventData> > *const)&__l._M_len);
      p_event_id = &v9->second.event_id;
      if ( *(_BYTE *)(((unsigned __int64)p_event_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_event_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_event_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_event_id);
      }
      if ( v9->second.event_id == *(_DWORD *)(v3 + 64) )
      {
        ActionReason::ActionReason(
          (ActionReason *const)(v3 + 176),
          ACTION_REASON_HOME_EVENT_REWARD,
          ITEM_LIMIT_HOME_EVENT_REWARD);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        ItemComp = Player::getItemComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&event_config_ptr->reward_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&event_config_ptr->reward_id);
        }
        HIDWORD(__l._M_array) = PlayerItemComp::checkGrantReward(
                                  ItemComp,
                                  event_config_ptr->reward_id,
                                  (const ActionReason *)(v3 + 176));
        if ( HIDWORD(__l._M_array) )
        {
          common::milog::MiLogStream::create(
            &v39,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/home/home_avatar.cpp",
            "getEventReward",
            390);
          common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            &v39,
            (const char (*)[23])"checkGrantReward fails");
          common::milog::MiLogStream::~MiLogStream(&v39);
          result = HIDWORD(__l._M_array);
        }
        else
        {
          *(std::unordered_map<unsigned int,HomeAvatarData>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,HomeAvatarData>::find(
                                                                                      &this->avatar_data_map_,
                                                                                      &event_config_ptr->avatar_id);
          __l._M_len = (std::initializer_list<unsigned int>::size_type)std::unordered_map<unsigned int,HomeAvatarData>::end(&this->avatar_data_map_)._M_cur;
          if ( std::__detail::operator==<std::pair<unsigned int const,HomeAvatarData>,false>(
                 (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeAvatarData>,false> *)(v3 + 80),
                 (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeAvatarData>,false> *)&__l._M_len) )
          {
            HomeAvatarData::HomeAvatarData((HomeAvatarData *const)(v3 + 240));
            if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->avatar_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&event_config_ptr->avatar_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&event_config_ptr->avatar_id);
            }
            *(_DWORD *)(v3 + 240) = event_config_ptr->avatar_id;
            std::set<unsigned int>::insert(
              (std::set<unsigned int> *const)(v3 + 296),
              (const std::set<unsigned int>::value_type *)(v3 + 64));
            std::unordered_map<unsigned int,HomeAvatarData>::emplace<unsigned int const&,HomeAvatarData&>(
              &this->avatar_data_map_,
              &event_config_ptr->avatar_id,
              (HomeAvatarData *)(v3 + 240),
              (const unsigned int *)&this->avatar_data_map_,
              v16);
            HomeAvatarData::~HomeAvatarData((HomeAvatarData *const)(v3 + 240));
          }
          else
          {
            v17 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeAvatarData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,HomeAvatarData>,false,false> *const)(v3 + 80));
            std::set<unsigned int>::insert(
              &v17->second.event_id_set,
              (const std::set<unsigned int>::value_type *)(v3 + 64));
          }
          v18._M_node = std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData>>>::begin(&this->reward_event_id_map_)._M_node;
          std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData>>>::erase[abi:cxx11](
            &this->reward_event_id_map_,
            v18);
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          p_reward_id = Player::getItemComp(this->player_);
          if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&event_config_ptr->reward_id >> 3) + 0x7FFF8000) <= 3 )
          {
            p_reward_id = (PlayerItemComp *)&event_config_ptr->reward_id;
            __asan_report_load4(&event_config_ptr->reward_id);
          }
          if ( PlayerItemComp::grantReward(
                 p_reward_id,
                 event_config_ptr->reward_id,
                 (const ActionReason *)(v3 + 176),
                 0LL) )
          {
            common::milog::MiLogStream::create(
              &v39,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/home/home_avatar.cpp",
              "getEventReward",
              410);
            v20 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    &v39,
                    (const char (*)[19])"grantReward fails:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &event_config_ptr->reward_id);
            common::milog::MiLogStream::~MiLogStream(&v39);
          }
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v32._anon_0._M_allocated_capacity = (std::string::size_type)Player::getItemComp(this->player_);
          if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&event_config_ptr->reward_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&event_config_ptr->reward_id);
          }
          LODWORD(__l._M_array) = event_config_ptr->reward_id;
          std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v3 + 48));
          std::vector<unsigned int>::vector(
            &reward_id_vec,
            (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
            (const std::vector<unsigned int>::allocator_type *)(v3 + 48));
          v21 = PlayerItemComp::getItemParamVecByRewardIdVec(
                  (const PlayerItemComp *const)v32._anon_0._M_allocated_capacity,
                  &reward_id_vec,
                  *((std::vector<ItemParam> **)&v32._anon_0._M_allocated_capacity + 1)) != 0;
          std::vector<unsigned int>::~vector(&reward_id_vec);
          std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v3 + 48));
          if ( v21 )
          {
            common::milog::MiLogStream::create(
              &v39,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/home/home_avatar.cpp",
              "getEventReward",
              415);
            v22 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                    &v39,
                    (const char (*)[48])"getItemParamVecByRewardIdVec failed, reward_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &event_config_ptr->reward_id);
            common::milog::MiLogStream::~MiLogStream(&v39);
          }
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          WatcherComp = Player::getWatcherComp(this->player_);
          if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->avatar_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&event_config_ptr->avatar_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&event_config_ptr->avatar_id);
          }
          PlayerWatcherComp::triggerHomeAvatarRewardGet(WatcherComp, event_config_ptr->avatar_id);
          HomeAvatar::notifyHomeAvatarEventData(this);
          HomeAvatar::notifyHomeFinishEventData(this);
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          BasicComp = Player::getBasicComp(this->player_);
          PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v39, BasicComp);
          StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xCC6u, v32);
          std::string::~string(&v39);
          common::tools::perf::make_shared<proto_log::PlayerLogBodyHomeEventReward>();
          v25 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeEventReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeEventReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
          if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->avatar_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&event_config_ptr->avatar_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&event_config_ptr->avatar_id);
          }
          proto_log::PlayerLogBodyHomeEventReward::set_avatar_id(v25, event_config_ptr->avatar_id);
          v26 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeEventReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeEventReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
          if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->furniture_suit_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)event_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event_config_ptr->furniture_suit_id >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4(&event_config_ptr->furniture_suit_id);
          }
          proto_log::PlayerLogBodyHomeEventReward::set_suite_id(v26, event_config_ptr->furniture_suit_id);
          v27 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeEventReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeEventReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
          if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&event_config_ptr->reward_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&event_config_ptr->reward_id);
          }
          proto_log::PlayerLogBodyHomeEventReward::set_reward_id(v27, event_config_ptr->reward_id);
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Player::getHomeComp(this->player_);
          PlayerHomeComp::findMyHome((const PlayerHomeComp *const)(v3 + 144));
          if ( std::operator!=<Home>((const std::shared_ptr<Home> *)(v3 + 144), 0LL) )
          {
            v28 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeEventReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeEventReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
            v29 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
            CurModuleId = Home::getCurModuleId(v29);
            proto_log::PlayerLogBodyHomeEventReward::set_module_id(v28, CurModuleId);
          }
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          player = this->player_;
          std::shared_ptr<google::protobuf::Message>::shared_ptr(&v37, 0LL);
          std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyHomeEventReward,void>(
            &p_body_ptr,
            (const std::shared_ptr<proto_log::PlayerLogBodyHomeEventReward> *)(v3 + 112));
          Player::printStatLog(player, &p_body_ptr, &v37, 0xEu);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v37);
          std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v3 + 144));
          std::shared_ptr<proto_log::PlayerLogBodyHomeEventReward>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyHomeEventReward> *const)(v3 + 112));
          StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
          result = 0LL;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v39,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/home/home_avatar.cpp",
          "getEventReward",
          382);
        v11 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                &v39,
                (const char (*)[17])"client event_id:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v3 + 64));
        v13 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v12, (const char (*)[36])off_25F17160);
        __l._M_len = (std::initializer_list<unsigned int>::size_type)std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData>>>::begin(&this->reward_event_id_map_)._M_node;
        v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeRewardEventData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeRewardEventData> > *const)&__l._M_len);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &v14->second.event_id);
        common::milog::MiLogStream::~MiLogStream(&v39);
        result = 0xFFFFFFFFLL;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/home/home_avatar.cpp",
      "getEventReward",
      366);
    v7 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           &v39,
           (const char (*)[53])"findHomeWorldEventExcelConfig return null. event_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v39);
    result = 0xFFFFFFFFLL;
  }
  if ( v32._M_string_length == v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
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
  }
  return result;
};

// Line 443: range 0000000016C6E942-0000000016C6F345
__int64 __fastcall HomeAvatar::isEventCanSummon(
        const HomeAvatar *const this,
        uint32_t avatar_id,
        uint32_t suit_id,
        uint32_t *event_id)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  unsigned int *v13; // rax
  uint32_t *v14; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  __int64 v17; // rdx
  uint32_t condition_param1; // ecx
  data::HomeAvatarEventCondType condition_type1; // edx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  uint32_t condition_param2; // ecx
  data::HomeAvatarEventCondType condition_type2; // edx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  uint32_t conf_event_id; // [rsp+24h] [rbp-DCh]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-D8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-D0h] BYREF
  const std::vector<unsigned int> *event_id_vec_ptr; // [rsp+38h] [rbp-C8h]
  const std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-C0h]
  const data::HomeWorldEventExcelConfig *event_config_ptr; // [rsp+48h] [rbp-B8h]
  std::shared_ptr<Config> v42; // [rsp+50h] [rbp-B0h] BYREF
  common::milog::MiLogStream v43; // [rsp+60h] [rbp-A0h] BYREF
  char v44[128]; // [rsp+80h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 13 avatar_id:442 64 4 11 suit_id:442";
  *(_QWORD *)(v4 + 16) = HomeAvatar::isEventCanSummon;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 48) = avatar_id;
  *(_DWORD *)(v4 + 64) = suit_id;
  if ( !HomeAvatar::isAvatarInHome(this, *(_DWORD *)(v4 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/home/home_avatar.cpp",
      "isEventCanSummon",
      446);
    v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v43,
           (const char (*)[35])"avatar not show in home avatar_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v43);
    result = 0LL;
  }
  else if ( !HomeAvatar::isEventFurinitureSuitArrange(this, *(_DWORD *)(v4 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/home/home_avatar.cpp",
      "isEventCanSummon",
      451);
    v9 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v43,
           (const char (*)[42])"furniture suite not show in home suit_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v43);
    result = 0LL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v42);
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42);
    event_id_vec_ptr = HomeWorldExcelConfigMgr::findSummonEventIdVecByAvatarId(
                         &v10->design_config.txt_config_mgr.home_config_mgr,
                         *(_DWORD *)(v4 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v42);
    if ( event_id_vec_ptr )
    {
      __for_range = event_id_vec_ptr;
      __for_begin._M_current = std::vector<unsigned int>::begin(event_id_vec_ptr)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(event_id_vec_ptr)._M_current;
      while ( 1 )
      {
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          common::milog::MiLogStream::create(
            &v43,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/home/home_avatar.cpp",
            "isEventCanSummon",
            485);
          v30 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v43, (const char (*)[11])"avatar_id:");
          v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v30,
                  (const unsigned int *)(v4 + 48));
          v32 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v31, (const char (*)[10])" suit_id:");
          v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v32,
                  (const unsigned int *)(v4 + 64));
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            v33,
            (const char (*)[33])" can not find event_id in config");
          common::milog::MiLogStream::~MiLogStream(&v43);
          result = 0LL;
          goto LABEL_40;
        }
        v13 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        v14 = v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        conf_event_id = *v14;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v42);
        v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42);
        event_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldEventExcelConfig(
                             &v15->design_config.txt_config_mgr.home_config_mgr,
                             conf_event_id);
        std::shared_ptr<Config>::~shared_ptr(&v42);
        if ( !event_config_ptr )
        {
          common::milog::MiLogStream::create(
            &v43,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/home/home_avatar.cpp",
            "isEventCanSummon",
            466);
          v16 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                  &v43,
                  (const char (*)[53])"findHomeWorldEventExcelConfig return null. event_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, event_id);
          common::milog::MiLogStream::~MiLogStream(&v43);
          result = 0LL;
          goto LABEL_40;
        }
        if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->furniture_suit_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)event_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event_config_ptr->furniture_suit_id >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&event_config_ptr->furniture_suit_id);
        }
        if ( event_config_ptr->furniture_suit_id == *(_DWORD *)(v4 + 64) )
          break;
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      v17 = (*(_BYTE *)(((unsigned __int64)event_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)event_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)event_id >> 3) + 0x7FFF8000));
      if ( (_BYTE)v17 )
        __asan_report_store4(event_id, ((unsigned __int8)event_id & 7u) + 3, v17);
      *event_id = conf_event_id;
      if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->condition_param1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event_config_ptr + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event_config_ptr->condition_param1 >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&event_config_ptr->condition_param1);
      }
      condition_param1 = event_config_ptr->condition_param1;
      if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->condition_type1 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event_config_ptr->condition_type1 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event_config_ptr->condition_type1);
      }
      condition_type1 = event_config_ptr->condition_type1;
      if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->avatar_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event_config_ptr->avatar_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event_config_ptr->avatar_id);
      }
      if ( !HomeAvatar::isEventConditionRight(this, event_config_ptr->avatar_id, condition_type1, condition_param1) )
      {
        common::milog::MiLogStream::create(
          &v43,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/home/home_avatar.cpp",
          "isEventCanSummon",
          474);
        v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v43, (const char (*)[11])"avatar_id:");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                (const unsigned int *)(v4 + 48));
        v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v21, (const char (*)[11])" event_id:");
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, event_id);
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          v23,
          (const char (*)[27])" condition1 is not satisfy");
        common::milog::MiLogStream::~MiLogStream(&v43);
        result = 0LL;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->condition_param2 >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)event_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event_config_ptr->condition_param2 >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&event_config_ptr->condition_param2);
        }
        condition_param2 = event_config_ptr->condition_param2;
        if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->condition_type2 >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&event_config_ptr->condition_type2 >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&event_config_ptr->condition_type2);
        }
        condition_type2 = event_config_ptr->condition_type2;
        if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->avatar_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&event_config_ptr->avatar_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&event_config_ptr->avatar_id);
        }
        if ( !HomeAvatar::isEventConditionRight(this, event_config_ptr->avatar_id, condition_type2, condition_param2) )
        {
          common::milog::MiLogStream::create(
            &v43,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/home/home_avatar.cpp",
            "isEventCanSummon",
            479);
          v26 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v43, (const char (*)[11])"avatar_id:");
          v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v26,
                  (const unsigned int *)(v4 + 48));
          v28 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v27, (const char (*)[11])" event_id:");
          v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, event_id);
          common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            v29,
            (const char (*)[27])" condition2 is not satisfy");
          common::milog::MiLogStream::~MiLogStream(&v43);
          result = 0LL;
        }
        else
        {
          result = 1LL;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v43,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/home/home_avatar.cpp",
        "isEventCanSummon",
        458);
      v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v43, (const char (*)[11])"avatar_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v12, (const char (*)[22])" have no summon event");
      common::milog::MiLogStream::~MiLogStream(&v43);
      result = 0LL;
    }
  }
LABEL_40:
  if ( v44 == (char *)v4 )
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
  return result;
};

// Line 490: range 0000000016C6F346-0000000016C6F548
void __cdecl HomeAvatar::recordAndNotifySummonEvent(HomeAvatar *const this, uint32_t event_id, uint32_t guid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  Home *v6; // rax
  Home *v7; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-90h] BYREF
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 home_ptr:491";
  *(_QWORD *)(v3 + 16) = HomeAvatar::recordAndNotifySummonEvent;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getHomeComp(this->player_);
  PlayerHomeComp::findMyHome((const PlayerHomeComp *const)(v3 + 32));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/home/home_avatar.cpp",
      "recordAndNotifySummonEvent",
      494);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(&v9, (const char (*)[35])off_25F17620);
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    v6 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    Home::updateSummonEventInfo(v6, event_id, guid);
    v7 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    Home::notifyHomeSummonEventToAllPlayer(v7);
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v3 + 32));
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 503: range 0000000016C6F54A-0000000016C6F740
void __cdecl HomeAvatar::summonEventFinish(HomeAvatar *const this, uint32_t event_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  Home *v5; // rax
  Home *v6; // rax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-90h] BYREF
  char v8[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 home_ptr:504";
  *(_QWORD *)(v2 + 16) = HomeAvatar::summonEventFinish;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getHomeComp(this->player_);
  PlayerHomeComp::findMyHome((const PlayerHomeComp *const)(v2 + 32));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/home/home_avatar.cpp",
      "summonEventFinish",
      507);
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(&v7, (const char (*)[42])off_25F176E0);
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  else
  {
    v5 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Home::summonEventFinish(v5, event_id);
    v6 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Home::notifyHomeSummonEventToAllPlayer(v6);
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v2 + 32));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 516: range 0000000016C6F742-0000000016C6FB77
void __fastcall HomeAvatar::notifyHomeAvatarCostumeChange(
        HomeAvatar *const this,
        uint32_t avatar_id,
        uint32_t costume_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerHomeComp *HomeComp; // rax
  PlayerHomeComp *v7; // rax
  Home *v8; // rax
  unsigned int *v9; // r8
  HomeModuleData *v10; // rax
  Home *v11; // rax
  Home *v12; // rax
  HomeSceneComp *SceneComp; // rax
  char v15[320]; // [rsp+10h] [rbp-140h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 13 avatar_id:515 64 4 14 costume_id:515 80 16 12 home_ptr:517 112 16 23 cur_module_data_p"
                        "tr:525 144 32 10 notify:533 208 48 22 avatar_costume_map:528";
  *(_QWORD *)(v3 + 16) = HomeAvatar::notifyHomeAvatarCostumeChange;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = -219021312;
  v5[536862726] = 62194;
  v5[536862728] = -202116109;
  *(_DWORD *)(v3 + 48) = avatar_id;
  *(_DWORD *)(v3 + 64) = costume_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getHomeComp(this->player_);
  PlayerHomeComp::findMyHome((const PlayerHomeComp *const)(v3 + 80));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v3 + 80), 0LL) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    HomeComp = Player::getHomeComp(this->player_);
    PlayerHomeComp::modifySnapShotAvatarCostume(HomeComp, *(_DWORD *)(v3 + 48), *(_DWORD *)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v7 = Player::getHomeComp(this->player_);
    PlayerHomeComp::sendHomeMarkPointNotify(v7);
  }
  else
  {
    v8 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
    Home::getSceneComp(v8);
    HomeSceneComp::getCurHomeModuleData((HomeSceneComp *const)(v3 + 112));
    if ( std::operator!=<HomeModuleData>((const std::shared_ptr<HomeModuleData> *)(v3 + 112), 0LL) )
    {
      std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 208));
      std::map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int &>(
        (std::map<unsigned int,unsigned int> *const)(v3 + 208),
        (unsigned int *)(v3 + 48),
        (unsigned int *)(v3 + 64),
        (unsigned int *)(v3 + 48),
        v9);
      v10 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
      HomeModuleData::modifyHomeAvatarCostume(v10, (const std::map<unsigned int,unsigned int> *)(v3 + 208));
      std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 208));
    }
    proto::HomeAvatarCostumeChangeNotify::HomeAvatarCostumeChangeNotify((proto::HomeAvatarCostumeChangeNotify *const)(v3 + 144));
    proto::HomeAvatarCostumeChangeNotify::set_avatar_id(
      (proto::HomeAvatarCostumeChangeNotify *const)(v3 + 144),
      *(_DWORD *)(v3 + 48));
    proto::HomeAvatarCostumeChangeNotify::set_costume_id(
      (proto::HomeAvatarCostumeChangeNotify *const)(v3 + 144),
      *(_DWORD *)(v3 + 64));
    v11 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
    Home::notifyAllPlayer<proto::HomeAvatarCostumeChangeNotify>(
      v11,
      (const proto::HomeAvatarCostumeChangeNotify *)(v3 + 144),
      0);
    v12 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
    SceneComp = Home::getSceneComp(v12);
    HomeSceneComp::sendAllPlayerHomeMarkPointNotify(SceneComp);
    proto::HomeAvatarCostumeChangeNotify::~HomeAvatarCostumeChangeNotify((proto::HomeAvatarCostumeChangeNotify *const)(v3 + 144));
    std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v3 + 112));
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v3 + 80));
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 542: range 0000000016C6FB78-0000000016C6FC69
void __cdecl HomeAvatar::homeAvatarShownIn(HomeAvatar *const this)
{
  unsigned int *v1; // rax
  uint32_t *v2; // rdx
  PlayerWatcherComp *WatcherComp; // rax
  uint32_t avatar_id; // [rsp+14h] [rbp-1Ch]
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-18h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-10h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-8h]

  __for_range = &this->show_avatar_id_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->show_avatar_id_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->show_avatar_id_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v1 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v2 = v1;
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v1);
    }
    avatar_id = *v2;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    WatcherComp = Player::getWatcherComp(this->player_);
    PlayerWatcherComp::triggerAvatarShowInHome(WatcherComp, avatar_id);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
};

// Line 550: range 0000000016C6FC6A-0000000016C701AD
uint32_t __cdecl HomeAvatar::getSuiteGuidCanSummonAvatar(HomeAvatar *const this, uint32_t suite_id)
{
  uint32_t v2; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  Home *v6; // rax
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  int v9; // r15d
  HomeModuleData *v10; // rax
  PlayerHomeComp *HomeComp; // rax
  proto::HomeSnapshotBin *HomeSnapshot; // rax
  uint32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-124h] BYREF
  uint32_t guid; // [rsp+30h] [rbp-120h]
  uint32_t cur_module_id; // [rsp+34h] [rbp-11Ch]
  google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::const_iterator __for_begin; // [rsp+38h] [rbp-118h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::const_iterator __for_end; // [rsp+40h] [rbp-110h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeSceneSnapshotBin>::const_iterator __for_begin_0; // [rsp+48h] [rbp-108h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeSceneSnapshotBin>::const_iterator __for_end_0; // [rsp+50h] [rbp-100h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeFurnitureSuiteBin>::const_iterator __for_begin_1; // [rsp+58h] [rbp-F8h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeFurnitureSuiteBin>::const_iterator __for_end_1; // [rsp+60h] [rbp-F0h] BYREF
  const proto::HomeSceneCompSnapshotBin *scene_comp_bin; // [rsp+68h] [rbp-E8h]
  const google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin> *__for_range; // [rsp+70h] [rbp-E0h]
  const proto::HomeModuleSnapshotBin *module_bin; // [rsp+78h] [rbp-D8h]
  const google::protobuf::RepeatedPtrField<proto::HomeSceneSnapshotBin> *__for_range_0; // [rsp+80h] [rbp-D0h]
  const proto::HomeSceneSnapshotBin *scene_bin; // [rsp+88h] [rbp-C8h]
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureSuiteBin> *__for_range_1; // [rsp+90h] [rbp-C0h]
  const proto::HomeFurnitureSuiteBin *suit_bin; // [rsp+98h] [rbp-B8h]
  common::milog::MiLogStream v30; // [rsp+A0h] [rbp-B0h] BYREF
  char v31[144]; // [rsp+C0h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 12 home_ptr:552 64 16 23 cur_module_data_ptr:555";
  *(_QWORD *)(v3 + 16) = HomeAvatar::getSuiteGuidCanSummonAvatar;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  guid = 0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getHomeComp(this->player_);
  PlayerHomeComp::findMyHome((const PlayerHomeComp *const)(v3 + 32));
  if ( !std::operator!=<Home>((const std::shared_ptr<Home> *)(v3 + 32), 0LL) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    HomeComp = Player::getHomeComp(this->player_);
    HomeSnapshot = PlayerHomeComp::getHomeSnapshot(HomeComp);
    scene_comp_bin = proto::HomeSnapshotBin::mutable_scene_snapshot(HomeSnapshot);
    cur_module_id = proto::HomeSceneCompSnapshotBin::cur_module_id(scene_comp_bin);
    __for_range = proto::HomeSceneCompSnapshotBin::module_bin_list(scene_comp_bin);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleSnapshotBin const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      module_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleSnapshotBin const>::operator*(&__for_begin);
      if ( cur_module_id == proto::HomeModuleSnapshotBin::module_id(module_bin) )
      {
        __for_range_0 = proto::HomeModuleSnapshotBin::scene_bin_list(module_bin);
        __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeSceneSnapshotBin>::begin(__for_range_0).it_;
        __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeSceneSnapshotBin>::end(__for_range_0).it_;
        while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeSceneSnapshotBin const>::operator!=(
                  &__for_begin_0,
                  &__for_end_0) )
        {
          scene_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeSceneSnapshotBin const>::operator*(&__for_begin_0);
          __for_range_1 = proto::HomeSceneSnapshotBin::furniture_suite_list(scene_bin);
          __for_begin_1.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureSuiteBin>::begin(__for_range_1).it_;
          __for_end_1.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureSuiteBin>::end(__for_range_1).it_;
          while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureSuiteBin const>::operator!=(
                    &__for_begin_1,
                    &__for_end_1) )
          {
            suit_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureSuiteBin const>::operator*(&__for_begin_1);
            if ( suite_id == proto::HomeFurnitureSuiteBin::suite_id(suit_bin) )
            {
              guid = proto::HomeFurnitureSuiteBin::guid(suit_bin);
              if ( proto::HomeFurnitureSuiteBin::is_allow_summon(suit_bin) )
              {
                v2 = guid;
                goto LABEL_28;
              }
            }
            google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureSuiteBin const>::operator++(&__for_begin_1);
          }
          google::protobuf::internal::RepeatedPtrIterator<proto::HomeSceneSnapshotBin const>::operator++(&__for_begin_0);
        }
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleSnapshotBin const>::operator++(&__for_begin);
    }
    goto LABEL_27;
  }
  v6 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  Home::getSceneComp(v6);
  HomeSceneComp::getCurHomeModuleData((HomeSceneComp *const)(v3 + 64));
  if ( std::operator==<HomeModuleData>((const std::shared_ptr<HomeModuleData> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/home/home_avatar.cpp",
      "getSuiteGuidCanSummonAvatar",
      558);
    v7 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v30,
           (const char (*)[46])"getCurHomeModuleData() return null. home_uid:");
    v8 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    val = Home::getHomeUid(v8);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v30);
    v2 = 0;
    v9 = 0;
  }
  else
  {
    v10 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    guid = HomeModuleData::getFurnitureSuiteGuidCanSummonAvatar(v10, suite_id);
    v9 = 1;
  }
  std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v3 + 64));
  if ( v9 == 1 )
LABEL_27:
    v2 = guid;
LABEL_28:
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v3 + 32));
  result = v2;
  if ( v31 == (char *)v3 )
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

// Line 597: range 0000000016C701AE-0000000016C70649
void __cdecl HomeAvatar::updateAllHomeAvatarCostumeInfo(HomeAvatar *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::_Rb_tree_const_iterator<unsigned int>::reference v4; // rax
  _DWORD *v5; // rdx
  uint32_t AvatarComp; // eax
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned int *v9; // r8
  Home *v10; // rax
  HomeModuleData *v11; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-148h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-140h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-138h]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-130h] BYREF
  char v16[272]; // [rsp+50h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 48 4 13 avatar_id:599 64 4 14 costume_id:608 80 16 12 home_ptr:612 112 16 23 cur_module_data_p"
                        "tr:615 144 48 22 avatar_costume_map:598";
  *(_QWORD *)(v1 + 16) = HomeAvatar::updateAllHomeAvatarCostumeInfo;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = 61956;
  v3[536862723] = 62194;
  v3[536862724] = 62194;
  v3[536862726] = -202116109;
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v1 + 144));
  __for_range = &this->show_avatar_id_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->show_avatar_id_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->show_avatar_id_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v4 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    *(_DWORD *)(v1 + 48) = *v5;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    AvatarComp = (unsigned int)Player::getAvatarComp(this->player_);
    PlayerAvatarComp::findFormalAvatarByAvatarId((const PlayerAvatarComp *const)(v1 + 112), AvatarComp);
    if ( std::operator==<FormalAvatar>((const std::shared_ptr<FormalAvatar> *)(v1 + 112), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/home/home_avatar.cpp",
        "updateAllHomeAvatarCostumeInfo",
        604);
      v7 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
             &v15,
             (const char (*)[57])".findFormalAvatarByAvatarId() return nullptr. avatar_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
    else
    {
      v8 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 112));
      *(_DWORD *)(v1 + 64) = Avatar::getCostumeId(v8);
      std::map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int &>(
        (std::map<unsigned int,unsigned int> *const)(v1 + 144),
        (unsigned int *)(v1 + 48),
        (unsigned int *)(v1 + 64),
        (unsigned int *)(v1 + 48),
        v9);
    }
    std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v1 + 112));
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getHomeComp(this->player_);
  PlayerHomeComp::findMyHome((const PlayerHomeComp *const)(v1 + 80));
  if ( std::operator!=<Home>((const std::shared_ptr<Home> *)(v1 + 80), 0LL) )
  {
    v10 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
    Home::getSceneComp(v10);
    HomeSceneComp::getCurHomeModuleData((HomeSceneComp *const)(v1 + 112));
    if ( std::operator!=<HomeModuleData>((const std::shared_ptr<HomeModuleData> *)(v1 + 112), 0LL) )
    {
      v11 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 112));
      HomeModuleData::modifyHomeAvatarCostume(v11, (const std::map<unsigned int,unsigned int> *)(v1 + 144));
    }
    std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v1 + 112));
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v1 + 80));
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v1 + 144));
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 624: range 0000000016C7064A-0000000016C70B62
bool __cdecl HomeAvatar::isEventFurinitureSuitArrange(const HomeAvatar *const this, uint32_t suit_id)
{
  bool v2; // r15
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  Home *v6; // rax
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  int v9; // r14d
  std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  PlayerHomeComp *HomeComp; // rax
  proto::HomeSnapshotBin *HomeSnapshot; // rax
  bool result; // al
  unsigned int val; // [rsp+20h] [rbp-120h] BYREF
  uint32_t cur_module_id; // [rsp+24h] [rbp-11Ch]
  google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::const_iterator __for_begin; // [rsp+28h] [rbp-118h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::const_iterator __for_end; // [rsp+30h] [rbp-110h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeSceneSnapshotBin>::const_iterator __for_begin_0; // [rsp+38h] [rbp-108h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeSceneSnapshotBin>::const_iterator __for_end_0; // [rsp+40h] [rbp-100h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeFurnitureSuiteBin>::const_iterator __for_begin_1; // [rsp+48h] [rbp-F8h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeFurnitureSuiteBin>::const_iterator __for_end_1; // [rsp+50h] [rbp-F0h] BYREF
  const proto::HomeSceneCompSnapshotBin *scene_comp_bin; // [rsp+58h] [rbp-E8h]
  const google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin> *__for_range; // [rsp+60h] [rbp-E0h]
  const proto::HomeModuleSnapshotBin *module_bin; // [rsp+68h] [rbp-D8h]
  const google::protobuf::RepeatedPtrField<proto::HomeSceneSnapshotBin> *__for_range_0; // [rsp+70h] [rbp-D0h]
  const proto::HomeSceneSnapshotBin *scene_bin; // [rsp+78h] [rbp-C8h]
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureSuiteBin> *__for_range_1; // [rsp+80h] [rbp-C0h]
  const proto::HomeFurnitureSuiteBin *suit_bin; // [rsp+88h] [rbp-B8h]
  common::milog::MiLogStream v29; // [rsp+90h] [rbp-B0h] BYREF
  char v30[144]; // [rsp+B0h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 12 home_ptr:625 64 16 23 cur_module_data_ptr:628";
  *(_QWORD *)(v3 + 16) = HomeAvatar::isEventFurinitureSuitArrange;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getHomeComp(this->player_);
  PlayerHomeComp::findMyHome((const PlayerHomeComp *const)(v3 + 32));
  if ( !std::operator!=<Home>((const std::shared_ptr<Home> *)(v3 + 32), 0LL) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    HomeComp = Player::getHomeComp(this->player_);
    HomeSnapshot = PlayerHomeComp::getHomeSnapshot(HomeComp);
    scene_comp_bin = proto::HomeSnapshotBin::mutable_scene_snapshot(HomeSnapshot);
    cur_module_id = proto::HomeSceneCompSnapshotBin::cur_module_id(scene_comp_bin);
    __for_range = proto::HomeSceneCompSnapshotBin::module_bin_list(scene_comp_bin);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeModuleSnapshotBin>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleSnapshotBin const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      module_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleSnapshotBin const>::operator*(&__for_begin);
      if ( cur_module_id == proto::HomeModuleSnapshotBin::module_id(module_bin) )
      {
        __for_range_0 = proto::HomeModuleSnapshotBin::scene_bin_list(module_bin);
        __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeSceneSnapshotBin>::begin(__for_range_0).it_;
        __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeSceneSnapshotBin>::end(__for_range_0).it_;
        while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeSceneSnapshotBin const>::operator!=(
                  &__for_begin_0,
                  &__for_end_0) )
        {
          scene_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeSceneSnapshotBin const>::operator*(&__for_begin_0);
          __for_range_1 = proto::HomeSceneSnapshotBin::furniture_suite_list(scene_bin);
          __for_begin_1.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureSuiteBin>::begin(__for_range_1).it_;
          __for_end_1.it_ = google::protobuf::RepeatedPtrField<proto::HomeFurnitureSuiteBin>::end(__for_range_1).it_;
          while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureSuiteBin const>::operator!=(
                    &__for_begin_1,
                    &__for_end_1) )
          {
            suit_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureSuiteBin const>::operator*(&__for_begin_1);
            if ( suit_id == proto::HomeFurnitureSuiteBin::suite_id(suit_bin) )
            {
              v2 = 1;
              goto LABEL_29;
            }
            google::protobuf::internal::RepeatedPtrIterator<proto::HomeFurnitureSuiteBin const>::operator++(&__for_begin_1);
          }
          google::protobuf::internal::RepeatedPtrIterator<proto::HomeSceneSnapshotBin const>::operator++(&__for_begin_0);
        }
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleSnapshotBin const>::operator++(&__for_begin);
    }
    goto LABEL_28;
  }
  v6 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  Home::getSceneComp(v6);
  HomeSceneComp::getCurHomeModuleData((HomeSceneComp *const)(v3 + 64));
  if ( std::operator==<HomeModuleData>((const std::shared_ptr<HomeModuleData> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/home/home_avatar.cpp",
      "isEventFurinitureSuitArrange",
      631);
    v7 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v29,
           (const char (*)[46])"getCurHomeModuleData() return null. home_uid:");
    v8 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    val = Home::getHomeUid(v8);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v29);
    v2 = 0;
    v9 = 0;
  }
  else
  {
    v10 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( HomeModuleData::isFurnitureSuitShowInModule(v10, suit_id) )
    {
      v2 = 1;
      v9 = 0;
    }
    else
    {
      v9 = 1;
    }
  }
  std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v3 + 64));
  if ( v9 == 1 )
LABEL_28:
    v2 = 0;
LABEL_29:
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v3 + 32));
  result = v2;
  if ( v30 == (char *)v3 )
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

// Line 669: range 0000000016C70B64-0000000016C70E0B
__int64 __fastcall HomeAvatar::isEventConditionRight(
        const HomeAvatar *const this,
        uint32_t avatar_id,
        int type,
        uint32_t condition_value)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  uint32_t AvatarComp; // eax
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  FetterComp *FetterComp; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  __int64 result; // rax
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+40h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 13 avatar_id:668 64 16 21 formal_avatar_ptr:670";
  *(_QWORD *)(v4 + 16) = HomeAvatar::isEventConditionRight;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  *(_DWORD *)(v4 + 48) = avatar_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = (unsigned int)Player::getAvatarComp(this->player_);
  PlayerAvatarComp::findFormalAvatarByAvatarId((const PlayerAvatarComp *const)(v4 + 64), AvatarComp);
  if ( std::operator==<FormalAvatar>((const std::shared_ptr<FormalAvatar> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/home/home_avatar.cpp",
      "isEventConditionRight",
      673);
    v8 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           &v16,
           (const char (*)[57])".findFormalAvatarByAvatarId() return nullptr. avatar_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v16);
    v9 = 0;
    goto LABEL_20;
  }
  if ( type == 2 )
  {
    v12 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    if ( condition_value > Creature::getLevel(v12) )
    {
      v9 = 0;
      goto LABEL_20;
    }
  }
  else
  {
    if ( type > 2 )
      goto LABEL_18;
    if ( !type )
    {
      v9 = 1;
      goto LABEL_20;
    }
    if ( type != 1 )
    {
LABEL_18:
      v9 = 0;
      goto LABEL_20;
    }
    v10 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    FetterComp = FormalAvatar::getFetterComp(v10);
    if ( condition_value > FetterComp::getLevel(FetterComp) )
    {
      v9 = 0;
      goto LABEL_20;
    }
  }
  v9 = 1;
LABEL_20:
  std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v4 + 64));
  result = v9;
  if ( v17 == (char *)v4 )
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
  return result;
};

// Line 706: range 0000000016C70E0C-0000000016C712B5
__int64 __fastcall HomeAvatar::recordHomeAvatarTalkIdFinish(
        HomeAvatar *const this,
        uint32_t avatar_id,
        uint32_t talk_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  HomeAvatarData *v8; // r8
  std::__detail::_Node_iterator<std::pair<unsigned int const,HomeAvatarData>,false,false>::pointer v9; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  PlayerWatcherComp *WatcherComp; // rax
  bool is_repeated_talk; // [rsp+17h] [rbp-149h]
  std::_Rb_tree_const_iterator<unsigned int>::_Self __y; // [rsp+18h] [rbp-148h] BYREF
  common::milog::MiLogStream v19; // [rsp+20h] [rbp-140h] BYREF
  char v20[288]; // [rsp+40h] [rbp-120h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 13 avatar_id:705 64 4 11 talk_id:705 80 8 13 data_iter:714 112 104 15 avatar_data:717";
  *(_QWORD *)(v3 + 16) = HomeAvatar::recordHomeAvatarTalkIdFinish;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  *(_DWORD *)(v3 + 48) = avatar_id;
  *(_DWORD *)(v3 + 64) = talk_id;
  __y._M_node = std::set<unsigned int>::end(&this->show_avatar_id_set_)._M_node;
  *(std::set<unsigned int>::iterator *)(v3 + 80) = std::set<unsigned int>::find(
                                                     &this->show_avatar_id_set_,
                                                     (const std::set<unsigned int>::key_type *)(v3 + 48));
  if ( std::operator==((const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 80), &__y) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/home/home_avatar.cpp",
      "recordHomeAvatarTalkIdFinish",
      709);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v19,
           (const char (*)[25])"avatar not show in home ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = 9762LL;
  }
  else
  {
    is_repeated_talk = 0;
    *(std::unordered_map<unsigned int,HomeAvatarData>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,HomeAvatarData>::find(
                                                                                &this->avatar_data_map_,
                                                                                (const std::unordered_map<unsigned int,HomeAvatarData>::key_type *)(v3 + 48));
    __y._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<unsigned int,HomeAvatarData>::end(&this->avatar_data_map_)._M_cur;
    if ( std::__detail::operator==<std::pair<unsigned int const,HomeAvatarData>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeAvatarData>,false> *)(v3 + 80),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeAvatarData>,false> *)&__y) )
    {
      HomeAvatarData::HomeAvatarData((HomeAvatarData *const)(v3 + 112));
      *(_DWORD *)(v3 + 112) = *(_DWORD *)(v3 + 48);
      std::set<unsigned int>::insert(
        (std::set<unsigned int> *const)(v3 + 120),
        (const std::set<unsigned int>::value_type *)(v3 + 64));
      std::unordered_map<unsigned int,HomeAvatarData>::emplace<unsigned int &,HomeAvatarData&>(
        &this->avatar_data_map_,
        (unsigned int *)(v3 + 48),
        (HomeAvatarData *)(v3 + 112),
        (unsigned int *)&this->avatar_data_map_,
        v8);
      HomeAvatarData::~HomeAvatarData((HomeAvatarData *const)(v3 + 112));
    }
    else
    {
      v9 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeAvatarData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,HomeAvatarData>,false,false> *const)(v3 + 80));
      v10 = std::set<unsigned int>::emplace<unsigned int &>(
              &v9->second.talk_id_set,
              (unsigned int *)(v3 + 64),
              (unsigned int *)&v9->second.talk_id_set);
      if ( !v10.second )
      {
        is_repeated_talk = 1;
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/home/home_avatar.cpp",
          "recordHomeAvatarTalkIdFinish",
          727);
        v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v19, (const char (*)[11])"avatar_id:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v3 + 48));
        v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])" talk_id:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v14, (const char (*)[15])" repeated talk");
        common::milog::MiLogStream::~MiLogStream(&v19);
      }
    }
    if ( !is_repeated_talk )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      WatcherComp = Player::getWatcherComp(this->player_);
      PlayerWatcherComp::triggerHomeAvatarTalk(WatcherComp, *(_DWORD *)(v3 + 48));
    }
    HomeAvatar::notifyHomeAvatarTalkData(this);
    result = 0LL;
  }
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 740: range 0000000016C712B6-0000000016C714F9
__int64 __fastcall HomeAvatar::fillHomeAvatarTalkInfo(
        HomeAvatar *const this,
        uint32_t avatar_id,
        proto::HomeAvatarTalkFinishInfo *talk_info)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int *v6; // rax
  google::protobuf::uint32 *v7; // rdx
  __int64 result; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-98h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-90h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-88h]
  char v13[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 avatar_id:739 64 8 13 data_iter:741";
  *(_QWORD *)(v3 + 16) = HomeAvatar::fillHomeAvatarTalkInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = avatar_id;
  *(std::unordered_map<unsigned int,HomeAvatarData>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,HomeAvatarData>::find(
                                                                              &this->avatar_data_map_,
                                                                              (const std::unordered_map<unsigned int,HomeAvatarData>::key_type *)(v3 + 48));
  __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<unsigned int,HomeAvatarData>::end(&this->avatar_data_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,HomeAvatarData>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeAvatarData>,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeAvatarData>,false> *)&__for_end) )
  {
    proto::HomeAvatarTalkFinishInfo::set_avatar_id(talk_info, *(_DWORD *)(v3 + 48));
    __for_range = &std::__detail::_Node_iterator<std::pair<unsigned int const,HomeAvatarData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,HomeAvatarData>,false,false> *const)(v3 + 64))->second.talk_id_set;
    __for_begin._M_node = std::set<unsigned int>::begin(__for_range)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v6 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      proto::HomeAvatarTalkFinishInfo::add_finish_talk_id_list(talk_info, *v7);
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
  }
  result = 0LL;
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

// Line 754: range 0000000016C714FA-0000000016C716F6
void __cdecl HomeAvatar::updateAvatarsAction(HomeAvatar *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  Home *v4; // rax
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-90h] BYREF
  char v6[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 12 home_ptr:755";
  *(_QWORD *)(v1 + 16) = HomeAvatar::updateAvatarsAction;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getHomeComp(this->player_);
  PlayerHomeComp::findMyHome((const PlayerHomeComp *const)(v1 + 32));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/home/home_avatar.cpp",
      "updateAvatarsAction",
      758);
    common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(&v5, (const char (*)[53])off_25F16C00);
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  else
  {
    HomeAvatar::updateAvatarsInHome(this);
    HomeAvatar::homeAvatarShownIn(this);
    HomeAvatar::notifyHomeAvatarTalkData(this);
    v4 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    Home::clearAllSummonEvent(v4);
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v1 + 32));
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 768: range 0000000016C716F8-0000000016C71865
void __cdecl HomeAvatar::updateHomeSceneRewardEventInfo(
        HomeAvatar *const this,
        const proto::HomeAvatarRewardEventNotify *notify)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  Home *v5; // rdx
  Home *v6; // rax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 home_ptr:769";
  *(_QWORD *)(v2 + 16) = HomeAvatar::updateHomeSceneRewardEventInfo;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getHomeComp(this->player_);
  PlayerHomeComp::findMyHome((const PlayerHomeComp *const)(v2 + 32));
  if ( std::operator!=<Home>((const std::shared_ptr<Home> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Home::updateRewardEventInfo(v5, notify);
    v6 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Home::notifyHomeRewardEventToAllPlayer(v6);
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v2 + 32));
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

// Line 778: range 0000000016C71866-0000000016C71A37
_BOOL8 __fastcall HomeAvatar::isEventIdHaveReward(const HomeAvatar *const this, uint32_t avatar_id, uint32_t event_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,HomeAvatarData>,false,false>::pointer v6; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,HomeAvatarData>,false,false>::pointer v7; // rax
  bool v8; // al
  _BOOL8 result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeAvatarData>,false> __y; // [rsp+18h] [rbp-98h] BYREF
  std::_Rb_tree_const_iterator<unsigned int>::_Self __x; // [rsp+20h] [rbp-90h] BYREF
  std::_Rb_tree_const_iterator<unsigned int>::_Self v13; // [rsp+28h] [rbp-88h] BYREF
  char v14[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 13 avatar_id:777 48 4 12 event_id:777 64 8 8 iter:779";
  *(_QWORD *)(v3 + 16) = HomeAvatar::isEventIdHaveReward;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 32) = avatar_id;
  *(_DWORD *)(v3 + 48) = event_id;
  *(std::unordered_map<unsigned int,HomeAvatarData>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,HomeAvatarData>::find(
                                                                                    &this->avatar_data_map_,
                                                                                    (const std::unordered_map<unsigned int,HomeAvatarData>::key_type *)(v3 + 32));
  __y._M_cur = std::unordered_map<unsigned int,HomeAvatarData>::end(&this->avatar_data_map_)._M_cur;
  v8 = 0;
  if ( std::__detail::operator!=<std::pair<unsigned int const,HomeAvatarData>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeAvatarData>,false> *)(v3 + 64),
         &__y) )
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,HomeAvatarData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,HomeAvatarData>,false,false> *const)(v3 + 64));
    v13._M_node = std::set<unsigned int>::end(&v6->second.event_id_set)._M_node;
    v7 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,HomeAvatarData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,HomeAvatarData>,false,false> *const)(v3 + 64));
    __x._M_node = std::set<unsigned int>::find(
                    &v7->second.event_id_set,
                    (const std::set<unsigned int>::key_type *)(v3 + 48))._M_node;
    if ( std::operator!=(&__x, &v13) )
      v8 = 1;
  }
  result = v8;
  if ( v14 == (char *)v3 )
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

// Line 790: range 0000000016C71A38-0000000016C71AE3
void __cdecl HomeAvatar::onAvatarLevelupEvent(HomeAvatar *const this, const AvatarLevelupEvent *event)
{
  if ( *(_BYTE *)(((unsigned __int64)&event->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->avatar_id);
  }
  if ( HomeAvatar::isAvatarInHome(this, event->avatar_id) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->avatar_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->avatar_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->avatar_id);
    }
    HomeAvatar::updateRewardEventIdMap(this, event->avatar_id);
  }
};

// Line 799: range 0000000016C71AE4-0000000016C71B9F
void __cdecl HomeAvatar::onFetterLevelUpdateEvent(HomeAvatar *const this, const FetterLevelUpdateEvent *event)
{
  if ( *(_BYTE *)(((unsigned __int64)&event->avatar_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->avatar_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->avatar_id);
  }
  if ( HomeAvatar::isAvatarInHome(this, event->avatar_id) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->avatar_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->avatar_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->avatar_id);
    }
    HomeAvatar::updateRewardEventIdMap(this, event->avatar_id);
  }
};

// Line 808: range 0000000016C71BA0-0000000016C71CD8
void __cdecl HomeAvatar::onAvatarCosumeChangeEvent(HomeAvatar *const this, const AvatarCosumeChangeEvent *event)
{
  PlayerHomeComp *HomeComp; // rax
  uint32_t costume_id; // edx

  if ( *(_BYTE *)(((unsigned __int64)&event->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->avatar_id);
  }
  if ( HomeAvatar::isAvatarInHome(this, event->avatar_id) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    HomeComp = Player::getHomeComp(this->player_);
    if ( PlayerHomeComp::isInHomeWorld(HomeComp) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->costume_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->costume_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&event->costume_id);
      }
      costume_id = event->costume_id;
      if ( *(_BYTE *)(((unsigned __int64)&event->avatar_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->avatar_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event->avatar_id);
      }
      HomeAvatar::notifyHomeAvatarCostumeChange(this, event->avatar_id, costume_id);
    }
  }
};

// Line 821: range 0000000016C71CDA-0000000016C71DE9
_BOOL8 __fastcall HomeAvatar::isAvatarInHome(const HomeAvatar *const this, uint32_t avatar_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  _BOOL8 result; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Self __x; // [rsp+10h] [rbp-70h] BYREF
  std::_Rb_tree_const_iterator<unsigned int>::_Self __y; // [rsp+18h] [rbp-68h] BYREF
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 avatar_id:820";
  *(_QWORD *)(v2 + 16) = HomeAvatar::isAvatarInHome;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = avatar_id;
  __y._M_node = std::set<unsigned int>::end(&this->show_avatar_id_set_)._M_node;
  __x._M_node = std::set<unsigned int>::find(
                  &this->show_avatar_id_set_,
                  (const std::set<unsigned int>::key_type *)(v2 + 32))._M_node;
  result = !std::operator==(&__x, &__y);
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

// Line 831: range 0000000016C71DEA-0000000016C72368
void __cdecl HomeAvatar::modifyRewardEventIdMap(HomeAvatar *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  uint32_t *p_event_id; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  HomeRewardEventData *v6; // r8
  common::milog::MiLogStream *v7; // rax
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,HomeRewardEventData> >,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData> > >::iterator __for_begin; // [rsp+18h] [rbp-148h] BYREF
  std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData> > >::iterator __for_end; // [rsp+20h] [rbp-140h] BYREF
  std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData> > > *__for_range; // [rsp+28h] [rbp-138h]
  const std::pair<unsigned int const,HomeRewardEventData> *v15; // [rsp+30h] [rbp-130h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeRewardEventData> >::type *_; // [rsp+38h] [rbp-128h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeRewardEventData> >::type *event_data; // [rsp+40h] [rbp-120h]
  const data::HomeWorldEventExcelConfig *event_config_ptr; // [rsp+48h] [rbp-118h]
  std::shared_ptr<Config> v19; // [rsp+50h] [rbp-110h] BYREF
  common::milog::MiLogStream v20; // [rsp+60h] [rbp-100h] BYREF
  common::milog::MiLogStream v21; // [rsp+80h] [rbp-E0h] BYREF
  char v22[192]; // [rsp+A0h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 12 event_id:836 48 16 18 new_event_data:844 80 48 18 tmp_reward_map:832";
  *(_QWORD *)(v1 + 16) = HomeAvatar::modifyRewardEventIdMap;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61956;
  v3[536862722] = 62194;
  v3[536862724] = -202116109;
  std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData>>>::map(
    (std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData> > > *const)(v1 + 80),
    &this->reward_event_id_map_);
  std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData>>>::clear(&this->reward_event_id_map_);
  __for_range = (std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData> > > *)(v1 + 80);
  __for_begin._M_node = std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData>>>::begin((std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData> > > *const)(v1 + 80))._M_node;
  __for_end._M_node = std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData>>>::end((std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData> > > *const)(v1 + 80))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v15 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeRewardEventData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,HomeRewardEventData>(v15);
    event_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeRewardEventData> >::type *)std::get<1ul,unsigned int const,HomeRewardEventData>(v15);
    p_event_id = &event_data->event_id;
    if ( *(_BYTE *)(((unsigned __int64)p_event_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_event_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_event_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_event_id);
    }
    *(_DWORD *)(v1 + 32) = event_data->event_id;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v19);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
    event_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldEventExcelConfig(
                         &v5->design_config.txt_config_mgr.home_config_mgr,
                         *(_DWORD *)(v1 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v19);
    if ( event_config_ptr )
    {
      *(_DWORD *)(v1 + 48) = 0;
      *(_DWORD *)(v1 + 52) = 0;
      *(_DWORD *)(v1 + 56) = 0;
      *(_DWORD *)(v1 + 60) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->order >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event_config_ptr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event_config_ptr->order >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&event_config_ptr->order);
      }
      *(_DWORD *)(v1 + 48) = event_config_ptr->order;
      if ( *(_BYTE *)(((unsigned __int64)&event_data->event_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event_data->event_id >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&event_data->event_id);
      }
      *(_DWORD *)(v1 + 52) = event_data->event_id;
      if ( *(_BYTE *)(((unsigned __int64)&event_data->random_position >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event_data->random_position >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&event_data->random_position);
      }
      *(_DWORD *)(v1 + 56) = event_data->random_position;
      if ( *(_BYTE *)(((unsigned __int64)&event_data->guid >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event_data + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event_data->guid >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(&event_data->guid);
      }
      *(_DWORD *)(v1 + 60) = event_data->guid;
      v8 = std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData>>>::emplace<unsigned int &,HomeRewardEventData&>(
             &this->reward_event_id_map_,
             (unsigned int *)(v1 + 48),
             (HomeRewardEventData *)(v1 + 48),
             (unsigned int *)&this->reward_event_id_map_,
             v6);
      if ( !v8.second )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/home/home_avatar.cpp",
          "modifyRewardEventIdMap",
          852);
        v9 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
               &v21,
               (const char (*)[47])"HomeWorldEventData order is repeated event_id:");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v1 + 32));
        v11 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])" order:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &event_config_ptr->order);
        common::milog::MiLogStream::~MiLogStream(&v21);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/home/home_avatar.cpp",
        "modifyRewardEventIdMap",
        840);
      v7 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
             &v20,
             (const char (*)[53])"findHomeWorldEventExcelConfig return null. event_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,HomeRewardEventData>>::operator++(&__for_begin);
  }
  std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData>>>::~map((std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData> > > *const)(v1 + 80));
  if ( v22 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
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

// Line 860: range 0000000016C7236A-0000000016C727D0
int32_t __cdecl HomeAvatar::updateAvatarsInHomeByGm(
        HomeAvatar *const this,
        const std::vector<unsigned int> *avatar_id_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rax
  _DWORD *v6; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  uint32_t AvatarComp; // eax
  bool v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-C0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-B8h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+20h] [rbp-B0h]
  const data::HomeWorldNPCExcelConfig *home_avatar_config_ptr; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<Config> v18; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-90h] BYREF
  char v20[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 avatar_id:862";
  *(_QWORD *)(v2 + 16) = HomeAvatar::updateAvatarsInHomeByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  std::set<unsigned int>::clear(&this->show_avatar_id_set_);
  __for_range = avatar_id_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(avatar_id_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(avatar_id_vec)._M_current;
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
    GameserverService::getConfig((GameserverService *const)&v18);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
    home_avatar_config_ptr = HomeWorldExcelConfigMgr::findHomeWorldNPCExcelConfigByAvatarId(
                               &v7->design_config.txt_config_mgr.home_config_mgr,
                               *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v18);
    if ( !home_avatar_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/home/home_avatar.cpp",
        "updateAvatarsInHomeByGm",
        867);
      v8 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
             &v19,
             (const char (*)[67])"findHomeWorldNPCExcelConfigByAvatarId() return nullptr. avatar_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v19);
      result = 9702;
      goto LABEL_16;
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    AvatarComp = (unsigned int)Player::getAvatarComp(this->player_);
    PlayerAvatarComp::findFormalAvatarByAvatarId((const PlayerAvatarComp *const)&v18, AvatarComp);
    v11 = std::operator==<FormalAvatar>((const std::shared_ptr<FormalAvatar> *)&v18, 0LL);
    std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)&v18);
    if ( v11 )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/home/home_avatar.cpp",
        "updateAvatarsInHomeByGm",
        872);
      v12 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
              &v19,
              (const char (*)[56])"findFormalAvatarByAvatarId() return nullptr. avatar_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v19);
      result = 9702;
      goto LABEL_16;
    }
    std::set<unsigned int>::insert(&this->show_avatar_id_set_, (const std::set<unsigned int>::value_type *)(v2 + 32));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v19,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/home/home_avatar.cpp",
    "updateAvatarsInHomeByGm",
    878);
  v13 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          &v19,
          (const char (*)[27])"avatars in home by GM set ");
  common::milog::MiLogStream::operator<<<unsigned int>(v13, &this->show_avatar_id_set_);
  common::milog::MiLogStream::~MiLogStream(&v19);
  result = 0;
LABEL_16:
  if ( v20 == (char *)v2 )
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

// Line 883: range 0000000016C727D2-0000000016C72C6C
__int64 __fastcall HomeAvatar::addEventInfoByGm(HomeAvatar *const this, uint32_t event_id, uint32_t guid)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  HomeRewardEventData *v9; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,HomeRewardEventData> >,bool> v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  uint32_t random_position; // [rsp+10h] [rbp-B0h]
  uint32_t guid_0; // [rsp+14h] [rbp-ACh]
  const data::HomeWorldEventExcelConfig *event_config_ptr; // [rsp+18h] [rbp-A8h]
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-A0h] BYREF
  char v19[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 event_id:882 64 16 14 event_data:895";
  *(_QWORD *)(v3 + 16) = HomeAvatar::addEventInfoByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = event_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 64));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  event_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldEventExcelConfig(
                       &v6->design_config.txt_config_mgr.home_config_mgr,
                       *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
  if ( event_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->event_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event_config_ptr->event_type >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&event_config_ptr->event_type);
    }
    if ( event_config_ptr->event_type == HOME_AVATAR_REWARD_EVENT )
    {
      random_position = common::tools::RandomUtils::rand<unsigned int>(1u, 0x64u);
      if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->furniture_suit_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event_config_ptr->furniture_suit_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&event_config_ptr->furniture_suit_id);
      }
      guid_0 = HomeAvatar::getSuiteGuidCanSummonAvatar(this, event_config_ptr->furniture_suit_id);
      *(_DWORD *)(v3 + 64) = 0;
      *(_DWORD *)(v3 + 68) = 0;
      *(_DWORD *)(v3 + 72) = 0;
      *(_DWORD *)(v3 + 76) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->order >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event_config_ptr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event_config_ptr->order >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&event_config_ptr->order);
      }
      *(_DWORD *)(v3 + 64) = event_config_ptr->order;
      *(_DWORD *)(v3 + 68) = *(_DWORD *)(v3 + 48);
      *(_DWORD *)(v3 + 72) = random_position;
      *(_DWORD *)(v3 + 76) = guid_0;
      v10 = std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData>>>::emplace<unsigned int &,HomeRewardEventData&>(
              &this->reward_event_id_map_,
              (unsigned int *)(v3 + 64),
              (HomeRewardEventData *)(v3 + 64),
              (unsigned int *)&this->reward_event_id_map_,
              v9);
      if ( !v10.second )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/home/home_avatar.cpp",
          "addEventInfoByGm",
          903);
        v11 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                &v18,
                (const char (*)[47])"HomeWorldEventData order is repeated event_id:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v3 + 48));
        v13 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v12, (const char (*)[8])" order:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &event_config_ptr->order);
        common::milog::MiLogStream::~MiLogStream(&v18);
      }
      HomeAvatar::notifyHomeAvatarEventData(this);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->event_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event_config_ptr->event_type >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&event_config_ptr->event_type);
      }
      if ( event_config_ptr->event_type == HOME_AVATAR_SUMMON_EVENT )
        HomeAvatar::recordAndNotifySummonEvent(this, *(_DWORD *)(v3 + 48), guid);
    }
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/home/home_avatar.cpp",
      "addEventInfoByGm",
      887);
    v7 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           &v18,
           (const char (*)[53])"findHomeWorldEventExcelConfig return null. event_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
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

// Line 915: range 0000000016C72C6E-0000000016C7315F
__int64 __fastcall HomeAvatar::delEventInfoByGm(HomeAvatar *const this, uint32_t event_id)
{
  unsigned int v2; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,HomeRewardEventData> >::pointer v8; // rdx
  uint32_t *p_event_id; // rax
  int v10; // r15d
  Home *v11; // rax
  Home *v12; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,HomeRewardEventData> >::_Self __y; // [rsp+20h] [rbp-E0h] BYREF
  const data::HomeWorldEventExcelConfig *event_config_ptr; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-D0h] BYREF
  char v17[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 12 event_id:914 64 8 8 iter:924 96 16 12 home_ptr:939";
  *(_QWORD *)(v3 + 16) = HomeAvatar::delEventInfoByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = event_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 96));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
  event_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldEventExcelConfig(
                       &v6->design_config.txt_config_mgr.home_config_mgr,
                       *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
  if ( !event_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/home/home_avatar.cpp",
      "delEventInfoByGm",
      919);
    v7 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           &v16,
           (const char (*)[53])"findHomeWorldEventExcelConfig return null. event_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v16);
    v2 = -1;
    goto LABEL_27;
  }
  if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->event_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event_config_ptr->event_type >> 3)
                                                                    + 0x7FFF8000) )
  {
    __asan_report_load4(&event_config_ptr->event_type);
  }
  if ( event_config_ptr->event_type == HOME_AVATAR_REWARD_EVENT )
  {
    *(std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData> > >::iterator *)(v3 + 64) = std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData>>>::begin(&this->reward_event_id_map_);
    while ( 1 )
    {
      __y._M_node = std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData>>>::end(&this->reward_event_id_map_)._M_node;
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeRewardEventData> >::_Self *)(v3 + 64),
              &__y) )
        break;
      v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeRewardEventData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeRewardEventData> > *const)(v3 + 64));
      p_event_id = &v8->second.event_id;
      if ( *(_BYTE *)(((unsigned __int64)p_event_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_event_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_event_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_event_id);
      }
      if ( v8->second.event_id == *(_DWORD *)(v3 + 48) )
        *(std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData> > >::iterator *)(v3 + 64) = std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData>>>::erase[abi:cxx11](&this->reward_event_id_map_, *(std::map<unsigned int,HomeRewardEventData,std::greater<unsigned int>,std::allocator<std::pair<unsigned int const,HomeRewardEventData> > >::iterator *)(v3 + 64));
      else
        std::_Rb_tree_iterator<std::pair<unsigned int const,HomeRewardEventData>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,HomeRewardEventData> > *const)(v3 + 64));
    }
    HomeAvatar::notifyHomeAvatarEventData(this);
LABEL_26:
    v2 = 0;
    goto LABEL_27;
  }
  if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->event_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event_config_ptr->event_type >> 3)
                                                                    + 0x7FFF8000) )
  {
    __asan_report_load4(&event_config_ptr->event_type);
  }
  if ( event_config_ptr->event_type != HOME_AVATAR_SUMMON_EVENT )
    goto LABEL_26;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getHomeComp(this->player_);
  PlayerHomeComp::findMyHome((const PlayerHomeComp *const)(v3 + 96));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v3 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/home/home_avatar.cpp",
      "delEventInfoByGm",
      942);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v16, (const char (*)[20])"home_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v16);
    v2 = -1;
    v10 = 0;
  }
  else
  {
    v11 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    Home::delSummonEventInfoByGm(v11, *(_DWORD *)(v3 + 48));
    v12 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    Home::notifyHomeSummonEventToAllPlayer(v12);
    v10 = 1;
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v3 + 96));
  if ( v10 == 1 )
    goto LABEL_26;
LABEL_27:
  result = v2;
  if ( v17 == (char *)v3 )
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

// Line 952: range 0000000016C73160-0000000016C7346D
int32_t __cdecl HomeAvatar::clearAllEventByGm(
        HomeAvatar *const this,
        const std::vector<unsigned int> *avatar_id_vec,
        bool is_all)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v6; // rax
  _DWORD *v7; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,HomeAvatarData>,false,false>::pointer v8; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,HomeAvatarData>,false,false>::pointer v9; // rax
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-C0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+28h] [rbp-B8h] BYREF
  std::unordered_map<unsigned int,HomeAvatarData>::iterator __for_end; // [rsp+30h] [rbp-B0h] BYREF
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-A8h]
  std::unordered_map<unsigned int,HomeAvatarData> *__for_range; // [rsp+40h] [rbp-A0h]
  std::pair<unsigned int const,HomeAvatarData> *__in; // [rsp+48h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,HomeAvatarData> >::type *_; // [rsp+50h] [rbp-90h]
  std::tuple_element<1,std::pair<unsigned int const,HomeAvatarData> >::type *avatar_data; // [rsp+58h] [rbp-88h]
  char v20[128]; // [rsp+60h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 avatar_id:963 64 8 8 iter:965";
  *(_QWORD *)(v3 + 16) = HomeAvatar::clearAllEventByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  if ( is_all )
  {
    __for_range = &this->avatar_data_map_;
    *(std::unordered_map<unsigned int,HomeAvatarData>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,HomeAvatarData>::begin(&this->avatar_data_map_);
    __for_end._M_cur = std::unordered_map<unsigned int,HomeAvatarData>::end(__for_range)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,HomeAvatarData>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeAvatarData>,false> *)(v3 + 64),
              &__for_end) )
    {
      __in = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeAvatarData>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,HomeAvatarData>,false,false> *const)(v3 + 64));
      _ = std::get<0ul,unsigned int const,HomeAvatarData>(__in);
      avatar_data = std::get<1ul,unsigned int const,HomeAvatarData>(__in);
      std::set<unsigned int>::clear(&avatar_data->talk_id_set);
      std::set<unsigned int>::clear(&avatar_data->event_id_set);
      std::__detail::_Node_iterator<std::pair<unsigned int const,HomeAvatarData>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,HomeAvatarData>,false,false> *const)(v3 + 64));
    }
  }
  else
  {
    __for_range_0 = avatar_id_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(avatar_id_vec)._M_current;
    __for_end_0._M_current = std::vector<unsigned int>::end(avatar_id_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end_0) )
    {
      v6 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      *(_DWORD *)(v3 + 48) = *v7;
      *(std::unordered_map<unsigned int,HomeAvatarData>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,HomeAvatarData>::find(
                                                                                  &this->avatar_data_map_,
                                                                                  (const std::unordered_map<unsigned int,HomeAvatarData>::key_type *)(v3 + 48));
      __for_end._M_cur = std::unordered_map<unsigned int,HomeAvatarData>::end(&this->avatar_data_map_)._M_cur;
      if ( std::__detail::operator!=<std::pair<unsigned int const,HomeAvatarData>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeAvatarData>,false> *)(v3 + 64),
             &__for_end) )
      {
        v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeAvatarData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,HomeAvatarData>,false,false> *const)(v3 + 64));
        std::set<unsigned int>::clear(&v8->second.talk_id_set);
        v9 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeAvatarData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,HomeAvatarData>,false,false> *const)(v3 + 64));
        std::set<unsigned int>::clear(&v9->second.event_id_set);
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
  }
  result = 0;
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
  return result;
};
