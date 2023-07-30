// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/summer_time_activity.cpp

// Line 37: range 0000000017FD8C66-0000000017FD939C
int32_t __cdecl SummerTimeActivity::fromScheduleBin(
        SummerTimeActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  google::protobuf::Map<unsigned int,proto::SummerTimeStageBin>::const_iterator *p_for_end; // rsi
  std::map<unsigned int,StageData>::mapped_type *v6; // rax
  google::protobuf::Map<unsigned int,proto::SummerTimeStageBin>::size_type *v7; // rdx
  unsigned int v8; // eax
  __int64 v9; // rdx
  char v10; // al
  __int64 float_signal_id; // rdx
  char v12; // al
  uint32_t v13; // ecx
  char v14; // dl
  __int64 v15; // rdx
  uint32_t v16; // ecx
  char v17; // dl
  __int64 v18; // rdx
  __int64 v19; // rdx
  char v20; // al
  google::protobuf::uint32 v21; // ecx
  char v22; // dl
  __int64 v23; // rdx
  bool is_touched; // cl
  char v25; // dl
  __int64 v26; // rdx
  bool is_sea_mist_closed; // cl
  char v28; // dl
  __int64 v29; // rdx
  int32_t result; // eax
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+10h] [rbp-120h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_1; // [rsp+18h] [rbp-118h]
  size_t i; // [rsp+20h] [rbp-110h]
  const proto::SummerTimeScheduleBin *schedule_bin; // [rsp+28h] [rbp-108h]
  const google::protobuf::Map<unsigned int,proto::SummerTimeStageBin> *__for_range; // [rsp+30h] [rbp-100h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+38h] [rbp-F8h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+40h] [rbp-F0h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_1; // [rsp+48h] [rbp-E8h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_1; // [rsp+50h] [rbp-E0h]
  const proto::SummerTimeSprintBoatBin *sprint_boat_bin; // [rsp+58h] [rbp-D8h]
  SummerTimeActivity::SprintBoatData *data; // [rsp+60h] [rbp-D0h]
  google::protobuf::Map<unsigned int,proto::SummerTimeStageBin>::const_reference p_stage_id; // [rsp+68h] [rbp-C8h]
  google::protobuf::Map<unsigned int,proto::SummerTimeStageBin>::const_iterator __for_begin; // [rsp+70h] [rbp-C0h] BYREF
  google::protobuf::Map<unsigned int,proto::SummerTimeStageBin>::const_iterator __for_end; // [rsp+90h] [rbp-A0h] BYREF
  char v45[128]; // [rsp+B0h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 10 zone_id:45 64 8 13 stage_data:41";
  *(_QWORD *)(v2 + 16) = SummerTimeActivity::fromScheduleBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  schedule_bin = proto::ActivityScheduleBin::summer_time_bin(bin);
  __for_range = proto::SummerTimeScheduleBin::stage_bin_map(schedule_bin);
  google::protobuf::Map<unsigned int,proto::SummerTimeStageBin>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,proto::SummerTimeStageBin>::end(&__for_end, __for_range);
  while ( 1 )
  {
    p_for_end = &__for_end;
    if ( !google::protobuf::operator!=(&__for_begin, &__for_end) )
      break;
    p_stage_id = google::protobuf::Map<unsigned int,proto::SummerTimeStageBin>::const_iterator::operator*(&__for_begin);
    *(_DWORD *)(v2 + 64) = proto::SummerTimeStageBin::stage_id(&p_stage_id->second);
    *(_BYTE *)(v2 + 68) = proto::SummerTimeStageBin::is_open(&p_stage_id->second);
    v6 = std::map<unsigned int,StageData>::operator[](&this->stage_map_, &p_stage_id->first);
    v7 = (google::protobuf::Map<unsigned int,proto::SummerTimeStageBin>::size_type *)v6;
    if ( ((unsigned __int8)v6 & 7) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((unsigned __int64)(&v6->is_open + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v6 + 7) & 7) >= *(_BYTE *)(((unsigned __int64)(&v6->is_open + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v6, 8LL);
    }
    *v7 = *(_QWORD *)(v2 + 64);
    google::protobuf::Map<unsigned int,proto::SummerTimeStageBin>::const_iterator::operator++(&__for_begin);
  }
  LOBYTE(v8) = proto::SummerTimeScheduleBin::is_content_closed(schedule_bin);
  v9 = v8;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(p_for_end) = v10 != 0;
    __asan_report_store1(&this->is_content_closed_, p_for_end, v9);
  }
  this->is_content_closed_ = v9;
  __for_range_0 = proto::SummerTimeScheduleBin::unlcoked_mist_zone_list(schedule_bin);
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
    *(_DWORD *)(v2 + 48) = *__for_begin_0;
    p_for_end = (google::protobuf::Map<unsigned int,proto::SummerTimeStageBin>::const_iterator *)(v2 + 48);
    std::set<unsigned int>::insert(
      &this->unlcoked_mist_zone_set_,
      (const std::set<unsigned int>::value_type *)(v2 + 48));
    ++__for_begin_0;
  }
  __for_range_1 = proto::SummerTimeScheduleBin::disable_float_signal_list(schedule_bin);
  __for_begin_1 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_1);
  __for_end_1 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_1);
  while ( __for_begin_1 != __for_end_1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_1 >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin_1);
    }
    *(_DWORD *)(v2 + 48) = *__for_begin_1;
    p_for_end = (google::protobuf::Map<unsigned int,proto::SummerTimeStageBin>::const_iterator *)(v2 + 48);
    std::set<unsigned int>::insert(
      &this->disabled_float_signal_set_,
      (const std::set<unsigned int>::value_type *)(v2 + 48));
    ++__for_begin_1;
  }
  float_signal_id = proto::SummerTimeScheduleBin::next_float_signal_id(schedule_bin);
  v12 = *(_BYTE *)(((unsigned __int64)&this->next_float_signal_id_ >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_for_end) = v12 != 0;
    __asan_report_store4(&this->next_float_signal_id_, p_for_end, float_signal_id);
  }
  this->next_float_signal_id_ = float_signal_id;
  v13 = proto::SummerTimeScheduleBin::last_float_signal_id(schedule_bin);
  v14 = *(_BYTE *)(((unsigned __int64)&this->last_float_signal_id_ >> 3) + 0x7FFF8000);
  LOBYTE(p_for_end) = v14 != 0;
  v15 = (v14 != 0) & (unsigned __int8)((char)((((_BYTE)this + 124) & 7) + 3) >= v14);
  if ( (_BYTE)v15 )
    __asan_report_store4(&this->last_float_signal_id_, p_for_end, v15);
  this->last_float_signal_id_ = v13;
  v16 = proto::SummerTimeScheduleBin::draft_wood(schedule_bin);
  v17 = *(_BYTE *)(((unsigned __int64)&this->draft_wood_ >> 3) + 0x7FFF8000);
  LOBYTE(p_for_end) = v17 != 0;
  v18 = (v17 != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= v17);
  if ( (_BYTE)v18 )
    __asan_report_store4(&this->draft_wood_, p_for_end, v18);
  this->draft_wood_ = v16;
  v19 = proto::SummerTimeScheduleBin::mini_harpastum(schedule_bin);
  v20 = *(_BYTE *)(((unsigned __int64)&this->mini_harpastum_ >> 3) + 0x7FFF8000);
  if ( v20 != 0 && v20 <= 3 )
  {
    LOBYTE(p_for_end) = v20 != 0;
    __asan_report_store4(&this->mini_harpastum_, p_for_end, v19);
  }
  this->mini_harpastum_ = v19;
  for ( i = 0LL; i < proto::SummerTimeScheduleBin::sprint_boat_list_size(schedule_bin); ++i )
  {
    sprint_boat_bin = proto::SummerTimeScheduleBin::sprint_boat_list(schedule_bin, i);
    *(_DWORD *)(v2 + 48) = i + 1;
    p_for_end = (google::protobuf::Map<unsigned int,proto::SummerTimeStageBin>::const_iterator *)(v2 + 48);
    data = std::map<unsigned int,SummerTimeActivity::SprintBoatData>::operator[](
             &this->sprint_boat_data_map_,
             (std::map<unsigned int,SummerTimeActivity::SprintBoatData>::key_type *)(v2 + 48));
    v21 = proto::SummerTimeSprintBoatBin::best_score(sprint_boat_bin);
    v22 = *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000);
    LOBYTE(p_for_end) = v22 != 0;
    v23 = (v22 != 0) & (unsigned __int8)((char)(((unsigned __int8)data & 7) + 3) >= v22);
    if ( (_BYTE)v23 )
      __asan_report_store4(data, p_for_end, v23);
    data->best_score = v21;
    is_touched = proto::SummerTimeSprintBoatBin::is_touched(sprint_boat_bin);
    v25 = *(_BYTE *)(((unsigned __int64)&data->is_touched >> 3) + 0x7FFF8000);
    LOBYTE(p_for_end) = v25 != 0;
    v26 = (v25 != 0) & (unsigned __int8)((((unsigned __int8)data + 4) & 7) >= v25);
    if ( (_BYTE)v26 )
      __asan_report_store1(&data->is_touched, p_for_end, v26);
    data->is_touched = is_touched;
  }
  is_sea_mist_closed = proto::SummerTimeScheduleBin::is_sea_mist_closed(schedule_bin);
  v28 = *(_BYTE *)(((unsigned __int64)&this->is_sea_mist_closed_ >> 3) + 0x7FFF8000);
  LOBYTE(p_for_end) = v28 != 0;
  v29 = (v28 != 0) & (unsigned __int8)((((unsigned __int8)this - 124) & 7) >= v28);
  if ( (_BYTE)v29 )
    __asan_report_store1(&this->is_sea_mist_closed_, p_for_end, v29);
  this->is_sea_mist_closed_ = is_sea_mist_closed;
  result = 0;
  if ( v45 == (char *)v2 )
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

// Line 71: range 0000000017FD939E-0000000017FD9BF5
int32_t __cdecl SummerTimeActivity::toScheduleBin(
        const SummerTimeActivity *const this,
        proto::ActivityScheduleBin *bin)
{
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,StageData> >::_Self *v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  unsigned int *v5; // rax
  google::protobuf::uint32 *v6; // rdx
  unsigned int *v7; // rax
  google::protobuf::uint32 *v8; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,const data::ActivitySummerTimeRaceExcelConfig*> >::type *v9; // rax
  int32_t result; // eax
  std::map<unsigned int,const data::ActivitySummerTimeRaceExcelConfig*>::const_iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  std::map<unsigned int,const data::ActivitySummerTimeRaceExcelConfig*>::const_iterator __for_end_0; // [rsp+20h] [rbp-F0h] BYREF
  std::map<unsigned int,StageData>::const_iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  proto::SummerTimeScheduleBin *schedule_bin; // [rsp+30h] [rbp-E0h]
  google::protobuf::Map<unsigned int,proto::SummerTimeStageBin> *bin_map; // [rsp+38h] [rbp-D8h]
  const std::map<unsigned int,StageData> *__for_range; // [rsp+40h] [rbp-D0h]
  const std::set<unsigned int> *__for_range_0; // [rsp+48h] [rbp-C8h]
  const std::set<unsigned int> *__for_range_1; // [rsp+50h] [rbp-C0h]
  const ActivitySummerTimeExcelConfigMgr *config_mgr; // [rsp+58h] [rbp-B8h]
  const std::map<unsigned int,const data::ActivitySummerTimeRaceExcelConfig*> *__for_range_2; // [rsp+60h] [rbp-B0h]
  const std::pair<unsigned int const,const data::ActivitySummerTimeRaceExcelConfig*> *v21; // [rsp+68h] [rbp-A8h]
  std::tuple_element<0,const std::pair<unsigned int const,const data::ActivitySummerTimeRaceExcelConfig*> >::type *config_id; // [rsp+70h] [rbp-A0h]
  std::tuple_element<1,const std::pair<unsigned int const,const data::ActivitySummerTimeRaceExcelConfig*> >::type *config_ptr; // [rsp+78h] [rbp-98h]
  proto::SummerTimeSprintBoatBin *sprint_boat_bin; // [rsp+80h] [rbp-90h]
  const SummerTimeActivity::SprintBoatData *data; // [rsp+88h] [rbp-88h]
  const std::pair<unsigned int const,StageData> *v26; // [rsp+90h] [rbp-80h]
  std::tuple_element<0,const std::pair<unsigned int const,StageData> >::type *stage_id; // [rsp+98h] [rbp-78h]
  std::tuple_element<1,const std::pair<unsigned int const,StageData> >::type *stage; // [rsp+A0h] [rbp-70h]
  proto::SummerTimeStageBin *stage_bin; // [rsp+A8h] [rbp-68h]
  char v30[96]; // [rsp+B0h] [rbp-60h] BYREF

  v2 = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,StageData> >::_Self *)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,StageData> >::_Self *)v3;
  }
  v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,StageData> >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,StageData> >::_Base_ptr)"1 32 8 8 iter:103";
  v2[2]._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,StageData> >::_Base_ptr)SummerTimeActivity::toScheduleBin;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  schedule_bin = proto::ActivityScheduleBin::mutable_summer_time_bin(bin);
  bin_map = proto::SummerTimeScheduleBin::mutable_stage_bin_map(schedule_bin);
  __for_range = &this->stage_map_;
  v2[4]._M_node = std::map<unsigned int,StageData>::begin(&this->stage_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,StageData>::end(__for_range)._M_node;
  while ( std::operator!=(v2 + 4, &__for_end) )
  {
    v26 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,StageData>>::operator*(v2 + 4);
    stage_id = std::get<0ul,unsigned int const,StageData>(v26);
    stage = (std::tuple_element<1,const std::pair<unsigned int const,StageData> >::type *)std::get<1ul,unsigned int const,StageData>(v26);
    stage_bin = google::protobuf::Map<unsigned int,proto::SummerTimeStageBin>::operator[](bin_map, stage_id);
    if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(stage_id);
    }
    proto::SummerTimeStageBin::set_stage_id(stage_bin, *stage_id);
    if ( *(_BYTE *)(((unsigned __int64)&stage->is_open >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)stage + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&stage->is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&stage->is_open);
    }
    proto::SummerTimeStageBin::set_is_open(stage_bin, stage->is_open);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,StageData>>::operator++(v2 + 4);
  }
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  proto::SummerTimeScheduleBin::set_is_content_closed(schedule_bin, this->is_content_closed_);
  __for_range_0 = &this->unlcoked_mist_zone_set_;
  v2[4]._M_node = std::set<unsigned int>::begin(&this->unlcoked_mist_zone_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&v2[4],
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v5 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&v2[4]);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    proto::SummerTimeScheduleBin::add_unlcoked_mist_zone_list(schedule_bin, *v6);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&v2[4]);
  }
  __for_range_1 = &this->disabled_float_signal_set_;
  v2[4]._M_node = std::set<unsigned int>::begin(&this->disabled_float_signal_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(__for_range_1)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&v2[4],
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v7 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&v2[4]);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    proto::SummerTimeScheduleBin::add_disable_float_signal_list(schedule_bin, *v8);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&v2[4]);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->last_float_signal_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_float_signal_id_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_float_signal_id_);
  }
  proto::SummerTimeScheduleBin::set_last_float_signal_id(schedule_bin, this->last_float_signal_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->next_float_signal_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->next_float_signal_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->next_float_signal_id_);
  }
  proto::SummerTimeScheduleBin::set_next_float_signal_id(schedule_bin, this->next_float_signal_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->draft_wood_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->draft_wood_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->draft_wood_);
  }
  proto::SummerTimeScheduleBin::set_draft_wood(schedule_bin, this->draft_wood_);
  if ( *(_BYTE *)(((unsigned __int64)&this->mini_harpastum_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mini_harpastum_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mini_harpastum_);
  }
  proto::SummerTimeScheduleBin::set_mini_harpastum(schedule_bin, this->mini_harpastum_);
  config_mgr = SummerTimeActivity::getConfigMgr(this);
  __for_range_2 = &config_mgr->race_config_map;
  __for_begin._M_node = std::map<unsigned int,data::ActivitySummerTimeRaceExcelConfig const*>::begin(&config_mgr->race_config_map)._M_node;
  __for_end_0._M_node = std::map<unsigned int,data::ActivitySummerTimeRaceExcelConfig const*>::end(__for_range_2)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end_0) )
  {
    v21 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig const*>>::operator*(&__for_begin);
    config_id = std::get<0ul,unsigned int const,data::ActivitySummerTimeRaceExcelConfig const*>(v21);
    v9 = (std::tuple_element<1,const std::pair<unsigned int const,const data::ActivitySummerTimeRaceExcelConfig*> >::type *)std::get<1ul,unsigned int const,data::ActivitySummerTimeRaceExcelConfig const*>(v21);
    config_ptr = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v9);
    if ( *config_ptr )
    {
      sprint_boat_bin = proto::SummerTimeScheduleBin::add_sprint_boat_list(schedule_bin);
      v2[4]._M_node = std::map<unsigned int,SummerTimeActivity::SprintBoatData>::find(
                        &this->sprint_boat_data_map_,
                        config_id)._M_node;
      __for_end._M_node = std::map<unsigned int,SummerTimeActivity::SprintBoatData>::end(&this->sprint_boat_data_map_)._M_node;
      if ( !std::operator==(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummerTimeActivity::SprintBoatData> >::_Self *)&v2[4],
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummerTimeActivity::SprintBoatData> >::_Self *)&__for_end) )
      {
        data = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummerTimeActivity::SprintBoatData>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummerTimeActivity::SprintBoatData> > *const)&v2[4])->second;
        if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(data);
        }
        proto::SummerTimeSprintBoatBin::set_best_score(sprint_boat_bin, data->best_score);
        if ( *(_BYTE *)(((unsigned __int64)&data->is_touched >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&data->is_touched >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&data->is_touched);
        }
        proto::SummerTimeSprintBoatBin::set_is_touched(sprint_boat_bin, data->is_touched);
      }
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig const*>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->is_sea_mist_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_sea_mist_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_sea_mist_closed_);
  }
  proto::SummerTimeScheduleBin::set_is_sea_mist_closed(schedule_bin, this->is_sea_mist_closed_);
  result = 0;
  if ( v30 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,StageData> >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 117: range 0000000017FD9BF6-0000000017FDA77F
int32_t __cdecl SummerTimeActivity::toClient(SummerTimeActivity *const this, proto::ActivityInfo *activity_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r13
  int32_t result; // eax
  ActivitySummerTimeExcelConfigMgr *p_activity_summer_time_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  uint32_t open_day; // ecx
  uint32_t BeginTimeByOpenDay; // eax
  uint32_t content_duration; // ecx
  uint32_t v12; // eax
  std::tuple_element<1,const std::pair<unsigned int const,const data::ActivitySummerTimeRaceExcelConfig*> >::type *v13; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeActivity::SprintBoatData> >::pointer v14; // rax
  bool *p_is_touched; // rax
  std::tuple_element<1,const std::pair<unsigned int const,const data::ActivitySummerTimeRaceExcelConfig*> >::type v16; // rax
  char v17; // dl
  uint32_t v18; // ecx
  uint32_t v19; // eax
  unsigned int *v20; // rax
  unsigned int *v21; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,const data::ActivitySummerTimeRaceExcelConfig*> >::type v22; // rdx
  char v23; // cl
  unsigned int val; // [rsp+18h] [rbp-148h] BYREF
  unsigned int watcher_id; // [rsp+1Ch] [rbp-144h]
  std::map<unsigned int,const data::ActivitySummerTimeRaceExcelConfig*>::const_iterator __for_begin_0; // [rsp+20h] [rbp-140h] BYREF
  std::map<unsigned int,const data::ActivitySummerTimeRaceExcelConfig*>::const_iterator __for_end_0; // [rsp+28h] [rbp-138h] BYREF
  std::map<unsigned int,StageData>::iterator __for_begin; // [rsp+30h] [rbp-130h] BYREF
  std::map<unsigned int,StageData>::iterator __for_end; // [rsp+38h] [rbp-128h] BYREF
  proto::SummerTimeDetailInfo *client_info; // [rsp+40h] [rbp-120h]
  google::protobuf::Map<unsigned int,proto::SummerTimeStageInfo> *stage_map; // [rsp+48h] [rbp-118h]
  std::map<unsigned int,StageData> *__for_range; // [rsp+50h] [rbp-110h]
  const ActivitySummerTimeExcelConfigMgr *config_mgr; // [rsp+58h] [rbp-108h]
  const data::ActivitySummerTimeExcelConfig *preview_config_ptr; // [rsp+60h] [rbp-100h]
  proto::SummerTimeSprintBoatInfo *sprint_boat_info; // [rsp+68h] [rbp-F8h]
  const std::map<unsigned int,const data::ActivitySummerTimeRaceExcelConfig*> *__for_range_0; // [rsp+70h] [rbp-F0h]
  const std::pair<unsigned int const,const data::ActivitySummerTimeRaceExcelConfig*> *v37; // [rsp+78h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,const data::ActivitySummerTimeRaceExcelConfig*> >::type *config_id; // [rsp+80h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,const data::ActivitySummerTimeRaceExcelConfig*> >::type *config_ptr; // [rsp+88h] [rbp-D8h]
  proto::SummerTimeSprintBoatRecord *sprint_boat_record; // [rsp+90h] [rbp-D0h]
  SummerTimeActivity::SprintBoatData *data; // [rsp+98h] [rbp-C8h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+A0h] [rbp-C0h]
  const std::pair<unsigned int const,StageData> *v43; // [rsp+A8h] [rbp-B8h]
  std::tuple_element<0,const std::pair<unsigned int const,StageData> >::type *stage_id; // [rsp+B0h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,StageData> >::type *stage; // [rsp+B8h] [rbp-A8h]
  proto::SummerTimeStageInfo *stage_bin; // [rsp+C0h] [rbp-A0h]
  const data::ActivitySummerTimeStageExcelConfig *stage_config_ptr; // [rsp+C8h] [rbp-98h]
  std::shared_ptr<Config> v48; // [rsp+D0h] [rbp-90h] BYREF
  common::milog::MiLogStream v49; // [rsp+E0h] [rbp-80h] BYREF
  char v50[96]; // [rsp+100h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 iter:159";
  *(_QWORD *)(v2 + 16) = SummerTimeActivity::toClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v49,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/summer_time_activity.cpp",
      "toClient",
      120);
    v5 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v49,
           (const char (*)[36])"BaseActivity::toClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v49);
    result = -1;
  }
  else
  {
    client_info = proto::ActivityInfo::mutable_summer_time_info(activity_info);
    stage_map = proto::SummerTimeDetailInfo::mutable_stage_map(client_info);
    __for_range = &this->stage_map_;
    __for_begin._M_node = std::map<unsigned int,StageData>::begin(&this->stage_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,StageData>::end(&this->stage_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v43 = std::_Rb_tree_iterator<std::pair<unsigned int const,StageData>>::operator*(&__for_begin);
      stage_id = std::get<0ul,unsigned int const,StageData>(v43);
      stage = (std::tuple_element<1,const std::pair<unsigned int const,StageData> >::type *)std::get<1ul,unsigned int const,StageData>(v43);
      stage_bin = google::protobuf::Map<unsigned int,proto::SummerTimeStageInfo>::operator[](stage_map, stage_id);
      if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(stage_id);
      }
      proto::SummerTimeStageInfo::set_stage_id(stage_bin, *stage_id);
      if ( *(_BYTE *)(((unsigned __int64)&stage->is_open >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)stage + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&stage->is_open >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&stage->is_open);
      }
      proto::SummerTimeStageInfo::set_is_open(stage_bin, stage->is_open);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v48);
      p_activity_summer_time_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v48)->design_config.txt_config_mgr.activity_summer_time_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(stage_id);
      }
      stage_config_ptr = ActivitySummerTimeExcelConfigMgr::findSummerTimeStageConfigByStageId(
                           p_activity_summer_time_config_mgr,
                           *stage_id);
      std::shared_ptr<Config>::~shared_ptr(&v48);
      if ( stage_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->open_day >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&stage_config_ptr->open_day >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&stage_config_ptr->open_day);
        }
        open_day = stage_config_ptr->open_day;
        if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->schedule_id_);
        }
        BeginTimeByOpenDay = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, open_day);
        proto::SummerTimeStageInfo::set_open_time(stage_bin, BeginTimeByOpenDay);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v49,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/summer_time_activity.cpp",
          "toClient",
          133);
        v8 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
               &v49,
               (const char (*)[50])"[SUMMER_TIME] stage_config_ptr is null, stage_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, stage_id);
        common::milog::MiLogStream::~MiLogStream(&v49);
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,StageData>>::operator++(&__for_begin);
    }
    config_mgr = SummerTimeActivity::getConfigMgr(this);
    preview_config_ptr = ActivitySummerTimeExcelConfigMgr::findSummerTimePreviewData(config_mgr);
    if ( preview_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&preview_config_ptr->content_duration >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&preview_config_ptr->content_duration >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&preview_config_ptr->content_duration);
      }
      content_duration = preview_config_ptr->content_duration;
      if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->schedule_id_);
      }
      v12 = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, content_duration);
      proto::SummerTimeDetailInfo::set_content_close_time(client_info, v12);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v49,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/summer_time_activity.cpp",
        "toClient",
        142);
      common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
        &v49,
        (const char (*)[44])"[SUMMER_TIME] preview_config_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v49);
    }
    if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_content_closed_);
    proto::SummerTimeDetailInfo::set_is_content_closed(client_info, this->is_content_closed_);
    sprint_boat_info = proto::SummerTimeDetailInfo::mutable_sprint_boat_info(client_info);
    __for_range_0 = &config_mgr->race_config_map;
    __for_begin_0._M_node = std::map<unsigned int,data::ActivitySummerTimeRaceExcelConfig const*>::begin(&config_mgr->race_config_map)._M_node;
    __for_end_0._M_node = std::map<unsigned int,data::ActivitySummerTimeRaceExcelConfig const*>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v37 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig const*>>::operator*(&__for_begin_0);
      config_id = std::get<0ul,unsigned int const,data::ActivitySummerTimeRaceExcelConfig const*>(v37);
      v13 = (std::tuple_element<1,const std::pair<unsigned int const,const data::ActivitySummerTimeRaceExcelConfig*> >::type *)std::get<1ul,unsigned int const,data::ActivitySummerTimeRaceExcelConfig const*>(v37);
      config_ptr = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v13);
      if ( *config_ptr )
      {
        sprint_boat_record = proto::SummerTimeSprintBoatInfo::add_record_list(sprint_boat_info);
        *(std::map<unsigned int,SummerTimeActivity::SprintBoatData>::iterator *)(v2 + 32) = std::map<unsigned int,SummerTimeActivity::SprintBoatData>::find(
                                                                                              &this->sprint_boat_data_map_,
                                                                                              config_id);
        __for_end._M_node = std::map<unsigned int,SummerTimeActivity::SprintBoatData>::end(&this->sprint_boat_data_map_)._M_node;
        if ( std::operator!=(
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeActivity::SprintBoatData> >::_Self *)(v2 + 32),
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeActivity::SprintBoatData> >::_Self *)&__for_end) )
        {
          v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeActivity::SprintBoatData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeActivity::SprintBoatData> > *const)(v2 + 32));
          data = &v14->second;
          p_is_touched = &v14->second.is_touched;
          if ( *(_BYTE *)(((unsigned __int64)p_is_touched >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)p_is_touched & 7) >= *(_BYTE *)(((unsigned __int64)p_is_touched >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(p_is_touched);
          }
          proto::SummerTimeSprintBoatRecord::set_is_touched(sprint_boat_record, data->is_touched);
          if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(data);
          }
          proto::SummerTimeSprintBoatRecord::set_best_score(sprint_boat_record, data->best_score);
        }
        if ( *(_BYTE *)(((unsigned __int64)config_ptr >> 3) + 0x7FFF8000) )
          __asan_report_load8(config_ptr);
        v16 = *config_ptr;
        v17 = *(_BYTE *)(((unsigned __int64)&(*config_ptr)->open_day >> 3) + 0x7FFF8000);
        if ( v17 != 0 && v17 <= 3 )
          v16 = (std::tuple_element<1,const std::pair<unsigned int const,const data::ActivitySummerTimeRaceExcelConfig*> >::type)__asan_report_load4(&(*config_ptr)->open_day);
        v18 = v16->open_day;
        if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->schedule_id_);
        }
        v19 = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, v18);
        proto::SummerTimeSprintBoatRecord::set_start_time(sprint_boat_record, v19);
        if ( *(_BYTE *)(((unsigned __int64)config_ptr >> 3) + 0x7FFF8000) )
          __asan_report_load8(config_ptr);
        __for_range_1 = &(*config_ptr)->medal_watcher;
        __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,StageData> >::_Base_ptr)std::vector<unsigned int>::begin(__for_range_1)._M_current;
        __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,StageData> >::_Base_ptr)std::vector<unsigned int>::end(__for_range_1)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_begin,
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end) )
        {
          v20 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
          v21 = v20;
          if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v20);
          }
          watcher_id = *v21;
          proto::SummerTimeSprintBoatRecord::add_watcher_id_list(sprint_boat_record, watcher_id);
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
        }
        if ( *(_BYTE *)(((unsigned __int64)config_ptr >> 3) + 0x7FFF8000) )
          __asan_report_load8(config_ptr);
        v22 = *config_ptr;
        v23 = *(_BYTE *)(((unsigned __int64)&(*config_ptr)->group_id >> 3) + 0x7FFF8000);
        if ( v23 != 0 && (char)(((*(_BYTE *)config_ptr + 52) & 7) + 3) >= v23 )
          __asan_report_load4(&(*config_ptr)->group_id);
        proto::SummerTimeSprintBoatRecord::set_group_id(sprint_boat_record, v22->group_id);
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig const*>>::operator++(&__for_begin_0);
    }
    result = 0;
  }
  if ( v50 == (char *)v2 )
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

// Line 177: range 0000000017FDA780-0000000017FDA860
void __cdecl SummerTimeActivity::onLogin(SummerTimeActivity *const this)
{
  char v1; // al

  if ( !BaseActivity::isOpening(this, 0) )
    goto LABEL_6;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ || BaseActivity::isSettled(this) )
LABEL_6:
    v1 = 1;
  else
    v1 = 0;
  if ( !v1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    if ( !Player::isRelogin(this->player_) )
    {
      SummerTimeActivity::addSummerTimeWatchers(this);
      SummerTimeActivity::initEventObserver(this);
    }
  }
};

// Line 190: range 0000000017FDA862-0000000017FDA888
void __cdecl SummerTimeActivity::onStart(SummerTimeActivity *const this)
{
  SummerTimeActivity::initEventObserver(this);
  SummerTimeActivity::addSummerTimeWatchers(this);
};

// Line 196: range 0000000017FDA88A-0000000017FDAC7E
void __cdecl SummerTimeActivity::onPreStart(SummerTimeActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySummerTimeStageExcelConfig*> >::type *v4; // rax
  common::milog::MiLogStream *v5; // rax
  std::map<unsigned int,StageData>::mapped_type *v6; // rax
  _QWORD *v7; // rdx
  std::map<unsigned int,data::ActivitySummerTimeStageExcelConfig*>::const_iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::map<unsigned int,data::ActivitySummerTimeStageExcelConfig*>::const_iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  const ActivitySummerTimeExcelConfigMgr *config_mgr; // [rsp+28h] [rbp-B8h]
  const std::map<unsigned int,data::ActivitySummerTimeStageExcelConfig*> *__for_range; // [rsp+30h] [rbp-B0h]
  const std::pair<unsigned int const,data::ActivitySummerTimeStageExcelConfig*> *v12; // [rsp+38h] [rbp-A8h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ActivitySummerTimeStageExcelConfig*> >::type *stage_id; // [rsp+40h] [rbp-A0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySummerTimeStageExcelConfig*> >::type *stage_config_ptr; // [rsp+48h] [rbp-98h]
  std::shared_ptr<Config> v15; // [rsp+50h] [rbp-90h] BYREF
  common::milog::MiLogStream v16; // [rsp+60h] [rbp-80h] BYREF
  char v17[96]; // [rsp+80h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 14 stage_data:210";
  *(_QWORD *)(v1 + 16) = SummerTimeActivity::onPreStart;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  if ( !std::map<unsigned int,StageData>::empty(&this->stage_map_) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/summer_time_activity.cpp",
      "onPreStart",
      199);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      &v16,
      (const char (*)[38])"[SUMMER_TIME] stage_map_ is not empty");
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v15);
    config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr.activity_summer_time_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v15);
    __for_range = &config_mgr->summer_time_stage_map;
    __for_begin._M_node = std::map<unsigned int,data::ActivitySummerTimeStageExcelConfig *>::begin(&config_mgr->summer_time_stage_map)._M_node;
    __for_end._M_node = std::map<unsigned int,data::ActivitySummerTimeStageExcelConfig *>::end(&config_mgr->summer_time_stage_map)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v12 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivitySummerTimeStageExcelConfig *>>::operator*(&__for_begin);
      stage_id = std::get<0ul,unsigned int const,data::ActivitySummerTimeStageExcelConfig *>(v12);
      v4 = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySummerTimeStageExcelConfig*> >::type *)std::get<1ul,unsigned int const,data::ActivitySummerTimeStageExcelConfig *>(v12);
      stage_config_ptr = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v4);
      if ( *stage_config_ptr )
      {
        *(_DWORD *)(v1 + 32) = 0;
        *(_BYTE *)(v1 + 36) = 0;
        if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(stage_id);
        }
        *(_DWORD *)(v1 + 32) = *stage_id;
        *(_BYTE *)(v1 + 36) = 0;
        v6 = std::map<unsigned int,StageData>::operator[](&this->stage_map_, stage_id);
        v7 = v6;
        if ( ((unsigned __int8)v6 & 7) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((unsigned __int64)(&v6->is_open + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v6 + 7) & 7) >= *(_BYTE *)(((unsigned __int64)(&v6->is_open + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v6, 8LL);
        }
        *v7 = *(_QWORD *)(v1 + 32);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/summer_time_activity.cpp",
          "onPreStart",
          207);
        v5 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
               &v16,
               (const char (*)[53])"[SUMMER_TIME] stage_config_ptr is nullptr, stage_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, stage_id);
        common::milog::MiLogStream::~MiLogStream(&v16);
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivitySummerTimeStageExcelConfig *>>::operator++(&__for_begin);
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
};

// Line 218: range 0000000017FDAC80-0000000017FDAD1B
bool __cdecl SummerTimeActivity::isContainsWatcher(SummerTimeActivity *const this, uint32_t watcher_id)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  bool isContainsWatcher; // bl
  std::shared_ptr<Config> v5[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5);
  isContainsWatcher = ActivitySummerTimeExcelConfigMgr::isContainsWatcher(
                        &v2->design_config.txt_config_mgr.activity_summer_time_config_mgr,
                        watcher_id);
  std::shared_ptr<Config>::~shared_ptr(v5);
  return isContainsWatcher || BaseActivity::isContainsWatcher(this, watcher_id);
};

// Line 227: range 0000000017FDAD1C-0000000017FDB348
int32_t __cdecl SummerTimeActivity::fillWatcherProtoList(
        SummerTimeActivity *const this,
        google::protobuf::RepeatedPtrField<proto::ActivityWatcherInfo> *proto_info_list)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  ActivitySummerTimeExcelConfigMgr *p_activity_summer_time_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v9; // rax
  _DWORD *v10; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  proto::ActivityWatcherInfo *v15; // rax
  unsigned int val; // [rsp+14h] [rbp-FCh] BYREF
  std::map<unsigned int,StageData>::iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  std::map<unsigned int,StageData>::iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-E8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+30h] [rbp-E0h] BYREF
  std::map<unsigned int,StageData> *__for_range; // [rsp+38h] [rbp-D8h]
  const std::pair<unsigned int const,StageData> *v22; // [rsp+40h] [rbp-D0h]
  std::tuple_element<0,const std::pair<unsigned int const,StageData> >::type *stage_id; // [rsp+48h] [rbp-C8h]
  std::tuple_element<1,const std::pair<unsigned int const,StageData> >::type *stage; // [rsp+50h] [rbp-C0h]
  const data::ActivitySummerTimeStageExcelConfig *config_ptr; // [rsp+58h] [rbp-B8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+60h] [rbp-B0h]
  const data::NewActivityWatcherConfig *watcher_config_ptr; // [rsp+68h] [rbp-A8h]
  std::shared_ptr<Config> v28; // [rsp+70h] [rbp-A0h] BYREF
  common::milog::MiLogStream v29; // [rsp+80h] [rbp-90h] BYREF
  char v30[112]; // [rsp+A0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 watcher_id:241";
  *(_QWORD *)(v2 + 16) = SummerTimeActivity::fillWatcherProtoList;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  __for_range = &this->stage_map_;
  __for_begin._M_node = std::map<unsigned int,StageData>::begin(&this->stage_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,StageData>::end(&this->stage_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v22 = std::_Rb_tree_iterator<std::pair<unsigned int const,StageData>>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,StageData>(v22);
    stage = (std::tuple_element<1,const std::pair<unsigned int const,StageData> >::type *)std::get<1ul,unsigned int const,StageData>(v22);
    if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(stage_id);
    }
    if ( !SummerTimeActivity::isStageOpen(this, *stage_id) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/summer_time_activity.cpp",
        "fillWatcherProtoList",
        232);
      v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v29,
             (const char (*)[42])"[SUMMER_TIME] stage not opened, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, stage_id);
      common::milog::MiLogStream::~MiLogStream(&v29);
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v28);
      p_activity_summer_time_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28)->design_config.txt_config_mgr.activity_summer_time_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(stage_id);
      }
      config_ptr = ActivitySummerTimeExcelConfigMgr::findSummerTimeStageConfigByStageId(
                     p_activity_summer_time_config_mgr,
                     *stage_id);
      std::shared_ptr<Config>::~shared_ptr(&v28);
      if ( !config_ptr )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/summer_time_activity.cpp",
          "fillWatcherProtoList",
          238);
        v7 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
               &v29,
               (const char (*)[44])"[SUMMER_TIME] config_ptr is null, stage_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, stage_id);
        common::milog::MiLogStream::~MiLogStream(&v29);
        result = -1;
        goto LABEL_26;
      }
      __for_range_0 = &config_ptr->watcher_id_list;
      __for_begin_0._M_current = std::vector<unsigned int>::begin(&config_ptr->watcher_id_list)._M_current;
      __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
      {
        v9 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
        v10 = v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v9);
        }
        *(_DWORD *)(v2 + 32) = *v10;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v28);
        v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
        watcher_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityWatcherConfig(
                               &v11->design_config.txt_config_mgr.new_activity_config_mgr,
                               *(_DWORD *)(v2 + 32));
        std::shared_ptr<Config>::~shared_ptr(&v28);
        if ( watcher_config_ptr )
        {
          v15 = google::protobuf::RepeatedPtrField<proto::ActivityWatcherInfo>::Add(proto_info_list);
          BaseActivity::fillWatcherProto(this, v15, watcher_config_ptr);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/summer_time_activity.cpp",
            "fillWatcherProtoList",
            246);
          v12 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  &v29,
                  (const char (*)[36])"[SUMMER_TIME] findWatcherConfig id:");
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v12,
                  (const unsigned int *)(v2 + 32));
          v14 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v13,
                  (const char (*)[14])" failed, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
          common::milog::MiLogStream::~MiLogStream(&v29);
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,StageData>>::operator++(&__for_begin);
  }
  result = 0;
LABEL_26:
  if ( v30 == (char *)v2 )
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

// Line 256: range 0000000017FDB34A-0000000017FDB494
void __cdecl SummerTimeActivity::fillActivityCoinInfo(
        SummerTimeActivity *const this,
        google::protobuf::Map<unsigned int,unsigned int> *activity_coin_map)
{
  uint32_t draft_wood; // ebx
  google::protobuf::Map<unsigned int,unsigned int>::key_type *v3; // rsi
  unsigned int *v4; // rax
  uint32_t *v5; // rdx
  char v6; // cl
  uint32_t mini_harpastum; // ebx
  google::protobuf::Map<unsigned int,unsigned int>::key_type *v8; // rsi
  unsigned int *v9; // rax
  uint32_t *v10; // rdx
  char v11; // cl
  google::protobuf::Map<unsigned int,unsigned int>::key_type key[5]; // [rsp+1Ch] [rbp-14h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->draft_wood_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->draft_wood_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->draft_wood_);
  }
  draft_wood = this->draft_wood_;
  key[0] = 124;
  v3 = key;
  v4 = google::protobuf::Map<unsigned int,unsigned int>::operator[](activity_coin_map, key);
  v5 = v4;
  v6 = *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)(((unsigned __int8)v4 & 7) + 3) >= v6 )
  {
    LOBYTE(v3) = v6 != 0;
    __asan_report_store4(v4, v3, v4);
  }
  *v5 = draft_wood;
  if ( *(_BYTE *)(((unsigned __int64)&this->mini_harpastum_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mini_harpastum_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mini_harpastum_);
  }
  mini_harpastum = this->mini_harpastum_;
  key[0] = 125;
  v8 = key;
  v9 = google::protobuf::Map<unsigned int,unsigned int>::operator[](activity_coin_map, key);
  v10 = v9;
  v11 = *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000);
  if ( v11 != 0 && (char)(((unsigned __int8)v9 & 7) + 3) >= v11 )
  {
    LOBYTE(v8) = v11 != 0;
    __asan_report_store4(v9, v8, v9);
  }
  *v10 = mini_harpastum;
};

// Line 262: range 0000000017FDB496-0000000017FDB4BC
void __cdecl SummerTimeActivity::onSettle(SummerTimeActivity *const this)
{
  BaseActivity::delWatchers(this);
  SummerTimeActivity::delSummerTimeWatchers(this);
};

// Line 268: range 0000000017FDB4BE-0000000017FDB6E3
void __cdecl SummerTimeActivity::onClear(SummerTimeActivity *const this)
{
  PlayerEventComp *EventComp; // rax
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  std::map<std::type_index,std::weak_ptr<Observer>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<std::type_index,std::weak_ptr<Observer>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<std::type_index,std::weak_ptr<Observer>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<const std::type_index,std::weak_ptr<Observer> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<const std::type_index,std::weak_ptr<Observer> > >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<const std::type_index,std::weak_ptr<Observer> > >::type *obs_wtr; // [rsp+38h] [rbp-8h]

  BaseActivity::delWatchers(this);
  SummerTimeActivity::delSummerTimeWatchers(this);
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
        __asan_report_load8(&this->player_);
      EventComp = Player::getEventComp(this->player_);
      PlayerEventComp::unregisterObserver(EventComp, obs_wtr);
    }
    std::_Rb_tree_iterator<std::pair<std::type_index const,std::weak_ptr<Observer>>>::operator++(&__for_begin);
  }
  std::map<std::type_index,std::weak_ptr<Observer>>::clear(&this->event_observer_map_);
  std::map<unsigned int,StageData>::clear(&this->stage_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->next_float_signal_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->next_float_signal_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->next_float_signal_id_, &__for_end, &this->next_float_signal_id_);
  }
  this->next_float_signal_id_ = 0;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->last_float_signal_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_float_signal_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->last_float_signal_id_, (((_BYTE)this + 124) & 7u) + 3, v2);
  this->last_float_signal_id_ = 0;
  std::set<unsigned int>::clear(&this->disabled_float_signal_set_);
  std::set<unsigned int>::clear(&this->unlcoked_mist_zone_set_);
  v3 = ((_BYTE)this - 124) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_sea_mist_closed_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_sea_mist_closed_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_sea_mist_closed_, v3, v4);
  this->is_sea_mist_closed_ = 0;
};

// Line 288: range 0000000017FDB6E4-0000000017FDBBE9
void __cdecl SummerTimeActivity::initEventObserver(SummerTimeActivity *const this)
{
  unsigned __int64 v1; // r14
  __int64 v2; // rax
  _DWORD *v3; // r15
  PlayerEventComp *EventComp; // r12
  PlayerEventComp *v5; // rbx
  PlayerEventComp *v6; // rbx
  PlayerEventComp *v7; // rbx
  common::milog::MiLogStream *v8; // rax
  std::enable_shared_from_this<BaseActivity> v9; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v10; // [rsp+60h] [rbp-B0h] BYREF
  char v11[144]; // [rsp+80h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:289 64 16 12 this_wtr:290";
  *(_QWORD *)(v1 + 16) = SummerTimeActivity::initEventObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v9);
  std::dynamic_pointer_cast<SummerTimeActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v9);
  std::weak_ptr<SummerTimeActivity>::weak_ptr<SummerTimeActivity,void>(
    (std::weak_ptr<SummerTimeActivity> *const)(v1 + 64),
    (const std::shared_ptr<SummerTimeActivity> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  EventComp = Player::getEventComp(this->player_);
  std::weak_ptr<SummerTimeActivity>::weak_ptr(
    (std::weak_ptr<SummerTimeActivity> *const)&v9,
    (const std::weak_ptr<SummerTimeActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<SummerTimeActivity,ClimateMeterFullEvent>(
    EventComp,
    (std::weak_ptr<SummerTimeActivity> *)&v9,
    (void (*)(SummerTimeActivity *, const ClimateMeterFullEvent *))SummerTimeActivity::onClimateMeterFullEvent,
    0LL);
  std::weak_ptr<SummerTimeActivity>::~weak_ptr((std::weak_ptr<SummerTimeActivity> *const)&v9);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v5 = Player::getEventComp(this->player_);
  std::weak_ptr<SummerTimeActivity>::weak_ptr(
    (std::weak_ptr<SummerTimeActivity> *const)&v9,
    (const std::weak_ptr<SummerTimeActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<SummerTimeActivity,PostEnterSceneEvent>(
    v5,
    (std::weak_ptr<SummerTimeActivity> *)&v9,
    (void (*)(SummerTimeActivity *, const PostEnterSceneEvent *))SummerTimeActivity::onPostEnterSceneEvent,
    0LL);
  std::weak_ptr<SummerTimeActivity>::~weak_ptr((std::weak_ptr<SummerTimeActivity> *const)&v9);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v6 = Player::getEventComp(this->player_);
  std::weak_ptr<SummerTimeActivity>::weak_ptr(
    (std::weak_ptr<SummerTimeActivity> *const)&v9,
    (const std::weak_ptr<SummerTimeActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<SummerTimeActivity,LuaMarkedChallengeEvent>(
    v6,
    (std::weak_ptr<SummerTimeActivity> *)&v9,
    (void (*)(SummerTimeActivity *, const LuaMarkedChallengeEvent *))SummerTimeActivity::onMarkedChallengeEvent,
    0LL);
  std::weak_ptr<SummerTimeActivity>::~weak_ptr((std::weak_ptr<SummerTimeActivity> *const)&v9);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v7 = Player::getEventComp(this->player_);
  std::weak_ptr<SummerTimeActivity>::weak_ptr(
    (std::weak_ptr<SummerTimeActivity> *const)&v9,
    (const std::weak_ptr<SummerTimeActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<SummerTimeActivity,ChallengeBeginEvent>(
    v7,
    (std::weak_ptr<SummerTimeActivity> *)&v9,
    (void (*)(SummerTimeActivity *, const ChallengeBeginEvent *))SummerTimeActivity::onChallengeBeginEvent,
    0LL);
  std::weak_ptr<SummerTimeActivity>::~weak_ptr((std::weak_ptr<SummerTimeActivity> *const)&v9);
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/summer_time_activity.cpp",
    "initEventObserver",
    295);
  v8 = common::milog::MiLogStream::operator<<<SummerTimeActivity,(SummerTimeActivity*)0>(&v10, this);
  common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v8, (const char (*)[17])" event reg done.");
  common::milog::MiLogStream::~MiLogStream(&v10);
  std::weak_ptr<SummerTimeActivity>::~weak_ptr((std::weak_ptr<SummerTimeActivity> *const)(v1 + 64));
  std::shared_ptr<SummerTimeActivity>::~shared_ptr((std::shared_ptr<SummerTimeActivity> *const)(v1 + 32));
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

// Line 299: range 0000000017FDBBEA-0000000017FDBDAF
int32_t __cdecl SummerTimeActivity::addSummerTimeWatchers(SummerTimeActivity *const this)
{
  common::milog::MiLogStream *v1; // rax
  std::map<unsigned int,StageData>::iterator __for_begin; // [rsp+10h] [rbp-60h] BYREF
  std::map<unsigned int,StageData>::iterator __for_end; // [rsp+18h] [rbp-58h] BYREF
  std::map<unsigned int,StageData> *__for_range; // [rsp+20h] [rbp-50h]
  const std::pair<unsigned int const,StageData> *v6; // [rsp+28h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,StageData> >::type *stage_id; // [rsp+30h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,StageData> >::type *stage; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v9; // [rsp+40h] [rbp-30h] BYREF

  __for_range = &this->stage_map_;
  __for_begin._M_node = std::map<unsigned int,StageData>::begin(&this->stage_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,StageData>::end(&this->stage_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,StageData>>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,StageData>(v6);
    stage = (std::tuple_element<1,const std::pair<unsigned int const,StageData> >::type *)std::get<1ul,unsigned int const,StageData>(v6);
    if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(stage_id);
    }
    if ( SummerTimeActivity::isStageOpen(this, *stage_id) )
    {
      if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(stage_id);
      }
      if ( SummerTimeActivity::addStageWatcher(this, *stage_id) )
      {
        common::milog::MiLogStream::create(
          &v9,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/summer_time_activity.cpp",
          "addSummerTimeWatchers",
          306);
        v1 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
               &v9,
               (const char (*)[48])"[SUMMER_TIME] addStageWatcher failed, stage_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, stage_id);
        common::milog::MiLogStream::~MiLogStream(&v9);
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,StageData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 316: range 0000000017FDBDB0-0000000017FDC294
int32_t __cdecl SummerTimeActivity::delSummerTimeWatchers(SummerTimeActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  ActivitySummerTimeExcelConfigMgr *p_activity_summer_time_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v6; // rax
  _DWORD *v7; // rdx
  uint32_t WatcherComp; // eax
  bool v9; // r14
  PlayerWatcherComp *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int32_t result; // eax
  std::map<unsigned int,StageData>::iterator __for_begin; // [rsp+10h] [rbp-F0h] BYREF
  std::map<unsigned int,StageData>::iterator __for_end; // [rsp+18h] [rbp-E8h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+20h] [rbp-E0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+28h] [rbp-D8h] BYREF
  std::map<unsigned int,StageData> *__for_range; // [rsp+30h] [rbp-D0h]
  const std::pair<unsigned int const,StageData> *v18; // [rsp+38h] [rbp-C8h]
  std::tuple_element<0,const std::pair<unsigned int const,StageData> >::type *stage_id; // [rsp+40h] [rbp-C0h]
  std::tuple_element<1,const std::pair<unsigned int const,StageData> >::type *stage; // [rsp+48h] [rbp-B8h]
  const data::ActivitySummerTimeStageExcelConfig *config_ptr; // [rsp+50h] [rbp-B0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+58h] [rbp-A8h]
  std::shared_ptr<Config> v23; // [rsp+60h] [rbp-A0h] BYREF
  common::milog::MiLogStream v24; // [rsp+70h] [rbp-90h] BYREF
  char v25[112]; // [rsp+90h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 14 watcher_id:325";
  *(_QWORD *)(v1 + 16) = SummerTimeActivity::delSummerTimeWatchers;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  __for_range = &this->stage_map_;
  __for_begin._M_node = std::map<unsigned int,StageData>::begin(&this->stage_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,StageData>::end(&this->stage_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v18 = std::_Rb_tree_iterator<std::pair<unsigned int const,StageData>>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,StageData>(v18);
    stage = (std::tuple_element<1,const std::pair<unsigned int const,StageData> >::type *)std::get<1ul,unsigned int const,StageData>(v18);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v23);
    p_activity_summer_time_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.txt_config_mgr.activity_summer_time_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(stage_id);
    }
    config_ptr = ActivitySummerTimeExcelConfigMgr::findSummerTimeStageConfigByStageId(
                   p_activity_summer_time_config_mgr,
                   *stage_id);
    std::shared_ptr<Config>::~shared_ptr(&v23);
    if ( config_ptr )
    {
      __for_range_0 = &config_ptr->watcher_id_list;
      __for_begin_0._M_current = std::vector<unsigned int>::begin(&config_ptr->watcher_id_list)._M_current;
      __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
      {
        v6 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
        v7 = v6;
        if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v6);
        }
        *(_DWORD *)(v1 + 32) = *v7;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        WatcherComp = (unsigned int)Player::getWatcherComp(this->player_);
        PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)&v23, WatcherComp);
        v9 = std::operator!=<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)&v23);
        std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v23);
        if ( v9 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v10 = Player::getWatcherComp(this->player_);
          PlayerWatcherComp::delWatcher(v10, *(_DWORD *)(v1 + 32));
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/summer_time_activity.cpp",
            "delSummerTimeWatchers",
            330);
          v11 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v24,
                  (const char (*)[39])"[SUMMER_TIME] del watcher, watcher_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v1 + 32));
          common::milog::MiLogStream::~MiLogStream(&v24);
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/summer_time_activity.cpp",
        "delSummerTimeWatchers",
        322);
      v5 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
             &v24,
             (const char (*)[44])"[SUMMER_TIME] config_ptr is null, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, stage_id);
      common::milog::MiLogStream::~MiLogStream(&v24);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,StageData>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v25 == (char *)v1 )
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

// Line 338: range 0000000017FDC296-0000000017FDC659
int32_t __cdecl SummerTimeActivity::execAction(
        SummerTimeActivity *const this,
        const data::NewActivityExec *action_exec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  data::NewActivityActionType type; // eax
  common::milog::MiLogStream *v6; // r13
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  const std::string *v9; // rax
  common::milog::MiLogStream *v10; // r13
  const std::string *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  unsigned __int64 val; // [rsp+18h] [rbp-88h] BYREF
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
  *(_QWORD *)(v2 + 8) = "1 32 4 12 stage_id:348";
  *(_QWORD *)(v2 + 16) = SummerTimeActivity::execAction;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&action_exec->type);
  }
  type = action_exec->type;
  if ( type == NEW_ACTIVITY_ACTION_CLOSE_SEA_MIST )
  {
    SummerTimeActivity::closeSeaMist(this);
  }
  else
  {
    if ( type > NEW_ACTIVITY_ACTION_CLOSE_SEA_MIST )
    {
LABEL_19:
      result = BaseActivity::execAction(this, action_exec);
      goto LABEL_21;
    }
    if ( type == NEW_ACTIVITY_ACTION_OPEN_SUMMER_TIME_STAGE )
    {
      if ( !std::vector<std::string>::size(&action_exec->param) )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/summer_time_activity.cpp",
          "execAction",
          345);
        v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
               &v15,
               (const char (*)[33])"[SUMMER_TIME] action param size ");
        val = std::vector<std::string>::size(&action_exec->param);
        v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, &val);
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])off_2648B580);
        common::milog::MiLogStream::~MiLogStream(&v15);
        result = -1;
        goto LABEL_21;
      }
      *(_DWORD *)(v2 + 32) = 0;
      v9 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v9, (unsigned int *)(v2 + 32), 1) )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/summer_time_activity.cpp",
          "execAction",
          351);
        v10 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                &v15,
                (const char (*)[24])"[SUMMER_TIME] strToNum ");
        v11 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, v11);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v12, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream(&v15);
        result = -1;
        goto LABEL_21;
      }
      if ( SummerTimeActivity::openStage(this, *(_DWORD *)(v2 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/summer_time_activity.cpp",
          "execAction",
          356);
        v13 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v15,
                (const char (*)[42])"[SUMMER_TIME] openStage failed, stage_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v15);
        result = -1;
        goto LABEL_21;
      }
    }
    else
    {
      if ( type != NEW_ACTIVITY_ACTION_CLOSE_SUMMER_TIME_CONTENT )
        goto LABEL_19;
      SummerTimeActivity::closeContent(this);
    }
  }
  result = 0;
LABEL_21:
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

// Line 378: range 0000000017FDC65A-0000000017FDC8BD
__int64 __fastcall SummerTimeActivity::openStage(SummerTimeActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,StageData> >::pointer v7; // rax
  bool *p_is_open; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,StageData> >::_Self __y; // [rsp+10h] [rbp-B0h] BYREF
  StageData *stage_data; // [rsp+18h] [rbp-A8h]
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
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:377 64 8 8 iter:379";
  *(_QWORD *)(v2 + 16) = SummerTimeActivity::openStage;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,StageData>::iterator *)(v2 + 64) = std::map<unsigned int,StageData>::find(
                                                               &this->stage_map_,
                                                               (const std::map<unsigned int,StageData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,StageData>::end(&this->stage_map_)._M_node;
  if ( std::operator==((const std::_Rb_tree_iterator<std::pair<unsigned int const,StageData> >::_Self *)(v2 + 64), &__y) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/summer_time_activity.cpp",
      "openStage",
      382);
    v5 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v13,
           (const char (*)[44])"[SUMMER_TIME] stage id not found, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,StageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,StageData> > *const)(v2 + 64));
    stage_data = &v7->second;
    p_is_open = &v7->second.is_open;
    v9 = (unsigned __int8)p_is_open & 7;
    v10 = (*(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000));
    if ( (_BYTE)v10 )
      __asan_report_store1(p_is_open, v9, v10);
    stage_data->is_open = 1;
    SummerTimeActivity::addStageWatcher(this, *(_DWORD *)(v2 + 48));
    BaseActivity::notifyClientData(this, 0);
    result = 0LL;
  }
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

// Line 393: range 0000000017FDC8BE-0000000017FDD25D
__int64 __fastcall SummerTimeActivity::addStageWatcher(SummerTimeActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v8; // rax
  _DWORD *v9; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rbx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  uint32_t WatcherComp; // eax
  bool v20; // r14
  PlayerWatcherComp *v21; // rax
  bool v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  unsigned int val; // [rsp+14h] [rbp-ECh] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  const data::ActivitySummerTimeStageExcelConfig *config_ptr; // [rsp+28h] [rbp-D8h]
  const std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-D0h]
  const data::WatcherConfig *watcher_config_ptr; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Config> v33; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v34; // [rsp+50h] [rbp-B0h] BYREF
  char v35[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 watcher_id:406 64 4 12 stage_id:392";
  *(_QWORD *)(v2 + 16) = SummerTimeActivity::addStageWatcher;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = stage_id;
  if ( !SummerTimeActivity::isStageOpen(this, *(_DWORD *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/summer_time_activity.cpp",
      "addStageWatcher",
      396);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v34,
      (const char (*)[29])"[SUMMER_TIME] stage not open");
    common::milog::MiLogStream::~MiLogStream(&v34);
    result = 0xFFFFFFFFLL;
    goto LABEL_36;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v33);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33);
  config_ptr = ActivitySummerTimeExcelConfigMgr::findSummerTimeStageConfigByStageId(
                 &v6->design_config.txt_config_mgr.activity_summer_time_config_mgr,
                 *(_DWORD *)(v2 + 64));
  std::shared_ptr<Config>::~shared_ptr(&v33);
  if ( !config_ptr )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/summer_time_activity.cpp",
      "addStageWatcher",
      403);
    v7 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v34,
           (const char (*)[44])"[SUMMER_TIME] config_ptr is null, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v34);
    result = 0xFFFFFFFFLL;
    goto LABEL_36;
  }
  __for_range = &config_ptr->watcher_id_list;
  __for_begin._M_current = std::vector<unsigned int>::begin(&config_ptr->watcher_id_list)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&config_ptr->watcher_id_list)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v8 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    *(_DWORD *)(v2 + 48) = *v9;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v33);
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33);
    watcher_config_ptr = WatcherExcelConfigMgr::findWatcherConfig(
                           &v10->design_config.txt_config_mgr.watcher_config_mgr,
                           *(_DWORD *)(v2 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v33);
    if ( !watcher_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/summer_time_activity.cpp",
        "addStageWatcher",
        411);
      v11 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v34,
              (const char (*)[36])"[SUMMER_TIME] findWatcherConfig id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
      v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v12, (const char (*)[14])" failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
LABEL_15:
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v34);
      result = 0xFFFFFFFFLL;
      goto LABEL_36;
    }
    if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
           &this->finished_watcher_id_set_,
           (const unsigned int *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/summer_time_activity.cpp",
        "addStageWatcher",
        417);
      v14 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v34,
              (const char (*)[26])"[SUMMER_TIME] watcher_id:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v15, (const char (*)[18])" already finished");
      common::milog::MiLogStream::~MiLogStream(&v34);
      goto LABEL_34;
    }
    if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
           &this->taken_watcher_id_set_,
           (const unsigned int *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/summer_time_activity.cpp",
        "addStageWatcher",
        423);
      v16 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v34,
              (const char (*)[26])"[SUMMER_TIME] watcher_id:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 48));
      v18 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v17,
              (const char (*)[20])" taken reward, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
LABEL_33:
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
      common::milog::MiLogStream::~MiLogStream(&v34);
      goto LABEL_34;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    WatcherComp = (unsigned int)Player::getWatcherComp(this->player_);
    PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)&v33, WatcherComp);
    v20 = std::operator!=<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)&v33);
    std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v33);
    if ( !v20 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v21 = Player::getWatcherComp(this->player_);
      PlayerWatcherComp::addWatcher(
        (PlayerWatcherComp *const)&v33,
        (const WatcherConfig *)v21,
        (uint32_t)watcher_config_ptr);
      v22 = std::operator==<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)&v33);
      std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v33);
      if ( v22 )
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/summer_time_activity.cpp",
          "addStageWatcher",
          434);
        v23 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v34,
                (const char (*)[29])"[SUMMER_TIME] addWatcher id:");
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v23,
                (const unsigned int *)(v2 + 48));
        v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v24, (const char (*)[14])" failed, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        goto LABEL_15;
      }
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/summer_time_activity.cpp",
        "addStageWatcher",
        437);
      v25 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v34,
              (const char (*)[28])"[SUMMER_TIME] add watcher: ");
      v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v2 + 48));
      v18 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v26, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      goto LABEL_33;
    }
LABEL_34:
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = 0LL;
LABEL_36:
  if ( v35 == (char *)v2 )
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

// Line 443: range 0000000017FDD25E-0000000017FDD47B
_BOOL8 __fastcall SummerTimeActivity::isStageOpen(SummerTimeActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  _BOOL8 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,StageData> >::pointer v7; // rdx
  bool *p_is_open; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,StageData> >::_Self __y; // [rsp+18h] [rbp-A8h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-A0h] BYREF
  char v11[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:442 64 8 8 iter:444";
  *(_QWORD *)(v2 + 16) = SummerTimeActivity::isStageOpen;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,StageData>::iterator *)(v2 + 64) = std::map<unsigned int,StageData>::find(
                                                               &this->stage_map_,
                                                               (const std::map<unsigned int,StageData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,StageData>::end(&this->stage_map_)._M_node;
  if ( std::operator==((const std::_Rb_tree_iterator<std::pair<unsigned int const,StageData> >::_Self *)(v2 + 64), &__y) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/summer_time_activity.cpp",
      "isStageOpen",
      447);
    v5 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v10,
           (const char (*)[44])"[SUMMER_TIME] stage id not found, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 0LL;
  }
  else
  {
    v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,StageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,StageData> > *const)(v2 + 64));
    p_is_open = &v7->second.is_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_open);
    }
    result = v7->second.is_open;
  }
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

// Line 454: range 0000000017FDD47C-0000000017FDE656
void __cdecl SummerTimeActivity::onClimateMeterFullEvent(
        SummerTimeActivity *const this,
        const ClimateMeterFullEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  char v7; // al
  uint32_t Uid; // r14d
  std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  _BOOL4 v10; // r14d
  Player *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  int v14; // r14d
  std::__shared_ptr_access<SummerTimeActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v19; // rax
  LuaConfigMgr *v20; // rcx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  Vector3 *p_rot; // r15
  Vector3 *p_pos; // r14
  Scene *v25; // rsi
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  uint32_t v29; // r14d
  PlayerPtr *p_vehicle_gadget_id; // rdi
  Vector3 *v31; // rcx
  PlayerSceneComp *SceneComp; // [rsp+8h] [rbp-198h]
  unsigned int val; // [rsp+20h] [rbp-180h] BYREF
  uint32_t now; // [rsp+24h] [rbp-17Ch]
  const data::ActivitySummerTimeFloatSignalExcelConfig *config_ptr; // [rsp+28h] [rbp-178h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+30h] [rbp-170h]
  const GroupInfoScriptConfig *group_info_script; // [rsp+38h] [rbp-168h]
  const GadgetScriptConfig *gadget_script_config_ptr; // [rsp+40h] [rbp-160h]
  const PointScriptConfig *gadget_vehicle_script_config_ptr; // [rsp+48h] [rbp-158h]
  common::milog::MiLogStream v40; // [rsp+50h] [rbp-150h] BYREF
  TransferReason p_reason; // [rsp+70h] [rbp-130h] BYREF
  char v42[240]; // [rsp+B0h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 24 last_float_signal_id:483 64 16 17 cur_scene_ptr:466 96 16 19 world_scene_ptr:472 128 1"
                        "6 20 owner_player_ptr:486 160 16 22 owner_activity_ptr:492";
  *(_QWORD *)(v2 + 16) = SummerTimeActivity::onClimateMeterFullEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  if ( !BaseActivity::isOpening(this, 0) )
    goto LABEL_9;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ || BaseActivity::isSettled(this) )
LABEL_9:
    v5 = 1;
  else
    v5 = 0;
  if ( !v5 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_sea_mist_closed_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_sea_mist_closed_ >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_sea_mist_closed_);
    }
    if ( this->is_sea_mist_closed_ )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/summer_time_activity.cpp",
        "onClimateMeterFullEvent",
        462);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        &v40,
        (const char (*)[33])"[SUMMER_TIME] sea mist is closed");
      common::milog::MiLogStream::~MiLogStream(&v40);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
      if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/summer_time_activity.cpp",
          "onClimateMeterFullEvent",
          469);
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          &v40,
          (const char (*)[39])"[SUMMER_TIME] cur_scene_ptr is nullptr");
        common::milog::MiLogStream::~MiLogStream(&v40);
      }
      else
      {
        std::dynamic_pointer_cast<PlayerWorldScene,Scene>((const std::shared_ptr<Scene> *)(v2 + 96));
        if ( std::operator==<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v2 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v40,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/summer_time_activity.cpp",
            "onClimateMeterFullEvent",
            475);
          common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            &v40,
            (const char (*)[43])"[SUMMER_TIME] cur scene is not world scene");
          common::milog::MiLogStream::~MiLogStream(&v40);
        }
        else
        {
          v6 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( Scene::getSceneId((const Scene *const)v6) != 4 )
            goto LABEL_26;
          if ( *(_BYTE *)(((unsigned __int64)&event->climate_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->climate_type >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(&event->climate_type);
          }
          if ( event->climate_type == SeaMist )
            v7 = 0;
          else
LABEL_26:
            v7 = 1;
          if ( v7 )
          {
            common::milog::MiLogStream::create(
              &v40,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/summer_time_activity.cpp",
              "onClimateMeterFullEvent",
              480);
            common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v40,
              (const char (*)[46])"[SUMMER_TIME] scene or climate type not match");
            common::milog::MiLogStream::~MiLogStream(&v40);
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->last_float_signal_id_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_float_signal_id_ >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(&this->last_float_signal_id_);
            }
            *(_DWORD *)(v2 + 48) = this->last_float_signal_id_;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            Uid = Player::getUid(this->player_);
            v9 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            if ( Uid == Scene::getOwnerUid((const Scene *const)v9) )
              goto LABEL_42;
            std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            Scene::getOwnPlayer((const Scene *const)(v2 + 128));
            if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 128)) )
            {
              common::milog::MiLogStream::create(
                &v40,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/summer_time_activity.cpp",
                "onClimateMeterFullEvent",
                489);
              common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v40,
                (const char (*)[42])"[SUMMER_TIME] owner_player_ptr is nullptr");
              common::milog::MiLogStream::~MiLogStream(&v40);
              v10 = 0;
            }
            else
            {
              v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              Player::getActivityComp(v11);
              PlayerActivityComp::findOpenningActivity<SummerTimeActivity>((PlayerActivityComp *const)(v2 + 160));
              if ( std::operator==<SummerTimeActivity>(0LL, (const std::shared_ptr<SummerTimeActivity> *)(v2 + 160)) )
              {
                common::milog::MiLogStream::create(
                  &v40,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/summer_time_activity.cpp",
                  "onClimateMeterFullEvent",
                  495);
                v12 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
                        &v40,
                        (const char (*)[72])"[SUMMER_TIME] owner_player has not openning activity, owner player uid:");
                v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                val = Player::getUid(v13);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
                common::milog::MiLogStream::~MiLogStream(&v40);
                v14 = 0;
              }
              else
              {
                v15 = std::__shared_ptr_access<SummerTimeActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SummerTimeActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                *(_DWORD *)(v2 + 48) = SummerTimeActivity::getLastFloatSignalId(v15);
                v14 = 1;
              }
              std::shared_ptr<SummerTimeActivity>::~shared_ptr((std::shared_ptr<SummerTimeActivity> *const)(v2 + 160));
              v10 = v14 == 1;
            }
            std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
            if ( v10 )
            {
LABEL_42:
              now = common::tools::TimeUtils::getNow();
              if ( !*(_DWORD *)(v2 + 48) )
                goto LABEL_80;
              if ( *(_BYTE *)(((unsigned __int64)&this->last_transfer_time_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->last_transfer_time_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->last_transfer_time_);
              }
              if ( now > this->last_transfer_time_ + 3 )
              {
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)(v2 + 160));
                v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                config_ptr = data::ActivitySummerTimeExcelConfigMgrBase::findActivitySummerTimeFloatSignalExcelConfig(
                               &v16->design_config.txt_config_mgr.activity_summer_time_config_mgr,
                               *(_DWORD *)(v2 + 48));
                std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 160));
                if ( config_ptr )
                {
                  ServiceBox::findService<GameserverService>();
                  GameserverService::getConfig((GameserverService *const)(v2 + 160));
                  p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160))->design_config.lua_config_mgr;
                  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->group_id >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->group_id >> 3)
                                                                              + 0x7FFF8000) )
                  {
                    __asan_report_load4(&config_ptr->group_id);
                  }
                  group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(p_lua_config_mgr, config_ptr->group_id);
                  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 160));
                  if ( group_script_config_ptr )
                  {
                    ServiceBox::findService<GameserverService>();
                    GameserverService::getConfig((GameserverService *const)(v2 + 160));
                    v20 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160))->design_config.lua_config_mgr;
                    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->group_id >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->group_id >> 3)
                                                                                + 0x7FFF8000) )
                    {
                      __asan_report_load4(&config_ptr->group_id);
                    }
                    group_info_script = LuaConfigMgr::findGroupInfoConfig(v20, config_ptr->group_id);
                    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 160));
                    if ( group_info_script )
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->config_id >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)&config_ptr->config_id >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_load4(&config_ptr->config_id);
                      }
                      gadget_script_config_ptr = GroupScriptConfig::findGadgetConfig(
                                                   group_script_config_ptr,
                                                   config_ptr->config_id);
                      if ( gadget_script_config_ptr )
                      {
                        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                          __asan_report_load8(&this->player_);
                        SceneComp = Player::getSceneComp(this->player_);
                        TransferReason::TransferReason(&p_reason, ENTER_REASON_SUMMER_TIME_MIST_ZONE);
                        p_rot = &gadget_script_config_ptr->rot;
                        p_pos = &group_info_script->pos;
                        v25 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
                        LOBYTE(p_pos) = PlayerSceneComp::jumpToScene(SceneComp, v25, p_pos, p_rot, 0, &p_reason) != 0;
                        TransferReason::~TransferReason(&p_reason);
                        if ( (_BYTE)p_pos )
                        {
                          common::milog::MiLogStream::create(
                            &v40,
                            &common::milog::MiLogDefault::default_log_obj_,
                            3u,
                            "./src/player/activity/summer_time_activity.cpp",
                            "onClimateMeterFullEvent",
                            530);
                          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                            &v40,
                            (const char (*)[33])"[SUMMER_TIME] jumpToScene failed");
                          common::milog::MiLogStream::~MiLogStream(&v40);
                        }
                        else
                        {
                          if ( *(_BYTE *)(((unsigned __int64)&this->last_transfer_time_ >> 3) + 0x7FFF8000) != 0
                            && *(_BYTE *)(((unsigned __int64)&this->last_transfer_time_ >> 3) + 0x7FFF8000) <= 3 )
                          {
                            __asan_report_store4(&this->last_transfer_time_, v25, &this->last_transfer_time_);
                          }
                          this->last_transfer_time_ = now;
                          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                            __asan_report_load8(&this->player_);
                          BasicComp = Player::getBasicComp(this->player_);
                          PlayerBasicComp::resetCurClimateMeter(BasicComp, 1);
                          common::milog::MiLogStream::create(
                            &v40,
                            &common::milog::MiLogDefault::default_log_obj_,
                            1u,
                            "./src/player/activity/summer_time_activity.cpp",
                            "onClimateMeterFullEvent",
                            535);
                          v27 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                                  &v40,
                                  (const char (*)[37])"[SUMMER_TIME] drag player to signal:");
                          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v27,
                            (const unsigned int *)(v2 + 48));
                          common::milog::MiLogStream::~MiLogStream(&v40);
                          if ( *(char *)(((unsigned __int64)&config_ptr->is_transfer_anchor >> 3) + 0x7FFF8000) < 0 )
                            __asan_report_load1(&config_ptr->is_transfer_anchor);
                          if ( !config_ptr->is_transfer_anchor )
                          {
                            if ( *(_BYTE *)(((unsigned __int64)&config_ptr->vehicle_config_id >> 3) + 0x7FFF8000) != 0
                              && (char)((((_BYTE)config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->vehicle_config_id >> 3)
                                                                                        + 0x7FFF8000) )
                            {
                              __asan_report_load4(&config_ptr->vehicle_config_id);
                            }
                            gadget_vehicle_script_config_ptr = GroupScriptConfig::findPointConfig(
                                                                 group_script_config_ptr,
                                                                 config_ptr->vehicle_config_id);
                            if ( gadget_vehicle_script_config_ptr )
                            {
                              v29 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
                              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                                __asan_report_load8(&this->player_);
                              toThisPtr<Player>((Player *)(v2 + 128));
                              p_vehicle_gadget_id = (PlayerPtr *)&gadget_vehicle_script_config_ptr->rot;
                              v31 = &gadget_vehicle_script_config_ptr->pos;
                              if ( *(_BYTE *)(((unsigned __int64)&config_ptr->vehicle_gadget_id >> 3) + 0x7FFF8000) != 0
                                && *(_BYTE *)(((unsigned __int64)&config_ptr->vehicle_gadget_id >> 3) + 0x7FFF8000) <= 3 )
                              {
                                p_vehicle_gadget_id = (PlayerPtr *)&config_ptr->vehicle_gadget_id;
                                __asan_report_load4(&config_ptr->vehicle_gadget_id);
                              }
                              Scene::createPlayerVehicle(
                                (Scene *const)(v2 + 160),
                                v29,
                                (const Vector3 *)config_ptr->vehicle_gadget_id,
                                v31,
                                p_vehicle_gadget_id,
                                (proto::CreateGadgetReason)(v2 + 128),
                                0);
                              std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 160));
                              std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
                            }
                            else
                            {
                              common::milog::MiLogStream::create(
                                &v40,
                                &common::milog::MiLogDefault::default_log_obj_,
                                3u,
                                "./src/player/activity/summer_time_activity.cpp",
                                "onClimateMeterFullEvent",
                                542);
                              v28 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                                      &v40,
                                      (const char (*)[50])"[SUMMER_TIME] findPointConfig failed, config_id: ");
                              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v28,
                                &config_ptr->vehicle_config_id);
                              common::milog::MiLogStream::~MiLogStream(&v40);
                            }
                          }
                        }
                      }
                      else
                      {
                        common::milog::MiLogStream::create(
                          &v40,
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/player/activity/summer_time_activity.cpp",
                          "onClimateMeterFullEvent",
                          525);
                        v22 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                                &v40,
                                (const char (*)[50])"[SUMMER_TIME] findPointConfig failed, config_id: ");
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v22,
                          &config_ptr->config_id);
                        common::milog::MiLogStream::~MiLogStream(&v40);
                      }
                    }
                    else
                    {
                      common::milog::MiLogStream::create(
                        &v40,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/player/activity/summer_time_activity.cpp",
                        "onClimateMeterFullEvent",
                        519);
                      v21 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                              &v40,
                              (const char (*)[53])"[SUMMER_TIME] findGroupInfoConfig failed, group_id: ");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &config_ptr->group_id);
                      common::milog::MiLogStream::~MiLogStream(&v40);
                    }
                  }
                  else
                  {
                    common::milog::MiLogStream::create(
                      &v40,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/activity/summer_time_activity.cpp",
                      "onClimateMeterFullEvent",
                      513);
                    v19 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                            &v40,
                            (const char (*)[55])"[SUMMER_TIME] findGroupScriptConfig failed, group_id: ");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &config_ptr->group_id);
                    common::milog::MiLogStream::~MiLogStream(&v40);
                  }
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v40,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/summer_time_activity.cpp",
                    "onClimateMeterFullEvent",
                    507);
                  v17 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                          &v40,
                          (const char (*)[60])"[SUMMER_TIME] config_ptr is nullptr, last_float_signal_id_:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v17,
                    (const unsigned int *)(v2 + 48));
                  common::milog::MiLogStream::~MiLogStream(&v40);
                }
              }
              else
              {
LABEL_80:
                common::milog::MiLogStream::create(
                  &v40,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/summer_time_activity.cpp",
                  "onClimateMeterFullEvent",
                  550);
                common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                  &v40,
                  (const char (*)[41])"[SUMMER_TIME] last_float_signal_id_ is 0");
                common::milog::MiLogStream::~MiLogStream(&v40);
              }
            }
          }
        }
        std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v2 + 96));
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
    }
  }
  if ( v42 == (char *)v2 )
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
};

// Line 555: range 0000000017FDE658-0000000017FDFC72
__int64 __fastcall SummerTimeActivity::unlockFloatSignal(
        SummerTimeActivity *const this,
        uint32_t group_id,
        uint32_t config_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v6; // al
  unsigned int v7; // r14d
  uint32_t Uid; // r14d
  std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr v17; // r15
  std::set<unsigned int>::iterator v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  uint32_t *p_id; // rsi
  uint32_t id; // ecx
  char v24; // dl
  __int64 v25; // rdx
  unsigned __int64 v26; // rsi
  std::_Rb_tree_const_iterator<unsigned int>::reference v27; // rax
  _DWORD *v28; // rdx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  uint32_t v32; // ecx
  char v33; // dl
  __int64 v34; // rdx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v40; // rax
  common::milog::MiLogStream *v41; // r14
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rsi
  common::milog::MiLogStream *v45; // rax
  __int64 result; // rax
  bool is_find_next; // [rsp+2Bh] [rbp-205h]
  uint32_t next_signal_id; // [rsp+2Ch] [rbp-204h]
  ActivitySummerTimeExcelConfigMgr *config_mgr; // [rsp+30h] [rbp-200h]
  const data::ActivitySummerTimeFloatSignalExcelConfig *config_ptr; // [rsp+38h] [rbp-1F8h]
  const std::set<unsigned int> *zone_singal_set_ptr_0; // [rsp+40h] [rbp-1F0h]
  const std::set<unsigned int> *zone_singal_set_ptr; // [rsp+50h] [rbp-1E0h]
  const std::map<unsigned int,std::map<unsigned int,unsigned int>>::mapped_type *zone_order_map; // [rsp+60h] [rbp-1D0h]
  std::set<unsigned int>::iterator __for_end; // [rsp+68h] [rbp-1C8h] BYREF
  std::shared_ptr<Config> v56; // [rsp+70h] [rbp-1C0h] BYREF
  common::milog::MiLogStream v57; // [rsp+80h] [rbp-1B0h] BYREF
  char v58[400]; // [rsp+A0h] [rbp-190h] BYREF
  std::pair<unsigned int,unsigned int> M_node; // 0:rsi.8

  v3 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 48 4 11 zone_id:626 64 4 13 signal_id:633 80 4 12 group_id:554 96 4 13 config_id:554 112 8 14"
                        " order_iter:656 144 8 19 prev_order_iter:662 176 8 8 iter:669 208 16 17 cur_scene_ptr:568 240 16"
                        " 19 world_scene_ptr:574 272 40 10 notify:686";
  *(_QWORD *)(v3 + 16) = SummerTimeActivity::unlockFloatSignal;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = 61956;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862725] = -234881024;
  v5[536862726] = 62194;
  v5[536862727] = 62194;
  v5[536862728] = 62194;
  v5[536862729] = -218103808;
  v5[536862730] = -202116109;
  *(_DWORD *)(v3 + 80) = group_id;
  *(_DWORD *)(v3 + 96) = config_id;
  if ( !BaseActivity::isOpening(this, 0) )
    goto LABEL_9;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ || BaseActivity::isSettled(this) )
LABEL_9:
    v6 = 1;
  else
    v6 = 0;
  if ( v6 )
  {
    common::milog::MiLogStream::create(
      &v57,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/summer_time_activity.cpp",
      "unlockFloatSignal",
      558);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      &v57,
      (const char (*)[33])"[SUMMER_TIME] activity is closed");
    common::milog::MiLogStream::~MiLogStream(&v57);
    v7 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_sea_mist_closed_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_sea_mist_closed_ >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_sea_mist_closed_);
    }
    if ( this->is_sea_mist_closed_ )
    {
      common::milog::MiLogStream::create(
        &v57,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/summer_time_activity.cpp",
        "unlockFloatSignal",
        564);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        &v57,
        (const char (*)[33])"[SUMMER_TIME] sea mist is closed");
      common::milog::MiLogStream::~MiLogStream(&v57);
      v7 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 208));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 208)) )
      {
        common::milog::MiLogStream::create(
          &v57,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/summer_time_activity.cpp",
          "unlockFloatSignal",
          571);
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          &v57,
          (const char (*)[39])"[SUMMER_TIME] cur_scene_ptr is nullptr");
        common::milog::MiLogStream::~MiLogStream(&v57);
        v7 = -1;
      }
      else
      {
        std::dynamic_pointer_cast<PlayerWorldScene,Scene>((const std::shared_ptr<Scene> *)(v3 + 240));
        if ( std::operator==<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v3 + 240)) )
        {
          common::milog::MiLogStream::create(
            &v57,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/summer_time_activity.cpp",
            "unlockFloatSignal",
            577);
          common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            &v57,
            (const char (*)[43])"[SUMMER_TIME] cur scene is not world scene");
          common::milog::MiLogStream::~MiLogStream(&v57);
          v7 = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          Uid = Player::getUid(this->player_);
          v9 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 240));
          if ( Uid == Scene::getOwnerUid((const Scene *const)v9) )
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v56);
            config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v56)->design_config.txt_config_mgr.activity_summer_time_config_mgr;
            std::shared_ptr<Config>::~shared_ptr(&v56);
            std::pair<unsigned int,unsigned int>::pair<unsigned int &,unsigned int &,true>(
              (std::pair<unsigned int,unsigned int> *const)&__for_end,
              (unsigned int *)(v3 + 80),
              (unsigned int *)(v3 + 96));
            M_node = (std::pair<unsigned int,unsigned int>)__for_end._M_node;
            config_ptr = ActivitySummerTimeExcelConfigMgr::findFloatSignalConfigByGroupPair(config_mgr, M_node);
            if ( config_ptr )
            {
              common::milog::MiLogStream::create(
                &v57,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/summer_time_activity.cpp",
                "unlockFloatSignal",
                595);
              v15 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                      &v57,
                      (const char (*)[47])"[SUMMER_TIME] unlock float siganel, signal_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &config_ptr->id);
              common::milog::MiLogStream::~MiLogStream(&v57);
              is_find_next = 0;
              if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                      &this->disabled_float_signal_set_,
                      &config_ptr->id) )
              {
                if ( *(char *)(((unsigned __int64)&config_ptr->is_transfer_anchor >> 3) + 0x7FFF8000) < 0 )
                  __asan_report_load1(&config_ptr->is_transfer_anchor);
                if ( config_ptr->is_transfer_anchor )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->mist_zone_id >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->mist_zone_id >> 3)
                                                                              + 0x7FFF8000) )
                  {
                    __asan_report_load4(&config_ptr->mist_zone_id);
                  }
                  *(_DWORD *)(v3 + 64) = config_ptr->mist_zone_id;
                  zone_singal_set_ptr = ActivitySummerTimeExcelConfigMgr::findMistZoneFloatSignalSet(
                                          config_mgr,
                                          *(_DWORD *)(v3 + 64));
                  if ( zone_singal_set_ptr )
                  {
                    v17 = std::set<unsigned int>::end(zone_singal_set_ptr)._M_node;
                    v18._M_node = std::set<unsigned int>::begin(zone_singal_set_ptr)._M_node;
                    std::set<unsigned int>::insert<std::_Rb_tree_const_iterator<unsigned int>>(
                      &this->disabled_float_signal_set_,
                      v18,
                      (std::_Rb_tree_const_iterator<unsigned int>)v17);
                  }
                  else
                  {
                    common::milog::MiLogStream::create(
                      &v57,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/activity/summer_time_activity.cpp",
                      "unlockFloatSignal",
                      608);
                    v16 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                            &v57,
                            (const char (*)[52])"[SUMMER_TIME] zone_singal_set_ptr is null, zone_id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v16,
                      (const unsigned int *)(v3 + 64));
                    common::milog::MiLogStream::~MiLogStream(&v57);
                  }
                  std::set<unsigned int>::insert(
                    &this->unlcoked_mist_zone_set_,
                    (const std::set<unsigned int>::value_type *)(v3 + 64));
                  common::milog::MiLogStream::create(
                    &v57,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/activity/summer_time_activity.cpp",
                    "unlockFloatSignal",
                    616);
                  v19 = common::milog::MiLogStream::operator<<<char [79],(char *[79])0>(
                          &v57,
                          (const char (*)[79])"[SUMMER_TIME] unlocked transfer anchor, then unlock all float signal, zone_id:");
                  v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v19,
                          (const unsigned int *)(v3 + 64));
                  v21 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                          v20,
                          (const char (*)[12])" signal_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &config_ptr->id);
                  common::milog::MiLogStream::~MiLogStream(&v57);
                }
                p_id = &config_ptr->id;
                std::set<unsigned int>::insert(&this->disabled_float_signal_set_, &config_ptr->id);
                if ( *(_BYTE *)(((unsigned __int64)&config_ptr->id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&config_ptr->id);
                }
                id = config_ptr->id;
                v24 = *(_BYTE *)(((unsigned __int64)&this->last_float_signal_id_ >> 3) + 0x7FFF8000);
                LOBYTE(p_id) = v24 != 0;
                v25 = (v24 != 0) & (unsigned __int8)((char)((((_BYTE)this + 124) & 7) + 3) >= v24);
                if ( (_BYTE)v25 )
                  __asan_report_store4(&this->last_float_signal_id_, p_id, v25);
                this->last_float_signal_id_ = id;
                is_find_next = 1;
              }
              else
              {
                if ( *(char *)(((unsigned __int64)&config_ptr->is_transfer_anchor >> 3) + 0x7FFF8000) < 0 )
                  __asan_report_load1(&config_ptr->is_transfer_anchor);
                if ( config_ptr->is_transfer_anchor )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->mist_zone_id >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->mist_zone_id >> 3)
                                                                              + 0x7FFF8000) )
                  {
                    __asan_report_load4(&config_ptr->mist_zone_id);
                  }
                  *(_DWORD *)(v3 + 48) = config_ptr->mist_zone_id;
                  do
                  {
                    v26 = (unsigned int)++*(_DWORD *)(v3 + 48);
                    zone_singal_set_ptr_0 = ActivitySummerTimeExcelConfigMgr::findMistZoneFloatSignalSet(
                                              config_mgr,
                                              v26);
                    if ( zone_singal_set_ptr_0 )
                    {
                      *(std::set<unsigned int>::iterator *)(v3 + 176) = std::set<unsigned int>::begin(zone_singal_set_ptr_0);
                      __for_end._M_node = std::set<unsigned int>::end(zone_singal_set_ptr_0)._M_node;
                      while ( std::operator!=(
                                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 176),
                                &__for_end) )
                      {
                        v27 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 176));
                        v28 = v27;
                        if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
                          && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3)
                                                                                + 0x7FFF8000) )
                        {
                          __asan_report_load4(v27);
                        }
                        *(_DWORD *)(v3 + 64) = *v28;
                        std::set<unsigned int>::erase(
                          &this->disabled_float_signal_set_,
                          (const std::set<unsigned int>::key_type *)(v3 + 64));
                        std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 176));
                      }
                      common::milog::MiLogStream::create(
                        &v57,
                        &common::milog::MiLogDefault::default_log_obj_,
                        1u,
                        "./src/player/activity/summer_time_activity.cpp",
                        "unlockFloatSignal",
                        637);
                      v29 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                              &v57,
                              (const char (*)[64])"[SUMMER_TIME] unlock already unlocked transfer anchor @zone_id:");
                      v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v29,
                              &config_ptr->mist_zone_id);
                      v31 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                              v30,
                              (const char (*)[18])" then reset zone:");
                      v26 = v3 + 48;
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v31,
                        (const unsigned int *)(v3 + 48));
                      common::milog::MiLogStream::~MiLogStream(&v57);
                    }
                  }
                  while ( zone_singal_set_ptr_0 );
                  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->id >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&config_ptr->id);
                  }
                  v32 = config_ptr->id;
                  v33 = *(_BYTE *)(((unsigned __int64)&this->last_float_signal_id_ >> 3) + 0x7FFF8000);
                  LOBYTE(v26) = v33 != 0;
                  v34 = (v33 != 0) & (unsigned __int8)((char)((((_BYTE)this + 124) & 7) + 3) >= v33);
                  if ( (_BYTE)v34 )
                    __asan_report_store4(&this->last_float_signal_id_, v26, v34);
                  this->last_float_signal_id_ = v32;
                  is_find_next = 1;
                  common::milog::MiLogStream::create(
                    &v57,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/activity/summer_time_activity.cpp",
                    "unlockFloatSignal",
                    644);
                  v35 = common::milog::MiLogStream::operator<<<char [89],(char *[89])0>(
                          &v57,
                          (const char (*)[89])"[SUMMER_TIME] locked an unlocked transfer anchor, then revert all float signal, zone_id:");
                  v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v35,
                          (const unsigned int *)(v3 + 48));
                  v37 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                          v36,
                          (const char (*)[12])" signal_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &config_ptr->id);
                  common::milog::MiLogStream::~MiLogStream(&v57);
                }
              }
              if ( !is_find_next )
              {
                v7 = 0;
              }
              else
              {
                zone_order_map = std::map<unsigned int,std::map<unsigned int,unsigned int>>::at(
                                   &config_mgr->mist_zone_signal_order_map,
                                   &config_ptr->mist_zone_id);
                *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 112) = std::map<unsigned int,unsigned int>::find(
                                                                                       zone_order_map,
                                                                                       &config_ptr->relative_order);
                __for_end._M_node = std::map<unsigned int,unsigned int>::end(zone_order_map)._M_node;
                if ( std::operator==(
                       (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 112),
                       (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
                {
                  common::milog::MiLogStream::create(
                    &v57,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/summer_time_activity.cpp",
                    "unlockFloatSignal",
                    659);
                  v38 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                          &v57,
                          (const char (*)[49])"[SUMMER_TIME] signal order not found, signal_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &config_ptr->id);
                  common::milog::MiLogStream::~MiLogStream(&v57);
                  v7 = -1;
                }
                else
                {
                  *(std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *)(v3 + 144) = std::prev<std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>>(*(std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *)(v3 + 112), 1LL);
                  __for_end._M_node = std::map<unsigned int,unsigned int>::begin(zone_order_map)._M_node;
                  if ( std::operator==(
                         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 144),
                         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
                  {
                    common::milog::MiLogStream::create(
                      &v57,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/player/activity/summer_time_activity.cpp",
                      "unlockFloatSignal",
                      665);
                    v39 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                            &v57,
                            (const char (*)[42])"[SUMMER_TIME] signal is begin, signal_id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &config_ptr->id);
                    common::milog::MiLogStream::~MiLogStream(&v57);
                  }
                  else
                  {
                    *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 176) = std::map<unsigned int,unsigned int>::begin(zone_order_map);
                    while ( std::operator!=(
                              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 176),
                              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 112)) )
                    {
                      __for_end._M_node = std::map<unsigned int,unsigned int>::end(zone_order_map)._M_node;
                      if ( std::operator==(
                             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 176),
                             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
                      {
                        break;
                      }
                      v40 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 176));
                      std::set<unsigned int>::insert(&this->disabled_float_signal_set_, &v40->second);
                      common::milog::MiLogStream::create(
                        &v57,
                        &common::milog::MiLogDefault::default_log_obj_,
                        1u,
                        "./src/player/activity/summer_time_activity.cpp",
                        "unlockFloatSignal",
                        676);
                      v41 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                              &v57,
                              (const char (*)[45])"[SUMMER_TIME] unlock prev signal, signal_id:");
                      v42 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 176));
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &v42->second);
                      common::milog::MiLogStream::~MiLogStream(&v57);
                      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(
                        (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 176),
                        0);
                    }
                  }
                  if ( std::operator==<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>>(
                         &config_mgr->all_float_singal_point_set,
                         &this->disabled_float_signal_set_) )
                  {
                    common::milog::MiLogStream::create(
                      &v57,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/player/activity/summer_time_activity.cpp",
                      "unlockFloatSignal",
                      682);
                    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                      &v57,
                      (const char (*)[39])"[SUMMER_TIME] all signals are unlocked");
                    common::milog::MiLogStream::~MiLogStream(&v57);
                    if ( *(_BYTE *)(((unsigned __int64)&this->next_float_signal_id_ >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&this->next_float_signal_id_ >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_store4(
                        &this->next_float_signal_id_,
                        "[SUMMER_TIME] all signals are unlocked",
                        &this->next_float_signal_id_);
                    }
                    this->next_float_signal_id_ = 0;
                    v43 = (*(_BYTE *)(((unsigned __int64)&this->last_float_signal_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_float_signal_id_ >> 3) + 0x7FFF8000));
                    if ( (_BYTE)v43 )
                      __asan_report_store4(&this->last_float_signal_id_, (((_BYTE)this + 124) & 7u) + 3, v43);
                    this->last_float_signal_id_ = 0;
                    proto::SummerTimeFloatSignalUpdateNotify::SummerTimeFloatSignalUpdateNotify((proto::SummerTimeFloatSignalUpdateNotify *const)(v3 + 272));
                    if ( *(_BYTE *)(((unsigned __int64)&this->next_float_signal_id_ >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&this->next_float_signal_id_ >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&this->next_float_signal_id_);
                    }
                    proto::SummerTimeFloatSignalUpdateNotify::set_float_signal_id(
                      (proto::SummerTimeFloatSignalUpdateNotify *const)(v3 + 272),
                      this->next_float_signal_id_);
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8(&this->player_);
                    Player::sendProto(this->player_, (const google::protobuf::Message *)(v3 + 272));
                    v7 = 0;
                    proto::SummerTimeFloatSignalUpdateNotify::~SummerTimeFloatSignalUpdateNotify((proto::SummerTimeFloatSignalUpdateNotify *const)(v3 + 272));
                  }
                  else
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->id >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&config_ptr->id);
                    }
                    v44 = config_ptr->id;
                    next_signal_id = SummerTimeActivity::findNextFloatSignal(this, v44);
                    if ( *(_BYTE *)(((unsigned __int64)&this->next_float_signal_id_ >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&this->next_float_signal_id_ >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_store4(&this->next_float_signal_id_, v44, &this->next_float_signal_id_);
                    }
                    this->next_float_signal_id_ = next_signal_id;
                    SummerTimeActivity::notifyNextSignal(this, next_signal_id, 0);
                    common::milog::MiLogStream::create(
                      &v57,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/player/activity/summer_time_activity.cpp",
                      "unlockFloatSignal",
                      696);
                    v45 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                            &v57,
                            (const char (*)[42])"[SUMMER_TIME] find next succ., signal_id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v45,
                      &this->next_float_signal_id_);
                    common::milog::MiLogStream::~MiLogStream(&v57);
                    v7 = 0;
                  }
                }
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v57,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/summer_time_activity.cpp",
                "unlockFloatSignal",
                591);
              v10 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                      &v57,
                      (const char (*)[55])"[SUMMER_TIME] float singal config not found, group_id:");
              v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v10,
                      (const unsigned int *)(v3 + 80));
              v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v11,
                      (const char (*)[13])", config_id:");
              v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v12,
                      (const unsigned int *)(v3 + 96));
              v14 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])", uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              *(_DWORD *)(v3 + 64) = Player::getUid(this->player_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v3 + 64));
              common::milog::MiLogStream::~MiLogStream(&v57);
              v7 = -1;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v57,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/summer_time_activity.cpp",
              "unlockFloatSignal",
              583);
            common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
              &v57,
              (const char (*)[49])"[SUMMER_TIME] guest cannot unlock owner's signal");
            common::milog::MiLogStream::~MiLogStream(&v57);
            v7 = 0;
          }
        }
        std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v3 + 240));
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 208));
    }
  }
  result = v7;
  if ( v58 == (char *)v3 )
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

// Line 701: range 0000000017FDFC74-0000000017FE0377
__int64 __fastcall SummerTimeActivity::findNextFloatSignal(
        SummerTimeActivity *const this,
        uint32_t cur_unlocked_signal)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v7; // rax
  std::map<unsigned int,std::map<unsigned int,unsigned int>> *p_mist_zone_signal_order_map; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v11; // rdx
  unsigned int *p_second; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v13; // rdx
  unsigned int *v14; // rax
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type __x; // [rsp+14h] [rbp-13Ch] BYREF
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+18h] [rbp-138h] BYREF
  const ActivitySummerTimeExcelConfigMgr *config_mgr; // [rsp+20h] [rbp-130h]
  const data::ActivitySummerTimeFloatSignalExcelConfig *config_ptr; // [rsp+28h] [rbp-128h]
  const std::map<unsigned int,unsigned int> *zone_order_map; // [rsp+30h] [rbp-120h]
  const std::map<unsigned int,unsigned int> *next_zone_map; // [rsp+38h] [rbp-118h]
  std::shared_ptr<Config> v21; // [rsp+40h] [rbp-110h] BYREF
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-100h] BYREF
  char v23[224]; // [rsp+70h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 9 order:709 48 4 23 cur_unlocked_signal:700 64 8 19 cur_signal_iter:711 96 8 13 next_iter"
                        ":717 128 8 22 next_zone_map_iter:721 160 8 24 next_zone_begin_iter:728";
  *(_QWORD *)(v2 + 16) = SummerTimeActivity::findNextFloatSignal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -202116352;
  *(_DWORD *)(v2 + 48) = cur_unlocked_signal;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.activity_summer_time_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v21);
  config_ptr = data::ActivitySummerTimeExcelConfigMgrBase::findActivitySummerTimeFloatSignalExcelConfig(
                 config_mgr,
                 *(_DWORD *)(v2 + 48));
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->relative_order >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->relative_order >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&config_ptr->relative_order);
    }
    *(_DWORD *)(v2 + 32) = config_ptr->relative_order;
    zone_order_map = std::map<unsigned int,std::map<unsigned int,unsigned int>>::at(
                       &config_mgr->mist_zone_signal_order_map,
                       &config_ptr->mist_zone_id);
    *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                          zone_order_map,
                                                                          (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
    __y._M_node = std::map<unsigned int,unsigned int>::end(zone_order_map)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/summer_time_activity.cpp",
        "findNextFloatSignal",
        714);
      v7 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
             &v22,
             (const char (*)[54])"[SUMMER_TIME] order cannot find, cur_unlocked_signal:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v22);
      result = 0LL;
    }
    else
    {
      *(std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *)(v2 + 96) = std::next<std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>>(
                                                                                                  *(std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *)(v2 + 64),
                                                                                                  1LL);
      __y._M_node = std::map<unsigned int,unsigned int>::end(zone_order_map)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96),
             &__y) )
      {
        p_mist_zone_signal_order_map = &config_mgr->mist_zone_signal_order_map;
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->mist_zone_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->mist_zone_id >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4(&config_ptr->mist_zone_id);
        }
        __x = config_ptr->mist_zone_id + 1;
        *(std::map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v2 + 128) = std::map<unsigned int,std::map<unsigned int,unsigned int>>::find(p_mist_zone_signal_order_map, &__x);
        __y._M_node = std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(&config_mgr->mist_zone_signal_order_map)._M_node;
        if ( std::operator==(
               (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)(v2 + 128),
               (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)&__y) )
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/summer_time_activity.cpp",
            "findNextFloatSignal",
            724);
          v9 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                 &v22,
                 (const char (*)[45])"[SUMMER_TIME] signal reaches end, signal_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v22);
          result = 0LL;
        }
        else
        {
          next_zone_map = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > > *const)(v2 + 128))->second;
          *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 160) = std::map<unsigned int,unsigned int>::begin(next_zone_map);
          __y._M_node = std::map<unsigned int,unsigned int>::end(next_zone_map)._M_node;
          if ( std::operator==(
                 (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 160),
                 &__y) )
          {
            common::milog::MiLogStream::create(
              &v22,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/summer_time_activity.cpp",
              "findNextFloatSignal",
              731);
            v10 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                    &v22,
                    (const char (*)[48])"[SUMMER_TIME] next zone is empty, next_zone_id:");
            if ( *(_BYTE *)(((unsigned __int64)&config_ptr->mist_zone_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->mist_zone_id >> 3)
                                                                        + 0x7FFF8000) )
            {
              __asan_report_load4(&config_ptr->mist_zone_id);
            }
            __x = config_ptr->mist_zone_id + 1;
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &__x);
            common::milog::MiLogStream::~MiLogStream(&v22);
            result = 0LL;
          }
          else
          {
            v11 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 160));
            p_second = &v11->second;
            if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(p_second);
            }
            result = v11->second;
          }
        }
      }
      else
      {
        v13 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 96));
        v14 = &v13->second;
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v14);
        }
        result = v13->second;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/summer_time_activity.cpp",
      "findNextFloatSignal",
      706);
    v5 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
           &v22,
           (const char (*)[66])"[SUMMER_TIME] float singal config not found, cur_unlocked_signal:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = 0LL;
  }
  if ( v23 == (char *)v2 )
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

// Line 743: range 0000000017FE0378-0000000017FE095E
int32_t __cdecl SummerTimeActivity::findNextFloatSignal(SummerTimeActivity *const this, uint32_t *singal_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 Position; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v8; // rax
  _DWORD *v9; // rdx
  __int64 v10; // rdx
  int32_t result; // eax
  uint32_t nearest_signal_id; // [rsp+14h] [rbp-15Ch]
  uint32_t nearest_dis; // [rsp+18h] [rbp-158h]
  uint32_t dis; // [rsp+1Ch] [rbp-154h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-150h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-148h] BYREF
  const ActivitySummerTimeExcelConfigMgr *config_mgr; // [rsp+30h] [rbp-140h]
  std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-138h]
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-130h] BYREF
  char v20[272]; // [rsp+60h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 13 signal_id:760 48 12 11 cur_pos:757 80 12 14 signal_pos:766 112 16 14 avatar_ptr:751 14"
                        "4 48 17 all_point_set:745";
  *(_QWORD *)(v2 + 16) = SummerTimeActivity::findNextFloatSignal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = 0x4000000;
  v4[536862722] = 62194;
  v4[536862722] = 0x4000000;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862726] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 112));
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112))->design_config.txt_config_mgr.activity_summer_time_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 112));
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 144), &config_mgr->all_float_singal_point_set);
  if ( std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v2 + 144)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/summer_time_activity.cpp",
      "findNextFloatSignal",
      748);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      &v19,
      (const char (*)[37])"[SUMMER_TIME] all_point_set is empty");
    common::milog::MiLogStream::~MiLogStream(&v19);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getAvatarComp(this->player_);
    PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v2 + 112));
    if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 112)) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/summer_time_activity.cpp",
        "findNextFloatSignal",
        754);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        &v19,
        (const char (*)[33])"[SUMMER_TIME] avatar_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v19);
      v5 = -1;
    }
    else
    {
      v6 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
      Position = (unsigned __int64)Entity::getPosition((const Entity *const)v6);
      if ( (char)(Position & 7) >= *(_BYTE *)((Position >> 3) + 0x7FFF8000)
        && *(_BYTE *)((Position >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) != 0
        && (char)((Position + 11) & 7) >= *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) )
      {
        Position = __asan_report_load_n(Position, 12LL);
      }
      *(_QWORD *)(v2 + 48) = *(_QWORD *)Position;
      *(_DWORD *)(v2 + 56) = *(_DWORD *)(Position + 8);
      nearest_signal_id = 0;
      nearest_dis = 0x7FFFFFFF;
      __for_range = (std::set<unsigned int> *)(v2 + 144);
      __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 144))._M_node;
      __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v2 + 144))._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v8 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
        v9 = v8;
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v8);
        }
        *(_DWORD *)(v2 + 32) = *v9;
        if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                &this->disabled_float_signal_set_,
                (const unsigned int *)(v2 + 32)) )
        {
          *(Vector3 *)(v2 + 80) = ActivitySummerTimeExcelConfigMgr::findSignalPos(config_mgr, *(_DWORD *)(v2 + 32));
          if ( !Vector3::isZero((const Vector3 *const)(v2 + 80)) )
          {
            dis = (int)getDistance((const Vector3 *)(v2 + 48), (const Vector3 *)(v2 + 80));
            if ( dis < nearest_dis )
            {
              nearest_dis = dis;
              nearest_signal_id = *(_DWORD *)(v2 + 32);
            }
          }
        }
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
      }
      v10 = (*(_BYTE *)(((unsigned __int64)singal_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)singal_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)singal_id >> 3) + 0x7FFF8000));
      if ( (_BYTE)v10 )
        __asan_report_store4(singal_id, ((unsigned __int8)singal_id & 7u) + 3, v10);
      *singal_id = nearest_signal_id;
      v5 = 0;
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 112));
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 144));
  result = v5;
  if ( v20 == (char *)v2 )
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

// Line 783: range 0000000017FE0960-0000000017FE0AFB
int32_t __cdecl SummerTimeActivity::closeContent(SummerTimeActivity *const this)
{
  char v1; // al
  __int64 v3; // rsi
  __int64 v4; // rdx

  if ( !BaseActivity::isOpening(this, 0) )
    goto LABEL_6;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ || BaseActivity::isSettled(this) )
LABEL_6:
    v1 = 1;
  else
    v1 = 0;
  if ( v1 )
    return -1;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_, 0LL, &this->is_content_closed_);
  this->is_content_closed_ = 1;
  v3 = (((_BYTE)this + 124) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->last_float_signal_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_float_signal_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->last_float_signal_id_, v3, v4);
  this->last_float_signal_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->next_float_signal_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->next_float_signal_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->next_float_signal_id_, v3, &this->next_float_signal_id_);
  }
  this->next_float_signal_id_ = 0;
  std::set<unsigned int>::clear(&this->unlcoked_mist_zone_set_);
  std::set<unsigned int>::clear(&this->disabled_float_signal_set_);
  BaseActivity::notifyClientData(this, 0);
  return 0;
};

// Line 798: range 0000000017FE0AFC-0000000017FE0D6F
__int64 __fastcall SummerTimeActivity::checkAddDraftWood(const SummerTimeActivity *const this, uint32_t add_num)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
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
  *(_QWORD *)(v2 + 8) = "1 32 4 11 add_num:797";
  *(_QWORD *)(v2 + 16) = SummerTimeActivity::checkAddDraftWood;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = add_num;
  if ( *(_DWORD *)(v2 + 32) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->draft_wood_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->draft_wood_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->draft_wood_);
    }
    if ( this->draft_wood_ && *(_DWORD *)(v2 + 32) + this->draft_wood_ < *(_DWORD *)(v2 + 32) )
      goto LABEL_14;
  }
  if ( *(_DWORD *)(v2 + 32) )
    goto LABEL_15;
  if ( *(_BYTE *)(((unsigned __int64)&this->draft_wood_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->draft_wood_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->draft_wood_);
  }
  if ( this->draft_wood_ || *(_DWORD *)(v2 + 32) + this->draft_wood_ <= *(_DWORD *)(v2 + 32) )
  {
LABEL_15:
    result = 0LL;
  }
  else
  {
LABEL_14:
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/summer_time_activity.cpp",
      "checkAddDraftWood",
      801);
    v5 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v9,
           (const char (*)[46])"[SUMMER_TIME] draft_wood over flow, cur num: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->draft_wood_);
    v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])" ,add num: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 9170LL;
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

// Line 809: range 0000000017FE0D70-0000000017FE0F40
__int64 __fastcall SummerTimeActivity::checkSubDraftWood(const SummerTimeActivity *const this, uint32_t sub_num)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 11 sub_num:808";
  *(_QWORD *)(v2 + 16) = SummerTimeActivity::checkSubDraftWood;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = sub_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->draft_wood_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->draft_wood_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->draft_wood_);
  }
  if ( this->draft_wood_ >= *(_DWORD *)(v2 + 32) )
  {
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/summer_time_activity.cpp",
      "checkSubDraftWood",
      812);
    v5 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v9,
           (const char (*)[47])"[SUMMER_TIME] draft_wood not enough, cur num: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->draft_wood_);
    v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v6, (const char (*)[10])off_2648E1C0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 9171LL;
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

// Line 820: range 0000000017FE0F42-0000000017FE132D
int32_t __cdecl SummerTimeActivity::addDraftWood(
        SummerTimeActivity *const this,
        uint32_t add_num,
        const ActionReason *reason,
        bool is_notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int32_t v7; // r14d
  PlayerBasicComp *BasicComp; // rax
  SelectType v9; // ecx
  char v10; // dl
  __int64 v11; // rsi
  __int64 v12; // rdx
  PlayerItemComp *ItemComp; // rdi
  data::ItemLimitType vptr_PlayerCompBase_high; // ecx
  uint32_t vptr_PlayerCompBase; // r10d
  int32_t result; // eax
  std::string v17; // [rsp+0h] [rbp-C0h]
  PlayerItemComp *reasona; // [rsp+8h] [rbp-B8h]
  bool is_notifya; // [rsp+10h] [rbp-B0h]
  unsigned int add_numa; // [rsp+14h] [rbp-ACh]
  SummerTimeActivity *thisa; // [rsp+18h] [rbp-A8h]
  int32_t ret; // [rsp+28h] [rbp-98h]
  unsigned int old_draft_wood; // [rsp+2Ch] [rbp-94h]
  std::string v24; // [rsp+30h] [rbp-90h] BYREF
  char v25[112]; // [rsp+50h] [rbp-70h] BYREF

  *(&v17._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v17._anon_0._M_allocated_capacity) = add_num;
  v17._M_string_length = (std::string::size_type)reason;
  v17._anon_0._M_local_buf[0] = is_notify;
  v4 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 1 22 log_context_holder:827";
  *(_QWORD *)(v4 + 16) = SummerTimeActivity::addDraftWood;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  ret = SummerTimeActivity::checkAddDraftWood(this, add_num);
  if ( ret )
  {
    v7 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v24, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0x67u, v17);
    std::string::~string(&v24);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->draft_wood_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->draft_wood_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&thisa->draft_wood_);
    }
    old_draft_wood = thisa->draft_wood_;
    v11 = add_numa;
    v9 = SAFE_ADD<unsigned int,unsigned int>(old_draft_wood, add_numa);
    v10 = *(_BYTE *)(((unsigned __int64)&thisa->draft_wood_ >> 3) + 0x7FFF8000);
    LOBYTE(v11) = v10 != 0;
    v12 = (v10 != 0) & (unsigned __int8)((char)((((_BYTE)thisa + 12) & 7) + 3) >= v10);
    if ( (_BYTE)v12 )
      __asan_report_store4(&thisa->draft_wood_, v11, v12);
    thisa->draft_wood_ = v9;
    if ( is_notifya )
      BaseActivity::notifyActivityCoinInfo(thisa);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    ItemComp = Player::getItemComp(thisa->player_);
    if ( *(_BYTE *)((((unsigned __int64)&reasona->_vptr_PlayerCompBase + 4) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)reasona + 4) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)&reasona->_vptr_PlayerCompBase + 4) >> 3)
                                                            + 0x7FFF8000) )
    {
      ItemComp = (PlayerItemComp *)((char *)&reasona->_vptr_PlayerCompBase + 4);
      __asan_report_load4((char *)&reasona->_vptr_PlayerCompBase + 4);
    }
    vptr_PlayerCompBase_high = HIDWORD(reasona->_vptr_PlayerCompBase);
    if ( *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)reasona & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) )
    {
      ItemComp = reasona;
      __asan_report_load4(reasona);
    }
    vptr_PlayerCompBase = (uint32_t)reasona->_vptr_PlayerCompBase;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->draft_wood_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->draft_wood_ >> 3) + 0x7FFF8000) )
    {
      ItemComp = (PlayerItemComp *)&thisa->draft_wood_;
      __asan_report_load4(&thisa->draft_wood_);
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      ITEM_VIRTUAL_SUMMER_TIME_DRAFT_WOOD,
      old_draft_wood,
      thisa->draft_wood_,
      vptr_PlayerCompBase,
      vptr_PlayerCompBase_high,
      0);
    v7 = 0;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
  }
  result = v7;
  if ( v25 == (char *)v4 )
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

// Line 841: range 0000000017FE132E-0000000017FE1681
int32_t __cdecl SummerTimeActivity::subDraftWood(
        SummerTimeActivity *const this,
        uint32_t sub_num,
        const SubItemReason *reason,
        bool is_notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int32_t v7; // r14d
  PlayerBasicComp *BasicComp; // rax
  PlayerItemComp *ItemComp; // rdi
  uint32_t vptr_PlayerCompBase; // r8d
  int32_t result; // eax
  std::string v12; // [rsp+0h] [rbp-C0h]
  PlayerItemComp *reasona; // [rsp+8h] [rbp-B8h]
  bool is_notifya; // [rsp+10h] [rbp-B0h]
  uint32_t sub_numa; // [rsp+14h] [rbp-ACh]
  SummerTimeActivity *thisa; // [rsp+18h] [rbp-A8h]
  int32_t ret; // [rsp+28h] [rbp-98h]
  uint32_t old_draft_wood; // [rsp+2Ch] [rbp-94h]
  std::string v19; // [rsp+30h] [rbp-90h] BYREF
  char v20[112]; // [rsp+50h] [rbp-70h] BYREF

  *(&v12._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v12._anon_0._M_allocated_capacity) = sub_num;
  v12._M_string_length = (std::string::size_type)reason;
  v12._anon_0._M_local_buf[0] = is_notify;
  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 1 22 log_context_holder:848";
  *(_QWORD *)(v4 + 16) = SummerTimeActivity::subDraftWood;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  ret = SummerTimeActivity::checkSubDraftWood(this, sub_num);
  if ( ret )
  {
    v7 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v19, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0x67u, v12);
    std::string::~string(&v19);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->draft_wood_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->draft_wood_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&thisa->draft_wood_);
    }
    old_draft_wood = thisa->draft_wood_;
    thisa->draft_wood_ = old_draft_wood - sub_numa;
    if ( is_notifya )
      BaseActivity::notifyActivityCoinInfo(thisa);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    ItemComp = Player::getItemComp(thisa->player_);
    if ( *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)reasona & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) )
    {
      ItemComp = reasona;
      __asan_report_load4(reasona);
    }
    vptr_PlayerCompBase = (uint32_t)reasona->_vptr_PlayerCompBase;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->draft_wood_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->draft_wood_ >> 3) + 0x7FFF8000) )
    {
      ItemComp = (PlayerItemComp *)&thisa->draft_wood_;
      __asan_report_load4(&thisa->draft_wood_);
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      ITEM_VIRTUAL_SUMMER_TIME_DRAFT_WOOD,
      old_draft_wood,
      thisa->draft_wood_,
      vptr_PlayerCompBase,
      ITEM_LIMIT_NONE,
      0);
    v7 = 0;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
  }
  result = v7;
  if ( v20 == (char *)v4 )
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

// Line 863: range 0000000017FE1682-0000000017FE18E1
__int64 __fastcall SummerTimeActivity::checkAddMiniHarpastum(const SummerTimeActivity *const this, uint32_t add_num)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
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
  *(_QWORD *)(v2 + 8) = "1 32 4 11 add_num:862";
  *(_QWORD *)(v2 + 16) = SummerTimeActivity::checkAddMiniHarpastum;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = add_num;
  if ( *(_DWORD *)(v2 + 32) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->mini_harpastum_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->mini_harpastum_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->mini_harpastum_);
    }
    if ( this->mini_harpastum_ && *(_DWORD *)(v2 + 32) + this->mini_harpastum_ < *(_DWORD *)(v2 + 32) )
      goto LABEL_14;
  }
  if ( *(_DWORD *)(v2 + 32) )
    goto LABEL_15;
  if ( *(_BYTE *)(((unsigned __int64)&this->mini_harpastum_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mini_harpastum_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mini_harpastum_);
  }
  if ( this->mini_harpastum_ || *(_DWORD *)(v2 + 32) + this->mini_harpastum_ <= *(_DWORD *)(v2 + 32) )
  {
LABEL_15:
    result = 0LL;
  }
  else
  {
LABEL_14:
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/summer_time_activity.cpp",
      "checkAddMiniHarpastum",
      866);
    v5 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v9,
           (const char (*)[50])"[SUMMER_TIME] mini_harpastum over flow, cur num: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->mini_harpastum_);
    v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])" ,add num: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 9172LL;
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

// Line 874: range 0000000017FE18E2-0000000017FE1AAA
__int64 __fastcall SummerTimeActivity::checkSubMiniHarpastum(const SummerTimeActivity *const this, uint32_t sub_num)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 11 sub_num:873";
  *(_QWORD *)(v2 + 16) = SummerTimeActivity::checkSubMiniHarpastum;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = sub_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->mini_harpastum_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mini_harpastum_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mini_harpastum_);
  }
  if ( this->mini_harpastum_ >= *(_DWORD *)(v2 + 32) )
  {
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/summer_time_activity.cpp",
      "checkSubMiniHarpastum",
      877);
    v5 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v9,
           (const char (*)[51])"[SUMMER_TIME] mini_harpastum not enough, cur num: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->mini_harpastum_);
    v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v6, (const char (*)[10])off_2648E1C0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 9173LL;
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

// Line 885: range 0000000017FE1AAC-0000000017FE1E7A
int32_t __cdecl SummerTimeActivity::addMiniHarpastum(
        SummerTimeActivity *const this,
        uint32_t add_num,
        const ActionReason *reason,
        bool is_notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int32_t v7; // r14d
  PlayerBasicComp *BasicComp; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  char v11; // al
  PlayerItemComp *ItemComp; // rdi
  data::ItemLimitType vptr_PlayerCompBase_high; // ecx
  uint32_t vptr_PlayerCompBase; // r8d
  int32_t result; // eax
  std::string v16; // [rsp+0h] [rbp-C0h]
  PlayerItemComp *reasona; // [rsp+8h] [rbp-B8h]
  bool is_notifya; // [rsp+10h] [rbp-B0h]
  unsigned int add_numa; // [rsp+14h] [rbp-ACh]
  SummerTimeActivity *thisa; // [rsp+18h] [rbp-A8h]
  int32_t ret; // [rsp+28h] [rbp-98h]
  unsigned int old_mini_harpastum; // [rsp+2Ch] [rbp-94h]
  std::string v23; // [rsp+30h] [rbp-90h] BYREF
  char v24[112]; // [rsp+50h] [rbp-70h] BYREF

  *(&v16._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v16._anon_0._M_allocated_capacity) = add_num;
  v16._M_string_length = (std::string::size_type)reason;
  v16._anon_0._M_local_buf[0] = is_notify;
  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 1 22 log_context_holder:892";
  *(_QWORD *)(v4 + 16) = SummerTimeActivity::addMiniHarpastum;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  ret = SummerTimeActivity::checkAddMiniHarpastum(this, add_num);
  if ( ret )
  {
    v7 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v23, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0x67u, v16);
    std::string::~string(&v23);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->mini_harpastum_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->mini_harpastum_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&thisa->mini_harpastum_);
    }
    old_mini_harpastum = thisa->mini_harpastum_;
    v9 = add_numa;
    v10 = SAFE_ADD<unsigned int,unsigned int>(old_mini_harpastum, add_numa);
    v11 = *(_BYTE *)(((unsigned __int64)&thisa->mini_harpastum_ >> 3) + 0x7FFF8000);
    if ( v11 != 0 && v11 <= 3 )
    {
      LOBYTE(v9) = v11 != 0;
      __asan_report_store4(&thisa->mini_harpastum_, v9, v10);
    }
    thisa->mini_harpastum_ = v10;
    if ( is_notifya )
      BaseActivity::notifyActivityCoinInfo(thisa);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    ItemComp = Player::getItemComp(thisa->player_);
    if ( *(_BYTE *)((((unsigned __int64)&reasona->_vptr_PlayerCompBase + 4) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)reasona + 4) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)&reasona->_vptr_PlayerCompBase + 4) >> 3)
                                                            + 0x7FFF8000) )
    {
      ItemComp = (PlayerItemComp *)((char *)&reasona->_vptr_PlayerCompBase + 4);
      __asan_report_load4((char *)&reasona->_vptr_PlayerCompBase + 4);
    }
    vptr_PlayerCompBase_high = HIDWORD(reasona->_vptr_PlayerCompBase);
    if ( *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)reasona & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) )
    {
      ItemComp = reasona;
      __asan_report_load4(reasona);
    }
    vptr_PlayerCompBase = (uint32_t)reasona->_vptr_PlayerCompBase;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->mini_harpastum_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->mini_harpastum_ >> 3) + 0x7FFF8000) <= 3 )
    {
      ItemComp = (PlayerItemComp *)&thisa->mini_harpastum_;
      __asan_report_load4(&thisa->mini_harpastum_);
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      ITEM_VIRTUAL_SUMMER_TIME_MINI_HARPASTUM,
      old_mini_harpastum,
      thisa->mini_harpastum_,
      vptr_PlayerCompBase,
      vptr_PlayerCompBase_high,
      0);
    v7 = 0;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
  }
  result = v7;
  if ( v24 == (char *)v4 )
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

// Line 906: range 0000000017FE1E7C-0000000017FE21C1
int32_t __cdecl SummerTimeActivity::subMiniHarpastum(
        SummerTimeActivity *const this,
        uint32_t sub_num,
        const SubItemReason *reason,
        bool is_notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int32_t v7; // r14d
  PlayerBasicComp *BasicComp; // rax
  PlayerItemComp *ItemComp; // rdi
  uint32_t vptr_PlayerCompBase; // esi
  int32_t result; // eax
  std::string v12; // [rsp+0h] [rbp-C0h]
  PlayerItemComp *reasona; // [rsp+8h] [rbp-B8h]
  bool is_notifya; // [rsp+10h] [rbp-B0h]
  uint32_t sub_numa; // [rsp+14h] [rbp-ACh]
  SummerTimeActivity *thisa; // [rsp+18h] [rbp-A8h]
  int32_t ret; // [rsp+28h] [rbp-98h]
  uint32_t old_mini_harpastum; // [rsp+2Ch] [rbp-94h]
  std::string v19; // [rsp+30h] [rbp-90h] BYREF
  char v20[112]; // [rsp+50h] [rbp-70h] BYREF

  *(&v12._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v12._anon_0._M_allocated_capacity) = sub_num;
  v12._M_string_length = (std::string::size_type)reason;
  v12._anon_0._M_local_buf[0] = is_notify;
  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 1 22 log_context_holder:913";
  *(_QWORD *)(v4 + 16) = SummerTimeActivity::subMiniHarpastum;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  ret = SummerTimeActivity::checkSubMiniHarpastum(this, sub_num);
  if ( ret )
  {
    v7 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v19, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0x67u, v12);
    std::string::~string(&v19);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->mini_harpastum_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->mini_harpastum_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&thisa->mini_harpastum_);
    }
    old_mini_harpastum = thisa->mini_harpastum_;
    thisa->mini_harpastum_ = old_mini_harpastum - sub_numa;
    if ( is_notifya )
      BaseActivity::notifyActivityCoinInfo(thisa);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    ItemComp = Player::getItemComp(thisa->player_);
    if ( *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)reasona & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) )
    {
      ItemComp = reasona;
      __asan_report_load4(reasona);
    }
    vptr_PlayerCompBase = (uint32_t)reasona->_vptr_PlayerCompBase;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->mini_harpastum_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->mini_harpastum_ >> 3) + 0x7FFF8000) <= 3 )
    {
      ItemComp = (PlayerItemComp *)&thisa->mini_harpastum_;
      __asan_report_load4(&thisa->mini_harpastum_);
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      ITEM_VIRTUAL_SUMMER_TIME_MINI_HARPASTUM,
      old_mini_harpastum,
      thisa->mini_harpastum_,
      vptr_PlayerCompBase,
      ITEM_LIMIT_NONE,
      0);
    v7 = 0;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
  }
  result = v7;
  if ( v20 == (char *)v4 )
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

// Line 927: range 0000000017FE21C2-0000000017FE25E2
void __cdecl SummerTimeActivity::onPostEnterSceneEvent(
        SummerTimeActivity *const this,
        const PostEnterSceneEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t OwnerUid; // r14d
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-B0h] BYREF
  char v12[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 17 cur_scene_ptr:932 64 16 19 world_scene_ptr:938";
  *(_QWORD *)(v2 + 16) = SummerTimeActivity::onPostEnterSceneEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( !BaseActivity::isFinished(this) && BaseActivity::isOpening(this, 0) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 32));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/summer_time_activity.cpp",
        "onPostEnterSceneEvent",
        935);
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
        &v11,
        (const char (*)[39])"[SUMMER_TIME] cur_scene_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v11);
    }
    else
    {
      std::dynamic_pointer_cast<PlayerWorldScene,Scene>((const std::shared_ptr<Scene> *)(v2 + 64));
      if ( std::operator==<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v2 + 64))
        || (v6 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64)),
            PlayerWorldScene::getIsLocked(v6)) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/summer_time_activity.cpp",
          "onPostEnterSceneEvent",
          941);
        common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
          &v11,
          (const char (*)[58])"[SUMMER_TIME] world_scene_ptr is null, or scene is locked");
        common::milog::MiLogStream::~MiLogStream(&v11);
      }
      else
      {
        v8 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( Scene::getSceneId((const Scene *const)v8) == 4 )
        {
          v9 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          OwnerUid = Scene::getOwnerUid((const Scene *const)v9);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          if ( OwnerUid == Player::getUid(this->player_) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->next_float_signal_id_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->next_float_signal_id_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->next_float_signal_id_);
            }
            if ( this->next_float_signal_id_ )
              SummerTimeActivity::notifyNextSignal(this, this->next_float_signal_id_, 1);
          }
        }
      }
      std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v2 + 64));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  }
  if ( v12 == (char *)v2 )
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

// Line 959: range 0000000017FE25E4-0000000017FE2B7B
void __fastcall SummerTimeActivity::notifyNextSignal(
        SummerTimeActivity *const this,
        uint32_t next_signal_id,
        bool is_enter_scene)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  ActivitySummerTimeExcelConfigMgr *p_activity_summer_time_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  proto::Vector *v10; // rax
  proto::Vector *v11; // rax
  bool is_last_trans_anchor; // [rsp+17h] [rbp-F9h]
  const data::ActivitySummerTimeFloatSignalExcelConfig *signal_config_ptr; // [rsp+18h] [rbp-F8h]
  std::shared_ptr<Config> v15; // [rsp+20h] [rbp-F0h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-E0h] BYREF
  char v17[192]; // [rsp+50h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 18 next_signal_id:958 48 12 19 next_signal_pos:960 80 40 10 notify:987";
  *(_QWORD *)(v3 + 16) = SummerTimeActivity::notifyNextSignal;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862721] = 0x4000000;
  v5[536862722] = 62194;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 32) = next_signal_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
  *(Vector3 *)(v3 + 48) = ActivitySummerTimeExcelConfigMgr::findSignalPos(
                            &v6->design_config.txt_config_mgr.activity_summer_time_config_mgr,
                            *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v15);
  if ( Vector3::isZero((const Vector3 *const)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/summer_time_activity.cpp",
      "notifyNextSignal",
      963);
    v7 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v16,
           (const char (*)[49])"[SUMMER_TIME] cannot find signal pos, signal_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v15);
    p_activity_summer_time_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr.activity_summer_time_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->last_float_signal_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_float_signal_id_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&this->last_float_signal_id_);
    }
    signal_config_ptr = data::ActivitySummerTimeExcelConfigMgrBase::findActivitySummerTimeFloatSignalExcelConfig(
                          p_activity_summer_time_config_mgr,
                          this->last_float_signal_id_);
    std::shared_ptr<Config>::~shared_ptr(&v15);
    if ( signal_config_ptr )
    {
      if ( *(char *)(((unsigned __int64)&signal_config_ptr->is_transfer_anchor >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&signal_config_ptr->is_transfer_anchor);
      is_last_trans_anchor = signal_config_ptr->is_transfer_anchor;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/summer_time_activity.cpp",
        "notifyNextSignal",
        970);
      v9 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
             &v16,
             (const char (*)[55])"[SUMMER_TIME] signal_config_ptr is nullptr, signal_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v16);
      is_last_trans_anchor = 0;
    }
    if ( is_enter_scene )
    {
      proto::SummerTimeFloatSignalPositionNotify::SummerTimeFloatSignalPositionNotify((proto::SummerTimeFloatSignalPositionNotify *const)(v3 + 80));
      proto::SummerTimeFloatSignalPositionNotify::set_float_signal_id(
        (proto::SummerTimeFloatSignalPositionNotify *const)(v3 + 80),
        *(_DWORD *)(v3 + 32));
      v10 = proto::SummerTimeFloatSignalPositionNotify::mutable_position((proto::SummerTimeFloatSignalPositionNotify *const)(v3 + 80));
      Vector3::toClient((const Vector3 *const)(v3 + 48), v10);
      proto::SummerTimeFloatSignalPositionNotify::set_is_transfer_anchor(
        (proto::SummerTimeFloatSignalPositionNotify *const)(v3 + 80),
        is_last_trans_anchor);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v3 + 80));
      proto::SummerTimeFloatSignalPositionNotify::~SummerTimeFloatSignalPositionNotify((proto::SummerTimeFloatSignalPositionNotify *const)(v3 + 80));
    }
    else
    {
      proto::SummerTimeFloatSignalUpdateNotify::SummerTimeFloatSignalUpdateNotify((proto::SummerTimeFloatSignalUpdateNotify *const)(v3 + 80));
      proto::SummerTimeFloatSignalUpdateNotify::set_float_signal_id(
        (proto::SummerTimeFloatSignalUpdateNotify *const)(v3 + 80),
        *(_DWORD *)(v3 + 32));
      v11 = proto::SummerTimeFloatSignalUpdateNotify::mutable_position((proto::SummerTimeFloatSignalUpdateNotify *const)(v3 + 80));
      Vector3::toClient((const Vector3 *const)(v3 + 48), v11);
      proto::SummerTimeFloatSignalUpdateNotify::set_is_transfer_anchor(
        (proto::SummerTimeFloatSignalUpdateNotify *const)(v3 + 80),
        is_last_trans_anchor);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v3 + 80));
      proto::SummerTimeFloatSignalUpdateNotify::~SummerTimeFloatSignalUpdateNotify((proto::SummerTimeFloatSignalUpdateNotify *const)(v3 + 80));
    }
  }
  if ( v17 == (char *)v3 )
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

// Line 996: range 0000000017FE2B7C-0000000017FE2DEB
__int64 __fastcall SummerTimeActivity::unlockFloatSignalByGm(SummerTimeActivity *const this, uint32_t signal_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  uint32_t config_id; // esi
  const data::ActivitySummerTimeFloatSignalExcelConfig *config_ptr; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 signal_id:995";
  *(_QWORD *)(v2 + 16) = SummerTimeActivity::unlockFloatSignalByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = signal_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10);
  config_ptr = data::ActivitySummerTimeExcelConfigMgrBase::findActivitySummerTimeFloatSignalExcelConfig(
                 &v5->design_config.txt_config_mgr.activity_summer_time_config_mgr,
                 *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v10);
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->config_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_ptr->config_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config_ptr->config_id);
    }
    config_id = config_ptr->config_id;
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->group_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->group_id >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&config_ptr->group_id);
    }
    result = SummerTimeActivity::unlockFloatSignal(this, config_ptr->group_id, config_id);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/summer_time_activity.cpp",
      "unlockFloatSignalByGm",
      1000);
    v6 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v11,
           (const char (*)[48])"[SUMMER_TIME] config_ptr is nullptr, signal_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
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

// Line 1007: range 0000000017FE2DEC-0000000017FE2E3E
const ActivitySummerTimeExcelConfigMgr *__cdecl SummerTimeActivity::getConfigMgr(const SummerTimeActivity *const this)
{
  ActivitySummerTimeExcelConfigMgr *p_activity_summer_time_config_mgr; // rbx
  std::shared_ptr<Config> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v3);
  p_activity_summer_time_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3)->design_config.txt_config_mgr.activity_summer_time_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(v3);
  return p_activity_summer_time_config_mgr;
};

// Line 1012: range 0000000017FE2E40-0000000017FE3078
std::string *__cdecl SummerTimeActivity::getDesc[abi:cxx11](std::string *retstr, const SummerTimeActivity *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // r14
  std::string v; // [rsp+10h] [rbp-90h] BYREF
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 7 os:1013";
  *(_QWORD *)(v2 + 16) = SummerTimeActivity::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "[SUMMER_TIME] closed:");
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, this->is_content_closed_);
  BaseActivity::getDesc[abi:cxx11](&v, this);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, &v);
  std::string::~string(&v);
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
  if ( v9 == (char *)v2 )
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

// Line 1020: range 0000000017FE307A-0000000017FE41DD
__int64 __fastcall SummerTimeActivity::restartByGroupId(SummerTimeActivity *const this, uint32_t group_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const ActivitySummerTimeExcelConfigMgr *ConfigMgr; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  bool v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  uint32_t AvatarComp; // eax
  Group *v37; // rax
  ChallengeComp *ChallengeComp; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  Scene *v42; // rax
  bool v43; // r14
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  uint32_t v57; // r15d
  const ActivitySummerTimeExcelConfigMgr *v58; // rax
  uint32_t VehicleGadgetId; // eax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v66; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeActivity::SprintBoatData> >::pointer v67; // rax
  __int64 result; // rax
  PlayerSceneComp *v69; // [rsp+8h] [rbp-1C8h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeActivity::SprintBoatData> >::_Self __y; // [rsp+20h] [rbp-1B0h] BYREF
  const data::ActivitySummerTimeRaceExcelConfig *boat_race_config_ptr; // [rsp+28h] [rbp-1A8h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+38h] [rbp-198h]
  const PointScriptConfig *point_config_ptr; // [rsp+40h] [rbp-190h]
  const PointScriptConfig *player_point_config_ptr; // [rsp+48h] [rbp-188h]
  std::shared_ptr<Player> v76; // [rsp+50h] [rbp-180h] BYREF
  common::milog::MiLogStream v77; // [rsp+60h] [rbp-170h] BYREF
  TransferReason p_reason; // [rsp+80h] [rbp-150h] BYREF
  char v79[272]; // [rsp+C0h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v79;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 4 13 scene_id:1056 48 4 13 group_id:1019 64 8 9 iter:1110 96 16 14 scene_ptr:1035 128 16 15"
                        " avatar_ptr:1042 160 16 14 group_ptr:1084 192 16 20 boat_gadget_ptr:1104";
  *(_QWORD *)(v2 + 16) = SummerTimeActivity::restartByGroupId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -202178560;
  *(_DWORD *)(v2 + 48) = group_id;
  ConfigMgr = SummerTimeActivity::getConfigMgr(this);
  boat_race_config_ptr = ActivitySummerTimeExcelConfigMgr::findRaceConfigByGroupId(ConfigMgr, *(_DWORD *)(v2 + 48));
  if ( boat_race_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    SceneComp = Player::getSceneComp(this->player_);
    if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
    {
      common::milog::MiLogStream::create(
        &v77,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/summer_time_activity.cpp",
        "restartByGroupId",
        1031);
      v11 = common::milog::MiLogStream::operator<<<SummerTimeActivity,(SummerTimeActivity*)0>(&v77, this);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        v11,
        (const char (*)[26])" player not in self scene");
      common::milog::MiLogStream::~MiLogStream(&v77);
      v9 = 512;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 96));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v77,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/summer_time_activity.cpp",
          "restartByGroupId",
          1038);
        v12 = common::milog::MiLogStream::operator<<<SummerTimeActivity,(SummerTimeActivity*)0>(&v77, this);
        common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          v12,
          (const char (*)[22])" player not on scene.");
        common::milog::MiLogStream::~MiLogStream(&v77);
        v9 = 103;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Player::getAvatarComp(this->player_);
        PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v2 + 128));
        if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 128)) )
        {
          common::milog::MiLogStream::create(
            &v77,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/summer_time_activity.cpp",
            "restartByGroupId",
            1045);
          v13 = common::milog::MiLogStream::operator<<<SummerTimeActivity,(SummerTimeActivity*)0>(&v77, this);
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v13, (const char (*)[17])" avatar nullptr.");
          common::milog::MiLogStream::~MiLogStream(&v77);
          v9 = 103;
        }
        else
        {
          v14 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( Scene::getScriptConfig(v14) )
          {
            v16 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            *(_DWORD *)(v2 + 32) = Scene::getSceneId(v16);
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v76);
            v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v76);
            v18 = LuaConfigMgr::getSceneIdByGroupId(&v17->design_config.lua_config_mgr, *(_DWORD *)(v2 + 48)) != *(_DWORD *)(v2 + 32);
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v76);
            if ( v18 )
            {
              common::milog::MiLogStream::create(
                &v77,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/summer_time_activity.cpp",
                "restartByGroupId",
                1059);
              v19 = common::milog::MiLogStream::operator<<<SummerTimeActivity,(SummerTimeActivity*)0>(&v77, this);
              v20 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      v19,
                      (const char (*)[22])" player not on group:");
              v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v20,
                      (const unsigned int *)(v2 + 48));
              v22 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v21, (const char (*)[8])" scene:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v22,
                (const unsigned int *)(v2 + 32));
              common::milog::MiLogStream::~MiLogStream(&v77);
              v9 = 531;
            }
            else
            {
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v76);
              v23 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v76);
              group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(
                                          &v23->design_config.lua_config_mgr,
                                          *(_DWORD *)(v2 + 48));
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v76);
              if ( group_script_config_ptr )
              {
                if ( *(_BYTE *)(((unsigned __int64)&boat_race_config_ptr->boat_point_config_id >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)boat_race_config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&boat_race_config_ptr->boat_point_config_id >> 3)
                                                                                      + 0x7FFF8000) )
                {
                  __asan_report_load4(&boat_race_config_ptr->boat_point_config_id);
                }
                point_config_ptr = GroupScriptConfig::findPointConfig(
                                     group_script_config_ptr,
                                     boat_race_config_ptr->boat_point_config_id);
                if ( point_config_ptr )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&boat_race_config_ptr->player_point_config_id >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&boat_race_config_ptr->player_point_config_id >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&boat_race_config_ptr->player_point_config_id);
                  }
                  player_point_config_ptr = GroupScriptConfig::findPointConfig(
                                              group_script_config_ptr,
                                              boat_race_config_ptr->player_point_config_id);
                  if ( player_point_config_ptr )
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8(&this->player_);
                    AvatarComp = (unsigned int)Player::getAvatarComp(this->player_);
                    PlayerAvatarComp::queryActiveGroup((PlayerAvatarComp *const)(v2 + 160), AvatarComp);
                    if ( std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v2 + 160)) )
                    {
                      v37 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                      ChallengeComp = Group::getChallengeComp(v37);
                      ChallengeComp::finishUnfinishedChallenges(
                        ChallengeComp,
                        CLIENT,
                        0,
                        PlayerLogBodyChallengeFinish_FinishType_STOP);
                    }
                    else
                    {
                      common::milog::MiLogStream::create(
                        &v77,
                        &common::milog::MiLogDefault::default_log_obj_,
                        1u,
                        "./src/player/activity/summer_time_activity.cpp",
                        "restartByGroupId",
                        1092);
                      v39 = common::milog::MiLogStream::operator<<<SummerTimeActivity,(SummerTimeActivity*)0>(
                              &v77,
                              this);
                      v40 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                              v39,
                              (const char (*)[8])" group:");
                      v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v40,
                              (const unsigned int *)(v2 + 48));
                      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                        v41,
                        (const char (*)[19])" already unloaded.");
                      common::milog::MiLogStream::~MiLogStream(&v77);
                    }
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8(&this->player_);
                    v69 = Player::getSceneComp(this->player_);
                    TransferReason::TransferReason(&p_reason, ENTER_REASON_SUMMER_TIME_BOAT_RESTART);
                    v42 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
                    v43 = PlayerSceneComp::jumpToScene(
                            v69,
                            v42,
                            &player_point_config_ptr->pos,
                            &player_point_config_ptr->rot,
                            0,
                            &p_reason) == 0;
                    TransferReason::~TransferReason(&p_reason);
                    if ( v43 )
                    {
                      common::milog::MiLogStream::create(
                        &v77,
                        &common::milog::MiLogDefault::default_log_obj_,
                        1u,
                        "./src/player/activity/summer_time_activity.cpp",
                        "restartByGroupId",
                        1098);
                      v44 = common::milog::MiLogStream::operator<<<SummerTimeActivity,(SummerTimeActivity*)0>(
                              &v77,
                              this);
                      v45 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                              v44,
                              (const char (*)[26])" move player to scene_id:");
                      v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v45,
                              (const unsigned int *)(v2 + 32));
                      v47 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                              v46,
                              (const char (*)[6])" pos:");
                      v48 = operator<<(v47, &player_point_config_ptr->pos);
                      v49 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                              v48,
                              (const char (*)[6])" rot:");
                      operator<<(v49, &player_point_config_ptr->rot);
                    }
                    else
                    {
                      common::milog::MiLogStream::create(
                        &v77,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/player/activity/summer_time_activity.cpp",
                        "restartByGroupId",
                        1102);
                      v50 = common::milog::MiLogStream::operator<<<SummerTimeActivity,(SummerTimeActivity*)0>(
                              &v77,
                              this);
                      v51 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                              v50,
                              (const char (*)[26])" move player to scene_id:");
                      v52 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v51,
                              (const unsigned int *)(v2 + 32));
                      v53 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                              v52,
                              (const char (*)[6])" pos:");
                      v54 = operator<<(v53, &player_point_config_ptr->pos);
                      v55 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                              v54,
                              (const char (*)[6])" rot:");
                      v56 = operator<<(v55, &player_point_config_ptr->rot);
                      common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v56, (const char (*)[9])" failed.");
                    }
                    common::milog::MiLogStream::~MiLogStream(&v77);
                    v57 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8(&this->player_);
                    toPtr<Player,Player>((Player *)&v76);
                    v58 = SummerTimeActivity::getConfigMgr(this);
                    VehicleGadgetId = ActivitySummerTimeExcelConfigMgr::getVehicleGadgetId(v58);
                    Scene::createPlayerVehicle(
                      (Scene *const)(v2 + 192),
                      v57,
                      (const Vector3 *)VehicleGadgetId,
                      &point_config_ptr->pos,
                      (PlayerPtr *)&point_config_ptr->rot,
                      (proto::CreateGadgetReason)&v76,
                      0);
                    std::shared_ptr<Player>::~shared_ptr(&v76);
                    if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v2 + 192)) )
                    {
                      common::milog::MiLogStream::create(
                        &v77,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/player/activity/summer_time_activity.cpp",
                        "restartByGroupId",
                        1107);
                      v60 = common::milog::MiLogStream::operator<<<SummerTimeActivity,(SummerTimeActivity*)0>(
                              &v77,
                              this);
                      v61 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                              v60,
                              (const char (*)[26])" create vehicle failed @:");
                      v62 = operator<<(v61, &point_config_ptr->pos);
                      v63 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v62, (const char (*)[3])", ");
                      v64 = operator<<(v63, &point_config_ptr->rot);
                      v65 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
                              v64,
                              (const char (*)[5])" in:");
                      v66 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
                      common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v65, v66);
                      common::milog::MiLogStream::~MiLogStream(&v77);
                    }
                    *(std::map<unsigned int,SummerTimeActivity::SprintBoatData>::iterator *)(v2 + 64) = std::map<unsigned int,SummerTimeActivity::SprintBoatData>::find(&this->sprint_boat_data_map_, &boat_race_config_ptr->id);
                    __y._M_node = std::map<unsigned int,SummerTimeActivity::SprintBoatData>::end(&this->sprint_boat_data_map_)._M_node;
                    if ( std::operator!=(
                           (const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeActivity::SprintBoatData> >::_Self *)(v2 + 64),
                           &__y) )
                    {
                      v67 = std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeActivity::SprintBoatData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeActivity::SprintBoatData> > *const)(v2 + 64));
                      SummerTimeActivity::SprintBoatData::resetScoreData(&v67->second);
                    }
                    v9 = 0;
                    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 192));
                    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 160));
                  }
                  else
                  {
                    common::milog::MiLogStream::create(
                      &v77,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/activity/summer_time_activity.cpp",
                      "restartByGroupId",
                      1080);
                    v32 = common::milog::MiLogStream::operator<<<SummerTimeActivity,(SummerTimeActivity*)0>(&v77, this);
                    v33 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                            v32,
                            (const char (*)[22])" player point config:");
                    v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v33,
                            &boat_race_config_ptr->player_point_config_id);
                    v35 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                            v34,
                            (const char (*)[19])" NOT found @group:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v35,
                      (const unsigned int *)(v2 + 48));
                    common::milog::MiLogStream::~MiLogStream(&v77);
                    v9 = 5;
                  }
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v77,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/summer_time_activity.cpp",
                    "restartByGroupId",
                    1073);
                  v28 = common::milog::MiLogStream::operator<<<SummerTimeActivity,(SummerTimeActivity*)0>(&v77, this);
                  v29 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                          v28,
                          (const char (*)[20])" boat point config:");
                  v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v29,
                          &boat_race_config_ptr->boat_point_config_id);
                  v31 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                          v30,
                          (const char (*)[19])" NOT found @group:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v31,
                    (const unsigned int *)(v2 + 48));
                  common::milog::MiLogStream::~MiLogStream(&v77);
                  v9 = 5;
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v77,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/summer_time_activity.cpp",
                  "restartByGroupId",
                  1066);
                v24 = common::milog::MiLogStream::operator<<<SummerTimeActivity,(SummerTimeActivity*)0>(&v77, this);
                v25 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                        v24,
                        (const char (*)[37])" group script config nullptr @group ");
                v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v25,
                        (const unsigned int *)(v2 + 48));
                v27 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v26, (const char (*)[9])" @scene ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v27,
                  (const unsigned int *)(v2 + 32));
                common::milog::MiLogStream::~MiLogStream(&v77);
                v9 = 5;
              }
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v77,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/summer_time_activity.cpp",
              "restartByGroupId",
              1052);
            v15 = common::milog::MiLogStream::operator<<<SummerTimeActivity,(SummerTimeActivity*)0>(&v77, this);
            common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              v15,
              (const char (*)[31])" get scene ScriptConfig fails.");
            common::milog::MiLogStream::~MiLogStream(&v77);
            v9 = 5;
          }
        }
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 128));
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 96));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v77,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/summer_time_activity.cpp",
      "restartByGroupId",
      1024);
    v6 = common::milog::MiLogStream::operator<<<SummerTimeActivity,(SummerTimeActivity*)0>(&v77, this);
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])" group:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v8, (const char (*)[21])" not in race config.");
    common::milog::MiLogStream::~MiLogStream(&v77);
    v9 = 5;
  }
  result = v9;
  if ( v79 == (char *)v2 )
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
  return result;
};

// Line 1120: range 0000000017FE41DE-0000000017FE4FD8
void __cdecl SummerTimeActivity::onMarkedChallengeEvent(
        SummerTimeActivity *const this,
        const LuaMarkedChallengeEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  uint32_t value; // ecx
  char v11; // dl
  __int64 v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned int time_factor; // edx
  unsigned int gold_factor; // ecx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  uint32_t v31; // ecx
  char v32; // dl
  char *v33; // rsi
  __int64 v34; // rdx
  common::milog::MiLogStream *v35; // rax
  int v36; // r14d
  PlayerEventComp *EventComp; // r14
  const std::vector<unsigned int> *p_medal_watcher; // r8
  int group_id; // edi
  uint32_t reason; // r8d
  uint32_t v41; // ecx
  int v42; // edi
  data::ChallengeEventMarkType *p_event_mark; // rax
  __int64 v44; // rsi
  uint32_t v45; // ecx
  char v46; // dl
  __int64 v47; // rdx
  __int64 v48; // rsi
  uint32_t limit; // ecx
  char v50; // dl
  __int64 v51; // rdx
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
  const ActivitySummerTimeExcelConfigMgr *config_mgr; // [rsp+18h] [rbp-F8h]
  const data::ActivitySummerTimeRaceExcelConfig *race_config_ptr; // [rsp+20h] [rbp-F0h]
  SummerTimeActivity::SprintBoatData *sprint_boat_data; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v68; // [rsp+40h] [rbp-D0h] BYREF
  char v69[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v69;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 16 time_points:1138 64 4 18 gather_points:1139 80 4 18 result_points:1140 96 16 14 event_ptr:1146";
  *(_QWORD *)(v2 + 16) = SummerTimeActivity::onMarkedChallengeEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -202178560;
  config_mgr = SummerTimeActivity::getConfigMgr(this);
  if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->group_id);
  }
  race_config_ptr = ActivitySummerTimeExcelConfigMgr::findRaceConfigByGroupId(config_mgr, event->group_id);
  if ( race_config_ptr )
  {
    sprint_boat_data = std::map<unsigned int,SummerTimeActivity::SprintBoatData>::operator[](
                         &this->sprint_boat_data_map_,
                         &race_config_ptr->id);
    if ( *(_BYTE *)(((unsigned __int64)&event->event_mark >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->event_mark >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->event_mark);
    }
    if ( event->event_mark == SUMMER_TIME_SPRINT_BOAT_TIME )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->is_success >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)event + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_success >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&event->is_success);
      }
      if ( !event->is_success )
        goto LABEL_36;
      v8 = ((_BYTE)sprint_boat_data + 4) & 7;
      v9 = (*(_BYTE *)(((unsigned __int64)&sprint_boat_data->is_touched >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&sprint_boat_data->is_touched >> 3) + 0x7FFF8000));
      if ( (_BYTE)v9 )
        __asan_report_store1(&sprint_boat_data->is_touched, v8, v9);
      sprint_boat_data->is_touched = 1;
      if ( *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event->value);
      }
      value = event->value;
      v11 = *(_BYTE *)(((unsigned __int64)&sprint_boat_data->left_time_seconds >> 3) + 0x7FFF8000);
      LOBYTE(v8) = v11 != 0;
      v12 = (v11 != 0) & (unsigned __int8)((char)((((_BYTE)sprint_boat_data + 16) & 7) + 3) >= v11);
      if ( (_BYTE)v12 )
        __asan_report_store4(&sprint_boat_data->left_time_seconds, v8, v12);
      sprint_boat_data->left_time_seconds = value;
      common::milog::MiLogStream::create(
        &v68,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/summer_time_activity.cpp",
        "onMarkedChallengeEvent",
        1136);
      v13 = common::milog::MiLogStream::operator<<<SummerTimeActivity,(SummerTimeActivity*)0>(&v68, this);
      v14 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v13,
              (const char (*)[20])" sprint boat group:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &event->group_id);
      v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v15, (const char (*)[13])", left_time:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &event->value);
      v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v17, (const char (*)[14])" badge_point:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &sprint_boat_data->gather_points);
      common::milog::MiLogStream::~MiLogStream(&v68);
      if ( *(_BYTE *)(((unsigned __int64)&race_config_ptr->time_factor >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&race_config_ptr->time_factor >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&race_config_ptr->time_factor);
      }
      time_factor = race_config_ptr->time_factor;
      if ( *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event->value);
      }
      *(_DWORD *)(v2 + 48) = SAFE_MULTIPLY<unsigned int,unsigned int>(event->value, time_factor);
      if ( *(_BYTE *)(((unsigned __int64)&race_config_ptr->gold_factor >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)race_config_ptr + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&race_config_ptr->gold_factor >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&race_config_ptr->gold_factor);
      }
      gold_factor = race_config_ptr->gold_factor;
      if ( *(_BYTE *)(((unsigned __int64)&sprint_boat_data->gather_points >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)sprint_boat_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&sprint_boat_data->gather_points >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&sprint_boat_data->gather_points);
      }
      *(_DWORD *)(v2 + 64) = SAFE_MULTIPLY<unsigned int,unsigned int>(sprint_boat_data->gather_points, gold_factor);
      *(_DWORD *)(v2 + 80) = SAFE_ADD<unsigned int,unsigned int>(*(_DWORD *)(v2 + 48), *(_DWORD *)(v2 + 64));
      common::milog::MiLogStream::create(
        &v68,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/summer_time_activity.cpp",
        "onMarkedChallengeEvent",
        1141);
      v21 = common::milog::MiLogStream::operator<<<SummerTimeActivity,(SummerTimeActivity*)0>(&v68, this);
      v22 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v21, (const char (*)[14])" time_factor:");
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &race_config_ptr->time_factor);
      v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v23, (const char (*)[16])"-> time_result:");
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v2 + 48));
      v26 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v25, (const char (*)[14])" gold_factor:");
      v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &race_config_ptr->gold_factor);
      v28 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v27,
              (const char (*)[18])"-> gather_result:");
      v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v2 + 64));
      v30 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v29,
              (const char (*)[19])" ==> final_points:");
      v33 = (char *)(v2 + 80);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v2 + 80));
      common::milog::MiLogStream::~MiLogStream(&v68);
      v31 = *(_DWORD *)(v2 + 80);
      v32 = *(_BYTE *)(((unsigned __int64)&sprint_boat_data->new_score >> 3) + 0x7FFF8000);
      LOBYTE(v33) = v32 != 0;
      v34 = (v32 != 0) & (unsigned __int8)((char)((((_BYTE)sprint_boat_data + 20) & 7) + 3) >= v32);
      if ( (_BYTE)v34 )
        __asan_report_store4(&sprint_boat_data->new_score, v33, v34);
      sprint_boat_data->new_score = v31;
      common::tools::perf::make_shared<GroupSummerTimeSprintBoatReachPointsEvent,unsigned int const&,unsigned int &>(
        (const unsigned int *)(v2 + 96),
        &event->group_id,
        (const unsigned int *)(v2 + 80),
        &event->group_id);
      if ( std::operator==<GroupSummerTimeSprintBoatReachPointsEvent>(
             0LL,
             (const std::shared_ptr<GroupSummerTimeSprintBoatReachPointsEvent> *)(v2 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v68,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/summer_time_activity.cpp",
          "onMarkedChallengeEvent",
          1149);
        v35 = common::milog::MiLogStream::operator<<<SummerTimeActivity,(SummerTimeActivity*)0>(&v68, this);
        common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
          v35,
          (const char (*)[67])" make GroupSummerTimeSprintBoatReachPointsEvent shared ptr failed!");
        common::milog::MiLogStream::~MiLogStream(&v68);
        v36 = 0;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        EventComp = Player::getEventComp(this->player_);
        std::shared_ptr<BaseEvent>::shared_ptr<GroupSummerTimeSprintBoatReachPointsEvent,void>(
          &p_event_ptr,
          (const std::shared_ptr<GroupSummerTimeSprintBoatReachPointsEvent> *)(v2 + 96));
        PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
        std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
        v36 = 1;
      }
      std::shared_ptr<GroupSummerTimeSprintBoatReachPointsEvent>::~shared_ptr((std::shared_ptr<GroupSummerTimeSprintBoatReachPointsEvent> *const)(v2 + 96));
      if ( v36 == 1 )
      {
LABEL_36:
        p_medal_watcher = &race_config_ptr->medal_watcher;
        if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&event->group_id);
        }
        group_id = event->group_id;
        if ( *(_BYTE *)(((unsigned __int64)&event->is_success >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)event + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_success >> 3) + 0x7FFF8000) )
        {
          group_id = (_DWORD)event + 36;
          __asan_report_load1(&event->is_success);
        }
        SummerTimeActivity::notifySprintBoatSettle(this, event->is_success, group_id, sprint_boat_data, p_medal_watcher);
        BaseActivity::notifyClientData(this, 0);
        if ( *(_BYTE *)(((unsigned __int64)&event->reason >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&event->reason >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&event->reason);
        }
        reason = event->reason;
        if ( *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&event->value);
        }
        v41 = event->value;
        if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&event->group_id);
        }
        v42 = event->group_id;
        if ( *(_BYTE *)(((unsigned __int64)&event->is_success >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)event + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_success >> 3) + 0x7FFF8000) )
        {
          v42 = (_DWORD)event + 36;
          __asan_report_load1(&event->is_success);
        }
        SummerTimeActivity::writeSettleStatLog(this, event->is_success, v42, v41, sprint_boat_data, reason);
      }
    }
    else
    {
      p_event_mark = &event->event_mark;
      v44 = (((_BYTE)event + 28) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&event->event_mark >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->event_mark >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_event_mark);
      }
      if ( event->event_mark == SUMMER_TIME_SPRINT_BOAT_GATHER_POINT )
      {
        if ( *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&event->value);
        }
        v45 = event->value;
        v46 = *(_BYTE *)(((unsigned __int64)&sprint_boat_data->gather_points >> 3) + 0x7FFF8000);
        LOBYTE(v44) = v46 != 0;
        v47 = (v46 != 0) & (unsigned __int8)((char)((((_BYTE)sprint_boat_data + 8) & 7) + 3) >= v46);
        if ( (_BYTE)v47 )
          __asan_report_store4(&sprint_boat_data->gather_points, v44, v47);
        sprint_boat_data->gather_points = v45;
        v48 = (((_BYTE)event + 44) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&event->limit >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)event + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->limit >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&event->limit);
        }
        limit = event->limit;
        v50 = *(_BYTE *)(((unsigned __int64)&sprint_boat_data->gather_limit >> 3) + 0x7FFF8000);
        LOBYTE(v48) = v50 != 0;
        v51 = (v50 != 0) & (unsigned __int8)((char)((((_BYTE)sprint_boat_data + 12) & 7) + 3) >= v50);
        if ( (_BYTE)v51 )
          __asan_report_store4(&sprint_boat_data->gather_limit, v48, v51);
        sprint_boat_data->gather_limit = limit;
        common::milog::MiLogStream::create(
          &v68,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/summer_time_activity.cpp",
          "onMarkedChallengeEvent",
          1165);
        v52 = common::milog::MiLogStream::operator<<<SummerTimeActivity,(SummerTimeActivity*)0>(&v68, this);
        v53 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v52, (const char (*)[8])" group:");
        v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, &event->group_id);
        v55 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v54,
                (const char (*)[19])", gathered points=");
        v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, &event->value);
        v57 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v56, (const char (*)[8])"/limit=");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, &event->limit);
        common::milog::MiLogStream::~MiLogStream(&v68);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v68,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/summer_time_activity.cpp",
          "onMarkedChallengeEvent",
          1169);
        v58 = common::milog::MiLogStream::operator<<<SummerTimeActivity,(SummerTimeActivity*)0>(&v68, this);
        v59 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v58,
                (const char (*)[18])" unrelated group:");
        v60 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, &event->group_id);
        v61 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v60, (const char (*)[8])" event:");
        common::milog::MiLogStream::operator<<<data::ChallengeEventMarkType,(data::ChallengeEventMarkType*)0>(
          v61,
          &event->event_mark);
        common::milog::MiLogStream::~MiLogStream(&v68);
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v68,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/summer_time_activity.cpp",
      "onMarkedChallengeEvent",
      1125);
    v5 = common::milog::MiLogStream::operator<<<SummerTimeActivity,(SummerTimeActivity*)0>(&v68, this);
    v6 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v5, (const char (*)[8])" group:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &event->group_id);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      v7,
      (const char (*)[28])" not relate to sprint boat.");
    common::milog::MiLogStream::~MiLogStream(&v68);
  }
  if ( v69 == (char *)v2 )
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

// Line 1174: range 0000000017FE4FDA-0000000017FE585A
void __fastcall SummerTimeActivity::notifySprintBoatSettle(
        SummerTimeActivity *const this,
        bool is_success,
        uint32_t group_id,
        unsigned __int64 sprint_boat_data,
        const std::vector<unsigned int> *medal_watcher_vec)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  uint32_t v8; // ecx
  std::vector<unsigned int>::const_reference v9; // rax
  _DWORD *v10; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
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
  uint32_t v23; // ecx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  uint32_t max_watcher_progress; // [rsp+2Ch] [rbp-134h]
  uint32_t max_medal_index; // [rsp+30h] [rbp-130h]
  uint32_t i; // [rsp+34h] [rbp-12Ch]
  const data::WatcherConfig *watcher_config_ptr; // [rsp+38h] [rbp-128h]
  std::shared_ptr<Config> v33; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v34; // [rsp+50h] [rbp-110h] BYREF
  common::milog::MiLogStream v35; // [rsp+70h] [rbp-F0h] BYREF
  char v36[208]; // [rsp+90h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 48 4 15 watcher_id:1192 64 4 13 group_id:1173 80 48 11 notify:1175";
  *(_QWORD *)(v5 + 16) = SummerTimeActivity::notifySprintBoatSettle;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = 61956;
  v7[536862724] = -202116109;
  *(_DWORD *)(v5 + 64) = group_id;
  proto::SummerTimeSprintBoatSettleNotify::SummerTimeSprintBoatSettleNotify((proto::SummerTimeSprintBoatSettleNotify *const)(v5 + 80));
  proto::SummerTimeSprintBoatSettleNotify::set_is_success(
    (proto::SummerTimeSprintBoatSettleNotify *const)(v5 + 80),
    is_success);
  proto::SummerTimeSprintBoatSettleNotify::set_group_id(
    (proto::SummerTimeSprintBoatSettleNotify *const)(v5 + 80),
    *(_DWORD *)(v5 + 64));
  if ( *(_BYTE *)(((sprint_boat_data + 16) >> 3) + 0x7FFF8000) != 0
    && (char)(((sprint_boat_data + 16) & 7) + 3) >= *(_BYTE *)(((sprint_boat_data + 16) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(sprint_boat_data + 16);
  }
  proto::SummerTimeSprintBoatSettleNotify::set_left_time(
    (proto::SummerTimeSprintBoatSettleNotify *const)(v5 + 80),
    *(_DWORD *)(sprint_boat_data + 16));
  if ( *(_BYTE *)(((sprint_boat_data + 8) >> 3) + 0x7FFF8000) != 0
    && (char)(((sprint_boat_data + 8) & 7) + 3) >= *(_BYTE *)(((sprint_boat_data + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(sprint_boat_data + 8);
  }
  proto::SummerTimeSprintBoatSettleNotify::set_collect_num(
    (proto::SummerTimeSprintBoatSettleNotify *const)(v5 + 80),
    *(_DWORD *)(sprint_boat_data + 8));
  if ( *(_BYTE *)(((sprint_boat_data + 12) >> 3) + 0x7FFF8000) != 0
    && (char)(((sprint_boat_data + 12) & 7) + 3) >= *(_BYTE *)(((sprint_boat_data + 12) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(sprint_boat_data + 12);
  }
  proto::SummerTimeSprintBoatSettleNotify::set_total_num(
    (proto::SummerTimeSprintBoatSettleNotify *const)(v5 + 80),
    *(_DWORD *)(sprint_boat_data + 12));
  if ( *(_BYTE *)((sprint_boat_data >> 3) + 0x7FFF8000) != 0
    && (char)((sprint_boat_data & 7) + 3) >= *(_BYTE *)((sprint_boat_data >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(sprint_boat_data);
  }
  v8 = *(_DWORD *)sprint_boat_data;
  if ( *(_BYTE *)(((sprint_boat_data + 20) >> 3) + 0x7FFF8000) != 0
    && (char)(((sprint_boat_data + 20) & 7) + 3) >= *(_BYTE *)(((sprint_boat_data + 20) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(sprint_boat_data + 20);
  }
  if ( v8 < *(_DWORD *)(sprint_boat_data + 20) )
  {
    *(_DWORD *)sprint_boat_data = *(_DWORD *)(sprint_boat_data + 20);
    proto::SummerTimeSprintBoatSettleNotify::set_is_new_record(
      (proto::SummerTimeSprintBoatSettleNotify *const)(v5 + 80),
      1);
  }
  if ( *(_BYTE *)(((sprint_boat_data + 20) >> 3) + 0x7FFF8000) != 0
    && (char)(((sprint_boat_data + 20) & 7) + 3) >= *(_BYTE *)(((sprint_boat_data + 20) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(sprint_boat_data + 20);
  }
  proto::SummerTimeSprintBoatSettleNotify::set_score(
    (proto::SummerTimeSprintBoatSettleNotify *const)(v5 + 80),
    *(_DWORD *)(sprint_boat_data + 20));
  max_watcher_progress = 0;
  max_medal_index = 0;
  for ( i = 0; i < std::vector<unsigned int>::size(medal_watcher_vec); ++i )
  {
    v9 = std::vector<unsigned int>::operator[](medal_watcher_vec, i);
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    *(_DWORD *)(v5 + 48) = *v10;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v33);
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33);
    watcher_config_ptr = WatcherExcelConfigMgr::findWatcherConfig(
                           &v11->design_config.txt_config_mgr.watcher_config_mgr,
                           *(_DWORD *)(v5 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v33);
    if ( watcher_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/summer_time_activity.cpp",
        "notifySprintBoatSettle",
        1199);
      v15 = common::milog::MiLogStream::operator<<<SummerTimeActivity,(SummerTimeActivity*)0>(&v35, this);
      v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])off_2648F340);
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v16,
              (const unsigned int *)(sprint_boat_data + 20));
      v18 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v17, (const char (*)[10])off_2648F380);
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &watcher_config_ptr->progress);
      v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v19, (const char (*)[11])" @watcher:");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v5 + 48));
      v22 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v21, (const char (*)[9])" @group:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v5 + 64));
      common::milog::MiLogStream::~MiLogStream(&v35);
      if ( *(_BYTE *)(((sprint_boat_data + 20) >> 3) + 0x7FFF8000) != 0
        && (char)(((sprint_boat_data + 20) & 7) + 3) >= *(_BYTE *)(((sprint_boat_data + 20) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(sprint_boat_data + 20);
      }
      v23 = *(_DWORD *)(sprint_boat_data + 20);
      if ( *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->progress >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->progress >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&watcher_config_ptr->progress);
      }
      if ( v23 >= watcher_config_ptr->progress )
      {
        if ( *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->progress >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->progress >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&watcher_config_ptr->progress);
        }
        if ( max_watcher_progress < watcher_config_ptr->progress )
        {
          max_watcher_progress = watcher_config_ptr->progress;
          max_medal_index = i + 1;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/summer_time_activity.cpp",
        "notifySprintBoatSettle",
        1196);
      v12 = common::milog::MiLogStream::operator<<<SummerTimeActivity,(SummerTimeActivity*)0>(&v35, this);
      v13 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v12,
              (const char (*)[21])" config for watcher:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v5 + 48));
      common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])off_2648F300);
      common::milog::MiLogStream::~MiLogStream(&v35);
    }
  }
  proto::SummerTimeSprintBoatSettleNotify::set_medal_level(
    (proto::SummerTimeSprintBoatSettleNotify *const)(v5 + 80),
    max_medal_index);
  common::milog::MiLogStream::create(
    &v34,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/summer_time_activity.cpp",
    "notifySprintBoatSettle",
    1211);
  v24 = common::milog::MiLogStream::operator<<<SummerTimeActivity,(SummerTimeActivity*)0>(&v34, this);
  v25 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v24, (const char (*)[14])" settle msg: ");
  google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v35, (google::protobuf::Message *)(v5 + 80));
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, (const std::string *)&v35);
  std::string::~string(&v35);
  common::milog::MiLogStream::~MiLogStream(&v34);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v5 + 80));
  proto::SummerTimeSprintBoatSettleNotify::~SummerTimeSprintBoatSettleNotify((proto::SummerTimeSprintBoatSettleNotify *const)(v5 + 80));
  if ( v36 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1216: range 0000000017FE585C-0000000017FE5F4E
// local variable allocation has failed, the output may be wrong!
void __cdecl SummerTimeActivity::onChallengeBeginEvent(
        SummerTimeActivity *const this,
        const ChallengeBeginEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // ecx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeActivity::SprintBoatData> >::pointer v9; // rax
  PlayerBasicComp *BasicComp; // rax
  PlayerBasicComp *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeSprintBoatBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeSprintBoatBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeSprintBoatBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeSprintBoatBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  Player *v16; // r14
  std::string eventa; // [rsp+0h] [rbp-140h] OVERLAPPED BYREF
  const ActivitySummerTimeExcelConfigMgr *config_mgr; // [rsp+20h] [rbp-120h]
  const data::ActivitySummerTimeRaceExcelConfig *race_config_ptr; // [rsp+28h] [rbp-118h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-100h] BYREF
  std::string __lhs; // [rsp+50h] [rbp-F0h] BYREF
  common::milog::MiLogStream v23; // [rsp+70h] [rbp-D0h] BYREF
  char v24[176]; // [rsp+90h] [rbp-B0h] BYREF

  eventa._M_string_length = (std::string::size_type)this;
  eventa._M_dataplus._M_p = (std::string::pointer)event;
  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 23 log_context_holder:1240 64 8 9 iter:1232 96 16 12 log_ptr:1241";
  *(_QWORD *)(v2 + 16) = SummerTimeActivity::onChallengeBeginEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 32) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 32) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(eventa._M_dataplus._M_p + 32);
  }
  v5 = *((_DWORD *)eventa._M_dataplus._M_p + 8);
  if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 24) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 24) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(eventa._M_dataplus._M_p + 24);
  }
  if ( v5 == *((_DWORD *)eventa._M_dataplus._M_p + 6) )
  {
    config_mgr = SummerTimeActivity::getConfigMgr((const SummerTimeActivity *const)eventa._M_string_length);
    if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 36) >> 3) + 0x7FFF8000) != 0
      && (char)(((LOBYTE(eventa._M_dataplus._M_p) + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p
                                                                                                  + 36) >> 3)
                                                                              + 0x7FFF8000) )
    {
      __asan_report_load4(eventa._M_dataplus._M_p + 36);
    }
    race_config_ptr = ActivitySummerTimeExcelConfigMgr::findRaceConfigByGroupId(
                        config_mgr,
                        *((_DWORD *)eventa._M_dataplus._M_p + 9));
    if ( race_config_ptr )
    {
      *(std::map<unsigned int,SummerTimeActivity::SprintBoatData>::iterator *)(v2 + 64) = std::map<unsigned int,SummerTimeActivity::SprintBoatData>::find(
                                                                                            (std::map<unsigned int,SummerTimeActivity::SprintBoatData> *const)(eventa._M_string_length + 984),
                                                                                            &race_config_ptr->id);
      *((std::map<unsigned int,SummerTimeActivity::SprintBoatData>::iterator *)&eventa._anon_0._M_allocated_capacity + 1) = std::map<unsigned int,SummerTimeActivity::SprintBoatData>::end((std::map<unsigned int,SummerTimeActivity::SprintBoatData> *const)(eventa._M_string_length + 984));
      if ( std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeActivity::SprintBoatData> >::_Self *)(v2 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeActivity::SprintBoatData> >::_Self *)&eventa._anon_0._M_allocated_capacity
           + 1) )
      {
        v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeActivity::SprintBoatData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeActivity::SprintBoatData> > *const)(v2 + 64));
        SummerTimeActivity::SprintBoatData::resetScoreData(&v9->second);
      }
      if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(eventa._M_string_length + 24);
      BasicComp = Player::getBasicComp(*(Player *const *)(eventa._M_string_length + 24));
      PlayerBasicComp::getNextTransNo[abi:cxx11](&__lhs, BasicComp);
      std::operator+<char>((std::string *)&v23, &__lhs, "_SummerTimeActivityBoatSprint");
      std::string::operator=(eventa._M_string_length + 1208, &v23);
      std::string::~string(&v23);
      std::string::~string(&__lhs);
      if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(eventa._M_string_length + 24);
      v11 = Player::getBasicComp(*(Player *const *)(eventa._M_string_length + 24));
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v23, v11);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xD98u, eventa);
      std::string::~string(&v23);
      common::tools::perf::make_shared<proto_log::PlayerLogBodySummerTimeSprintBoatBegin>();
      v12 = std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeSprintBoatBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeSprintBoatBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( *(_BYTE *)(((eventa._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((eventa._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(eventa._M_string_length + 32);
      }
      proto_log::PlayerLogBodySummerTimeSprintBoatBegin::set_activity_id(v12, *(_DWORD *)(eventa._M_string_length + 32));
      v13 = std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeSprintBoatBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeSprintBoatBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( *(_BYTE *)(((eventa._M_string_length + 36) >> 3) + 0x7FFF8000) != 0
        && (char)(((LOBYTE(eventa._M_string_length) + 36) & 7) + 3) >= *(_BYTE *)(((eventa._M_string_length + 36) >> 3)
                                                                                + 0x7FFF8000) )
      {
        __asan_report_load4(eventa._M_string_length + 36);
      }
      proto_log::PlayerLogBodySummerTimeSprintBoatBegin::set_schedule_id(v13, *(_DWORD *)(eventa._M_string_length + 36));
      v14 = std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeSprintBoatBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeSprintBoatBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 36) >> 3) + 0x7FFF8000) != 0
        && (char)(((LOBYTE(eventa._M_dataplus._M_p) + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 36) >> 3)
                                                                                + 0x7FFF8000) )
      {
        __asan_report_load4(eventa._M_dataplus._M_p + 36);
      }
      proto_log::PlayerLogBodySummerTimeSprintBoatBegin::set_group_id(v14, *((_DWORD *)eventa._M_dataplus._M_p + 9));
      v15 = std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeSprintBoatBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeSprintBoatBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      proto_log::PlayerLogBodySummerTimeSprintBoatBegin::set_transaction_no(
        v15,
        (const std::string *)(eventa._M_string_length + 1208));
      if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(eventa._M_string_length + 24);
      v16 = *(Player **)(eventa._M_string_length + 24);
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodySummerTimeSprintBoatBegin,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodySummerTimeSprintBoatBegin> *)(v2 + 96));
      Player::printStatLog(v16, &p_body_ptr, &p_body_ext_ptr, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
      std::shared_ptr<proto_log::PlayerLogBodySummerTimeSprintBoatBegin>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodySummerTimeSprintBoatBegin> *const)(v2 + 96));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/summer_time_activity.cpp",
        "onChallengeBeginEvent",
        1228);
      v6 = common::milog::MiLogStream::operator<<<SummerTimeActivity,(SummerTimeActivity*)0>(
             &v23,
             (const SummerTimeActivity *)eventa._M_string_length);
      v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])" group:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
             v7,
             (const unsigned int *)eventa._M_dataplus._M_p + 9);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        v8,
        (const char (*)[28])" not relate to sprint boat.");
      common::milog::MiLogStream::~MiLogStream(&v23);
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
};

// Line 1250: range 0000000017FE5F50-0000000017FE643B
void __cdecl SummerTimeActivity::writeSettleStatLog(
        const SummerTimeActivity *const this,
        bool is_success,
        uint32_t group_id,
        uint32_t left_time,
        const SummerTimeActivity::SprintBoatData *daily_data,
        uint32_t reason)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeSprintBoatSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeSprintBoatSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeSprintBoatSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  int v13; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeSprintBoatSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeSprintBoatSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeSprintBoatSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeSprintBoatSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeSprintBoatSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  Player *player; // r14
  std::string daily_dataa; // [rsp+0h] [rbp-100h]
  const SummerTimeActivity::SprintBoatData *daily_datab; // [rsp+0h] [rbp-100h]
  uint32_t reasona; // [rsp+8h] [rbp-F8h]
  uint32_t left_timea; // [rsp+Ch] [rbp-F4h]
  _BYTE group_ida[5]; // [rsp+10h] [rbp-F0h]
  const SummerTimeActivity *thisa; // [rsp+18h] [rbp-E8h]
  uint32_t result_type; // [rsp+2Ch] [rbp-D4h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-C0h] BYREF
  std::string v29; // [rsp+50h] [rbp-B0h] BYREF
  char v30[144]; // [rsp+70h] [rbp-90h] BYREF

  *(&daily_dataa._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  *(_DWORD *)daily_dataa._anon_0._M_local_buf = group_id;
  HIDWORD(daily_dataa._M_string_length) = left_time;
  daily_dataa._M_dataplus._M_p = (std::string::pointer)daily_data;
  LODWORD(daily_dataa._M_string_length) = reason;
  daily_dataa._anon_0._M_local_buf[4] = is_success;
  v6 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 1 23 log_context_holder:1251 64 16 12 log_ptr:1252";
  *(_QWORD *)(v6 + 16) = SummerTimeActivity::writeSettleStatLog;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v29, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v6 + 48), 0xD99u, daily_dataa);
  std::string::~string(&v29);
  common::tools::perf::make_shared<proto_log::PlayerLogBodySummerTimeSprintBoatSettle>();
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeSprintBoatSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeSprintBoatSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&thisa->activity_id_);
  }
  proto_log::PlayerLogBodySummerTimeSprintBoatSettle::set_activity_id(v10, thisa->activity_id_);
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeSprintBoatSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeSprintBoatSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&thisa->schedule_id_);
  }
  proto_log::PlayerLogBodySummerTimeSprintBoatSettle::set_schedule_id(v11, thisa->schedule_id_);
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeSprintBoatSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeSprintBoatSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
  proto_log::PlayerLogBodySummerTimeSprintBoatSettle::set_group_id(v12, *(google::protobuf::uint32 *)group_ida);
  result_type = 0;
  if ( group_ida[4] != 1 )
  {
    if ( reasona == 3 )
      v13 = 2;
    else
      v13 = 1;
    result_type = v13;
  }
  v14 = std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeSprintBoatSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeSprintBoatSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
  proto_log::PlayerLogBodySummerTimeSprintBoatSettle::set_result_type(v14, result_type);
  v15 = std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeSprintBoatSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeSprintBoatSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&daily_datab->new_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)daily_datab + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&daily_datab->new_score >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load4(&daily_datab->new_score);
  }
  proto_log::PlayerLogBodySummerTimeSprintBoatSettle::set_settle_points(v15, daily_datab->new_score);
  v16 = std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeSprintBoatSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeSprintBoatSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
  proto_log::PlayerLogBodySummerTimeSprintBoatSettle::set_left_time_sec(v16, left_timea);
  v17 = std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeSprintBoatSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeSprintBoatSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&daily_datab->gather_points >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)daily_datab + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&daily_datab->gather_points >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load4(&daily_datab->gather_points);
  }
  proto_log::PlayerLogBodySummerTimeSprintBoatSettle::set_gather_num(v17, daily_datab->gather_points);
  v18 = std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeSprintBoatSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySummerTimeSprintBoatSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
  proto_log::PlayerLogBodySummerTimeSprintBoatSettle::set_transaction_no(v18, &thisa->boat_sprint_transaction_no_);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->player_);
  player = thisa->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodySummerTimeSprintBoatSettle,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodySummerTimeSprintBoatSettle> *)(v6 + 64));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodySummerTimeSprintBoatSettle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodySummerTimeSprintBoatSettle> *const)(v6 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v6 + 48));
  if ( v30 == (char *)v6 )
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

// Line 1270: range 0000000017FE643C-0000000017FE64FC
void __cdecl SummerTimeActivity::resetAllSignalByGm(SummerTimeActivity *const this)
{
  __int64 v1; // rsi
  uint32_t *p_next_float_signal_id; // rdx
  __int64 v3; // rdx

  std::set<unsigned int>::clear(&this->unlcoked_mist_zone_set_);
  std::set<unsigned int>::clear(&this->disabled_float_signal_set_);
  p_next_float_signal_id = &this->next_float_signal_id_;
  if ( *(_BYTE *)(((unsigned __int64)p_next_float_signal_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_next_float_signal_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->next_float_signal_id_, v1, p_next_float_signal_id);
  }
  this->next_float_signal_id_ = 0;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->last_float_signal_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_float_signal_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->last_float_signal_id_, (((_BYTE)this + 124) & 7u) + 3, v3);
  this->last_float_signal_id_ = 0;
};

// Line 1278: range 0000000017FE64FE-0000000017FE681A
void __cdecl SummerTimeActivity::closeSeaMist(SummerTimeActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 40 11 notify:1290";
  *(_QWORD *)(v1 + 16) = SummerTimeActivity::closeSeaMist;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  v4 = ((_BYTE)this - 124) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_sea_mist_closed_ >> 3) + 0x7FFF8000) != 0
    && (char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_sea_mist_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_sea_mist_closed_);
  }
  if ( !this->is_sea_mist_closed_ )
  {
    std::set<unsigned int>::clear(&this->unlcoked_mist_zone_set_);
    std::set<unsigned int>::clear(&this->disabled_float_signal_set_);
    if ( *(_BYTE *)(((unsigned __int64)&this->next_float_signal_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->next_float_signal_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->next_float_signal_id_, v4, &this->next_float_signal_id_);
    }
    this->next_float_signal_id_ = 0;
    v5 = (((_BYTE)this + 124) & 7u) + 3;
    v6 = (*(_BYTE *)(((unsigned __int64)&this->last_float_signal_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_float_signal_id_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v6 )
      __asan_report_store4(&this->last_float_signal_id_, v5, v6);
    this->last_float_signal_id_ = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->last_transfer_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_transfer_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->last_transfer_time_, v5, &this->last_transfer_time_);
    }
    this->last_transfer_time_ = 0;
    v7 = ((_BYTE)this - 124) & 7;
    v8 = (*(_BYTE *)(((unsigned __int64)&this->is_sea_mist_closed_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_sea_mist_closed_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v8 )
      __asan_report_store1(&this->is_sea_mist_closed_, v7, v8);
    this->is_sea_mist_closed_ = 1;
    proto::SummerTimeFloatSignalUpdateNotify::SummerTimeFloatSignalUpdateNotify((proto::SummerTimeFloatSignalUpdateNotify *const)(v1 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 48));
    proto::SummerTimeFloatSignalUpdateNotify::~SummerTimeFloatSignalUpdateNotify((proto::SummerTimeFloatSignalUpdateNotify *const)(v1 + 48));
  }
  if ( v9 == (char *)v1 )
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

// Line 1295: range 0000000017FE681C-0000000017FE6AB4
bool __cdecl SummerTimeActivity::isSprintBoatOnGoing(const SummerTimeActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t AvatarComp; // ecx
  int v5; // r14d
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool result; // al
  bool v8; // [rsp+7h] [rbp-B9h]
  std::unordered_map<unsigned int,data::ActivitySummerTimeRaceExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  std::unordered_map<unsigned int,data::ActivitySummerTimeRaceExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-A0h] BYREF
  const ActivitySummerTimeExcelConfigMgr *config_mgr; // [rsp+28h] [rbp-98h]
  const std::unordered_map<unsigned int,data::ActivitySummerTimeRaceExcelConfig> *__for_range; // [rsp+30h] [rbp-90h]
  const std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig> *v13; // [rsp+38h] [rbp-88h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig> >::type *id; // [rsp+40h] [rbp-80h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig> >::type *race_config; // [rsp+48h] [rbp-78h]
  char v16[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 group_ptr:1299";
  *(_QWORD *)(v1 + 16) = SummerTimeActivity::isSprintBoatOnGoing;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  config_mgr = SummerTimeActivity::getConfigMgr(this);
  __for_range = &config_mgr->activity_summer_time_race_excel_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::ActivitySummerTimeRaceExcelConfig>::begin(&config_mgr->activity_summer_time_race_excel_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::ActivitySummerTimeRaceExcelConfig>::end(&config_mgr->activity_summer_time_race_excel_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v13 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig>,false,false>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,data::ActivitySummerTimeRaceExcelConfig>(v13);
    race_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivitySummerTimeRaceExcelConfig>(v13);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    AvatarComp = (unsigned int)Player::getAvatarComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&race_config->group_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)race_config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&race_config->group_id >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(&race_config->group_id);
    }
    PlayerAvatarComp::queryActiveGroup((PlayerAvatarComp *const)(v1 + 32), AvatarComp);
    if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v1 + 32)) )
    {
      v5 = 0;
    }
    else
    {
      v6 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( Group::hasOngoingChallenge(v6) )
      {
        v8 = 1;
        v5 = 1;
      }
      else
      {
        v5 = 2;
      }
    }
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 32));
    if ( v5 && v5 != 2 )
      goto LABEL_19;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig>,false,false>::operator++(&__for_begin);
  }
  v8 = 0;
LABEL_19:
  result = v8;
  if ( v16 == (char *)v1 )
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

// Line 1313: range 0000000017FE6AB6-0000000017FE6F96
__int64 __fastcall SummerTimeActivity::settleSprintBoatByGm(
        SummerTimeActivity *const this,
        uint32_t race_id,
        uint32_t points)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  common::milog::MiLogStream *v12; // rax
  uint32_t v13; // ecx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  Group *v17; // rax
  ChallengeComp *ChallengeComp; // rax
  __int64 result; // rax
  const ActivitySummerTimeExcelConfigMgr *config_mgr; // [rsp+10h] [rbp-E0h]
  const data::ActivitySummerTimeRaceExcelConfig *race_config_ptr; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v22; // [rsp+20h] [rbp-D0h] BYREF
  char v23[176]; // [rsp+40h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 12 race_id:1312 64 16 14 scene_ptr:1322 96 16 14 group_ptr:1328";
  *(_QWORD *)(v3 + 16) = SummerTimeActivity::settleSprintBoatByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = race_id;
  config_mgr = SummerTimeActivity::getConfigMgr(this);
  race_config_ptr = data::ActivitySummerTimeExcelConfigMgrBase::findActivitySummerTimeRaceExcelConfig(
                      config_mgr,
                      *(_DWORD *)(v3 + 48));
  if ( race_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 64));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/summer_time_activity.cpp",
        "settleSprintBoatByGm",
        1325);
      v10 = common::milog::MiLogStream::operator<<<SummerTimeActivity,(SummerTimeActivity*)0>(&v22, this);
      v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v12 = operator<<(v11, this->player_);
      common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v12, (const char (*)[15])" not on scene.");
      common::milog::MiLogStream::~MiLogStream(&v22);
      v9 = -1;
    }
    else
    {
      v13 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&race_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)race_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&race_config_ptr->group_id >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&race_config_ptr->group_id);
      }
      Scene::findGroup((Scene *const)(v3 + 96), v13);
      if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v3 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/summer_time_activity.cpp",
          "settleSprintBoatByGm",
          1331);
        v14 = common::milog::MiLogStream::operator<<<SummerTimeActivity,(SummerTimeActivity*)0>(&v22, this);
        v15 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v14, (const char (*)[8])" group:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &race_config_ptr->group_id);
        common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v16, (const char (*)[14])" find failed.");
        common::milog::MiLogStream::~MiLogStream(&v22);
        v9 = -1;
      }
      else
      {
        v17 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        ChallengeComp = Group::getChallengeComp(v17);
        ChallengeComp::finishChallengeByGm(ChallengeComp, 0x7DCu, 1);
        v9 = 0;
      }
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 96));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/summer_time_activity.cpp",
      "settleSprintBoatByGm",
      1318);
    v6 = common::milog::MiLogStream::operator<<<SummerTimeActivity,(SummerTimeActivity*)0>(&v22, this);
    v7 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v6, (const char (*)[7])" RACE:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v8, (const char (*)[19])" CONFIG NOT FOUND.");
    common::milog::MiLogStream::~MiLogStream(&v22);
    v9 = -1;
  }
  result = v9;
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
  return result;
};

// Line 1340: range 0000000017FE6F98-0000000017FE7A95
__int64 __fastcall SummerTimeActivity::beginSprintBoatByGm(SummerTimeActivity *const this, uint32_t race_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned int v10; // r14d
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  common::milog::MiLogStream *v13; // rax
  uint32_t v14; // ecx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  uint32_t *p_gadget_id; // rax
  uint32_t v23; // eax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  common::milog::MiLogStream *v27; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  WorktopComp *v29; // r14
  uint32_t Uid; // esi
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  __int64 result; // rax
  int val; // [rsp+1Ch] [rbp-164h] BYREF
  uint32_t gadget_config_id; // [rsp+20h] [rbp-160h]
  int ret; // [rsp+24h] [rbp-15Ch]
  std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator __for_begin; // [rsp+28h] [rbp-158h] BYREF
  std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator __for_end; // [rsp+30h] [rbp-150h] BYREF
  const ActivitySummerTimeExcelConfigMgr *config_mgr; // [rsp+38h] [rbp-148h]
  const data::ActivitySummerTimeRaceExcelConfig *race_config_ptr; // [rsp+40h] [rbp-140h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+48h] [rbp-138h]
  const std::unordered_map<unsigned int,GadgetScriptConfig> *__for_range; // [rsp+50h] [rbp-130h]
  const std::pair<unsigned int const,GadgetScriptConfig> *v46; // [rsp+58h] [rbp-128h]
  std::tuple_element<0,const std::pair<unsigned int const,GadgetScriptConfig> >::type *config_id; // [rsp+60h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,GadgetScriptConfig> >::type *gadget_config; // [rsp+68h] [rbp-118h]
  common::milog::MiLogStream v49; // [rsp+70h] [rbp-110h] BYREF
  char v50[240]; // [rsp+90h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 12 race_id:1339 64 16 14 scene_ptr:1350 96 16 14 group_ptr:1356 128 16 15 gadget_ptr:1379"
                        " 160 16 21 worktop_comp_ptr:1385";
  *(_QWORD *)(v2 + 16) = SummerTimeActivity::beginSprintBoatByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  *(_DWORD *)(v2 + 48) = race_id;
  common::milog::MiLogStream::create(
    &v49,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/summer_time_activity.cpp",
    "beginSprintBoatByGm",
    1341);
  v5 = common::milog::MiLogStream::operator<<<SummerTimeActivity,(SummerTimeActivity*)0>(&v49, this);
  v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v5, (const char (*)[16])off_2648F840);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream(&v49);
  config_mgr = SummerTimeActivity::getConfigMgr(this);
  race_config_ptr = data::ActivitySummerTimeExcelConfigMgrBase::findActivitySummerTimeRaceExcelConfig(
                      config_mgr,
                      *(_DWORD *)(v2 + 48));
  if ( race_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v49,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/summer_time_activity.cpp",
        "beginSprintBoatByGm",
        1353);
      v11 = common::milog::MiLogStream::operator<<<SummerTimeActivity,(SummerTimeActivity*)0>(&v49, this);
      v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v13 = operator<<(v12, this->player_);
      common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v13, (const char (*)[15])" not on scene.");
      common::milog::MiLogStream::~MiLogStream(&v49);
      v10 = -1;
    }
    else
    {
      v14 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&race_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)race_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&race_config_ptr->group_id >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&race_config_ptr->group_id);
      }
      Scene::findGroup((Scene *const)(v2 + 96), v14);
      if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v2 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v49,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/summer_time_activity.cpp",
          "beginSprintBoatByGm",
          1359);
        v15 = common::milog::MiLogStream::operator<<<SummerTimeActivity,(SummerTimeActivity*)0>(&v49, this);
        v16 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v15, (const char (*)[8])" group:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &race_config_ptr->group_id);
        common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v17, (const char (*)[14])" find failed.");
        common::milog::MiLogStream::~MiLogStream(&v49);
        v10 = -1;
      }
      else
      {
        v18 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        group_script_config_ptr = Group::getScriptConfig(v18);
        if ( group_script_config_ptr )
        {
          gadget_config_id = 0;
          __for_range = &group_script_config_ptr->gadget_config_map;
          __for_begin._M_cur = std::unordered_map<unsigned int,GadgetScriptConfig>::begin(&group_script_config_ptr->gadget_config_map)._M_cur;
          __for_end._M_cur = std::unordered_map<unsigned int,GadgetScriptConfig>::end(&group_script_config_ptr->gadget_config_map)._M_cur;
          while ( std::__detail::operator!=<std::pair<unsigned int const,GadgetScriptConfig>,false>(
                    &__for_begin,
                    &__for_end) )
          {
            v46 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator*(&__for_begin);
            config_id = std::get<0ul,unsigned int const,GadgetScriptConfig>(v46);
            gadget_config = (std::tuple_element<1,const std::pair<unsigned int const,GadgetScriptConfig> >::type *)std::get<1ul,unsigned int const,GadgetScriptConfig>(v46);
            p_gadget_id = &gadget_config->gadget_id;
            if ( *(_BYTE *)(((unsigned __int64)p_gadget_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_gadget_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gadget_id >> 3)
                                                                            + 0x7FFF8000) )
            {
              __asan_report_load4(p_gadget_id);
            }
            if ( gadget_config->gadget_id == 70350250 )
            {
              if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3)
                                                                            + 0x7FFF8000) )
              {
                __asan_report_load4(config_id);
              }
              gadget_config_id = *config_id;
              break;
            }
            std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator++(&__for_begin);
          }
          v23 = (unsigned int)std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          Group::findEntityByConfigId<Gadget>((Group *const)(v2 + 128), v23);
          if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v2 + 128), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v49,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/summer_time_activity.cpp",
              "beginSprintBoatByGm",
              1382);
            v24 = common::milog::MiLogStream::operator<<<SummerTimeActivity,(SummerTimeActivity*)0>(&v49, this);
            v25 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    v24,
                    (const char (*)[30])" worktop gadget not found in:");
            v26 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            operator<<(v25, v26);
            common::milog::MiLogStream::~MiLogStream(&v49);
            v10 = -1;
          }
          else
          {
            std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            EcsBase<Gadget,GadgetCompBase,28u>::findComp<WorktopComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v2 + 160));
            if ( std::operator==<WorktopComp>((const std::shared_ptr<WorktopComp> *)(v2 + 160), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v49,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/summer_time_activity.cpp",
                "beginSprintBoatByGm",
                1388);
              v27 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                      &v49,
                      (const char (*)[29])"findComp WorktopComp fails: ");
              v28 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v27, v28);
              common::milog::MiLogStream::~MiLogStream(&v49);
              v10 = -1;
            }
            else
            {
              v29 = std::__shared_ptr_access<WorktopComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WorktopComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              Uid = Player::getUid(this->player_);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              ret = WorktopComp::selectOption(v29, this->player_, Uid, 0xAFu);
              if ( ret )
              {
                common::milog::MiLogStream::create(
                  &v49,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/summer_time_activity.cpp",
                  "beginSprintBoatByGm",
                  1395);
                v31 = common::milog::MiLogStream::operator<<<SummerTimeActivity,(SummerTimeActivity*)0>(&v49, this);
                v32 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        v31,
                        (const char (*)[13])" select opt:");
                val = 175;
                v33 = common::milog::MiLogStream::operator<<<int,(int *)0>(v32, &val);
                v34 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                        v33,
                        (const char (*)[10])" failed. ");
                v35 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v34, v35);
                common::milog::MiLogStream::~MiLogStream(&v49);
              }
              v10 = ret;
            }
            std::shared_ptr<WorktopComp>::~shared_ptr((std::shared_ptr<WorktopComp> *const)(v2 + 160));
          }
          std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 128));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v49,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/summer_time_activity.cpp",
            "beginSprintBoatByGm",
            1365);
          v19 = common::milog::MiLogStream::operator<<<SummerTimeActivity,(SummerTimeActivity*)0>(&v49, this);
          v20 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          v21 = operator<<(v19, v20);
          common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            v21,
            (const char (*)[24])" script config nullptr.");
          common::milog::MiLogStream::~MiLogStream(&v49);
          v10 = -1;
        }
      }
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 96));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v49,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/summer_time_activity.cpp",
      "beginSprintBoatByGm",
      1346);
    v7 = common::milog::MiLogStream::operator<<<SummerTimeActivity,(SummerTimeActivity*)0>(&v49, this);
    v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])" RACE:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v9, (const char (*)[19])" CONFIG NOT FOUND.");
    common::milog::MiLogStream::~MiLogStream(&v49);
    v10 = -1;
  }
  result = v10;
  if ( v50 == (char *)v2 )
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
