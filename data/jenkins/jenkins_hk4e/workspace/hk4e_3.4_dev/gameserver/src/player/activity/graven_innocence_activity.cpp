// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/graven_innocence_activity.cpp

// Line 31: range 000000001508CB16-000000001508CC14
int32_t __cdecl GravenInnocencePhotoStageData::fromBin(
        GravenInnocencePhotoStageData *const this,
        const proto::GravenInnocencePhotoStageBin *bin)
{
  uint32_t v2; // ecx
  bool is_open; // cl
  bool is_finished; // cl

  v2 = proto::GravenInnocencePhotoStageBin::stage_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->stage_id = v2;
  is_open = proto::GravenInnocencePhotoStageBin::is_open(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = is_open;
  is_finished = proto::GravenInnocencePhotoStageBin::is_finished(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_finished);
  }
  this->is_finished = is_finished;
  return 0;
};

// Line 39: range 000000001508CC16-000000001508CD19
int32_t __cdecl GravenInnocencePhotoStageData::toBin(
        const GravenInnocencePhotoStageData *const this,
        proto::GravenInnocencePhotoStageBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::GravenInnocencePhotoStageBin::set_stage_id(bin, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::GravenInnocencePhotoStageBin::set_is_open(bin, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_finished);
  }
  proto::GravenInnocencePhotoStageBin::set_is_finished(bin, this->is_finished);
  return 0;
};

// Line 47: range 000000001508CD1A-000000001508CE1D
int32_t __cdecl GravenInnocencePhotoStageData::toClient(
        const GravenInnocencePhotoStageData *const this,
        proto::GravenInnocencePhotoStageInfo *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::GravenInnocencePhotoStageInfo::set_stage_id(proto, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::GravenInnocencePhotoStageInfo::set_is_open(proto, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_finished);
  }
  proto::GravenInnocencePhotoStageInfo::set_is_finished(proto, this->is_finished);
  return 0;
};

// Line 55: range 000000001508CE1E-000000001508CF22
int32_t __cdecl GravenInnocencePhotoObjectData::fromBin(
        GravenInnocencePhotoObjectData *const this,
        const proto::GravenInnocencePhotoObjectBin *bin)
{
  uint32_t v2; // ecx
  uint32_t v3; // ecx
  uint32_t v4; // ecx

  v2 = proto::GravenInnocencePhotoObjectBin::object_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->object_id = v2;
  v3 = proto::GravenInnocencePhotoObjectBin::param(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->param);
  }
  this->param = v3;
  v4 = proto::GravenInnocencePhotoObjectBin::finish_time(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finish_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->finish_time);
  }
  this->finish_time = v4;
  return 0;
};

// Line 63: range 000000001508CF24-000000001508D025
int32_t __cdecl GravenInnocencePhotoObjectData::toBin(
        const GravenInnocencePhotoObjectData *const this,
        proto::GravenInnocencePhotoObjectBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::GravenInnocencePhotoObjectBin::set_object_id(bin, this->object_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::GravenInnocencePhotoObjectBin::set_param(bin, this->param);
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finish_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::GravenInnocencePhotoObjectBin::set_finish_time(bin, this->finish_time);
  return 0;
};

// Line 71: range 000000001508D026-000000001508D127
int32_t __cdecl GravenInnocencePhotoObjectData::toClient(
        const GravenInnocencePhotoObjectData *const this,
        proto::GravenInnocencePhotoObjectInfo *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::GravenInnocencePhotoObjectInfo::set_object_id(proto, this->object_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::GravenInnocencePhotoObjectInfo::set_param(proto, this->param);
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finish_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::GravenInnocencePhotoObjectInfo::set_finish_time(proto, this->finish_time);
  return 0;
};

// Line 79: range 000000001508D128-000000001508D4BB
int32_t __cdecl GravenInnocencePhotoData::fromBin(
        GravenInnocencePhotoData *const this,
        const proto::GravenInnocencePhotoBin *bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,GravenInnocencePhotoStageData>::mapped_type *v5; // rax
  _QWORD *v6; // rdx
  unsigned __int64 v7; // rax
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::GravenInnocencePhotoStageBin>::const_iterator __for_begin; // [rsp+10h] [rbp-B0h] BYREF
  google::protobuf::RepeatedPtrField<proto::GravenInnocencePhotoObjectBin>::const_iterator __for_begin_0; // [rsp+18h] [rbp-A8h] BYREF
  const google::protobuf::RepeatedPtrField<proto::GravenInnocencePhotoStageBin> *__for_range; // [rsp+20h] [rbp-A0h]
  const google::protobuf::RepeatedPtrField<proto::GravenInnocencePhotoObjectBin> *__for_range_0; // [rsp+28h] [rbp-98h]
  const proto::GravenInnocencePhotoObjectBin *object_bin; // [rsp+30h] [rbp-90h]
  const proto::GravenInnocencePhotoStageBin *stage_bin; // [rsp+38h] [rbp-88h]
  char v15[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 13 stage_data:83 64 12 14 object_data:90";
  *(_QWORD *)(v2 + 16) = GravenInnocencePhotoData::fromBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202177536;
  std::map<unsigned int,GravenInnocencePhotoStageData>::clear(&this->stage_data_map);
  __for_range = proto::GravenInnocencePhotoBin::stage_bin_list(bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::GravenInnocencePhotoStageBin>::begin(__for_range).it_;
  __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::GravenInnocencePhotoStageBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::GravenInnocencePhotoStageBin const>::operator!=(
            &__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::GravenInnocencePhotoStageBin>::iterator *)&__for_begin_0) )
  {
    stage_bin = google::protobuf::internal::RepeatedPtrIterator<proto::GravenInnocencePhotoStageBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = 0;
    *(_BYTE *)(v2 + 36) = 0;
    *(_BYTE *)(v2 + 37) = 0;
    GravenInnocencePhotoStageData::fromBin((GravenInnocencePhotoStageData *const)(v2 + 32), stage_bin);
    v5 = std::map<unsigned int,GravenInnocencePhotoStageData>::operator[](
           &this->stage_data_map,
           (const std::map<unsigned int,GravenInnocencePhotoStageData>::key_type *)(v2 + 32));
    v6 = v5;
    if ( ((unsigned __int8)v5 & 7) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((unsigned __int64)(&v5->is_finished + 2) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v5 + 7) & 7) >= *(_BYTE *)(((unsigned __int64)(&v5->is_finished + 2) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5, 8LL);
    }
    *v6 = *(_QWORD *)(v2 + 32);
    google::protobuf::internal::RepeatedPtrIterator<proto::GravenInnocencePhotoStageBin const>::operator++(&__for_begin);
  }
  std::map<unsigned int,GravenInnocencePhotoObjectData>::clear(&this->object_data_map);
  __for_range_0 = proto::GravenInnocencePhotoBin::object_bin_list(bin);
  __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::GravenInnocencePhotoObjectBin>::begin(__for_range_0).it_;
  *(google::protobuf::RepeatedPtrField<proto::GravenInnocencePhotoObjectBin>::const_iterator *)(v2 + 32) = google::protobuf::RepeatedPtrField<proto::GravenInnocencePhotoObjectBin>::end(__for_range_0);
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::GravenInnocencePhotoObjectBin const>::operator!=(
            &__for_begin_0,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::GravenInnocencePhotoObjectBin>::iterator *)(v2 + 32)) )
  {
    object_bin = google::protobuf::internal::RepeatedPtrIterator<proto::GravenInnocencePhotoObjectBin const>::operator*(&__for_begin_0);
    *(_DWORD *)(v2 + 64) = 0;
    *(_DWORD *)(v2 + 68) = 0;
    *(_DWORD *)(v2 + 72) = 0;
    GravenInnocencePhotoObjectData::fromBin((GravenInnocencePhotoObjectData *const)(v2 + 64), object_bin);
    v7 = (unsigned __int64)std::map<unsigned int,GravenInnocencePhotoObjectData>::operator[](
                             &this->object_data_map,
                             (const std::map<unsigned int,GravenInnocencePhotoObjectData>::key_type *)(v2 + 64));
    if ( (char)(v7 & 7) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) && *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((v7 + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((v7 + 11) & 7) >= *(_BYTE *)(((v7 + 11) >> 3) + 0x7FFF8000) )
    {
      v7 = __asan_report_store_n(v7, 12LL);
    }
    *(_QWORD *)v7 = *(_QWORD *)(v2 + 64);
    *(_DWORD *)(v7 + 8) = *(_DWORD *)(v2 + 72);
    google::protobuf::internal::RepeatedPtrIterator<proto::GravenInnocencePhotoObjectBin const>::operator++(&__for_begin_0);
  }
  result = 0;
  if ( v15 == (char *)v2 )
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

// Line 98: range 000000001508D4BC-000000001508D616
int32_t __cdecl GravenInnocencePhotoData::toBin(
        const GravenInnocencePhotoData *const this,
        proto::GravenInnocencePhotoBin *bin)
{
  std::map<unsigned int,GravenInnocencePhotoStageData>::const_iterator __for_begin; // [rsp+10h] [rbp-60h] BYREF
  std::map<unsigned int,GravenInnocencePhotoStageData>::const_iterator __for_end; // [rsp+18h] [rbp-58h] BYREF
  const std::map<unsigned int,GravenInnocencePhotoStageData> *__for_range; // [rsp+20h] [rbp-50h]
  const std::map<unsigned int,GravenInnocencePhotoObjectData> *__for_range_0; // [rsp+28h] [rbp-48h]
  const std::pair<unsigned int const,GravenInnocencePhotoObjectData> *v7; // [rsp+30h] [rbp-40h]
  std::tuple_element<0,const std::pair<unsigned int const,GravenInnocencePhotoObjectData> >::type *__0; // [rsp+38h] [rbp-38h]
  std::tuple_element<1,const std::pair<unsigned int const,GravenInnocencePhotoObjectData> >::type *object_data; // [rsp+40h] [rbp-30h]
  proto::GravenInnocencePhotoObjectBin *object_bin; // [rsp+48h] [rbp-28h]
  const std::pair<unsigned int const,GravenInnocencePhotoStageData> *v11; // [rsp+50h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,GravenInnocencePhotoStageData> >::type *_; // [rsp+58h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,GravenInnocencePhotoStageData> >::type *stage_data; // [rsp+60h] [rbp-10h]
  proto::GravenInnocencePhotoStageBin *stage_bin; // [rsp+68h] [rbp-8h]

  __for_range = &this->stage_data_map;
  __for_begin._M_node = std::map<unsigned int,GravenInnocencePhotoStageData>::begin(&this->stage_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,GravenInnocencePhotoStageData>::end(&this->stage_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocencePhotoStageData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,GravenInnocencePhotoStageData>(v11);
    stage_data = (std::tuple_element<1,const std::pair<unsigned int const,GravenInnocencePhotoStageData> >::type *)std::get<1ul,unsigned int const,GravenInnocencePhotoStageData>(v11);
    stage_bin = proto::GravenInnocencePhotoBin::add_stage_bin_list(bin);
    GravenInnocencePhotoStageData::toBin(stage_data, stage_bin);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocencePhotoStageData>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->object_data_map;
  __for_begin._M_node = std::map<unsigned int,GravenInnocencePhotoObjectData>::begin(&this->object_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,GravenInnocencePhotoObjectData>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocencePhotoObjectData> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocencePhotoObjectData> >::_Self *)&__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocencePhotoObjectData>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocencePhotoObjectData> > *const)&__for_begin);
    __0 = std::get<0ul,unsigned int const,GravenInnocencePhotoObjectData>(v7);
    object_data = (std::tuple_element<1,const std::pair<unsigned int const,GravenInnocencePhotoObjectData> >::type *)std::get<1ul,unsigned int const,GravenInnocencePhotoObjectData>(v7);
    object_bin = proto::GravenInnocencePhotoBin::add_object_bin_list(bin);
    GravenInnocencePhotoObjectData::toBin(object_data, object_bin);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocencePhotoObjectData>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocencePhotoObjectData> > *const)&__for_begin);
  }
  return 0;
};

// Line 113: range 000000001508D618-000000001508D772
int32_t __cdecl GravenInnocencePhotoData::toClient(
        const GravenInnocencePhotoData *const this,
        proto::GravenInnocencePhotoInfo *proto)
{
  std::map<unsigned int,GravenInnocencePhotoStageData>::const_iterator __for_begin; // [rsp+10h] [rbp-60h] BYREF
  std::map<unsigned int,GravenInnocencePhotoStageData>::const_iterator __for_end; // [rsp+18h] [rbp-58h] BYREF
  const std::map<unsigned int,GravenInnocencePhotoStageData> *__for_range; // [rsp+20h] [rbp-50h]
  const std::map<unsigned int,GravenInnocencePhotoObjectData> *__for_range_0; // [rsp+28h] [rbp-48h]
  const std::pair<unsigned int const,GravenInnocencePhotoObjectData> *v7; // [rsp+30h] [rbp-40h]
  std::tuple_element<0,const std::pair<unsigned int const,GravenInnocencePhotoObjectData> >::type *__0; // [rsp+38h] [rbp-38h]
  std::tuple_element<1,const std::pair<unsigned int const,GravenInnocencePhotoObjectData> >::type *object_data; // [rsp+40h] [rbp-30h]
  proto::GravenInnocencePhotoObjectInfo *object_data_info; // [rsp+48h] [rbp-28h]
  const std::pair<unsigned int const,GravenInnocencePhotoStageData> *v11; // [rsp+50h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,GravenInnocencePhotoStageData> >::type *_; // [rsp+58h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,GravenInnocencePhotoStageData> >::type *stage_data; // [rsp+60h] [rbp-10h]
  proto::GravenInnocencePhotoStageInfo *stage_data_info; // [rsp+68h] [rbp-8h]

  __for_range = &this->stage_data_map;
  __for_begin._M_node = std::map<unsigned int,GravenInnocencePhotoStageData>::begin(&this->stage_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,GravenInnocencePhotoStageData>::end(&this->stage_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocencePhotoStageData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,GravenInnocencePhotoStageData>(v11);
    stage_data = (std::tuple_element<1,const std::pair<unsigned int const,GravenInnocencePhotoStageData> >::type *)std::get<1ul,unsigned int const,GravenInnocencePhotoStageData>(v11);
    stage_data_info = proto::GravenInnocencePhotoInfo::add_stage_info_list(proto);
    GravenInnocencePhotoStageData::toClient(stage_data, stage_data_info);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocencePhotoStageData>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->object_data_map;
  __for_begin._M_node = std::map<unsigned int,GravenInnocencePhotoObjectData>::begin(&this->object_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,GravenInnocencePhotoObjectData>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocencePhotoObjectData> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocencePhotoObjectData> >::_Self *)&__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocencePhotoObjectData>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocencePhotoObjectData> > *const)&__for_begin);
    __0 = std::get<0ul,unsigned int const,GravenInnocencePhotoObjectData>(v7);
    object_data = (std::tuple_element<1,const std::pair<unsigned int const,GravenInnocencePhotoObjectData> >::type *)std::get<1ul,unsigned int const,GravenInnocencePhotoObjectData>(v7);
    object_data_info = proto::GravenInnocencePhotoInfo::add_object_info_list(proto);
    GravenInnocencePhotoObjectData::toClient(object_data, object_data_info);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocencePhotoObjectData>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocencePhotoObjectData> > *const)&__for_begin);
  }
  return 0;
};

// Line 128: range 000000001508D774-000000001508D953
int32_t __cdecl GravenInnocencePhotoData::init(GravenInnocencePhotoData *const this)
{
  uint32_t v1; // ecx
  std::unordered_map<unsigned int,data::GravenInnocencePhotoStageExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,data::GravenInnocencePhotoStageExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  const std::unordered_map<unsigned int,data::GravenInnocencePhotoStageExcelConfig> *__for_range; // [rsp+28h] [rbp-38h]
  const std::pair<unsigned int const,data::GravenInnocencePhotoStageExcelConfig> *v6; // [rsp+30h] [rbp-30h]
  std::tuple_element<0,const std::pair<unsigned int const,data::GravenInnocencePhotoStageExcelConfig> >::type *stage_id; // [rsp+38h] [rbp-28h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GravenInnocencePhotoStageExcelConfig> >::type *stage_config; // [rsp+40h] [rbp-20h]
  GravenInnocencePhotoStageData *stage_data; // [rsp+48h] [rbp-18h]
  std::shared_ptr<Config> v10; // [rsp+50h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.activity_graven_innocence_mgr.graven_innocence_photo_stage_excel_config_map;
  std::shared_ptr<Config>::~shared_ptr(&v10);
  __for_begin._M_cur = std::unordered_map<unsigned int,data::GravenInnocencePhotoStageExcelConfig>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::GravenInnocencePhotoStageExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GravenInnocencePhotoStageExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocencePhotoStageExcelConfig>,false,false>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,data::GravenInnocencePhotoStageExcelConfig>(v6);
    stage_config = (std::tuple_element<1,const std::pair<unsigned int const,data::GravenInnocencePhotoStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GravenInnocencePhotoStageExcelConfig>(v6);
    stage_data = std::map<unsigned int,GravenInnocencePhotoStageData>::operator[](&this->stage_data_map, stage_id);
    if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v1 = *stage_id;
    if ( *(_BYTE *)(((unsigned __int64)stage_data >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_data >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(stage_data);
    }
    stage_data->stage_id = v1;
    if ( *(_BYTE *)(((unsigned __int64)&stage_data->is_open >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)stage_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_data->is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&stage_data->is_open);
    }
    stage_data->is_open = 0;
    if ( *(_BYTE *)(((unsigned __int64)&stage_data->is_finished >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)stage_data + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_data->is_finished >> 3)
                                                             + 0x7FFF8000) )
    {
      __asan_report_store1(&stage_data->is_finished);
    }
    stage_data->is_finished = 0;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocencePhotoStageExcelConfig>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 140: range 000000001508D954-000000001508D97E
void __cdecl GravenInnocencePhotoData::clear(GravenInnocencePhotoData *const this)
{
  std::map<unsigned int,GravenInnocencePhotoStageData>::clear(&this->stage_data_map);
  std::map<unsigned int,GravenInnocencePhotoObjectData>::clear(&this->object_data_map);
};

// Line 147: range 000000001508D980-000000001508DACF
int32_t __cdecl GravenInnocenceCampStageData::fromBin(
        GravenInnocenceCampStageData *const this,
        const proto::GravenInnocenceCampStageBin *bin)
{
  uint32_t v2; // ecx
  bool is_open; // cl
  uint32_t v4; // ecx
  bool is_finished; // cl

  v2 = proto::GravenInnocenceCampStageBin::stage_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->stage_id = v2;
  is_open = proto::GravenInnocenceCampStageBin::is_open(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = is_open;
  v4 = proto::GravenInnocenceCampStageBin::level_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level_id);
  }
  this->level_id = v4;
  is_finished = proto::GravenInnocenceCampStageBin::is_finished(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_finished);
  }
  this->is_finished = is_finished;
  return 0;
};

// Line 156: range 000000001508DAD0-000000001508DC23
int32_t __cdecl GravenInnocenceCampStageData::toBin(
        const GravenInnocenceCampStageData *const this,
        proto::GravenInnocenceCampStageBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::GravenInnocenceCampStageBin::set_stage_id(bin, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::GravenInnocenceCampStageBin::set_is_open(bin, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::GravenInnocenceCampStageBin::set_level_id(bin, this->level_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_finished);
  }
  proto::GravenInnocenceCampStageBin::set_is_finished(bin, this->is_finished);
  return 0;
};

// Line 165: range 000000001508DC24-000000001508DD77
int32_t __cdecl GravenInnocenceCampStageData::toClient(
        const GravenInnocenceCampStageData *const this,
        proto::GravenInnocenceCampStageInfo *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::GravenInnocenceCampStageInfo::set_stage_id(proto, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::GravenInnocenceCampStageInfo::set_is_open(proto, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::GravenInnocenceCampStageInfo::set_level_id(proto, this->level_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_finished);
  }
  proto::GravenInnocenceCampStageInfo::set_is_finished(proto, this->is_finished);
  return 0;
};

// Line 174: range 000000001508DD78-000000001508DF03
uint32_t __cdecl GravenInnocenceCampStageData::getGroupBundleId(GravenInnocenceCampStageData *const this)
{
  ActivityGravenInnocenceExcelConfigMgr *p_activity_graven_innocence_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  const data::GravenInnocenceCampLevelExcelConfig *level_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  p_activity_graven_innocence_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5)->design_config.txt_config_mgr.activity_graven_innocence_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  level_config_ptr = data::ActivityGravenInnocenceExcelConfigMgrBase::findGravenInnocenceCampLevelExcelConfig(
                       p_activity_graven_innocence_mgr,
                       this->level_id);
  std::shared_ptr<Config>::~shared_ptr(&v5);
  if ( level_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->group_link_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->group_link_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    return level_config_ptr->group_link_id;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "getGroupBundleId",
      178);
    v2 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
           &v6,
           (const char (*)[77])"[GRAVEN_INNOCENCE] findGravenInnocenceCampLevelExcelConfig failed, level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->level_id);
    common::milog::MiLogStream::~MiLogStream(&v6);
    return 0;
  }
};

// Line 185: range 000000001508DF04-000000001508E18E
int32_t __cdecl GravenInnocenceCampData::fromBin(
        GravenInnocenceCampData *const this,
        const proto::GravenInnocenceCampBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  GravenInnocenceCampStageData *v5; // r15
  unsigned int *v6; // rcx
  GravenInnocenceCampStageData *v7; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceCampStageData> >,bool> v8; // rax
  common::milog::MiLogStream *v9; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  google::protobuf::RepeatedPtrField<proto::GravenInnocenceCampStageBin>::const_iterator __for_begin; // [rsp+30h] [rbp-B0h] BYREF
  google::protobuf::RepeatedPtrField<proto::GravenInnocenceCampStageBin>::const_iterator __for_end; // [rsp+38h] [rbp-A8h] BYREF
  const google::protobuf::RepeatedPtrField<proto::GravenInnocenceCampStageBin> *__for_range; // [rsp+40h] [rbp-A0h]
  const proto::GravenInnocenceCampStageBin *stage_bin; // [rsp+48h] [rbp-98h]
  common::milog::MiLogStream v16; // [rsp+50h] [rbp-90h] BYREF
  char v17[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 stage_data:189";
  *(_QWORD *)(v2 + 16) = GravenInnocenceCampData::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::map<unsigned int,GravenInnocenceCampStageData>::clear(&this->stage_data_map);
  __for_range = proto::GravenInnocenceCampBin::stage_bin_list(bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::GravenInnocenceCampStageBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::GravenInnocenceCampStageBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::GravenInnocenceCampStageBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    stage_bin = google::protobuf::internal::RepeatedPtrIterator<proto::GravenInnocenceCampStageBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = 0;
    *(_BYTE *)(v2 + 36) = 0;
    *(_DWORD *)(v2 + 40) = 0;
    *(_BYTE *)(v2 + 44) = 0;
    GravenInnocenceCampStageData::fromBin((GravenInnocenceCampStageData *const)(v2 + 32), stage_bin);
    v5 = std::move<GravenInnocenceCampStageData &>((GravenInnocenceCampStageData *)(v2 + 32));
    val = proto::GravenInnocenceCampStageBin::stage_id(stage_bin);
    v8 = std::map<unsigned int,GravenInnocenceCampStageData>::emplace<unsigned int,GravenInnocenceCampStageData>(
           &this->stage_data_map,
           &val,
           v5,
           v6,
           v7);
    if ( !v8.second )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/graven_innocence_activity.cpp",
        "fromBin",
        193);
      v9 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
             &v16,
             (const char (*)[66])"[GRAVEN_INNOCENCE] camp data fromBin failed, duplicated stage_id:");
      val = proto::GravenInnocenceCampStageBin::stage_id(stage_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::GravenInnocenceCampStageBin const>::operator++(&__for_begin);
  }
  result = 0;
  if ( v17 == (char *)v2 )
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

// Line 200: range 000000001508E190-000000001508E246
int32_t __cdecl GravenInnocenceCampData::toBin(
        const GravenInnocenceCampData *const this,
        proto::GravenInnocenceCampBin *bin)
{
  std::map<unsigned int,GravenInnocenceCampStageData>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,GravenInnocenceCampStageData>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::map<unsigned int,GravenInnocenceCampStageData> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,GravenInnocenceCampStageData> *v6; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,GravenInnocenceCampStageData> >::type *stage_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,GravenInnocenceCampStageData> >::type *stage_data; // [rsp+40h] [rbp-10h]
  proto::GravenInnocenceCampStageBin *stage_bin; // [rsp+48h] [rbp-8h]

  __for_range = &this->stage_data_map;
  __for_begin._M_node = std::map<unsigned int,GravenInnocenceCampStageData>::begin(&this->stage_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,GravenInnocenceCampStageData>::end(&this->stage_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocenceCampStageData>>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,GravenInnocenceCampStageData>(v6);
    stage_data = (std::tuple_element<1,const std::pair<unsigned int const,GravenInnocenceCampStageData> >::type *)std::get<1ul,unsigned int const,GravenInnocenceCampStageData>(v6);
    stage_bin = proto::GravenInnocenceCampBin::add_stage_bin_list(bin);
    GravenInnocenceCampStageData::toBin(stage_data, stage_bin);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocenceCampStageData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 210: range 000000001508E248-000000001508E2FE
int32_t __cdecl GravenInnocenceCampData::toClient(
        const GravenInnocenceCampData *const this,
        proto::GravenInnocenceCampInfo *proto)
{
  std::map<unsigned int,GravenInnocenceCampStageData>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,GravenInnocenceCampStageData>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::map<unsigned int,GravenInnocenceCampStageData> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,GravenInnocenceCampStageData> *v6; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,GravenInnocenceCampStageData> >::type *stage_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,GravenInnocenceCampStageData> >::type *stage_data; // [rsp+40h] [rbp-10h]
  proto::GravenInnocenceCampStageInfo *stage_info; // [rsp+48h] [rbp-8h]

  __for_range = &this->stage_data_map;
  __for_begin._M_node = std::map<unsigned int,GravenInnocenceCampStageData>::begin(&this->stage_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,GravenInnocenceCampStageData>::end(&this->stage_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocenceCampStageData>>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,GravenInnocenceCampStageData>(v6);
    stage_data = (std::tuple_element<1,const std::pair<unsigned int const,GravenInnocenceCampStageData> >::type *)std::get<1ul,unsigned int const,GravenInnocenceCampStageData>(v6);
    stage_info = proto::GravenInnocenceCampInfo::add_stage_info_list(proto);
    GravenInnocenceCampStageData::toClient(stage_data, stage_info);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocenceCampStageData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 220: range 000000001508E300-000000001508E61E
int32_t __cdecl GravenInnocenceCampData::init(GravenInnocenceCampData *const this)
{
  common::milog::MiLogStream *v1; // rax
  uint32_t v3; // ecx
  std::vector<unsigned int>::const_reference v4; // rdx
  uint32_t v5; // ecx
  std::unordered_map<unsigned int,data::GravenInnocenceCampStageExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::unordered_map<unsigned int,data::GravenInnocenceCampStageExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  const std::unordered_map<unsigned int,data::GravenInnocenceCampStageExcelConfig> *__for_range; // [rsp+28h] [rbp-68h]
  const std::pair<unsigned int const,data::GravenInnocenceCampStageExcelConfig> *v9; // [rsp+30h] [rbp-60h]
  std::tuple_element<0,const std::pair<unsigned int const,data::GravenInnocenceCampStageExcelConfig> >::type *stage_id; // [rsp+38h] [rbp-58h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GravenInnocenceCampStageExcelConfig> >::type *stage_config; // [rsp+40h] [rbp-50h]
  GravenInnocenceCampStageData *stage_data; // [rsp+48h] [rbp-48h]
  std::shared_ptr<Config> v13; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v14; // [rsp+60h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.txt_config_mgr.activity_graven_innocence_mgr.graven_innocence_camp_stage_excel_config_map;
  std::shared_ptr<Config>::~shared_ptr(&v13);
  __for_begin._M_cur = std::unordered_map<unsigned int,data::GravenInnocenceCampStageExcelConfig>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::GravenInnocenceCampStageExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GravenInnocenceCampStageExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceCampStageExcelConfig>,false,false>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,data::GravenInnocenceCampStageExcelConfig>(v9);
    stage_config = (std::tuple_element<1,const std::pair<unsigned int const,data::GravenInnocenceCampStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GravenInnocenceCampStageExcelConfig>(v9);
    if ( std::vector<unsigned int>::empty(&stage_config->level_id_list) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/graven_innocence_activity.cpp",
        "init",
        225);
      v1 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
             &v14,
             (const char (*)[62])"[GRAVEN_INNOCENCE] camp config level_id_list empty, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, stage_id);
      common::milog::MiLogStream::~MiLogStream(&v14);
      return -1;
    }
    stage_data = std::map<unsigned int,GravenInnocenceCampStageData>::operator[](&this->stage_data_map, stage_id);
    if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v3 = *stage_id;
    if ( *(_BYTE *)(((unsigned __int64)stage_data >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_data >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(stage_data);
    }
    stage_data->stage_id = v3;
    if ( *(_BYTE *)(((unsigned __int64)&stage_data->is_open >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)stage_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_data->is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&stage_data->is_open);
    }
    stage_data->is_open = 0;
    v4 = std::vector<unsigned int>::operator[](&stage_config->level_id_list, 0LL);
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v5 = *v4;
    if ( *(_BYTE *)(((unsigned __int64)&stage_data->level_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)stage_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_data->level_id >> 3)
                                                               + 0x7FFF8000) )
    {
      __asan_report_store4(&stage_data->level_id);
    }
    stage_data->level_id = v5;
    if ( *(_BYTE *)(((unsigned __int64)&stage_data->is_finished >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)stage_data + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_data->is_finished >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_store1(&stage_data->is_finished);
    }
    stage_data->is_finished = 0;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceCampStageExcelConfig>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 238: range 000000001508E620-000000001508E63A
void __cdecl GravenInnocenceCampData::clear(GravenInnocenceCampData *const this)
{
  std::map<unsigned int,GravenInnocenceCampStageData>::clear(&this->stage_data_map);
};

// Line 244: range 000000001508E63C-000000001508E73D
int32_t __cdecl GravenInnocenceRaceLevelData::fromBin(
        GravenInnocenceRaceLevelData *const this,
        const proto::GravenInnocenceRaceLevelBin *bin)
{
  uint32_t v2; // ecx
  bool is_open; // cl
  uint32_t v4; // ecx

  v2 = proto::GravenInnocenceRaceLevelBin::level_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->level_id = v2;
  is_open = proto::GravenInnocenceRaceLevelBin::is_open(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = is_open;
  v4 = proto::GravenInnocenceRaceLevelBin::max_score(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_score);
  }
  this->max_score = v4;
  return 0;
};

// Line 252: range 000000001508E73E-000000001508E840
int32_t __cdecl GravenInnocenceRaceLevelData::toBin(
        const GravenInnocenceRaceLevelData *const this,
        proto::GravenInnocenceRaceLevelBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::GravenInnocenceRaceLevelBin::set_level_id(bin, this->level_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::GravenInnocenceRaceLevelBin::set_is_open(bin, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::GravenInnocenceRaceLevelBin::set_max_score(bin, this->max_score);
  return 0;
};

// Line 260: range 000000001508E842-000000001508E944
int32_t __cdecl GravenInnocenceRaceLevelData::toClient(
        const GravenInnocenceRaceLevelData *const this,
        proto::GravenInnocenceRaceLevelInfo *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::GravenInnocenceRaceLevelInfo::set_level_id(proto, this->level_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::GravenInnocenceRaceLevelInfo::set_is_open(proto, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::GravenInnocenceRaceLevelInfo::set_max_score(proto, this->max_score);
  return 0;
};

// Line 268: range 000000001508E946-000000001508EAC8
uint32_t __cdecl GravenInnocenceRaceLevelData::getGroupBundleId(GravenInnocenceRaceLevelData *const this)
{
  ActivityGravenInnocenceExcelConfigMgr *p_activity_graven_innocence_mgr; // rcx
  common::milog::MiLogStream *v2; // rdx
  const data::GravenInnocenceRaceLevelExcelConfig *level_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  p_activity_graven_innocence_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5)->design_config.txt_config_mgr.activity_graven_innocence_mgr;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  level_config_ptr = data::ActivityGravenInnocenceExcelConfigMgrBase::findGravenInnocenceRaceLevelExcelConfig(
                       p_activity_graven_innocence_mgr,
                       this->level_id);
  std::shared_ptr<Config>::~shared_ptr(&v5);
  if ( level_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->group_link_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)level_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->group_link_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    return level_config_ptr->group_link_id;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "getGroupBundleId",
      272);
    v2 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
           &v6,
           (const char (*)[77])"[GRAVEN_INNOCENCE] findGravenInnocenceRaceLevelExcelConfig failed, level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->level_id);
    common::milog::MiLogStream::~MiLogStream(&v6);
    return 0;
  }
};

// Line 279: range 000000001508EACA-000000001508ED4E
int32_t __cdecl GravenInnocenceRaceData::fromBin(
        GravenInnocenceRaceData *const this,
        const proto::GravenInnocenceRaceBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  GravenInnocenceRaceLevelData *v5; // r15
  unsigned int *v6; // rcx
  GravenInnocenceRaceLevelData *v7; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceRaceLevelData> >,bool> v8; // rax
  common::milog::MiLogStream *v9; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  google::protobuf::RepeatedPtrField<proto::GravenInnocenceRaceLevelBin>::const_iterator __for_begin; // [rsp+30h] [rbp-B0h] BYREF
  google::protobuf::RepeatedPtrField<proto::GravenInnocenceRaceLevelBin>::const_iterator __for_end; // [rsp+38h] [rbp-A8h] BYREF
  const google::protobuf::RepeatedPtrField<proto::GravenInnocenceRaceLevelBin> *__for_range; // [rsp+40h] [rbp-A0h]
  const proto::GravenInnocenceRaceLevelBin *level_bin; // [rsp+48h] [rbp-98h]
  common::milog::MiLogStream v16; // [rsp+50h] [rbp-90h] BYREF
  char v17[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 14 level_data:283";
  *(_QWORD *)(v2 + 16) = GravenInnocenceRaceData::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  std::map<unsigned int,GravenInnocenceRaceLevelData>::clear(&this->level_data_map);
  __for_range = proto::GravenInnocenceRaceBin::level_bin_list(bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::GravenInnocenceRaceLevelBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::GravenInnocenceRaceLevelBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::GravenInnocenceRaceLevelBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    level_bin = google::protobuf::internal::RepeatedPtrIterator<proto::GravenInnocenceRaceLevelBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = 0;
    *(_BYTE *)(v2 + 36) = 0;
    *(_DWORD *)(v2 + 40) = 0;
    GravenInnocenceRaceLevelData::fromBin((GravenInnocenceRaceLevelData *const)(v2 + 32), level_bin);
    v5 = std::move<GravenInnocenceRaceLevelData &>((GravenInnocenceRaceLevelData *)(v2 + 32));
    val = proto::GravenInnocenceRaceLevelBin::level_id(level_bin);
    v8 = std::map<unsigned int,GravenInnocenceRaceLevelData>::emplace<unsigned int,GravenInnocenceRaceLevelData>(
           &this->level_data_map,
           &val,
           v5,
           v6,
           v7);
    if ( !v8.second )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/graven_innocence_activity.cpp",
        "fromBin",
        287);
      v9 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
             &v16,
             (const char (*)[66])"[GRAVEN_INNOCENCE] race data fromBin failed, duplicated level_id:");
      val = proto::GravenInnocenceRaceLevelBin::level_id(level_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::GravenInnocenceRaceLevelBin const>::operator++(&__for_begin);
  }
  result = 0;
  if ( v17 == (char *)v2 )
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

// Line 294: range 000000001508ED50-000000001508EE06
int32_t __cdecl GravenInnocenceRaceData::toBin(
        const GravenInnocenceRaceData *const this,
        proto::GravenInnocenceRaceBin *bin)
{
  std::map<unsigned int,GravenInnocenceRaceLevelData>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,GravenInnocenceRaceLevelData>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::map<unsigned int,GravenInnocenceRaceLevelData> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,GravenInnocenceRaceLevelData> *v6; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,GravenInnocenceRaceLevelData> >::type *level_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,GravenInnocenceRaceLevelData> >::type *level_data; // [rsp+40h] [rbp-10h]
  proto::GravenInnocenceRaceLevelBin *level_bin; // [rsp+48h] [rbp-8h]

  __for_range = &this->level_data_map;
  __for_begin._M_node = std::map<unsigned int,GravenInnocenceRaceLevelData>::begin(&this->level_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,GravenInnocenceRaceLevelData>::end(&this->level_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocenceRaceLevelData>>::operator*(&__for_begin);
    level_id = std::get<0ul,unsigned int const,GravenInnocenceRaceLevelData>(v6);
    level_data = (std::tuple_element<1,const std::pair<unsigned int const,GravenInnocenceRaceLevelData> >::type *)std::get<1ul,unsigned int const,GravenInnocenceRaceLevelData>(v6);
    level_bin = proto::GravenInnocenceRaceBin::add_level_bin_list(bin);
    GravenInnocenceRaceLevelData::toBin(level_data, level_bin);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocenceRaceLevelData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 304: range 000000001508EE08-000000001508EEBE
int32_t __cdecl GravenInnocenceRaceData::toClient(
        const GravenInnocenceRaceData *const this,
        proto::GravenInnocenceRaceInfo *proto)
{
  std::map<unsigned int,GravenInnocenceRaceLevelData>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,GravenInnocenceRaceLevelData>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::map<unsigned int,GravenInnocenceRaceLevelData> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,GravenInnocenceRaceLevelData> *v6; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,GravenInnocenceRaceLevelData> >::type *level_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,GravenInnocenceRaceLevelData> >::type *level_data; // [rsp+40h] [rbp-10h]
  proto::GravenInnocenceRaceLevelInfo *level_info; // [rsp+48h] [rbp-8h]

  __for_range = &this->level_data_map;
  __for_begin._M_node = std::map<unsigned int,GravenInnocenceRaceLevelData>::begin(&this->level_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,GravenInnocenceRaceLevelData>::end(&this->level_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocenceRaceLevelData>>::operator*(&__for_begin);
    level_id = std::get<0ul,unsigned int const,GravenInnocenceRaceLevelData>(v6);
    level_data = (std::tuple_element<1,const std::pair<unsigned int const,GravenInnocenceRaceLevelData> >::type *)std::get<1ul,unsigned int const,GravenInnocenceRaceLevelData>(v6);
    level_info = proto::GravenInnocenceRaceInfo::add_level_info_list(proto);
    GravenInnocenceRaceLevelData::toClient(level_data, level_info);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocenceRaceLevelData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 314: range 000000001508EEC0-000000001508F0A5
int32_t __cdecl GravenInnocenceRaceData::init(GravenInnocenceRaceData *const this)
{
  uint32_t v1; // ecx
  std::unordered_map<unsigned int,data::GravenInnocenceRaceLevelExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,data::GravenInnocenceRaceLevelExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  const std::unordered_map<unsigned int,data::GravenInnocenceRaceLevelExcelConfig> *__for_range; // [rsp+28h] [rbp-38h]
  const std::pair<unsigned int const,data::GravenInnocenceRaceLevelExcelConfig> *v6; // [rsp+30h] [rbp-30h]
  std::tuple_element<0,const std::pair<unsigned int const,data::GravenInnocenceRaceLevelExcelConfig> >::type *level_id; // [rsp+38h] [rbp-28h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GravenInnocenceRaceLevelExcelConfig> >::type *level_config; // [rsp+40h] [rbp-20h]
  GravenInnocenceRaceLevelData *level_data; // [rsp+48h] [rbp-18h]
  std::shared_ptr<Config> v10; // [rsp+50h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.activity_graven_innocence_mgr.graven_innocence_race_level_excel_config_map;
  std::shared_ptr<Config>::~shared_ptr(&v10);
  __for_begin._M_cur = std::unordered_map<unsigned int,data::GravenInnocenceRaceLevelExcelConfig>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::GravenInnocenceRaceLevelExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GravenInnocenceRaceLevelExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceRaceLevelExcelConfig>,false,false>::operator*(&__for_begin);
    level_id = std::get<0ul,unsigned int const,data::GravenInnocenceRaceLevelExcelConfig>(v6);
    level_config = (std::tuple_element<1,const std::pair<unsigned int const,data::GravenInnocenceRaceLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GravenInnocenceRaceLevelExcelConfig>(v6);
    level_data = std::map<unsigned int,GravenInnocenceRaceLevelData>::operator[](&this->level_data_map, level_id);
    if ( *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v1 = *level_id;
    if ( *(_BYTE *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(level_data);
    }
    level_data->level_id = v1;
    if ( *(_BYTE *)(((unsigned __int64)&level_data->is_open >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)level_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&level_data->is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&level_data->is_open);
    }
    level_data->is_open = 0;
    if ( *(_BYTE *)(((unsigned __int64)&level_data->max_score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)level_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->max_score >> 3)
                                                               + 0x7FFF8000) )
    {
      __asan_report_store4(&level_data->max_score);
    }
    level_data->max_score = 0;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceRaceLevelExcelConfig>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 326: range 000000001508F0A6-000000001508F0C0
void __cdecl GravenInnocenceRaceData::clear(GravenInnocenceRaceData *const this)
{
  std::map<unsigned int,GravenInnocenceRaceLevelData>::clear(&this->level_data_map);
};

// Line 332: range 000000001508F0C2-000000001508F637
int32_t __cdecl GravenInnocenceCarveData::fromBin(
        GravenInnocenceCarveData *const this,
        const proto::GravenInnocenceCarveBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  GravenInnocenceCarveStageData *v5; // r15
  unsigned int *v6; // rcx
  GravenInnocenceCarveStageData *v7; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceCarveStageData> >,bool> v8; // rax
  common::milog::MiLogStream *v9; // r14
  google::protobuf::uint32 v10; // r14d
  GravenInnocenceCarveUsedItemData *v11; // r15
  std::map<unsigned int,unsigned int>::mapped_type *v12; // rax
  google::protobuf::uint32 *v13; // rdx
  google::protobuf::uint32 v14; // r14d
  std::unordered_map<unsigned int,unsigned int> *p_pass_item_count_map; // r15
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v16; // rax
  google::protobuf::uint32 *v17; // rdx
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-F4h] BYREF
  google::protobuf::RepeatedPtrField<proto::GravenInnocenceCarveUsedItemBin>::const_iterator __for_begin_0; // [rsp+30h] [rbp-F0h] BYREF
  google::protobuf::RepeatedPtrField<proto::GravenInnocenceCarveUsedItemBin>::const_iterator __for_end_0; // [rsp+38h] [rbp-E8h] BYREF
  google::protobuf::RepeatedPtrField<proto::ItemParamBin>::const_iterator __for_begin; // [rsp+40h] [rbp-E0h] BYREF
  const google::protobuf::RepeatedPtrField<proto::GravenInnocenceCarveStageBin> *__for_range; // [rsp+48h] [rbp-D8h]
  const google::protobuf::RepeatedPtrField<proto::GravenInnocenceCarveUsedItemBin> *__for_range_0; // [rsp+50h] [rbp-D0h]
  const proto::GravenInnocenceCarveUsedItemBin *used_item_bin; // [rsp+58h] [rbp-C8h]
  GravenInnocenceCarveUsedItemData *used_item_data; // [rsp+60h] [rbp-C0h]
  const google::protobuf::RepeatedPtrField<proto::ItemParamBin> *__for_range_1; // [rsp+68h] [rbp-B8h]
  const google::protobuf::RepeatedPtrField<proto::ItemParamBin> *__for_range_2; // [rsp+70h] [rbp-B0h]
  const proto::ItemParamBin *pass_item_bin; // [rsp+78h] [rbp-A8h]
  const proto::ItemParamBin *need_item_bin; // [rsp+80h] [rbp-A0h]
  const proto::GravenInnocenceCarveStageBin *stage_bin; // [rsp+88h] [rbp-98h]
  common::milog::MiLogStream v32; // [rsp+90h] [rbp-90h] BYREF
  char v33[112]; // [rsp+B0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 14 stage_data:336";
  *(_QWORD *)(v2 + 16) = GravenInnocenceCarveData::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  std::map<unsigned int,GravenInnocenceCarveStageData>::clear(&this->stage_data_map);
  __for_range = proto::GravenInnocenceCarveBin::stage_bin_list(bin);
  __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::GravenInnocenceCarveStageBin>::begin(__for_range).it_;
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::GravenInnocenceCarveStageBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::GravenInnocenceCarveStageBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::GravenInnocenceCarveStageBin> *const)&__for_end_0,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::GravenInnocenceCarveStageBin>::iterator *)&__for_begin) )
  {
    stage_bin = google::protobuf::internal::RepeatedPtrIterator<proto::GravenInnocenceCarveStageBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::GravenInnocenceCarveStageBin> *const)&__for_end_0);
    *(_DWORD *)(v2 + 32) = 0;
    *(_BYTE *)(v2 + 36) = 0;
    *(_DWORD *)(v2 + 32) = proto::GravenInnocenceCarveStageBin::stage_id(stage_bin);
    *(_BYTE *)(v2 + 36) = proto::GravenInnocenceCarveStageBin::is_open(stage_bin);
    v5 = std::move<GravenInnocenceCarveStageData &>((GravenInnocenceCarveStageData *)(v2 + 32));
    val = proto::GravenInnocenceCarveStageBin::stage_id(stage_bin);
    v8 = std::map<unsigned int,GravenInnocenceCarveStageData>::emplace<unsigned int,GravenInnocenceCarveStageData>(
           &this->stage_data_map,
           &val,
           v5,
           v6,
           v7);
    if ( !v8.second )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/graven_innocence_activity.cpp",
        "fromBin",
        341);
      v9 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
             &v32,
             (const char (*)[67])"[GRAVEN_INNOCENCE] carve data fromBin failed, duplicated stage_id:");
      val = proto::GravenInnocenceCarveStageBin::stage_id(stage_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v32);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::GravenInnocenceCarveStageBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::GravenInnocenceCarveStageBin> *const)&__for_end_0);
  }
  std::map<unsigned int,GravenInnocenceCarveUsedItemData>::clear(&this->used_item_data_map);
  __for_range_0 = proto::GravenInnocenceCarveBin::used_item_bin_list(bin);
  __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::GravenInnocenceCarveUsedItemBin>::begin(__for_range_0).it_;
  __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::GravenInnocenceCarveUsedItemBin>::end(__for_range_0).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::GravenInnocenceCarveUsedItemBin const>::operator!=(
            &__for_begin_0,
            &__for_end_0) )
  {
    used_item_bin = google::protobuf::internal::RepeatedPtrIterator<proto::GravenInnocenceCarveUsedItemBin const>::operator*(&__for_begin_0);
    val = proto::GravenInnocenceCarveUsedItemBin::gadget_config_id(used_item_bin);
    used_item_data = std::map<unsigned int,GravenInnocenceCarveUsedItemData>::operator[](
                       &this->used_item_data_map,
                       &val);
    __for_range_1 = proto::GravenInnocenceCarveUsedItemBin::need_item_bin_list(used_item_bin);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ItemParamBin>::begin(__for_range_1).it_;
    *(google::protobuf::RepeatedPtrField<proto::ItemParamBin>::const_iterator *)(v2 + 32) = google::protobuf::RepeatedPtrField<proto::ItemParamBin>::end(__for_range_1);
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::ItemParamBin const>::operator!=(
              &__for_begin,
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::ItemParamBin>::iterator *)(v2 + 32)) )
    {
      need_item_bin = google::protobuf::internal::RepeatedPtrIterator<proto::ItemParamBin const>::operator*(&__for_begin);
      v10 = proto::ItemParamBin::count(need_item_bin);
      v11 = used_item_data;
      val = proto::ItemParamBin::item_id(need_item_bin);
      v12 = std::map<unsigned int,unsigned int>::operator[](&v11->need_item_count_map, &val);
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v12);
      }
      *v13 = v10;
      google::protobuf::internal::RepeatedPtrIterator<proto::ItemParamBin const>::operator++(&__for_begin);
    }
    __for_range_2 = proto::GravenInnocenceCarveUsedItemBin::pass_item_bin_list(used_item_bin);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ItemParamBin>::begin(__for_range_2).it_;
    *(google::protobuf::RepeatedPtrField<proto::ItemParamBin>::const_iterator *)(v2 + 32) = google::protobuf::RepeatedPtrField<proto::ItemParamBin>::end(__for_range_2);
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::ItemParamBin const>::operator!=(
              &__for_begin,
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::ItemParamBin>::iterator *)(v2 + 32)) )
    {
      pass_item_bin = google::protobuf::internal::RepeatedPtrIterator<proto::ItemParamBin const>::operator*(&__for_begin);
      v14 = proto::ItemParamBin::count(pass_item_bin);
      p_pass_item_count_map = &used_item_data->pass_item_count_map;
      val = proto::ItemParamBin::item_id(pass_item_bin);
      v16 = std::unordered_map<unsigned int,unsigned int>::operator[](p_pass_item_count_map, &val);
      v17 = v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v16);
      }
      *v17 = v14;
      google::protobuf::internal::RepeatedPtrIterator<proto::ItemParamBin const>::operator++(&__for_begin);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::GravenInnocenceCarveUsedItemBin const>::operator++(&__for_begin_0);
  }
  result = 0;
  if ( v33 == (char *)v2 )
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

// Line 361: range 000000001508F638-000000001508FB3A
int32_t __cdecl GravenInnocenceCarveData::toBin(
        const GravenInnocenceCarveData *const this,
        proto::GravenInnocenceCarveBin *bin)
{
  std::map<unsigned int,GravenInnocenceCarveUsedItemData>::const_iterator __for_begin_0; // [rsp+10h] [rbp-C0h] BYREF
  std::map<unsigned int,GravenInnocenceCarveUsedItemData>::const_iterator __for_end_0; // [rsp+18h] [rbp-B8h] BYREF
  std::map<unsigned int,GravenInnocenceCarveStageData>::const_iterator __for_begin; // [rsp+20h] [rbp-B0h] BYREF
  std::map<unsigned int,GravenInnocenceCarveStageData>::const_iterator __for_end; // [rsp+28h] [rbp-A8h] BYREF
  const std::map<unsigned int,GravenInnocenceCarveStageData> *__for_range; // [rsp+30h] [rbp-A0h]
  const std::map<unsigned int,GravenInnocenceCarveUsedItemData> *__for_range_0; // [rsp+38h] [rbp-98h]
  const std::pair<unsigned int const,GravenInnocenceCarveUsedItemData> *v9; // [rsp+40h] [rbp-90h]
  std::tuple_element<0,const std::pair<unsigned int const,GravenInnocenceCarveUsedItemData> >::type *gadget_config_id; // [rsp+48h] [rbp-88h]
  std::tuple_element<1,const std::pair<unsigned int const,GravenInnocenceCarveUsedItemData> >::type *used_item_data; // [rsp+50h] [rbp-80h]
  proto::GravenInnocenceCarveUsedItemBin *used_item_bin; // [rsp+58h] [rbp-78h]
  const std::map<unsigned int,unsigned int> *__for_range_1; // [rsp+60h] [rbp-70h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range_2; // [rsp+68h] [rbp-68h]
  const std::pair<unsigned int const,unsigned int> *v15; // [rsp+70h] [rbp-60h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *item_id_0; // [rsp+78h] [rbp-58h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count_0; // [rsp+80h] [rbp-50h]
  proto::ItemParamBin *pass_item_bin; // [rsp+88h] [rbp-48h]
  const std::pair<unsigned int const,unsigned int> *v19; // [rsp+90h] [rbp-40h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *item_id; // [rsp+98h] [rbp-38h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+A0h] [rbp-30h]
  proto::ItemParamBin *need_item_bin; // [rsp+A8h] [rbp-28h]
  const std::pair<unsigned int const,GravenInnocenceCarveStageData> *v23; // [rsp+B0h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,GravenInnocenceCarveStageData> >::type *stage_id; // [rsp+B8h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,GravenInnocenceCarveStageData> >::type *stage_data; // [rsp+C0h] [rbp-10h]
  proto::GravenInnocenceCarveStageBin *stage_bin; // [rsp+C8h] [rbp-8h]

  __for_range = &this->stage_data_map;
  __for_begin._M_node = std::map<unsigned int,GravenInnocenceCarveStageData>::begin(&this->stage_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,GravenInnocenceCarveStageData>::end(&this->stage_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v23 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocenceCarveStageData>>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,GravenInnocenceCarveStageData>(v23);
    stage_data = (std::tuple_element<1,const std::pair<unsigned int const,GravenInnocenceCarveStageData> >::type *)std::get<1ul,unsigned int const,GravenInnocenceCarveStageData>(v23);
    stage_bin = proto::GravenInnocenceCarveBin::add_stage_bin_list(bin);
    if ( *(_BYTE *)(((unsigned __int64)stage_data >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_data >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::GravenInnocenceCarveStageBin::set_stage_id(stage_bin, stage_data->stage_id);
    if ( *(_BYTE *)(((unsigned __int64)&stage_data->is_open >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)stage_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_data->is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&stage_data->is_open);
    }
    proto::GravenInnocenceCarveStageBin::set_is_open(stage_bin, stage_data->is_open);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocenceCarveStageData>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->used_item_data_map;
  __for_begin_0._M_node = std::map<unsigned int,GravenInnocenceCarveUsedItemData>::begin(&this->used_item_data_map)._M_node;
  __for_end_0._M_node = std::map<unsigned int,GravenInnocenceCarveUsedItemData>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin_0, &__for_end_0) )
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocenceCarveUsedItemData>>::operator*(&__for_begin_0);
    gadget_config_id = std::get<0ul,unsigned int const,GravenInnocenceCarveUsedItemData>(v9);
    used_item_data = (std::tuple_element<1,const std::pair<unsigned int const,GravenInnocenceCarveUsedItemData> >::type *)std::get<1ul,unsigned int const,GravenInnocenceCarveUsedItemData>(v9);
    used_item_bin = proto::GravenInnocenceCarveBin::add_used_item_bin_list(bin);
    if ( *(_BYTE *)(((unsigned __int64)gadget_config_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)gadget_config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gadget_config_id >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::GravenInnocenceCarveUsedItemBin::set_gadget_config_id(used_item_bin, *gadget_config_id);
    __for_range_1 = &used_item_data->need_item_count_map;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&used_item_data->need_item_count_map)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_1)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
    {
      v19 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
      item_id = std::get<0ul,unsigned int const,unsigned int>(v19);
      count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v19);
      need_item_bin = proto::GravenInnocenceCarveUsedItemBin::add_need_item_bin_list(used_item_bin);
      if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::ItemParamBin::set_item_id(need_item_bin, *item_id);
      if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::ItemParamBin::set_count(need_item_bin, *count);
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
    }
    __for_range_2 = &used_item_data->pass_item_count_map;
    __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocenceCarveStageData> >::_Base_ptr)std::unordered_map<unsigned int,unsigned int>::begin(&used_item_data->pass_item_count_map)._M_cur;
    __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocenceCarveStageData> >::_Base_ptr)std::unordered_map<unsigned int,unsigned int>::end(__for_range_2)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_begin,
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_end) )
    {
      v15 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&__for_begin);
      item_id_0 = std::get<0ul,unsigned int const,unsigned int>(v15);
      count_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v15);
      pass_item_bin = proto::GravenInnocenceCarveUsedItemBin::add_pass_item_bin_list(used_item_bin);
      if ( *(_BYTE *)(((unsigned __int64)item_id_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)item_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::ItemParamBin::set_item_id(pass_item_bin, *item_id_0);
      if ( *(_BYTE *)(((unsigned __int64)count_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)count_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::ItemParamBin::set_count(pass_item_bin, *count_0);
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&__for_begin);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocenceCarveUsedItemData>>::operator++(&__for_begin_0);
  }
  return 0;
};

// Line 389: range 000000001508FB3C-000000001508FC82
int32_t __cdecl GravenInnocenceCarveData::toClient(
        const GravenInnocenceCarveData *const this,
        proto::GravenInnocenceCarveInfo *proto)
{
  std::map<unsigned int,GravenInnocenceCarveStageData>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,GravenInnocenceCarveStageData>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::map<unsigned int,GravenInnocenceCarveStageData> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,GravenInnocenceCarveStageData> *v6; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,GravenInnocenceCarveStageData> >::type *stage_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,GravenInnocenceCarveStageData> >::type *stage_data; // [rsp+40h] [rbp-10h]
  proto::GravenInnocenceCarveStageInfo *stage_info; // [rsp+48h] [rbp-8h]

  __for_range = &this->stage_data_map;
  __for_begin._M_node = std::map<unsigned int,GravenInnocenceCarveStageData>::begin(&this->stage_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,GravenInnocenceCarveStageData>::end(&this->stage_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocenceCarveStageData>>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,GravenInnocenceCarveStageData>(v6);
    stage_data = (std::tuple_element<1,const std::pair<unsigned int const,GravenInnocenceCarveStageData> >::type *)std::get<1ul,unsigned int const,GravenInnocenceCarveStageData>(v6);
    stage_info = proto::GravenInnocenceCarveInfo::add_stage_info_list(proto);
    if ( *(_BYTE *)(((unsigned __int64)stage_data >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_data >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::GravenInnocenceCarveStageInfo::set_stage_id(stage_info, stage_data->stage_id);
    if ( *(_BYTE *)(((unsigned __int64)&stage_data->is_open >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)stage_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_data->is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&stage_data->is_open);
    }
    proto::GravenInnocenceCarveStageInfo::set_is_open(stage_info, stage_data->is_open);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocenceCarveStageData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 400: range 000000001508FC84-000000001508FE23
int32_t __cdecl GravenInnocenceCarveData::init(GravenInnocenceCarveData *const this)
{
  uint32_t v1; // ecx
  std::unordered_map<unsigned int,data::GravenInnocenceCarveStageExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,data::GravenInnocenceCarveStageExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  const std::unordered_map<unsigned int,data::GravenInnocenceCarveStageExcelConfig> *__for_range; // [rsp+28h] [rbp-38h]
  const std::pair<unsigned int const,data::GravenInnocenceCarveStageExcelConfig> *v6; // [rsp+30h] [rbp-30h]
  std::tuple_element<0,const std::pair<unsigned int const,data::GravenInnocenceCarveStageExcelConfig> >::type *stage_id; // [rsp+38h] [rbp-28h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GravenInnocenceCarveStageExcelConfig> >::type *_; // [rsp+40h] [rbp-20h]
  GravenInnocenceCarveStageData *stage_data; // [rsp+48h] [rbp-18h]
  std::shared_ptr<Config> v10; // [rsp+50h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.activity_graven_innocence_mgr.graven_innocence_carve_stage_excel_config_map;
  std::shared_ptr<Config>::~shared_ptr(&v10);
  __for_begin._M_cur = std::unordered_map<unsigned int,data::GravenInnocenceCarveStageExcelConfig>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::GravenInnocenceCarveStageExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GravenInnocenceCarveStageExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceCarveStageExcelConfig>,false,false>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,data::GravenInnocenceCarveStageExcelConfig>(v6);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,data::GravenInnocenceCarveStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GravenInnocenceCarveStageExcelConfig>(v6);
    stage_data = std::map<unsigned int,GravenInnocenceCarveStageData>::operator[](&this->stage_data_map, stage_id);
    if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v1 = *stage_id;
    if ( *(_BYTE *)(((unsigned __int64)stage_data >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_data >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(stage_data);
    }
    stage_data->stage_id = v1;
    if ( *(_BYTE *)(((unsigned __int64)&stage_data->is_open >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)stage_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_data->is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&stage_data->is_open);
    }
    stage_data->is_open = 0;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GravenInnocenceCarveStageExcelConfig>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 411: range 000000001508FE24-000000001508FE4E
void __cdecl GravenInnocenceCarveData::clear(GravenInnocenceCarveData *const this)
{
  std::map<unsigned int,GravenInnocenceCarveStageData>::clear(&this->stage_data_map);
  std::map<unsigned int,GravenInnocenceCarveUsedItemData>::clear(&this->used_item_data_map);
};

// Line 417: range 000000001508FE50-0000000015090334
int32_t __cdecl GravenInnocenceActivity::fromScheduleBin(
        GravenInnocenceActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  bool is_content_closed; // dl
  google::protobuf::uint32 v3; // ebx
  std::unordered_map<proto::VirtualItem,unsigned int>::mapped_type *v4; // rax
  google::protobuf::uint32 *v5; // rdx
  google::protobuf::uint32 v6; // ebx
  std::unordered_map<proto::VirtualItem,unsigned int>::mapped_type *v7; // rax
  google::protobuf::uint32 *v8; // rdx
  const proto::GravenInnocencePhotoBin *v9; // rax
  common::milog::MiLogStream *v10; // rbx
  const proto::GravenInnocenceCampBin *v11; // rax
  common::milog::MiLogStream *v12; // rbx
  const proto::GravenInnocenceRaceBin *v13; // rax
  common::milog::MiLogStream *v14; // rbx
  const proto::GravenInnocenceCarveBin *v15; // rax
  common::milog::MiLogStream *v16; // rbx
  std::unordered_map<proto::VirtualItem,unsigned int>::key_type __k; // [rsp+14h] [rbp-3Ch] BYREF
  const proto::GravenInnocenceScheduleBin *schedule_bin; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v20; // [rsp+20h] [rbp-30h] BYREF

  schedule_bin = proto::ActivityScheduleBin::graven_innocence_bin(bin);
  is_content_closed = proto::GravenInnocenceScheduleBin::is_content_closed(schedule_bin);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = is_content_closed;
  std::unordered_map<proto::VirtualItem,unsigned int>::clear(&this->activity_coin_map_);
  v3 = proto::GravenInnocenceScheduleBin::coin_a(schedule_bin);
  __k = ITEM_VIRTUAL_GRAVEN_INNOCENCE_COIN_A;
  v4 = std::unordered_map<proto::VirtualItem,unsigned int>::operator[](&this->activity_coin_map_, &__k);
  v5 = v4;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v4);
  }
  *v5 = v3;
  v6 = proto::GravenInnocenceScheduleBin::coin_b(schedule_bin);
  __k = ITEM_VIRTUAL_GRAVEN_INNOCENCE_COIN_B;
  v7 = std::unordered_map<proto::VirtualItem,unsigned int>::operator[](&this->activity_coin_map_, &__k);
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v7);
  }
  *v8 = v6;
  v9 = proto::GravenInnocenceScheduleBin::photo_bin(schedule_bin);
  if ( GravenInnocencePhotoData::fromBin(&this->photo_data_, v9) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "fromScheduleBin",
      425);
    v10 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
            &v20,
            (const char (*)[51])"[GRAVEN_INNOCENCE] photo data fromBin failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    __k = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)&__k);
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  v11 = proto::GravenInnocenceScheduleBin::camp_bin(schedule_bin);
  if ( GravenInnocenceCampData::fromBin(&this->camp_data_, v11) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "fromScheduleBin",
      429);
    v12 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
            &v20,
            (const char (*)[50])"[GRAVEN_INNOCENCE] camp data fromBin failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    __k = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)&__k);
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  v13 = proto::GravenInnocenceScheduleBin::race_bin(schedule_bin);
  if ( GravenInnocenceRaceData::fromBin(&this->race_data_, v13) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "fromScheduleBin",
      433);
    v14 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
            &v20,
            (const char (*)[50])"[GRAVEN_INNOCENCE] race data fromBin failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    __k = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)&__k);
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  v15 = proto::GravenInnocenceScheduleBin::carve_bin(schedule_bin);
  if ( GravenInnocenceCarveData::fromBin(&this->carve_data_, v15) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "fromScheduleBin",
      437);
    v16 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
            &v20,
            (const char (*)[51])"[GRAVEN_INNOCENCE] carve data fromBin failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    __k = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)&__k);
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  return 0;
};

// Line 443: range 0000000015090336-00000000150908E2
int32_t __cdecl GravenInnocenceActivity::toScheduleBin(
        const GravenInnocenceActivity *const this,
        proto::ActivityScheduleBin *bin)
{
  proto::GravenInnocencePhotoBin *v2; // rax
  common::milog::MiLogStream *v3; // rbx
  proto::GravenInnocenceCampBin *v4; // rax
  common::milog::MiLogStream *v5; // rbx
  proto::GravenInnocenceRaceBin *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  proto::GravenInnocenceCarveBin *v8; // rax
  common::milog::MiLogStream *v9; // rbx
  unsigned int val; // [rsp+14h] [rbp-6Ch] BYREF
  std::unordered_map<proto::VirtualItem,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::unordered_map<proto::VirtualItem,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  proto::GravenInnocenceScheduleBin *schedule_bin; // [rsp+28h] [rbp-58h]
  const std::unordered_map<proto::VirtualItem,unsigned int> *__for_range; // [rsp+30h] [rbp-50h]
  const std::pair<const proto::VirtualItem,unsigned int> *v16; // [rsp+38h] [rbp-48h]
  std::tuple_element<0,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_type; // [rsp+40h] [rbp-40h]
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_num; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-30h] BYREF

  schedule_bin = proto::ActivityScheduleBin::mutable_graven_innocence_bin(bin);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  proto::GravenInnocenceScheduleBin::set_is_content_closed(schedule_bin, this->is_content_closed_);
  __for_range = &this->activity_coin_map_;
  __for_begin._M_cur = std::unordered_map<proto::VirtualItem,unsigned int>::begin(&this->activity_coin_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<proto::VirtualItem,unsigned int>::end(&this->activity_coin_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<proto::VirtualItem const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v16 = std::__detail::_Node_const_iterator<std::pair<proto::VirtualItem const,unsigned int>,false,false>::operator*(&__for_begin);
    coin_type = std::get<0ul,proto::VirtualItem const,unsigned int>(v16);
    coin_num = (std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *)std::get<1ul,proto::VirtualItem const,unsigned int>(v16);
    if ( *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)coin_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( *coin_type == ITEM_VIRTUAL_GRAVEN_INNOCENCE_COIN_A )
    {
      if ( *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)coin_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::GravenInnocenceScheduleBin::set_coin_a(schedule_bin, *coin_num);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)coin_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( *coin_type == ITEM_VIRTUAL_GRAVEN_INNOCENCE_COIN_B )
      {
        if ( *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)coin_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::GravenInnocenceScheduleBin::set_coin_b(schedule_bin, *coin_num);
      }
    }
    std::__detail::_Node_const_iterator<std::pair<proto::VirtualItem const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  v2 = proto::GravenInnocenceScheduleBin::mutable_photo_bin(schedule_bin);
  if ( GravenInnocencePhotoData::toBin(&this->photo_data_, v2) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "toScheduleBin",
      459);
    v3 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v19,
           (const char (*)[49])"[GRAVEN_INNOCENCE] photo data toBin failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  v4 = proto::GravenInnocenceScheduleBin::mutable_camp_bin(schedule_bin);
  if ( GravenInnocenceCampData::toBin(&this->camp_data_, v4) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "toScheduleBin",
      463);
    v5 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v19,
           (const char (*)[48])"[GRAVEN_INNOCENCE] camp data toBin failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  v6 = proto::GravenInnocenceScheduleBin::mutable_race_bin(schedule_bin);
  if ( GravenInnocenceRaceData::toBin(&this->race_data_, v6) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "toScheduleBin",
      467);
    v7 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v19,
           (const char (*)[48])"[GRAVEN_INNOCENCE] race data toBin failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  v8 = proto::GravenInnocenceScheduleBin::mutable_carve_bin(schedule_bin);
  if ( GravenInnocenceCarveData::toBin(&this->carve_data_, v8) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "toScheduleBin",
      471);
    v9 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v19,
           (const char (*)[49])"[GRAVEN_INNOCENCE] carve data toBin failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  return 0;
};

// Line 477: range 00000000150908E4-0000000015091034
int32_t __cdecl GravenInnocenceActivity::toClient(
        GravenInnocenceActivity *const this,
        proto::ActivityInfo *activity_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  proto::GravenInnocencePhotoInfo *v8; // rax
  proto::GravenInnocenceCampInfo *v9; // rax
  proto::GravenInnocenceRaceInfo *v10; // rax
  int32_t v11; // r14d
  uint32_t CanEditCount; // eax
  google::protobuf::RepeatedField<unsigned int> *v13; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-E4h] BYREF
  proto::GravenInnocenceDetailInfo *detail_info; // [rsp+20h] [rbp-E0h]
  proto::GravenInnocenceCarveInfo *carve_info; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-D0h] BYREF
  char v19[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 56 26 has_edit_config_id_set:507";
  *(_QWORD *)(v2 + 16) = GravenInnocenceActivity::toClient;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "toClient",
      480);
    v5 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
           &v18,
           (const char (*)[62])"[GRAVEN_INNOCENCE] BaseActivity::toClient fails, schedule_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->schedule_id_);
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_25:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v11 = -1;
    goto LABEL_27;
  }
  detail_info = proto::ActivityInfo::mutable_graven_innocence_info(activity_info);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  proto::GravenInnocenceDetailInfo::set_is_content_closed(detail_info, this->is_content_closed_);
  v8 = proto::GravenInnocenceDetailInfo::mutable_photo_info(detail_info);
  if ( GravenInnocencePhotoData::toClient(&this->photo_data_, v8) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "toClient",
      487);
    v7 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v18,
           (const char (*)[52])"[GRAVEN_INNOCENCE] photo data toClient failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_25;
  }
  v9 = proto::GravenInnocenceDetailInfo::mutable_camp_info(detail_info);
  if ( GravenInnocenceCampData::toClient(&this->camp_data_, v9) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "toClient",
      492);
    v7 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v18,
           (const char (*)[51])"[GRAVEN_INNOCENCE] camp data toClient failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_25;
  }
  v10 = proto::GravenInnocenceDetailInfo::mutable_race_info(detail_info);
  if ( GravenInnocenceRaceData::toClient(&this->race_data_, v10) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "toClient",
      497);
    v7 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v18,
           (const char (*)[51])"[GRAVEN_INNOCENCE] race data toClient failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_25;
  }
  carve_info = proto::GravenInnocenceDetailInfo::mutable_carve_info(detail_info);
  if ( GravenInnocenceCarveData::toClient(&this->carve_data_, carve_info) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "toClient",
      503);
    v7 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v18,
           (const char (*)[52])"[GRAVEN_INNOCENCE] carve data toClient failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_25;
  }
  CanEditCount = GravenInnocenceActivity::getCarveCanEditCount(this);
  proto::GravenInnocenceCarveInfo::set_can_edit_count(carve_info, CanEditCount);
  GravenInnocenceActivity::getCarveHasEditConfigIdSet((std::unordered_set<unsigned int> *)(v2 + 32), this, 0);
  v13 = proto::GravenInnocenceCarveInfo::mutable_has_edit_config_id_list(carve_info);
  common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(
    (const std::unordered_set<unsigned int> *)(v2 + 32),
    v13);
  v11 = 0;
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v2 + 32));
LABEL_27:
  result = v11;
  if ( v19 == (char *)v2 )
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
  return result;
};

// Line 514: range 0000000015091036-00000000150910D7
int32_t __cdecl GravenInnocenceActivity::init(GravenInnocenceActivity *const this)
{
  char v1; // al

  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
    goto LABEL_6;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
LABEL_6:
    v1 = 1;
  else
    v1 = 0;
  if ( !v1 )
    GravenInnocenceActivity::registerObserver(this);
  return 0;
};

// Line 524: range 00000000150910D8-00000000150915B6
void __cdecl GravenInnocenceActivity::onPreStart(GravenInnocenceActivity *const this)
{
  common::milog::MiLogStream *v1; // rbx
  std::unordered_map<proto::VirtualItem,unsigned int>::mapped_type *v2; // rax
  _DWORD *v3; // rdx
  std::unordered_map<proto::VirtualItem,unsigned int>::mapped_type *v4; // rax
  _DWORD *v5; // rdx
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rbx
  common::milog::MiLogStream *v8; // rbx
  common::milog::MiLogStream *v9; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/graven_innocence_activity.cpp",
    "onPreStart",
    525);
  v1 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
         &v11,
         (const char (*)[36])"[GRAVEN_INNOCENCE] onPreStart, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
  common::milog::MiLogStream::~MiLogStream(&v11);
  std::unordered_map<proto::VirtualItem,unsigned int>::clear(&this->activity_coin_map_);
  val = 143;
  v2 = std::unordered_map<proto::VirtualItem,unsigned int>::operator[](
         &this->activity_coin_map_,
         (std::unordered_map<proto::VirtualItem,unsigned int>::key_type *)&val);
  v3 = v2;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v2);
  }
  *v3 = 0;
  val = 144;
  v4 = std::unordered_map<proto::VirtualItem,unsigned int>::operator[](
         &this->activity_coin_map_,
         (std::unordered_map<proto::VirtualItem,unsigned int>::key_type *)&val);
  v5 = v4;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v4);
  }
  *v5 = 0;
  if ( GravenInnocenceCampData::init(&this->camp_data_) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "onPreStart",
      533);
    v6 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v11,
           (const char (*)[47])"[GRAVEN_INNOCENCE] camp data init failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
  if ( GravenInnocenceRaceData::init(&this->race_data_) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "onPreStart",
      539);
    v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v11,
           (const char (*)[47])"[GRAVEN_INNOCENCE] race data init failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
  if ( GravenInnocenceCarveData::init(&this->carve_data_) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "onPreStart",
      545);
    v8 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v11,
           (const char (*)[48])"[GRAVEN_INNOCENCE] carve data init failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
  if ( GravenInnocencePhotoData::init(&this->photo_data_) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "onPreStart",
      551);
    v9 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v11,
           (const char (*)[48])"[GRAVEN_INNOCENCE] photo data init failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
};

// Line 556: range 00000000150915B8-00000000150915D2
void __cdecl GravenInnocenceActivity::onStart(GravenInnocenceActivity *const this)
{
  GravenInnocenceActivity::registerObserver(this);
};

// Line 561: range 00000000150915D4-00000000150915EE
void __cdecl GravenInnocenceActivity::onSettle(GravenInnocenceActivity *const this)
{
  GravenInnocenceActivity::unregisterObserver(this);
};

// Line 566: range 00000000150915F0-0000000015091649
void __cdecl GravenInnocenceActivity::onDailyRefresh(GravenInnocenceActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    BaseActivity::notifyClientData(this, 0);
};

// Line 575: range 000000001509164A-00000000150916F2
void __cdecl GravenInnocenceActivity::onClear(GravenInnocenceActivity *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = 0;
  std::unordered_map<proto::VirtualItem,unsigned int>::clear(&this->activity_coin_map_);
  GravenInnocencePhotoData::clear(&this->photo_data_);
  GravenInnocenceCampData::clear(&this->camp_data_);
  GravenInnocenceRaceData::clear(&this->race_data_);
  GravenInnocenceCarveData::clear(&this->carve_data_);
};

// Line 585: range 00000000150916F4-0000000015092632
int32_t __cdecl GravenInnocenceActivity::execAction(
        GravenInnocenceActivity *const this,
        const data::NewActivityExec *action_exec)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rbx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  const std::string *v8; // rax
  common::milog::MiLogStream *v9; // rbx
  const std::string *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rbx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rbx
  common::milog::MiLogStream *v16; // rax
  const std::string *v17; // rax
  common::milog::MiLogStream *v18; // rbx
  const std::string *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rbx
  common::milog::MiLogStream *v24; // rax
  const std::string *v25; // rax
  common::milog::MiLogStream *v26; // rbx
  const std::string *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rbx
  common::milog::MiLogStream *v32; // rax
  int32_t result; // eax
  const std::string *v34; // rax
  common::milog::MiLogStream *v35; // rbx
  const std::string *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  unsigned int Uid; // [rsp+14h] [rbp-8Ch] BYREF
  unsigned __int64 val; // [rsp+18h] [rbp-88h] BYREF
  common::milog::MiLogStream v42; // [rsp+20h] [rbp-80h] BYREF
  char v43[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 stage_id:661";
  *(_QWORD *)(v2 + 16) = GravenInnocenceActivity::execAction;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  switch ( action_exec->type )
  {
    case NEW_ACTIVITY_ACTION_OPEN_GRAVEN_INNOCENCE_CAMP_STAGE:
      if ( !std::vector<std::string>::size(&action_exec->param) )
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/graven_innocence_activity.cpp",
          "execAction",
          598);
        v5 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
               &v42,
               (const char (*)[38])"[GRAVEN_INNOCENCE] action param size ");
        val = std::vector<std::string>::size(&action_exec->param);
        v6 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v5, &val);
        v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v6, (const char (*)[18])off_256F2400);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        goto LABEL_47;
      }
      *(_DWORD *)(v2 + 32) = 0;
      v8 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v8, (unsigned int *)(v2 + 32), 1) )
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/graven_innocence_activity.cpp",
          "execAction",
          604);
        v9 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
               &v42,
               (const char (*)[29])"[GRAVEN_INNOCENCE] strToNum ");
        v10 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, v10);
        v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])" failed, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      else
      {
        if ( !GravenInnocenceActivity::openCampStage(this, *(_DWORD *)(v2 + 32)) )
          goto LABEL_57;
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/graven_innocence_activity.cpp",
          "execAction",
          609);
        v13 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                &v42,
                (const char (*)[51])"[GRAVEN_INNOCENCE] openCampStage failed, stage_id:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v2 + 32));
        v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      goto LABEL_55;
    case NEW_ACTIVITY_ACTION_OPEN_GRAVEN_INNOCENCE_PHOTO_STAGE:
      if ( !std::vector<std::string>::size(&action_exec->param) )
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/graven_innocence_activity.cpp",
          "execAction",
          618);
        v15 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v42,
                (const char (*)[38])"[GRAVEN_INNOCENCE] action param size ");
        val = std::vector<std::string>::size(&action_exec->param);
        v16 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v15, &val);
        v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v16, (const char (*)[18])off_256F2400);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        goto LABEL_47;
      }
      *(_DWORD *)(v2 + 32) = 0;
      v17 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v17, (unsigned int *)(v2 + 32), 1) )
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/graven_innocence_activity.cpp",
          "execAction",
          624);
        v18 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v42,
                (const char (*)[29])"[GRAVEN_INNOCENCE] strToNum ");
        v19 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, v19);
        v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v20, (const char (*)[14])" failed, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      else
      {
        if ( !GravenInnocenceActivity::openPhotoStage(this, *(_DWORD *)(v2 + 32)) )
          goto LABEL_57;
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/graven_innocence_activity.cpp",
          "execAction",
          629);
        v21 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                &v42,
                (const char (*)[52])"[GRAVEN_INNOCENCE] openPhotoStage failed, stage_id:");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(v2 + 32));
        v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v22, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      goto LABEL_55;
    case NEW_ACTIVITY_ACTION_OPEN_GRAVEN_INNOCENCE_RACE_LEVEL:
      if ( !std::vector<std::string>::size(&action_exec->param) )
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/graven_innocence_activity.cpp",
          "execAction",
          638);
        v23 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v42,
                (const char (*)[38])"[GRAVEN_INNOCENCE] action param size ");
        val = std::vector<std::string>::size(&action_exec->param);
        v24 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v23, &val);
        v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v24, (const char (*)[18])off_256F2400);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        goto LABEL_47;
      }
      *(_DWORD *)(v2 + 32) = 0;
      v25 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v25, (unsigned int *)(v2 + 32), 1) )
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/graven_innocence_activity.cpp",
          "execAction",
          644);
        v26 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v42,
                (const char (*)[29])"[GRAVEN_INNOCENCE] strToNum ");
        v27 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        v28 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, v27);
        v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v28, (const char (*)[14])" failed, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      else
      {
        if ( !GravenInnocenceActivity::openRaceLevel(this, *(_DWORD *)(v2 + 32)) )
          goto LABEL_57;
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/graven_innocence_activity.cpp",
          "execAction",
          649);
        v29 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                &v42,
                (const char (*)[51])"[GRAVEN_INNOCENCE] openRaceLevel failed, level_id:");
        v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v29,
                (const unsigned int *)(v2 + 32));
        v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v30, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      goto LABEL_55;
    case NEW_ACTIVITY_ACTION_OPEN_GRAVEN_INNOCENCE_CARVE_STAGE:
      if ( std::vector<std::string>::size(&action_exec->param) )
      {
        *(_DWORD *)(v2 + 32) = 0;
        v34 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v34, (unsigned int *)(v2 + 32), 1) )
        {
          common::milog::MiLogStream::create(
            &v42,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/graven_innocence_activity.cpp",
            "execAction",
            664);
          v35 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  &v42,
                  (const char (*)[29])"[GRAVEN_INNOCENCE] strToNum ");
          v36 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
          v37 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v35, v36);
          v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v37,
                  (const char (*)[14])" failed, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
        }
        else
        {
          if ( !GravenInnocenceActivity::openCarveStage(this, *(_DWORD *)(v2 + 32)) )
          {
LABEL_57:
            result = 0;
            goto LABEL_58;
          }
          common::milog::MiLogStream::create(
            &v42,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/graven_innocence_activity.cpp",
            "execAction",
            669);
          v38 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                  &v42,
                  (const char (*)[52])"[GRAVEN_INNOCENCE] openCarveStage failed, stage_id:");
          v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v38,
                  (const unsigned int *)(v2 + 32));
          v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v39, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
        }
LABEL_55:
        Uid = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &Uid);
        common::milog::MiLogStream::~MiLogStream(&v42);
        result = -1;
        goto LABEL_58;
      }
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/graven_innocence_activity.cpp",
        "execAction",
        658);
      v31 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v42,
              (const char (*)[38])"[GRAVEN_INNOCENCE] action param size ");
      val = std::vector<std::string>::size(&action_exec->param);
      v32 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v31, &val);
      v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v32, (const char (*)[18])off_256F2400);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_47:
      Uid = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &Uid);
      common::milog::MiLogStream::~MiLogStream(&v42);
      result = -1;
LABEL_58:
      if ( v43 == (char *)v2 )
      {
        *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
      }
      else
      {
        *(_QWORD *)v2 = 1172321806LL;
        *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
      }
      return result;
    case NEW_ACTIVITY_ACTION_CLOSE_GRAVEN_INNOCENCE_CONTENT:
      GravenInnocenceActivity::closeContent(this);
      BaseActivity::notifyClientData(this, 0);
      goto LABEL_57;
    default:
      result = BaseActivity::execAction(this, action_exec);
      goto LABEL_58;
  }
};

// Line 681: range 0000000015092634-0000000015092954
void __cdecl GravenInnocenceActivity::registerObserver(GravenInnocenceActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  PlayerEventComp *cb_ptr; // [rsp+10h] [rbp-C0h]
  PlayerEventComp *EventComp; // [rsp+20h] [rbp-B0h]
  std::enable_shared_from_this<BaseActivity> v6; // [rsp+30h] [rbp-A0h] BYREF
  char v7[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:682 64 16 12 this_wtr:683";
  *(_QWORD *)(v1 + 16) = GravenInnocenceActivity::registerObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v6);
  std::dynamic_pointer_cast<GravenInnocenceActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v6);
  std::weak_ptr<GravenInnocenceActivity>::weak_ptr<GravenInnocenceActivity,void>(
    (std::weak_ptr<GravenInnocenceActivity> *const)(v1 + 64),
    (const std::shared_ptr<GravenInnocenceActivity> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  EventComp = Player::getEventComp(this->player_);
  std::weak_ptr<GravenInnocenceActivity>::weak_ptr(
    (std::weak_ptr<GravenInnocenceActivity> *const)&v6,
    (const std::weak_ptr<GravenInnocenceActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<GravenInnocenceActivity,ChallengeFinishEvent>(
    EventComp,
    (std::weak_ptr<GravenInnocenceActivity> *)&v6,
    (void (*)(GravenInnocenceActivity *, const ChallengeFinishEvent *))GravenInnocenceActivity::onChallengeFinishEvent,
    0LL);
  std::weak_ptr<GravenInnocenceActivity>::~weak_ptr((std::weak_ptr<GravenInnocenceActivity> *const)&v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  cb_ptr = Player::getEventComp(this->player_);
  std::weak_ptr<GravenInnocenceActivity>::weak_ptr(
    (std::weak_ptr<GravenInnocenceActivity> *const)&v6,
    (const std::weak_ptr<GravenInnocenceActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<GravenInnocenceActivity,GalleryGravenInnocenceRaceScoreEvent>(
    cb_ptr,
    (std::weak_ptr<GravenInnocenceActivity> *)&v6,
    (void (*)(GravenInnocenceActivity *, const GalleryGravenInnocenceRaceScoreEvent *))GravenInnocenceActivity::onGalleryRaceScoreEvent,
    0LL);
  std::weak_ptr<GravenInnocenceActivity>::~weak_ptr((std::weak_ptr<GravenInnocenceActivity> *const)&v6);
  std::weak_ptr<GravenInnocenceActivity>::~weak_ptr((std::weak_ptr<GravenInnocenceActivity> *const)(v1 + 64));
  std::shared_ptr<GravenInnocenceActivity>::~shared_ptr((std::shared_ptr<GravenInnocenceActivity> *const)(v1 + 32));
  if ( v7 == (char *)v1 )
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

// Line 689: range 0000000015092956-0000000015092A47
void __cdecl GravenInnocenceActivity::unregisterObserver(GravenInnocenceActivity *const this)
{
  PlayerEventComp *EventComp; // rax
  std::map<std::type_index,std::weak_ptr<Observer>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<std::type_index,std::weak_ptr<Observer>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<std::type_index,std::weak_ptr<Observer>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<const std::type_index,std::weak_ptr<Observer> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<const std::type_index,std::weak_ptr<Observer> > >::type *event_type; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<const std::type_index,std::weak_ptr<Observer> > >::type *obs_wtr; // [rsp+38h] [rbp-8h]

  __for_range = &this->event_observer_map_;
  __for_begin._M_node = std::map<std::type_index,std::weak_ptr<Observer>>::begin(&this->event_observer_map_)._M_node;
  __for_end._M_node = std::map<std::type_index,std::weak_ptr<Observer>>::end(&this->event_observer_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<std::type_index const,std::weak_ptr<Observer>>>::operator*(&__for_begin);
    event_type = std::get<0ul,std::type_index const,std::weak_ptr<Observer>>(__in);
    obs_wtr = std::get<1ul,std::type_index const,std::weak_ptr<Observer>>(__in);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(EventComp, obs_wtr);
    std::_Rb_tree_iterator<std::pair<std::type_index const,std::weak_ptr<Observer>>>::operator++(&__for_begin);
  }
  std::map<std::type_index,std::weak_ptr<Observer>>::clear(&this->event_observer_map_);
};

// Line 698: range 0000000015092A48-0000000015092B31
void __cdecl GravenInnocenceActivity::closeContent(GravenInnocenceActivity *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( !this->is_content_closed_ && !BaseActivity::isFinished(this) && BaseActivity::isOpening(this, 0) )
  {
    if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_content_closed_);
    this->is_content_closed_ = 1;
    GravenInnocenceActivity::unregisterObserver(this);
    BaseActivity::notifyClientData(this, 0);
  }
};

// Line 709: range 0000000015092B32-0000000015092F62
__int64 __fastcall GravenInnocenceActivity::checkAddActivityCoin(
        const GravenInnocenceActivity *const this,
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
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // eax
  std::__detail::_Node_iterator_base<std::pair<const proto::VirtualItem,unsigned int>,false> __y; // [rsp+18h] [rbp-C8h] BYREF
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-C0h] BYREF
  char v19[160]; // [rsp+40h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 16 cur_coin_num:721 64 4 13 coin_type:708 80 4 11 add_num:708 96 8 8 iter:715";
  *(_QWORD *)(v3 + 16) = GravenInnocenceActivity::checkAddActivityCoin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 64) = coin_type;
  *(_DWORD *)(v3 + 80) = add_num;
  if ( !GravenInnocenceActivity::isCoinTypeValid(this, *(proto::VirtualItem *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "checkAddActivityCoin",
      712);
    v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v18,
           (const char (*)[52])"[GRAVEN_INNOCENCE] coin_type is invalid. coin_type:");
    common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
      v6,
      (const proto::VirtualItem *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    *(std::unordered_map<proto::VirtualItem,unsigned int>::const_iterator *)(v3 + 96) = std::unordered_map<proto::VirtualItem,unsigned int>::find(
                                                                                          &this->activity_coin_map_,
                                                                                          (const std::unordered_map<proto::VirtualItem,unsigned int>::key_type *)(v3 + 64));
    __y._M_cur = std::unordered_map<proto::VirtualItem,unsigned int>::end(&this->activity_coin_map_)._M_cur;
    if ( std::__detail::operator==<std::pair<proto::VirtualItem const,unsigned int>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<const proto::VirtualItem,unsigned int>,false> *)(v3 + 96),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/graven_innocence_activity.cpp",
        "checkAddActivityCoin",
        718);
      v8 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
             &v18,
             (const char (*)[70])"[GRAVEN_INNOCENCE] coin_type is not in activity_coin_map_. coin_type:");
      common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
        v8,
        (const proto::VirtualItem *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v18);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v9 = std::__detail::_Node_const_iterator<std::pair<proto::VirtualItem const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const proto::VirtualItem,unsigned int>,false,false> *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v9 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
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
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/graven_innocence_activity.cpp",
          "checkAddActivityCoin",
          724);
        v10 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                &v18,
                (const char (*)[46])"[GRAVEN_INNOCENCE] coin over flow, coin_type:");
        v11 = common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
                v10,
                (const proto::VirtualItem *)(v3 + 64));
        v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])", cur num: ");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v3 + 48));
        v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" ,add num: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream(&v18);
        v15 = *(_DWORD *)(v3 + 64);
        if ( v15 == 143 )
        {
          result = 10382LL;
        }
        else if ( v15 == 144 )
        {
          result = 10383LL;
        }
        else
        {
          result = 0xFFFFFFFFLL;
        }
      }
    }
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
  return result;
};

// Line 739: range 0000000015092F64-000000001509335C
__int64 __fastcall GravenInnocenceActivity::checkSubActivityCoin(
        const GravenInnocenceActivity *const this,
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
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // eax
  std::__detail::_Node_iterator_base<std::pair<const proto::VirtualItem,unsigned int>,false> __y; // [rsp+18h] [rbp-C8h] BYREF
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-C0h] BYREF
  char v19[160]; // [rsp+40h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 16 cur_coin_num:751 64 4 13 coin_type:738 80 4 11 sub_num:738 96 8 8 iter:745";
  *(_QWORD *)(v3 + 16) = GravenInnocenceActivity::checkSubActivityCoin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 64) = coin_type;
  *(_DWORD *)(v3 + 80) = sub_num;
  if ( !GravenInnocenceActivity::isCoinTypeValid(this, *(proto::VirtualItem *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "checkSubActivityCoin",
      742);
    v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v18,
           (const char (*)[52])"[GRAVEN_INNOCENCE] coin_type is invalid. coin_type:");
    common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
      v6,
      (const proto::VirtualItem *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    *(std::unordered_map<proto::VirtualItem,unsigned int>::const_iterator *)(v3 + 96) = std::unordered_map<proto::VirtualItem,unsigned int>::find(
                                                                                          &this->activity_coin_map_,
                                                                                          (const std::unordered_map<proto::VirtualItem,unsigned int>::key_type *)(v3 + 64));
    __y._M_cur = std::unordered_map<proto::VirtualItem,unsigned int>::end(&this->activity_coin_map_)._M_cur;
    if ( std::__detail::operator==<std::pair<proto::VirtualItem const,unsigned int>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<const proto::VirtualItem,unsigned int>,false> *)(v3 + 96),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/graven_innocence_activity.cpp",
        "checkSubActivityCoin",
        748);
      v8 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
             &v18,
             (const char (*)[70])"[GRAVEN_INNOCENCE] coin_type is not in activity_coin_map_. coin_type:");
      common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
        v8,
        (const proto::VirtualItem *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v18);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v9 = std::__detail::_Node_const_iterator<std::pair<proto::VirtualItem const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const proto::VirtualItem,unsigned int>,false,false> *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v9 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 48) = v9->second;
      if ( *(_DWORD *)(v3 + 48) >= *(_DWORD *)(v3 + 80) )
      {
        result = 0LL;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/graven_innocence_activity.cpp",
          "checkSubActivityCoin",
          754);
        v10 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                &v18,
                (const char (*)[47])"[GRAVEN_INNOCENCE] coin not enough, coin_type:");
        v11 = common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
                v10,
                (const proto::VirtualItem *)(v3 + 64));
        v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])", cur num: ");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v3 + 48));
        v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])off_256E89C0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream(&v18);
        v15 = *(_DWORD *)(v3 + 64);
        if ( v15 == 143 )
        {
          result = 10380LL;
        }
        else if ( v15 == 144 )
        {
          result = 10381LL;
        }
        else
        {
          result = 0xFFFFFFFFLL;
        }
      }
    }
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
  return result;
};

// Line 769: range 000000001509335E-00000000150937AD
__int64 __fastcall GravenInnocenceActivity::addActivityCoin(
        GravenInnocenceActivity *const this,
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
  std::unordered_map<proto::VirtualItem,unsigned int>::mapped_type *v10; // rdx
  SelectType v11; // r14d
  std::unordered_map<proto::VirtualItem,unsigned int>::mapped_type *v12; // rax
  SelectType *v13; // rdx
  PlayerItemComp *ItemComp; // r14
  data::ItemLimitType v15; // r15d
  std::unordered_map<proto::VirtualItem,unsigned int>::mapped_type *v16; // rdx
  __int64 result; // rax
  std::string v18; // [rsp+0h] [rbp-F0h]
  uint32_t reason_type; // [rsp+10h] [rbp-E0h]
  int32_t ret; // [rsp+38h] [rbp-B8h]
  uint32_t old_coin_num; // [rsp+3Ch] [rbp-B4h]
  std::string v23; // [rsp+40h] [rbp-B0h] BYREF
  char v24[144]; // [rsp+60h] [rbp-90h] BYREF

  *(&v18._anon_0._M_allocated_capacity + 1) = (std::string::size_type)reason;
  v18._anon_0._M_local_buf[4] = is_notify;
  v5 = (unsigned __int64)v24;
  v18._M_string_length = (std::string::size_type)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 22 log_context_holder:776 64 4 13 coin_type:768";
  *(_QWORD *)(v5 + 16) = GravenInnocenceActivity::addActivityCoin;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 64) = coin_type;
  ret = GravenInnocenceActivity::checkAddActivityCoin(this, (proto::VirtualItem)*(_DWORD *)(v5 + 64), add_num);
  if ( ret )
  {
    v8 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v23, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0x67u, v18);
    std::string::~string(&v23);
    v10 = std::unordered_map<proto::VirtualItem,unsigned int>::operator[](
            &this->activity_coin_map_,
            (const std::unordered_map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    old_coin_num = *v10;
    v11 = SAFE_ADD<unsigned int,unsigned int>(*v10, add_num);
    v12 = std::unordered_map<proto::VirtualItem,unsigned int>::operator[](
            &this->activity_coin_map_,
            (const std::unordered_map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v12);
    }
    *v13 = v11;
    if ( v18._anon_0._M_local_buf[4] )
      BaseActivity::notifyActivityCoinInfo(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(this->player_);
    if ( *(_BYTE *)(((*(&v18._anon_0._M_allocated_capacity + 1) + 4) >> 3) + 0x7FFF8000) != 0
      && (char)(((v18._anon_0._M_local_buf[8] + 4) & 7) + 3) >= *(_BYTE *)(((*(&v18._anon_0._M_allocated_capacity + 1)
                                                                           + 4) >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v15 = *(_DWORD *)(*(&v18._anon_0._M_allocated_capacity + 1) + 4);
    if ( *(_BYTE *)((*(&v18._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((v18._anon_0._M_local_buf[8] & 7) + 3) >= *(_BYTE *)((*(&v18._anon_0._M_allocated_capacity + 1) >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    reason_type = **((_DWORD **)&v18._anon_0._M_allocated_capacity + 1);
    v16 = std::unordered_map<proto::VirtualItem,unsigned int>::operator[](
            &this->activity_coin_map_,
            (const std::unordered_map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      *(proto::VirtualItem *)(v5 + 64),
      old_coin_num,
      *v16,
      reason_type,
      v15,
      0);
    v8 = 0;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
  }
  result = v8;
  if ( v18._M_string_length == v5 )
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

// Line 788: range 00000000150937AE-0000000015093B9B
__int64 __fastcall GravenInnocenceActivity::subActivityCoin(
        GravenInnocenceActivity *const this,
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
  std::unordered_map<proto::VirtualItem,unsigned int>::mapped_type *v10; // rdx
  std::unordered_map<proto::VirtualItem,unsigned int>::mapped_type *v11; // rax
  PlayerItemComp *ItemComp; // r14
  std::unordered_map<proto::VirtualItem,unsigned int>::mapped_type *v13; // rdx
  __int64 result; // rax
  std::string reason_type; // [rsp+0h] [rbp-E0h]
  uint32_t reason_typea; // [rsp+0h] [rbp-E0h]
  bool is_notifya; // [rsp+4h] [rbp-DCh]
  const SubItemReason *reasona; // [rsp+8h] [rbp-D8h]
  uint32_t sub_numa; // [rsp+10h] [rbp-D0h]
  GravenInnocenceActivity *thisa; // [rsp+18h] [rbp-C8h]
  int32_t ret; // [rsp+28h] [rbp-B8h]
  uint32_t old_coin_num; // [rsp+2Ch] [rbp-B4h]
  std::string v23; // [rsp+30h] [rbp-B0h] BYREF
  char v24[144]; // [rsp+50h] [rbp-90h] BYREF

  *(&reason_type._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(reason_type._anon_0._M_allocated_capacity) = coin_type;
  *(_DWORD *)reason_type._anon_0._M_local_buf = sub_num;
  reason_type._M_string_length = (std::string::size_type)reason;
  BYTE4(reason_type._M_dataplus._M_p) = is_notify;
  v5 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 22 log_context_holder:795 64 4 13 coin_type:787";
  *(_QWORD *)(v5 + 16) = GravenInnocenceActivity::subActivityCoin;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 64) = coin_type;
  ret = GravenInnocenceActivity::checkSubActivityCoin(
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
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v23, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0x67u, reason_type);
    std::string::~string(&v23);
    v10 = std::unordered_map<proto::VirtualItem,unsigned int>::operator[](
            &thisa->activity_coin_map_,
            (const std::unordered_map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    old_coin_num = *v10;
    v11 = std::unordered_map<proto::VirtualItem,unsigned int>::operator[](
            &thisa->activity_coin_map_,
            (const std::unordered_map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *v11 -= sub_numa;
    if ( is_notifya )
      BaseActivity::notifyActivityCoinInfo(thisa);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(thisa->player_);
    if ( *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)reasona & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    reason_typea = reasona->reason_type;
    v13 = std::unordered_map<proto::VirtualItem,unsigned int>::operator[](
            &thisa->activity_coin_map_,
            (const std::unordered_map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      *(proto::VirtualItem *)(v5 + 64),
      old_coin_num,
      *v13,
      reason_typea,
      ITEM_LIMIT_NONE,
      0);
    v8 = 0;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
  }
  result = v8;
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
  return result;
};

// Line 807: range 0000000015093B9C-0000000015093D2E
__int64 __fastcall GravenInnocenceActivity::getActivityCoin(
        const GravenInnocenceActivity *const this,
        proto::VirtualItem coin_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<const proto::VirtualItem,unsigned int>,false,false>::pointer v6; // rdx
  std::__detail::_Node_iterator_base<std::pair<const proto::VirtualItem,unsigned int>,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 coin_type:806 64 8 8 iter:808";
  *(_QWORD *)(v2 + 16) = GravenInnocenceActivity::getActivityCoin;
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
    if ( *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v6 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    result = v6->second;
  }
  if ( v8 == (char *)v2 )
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

// Line 817: range 0000000015093D30-0000000015093D5A
bool __cdecl GravenInnocenceActivity::isCoinTypeValid(
        const GravenInnocenceActivity *const this,
        proto::VirtualItem coin_type)
{
  return coin_type == ITEM_VIRTUAL_GRAVEN_INNOCENCE_COIN_A || coin_type == ITEM_VIRTUAL_GRAVEN_INNOCENCE_COIN_B;
};

// Line 823: range 0000000015093D5C-0000000015093ECA
void __cdecl GravenInnocenceActivity::fillActivityCoinInfo(
        GravenInnocenceActivity *const this,
        google::protobuf::Map<unsigned int,unsigned int> *activity_coin_map)
{
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type v2; // ebx
  unsigned int *v3; // rax
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *v4; // rdx
  google::protobuf::Map<unsigned int,unsigned int>::key_type key; // [rsp+1Ch] [rbp-44h] BYREF
  std::unordered_map<proto::VirtualItem,unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-40h] BYREF
  std::unordered_map<proto::VirtualItem,unsigned int>::iterator __for_end; // [rsp+28h] [rbp-38h] BYREF
  std::unordered_map<proto::VirtualItem,unsigned int> *__for_range; // [rsp+30h] [rbp-30h]
  const std::pair<const proto::VirtualItem,unsigned int> *v9; // [rsp+38h] [rbp-28h]
  std::tuple_element<0,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_type; // [rsp+40h] [rbp-20h]
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_num; // [rsp+48h] [rbp-18h]

  __for_range = &this->activity_coin_map_;
  __for_begin._M_cur = std::unordered_map<proto::VirtualItem,unsigned int>::begin(&this->activity_coin_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<proto::VirtualItem,unsigned int>::end(&this->activity_coin_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<proto::VirtualItem const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v9 = std::__detail::_Node_iterator<std::pair<proto::VirtualItem const,unsigned int>,false,false>::operator*(&__for_begin);
    coin_type = std::get<0ul,proto::VirtualItem const,unsigned int>(v9);
    coin_num = (std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *)std::get<1ul,proto::VirtualItem const,unsigned int>(v9);
    if ( *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)coin_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v2 = *coin_num;
    if ( *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)coin_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    key = *coin_type;
    v3 = google::protobuf::Map<unsigned int,unsigned int>::operator[](activity_coin_map, &key);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v3);
    }
    *v4 = v2;
    std::__detail::_Node_iterator<std::pair<proto::VirtualItem const,unsigned int>,false,false>::operator++(&__for_begin);
  }
};

// Line 831: range 0000000015093ECC-00000000150942FE
void __cdecl GravenInnocenceActivity::onChallengeFinishEvent(
        GravenInnocenceActivity *const this,
        const ChallengeFinishEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  PlayerSceneComp *SceneComp; // rax
  ActivityGravenInnocenceExcelConfigMgr *p_activity_graven_innocence_mgr; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r12
  uint32_t challenge_index; // ecx
  unsigned int val; // [rsp+14h] [rbp-9Ch] BYREF
  const data::GravenInnocenceCampLevelExcelConfig *camp_level_config_ptr; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 4 17 camp_level_id:843";
  *(_QWORD *)(v2 + 16) = GravenInnocenceActivity::onChallengeFinishEvent;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&event->is_success >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)event + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_success >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&event->is_success);
  }
  if ( event->is_success )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = Player::getSceneComp(this->player_);
    if ( PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v14);
      p_activity_graven_innocence_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.activity_graven_innocence_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 32) = ActivityGravenInnocenceExcelConfigMgr::findCampLevelIdByGroupId(
                               p_activity_graven_innocence_mgr,
                               event->group_id);
      std::shared_ptr<Config>::~shared_ptr(&v14);
      if ( *(_DWORD *)(v2 + 32) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v14);
        v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
        camp_level_config_ptr = data::ActivityGravenInnocenceExcelConfigMgrBase::findGravenInnocenceCampLevelExcelConfig(
                                  &v7->design_config.txt_config_mgr.activity_graven_innocence_mgr,
                                  *(_DWORD *)(v2 + 32));
        std::shared_ptr<Config>::~shared_ptr(&v14);
        if ( camp_level_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&event->challenge_index >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&event->challenge_index >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          challenge_index = event->challenge_index;
          if ( *(_BYTE *)(((unsigned __int64)&camp_level_config_ptr->challenge_index >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&camp_level_config_ptr->challenge_index >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( challenge_index == camp_level_config_ptr->challenge_index )
            GravenInnocenceActivity::finishCampLevel(this, *(_DWORD *)(v2 + 32));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v15,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/graven_innocence_activity.cpp",
            "onChallengeFinishEvent",
            851);
          v8 = common::milog::MiLogStream::operator<<<char [82],(char *[82])0>(
                 &v15,
                 (const char (*)[82])"[GRAVEN_INNOCENCE] findGravenInnocenceCampLevelExcelConfig failed, camp_level_id:");
          v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v8,
                 (const unsigned int *)(v2 + 32));
          v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
          common::milog::MiLogStream::~MiLogStream(&v15);
        }
      }
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
};

// Line 864: range 0000000015094300-00000000150948F6
void __cdecl GravenInnocenceActivity::onGalleryRaceScoreEvent(
        GravenInnocenceActivity *const this,
        const GalleryGravenInnocenceRaceScoreEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  ActivityGravenInnocenceExcelConfigMgr *p_activity_graven_innocence_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r13
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r13
  uint32_t score; // ecx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned int val; // [rsp+1Ch] [rbp-C4h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceRaceLevelData> >::_Self __y; // [rsp+20h] [rbp-C0h] BYREF
  GravenInnocenceRaceLevelData *level_data; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v22; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-A0h] BYREF
  char v24[128]; // [rsp+60h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 level_id:865 64 8 8 iter:871";
  *(_QWORD *)(v2 + 16) = GravenInnocenceActivity::onGalleryRaceScoreEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  p_activity_graven_innocence_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.activity_graven_innocence_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v2 + 48) = ActivityGravenInnocenceExcelConfigMgr::findRaceLevelIdByGalleryId(
                           p_activity_graven_innocence_mgr,
                           event->gallery_id);
  std::shared_ptr<Config>::~shared_ptr(&v22);
  if ( *(_DWORD *)(v2 + 48) )
  {
    *(std::map<unsigned int,GravenInnocenceRaceLevelData>::iterator *)(v2 + 64) = std::map<unsigned int,GravenInnocenceRaceLevelData>::find(
                                                                                    &this->race_data_.level_data_map,
                                                                                    (const std::map<unsigned int,GravenInnocenceRaceLevelData>::key_type *)(v2 + 48));
    __y._M_node = std::map<unsigned int,GravenInnocenceRaceLevelData>::end(&this->race_data_.level_data_map)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceRaceLevelData> >::_Self *)(v2 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/graven_innocence_activity.cpp",
        "onGalleryRaceScoreEvent",
        874);
      v9 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
             &v23,
             (const char (*)[59])"[GRAVEN_INNOCENCE] find race level data failed. level_id: ");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      level_data = &std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceRaceLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceRaceLevelData> > *const)(v2 + 64))->second;
      if ( *(_BYTE *)(((unsigned __int64)&event->score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->score >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      score = event->score;
      if ( *(_BYTE *)(((unsigned __int64)&level_data->max_score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)level_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->max_score >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( score > level_data->max_score )
      {
        level_data->max_score = event->score;
        BaseActivity::notifyClientData(this, 0);
      }
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/graven_innocence_activity.cpp",
        "onGalleryRaceScoreEvent",
        883);
      v13 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
              &v23,
              (const char (*)[56])"[GRAVEN_INNOCENCE] onGalleryRaceScoreEvent, gallery_id:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &event->gallery_id);
      v15 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v14, (const char (*)[8])" score:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &event->score);
      v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v16, (const char (*)[11])" level_id:");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 48));
      v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "onGalleryRaceScoreEvent",
      868);
    v6 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
           &v23,
           (const char (*)[67])"[GRAVEN_INNOCENCE] findRaceLevelIdByGalleryId failed. gallery_id: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &event->gallery_id);
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
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
};

// Line 889: range 00000000150948F8-0000000015094EB1
__int64 __fastcall GravenInnocenceActivity::openCampStage(GravenInnocenceActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceCampStageData> >::pointer v9; // rax
  bool *p_is_open; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  PlayerGroupLinkComp *GroupLinkComp; // r15
  uint32_t activity_id; // r14d
  uint32_t GroupBundleId; // eax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r13
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceCampStageData> >::_Self __y; // [rsp+30h] [rbp-C0h] BYREF
  GravenInnocenceCampStageData *stage_data; // [rsp+38h] [rbp-B8h]
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
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:888 64 8 8 iter:890";
  *(_QWORD *)(v2 + 16) = GravenInnocenceActivity::openCampStage;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,GravenInnocenceCampStageData>::iterator *)(v2 + 64) = std::map<unsigned int,GravenInnocenceCampStageData>::find(
                                                                                  &this->camp_data_.stage_data_map,
                                                                                  (const std::map<unsigned int,GravenInnocenceCampStageData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,GravenInnocenceCampStageData>::end(&this->camp_data_.stage_data_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceCampStageData> >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "openCampStage",
      893);
    v5 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
           &v24,
           (const char (*)[58])"[GRAVEN_INNOCENCE] find camp stage data failed, stage_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_7:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v24);
    result = 0xFFFFFFFFLL;
    goto LABEL_23;
  }
  v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceCampStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceCampStageData> > *const)(v2 + 64));
  stage_data = &v9->second;
  p_is_open = &v9->second.is_open;
  if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(p_is_open);
  }
  if ( stage_data->is_open )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "openCampStage",
      899);
    v11 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
            &v24,
            (const char (*)[50])"[GRAVEN_INNOCENCE] camp stage has open, stage_id:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_7;
  }
  if ( *(_BYTE *)(((unsigned __int64)&stage_data->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)stage_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_data->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&stage_data->is_open);
  }
  stage_data->is_open = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GroupLinkComp = Player::getGroupLinkComp(this->player_);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  activity_id = this->activity_id_;
  GroupBundleId = GravenInnocenceCampStageData::getGroupBundleId(stage_data);
  PlayerGroupLinkComp::registerGroupBundle(GroupLinkComp, GroupBundleId, activity_id);
  common::milog::MiLogStream::create(
    &v24,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/graven_innocence_activity.cpp",
    "openCampStage",
    907);
  v16 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          &v24,
          (const char (*)[39])"[GRAVEN_INNOCENCE] open camp stage_id:");
  v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 48));
  v18 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v17, (const char (*)[17])" start level_id:");
  v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &stage_data->level_id);
  v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
  common::milog::MiLogStream::~MiLogStream(&v24);
  BaseActivity::notifyClientData(this, 0);
  result = 0LL;
LABEL_23:
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

// Line 913: range 0000000015094EB2-0000000015095CE2
__int64 __fastcall GravenInnocenceActivity::finishCampLevel(GravenInnocenceActivity *const this, uint32_t level_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  unsigned int v9; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rbx
  std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceCampStageData> >::pointer v16; // rax
  bool *p_is_open; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rcx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  PlayerGroupLinkComp *GroupLinkComp; // r14
  uint32_t GroupBundleId; // eax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  PlayerEventComp *EventComp; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  uint32_t v35; // ecx
  PlayerGroupLinkComp *v36; // r15
  uint32_t activity_id; // r14d
  uint32_t v38; // eax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // r14
  __int64 result; // rax
  unsigned int val; // [rsp+24h] [rbp-11Ch] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceCampStageData> >::_Self __y; // [rsp+28h] [rbp-118h] BYREF
  const data::GravenInnocenceCampLevelExcelConfig *level_config_ptr; // [rsp+30h] [rbp-110h]
  GravenInnocenceCampStageData *stage_data; // [rsp+38h] [rbp-108h]
  std::shared_ptr<Config> v49; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v50; // [rsp+50h] [rbp-F0h] BYREF
  char v51[208]; // [rsp+70h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 12 stage_id:921 64 4 17 next_level_id:955 80 4 12 level_id:912 96 8 8 iter:927 128 16 13 event_ptr:951";
  *(_QWORD *)(v2 + 16) = GravenInnocenceActivity::finishCampLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -202178560;
  *(_DWORD *)(v2 + 80) = level_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v49);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49);
  level_config_ptr = data::ActivityGravenInnocenceExcelConfigMgrBase::findGravenInnocenceCampLevelExcelConfig(
                       &v5->design_config.txt_config_mgr.activity_graven_innocence_mgr,
                       *(_DWORD *)(v2 + 80));
  std::shared_ptr<Config>::~shared_ptr(&v49);
  if ( !level_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v50,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "finishCampLevel",
      917);
    v6 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
           &v50,
           (const char (*)[77])"[GRAVEN_INNOCENCE] findGravenInnocenceCampLevelExcelConfig failed, level_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 80));
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_7:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v50);
    v9 = -1;
    goto LABEL_54;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v49);
  v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49);
  *(_DWORD *)(v2 + 48) = ActivityGravenInnocenceExcelConfigMgr::findCampStageIdByLevelId(
                           &v10->design_config.txt_config_mgr.activity_graven_innocence_mgr,
                           *(_DWORD *)(v2 + 80));
  std::shared_ptr<Config>::~shared_ptr(&v49);
  if ( !*(_DWORD *)(v2 + 48) )
  {
    common::milog::MiLogStream::create(
      &v50,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "finishCampLevel",
      924);
    v11 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
            &v50,
            (const char (*)[61])"[GRAVEN_INNOCENCE] findCampStageIdByLevelId failed, evel_id:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 80));
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_7;
  }
  *(std::map<unsigned int,GravenInnocenceCampStageData>::iterator *)(v2 + 96) = std::map<unsigned int,GravenInnocenceCampStageData>::find(
                                                                                  &this->camp_data_.stage_data_map,
                                                                                  (const std::map<unsigned int,GravenInnocenceCampStageData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,GravenInnocenceCampStageData>::end(&this->camp_data_.stage_data_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceCampStageData> >::_Self *)(v2 + 96),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v50,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "finishCampLevel",
      930);
    v13 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
            &v50,
            (const char (*)[58])"[GRAVEN_INNOCENCE] find camp stage data failed, stage_id:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
    v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_32:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
    common::milog::MiLogStream::~MiLogStream(&v50);
    v9 = -1;
    goto LABEL_54;
  }
  v16 = std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceCampStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceCampStageData> > *const)(v2 + 96));
  stage_data = &v16->second;
  p_is_open = &v16->second.is_open;
  if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(p_is_open);
  }
  if ( !stage_data->is_open )
  {
    common::milog::MiLogStream::create(
      &v50,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "finishCampLevel",
      936);
    v18 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
            &v50,
            (const char (*)[50])"[GRAVEN_INNOCENCE] camp stage not open, stage_id:");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 48));
    v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_32;
  }
  if ( *(_BYTE *)(((unsigned __int64)&stage_data->level_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)stage_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_data->level_id >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( stage_data->level_id != *(_DWORD *)(v2 + 80) )
    goto LABEL_28;
  if ( *(_BYTE *)(((unsigned __int64)&stage_data->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)stage_data + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_data->is_finished >> 3)
                                                            + 0x7FFF8000) )
  {
    __asan_report_load1(&stage_data->is_finished);
  }
  if ( stage_data->is_finished )
  {
LABEL_28:
    common::milog::MiLogStream::create(
      &v50,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "finishCampLevel",
      941);
    v20 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            &v50,
            (const char (*)[40])"[GRAVEN_INNOCENCE] camp stage level_id:");
    v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &stage_data->level_id);
    v22 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v21, (const char (*)[14])" is_finished:");
    if ( *(_BYTE *)(((unsigned __int64)&stage_data->is_finished >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)stage_data + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_data->is_finished >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load1(&stage_data->is_finished);
    }
    v23 = common::milog::MiLogStream::operator<<(v22, stage_data->is_finished);
    v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v23, (const char (*)[16])"  req level_id:");
    v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v2 + 80));
    v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v25, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_32;
  }
  if ( *(_BYTE *)(((unsigned __int64)&stage_data->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)stage_data + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_data->is_finished >> 3)
                                                            + 0x7FFF8000) )
  {
    __asan_report_store1(&stage_data->is_finished);
  }
  stage_data->is_finished = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GroupLinkComp = Player::getGroupLinkComp(this->player_);
  GroupBundleId = GravenInnocenceCampStageData::getGroupBundleId(stage_data);
  PlayerGroupLinkComp::unregisterGroupBundle(GroupLinkComp, GroupBundleId, 0);
  common::milog::MiLogStream::create(
    &v50,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/graven_innocence_activity.cpp",
    "finishCampLevel",
    948);
  v28 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
          &v50,
          (const char (*)[41])"[GRAVEN_INNOCENCE] finish camp level_id:");
  v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v2 + 80));
  v30 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v29, (const char (*)[11])" stage_id:");
  v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v2 + 48));
  v32 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v31, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &val);
  common::milog::MiLogStream::~MiLogStream(&v50);
  common::tools::perf::make_shared<GravenInnocenceCampFinishLevelEvent,unsigned int &>(
    (unsigned int *)(v2 + 128),
    (unsigned int *)(v2 + 80));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  EventComp = Player::getEventComp(this->player_);
  std::shared_ptr<BaseEvent>::shared_ptr<GravenInnocenceCampFinishLevelEvent,void>(
    (std::shared_ptr<BaseEvent> *const)&v49,
    (const std::shared_ptr<GravenInnocenceCampFinishLevelEvent> *)(v2 + 128));
  PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v49);
  std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v49);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v49);
  v34 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49);
  *(_DWORD *)(v2 + 64) = ActivityGravenInnocenceExcelConfigMgr::getCampNextLevelId(
                           &v34->design_config.txt_config_mgr.activity_graven_innocence_mgr,
                           *(_DWORD *)(v2 + 80));
  std::shared_ptr<Config>::~shared_ptr(&v49);
  if ( *(_DWORD *)(v2 + 64) )
  {
    v35 = *(_DWORD *)(v2 + 64);
    if ( *(_BYTE *)(((unsigned __int64)&stage_data->level_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)stage_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_data->level_id >> 3)
                                                               + 0x7FFF8000) )
    {
      __asan_report_store4(&stage_data->level_id);
    }
    stage_data->level_id = v35;
    if ( *(_BYTE *)(((unsigned __int64)&stage_data->is_finished >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)stage_data + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_data->is_finished >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_store1(&stage_data->is_finished);
    }
    stage_data->is_finished = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v36 = Player::getGroupLinkComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    activity_id = this->activity_id_;
    v38 = GravenInnocenceCampStageData::getGroupBundleId(stage_data);
    PlayerGroupLinkComp::registerGroupBundle(v36, v38, activity_id);
    common::milog::MiLogStream::create(
      &v50,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "finishCampLevel",
      961);
    v39 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            &v50,
            (const char (*)[40])"[GRAVEN_INNOCENCE] start camp level_id:");
    v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, (const unsigned int *)(v2 + 64));
    v41 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v40, (const char (*)[11])" stage_id:");
    v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, (const unsigned int *)(v2 + 48));
    v43 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v42, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &val);
    common::milog::MiLogStream::~MiLogStream(&v50);
  }
  BaseActivity::notifyClientData(this, 0);
  v9 = 0;
  std::shared_ptr<GravenInnocenceCampFinishLevelEvent>::~shared_ptr((std::shared_ptr<GravenInnocenceCampFinishLevelEvent> *const)(v2 + 128));
LABEL_54:
  result = v9;
  if ( v51 == (char *)v2 )
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

// Line 969: range 0000000015095CE4-0000000015095D05
int32_t __cdecl GravenInnocenceActivity::openCampStageByGm(GravenInnocenceActivity *const this, uint32_t stage_id)
{
  return GravenInnocenceActivity::openCampStage(this, stage_id);
};

// Line 974: range 0000000015095D06-0000000015095F9F
__int64 __fastcall GravenInnocenceActivity::finishCampStageLevelByGm(
        GravenInnocenceActivity *const this,
        uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceCampStageData> >::pointer v9; // rdx
  unsigned int val; // [rsp+14h] [rbp-ACh] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceCampStageData> >::_Self __y; // [rsp+18h] [rbp-A8h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-A0h] BYREF
  char v13[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:973 64 8 8 iter:975";
  *(_QWORD *)(v2 + 16) = GravenInnocenceActivity::finishCampStageLevelByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,GravenInnocenceCampStageData>::iterator *)(v2 + 64) = std::map<unsigned int,GravenInnocenceCampStageData>::find(
                                                                                  &this->camp_data_.stage_data_map,
                                                                                  (const std::map<unsigned int,GravenInnocenceCampStageData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,GravenInnocenceCampStageData>::end(&this->camp_data_.stage_data_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceCampStageData> >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "finishCampStageLevelByGm",
      978);
    v5 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
           &v12,
           (const char (*)[58])"[GRAVEN_INNOCENCE] find camp stage data failed, stage_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v12);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceCampStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceCampStageData> > *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v9->second.level_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v9 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->second.level_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    result = GravenInnocenceActivity::finishCampLevel(this, v9->second.level_id);
  }
  if ( v13 == (char *)v2 )
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

// Line 985: range 0000000015095FA0-0000000015096159
int32_t __cdecl GravenInnocenceActivity::resetCampDataByGm(GravenInnocenceActivity *const this)
{
  bool *p_is_open; // rax
  PlayerGroupLinkComp *GroupLinkComp; // rbx
  uint32_t GroupBundleId; // eax
  std::map<unsigned int,GravenInnocenceCampStageData>::iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::map<unsigned int,GravenInnocenceCampStageData>::iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,GravenInnocenceCampStageData> *__for_range; // [rsp+20h] [rbp-30h]
  std::pair<unsigned int const,GravenInnocenceCampStageData> *__in; // [rsp+28h] [rbp-28h]
  std::tuple_element<0,std::pair<unsigned int const,GravenInnocenceCampStageData> >::type *_; // [rsp+30h] [rbp-20h]
  std::tuple_element<1,std::pair<unsigned int const,GravenInnocenceCampStageData> >::type *stage_data; // [rsp+38h] [rbp-18h]

  __for_range = &this->camp_data_.stage_data_map;
  __for_begin._M_node = std::map<unsigned int,GravenInnocenceCampStageData>::begin(&this->camp_data_.stage_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,GravenInnocenceCampStageData>::end(&this->camp_data_.stage_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceCampStageData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,GravenInnocenceCampStageData>(__in);
    stage_data = std::get<1ul,unsigned int const,GravenInnocenceCampStageData>(__in);
    p_is_open = &stage_data->is_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_open);
    }
    if ( stage_data->is_open )
    {
      if ( *(_BYTE *)(((unsigned __int64)&stage_data->is_finished >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)stage_data + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_data->is_finished >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_load1(&stage_data->is_finished);
      }
      if ( !stage_data->is_finished )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        GroupLinkComp = Player::getGroupLinkComp(this->player_);
        GroupBundleId = GravenInnocenceCampStageData::getGroupBundleId(stage_data);
        PlayerGroupLinkComp::unregisterGroupBundle(GroupLinkComp, GroupBundleId, 1);
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceCampStageData>>::operator++(&__for_begin);
  }
  GravenInnocenceCampData::clear(&this->camp_data_);
  GravenInnocenceCampData::init(&this->camp_data_);
  BaseActivity::notifyClientData(this, 0);
  return 0;
};

// Line 1001: range 000000001509615A-00000000150966EB
__int64 __fastcall GravenInnocenceActivity::openRaceLevel(GravenInnocenceActivity *const this, uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceRaceLevelData> >::pointer v9; // rax
  bool *p_is_open; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  PlayerGroupLinkComp *GroupLinkComp; // r15
  uint32_t activity_id; // r14d
  uint32_t GroupBundleId; // eax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r13
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceRaceLevelData> >::_Self __y; // [rsp+30h] [rbp-C0h] BYREF
  GravenInnocenceRaceLevelData *level_data; // [rsp+38h] [rbp-B8h]
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 level_id:1000 64 8 9 iter:1002";
  *(_QWORD *)(v2 + 16) = GravenInnocenceActivity::openRaceLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = level_id;
  *(std::map<unsigned int,GravenInnocenceRaceLevelData>::iterator *)(v2 + 64) = std::map<unsigned int,GravenInnocenceRaceLevelData>::find(
                                                                                  &this->race_data_.level_data_map,
                                                                                  (const std::map<unsigned int,GravenInnocenceRaceLevelData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,GravenInnocenceRaceLevelData>::end(&this->race_data_.level_data_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceRaceLevelData> >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "openRaceLevel",
      1005);
    v5 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
           &v22,
           (const char (*)[58])"[GRAVEN_INNOCENCE] find race level data failed, level_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_7:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = 0xFFFFFFFFLL;
    goto LABEL_23;
  }
  v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceRaceLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceRaceLevelData> > *const)(v2 + 64));
  level_data = &v9->second;
  p_is_open = &v9->second.is_open;
  if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(p_is_open);
  }
  if ( level_data->is_open )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "openRaceLevel",
      1011);
    v11 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
            &v22,
            (const char (*)[50])"[GRAVEN_INNOCENCE] race level has open, level_id:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_7;
  }
  if ( *(_BYTE *)(((unsigned __int64)&level_data->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)level_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&level_data->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&level_data->is_open);
  }
  level_data->is_open = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GroupLinkComp = Player::getGroupLinkComp(this->player_);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  activity_id = this->activity_id_;
  GroupBundleId = GravenInnocenceRaceLevelData::getGroupBundleId(level_data);
  PlayerGroupLinkComp::registerGroupBundle(GroupLinkComp, GroupBundleId, activity_id);
  common::milog::MiLogStream::create(
    &v22,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/graven_innocence_activity.cpp",
    "openRaceLevel",
    1019);
  v16 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          &v22,
          (const char (*)[39])"[GRAVEN_INNOCENCE] open race level_id:");
  v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 48));
  v18 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v17, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
  common::milog::MiLogStream::~MiLogStream(&v22);
  BaseActivity::notifyClientData(this, 0);
  result = 0LL;
LABEL_23:
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
  return result;
};

// Line 1025: range 00000000150966EC-000000001509687E
__int64 __fastcall GravenInnocenceActivity::getRaceLevelMaxScore(
        GravenInnocenceActivity *const this,
        uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceRaceLevelData> >::pointer v6; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceRaceLevelData> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 level_id:1024 64 8 9 iter:1026";
  *(_QWORD *)(v2 + 16) = GravenInnocenceActivity::getRaceLevelMaxScore;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = level_id;
  *(std::map<unsigned int,GravenInnocenceRaceLevelData>::iterator *)(v2 + 64) = std::map<unsigned int,GravenInnocenceRaceLevelData>::find(
                                                                                  &this->race_data_.level_data_map,
                                                                                  (const std::map<unsigned int,GravenInnocenceRaceLevelData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,GravenInnocenceRaceLevelData>::end(&this->race_data_.level_data_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceRaceLevelData> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceRaceLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceRaceLevelData> > *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v6->second.max_score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v6 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->second.max_score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    result = v6->second.max_score;
  }
  if ( v8 == (char *)v2 )
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

// Line 1035: range 0000000015096880-0000000015097D26
__int64 __fastcall GravenInnocenceActivity::raceRestart(GravenInnocenceActivity *const this, uint32_t gallery_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v6; // rbx
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // r14
  Scene *v9; // rax
  SceneGalleryComp *GalleryComp; // rax
  common::milog::MiLogStream *v11; // r14
  PlayerSceneComp *v12; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceRaceLevelData> >::pointer v22; // rax
  bool *p_is_open; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  uint32_t SceneId; // r14d
  LuaConfigMgr *p_lua_config_mgr; // rcx
  bool v32; // r14
  common::milog::MiLogStream *v33; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  LuaConfigMgr *v38; // rcx
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  PlayerSceneComp *v43; // r14
  Scene *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // r14
  __int64 result; // rax
  unsigned int val; // [rsp+14h] [rbp-1CCh] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceRaceLevelData> >::_Self __y; // [rsp+18h] [rbp-1C8h] BYREF
  GravenInnocenceRaceLevelData *level_data; // [rsp+20h] [rbp-1C0h]
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+28h] [rbp-1B8h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+30h] [rbp-1B0h]
  const PointScriptConfig *point_script_config_ptr; // [rsp+38h] [rbp-1A8h]
  std::shared_ptr<Config> v57; // [rsp+40h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v58; // [rsp+50h] [rbp-190h] BYREF
  TransferReason p_reason; // [rsp+70h] [rbp-170h] BYREF
  char v60[304]; // [rsp+B0h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v60;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 4 13 level_id:1067 64 4 8 ret:1112 80 4 15 gallery_id:1034 96 8 9 iter:1073 128 12 15 rebor"
                        "n_pos:1110 160 12 15 reborn_rot:1111 192 16 14 scene_ptr:1043 224 16 15 avatar_ptr:1060";
  *(_QWORD *)(v2 + 16) = GravenInnocenceActivity::raceRestart;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -219020288;
  v4[536862725] = -219020288;
  v4[536862726] = -219021312;
  v4[536862727] = -202178560;
  *(_DWORD *)(v2 + 80) = gallery_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 192));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 192)) )
    {
      common::milog::MiLogStream::create(
        &v58,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/graven_innocence_activity.cpp",
        "raceRestart",
        1046);
      v8 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v58,
             (const char (*)[38])"[GRAVEN_INNOCENCE] not on scene, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v58);
      v7 = 103;
      goto LABEL_80;
    }
    v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
    GalleryComp = Scene::getGalleryComp(v9);
    if ( SceneGalleryComp::isAnyGalleryStarted(GalleryComp) )
    {
      common::milog::MiLogStream::create(
        &v58,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/graven_innocence_activity.cpp",
        "raceRestart",
        1051);
      v11 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v58,
              (const char (*)[43])"[GRAVEN_INNOCENCE] anyGalleryStarted, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      common::milog::MiLogStream::~MiLogStream(&v58);
      v7 = 523;
      goto LABEL_80;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v12 = Player::getSceneComp(this->player_);
    if ( PlayerSceneComp::isInTransfer(v12) )
    {
      common::milog::MiLogStream::create(
        &v58,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/graven_innocence_activity.cpp",
        "raceRestart",
        1057);
      v13 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v58,
              (const char (*)[40])"[GRAVEN_INNOCENCE] is in transfer, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v58);
      v7 = 170;
      goto LABEL_80;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getAvatarComp(this->player_);
    PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v2 + 224));
    if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 224)) )
    {
      common::milog::MiLogStream::create(
        &v58,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/graven_innocence_activity.cpp",
        "raceRestart",
        1063);
      v14 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
              &v58,
              (const char (*)[49])"[GRAVEN_INNOCENCE] getCurAvatar is nullptr, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
      common::milog::MiLogStream::~MiLogStream(&v58);
      v7 = 103;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v57);
      v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v57);
      *(_DWORD *)(v2 + 48) = ActivityGravenInnocenceExcelConfigMgr::findRaceLevelIdByGalleryId(
                               &v15->design_config.txt_config_mgr.activity_graven_innocence_mgr,
                               *(_DWORD *)(v2 + 80));
      std::shared_ptr<Config>::~shared_ptr(&v57);
      if ( *(_DWORD *)(v2 + 48) )
      {
        *(std::map<unsigned int,GravenInnocenceRaceLevelData>::iterator *)(v2 + 96) = std::map<unsigned int,GravenInnocenceRaceLevelData>::find(
                                                                                        &this->race_data_.level_data_map,
                                                                                        (const std::map<unsigned int,GravenInnocenceRaceLevelData>::key_type *)(v2 + 48));
        __y._M_node = std::map<unsigned int,GravenInnocenceRaceLevelData>::end(&this->race_data_.level_data_map)._M_node;
        if ( std::operator==(
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceRaceLevelData> >::_Self *)(v2 + 96),
               &__y) )
        {
          common::milog::MiLogStream::create(
            &v58,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/graven_innocence_activity.cpp",
            "raceRestart",
            1076);
          v19 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                  &v58,
                  (const char (*)[58])"[GRAVEN_INNOCENCE] find race level data failed, level_id:");
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v19,
                  (const unsigned int *)(v2 + 48));
          v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
        }
        else
        {
          v22 = std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceRaceLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceRaceLevelData> > *const)(v2 + 96));
          level_data = &v22->second;
          p_is_open = &v22->second.is_open;
          if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(p_is_open);
          }
          if ( !level_data->is_open )
          {
            common::milog::MiLogStream::create(
              &v58,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/graven_innocence_activity.cpp",
              "raceRestart",
              1082);
            v24 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                    &v58,
                    (const char (*)[50])"[GRAVEN_INNOCENCE] race level not open, level_id:");
            v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v24,
                    (const unsigned int *)(v2 + 48));
            v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v25, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
          }
          else
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v57);
            v26 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v57);
            gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                                   &v26->design_config.txt_config_mgr.gallery_config_mgr,
                                   *(_DWORD *)(v2 + 80));
            std::shared_ptr<Config>::~shared_ptr(&v57);
            if ( gallery_config_ptr )
            {
              v29 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
              SceneId = Scene::getSceneId(v29);
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v57);
              p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v57)->design_config.lua_config_mgr;
              if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->revive_point_group_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)gallery_config_ptr + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->revive_point_group_id >> 3)
                                                                                   + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v32 = SceneId != LuaConfigMgr::getSceneIdByGroupId(
                                 p_lua_config_mgr,
                                 gallery_config_ptr->revive_point_group_id);
              std::shared_ptr<Config>::~shared_ptr(&v57);
              if ( v32 )
              {
                common::milog::MiLogStream::create(
                  &v58,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/graven_innocence_activity.cpp",
                  "raceRestart",
                  1095);
                v33 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                        &v58,
                        (const char (*)[39])"[GRAVEN_INNOCENCE] different scene_id:");
                v34 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
                *(_DWORD *)(v2 + 64) = Scene::getSceneId(v34);
                v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v33,
                        (const unsigned int *)(v2 + 64));
                v36 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        v35,
                        (const char (*)[13])" gallery_id:");
                v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v36,
                        (const unsigned int *)(v2 + 80));
                v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v37, (const char (*)[6])" uid:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
              }
              else
              {
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)&v57);
                v38 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v57)->design_config.lua_config_mgr;
                if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->revive_point_group_id >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)gallery_config_ptr + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->revive_point_group_id >> 3)
                                                                                     + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(
                                            v38,
                                            gallery_config_ptr->revive_point_group_id);
                std::shared_ptr<Config>::~shared_ptr(&v57);
                if ( group_script_config_ptr )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->revive_point_config_id >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->revive_point_config_id >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4();
                  }
                  point_script_config_ptr = GroupScriptConfig::findPointConfig(
                                              group_script_config_ptr,
                                              gallery_config_ptr->revive_point_config_id);
                  if ( point_script_config_ptr )
                  {
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
                    *(Vector3 *)(v2 + 128) = point_script_config_ptr->pos;
                    if ( *(char *)(((unsigned __int64)&point_script_config_ptr->rot >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->rot.z + 3) >> 3) + 0x7FFF8000) != 0
                      && (((unsigned __int8)point_script_config_ptr + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->rot.z
                                                                                             + 3) >> 3)
                                                                                           + 0x7FFF8000) )
                    {
                      __asan_report_load_n(&point_script_config_ptr->rot, 12LL);
                    }
                    *(Vector3 *)(v2 + 160) = point_script_config_ptr->rot;
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    v43 = Player::getSceneComp(this->player_);
                    TransferReason::TransferReason(&p_reason, ENTER_REASON_GRAVEN_INNOCENCE_RACE_RESTART);
                    v44 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
                    *(_DWORD *)(v2 + 64) = PlayerSceneComp::jumpToScene(
                                             v43,
                                             v44,
                                             (const Vector3 *)(v2 + 128),
                                             (const Vector3 *)(v2 + 160),
                                             0,
                                             &p_reason);
                    TransferReason::~TransferReason(&p_reason);
                    if ( *(_DWORD *)(v2 + 64) )
                    {
                      common::milog::MiLogStream::create(
                        &v58,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/player/activity/graven_innocence_activity.cpp",
                        "raceRestart",
                        1115);
                      v45 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                              &v58,
                              (const char (*)[44])"[GRAVEN_INNOCENCE] jumpToScene failed, ret:");
                      v46 = common::milog::MiLogStream::operator<<<int,(int *)0>(v45, (const int *)(v2 + 64));
                      v47 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                              v46,
                              (const char (*)[13])" gallery_id:");
                      v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v47,
                              (const unsigned int *)(v2 + 80));
                      v49 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                              v48,
                              (const char (*)[6])" uid:");
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8();
                      val = Player::getUid(this->player_);
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, &val);
                      common::milog::MiLogStream::~MiLogStream(&v58);
                    }
                    v7 = *(_DWORD *)(v2 + 64);
                    goto LABEL_79;
                  }
                  common::milog::MiLogStream::create(
                    &v58,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/graven_innocence_activity.cpp",
                    "raceRestart",
                    1107);
                  v41 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                          &v58,
                          (const char (*)[54])"[GRAVEN_INNOCENCE] findPointConfig failed, config_id:");
                  v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v41,
                          &gallery_config_ptr->revive_point_config_id);
                  v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v42, (const char (*)[6])" uid:");
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v58,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/graven_innocence_activity.cpp",
                    "raceRestart",
                    1101);
                  v39 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                          &v58,
                          (const char (*)[59])"[GRAVEN_INNOCENCE] findGroupScriptConfig failed, group_id:");
                  v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v39,
                          &gallery_config_ptr->revive_point_group_id);
                  v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v40, (const char (*)[6])" uid:");
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                }
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v58,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/graven_innocence_activity.cpp",
                "raceRestart",
                1090);
              v27 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                      &v58,
                      (const char (*)[59])"[GRAVEN_INNOCENCE] gallery_config_ptr is null, gallery_id:");
              v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v27,
                      (const unsigned int *)(v2 + 80));
              v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v28, (const char (*)[6])" uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
            }
          }
        }
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
        common::milog::MiLogStream::~MiLogStream(&v58);
        v7 = -1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v58,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/graven_innocence_activity.cpp",
          "raceRestart",
          1070);
        v16 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                &v58,
                (const char (*)[66])"[GRAVEN_INNOCENCE] findRaceLevelIdByGalleryId failed, gallery_id:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v2 + 80));
        v18 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v17, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
        common::milog::MiLogStream::~MiLogStream(&v58);
        v7 = -1;
      }
    }
LABEL_79:
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 224));
LABEL_80:
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 192));
    goto LABEL_81;
  }
  common::milog::MiLogStream::create(
    &v58,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/graven_innocence_activity.cpp",
    "raceRestart",
    1039);
  v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
         &v58,
         (const char (*)[43])"[GRAVEN_INNOCENCE] not in self scene, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
  common::milog::MiLogStream::~MiLogStream(&v58);
  v7 = 512;
LABEL_81:
  result = v7;
  if ( v60 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
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
  return result;
};

// Line 1121: range 0000000015097D28-0000000015097D49
int32_t __cdecl GravenInnocenceActivity::openRaceLevelByGm(GravenInnocenceActivity *const this, uint32_t level_id)
{
  return GravenInnocenceActivity::openRaceLevel(this, level_id);
};

// Line 1126: range 0000000015097D4A-0000000015097F6C
__int64 __fastcall GravenInnocenceActivity::restartRaceLevelByGm(
        GravenInnocenceActivity *const this,
        uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  const data::GravenInnocenceRaceLevelExcelConfig *level_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v9; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-80h] BYREF
  char v11[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 level_id:1125";
  *(_QWORD *)(v2 + 16) = GravenInnocenceActivity::restartRaceLevelByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = level_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
  level_config_ptr = data::ActivityGravenInnocenceExcelConfigMgrBase::findGravenInnocenceRaceLevelExcelConfig(
                       &v5->design_config.txt_config_mgr.activity_graven_innocence_mgr,
                       *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v9);
  if ( level_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->gallery_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&level_config_ptr->gallery_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    result = GravenInnocenceActivity::raceRestart(this, level_config_ptr->gallery_id);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "restartRaceLevelByGm",
      1130);
    v6 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
           &v10,
           (const char (*)[77])"[GRAVEN_INNOCENCE] findGravenInnocenceRaceLevelExcelConfig failed, level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
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

// Line 1137: range 0000000015097F6E-000000001509832C
__int64 __fastcall GravenInnocenceActivity::setRaceLevelScoreByGm(
        GravenInnocenceActivity *const this,
        uint32_t level_id,
        uint32_t score)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned int *v7; // r9
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  common::milog::MiLogStream *v10; // rax
  PlayerEventComp *EventComp; // r14
  __int64 result; // rax
  int *v13; // [rsp+0h] [rbp-E0h]
  GravenInnocenceActivity *thisa; // [rsp+8h] [rbp-D8h]
  int v15; // [rsp+10h] [rbp-D0h] BYREF
  unsigned int __args_0; // [rsp+14h] [rbp-CCh] BYREF
  const data::GravenInnocenceRaceLevelExcelConfig *level_config_ptr; // [rsp+18h] [rbp-C8h]
  std::shared_ptr<Config> v18; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+50h] [rbp-90h] BYREF

  v13 = (int *)__PAIR64__(level_id, score);
  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 13 level_id:1136 48 4 10 score:1136 64 16 14 event_ptr:1144";
  *(_QWORD *)(v3 + 16) = GravenInnocenceActivity::setRaceLevelScoreByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 32) = level_id;
  *(_DWORD *)(v3 + 48) = (_DWORD)v13;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v18);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
  level_config_ptr = data::ActivityGravenInnocenceExcelConfigMgrBase::findGravenInnocenceRaceLevelExcelConfig(
                       &v6->design_config.txt_config_mgr.activity_graven_innocence_mgr,
                       *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v18);
  if ( level_config_ptr )
  {
    __args_0 = 0;
    v15 = 0;
    common::tools::perf::make_shared<GalleryGravenInnocenceRaceScoreEvent,unsigned int const&,unsigned int &,int,int>(
      (const unsigned int *)(v3 + 64),
      &level_config_ptr->gallery_id,
      (int *)(v3 + 48),
      &v15,
      &__args_0,
      v7,
      v13,
      (int *)this);
    if ( std::operator==<GalleryGravenInnocenceRaceScoreEvent>(
           0LL,
           (const std::shared_ptr<GalleryGravenInnocenceRaceScoreEvent> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/graven_innocence_activity.cpp",
        "setRaceLevelScoreByGm",
        1147);
      v10 = common::milog::MiLogStream::operator<<<char [88],(char *[88])0>(
              &v19,
              (const char (*)[88])"[GRAVEN_INNOCENCE] MAKE_SHARED GalleryGravenInnocenceRaceScoreEvent failed, gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &level_config_ptr->gallery_id);
      common::milog::MiLogStream::~MiLogStream(&v19);
      v9 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EventComp = Player::getEventComp(thisa->player_);
      std::shared_ptr<BaseEvent>::shared_ptr<GalleryGravenInnocenceRaceScoreEvent,void>(
        (std::shared_ptr<BaseEvent> *const)&v18,
        (const std::shared_ptr<GalleryGravenInnocenceRaceScoreEvent> *)(v3 + 64));
      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v18);
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v18);
      v9 = 0;
    }
    std::shared_ptr<GalleryGravenInnocenceRaceScoreEvent>::~shared_ptr((std::shared_ptr<GalleryGravenInnocenceRaceScoreEvent> *const)(v3 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "setRaceLevelScoreByGm",
      1141);
    v8 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
           &v19,
           (const char (*)[77])"[GRAVEN_INNOCENCE] findGravenInnocenceRaceLevelExcelConfig failed, level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v19);
    v9 = -1;
  }
  result = v9;
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

// Line 1156: range 000000001509832E-0000000015098595
uint32_t __cdecl GravenInnocenceActivity::getCarveCompleteNum(
        const GravenInnocenceActivity *const this,
        uint32_t node_num)
{
  uint32_t num; // [rsp+18h] [rbp-88h]
  uint32_t total_count; // [rsp+1Ch] [rbp-84h]
  std::map<unsigned int,GravenInnocenceCarveUsedItemData>::const_iterator __for_begin; // [rsp+20h] [rbp-80h] BYREF
  std::map<unsigned int,GravenInnocenceCarveUsedItemData>::const_iterator __for_end; // [rsp+28h] [rbp-78h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin_0; // [rsp+30h] [rbp-70h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+38h] [rbp-68h] BYREF
  const std::map<unsigned int,GravenInnocenceCarveUsedItemData> *__for_range; // [rsp+40h] [rbp-60h]
  const std::pair<unsigned int const,GravenInnocenceCarveUsedItemData> *v10; // [rsp+48h] [rbp-58h]
  std::tuple_element<0,const std::pair<unsigned int const,GravenInnocenceCarveUsedItemData> >::type *gadget_config_id; // [rsp+50h] [rbp-50h]
  std::tuple_element<1,const std::pair<unsigned int const,GravenInnocenceCarveUsedItemData> >::type *used_item_data; // [rsp+58h] [rbp-48h]
  const std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+60h] [rbp-40h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range_1; // [rsp+68h] [rbp-38h]
  const std::pair<unsigned int const,unsigned int> *v15; // [rsp+70h] [rbp-30h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *item_id_0; // [rsp+78h] [rbp-28h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count_0; // [rsp+80h] [rbp-20h]
  const std::pair<unsigned int const,unsigned int> *v18; // [rsp+88h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *item_id; // [rsp+90h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+98h] [rbp-8h]

  num = 0;
  __for_range = &this->carve_data_.used_item_data_map;
  __for_begin._M_node = std::map<unsigned int,GravenInnocenceCarveUsedItemData>::begin(&this->carve_data_.used_item_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,GravenInnocenceCarveUsedItemData>::end(&this->carve_data_.used_item_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocenceCarveUsedItemData>>::operator*(&__for_begin);
    gadget_config_id = std::get<0ul,unsigned int const,GravenInnocenceCarveUsedItemData>(v10);
    used_item_data = (std::tuple_element<1,const std::pair<unsigned int const,GravenInnocenceCarveUsedItemData> >::type *)std::get<1ul,unsigned int const,GravenInnocenceCarveUsedItemData>(v10);
    total_count = 0;
    __for_range_0 = &used_item_data->need_item_count_map;
    __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin(&used_item_data->need_item_count_map)._M_node;
    __for_end_0._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v18 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
      item_id = std::get<0ul,unsigned int const,unsigned int>(v18);
      count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v18);
      if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      total_count += *count;
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
    }
    __for_range_1 = &used_item_data->pass_item_count_map;
    __for_begin_0._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::unordered_map<unsigned int,unsigned int>::begin(&used_item_data->pass_item_count_map)._M_cur;
    __for_end_0._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::unordered_map<unsigned int,unsigned int>::end(__for_range_1)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_begin_0,
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_end_0) )
    {
      v15 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&__for_begin_0);
      item_id_0 = std::get<0ul,unsigned int const,unsigned int>(v15);
      count_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v15);
      if ( *(_BYTE *)(((unsigned __int64)count_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)count_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      total_count += *count_0;
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&__for_begin_0);
    }
    if ( total_count >= node_num )
      ++num;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocenceCarveUsedItemData>>::operator++(&__for_begin);
  }
  return num;
};

// Line 1178: range 0000000015098596-000000001509A140
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl GravenInnocenceActivity::onEditCarveCombinationReq(
        GravenInnocenceActivity *const this,
        const proto::GravenInnocenceEditCarveCombinationReq *req)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  int32_t v6; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t OwnerUid; // r14d
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  uint32_t v13; // eax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  ActivityGravenInnocenceExcelConfigMgr *p_activity_graven_innocence_mgr; // rcx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  common::milog::MiLogStream *v31; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // r14
  JsonConfigMgr *p_json_config_mgr; // r14
  const google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo> *v40; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // r14
  bool v45; // al
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  std::map<unsigned int,unsigned int> *v48; // rax
  std::unordered_map<unsigned int,unsigned int> *v49; // rax
  CustomGadgetComp *v50; // rax
  PlayerEventComp *EventComp; // r14
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // r14
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v56; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v57; // r14
  google::protobuf::uint32 v58; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v59; // rax
  const std::string *v60; // rax
  google::protobuf::uint32 v61; // eax
  Player *v62; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v63; // rax
  common::milog::MiLogStream *v64; // r14
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // r14
  uint32_t v71; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v72; // rdx
  uint32_t *p_source_entity_id; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v74; // rax
  uint32_t ConfigId; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v76; // rdx
  int32_t *p_param1; // rax
  int32_t v78; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v79; // rax
  int32_t v80; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v81; // rdx
  int32_t *p_param3; // rax
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v84; // rdx
  uint32_t *p_uid; // rax
  Group *v86; // rax
  int32_t result; // eax
  std::string reqa; // [rsp+0h] [rbp-320h] OVERLAPPED BYREF
  google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo>::const_iterator __for_begin; // [rsp+20h] [rbp-300h] BYREF
  google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo>::const_iterator __for_end; // [rsp+28h] [rbp-2F8h] BYREF
  const data::GravenInnocenceCarveOverallExcelConfig *carve_overall_config_ptr; // [rsp+30h] [rbp-2F0h]
  const proto::CustomGadgetTreeInfo *info; // [rsp+38h] [rbp-2E8h]
  GravenInnocenceCarveUsedItemData *used_item_data; // [rsp+40h] [rbp-2E0h]
  const google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo> *__for_range; // [rsp+48h] [rbp-2D8h]
  const proto::CustomCommonNodeInfo *node; // [rsp+50h] [rbp-2D0h]
  proto_log::PlantFlowerShelfSlotLog *slot_log; // [rsp+58h] [rbp-2C8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+60h] [rbp-2C0h] BYREF
  common::milog::MiLogStream v98; // [rsp+70h] [rbp-2B0h] BYREF
  char v99[656]; // [rsp+90h] [rbp-290h] BYREF

  reqa._M_string_length = (std::string::size_type)this;
  reqa._M_dataplus._M_p = (std::string::pointer)req;
  v2 = (unsigned __int64)v99;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "16 48 1 11 holder:1272 64 4 14 entity_id:1191 80 4 14 gadget_id:1210 96 4 21 gadget_config_id:12"
                        "11 112 4 19 slot_config_id:1292 128 4 19 slot_gadget_id:1293 144 16 14 scene_ptr:1179 176 16 15 "
                        "gadget_ptr:1192 208 16 27 custom_gadget_comp_ptr:1198 240 16 14 group_ptr:1204 272 16 14 event_p"
                        "tr:1264 304 16 12 log_ptr:1273 336 16 18 lua_event_ptr:1300 368 24 13 node_vec:1229 432 48 24 ne"
                        "ed_item_count_map:1231 512 56 24 pass_item_count_map:1232";
  *(_QWORD *)(v2 + 16) = GravenInnocenceActivity::onEditCarveCombinationReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = 61956;
  v4[536862725] = 62194;
  v4[536862726] = 62194;
  v4[536862727] = 62194;
  v4[536862728] = 62194;
  v4[536862729] = 62194;
  v4[536862730] = 62194;
  v4[536862731] = 62194;
  v4[536862732] = -218959360;
  v4[536862733] = 62194;
  v4[536862735] = -218959118;
  v4[536862737] = -218103808;
  v4[536862738] = -202116109;
  if ( *(_BYTE *)(((reqa._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(*(Player *const *)(reqa._M_string_length + 24));
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 144));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 144)) )
  {
    common::milog::MiLogStream::create(
      &v98,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "onEditCarveCombinationReq",
      1182);
    v5 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v98,
           (const char (*)[43])"[GRAVEN_INNOCENCE] scene_ptr is null, uid:");
    if ( *(_BYTE *)(((reqa._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *((_DWORD *)&reqa._anon_0._M_allocated_capacity + 2) = Player::getUid(*(const Player *const *)(reqa._M_string_length
                                                                                                 + 24));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v5,
      (const unsigned int *)&reqa._anon_0._M_allocated_capacity + 2);
    common::milog::MiLogStream::~MiLogStream(&v98);
    v6 = 555;
    goto LABEL_94;
  }
  v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
  OwnerUid = Scene::getOwnerUid(v7);
  if ( *(_BYTE *)(((reqa._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( OwnerUid == Player::getUid(*(const Player *const *)(reqa._M_string_length + 24)) )
  {
    *(_DWORD *)(v2 + 64) = proto::GravenInnocenceEditCarveCombinationReq::entity_id((const proto::GravenInnocenceEditCarveCombinationReq *const)reqa._M_dataplus._M_p);
    v13 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
    Scene::findEntity<Gadget>((const Scene *const)(v2 + 176), v13);
    if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v2 + 176)) )
    {
      common::milog::MiLogStream::create(
        &v98,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/graven_innocence_activity.cpp",
        "onEditCarveCombinationReq",
        1195);
      v14 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              &v98,
              (const char (*)[48])"[GRAVEN_INNOCENCE] findEntity fails, entity_id:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 64));
      v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((reqa._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *((_DWORD *)&reqa._anon_0._M_allocated_capacity + 2) = Player::getUid(*(const Player *const *)(reqa._M_string_length + 24));
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v16,
        (const unsigned int *)&reqa._anon_0._M_allocated_capacity + 2);
      common::milog::MiLogStream::~MiLogStream(&v98);
      v6 = 504;
      goto LABEL_93;
    }
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
    EcsBase<Gadget,GadgetCompBase,28u>::findComp<CustomGadgetComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v2 + 208));
    if ( std::operator==<CustomGadgetComp>(0LL, (const std::shared_ptr<CustomGadgetComp> *)(v2 + 208)) )
    {
      common::milog::MiLogStream::create(
        &v98,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/graven_innocence_activity.cpp",
        "onEditCarveCombinationReq",
        1201);
      v17 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v98,
              (const char (*)[30])"[GRAVEN_INNOCENCE] entity id:");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 64));
      v19 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v18, (const char (*)[22])off_256F3FA0);
      v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((reqa._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *((_DWORD *)&reqa._anon_0._M_allocated_capacity + 2) = Player::getUid(*(const Player *const *)(reqa._M_string_length + 24));
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v20,
        (const unsigned int *)&reqa._anon_0._M_allocated_capacity + 2);
      common::milog::MiLogStream::~MiLogStream(&v98);
      v6 = -1;
      goto LABEL_92;
    }
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
    Entity::getGroup((const Entity *const)(v2 + 240));
    if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v2 + 240)) )
    {
      common::milog::MiLogStream::create(
        &v98,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/graven_innocence_activity.cpp",
        "onEditCarveCombinationReq",
        1207);
      v21 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v98,
              (const char (*)[30])"[GRAVEN_INNOCENCE] entity id:");
      v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v2 + 64));
      v23 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v22,
              (const char (*)[18])" getGroup failed,");
      v24 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v23, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((reqa._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_27:
      *((_DWORD *)&reqa._anon_0._M_allocated_capacity + 2) = Player::getUid(*(const Player *const *)(reqa._M_string_length + 24));
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v24,
        (const unsigned int *)&reqa._anon_0._M_allocated_capacity + 2);
      common::milog::MiLogStream::~MiLogStream(&v98);
      v6 = -1;
LABEL_91:
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 240));
LABEL_92:
      std::shared_ptr<CustomGadgetComp>::~shared_ptr((std::shared_ptr<CustomGadgetComp> *const)(v2 + 208));
LABEL_93:
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 176));
      goto LABEL_94;
    }
    v25 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
    *(_DWORD *)(v2 + 80) = Gadget::getGadgetId(v25);
    v26 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
    *(_DWORD *)(v2 + 96) = Entity::getConfigId((const Entity *const)v26);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 336));
    p_activity_graven_innocence_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 336))->design_config.txt_config_mgr.activity_graven_innocence_mgr;
    if ( *(_BYTE *)(((reqa._M_string_length + 36) >> 3) + 0x7FFF8000) != 0
      && (char)(((LOBYTE(reqa._M_string_length) + 36) & 7) + 3) >= *(_BYTE *)(((reqa._M_string_length + 36) >> 3)
                                                                            + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    carve_overall_config_ptr = data::ActivityGravenInnocenceExcelConfigMgrBase::findGravenInnocenceCarveOverallExcelConfig(
                                 p_activity_graven_innocence_mgr,
                                 *(_DWORD *)(reqa._M_string_length + 36));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 336));
    if ( !carve_overall_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v98,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/graven_innocence_activity.cpp",
        "onEditCarveCombinationReq",
        1217);
      v28 = common::milog::MiLogStream::operator<<<char [81],(char *[81])0>(
              &v98,
              (const char (*)[81])"[GRAVEN_INNOCENCE] findGravenInnocenceCarveOverallExcelConfig fail, schedule_id:");
      v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v28,
              (const unsigned int *)(reqa._M_string_length + 36));
      v24 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v29, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((reqa._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_27;
    }
    v30 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
    *((_DWORD *)&reqa._anon_0._M_allocated_capacity + 2) = Entity::getGroupId((const Entity *const)v30);
    if ( !common::tools::MiscUtils::isContains<unsigned int>(
            &carve_overall_config_ptr->group_id_list,
            (const unsigned int *)&reqa._anon_0._M_allocated_capacity + 2) )
    {
      common::milog::MiLogStream::create(
        &v98,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/graven_innocence_activity.cpp",
        "onEditCarveCombinationReq",
        1222);
      v31 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v98,
              (const char (*)[37])"[GRAVEN_INNOCENCE] invalid group id:");
      v32 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
      *(_DWORD *)(v2 + 128) = Entity::getGroupId((const Entity *const)v32);
      v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v31,
              (const unsigned int *)(v2 + 128));
      v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v33, (const char (*)[16])" group_id_list:");
      v35 = common::milog::MiLogStream::operator<<<unsigned int>(v34, &carve_overall_config_ptr->group_id_list);
      v36 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v35,
              (const char (*)[19])" gadget_config_id:");
      v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, (const unsigned int *)(v2 + 96));
      v38 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v37, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((reqa._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *((_DWORD *)&reqa._anon_0._M_allocated_capacity + 2) = Player::getUid(*(const Player *const *)(reqa._M_string_length + 24));
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v38,
        (const unsigned int *)&reqa._anon_0._M_allocated_capacity + 2);
      common::milog::MiLogStream::~MiLogStream(&v98);
      v6 = -1;
      goto LABEL_91;
    }
    info = proto::GravenInnocenceEditCarveCombinationReq::combination_info((const proto::GravenInnocenceEditCarveCombinationReq *const)reqa._M_dataplus._M_p);
    std::vector<std::shared_ptr<CustomCommonNodeData>>::vector((std::vector<std::shared_ptr<CustomCommonNodeData>> *const)(v2 + 368));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 336));
    p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 336))->design_config.json_config_mgr;
    v40 = proto::CustomGadgetTreeInfo::node_list(info);
    JsonConfigMgr::convertCustomTreeInfo(
      p_json_config_mgr,
      *(_DWORD *)(v2 + 80),
      v40,
      (std::vector<std::shared_ptr<CustomCommonNodeData>> *)(v2 + 368));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 336));
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v2 + 432));
    std::unordered_map<unsigned int,unsigned int>::unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v2 + 512));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 336));
    v41 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 336));
    LOBYTE(p_json_config_mgr) = JsonConfigMgr::checkCustomTreeInfo(
                                  &v41->design_config.json_config_mgr,
                                  (const std::vector<std::shared_ptr<CustomCommonNodeData>> *)(v2 + 368),
                                  (std::map<unsigned int,unsigned int> *)(v2 + 432),
                                  (std::unordered_map<unsigned int,unsigned int> *)(v2 + 512)) != 0;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 336));
    if ( (_BYTE)p_json_config_mgr )
    {
      common::milog::MiLogStream::create(
        &v98,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/graven_innocence_activity.cpp",
        "onEditCarveCombinationReq",
        1235);
      v42 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
              &v98,
              (const char (*)[56])"[GRAVEN_INNOCENCE] checkCustomTreeInfo fail, gadget_id:");
      v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, (const unsigned int *)(v2 + 80));
      v44 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v43, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((reqa._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      v45 = !std::map<unsigned int,unsigned int>::empty((const std::map<unsigned int,unsigned int> *const)(v2 + 432))
         || !std::unordered_map<unsigned int,unsigned int>::empty((const std::unordered_map<unsigned int,unsigned int> *const)(v2 + 512));
      if ( !v45
        || !GravenInnocenceActivity::checkCarveEditCountLimit(
              (GravenInnocenceActivity *const)reqa._M_string_length,
              *(_DWORD *)(v2 + 96)) )
      {
        *((_DWORD *)&reqa._anon_0._M_allocated_capacity + 3) = GravenInnocenceActivity::checkCarveUsedItemCountLimit(
                                                                 (GravenInnocenceActivity *const)reqa._M_string_length,
                                                                 *(_DWORD *)(v2 + 96),
                                                                 (const std::map<unsigned int,unsigned int> *)(v2 + 432),
                                                                 (const std::unordered_map<unsigned int,unsigned int> *)(v2 + 512));
        if ( *((_DWORD *)&reqa._anon_0._M_allocated_capacity + 3) )
        {
          v6 = *((_DWORD *)&reqa._anon_0._M_allocated_capacity + 3);
        }
        else
        {
          used_item_data = std::map<unsigned int,GravenInnocenceCarveUsedItemData>::operator[](
                             (std::map<unsigned int,GravenInnocenceCarveUsedItemData> *const)(reqa._M_string_length
                                                                                            + 1288),
                             (const std::map<unsigned int,GravenInnocenceCarveUsedItemData>::key_type *)(v2 + 96));
          v48 = std::move<std::map<unsigned int,unsigned int> &>((std::map<unsigned int,unsigned int> *)(v2 + 432));
          std::map<unsigned int,unsigned int>::operator=(&used_item_data->need_item_count_map, v48);
          v49 = std::move<std::unordered_map<unsigned int,unsigned int> &>((std::unordered_map<unsigned int,unsigned int> *)(v2 + 512));
          std::unordered_map<unsigned int,unsigned int>::operator=(&used_item_data->pass_item_count_map, v49);
          v50 = std::__shared_ptr_access<CustomGadgetComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomGadgetComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 208));
          CustomGadgetComp::updateCustomGadgetInfo(v50, info);
          common::tools::perf::make_shared<GravenInnocenceCarveEditEvent>();
          if ( *(_BYTE *)(((reqa._M_string_length + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          EventComp = Player::getEventComp(*(Player *const *)(reqa._M_string_length + 24));
          std::shared_ptr<BaseEvent>::shared_ptr<GravenInnocenceCarveEditEvent,void>(
            (std::shared_ptr<BaseEvent> *const)(v2 + 336),
            (const std::shared_ptr<GravenInnocenceCarveEditEvent> *)(v2 + 272));
          PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v2 + 336));
          std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 336));
          common::milog::MiLogStream::create(
            &v98,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/graven_innocence_activity.cpp",
            "onEditCarveCombinationReq",
            1267);
          v52 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                  &v98,
                  (const char (*)[54])"[GRAVEN_INNOCENCE] edit carve succ, gadget_config_id:");
          v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v52,
                  (const unsigned int *)(v2 + 96));
          v54 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v53, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((reqa._M_string_length + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *((_DWORD *)&reqa._anon_0._M_allocated_capacity + 2) = Player::getUid(*(const Player *const *)(reqa._M_string_length + 24));
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v54,
            (const unsigned int *)&reqa._anon_0._M_allocated_capacity + 2);
          common::milog::MiLogStream::~MiLogStream(&v98);
          BaseActivity::notifyClientData((BaseActivity *const)reqa._M_string_length, 0);
          if ( *(_BYTE *)(((reqa._M_string_length + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          BasicComp = Player::getBasicComp(*(Player *const *)(reqa._M_string_length + 24));
          PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v98, BasicComp);
          StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xDC9u, reqa);
          std::string::~string(&v98);
          common::tools::perf::make_shared<proto_log::PlayerLogBodyPlantFlowerCombinationEdit>();
          v56 = std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 304));
          proto_log::PlayerLogBodyPlantFlowerCombinationEdit::set_gadget_config_id(v56, *(_DWORD *)(v2 + 80));
          __for_range = proto::CustomGadgetTreeInfo::node_list(info);
          __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo>::begin(__for_range).it_;
          __for_end.it_ = google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo>::end(__for_range).it_;
          while ( google::protobuf::internal::RepeatedPtrIterator<proto::CustomCommonNodeInfo const>::operator!=(
                    &__for_begin,
                    &__for_end) )
          {
            node = google::protobuf::internal::RepeatedPtrIterator<proto::CustomCommonNodeInfo const>::operator*(&__for_begin);
            if ( proto::CustomCommonNodeInfo::parent_index(node) >= 0 )
            {
              v59 = std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 304));
              slot_log = proto_log::PlayerLogBodyPlantFlowerCombinationEdit::add_slot_log(v59);
              v60 = proto::CustomCommonNodeInfo::slot_identifier[abi:cxx11](node);
              proto_log::PlantFlowerShelfSlotLog::set_slot_identifier(slot_log, v60);
              v61 = proto::CustomCommonNodeInfo::config_id(node);
              proto_log::PlantFlowerShelfSlotLog::set_flower_id(slot_log, v61);
            }
            else
            {
              v57 = std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 304));
              v58 = proto::CustomCommonNodeInfo::config_id(node);
              proto_log::PlayerLogBodyPlantFlowerCombinationEdit::set_flower_shelf_id(v57, v58);
            }
            google::protobuf::internal::RepeatedPtrIterator<proto::CustomCommonNodeInfo const>::operator++(&__for_begin);
          }
          if ( *(_BYTE *)(((reqa._M_string_length + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v62 = *(Player **)(reqa._M_string_length + 24);
          std::shared_ptr<google::protobuf::Message>::shared_ptr(
            (std::shared_ptr<google::protobuf::Message> *const)(v2 + 336),
            0LL);
          std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,void>(
            &p_body_ptr,
            (const std::shared_ptr<proto_log::PlayerLogBodyPlantFlowerCombinationEdit> *)(v2 + 304));
          Player::printStatLog(v62, &p_body_ptr, (MessagePtr *)(v2 + 336), 0xEu);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v2 + 336));
          std::shared_ptr<proto_log::PlayerLogBodyPlantFlowerCombinationEdit>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyPlantFlowerCombinationEdit> *const)(v2 + 304));
          StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
          *(_DWORD *)(v2 + 112) = 0;
          *(_DWORD *)(v2 + 128) = 0;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v2 + 336));
          v63 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 336));
          LOBYTE(v62) = JsonConfigMgr::getCustomGadgetSlotInfo(
                          &v63->design_config.json_config_mgr,
                          (const std::vector<std::shared_ptr<CustomCommonNodeData>> *)(v2 + 368),
                          (uint32_t *)(v2 + 112),
                          (uint32_t *)(v2 + 128)) != 0;
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 336));
          if ( (_BYTE)v62 )
          {
            common::milog::MiLogStream::create(
              &v98,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/graven_innocence_activity.cpp",
              "onEditCarveCombinationReq",
              1296);
            v64 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                    &v98,
                    (const char (*)[56])"[GRAVEN_INNOCENCE] getCustomGadgetSlotInfo failed, uid:");
            if ( *(_BYTE *)(((reqa._M_string_length + 24) >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            *((_DWORD *)&reqa._anon_0._M_allocated_capacity + 2) = Player::getUid(*(const Player *const *)(reqa._M_string_length + 24));
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v64,
              (const unsigned int *)&reqa._anon_0._M_allocated_capacity + 2);
            common::milog::MiLogStream::~MiLogStream(&v98);
            v6 = -1;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v98,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/graven_innocence_activity.cpp",
              "onEditCarveCombinationReq",
              1299);
            v65 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    &v98,
                    (const char (*)[30])"[GRAVEN_INNOCENCE] gadget_id:");
            v66 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v65,
                    (const unsigned int *)(v2 + 80));
            v67 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v66,
                    (const char (*)[16])"slot_config_id:");
            v68 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v67,
                    (const unsigned int *)(v2 + 112));
            v69 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v68,
                    (const char (*)[17])" slot_gadget_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v69,
              (const unsigned int *)(v2 + 128));
            common::milog::MiLogStream::~MiLogStream(&v98);
            EventUtil::createEvent((std::shared_ptr<Event> *)(v2 + 336), 3000);
            if ( std::operator==<Event>(0LL, (const std::shared_ptr<Event> *)(v2 + 336)) )
            {
              common::milog::MiLogStream::create(
                &v98,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/graven_innocence_activity.cpp",
                "onEditCarveCombinationReq",
                1303);
              v70 = common::milog::MiLogStream::operator<<<char [80],(char *[80])0>(
                      &v98,
                      (const char (*)[80])"[GRAVEN_INNOCENCE] createEvent EVENT_CUSTOM_GADGET_SLOT_MAP_CHANGED fails, uid:");
              if ( *(_BYTE *)(((reqa._M_string_length + 24) >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              *((_DWORD *)&reqa._anon_0._M_allocated_capacity + 2) = Player::getUid(*(const Player *const *)(reqa._M_string_length + 24));
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v70,
                (const unsigned int *)&reqa._anon_0._M_allocated_capacity + 2);
              common::milog::MiLogStream::~MiLogStream(&v98);
              v6 = -1;
            }
            else
            {
              v71 = *(_DWORD *)(v2 + 64);
              v72 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 336));
              p_source_entity_id = &v72->source_entity_id;
              if ( *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p_source_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3)
                                                                                     + 0x7FFF8000) )
              {
                __asan_report_store4(p_source_entity_id);
              }
              v72->source_entity_id = v71;
              v74 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
              ConfigId = Entity::getConfigId((const Entity *const)v74);
              v76 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 336));
              p_param1 = &v76->param1;
              if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_store4(p_param1);
              }
              v76->param1 = ConfigId;
              v78 = *(_DWORD *)(v2 + 112);
              v79 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 336));
              if ( *(_BYTE *)(((unsigned __int64)&v79->param2 >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v79->param2 >> 3) + 0x7FFF8000) <= 3 )
              {
                v79 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v79->param2);
              }
              v79->param2 = v78;
              v80 = *(_DWORD *)(v2 + 128);
              v81 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 336));
              p_param3 = &v81->param3;
              if ( *(_BYTE *)(((unsigned __int64)p_param3 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p_param3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param3 >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_store4(p_param3);
              }
              v81->param3 = v80;
              if ( *(_BYTE *)(((reqa._M_string_length + 24) >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              Uid = Player::getUid(*(const Player *const *)(reqa._M_string_length + 24));
              v84 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 336));
              p_uid = &v84->uid;
              if ( *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) )
              {
                __asan_report_store4(p_uid);
              }
              v84->uid = Uid;
              v86 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 240));
              Group::handleEvent(v86, (EventPtr *)(v2 + 336));
              v6 = 0;
            }
            std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 336));
          }
          std::shared_ptr<GravenInnocenceCarveEditEvent>::~shared_ptr((std::shared_ptr<GravenInnocenceCarveEditEvent> *const)(v2 + 272));
        }
        goto LABEL_90;
      }
      common::milog::MiLogStream::create(
        &v98,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/graven_innocence_activity.cpp",
        "onEditCarveCombinationReq",
        1245);
      v46 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
              &v98,
              (const char (*)[70])"[GRAVEN_INNOCENCE] checkCarveEditCountLimit failed, gadget_config_id:");
      v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, (const unsigned int *)(v2 + 96));
      v44 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v47, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((reqa._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    *((_DWORD *)&reqa._anon_0._M_allocated_capacity + 2) = Player::getUid(*(const Player *const *)(reqa._M_string_length
                                                                                                 + 24));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v44,
      (const unsigned int *)&reqa._anon_0._M_allocated_capacity + 2);
    common::milog::MiLogStream::~MiLogStream(&v98);
    v6 = -1;
LABEL_90:
    std::unordered_map<unsigned int,unsigned int>::~unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v2 + 512));
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 432));
    std::vector<std::shared_ptr<CustomCommonNodeData>>::~vector((std::vector<std::shared_ptr<CustomCommonNodeData>> *const)(v2 + 368));
    goto LABEL_91;
  }
  common::milog::MiLogStream::create(
    &v98,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/graven_innocence_activity.cpp",
    "onEditCarveCombinationReq",
    1187);
  v9 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
         &v98,
         (const char (*)[48])"[GRAVEN_INNOCENCE] not in self scene, OwnerUid:");
  v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
  *(_DWORD *)(v2 + 128) = Scene::getOwnerUid(v10);
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 128));
  v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((reqa._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *((_DWORD *)&reqa._anon_0._M_allocated_capacity + 2) = Player::getUid(*(const Player *const *)(reqa._M_string_length
                                                                                               + 24));
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
    v12,
    (const unsigned int *)&reqa._anon_0._M_allocated_capacity + 2);
  common::milog::MiLogStream::~MiLogStream(&v98);
  v6 = 512;
LABEL_94:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 144));
  result = v6;
  if ( v99 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF803C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = -168430091;
  }
  return result;
};

// Line 1317: range 000000001509A142-000000001509A3B9
int32_t __cdecl GravenInnocenceActivity::checkCarveEditCountLimit(
        GravenInnocenceActivity *const this,
        uint32_t gadget_config_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-F4h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-F0h] BYREF
  char v12[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 19 can_edit_count:1319 64 56 27 has_edit_config_id_set:1318";
  *(_QWORD *)(v2 + 16) = GravenInnocenceActivity::checkCarveEditCountLimit;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  GravenInnocenceActivity::getCarveHasEditConfigIdSet(
    (std::unordered_set<unsigned int> *)(v2 + 64),
    this,
    gadget_config_id);
  *(_DWORD *)(v2 + 48) = GravenInnocenceActivity::getCarveCanEditCount(this);
  if ( std::unordered_set<unsigned int>::size((const std::unordered_set<unsigned int> *const)(v2 + 64)) < *(unsigned int *)(v2 + 48) )
  {
    v8 = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "checkCarveEditCountLimit",
      1322);
    v5 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v11,
           (const char (*)[47])"[GRAVEN_INNOCENCE] reach carve can edit count:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v8 = -1;
  }
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v2 + 64));
  result = v8;
  if ( v12 == (char *)v2 )
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

// Line 1330: range 000000001509A3BA-000000001509AC78
int32_t __cdecl GravenInnocenceActivity::checkCarveUsedItemCountLimit(
        GravenInnocenceActivity *const this,
        uint32_t gadget_config_id,
        const std::map<unsigned int,unsigned int> *need_item_count_map,
        const std::unordered_map<unsigned int,unsigned int> *pass_item_count_map)
{
  std::map<unsigned int,unsigned int> *v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::map<unsigned int,unsigned int>::mapped_type *v7; // rax
  int v8; // esi
  uint32_t ItemCount; // ecx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  int32_t v17; // r14d
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+20h] [rbp-180h] BYREF
  unsigned int Uid; // [rsp+24h] [rbp-17Ch] BYREF
  std::map<unsigned int,GravenInnocenceCarveUsedItemData>::iterator __for_begin; // [rsp+28h] [rbp-178h] BYREF
  std::map<unsigned int,GravenInnocenceCarveUsedItemData>::iterator __for_end; // [rsp+30h] [rbp-170h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin_0; // [rsp+38h] [rbp-168h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+40h] [rbp-160h] BYREF
  std::map<unsigned int,GravenInnocenceCarveUsedItemData> *__for_range; // [rsp+48h] [rbp-158h]
  PlayerItemComp *player_item_comp; // [rsp+50h] [rbp-150h]
  std::map<unsigned int,unsigned int> *__for_range_1; // [rsp+58h] [rbp-148h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range_2; // [rsp+60h] [rbp-140h]
  const std::pair<unsigned int const,unsigned int> *v35; // [rsp+68h] [rbp-138h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *item_id_1; // [rsp+70h] [rbp-130h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+78h] [rbp-128h]
  const std::pair<unsigned int const,unsigned int> *v38; // [rsp+80h] [rbp-120h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *item_id_0; // [rsp+88h] [rbp-118h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count_0; // [rsp+90h] [rbp-110h]
  const std::pair<unsigned int const,GravenInnocenceCarveUsedItemData> *v41; // [rsp+98h] [rbp-108h]
  std::tuple_element<0,const std::pair<unsigned int const,GravenInnocenceCarveUsedItemData> >::type *other_gadget_config_id; // [rsp+A0h] [rbp-100h]
  std::tuple_element<1,const std::pair<unsigned int const,GravenInnocenceCarveUsedItemData> >::type *used_item_data; // [rsp+A8h] [rbp-F8h]
  const std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+B0h] [rbp-F0h]
  const std::pair<unsigned int const,unsigned int> *v45; // [rsp+B8h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *item_id; // [rsp+C0h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+C8h] [rbp-D8h]
  common::milog::MiLogStream v48; // [rsp+D0h] [rbp-D0h] BYREF
  char v49[176]; // [rsp+F0h] [rbp-B0h] BYREF

  v4 = (std::map<unsigned int,unsigned int> *)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = (std::map<unsigned int,unsigned int> *)v5;
  }
  *(_QWORD *)v4->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v4->_M_t._M_impl._M_header._M_color = "1 48 48 30 total_need_item_count_map:1331";
  v4->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)GravenInnocenceActivity::checkCarveUsedItemCountLimit;
  v6 = (_DWORD *)((unsigned __int64)v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862723] = -202116109;
  std::map<unsigned int,unsigned int>::map(v4 + 1, need_item_count_map);
  __for_range = &this->carve_data_.used_item_data_map;
  __for_begin._M_node = std::map<unsigned int,GravenInnocenceCarveUsedItemData>::begin(&this->carve_data_.used_item_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,GravenInnocenceCarveUsedItemData>::end(&this->carve_data_.used_item_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v41 = std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceCarveUsedItemData>>::operator*(&__for_begin);
    other_gadget_config_id = std::get<0ul,unsigned int const,GravenInnocenceCarveUsedItemData>(v41);
    used_item_data = (std::tuple_element<1,const std::pair<unsigned int const,GravenInnocenceCarveUsedItemData> >::type *)std::get<1ul,unsigned int const,GravenInnocenceCarveUsedItemData>(v41);
    if ( *(_BYTE *)(((unsigned __int64)other_gadget_config_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)other_gadget_config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)other_gadget_config_id >> 3)
                                                                               + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( gadget_config_id != *other_gadget_config_id )
    {
      __for_range_0 = &used_item_data->need_item_count_map;
      __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin(&used_item_data->need_item_count_map)._M_node;
      __for_end_0._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v45 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
        item_id = std::get<0ul,unsigned int const,unsigned int>(v45);
        count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v45);
        v7 = std::map<unsigned int,unsigned int>::operator[](v4 + 1, item_id);
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v8 = *v7;
        if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *v7 = v8 + *count;
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceCarveUsedItemData>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player_item_comp = Player::getItemComp(this->player_);
  __for_range_1 = v4 + 1;
  __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin(v4 + 1)._M_node;
  __for_end_0._M_node = std::map<unsigned int,unsigned int>::end(__for_range_1)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin_0,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end_0) )
  {
    v38 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin_0);
    item_id_0 = std::get<0ul,unsigned int const,unsigned int>(v38);
    count_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v38);
    if ( *(_BYTE *)(((unsigned __int64)item_id_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)item_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    ItemCount = PlayerItemComp::getItemCount(player_item_comp, *item_id_0);
    if ( *(_BYTE *)(((unsigned __int64)count_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)count_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( ItemCount < *count_0 )
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/graven_innocence_activity.cpp",
        "checkCarveUsedItemCountLimit",
        1350);
      v10 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              &v48,
              (const char (*)[51])"[GRAVEN_INNOCENCE] carve item not enough. item_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, item_id_0);
      v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])" need count:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, count_0);
      v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" has count:");
      if ( *(_BYTE *)(((unsigned __int64)item_id_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)item_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      val = PlayerItemComp::getItemCount(player_item_comp, *item_id_0);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
      v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &Uid);
      common::milog::MiLogStream::~MiLogStream(&v48);
      v17 = 609;
      goto LABEL_42;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin_0);
  }
  __for_range_2 = pass_item_count_map;
  __for_begin_0._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::unordered_map<unsigned int,unsigned int>::begin(pass_item_count_map)._M_cur;
  __for_end_0._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::unordered_map<unsigned int,unsigned int>::end(__for_range_2)._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_begin_0,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_end_0) )
    {
      v17 = 0;
      goto LABEL_42;
    }
    v35 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&__for_begin_0);
    item_id_1 = std::get<0ul,unsigned int const,unsigned int>(v35);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v35);
    if ( *(_BYTE *)(((unsigned __int64)item_id_1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)item_id_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id_1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( !PlayerItemComp::hasItemById(player_item_comp, *item_id_1) )
      break;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&__for_begin_0);
  }
  common::milog::MiLogStream::create(
    &v48,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/graven_innocence_activity.cpp",
    "checkCarveUsedItemCountLimit",
    1360);
  v18 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
          &v48,
          (const char (*)[50])"[GRAVEN_INNOCENCE] pass item not enough. item id:");
  v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, item_id_1);
  v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &Uid);
  common::milog::MiLogStream::~MiLogStream(&v48);
  v17 = 609;
LABEL_42:
  std::map<unsigned int,unsigned int>::~map(v4 + 1);
  result = v17;
  if ( v49 == (char *)v4 )
  {
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v4->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1368: range 000000001509AC7A-000000001509AF57
uint32_t __cdecl GravenInnocenceActivity::getCarveCanEditCount(const GravenInnocenceActivity *const this)
{
  bool *p_is_open; // rax
  ActivityGravenInnocenceExcelConfigMgr *p_activity_graven_innocence_mgr; // rcx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rbx
  unsigned int val; // [rsp+10h] [rbp-80h] BYREF
  uint32_t can_edit_count; // [rsp+14h] [rbp-7Ch]
  std::map<unsigned int,GravenInnocenceCarveStageData>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::map<unsigned int,GravenInnocenceCarveStageData>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  const std::map<unsigned int,GravenInnocenceCarveStageData> *__for_range; // [rsp+28h] [rbp-68h]
  const std::pair<unsigned int const,GravenInnocenceCarveStageData> *v12; // [rsp+30h] [rbp-60h]
  std::tuple_element<0,const std::pair<unsigned int const,GravenInnocenceCarveStageData> >::type *stage_id; // [rsp+38h] [rbp-58h]
  std::tuple_element<1,const std::pair<unsigned int const,GravenInnocenceCarveStageData> >::type *stage_data; // [rsp+40h] [rbp-50h]
  const data::GravenInnocenceCarveStageExcelConfig *stage_config_ptr; // [rsp+48h] [rbp-48h]
  std::shared_ptr<Config> v16; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v17; // [rsp+60h] [rbp-30h] BYREF

  can_edit_count = 0;
  __for_range = &this->carve_data_.stage_data_map;
  __for_begin._M_node = std::map<unsigned int,GravenInnocenceCarveStageData>::begin(&this->carve_data_.stage_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,GravenInnocenceCarveStageData>::end(&this->carve_data_.stage_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v12 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocenceCarveStageData>>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,GravenInnocenceCarveStageData>(v12);
    stage_data = (std::tuple_element<1,const std::pair<unsigned int const,GravenInnocenceCarveStageData> >::type *)std::get<1ul,unsigned int const,GravenInnocenceCarveStageData>(v12);
    p_is_open = &stage_data->is_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_open);
    }
    if ( stage_data->is_open )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v16);
      p_activity_graven_innocence_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16)->design_config.txt_config_mgr.activity_graven_innocence_mgr;
      if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      stage_config_ptr = data::ActivityGravenInnocenceExcelConfigMgrBase::findGravenInnocenceCarveStageExcelConfig(
                           p_activity_graven_innocence_mgr,
                           *stage_id);
      std::shared_ptr<Config>::~shared_ptr(&v16);
      if ( stage_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->carve_add_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)stage_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_config_ptr->carve_add_count >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        can_edit_count = SAFE_ADD<unsigned int,unsigned int>(can_edit_count, stage_config_ptr->carve_add_count);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/graven_innocence_activity.cpp",
          "getCarveCanEditCount",
          1379);
        v3 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(
               &v17,
               (const char (*)[76])"[GRAVEN_INNOCENCE] findGravenInnocenceCarveStageExcelConfig fail, stage_id:");
        v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, stage_id);
        v5 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v4, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
        common::milog::MiLogStream::~MiLogStream(&v17);
      }
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocenceCarveStageData>>::operator++(&__for_begin);
  }
  return can_edit_count;
};

// Line 1388: range 000000001509AF58-000000001509B0BB
std::unordered_set<unsigned int> *__cdecl GravenInnocenceActivity::getCarveHasEditConfigIdSet(
        std::unordered_set<unsigned int> *retstr,
        const GravenInnocenceActivity *const this,
        uint32_t exclude_gadget_config_id)
{
  std::map<unsigned int,GravenInnocenceCarveUsedItemData>::const_iterator __for_begin; // [rsp+20h] [rbp-40h] BYREF
  std::map<unsigned int,GravenInnocenceCarveUsedItemData>::const_iterator __for_end; // [rsp+28h] [rbp-38h] BYREF
  const std::map<unsigned int,GravenInnocenceCarveUsedItemData> *__for_range; // [rsp+30h] [rbp-30h]
  const std::pair<unsigned int const,GravenInnocenceCarveUsedItemData> *v9; // [rsp+38h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,GravenInnocenceCarveUsedItemData> >::type *gadget_config_id; // [rsp+40h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,GravenInnocenceCarveUsedItemData> >::type *used_item_data; // [rsp+48h] [rbp-18h]

  std::unordered_set<unsigned int>::unordered_set(retstr);
  __for_range = &this->carve_data_.used_item_data_map;
  __for_begin._M_node = std::map<unsigned int,GravenInnocenceCarveUsedItemData>::begin(&this->carve_data_.used_item_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,GravenInnocenceCarveUsedItemData>::end(&this->carve_data_.used_item_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocenceCarveUsedItemData>>::operator*(&__for_begin);
    gadget_config_id = std::get<0ul,unsigned int const,GravenInnocenceCarveUsedItemData>(v9);
    used_item_data = (std::tuple_element<1,const std::pair<unsigned int const,GravenInnocenceCarveUsedItemData> >::type *)std::get<1ul,unsigned int const,GravenInnocenceCarveUsedItemData>(v9);
    if ( *(_BYTE *)(((unsigned __int64)gadget_config_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)gadget_config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gadget_config_id >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( exclude_gadget_config_id != *gadget_config_id
      && (!std::map<unsigned int,unsigned int>::empty(&used_item_data->need_item_count_map)
       || !std::unordered_map<unsigned int,unsigned int>::empty(&used_item_data->pass_item_count_map)) )
    {
      std::unordered_set<unsigned int>::insert(retstr, gadget_config_id);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,GravenInnocenceCarveUsedItemData>>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 1405: range 000000001509B0BC-000000001509B448
__int64 __fastcall GravenInnocenceActivity::openCarveStage(GravenInnocenceActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceCarveStageData> >::pointer v9; // rdx
  bool *p_is_open; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r13
  unsigned int val; // [rsp+14h] [rbp-ACh] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceCarveStageData> >::_Self __y; // [rsp+18h] [rbp-A8h] BYREF
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-A0h] BYREF
  char v17[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 stage_id:1404 64 8 9 iter:1406";
  *(_QWORD *)(v2 + 16) = GravenInnocenceActivity::openCarveStage;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,GravenInnocenceCarveStageData>::iterator *)(v2 + 64) = std::map<unsigned int,GravenInnocenceCarveStageData>::find(
                                                                                   &this->carve_data_.stage_data_map,
                                                                                   (const std::map<unsigned int,GravenInnocenceCarveStageData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,GravenInnocenceCarveStageData>::end(&this->carve_data_.stage_data_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceCarveStageData> >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "openCarveStage",
      1409);
    v5 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v16,
           (const char (*)[59])"[GRAVEN_INNOCENCE] find carve stage data failed, stage_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceCarveStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocenceCarveStageData> > *const)(v2 + 64));
    p_is_open = &v9->second.is_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(p_is_open);
    }
    v9->second.is_open = 1;
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "openCarveStage",
      1413);
    v11 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            &v16,
            (const char (*)[40])"[GRAVEN_INNOCENCE] open carve stage_id:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
    v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    BaseActivity::notifyClientData(this, 0);
    result = 0LL;
  }
  if ( v17 == (char *)v2 )
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

// Line 1419: range 000000001509B44A-000000001509B46B
int32_t __cdecl GravenInnocenceActivity::openCarveStageByGm(GravenInnocenceActivity *const this, uint32_t stage_id)
{
  return GravenInnocenceActivity::openCarveStage(this, stage_id);
};

// Line 1425: range 000000001509B46C-000000001509B96F
__int64 __fastcall GravenInnocenceActivity::openPhotoStage(GravenInnocenceActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r12
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocencePhotoStageData> >::pointer v9; // rax
  bool *p_is_open; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r12
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocencePhotoStageData> >::_Self __y; // [rsp+20h] [rbp-B0h] BYREF
  GravenInnocencePhotoStageData *stage_data; // [rsp+28h] [rbp-A8h]
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-A0h] BYREF
  char v20[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 stage_id:1424 64 8 9 iter:1426";
  *(_QWORD *)(v2 + 16) = GravenInnocenceActivity::openPhotoStage;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,GravenInnocencePhotoStageData>::iterator *)(v2 + 64) = std::map<unsigned int,GravenInnocencePhotoStageData>::find(
                                                                                   &this->photo_data_.stage_data_map,
                                                                                   (const std::map<unsigned int,GravenInnocencePhotoStageData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,GravenInnocencePhotoStageData>::end(&this->photo_data_.stage_data_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocencePhotoStageData> >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "openPhotoStage",
      1429);
    v5 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v19,
           (const char (*)[59])"[GRAVEN_INNOCENCE] find photo stage data failed, stage_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_7:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = 0xFFFFFFFFLL;
    goto LABEL_19;
  }
  v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocencePhotoStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocencePhotoStageData> > *const)(v2 + 64));
  stage_data = &v9->second;
  p_is_open = &v9->second.is_open;
  if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(p_is_open);
  }
  if ( stage_data->is_open )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "openPhotoStage",
      1435);
    v11 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
            &v19,
            (const char (*)[51])"[GRAVEN_INNOCENCE] photo stage has open, stage_id:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_7;
  }
  if ( *(_BYTE *)(((unsigned __int64)&stage_data->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)stage_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_data->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&stage_data->is_open);
  }
  stage_data->is_open = 1;
  GravenInnocenceActivity::updatePhotoBundleTrackingMark(this, *(_DWORD *)(v2 + 48), 0);
  common::milog::MiLogStream::create(
    &v19,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/graven_innocence_activity.cpp",
    "openPhotoStage",
    1442);
  v13 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
          &v19,
          (const char (*)[40])"[GRAVEN_INNOCENCE] open photo stage_id:");
  v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
  v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
  common::milog::MiLogStream::~MiLogStream(&v19);
  BaseActivity::notifyClientData(this, 0);
  result = 0LL;
LABEL_19:
  if ( v20 == (char *)v2 )
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

// Line 1448: range 000000001509B970-000000001509C993
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall GravenInnocenceActivity::finishPhoto(
        GravenInnocenceActivity *const this,
        uint32_t object_id,
        uint32_t param)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v6; // al
  unsigned int v7; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t SceneId; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocencePhotoStageData> >::pointer v20; // rax
  bool *p_is_open; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  ActivityGravenInnocenceExcelConfigMgr *p_activity_graven_innocence_mgr; // rcx
  bool v25; // r14
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  unsigned int *v29; // rcx
  GravenInnocencePhotoObjectData *v30; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocencePhotoObjectData> >,bool> v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  PlayerEventComp *EventComp; // r14
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocencePhotoFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocencePhotoFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  Player *v40; // r14
  __int64 result; // rax
  std::string v42; // [rsp+0h] [rbp-1B0h] OVERLAPPED BYREF
  const data::GravenInnocencePhotoStageExcelConfig *stage_config_ptr; // [rsp+20h] [rbp-190h]
  GravenInnocencePhotoStageData *stage_data; // [rsp+28h] [rbp-188h]
  std::map<unsigned int,GravenInnocencePhotoObjectData> *__for_range; // [rsp+30h] [rbp-180h]
  const std::pair<unsigned int const,GravenInnocencePhotoObjectData> *v46; // [rsp+38h] [rbp-178h]
  std::tuple_element<0,const std::pair<unsigned int const,GravenInnocencePhotoObjectData> >::type *have_object_id; // [rsp+40h] [rbp-170h]
  std::tuple_element<1,const std::pair<unsigned int const,GravenInnocencePhotoObjectData> >::type *_; // [rsp+48h] [rbp-168h]
  GravenInnocencePhotoObjectData v49; // [rsp+54h] [rbp-15Ch] BYREF
  std::shared_ptr<GravenInnocencePhotoFinishEvent> __r; // [rsp+60h] [rbp-150h] BYREF
  std::shared_ptr<google::protobuf::Message> v51; // [rsp+70h] [rbp-140h] BYREF
  common::milog::MiLogStream v52; // [rsp+80h] [rbp-130h] BYREF
  char v53[272]; // [rsp+A0h] [rbp-110h] BYREF

  v42._M_string_length = (std::string::size_type)this;
  v42._M_dataplus._M_p = (std::string::pointer)__PAIR64__(object_id, param);
  v3 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 1 11 holder:1521 64 4 13 stage_id:1467 80 4 26 have_stage_object_num:1493 96 4 14 object_id"
                        ":1447 112 4 10 param:1447 128 8 9 iter:1479 160 16 14 scene_ptr:1455 192 16 12 log_ptr:1522";
  *(_QWORD *)(v3 + 16) = GravenInnocenceActivity::finishPhoto;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -218959360;
  v5[536862725] = -219021312;
  v5[536862726] = -202178560;
  *(_DWORD *)(v3 + 96) = HIDWORD(v42._M_dataplus._M_p);
  *(_DWORD *)(v3 + 112) = v42._M_dataplus._M_p;
  if ( !BaseActivity::isOpening((const BaseActivity *const)v42._M_string_length, 0)
    || BaseActivity::isSettled((const BaseActivity *const)v42._M_string_length) )
  {
    goto LABEL_9;
  }
  if ( *(char *)(((v42._M_string_length + 984) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(v42._M_string_length + 984);
  if ( *(_BYTE *)(v42._M_string_length + 984) )
LABEL_9:
    v6 = 1;
  else
    v6 = 0;
  if ( v6 )
  {
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "finishPhoto",
      1451);
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      &v52,
      (const char (*)[43])"[GRAVEN_INNOCENCE] activity is not opening");
    common::milog::MiLogStream::~MiLogStream(&v52);
    v7 = 860;
    goto LABEL_54;
  }
  if ( *(_BYTE *)(((v42._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(*(Player *const *)(v42._M_string_length + 24));
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 160));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 160)) )
  {
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "finishPhoto",
      1458);
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      &v52,
      (const char (*)[40])"[GRAVEN_INNOCENCE] player not on scene.");
    common::milog::MiLogStream::~MiLogStream(&v52);
    v7 = 103;
  }
  else
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    SceneId = Scene::getSceneId(v8);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v51);
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v51);
    LOBYTE(SceneId) = SceneId != TxtConfigMgr::getDefaultWorldMainSceneId(&v10->design_config.txt_config_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v51);
    if ( (_BYTE)SceneId )
    {
      common::milog::MiLogStream::create(
        &v52,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/graven_innocence_activity.cpp",
        "finishPhoto",
        1463);
      v11 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
              &v52,
              (const char (*)[49])"[GRAVEN_INNOCENCE] player not in scene 3, scene:");
      v12 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      *(_DWORD *)(v3 + 80) = Scene::getSceneId(v12);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream(&v52);
      v7 = 531;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v51);
      v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v51);
      *(_DWORD *)(v3 + 64) = ActivityGravenInnocenceExcelConfigMgr::findPhotoStageIdByObjectId(
                               &v13->design_config.txt_config_mgr.activity_graven_innocence_mgr,
                               *(_DWORD *)(v3 + 96));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v51);
      if ( *(_DWORD *)(v3 + 64) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v51);
        v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v51);
        stage_config_ptr = data::ActivityGravenInnocenceExcelConfigMgrBase::findGravenInnocencePhotoStageExcelConfig(
                             &v15->design_config.txt_config_mgr.activity_graven_innocence_mgr,
                             *(_DWORD *)(v3 + 64));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v51);
        if ( stage_config_ptr )
        {
          *(std::map<unsigned int,GravenInnocencePhotoStageData>::iterator *)(v3 + 128) = std::map<unsigned int,GravenInnocencePhotoStageData>::find(
                                                                                            (std::map<unsigned int,GravenInnocencePhotoStageData> *const)(v42._M_string_length + 1048),
                                                                                            (const std::map<unsigned int,GravenInnocencePhotoStageData>::key_type *)(v3 + 64));
          *((std::map<unsigned int,GravenInnocencePhotoStageData>::iterator *)&v42._anon_0._M_allocated_capacity + 1) = std::map<unsigned int,GravenInnocencePhotoStageData>::end((std::map<unsigned int,GravenInnocencePhotoStageData> *const)(v42._M_string_length + 1048));
          if ( std::operator==(
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocencePhotoStageData> >::_Self *)(v3 + 128),
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocencePhotoStageData> >::_Self *)&v42._anon_0._M_allocated_capacity
               + 1) )
          {
            common::milog::MiLogStream::create(
              &v52,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/graven_innocence_activity.cpp",
              "finishPhoto",
              1482);
            v17 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                    &v52,
                    (const char (*)[59])"[GRAVEN_INNOCENCE] find photo stage data failed, stage_id:");
            v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v17,
                    (const unsigned int *)(v3 + 64));
            v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((v42._M_string_length + 24) >> 3) + 0x7FFF8000) )
              __asan_report_load8();
          }
          else
          {
            v20 = std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocencePhotoStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocencePhotoStageData> > *const)(v3 + 128));
            stage_data = &v20->second;
            p_is_open = &v20->second.is_open;
            if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
              && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
            {
              __asan_report_load1(p_is_open);
            }
            if ( stage_data->is_open )
            {
              *(_DWORD *)(v3 + 80) = 0;
              __for_range = (std::map<unsigned int,GravenInnocencePhotoObjectData> *)(v42._M_string_length + 1096);
              *(std::map<unsigned int,GravenInnocencePhotoObjectData>::iterator *)v42._anon_0._M_local_buf = std::map<unsigned int,GravenInnocencePhotoObjectData>::begin((std::map<unsigned int,GravenInnocencePhotoObjectData> *const)(v42._M_string_length + 1096));
              *((std::map<unsigned int,GravenInnocencePhotoObjectData>::iterator *)&v42._anon_0._M_allocated_capacity + 1) = std::map<unsigned int,GravenInnocencePhotoObjectData>::end(__for_range);
              while ( std::operator!=(
                        (const std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocencePhotoObjectData> >::_Self *)&v42._anon_0,
                        (const std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocencePhotoObjectData> >::_Self *)&v42._anon_0._M_allocated_capacity
                      + 1) )
              {
                v46 = std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocencePhotoObjectData>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocencePhotoObjectData> > *const)&v42._anon_0);
                have_object_id = std::get<0ul,unsigned int const,GravenInnocencePhotoObjectData>(v46);
                _ = (std::tuple_element<1,const std::pair<unsigned int const,GravenInnocencePhotoObjectData> >::type *)std::get<1ul,unsigned int const,GravenInnocencePhotoObjectData>(v46);
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)&v51);
                p_activity_graven_innocence_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v51)->design_config.txt_config_mgr.activity_graven_innocence_mgr;
                if ( *(_BYTE *)(((unsigned __int64)have_object_id >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)have_object_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)have_object_id >> 3)
                                                                                   + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                v25 = ActivityGravenInnocenceExcelConfigMgr::findPhotoStageIdByObjectId(
                        p_activity_graven_innocence_mgr,
                        *have_object_id) == *(_DWORD *)(v3 + 64);
                std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v51);
                if ( v25 )
                  ++*(_DWORD *)(v3 + 80);
                std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocencePhotoObjectData>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocencePhotoObjectData> > *const)&v42._anon_0);
              }
              if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->object_limit_num >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&stage_config_ptr->object_limit_num >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              if ( stage_config_ptr->object_limit_num > *(_DWORD *)(v3 + 80) )
              {
                v49.object_id = *(_DWORD *)(v3 + 96);
                v49.param = *(_DWORD *)(v3 + 112);
                v49.finish_time = common::tools::TimeUtils::getNow();
                v31 = std::map<unsigned int,GravenInnocencePhotoObjectData>::emplace<unsigned int &,GravenInnocencePhotoObjectData>(
                        (std::map<unsigned int,GravenInnocencePhotoObjectData> *const)(v42._M_string_length + 1096),
                        (unsigned int *)(v3 + 96),
                        &v49,
                        v29,
                        v30);
                if ( !v31.second )
                {
                  common::milog::MiLogStream::create(
                    &v52,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/activity/graven_innocence_activity.cpp",
                    "finishPhoto",
                    1511);
                  v32 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                          &v52,
                          (const char (*)[42])"[GRAVEN_INNOCENCE] dumplicate object_id: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v32,
                    (const unsigned int *)(v3 + 96));
                  common::milog::MiLogStream::~MiLogStream(&v52);
                  v7 = -1;
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v52,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/activity/graven_innocence_activity.cpp",
                    "finishPhoto",
                    1514);
                  v33 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                          &v52,
                          (const char (*)[43])"[GRAVEN_INNOCENCE] finish photo object_id:");
                  v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v33,
                          (const unsigned int *)(v3 + 96));
                  v35 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v34, (const char (*)[8])" param:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v35,
                    (const unsigned int *)(v3 + 112));
                  common::milog::MiLogStream::~MiLogStream(&v52);
                  if ( *(_BYTE *)(((v42._M_string_length + 24) >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  EventComp = Player::getEventComp(*(Player *const *)(v42._M_string_length + 24));
                  common::tools::perf::make_shared<GravenInnocencePhotoFinishEvent,unsigned int &>(
                    (unsigned int *)&__r,
                    (unsigned int *)(v3 + 96));
                  std::shared_ptr<BaseEvent>::shared_ptr<GravenInnocencePhotoFinishEvent,void>(
                    (std::shared_ptr<BaseEvent> *const)&v51,
                    &__r);
                  PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v51);
                  std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v51);
                  std::shared_ptr<GravenInnocencePhotoFinishEvent>::~shared_ptr(&__r);
                  BaseActivity::notifyClientData((BaseActivity *const)v42._M_string_length, 0);
                  if ( *(_BYTE *)(((v42._M_string_length + 24) >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  BasicComp = Player::getBasicComp(*(Player *const *)(v42._M_string_length + 24));
                  PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v52, BasicComp);
                  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xE58u, v42);
                  std::string::~string(&v52);
                  common::tools::perf::make_shared<proto_log::PlayerLogBodyGravenInnocencePhotoFinish>();
                  v38 = std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocencePhotoFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocencePhotoFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                  proto_log::PlayerLogBodyGravenInnocencePhotoFinish::set_object_id(v38, *(_DWORD *)(v3 + 96));
                  v39 = std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocencePhotoFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGravenInnocencePhotoFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                  proto_log::PlayerLogBodyGravenInnocencePhotoFinish::set_stage_id(v39, *(_DWORD *)(v3 + 64));
                  if ( *(_BYTE *)(((v42._M_string_length + 24) >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  v40 = *(Player **)(v42._M_string_length + 24);
                  std::shared_ptr<google::protobuf::Message>::shared_ptr(&v51, 0LL);
                  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGravenInnocencePhotoFinish,void>(
                    (std::shared_ptr<google::protobuf::Message> *const)&__r,
                    (const std::shared_ptr<proto_log::PlayerLogBodyGravenInnocencePhotoFinish> *)(v3 + 192));
                  Player::printStatLog(v40, (MessagePtr *)&__r, &v51, 0xEu);
                  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&__r);
                  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v51);
                  GravenInnocenceActivity::updatePhotoBundleTrackingMark(
                    (GravenInnocenceActivity *const)v42._M_string_length,
                    *(_DWORD *)(v3 + 64),
                    0);
                  v7 = 0;
                  std::shared_ptr<proto_log::PlayerLogBodyGravenInnocencePhotoFinish>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGravenInnocencePhotoFinish> *const)(v3 + 192));
                  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v52,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/graven_innocence_activity.cpp",
                  "finishPhoto",
                  1504);
                v26 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                        &v52,
                        (const char (*)[51])"[GRAVEN_INNOCENCE] invaild have_stage_object_num: ");
                v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v26,
                        (const unsigned int *)(v3 + 80));
                v28 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                        v27,
                        (const char (*)[22])">= object_limit_num: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v28,
                  &stage_config_ptr->object_limit_num);
                common::milog::MiLogStream::~MiLogStream(&v52);
                v7 = -1;
              }
              goto LABEL_53;
            }
            common::milog::MiLogStream::create(
              &v52,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/graven_innocence_activity.cpp",
              "finishPhoto",
              1488);
            v22 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                    &v52,
                    (const char (*)[51])"[GRAVEN_INNOCENCE] photo stage not open, stage_id:");
            v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v22,
                    (const unsigned int *)(v3 + 64));
            v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v23, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((v42._M_string_length + 24) >> 3) + 0x7FFF8000) )
              __asan_report_load8();
          }
          *(_DWORD *)(v3 + 80) = Player::getUid(*(const Player *const *)(v42._M_string_length + 24));
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream(&v52);
          v7 = -1;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v52,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/graven_innocence_activity.cpp",
            "finishPhoto",
            1476);
          v16 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v52,
                  (const char (*)[39])"[GRAVEN_INNOCENCE] invaild object_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 96));
          common::milog::MiLogStream::~MiLogStream(&v52);
          v7 = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v52,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/graven_innocence_activity.cpp",
          "finishPhoto",
          1470);
        v14 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v52,
                (const char (*)[39])"[GRAVEN_INNOCENCE] invaild object_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 96));
        common::milog::MiLogStream::~MiLogStream(&v52);
        v7 = -1;
      }
    }
  }
LABEL_53:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 160));
LABEL_54:
  result = v7;
  if ( v53 == (char *)v3 )
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

// Line 1533: range 000000001509C994-000000001509CCD5
void __fastcall GravenInnocenceActivity::invaildGravenPhotoBundleMark(
        GravenInnocenceActivity *const this,
        uint32_t group_bundle_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  const std::set<unsigned int> *PhotoObjectSetByBundleId; // rax
  common::milog::MiLogStream *v7; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v8; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t object_id; // [rsp+10h] [rbp-F0h]
  uint32_t stage_id; // [rsp+14h] [rbp-ECh]
  std::_Rb_tree_const_iterator<unsigned int> v12; // [rsp+18h] [rbp-E8h] BYREF
  std::shared_ptr<Config> v13; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-D0h] BYREF
  char v15[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 4 20 group_bundle_id:1532 48 48 15 object_set:1534";
  *(_QWORD *)(v2 + 16) = GravenInnocenceActivity::invaildGravenPhotoBundleMark;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 32) = group_bundle_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
  PhotoObjectSetByBundleId = ActivityGravenInnocenceExcelConfigMgr::findPhotoObjectSetByBundleId(
                               &v5->design_config.txt_config_mgr.activity_graven_innocence_mgr,
                               *(_DWORD *)(v2 + 32));
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 48), PhotoObjectSetByBundleId);
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "invaildGravenPhotoBundleMark",
      1537);
    v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v14,
           (const char (*)[47])"[GRAVEN_INNOCENCE] not vaild group_bundle_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  else
  {
    v12._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 48))._M_node;
    v8 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&v12);
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    object_id = *v8;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v13);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
    stage_id = ActivityGravenInnocenceExcelConfigMgr::findPhotoStageIdByObjectId(
                 &v9->design_config.txt_config_mgr.activity_graven_innocence_mgr,
                 object_id);
    std::shared_ptr<Config>::~shared_ptr(&v13);
    GravenInnocenceActivity::updatePhotoBundleTrackingMark(this, stage_id, *(_DWORD *)(v2 + 32));
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 48));
  if ( v15 == (char *)v2 )
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

// Line 1546: range 000000001509CDD0-000000001509E483
void __fastcall GravenInnocenceActivity::updatePhotoBundleTrackingMark(
        GravenInnocenceActivity *const this,
        uint32_t stage_id,
        uint32_t invaild_bundle_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  ActivityGravenInnocenceExcelConfigMgr *p_activity_graven_innocence_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  const std::set<unsigned int> *BundleSetByPhotoStageId; // rax
  common::milog::MiLogStream *v13; // rax
  ActivityGravenInnocenceExcelConfigMgr *v14; // rcx
  bool v15; // r14
  std::_Rb_tree_const_iterator<unsigned int>::reference v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  const std::set<unsigned int> *PhotoObjectSetByBundleId; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r15
  std::set<unsigned int>::iterator v22; // rax
  common::milog::MiLogStream *v23; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  common::milog::MiLogStream *v25; // rax
  uint32_t v26; // eax
  common::milog::MiLogStream *v27; // rax
  Group *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  bool v32; // al
  PlayerSceneComp *SceneComp; // rax
  bool v34; // al
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v38; // rdx
  common::milog::MiLogStream *v39; // rax
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rdx
  uint32_t *p_uid; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  bool is_show_reminder; // [rsp+25h] [rbp-27Bh]
  bool is_group_all_monster_dead; // [rsp+26h] [rbp-27Ah]
  uint32_t have_stage_object_num; // [rsp+28h] [rbp-278h]
  uint32_t group_bundle_id; // [rsp+2Ch] [rbp-274h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-270h] BYREF
  std::set<unsigned int>::iterator __for_end_0; // [rsp+38h] [rbp-268h] BYREF
  std::map<unsigned int,GravenInnocencePhotoObjectData>::iterator __for_end; // [rsp+40h] [rbp-260h] BYREF
  const data::GravenInnocenceExcelConfig *overall_config_ptr; // [rsp+48h] [rbp-258h]
  const data::GravenInnocencePhotoStageExcelConfig *stage_config_ptr; // [rsp+50h] [rbp-250h]
  std::map<unsigned int,GravenInnocencePhotoObjectData> *__for_range; // [rsp+58h] [rbp-248h]
  PlayerGroupLinkComp *group_link_comp; // [rsp+60h] [rbp-240h]
  std::set<unsigned int> *__for_range_0; // [rsp+68h] [rbp-238h]
  std::set<unsigned int> *__for_range_1; // [rsp+70h] [rbp-230h]
  const std::pair<unsigned int const,GravenInnocencePhotoObjectData> *v60; // [rsp+78h] [rbp-228h]
  std::tuple_element<0,const std::pair<unsigned int const,GravenInnocencePhotoObjectData> >::type *have_object_id; // [rsp+80h] [rbp-220h]
  std::tuple_element<1,const std::pair<unsigned int const,GravenInnocencePhotoObjectData> >::type *_; // [rsp+88h] [rbp-218h]
  common::milog::MiLogStream v63; // [rsp+90h] [rbp-210h] BYREF
  common::milog::MiLogStream v64; // [rsp+B0h] [rbp-1F0h] BYREF
  char v65[464]; // [rsp+D0h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v65;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 32 4 21 target_bundle_id:1579 48 4 20 group_bundle_id:1588 64 4 13 group_id:1628 80 4 16 grou"
                        "p_value:1641 96 4 13 stage_id:1545 112 4 22 invaild_bundle_id:1545 128 8 9 iter:1611 160 16 14 s"
                        "cene_ptr:1547 192 16 14 event_ptr:1673 224 16 14 group_ptr:1635 256 48 21 group_bundle_set:1565 "
                        "336 48 15 object_set:1609";
  *(_QWORD *)(v3 + 16) = GravenInnocenceActivity::updatePhotoBundleTrackingMark;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -218959360;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -219021312;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862732] = -202116109;
  *(_DWORD *)(v3 + 96) = stage_id;
  *(_DWORD *)(v3 + 112) = invaild_bundle_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)(v3 + 224));
  std::shared_ptr<Scene>::shared_ptr<PlayerWorldScene,void>(
    (std::shared_ptr<Scene> *const)(v3 + 160),
    (std::shared_ptr<PlayerWorldScene> *)(v3 + 224));
  std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v3 + 224));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 160)) )
  {
    common::milog::MiLogStream::create(
      &v64,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/graven_innocence_activity.cpp",
      "updatePhotoBundleTrackingMark",
      1550);
    v6 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v64,
           (const char (*)[51])"[GRAVEN_INNOCENCE] getMainWorldScene failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v3 + 80) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream(&v64);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 224));
    p_activity_graven_innocence_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224))->design_config.txt_config_mgr.activity_graven_innocence_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    overall_config_ptr = data::ActivityGravenInnocenceExcelConfigMgrBase::findGravenInnocenceExcelConfig(
                           p_activity_graven_innocence_mgr,
                           this->activity_id_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 224));
    if ( overall_config_ptr )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v3 + 224));
      v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
      stage_config_ptr = data::ActivityGravenInnocenceExcelConfigMgrBase::findGravenInnocencePhotoStageExcelConfig(
                           &v9->design_config.txt_config_mgr.activity_graven_innocence_mgr,
                           *(_DWORD *)(v3 + 96));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 224));
      if ( stage_config_ptr )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v3 + 224));
        v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
        BundleSetByPhotoStageId = ActivityGravenInnocenceExcelConfigMgr::findBundleSetByPhotoStageId(
                                    &v11->design_config.txt_config_mgr.activity_graven_innocence_mgr,
                                    *(_DWORD *)(v3 + 96));
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 256), BundleSetByPhotoStageId);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 224));
        if ( std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v3 + 256)) )
        {
          common::milog::MiLogStream::create(
            &v64,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/graven_innocence_activity.cpp",
            "updatePhotoBundleTrackingMark",
            1568);
          v13 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                  &v64,
                  (const char (*)[40])"[GRAVEN_INNOCENCE] not vaild stage_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 96));
          common::milog::MiLogStream::~MiLogStream(&v64);
        }
        else
        {
          have_stage_object_num = 0;
          __for_range = &this->photo_data_.object_data_map;
          *(std::map<unsigned int,GravenInnocencePhotoObjectData>::iterator *)(v3 + 128) = std::map<unsigned int,GravenInnocencePhotoObjectData>::begin(&this->photo_data_.object_data_map);
          __for_end._M_node = std::map<unsigned int,GravenInnocencePhotoObjectData>::end(__for_range)._M_node;
          while ( std::operator!=(
                    (const std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocencePhotoObjectData> >::_Self *)(v3 + 128),
                    &__for_end) )
          {
            v60 = std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocencePhotoObjectData>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocencePhotoObjectData> > *const)(v3 + 128));
            have_object_id = std::get<0ul,unsigned int const,GravenInnocencePhotoObjectData>(v60);
            _ = (std::tuple_element<1,const std::pair<unsigned int const,GravenInnocencePhotoObjectData> >::type *)std::get<1ul,unsigned int const,GravenInnocencePhotoObjectData>(v60);
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)(v3 + 224));
            v14 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224))->design_config.txt_config_mgr.activity_graven_innocence_mgr;
            if ( *(_BYTE *)(((unsigned __int64)have_object_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)have_object_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)have_object_id >> 3)
                                                                               + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v15 = ActivityGravenInnocenceExcelConfigMgr::findPhotoStageIdByObjectId(v14, *have_object_id) == *(_DWORD *)(v3 + 96);
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 224));
            if ( v15 )
              ++have_stage_object_num;
            std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocencePhotoObjectData>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocencePhotoObjectData> > *const)(v3 + 128));
          }
          *(_DWORD *)(v3 + 32) = 0;
          is_show_reminder = 0;
          if ( *(_DWORD *)(v3 + 112) )
          {
            is_show_reminder = 1;
            GravenInnocenceActivity::photoShowReminder(this, 0, *(_DWORD *)(v3 + 112));
          }
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          group_link_comp = Player::getGroupLinkComp(this->player_);
          __for_range_0 = (std::set<unsigned int> *)(v3 + 256);
          __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v3 + 256))._M_node;
          __for_end_0._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
          while ( std::operator!=(&__for_begin, &__for_end_0) )
          {
            v16 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
            if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v3 + 48) = *v16;
            if ( !PlayerGroupLinkComp::isGroupBundleRegistered(group_link_comp, *(_DWORD *)(v3 + 48)) )
            {
              common::milog::MiLogStream::create(
                &v63,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/graven_innocence_activity.cpp",
                "updatePhotoBundleTrackingMark",
                1592);
              v17 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                      &v63,
                      (const char (*)[43])"[GRAVEN_INNOCENCE] skip, group_bundle_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v3 + 48));
              common::milog::MiLogStream::~MiLogStream(&v63);
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->object_limit_num >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&stage_config_ptr->object_limit_num >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              if ( have_stage_object_num == stage_config_ptr->object_limit_num )
              {
                PlayerGroupLinkComp::unregisterGroupBundle(group_link_comp, *(_DWORD *)(v3 + 48), 0);
                common::milog::MiLogStream::create(
                  &v64,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/graven_innocence_activity.cpp",
                  "updatePhotoBundleTrackingMark",
                  1599);
                v18 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                        &v64,
                        (const char (*)[64])"[GRAVEN_INNOCENCE] all unregisterGroupBundle, group_bundle_id: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v18,
                  (const unsigned int *)(v3 + 48));
                common::milog::MiLogStream::~MiLogStream(&v64);
                if ( !is_show_reminder )
                {
                  is_show_reminder = 1;
                  GravenInnocenceActivity::photoShowReminder(this, 1, *(_DWORD *)(v3 + 48));
                }
              }
              else
              {
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)(v3 + 192));
                v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                PhotoObjectSetByBundleId = ActivityGravenInnocenceExcelConfigMgr::findPhotoObjectSetByBundleId(
                                             &v19->design_config.txt_config_mgr.activity_graven_innocence_mgr,
                                             *(_DWORD *)(v3 + 48));
                std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 336), PhotoObjectSetByBundleId);
                std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 192));
                M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v3 + 336))._M_node;
                v22._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v3 + 336))._M_node;
                *(std::_Rb_tree_const_iterator<unsigned int> *)(v3 + 128) = std::find_if<std::_Rb_tree_const_iterator<unsigned int>,GravenInnocenceActivity::updatePhotoBundleTrackingMark(unsigned int,unsigned int)::{lambda(unsigned int)#1}>(
                                                                              v22,
                                                                              (std::_Rb_tree_const_iterator<unsigned int>)M_node,
                                                                              (GravenInnocenceActivity::updatePhotoBundleTrackingMark::<lambda(uint32_t)>)this);
                __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocencePhotoObjectData> >::_Base_ptr)std::set<unsigned int>::end((const std::set<unsigned int> *const)(v3 + 336))._M_node;
                if ( std::operator==(
                       (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end,
                       (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 128)) )
                {
                  PlayerGroupLinkComp::unregisterGroupBundle(group_link_comp, *(_DWORD *)(v3 + 48), 0);
                  common::milog::MiLogStream::create(
                    &v64,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/activity/graven_innocence_activity.cpp",
                    "updatePhotoBundleTrackingMark",
                    1619);
                  v23 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                          &v64,
                          (const char (*)[60])"[GRAVEN_INNOCENCE] unregisterGroupBundle, group_bundle_id: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v23,
                    (const unsigned int *)(v3 + 48));
                  common::milog::MiLogStream::~MiLogStream(&v64);
                  if ( !is_show_reminder )
                  {
                    is_show_reminder = 1;
                    GravenInnocenceActivity::photoShowReminder(this, 1, *(_DWORD *)(v3 + 48));
                  }
                }
                else
                {
                  ServiceBox::findService<GameserverService>();
                  GameserverService::getConfig((GameserverService *const)(v3 + 224));
                  v24 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
                  *(_DWORD *)(v3 + 64) = ActivityGroupLinksExcelConfigMgr::getGroupBundleHintGroupId(
                                           &v24->design_config.txt_config_mgr.activity_group_links_config_mgr,
                                           *(_DWORD *)(v3 + 48));
                  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 224));
                  if ( *(_DWORD *)(v3 + 64) )
                  {
                    v26 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                    Scene::findGroup((Scene *const)(v3 + 224), v26);
                    if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v3 + 224)) )
                    {
                      common::milog::MiLogStream::create(
                        &v64,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/player/activity/graven_innocence_activity.cpp",
                        "updatePhotoBundleTrackingMark",
                        1638);
                      v27 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                              &v64,
                              (const char (*)[46])"[GRAVEN_INNOCENCE] group not found, group_id:");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v27,
                        (const unsigned int *)(v3 + 64));
                      common::milog::MiLogStream::~MiLogStream(&v64);
                    }
                    else
                    {
                      *(_DWORD *)(v3 + 80) = 0;
                      v28 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
                      if ( Group::getVariableValue(v28, &overall_config_ptr->photo_group_var_name, (int32_t *)(v3 + 80)) )
                      {
                        common::milog::MiLogStream::create(
                          &v64,
                          &common::milog::MiLogDefault::default_log_obj_,
                          1u,
                          "./src/player/activity/graven_innocence_activity.cpp",
                          "updatePhotoBundleTrackingMark",
                          1644);
                        v29 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                                &v64,
                                (const char (*)[53])"[GRAVEN_INNOCENCE] get variable value fail. group_id");
                        v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v29,
                                (const unsigned int *)(v3 + 64));
                        v31 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                v30,
                                (const char (*)[7])" name:");
                        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                          v31,
                          &overall_config_ptr->photo_group_var_name);
                        common::milog::MiLogStream::~MiLogStream(&v64);
                        *(_DWORD *)(v3 + 80) = 0;
                      }
                      v32 = *(_DWORD *)(v3 + 112) == *(_DWORD *)(v3 + 48) || *(_DWORD *)(v3 + 80);
                      is_group_all_monster_dead = v32;
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8();
                      SceneComp = Player::getSceneComp(this->player_);
                      v34 = PlayerSceneComp::isInMyPlayerWorld(SceneComp) && is_group_all_monster_dead;
                      if ( *(_DWORD *)(v3 + 32) || v34 )
                      {
                        PlayerGroupLinkComp::updateBundleMarkShowState(group_link_comp, *(_DWORD *)(v3 + 48), 0);
                        PlayerGroupLinkComp::deactivateGroupBundle(group_link_comp, *(_DWORD *)(v3 + 48));
                        common::milog::MiLogStream::create(
                          &v64,
                          &common::milog::MiLogDefault::default_log_obj_,
                          1u,
                          "./src/player/activity/graven_innocence_activity.cpp",
                          "updatePhotoBundleTrackingMark",
                          1656);
                        v35 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                                &v64,
                                (const char (*)[52])"[GRAVEN_INNOCENCE] not show mark, group_bundle_id: ");
                        v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v35,
                                (const unsigned int *)(v3 + 48));
                        v37 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                                v36,
                                (const char (*)[22])", invaild_bundle_id: ");
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v37,
                          (const unsigned int *)(v3 + 112));
                        common::milog::MiLogStream::~MiLogStream(&v64);
                      }
                      else
                      {
                        *(_DWORD *)(v3 + 32) = *(_DWORD *)(v3 + 48);
                      }
                    }
                    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 224));
                  }
                  else
                  {
                    common::milog::MiLogStream::create(
                      &v64,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/player/activity/graven_innocence_activity.cpp",
                      "updatePhotoBundleTrackingMark",
                      1631);
                    v25 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                            &v64,
                            (const char (*)[38])"[GRAVEN_INNOCENCE] unknow bundle_id: ");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v25,
                      (const unsigned int *)(v3 + 48));
                    common::milog::MiLogStream::~MiLogStream(&v64);
                  }
                }
                std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 336));
              }
            }
            std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
          }
          if ( !*(_DWORD *)(v3 + 32) )
          {
            __for_range_1 = (std::set<unsigned int> *)(v3 + 256);
            *(std::set<unsigned int>::iterator *)(v3 + 128) = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v3 + 256));
            __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,GravenInnocencePhotoObjectData> >::_Base_ptr)std::set<unsigned int>::end(__for_range_1)._M_node;
            while ( std::operator!=(
                      (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 128),
                      (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
            {
              v38 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 128));
              if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              group_bundle_id = *v38;
              if ( PlayerGroupLinkComp::isGroupBundleRegistered(group_link_comp, *v38) )
              {
                *(_DWORD *)(v3 + 32) = group_bundle_id;
                common::milog::MiLogStream::create(
                  &v64,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/graven_innocence_activity.cpp",
                  "updatePhotoBundleTrackingMark",
                  1672);
                v39 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                        &v64,
                        (const char (*)[55])"[GRAVEN_INNOCENCE] ready send event target_bundle_id: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v39,
                  (const unsigned int *)(v3 + 32));
                common::milog::MiLogStream::~MiLogStream(&v64);
                EventUtil::createEvent((std::shared_ptr<Event> *)(v3 + 192), 3001);
                if ( std::operator==<Event>(0LL, (const std::shared_ptr<Event> *)(v3 + 192)) )
                {
                  common::milog::MiLogStream::create(
                    &v64,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/graven_innocence_activity.cpp",
                    "updatePhotoBundleTrackingMark",
                    1676);
                  common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                    &v64,
                    (const char (*)[37])"[GRAVEN_INNOCENCE] event_ptr nullptr");
                  common::milog::MiLogStream::~MiLogStream(&v64);
                }
                else
                {
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  Uid = Player::getUid(this->player_);
                  v41 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                  p_uid = &v41->uid;
                  if ( *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)p_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store4(p_uid);
                  }
                  v41->uid = Uid;
                  std::shared_ptr<Event>::shared_ptr(
                    (std::shared_ptr<Event> *const)(v3 + 224),
                    (const std::shared_ptr<Event> *)(v3 + 192));
                  PlayerGroupLinkComp::broadcastActiveGroupLuaEvent(
                    group_link_comp,
                    *(_DWORD *)(v3 + 32),
                    (EventPtr *)(v3 + 224));
                  std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v3 + 224));
                }
                std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v3 + 192));
                break;
              }
              std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 128));
            }
          }
          if ( *(_DWORD *)(v3 + 32) )
          {
            PlayerGroupLinkComp::updateBundleMarkShowState(group_link_comp, *(_DWORD *)(v3 + 32), 1);
            PlayerGroupLinkComp::activateGroupBundle(group_link_comp, *(_DWORD *)(v3 + 32));
            common::milog::MiLogStream::create(
              &v64,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/graven_innocence_activity.cpp",
              "updatePhotoBundleTrackingMark",
              1692);
            v44 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                    &v64,
                    (const char (*)[38])"[GRAVEN_INNOCENCE] target_bundle_id: ");
            v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v44,
                    (const unsigned int *)(v3 + 32));
            v43 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v45,
                    (const char (*)[13])", stage_id: ");
          }
          else
          {
            common::milog::MiLogStream::create(
              &v64,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/graven_innocence_activity.cpp",
              "updatePhotoBundleTrackingMark",
              1686);
            v43 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                    &v64,
                    (const char (*)[57])"[GRAVEN_INNOCENCE] all unregisterGroupBundle, stage_id: ");
          }
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, (const unsigned int *)(v3 + 96));
          common::milog::MiLogStream::~MiLogStream(&v64);
        }
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 256));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v64,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/graven_innocence_activity.cpp",
          "updatePhotoBundleTrackingMark",
          1562);
        v10 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v64,
                (const char (*)[38])"[GRAVEN_INNOCENCE] invaild stage_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 96));
        common::milog::MiLogStream::~MiLogStream(&v64);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v64,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/graven_innocence_activity.cpp",
        "updatePhotoBundleTrackingMark",
        1556);
      v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v64,
             (const char (*)[42])"[GRAVEN_INNOCENCE] invaild activity_id_: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->activity_id_);
      common::milog::MiLogStream::~MiLogStream(&v64);
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 160));
  if ( v65 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = -168430091;
  }
};

// Line 1611: range 000000001509CCD6-000000001509CDCE
__int64 __fastcall GravenInnocenceActivity::updatePhotoBundleTrackingMark(unsigned int,unsigned int)::{lambda(unsigned int)#1}::operator()(
        unsigned __int64 __closure,
        uint32_t object_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rdx
  unsigned __int64 v5; // r12
  int v6; // eax
  __int64 result; // rax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 object_id:1611";
  *(_QWORD *)(v2 + 16) = GravenInnocenceActivity::updatePhotoBundleTrackingMark(unsigned int,unsigned int)::{lambda(unsigned int)#1}::operator();
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = object_id;
  if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  LOBYTE(v6) = common::tools::MiscUtils::isContains<std::map<unsigned int,GravenInnocencePhotoObjectData>,unsigned int>(
                 (std::map<unsigned int,GravenInnocencePhotoObjectData> *)(*(_QWORD *)__closure + 1096LL),
                 (const unsigned int *)v4 - 8);
  result = v6 ^ 1u;
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

// Line 1696: range 000000001509E484-000000001509E82B
void __cdecl GravenInnocenceActivity::photoShowReminder(
        GravenInnocenceActivity *const this,
        bool is_succ,
        uint32_t group_bundle_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  PlayerSceneComp *SceneComp; // rax
  ActivityGravenInnocenceExcelConfigMgr *p_activity_graven_innocence_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  google::protobuf::uint32 photo_succ_reminder_id; // eax
  const data::GravenInnocenceExcelConfig *overall_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 32 11 notify:1708";
  *(_QWORD *)(v3 + 16) = GravenInnocenceActivity::photoShowReminder;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v12);
    p_activity_graven_innocence_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config.txt_config_mgr.activity_graven_innocence_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    overall_config_ptr = data::ActivityGravenInnocenceExcelConfigMgrBase::findGravenInnocenceExcelConfig(
                           p_activity_graven_innocence_mgr,
                           this->activity_id_);
    std::shared_ptr<Config>::~shared_ptr(&v12);
    if ( overall_config_ptr )
    {
      proto::GravenInnocencePhotoReminderNotify::GravenInnocencePhotoReminderNotify((proto::GravenInnocencePhotoReminderNotify *const)(v3 + 32));
      if ( is_succ )
      {
        if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->photo_succ_reminder_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)overall_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&overall_config_ptr->photo_succ_reminder_id >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        photo_succ_reminder_id = overall_config_ptr->photo_succ_reminder_id;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->photo_fail_reminder_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&overall_config_ptr->photo_fail_reminder_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        photo_succ_reminder_id = overall_config_ptr->photo_fail_reminder_id;
      }
      proto::GravenInnocencePhotoReminderNotify::set_reminder_id(
        (proto::GravenInnocencePhotoReminderNotify *const)(v3 + 32),
        photo_succ_reminder_id);
      proto::GravenInnocencePhotoReminderNotify::set_group_bundle_id(
        (proto::GravenInnocencePhotoReminderNotify *const)(v3 + 32),
        group_bundle_id);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v3 + 32));
      proto::GravenInnocencePhotoReminderNotify::~GravenInnocencePhotoReminderNotify((proto::GravenInnocencePhotoReminderNotify *const)(v3 + 32));
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 32),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/graven_innocence_activity.cpp",
        "photoShowReminder",
        1704);
      v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             (common::milog::MiLogStream *const)(v3 + 32),
             (const char (*)[42])"[GRAVEN_INNOCENCE] invaild activity_id_: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->activity_id_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 32));
    }
  }
  if ( v13 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1715: range 000000001509E82C-000000001509E84D
int32_t __cdecl GravenInnocenceActivity::openPhotoStageByGm(GravenInnocenceActivity *const this, uint32_t stage_id)
{
  return GravenInnocenceActivity::openPhotoStage(this, stage_id);
};

// Line 1720: range 000000001509E84E-000000001509E895
int32_t __cdecl GravenInnocenceActivity::resetPhotoDataByGm(GravenInnocenceActivity *const this)
{
  GravenInnocencePhotoData::clear(&this->photo_data_);
  GravenInnocencePhotoData::init(&this->photo_data_);
  BaseActivity::notifyClientData(this, 0);
  return 0;
};
