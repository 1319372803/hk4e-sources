// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/gacha_activity.cpp

// Line 23: range 0000000015077560-0000000015077734
int32_t __cdecl GachaActivityStageData::toClient(
        const GachaActivityStageData *const this,
        proto::GachaStageData *stage_info)
{
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v2; // ebx
  unsigned int *v3; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v4; // rdx
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  google::protobuf::Map<unsigned int,unsigned int> *mutable_target_num_map; // [rsp+28h] [rbp-38h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-30h]
  const std::pair<unsigned int const,unsigned int> *v10; // [rsp+38h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *target_id; // [rsp+40h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+48h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::GachaStageData::set_stage_id(stage_info, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::GachaStageData::set_is_open(stage_info, this->is_open);
  mutable_target_num_map = proto::GachaStageData::mutable_target_num_map(stage_info);
  __for_range = &this->target_num_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->target_num_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->target_num_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    target_id = std::get<0ul,unsigned int const,unsigned int>(v10);
    num = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v10);
    if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v2 = *num;
    v3 = google::protobuf::Map<unsigned int,unsigned int>::operator[](mutable_target_num_map, target_id);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v3);
    }
    *v4 = v2;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 35: range 0000000015077736-00000000150778FB
int32_t __cdecl GachaActivityStageData::fromBin(
        GachaActivityStageData *const this,
        const proto::GachaStageBin *stage_bin)
{
  uint32_t v2; // edx
  bool is_open; // cl
  unsigned int second; // ebx
  std::map<unsigned int,unsigned int>::mapped_type *v5; // rax
  unsigned int *v6; // rdx
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range; // [rsp+10h] [rbp-60h]
  google::protobuf::Map<unsigned int,unsigned int>::const_reference p_target_id; // [rsp+18h] [rbp-58h]
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+40h] [rbp-30h] BYREF

  v2 = proto::GachaStageBin::stage_id(stage_bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->stage_id = v2;
  is_open = proto::GachaStageBin::is_open(stage_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = is_open;
  std::map<unsigned int,unsigned int>::clear(&this->target_num_map);
  __for_range = proto::GachaStageBin::target_num_map(stage_bin);
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_target_id = google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)&p_target_id->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p_target_id + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p_target_id->second >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    second = p_target_id->second;
    v5 = std::map<unsigned int,unsigned int>::operator[](
           &this->target_num_map,
           (const std::map<unsigned int,unsigned int>::key_type *)p_target_id);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v5);
    }
    *v6 = second;
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
  }
  return 0;
};

// Line 47: range 00000000150778FC-0000000015077AD0
int32_t __cdecl GachaActivityStageData::toBin(
        const GachaActivityStageData *const this,
        proto::GachaStageBin *stage_bin)
{
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v2; // ebx
  unsigned int *v3; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v4; // rdx
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  google::protobuf::Map<unsigned int,unsigned int> *mutable_target_num_map; // [rsp+28h] [rbp-38h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-30h]
  const std::pair<unsigned int const,unsigned int> *v10; // [rsp+38h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *target_id; // [rsp+40h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+48h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::GachaStageBin::set_stage_id(stage_bin, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::GachaStageBin::set_is_open(stage_bin, this->is_open);
  mutable_target_num_map = proto::GachaStageBin::mutable_target_num_map(stage_bin);
  __for_range = &this->target_num_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->target_num_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->target_num_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    target_id = std::get<0ul,unsigned int const,unsigned int>(v10);
    num = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v10);
    if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v2 = *num;
    v3 = google::protobuf::Map<unsigned int,unsigned int>::operator[](mutable_target_num_map, target_id);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v3);
    }
    *v4 = v2;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 59: range 0000000015077AD2-000000001507837E
int32_t __cdecl GachaActivity::fromScheduleBin(GachaActivity *const this, const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int v5; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v6; // rax
  unsigned int *v7; // rdx
  GachaActivityStageData *v8; // rax
  unsigned int v9; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v10; // rax
  unsigned int *v11; // rdx
  uint32_t v12; // ecx
  uint32_t v13; // edx
  uint32_t v14; // ecx
  uint32_t v15; // edx
  uint32_t hidden_robot_id; // ecx
  uint32_t robot_id; // edx
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::GachaStageBin>::const_iterator __for_begin_0; // [rsp+18h] [rbp-188h] BYREF
  google::protobuf::RepeatedPtrField<proto::GachaStageBin>::const_iterator __for_end_0; // [rsp+20h] [rbp-180h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_1; // [rsp+28h] [rbp-178h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_2; // [rsp+30h] [rbp-170h]
  const proto::GachaScheduleBin *gacha_bin; // [rsp+38h] [rbp-168h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range; // [rsp+40h] [rbp-160h]
  const google::protobuf::RepeatedPtrField<proto::GachaStageBin> *__for_range_0; // [rsp+48h] [rbp-158h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_1; // [rsp+50h] [rbp-150h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_1; // [rsp+58h] [rbp-148h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range_2; // [rsp+60h] [rbp-140h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_3; // [rsp+68h] [rbp-138h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_2; // [rsp+70h] [rbp-130h]
  const unsigned int *p_robot_id_0; // [rsp+78h] [rbp-128h]
  const proto::GachaStageBin *gacha_stage_bin; // [rsp+80h] [rbp-120h]
  const unsigned int *p_robot_id; // [rsp+88h] [rbp-118h]
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+90h] [rbp-110h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+B0h] [rbp-F0h] BYREF
  char v36[208]; // [rsp+D0h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 11 robot_id:84 64 56 7 data:69";
  *(_QWORD *)(v2 + 16) = GachaActivity::fromScheduleBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  gacha_bin = proto::ActivityScheduleBin::gacha_bin(bin);
  std::map<unsigned int,unsigned int>::clear(&this->robot_num_map_);
  __for_range = proto::GachaScheduleBin::robot_num_map(gacha_bin);
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_robot_id = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)(p_robot_id + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p_robot_id + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(p_robot_id + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v5 = p_robot_id[1];
    v6 = std::map<unsigned int,unsigned int>::operator[](&this->robot_num_map_, p_robot_id);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v6);
    }
    *v7 = v5;
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
  }
  std::map<unsigned int,GachaActivityStageData>::clear(&this->stage_data_map_);
  __for_range_0 = proto::GachaScheduleBin::gacha_stage_bin_list(gacha_bin);
  __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::GachaStageBin>::begin(__for_range_0).it_;
  __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::GachaStageBin>::end(__for_range_0).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::GachaStageBin const>::operator!=(
            &__for_begin_0,
            &__for_end_0) )
  {
    gacha_stage_bin = google::protobuf::internal::RepeatedPtrIterator<proto::GachaStageBin const>::operator*(&__for_begin_0);
    GachaActivityStageData::GachaActivityStageData((GachaActivityStageData *const)(v2 + 64));
    GachaActivityStageData::fromBin((GachaActivityStageData *const)(v2 + 64), gacha_stage_bin);
    v8 = std::map<unsigned int,GachaActivityStageData>::operator[](
           &this->stage_data_map_,
           (const std::map<unsigned int,GachaActivityStageData>::key_type *)(v2 + 64));
    GachaActivityStageData::operator=(v8, (const GachaActivityStageData *)(v2 + 64));
    GachaActivityStageData::~GachaActivityStageData((GachaActivityStageData *const)(v2 + 64));
    google::protobuf::internal::RepeatedPtrIterator<proto::GachaStageBin const>::operator++(&__for_begin_0);
  }
  std::vector<unsigned int>::clear(&this->create_robot_vec_);
  __for_range_1 = proto::GachaScheduleBin::create_robot_vec(gacha_bin);
  __for_begin_1 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_1);
  __for_end_1 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_1);
  while ( __for_begin_1 != __for_end_1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_1 >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = *__for_begin_1;
    std::vector<unsigned int>::push_back(
      &this->create_robot_vec_,
      (const std::vector<unsigned int>::value_type *)(v2 + 48));
    ++__for_begin_1;
  }
  std::map<unsigned int,unsigned int>::clear(&this->have_reward_robot_num_map_);
  __for_range_2 = proto::GachaScheduleBin::have_reward_robot_num_map(gacha_bin);
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, __for_range_2);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, __for_range_2);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_robot_id_0 = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)(p_robot_id_0 + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p_robot_id_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(p_robot_id_0 + 1) >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v9 = p_robot_id_0[1];
    v10 = std::map<unsigned int,unsigned int>::operator[](&this->have_reward_robot_num_map_, p_robot_id_0);
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v10);
    }
    *v11 = v9;
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
  }
  std::set<unsigned int>::clear(&this->have_get_robot_set_);
  __for_range_3 = proto::GachaScheduleBin::have_get_robot_list(gacha_bin);
  __for_begin_2 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_3);
  __for_end_2 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_3);
  while ( __for_begin_2 != __for_end_2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin_2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_2 >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = *__for_begin_2;
    std::set<unsigned int>::insert(&this->have_get_robot_set_, (const std::set<unsigned int>::value_type *)(v2 + 48));
    ++__for_begin_2;
  }
  v12 = proto::GachaScheduleBin::item_stage(gacha_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->item_stage_);
  }
  this->item_stage_ = v12;
  v13 = proto::GachaScheduleBin::sub_stage(gacha_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sub_stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sub_stage_);
  }
  this->sub_stage_ = v13;
  v14 = proto::GachaScheduleBin::robot_finish_num(gacha_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->robot_finish_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->robot_finish_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->robot_finish_num_);
  }
  this->robot_finish_num_ = v14;
  v15 = proto::GachaScheduleBin::hidden_robot_finish_num(gacha_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->hidden_robot_finish_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hidden_robot_finish_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hidden_robot_finish_num_);
  }
  this->hidden_robot_finish_num_ = v15;
  hidden_robot_id = proto::GachaScheduleBin::first_create_hidden_robot_id(gacha_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->first_create_hidden_robot_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->first_create_hidden_robot_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->first_create_hidden_robot_id_);
  }
  this->first_create_hidden_robot_id_ = hidden_robot_id;
  robot_id = proto::GachaScheduleBin::tech_create_robot_id(gacha_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->tech_create_robot_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tech_create_robot_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->tech_create_robot_id_);
  }
  this->tech_create_robot_id_ = robot_id;
  result = 0;
  if ( v36 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
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

// Line 98: range 0000000015078380-0000000015078ACF
int32_t __cdecl GachaActivity::toScheduleBin(const GachaActivity *const this, proto::ActivityScheduleBin *bin)
{
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v2; // ebx
  unsigned int *v3; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v4; // rdx
  google::protobuf::uint32 *v5; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v6; // ebx
  unsigned int *v7; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v8; // rdx
  google::protobuf::uint32 *v9; // rdx
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-B0h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-A8h] BYREF
  proto::GachaScheduleBin *gacha_bin; // [rsp+30h] [rbp-A0h]
  google::protobuf::Map<unsigned int,unsigned int> *bin_robot_num_map; // [rsp+38h] [rbp-98h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+40h] [rbp-90h]
  const std::map<unsigned int,GachaActivityStageData> *__for_range_0; // [rsp+48h] [rbp-88h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+50h] [rbp-80h]
  google::protobuf::Map<unsigned int,unsigned int> *bin_have_reward_robot_num_map; // [rsp+58h] [rbp-78h]
  const std::map<unsigned int,unsigned int> *__for_range_2; // [rsp+60h] [rbp-70h]
  const std::set<unsigned int> *__for_range_3; // [rsp+68h] [rbp-68h]
  const std::pair<unsigned int const,unsigned int> *v21; // [rsp+70h] [rbp-60h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *robot_id_1; // [rsp+78h] [rbp-58h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num_0; // [rsp+80h] [rbp-50h]
  const std::pair<unsigned int const,GachaActivityStageData> *v24; // [rsp+88h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,GachaActivityStageData> >::type *id; // [rsp+90h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,GachaActivityStageData> >::type *data; // [rsp+98h] [rbp-38h]
  proto::GachaStageBin *pos_bin; // [rsp+A0h] [rbp-30h]
  const std::pair<unsigned int const,unsigned int> *v28; // [rsp+A8h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *robot_id; // [rsp+B0h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+B8h] [rbp-18h]

  gacha_bin = proto::ActivityScheduleBin::mutable_gacha_bin(bin);
  bin_robot_num_map = proto::GachaScheduleBin::mutable_robot_num_map(gacha_bin);
  __for_range = &this->robot_num_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->robot_num_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->robot_num_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v28 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    robot_id = std::get<0ul,unsigned int const,unsigned int>(v28);
    num = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v28);
    if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v2 = *num;
    v3 = google::protobuf::Map<unsigned int,unsigned int>::operator[](bin_robot_num_map, robot_id);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v3);
    }
    *v4 = v2;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->stage_data_map_;
  __for_begin._M_node = std::map<unsigned int,GachaActivityStageData>::begin(&this->stage_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,GachaActivityStageData>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,GachaActivityStageData> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,GachaActivityStageData> >::_Self *)&__for_end) )
  {
    v24 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,GachaActivityStageData>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,GachaActivityStageData> > *const)&__for_begin);
    id = std::get<0ul,unsigned int const,GachaActivityStageData>(v24);
    data = (std::tuple_element<1,const std::pair<unsigned int const,GachaActivityStageData> >::type *)std::get<1ul,unsigned int const,GachaActivityStageData>(v24);
    pos_bin = proto::GachaScheduleBin::add_gacha_stage_bin_list(gacha_bin);
    GachaActivityStageData::toBin(data, pos_bin);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,GachaActivityStageData>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,GachaActivityStageData> > *const)&__for_begin);
  }
  __for_range_1 = &this->create_robot_vec_;
  __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<unsigned int>::begin(&this->create_robot_vec_)._M_current;
  __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<unsigned int>::end(__for_range_1)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end) )
  {
    v5 = (google::protobuf::uint32 *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::GachaScheduleBin::add_create_robot_vec(gacha_bin, *v5);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
  }
  bin_have_reward_robot_num_map = proto::GachaScheduleBin::mutable_have_reward_robot_num_map(gacha_bin);
  __for_range_2 = &this->have_reward_robot_num_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->have_reward_robot_num_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_2)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v21 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    robot_id_1 = std::get<0ul,unsigned int const,unsigned int>(v21);
    num_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v21);
    if ( *(_BYTE *)(((unsigned __int64)num_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)num_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v6 = *num_0;
    v7 = google::protobuf::Map<unsigned int,unsigned int>::operator[](bin_have_reward_robot_num_map, robot_id_1);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v7);
    }
    *v8 = v6;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  __for_range_3 = &this->have_get_robot_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->have_get_robot_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(__for_range_3)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v9 = (google::protobuf::uint32 *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::GachaScheduleBin::add_have_get_robot_list(gacha_bin, *v9);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::GachaScheduleBin::set_item_stage(gacha_bin, this->item_stage_);
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sub_stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::GachaScheduleBin::set_sub_stage(gacha_bin, this->sub_stage_);
  if ( *(_BYTE *)(((unsigned __int64)&this->robot_finish_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->robot_finish_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::GachaScheduleBin::set_robot_finish_num(gacha_bin, this->robot_finish_num_);
  if ( *(_BYTE *)(((unsigned __int64)&this->hidden_robot_finish_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hidden_robot_finish_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::GachaScheduleBin::set_hidden_robot_finish_num(gacha_bin, this->hidden_robot_finish_num_);
  if ( *(_BYTE *)(((unsigned __int64)&this->first_create_hidden_robot_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->first_create_hidden_robot_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::GachaScheduleBin::set_first_create_hidden_robot_id(gacha_bin, this->first_create_hidden_robot_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->tech_create_robot_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tech_create_robot_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::GachaScheduleBin::set_tech_create_robot_id(gacha_bin, this->tech_create_robot_id_);
  return 0;
};

// Line 133: range 0000000015078AD0-0000000015079116
int32_t __cdecl GachaActivity::toClient(GachaActivity *const this, proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v6; // ebx
  unsigned int *v7; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v8; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v9; // ebx
  unsigned int *v10; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v11; // rdx
  uint32_t *v12; // rdx
  unsigned int val; // [rsp+10h] [rbp-D0h] BYREF
  uint32_t robot_id_1; // [rsp+14h] [rbp-CCh]
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  proto::GachaActivityDetailInfo *info; // [rsp+28h] [rbp-B8h]
  google::protobuf::Map<unsigned int,unsigned int> *robot_num_map; // [rsp+30h] [rbp-B0h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+38h] [rbp-A8h]
  std::map<unsigned int,GachaActivityStageData> *__for_range_0; // [rsp+40h] [rbp-A0h]
  google::protobuf::Map<unsigned int,unsigned int> *have_reward_robot_num_map; // [rsp+48h] [rbp-98h]
  std::map<unsigned int,unsigned int> *__for_range_1; // [rsp+50h] [rbp-90h]
  std::set<unsigned int> *__for_range_2; // [rsp+58h] [rbp-88h]
  const std::pair<unsigned int const,unsigned int> *v24; // [rsp+60h] [rbp-80h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *robot_id_0; // [rsp+68h] [rbp-78h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num_0; // [rsp+70h] [rbp-70h]
  const std::pair<unsigned int const,GachaActivityStageData> *v27; // [rsp+78h] [rbp-68h]
  std::tuple_element<0,const std::pair<unsigned int const,GachaActivityStageData> >::type *id; // [rsp+80h] [rbp-60h]
  std::tuple_element<1,const std::pair<unsigned int const,GachaActivityStageData> >::type *data; // [rsp+88h] [rbp-58h]
  proto::GachaStageData *client_stage_data; // [rsp+90h] [rbp-50h]
  const std::pair<unsigned int const,unsigned int> *v31; // [rsp+98h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *robot_id; // [rsp+A0h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+A8h] [rbp-38h]
  common::milog::MiLogStream v34; // [rsp+B0h] [rbp-30h] BYREF

  if ( BaseActivity::toClient((BaseActivity *const)this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/gacha_activity.cpp",
      "toClient",
      136);
    v2 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v34,
           (const char (*)[51])"[GACHA] BaseActivity::toClient fails, schedule_id:");
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->schedule_id_);
    v4 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v3, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v34);
    return -1;
  }
  else
  {
    info = proto::ActivityInfo::mutable_gacha_info(activity_info);
    robot_num_map = proto::GachaActivityDetailInfo::mutable_robot_num_map(info);
    __for_range = &this->robot_num_map_;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->robot_num_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->robot_num_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v31 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      robot_id = std::get<0ul,unsigned int const,unsigned int>(v31);
      num = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v31);
      if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v6 = *num;
      v7 = google::protobuf::Map<unsigned int,unsigned int>::operator[](robot_num_map, robot_id);
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v7);
      }
      *v8 = v6;
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    __for_range_0 = &this->stage_data_map_;
    __for_begin._M_node = std::map<unsigned int,GachaActivityStageData>::begin(&this->stage_data_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,GachaActivityStageData>::end(__for_range_0)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,GachaActivityStageData> >::_Self *)&__for_begin,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,GachaActivityStageData> >::_Self *)&__for_end) )
    {
      v27 = std::_Rb_tree_iterator<std::pair<unsigned int const,GachaActivityStageData>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,GachaActivityStageData> > *const)&__for_begin);
      id = std::get<0ul,unsigned int const,GachaActivityStageData>(v27);
      data = (std::tuple_element<1,const std::pair<unsigned int const,GachaActivityStageData> >::type *)std::get<1ul,unsigned int const,GachaActivityStageData>(v27);
      client_stage_data = proto::GachaActivityDetailInfo::add_gacha_stage_data_list(info);
      GachaActivityStageData::toClient(data, client_stage_data);
      std::_Rb_tree_iterator<std::pair<unsigned int const,GachaActivityStageData>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,GachaActivityStageData> > *const)&__for_begin);
    }
    have_reward_robot_num_map = proto::GachaActivityDetailInfo::mutable_have_reward_robot_num_map(info);
    __for_range_1 = &this->have_reward_robot_num_map_;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->have_reward_robot_num_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_1)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v24 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      robot_id_0 = std::get<0ul,unsigned int const,unsigned int>(v24);
      num_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v24);
      if ( *(_BYTE *)(((unsigned __int64)num_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)num_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v9 = *num_0;
      v10 = google::protobuf::Map<unsigned int,unsigned int>::operator[](have_reward_robot_num_map, robot_id_0);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v10);
      }
      *v11 = v9;
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    __for_range_2 = &this->have_get_robot_set_;
    __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::set<unsigned int>::begin(&this->have_get_robot_set_)._M_node;
    __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::set<unsigned int>::end(__for_range_2)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
    {
      v12 = (uint32_t *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      robot_id_1 = *v12;
      proto::GachaActivityDetailInfo::add_have_get_robot_list(info, robot_id_1);
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->robot_finish_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->robot_finish_num_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::GachaActivityDetailInfo::set_robot_finish_num(info, this->robot_finish_num_);
    if ( *(_BYTE *)(((unsigned __int64)&this->tech_create_robot_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->tech_create_robot_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::GachaActivityDetailInfo::set_tech_create_robot_id(info, this->tech_create_robot_id_);
    return 0;
  }
};

// Line 166: range 0000000015079118-0000000015079588
int32_t __cdecl GachaActivity::init(GachaActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t result; // eax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v9; // rax
  int v10; // esi
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-D8h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+20h] [rbp-D0h] BYREF
  GachaActivityStageData *stage_data; // [rsp+28h] [rbp-C8h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-C0h]
  const std::pair<unsigned int const,unsigned int> *v15; // [rsp+38h] [rbp-B8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *target_id; // [rsp+40h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+48h] [rbp-A8h]
  common::milog::MiLogStream v18; // [rsp+50h] [rbp-A0h] BYREF
  char v19[128]; // [rsp+70h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 20 8 info:185";
  *(_QWORD *)(v1 + 16) = GachaActivity::init;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -217841664;
  v3[536862722] = -202116109;
  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0)
    || BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    result = 0;
  }
  else
  {
    std::map<unsigned int,unsigned int>::clear(&this->group_num_map_);
    stage_data = std::map<unsigned int,GachaActivityStageData>::operator[](&this->stage_data_map_, &this->item_stage_);
    __for_range = &stage_data->target_num_map;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&stage_data->target_num_map)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(&stage_data->target_num_map)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v15 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      target_id = std::get<0ul,unsigned int const,unsigned int>(v15);
      num = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v15);
      *(_DWORD *)(v1 + 32) = 0;
      *(_DWORD *)(v1 + 36) = 0;
      *(_DWORD *)(v1 + 40) = 0;
      *(_DWORD *)(v1 + 44) = 0;
      *(_DWORD *)(v1 + 48) = 0;
      if ( *(_BYTE *)(((unsigned __int64)target_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)target_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)target_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( GachaActivity::getTargetInfo(this, *target_id, (GachaActivity::TargetInfo *)(v1 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/gacha_activity.cpp",
          "init",
          189);
        v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
               &v18,
               (const char (*)[33])"cannot getTargetInfo target_id: ");
        v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, target_id);
        v8 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v7, (const char (*)[15])", item_stage_:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->item_stage_);
        common::milog::MiLogStream::~MiLogStream(&v18);
      }
      else
      {
        v9 = std::map<unsigned int,unsigned int>::operator[](
               &this->group_num_map_,
               (const std::map<unsigned int,unsigned int>::key_type *)(v1 + 32));
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v10 = *v9;
        if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *v9 = v10 + *num;
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->scale_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->scale_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->scale_);
    }
    this->scale_ = 1;
    GachaActivity::registerObserver(this);
    result = 0;
  }
  if ( v19 == (char *)v1 )
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

// Line 201: range 000000001507958A-0000000015079B7E
void __cdecl GachaActivity::onPreStart(GachaActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::map<unsigned int,unsigned int>::mapped_type *v4; // rax
  _DWORD *v5; // rdx
  GachaActivityStageData *v6; // rax
  const unsigned int *v7; // rcx
  GachaActivityStageData *v8; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,GachaActivityStageData> >,bool> v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r13
  unsigned int val; // [rsp+14h] [rbp-13Ch] BYREF
  std::unordered_map<unsigned int,data::ActivityGachaRobotExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-138h] BYREF
  std::unordered_map<unsigned int,data::ActivityGachaRobotExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-130h] BYREF
  const ActivityGachaExcelConfigMgr *config_mgr; // [rsp+28h] [rbp-128h]
  const std::unordered_map<unsigned int,data::ActivityGachaRobotExcelConfig> *__for_range; // [rsp+30h] [rbp-120h]
  const std::unordered_map<unsigned int,data::ActivityGachaStageExcelConfig> *__for_range_0; // [rsp+38h] [rbp-118h]
  const std::pair<unsigned int const,data::ActivityGachaStageExcelConfig> *v18; // [rsp+40h] [rbp-110h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ActivityGachaStageExcelConfig> >::type *id_0; // [rsp+48h] [rbp-108h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityGachaStageExcelConfig> >::type *config_0; // [rsp+50h] [rbp-100h]
  const std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig> *v21; // [rsp+58h] [rbp-F8h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig> >::type *id; // [rsp+60h] [rbp-F0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig> >::type *config; // [rsp+68h] [rbp-E8h]
  std::shared_ptr<Config> v24; // [rsp+70h] [rbp-E0h] BYREF
  common::milog::MiLogStream v25; // [rsp+80h] [rbp-D0h] BYREF
  char v26[176]; // [rsp+A0h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 56 8 data:214";
  *(_QWORD *)(v1 + 16) = GachaActivity::onPreStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  std::map<unsigned int,unsigned int>::clear(&this->robot_num_map_);
  std::map<unsigned int,GachaActivityStageData>::clear(&this->stage_data_map_);
  std::map<unsigned int,unsigned int>::clear(&this->have_reward_robot_num_map_);
  std::set<unsigned int>::clear(&this->have_get_robot_set_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v24);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24)->design_config.txt_config_mgr.activity_gacha_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v24);
  __for_range = &config_mgr->activity_gacha_robot_excel_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::ActivityGachaRobotExcelConfig>::begin(&config_mgr->activity_gacha_robot_excel_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::ActivityGachaRobotExcelConfig>::end(&config_mgr->activity_gacha_robot_excel_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v21 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false,false>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,data::ActivityGachaRobotExcelConfig>(v21);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityGachaRobotExcelConfig>(v21);
    v4 = std::map<unsigned int,unsigned int>::operator[](&this->robot_num_map_, id);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v4);
    }
    *v5 = 0;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = &config_mgr->activity_gacha_stage_excel_config_map;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false>::__node_type *)std::unordered_map<unsigned int,data::ActivityGachaStageExcelConfig>::begin(&config_mgr->activity_gacha_stage_excel_config_map)._M_cur;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false>::__node_type *)std::unordered_map<unsigned int,data::ActivityGachaStageExcelConfig>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityGachaStageExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaStageExcelConfig>,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaStageExcelConfig>,false> *)&__for_end) )
  {
    v18 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaStageExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaStageExcelConfig>,false,false> *const)&__for_begin);
    id_0 = std::get<0ul,unsigned int const,data::ActivityGachaStageExcelConfig>(v18);
    config_0 = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityGachaStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityGachaStageExcelConfig>(v18);
    GachaActivityStageData::GachaActivityStageData((GachaActivityStageData *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)id_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 32) = *id_0;
    *(_BYTE *)(v1 + 36) = 0;
    v6 = std::move<GachaActivityStageData &>((GachaActivityStageData *)(v1 + 32));
    v9 = std::map<unsigned int,GachaActivityStageData>::emplace<unsigned int const&,GachaActivityStageData>(
           &this->stage_data_map_,
           id_0,
           v6,
           v7,
           v8);
    if ( !v9.second )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/gacha_activity.cpp",
        "onPreStart",
        219);
      v10 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v25,
              (const char (*)[23])"[GACHA] duplicated id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, id_0);
      common::milog::MiLogStream::~MiLogStream(&v25);
    }
    GachaActivityStageData::~GachaActivityStageData((GachaActivityStageData *const)(v1 + 32));
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaStageExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaStageExcelConfig>,false,false> *const)&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->item_stage_);
  }
  this->item_stage_ = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->scale_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scale_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scale_);
  }
  this->scale_ = 1;
  common::milog::MiLogStream::create(
    &v25,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/gacha_activity.cpp",
    "onPreStart",
    224);
  v11 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
          &v25,
          (const char (*)[25])"[GACHA] onPreStart, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
  common::milog::MiLogStream::~MiLogStream(&v25);
  if ( v26 == (char *)v1 )
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

// Line 228: range 0000000015079B80-0000000015079B9A
void __cdecl GachaActivity::onStart(GachaActivity *const this)
{
  GachaActivity::registerObserver(this);
};

// Line 233: range 0000000015079B9C-0000000015079C0A
void __cdecl GachaActivity::onLogin(GachaActivity *const this)
{
  uint32_t v2; // edx

  if ( BaseActivity::isOpening((const BaseActivity *const)this, 0)
    && !BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    v2 = GachaActivity::calcSubPercent(this);
    GachaActivity::sendNotifyToClient(this, v2);
  }
  BaseActivity::onLogin((BaseActivity *const)this);
};

// Line 243: range 0000000015079C0C-0000000015079C26
void __cdecl GachaActivity::onSettle(GachaActivity *const this)
{
  GachaActivity::unregisterObserver(this);
};

// Line 248: range 0000000015079C28-0000000015079C81
void __cdecl GachaActivity::onDailyRefresh(GachaActivity *const this)
{
  if ( BaseActivity::isOpening((const BaseActivity *const)this, 0)
    && !BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    BaseActivity::notifyClientData((BaseActivity *const)this, 0);
  }
};

// Line 257: range 0000000015079C82-0000000015079F3E
void __cdecl GachaActivity::onClear(GachaActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->item_stage_);
  }
  this->item_stage_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sub_stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sub_stage_);
  }
  this->sub_stage_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->robot_finish_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->robot_finish_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->robot_finish_num_);
  }
  this->robot_finish_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->scale_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scale_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scale_);
  }
  this->scale_ = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->hidden_robot_finish_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hidden_robot_finish_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hidden_robot_finish_num_);
  }
  this->hidden_robot_finish_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->first_create_hidden_robot_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->first_create_hidden_robot_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->first_create_hidden_robot_id_);
  }
  this->first_create_hidden_robot_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->tech_create_robot_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tech_create_robot_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->tech_create_robot_id_);
  }
  this->tech_create_robot_id_ = 0;
  std::map<unsigned int,unsigned int>::clear(&this->group_num_map_);
  std::map<unsigned int,GachaActivityStageData>::clear(&this->stage_data_map_);
  std::map<unsigned int,unsigned int>::clear(&this->robot_num_map_);
  std::vector<unsigned int>::clear(&this->create_robot_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gm_robot_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gm_robot_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gm_robot_limit_);
  }
  this->gm_robot_limit_ = 0;
  std::string::clear(&this->gm_output_);
  std::set<unsigned int>::clear(&this->have_get_robot_set_);
  std::map<unsigned int,unsigned int>::clear(&this->have_reward_robot_num_map_);
};

// Line 276: range 0000000015079F40-000000001507A337
void __cdecl GachaActivity::registerObserver(GachaActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  PlayerEventComp *cb_ptr; // [rsp+10h] [rbp-D0h]
  PlayerEventComp *v5; // [rsp+20h] [rbp-C0h]
  PlayerEventComp *EventComp; // [rsp+30h] [rbp-B0h]
  std::enable_shared_from_this<BaseActivity> v7; // [rsp+40h] [rbp-A0h] BYREF
  char v8[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:277 64 16 12 this_wtr:278";
  *(_QWORD *)(v1 + 16) = GachaActivity::registerObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v7);
  std::dynamic_pointer_cast<GachaActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v7);
  std::weak_ptr<GachaActivity>::weak_ptr<GachaActivity,void>(
    (std::weak_ptr<GachaActivity> *const)(v1 + 64),
    (const std::shared_ptr<GachaActivity> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  EventComp = Player::getEventComp(this->player_);
  std::weak_ptr<GachaActivity>::weak_ptr(
    (std::weak_ptr<GachaActivity> *const)&v7,
    (const std::weak_ptr<GachaActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<GachaActivity,MonsterBeKilledByHateListEvent>(
    EventComp,
    (std::weak_ptr<GachaActivity> *)&v7,
    (void (*)(GachaActivity *, const MonsterBeKilledByHateListEvent *))GachaActivity::onMonsterBeKilledByHateListEvent,
    0LL);
  std::weak_ptr<GachaActivity>::~weak_ptr((std::weak_ptr<GachaActivity> *const)&v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  cb_ptr = Player::getEventComp(this->player_);
  std::weak_ptr<GachaActivity>::weak_ptr(
    (std::weak_ptr<GachaActivity> *const)&v7,
    (const std::weak_ptr<GachaActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<GachaActivity,GatherEvent>(
    cb_ptr,
    (std::weak_ptr<GachaActivity> *)&v7,
    (void (*)(GachaActivity *, const GatherEvent *))GachaActivity::onGatherEvent,
    0LL);
  std::weak_ptr<GachaActivity>::~weak_ptr((std::weak_ptr<GachaActivity> *const)&v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = Player::getEventComp(this->player_);
  std::weak_ptr<GachaActivity>::weak_ptr(
    (std::weak_ptr<GachaActivity> *const)&v7,
    (const std::weak_ptr<GachaActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<GachaActivity,TrifleEvent>(
    v5,
    (std::weak_ptr<GachaActivity> *)&v7,
    (void (*)(GachaActivity *, const TrifleEvent *))GachaActivity::onTrifleEvent,
    0LL);
  std::weak_ptr<GachaActivity>::~weak_ptr((std::weak_ptr<GachaActivity> *const)&v7);
  std::weak_ptr<GachaActivity>::~weak_ptr((std::weak_ptr<GachaActivity> *const)(v1 + 64));
  std::shared_ptr<GachaActivity>::~shared_ptr((std::shared_ptr<GachaActivity> *const)(v1 + 32));
  if ( v8 == (char *)v1 )
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

// Line 285: range 000000001507A338-000000001507A43C
void __cdecl GachaActivity::unregisterObserver(GachaActivity *const this)
{
  PlayerEventComp *EventComp; // rax
  std::map<std::type_index,std::weak_ptr<Observer>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<std::type_index,std::weak_ptr<Observer>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<std::type_index,std::weak_ptr<Observer>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<const std::type_index,std::weak_ptr<Observer> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<const std::type_index,std::weak_ptr<Observer> > >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<const std::type_index,std::weak_ptr<Observer> > >::type *obs_wtr; // [rsp+38h] [rbp-8h]

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
  std::map<std::type_index,std::weak_ptr<Observer>>::clear(&this->event_observer_map_);
};

// Line 297: range 000000001507A43E-000000001507A52B
uint32_t __cdecl GachaActivity::getTotalRobotNum(const GachaActivity *const this)
{
  unsigned int total_num; // [rsp+1Ch] [rbp-34h]
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,unsigned int> *v6; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+48h] [rbp-8h]

  total_num = 0;
  __for_range = &this->robot_num_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->robot_num_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->robot_num_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,unsigned int>(v6);
    num = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v6);
    if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    total_num = SAFE_ADD<unsigned int,unsigned int>(total_num, *num);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  return total_num;
};

// Line 307: range 000000001507A52C-000000001507A8F7
uint32_t __cdecl GachaActivity::getCanRecvRobotNum(const GachaActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  const data::ActivityGachaExcelConfigMgrBase *v4; // rdx
  common::milog::MiLogStream *v5; // rax
  uint32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  ActivityGachaExcelConfigMgr *config_mgr; // [rsp+10h] [rbp-A0h]
  const data::ActivityGachaBaseExcelConfig *base_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v12; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-80h] BYREF
  char v14[96]; // [rsp+50h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 24 owner_total_gift_num:315";
  *(_QWORD *)(v1 + 16) = GachaActivity::getCanRecvRobotNum;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v12);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config.txt_config_mgr.activity_gacha_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v12);
  v4 = config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  base_config_ptr = data::ActivityGachaExcelConfigMgrBase::findActivityGachaBaseExcelConfig(v4, this->activity_id_);
  if ( base_config_ptr )
  {
    *(_DWORD *)(v1 + 32) = GachaActivity::getTotalRobotNum(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->gm_robot_limit_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gm_robot_limit_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->gm_robot_limit_ )
    {
      if ( this->gm_robot_limit_ <= *(_DWORD *)(v1 + 32) )
        result = 0;
      else
        result = this->gm_robot_limit_ - *(_DWORD *)(v1 + 32);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&base_config_ptr->robot_limit >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&base_config_ptr->robot_limit >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( base_config_ptr->robot_limit >= *(_DWORD *)(v1 + 32) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&base_config_ptr->robot_limit >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&base_config_ptr->robot_limit >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        result = base_config_ptr->robot_limit - *(_DWORD *)(v1 + 32);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/gacha_activity.cpp",
          "getCanRecvRobotNum",
          322);
        v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
               &v13,
               (const char (*)[30])"[GACHA] owner_total_gift_num:");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 32));
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v8, (const char (*)[16])" > robot_limit:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &base_config_ptr->robot_limit);
        common::milog::MiLogStream::~MiLogStream(&v13);
        result = 0;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/gacha_activity.cpp",
      "getCanRecvRobotNum",
      312);
    v5 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v13,
           (const char (*)[51])"[GACHA] base_config_ptr == nullptr, item_staget_: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->item_stage_);
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = 0;
  }
  if ( v14 == (char *)v1 )
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

// Line 330: range 000000001507A8F8-000000001507AAED
__int64 __fastcall GachaActivity::checkAddRobot(const GachaActivity *const this, uint32_t robot_id, uint32_t num)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  ActivityGachaExcelConfigMgr *config_mgr; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v3 + 8) = "1 32 4 12 robot_id:329";
  *(_QWORD *)(v3 + 16) = GachaActivity::checkAddRobot;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = robot_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11)->design_config.txt_config_mgr.activity_gacha_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( data::ActivityGachaExcelConfigMgrBase::findActivityGachaRobotExcelConfig(config_mgr, *(_DWORD *)(v3 + 32)) )
  {
    if ( num <= GachaActivity::getCanRecvRobotNum(this) )
      result = 0LL;
    else
      result = 0xFFFFFFFFLL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/gacha_activity.cpp",
      "checkAddRobot",
      334);
    v6 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v12, (const char (*)[18])"[GACHA] robot_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v7, (const char (*)[11])" not vaild");
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

// Line 345: range 000000001507AAEE-000000001507ACB3
__int64 __fastcall GachaActivity::addRobot(GachaActivity *const this, uint32_t robot_id, uint32_t num)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 result; // rax
  unsigned int *v7; // rdx
  SelectType v8; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v9; // rax
  SelectType *v10; // rdx
  unsigned int ret; // [rsp+1Ch] [rbp-74h]
  char v13[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 12 robot_id:344";
  *(_QWORD *)(v3 + 16) = GachaActivity::addRobot;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = robot_id;
  ret = GachaActivity::checkAddRobot(this, *(_DWORD *)(v3 + 32), num);
  if ( ret )
  {
    result = ret;
  }
  else
  {
    v7 = std::map<unsigned int,unsigned int>::operator[](
           &this->robot_num_map_,
           (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v8 = SAFE_ADD<unsigned int,unsigned int>(*v7, num);
    v9 = std::map<unsigned int,unsigned int>::operator[](
           &this->robot_num_map_,
           (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 32));
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v9);
    }
    *v10 = v8;
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

// Line 356: range 000000001507ACB4-000000001507AF79
__int64 __fastcall GachaActivity::checkSubRobot(const GachaActivity *const this, uint32_t robot_id, uint32_t num)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v9; // rdx
  char v10; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self __x; // [rsp+10h] [rbp-C0h] BYREF
  const ActivityGachaExcelConfigMgr *config_mgr; // [rsp+18h] [rbp-B8h]
  std::shared_ptr<Config> v14; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-A0h] BYREF
  char v16[128]; // [rsp+50h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 robot_id:355 64 8 8 iter:363";
  *(_QWORD *)(v3 + 16) = GachaActivity::checkSubRobot;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = robot_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.activity_gacha_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( data::ActivityGachaExcelConfigMgrBase::findActivityGachaRobotExcelConfig(config_mgr, *(_DWORD *)(v3 + 48)) )
  {
    *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                          &this->robot_num_map_,
                                                                          (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 48));
    __x._M_node = std::map<unsigned int,unsigned int>::end(&this->robot_num_map_)._M_node;
    if ( std::operator==(
           &__x,
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 64)) )
    {
      goto LABEL_10;
    }
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v9 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( num > v9->second )
LABEL_10:
      v10 = 1;
    else
      v10 = 0;
    if ( v10 )
      result = 0xFFFFFFFFLL;
    else
      result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/gacha_activity.cpp",
      "checkSubRobot",
      360);
    v6 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v15, (const char (*)[18])"[GACHA] robot_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v7, (const char (*)[11])" not vaild");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 0xFFFFFFFFLL;
  }
  if ( v16 == (char *)v3 )
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

// Line 372: range 000000001507AF7A-000000001507B0B9
__int64 __fastcall GachaActivity::subRobot(GachaActivity *const this, uint32_t robot_id, uint32_t num)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 result; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v7; // rax
  unsigned int ret; // [rsp+1Ch] [rbp-64h]
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 12 robot_id:371";
  *(_QWORD *)(v3 + 16) = GachaActivity::subRobot;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = robot_id;
  ret = GachaActivity::checkSubRobot(this, *(_DWORD *)(v3 + 32), num);
  if ( ret )
  {
    result = ret;
  }
  else
  {
    v7 = std::map<unsigned int,unsigned int>::operator[](
           &this->robot_num_map_,
           (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *v7 -= num;
    result = 0LL;
  }
  if ( v10 == (char *)v3 )
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

// Line 384: range 000000001507B0BA-000000001507B905
__int64 __fastcall GachaActivity::getTargetInfo(GachaActivity *const this, uint32_t target_id, unsigned __int64 info)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  const ActivityGachaExcelConfigMgr *v6; // rcx
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  std::vector<unsigned int>::size_type v9; // r15
  std::vector<unsigned int>::size_type v10; // r15
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::vector<unsigned int>::size_type v14; // r15
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::vector<unsigned int>::const_reference v18; // rdx
  std::vector<unsigned int>::const_reference v19; // rdx
  std::vector<unsigned int>::const_reference v20; // rdx
  common::milog::MiLogStream *v21; // rax
  uint32_t v22; // ecx
  uint32_t v23; // ecx
  uint32_t v24; // edi
  uint32_t task_id; // [rsp+20h] [rbp-130h]
  uint32_t group_num; // [rsp+24h] [rbp-12Ch]
  std::_Rb_tree_const_iterator<unsigned int>::_Self __x; // [rsp+28h] [rbp-128h] BYREF
  std::_Rb_tree_const_iterator<unsigned int>::_Self __y; // [rsp+30h] [rbp-120h] BYREF
  const ActivityGachaExcelConfigMgr *config_mgr; // [rsp+38h] [rbp-118h]
  const data::ActivityGachaStageExcelConfig *stage_config_ptr; // [rsp+40h] [rbp-110h]
  const std::set<unsigned int> *target_set; // [rsp+48h] [rbp-108h]
  std::shared_ptr<Config> v33; // [rsp+50h] [rbp-100h] BYREF
  common::milog::MiLogStream v34; // [rsp+60h] [rbp-F0h] BYREF
  common::milog::MiLogStream v35; // [rsp+80h] [rbp-D0h] BYREF
  common::milog::MiLogStream v36; // [rsp+A0h] [rbp-B0h] BYREF
  char v37[144]; // [rsp+C0h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 5 i:392 48 4 12 group_id:412 64 4 13 target_id:383";
  *(_QWORD *)(v3 + 16) = GachaActivity::getTargetInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = target_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v33);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33)->design_config.txt_config_mgr.activity_gacha_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v33);
  v6 = config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  stage_config_ptr = data::ActivityGachaExcelConfigMgrBase::findActivityGachaStageExcelConfig(v6, this->item_stage_);
  if ( stage_config_ptr )
  {
    for ( *(_DWORD *)(v3 + 32) = 0; ; ++*(_DWORD *)(v3 + 32) )
    {
      v9 = *(unsigned int *)(v3 + 32);
      if ( v9 >= std::vector<unsigned int>::size(&stage_config_ptr->group_id_list) )
      {
        result = 0xFFFFFFFFLL;
        goto LABEL_40;
      }
      v10 = *(unsigned int *)(v3 + 32);
      if ( v10 >= std::vector<unsigned int>::size(&stage_config_ptr->group_num_list) )
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/gacha_activity.cpp",
          "getTargetInfo",
          397);
        v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v34, (const char (*)[11])"[GACHA] i:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v3 + 32));
        v13 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v12,
                (const char (*)[18])", group_num_list:");
        common::milog::MiLogStream::operator<<<unsigned int>(v13, &stage_config_ptr->group_num_list);
        common::milog::MiLogStream::~MiLogStream(&v34);
        result = 0xFFFFFFFFLL;
        goto LABEL_40;
      }
      task_id = 0;
      if ( *(char *)(((unsigned __int64)&stage_config_ptr->is_tech >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&stage_config_ptr->is_tech);
      if ( stage_config_ptr->is_tech )
      {
        v14 = *(unsigned int *)(v3 + 32);
        if ( v14 >= std::vector<unsigned int>::size(&stage_config_ptr->task_content_list) )
        {
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/gacha_activity.cpp",
            "getTargetInfo",
            407);
          v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v35, (const char (*)[11])"[GACHA] i:");
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v15,
                  (const unsigned int *)(v3 + 32));
          v17 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  v16,
                  (const char (*)[21])", task_content_list:");
          common::milog::MiLogStream::operator<<<unsigned int>(v17, &stage_config_ptr->task_content_list);
          common::milog::MiLogStream::~MiLogStream(&v35);
          result = 0xFFFFFFFFLL;
          goto LABEL_40;
        }
        v18 = std::vector<unsigned int>::operator[](&stage_config_ptr->task_content_list, *(unsigned int *)(v3 + 32));
        if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        task_id = *v18;
      }
      v19 = std::vector<unsigned int>::operator[](&stage_config_ptr->group_id_list, *(unsigned int *)(v3 + 32));
      if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 48) = *v19;
      v20 = std::vector<unsigned int>::operator[](&stage_config_ptr->group_num_list, *(unsigned int *)(v3 + 32));
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      group_num = *v20;
      target_set = ActivityGachaExcelConfigMgr::findTargetSetByGroupId(config_mgr, *(_DWORD *)(v3 + 48));
      if ( !target_set )
      {
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/gacha_activity.cpp",
          "getTargetInfo",
          418);
        v21 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                &v36,
                (const char (*)[26])"[GACHA] invaild group_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v36);
        result = 0xFFFFFFFFLL;
        goto LABEL_40;
      }
      __y._M_node = std::set<unsigned int>::find(target_set, (const std::set<unsigned int>::key_type *)(v3 + 64))._M_node;
      __x._M_node = std::set<unsigned int>::end(target_set)._M_node;
      if ( std::operator!=(&__x, &__y) )
        break;
    }
    v22 = *(_DWORD *)(v3 + 48);
    if ( *(_BYTE *)((info >> 3) + 0x7FFF8000) != 0 && (char)((info & 7) + 3) >= *(_BYTE *)((info >> 3) + 0x7FFF8000) )
      __asan_report_store4(info);
    *(_DWORD *)info = v22;
    if ( *(_BYTE *)(((info + 4) >> 3) + 0x7FFF8000) != 0
      && (char)(((info + 4) & 7) + 3) >= *(_BYTE *)(((info + 4) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(info + 4);
    }
    *(_DWORD *)(info + 4) = group_num;
    v23 = *(_DWORD *)(v3 + 32);
    if ( *(_BYTE *)(((info + 8) >> 3) + 0x7FFF8000) != 0
      && (char)(((info + 8) & 7) + 3) >= *(_BYTE *)(((info + 8) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(info + 8);
    }
    *(_DWORD *)(info + 8) = v23;
    v24 = std::vector<unsigned int>::size(&stage_config_ptr->group_id_list);
    if ( *(_BYTE *)(((info + 12) >> 3) + 0x7FFF8000) != 0
      && (char)(((info + 12) & 7) + 3) >= *(_BYTE *)(((info + 12) >> 3) + 0x7FFF8000) )
    {
      v24 = info + 12;
      __asan_report_store4(info + 12);
    }
    *(_DWORD *)(info + 12) = v24;
    if ( *(_BYTE *)(((info + 16) >> 3) + 0x7FFF8000) != 0
      && (char)(((info + 16) & 7) + 3) >= *(_BYTE *)(((info + 16) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(info + 16);
    }
    *(_DWORD *)(info + 16) = task_id;
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/gacha_activity.cpp",
      "getTargetInfo",
      389);
    v7 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v36,
           (const char (*)[52])"[GACHA] stage_config_ptr == nullptr, item_staget_: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->item_stage_);
    common::milog::MiLogStream::~MiLogStream(&v36);
    result = 0xFFFFFFFFLL;
  }
LABEL_40:
  if ( v37 == (char *)v3 )
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

// Line 437: range 000000001507B906-000000001507C89C
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall GachaActivity::checkAndUpdate(GachaActivity *const this, uint32_t target_id, unsigned int type)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int M_allocated_capacity_high; // r14d
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  const ActivityGachaExcelConfigMgr *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  PlayerWidgetComp *WidgetComp; // rax
  uint32_t QuickUseMaterialId; // ecx
  const ActivityGachaExcelConfigMgr *v15; // rcx
  common::milog::MiLogStream *v16; // rax
  int v17; // ecx
  std::map<unsigned int,unsigned int>::mapped_type *v18; // rdx
  int v19; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v20; // rdx
  const unsigned int *v21; // rdx
  std::map<unsigned int,unsigned int>::mapped_type *v22; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v23; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v24; // rdx
  int v25; // ecx
  uint32_t v26; // eax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGachaActivityStageChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // r14
  unsigned int Uid; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGachaActivityStageChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGachaActivityStageChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGachaActivityStageChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  Player *v33; // r14
  __int64 result; // rax
  std::string typea; // [rsp+0h] [rbp-1E0h] OVERLAPPED BYREF
  char *val; // [rsp+20h] [rbp-1C0h] BYREF
  const ActivityGachaExcelConfigMgr *config_mgr; // [rsp+28h] [rbp-1B8h]
  const data::ActivityGachaBaseExcelConfig *base_config_ptr; // [rsp+30h] [rbp-1B0h]
  const data::ActivityGachaStageExcelConfig *stage_config_ptr; // [rsp+38h] [rbp-1A8h]
  const data::ActivityGachaTargetExcelConfig *target_config_ptr; // [rsp+40h] [rbp-1A0h]
  GachaActivityStageData *stage_data; // [rsp+48h] [rbp-198h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+50h] [rbp-190h] BYREF
  std::shared_ptr<google::protobuf::Message> v43; // [rsp+60h] [rbp-180h] BYREF
  std::string __lhs; // [rsp+70h] [rbp-170h] BYREF
  std::string v45; // [rsp+90h] [rbp-150h] BYREF
  std::string __rhs; // [rsp+B0h] [rbp-130h] BYREF
  common::milog::MiLogStream v47; // [rsp+D0h] [rbp-110h] BYREF
  char v48[240]; // [rsp+F0h] [rbp-F0h] BYREF

  typea._M_string_length = (std::string::size_type)this;
  typea._M_dataplus._M_p = (std::string::pointer)__PAIR64__(target_id, type);
  v3 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 1 10 holder:529 64 4 11 add_num:496 80 4 13 target_id:436 96 16 11 log_ptr:530 128 20 8 info:475";
  *(_QWORD *)(v3 + 16) = GachaActivity::checkAndUpdate;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -217841664;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 80) = HIDWORD(typea._M_dataplus._M_p);
  if ( !BaseActivity::isOpening((const BaseActivity *const)typea._M_string_length, 0)
    || BaseActivity::isSettled((const BaseActivity *const)typea._M_string_length) )
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/gacha_activity.cpp",
      "checkAndUpdate",
      440);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v47,
      (const char (*)[32])"[GACHA] activity is not opening");
    common::milog::MiLogStream::~MiLogStream(&v47);
    M_allocated_capacity_high = -1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/gacha_activity.cpp",
      "checkAndUpdate",
      443);
    v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v47, (const char (*)[14])"[GACHA] type:");
    val = (char *)data::enumValToStr((data::ActivityGachaTargetType)typea._M_dataplus._M_p);
    v9 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v8, (const char *const *)&val);
    v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])", target_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream(&v47);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v43);
    config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43)->design_config.txt_config_mgr.activity_gacha_config_mgr;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v43);
    v11 = config_mgr;
    if ( *(_BYTE *)(((typea._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((typea._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    base_config_ptr = data::ActivityGachaExcelConfigMgrBase::findActivityGachaBaseExcelConfig(
                        v11,
                        *(_DWORD *)(typea._M_string_length + 32));
    if ( base_config_ptr )
    {
      if ( *(_BYTE *)(((typea._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      WidgetComp = Player::getWidgetComp(*(Player *const *)(typea._M_string_length + 24));
      QuickUseMaterialId = PlayerWidgetComp::getQuickUseMaterialId(WidgetComp);
      if ( *(_BYTE *)(((unsigned __int64)&base_config_ptr->material_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)base_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&base_config_ptr->material_id >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( QuickUseMaterialId == base_config_ptr->material_id )
      {
        v15 = config_mgr;
        if ( *(_BYTE *)(((typea._M_string_length + 932) >> 3) + 0x7FFF8000) != 0
          && (char)(((LOBYTE(typea._M_string_length) - 92) & 7) + 3) >= *(_BYTE *)(((typea._M_string_length + 932) >> 3)
                                                                                 + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        stage_config_ptr = data::ActivityGachaExcelConfigMgrBase::findActivityGachaStageExcelConfig(
                             v15,
                             *(_DWORD *)(typea._M_string_length + 932));
        if ( stage_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)stage_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_config_ptr->type >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( LODWORD(typea._M_dataplus._M_p) == stage_config_ptr->type )
          {
            target_config_ptr = ActivityGachaExcelConfigMgr::findConfigById(config_mgr, *(_DWORD *)(v3 + 80));
            if ( target_config_ptr )
            {
              *(_DWORD *)(v3 + 128) = 0;
              *(_DWORD *)(v3 + 132) = 0;
              *(_DWORD *)(v3 + 136) = 0;
              *(_DWORD *)(v3 + 140) = 0;
              *(_DWORD *)(v3 + 144) = 0;
              HIDWORD(typea._anon_0._M_allocated_capacity) = GachaActivity::getTargetInfo(
                                                               (GachaActivity *const)typea._M_string_length,
                                                               *(_DWORD *)(v3 + 80),
                                                               v3 + 128);
              if ( HIDWORD(typea._anon_0._M_allocated_capacity) )
              {
                M_allocated_capacity_high = HIDWORD(typea._anon_0._M_allocated_capacity);
              }
              else
              {
                v17 = *(_DWORD *)(v3 + 136);
                if ( *(_BYTE *)(((typea._M_string_length + 936) >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((typea._M_string_length + 936) >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                if ( v17 == *(_DWORD *)(typea._M_string_length + 936) )
                {
                  v18 = std::map<unsigned int,unsigned int>::operator[](
                          (std::map<unsigned int,unsigned int> *const)(typea._M_string_length + 1184),
                          (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 128));
                  if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  if ( *v18 < *(_DWORD *)(v3 + 132) )
                  {
                    *((_DWORD *)&typea._anon_0._M_allocated_capacity + 2) = GachaActivity::calcPercent((GachaActivity *const)typea._M_string_length);
                    if ( *(_BYTE *)(((typea._M_string_length + 1176) >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((typea._M_string_length + 1176) >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4();
                    }
                    *(_DWORD *)(v3 + 64) = *(_DWORD *)(typea._M_string_length + 1176);
                    if ( LODWORD(typea._M_dataplus._M_p) == 2 )
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&base_config_ptr->elem_time >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)&base_config_ptr->elem_time >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_load4();
                      }
                      *(_DWORD *)(v3 + 64) *= base_config_ptr->elem_time;
                    }
                    if ( *(_BYTE *)(((unsigned __int64)&target_config_ptr->scale >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)target_config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&target_config_ptr->scale >> 3)
                                                                                       + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    *(_DWORD *)(v3 + 64) *= target_config_ptr->scale;
                    v19 = *(_DWORD *)(v3 + 132);
                    v20 = std::map<unsigned int,unsigned int>::operator[](
                            (std::map<unsigned int,unsigned int> *const)(typea._M_string_length + 1184),
                            (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 128));
                    if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    *(_DWORD *)typea._anon_0._M_local_buf = v19 - *v20;
                    v21 = std::min<unsigned int>((const unsigned int *)(v3 + 64), (const unsigned int *)&typea._anon_0);
                    if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    *(_DWORD *)(v3 + 64) = *v21;
                    v22 = std::map<unsigned int,unsigned int>::operator[](
                            (std::map<unsigned int,unsigned int> *const)(typea._M_string_length + 1184),
                            (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 128));
                    if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    *v22 += *(_DWORD *)(v3 + 64);
                    stage_data = std::map<unsigned int,GachaActivityStageData>::operator[](
                                   (std::map<unsigned int,GachaActivityStageData> *const)(typea._M_string_length + 960),
                                   (const std::map<unsigned int,GachaActivityStageData>::key_type *)(typea._M_string_length + 932));
                    v23 = std::map<unsigned int,unsigned int>::operator[](
                            &stage_data->target_num_map,
                            (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 80));
                    if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    *v23 += *(_DWORD *)(v3 + 64);
                    v24 = std::map<unsigned int,unsigned int>::operator[](
                            (std::map<unsigned int,unsigned int> *const)(typea._M_string_length + 1184),
                            (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 128));
                    if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    if ( *v24 >= *(_DWORD *)(v3 + 132) )
                    {
                      v25 = *(_DWORD *)(v3 + 140);
                      if ( *(_BYTE *)(((typea._M_string_length + 936) >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((typea._M_string_length + 936) >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_load4();
                      }
                      if ( v25 == ++*(_DWORD *)(typea._M_string_length + 936) )
                        *(_DWORD *)(typea._M_string_length + 936) = *(_DWORD *)(v3 + 140) - 1;
                      if ( *(_DWORD *)(v3 + 144) )
                        BaseActivity::updateQuestContent(
                          (BaseActivity *const)typea._M_string_length,
                          *(_DWORD *)(v3 + 144));
                    }
                    if ( *(char *)(((unsigned __int64)&stage_config_ptr->is_tech >> 3) + 0x7FFF8000) < 0 )
                      __asan_report_load1(&stage_config_ptr->is_tech);
                    if ( stage_config_ptr->is_tech )
                    {
                      GachaActivity::itemStageChange((GachaActivity *const)typea._M_string_length, 0);
                    }
                    else
                    {
                      v26 = GachaActivity::calcSubPercent((GachaActivity *const)typea._M_string_length);
                      GachaActivity::sendNotifyToClient((GachaActivity *const)typea._M_string_length, v26);
                    }
                    *((_DWORD *)&typea._anon_0._M_allocated_capacity + 3) = GachaActivity::calcPercent((GachaActivity *const)typea._M_string_length);
                    if ( *(_BYTE *)(((typea._M_string_length + 24) >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    BasicComp = Player::getBasicComp(*(Player *const *)(typea._M_string_length + 24));
                    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v47, BasicComp);
                    StatLogUtils::ContextHolder::ContextHolder(
                      (StatLogUtils::ContextHolder *const)(v3 + 48),
                      0xE12u,
                      typea);
                    std::string::~string(&v47);
                    common::tools::perf::make_shared<proto_log::PlayerLogBodyGachaActivityStageChange>();
                    v28 = std::__shared_ptr_access<proto_log::PlayerLogBodyGachaActivityStageChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGachaActivityStageChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                    if ( *(_BYTE *)(((typea._M_string_length + 940) >> 3) + 0x7FFF8000) != 0
                      && (char)(((LOBYTE(typea._M_string_length) - 84) & 7) + 3) >= *(_BYTE *)(((typea._M_string_length
                                                                                               + 940) >> 3)
                                                                                             + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    std::to_string(&__rhs, *(_DWORD *)(typea._M_string_length + 940));
                    if ( *(_BYTE *)(((typea._M_string_length + 24) >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    Uid = Player::getUid(*(const Player *const *)(typea._M_string_length + 24));
                    std::to_string(&__lhs, Uid);
                    std::operator+<char>(&v45, &__lhs, "-");
                    std::operator+<char>((std::string *)&v47, &v45, &__rhs);
                    proto_log::PlayerLogBodyGachaActivityStageChange::set_transaction(v28, (std::string *)&v47);
                    std::string::~string(&v47);
                    std::string::~string(&v45);
                    std::string::~string(&__lhs);
                    std::string::~string(&__rhs);
                    v30 = std::__shared_ptr_access<proto_log::PlayerLogBodyGachaActivityStageChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGachaActivityStageChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                    if ( *(_BYTE *)(((typea._M_string_length + 932) >> 3) + 0x7FFF8000) != 0
                      && (char)(((LOBYTE(typea._M_string_length) - 92) & 7) + 3) >= *(_BYTE *)(((typea._M_string_length
                                                                                               + 932) >> 3)
                                                                                             + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    proto_log::PlayerLogBodyGachaActivityStageChange::set_cur_stage_id(
                      v30,
                      *(_DWORD *)(typea._M_string_length + 932));
                    v31 = std::__shared_ptr_access<proto_log::PlayerLogBodyGachaActivityStageChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGachaActivityStageChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                    proto_log::PlayerLogBodyGachaActivityStageChange::set_new_percent(
                      v31,
                      *((google::protobuf::uint32 *)&typea._anon_0._M_allocated_capacity + 3));
                    v32 = std::__shared_ptr_access<proto_log::PlayerLogBodyGachaActivityStageChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGachaActivityStageChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                    proto_log::PlayerLogBodyGachaActivityStageChange::set_old_percent(
                      v32,
                      *((google::protobuf::uint32 *)&typea._anon_0._M_allocated_capacity + 2));
                    if ( *(_BYTE *)(((typea._M_string_length + 24) >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    v33 = *(Player **)(typea._M_string_length + 24);
                    std::shared_ptr<google::protobuf::Message>::shared_ptr(&v43, 0LL);
                    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGachaActivityStageChange,void>(
                      &p_body_ptr,
                      (const std::shared_ptr<proto_log::PlayerLogBodyGachaActivityStageChange> *)(v3 + 96));
                    Player::printStatLog(v33, &p_body_ptr, &v43, 0xEu);
                    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
                    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v43);
                    M_allocated_capacity_high = 0;
                    std::shared_ptr<proto_log::PlayerLogBodyGachaActivityStageChange>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGachaActivityStageChange> *const)(v3 + 96));
                    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
                  }
                  else
                  {
                    M_allocated_capacity_high = -1;
                  }
                }
                else
                {
                  M_allocated_capacity_high = -1;
                }
              }
            }
            else
            {
              M_allocated_capacity_high = -1;
            }
          }
          else
          {
            M_allocated_capacity_high = -1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v47,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/gacha_activity.cpp",
            "checkAndUpdate",
            461);
          v16 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                  &v47,
                  (const char (*)[52])"[GACHA] stage_config_ptr == nullptr, item_staget_: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v16,
            (const unsigned int *)(typea._M_string_length + 932));
          common::milog::MiLogStream::~MiLogStream(&v47);
          M_allocated_capacity_high = -1;
        }
      }
      else
      {
        M_allocated_capacity_high = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/gacha_activity.cpp",
        "checkAndUpdate",
        449);
      v12 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              &v47,
              (const char (*)[51])"[GACHA] base_config_ptr == nullptr, item_staget_: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v12,
        (const unsigned int *)(typea._M_string_length + 932));
      common::milog::MiLogStream::~MiLogStream(&v47);
      M_allocated_capacity_high = -1;
    }
  }
  result = M_allocated_capacity_high;
  if ( v48 == (char *)v3 )
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
  return result;
};

// Line 541: range 000000001507C89E-000000001507CD8A
uint32_t __cdecl GachaActivity::calcPercent(GachaActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  ActivityGachaExcelConfigMgr *p_activity_gacha_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  uint32_t result; // eax
  std::vector<unsigned int>::size_type v7; // r14
  std::vector<unsigned int>::size_type v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  const std::map<unsigned int,unsigned int>::key_type *v12; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v13; // rdx
  std::vector<unsigned int>::const_reference v14; // rdx
  unsigned int total_group_num; // [rsp+10h] [rbp-B0h]
  uint32_t total_target_group_num; // [rsp+14h] [rbp-ACh]
  const data::ActivityGachaStageExcelConfig *stage_config_ptr; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Config> v18; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-90h] BYREF
  char v20[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 5 i:552";
  *(_QWORD *)(v1 + 16) = GachaActivity::calcPercent;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v18);
  p_activity_gacha_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.activity_gacha_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  stage_config_ptr = data::ActivityGachaExcelConfigMgrBase::findActivityGachaStageExcelConfig(
                       p_activity_gacha_config_mgr,
                       this->item_stage_);
  std::shared_ptr<Config>::~shared_ptr(&v18);
  if ( stage_config_ptr )
  {
    total_group_num = 0;
    total_target_group_num = 0;
    for ( *(_DWORD *)(v1 + 32) = 0; ; ++*(_DWORD *)(v1 + 32) )
    {
      v7 = *(unsigned int *)(v1 + 32);
      if ( v7 >= std::vector<unsigned int>::size(&stage_config_ptr->group_id_list) )
        break;
      v8 = *(unsigned int *)(v1 + 32);
      if ( v8 >= std::vector<unsigned int>::size(&stage_config_ptr->group_num_list) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/gacha_activity.cpp",
          "calcPercent",
          557);
        v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v19, (const char (*)[11])"[GACHA] i:");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v1 + 32));
        v11 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v10,
                (const char (*)[18])", group_num_list:");
        common::milog::MiLogStream::operator<<<unsigned int>(v11, &stage_config_ptr->group_num_list);
        common::milog::MiLogStream::~MiLogStream(&v19);
        result = 0;
        goto LABEL_22;
      }
      v12 = std::vector<unsigned int>::operator[](&stage_config_ptr->group_id_list, *(unsigned int *)(v1 + 32));
      v13 = std::map<unsigned int,unsigned int>::operator[](&this->group_num_map_, v12);
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      total_group_num += *v13;
      v14 = std::vector<unsigned int>::operator[](&stage_config_ptr->group_num_list, *(unsigned int *)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      total_target_group_num += *v14;
    }
    if ( total_target_group_num )
    {
      if ( total_group_num < total_target_group_num )
        result = SAFE_MULTIPLY<unsigned int,unsigned int>(total_group_num, 0x64u) / total_target_group_num;
      else
        result = 100;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/gacha_activity.cpp",
        "calcPercent",
        565);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        &v19,
        (const char (*)[36])"[GACHA] total_target_group_num == 0");
      common::milog::MiLogStream::~MiLogStream(&v19);
      result = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/gacha_activity.cpp",
      "calcPercent",
      545);
    v5 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v19,
           (const char (*)[29])"[GACHA] invaild item_stage_:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->item_stage_);
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = 0;
  }
LABEL_22:
  if ( v20 == (char *)v1 )
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

// Line 578: range 000000001507CD8C-000000001507D250
uint32_t __cdecl GachaActivity::calcSubPercent(GachaActivity *const this)
{
  ActivityGachaExcelConfigMgr *p_activity_gacha_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  std::vector<unsigned int>::size_type sub_stage; // rbx
  std::vector<unsigned int>::size_type v5; // rbx
  char v6; // al
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  const std::vector<unsigned int> *p_group_id_list; // rcx
  const std::map<unsigned int,unsigned int>::key_type *v13; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v14; // rdx
  const std::vector<unsigned int> *p_group_num_list; // rcx
  std::vector<unsigned int>::const_reference v16; // rdx
  unsigned int total_group_num; // [rsp+10h] [rbp-50h]
  uint32_t total_target_group_num; // [rsp+14h] [rbp-4Ch]
  const data::ActivityGachaStageExcelConfig *stage_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v20; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  p_activity_gacha_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.activity_gacha_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  stage_config_ptr = data::ActivityGachaExcelConfigMgrBase::findActivityGachaStageExcelConfig(
                       p_activity_gacha_config_mgr,
                       this->item_stage_);
  std::shared_ptr<Config>::~shared_ptr(&v20);
  if ( stage_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->sub_stage_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->sub_stage_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    sub_stage = this->sub_stage_;
    if ( sub_stage >= std::vector<unsigned int>::size(&stage_config_ptr->group_num_list) )
      goto LABEL_11;
    if ( *(_BYTE *)(((unsigned __int64)&this->sub_stage_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->sub_stage_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v5 = this->sub_stage_;
    if ( v5 < std::vector<unsigned int>::size(&stage_config_ptr->group_id_list) )
      v6 = 0;
    else
LABEL_11:
      v6 = 1;
    if ( v6 )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/gacha_activity.cpp",
        "calcSubPercent",
        590);
      v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
             &v21,
             (const char (*)[20])"[GACHA] sub_stage_:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->sub_stage_);
      v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v8, (const char (*)[18])", group_num_list:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int>(v9, &stage_config_ptr->group_num_list);
      v11 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v10, (const char (*)[17])", group_id_list:");
      common::milog::MiLogStream::operator<<<unsigned int>(v11, &stage_config_ptr->group_id_list);
      common::milog::MiLogStream::~MiLogStream(&v21);
      return 0;
    }
    else
    {
      p_group_id_list = &stage_config_ptr->group_id_list;
      if ( *(_BYTE *)(((unsigned __int64)&this->sub_stage_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->sub_stage_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v13 = std::vector<unsigned int>::operator[](p_group_id_list, this->sub_stage_);
      v14 = std::map<unsigned int,unsigned int>::operator[](&this->group_num_map_, v13);
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      total_group_num = *v14;
      p_group_num_list = &stage_config_ptr->group_num_list;
      if ( *(_BYTE *)(((unsigned __int64)&this->sub_stage_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->sub_stage_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v16 = std::vector<unsigned int>::operator[](p_group_num_list, this->sub_stage_);
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      total_target_group_num = *v16;
      if ( *v16 )
      {
        if ( total_group_num < total_target_group_num )
          return SAFE_MULTIPLY<unsigned int,unsigned int>(total_group_num, 0x64u) / total_target_group_num;
        else
          return 100;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/gacha_activity.cpp",
          "calcSubPercent",
          598);
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          &v21,
          (const char (*)[36])"[GACHA] total_target_group_num == 0");
        common::milog::MiLogStream::~MiLogStream(&v21);
        return 0;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/gacha_activity.cpp",
      "calcSubPercent",
      582);
    v2 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v21,
           (const char (*)[29])"[GACHA] invaild item_stage_:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->item_stage_);
    common::milog::MiLogStream::~MiLogStream(&v21);
    return 0;
  }
};

// Line 610: range 000000001507D252-000000001507D985
int32_t __cdecl GachaActivity::itemStageChange(GachaActivity *const this, bool is_create_robot)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t result; // eax
  ActivityGachaExcelConfigMgr *p_activity_gacha_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  uint32_t v9; // edx
  common::milog::MiLogStream *v10; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,GachaActivityStageData> >::pointer v11; // rdx
  bool *p_is_open; // rax
  PlayerEventComp *EventComp; // r13
  uint32_t next_stage_id; // ecx
  std::_Rb_tree_iterator<std::pair<unsigned int const,GachaActivityStageData> >::_Self __y; // [rsp+20h] [rbp-B0h] BYREF
  const data::ActivityGachaStageExcelConfig *stage_config_ptr; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<GachaFinishStageEvent> __r; // [rsp+30h] [rbp-A0h] BYREF
  std::shared_ptr<Config> v18; // [rsp+40h] [rbp-90h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-80h] BYREF
  char v20[96]; // [rsp+70h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 iter:631";
  *(_QWORD *)(v2 + 16) = GachaActivity::itemStageChange;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0)
    || BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/gacha_activity.cpp",
      "itemStageChange",
      613);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v19,
      (const char (*)[32])"[GACHA] activity is not opening");
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v18);
    p_activity_gacha_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.activity_gacha_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    stage_config_ptr = data::ActivityGachaExcelConfigMgrBase::findActivityGachaStageExcelConfig(
                         p_activity_gacha_config_mgr,
                         this->item_stage_);
    std::shared_ptr<Config>::~shared_ptr(&v18);
    if ( stage_config_ptr )
    {
      if ( GachaActivity::calcPercent(this) == 100 )
      {
        *(std::map<unsigned int,GachaActivityStageData>::iterator *)(v2 + 32) = std::map<unsigned int,GachaActivityStageData>::find(
                                                                                  &this->stage_data_map_,
                                                                                  &stage_config_ptr->next_stage_id);
        __y._M_node = std::map<unsigned int,GachaActivityStageData>::end(&this->stage_data_map_)._M_node;
        if ( std::operator==(
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,GachaActivityStageData> >::_Self *)(v2 + 32),
               &__y) )
        {
          common::milog::MiLogStream::create(
            &v19,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/gacha_activity.cpp",
            "itemStageChange",
            634);
          v10 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                  &v19,
                  (const char (*)[55])"[GACHA] stage_config_ptr->next_stage_id not invaild : ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &stage_config_ptr->next_stage_id);
          common::milog::MiLogStream::~MiLogStream(&v19);
          result = -1;
        }
        else
        {
          v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,GachaActivityStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GachaActivityStageData> > *const)(v2 + 32));
          p_is_open = &v11->second.is_open;
          if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(p_is_open);
          }
          if ( !v11->second.is_open )
            goto LABEL_21;
          if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->is_need_finish >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)stage_config_ptr + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_config_ptr->is_need_finish >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load1(&stage_config_ptr->is_need_finish);
          }
          if ( !stage_config_ptr->is_need_finish )
            goto LABEL_43;
          if ( *(char *)(((unsigned __int64)&stage_config_ptr->is_tech >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&stage_config_ptr->is_tech);
          if ( !stage_config_ptr->is_tech && !is_create_robot )
          {
LABEL_21:
            GachaActivity::sendNotifyToClient(this, 0x64u);
            result = -1;
          }
          else
          {
LABEL_43:
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            EventComp = Player::getEventComp(this->player_);
            common::tools::perf::make_shared<GachaFinishStageEvent,unsigned int &>(
              (unsigned int *)&__r,
              &this->item_stage_);
            std::shared_ptr<BaseEvent>::shared_ptr<GachaFinishStageEvent,void>(
              (std::shared_ptr<BaseEvent> *const)&v18,
              &__r);
            PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v18);
            std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v18);
            std::shared_ptr<GachaFinishStageEvent>::~shared_ptr(&__r);
            if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->next_stage_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)stage_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_config_ptr->next_stage_id >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            next_stage_id = stage_config_ptr->next_stage_id;
            if ( *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_store4(&this->item_stage_);
            }
            this->item_stage_ = next_stage_id;
            if ( *(_BYTE *)(((unsigned __int64)&this->sub_stage_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->sub_stage_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_store4(&this->sub_stage_);
            }
            this->sub_stage_ = 0;
            std::map<unsigned int,unsigned int>::clear(&this->group_num_map_);
            GachaActivity::sendNotifyToClient(this, 0);
            BaseActivity::updateAllConds((BaseActivity *const)this);
            BaseActivity::notifyClientData((BaseActivity *const)this, 0);
            result = 0;
          }
        }
      }
      else
      {
        v9 = GachaActivity::calcSubPercent(this);
        GachaActivity::sendNotifyToClient(this, v9);
        result = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/gacha_activity.cpp",
        "itemStageChange",
        619);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v19,
             (const char (*)[29])"[GACHA] invaild item_stage_:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->item_stage_);
      common::milog::MiLogStream::~MiLogStream(&v19);
      result = -1;
    }
  }
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

// Line 678: range 000000001507E176-000000001507E95B
int32_t __cdecl GachaActivity::guarProduct(GachaActivity *const this, uint32_t *robot_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const data::ActivityGachaExcelConfigMgrBase *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v9; // rax
  std::vector<unsigned int>::size_type v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdx
  std::vector<unsigned int>::reference v13; // rdx
  std::vector<unsigned int>::reference v14; // rdx
  std::vector<unsigned int>::reference v15; // rdx
  std::vector<unsigned int>::reference v16; // rdx
  uint32_t v17; // edx
  std::vector<unsigned int>::reference v18; // rdx
  int32_t result; // eax
  uint32_t last_create_robot_id; // [rsp+10h] [rbp-190h]
  uint32_t i; // [rsp+14h] [rbp-18Ch]
  ActivityGachaExcelConfigMgr *config_mgr; // [rsp+18h] [rbp-188h]
  std::shared_ptr<Config> v24; // [rsp+20h] [rbp-180h] BYREF
  common::milog::MiLogStream v25; // [rsp+30h] [rbp-170h] BYREF
  char v26[336]; // [rsp+50h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 8 19 base_config_ptr:680 80 24 20 create_robot_vec:686 144 24 27 normal_robot_select_vec:75"
                        "8 208 40 15 hidden_func:690";
  *(_QWORD *)(v2 + 16) = GachaActivity::guarProduct;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862723] = -218959360;
  v4[536862724] = 62194;
  v4[536862725] = -218959360;
  v4[536862726] = 62194;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v24);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24)->design_config.txt_config_mgr.activity_gacha_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v24);
  v5 = config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_QWORD *)(v2 + 48) = data::ActivityGachaExcelConfigMgrBase::findActivityGachaBaseExcelConfig(v5, this->activity_id_);
  if ( *(_QWORD *)(v2 + 48) )
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 80), &this->create_robot_vec_);
    M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 80))._M_current;
    v9._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 80))._M_current;
    std::reverse<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
      v9,
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
    *(_QWORD *)(v2 + 208) = v2 + 80;
    *(_QWORD *)(v2 + 216) = v2 + 48;
    *(_QWORD *)(v2 + 224) = config_mgr;
    *(_QWORD *)(v2 + 232) = robot_id;
    *(_QWORD *)(v2 + 240) = this;
    if ( GachaActivity::guarProduct(unsigned int &)::{lambda(void)#1}::operator()((const GachaActivity::guarProduct::<lambda()> *const)(v2 + 208)) )
    {
      v10 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 80));
      v11 = *(_QWORD *)(v2 + 48);
      if ( *(_BYTE *)(((unsigned __int64)(v11 + 36) >> 3) + 0x7FFF8000) != 0
        && (char)(((v11 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v11 + 36) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( v10 < *(unsigned int *)(v11 + 36) )
      {
        v7 = -1;
      }
      else
      {
        last_create_robot_id = 0;
        for ( i = 0; ; ++i )
        {
          v12 = *(_QWORD *)(v2 + 48);
          if ( *(_BYTE *)(((unsigned __int64)(v12 + 36) >> 3) + 0x7FFF8000) != 0
            && (char)(((v12 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v12 + 36) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( i >= *(_DWORD *)(v12 + 36) )
            break;
          if ( i < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 80)) )
          {
            if ( last_create_robot_id )
            {
              v14 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 80), i);
              if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              if ( last_create_robot_id != *v14 )
              {
                v7 = -1;
                goto LABEL_43;
              }
            }
            else
            {
              v13 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 80), i);
              if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              last_create_robot_id = *v13;
            }
          }
        }
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 144));
        common::tools::RandomUtils::randomSelect<unsigned int>(
          &config_mgr->normal_robot_vec,
          (std::vector<unsigned int> *)(v2 + 144),
          2u);
        if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 144)) == 2 )
        {
          v15 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 144), 0LL);
          if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( last_create_robot_id == *v15 )
          {
            v16 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 144), 1uLL);
            if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v17 = *v16;
          }
          else
          {
            v18 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 144), 0LL);
            if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v17 = *v18;
          }
          if ( *(_BYTE *)(((unsigned __int64)robot_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)robot_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)robot_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(robot_id);
          }
          *robot_id = v17;
          std::string::operator=(&this->gm_output_, "normal guar");
          v7 = 0;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v25,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/gacha_activity.cpp",
            "guarProduct",
            762);
          common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            &v25,
            (const char (*)[29])"[GACHA] random select failed");
          common::milog::MiLogStream::~MiLogStream(&v25);
          v7 = -1;
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 144));
      }
    }
    else
    {
      std::string::operator=(&this->gm_output_, "hidden guar");
      v7 = 0;
    }
LABEL_43:
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 80));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/gacha_activity.cpp",
      "guarProduct",
      683);
    v6 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v25,
           (const char (*)[51])"[GACHA] base_config_ptr == nullptr, item_staget_: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->item_stage_);
    common::milog::MiLogStream::~MiLogStream(&v25);
    v7 = -1;
  }
  result = v7;
  if ( v26 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
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
  return result;
};

// Line 690: range 000000001507D986-000000001507E175
int __cdecl GachaActivity::guarProduct(unsigned int &)::{lambda(void)#1}::operator()(
        const GachaActivity::guarProduct::<lambda()> *const __closure)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::vector<unsigned int>::size_type v4; // rsi
  unsigned __int64 base_config_ptr; // rax
  __int64 v6; // rax
  GachaActivity *this; // rax
  char v8; // al
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  std::vector<unsigned int>::size_type v11; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rcx
  const unsigned int *v19; // rcx
  int v20; // r14d
  std::vector<unsigned int>::reference v21; // rdx
  uint32_t *robot_id; // rcx
  uint32_t v23; // esi
  int result; // eax
  uint32_t i; // [rsp+1Ch] [rbp-D4h]
  common::milog::MiLogStream v26; // [rsp+20h] [rbp-D0h] BYREF
  char v27[176]; // [rsp+40h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 19 check_robot_num:692 64 24 27 hidden_robot_select_vec:718";
  *(_QWORD *)(v1 + 16) = GachaActivity::guarProduct(unsigned int &)::{lambda(void)#1}::operator();
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  *(_DWORD *)(v1 + 48) = 0;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = std::vector<unsigned int>::size(__closure->__create_robot_vec);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__base_config_ptr >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  base_config_ptr = (unsigned __int64)__closure->__base_config_ptr;
  if ( *(_BYTE *)((base_config_ptr >> 3) + 0x7FFF8000) )
    base_config_ptr = __asan_report_load8();
  v6 = *(_QWORD *)base_config_ptr;
  if ( *(_BYTE *)(((unsigned __int64)(v6 + 40) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(v6 + 40) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( v4 < *(unsigned int *)(v6 + 40) )
    goto LABEL_19;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this = __closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)&this->hidden_robot_finish_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hidden_robot_finish_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->hidden_robot_finish_num_ )
LABEL_19:
    v8 = 0;
  else
    v8 = 1;
  if ( v8 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__base_config_ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = (unsigned __int64)__closure->__base_config_ptr;
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8();
    v10 = *(_QWORD *)v9;
    if ( *(_BYTE *)(((unsigned __int64)(v10 + 40) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(v10 + 40) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 48) = *(_DWORD *)(v10 + 40);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v11 = std::vector<unsigned int>::size(__closure->__create_robot_vec);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__base_config_ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v12 = (unsigned __int64)__closure->__base_config_ptr;
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8();
    v13 = *(_QWORD *)v12;
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v12 + 44LL) >> 3) + 0x7FFF8000) != 0
      && (char)(((*(_BYTE *)v12 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v12 + 44LL) >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( v11 >= *(unsigned int *)(v13 + 44) )
    {
      v14 = (unsigned __int64)__closure->__base_config_ptr;
      if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        v14 = __asan_report_load8();
      v15 = *(_QWORD *)v14;
      if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v14 + 44LL) >> 3) + 0x7FFF8000) != 0
        && (char)(((*(_BYTE *)v14 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v14 + 44LL) >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 48) = *(_DWORD *)(v15 + 44);
    }
  }
  common::milog::MiLogStream::create(
    &v26,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/gacha_activity.cpp",
    "operator()",
    701);
  v16 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v26, (const char (*)[18])"check_robot_num: ");
  v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v1 + 48));
  v18 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v17, (const char (*)[21])", create_robot_vec: ");
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  common::milog::MiLogStream::operator<<<unsigned int>(v18, __closure->__create_robot_vec);
  common::milog::MiLogStream::~MiLogStream(&v26);
  if ( *(_DWORD *)(v1 + 48) )
  {
    for ( i = 0; i < *(_DWORD *)(v1 + 48); ++i )
    {
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( i < std::vector<unsigned int>::size(__closure->__create_robot_vec) )
      {
        if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v19 = std::vector<unsigned int>::operator[](__closure->__create_robot_vec, i);
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__config_mgr >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        if ( common::tools::MiscUtils::isContains<unsigned int>(&__closure->__config_mgr->hidden_robot_vec, v19) )
        {
          v20 = -1;
          goto LABEL_70;
        }
      }
    }
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__config_mgr >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::tools::RandomUtils::randomSelect<unsigned int>(
      &__closure->__config_mgr->hidden_robot_vec,
      (std::vector<unsigned int> *)(v1 + 64),
      1u);
    if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v1 + 64)) == 1 )
    {
      v21 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v1 + 64), 0LL);
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__robot_id >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      robot_id = __closure->__robot_id;
      if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v23 = *v21;
      if ( *(_BYTE *)(((unsigned __int64)robot_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)robot_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)robot_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(robot_id);
      }
      *robot_id = v23;
      v20 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/gacha_activity.cpp",
        "operator()",
        722);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        &v26,
        (const char (*)[29])"[GACHA] random select failed");
      common::milog::MiLogStream::~MiLogStream(&v26);
      v20 = -1;
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 64));
  }
  else
  {
    v20 = -1;
  }
LABEL_70:
  result = v20;
  if ( v27 == (char *)v1 )
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

// Line 775: range 000000001507F1E4-0000000015080178
int32_t __cdecl GachaActivity::randWeightProduct(GachaActivity *const this, uint32_t *robot_id, bool is_by_gm)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  const ActivityGachaExcelConfigMgr *v7; // rcx
  common::milog::MiLogStream *v8; // rax
  const ActivityGachaExcelConfigMgr *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  int v11; // r15d
  std::vector<unsigned int>::reference v12; // rdx
  uint32_t v13; // ecx
  unsigned int v14; // r15d
  std::unordered_map<data::ActivityGachaRobotType,unsigned int>::mapped_type *v15; // rax
  unsigned int *v16; // rdx
  unsigned int v17; // r15d
  std::unordered_map<data::ActivityGachaRobotType,unsigned int>::mapped_type *v18; // rax
  unsigned int *v19; // rdx
  unsigned int v20; // r15d
  std::unordered_map<data::ActivityGachaRobotType,unsigned int>::mapped_type *v21; // rax
  unsigned int *v22; // rdx
  int v23; // r15d
  std::unordered_map<data::ActivityGachaRobotType,unsigned int>::mapped_type *v24; // rax
  _DWORD *v25; // rdx
  std::unordered_map<data::ActivityGachaRobotType,unsigned int>::mapped_type *v26; // rax
  uint32_t v28; // ecx
  int v29; // r15d
  std::unordered_map<data::ActivityGachaRobotType,unsigned int>::mapped_type *v30; // rax
  std::unordered_map<data::ActivityGachaRobotType,unsigned int>::mapped_type *v31; // rax
  std::unordered_map<data::ActivityGachaRobotType,unsigned int>::mapped_type *v32; // rax
  uint32_t v34; // ecx
  int32_t result; // eax
  std::unordered_map<data::ActivityGachaRobotType,unsigned int>::key_type v37; // [rsp+24h] [rbp-21Ch] BYREF
  std::unordered_map<data::ActivityGachaRobotType,unsigned int>::key_type v38; // [rsp+28h] [rbp-218h] BYREF
  std::unordered_map<data::ActivityGachaRobotType,unsigned int>::key_type __k; // [rsp+2Ch] [rbp-214h] BYREF
  uint32_t i; // [rsp+30h] [rbp-210h]
  uint32_t rand_val; // [rsp+34h] [rbp-20Ch]
  uint32_t robot_guar_rate; // [rsp+38h] [rbp-208h]
  uint32_t robot_hidden_guar_rate; // [rsp+3Ch] [rbp-204h]
  std::unordered_map<unsigned int,data::ActivityGachaRobotExcelConfig>::const_iterator __for_begin; // [rsp+40h] [rbp-200h] BYREF
  const ActivityGachaExcelConfigMgr *config_mgr; // [rsp+48h] [rbp-1F8h]
  const data::ActivityGachaBaseExcelConfig *base_config_ptr; // [rsp+58h] [rbp-1E8h]
  const std::unordered_map<unsigned int,data::ActivityGachaRobotExcelConfig> *__for_range_0; // [rsp+60h] [rbp-1E0h]
  const std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig> *v49; // [rsp+68h] [rbp-1D8h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig> >::type *id_0; // [rsp+70h] [rbp-1D0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig> >::type *config_0; // [rsp+78h] [rbp-1C8h]
  const std::unordered_map<unsigned int,data::ActivityGachaRobotExcelConfig> *__for_range; // [rsp+80h] [rbp-1C0h]
  const std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig> *v53; // [rsp+88h] [rbp-1B8h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig> >::type *id; // [rsp+90h] [rbp-1B0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig> >::type *config; // [rsp+98h] [rbp-1A8h]
  std::shared_ptr<Config> v56; // [rsp+A0h] [rbp-1A0h] BYREF
  std::string __rhs; // [rsp+B0h] [rbp-190h] BYREF
  std::string __lhs; // [rsp+D0h] [rbp-170h] BYREF
  common::milog::MiLogStream v59; // [rsp+F0h] [rbp-150h] BYREF
  char v60[304]; // [rsp+110h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v60;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 8 8 func:809 64 8 15 result_pair:864 96 24 27 normal_robot_select_vec:797 160 56 23 type_se"
                        "lect_num_map:851";
  *(_QWORD *)(v4 + 16) = GachaActivity::randWeightProduct;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -234881024;
  v6[536862724] = -218959118;
  v6[536862726] = -218103808;
  v6[536862727] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v56);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v56)->design_config.txt_config_mgr.activity_gacha_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v56);
  v7 = config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( !data::ActivityGachaExcelConfigMgrBase::findActivityGachaStageExcelConfig(v7, this->item_stage_) )
  {
    common::milog::MiLogStream::create(
      &v59,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/gacha_activity.cpp",
      "randWeightProduct",
      780);
    v8 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v59,
           (const char (*)[52])"[GACHA] stage_config_ptr == nullptr, item_staget_: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->item_stage_);
    common::milog::MiLogStream::~MiLogStream(&v59);
    v3 = -1;
    goto LABEL_75;
  }
  v9 = config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  base_config_ptr = data::ActivityGachaExcelConfigMgrBase::findActivityGachaBaseExcelConfig(v9, this->activity_id_);
  if ( !base_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v59,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/gacha_activity.cpp",
      "randWeightProduct",
      786);
    v10 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
            &v59,
            (const char (*)[51])"[GACHA] base_config_ptr == nullptr, item_staget_: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->item_stage_);
    common::milog::MiLogStream::~MiLogStream(&v59);
    v3 = -1;
    goto LABEL_75;
  }
  rand_val = common::tools::RandomUtils::rand<unsigned int>(0, 0x63u);
  if ( *(_BYTE *)(((unsigned __int64)&base_config_ptr->robot_guar_rate >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&base_config_ptr->robot_guar_rate >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  robot_guar_rate = base_config_ptr->robot_guar_rate;
  if ( *(_BYTE *)(((unsigned __int64)&base_config_ptr->robot_hidden_guar_rate >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)base_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&base_config_ptr->robot_hidden_guar_rate >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  robot_hidden_guar_rate = base_config_ptr->robot_hidden_guar_rate + base_config_ptr->robot_guar_rate;
  if ( rand_val >= robot_guar_rate )
  {
    *(_QWORD *)(v4 + 32) = this;
    std::unordered_map<data::ActivityGachaRobotType,unsigned int>::unordered_map((std::unordered_map<data::ActivityGachaRobotType,unsigned int> *const)(v4 + 160));
    if ( is_by_gm )
    {
      v14 = common::tools::RandomUtils::rand<unsigned int>(1u, 2u);
      __k = ROBOT_TYPE_SHAPE;
      v15 = std::unordered_map<data::ActivityGachaRobotType,unsigned int>::operator[](
              (std::unordered_map<data::ActivityGachaRobotType,unsigned int> *const)(v4 + 160),
              &__k);
      v16 = v15;
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v15);
      }
      *v16 = v14;
      v17 = common::tools::RandomUtils::rand<unsigned int>(1u, 3u);
      __k = ROBOT_TYPE_COLOR;
      v18 = std::unordered_map<data::ActivityGachaRobotType,unsigned int>::operator[](
              (std::unordered_map<data::ActivityGachaRobotType,unsigned int> *const)(v4 + 160),
              &__k);
      v19 = v18;
      if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v18);
      }
      *v19 = v17;
      v20 = common::tools::RandomUtils::rand<unsigned int>(1u, 3u);
      __k = ROBOT_TYPE_ACTION;
      v21 = std::unordered_map<data::ActivityGachaRobotType,unsigned int>::operator[](
              (std::unordered_map<data::ActivityGachaRobotType,unsigned int> *const)(v4 + 160),
              &__k);
      v22 = v21;
      if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v21);
      }
      *v22 = v20;
    }
    else
    {
      for ( i = 0; i <= 2; ++i )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(std::pair<data::ActivityGachaRobotType,unsigned int> *)(v4 + 64) = GachaActivity::randWeightProduct(unsigned int &,bool)::{lambda(unsigned int)#1}::operator()(
                                                                               (const GachaActivity::randWeightProduct::<lambda(uint32_t)> *const)(v4 + 32),
                                                                               this->item_stage_ - i);
        v23 = *(_DWORD *)(v4 + 68);
        v24 = std::unordered_map<data::ActivityGachaRobotType,unsigned int>::operator[](
                (std::unordered_map<data::ActivityGachaRobotType,unsigned int> *const)(v4 + 160),
                (const std::unordered_map<data::ActivityGachaRobotType,unsigned int>::key_type *)(v4 + 64));
        v25 = v24;
        if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v24);
        }
        *v25 = v23;
      }
    }
    if ( rand_val >= robot_hidden_guar_rate )
    {
      __for_range_0 = &config_mgr->activity_gacha_robot_excel_config_map;
      __for_begin._M_cur = std::unordered_map<unsigned int,data::ActivityGachaRobotExcelConfig>::begin(&config_mgr->activity_gacha_robot_excel_config_map)._M_cur;
      *(std::unordered_map<unsigned int,data::ActivityGachaRobotExcelConfig>::const_iterator *)(v4 + 64) = std::unordered_map<unsigned int,data::ActivityGachaRobotExcelConfig>::end(__for_range_0);
      while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false>(
                &__for_begin,
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false> *)(v4 + 64)) )
      {
        v49 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false,false>::operator*(&__for_begin);
        id_0 = std::get<0ul,unsigned int const,data::ActivityGachaRobotExcelConfig>(v49);
        config_0 = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityGachaRobotExcelConfig>(v49);
        if ( !common::tools::MiscUtils::isContains<unsigned int>(&config_mgr->hidden_robot_vec, id_0) )
        {
          v37 = ROBOT_TYPE_SHAPE;
          v30 = std::unordered_map<data::ActivityGachaRobotType,unsigned int>::operator[](
                  (std::unordered_map<data::ActivityGachaRobotType,unsigned int> *const)(v4 + 160),
                  &v37);
          if ( common::tools::MiscUtils::isContains<unsigned int>(&config_0->shape_list, v30) )
          {
            v38 = ROBOT_TYPE_COLOR;
            v31 = std::unordered_map<data::ActivityGachaRobotType,unsigned int>::operator[](
                    (std::unordered_map<data::ActivityGachaRobotType,unsigned int> *const)(v4 + 160),
                    &v38);
            if ( common::tools::MiscUtils::isContains<unsigned int>(&config_0->color_list, v31) )
            {
              __k = ROBOT_TYPE_ACTION;
              v32 = std::unordered_map<data::ActivityGachaRobotType,unsigned int>::operator[](
                      (std::unordered_map<data::ActivityGachaRobotType,unsigned int> *const)(v4 + 160),
                      &__k);
              if ( common::tools::MiscUtils::isContains<unsigned int>(&config_0->action_list, v32) )
              {
                if ( *(_BYTE *)(((unsigned __int64)id_0 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id_0 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                v34 = *id_0;
                if ( *(_BYTE *)(((unsigned __int64)robot_id >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)robot_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)robot_id >> 3)
                                                                             + 0x7FFF8000) )
                {
                  __asan_report_store4(robot_id);
                }
                *robot_id = v34;
                std::to_string(&__rhs, 100 - robot_hidden_guar_rate);
                std::operator+<char>(&__lhs, "normal weight ", &__rhs);
                std::operator+<char>((std::string *)&v59, &__lhs, "%");
                std::string::operator=(&this->gm_output_, &v59);
                std::string::~string(&v59);
                std::string::~string(&__lhs);
                std::string::~string(&__rhs);
                v3 = 0;
                v29 = 0;
                goto LABEL_73;
              }
            }
          }
        }
        std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false,false>::operator++(&__for_begin);
      }
    }
    else
    {
      __for_range = &config_mgr->activity_gacha_robot_excel_config_map;
      __for_begin._M_cur = std::unordered_map<unsigned int,data::ActivityGachaRobotExcelConfig>::begin(&config_mgr->activity_gacha_robot_excel_config_map)._M_cur;
      *(std::unordered_map<unsigned int,data::ActivityGachaRobotExcelConfig>::const_iterator *)(v4 + 64) = std::unordered_map<unsigned int,data::ActivityGachaRobotExcelConfig>::end(__for_range);
      while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false>(
                &__for_begin,
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false> *)(v4 + 64)) )
      {
        v53 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false,false>::operator*(&__for_begin);
        id = std::get<0ul,unsigned int const,data::ActivityGachaRobotExcelConfig>(v53);
        config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityGachaRobotExcelConfig>(v53);
        if ( common::tools::MiscUtils::isContains<unsigned int>(&config_mgr->hidden_robot_vec, id) )
        {
          __k = ROBOT_TYPE_SHAPE;
          v26 = std::unordered_map<data::ActivityGachaRobotType,unsigned int>::operator[](
                  (std::unordered_map<data::ActivityGachaRobotType,unsigned int> *const)(v4 + 160),
                  &__k);
          if ( common::tools::MiscUtils::isContains<unsigned int>(&config->shape_list, v26) )
          {
            if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v28 = *id;
            if ( *(_BYTE *)(((unsigned __int64)robot_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)robot_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)robot_id >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(robot_id);
            }
            *robot_id = v28;
            if ( *(_BYTE *)(((unsigned __int64)&base_config_ptr->robot_hidden_guar_rate >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)base_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&base_config_ptr->robot_hidden_guar_rate >> 3)
                                                                             + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            std::to_string(&__rhs, base_config_ptr->robot_hidden_guar_rate);
            std::operator+<char>((std::string *)&v59, "hidden weight ", &__rhs);
            std::operator+<char>(&__lhs, (std::string *)&v59, "%");
            std::string::operator=(&this->gm_output_, &__lhs);
            std::string::~string(&__lhs);
            std::string::~string(&v59);
            std::string::~string(&__rhs);
            v3 = 0;
            v29 = 0;
            goto LABEL_73;
          }
        }
        std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false,false>::operator++(&__for_begin);
      }
    }
    v29 = 1;
LABEL_73:
    std::unordered_map<data::ActivityGachaRobotType,unsigned int>::~unordered_map((std::unordered_map<data::ActivityGachaRobotType,unsigned int> *const)(v4 + 160));
    if ( v29 == 1 )
      goto LABEL_74;
  }
  else
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 96));
    common::tools::RandomUtils::randomSelect<unsigned int>(
      &config_mgr->normal_robot_vec,
      (std::vector<unsigned int> *)(v4 + 96),
      1u);
    if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v4 + 96)) == 1 )
    {
      v12 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v4 + 96), 0LL);
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v13 = *v12;
      if ( *(_BYTE *)(((unsigned __int64)robot_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)robot_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)robot_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(robot_id);
      }
      *robot_id = v13;
      std::to_string(&__rhs, robot_guar_rate);
      std::operator+<char>(&__lhs, "normal random ", &__rhs);
      std::operator+<char>((std::string *)&v59, &__lhs, "%");
      std::string::operator=(&this->gm_output_, &v59);
      std::string::~string(&v59);
      std::string::~string(&__lhs);
      std::string::~string(&__rhs);
      v11 = 1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v59,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/gacha_activity.cpp",
        "randWeightProduct",
        801);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        &v59,
        (const char (*)[29])"[GACHA] random select failed");
      common::milog::MiLogStream::~MiLogStream(&v59);
      v3 = -1;
      v11 = 0;
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 96));
    if ( v11 == 1 )
LABEL_74:
      v3 = 0;
  }
LABEL_75:
  result = v3;
  if ( v60 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
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

// Line 809: range 000000001507E95C-000000001507F1E3
std::pair<data::ActivityGachaRobotType,unsigned int> __fastcall GachaActivity::randWeightProduct(unsigned int &,bool)::{lambda(unsigned int)#1}::operator()(
        unsigned __int64 __closure,
        uint32_t stage)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  ActivityGachaExcelConfigMgr *p_activity_gacha_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v7; // rax
  int v8; // esi
  uint32_t weight; // edi
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  std::pair<data::ActivityGachaRobotType,unsigned int> v18; // r14
  common::milog::MiLogStream *v19; // r14
  __int64 v20; // rax
  std::pair<data::ActivityGachaRobotType,unsigned int> result; // rax
  int __y; // [rsp+1Ch] [rbp-154h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-150h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+28h] [rbp-148h] BYREF
  char *val; // [rsp+30h] [rbp-140h] BYREF
  GachaActivityStageData *stage_data; // [rsp+38h] [rbp-138h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+40h] [rbp-130h]
  const std::pair<unsigned int const,unsigned int> *v29; // [rsp+48h] [rbp-128h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *target_id; // [rsp+50h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+58h] [rbp-118h]
  const data::ActivityGachaTargetExcelConfig *target_config_ptr; // [rsp+60h] [rbp-110h]
  std::pair<data::ActivityGachaRobotType,unsigned int> v33; // [rsp+68h] [rbp-108h] BYREF
  std::shared_ptr<Config> v34; // [rsp+70h] [rbp-100h] BYREF
  common::milog::MiLogStream v35; // [rsp+80h] [rbp-F0h] BYREF
  char v36[208]; // [rsp+A0h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 8 type:813 48 4 14 select_key:842 64 4 9 stage:809 80 48 14 weight_map:812";
  *(_QWORD *)(v2 + 16) = GachaActivity::randWeightProduct(unsigned int &,bool)::{lambda(unsigned int)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = 61956;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 64) = stage;
  if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  stage_data = std::map<unsigned int,GachaActivityStageData>::operator[](
                 (std::map<unsigned int,GachaActivityStageData> *const)(*(_QWORD *)__closure + 960LL),
                 (const std::map<unsigned int,GachaActivityStageData>::key_type *)(v2 + 64));
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v2 + 80));
  *(_DWORD *)(v2 + 32) = 0;
  __for_range = &stage_data->target_num_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&stage_data->target_num_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&stage_data->target_num_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v29 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    target_id = std::get<0ul,unsigned int const,unsigned int>(v29);
    num = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v29);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v34);
    p_activity_gacha_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->design_config.txt_config_mgr.activity_gacha_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)target_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)target_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)target_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    target_config_ptr = ActivityGachaExcelConfigMgr::findConfigById(p_activity_gacha_config_mgr, *target_id);
    std::shared_ptr<Config>::~shared_ptr(&v34);
    if ( target_config_ptr )
    {
      v7 = std::map<unsigned int,unsigned int>::operator[](
             (std::map<unsigned int,unsigned int> *const)(v2 + 80),
             &target_config_ptr->robot_num);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v8 = *v7;
      if ( *(_BYTE *)(((unsigned __int64)&target_config_ptr->weight >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&target_config_ptr->weight >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      weight = target_config_ptr->weight;
      if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
      {
        weight = (unsigned int)num;
        __asan_report_load4();
      }
      *v7 = v8 + weight * *num;
      if ( *(_DWORD *)(v2 + 32) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&target_config_ptr->robot_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&target_config_ptr->robot_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( target_config_ptr->robot_type != *(_DWORD *)(v2 + 32) )
        {
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/gacha_activity.cpp",
            "operator()",
            829);
          v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v35, (const char (*)[9])"[GACHA] ");
          if ( *(_BYTE *)(((unsigned __int64)&target_config_ptr->robot_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&target_config_ptr->robot_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          val = (char *)data::enumValToStr(target_config_ptr->robot_type);
          v11 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v10, (const char *const *)&val);
          v12 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v11, (const char (*)[5])off_256EF440);
          v33 = (std::pair<data::ActivityGachaRobotType,unsigned int>)data::enumValToStr((data::ActivityGachaRobotType)*(_DWORD *)(v2 + 32));
          v13 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v12, (const char *const *)&v33);
          v14 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v13,
                  (const char (*)[15])", target_id = ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, target_id);
          common::milog::MiLogStream::~MiLogStream(&v35);
        }
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&target_config_ptr->robot_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&target_config_ptr->robot_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v2 + 32) = target_config_ptr->robot_type;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/gacha_activity.cpp",
        "operator()",
        819);
      v6 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v35,
             (const char (*)[35])"[GACHA] invaild target_config_ptr:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, target_id);
      common::milog::MiLogStream::~MiLogStream(&v35);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  if ( *(_DWORD *)(v2 + 32) )
  {
    *(_DWORD *)(v2 + 48) = 0;
    if ( common::tools::RandomUtils::weightSelectOne<unsigned int,unsigned int>(
           (const std::map<unsigned int,unsigned int> *)(v2 + 80),
           (unsigned int *)(v2 + 48),
           0) )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/gacha_activity.cpp",
        "operator()",
        845);
      v19 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v35,
              (const char (*)[29])"weightSelectOne failed, uid:");
      if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v20 = *(_QWORD *)__closure;
      if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)__closure + 24LL) >> 3) + 0x7FFF8000) )
        v20 = __asan_report_load8();
      __y = Player::getUid(*(const Player *const *)(v20 + 24));
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)&__y);
      common::milog::MiLogStream::~MiLogStream(&v35);
      *(_DWORD *)(v2 + 48) = 0;
    }
    std::pair<data::ActivityGachaRobotType,unsigned int>::pair<data::ActivityGachaRobotType&,unsigned int &,true>(
      &v33,
      (data::ActivityGachaRobotType *)(v2 + 32),
      (unsigned int *)(v2 + 48));
    v18 = v33;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/gacha_activity.cpp",
      "operator()",
      838);
    v15 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            &v35,
            (const char (*)[24])"[GACHA] invaild stage: ");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 64));
    v17 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v16, (const char (*)[15])", item_stage_:");
    if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v17,
      (const unsigned int *)(*(_QWORD *)__closure + 932LL));
    common::milog::MiLogStream::~MiLogStream(&v35);
    __y = 0;
    std::pair<data::ActivityGachaRobotType,unsigned int>::pair<data::ActivityGachaRobotType&,int,true>(
      &v33,
      (data::ActivityGachaRobotType *)(v2 + 32),
      &__y);
    v18 = v33;
  }
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 80));
  result = v18;
  if ( v36 == (char *)v2 )
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

// Line 907: range 000000001508017A-000000001508070C
int32_t __cdecl GachaActivity::finialProduct(GachaActivity *const this, uint32_t *robot_id)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t v6; // ecx
  int v7; // r15d
  uint32_t first_create_hidden_robot_id; // r15d
  std::vector<unsigned int>::reference v9; // rdx
  std::vector<unsigned int>::reference v10; // rdx
  uint32_t v11; // edx
  std::vector<unsigned int>::reference v12; // rdx
  int32_t result; // eax
  ActivityGachaExcelConfigMgr *config_mgr; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v15; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 27 hidden_robot_select_vec:919";
  *(_QWORD *)(v3 + 16) = GachaActivity::finialProduct;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr.activity_gacha_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v15);
  if ( !common::tools::MiscUtils::isContains<unsigned int>(&config_mgr->hidden_robot_vec, robot_id) )
  {
    v2 = 0;
    goto LABEL_37;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->hidden_robot_finish_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hidden_robot_finish_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( !this->hidden_robot_finish_num_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)robot_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)robot_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)robot_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v6 = *robot_id;
    if ( *(_BYTE *)(((unsigned __int64)&this->first_create_hidden_robot_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->first_create_hidden_robot_id_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(&this->first_create_hidden_robot_id_);
    }
    this->first_create_hidden_robot_id_ = v6;
LABEL_34:
    if ( *(_BYTE *)(((unsigned __int64)&this->hidden_robot_finish_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->hidden_robot_finish_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    ++this->hidden_robot_finish_num_;
    v2 = 0;
    goto LABEL_37;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->hidden_robot_finish_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hidden_robot_finish_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->hidden_robot_finish_num_ != 1 )
    goto LABEL_34;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 32));
  common::tools::RandomUtils::randomSelect<unsigned int>(
    &config_mgr->hidden_robot_vec,
    (std::vector<unsigned int> *)(v3 + 32),
    2u);
  if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 32)) == 2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->first_create_hidden_robot_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->first_create_hidden_robot_id_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    first_create_hidden_robot_id = this->first_create_hidden_robot_id_;
    v9 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 32), 0LL);
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( first_create_hidden_robot_id == *v9 )
    {
      v10 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 32), 1uLL);
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v11 = *v10;
    }
    else
    {
      v12 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 32), 0LL);
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v11 = *v12;
    }
    if ( *(_BYTE *)(((unsigned __int64)robot_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)robot_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)robot_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(robot_id);
    }
    *robot_id = v11;
    std::string::operator=(&this->gm_output_, "reverse hidden");
    v7 = 1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/gacha_activity.cpp",
      "finialProduct",
      923);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v16,
      (const char (*)[29])"[GACHA] random select failed");
    common::milog::MiLogStream::~MiLogStream(&v16);
    v2 = -1;
    v7 = 0;
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 32));
  if ( v7 == 1 )
    goto LABEL_34;
LABEL_37:
  result = v2;
  if ( v17 == (char *)v3 )
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

// Line 935: range 000000001508070E-0000000015081B82
int32_t __cdecl GachaActivity::calcWeightAndProduct(GachaActivity *const this, uint32_t *robot_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const ActivityGachaExcelConfigMgr *v5; // rcx
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  const ActivityGachaExcelConfigMgr *v8; // rdx
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
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  uint32_t robot_finish_num; // eax
  BaseActivity *v30; // rcx
  uint32_t v31; // ecx
  std::_Rb_tree_iterator<std::pair<unsigned int const,GachaActivityStageData> >::pointer v32; // rax
  PlayerEventComp *EventComp; // r14
  PlayerEventComp *v34; // r14
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGachaActivityCreateRobot,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // r14
  unsigned int Uid; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGachaActivityCreateRobot,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rcx
  Player *player; // r14
  int32_t result; // eax
  std::string robot_ida; // [rsp+0h] [rbp-1B0h]
  uint32_t *robot_idb; // [rsp+0h] [rbp-1B0h]
  GachaActivity *thisa; // [rsp+8h] [rbp-1A8h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,GachaActivityStageData> >::_Self __y; // [rsp+20h] [rbp-190h] BYREF
  const ActivityGachaExcelConfigMgr *config_mgr; // [rsp+28h] [rbp-188h]
  const data::ActivityGachaStageExcelConfig *stage_config_ptr; // [rsp+30h] [rbp-180h]
  const data::ActivityGachaBaseExcelConfig *base_config_ptr; // [rsp+38h] [rbp-178h]
  std::shared_ptr<GachaMakeRobotEvent> __r; // [rsp+40h] [rbp-170h] BYREF
  std::shared_ptr<google::protobuf::Message> v49; // [rsp+50h] [rbp-160h] BYREF
  std::string __lhs; // [rsp+60h] [rbp-150h] BYREF
  std::string v51; // [rsp+80h] [rbp-130h] BYREF
  std::string __rhs; // [rsp+A0h] [rbp-110h] BYREF
  common::milog::MiLogStream v53; // [rsp+C0h] [rbp-F0h] BYREF
  char v54[208]; // [rsp+E0h] [rbp-D0h] BYREF

  robot_ida._M_string_length = (std::string::size_type)this;
  robot_ida._M_dataplus._M_p = (std::string::pointer)robot_id;
  v2 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 1 11 holder:1042 64 4 11 percent:964 80 4 13 stage_id:1028 96 8 9 iter:1029 128 16 12 log_ptr:1043";
  *(_QWORD *)(v2 + 16) = GachaActivity::calcWeightAndProduct;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v49);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49)->design_config.txt_config_mgr.activity_gacha_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v49);
  v5 = config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  stage_config_ptr = data::ActivityGachaExcelConfigMgrBase::findActivityGachaStageExcelConfig(v5, this->item_stage_);
  if ( !stage_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v53,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/gacha_activity.cpp",
      "calcWeightAndProduct",
      940);
    v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v53,
           (const char (*)[52])"[GACHA] stage_config_ptr == nullptr, item_staget_: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->item_stage_);
    common::milog::MiLogStream::~MiLogStream(&v53);
    v7 = -1;
    goto LABEL_74;
  }
  v8 = config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  base_config_ptr = data::ActivityGachaExcelConfigMgrBase::findActivityGachaBaseExcelConfig(v8, this->activity_id_);
  if ( !base_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v53,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/gacha_activity.cpp",
      "calcWeightAndProduct",
      946);
    v9 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v53,
           (const char (*)[51])"[GACHA] base_config_ptr == nullptr, item_staget_: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->item_stage_);
    common::milog::MiLogStream::~MiLogStream(&v53);
    v7 = -1;
    goto LABEL_74;
  }
  if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->is_need_finish >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)stage_config_ptr + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_config_ptr->is_need_finish >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load1(&stage_config_ptr->is_need_finish);
  }
  if ( !stage_config_ptr->is_need_finish )
  {
    common::milog::MiLogStream::create(
      &v53,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/gacha_activity.cpp",
      "calcWeightAndProduct",
      952);
    v10 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
            &v53,
            (const char (*)[63])"[GACHA] stage_config_ptr->is_need_finish false, item_staget_: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->item_stage_);
    common::milog::MiLogStream::~MiLogStream(&v53);
    v7 = -1;
    goto LABEL_74;
  }
  if ( *(char *)(((unsigned __int64)&stage_config_ptr->is_tech >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&stage_config_ptr->is_tech);
  if ( stage_config_ptr->is_tech )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->robot_finish_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->robot_finish_num_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( this->robot_finish_num_ )
    {
      common::milog::MiLogStream::create(
        &v53,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/gacha_activity.cpp",
        "calcWeightAndProduct",
        959);
      v11 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
              &v53,
              (const char (*)[55])"[GACHA] stage_config_ptr->is_tech true, item_staget_: ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->item_stage_);
      v13 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v12,
              (const char (*)[21])", robot_finish_num_:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->robot_finish_num_);
      common::milog::MiLogStream::~MiLogStream(&v53);
      v7 = -1;
      goto LABEL_74;
    }
  }
  *(_DWORD *)(v2 + 64) = GachaActivity::calcPercent(this);
  if ( *(_DWORD *)(v2 + 64) != 100 )
  {
    common::milog::MiLogStream::create(
      &v53,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/gacha_activity.cpp",
      "calcWeightAndProduct",
      967);
    v14 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            &v53,
            (const char (*)[34])"[GACHA] percent != 100, percent: ");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 64));
    v16 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v15, (const char (*)[17])", item_staget_: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->item_stage_);
    common::milog::MiLogStream::~MiLogStream(&v53);
    v7 = -1;
    goto LABEL_74;
  }
  if ( !GachaActivity::getCanRecvRobotNum(this) )
  {
    common::milog::MiLogStream::create(
      &v53,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/gacha_activity.cpp",
      "calcWeightAndProduct",
      974);
    v17 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            &v53,
            (const char (*)[38])"[GACHA] addRobot fail, item_staget_: ");
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->item_stage_);
    v19 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v18, (const char (*)[12])", robot_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, robot_id);
    common::milog::MiLogStream::~MiLogStream(&v53);
    v7 = 10316;
    goto LABEL_74;
  }
  if ( GachaActivity::guarProduct(this, robot_id) )
  {
    if ( GachaActivity::randWeightProduct(this, robot_id, 0) )
    {
      common::milog::MiLogStream::create(
        &v53,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/gacha_activity.cpp",
        "calcWeightAndProduct",
        982);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        &v53,
        (const char (*)[27])"[GACHA] choose robot fails");
      common::milog::MiLogStream::~MiLogStream(&v53);
      v7 = -1;
      goto LABEL_74;
    }
  }
  else if ( common::tools::MiscUtils::isContains<unsigned int>(&config_mgr->hidden_robot_vec, robot_id) )
  {
    common::milog::MiLogStream::create(
      &v53,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/gacha_activity.cpp",
      "calcWeightAndProduct",
      988);
    v20 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            &v53,
            (const char (*)[40])"[GACHA] ready clear create_robot_vec_: ");
    common::milog::MiLogStream::operator<<<unsigned int>(v20, &this->create_robot_vec_);
    common::milog::MiLogStream::~MiLogStream(&v53);
    std::vector<unsigned int>::clear(&this->create_robot_vec_);
  }
  if ( GachaActivity::finialProduct(this, robot_id) )
  {
    common::milog::MiLogStream::create(
      &v53,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/gacha_activity.cpp",
      "calcWeightAndProduct",
      993);
    v21 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            &v53,
            (const char (*)[28])"[GACHA] choose robot fails ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, robot_id);
    common::milog::MiLogStream::~MiLogStream(&v53);
    v7 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)robot_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)robot_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)robot_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( *robot_id )
    {
      common::milog::MiLogStream::create(
        &v53,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/gacha_activity.cpp",
        "calcWeightAndProduct",
        1002);
      v23 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v53, (const char (*)[9])"[GACHA] ");
      v24 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, &this->gm_output_);
      v25 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v24,
              (const char (*)[18])" choose robot_id ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, robot_id);
      common::milog::MiLogStream::~MiLogStream(&v53);
      if ( *(_BYTE *)(((unsigned __int64)robot_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)robot_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)robot_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *((_DWORD *)&robot_ida._anon_0._M_allocated_capacity + 3) = GachaActivity::addRobot(this, *robot_id, 1u);
      if ( *((_DWORD *)&robot_ida._anon_0._M_allocated_capacity + 3) )
      {
        common::milog::MiLogStream::create(
          &v53,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/gacha_activity.cpp",
          "calcWeightAndProduct",
          1008);
        v26 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v53,
                (const char (*)[38])"[GACHA] addRobot fail, item_staget_: ");
        v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &this->item_stage_);
        v28 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v27, (const char (*)[12])", robot_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, robot_id);
        common::milog::MiLogStream::~MiLogStream(&v53);
        v7 = *((_DWORD *)&robot_ida._anon_0._M_allocated_capacity + 3);
      }
      else
      {
        std::vector<unsigned int>::push_back(&this->create_robot_vec_, robot_id);
        std::set<unsigned int>::insert(&this->have_get_robot_set_, robot_id);
        if ( *(_BYTE *)(((unsigned __int64)&this->robot_finish_num_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->robot_finish_num_ >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        robot_finish_num = this->robot_finish_num_;
        this->robot_finish_num_ = robot_finish_num + 1;
        if ( robot_finish_num )
        {
          for ( *((_DWORD *)&robot_ida._anon_0._M_allocated_capacity + 2) = 0;
                *((_DWORD *)&robot_ida._anon_0._M_allocated_capacity + 2) <= 2u;
                ++*((_DWORD *)&robot_ida._anon_0._M_allocated_capacity + 2) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v2 + 80) = this->item_stage_ - *((_DWORD *)&robot_ida._anon_0._M_allocated_capacity + 2);
            *(std::map<unsigned int,GachaActivityStageData>::iterator *)(v2 + 96) = std::map<unsigned int,GachaActivityStageData>::find(
                                                                                      &this->stage_data_map_,
                                                                                      (const std::map<unsigned int,GachaActivityStageData>::key_type *)(v2 + 80));
            __y._M_node = std::map<unsigned int,GachaActivityStageData>::end(&this->stage_data_map_)._M_node;
            if ( std::operator!=(
                   (const std::_Rb_tree_iterator<std::pair<unsigned int const,GachaActivityStageData> >::_Self *)(v2 + 96),
                   &__y) )
            {
              v32 = std::_Rb_tree_iterator<std::pair<unsigned int const,GachaActivityStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GachaActivityStageData> > *const)(v2 + 96));
              std::map<unsigned int,unsigned int>::clear(&v32->second.target_num_map);
            }
          }
        }
        else
        {
          v30 = (BaseActivity *)this;
          if ( *(_BYTE *)(((unsigned __int64)&base_config_ptr->task_content_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)base_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&base_config_ptr->task_content_id >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          BaseActivity::updateQuestContent(v30, base_config_ptr->task_content_id);
          if ( *(_BYTE *)(((unsigned __int64)robot_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)robot_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)robot_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v31 = *robot_id;
          if ( *(_BYTE *)(((unsigned __int64)&this->tech_create_robot_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->tech_create_robot_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->tech_create_robot_id_);
          }
          this->tech_create_robot_id_ = v31;
          BaseActivity::updateAllConds((BaseActivity *const)this);
          BaseActivity::notifyClientData((BaseActivity *const)this, 0);
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        EventComp = Player::getEventComp(this->player_);
        common::tools::perf::make_shared<GachaMakeRobotEvent>();
        std::shared_ptr<BaseEvent>::shared_ptr<GachaMakeRobotEvent,void>((std::shared_ptr<BaseEvent> *const)&v49, &__r);
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v49);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v49);
        std::shared_ptr<GachaMakeRobotEvent>::~shared_ptr(&__r);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v34 = Player::getEventComp(this->player_);
        *(_DWORD *)(v2 + 80) = 1;
        common::tools::perf::make_shared<GachaGetRobotEvent,int>((int *)&__r, (int *)(v2 + 80));
        std::shared_ptr<BaseEvent>::shared_ptr<GachaGetRobotEvent,void>(
          (std::shared_ptr<BaseEvent> *const)&v49,
          (std::shared_ptr<GachaGetRobotEvent> *)&__r);
        PlayerEventComp::notifyEvent(v34, (BaseEventPtr *)&v49);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v49);
        std::shared_ptr<GachaGetRobotEvent>::~shared_ptr((std::shared_ptr<GachaGetRobotEvent> *const)&__r);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        BasicComp = Player::getBasicComp(this->player_);
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v53, BasicComp);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xE13u, robot_ida);
        std::string::~string(&v53);
        common::tools::perf::make_shared<proto_log::PlayerLogBodyGachaActivityCreateRobot>();
        v36 = std::__shared_ptr_access<proto_log::PlayerLogBodyGachaActivityCreateRobot,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGachaActivityCreateRobot,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        if ( *(_BYTE *)(((unsigned __int64)&thisa->robot_finish_num_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)thisa - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->robot_finish_num_ >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        std::to_string(&__rhs, thisa->robot_finish_num_ - 1);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Uid = Player::getUid(thisa->player_);
        std::to_string(&__lhs, Uid);
        std::operator+<char>(&v51, &__lhs, "-");
        std::operator+<char>((std::string *)&v53, &v51, &__rhs);
        proto_log::PlayerLogBodyGachaActivityCreateRobot::set_transaction(v36, (std::string *)&v53);
        std::string::~string(&v53);
        std::string::~string(&v51);
        std::string::~string(&__lhs);
        std::string::~string(&__rhs);
        v38 = std::__shared_ptr_access<proto_log::PlayerLogBodyGachaActivityCreateRobot,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGachaActivityCreateRobot,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        if ( *(_BYTE *)(((unsigned __int64)robot_idb >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)robot_idb & 7) + 3) >= *(_BYTE *)(((unsigned __int64)robot_idb >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyGachaActivityCreateRobot::set_robot_id(v38, *robot_idb);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        player = thisa->player_;
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&v49, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGachaActivityCreateRobot,void>(
          (std::shared_ptr<google::protobuf::Message> *const)&__r,
          (const std::shared_ptr<proto_log::PlayerLogBodyGachaActivityCreateRobot> *)(v2 + 128));
        Player::printStatLog(player, (MessagePtr *)&__r, &v49, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&__r);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v49);
        GachaActivity::itemStageChange(thisa, 1);
        v7 = 0;
        std::shared_ptr<proto_log::PlayerLogBodyGachaActivityCreateRobot>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGachaActivityCreateRobot> *const)(v2 + 128));
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v53,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/gacha_activity.cpp",
        "calcWeightAndProduct",
        999);
      v22 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v53,
              (const char (*)[38])"[GACHA] robot_id == 0, item_staget_: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &this->item_stage_);
      common::milog::MiLogStream::~MiLogStream(&v53);
      v7 = -1;
    }
  }
LABEL_74:
  result = v7;
  if ( v54 == (char *)v2 )
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

// Line 1054: range 0000000015081B84-000000001508213A
__int64 __fastcall GachaActivity::resetStage(GachaActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 result; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,GachaActivityStageData> >::pointer v11; // rax
  uint32_t v12; // ecx
  std::_Rb_tree_iterator<std::pair<unsigned int const,GachaActivityStageData> >::_Self __y; // [rsp+18h] [rbp-C8h] BYREF
  const ActivityGachaExcelConfigMgr *config_mgr; // [rsp+20h] [rbp-C0h]
  const data::ActivityGachaStageExcelConfig *stage_config_ptr; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v16; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-A0h] BYREF
  char v18[128]; // [rsp+60h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 6 i:1075 48 4 13 stage_id:1053 64 8 9 iter:1077";
  *(_QWORD *)(v2 + 16) = GachaActivity::resetStage;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0)
    || BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/gacha_activity.cpp",
      "resetStage",
      1057);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v17,
      (const char (*)[32])"[GACHA] activity is not opening");
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v16);
    config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16)->design_config.txt_config_mgr.activity_gacha_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v16);
    stage_config_ptr = data::ActivityGachaExcelConfigMgrBase::findActivityGachaStageExcelConfig(
                         config_mgr,
                         *(_DWORD *)(v2 + 48));
    if ( stage_config_ptr )
    {
      if ( *(char *)(((unsigned __int64)&stage_config_ptr->is_tech >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&stage_config_ptr->is_tech);
      if ( stage_config_ptr->is_tech )
        goto LABEL_18;
      if ( *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( this->item_stage_ < *(_DWORD *)(v2 + 48) )
      {
LABEL_18:
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/gacha_activity.cpp",
          "resetStage",
          1071);
        v8 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
               &v17,
               (const char (*)[27])"[GACHA] stage_id invaild: ");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
        v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])", item_stage_");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->item_stage_);
        common::milog::MiLogStream::~MiLogStream(&v17);
        result = 0xFFFFFFFFLL;
      }
      else
      {
        for ( *(_DWORD *)(v2 + 32) = *(_DWORD *)(v2 + 48); ; ++*(_DWORD *)(v2 + 32) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( this->item_stage_ < *(_DWORD *)(v2 + 32) )
            break;
          *(std::map<unsigned int,GachaActivityStageData>::iterator *)(v2 + 64) = std::map<unsigned int,GachaActivityStageData>::find(
                                                                                    &this->stage_data_map_,
                                                                                    (const std::map<unsigned int,GachaActivityStageData>::key_type *)(v2 + 32));
          __y._M_node = std::map<unsigned int,GachaActivityStageData>::end(&this->stage_data_map_)._M_node;
          if ( std::operator!=(
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,GachaActivityStageData> >::_Self *)(v2 + 64),
                 &__y) )
          {
            v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,GachaActivityStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GachaActivityStageData> > *const)(v2 + 64));
            std::map<unsigned int,unsigned int>::clear(&v11->second.target_num_map);
          }
        }
        v12 = *(_DWORD *)(v2 + 48);
        if ( *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(&this->item_stage_);
        }
        this->item_stage_ = v12;
        if ( *(_BYTE *)(((unsigned __int64)&this->sub_stage_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->sub_stage_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->sub_stage_);
        }
        this->sub_stage_ = 0;
        std::map<unsigned int,unsigned int>::clear(&this->group_num_map_);
        GachaActivity::sendNotifyToClient(this, 0);
        BaseActivity::notifyClientData((BaseActivity *const)this, 0);
        result = 0LL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/gacha_activity.cpp",
        "resetStage",
        1064);
      v7 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
             &v17,
             (const char (*)[48])"[GACHA] stage_config_ptr == nullptr, stage_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v17);
      result = 0xFFFFFFFFLL;
    }
  }
  if ( v18 == (char *)v2 )
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

// Line 1092: range 000000001508213C-000000001508289F
void __cdecl GachaActivity::sendNotifyToClient(GachaActivity *const this, uint32_t percent)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const ActivityGachaExcelConfigMgr *v6; // rcx
  common::milog::MiLogStream *v7; // rax
  int v8; // ecx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v9; // r14d
  unsigned int *v10; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v11; // rdx
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-1B0h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+28h] [rbp-1A8h] BYREF
  const ActivityGachaExcelConfigMgr *config_mgr; // [rsp+30h] [rbp-1A0h]
  const data::ActivityGachaStageExcelConfig *stage_config_ptr; // [rsp+38h] [rbp-198h]
  google::protobuf::Map<unsigned int,unsigned int> *target_num_map; // [rsp+40h] [rbp-190h]
  GachaActivityStageData *stage_data; // [rsp+48h] [rbp-188h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+50h] [rbp-180h]
  const std::pair<unsigned int const,unsigned int> *v19; // [rsp+58h] [rbp-178h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *target_id; // [rsp+60h] [rbp-170h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+68h] [rbp-168h]
  std::shared_ptr<Config> v22; // [rsp+70h] [rbp-160h] BYREF
  common::milog::MiLogStream v23; // [rsp+80h] [rbp-150h] BYREF
  char v24[304]; // [rsp+A0h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 20 9 info:1115 112 104 11 notify:1107";
  *(_QWORD *)(v2 + 16) = GachaActivity::sendNotifyToClient;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218959356;
  v4[536862723] = 62194;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0)
    || BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/gacha_activity.cpp",
      "sendNotifyToClient",
      1095);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v23,
      (const char (*)[32])"[GACHA] activity is not opening");
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v22);
    config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.activity_gacha_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v22);
    v6 = config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    stage_config_ptr = data::ActivityGachaExcelConfigMgrBase::findActivityGachaStageExcelConfig(v6, this->item_stage_);
    if ( stage_config_ptr )
    {
      proto::GachaActivityPercentNotify::GachaActivityPercentNotify((proto::GachaActivityPercentNotify *const)(v2 + 112));
      target_num_map = proto::GachaActivityPercentNotify::mutable_target_num_map((proto::GachaActivityPercentNotify *const)(v2 + 112));
      stage_data = std::map<unsigned int,GachaActivityStageData>::operator[](&this->stage_data_map_, &this->item_stage_);
      __for_range = &stage_data->target_num_map;
      __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&stage_data->target_num_map)._M_node;
      __for_end._M_node = std::map<unsigned int,unsigned int>::end(&stage_data->target_num_map)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v19 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
        target_id = std::get<0ul,unsigned int const,unsigned int>(v19);
        num = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v19);
        if ( *(char *)(((unsigned __int64)&stage_config_ptr->is_tech >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&stage_config_ptr->is_tech);
        if ( !stage_config_ptr->is_tech )
          goto LABEL_25;
        *(_DWORD *)(v2 + 48) = 0;
        *(_DWORD *)(v2 + 52) = 0;
        *(_DWORD *)(v2 + 56) = 0;
        *(_DWORD *)(v2 + 60) = 0;
        *(_DWORD *)(v2 + 64) = 0;
        if ( *(_BYTE *)(((unsigned __int64)target_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)target_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)target_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( !(unsigned int)GachaActivity::getTargetInfo(this, *target_id, v2 + 48) )
        {
          v8 = *(_DWORD *)(v2 + 56);
          if ( *(_BYTE *)(((unsigned __int64)&this->sub_stage_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->sub_stage_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( v8 == this->sub_stage_ )
          {
LABEL_25:
            if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v9 = *num;
            v10 = google::protobuf::Map<unsigned int,unsigned int>::operator[](target_num_map, target_id);
            v11 = v10;
            if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(v10);
            }
            *v11 = v9;
          }
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::GachaActivityPercentNotify::set_item_stage(
        (proto::GachaActivityPercentNotify *const)(v2 + 112),
        this->item_stage_);
      proto::GachaActivityPercentNotify::set_percent((proto::GachaActivityPercentNotify *const)(v2 + 112), percent);
      if ( *(_BYTE *)(((unsigned __int64)&this->sub_stage_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->sub_stage_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::GachaActivityPercentNotify::set_sub_item_stage(
        (proto::GachaActivityPercentNotify *const)(v2 + 112),
        this->sub_stage_);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 112));
      proto::GachaActivityPercentNotify::~GachaActivityPercentNotify((proto::GachaActivityPercentNotify *const)(v2 + 112));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/gacha_activity.cpp",
        "sendNotifyToClient",
        1103);
      v7 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
             &v23,
             (const char (*)[48])"[GACHA] stage_config_ptr == nullptr, stage_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->item_stage_);
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
  }
  if ( v24 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 1138: range 00000000150828A0-0000000015082A37
void __cdecl GachaActivity::onGatherEvent(GachaActivity *const this, const GatherEvent *event)
{
  GatherExcelConfigMgr *p_gather_config_mgr; // rcx
  common::milog::MiLogStream *v3; // rax
  const data::GatherExcelConfig *gather_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  p_gather_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5)->design_config.txt_config_mgr.gather_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&event->gather_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->gather_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  gather_config_ptr = data::GatherExcelConfigMgrBase::findGatherExcelConfig(p_gather_config_mgr, event->gather_id);
  std::shared_ptr<Config>::~shared_ptr(&v5);
  if ( gather_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&gather_config_ptr->item_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gather_config_ptr->item_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    GachaActivity::checkAndUpdate(this, gather_config_ptr->item_id, 1u);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/gacha_activity.cpp",
      "onGatherEvent",
      1142);
    v3 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v6,
           (const char (*)[41])"findGatherExcelConfig fail. point_type: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &event->gather_id);
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
};

// Line 1152: range 0000000015082A38-0000000015082A9D
void __cdecl GachaActivity::onTrifleEvent(GachaActivity *const this, const TrifleEvent *event)
{
  if ( *(_BYTE *)(((unsigned __int64)&event->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  GachaActivity::checkAndUpdate(this, event->item_id, 1u);
};

// Line 1161: range 0000000015082A9E-0000000015082ACB
void __cdecl GachaActivity::onUpdateElem(GachaActivity *const this, uint32_t elem_type)
{
  GachaActivity::checkAndUpdate(this, elem_type, 2u);
};

// Line 1170: range 0000000015082ACC-0000000015082B31
void __cdecl GachaActivity::onMonsterBeKilledByHateListEvent(
        GachaActivity *const this,
        const MonsterBeKilledByHateListEvent *event)
{
  if ( *(_BYTE *)(((unsigned __int64)&event->monster_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->monster_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  GachaActivity::checkAndUpdate(this, event->monster_id, 3u);
};

// Line 1179: range 0000000015082B32-00000000150839B4
int32_t __cdecl GachaActivity::onTakeReward(
        GachaActivity *const this,
        const google::protobuf::Map<unsigned int,unsigned int> *robot_num_map)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v6; // r14d
  const ActivityGachaExcelConfigMgr *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  uint32_t v9; // esi
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  const ActivityGachaExcelConfigMgr *v13; // rcx
  common::milog::MiLogStream *v14; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v16; // r14
  uint32_t v17; // esi
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  unsigned int v21; // r14d
  unsigned int *v22; // rdx
  SelectType v23; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v24; // rax
  SelectType *v25; // rdx
  PlayerItemComp *v26; // rax
  PlayerEventComp *EventComp; // r14
  int32_t result; // eax
  unsigned int have_reward_robot_num; // [rsp+18h] [rbp-1E8h]
  int32_t ret; // [rsp+1Ch] [rbp-1E4h]
  int32_t ret_1; // [rsp+20h] [rbp-1E0h]
  int32_t ret_0; // [rsp+24h] [rbp-1DCh]
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-1D8h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+30h] [rbp-1D0h] BYREF
  const ActivityGachaExcelConfigMgr *config_mgr; // [rsp+38h] [rbp-1C8h]
  const data::ActivityGachaBaseExcelConfig *base_config_ptr; // [rsp+40h] [rbp-1C0h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+48h] [rbp-1B8h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range_0; // [rsp+50h] [rbp-1B0h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range_1; // [rsp+58h] [rbp-1A8h]
  const unsigned int *p_robot_id_0; // [rsp+60h] [rbp-1A0h]
  const unsigned int *p_robot_id; // [rsp+68h] [rbp-198h]
  const data::ActivityGachaRobotExcelConfig *robot_config_ptr; // [rsp+70h] [rbp-190h]
  const std::pair<unsigned int const,unsigned int> *v44; // [rsp+78h] [rbp-188h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+80h] [rbp-180h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+88h] [rbp-178h]
  std::shared_ptr<GachaConvertRobotEvent> __r; // [rsp+90h] [rbp-170h] BYREF
  std::shared_ptr<Config> v48; // [rsp+A0h] [rbp-160h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin_0; // [rsp+B0h] [rbp-150h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+D0h] [rbp-130h] BYREF
  common::milog::MiLogStream v51; // [rsp+F0h] [rbp-110h] BYREF
  char v52[240]; // [rsp+110h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 total_num:1233 64 24 19 item_param_vec:1205 128 24 11 reason:1224";
  *(_QWORD *)(v2 + 16) = GachaActivity::onTakeReward;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0)
    || BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    common::milog::MiLogStream::create(
      &v51,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/gacha_activity.cpp",
      "onTakeReward",
      1182);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v51,
      (const char (*)[32])"[GACHA] activity is not opening");
    common::milog::MiLogStream::~MiLogStream(&v51);
    v6 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v48);
    config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v48)->design_config.txt_config_mgr.activity_gacha_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v48);
    v7 = config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    base_config_ptr = data::ActivityGachaExcelConfigMgrBase::findActivityGachaBaseExcelConfig(v7, this->activity_id_);
    if ( base_config_ptr )
    {
      have_reward_robot_num = 0;
      __for_range = &this->have_reward_robot_num_map_;
      __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->have_reward_robot_num_map_)._M_node;
      __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->have_reward_robot_num_map_)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v44 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
        _ = std::get<0ul,unsigned int const,unsigned int>(v44);
        num = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v44);
        if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        have_reward_robot_num = SAFE_ADD<unsigned int,unsigned int>(have_reward_robot_num, *num);
        std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
      }
      if ( *(_BYTE *)(((unsigned __int64)&base_config_ptr->max_convert >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)base_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&base_config_ptr->max_convert >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( have_reward_robot_num < base_config_ptr->max_convert )
      {
        std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v2 + 64));
        __for_range_0 = robot_num_map;
        google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin_0, robot_num_map);
        google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end_0, __for_range_0);
        while ( google::protobuf::operator!=(&__for_begin_0, &__for_end_0) )
        {
          p_robot_id = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin_0);
          if ( *(_BYTE *)(((unsigned __int64)(p_robot_id + 1) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)p_robot_id + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(p_robot_id + 1) >> 3)
                                                                     + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v9 = p_robot_id[1];
          if ( *(_BYTE *)(((unsigned __int64)p_robot_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_robot_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_robot_id >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          ret_0 = GachaActivity::checkSubRobot(this, *p_robot_id, v9);
          if ( ret_0 )
          {
            common::milog::MiLogStream::create(
              &v51,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/gacha_activity.cpp",
              "onTakeReward",
              1211);
            v10 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    &v51,
                    (const char (*)[19])"[GACHA] robot_id: ");
            v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, p_robot_id);
            v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])", num: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, p_robot_id + 1);
            common::milog::MiLogStream::~MiLogStream(&v51);
            v6 = ret_0;
            goto LABEL_68;
          }
          v13 = config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)p_robot_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_robot_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_robot_id >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          robot_config_ptr = data::ActivityGachaExcelConfigMgrBase::findActivityGachaRobotExcelConfig(v13, *p_robot_id);
          if ( !robot_config_ptr )
          {
            common::milog::MiLogStream::create(
              &v51,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/gacha_activity.cpp",
              "onTakeReward",
              1217);
            v14 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                    &v51,
                    (const char (*)[52])"[GACHA] robot_config_ptr == nullptr, item_staget_: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->item_stage_);
            common::milog::MiLogStream::~MiLogStream(&v51);
            v6 = -1;
            goto LABEL_68;
          }
          if ( *(_BYTE *)(((unsigned __int64)&robot_config_ptr->furniture_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)robot_config_ptr + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&robot_config_ptr->furniture_id >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          LODWORD(v48._M_ptr) = robot_config_ptr->furniture_id;
          if ( *(_BYTE *)(((unsigned __int64)(p_robot_id + 1) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)p_robot_id + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(p_robot_id + 1) >> 3)
                                                                     + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          HIDWORD(v48._M_ptr) = p_robot_id[1];
          v48._M_refcount._M_pi = 0LL;
          std::vector<ItemParam>::push_back(
            (std::vector<ItemParam> *const)(v2 + 64),
            (std::vector<ItemParam>::value_type *)&v48);
          google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin_0);
        }
        ActionReason::ActionReason(
          (ActionReason *const)(v2 + 128),
          ACTION_REASON_GACHA_ACTIVITY_ROBOT_REWARD,
          ITEM_LIMIT_ACTIVITY_GACHA);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        ItemComp = Player::getItemComp(this->player_);
        ret = PlayerItemComp::checkAddItemBatch(
                ItemComp,
                (const std::vector<ItemParam> *)(v2 + 64),
                (const ActionReason *)(v2 + 128));
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v51,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/gacha_activity.cpp",
            "onTakeReward",
            1228);
          v16 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  &v51,
                  (const char (*)[38])"[GACHA] checkAddItemBatch fails, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(_DWORD *)(v2 + 48) = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v51);
          v6 = ret;
        }
        else
        {
          *(_DWORD *)(v2 + 48) = 0;
          __for_range_1 = robot_num_map;
          google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin_0, robot_num_map);
          google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end_0, __for_range_1);
          while ( google::protobuf::operator!=(&__for_begin_0, &__for_end_0) )
          {
            p_robot_id_0 = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin_0);
            if ( *(_BYTE *)(((unsigned __int64)(p_robot_id_0 + 1) >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)p_robot_id_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(p_robot_id_0 + 1) >> 3)
                                                                         + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v17 = p_robot_id_0[1];
            if ( *(_BYTE *)(((unsigned __int64)p_robot_id_0 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_robot_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_robot_id_0 >> 3)
                                                                             + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            ret_1 = GachaActivity::subRobot(this, *p_robot_id_0, v17);
            if ( ret_1 )
            {
              common::milog::MiLogStream::create(
                &v51,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/activity/gacha_activity.cpp",
                "onTakeReward",
                1239);
              v18 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                      &v51,
                      (const char (*)[19])"[GACHA] robot_id: ");
              v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, p_robot_id_0);
              v20 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v19, (const char (*)[8])", num: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, p_robot_id_0 + 1);
              common::milog::MiLogStream::~MiLogStream(&v51);
              v6 = ret_1;
              goto LABEL_68;
            }
            if ( *(_BYTE *)(((unsigned __int64)(p_robot_id_0 + 1) >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)p_robot_id_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(p_robot_id_0 + 1) >> 3)
                                                                         + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v21 = p_robot_id_0[1];
            v22 = std::map<unsigned int,unsigned int>::operator[](&this->have_reward_robot_num_map_, p_robot_id_0);
            if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v23 = SAFE_ADD<unsigned int,unsigned int>(*v22, v21);
            v24 = std::map<unsigned int,unsigned int>::operator[](&this->have_reward_robot_num_map_, p_robot_id_0);
            v25 = v24;
            if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(v24);
            }
            *v25 = v23;
            if ( *(_BYTE *)(((unsigned __int64)(p_robot_id_0 + 1) >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)p_robot_id_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(p_robot_id_0 + 1) >> 3)
                                                                         + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v2 + 48) = SAFE_ADD<unsigned int,unsigned int>(*(_DWORD *)(v2 + 48), p_robot_id_0[1]);
            google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin_0);
          }
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v26 = Player::getItemComp(this->player_);
          PlayerItemComp::addItemBatch(
            v26,
            (const std::vector<ItemParam> *)(v2 + 64),
            (const ActionReason *)(v2 + 128),
            0LL);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          EventComp = Player::getEventComp(this->player_);
          common::tools::perf::make_shared<GachaConvertRobotEvent,unsigned int &>(
            (unsigned int *)&__r,
            (unsigned int *)(v2 + 48));
          std::shared_ptr<BaseEvent>::shared_ptr<GachaConvertRobotEvent,void>(
            (std::shared_ptr<BaseEvent> *const)&v48,
            &__r);
          PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v48);
          std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v48);
          std::shared_ptr<GachaConvertRobotEvent>::~shared_ptr(&__r);
          BaseActivity::updateAllConds((BaseActivity *const)this);
          BaseActivity::notifyClientData((BaseActivity *const)this, 0);
          v6 = 0;
        }
LABEL_68:
        std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v2 + 64));
      }
      else
      {
        v6 = 10315;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v51,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/gacha_activity.cpp",
        "onTakeReward",
        1189);
      v8 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
             &v51,
             (const char (*)[51])"[GACHA] base_config_ptr == nullptr, item_staget_: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->item_stage_);
      common::milog::MiLogStream::~MiLogStream(&v51);
      v6 = -1;
    }
  }
  result = v6;
  if ( v52 == (char *)v2 )
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

// Line 1256: range 00000000150839B6-0000000015083C1D
void __cdecl GachaActivity::setStageIdByGM(GachaActivity *const this, uint32_t target_stage_id)
{
  std::map<unsigned int,unsigned int>::mapped_type *v3; // rax
  std::map<unsigned int,unsigned int>::key_type __k; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0)
    || BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/gacha_activity.cpp",
      "setStageIdByGM",
      1259);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v5,
      (const char (*)[32])"[GACHA] activity is not opening");
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  else
  {
    if ( target_stage_id > 3 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->robot_finish_num_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->robot_finish_num_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      ++this->robot_finish_num_;
      __k = 1;
      v3 = std::map<unsigned int,unsigned int>::operator[](&this->robot_num_map_, &__k);
      if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      ++*v3;
      __k = 1;
      std::set<unsigned int>::insert(&this->have_get_robot_set_, &__k);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_stage_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->item_stage_);
    }
    this->item_stage_ = target_stage_id;
    if ( *(_BYTE *)(((unsigned __int64)&this->sub_stage_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->sub_stage_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->sub_stage_);
    }
    this->sub_stage_ = 0;
    std::map<unsigned int,unsigned int>::clear(&this->group_num_map_);
    GachaActivity::sendNotifyToClient(this, 0);
    BaseActivity::updateAllConds((BaseActivity *const)this);
    BaseActivity::notifyClientData((BaseActivity *const)this, 0);
  }
};

// Line 1281: range 0000000015083C1E-0000000015083E87
__int64 __fastcall GachaActivity::createRobotByGm(GachaActivity *const this, uint32_t robot_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v8; // rax
  ActivityGachaExcelConfigMgr *config_mgr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v10; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-80h] BYREF
  char v12[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 robot_id:1280";
  *(_QWORD *)(v2 + 16) = GachaActivity::createRobotByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = robot_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.activity_gacha_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v10);
  if ( data::ActivityGachaExcelConfigMgrBase::findActivityGachaRobotExcelConfig(config_mgr, *(_DWORD *)(v2 + 32)) )
  {
    v8 = std::map<unsigned int,unsigned int>::operator[](
           &this->robot_num_map_,
           (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    ++*v8;
    std::set<unsigned int>::insert(&this->have_get_robot_set_, (const std::set<unsigned int>::value_type *)(v2 + 32));
    BaseActivity::updateAllConds((BaseActivity *const)this);
    BaseActivity::notifyClientData((BaseActivity *const)this, 0);
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/gacha_activity.cpp",
      "createRobotByGm",
      1286);
    v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v11, (const char (*)[18])"[GACHA] robot_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v6, (const char (*)[11])" not vaild");
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = 0xFFFFFFFFLL;
  }
  if ( v12 == (char *)v2 )
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

// Line 1298: range 0000000015083E88-00000000150847B3
std::string *__cdecl GachaActivity::randRobotByGm[abi:cxx11](
        std::string *retstr,
        GachaActivity *const this,
        uint32_t rand_time)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  uint32_t *v13; // rdx
  __int64 v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::allocator<char> __a; // [rsp+27h] [rbp-2A9h] BYREF
  uint32_t i; // [rsp+28h] [rbp-2A8h]
  uint32_t j; // [rsp+2Ch] [rbp-2A4h]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-2A0h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-298h] BYREF
  const ActivityGachaExcelConfigMgr *config_mgr; // [rsp+40h] [rbp-290h]
  std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-288h]
  std::shared_ptr<Config> v25; // [rsp+50h] [rbp-280h] BYREF
  common::milog::MiLogStream v26; // [rsp+60h] [rbp-270h] BYREF
  common::milog::MiLogStream v27; // [rsp+80h] [rbp-250h] BYREF
  char v28[560]; // [rsp+A0h] [rbp-230h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(512LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 4 13 robot_id:1303 48 392 7 ss:1300";
  *(_QWORD *)(v3 + 16) = GachaActivity::randRobotByGm[abi:cxx11];
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862733] = -218103808;
  v5[536862734] = -202116109;
  v5[536862735] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v25);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25)->design_config.txt_config_mgr.activity_gacha_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v25);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v3 + 48);
  for ( i = 0; i < rand_time; ++i )
  {
    *(_DWORD *)(v3 + 32) = 0;
    if ( GachaActivity::guarProduct(this, (uint32_t *)(v3 + 32)) )
    {
      if ( GachaActivity::randWeightProduct(this, (uint32_t *)(v3 + 32), 1) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/gacha_activity.cpp",
          "randRobotByGm",
          1308);
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          &v27,
          (const char (*)[27])"[GACHA] choose robot fails");
        common::milog::MiLogStream::~MiLogStream(&v27);
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>(retstr, "error", &__a);
        std::allocator<char>::~allocator(&__a);
        goto LABEL_26;
      }
    }
    else if ( common::tools::MiscUtils::isContains<unsigned int>(
                &config_mgr->hidden_robot_vec,
                (const unsigned int *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/gacha_activity.cpp",
        "randRobotByGm",
        1314);
      v6 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v27,
             (const char (*)[40])"[GACHA] ready clear create_robot_vec_: ");
      common::milog::MiLogStream::operator<<<unsigned int>(v6, &this->create_robot_vec_);
      common::milog::MiLogStream::~MiLogStream(&v27);
      std::vector<unsigned int>::clear(&this->create_robot_vec_);
    }
    if ( GachaActivity::finialProduct(this, (uint32_t *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/gacha_activity.cpp",
        "randRobotByGm",
        1319);
      v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             &v27,
             (const char (*)[28])"[GACHA] choose robot fails ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v27);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(retstr, "error", &__a);
      std::allocator<char>::~allocator(&__a);
      goto LABEL_26;
    }
    if ( !*(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/gacha_activity.cpp",
        "randRobotByGm",
        1325);
      v8 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v27,
             (const char (*)[38])"[GACHA] robot_id == 0, item_staget_: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->item_stage_);
      common::milog::MiLogStream::~MiLogStream(&v27);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(retstr, "error", &__a);
      std::allocator<char>::~allocator(&__a);
      goto LABEL_26;
    }
    v9 = std::map<unsigned int,unsigned int>::operator[](
           &this->robot_num_map_,
           (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    ++*v9;
    std::vector<unsigned int>::push_back(
      &this->create_robot_vec_,
      (const std::vector<unsigned int>::value_type *)(v3 + 32));
    std::set<unsigned int>::insert(&this->have_get_robot_set_, (const std::set<unsigned int>::value_type *)(v3 + 32));
    v10 = std::operator<<<char>(v3 + 64, &this->gm_output_);
    v11 = std::operator<<<std::char_traits<char>>(v10, ", robot_id:");
    v12 = std::ostream::operator<<(v11, *(unsigned int *)(v3 + 32));
    std::operator<<<std::char_traits<char>>(v12, ", create_robot_vec_: ");
    __for_range = &this->create_robot_vec_;
    __for_begin._M_current = std::vector<unsigned int>::begin(&this->create_robot_vec_)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v13 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      j = *v13;
      v14 = std::ostream::operator<<(v3 + 64, j);
      std::operator<<<std::char_traits<char>>(v14, ",");
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    std::ostream::operator<<(v3 + 64, &std::endl<char,std::char_traits<char>>);
  }
  BaseActivity::updateAllConds((BaseActivity *const)this);
  BaseActivity::notifyClientData((BaseActivity *const)this, 0);
  common::milog::MiLogStream::create(
    &v26,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/gacha_activity.cpp",
    "randRobotByGm",
    1343);
  v15 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v26, (const char (*)[9])"[GACHA] ");
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(&v27, v3 + 48);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, (const std::string *)&v27);
  std::string::~string(&v27);
  common::milog::MiLogStream::~MiLogStream(&v26);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(retstr, v3 + 48);
LABEL_26:
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v3 + 48);
  if ( v28 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF803C) = 0;
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
  }
  return retstr;
};

// Line 1348: range 00000000150847B4-0000000015084AB4
bool __cdecl GachaActivity::checkCondIsMeet(GachaActivity *const this, const data::NewActivityCond *cond)
{
  const ActivityGachaExcelConfigMgr *v2; // rdx
  common::milog::MiLogStream *v3; // rax
  unsigned int have_reward_robot_num; // [rsp+1Ch] [rbp-84h]
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-80h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+28h] [rbp-78h] BYREF
  const ActivityGachaExcelConfigMgr *config_mgr; // [rsp+30h] [rbp-70h]
  const data::ActivityGachaBaseExcelConfig *base_config_ptr; // [rsp+38h] [rbp-68h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+40h] [rbp-60h]
  const std::pair<unsigned int const,unsigned int> *v11; // [rsp+48h] [rbp-58h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+50h] [rbp-50h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+58h] [rbp-48h]
  std::shared_ptr<Config> v14; // [rsp+60h] [rbp-40h] BYREF
  common::milog::MiLogStream v15; // [rsp+70h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( cond->type != NEW_ACTIVITY_COND_GACHA_CAN_CREATE_ROBOT )
    return BaseActivity::checkCondIsMeet((BaseActivity *const)this, cond);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.activity_gacha_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v14);
  v2 = config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  base_config_ptr = data::ActivityGachaExcelConfigMgrBase::findActivityGachaBaseExcelConfig(v2, this->activity_id_);
  if ( base_config_ptr )
  {
    have_reward_robot_num = 0;
    __for_range = &this->have_reward_robot_num_map_;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->have_reward_robot_num_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->have_reward_robot_num_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      _ = std::get<0ul,unsigned int const,unsigned int>(v11);
      num = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v11);
      if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      have_reward_robot_num = SAFE_ADD<unsigned int,unsigned int>(have_reward_robot_num, *num);
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&base_config_ptr->max_convert >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)base_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&base_config_ptr->max_convert >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    return have_reward_robot_num < base_config_ptr->max_convert && GachaActivity::getTotalRobotNum(this);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/gacha_activity.cpp",
      "checkCondIsMeet",
      1357);
    v3 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v15,
           (const char (*)[51])"[GACHA] base_config_ptr == nullptr, item_staget_: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->item_stage_);
    common::milog::MiLogStream::~MiLogStream(&v15);
    return 0;
  }
};

// Line 1374: range 0000000015084AB6-0000000015085049
int32_t __cdecl GachaActivity::execAction(GachaActivity *const this, const data::NewActivityExec *action_exec)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int v9; // r15d
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v10; // rdx
  common::milog::MiLogStream *v11; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,GachaActivityStageData> >::pointer v12; // rdx
  bool *p_is_open; // rax
  int32_t result; // eax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-110h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-108h] BYREF
  unsigned __int64 val; // [rsp+30h] [rbp-100h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-F8h]
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-F0h] BYREF
  char v20[208]; // [rsp+60h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 7 id:1390 64 8 9 iter:1393 96 24 17 stage_id_vec:1384";
  *(_QWORD *)(v3 + 16) = GachaActivity::execAction;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( action_exec->type == NEW_ACTIVITY_ACTION_OPEN_GACHA_STAGE )
  {
    if ( std::vector<std::string>::size(&action_exec->param) )
    {
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 96));
      if ( common::tools::StringUtils::strVecToNumVec<unsigned int>(
             &action_exec->param,
             (std::vector<unsigned int> *)(v3 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/gacha_activity.cpp",
          "execAction",
          1387);
        v8 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
               &v19,
               (const char (*)[24])"strVecToNumVec falied: ");
        common::milog::MiLogStream::operator<<<std::string>(v8, &action_exec->param);
        common::milog::MiLogStream::~MiLogStream(&v19);
        v2 = -1;
        v9 = 0;
      }
      else
      {
        __for_range = (std::vector<unsigned int> *)(v3 + 96);
        __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 96))._M_current;
        __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 96))._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v10 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v3 + 48) = *v10;
          *(std::map<unsigned int,GachaActivityStageData>::iterator *)(v3 + 64) = std::map<unsigned int,GachaActivityStageData>::find(
                                                                                    &this->stage_data_map_,
                                                                                    (const std::map<unsigned int,GachaActivityStageData>::key_type *)(v3 + 48));
          val = (unsigned __int64)std::map<unsigned int,GachaActivityStageData>::end(&this->stage_data_map_)._M_node;
          if ( std::operator==(
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,GachaActivityStageData> >::_Self *)(v3 + 64),
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,GachaActivityStageData> >::_Self *)&val) )
          {
            common::milog::MiLogStream::create(
              &v19,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/gacha_activity.cpp",
              "execAction",
              1396);
            v11 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                    &v19,
                    (const char (*)[26])"[GACHA] id not invaild : ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v19);
            v2 = -1;
            v9 = 0;
            goto LABEL_21;
          }
          v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,GachaActivityStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GachaActivityStageData> > *const)(v3 + 64));
          p_is_open = &v12->second.is_open;
          if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
          {
            __asan_report_store1(p_is_open);
          }
          v12->second.is_open = 1;
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        GachaActivity::itemStageChange(this, 0);
        BaseActivity::notifyClientData((BaseActivity *const)this, 0);
        v9 = 1;
      }
LABEL_21:
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 96));
      if ( v9 )
        v2 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/gacha_activity.cpp",
        "execAction",
        1381);
      v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             &v19,
             (const char (*)[19])"action param size ");
      val = std::vector<std::string>::size(&action_exec->param);
      v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, &val);
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])off_256E81C0);
      common::milog::MiLogStream::~MiLogStream(&v19);
      v2 = -1;
    }
  }
  else
  {
    v2 = BaseActivity::execAction((BaseActivity *const)this, action_exec);
  }
  result = v2;
  if ( v20 == (char *)v3 )
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

// Line 1415: range 000000001508504A-000000001508542C
int32_t __cdecl GachaActivity::checkGiveFriendGift(
        const GachaActivity *const this,
        const google::protobuf::Map<unsigned int,unsigned int> *give_gift_num_map)
{
  const data::ActivityGachaExcelConfigMgrBase *v3; // rcx
  char v4; // al
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  uint32_t second; // esi
  int32_t ret; // [rsp+14h] [rbp-ACh]
  ActivityGachaExcelConfigMgr *config_mgr; // [rsp+18h] [rbp-A8h]
  google::protobuf::Map<unsigned int,unsigned int>::const_reference p_gift_id_0; // [rsp+30h] [rbp-90h]
  google::protobuf::Map<unsigned int,unsigned int>::const_reference p_gift_id; // [rsp+38h] [rbp-88h]
  std::shared_ptr<Config> v12; // [rsp+40h] [rbp-80h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+50h] [rbp-70h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+70h] [rbp-50h] BYREF
  common::milog::MiLogStream v15; // [rsp+90h] [rbp-30h] BYREF

  if ( google::protobuf::Map<unsigned int,unsigned int>::empty(give_gift_num_map) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/gacha_activity.cpp",
      "checkGiveFriendGift",
      1419);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      &v15,
      (const char (*)[35])"[GACHA] give_gift_num_map is empty");
    common::milog::MiLogStream::~MiLogStream(&v15);
    return -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v12);
    config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config.txt_config_mgr.activity_gacha_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v12);
    google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, give_gift_num_map);
    google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, give_gift_num_map);
    while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
    {
      p_gift_id = google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
      v3 = config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)p_gift_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_gift_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gift_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( !data::ActivityGachaExcelConfigMgrBase::findActivityGachaRobotExcelConfig(v3, p_gift_id->first) )
        goto LABEL_11;
      if ( *(_BYTE *)(((unsigned __int64)&p_gift_id->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p_gift_id + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p_gift_id->second >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( p_gift_id->second )
        v4 = 0;
      else
LABEL_11:
        v4 = 1;
      if ( v4 )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/gacha_activity.cpp",
          "checkGiveFriendGift",
          1429);
        v5 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
               &v15,
               (const char (*)[17])"[GACHA] gift_id:");
        v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)p_gift_id);
        common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v6, (const char (*)[11])" not vaild");
        common::milog::MiLogStream::~MiLogStream(&v15);
        return -1;
      }
      google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
    }
    google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, give_gift_num_map);
    google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, give_gift_num_map);
    while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
    {
      p_gift_id_0 = google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)&p_gift_id_0->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p_gift_id_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p_gift_id_0->second >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      second = p_gift_id_0->second;
      if ( *(_BYTE *)(((unsigned __int64)p_gift_id_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_gift_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gift_id_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      ret = GachaActivity::checkSubRobot(this, p_gift_id_0->first, second);
      if ( ret )
        return ret;
      google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 1448: range 000000001508542E-0000000015085C6A
int32_t __cdecl GachaActivity::doGiveFriendGift(
        GachaActivity *const this,
        uint32_t friend_uid,
        const google::protobuf::Map<unsigned int,unsigned int> *give_gift_num_map,
        const google::protobuf::Map<unsigned int,unsigned int> *have_gift_num_map,
        std::vector<unsigned int> *limit_gift_vec)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  const data::ActivityGachaExcelConfigMgrBase *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  int32_t result; // eax
  uint32_t second; // esi
  uint32_t v12; // esi
  PlayerEventComp *EventComp; // r14
  unsigned int total_gift_num; // [rsp+34h] [rbp-14Ch]
  int32_t ret_0; // [rsp+38h] [rbp-148h]
  int32_t ret; // [rsp+3Ch] [rbp-144h]
  ActivityGachaExcelConfigMgr *config_mgr; // [rsp+40h] [rbp-140h]
  const data::ActivityGachaBaseExcelConfig *base_config_ptr; // [rsp+48h] [rbp-138h]
  google::protobuf::Map<unsigned int,unsigned int>::const_reference p_gift_id_0; // [rsp+70h] [rbp-110h]
  google::protobuf::Map<unsigned int,unsigned int>::const_reference p_gift_id; // [rsp+78h] [rbp-108h]
  google::protobuf::Map<unsigned int,unsigned int>::const_reference p___0; // [rsp+80h] [rbp-100h]
  google::protobuf::Map<unsigned int,unsigned int>::const_reference p__; // [rsp+88h] [rbp-F8h]
  std::shared_ptr<GachaGiveRobotEvent> __r; // [rsp+90h] [rbp-F0h] BYREF
  std::shared_ptr<Config> v26; // [rsp+A0h] [rbp-E0h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+B0h] [rbp-D0h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+D0h] [rbp-B0h] BYREF
  common::milog::MiLogStream v29; // [rsp+F0h] [rbp-90h] BYREF
  char v30[112]; // [rsp+110h] [rbp-70h] BYREF

  v5 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 4 14 total_num:1483";
  *(_QWORD *)(v5 + 16) = GachaActivity::doGiveFriendGift;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v26);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.activity_gacha_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v26);
  v8 = config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  base_config_ptr = data::ActivityGachaExcelConfigMgrBase::findActivityGachaBaseExcelConfig(v8, this->activity_id_);
  if ( base_config_ptr )
  {
    total_gift_num = 0;
    google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, give_gift_num_map);
    google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, give_gift_num_map);
    while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
    {
      p__ = google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)&p__->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p__ + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p__->second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      total_gift_num = SAFE_ADD<unsigned int,unsigned int>(total_gift_num, p__->second);
      google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
    }
    google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, have_gift_num_map);
    google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, have_gift_num_map);
    while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
    {
      p___0 = google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)&p___0->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p___0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p___0->second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      total_gift_num = SAFE_ADD<unsigned int,unsigned int>(total_gift_num, p___0->second);
      google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&base_config_ptr->robot_limit >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&base_config_ptr->robot_limit >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( total_gift_num <= base_config_ptr->robot_limit )
    {
      google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, give_gift_num_map);
      google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, give_gift_num_map);
      while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
      {
        p_gift_id = google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)&p_gift_id->second >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)p_gift_id + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p_gift_id->second >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        second = p_gift_id->second;
        if ( *(_BYTE *)(((unsigned __int64)p_gift_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_gift_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gift_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        ret = GachaActivity::checkSubRobot(this, p_gift_id->first, second);
        if ( ret )
        {
          result = ret;
          goto LABEL_47;
        }
        google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
      }
      *(_DWORD *)(v5 + 32) = 0;
      google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, give_gift_num_map);
      google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, give_gift_num_map);
      while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
      {
        p_gift_id_0 = google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)&p_gift_id_0->second >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)p_gift_id_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p_gift_id_0->second >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v12 = p_gift_id_0->second;
        if ( *(_BYTE *)(((unsigned __int64)p_gift_id_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_gift_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gift_id_0 >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        ret_0 = GachaActivity::subRobot(this, p_gift_id_0->first, v12);
        if ( ret_0 )
        {
          result = ret_0;
          goto LABEL_47;
        }
        if ( *(_BYTE *)(((unsigned __int64)&p_gift_id_0->second >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)p_gift_id_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p_gift_id_0->second >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v5 + 32) = SAFE_ADD<unsigned int,unsigned int>(*(_DWORD *)(v5 + 32), p_gift_id_0->second);
        google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
      }
      if ( *(_DWORD *)(v5 + 32) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        EventComp = Player::getEventComp(this->player_);
        common::tools::perf::make_shared<GachaGiveRobotEvent,unsigned int &>(
          (unsigned int *)&__r,
          (unsigned int *)(v5 + 32));
        std::shared_ptr<BaseEvent>::shared_ptr<GachaGiveRobotEvent,void>((std::shared_ptr<BaseEvent> *const)&v26, &__r);
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v26);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v26);
        std::shared_ptr<GachaGiveRobotEvent>::~shared_ptr(&__r);
        BaseActivity::updateAllConds((BaseActivity *const)this);
        BaseActivity::notifyClientData((BaseActivity *const)this, 0);
        result = 0;
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      result = 10310;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/gacha_activity.cpp",
      "doGiveFriendGift",
      1453);
    v9 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v29,
           (const char (*)[51])"[GACHA] base_config_ptr == nullptr, item_staget_: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->item_stage_);
    common::milog::MiLogStream::~MiLogStream(&v29);
    result = -1;
  }
LABEL_47:
  if ( v30 == (char *)v5 )
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

// Line 1506: range 0000000015085C6C-000000001508671F
__int64 __fastcall GachaActivity::onAcceptGiveGiftReq(
        GachaActivity *const this,
        uint32_t friend_uid,
        proto::ActivityAcceptGiftResultInfo *accept_gift_result_info)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  __int64 result; // rax
  unsigned int *v10; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v11; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v12; // r14d
  unsigned int *v13; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v14; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v15; // r14d
  unsigned int *v16; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v17; // rdx
  unsigned int v18; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v19; // rax
  unsigned int *v20; // rdx
  uint32_t v21; // esi
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  PlayerEventComp *EventComp; // r14
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type can_recv_gift_num; // [rsp+20h] [rbp-180h]
  uint32_t ret; // [rsp+24h] [rbp-17Ch]
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-178h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+30h] [rbp-170h] BYREF
  ActivityRecvGiftData *recv_gift_record; // [rsp+38h] [rbp-168h]
  google::protobuf::Map<unsigned int,unsigned int> *accept_gift_num_map; // [rsp+40h] [rbp-160h]
  google::protobuf::Map<unsigned int,unsigned int> *unaccept_gift_num_map; // [rsp+48h] [rbp-158h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+50h] [rbp-150h]
  google::protobuf::Map<unsigned int,unsigned int> *__for_range_0; // [rsp+58h] [rbp-148h]
  google::protobuf::Map<unsigned int,unsigned int> *__for_range_1; // [rsp+60h] [rbp-140h]
  const unsigned int *p_gift_id_0; // [rsp+68h] [rbp-138h]
  const unsigned int *p_gift_id; // [rsp+70h] [rbp-130h]
  const std::pair<unsigned int const,unsigned int> *v39; // [rsp+78h] [rbp-128h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *gift_id; // [rsp+80h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+88h] [rbp-118h]
  std::shared_ptr<GachaGetRobotEvent> __r; // [rsp+90h] [rbp-110h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+A0h] [rbp-100h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::iterator __for_begin_0; // [rsp+B0h] [rbp-F0h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::iterator __for_end_0; // [rsp+D0h] [rbp-D0h] BYREF
  common::milog::MiLogStream v46; // [rsp+F0h] [rbp-B0h] BYREF
  char v47[144]; // [rsp+110h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 14 total_num:1558 48 4 15 friend_uid:1505 64 8 9 iter:1508";
  *(_QWORD *)(v3 + 16) = GachaActivity::onAcceptGiveGiftReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = friend_uid;
  proto::ActivityAcceptGiftResultInfo::set_uid(accept_gift_result_info, *(_DWORD *)(v3 + 48));
  *(std::map<unsigned int,ActivityRecvGiftData>::iterator *)(v3 + 64) = std::map<unsigned int,ActivityRecvGiftData>::find(
                                                                          &this->gift_data_.recv_gift_data_map,
                                                                          (const std::map<unsigned int,ActivityRecvGiftData>::key_type *)(v3 + 48));
  __for_end._M_node = std::map<unsigned int,ActivityRecvGiftData>::end(&this->gift_data_.recv_gift_data_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,ActivityRecvGiftData> >::_Self *)(v3 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,ActivityRecvGiftData> >::_Self *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v46,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/gacha_activity.cpp",
      "onAcceptGiveGiftReq",
      1511);
    v6 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
           &v46,
           (const char (*)[54])"[GACHA] not find friend recv gift record, friend_uid:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v3 + 32) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v46);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    recv_gift_record = &std::_Rb_tree_iterator<std::pair<unsigned int const,ActivityRecvGiftData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,ActivityRecvGiftData> > *const)(v3 + 64))->second;
    can_recv_gift_num = GachaActivity::getCanRecvRobotNum(this);
    if ( can_recv_gift_num )
    {
      accept_gift_num_map = proto::ActivityAcceptGiftResultInfo::mutable_accept_gift_num_map(accept_gift_result_info);
      unaccept_gift_num_map = proto::ActivityAcceptGiftResultInfo::mutable_unaccept_gift_num_map(accept_gift_result_info);
      __for_range = &recv_gift_record->gift_num_map;
      __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&recv_gift_record->gift_num_map)._M_node;
      __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v39 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
        gift_id = std::get<0ul,unsigned int const,unsigned int>(v39);
        num = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v39);
        if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( can_recv_gift_num >= *num )
        {
          if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v15 = *num;
          v16 = google::protobuf::Map<unsigned int,unsigned int>::operator[](accept_gift_num_map, gift_id);
          v17 = v16;
          if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v16);
          }
          *v17 = v15;
          if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          can_recv_gift_num -= *num;
        }
        else
        {
          if ( can_recv_gift_num )
          {
            v10 = google::protobuf::Map<unsigned int,unsigned int>::operator[](accept_gift_num_map, gift_id);
            v11 = v10;
            if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(v10);
            }
            *v11 = can_recv_gift_num;
          }
          if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v12 = *num - can_recv_gift_num;
          v13 = google::protobuf::Map<unsigned int,unsigned int>::operator[](unaccept_gift_num_map, gift_id);
          v14 = v13;
          if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v13);
          }
          *v14 = v12;
          can_recv_gift_num = 0;
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
      }
      std::map<unsigned int,unsigned int>::clear(&recv_gift_record->gift_num_map);
      __for_range_0 = unaccept_gift_num_map;
      google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin_0, unaccept_gift_num_map);
      google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end_0, __for_range_0);
      while ( google::protobuf::operator!=(&__for_begin_0, &__for_end_0) )
      {
        p_gift_id = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::iterator::operator*(&__for_begin_0);
        if ( *(_BYTE *)(((unsigned __int64)(p_gift_id + 1) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)p_gift_id + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(p_gift_id + 1) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v18 = p_gift_id[1];
        v19 = std::map<unsigned int,unsigned int>::operator[](&recv_gift_record->gift_num_map, p_gift_id);
        v20 = v19;
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v19);
        }
        *v20 = v18;
        google::protobuf::Map<unsigned int,unsigned int>::iterator::operator++(&__for_begin_0);
      }
      if ( google::protobuf::Map<unsigned int,unsigned int>::empty(unaccept_gift_num_map) )
        std::map<unsigned int,ActivityRecvGiftData>::erase(
          &this->gift_data_.recv_gift_data_map,
          (const std::map<unsigned int,ActivityRecvGiftData>::key_type *)(v3 + 48));
      *(_DWORD *)(v3 + 32) = 0;
      __for_range_1 = accept_gift_num_map;
      google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin_0, accept_gift_num_map);
      google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end_0, __for_range_1);
      while ( google::protobuf::operator!=(&__for_begin_0, &__for_end_0) )
      {
        p_gift_id_0 = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::iterator::operator*(&__for_begin_0);
        if ( *(_BYTE *)(((unsigned __int64)(p_gift_id_0 + 1) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)p_gift_id_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(p_gift_id_0 + 1) >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v21 = p_gift_id_0[1];
        if ( *(_BYTE *)(((unsigned __int64)p_gift_id_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_gift_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gift_id_0 >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        ret = GachaActivity::addRobot(this, *p_gift_id_0, v21);
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v46,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/gacha_activity.cpp",
            "onAcceptGiveGiftReq",
            1565);
          v22 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  &v46,
                  (const char (*)[38])"[GACHA] addRobot fail, item_staget_: ");
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &this->item_stage_);
          v24 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v23, (const char (*)[11])", gift_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, p_gift_id_0);
          common::milog::MiLogStream::~MiLogStream(&v46);
          result = ret;
          goto LABEL_57;
        }
        std::set<unsigned int>::insert(&this->have_get_robot_set_, p_gift_id_0);
        if ( *(_BYTE *)(((unsigned __int64)(p_gift_id_0 + 1) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)p_gift_id_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(p_gift_id_0 + 1) >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v3 + 32) = SAFE_ADD<unsigned int,unsigned int>(*(_DWORD *)(v3 + 32), p_gift_id_0[1]);
        google::protobuf::Map<unsigned int,unsigned int>::iterator::operator++(&__for_begin_0);
      }
      if ( *(_DWORD *)(v3 + 32) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        EventComp = Player::getEventComp(this->player_);
        common::tools::perf::make_shared<GachaGetRobotEvent,unsigned int &>(
          (unsigned int *)&__r,
          (unsigned int *)(v3 + 32));
        std::shared_ptr<BaseEvent>::shared_ptr<GachaGetRobotEvent,void>(&p_event_ptr, &__r);
        PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
        std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
        std::shared_ptr<GachaGetRobotEvent>::~shared_ptr(&__r);
        BaseActivity::updateAllConds((BaseActivity *const)this);
        BaseActivity::notifyClientData((BaseActivity *const)this, 0);
        result = 0LL;
      }
      else
      {
        result = 0LL;
      }
    }
    else
    {
      result = 10316LL;
    }
  }
LABEL_57:
  if ( v47 == (char *)v3 )
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

// Line 1584: range 0000000015086720-00000000150867DA
void __cdecl GachaActivity::fillActivitySocialData(GachaActivity *const this, proto::ActivitySocialData *social_data)
{
  google::protobuf::Map<unsigned int,unsigned int> *v2; // rax
  google::protobuf::Map<unsigned int,unsigned int> *v3; // rax
  proto::ActivityGiveSocialData *activity_give_social_data; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::ActivitySocialData::set_schedule_id(social_data, this->schedule_id_);
  activity_give_social_data = proto::ActivitySocialData::mutable_activity_give_social_data(social_data);
  v2 = proto::ActivityGiveSocialData::mutable_wish_gift_num_map(activity_give_social_data);
  common::tools::MiscUtils::toProtoMap<std::map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
    &this->gift_data_.wish_gift_num_map,
    v2);
  v3 = proto::ActivityGiveSocialData::mutable_have_gift_num_map(activity_give_social_data);
  common::tools::MiscUtils::toProtoMap<std::map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
    &this->robot_num_map_,
    v3);
};

// Line 1594: range 00000000150867DC-000000001508680C
int32_t __cdecl GachaActivity::getCanGiveFriendGift(
        GachaActivity *const this,
        google::protobuf::Map<unsigned int,unsigned int> *gift_num_map)
{
  common::tools::MiscUtils::toProtoMap<std::map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
    &this->robot_num_map_,
    gift_num_map);
  return 0;
};

// Line 1601: range 000000001508680E-0000000015086AAF
int32_t __cdecl GachaActivity::setGiftWish(
        GachaActivity *const this,
        const google::protobuf::Map<unsigned int,unsigned int> *gift_num_map)
{
  const ActivityGachaExcelConfigMgr *v2; // rcx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  unsigned int val; // [rsp+14h] [rbp-9Ch] BYREF
  const ActivityGachaExcelConfigMgr *config_mgr; // [rsp+18h] [rbp-98h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-90h]
  const unsigned int *p_gift_id; // [rsp+28h] [rbp-88h]
  std::shared_ptr<Config> v13; // [rsp+30h] [rbp-80h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+40h] [rbp-70h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+60h] [rbp-50h] BYREF
  common::milog::MiLogStream v16; // [rsp+80h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.txt_config_mgr.activity_gacha_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v13);
  __for_range = gift_num_map;
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, gift_num_map);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, gift_num_map);
  while ( 1 )
  {
    if ( !google::protobuf::operator!=(&__for_begin, &__for_end) )
    {
      std::map<unsigned int,unsigned int>::clear(&this->gift_data_.wish_gift_num_map);
      common::tools::MiscUtils::fromProtoMap<std::map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
        &this->gift_data_.wish_gift_num_map,
        gift_num_map);
      BaseActivity::notifyClientData((BaseActivity *const)this, 0);
      return 0;
    }
    p_gift_id = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
    v2 = config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)p_gift_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_gift_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gift_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( !data::ActivityGachaExcelConfigMgrBase::findActivityGachaRobotExcelConfig(v2, *p_gift_id) )
      break;
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v16,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/gacha_activity.cpp",
    "setGiftWish",
    1608);
  v3 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
         &v16,
         (const char (*)[27])"[GACHA] can not wish gift:");
  v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, p_gift_id);
  v5 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v4, (const char (*)[14])" schedule_id:");
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->schedule_id_);
  v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
  common::milog::MiLogStream::~MiLogStream(&v16);
  return -1;
};
