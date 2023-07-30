// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/blossom/player_blossom_comp.cpp

// Line 38: range 00000000171CB6F0-00000000171CBA9F
int32_t __cdecl BlossomCircleCampInfo::fromBin(
        BlossomCircleCampInfo *const this,
        const proto::BlossomCircleCampDataBin *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 refreshed; // rdx
  char v6; // al
  uint32_t v7; // ecx
  char v8; // dl
  __int64 v9; // rdx
  __int64 v10; // rdx
  char v11; // al
  uint32_t v12; // ecx
  char v13; // dl
  __int64 v14; // rdx
  __int64 v15; // rdx
  char v16; // al
  bool is_guide_opened; // cl
  char v18; // dl
  __int64 v19; // rdx
  __int64 valid; // rdx
  char v21; // al
  int32_t result; // eax
  const proto::BlossomCircleCampDataBin *protoa; // [rsp+0h] [rbp-90h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-78h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+20h] [rbp-70h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-68h]
  char v27[96]; // [rsp+30h] [rbp-60h] BYREF

  protoa = proto;
  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 update_round:45";
  *(_QWORD *)(v2 + 16) = BlossomCircleCampInfo::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  refreshed = proto::BlossomCircleCampDataBin::refresh_id(proto);
  v6 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(proto) = v6 != 0;
    __asan_report_store4(this, proto, refreshed);
  }
  this->refresh_id = refreshed;
  v7 = proto::BlossomCircleCampDataBin::circle_camp_id(protoa);
  v8 = *(_BYTE *)(((unsigned __int64)&this->circle_camp_id >> 3) + 0x7FFF8000);
  LOBYTE(proto) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store4(&this->circle_camp_id, proto, v9);
  this->circle_camp_id = v7;
  v10 = proto::BlossomCircleCampDataBin::round(protoa);
  v11 = *(_BYTE *)(((unsigned __int64)&this->round >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(proto) = v11 != 0;
    __asan_report_store4(&this->round, proto, v10);
  }
  this->round = v10;
  v12 = proto::BlossomCircleCampDataBin::state(protoa);
  v13 = *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000);
  LOBYTE(proto) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store4(&this->state, proto, v14);
  this->state = v12;
  v15 = proto::BlossomCircleCampDataBin::progress(protoa);
  v16 = *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(proto) = v16 != 0;
    __asan_report_store4(&this->progress, proto, v15);
  }
  this->progress = v15;
  is_guide_opened = proto::BlossomCircleCampDataBin::is_guide_opened(protoa);
  v18 = *(_BYTE *)(((unsigned __int64)&this->is_guide_opened >> 3) + 0x7FFF8000);
  LOBYTE(proto) = v18 != 0;
  v19 = (v18 != 0) & (unsigned __int8)((((unsigned __int8)this + 20) & 7) >= v18);
  if ( (_BYTE)v19 )
    __asan_report_store1(&this->is_guide_opened, proto, v19);
  this->is_guide_opened = is_guide_opened;
  __for_range = proto::BlossomCircleCampDataBin::update_round_list(protoa);
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
    proto = (const proto::BlossomCircleCampDataBin *)(v2 + 32);
    std::set<unsigned int>::insert(&this->update_round_set, (const std::set<unsigned int>::value_type *)(v2 + 32));
    ++__for_begin;
  }
  valid = proto::BlossomCircleCampDataBin::valid_world_level(protoa);
  v21 = *(_BYTE *)(((unsigned __int64)&this->valid_world_level >> 3) + 0x7FFF8000);
  if ( v21 != 0 && v21 <= 3 )
  {
    LOBYTE(proto) = v21 != 0;
    __asan_report_store4(&this->valid_world_level, proto, valid);
  }
  this->valid_world_level = valid;
  result = 0;
  if ( v27 == (char *)v2 )
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

// Line 55: range 00000000171CBAA0-00000000171CBD72
int32_t __cdecl BlossomCircleCampInfo::toBin(
        const BlossomCircleCampInfo *const this,
        proto::BlossomCircleCampDataBin *proto)
{
  unsigned int *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-18h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-10h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::BlossomCircleCampDataBin::set_refresh_id(proto, this->refresh_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->circle_camp_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->circle_camp_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->circle_camp_id);
  }
  proto::BlossomCircleCampDataBin::set_circle_camp_id(proto, this->circle_camp_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->round);
  }
  proto::BlossomCircleCampDataBin::set_round(proto, this->round);
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->state);
  }
  proto::BlossomCircleCampDataBin::set_state(proto, this->state);
  if ( *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->progress);
  }
  proto::BlossomCircleCampDataBin::set_progress(proto, this->progress);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_guide_opened >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_guide_opened >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_guide_opened);
  }
  proto::BlossomCircleCampDataBin::set_is_guide_opened(proto, this->is_guide_opened);
  __for_range = &this->update_round_set;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->update_round_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->update_round_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::BlossomCircleCampDataBin::add_update_round_list(proto, *v3);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->valid_world_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->valid_world_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->valid_world_level);
  }
  proto::BlossomCircleCampDataBin::set_valid_world_level(proto, this->valid_world_level);
  return 0;
};

// Line 72: range 00000000171CBD74-00000000171CC175
int32_t __cdecl BlossomRefreshInfo::fromBin(BlossomRefreshInfo *const this, const proto::BlossomRefreshDataBin *proto)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  google::protobuf::RepeatedPtrField<proto::BlossomCircleCampDataBin>::const_iterator *p_for_end; // rsi
  BlossomCircleCampInfo *v7; // rax
  unsigned int *v8; // rcx
  BlossomCircleCampInfo *v9; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomCircleCampInfo> >,bool> v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // r14d
  __int64 refresh_time; // rdx
  char v14; // al
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::BlossomCircleCampDataBin>::const_iterator __for_begin; // [rsp+28h] [rbp-168h] BYREF
  google::protobuf::RepeatedPtrField<proto::BlossomCircleCampDataBin>::const_iterator __for_end; // [rsp+30h] [rbp-160h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+38h] [rbp-158h]
  const google::protobuf::RepeatedPtrField<proto::BlossomCircleCampDataBin> *__for_range; // [rsp+40h] [rbp-150h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+48h] [rbp-148h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+50h] [rbp-140h]
  const proto::BlossomCircleCampDataBin *proto_circle_camp_data; // [rsp+58h] [rbp-138h]
  common::milog::MiLogStream v24; // [rsp+60h] [rbp-130h] BYREF
  char v25[272]; // [rsp+80h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 17 circle_camp_id:85 64 128 19 circle_camp_info:75";
  *(_QWORD *)(v3 + 16) = BlossomRefreshInfo::fromBin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862726] = -202116109;
  __for_range = proto::BlossomRefreshDataBin::circle_camp_list(proto);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::BlossomCircleCampDataBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::BlossomCircleCampDataBin>::end(__for_range).it_;
  while ( 1 )
  {
    p_for_end = &__for_end;
    if ( !google::protobuf::internal::RepeatedPtrIterator<proto::BlossomCircleCampDataBin const>::operator!=(
            &__for_begin,
            &__for_end) )
      break;
    proto_circle_camp_data = google::protobuf::internal::RepeatedPtrIterator<proto::BlossomCircleCampDataBin const>::operator*(&__for_begin);
    BlossomCircleCampInfo::BlossomCircleCampInfo((BlossomCircleCampInfo *const)(v3 + 64));
    BlossomCircleCampInfo::fromBin((BlossomCircleCampInfo *const)(v3 + 64), proto_circle_camp_data);
    *(_DWORD *)(v3 + 48) = *(_DWORD *)(v3 + 68);
    v7 = std::move<BlossomCircleCampInfo &>((BlossomCircleCampInfo *)(v3 + 64));
    v10 = std::map<unsigned int,BlossomCircleCampInfo>::emplace<unsigned int &,BlossomCircleCampInfo>(
            &this->circle_camp_info_map,
            (unsigned int *)(v3 + 68),
            v7,
            v8,
            v9);
    if ( !v10.second )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "fromBin",
        80);
      v11 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
              &v24,
              (const char (*)[65])"[BlossomRefreshInfo] circle_camp_id duplicated, circle_camp_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v24);
      v2 = -1;
      v12 = 0;
    }
    else
    {
      v12 = 1;
    }
    BlossomCircleCampInfo::~BlossomCircleCampInfo((BlossomCircleCampInfo *const)(v3 + 64));
    if ( v12 != 1 )
      goto LABEL_19;
    google::protobuf::internal::RepeatedPtrIterator<proto::BlossomCircleCampDataBin const>::operator++(&__for_begin);
  }
  refresh_time = proto::BlossomRefreshDataBin::last_refresh_time(proto);
  v14 = *(_BYTE *)(((unsigned __int64)&this->last_refresh_time >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(p_for_end) = v14 != 0;
    __asan_report_store4(&this->last_refresh_time, p_for_end, refresh_time);
  }
  this->last_refresh_time = refresh_time;
  __for_range_0 = proto::BlossomRefreshDataBin::used_camp_id_list(proto);
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
    *(_DWORD *)(v3 + 48) = *__for_begin_0;
    std::set<unsigned int>::insert(&this->used_camp_id_set, (const std::set<unsigned int>::value_type *)(v3 + 48));
    ++__for_begin_0;
  }
  v2 = 0;
LABEL_19:
  result = v2;
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 94: range 00000000171CC176-00000000171CC31F
int32_t __cdecl BlossomRefreshInfo::toBin(const BlossomRefreshInfo *const this, proto::BlossomRefreshDataBin *proto)
{
  proto::BlossomCircleCampDataBin *v2; // rax
  unsigned int *v3; // rax
  google::protobuf::uint32 *v4; // rdx
  std::map<unsigned int,BlossomCircleCampInfo>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,BlossomCircleCampInfo>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::map<unsigned int,BlossomCircleCampInfo> *__for_range; // [rsp+28h] [rbp-28h]
  const std::set<unsigned int> *__for_range_0; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,BlossomCircleCampInfo> *v10; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,BlossomCircleCampInfo> >::type *_; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,BlossomCircleCampInfo> >::type *circle_camp_info; // [rsp+48h] [rbp-8h]

  __for_range = &this->circle_camp_info_map;
  __for_begin._M_node = std::map<unsigned int,BlossomCircleCampInfo>::begin(&this->circle_camp_info_map)._M_node;
  __for_end._M_node = std::map<unsigned int,BlossomCircleCampInfo>::end(&this->circle_camp_info_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,BlossomCircleCampInfo>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,BlossomCircleCampInfo>(v10);
    circle_camp_info = (std::tuple_element<1,const std::pair<unsigned int const,BlossomCircleCampInfo> >::type *)std::get<1ul,unsigned int const,BlossomCircleCampInfo>(v10);
    v2 = proto::BlossomRefreshDataBin::add_circle_camp_list(proto);
    BlossomCircleCampInfo::toBin(circle_camp_info, v2);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,BlossomCircleCampInfo>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_refresh_time);
  }
  proto::BlossomRefreshDataBin::set_last_refresh_time(proto, this->last_refresh_time);
  __for_range_0 = &this->used_camp_id_set;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->used_camp_id_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
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
    proto::BlossomRefreshDataBin::add_used_camp_id_list(proto, *v4);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  return 0;
};

// Line 109: range 00000000171CC320-00000000171CC615
int32_t __cdecl PlayerBlossomComp::fromBin(PlayerBlossomComp *const this, const proto::PlayerDataBin *player_data_bin)
{
  unsigned __int64 v2; // rax
  unsigned int v3; // ebx
  const unsigned int *v4; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v5; // rax
  unsigned int *v6; // rdx
  char v7; // cl
  std::pair<unsigned int,unsigned int> *v8; // rbx
  std::pair<unsigned int,int> *v9; // rax
  unsigned int __x; // [rsp+10h] [rbp-A0h] BYREF
  unsigned int __y; // [rsp+14h] [rbp-9Ch] BYREF
  const proto::PlayerBlossomCompBin *proto_comp; // [rsp+18h] [rbp-98h]
  const google::protobuf::Map<unsigned int,proto::BlossomRefreshDataBin> *__for_range; // [rsp+20h] [rbp-90h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range_0; // [rsp+28h] [rbp-88h]
  const google::protobuf::Map<unsigned int,proto::BlossomInitialSectionDataBin> *__for_range_1; // [rsp+30h] [rbp-80h]
  const unsigned int *p_city_id; // [rsp+38h] [rbp-78h]
  const unsigned int *p_section_id; // [rsp+40h] [rbp-70h]
  const unsigned int *p_refresh_id; // [rsp+48h] [rbp-68h]
  BlossomRefreshInfo *refresh_info; // [rsp+50h] [rbp-60h]
  std::pair<unsigned int,unsigned int> __t; // [rsp+58h] [rbp-58h] BYREF
  google::protobuf::Map<unsigned int,proto::BlossomRefreshDataBin>::const_iterator __for_begin; // [rsp+60h] [rbp-50h] BYREF
  google::protobuf::Map<unsigned int,proto::BlossomRefreshDataBin>::const_iterator __for_end; // [rsp+80h] [rbp-30h] BYREF

  proto_comp = proto::PlayerDataBin::blossom_bin(player_data_bin);
  __for_range = proto::PlayerBlossomCompBin::refresh_data_map(proto_comp);
  google::protobuf::Map<unsigned int,proto::BlossomRefreshDataBin>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,proto::BlossomRefreshDataBin>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_refresh_id = (const unsigned int *)google::protobuf::Map<unsigned int,proto::BlossomRefreshDataBin>::const_iterator::operator*(&__for_begin);
    refresh_info = std::map<unsigned int,BlossomRefreshInfo>::operator[](&this->refresh_info_map_, p_refresh_id);
    BlossomRefreshInfo::fromBin(refresh_info, (const proto::BlossomRefreshDataBin *)(p_refresh_id + 2));
    google::protobuf::Map<unsigned int,proto::BlossomRefreshDataBin>::const_iterator::operator++(&__for_begin);
  }
  __for_range_0 = proto::PlayerBlossomCompBin::recent_used_section_id_map(proto_comp);
  google::protobuf::Map<unsigned int,unsigned int>::begin(
    (google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)&__for_begin,
    __for_range_0);
  google::protobuf::Map<unsigned int,unsigned int>::end(
    (google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)&__for_end,
    __for_range_0);
  while ( google::protobuf::operator!=(
            (const google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)&__for_begin,
            (const google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)&__for_end) )
  {
    p_section_id = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*((const google::protobuf::Map<unsigned int,unsigned int>::const_iterator *const)&__for_begin);
    v2 = (unsigned __int64)(p_section_id + 1);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    v3 = p_section_id[1];
    v4 = p_section_id;
    v5 = std::map<unsigned int,unsigned int>::operator[](&this->recent_used_section_id_map_, p_section_id);
    v6 = v5;
    v7 = *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000);
    if ( v7 != 0 && (char)(((unsigned __int8)v5 & 7) + 3) >= v7 )
    {
      LOBYTE(v4) = v7 != 0;
      __asan_report_store4(v5, v4, v5);
    }
    *v6 = v3;
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++((google::protobuf::Map<unsigned int,unsigned int>::const_iterator *const)&__for_begin);
  }
  __for_range_1 = proto::PlayerBlossomCompBin::initial_section_map(proto_comp);
  google::protobuf::Map<unsigned int,proto::BlossomInitialSectionDataBin>::begin(
    (google::protobuf::Map<unsigned int,proto::BlossomInitialSectionDataBin>::const_iterator *)&__for_begin,
    __for_range_1);
  google::protobuf::Map<unsigned int,proto::BlossomInitialSectionDataBin>::end(
    (google::protobuf::Map<unsigned int,proto::BlossomInitialSectionDataBin>::const_iterator *)&__for_end,
    __for_range_1);
  while ( google::protobuf::operator!=(
            (const google::protobuf::Map<unsigned int,proto::BlossomInitialSectionDataBin>::const_iterator *)&__for_begin,
            (const google::protobuf::Map<unsigned int,proto::BlossomInitialSectionDataBin>::const_iterator *)&__for_end) )
  {
    p_city_id = (const unsigned int *)google::protobuf::Map<unsigned int,proto::BlossomInitialSectionDataBin>::const_iterator::operator*((const google::protobuf::Map<unsigned int,proto::BlossomInitialSectionDataBin>::const_iterator *const)&__for_begin);
    __y = proto::BlossomInitialSectionDataBin::timestamp((const proto::BlossomInitialSectionDataBin *const)(p_city_id + 2));
    __x = proto::BlossomInitialSectionDataBin::section_id((const proto::BlossomInitialSectionDataBin *const)(p_city_id + 2));
    __t = std::make_pair<unsigned int,unsigned int>(&__x, &__y);
    v8 = std::move<std::pair<unsigned int,unsigned int>>(&__t);
    v9 = std::map<unsigned int,std::pair<unsigned int,int>>::operator[](&this->initial_section_map_, p_city_id);
    std::pair<unsigned int,int>::operator=<unsigned int,unsigned int>(v9, v8);
    google::protobuf::Map<unsigned int,proto::BlossomInitialSectionDataBin>::const_iterator::operator++((google::protobuf::Map<unsigned int,proto::BlossomInitialSectionDataBin>::const_iterator *const)&__for_begin);
  }
  return 0;
};

// Line 131: range 00000000171CC616-00000000171CCB61
int32_t __cdecl PlayerBlossomComp::toBin(PlayerBlossomComp *const this, proto::PlayerDataBin *player_data_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v5; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v6; // r14d
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v7; // rsi
  unsigned int *v8; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v9; // rdx
  char v10; // cl
  std::remove_reference<proto::BlossomInitialSectionDataBin&>::type *v11; // r14
  proto::BlossomInitialSectionDataBin *v12; // rax
  int32_t result; // eax
  std::map<unsigned int,BlossomRefreshInfo>::iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::map<unsigned int,BlossomRefreshInfo>::iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  proto::PlayerBlossomCompBin *proto_comp; // [rsp+28h] [rbp-118h]
  google::protobuf::Map<unsigned int,proto::BlossomRefreshDataBin> *proto_refresh_data_map; // [rsp+30h] [rbp-110h]
  std::map<unsigned int,BlossomRefreshInfo> *__for_range; // [rsp+38h] [rbp-108h]
  google::protobuf::Map<unsigned int,unsigned int> *proto_recent_used_section_id_map; // [rsp+40h] [rbp-100h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+48h] [rbp-F8h]
  google::protobuf::Map<unsigned int,proto::BlossomInitialSectionDataBin> *proto_initial_section_map; // [rsp+50h] [rbp-F0h]
  std::map<unsigned int,std::pair<unsigned int,int>> *__for_range_1; // [rsp+58h] [rbp-E8h]
  const std::pair<unsigned int const,std::pair<unsigned int,int> > *v23; // [rsp+60h] [rbp-E0h]
  std::tuple_element<0,const std::pair<unsigned int const,std::pair<unsigned int,int> > >::type *city_id; // [rsp+68h] [rbp-D8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::pair<unsigned int,int> > >::type *initial_section; // [rsp+70h] [rbp-D0h]
  const std::pair<unsigned int const,unsigned int> *v26; // [rsp+78h] [rbp-C8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *section_id; // [rsp+80h] [rbp-C0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *timestamp; // [rsp+88h] [rbp-B8h]
  const std::pair<unsigned int const,BlossomRefreshInfo> *v29; // [rsp+90h] [rbp-B0h]
  std::tuple_element<0,const std::pair<unsigned int const,BlossomRefreshInfo> >::type *refresh_id; // [rsp+98h] [rbp-A8h]
  std::tuple_element<1,const std::pair<unsigned int const,BlossomRefreshInfo> >::type *refresh_info; // [rsp+A0h] [rbp-A0h]
  proto::BlossomRefreshDataBin *proto_refresh_data; // [rsp+A8h] [rbp-98h]
  char v33[144]; // [rsp+B0h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 25 proto_initial_section:149";
  *(_QWORD *)(v2 + 16) = PlayerBlossomComp::toBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  proto_comp = proto::PlayerDataBin::mutable_blossom_bin(player_data_bin);
  proto_refresh_data_map = proto::PlayerBlossomCompBin::mutable_refresh_data_map(proto_comp);
  __for_range = &this->refresh_info_map_;
  __for_begin._M_node = std::map<unsigned int,BlossomRefreshInfo>::begin(&this->refresh_info_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,BlossomRefreshInfo>::end(&this->refresh_info_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v29 = std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo>>::operator*(&__for_begin);
    refresh_id = std::get<0ul,unsigned int const,BlossomRefreshInfo>(v29);
    refresh_info = (std::tuple_element<1,const std::pair<unsigned int const,BlossomRefreshInfo> >::type *)std::get<1ul,unsigned int const,BlossomRefreshInfo>(v29);
    proto_refresh_data = google::protobuf::Map<unsigned int,proto::BlossomRefreshDataBin>::operator[](
                           proto_refresh_data_map,
                           refresh_id);
    BlossomRefreshInfo::toBin(refresh_info, proto_refresh_data);
    std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo>>::operator++(&__for_begin);
  }
  proto_recent_used_section_id_map = proto::PlayerBlossomCompBin::mutable_recent_used_section_id_map(proto_comp);
  __for_range_0 = &this->recent_used_section_id_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->recent_used_section_id_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
  {
    v26 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
    section_id = std::get<0ul,unsigned int const,unsigned int>(v26);
    v5 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v26);
    timestamp = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    v6 = *timestamp;
    v7 = section_id;
    v8 = google::protobuf::Map<unsigned int,unsigned int>::operator[](proto_recent_used_section_id_map, section_id);
    v9 = v8;
    v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
    if ( v10 != 0 && (char)(((unsigned __int8)v8 & 7) + 3) >= v10 )
    {
      LOBYTE(v7) = v10 != 0;
      __asan_report_store4(v8, v7, v8);
    }
    *v9 = v6;
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
  }
  proto_initial_section_map = proto::PlayerBlossomCompBin::mutable_initial_section_map(proto_comp);
  __for_range_1 = &this->initial_section_map_;
  __for_begin._M_node = std::map<unsigned int,std::pair<unsigned int,int>>::begin(&this->initial_section_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::pair<unsigned int,int>>::end(__for_range_1)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,int> > >::_Self *)&__for_begin,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,int> > >::_Self *)&__for_end) )
  {
    v23 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,int>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,int> > > *const)&__for_begin);
    city_id = std::get<0ul,unsigned int const,std::pair<unsigned int,int>>(v23);
    initial_section = (std::tuple_element<1,const std::pair<unsigned int const,std::pair<unsigned int,int> > >::type *)std::get<1ul,unsigned int const,std::pair<unsigned int,int>>(v23);
    proto::BlossomInitialSectionDataBin::BlossomInitialSectionDataBin((proto::BlossomInitialSectionDataBin *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)initial_section >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)initial_section & 7) + 3) >= *(_BYTE *)(((unsigned __int64)initial_section >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(initial_section);
    }
    proto::BlossomInitialSectionDataBin::set_section_id(
      (proto::BlossomInitialSectionDataBin *const)(v2 + 32),
      initial_section->first);
    if ( *(_BYTE *)(((unsigned __int64)&initial_section->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)initial_section + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&initial_section->second >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&initial_section->second);
    }
    proto::BlossomInitialSectionDataBin::set_timestamp(
      (proto::BlossomInitialSectionDataBin *const)(v2 + 32),
      initial_section->second);
    v11 = std::move<proto::BlossomInitialSectionDataBin &>((proto::BlossomInitialSectionDataBin *)(v2 + 32));
    v12 = google::protobuf::Map<unsigned int,proto::BlossomInitialSectionDataBin>::operator[](
            proto_initial_section_map,
            city_id);
    proto::BlossomInitialSectionDataBin::operator=(v12, v11);
    proto::BlossomInitialSectionDataBin::~BlossomInitialSectionDataBin((proto::BlossomInitialSectionDataBin *const)(v2 + 32));
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,int>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,int> > > *const)&__for_begin);
  }
  result = 0;
  if ( v33 == (char *)v2 )
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
  return result;
};

// Line 159: range 00000000171CCB62-00000000171CD206
int32_t __cdecl PlayerBlossomComp::init(PlayerBlossomComp *const this)
{
  std::_Deque_iterator<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >&,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >*>::_Elt_pointer *p_M_last; // r14
  __int64 v2; // rax
  unsigned __int64 v3; // r15
  PlayerEventComp *EventComp; // r12
  PlayerEventComp *v5; // r12
  PlayerEventComp *v6; // r12
  PlayerEventComp *v7; // r12
  PlayerEventComp *v8; // r12
  PlayerEventComp *v9; // r12
  PlayerEventComp *v10; // r12
  int32_t result; // eax
  PlayerEventComp v12; // [rsp+80h] [rbp-E0h] BYREF

  p_M_last = &v12.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      p_M_last = (std::_Deque_iterator<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >&,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >*>::_Elt_pointer *)v2;
  }
  *p_M_last = (std::_Deque_iterator<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >&,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >*>::_Elt_pointer)1102416563;
  p_M_last[1] = (std::_Deque_iterator<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >&,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >*>::_Elt_pointer)"1 32 16 12 this_wtr:160";
  p_M_last[2] = (std::_Deque_iterator<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >&,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >*>::_Elt_pointer)PlayerBlossomComp::init;
  v3 = (unsigned __int64)p_M_last >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  toThisPtr<PlayerBlossomComp>((PlayerBlossomComp *)&v12.event_center_.context_.pending_que_.c._M_impl._M_finish);
  std::weak_ptr<PlayerBlossomComp>::weak_ptr<PlayerBlossomComp,void>(
    (std::weak_ptr<PlayerBlossomComp> *const)p_M_last + 2,
    (const std::shared_ptr<PlayerBlossomComp> *)&v12.event_center_.context_.pending_que_.c._M_impl._M_finish);
  std::shared_ptr<PlayerBlossomComp>::~shared_ptr((std::shared_ptr<PlayerBlossomComp> *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_finish);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  EventComp = Player::getEventComp(this->player_);
  std::weak_ptr<PlayerBlossomComp>::weak_ptr(
    (std::weak_ptr<PlayerBlossomComp> *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_finish,
    (const std::weak_ptr<PlayerBlossomComp> *)p_M_last + 2);
  PlayerEventComp::registerObserver<PlayerBlossomComp,PlayerLevelupEvent>(
    &v12,
    (std::weak_ptr<PlayerBlossomComp> *)EventComp,
    (void (*)(PlayerBlossomComp *, const PlayerLevelupEvent *))&v12.event_center_.context_.pending_que_.c._M_impl._M_finish);
  std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v12);
  std::weak_ptr<PlayerBlossomComp>::~weak_ptr((std::weak_ptr<PlayerBlossomComp> *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_finish);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v5 = Player::getEventComp(this->player_);
  std::weak_ptr<PlayerBlossomComp>::weak_ptr(
    (std::weak_ptr<PlayerBlossomComp> *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_finish,
    (const std::weak_ptr<PlayerBlossomComp> *)p_M_last + 2);
  PlayerEventComp::registerObserver<PlayerBlossomComp,PlayerWorldLevelChangeEvent>(
    (PlayerEventComp *const)&v12._M_weak_this._M_refcount,
    (std::weak_ptr<PlayerBlossomComp> *)v5,
    (void (*)(PlayerBlossomComp *, const PlayerWorldLevelChangeEvent *))&v12.event_center_.context_.pending_que_.c._M_impl._M_finish);
  std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v12._M_weak_this._M_refcount);
  std::weak_ptr<PlayerBlossomComp>::~weak_ptr((std::weak_ptr<PlayerBlossomComp> *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_finish);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v6 = Player::getEventComp(this->player_);
  std::weak_ptr<PlayerBlossomComp>::weak_ptr(
    (std::weak_ptr<PlayerBlossomComp> *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_finish,
    (const std::weak_ptr<PlayerBlossomComp> *)p_M_last + 2);
  PlayerEventComp::registerObserver<PlayerBlossomComp,FinishQuestEvent>(
    (PlayerEventComp *const)&v12.event_center_,
    (std::weak_ptr<PlayerBlossomComp> *)v6,
    (void (*)(PlayerBlossomComp *, const FinishQuestEvent *))&v12.event_center_.context_.pending_que_.c._M_impl._M_finish);
  std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v12.event_center_);
  std::weak_ptr<PlayerBlossomComp>::~weak_ptr((std::weak_ptr<PlayerBlossomComp> *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_finish);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v7 = Player::getEventComp(this->player_);
  std::weak_ptr<PlayerBlossomComp>::weak_ptr(
    (std::weak_ptr<PlayerBlossomComp> *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_finish,
    (const std::weak_ptr<PlayerBlossomComp> *)p_M_last + 2);
  PlayerEventComp::registerObserver<PlayerBlossomComp,ActivityCondMeetEvent>(
    (PlayerEventComp *const)&v12.event_center_.context_.pending_que_,
    (std::weak_ptr<PlayerBlossomComp> *)v7,
    (void (*)(PlayerBlossomComp *, const ActivityCondMeetEvent *))&v12.event_center_.context_.pending_que_.c._M_impl._M_finish);
  std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v12.event_center_.context_.pending_que_);
  std::weak_ptr<PlayerBlossomComp>::~weak_ptr((std::weak_ptr<PlayerBlossomComp> *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_finish);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v8 = Player::getEventComp(this->player_);
  std::weak_ptr<PlayerBlossomComp>::weak_ptr(
    (std::weak_ptr<PlayerBlossomComp> *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_finish,
    (const std::weak_ptr<PlayerBlossomComp> *)p_M_last + 2);
  PlayerEventComp::registerObserver<PlayerBlossomComp,ActivityCondExpireEvent>(
    (PlayerEventComp *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_start,
    (std::weak_ptr<PlayerBlossomComp> *)v8,
    (void (*)(PlayerBlossomComp *, const ActivityCondExpireEvent *))&v12.event_center_.context_.pending_que_.c._M_impl._M_finish);
  std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_start);
  std::weak_ptr<PlayerBlossomComp>::~weak_ptr((std::weak_ptr<PlayerBlossomComp> *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_finish);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v9 = Player::getEventComp(this->player_);
  std::weak_ptr<PlayerBlossomComp>::weak_ptr(
    (std::weak_ptr<PlayerBlossomComp> *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_finish,
    (const std::weak_ptr<PlayerBlossomComp> *)p_M_last + 2);
  PlayerEventComp::registerObserver<PlayerBlossomComp,GroupsReplaceEvent>(
    (PlayerEventComp *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
    (std::weak_ptr<PlayerBlossomComp> *)v9,
    (void (*)(PlayerBlossomComp *, const GroupsReplaceEvent *))&v12.event_center_.context_.pending_que_.c._M_impl._M_finish);
  std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
  std::weak_ptr<PlayerBlossomComp>::~weak_ptr((std::weak_ptr<PlayerBlossomComp> *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_finish);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v10 = Player::getEventComp(this->player_);
  std::weak_ptr<PlayerBlossomComp>::weak_ptr(
    (std::weak_ptr<PlayerBlossomComp> *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
    (const std::weak_ptr<PlayerBlossomComp> *)p_M_last + 2);
  PlayerEventComp::registerObserver<PlayerBlossomComp,SceneTagChangeEvent>(
    (PlayerEventComp *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_finish,
    (std::weak_ptr<PlayerBlossomComp> *)v10,
    (void (*)(PlayerBlossomComp *, const SceneTagChangeEvent *))&v12.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
  std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_finish);
  std::weak_ptr<PlayerBlossomComp>::~weak_ptr((std::weak_ptr<PlayerBlossomComp> *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
  std::weak_ptr<PlayerBlossomComp>::~weak_ptr((std::weak_ptr<PlayerBlossomComp> *const)p_M_last + 2);
  result = 0;
  if ( &v12.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last == p_M_last )
  {
    *(_QWORD *)(((unsigned __int64)p_M_last >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *p_M_last = (std::_Deque_iterator<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >&,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >*>::_Elt_pointer)1172321806;
    *(_QWORD *)(((unsigned __int64)p_M_last >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 172: range 00000000171CD208-00000000171CD284
int32_t __cdecl PlayerBlossomComp::onLogin(PlayerBlossomComp *const this, bool is_new_player)
{
  PlayerBlossomComp::tryRefreshSectionData(this);
  PlayerBlossomComp::tryRefresh(this, 0);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  if ( !Player::isRelogin(this->player_) )
    PlayerBlossomComp::startAllBlossomGroup(this);
  return 0;
};

// Line 187: range 00000000171CD286-00000000171CD486
int32_t __cdecl PlayerBlossomComp::onLogout(PlayerBlossomComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v4; // rax
  uint32_t *v5; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-A0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-98h]
  char v10[144]; // [rsp+30h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 18 refresh_id_vec:189";
  *(_QWORD *)(v1 + 16) = PlayerBlossomComp::onLogout;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  PlayerBlossomComp::getCurRefreshIdVec((std::vector<unsigned int> *)(v1 + 32), this);
  __for_range = (std::vector<unsigned int> *)(v1 + 32);
  __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 32))._M_current;
  __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v1 + 32))._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v4 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    PlayerBlossomComp::clearBlossomDecorateGroup(this, *v5);
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 32));
  result = 0;
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
  return result;
};

// Line 199: range 00000000171CD488-00000000171CD706
int32_t __cdecl PlayerBlossomComp::notifyAllData(PlayerBlossomComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<proto::BlossomBriefInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  google::protobuf::RepeatedPtrField<proto::BlossomBriefInfo> *v5; // rdx
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  Player *player; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-A4h] BYREF
  std::shared_ptr<proto::BlossomBriefInfoNotify> __r; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-90h] BYREF
  char v13[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 notify_ptr:200";
  *(_QWORD *)(v1 + 16) = PlayerBlossomComp::notifyAllData;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::BlossomBriefInfoNotify>();
  v4 = std::__shared_ptr_access<proto::BlossomBriefInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::BlossomBriefInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  v5 = proto::BlossomBriefInfoNotify::mutable_brief_info_list(v4);
  if ( PlayerBlossomComp::fillBlossomBriefInfoList(this, v5) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "notifyAllData",
      203);
    v6 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v12,
           (const char (*)[59])"[PlayerBlossomComp] fillBlossomBriefInfoList failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    player = this->player_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::BlossomBriefInfoNotify>(&__r);
    Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
    v7 = 0;
  }
  std::shared_ptr<proto::BlossomBriefInfoNotify>::~shared_ptr((std::shared_ptr<proto::BlossomBriefInfoNotify> *const)(v1 + 32));
  result = v7;
  if ( v13 == (char *)v1 )
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

// Line 213: range 00000000171CD708-00000000171CD722
void __cdecl PlayerBlossomComp::onDailyRefresh(PlayerBlossomComp *const this)
{
  PlayerBlossomComp::tryRefreshSectionData(this);
};

// Line 218: range 00000000171CD724-00000000171CDB9F
void __cdecl PlayerBlossomComp::tryRefreshSectionData(PlayerBlossomComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v5; // rdx
  unsigned int *p_second; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,int> > >::pointer v16; // rax
  int *v17; // rax
  uint32_t now; // [rsp+14h] [rbp-DCh]
  uint32_t time_offset; // [rsp+18h] [rbp-D8h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+20h] [rbp-D0h] BYREF
  const std::pair<unsigned int,int> *initial_section_info; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v22; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v1 + 8) = "3 32 4 12 time_day:221 48 4 20 section_time_day:227 64 8 8 iter:240";
  *(_QWORD *)(v1 + 16) = PlayerBlossomComp::tryRefreshSectionData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -202116352;
  now = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
  time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v4->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v22);
  *(_DWORD *)(v1 + 32) = common::tools::TimeUtils::getTimeDay(now, time_offset);
  common::tools::TimeUtils::getDailyStartTime(*(unsigned int *)(v1 + 32), time_offset);
  *(std::map<unsigned int,unsigned int>::iterator *)(v1 + 64) = std::map<unsigned int,unsigned int>::begin(&this->recent_used_section_id_map_);
  while ( 1 )
  {
    __y._M_node = std::map<unsigned int,unsigned int>::end(&this->recent_used_section_id_map_)._M_node;
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v1 + 64),
            &__y) )
      break;
    v5 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v1 + 64));
    p_second = &v5->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    *(_DWORD *)(v1 + 48) = common::tools::TimeUtils::getTimeDay(v5->second, time_offset);
    if ( (unsigned int)(*(_DWORD *)(v1 + 48) + 1) >= *(_DWORD *)(v1 + 32) )
    {
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v1 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "tryRefreshSectionData",
        230);
      v7 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v23,
             (const char (*)[31])"[PlayerBlossomComp] time_day: ");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 32));
      v9 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             v8,
             (const char (*)[21])" ,erase section id: ");
      v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v1 + 64));
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)v10);
      v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])" ,timestamp: ");
      v13 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v1 + 64));
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &v13->second);
      v15 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v14,
              (const char (*)[21])" ,section_time_day: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::~MiLogStream(&v23);
      *(std::map<unsigned int,unsigned int>::iterator *)(v1 + 64) = std::map<unsigned int,unsigned int>::erase[abi:cxx11](
                                                                      &this->recent_used_section_id_map_,
                                                                      *(std::map<unsigned int,unsigned int>::iterator *)(v1 + 64));
    }
  }
  *(std::map<unsigned int,std::pair<unsigned int,int>>::iterator *)(v1 + 64) = std::map<unsigned int,std::pair<unsigned int,int>>::begin(&this->initial_section_map_);
  while ( 1 )
  {
    __y._M_node = std::map<unsigned int,std::pair<unsigned int,int>>::end(&this->initial_section_map_)._M_node;
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,int> > >::_Self *)(v1 + 64),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,int> > >::_Self *)&__y) )
      break;
    v16 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,int>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,int> > > *const)(v1 + 64));
    initial_section_info = &v16->second;
    v17 = &v16->second.second;
    if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v17);
    }
    if ( !common::tools::TimeUtils::isSameDay(now, initial_section_info->second, time_offset) )
      *(std::map<unsigned int,std::pair<unsigned int,int>>::iterator *)(v1 + 64) = std::map<unsigned int,std::pair<unsigned int,int>>::erase[abi:cxx11](
                                                                                     &this->initial_section_map_,
                                                                                     *(std::map<unsigned int,std::pair<unsigned int,int>>::iterator *)(v1 + 64));
    else
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,int>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,int> > > *const)(v1 + 64));
  }
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

// Line 255: range 00000000171CDBA0-00000000171CE713
int32_t __cdecl PlayerBlossomComp::tryRefresh(PlayerBlossomComp *const this, bool is_notify)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  unsigned int *M_current; // r15
  std::vector<unsigned int>::iterator v8; // rax
  common::milog::MiLogStream *v9; // r14
  int v10; // r15d
  const std::pair<unsigned int const,std::vector<unsigned int> > *v11; // rax
  std::vector<unsigned int> *v12; // r8
  common::milog::MiLogStream *v13; // r15
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // r15d
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >,bool> v17; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  int32_t result; // eax
  bool is_repaired; // [rsp+23h] [rbp-20Dh]
  unsigned int val; // [rsp+24h] [rbp-20Ch] BYREF
  std::map<unsigned int,std::vector<unsigned int>>::iterator __for_begin; // [rsp+28h] [rbp-208h] BYREF
  std::map<unsigned int,std::vector<unsigned int>>::iterator __for_end; // [rsp+30h] [rbp-200h] BYREF
  std::map<unsigned int,std::vector<unsigned int>>::iterator __for_begin_0; // [rsp+38h] [rbp-1F8h] BYREF
  std::map<unsigned int,std::vector<unsigned int>>::iterator __for_end_0; // [rsp+40h] [rbp-1F0h] BYREF
  std::map<unsigned int,std::vector<unsigned int>> *__for_range; // [rsp+48h] [rbp-1E8h]
  std::map<unsigned int,std::vector<unsigned int>> *__for_range_1; // [rsp+50h] [rbp-1E0h]
  const std::pair<unsigned int const,std::vector<unsigned int> > *v31; // [rsp+58h] [rbp-1D8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *refresh_id_0; // [rsp+60h] [rbp-1D0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *_; // [rsp+68h] [rbp-1C8h]
  std::pair<unsigned int const,std::vector<unsigned int> > *__in; // [rsp+70h] [rbp-1C0h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<unsigned int> > >::type *city_id; // [rsp+78h] [rbp-1B8h]
  std::tuple_element<1,std::pair<unsigned int const,std::vector<unsigned int> > >::type *refresh_id_vec; // [rsp+80h] [rbp-1B0h]
  std::map<unsigned int,std::vector<unsigned int>> *__for_range_0; // [rsp+88h] [rbp-1A8h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<unsigned int> > >::type *refresh_id; // [rsp+90h] [rbp-1A0h]
  std::tuple_element<1,std::pair<unsigned int const,std::vector<unsigned int> > >::type *circle_camp_id_vec; // [rsp+98h] [rbp-198h]
  std::pair<unsigned int const,std::vector<unsigned int> > v40; // [rsp+A0h] [rbp-190h] BYREF
  common::milog::MiLogStream v41; // [rsp+C0h] [rbp-170h] BYREF
  char v42[336]; // [rsp+E0h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 48 23 city_refresh_id_map:260 128 48 22 circle_camp_id_map:279 208 48 27 city_circle_camp_id_map:284";
  *(_QWORD *)(v3 + 16) = PlayerBlossomComp::tryRefresh;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -218959118;
  v5[536862725] = -219021312;
  v5[536862726] = 62194;
  v5[536862728] = -202116109;
  is_repaired = PlayerBlossomComp::checkAndRepairBlossomData(this);
  std::map<unsigned int,std::vector<unsigned int>>::map((std::map<unsigned int,std::vector<unsigned int>> *const)(v3 + 48));
  if ( PlayerBlossomComp::genCityRefreshIdMap(this, (std::map<unsigned int,std::vector<unsigned int>> *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "tryRefresh",
      263);
    v6 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
           &v41,
           (const char (*)[54])"[PlayerBlossomComp] genCityRefreshIdMap failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v41);
    v2 = -1;
  }
  else if ( std::map<unsigned int,std::vector<unsigned int>>::empty((const std::map<unsigned int,std::vector<unsigned int>> *const)(v3 + 48)) )
  {
    if ( is_notify && is_repaired )
      PlayerBlossomComp::broadcastBlossomBriefInfo(this);
    v2 = 0;
  }
  else
  {
    std::map<unsigned int,std::vector<unsigned int>>::map((std::map<unsigned int,std::vector<unsigned int>> *const)(v3 + 128));
    __for_range = (std::map<unsigned int,std::vector<unsigned int>> *)(v3 + 48);
    __for_begin._M_node = std::map<unsigned int,std::vector<unsigned int>>::begin((std::map<unsigned int,std::vector<unsigned int>> *const)(v3 + 48))._M_node;
    __for_end._M_node = std::map<unsigned int,std::vector<unsigned int>>::end((std::map<unsigned int,std::vector<unsigned int>> *const)(v3 + 48))._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator*(&__for_begin);
      city_id = std::get<0ul,unsigned int const,std::vector<unsigned int>>(__in);
      refresh_id_vec = std::get<1ul,unsigned int const,std::vector<unsigned int>>(__in);
      M_current = std::vector<unsigned int>::end(refresh_id_vec)._M_current;
      v8._M_current = std::vector<unsigned int>::begin(refresh_id_vec)._M_current;
      std::sort<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
        v8,
        (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
      std::map<unsigned int,std::vector<unsigned int>>::map((std::map<unsigned int,std::vector<unsigned int>> *const)(v3 + 208));
      if ( *(_BYTE *)(((unsigned __int64)city_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)city_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)city_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(city_id);
      }
      if ( PlayerBlossomComp::genCircleCampIdMap(
             this,
             *city_id,
             refresh_id_vec,
             (std::map<unsigned int,std::vector<unsigned int>> *)(v3 + 208)) )
      {
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/blossom/player_blossom_comp.cpp",
          "tryRefresh",
          287);
        v9 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
               &v41,
               (const char (*)[53])"[PlayerBlossomComp] genCircleCampIdMap failed, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
        common::milog::MiLogStream::~MiLogStream(&v41);
        v2 = -1;
        v10 = 0;
      }
      else
      {
        __for_range_0 = (std::map<unsigned int,std::vector<unsigned int>> *)(v3 + 208);
        __for_begin_0._M_node = std::map<unsigned int,std::vector<unsigned int>>::begin((std::map<unsigned int,std::vector<unsigned int>> *const)(v3 + 208))._M_node;
        __for_end_0._M_node = std::map<unsigned int,std::vector<unsigned int>>::end(__for_range_0)._M_node;
        while ( 1 )
        {
          if ( !std::operator!=(&__for_begin_0, &__for_end_0) )
          {
            v10 = 1;
            goto LABEL_37;
          }
          v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator*(&__for_begin_0);
          std::pair<unsigned int const,std::vector<unsigned int>>::pair(&v40, v11);
          refresh_id = std::get<0ul,unsigned int const,std::vector<unsigned int>>(&v40);
          circle_camp_id_vec = std::get<1ul,unsigned int const,std::vector<unsigned int>>(&v40);
          if ( std::vector<unsigned int>::empty(circle_camp_id_vec) )
          {
            common::milog::MiLogStream::create(
              &v41,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/blossom/player_blossom_comp.cpp",
              "tryRefresh",
              295);
            v13 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                    &v41,
                    (const char (*)[55])"[PlayerBlossomComp] circle_camp_id_vec is empty, uid: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            val = Player::getUid(this->player_);
            v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
            v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v14,
                    (const char (*)[14])",refresh_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, refresh_id);
            common::milog::MiLogStream::~MiLogStream(&v41);
            v16 = 0;
          }
          else
          {
            v17 = std::map<unsigned int,std::vector<unsigned int>>::emplace<unsigned int const&,std::vector<unsigned int>&>(
                    (std::map<unsigned int,std::vector<unsigned int>> *const)(v3 + 128),
                    refresh_id,
                    circle_camp_id_vec,
                    refresh_id,
                    v12);
            if ( !v17.second )
            {
              common::milog::MiLogStream::create(
                &v41,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/blossom/player_blossom_comp.cpp",
                "tryRefresh",
                301);
              v18 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                      &v41,
                      (const char (*)[49])"[PlayerBlossomComp] refresh_id duplicated, uid: ");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              val = Player::getUid(this->player_);
              v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
              v20 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v19,
                      (const char (*)[14])",refresh_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, refresh_id);
              common::milog::MiLogStream::~MiLogStream(&v41);
              v2 = -1;
              v16 = 1;
            }
            else
            {
              v16 = 2;
            }
          }
          std::pair<unsigned int const,std::vector<unsigned int>>::~pair(&v40);
          if ( v16 )
          {
            if ( v16 != 2 )
              break;
          }
          std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator++(&__for_begin_0);
        }
        v10 = 0;
      }
LABEL_37:
      std::map<unsigned int,std::vector<unsigned int>>::~map((std::map<unsigned int,std::vector<unsigned int>> *const)(v3 + 208));
      if ( v10 != 1 )
        goto LABEL_55;
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator++(&__for_begin);
    }
    if ( PlayerBlossomComp::refreshCircleCamp(
           this,
           (const std::map<unsigned int,std::vector<unsigned int>> *)(v3 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "tryRefresh",
        309);
      v21 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              &v41,
              (const char (*)[52])"[PlayerBlossomComp] refreshCircleCamp failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    else
    {
      if ( is_notify )
        PlayerBlossomComp::broadcastBlossomBriefInfo(this);
      __for_range_1 = (std::map<unsigned int,std::vector<unsigned int>> *)(v3 + 128);
      __for_begin_0._M_node = std::map<unsigned int,std::vector<unsigned int>>::begin((std::map<unsigned int,std::vector<unsigned int>> *const)(v3 + 128))._M_node;
      __for_end_0._M_node = std::map<unsigned int,std::vector<unsigned int>>::end(__for_range_1)._M_node;
      while ( 1 )
      {
        if ( !std::operator!=(&__for_begin_0, &__for_end_0) )
        {
          v2 = 0;
          goto LABEL_55;
        }
        v31 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator*(&__for_begin_0);
        refresh_id_0 = std::get<0ul,unsigned int const,std::vector<unsigned int>>(v31);
        _ = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::vector<unsigned int>>(v31);
        if ( *(_BYTE *)(((unsigned __int64)refresh_id_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)refresh_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)refresh_id_0 >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(refresh_id_0);
        }
        if ( PlayerBlossomComp::startBlossomGroup(this, *refresh_id_0) )
          break;
        std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator++(&__for_begin_0);
      }
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "tryRefresh",
        324);
      v21 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              &v41,
              (const char (*)[52])"[PlayerBlossomComp] startBlossomGroup failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
    common::milog::MiLogStream::~MiLogStream(&v41);
    v2 = -1;
LABEL_55:
    std::map<unsigned int,std::vector<unsigned int>>::~map((std::map<unsigned int,std::vector<unsigned int>> *const)(v3 + 128));
  }
  std::map<unsigned int,std::vector<unsigned int>>::~map((std::map<unsigned int,std::vector<unsigned int>> *const)(v3 + 48));
  result = v2;
  if ( v42 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8014) = 0LL;
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
  return result;
};

// Line 333: range 00000000171CEFA2-00000000171CF4EC
bool __cdecl PlayerBlossomComp::checkAndRepairBlossomData(PlayerBlossomComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  PlayerBasicComp *BasicComp; // rax
  BlossomExcelConfigMgr *p_blossom_config_mgr; // rcx
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v9; // rax
  _DWORD *v10; // rdx
  bool v11; // r14
  bool result; // al
  uint32_t now; // [rsp+18h] [rbp-148h]
  uint32_t level; // [rsp+1Ch] [rbp-144h]
  std::map<unsigned int,BlossomRefreshInfo>::iterator __for_begin; // [rsp+20h] [rbp-140h] BYREF
  std::map<unsigned int,BlossomRefreshInfo>::iterator __for_end; // [rsp+28h] [rbp-138h] BYREF
  std::map<unsigned int,BlossomRefreshInfo> *__for_range; // [rsp+30h] [rbp-130h]
  std::set<unsigned int> *__for_range_0; // [rsp+38h] [rbp-128h]
  const std::pair<unsigned int const,BlossomRefreshInfo> *v19; // [rsp+40h] [rbp-120h]
  std::tuple_element<0,const std::pair<unsigned int const,BlossomRefreshInfo> >::type *refresh_id; // [rsp+48h] [rbp-118h]
  std::tuple_element<1,const std::pair<unsigned int const,BlossomRefreshInfo> >::type *refresh_info; // [rsp+50h] [rbp-110h]
  const data::BlossomRefreshExcelConfig *refresh_config_ptr; // [rsp+58h] [rbp-108h]
  std::shared_ptr<Config> v23; // [rsp+60h] [rbp-100h] BYREF
  common::milog::MiLogStream v24; // [rsp+70h] [rbp-F0h] BYREF
  char v25[208]; // [rsp+90h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 14 refresh_id:391 48 16 20 check_valid_func:338 80 48 26 invalid_refresh_id_set:375";
  *(_QWORD *)(v1 + 16) = PlayerBlossomComp::checkAndRepairBlossomData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61956;
  v3[536862722] = 62194;
  v3[536862724] = -202116109;
  now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  level = PlayerBasicComp::getLevel(BasicComp);
  *(_DWORD *)(v1 + 48) = now;
  *(_DWORD *)(v1 + 52) = level;
  *(_QWORD *)(v1 + 56) = this;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v1 + 80));
  __for_range = &this->refresh_info_map_;
  __for_begin._M_node = std::map<unsigned int,BlossomRefreshInfo>::begin(&this->refresh_info_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,BlossomRefreshInfo>::end(&this->refresh_info_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v19 = std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo>>::operator*(&__for_begin);
    refresh_id = std::get<0ul,unsigned int const,BlossomRefreshInfo>(v19);
    refresh_info = (std::tuple_element<1,const std::pair<unsigned int const,BlossomRefreshInfo> >::type *)std::get<1ul,unsigned int const,BlossomRefreshInfo>(v19);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v23);
    p_blossom_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.txt_config_mgr.blossom_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)refresh_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)refresh_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)refresh_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(refresh_id);
    }
    refresh_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomRefreshExcelConfig(
                           p_blossom_config_mgr,
                           *refresh_id);
    std::shared_ptr<Config>::~shared_ptr(&v23);
    if ( refresh_config_ptr )
    {
      if ( !PlayerBlossomComp::checkAndRepairBlossomData(void)::{lambda(data::BlossomRefreshExcelConfig const&,BlossomRefreshInfo const&)#1}::operator()(
              (const PlayerBlossomComp::checkAndRepairBlossomData::<lambda(const data::BlossomRefreshExcelConfig&, const BlossomRefreshInfo&)> *const)(v1 + 48),
              refresh_config_ptr,
              refresh_info) )
        std::set<unsigned int>::insert((std::set<unsigned int> *const)(v1 + 80), refresh_id);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "checkAndRepairBlossomData",
        381);
      v6 = common::milog::MiLogStream::operator<<<char [90],(char *[90])0>(
             &v24,
             (const char (*)[90])"[PlayerBlossomComp] checkAndRepairBlossomData findBlossomRefreshExcelConfig failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      *(_DWORD *)(v1 + 32) = Player::getUid(this->player_);
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 32));
      v8 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v7, (const char (*)[15])" ,refresh_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, refresh_id);
      common::milog::MiLogStream::~MiLogStream(&v24);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo>>::operator++(&__for_begin);
  }
  __for_range_0 = (std::set<unsigned int> *)(v1 + 80);
  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo> >::_Base_ptr)std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v1 + 80))._M_node;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo> >::_Base_ptr)std::set<unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v9 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    *(_DWORD *)(v1 + 32) = *v10;
    PlayerBlossomComp::clearBlossomGroup(this, *(_DWORD *)(v1 + 32));
    std::map<unsigned int,BlossomRefreshInfo>::erase(
      &this->refresh_info_map_,
      (const std::map<unsigned int,BlossomRefreshInfo>::key_type *)(v1 + 32));
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  v11 = !std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v1 + 80));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 80));
  result = v11;
  if ( v25 == (char *)v1 )
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
  return result;
};

// Line 338: range 00000000171CE714-00000000171CEFA0
bool __cdecl PlayerBlossomComp::checkAndRepairBlossomData(void)::{lambda(data::BlossomRefreshExcelConfig const&,BlossomRefreshInfo const&)#1}::operator()(
        const PlayerBlossomComp::checkAndRepairBlossomData::<lambda(const data::BlossomRefreshExcelConfig&, const BlossomRefreshInfo&)> *const __closure,
        const data::BlossomRefreshExcelConfig *excel_config,
        const BlossomRefreshInfo *refresh_info)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  const BlossomExcelConfigMgr *p_blossom_config_mgr; // rdi
  uint32_t level; // ecx
  bool v8; // r14
  common::milog::MiLogStream *v9; // r13
  PlayerBlossomComp *this; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  bool result; // al
  PlayerBlossomComp *v14; // rcx
  std::vector<data::BlossomRefreshCond> *p_refresh_cond_vec; // rsi
  common::milog::MiLogStream *v16; // r13
  PlayerBlossomComp *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  time_t v20; // rdx
  time_t v21; // rdx
  common::milog::MiLogStream *v22; // r14
  PlayerBlossomComp *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  unsigned int val; // [rsp+28h] [rbp-C8h] BYREF
  uint32_t refresh_offset; // [rsp+2Ch] [rbp-C4h]
  std::shared_ptr<Config> v35; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v36; // [rsp+40h] [rbp-B0h] BYREF
  char v37[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 time_day:363 64 4 25 last_refresh_time_day:364";
  *(_QWORD *)(v3 + 16) = PlayerBlossomComp::checkAndRepairBlossomData(void)::{lambda(data::BlossomRefreshExcelConfig const&,BlossomRefreshInfo const&)#1}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v35);
  p_blossom_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35)->design_config.txt_config_mgr.blossom_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)__closure + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__level >> 3) + 0x7FFF8000) )
  {
    p_blossom_config_mgr = (const BlossomExcelConfigMgr *)&__closure->__level;
    __asan_report_load4(&__closure->__level);
  }
  level = __closure->__level;
  if ( *(_BYTE *)(((unsigned __int64)&excel_config->city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->city_id >> 3)
                                                                + 0x7FFF8000) )
  {
    p_blossom_config_mgr = (const BlossomExcelConfigMgr *)&excel_config->city_id;
    __asan_report_load4(&excel_config->city_id);
  }
  v8 = !BlossomExcelConfigMgr::checkCityBlossomIsOpen(p_blossom_config_mgr, excel_config->city_id, level);
  std::shared_ptr<Config>::~shared_ptr(&v35);
  if ( v8 )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "operator()",
      343);
    v9 = common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(
           &v36,
           (const char (*)[78])"[PlayerBlossomComp] checkAndRepairBlossomData city blossom is not open, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__this);
    this = __closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])" ,city_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &excel_config->city_id);
    common::milog::MiLogStream::~MiLogStream(&v36);
    result = 0;
    goto LABEL_43;
  }
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__this);
  v14 = __closure->__this;
  p_refresh_cond_vec = &excel_config->refresh_cond_vec;
  if ( *(_BYTE *)(((unsigned __int64)&excel_config->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&excel_config->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&excel_config->id);
  }
  if ( !PlayerBlossomComp::checkRefreshCondVecIsMeet(v14, excel_config->id, p_refresh_cond_vec) )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "operator()",
      350);
    v16 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
            &v36,
            (const char (*)[57])"[PlayerBlossomComp] some refresh cond unavailable, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__this);
    v17 = __closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)&v17->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&v17->player_);
LABEL_23:
    val = Player::getUid(v17->player_);
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
    v19 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v18, (const char (*)[15])" ,refresh_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &excel_config->id);
    common::milog::MiLogStream::~MiLogStream(&v36);
    result = 0;
    goto LABEL_43;
  }
  if ( *(_BYTE *)(((unsigned __int64)&excel_config->refresh_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)excel_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->refresh_count >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4(&excel_config->refresh_count);
  }
  if ( !excel_config->refresh_count )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "operator()",
      357);
    v16 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
            &v36,
            (const char (*)[75])"[PlayerBlossomComp] checkAndRepairBlossomData refresh count is zero, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__this);
    v17 = __closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)&v17->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&v17->player_);
    goto LABEL_23;
  }
  refresh_offset = common::tools::TimeUtils::getTimeByTimeStr(&excel_config->refresh_time);
  v20 = refresh_offset;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(__closure);
  }
  *(_DWORD *)(v3 + 48) = common::tools::TimeUtils::getTimeDay(__closure->__now, v20);
  v21 = refresh_offset;
  if ( *(_BYTE *)(((unsigned __int64)&refresh_info->last_refresh_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&refresh_info->last_refresh_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&refresh_info->last_refresh_time);
  }
  *(_DWORD *)(v3 + 64) = common::tools::TimeUtils::getTimeDay(refresh_info->last_refresh_time, v21);
  if ( *(_DWORD *)(v3 + 48) <= *(_DWORD *)(v3 + 64) )
  {
    result = 1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "operator()",
      367);
    v22 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
            &v36,
            (const char (*)[75])"[PlayerBlossomComp] checkAndRepairBlossomData refresh id is expired, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__this);
    v23 = __closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)&v23->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&v23->player_);
    val = Player::getUid(v23->player_);
    v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
    v25 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v24, (const char (*)[15])" ,refresh_id: ");
    v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &excel_config->id);
    v27 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v26, (const char (*)[13])" ,time_day: ");
    v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v3 + 48));
    v29 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            v28,
            (const char (*)[26])" ,last_refresh_time_day: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v36);
    result = 0;
  }
LABEL_43:
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

// Line 401: range 00000000171CF4EE-00000000171CF53C
int32_t __cdecl PlayerBlossomComp::clearBlossomData(PlayerBlossomComp *const this)
{
  PlayerBlossomComp::clearAllBlossomGroup(this);
  std::map<unsigned int,BlossomRefreshInfo>::clear(&this->refresh_info_map_);
  std::map<unsigned int,unsigned int>::clear(&this->recent_used_section_id_map_);
  std::map<unsigned int,std::pair<unsigned int,int>>::clear(&this->initial_section_map_);
  return 0;
};

// Line 410: range 00000000171CF53E-00000000171CF621
int32_t __cdecl PlayerBlossomComp::clearBlossomDataByGm(PlayerBlossomComp *const this)
{
  common::milog::MiLogStream *v1; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/blossom/player_blossom_comp.cpp",
    "clearBlossomDataByGm",
    411);
  v1 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
         &v4,
         (const char (*)[48])"[PlayerBlossomComp] clearBlossomDataByGm, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
  common::milog::MiLogStream::~MiLogStream(&v4);
  PlayerBlossomComp::clearBlossomData(this);
  PlayerBlossomComp::broadcastBlossomBriefInfo(this);
  return 0;
};

// Line 418: range 00000000171CF622-00000000171D07F1
int32_t __cdecl PlayerBlossomComp::forceRefreshByGm(PlayerBlossomComp *const this)
{
  int32_t v1; // r15d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  PlayerBasicComp *BasicComp; // rax
  BlossomExcelConfigMgr *p_blossom_config_mgr; // rcx
  bool v8; // r14
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::vector<unsigned int> *v15; // rax
  common::milog::MiLogStream *v16; // r14
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v18; // rax
  common::milog::MiLogStream *v19; // r14
  int v20; // r14d
  const std::pair<unsigned int const,std::vector<unsigned int> > *v21; // rax
  std::vector<unsigned int> *v22; // r8
  common::milog::MiLogStream *v23; // r14
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  int v26; // r14d
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >,bool> v27; // rax
  common::milog::MiLogStream *v28; // r14
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+10h] [rbp-240h] BYREF
  uint32_t level; // [rsp+14h] [rbp-23Ch]
  std::map<unsigned int,std::vector<unsigned int>>::iterator __for_begin_0; // [rsp+18h] [rbp-238h] BYREF
  std::map<unsigned int,std::vector<unsigned int>>::iterator __for_end_0; // [rsp+20h] [rbp-230h] BYREF
  std::unordered_map<unsigned int,data::BlossomRefreshExcelConfig>::const_iterator __for_begin; // [rsp+28h] [rbp-228h] BYREF
  std::unordered_map<unsigned int,data::BlossomRefreshExcelConfig>::const_iterator __for_end; // [rsp+30h] [rbp-220h] BYREF
  const std::unordered_map<unsigned int,data::BlossomRefreshExcelConfig> *__for_range; // [rsp+38h] [rbp-218h]
  std::map<unsigned int,std::vector<unsigned int>> *__for_range_0; // [rsp+40h] [rbp-210h]
  std::map<unsigned int,std::vector<unsigned int>> *__for_range_2; // [rsp+48h] [rbp-208h]
  const std::pair<unsigned int const,std::vector<unsigned int> > *v42; // [rsp+50h] [rbp-200h]
  std::tuple_element<0,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *refresh_id_1; // [rsp+58h] [rbp-1F8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *_; // [rsp+60h] [rbp-1F0h]
  std::pair<unsigned int const,std::vector<unsigned int> > *__in; // [rsp+68h] [rbp-1E8h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<unsigned int> > >::type *city_id; // [rsp+70h] [rbp-1E0h]
  std::tuple_element<1,std::pair<unsigned int const,std::vector<unsigned int> > >::type *refresh_id_vec; // [rsp+78h] [rbp-1D8h]
  std::map<unsigned int,std::vector<unsigned int>> *__for_range_1; // [rsp+80h] [rbp-1D0h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<unsigned int> > >::type *refresh_id_0; // [rsp+88h] [rbp-1C8h]
  std::tuple_element<1,std::pair<unsigned int const,std::vector<unsigned int> > >::type *circle_camp_id_vec; // [rsp+90h] [rbp-1C0h]
  const std::pair<unsigned int const,data::BlossomRefreshExcelConfig> *v51; // [rsp+98h] [rbp-1B8h]
  std::tuple_element<0,const std::pair<unsigned int const,data::BlossomRefreshExcelConfig> >::type *refresh_id; // [rsp+A0h] [rbp-1B0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BlossomRefreshExcelConfig> >::type *excel_config; // [rsp+A8h] [rbp-1A8h]
  std::shared_ptr<Config> v54; // [rsp+B0h] [rbp-1A0h] BYREF
  std::pair<unsigned int const,std::vector<unsigned int> > v55; // [rsp+C0h] [rbp-190h] BYREF
  common::milog::MiLogStream v56; // [rsp+E0h] [rbp-170h] BYREF
  char v57[336]; // [rsp+100h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 48 23 city_refresh_id_map:428 128 48 22 circle_camp_id_map:462 208 48 27 city_circle_camp_id_map:467";
  *(_QWORD *)(v2 + 16) = PlayerBlossomComp::forceRefreshByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -218959118;
  v4[536862725] = -219021312;
  v4[536862726] = 62194;
  v4[536862728] = -202116109;
  common::milog::MiLogStream::create(
    &v56,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/blossom/player_blossom_comp.cpp",
    "forceRefreshByGm",
    419);
  v5 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
         &v56,
         (const char (*)[44])"[PlayerBlossomComp] forceRefreshByGm, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
  common::milog::MiLogStream::~MiLogStream(&v56);
  PlayerBlossomComp::clearBlossomData(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  level = PlayerBasicComp::getLevel(BasicComp);
  std::map<unsigned int,std::vector<unsigned int>>::map((std::map<unsigned int,std::vector<unsigned int>> *const)(v2 + 48));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v54);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v54)->design_config.txt_config_mgr.blossom_config_mgr.blossom_refresh_excel_config_map;
  std::shared_ptr<Config>::~shared_ptr(&v54);
  __for_begin._M_cur = std::unordered_map<unsigned int,data::BlossomRefreshExcelConfig>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::BlossomRefreshExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::BlossomRefreshExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v51 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlossomRefreshExcelConfig>,false,false>::operator*(&__for_begin);
    refresh_id = std::get<0ul,unsigned int const,data::BlossomRefreshExcelConfig>(v51);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::BlossomRefreshExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BlossomRefreshExcelConfig>(v51);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v54);
    p_blossom_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v54)->design_config.txt_config_mgr.blossom_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->city_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->city_id >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&excel_config->city_id);
    }
    v8 = !BlossomExcelConfigMgr::checkCityBlossomIsOpen(p_blossom_config_mgr, excel_config->city_id, level);
    std::shared_ptr<Config>::~shared_ptr(&v54);
    if ( v8 )
    {
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "forceRefreshByGm",
        434);
      v9 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
             &v56,
             (const char (*)[52])"[PlayerBlossomComp] city blossom is not open, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" ,city_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &excel_config->city_id);
      common::milog::MiLogStream::~MiLogStream(&v56);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&excel_config->open_level >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)excel_config + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->open_level >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&excel_config->open_level);
      }
      if ( excel_config->open_level && level < excel_config->open_level )
        goto LABEL_24;
      if ( *(_BYTE *)(((unsigned __int64)&excel_config->close_level >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&excel_config->close_level >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&excel_config->close_level);
      }
      if ( excel_config->close_level && level > excel_config->close_level )
      {
LABEL_24:
        common::milog::MiLogStream::create(
          &v56,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/blossom/player_blossom_comp.cpp",
          "forceRefreshByGm",
          441);
        v12 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                &v56,
                (const char (*)[50])"[PlayerBlossomComp] refresh id is not open, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
LABEL_26:
        val = Player::getUid(this->player_);
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
        v14 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v13, (const char (*)[15])" ,refresh_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, refresh_id);
        common::milog::MiLogStream::~MiLogStream(&v56);
        goto LABEL_34;
      }
      if ( *(_BYTE *)(((unsigned __int64)&excel_config->refresh_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)excel_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->refresh_count >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&excel_config->refresh_count);
      }
      if ( !excel_config->refresh_count )
      {
        common::milog::MiLogStream::create(
          &v56,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/blossom/player_blossom_comp.cpp",
          "forceRefreshByGm",
          448);
        v12 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v56,
                (const char (*)[49])"[PlayerBlossomComp] refresh count is zero, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        goto LABEL_26;
      }
      v15 = std::map<unsigned int,std::vector<unsigned int>>::operator[](
              (std::map<unsigned int,std::vector<unsigned int>> *const)(v2 + 48),
              &excel_config->city_id);
      std::vector<unsigned int>::push_back(v15, refresh_id);
    }
LABEL_34:
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlossomRefreshExcelConfig>,false,false>::operator++(&__for_begin);
  }
  if ( std::map<unsigned int,std::vector<unsigned int>>::empty((const std::map<unsigned int,std::vector<unsigned int>> *const)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "forceRefreshByGm",
      457);
    v16 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
            &v56,
            (const char (*)[58])"[PlayerBlossomComp] city_refresh_id_map is empty(), uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
    common::milog::MiLogStream::~MiLogStream(&v56);
    v1 = 0;
  }
  else
  {
    std::map<unsigned int,std::vector<unsigned int>>::map((std::map<unsigned int,std::vector<unsigned int>> *const)(v2 + 128));
    __for_range_0 = (std::map<unsigned int,std::vector<unsigned int>> *)(v2 + 48);
    __for_begin_0._M_node = std::map<unsigned int,std::vector<unsigned int>>::begin((std::map<unsigned int,std::vector<unsigned int>> *const)(v2 + 48))._M_node;
    __for_end_0._M_node = std::map<unsigned int,std::vector<unsigned int>>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator*(&__for_begin_0);
      city_id = std::get<0ul,unsigned int const,std::vector<unsigned int>>(__in);
      refresh_id_vec = std::get<1ul,unsigned int const,std::vector<unsigned int>>(__in);
      M_current = std::vector<unsigned int>::end(refresh_id_vec)._M_current;
      v18._M_current = std::vector<unsigned int>::begin(refresh_id_vec)._M_current;
      std::sort<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
        v18,
        (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
      std::map<unsigned int,std::vector<unsigned int>>::map((std::map<unsigned int,std::vector<unsigned int>> *const)(v2 + 208));
      if ( *(_BYTE *)(((unsigned __int64)city_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)city_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)city_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(city_id);
      }
      if ( PlayerBlossomComp::genCircleCampIdMap(
             this,
             *city_id,
             refresh_id_vec,
             (std::map<unsigned int,std::vector<unsigned int>> *)(v2 + 208)) )
      {
        common::milog::MiLogStream::create(
          &v56,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/blossom/player_blossom_comp.cpp",
          "forceRefreshByGm",
          470);
        v19 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                &v56,
                (const char (*)[53])"[PlayerBlossomComp] genCircleCampIdMap failed, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
        common::milog::MiLogStream::~MiLogStream(&v56);
        v1 = -1;
        v20 = 0;
      }
      else
      {
        __for_range_1 = (std::map<unsigned int,std::vector<unsigned int>> *)(v2 + 208);
        __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlossomRefreshExcelConfig>,false>::__node_type *)std::map<unsigned int,std::vector<unsigned int>>::begin((std::map<unsigned int,std::vector<unsigned int>> *const)(v2 + 208))._M_node;
        __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlossomRefreshExcelConfig>,false>::__node_type *)std::map<unsigned int,std::vector<unsigned int>>::end(__for_range_1)._M_node;
        while ( 1 )
        {
          if ( !std::operator!=(
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)&__for_begin,
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)&__for_end) )
          {
            v20 = 1;
            goto LABEL_63;
          }
          v21 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)&__for_begin);
          std::pair<unsigned int const,std::vector<unsigned int>>::pair(&v55, v21);
          refresh_id_0 = std::get<0ul,unsigned int const,std::vector<unsigned int>>(&v55);
          circle_camp_id_vec = std::get<1ul,unsigned int const,std::vector<unsigned int>>(&v55);
          if ( std::vector<unsigned int>::empty(circle_camp_id_vec) )
          {
            common::milog::MiLogStream::create(
              &v56,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/blossom/player_blossom_comp.cpp",
              "forceRefreshByGm",
              478);
            v23 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                    &v56,
                    (const char (*)[55])"[PlayerBlossomComp] circle_camp_id_vec is empty, uid: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            val = Player::getUid(this->player_);
            v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
            v25 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v24,
                    (const char (*)[14])",refresh_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, refresh_id_0);
            common::milog::MiLogStream::~MiLogStream(&v56);
            v26 = 0;
          }
          else
          {
            v27 = std::map<unsigned int,std::vector<unsigned int>>::emplace<unsigned int const&,std::vector<unsigned int>&>(
                    (std::map<unsigned int,std::vector<unsigned int>> *const)(v2 + 128),
                    refresh_id_0,
                    circle_camp_id_vec,
                    refresh_id_0,
                    v22);
            if ( !v27.second )
            {
              common::milog::MiLogStream::create(
                &v56,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/blossom/player_blossom_comp.cpp",
                "forceRefreshByGm",
                483);
              v28 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                      &v56,
                      (const char (*)[49])"[PlayerBlossomComp] refresh_id duplicated, uid: ");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              val = Player::getUid(this->player_);
              v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &val);
              v30 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v29,
                      (const char (*)[14])",refresh_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, refresh_id_0);
              common::milog::MiLogStream::~MiLogStream(&v56);
              v1 = -1;
              v26 = 1;
            }
            else
            {
              v26 = 2;
            }
          }
          std::pair<unsigned int const,std::vector<unsigned int>>::~pair(&v55);
          if ( v26 )
          {
            if ( v26 != 2 )
              break;
          }
          std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)&__for_begin);
        }
        v20 = 0;
      }
LABEL_63:
      std::map<unsigned int,std::vector<unsigned int>>::~map((std::map<unsigned int,std::vector<unsigned int>> *const)(v2 + 208));
      if ( v20 != 1 )
        goto LABEL_79;
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator++(&__for_begin_0);
    }
    if ( PlayerBlossomComp::refreshCircleCamp(
           this,
           (const std::map<unsigned int,std::vector<unsigned int>> *)(v2 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "forceRefreshByGm",
        491);
      v31 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              &v56,
              (const char (*)[52])"[PlayerBlossomComp] refreshCircleCamp failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    else
    {
      PlayerBlossomComp::broadcastBlossomBriefInfo(this);
      __for_range_2 = (std::map<unsigned int,std::vector<unsigned int>> *)(v2 + 128);
      __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlossomRefreshExcelConfig>,false>::__node_type *)std::map<unsigned int,std::vector<unsigned int>>::begin((std::map<unsigned int,std::vector<unsigned int>> *const)(v2 + 128))._M_node;
      __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlossomRefreshExcelConfig>,false>::__node_type *)std::map<unsigned int,std::vector<unsigned int>>::end(__for_range_2)._M_node;
      while ( 1 )
      {
        if ( !std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)&__for_begin,
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)&__for_end) )
        {
          v1 = 0;
          goto LABEL_79;
        }
        v42 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)&__for_begin);
        refresh_id_1 = std::get<0ul,unsigned int const,std::vector<unsigned int>>(v42);
        _ = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::vector<unsigned int>>(v42);
        if ( *(_BYTE *)(((unsigned __int64)refresh_id_1 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)refresh_id_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)refresh_id_1 >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(refresh_id_1);
        }
        if ( PlayerBlossomComp::startBlossomGroup(this, *refresh_id_1) )
          break;
        std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)&__for_begin);
      }
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "forceRefreshByGm",
        503);
      v31 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              &v56,
              (const char (*)[52])"[PlayerBlossomComp] startBlossomGroup failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &val);
    common::milog::MiLogStream::~MiLogStream(&v56);
    v1 = -1;
LABEL_79:
    std::map<unsigned int,std::vector<unsigned int>>::~map((std::map<unsigned int,std::vector<unsigned int>> *const)(v2 + 128));
  }
  std::map<unsigned int,std::vector<unsigned int>>::~map((std::map<unsigned int,std::vector<unsigned int>> *const)(v2 + 48));
  result = v1;
  if ( v57 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
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
  return result;
};

// Line 512: range 00000000171D07F2-00000000171D0F74
__int64 __fastcall PlayerBlossomComp::refreshCircleCampByGm(
        PlayerBlossomComp *const this,
        uint32_t refresh_id,
        uint32_t circle_camp_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  __int64 result; // rax
  common::milog::MiLogStream *v9; // r14
  PlayerBasicComp *BasicComp; // rax
  uint32_t Level; // ecx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::allocator<unsigned int> __a; // [rsp+2Bh] [rbp-F5h] BYREF
  unsigned int val; // [rsp+2Ch] [rbp-F4h] BYREF
  const data::BlossomGroupsExcelConfig *groups_config_ptr; // [rsp+30h] [rbp-F0h]
  BlossomCircleCampInfo *circle_camp_info_ptr; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Config> v19; // [rsp+40h] [rbp-E0h] BYREF
  std::vector<unsigned int> circle_camp_id_vec; // [rsp+50h] [rbp-D0h] BYREF
  common::milog::MiLogStream v21; // [rsp+70h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+90h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 14 refresh_id:511 64 4 18 circle_camp_id:511";
  *(_QWORD *)(v3 + 16) = PlayerBlossomComp::refreshCircleCampByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = refresh_id;
  *(_DWORD *)(v3 + 64) = circle_camp_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
  groups_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomGroupsExcelConfig(
                        &v6->design_config.txt_config_mgr.blossom_config_mgr,
                        *(_DWORD *)(v3 + 64));
  std::shared_ptr<Config>::~shared_ptr(&v19);
  if ( groups_config_ptr )
  {
    circle_camp_info_ptr = PlayerBlossomComp::findBlossomCircleCampInfo(this, *(_DWORD *)(v3 + 64));
    if ( !circle_camp_info_ptr )
      goto LABEL_33;
    if ( *(_BYTE *)(((unsigned __int64)circle_camp_info_ptr >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)circle_camp_info_ptr >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(circle_camp_info_ptr);
    }
    if ( circle_camp_info_ptr->refresh_id == *(_DWORD *)(v3 + 48) )
    {
LABEL_33:
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      BasicComp = Player::getBasicComp(this->player_);
      Level = PlayerBasicComp::getLevel(BasicComp);
      if ( *(_BYTE *)(((unsigned __int64)&groups_config_ptr->limit_level >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&groups_config_ptr->limit_level >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&groups_config_ptr->limit_level);
      }
      if ( Level >= groups_config_ptr->limit_level )
      {
        if ( PlayerBlossomComp::checkGroupsCanRegister(this, *(_DWORD *)(v3 + 64)) )
        {
          PlayerBlossomComp::clearBlossomGroup(this, *(_DWORD *)(v3 + 48));
          std::map<unsigned int,BlossomRefreshInfo>::erase(
            &this->refresh_info_map_,
            (const std::map<unsigned int,BlossomRefreshInfo>::key_type *)(v3 + 48));
          val = *(_DWORD *)(v3 + 64);
          std::allocator<unsigned int>::allocator(&__a);
          std::vector<unsigned int>::vector(
            &circle_camp_id_vec,
            (std::initializer_list<unsigned int>)__PAIR128__(1LL, &val),
            &__a);
          PlayerBlossomComp::doRefreshCircleCamp(this, *(_DWORD *)(v3 + 48), &circle_camp_id_vec);
          std::vector<unsigned int>::~vector(&circle_camp_id_vec);
          std::allocator<unsigned int>::~allocator(&__a);
          PlayerBlossomComp::broadcastBlossomBriefInfo(this);
          PlayerBlossomComp::startBlossomGroup(this, *(_DWORD *)(v3 + 48));
          result = 0LL;
          goto LABEL_28;
        }
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/blossom/player_blossom_comp.cpp",
          "refreshCircleCampByGm",
          537);
        v9 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
               &v21,
               (const char (*)[51])"[PlayerBlossomComp] groups can not register, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/blossom/player_blossom_comp.cpp",
          "refreshCircleCampByGm",
          530);
        v9 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
               &v21,
               (const char (*)[39])"[PlayerBlossomComp] level limit, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "refreshCircleCampByGm",
        523);
      v9 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
             &v21,
             (const char (*)[49])"[PlayerBlossomComp] circle_camp_id in use, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    val = Player::getUid(this->player_);
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    v13 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v12, (const char (*)[19])" ,circle_camp_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v21);
    result = 0xFFFFFFFFLL;
    goto LABEL_28;
  }
  common::milog::MiLogStream::create(
    &v21,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/blossom/player_blossom_comp.cpp",
    "refreshCircleCampByGm",
    516);
  v7 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
         &v21,
         (const char (*)[63])"[PlayerBlossomComp] findBlossomGroupsExcelConfig failed, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
  common::milog::MiLogStream::~MiLogStream(&v21);
  result = 0xFFFFFFFFLL;
LABEL_28:
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
  return result;
};

// Line 553: range 00000000171D0F76-00000000171D196E
__int64 __fastcall PlayerBlossomComp::refreshCircleCampByOfflineMsg(
        PlayerBlossomComp *const this,
        uint32_t refresh_id,
        uint32_t circle_camp_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v9; // rbx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rbx
  common::milog::MiLogStream *v14; // r14
  PlayerBasicComp *BasicComp; // rax
  uint32_t Level; // ecx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::allocator<unsigned int> __a; // [rsp+23h] [rbp-FDh] BYREF
  unsigned int val; // [rsp+24h] [rbp-FCh] BYREF
  const data::BlossomRefreshExcelConfig *refresh_config_ptr; // [rsp+28h] [rbp-F8h]
  const data::BlossomGroupsExcelConfig *groups_config_ptr; // [rsp+30h] [rbp-F0h]
  BlossomCircleCampInfo *circle_camp_info_ptr; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Config> v25; // [rsp+40h] [rbp-E0h] BYREF
  std::vector<unsigned int> circle_camp_id_vec; // [rsp+50h] [rbp-D0h] BYREF
  common::milog::MiLogStream v27; // [rsp+70h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+90h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 14 refresh_id:552 64 4 18 circle_camp_id:552";
  *(_QWORD *)(v3 + 16) = PlayerBlossomComp::refreshCircleCampByOfflineMsg;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = refresh_id;
  *(_DWORD *)(v3 + 64) = circle_camp_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v25);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
  refresh_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomRefreshExcelConfig(
                         &v6->design_config.txt_config_mgr.blossom_config_mgr,
                         *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v25);
  if ( !refresh_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "refreshCircleCampByOfflineMsg",
      558);
    v7 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
           &v27,
           (const char (*)[70])"[PlayerBlossomComp] findBlossomRefreshExcelConfig failed, refresh_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = 0xFFFFFFFFLL;
    goto LABEL_36;
  }
  if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&refresh_config_ptr->id);
  }
  if ( !PlayerBlossomComp::checkRefreshCondVecIsMeet(
          this,
          refresh_config_ptr->id,
          &refresh_config_ptr->refresh_cond_vec) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "refreshCircleCampByOfflineMsg",
      564);
    v9 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           &v27,
           (const char (*)[57])"[PlayerBlossomComp] some refresh cond unavailable, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v10, (const char (*)[15])" ,refresh_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &refresh_config_ptr->id);
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v25);
    v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
    groups_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomGroupsExcelConfig(
                          &v12->design_config.txt_config_mgr.blossom_config_mgr,
                          *(_DWORD *)(v3 + 64));
    std::shared_ptr<Config>::~shared_ptr(&v25);
    if ( groups_config_ptr )
    {
      circle_camp_info_ptr = PlayerBlossomComp::findBlossomCircleCampInfo(this, *(_DWORD *)(v3 + 64));
      if ( !circle_camp_info_ptr )
        goto LABEL_41;
      if ( *(_BYTE *)(((unsigned __int64)circle_camp_info_ptr >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)circle_camp_info_ptr >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(circle_camp_info_ptr);
      }
      if ( circle_camp_info_ptr->refresh_id == *(_DWORD *)(v3 + 48) )
      {
LABEL_41:
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        BasicComp = Player::getBasicComp(this->player_);
        Level = PlayerBasicComp::getLevel(BasicComp);
        if ( *(_BYTE *)(((unsigned __int64)&groups_config_ptr->limit_level >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&groups_config_ptr->limit_level >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&groups_config_ptr->limit_level);
        }
        if ( Level >= groups_config_ptr->limit_level )
        {
          if ( PlayerBlossomComp::checkGroupsCanRegister(this, *(_DWORD *)(v3 + 64)) )
          {
            PlayerBlossomComp::clearBlossomGroup(this, *(_DWORD *)(v3 + 48));
            std::map<unsigned int,BlossomRefreshInfo>::erase(
              &this->refresh_info_map_,
              (const std::map<unsigned int,BlossomRefreshInfo>::key_type *)(v3 + 48));
            val = *(_DWORD *)(v3 + 64);
            std::allocator<unsigned int>::allocator(&__a);
            std::vector<unsigned int>::vector(
              &circle_camp_id_vec,
              (std::initializer_list<unsigned int>)__PAIR128__(1LL, &val),
              &__a);
            PlayerBlossomComp::doRefreshCircleCamp(this, *(_DWORD *)(v3 + 48), &circle_camp_id_vec);
            std::vector<unsigned int>::~vector(&circle_camp_id_vec);
            std::allocator<unsigned int>::~allocator(&__a);
            PlayerBlossomComp::broadcastBlossomBriefInfo(this);
            PlayerBlossomComp::startBlossomGroup(this, *(_DWORD *)(v3 + 48));
            result = 0LL;
            goto LABEL_36;
          }
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/blossom/player_blossom_comp.cpp",
            "refreshCircleCampByOfflineMsg",
            592);
          v14 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                  &v27,
                  (const char (*)[51])"[PlayerBlossomComp] groups can not register, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/blossom/player_blossom_comp.cpp",
            "refreshCircleCampByOfflineMsg",
            585);
          v14 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v27,
                  (const char (*)[39])"[PlayerBlossomComp] level limit, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/blossom/player_blossom_comp.cpp",
          "refreshCircleCampByOfflineMsg",
          578);
        v14 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v27,
                (const char (*)[49])"[PlayerBlossomComp] circle_camp_id in use, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
      }
      val = Player::getUid(this->player_);
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
      v18 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v17,
              (const char (*)[19])" ,circle_camp_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v27);
      result = 0xFFFFFFFFLL;
      goto LABEL_36;
    }
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "refreshCircleCampByOfflineMsg",
      571);
    v13 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
            &v27,
            (const char (*)[63])"[PlayerBlossomComp] findBlossomGroupsExcelConfig failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = 0xFFFFFFFFLL;
  }
LABEL_36:
  if ( v28 == (char *)v3 )
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

// Line 608: range 00000000171D1970-00000000171D2046
__int64 __fastcall PlayerBlossomComp::refreshAllAvailableCircleCampByGm(
        PlayerBlossomComp *const this,
        uint32_t refresh_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  char v10; // r14
  BlossomExcelConfigMgr *p_blossom_config_mgr; // rcx
  char v12; // r15
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  __int64 result; // rax
  unsigned int val; // [rsp+20h] [rbp-120h] BYREF
  data::BlossomRefreshType refresh_type; // [rsp+24h] [rbp-11Ch]
  std::unordered_map<unsigned int,data::BlossomGroupsExcelConfig>::const_iterator __for_begin; // [rsp+28h] [rbp-118h] BYREF
  std::unordered_map<unsigned int,data::BlossomGroupsExcelConfig>::const_iterator __for_end; // [rsp+30h] [rbp-110h] BYREF
  const data::BlossomRefreshExcelConfig *refresh_config_ptr; // [rsp+38h] [rbp-108h]
  const std::unordered_map<unsigned int,data::BlossomGroupsExcelConfig> *__for_range; // [rsp+40h] [rbp-100h]
  const std::pair<unsigned int const,data::BlossomGroupsExcelConfig> *v25; // [rsp+48h] [rbp-F8h]
  std::tuple_element<0,const std::pair<unsigned int const,data::BlossomGroupsExcelConfig> >::type *circle_camp_id; // [rsp+50h] [rbp-F0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BlossomGroupsExcelConfig> >::type *blossom_groups_excel_config; // [rsp+58h] [rbp-E8h]
  std::shared_ptr<Config> v28; // [rsp+60h] [rbp-E0h] BYREF
  common::milog::MiLogStream v29; // [rsp+70h] [rbp-D0h] BYREF
  char v30[176]; // [rsp+90h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 refresh_id:607 64 24 22 circle_camp_id_vec:620";
  *(_QWORD *)(v2 + 16) = PlayerBlossomComp::refreshAllAvailableCircleCampByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = refresh_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v28);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
  refresh_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomRefreshExcelConfig(
                         &v5->design_config.txt_config_mgr.blossom_config_mgr,
                         *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v28);
  if ( refresh_config_ptr )
  {
    PlayerBlossomComp::clearBlossomGroup(this, *(_DWORD *)(v2 + 48));
    std::map<unsigned int,BlossomRefreshInfo>::erase(
      &this->refresh_info_map_,
      (const std::map<unsigned int,BlossomRefreshInfo>::key_type *)(v2 + 48));
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->refresh_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->refresh_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&refresh_config_ptr->refresh_type);
    }
    refresh_type = refresh_config_ptr->refresh_type;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v28);
    __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28)->design_config.txt_config_mgr.blossom_config_mgr.blossom_groups_excel_config_map;
    std::shared_ptr<Config>::~shared_ptr(&v28);
    __for_begin._M_cur = std::unordered_map<unsigned int,data::BlossomGroupsExcelConfig>::begin(__for_range)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,data::BlossomGroupsExcelConfig>::end(__for_range)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,data::BlossomGroupsExcelConfig>,false>(
              &__for_begin,
              &__for_end) )
    {
      v25 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlossomGroupsExcelConfig>,false,false>::operator*(&__for_begin);
      circle_camp_id = std::get<0ul,unsigned int const,data::BlossomGroupsExcelConfig>(v25);
      blossom_groups_excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::BlossomGroupsExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BlossomGroupsExcelConfig>(v25);
      v10 = 0;
      if ( *(_BYTE *)(((unsigned __int64)circle_camp_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)circle_camp_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)circle_camp_id >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(circle_camp_id);
      }
      if ( PlayerBlossomComp::checkCircleCampIdInUse(this, *circle_camp_id) )
        goto LABEL_19;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v28);
      v10 = 1;
      p_blossom_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28)->design_config.txt_config_mgr.blossom_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)circle_camp_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)circle_camp_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)circle_camp_id >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(circle_camp_id);
      }
      if ( BlossomExcelConfigMgr::checkBlossomRefreshTypeIsMatch(p_blossom_config_mgr, *circle_camp_id, refresh_type) )
        v12 = 1;
      else
LABEL_19:
        v12 = 0;
      if ( v10 )
        std::shared_ptr<Config>::~shared_ptr(&v28);
      if ( v12 )
        std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 64), circle_camp_id);
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlossomGroupsExcelConfig>,false,false>::operator++(&__for_begin);
    }
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "refreshAllAvailableCircleCampByGm",
      631);
    v13 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
            &v29,
            (const char (*)[61])"[PlayerBlossomComp] refreshAllAvailableCircleCampByGm, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
    v15 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v14, (const char (*)[15])" ,refresh_id: ");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 48));
    v17 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            v16,
            (const char (*)[28])" ,circle_camp_id_vec size: ");
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlossomGroupsExcelConfig>,false>::__node_type *)std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 64));
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v17, (const unsigned __int64 *)&__for_end);
    common::milog::MiLogStream::~MiLogStream(&v29);
    PlayerBlossomComp::doRefreshCircleCamp(this, *(_DWORD *)(v2 + 48), (const std::vector<unsigned int> *)(v2 + 64));
    PlayerBlossomComp::broadcastBlossomBriefInfo(this);
    PlayerBlossomComp::startBlossomGroup(this, *(_DWORD *)(v2 + 48));
    v9 = 0;
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "refreshAllAvailableCircleCampByGm",
      612);
    v6 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
           &v29,
           (const char (*)[64])"[PlayerBlossomComp] findBlossomRefreshExcelConfig failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v7, (const char (*)[15])" ,refresh_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v29);
    v9 = -1;
  }
  result = v9;
  if ( v30 == (char *)v2 )
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

// Line 642: range 00000000171D2048-00000000171D3972
__int64 __fastcall PlayerBlossomComp::updateCircleCampByGm(PlayerBlossomComp *const this, uint32_t refresh_id)
{
  unsigned int updated; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  BlossomExcelConfigMgr *p_blossom_config_mgr; // rcx
  common::milog::MiLogStream *v14; // rbx
  std::vector<unsigned int>::const_reference v15; // rax
  _DWORD *v16; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  uint32_t v22; // eax
  common::milog::MiLogStream *v23; // r14
  __int64 v24; // rsi
  uint32_t finish_progress; // ecx
  char v26; // al
  __int64 v27; // rdx
  Group *v28; // rcx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rcx
  common::milog::MiLogStream *v34; // r15
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // r15
  Group *v41; // rax
  common::milog::MiLogStream *v42; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // r14
  int v46; // r15d
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // r14
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  char *v57; // rsi
  int32_t v58; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v59; // rdx
  char v60; // cl
  Group *v61; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+20h] [rbp-2C0h] BYREF
  std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator __for_begin; // [rsp+28h] [rbp-2B8h] BYREF
  const data::BlossomRefreshExcelConfig *refresh_config_ptr; // [rsp+30h] [rbp-2B0h]
  BlossomRefreshInfo *refresh_info; // [rsp+38h] [rbp-2A8h]
  BlossomCircleCampInfo *circle_camp_info; // [rsp+40h] [rbp-2A0h]
  const data::BlossomGroupsExcelConfig *groups_config_ptr; // [rsp+48h] [rbp-298h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+50h] [rbp-290h]
  const std::unordered_map<unsigned int,GadgetScriptConfig> *__for_range; // [rsp+58h] [rbp-288h]
  const std::pair<unsigned int const,GadgetScriptConfig> *v72; // [rsp+60h] [rbp-280h]
  std::tuple_element<0,const std::pair<unsigned int const,GadgetScriptConfig> >::type *config_id; // [rsp+68h] [rbp-278h]
  std::tuple_element<1,const std::pair<unsigned int const,GadgetScriptConfig> >::type *gadget_config; // [rsp+70h] [rbp-270h]
  std::tuple_element<0,std::pair<int,unsigned int> >::type *retcode; // [rsp+78h] [rbp-268h]
  std::tuple_element<1,std::pair<int,unsigned int> >::type *new_camp_id; // [rsp+80h] [rbp-260h]
  std::unordered_map<unsigned int,GadgetScriptConfig>::const_iterator __for_end; // [rsp+88h] [rbp-258h] BYREF
  common::milog::MiLogStream v78; // [rsp+90h] [rbp-250h] BYREF
  char v79[560]; // [rsp+B0h] [rbp-230h] BYREF

  v3 = (unsigned __int64)v79;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(512LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 32 4 12 group_id:679 48 4 12 scene_id:681 64 4 19 chest_config_id:747 80 4 14 refresh_id:641 "
                        "96 8 8 iter:656 128 16 13 scene_ptr:682 160 16 13 group_ptr:688 192 16 11 evt_ptr:765 224 28 15 "
                        "log_context:720 288 160 18 script_context:724";
  *(_QWORD *)(v3 + 16) = PlayerBlossomComp::updateCircleCampByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = 0x4000000;
  v5[536862728] = -218959118;
  v5[536862734] = -202116109;
  v5[536862735] = -202116109;
  *(_DWORD *)(v3 + 80) = refresh_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 192));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
  refresh_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomRefreshExcelConfig(
                         &v6->design_config.txt_config_mgr.blossom_config_mgr,
                         *(_DWORD *)(v3 + 80));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 192));
  if ( !refresh_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v78,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "updateCircleCampByGm",
      646);
    v7 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
           &v78,
           (const char (*)[64])"[PlayerBlossomComp] findBlossomRefreshExcelConfig failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_7:
    val = Player::getUid(this->player_);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v8, (const char (*)[15])" ,refresh_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream(&v78);
    updated = -1;
    goto LABEL_100;
  }
  if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->camp_update_need_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)refresh_config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->camp_update_need_count >> 3)
                                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&refresh_config_ptr->camp_update_need_count);
  }
  if ( !refresh_config_ptr->camp_update_need_count )
  {
    common::milog::MiLogStream::create(
      &v78,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "updateCircleCampByGm",
      652);
    v7 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
           &v78,
           (const char (*)[54])"[PlayerBlossomComp] can not update circle camp, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_7;
  }
  *(std::map<unsigned int,BlossomRefreshInfo>::iterator *)(v3 + 96) = std::map<unsigned int,BlossomRefreshInfo>::find(
                                                                        &this->refresh_info_map_,
                                                                        (const std::map<unsigned int,BlossomRefreshInfo>::key_type *)(v3 + 80));
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false>::__node_type *)std::map<unsigned int,BlossomRefreshInfo>::end(&this->refresh_info_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo> >::_Self *)(v3 + 96),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo> >::_Self *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v78,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "updateCircleCampByGm",
      659);
    v10 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
            &v78,
            (const char (*)[50])"[PlayerBlossomComp] find refresh_id failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_17:
    val = Player::getUid(this->player_);
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    v12 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v11, (const char (*)[15])" ,refresh_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream(&v78);
    updated = -1;
    goto LABEL_100;
  }
  refresh_info = &std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo> > *const)(v3 + 96))->second;
  if ( std::map<unsigned int,BlossomCircleCampInfo>::empty(&refresh_info->circle_camp_info_map) )
  {
    common::milog::MiLogStream::create(
      &v78,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "updateCircleCampByGm",
      666);
    v10 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
            &v78,
            (const char (*)[57])"[PlayerBlossomComp] circle_camp_info_map is empty, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_17;
  }
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false>::__node_type *)std::map<unsigned int,BlossomCircleCampInfo>::begin(&refresh_info->circle_camp_info_map)._M_node;
  circle_camp_info = &std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomCircleCampInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomCircleCampInfo> > *const)&__for_end)->second;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 192));
  p_blossom_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192))->design_config.txt_config_mgr.blossom_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info->circle_camp_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)circle_camp_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&circle_camp_info->circle_camp_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&circle_camp_info->circle_camp_id);
  }
  groups_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomGroupsExcelConfig(
                        p_blossom_config_mgr,
                        circle_camp_info->circle_camp_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 192));
  if ( groups_config_ptr )
  {
    v15 = std::vector<unsigned int>::operator[](&groups_config_ptr->new_group_vec, 0LL);
    v16 = v15;
    if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v15);
    }
    *(_DWORD *)(v3 + 32) = *v16;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 192));
    v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
    *(_DWORD *)(v3 + 48) = LuaConfigMgr::getSceneIdByGroupId(&v17->design_config.lua_config_mgr, *(_DWORD *)(v3 + 32));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 192));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    SceneComp = (unsigned int)Player::getSceneComp(this->player_);
    PlayerSceneComp::getPersonalScene((PlayerSceneComp *const)(v3 + 128), SceneComp);
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v78,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "updateCircleCampByGm",
        685);
      v19 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v78,
              (const char (*)[27])"[PlayerBlossomComp] scene:");
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 48));
      v21 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v20, (const char (*)[15])" failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
      common::milog::MiLogStream::~MiLogStream(&v78);
      updated = -1;
      goto LABEL_99;
    }
    v22 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    Scene::findGroup((Scene *const)(v3 + 160), v22);
    if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v3 + 160)) )
    {
      common::milog::MiLogStream::create(
        &v78,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "updateCircleCampByGm",
        691);
      v23 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              &v78,
              (const char (*)[45])"[PlayerBlossomComp] group_ptr is null, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
      common::milog::MiLogStream::~MiLogStream(&v78);
      updated = -1;
      goto LABEL_98;
    }
    v24 = (((_BYTE)groups_config_ptr + 124) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&groups_config_ptr->finish_progress >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)groups_config_ptr + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&groups_config_ptr->finish_progress >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&groups_config_ptr->finish_progress);
    }
    finish_progress = groups_config_ptr->finish_progress;
    v26 = *(_BYTE *)(((unsigned __int64)&circle_camp_info->progress >> 3) + 0x7FFF8000);
    if ( v26 != 0 && v26 <= 3 )
    {
      LOBYTE(v24) = v26 != 0;
      __asan_report_store4(&circle_camp_info->progress, v24, &circle_camp_info->progress);
    }
    circle_camp_info->progress = finish_progress;
    v27 = (*(_BYTE *)(((unsigned __int64)&circle_camp_info->state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)circle_camp_info + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&circle_camp_info->state >> 3) + 0x7FFF8000));
    if ( (_BYTE)v27 )
      __asan_report_store4(&circle_camp_info->state, (((_BYTE)circle_camp_info + 12) & 7u) + 3, v27);
    circle_camp_info->state = 3;
    if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->reward_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->reward_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&refresh_config_ptr->reward_type);
    }
    if ( refresh_config_ptr->reward_type != BLOSSOM_REWARD_TYPE_TO_BAG )
    {
      v49 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      group_script_config_ptr = Group::getScriptConfig(v49);
      if ( group_script_config_ptr )
      {
        *(_DWORD *)(v3 + 64) = 0;
        __for_range = &group_script_config_ptr->gadget_config_map;
        __for_begin._M_cur = std::unordered_map<unsigned int,GadgetScriptConfig>::begin(&group_script_config_ptr->gadget_config_map)._M_cur;
        __for_end._M_cur = std::unordered_map<unsigned int,GadgetScriptConfig>::end(&group_script_config_ptr->gadget_config_map)._M_cur;
        while ( std::__detail::operator!=<std::pair<unsigned int const,GadgetScriptConfig>,false>(
                  &__for_begin,
                  &__for_end) )
        {
          v72 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator*(&__for_begin);
          config_id = std::get<0ul,unsigned int const,GadgetScriptConfig>(v72);
          gadget_config = (std::tuple_element<1,const std::pair<unsigned int const,GadgetScriptConfig> >::type *)std::get<1ul,unsigned int const,GadgetScriptConfig>(v72);
          if ( *(_BYTE *)(((unsigned __int64)&gadget_config->is_blossom_chest >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)gadget_config - 68) & 7) >= *(_BYTE *)(((unsigned __int64)&gadget_config->is_blossom_chest >> 3)
                                                                       + 0x7FFF8000) )
          {
            __asan_report_load1(&gadget_config->is_blossom_chest);
          }
          if ( gadget_config->is_blossom_chest )
          {
            if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3)
                                                                          + 0x7FFF8000) )
            {
              __asan_report_load4(config_id);
            }
            *(_DWORD *)(v3 + 64) = *config_id;
            break;
          }
          std::__detail::_Node_const_iterator<std::pair<unsigned int const,GadgetScriptConfig>,false,false>::operator++(&__for_begin);
        }
        if ( *(_DWORD *)(v3 + 64) )
        {
          common::milog::MiLogStream::create(
            &v78,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/blossom/player_blossom_comp.cpp",
            "updateCircleCampByGm",
            763);
          v52 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  &v78,
                  (const char (*)[47])"[PlayerBlossomComp] updateCircleCampByGm uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, &val);
          v54 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v53, (const char (*)[13])" ,group_id: ");
          v55 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v54,
                  (const unsigned int *)(v3 + 32));
          v56 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  v55,
                  (const char (*)[20])" ,chest_config_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream(&v78);
          EventUtil::createEvent((data::EventType)(v3 + 192));
          v57 = (char *)(v3 + 192);
          if ( std::operator!=<Event>(0LL, (const std::shared_ptr<Event> *)(v3 + 192)) )
          {
            v58 = *(_DWORD *)(v3 + 64);
            v59 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
            v60 = *(_BYTE *)(((unsigned __int64)&v59->param1 >> 3) + 0x7FFF8000);
            if ( v60 != 0 && (char)((((_BYTE)v59 + 44) & 7) + 3) >= v60 )
            {
              LOBYTE(v57) = v60 != 0;
              __asan_report_store4(&v59->param1, v57, v59);
            }
            v59->param1 = v58;
            v61 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            Group::handleEvent(v61, (EventPtr *)(v3 + 192));
          }
          std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v3 + 192));
          goto LABEL_97;
        }
        common::milog::MiLogStream::create(
          &v78,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/blossom/player_blossom_comp.cpp",
          "updateCircleCampByGm",
          759);
        common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
          &v78,
          (const char (*)[51])"[PlayerBlossomComp] can not find blossom config id");
        common::milog::MiLogStream::~MiLogStream(&v78);
        updated = -1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v78,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/blossom/player_blossom_comp.cpp",
          "updateCircleCampByGm",
          743);
        v50 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v78,
                (const char (*)[30])"[PlayerBlossomComp] group_id:");
        v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v50,
                (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v51, (const char (*)[7])byte_2604E2A0);
        common::milog::MiLogStream::~MiLogStream(&v78);
        updated = -1;
      }
LABEL_98:
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 160));
LABEL_99:
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 128));
      goto LABEL_100;
    }
    v28 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info->valid_world_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&circle_camp_info->valid_world_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&circle_camp_info->valid_world_level);
    }
    if ( PlayerBlossomComp::tryGrantBagReward(this, *(_DWORD *)(v3 + 80), circle_camp_info->valid_world_level, v28) )
    {
      common::milog::MiLogStream::create(
        &v78,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "updateCircleCampByGm",
        704);
      v29 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v78,
              (const char (*)[38])" grant bag reward failed @refresh_id:");
      v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v3 + 80));
      v31 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v30, (const char (*)[15])", world_level:");
      v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v31,
              &circle_camp_info->valid_world_level);
      v33 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v32, (const char (*)[3])", ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v34 = operator<<(v33, this->player_);
      v35 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      operator<<(v34, v35);
      common::milog::MiLogStream::~MiLogStream(&v78);
    }
    if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info->circle_camp_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)circle_camp_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&circle_camp_info->circle_camp_id >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&circle_camp_info->circle_camp_id);
    }
    *(_DWORD *)(v3 + 64) = circle_camp_info->circle_camp_id;
    if ( PlayerBlossomComp::isNeedUpdateCircleCampId(this, circle_camp_info) )
    {
      __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GadgetScriptConfig>,false>::__node_type *)PlayerBlossomComp::findNextCircleCampId(this, circle_camp_info);
      retcode = std::get<0ul,int,unsigned int>((std::pair<int,unsigned int> *)&__for_end);
      new_camp_id = std::get<1ul,int,unsigned int>((std::pair<int,unsigned int> *)&__for_end);
      common::milog::MiLogStream::create(
        &v78,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "updateCircleCampByGm",
        711);
      v36 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v78, (const char (*)[11])" NEXT ret:");
      v37 = common::milog::MiLogStream::operator<<<int,(int *)0>(v36, retcode);
      v38 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v37, (const char (*)[14])" new_camp_id:");
      v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, new_camp_id);
      v40 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v39, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &val);
      common::milog::MiLogStream::~MiLogStream(&v78);
      if ( *(_BYTE *)(((unsigned __int64)retcode >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retcode >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(retcode);
      }
      if ( !*retcode )
      {
        if ( *(_BYTE *)(((unsigned __int64)new_camp_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)new_camp_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)new_camp_id >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(new_camp_id);
        }
        updated = PlayerBlossomComp::updateCircleCampId(this, *(_DWORD *)(v3 + 64), *new_camp_id, 0);
        goto LABEL_98;
      }
    }
    *(_DWORD *)(v3 + 224) = 3;
    *(_DWORD *)(v3 + 228) = 0;
    *(_DWORD *)(v3 + 232) = 0;
    *(_DWORD *)(v3 + 236) = 0;
    *(_DWORD *)(v3 + 240) = 0;
    *(_DWORD *)(v3 + 244) = 0;
    *(_DWORD *)(v3 + 248) = 0;
    ScriptContext::ScriptContext((ScriptContext *const)(v3 + 288));
    v41 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    if ( Group::refresh(v41, (const ScriptContext *)(v3 + 288), *(SuiteLogContext *)(v3 + 224), 1u, 1) )
    {
      common::milog::MiLogStream::create(
        &v78,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "updateCircleCampByGm",
        727);
      v42 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v78,
              (const char (*)[31])"[Blossom] RefreshGroup failed ");
      v43 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      v44 = operator<<(v42, v43);
      v45 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v44, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    else
    {
      if ( !PlayerBlossomComp::updateBlossomSchedule(this, *(_DWORD *)(v3 + 64)) )
      {
        v46 = 1;
LABEL_75:
        ScriptContext::~ScriptContext((ScriptContext *const)(v3 + 288));
        if ( v46 == 1 )
        {
LABEL_97:
          updated = 0;
          goto LABEL_98;
        }
        goto LABEL_98;
      }
      common::milog::MiLogStream::create(
        &v78,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "updateCircleCampByGm",
        734);
      v47 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
              &v78,
              (const char (*)[56])"[Blossom] updateBlossomSchedule failed, circle_camp_id:");
      v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, (const unsigned int *)(v3 + 64));
      v45 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v48, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, &val);
    common::milog::MiLogStream::~MiLogStream(&v78);
    updated = -1;
    v46 = 0;
    goto LABEL_75;
  }
  common::milog::MiLogStream::create(
    &v78,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/blossom/player_blossom_comp.cpp",
    "updateCircleCampByGm",
    674);
  v14 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
          &v78,
          (const char (*)[63])"[PlayerBlossomComp] findBlossomGroupsExcelConfig failed, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
  common::milog::MiLogStream::~MiLogStream(&v78);
  updated = -1;
LABEL_100:
  result = updated;
  if ( v79 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
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
  return result;
};

// Line 777: range 00000000171D3974-00000000171D399B
bool __cdecl PlayerBlossomComp::checkCircleCampIdInUse(PlayerBlossomComp *const this, uint32_t circle_camp_id)
{
  return PlayerBlossomComp::findBlossomCircleCampInfo(this, circle_camp_id) != 0LL;
};

// Line 782: range 00000000171D399C-00000000171D3DE8
bool __cdecl PlayerBlossomComp::checkGroupsCanRegister(PlayerBlossomComp *const this, uint32_t circle_camp_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool v6; // r14
  common::milog::MiLogStream *v7; // r14
  bool v8; // r14
  Scene *v9; // rax
  SceneBlockGroupComp *BlockGroupComp; // rax
  unsigned __int64 v11; // rdx
  bool result; // al
  unsigned int val; // [rsp+1Ch] [rbp-154h] BYREF
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::iterator __for_begin; // [rsp+20h] [rbp-150h] BYREF
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::iterator __for_end; // [rsp+28h] [rbp-148h] BYREF
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *__for_range; // [rsp+30h] [rbp-140h]
  std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > *__in; // [rsp+38h] [rbp-138h]
  std::tuple_element<0,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *scene_ptr; // [rsp+40h] [rbp-130h]
  std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *group_vec; // [rsp+48h] [rbp-128h]
  std::shared_ptr<Config> v20; // [rsp+50h] [rbp-120h] BYREF
  common::milog::MiLogStream v21; // [rsp+60h] [rbp-110h] BYREF
  char v22[240]; // [rsp+80h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 24 20 all_group_id_vec:783 112 48 19 scene_group_map:790";
  *(_QWORD *)(v2 + 16) = PlayerBlossomComp::checkGroupsCanRegister;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218959360;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 48));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
  v6 = BlossomExcelConfigMgr::getBlossomAllGroupIdVec(
         &v5->design_config.txt_config_mgr.blossom_config_mgr,
         circle_camp_id,
         (std::vector<unsigned int> *)(v2 + 48)) != 0;
  std::shared_ptr<Config>::~shared_ptr(&v20);
  if ( v6 )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "checkGroupsCanRegister",
      786);
    v7 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
           &v21,
           (const char (*)[58])"[PlayerBlossomComp] getBlossomAllGroupIdVec failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 0;
  }
  else
  {
    std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 112));
    PlayerBlossomComp::getGroupSceneMap(
      this,
      (const std::vector<unsigned int> *)(v2 + 48),
      (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v2 + 112));
    __for_range = (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v2 + 112);
    __for_begin._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::begin((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 112))._M_node;
    __for_end._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::end((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 112))._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator*(&__for_begin);
      scene_ptr = std::get<0ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(__in);
      group_vec = std::get<1ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(__in);
      if ( !std::operator==<Scene>(0LL, scene_ptr) )
      {
        v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
        BlockGroupComp = Scene::getBlockGroupComp(v9);
        if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
          __asan_report_load8(BlockGroupComp);
        v11 = (unsigned __int64)(BlockGroupComp->_vptr_SceneCompBase + 15);
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
          __asan_report_load8(BlockGroupComp->_vptr_SceneCompBase + 15);
        if ( (*(unsigned __int8 (__fastcall **)(SceneBlockGroupComp *, std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *))v11)(
               BlockGroupComp,
               group_vec) != 1 )
        {
          v8 = 0;
          goto LABEL_19;
        }
      }
      std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator++(&__for_begin);
    }
    v8 = 1;
LABEL_19:
    std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::~map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 112));
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 48));
  result = v8;
  if ( v22 == (char *)v2 )
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

// Line 808: range 00000000171D3DEA-00000000171D3F47
BlossomCircleCampInfo *__cdecl PlayerBlossomComp::findBlossomCircleCampInfoByGroupId(
        PlayerBlossomComp *const this,
        uint32_t group_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool v6; // r14
  BlossomCircleCampInfo *result; // rax
  std::shared_ptr<Config> v8; // [rsp+10h] [rbp-80h] BYREF
  char v9[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 18 circle_camp_id:809";
  *(_QWORD *)(v2 + 16) = PlayerBlossomComp::findBlossomCircleCampInfoByGroupId;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v8);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8);
  v6 = BlossomExcelConfigMgr::getCircleCampIdByGroupId(
         &v5->design_config.txt_config_mgr.blossom_config_mgr,
         group_id,
         (uint32_t *)(v2 + 32)) != 0;
  std::shared_ptr<Config>::~shared_ptr(&v8);
  if ( v6 )
    result = 0LL;
  else
    result = PlayerBlossomComp::findBlossomCircleCampInfo(this, *(_DWORD *)(v2 + 32));
  if ( v9 == (char *)v2 )
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

// Line 819: range 00000000171D3F48-00000000171D414E
BlossomCircleCampInfo *__fastcall PlayerBlossomComp::findBlossomCircleCampInfo(
        PlayerBlossomComp *const this,
        uint32_t circle_camp_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  BlossomCircleCampInfo *result; // rax
  std::map<unsigned int,BlossomRefreshInfo>::iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::map<unsigned int,BlossomRefreshInfo>::iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomCircleCampInfo> >::_Self __y; // [rsp+28h] [rbp-A8h] BYREF
  std::map<unsigned int,BlossomRefreshInfo> *__for_range; // [rsp+30h] [rbp-A0h]
  std::pair<unsigned int const,BlossomRefreshInfo> *__in; // [rsp+38h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,BlossomRefreshInfo> >::type *_; // [rsp+40h] [rbp-90h]
  std::tuple_element<1,std::pair<unsigned int const,BlossomRefreshInfo> >::type *refresh_info; // [rsp+48h] [rbp-88h]
  char v13[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 18 circle_camp_id:818 64 8 8 iter:822";
  *(_QWORD *)(v2 + 16) = PlayerBlossomComp::findBlossomCircleCampInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = circle_camp_id;
  __for_range = &this->refresh_info_map_;
  __for_begin._M_node = std::map<unsigned int,BlossomRefreshInfo>::begin(&this->refresh_info_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,BlossomRefreshInfo>::end(&this->refresh_info_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,BlossomRefreshInfo>(__in);
    refresh_info = std::get<1ul,unsigned int const,BlossomRefreshInfo>(__in);
    *(std::map<unsigned int,BlossomCircleCampInfo>::iterator *)(v2 + 64) = std::map<unsigned int,BlossomCircleCampInfo>::find(
                                                                             &refresh_info->circle_camp_info_map,
                                                                             (const std::map<unsigned int,BlossomCircleCampInfo>::key_type *)(v2 + 48));
    __y._M_node = std::map<unsigned int,BlossomCircleCampInfo>::end(&refresh_info->circle_camp_info_map)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomCircleCampInfo> >::_Self *)(v2 + 64),
           &__y) )
    {
      result = &std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomCircleCampInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomCircleCampInfo> > *const)(v2 + 64))->second;
      goto LABEL_10;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo>>::operator++(&__for_begin);
  }
  result = 0LL;
LABEL_10:
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

// Line 833: range 00000000171D4150-00000000171D4623
int32_t __cdecl PlayerBlossomComp::checkAndNotifyBlossomScheduleInfo(
        PlayerBlossomComp *const this,
        GroupPtr *p_group_ptr,
        PlayerPtr *p_player_ptr)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // rbx
  common::milog::MiLogStream *v6; // r12
  int32_t v7; // r14d
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t GroupId; // edx
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<proto::WorldOwnerBlossomScheduleInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  proto::BlossomScheduleInfo *v12; // rax
  Player *v13; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-10Ch] BYREF
  BlossomCircleCampInfo *circle_camp_info_ptr; // [rsp+28h] [rbp-108h]
  std::shared_ptr<proto::WorldOwnerBlossomScheduleInfoNotify> __r; // [rsp+30h] [rbp-100h] BYREF
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
  *(_QWORD *)(v3 + 8) = "2 48 16 14 notify_ptr:861 80 48 17 schedule_info:854";
  *(_QWORD *)(v3 + 16) = PlayerBlossomComp::checkAndNotifyBlossomScheduleInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862724] = -202116109;
  if ( std::operator==<Group>(0LL, p_group_ptr) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "checkAndNotifyBlossomScheduleInfo",
      836);
    v6 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v19,
           (const char (*)[45])"[PlayerBlossomComp] group_ptr is null, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v7 = -1;
  }
  else if ( std::operator==<Player>(0LL, p_player_ptr) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "checkAndNotifyBlossomScheduleInfo",
      842);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v19,
      (const char (*)[39])"[PlayerBlossomComp] player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v19);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
    GroupId = Group::getGroupId(v8);
    circle_camp_info_ptr = PlayerBlossomComp::findBlossomCircleCampInfoByGroupId(this, GroupId);
    if ( circle_camp_info_ptr )
    {
      proto::BlossomScheduleInfo::BlossomScheduleInfo((proto::BlossomScheduleInfo *const)(v3 + 80));
      if ( PlayerBlossomComp::fillBlossomScheduleInfo(
             this,
             circle_camp_info_ptr,
             (proto::BlossomScheduleInfo *)(v3 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/blossom/player_blossom_comp.cpp",
          "checkAndNotifyBlossomScheduleInfo",
          857);
        v10 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                &v19,
                (const char (*)[58])"[PlayerBlossomComp] fillBlossomScheduleInfo failed, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
        common::milog::MiLogStream::~MiLogStream(&v19);
        v7 = -1;
      }
      else
      {
        common::tools::perf::make_shared<proto::WorldOwnerBlossomScheduleInfoNotify>();
        v11 = std::__shared_ptr_access<proto::WorldOwnerBlossomScheduleInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::WorldOwnerBlossomScheduleInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
        v12 = proto::WorldOwnerBlossomScheduleInfoNotify::mutable_schedule_info(v11);
        proto::BlossomScheduleInfo::CopyFrom(v12, (const proto::BlossomScheduleInfo *)(v3 + 80));
        v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
        std::dynamic_pointer_cast<google::protobuf::Message const,proto::WorldOwnerBlossomScheduleInfoNotify>(&__r);
        Player::sendMessage(v13, (common::minet::ConstMessagePtr *)&__r, 0LL);
        std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
        v7 = 0;
        std::shared_ptr<proto::WorldOwnerBlossomScheduleInfoNotify>::~shared_ptr((std::shared_ptr<proto::WorldOwnerBlossomScheduleInfoNotify> *const)(v3 + 48));
      }
      proto::BlossomScheduleInfo::~BlossomScheduleInfo((proto::BlossomScheduleInfo *const)(v3 + 80));
    }
    else
    {
      v7 = 0;
    }
  }
  result = v7;
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
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

// Line 869: range 00000000171D4624-00000000171D488A
int32_t __cdecl PlayerBlossomComp::fillBlossomBriefInfoList(
        PlayerBlossomComp *const this,
        google::protobuf::RepeatedPtrField<proto::BlossomBriefInfo> *proto_info_list)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+14h] [rbp-9Ch] BYREF
  std::map<unsigned int,BlossomRefreshInfo>::iterator __for_begin; // [rsp+18h] [rbp-98h] BYREF
  std::map<unsigned int,BlossomRefreshInfo>::iterator __for_end; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,BlossomCircleCampInfo>::const_iterator __for_begin_0; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,BlossomCircleCampInfo>::const_iterator __for_end_0; // [rsp+30h] [rbp-80h] BYREF
  std::map<unsigned int,BlossomRefreshInfo> *__for_range; // [rsp+38h] [rbp-78h]
  const std::pair<unsigned int const,BlossomRefreshInfo> *v10; // [rsp+40h] [rbp-70h]
  std::tuple_element<0,const std::pair<unsigned int const,BlossomRefreshInfo> >::type *_; // [rsp+48h] [rbp-68h]
  std::tuple_element<1,const std::pair<unsigned int const,BlossomRefreshInfo> >::type *refresh_info; // [rsp+50h] [rbp-60h]
  const std::map<unsigned int,BlossomCircleCampInfo> *__for_range_0; // [rsp+58h] [rbp-58h]
  const std::pair<unsigned int const,BlossomCircleCampInfo> *v14; // [rsp+60h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,BlossomCircleCampInfo> >::type *__0; // [rsp+68h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,BlossomCircleCampInfo> >::type *circle_camp_info; // [rsp+70h] [rbp-40h]
  proto::BlossomBriefInfo *proto_info; // [rsp+78h] [rbp-38h]
  common::milog::MiLogStream v18; // [rsp+80h] [rbp-30h] BYREF

  __for_range = &this->refresh_info_map_;
  __for_begin._M_node = std::map<unsigned int,BlossomRefreshInfo>::begin(&this->refresh_info_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,BlossomRefreshInfo>::end(&this->refresh_info_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,BlossomRefreshInfo>(v10);
    refresh_info = (std::tuple_element<1,const std::pair<unsigned int const,BlossomRefreshInfo> >::type *)std::get<1ul,unsigned int const,BlossomRefreshInfo>(v10);
    __for_range_0 = &refresh_info->circle_camp_info_map;
    __for_begin_0._M_node = std::map<unsigned int,BlossomCircleCampInfo>::begin(&refresh_info->circle_camp_info_map)._M_node;
    __for_end_0._M_node = std::map<unsigned int,BlossomCircleCampInfo>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v14 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,BlossomCircleCampInfo>>::operator*(&__for_begin_0);
      __0 = std::get<0ul,unsigned int const,BlossomCircleCampInfo>(v14);
      circle_camp_info = (std::tuple_element<1,const std::pair<unsigned int const,BlossomCircleCampInfo> >::type *)std::get<1ul,unsigned int const,BlossomCircleCampInfo>(v14);
      proto_info = google::protobuf::RepeatedPtrField<proto::BlossomBriefInfo>::Add(proto_info_list);
      if ( PlayerBlossomComp::fillBlossomBriefInfo(this, circle_camp_info, proto_info) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/blossom/player_blossom_comp.cpp",
          "fillBlossomBriefInfoList",
          877);
        v2 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
               &v18,
               (const char (*)[55])"[PlayerBlossomComp] fillBlossomBriefInfo failed, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
        common::milog::MiLogStream::~MiLogStream(&v18);
        google::protobuf::RepeatedPtrField<proto::BlossomBriefInfo>::RemoveLast(proto_info_list);
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,BlossomCircleCampInfo>>::operator++(&__for_begin_0);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 888: range 00000000171D488C-00000000171D4C56
__int64 __fastcall PlayerBlossomComp::updateBlossomSchedule(PlayerBlossomComp *const this, uint32_t circle_camp_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  unsigned int val; // [rsp+1Ch] [rbp-A4h] BYREF
  BlossomCircleCampInfo *circle_camp_info_ptr; // [rsp+20h] [rbp-A0h]
  BlossomCircleCampInfo *circle_camp_info; // [rsp+28h] [rbp-98h]
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-90h] BYREF
  char v18[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 18 circle_camp_id:887";
  *(_QWORD *)(v2 + 16) = PlayerBlossomComp::updateBlossomSchedule;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = circle_camp_id;
  common::milog::MiLogStream::create(
    &v17,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/blossom/player_blossom_comp.cpp",
    "updateBlossomSchedule",
    889);
  v5 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
         &v17,
         (const char (*)[49])"[PlayerBlossomComp] updateBlossomSchedule, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
  v7 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v6, (const char (*)[19])" ,circle_camp_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v17);
  circle_camp_info_ptr = PlayerBlossomComp::findBlossomCircleCampInfo(this, *(_DWORD *)(v2 + 32));
  if ( circle_camp_info_ptr )
  {
    circle_camp_info = circle_camp_info_ptr;
    if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info_ptr->round >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&circle_camp_info_ptr->round >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&circle_camp_info_ptr->round);
    }
    ++circle_camp_info->round;
    v12 = (((_BYTE)circle_camp_info + 12) & 7u) + 3;
    v13 = (*(_BYTE *)(((unsigned __int64)&circle_camp_info->state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)circle_camp_info + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&circle_camp_info->state >> 3) + 0x7FFF8000));
    if ( (_BYTE)v13 )
      __asan_report_store4(&circle_camp_info->state, v12, v13);
    circle_camp_info->state = 0;
    if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info->progress >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&circle_camp_info->progress >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&circle_camp_info->progress, v12, &circle_camp_info->progress);
    }
    circle_camp_info->progress = 0;
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "updateBlossomSchedule",
      893);
    v8 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
           &v17,
           (const char (*)[60])"[PlayerBlossomComp] findBlossomCircleCampInfo failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    v10 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v9, (const char (*)[19])" ,circle_camp_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = 0xFFFFFFFFLL;
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

// Line 906: range 00000000171D4C58-00000000171D4EF7
bool __cdecl PlayerBlossomComp::isNeedUpdateCircleCampId(
        PlayerBlossomComp *const this,
        const BlossomCircleCampInfo *circle_camp_info)
{
  BlossomExcelConfigMgr *p_blossom_config_mgr; // rcx
  common::milog::MiLogStream *v3; // rbx
  char v5; // al
  unsigned int val; // [rsp+10h] [rbp-50h] BYREF
  uint32_t camp_update_need_count; // [rsp+14h] [rbp-4Ch]
  const data::BlossomRefreshExcelConfig *refresh_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v9; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  p_blossom_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9)->design_config.txt_config_mgr.blossom_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)circle_camp_info >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)circle_camp_info >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(circle_camp_info);
  }
  refresh_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomRefreshExcelConfig(
                         p_blossom_config_mgr,
                         circle_camp_info->refresh_id);
  std::shared_ptr<Config>::~shared_ptr(&v9);
  if ( refresh_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->camp_update_need_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)refresh_config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->camp_update_need_count >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&refresh_config_ptr->camp_update_need_count);
    }
    camp_update_need_count = refresh_config_ptr->camp_update_need_count;
    if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info->round >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&circle_camp_info->round >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&circle_camp_info->round);
    }
    if ( !circle_camp_info->round
      || !camp_update_need_count
      || circle_camp_info->round % camp_update_need_count
      || std::set<unsigned int>::count(&circle_camp_info->update_round_set, &circle_camp_info->round) )
    {
      goto LABEL_18;
    }
    if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info->state >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)circle_camp_info + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&circle_camp_info->state >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&circle_camp_info->state);
    }
    if ( circle_camp_info->state )
      v5 = 0;
    else
LABEL_18:
      v5 = 1;
    return v5 == 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "isNeedUpdateCircleCampId",
      910);
    v3 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
           &v10,
           (const char (*)[64])"[PlayerBlossomComp] findBlossomRefreshExcelConfig failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v10);
    return 0;
  }
};

// Line 928: range 00000000171D4EF8-00000000171D514D
std::pair<int,unsigned int> __fastcall PlayerBlossomComp::findNextCircleCampId(
        PlayerBlossomComp *const this,
        uint32_t circle_camp_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::pair<int,unsigned int> result; // rax
  int __x; // [rsp+10h] [rbp-B0h] BYREF
  unsigned int val; // [rsp+14h] [rbp-ACh] BYREF
  BlossomCircleCampInfo *circle_camp_info_ptr; // [rsp+18h] [rbp-A8h]
  std::pair<int,int> __p; // [rsp+20h] [rbp-A0h] BYREF
  std::pair<int,unsigned int> v13; // [rsp+28h] [rbp-98h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-90h] BYREF
  char v15[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 18 circle_camp_id:927";
  *(_QWORD *)(v2 + 16) = PlayerBlossomComp::findNextCircleCampId;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = circle_camp_id;
  circle_camp_info_ptr = PlayerBlossomComp::findBlossomCircleCampInfo(this, *(_DWORD *)(v2 + 32));
  if ( circle_camp_info_ptr )
  {
    result = PlayerBlossomComp::findNextCircleCampId(this, circle_camp_info_ptr);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "findNextCircleCampId",
      932);
    v5 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
           &v14,
           (const char (*)[60])"[PlayerBlossomComp] findBlossomCircleCampInfo failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    v7 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v6, (const char (*)[19])" ,circle_camp_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v14);
    val = 0;
    __x = -1;
    __p = std::make_pair<int,int>(&__x, (int *)&val);
    std::pair<int,unsigned int>::pair<int,int,true>(&v13, &__p);
    result = v13;
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

// Line 939: range 00000000171D53E0-00000000171D62D9
std::pair<int,unsigned int> __cdecl PlayerBlossomComp::findNextCircleCampId(
        PlayerBlossomComp *const this,
        const BlossomCircleCampInfo *circle_camp_info)
{
  unsigned int *M_current; // r14
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::queue<unsigned int>::reference v9; // rax
  uint32_t *v10; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  unsigned int *v12; // r15
  std::vector<unsigned int>::iterator v13; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v14; // rax
  _DWORD *v15; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  bool v17; // r15
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  int v21; // r15d
  unsigned int *v22; // r15
  std::vector<unsigned int>::iterator v23; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v24; // rax
  _DWORD *v25; // rdx
  common::milog::MiLogStream *v26; // r14
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r14
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  std::pair<int,unsigned int> v36; // rax
  std::mt19937 *__g; // [rsp+8h] [rbp-258h]
  int __x; // [rsp+20h] [rbp-240h] BYREF
  uint32_t refresh_id; // [rsp+24h] [rbp-23Ch]
  data::BlossomRefreshType refresh_type; // [rsp+28h] [rbp-238h]
  uint32_t circle_camp_id; // [rsp+2Ch] [rbp-234h]
  const data::BlossomRefreshExcelConfig *refresh_config_ptr; // [rsp+30h] [rbp-230h]
  const data::BlossomGroupsExcelConfig *old_groups_config_ptr; // [rsp+38h] [rbp-228h]
  const data::BlossomGroupsExcelConfig *groups_config_ptr; // [rsp+40h] [rbp-220h]
  std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-218h]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+50h] [rbp-210h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+58h] [rbp-208h] BYREF
  std::shared_ptr<Config> v48; // [rsp+60h] [rbp-200h] BYREF
  common::milog::MiLogStream v49; // [rsp+70h] [rbp-1F0h] BYREF
  char v50[464]; // [rsp+90h] [rbp-1D0h] BYREF
  PlayerBlossomComp::findNextCircleCampId::<lambda(uint32_t)> v52; // 0:edx.4,8:rcx.8

  v3 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 4 15 old_camp_id:949 48 4 15 new_camp_id:979 64 4 19 old_section_id:1016 80 4 16 next_camp_"
                        "id:990 96 8 14 safe_iter:1024 128 16 14 check_func:957 160 24 21 safe_camp_id_vec:1017 224 48 15"
                        " visited_set:977 304 80 7 que:975";
  *(_QWORD *)(v3 + 16) = PlayerBlossomComp::findNextCircleCampId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862725] = -234881024;
  v5[536862726] = -218959118;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862732] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)circle_camp_info >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)circle_camp_info >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(circle_camp_info);
  }
  refresh_id = circle_camp_info->refresh_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v48);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v48);
  refresh_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomRefreshExcelConfig(
                         &v6->design_config.txt_config_mgr.blossom_config_mgr,
                         refresh_id);
  std::shared_ptr<Config>::~shared_ptr(&v48);
  if ( !refresh_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v49,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "findNextCircleCampId",
      944);
    v7 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
           &v49,
           (const char (*)[64])"[PlayerBlossomComp] findBlossomRefreshExcelConfig failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_9:
    *(_DWORD *)(v3 + 80) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream(&v49);
    *(_DWORD *)(v3 + 80) = 0;
    __x = -1;
    __for_begin._M_current = (unsigned int *)std::make_pair<int,int>(&__x, (int *)(v3 + 80));
    std::pair<int,unsigned int>::pair<int,int,true>(
      (std::pair<int,unsigned int> *const)&__for_end,
      (std::pair<int,int> *)&__for_begin);
    M_current = __for_end._M_current;
    goto LABEL_56;
  }
  if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->refresh_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->refresh_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&refresh_config_ptr->refresh_type);
  }
  refresh_type = refresh_config_ptr->refresh_type;
  if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info->circle_camp_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)circle_camp_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&circle_camp_info->circle_camp_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&circle_camp_info->circle_camp_id);
  }
  *(_DWORD *)(v3 + 32) = circle_camp_info->circle_camp_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v48);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v48);
  old_groups_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomGroupsExcelConfig(
                            &v8->design_config.txt_config_mgr.blossom_config_mgr,
                            *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v48);
  if ( !old_groups_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v49,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "findNextCircleCampId",
      953);
    v7 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
           &v49,
           (const char (*)[63])"[PlayerBlossomComp] findBlossomGroupsExcelConfig failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_9;
  }
  *(_DWORD *)(v3 + 128) = refresh_type;
  *(_QWORD *)(v3 + 136) = this;
  std::queue<unsigned int>::queue<std::deque<unsigned int>,void>((std::queue<unsigned int> *const)(v3 + 304));
  std::queue<unsigned int>::push(
    (std::queue<unsigned int> *const)(v3 + 304),
    (const std::queue<unsigned int>::value_type *)(v3 + 32));
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 224));
  std::set<unsigned int>::insert(
    (std::set<unsigned int> *const)(v3 + 224),
    (const std::set<unsigned int>::value_type *)(v3 + 32));
  *(_DWORD *)(v3 + 48) = 0;
  do
  {
    if ( std::queue<unsigned int>::empty((const std::queue<unsigned int> *const)(v3 + 304)) )
      break;
    v9 = std::queue<unsigned int>::front((std::queue<unsigned int> *const)(v3 + 304));
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    circle_camp_id = *v10;
    std::queue<unsigned int>::pop((std::queue<unsigned int> *const)(v3 + 304));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v48);
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v48);
    groups_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomGroupsExcelConfig(
                          &v11->design_config.txt_config_mgr.blossom_config_mgr,
                          circle_camp_id);
    std::shared_ptr<Config>::~shared_ptr(&v48);
    if ( groups_config_ptr )
    {
      std::vector<unsigned int>::vector(
        (std::vector<unsigned int> *const)(v3 + 160),
        &groups_config_ptr->next_camp_id_vec);
      __g = common::tools::RandomUtils::getRandGenerator();
      v12 = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 160))._M_current;
      v13._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 160))._M_current;
      std::shuffle<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul> &>(
        v13,
        (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v12,
        __g);
      __for_range = (std::vector<unsigned int> *)(v3 + 160);
      __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 160))._M_current;
      __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 160))._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v14 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
        v15 = v14;
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v14);
        }
        *(_DWORD *)(v3 + 80) = *v15;
        if ( std::set<unsigned int>::count(
               (const std::set<unsigned int> *const)(v3 + 224),
               (const std::set<unsigned int>::key_type *)(v3 + 80)) != 1 )
        {
          if ( PlayerBlossomComp::findNextCircleCampId(BlossomCircleCampInfo const&)::{lambda(unsigned int)#1}::operator()(
                 (const PlayerBlossomComp::findNextCircleCampId::<lambda(uint32_t)> *const)(v3 + 128),
                 *(_DWORD *)(v3 + 80)) )
          {
            *(_DWORD *)(v3 + 48) = *(_DWORD *)(v3 + 80);
            break;
          }
          std::set<unsigned int>::insert(
            (std::set<unsigned int> *const)(v3 + 224),
            (const std::set<unsigned int>::value_type *)(v3 + 80));
          std::queue<unsigned int>::push(
            (std::queue<unsigned int> *const)(v3 + 304),
            (const std::queue<unsigned int>::value_type *)(v3 + 80));
        }
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 160));
    }
  }
  while ( !*(_DWORD *)(v3 + 48) );
  if ( *(_DWORD *)(v3 + 48) )
    goto LABEL_48;
  if ( *(_BYTE *)(((unsigned __int64)&old_groups_config_ptr->section_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&old_groups_config_ptr->section_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&old_groups_config_ptr->section_id);
  }
  *(_DWORD *)(v3 + 64) = old_groups_config_ptr->section_id;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 160));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v48);
  v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v48);
  v17 = BlossomExcelConfigMgr::getBlossomSafeCircleCampIdVec(
          &v16->design_config.txt_config_mgr.blossom_config_mgr,
          *(_DWORD *)(v3 + 64),
          (std::vector<unsigned int> *)(v3 + 160)) != 0;
  std::shared_ptr<Config>::~shared_ptr(&v48);
  if ( v17 )
  {
    common::milog::MiLogStream::create(
      &v49,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "findNextCircleCampId",
      1020);
    v18 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
            &v49,
            (const char (*)[64])"[PlayerBlossomComp] getBlossomSafeCircleCampIdVec failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v3 + 80) = Player::getUid(this->player_);
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 80));
    v20 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v19, (const char (*)[15])" ,section_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v49);
    *(_DWORD *)(v3 + 80) = 0;
    __x = -1;
    __for_begin._M_current = (unsigned int *)std::make_pair<int,int>(&__x, (int *)(v3 + 80));
    std::pair<int,unsigned int>::pair<int,int,true>(
      (std::pair<int,unsigned int> *const)&__for_end,
      (std::pair<int,int> *)&__for_begin);
    M_current = __for_end._M_current;
    v21 = 0;
  }
  else
  {
    v22 = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 160))._M_current;
    v23._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 160))._M_current;
    v52.__refresh_type = *(_DWORD *)(v3 + 128);
    v52.__this = *(PlayerBlossomComp **)(v3 + 136);
    *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 96) = std::find_if<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,PlayerBlossomComp::findNextCircleCampId(BlossomCircleCampInfo const&)::{lambda(unsigned int)#1}>(
                                                                                             v23,
                                                                                             (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v22,
                                                                                             v52);
    __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 160))._M_current;
    if ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
           (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 96),
           &__for_end) )
    {
      v24 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 96));
      v25 = v24;
      if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v24);
      }
      *(_DWORD *)(v3 + 48) = *v25;
    }
    v21 = 1;
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 160));
  if ( v21 == 1 )
  {
LABEL_48:
    if ( *(_DWORD *)(v3 + 48) && *(_DWORD *)(v3 + 32) != *(_DWORD *)(v3 + 48) )
    {
      common::milog::MiLogStream::create(
        &v49,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "findNextCircleCampId",
        1038);
      v31 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
              &v49,
              (const char (*)[57])"[PlayerBlossomComp] find next circle camp id succ, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      *(_DWORD *)(v3 + 80) = Player::getUid(this->player_);
      v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v3 + 80));
      v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v32, (const char (*)[16])" ,old_camp_id: ");
      v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, (const unsigned int *)(v3 + 32));
      v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v34, (const char (*)[16])" ,new_camp_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v49);
      *(_DWORD *)(v3 + 80) = 0;
      M_current = (unsigned int *)std::make_pair<int,unsigned int &>((int *)(v3 + 80), (unsigned int *)(v3 + 48));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v49,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "findNextCircleCampId",
        1033);
      v26 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              &v49,
              (const char (*)[51])"[PlayerBlossomComp] find new camp id failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      *(_DWORD *)(v3 + 80) = Player::getUid(this->player_);
      v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v3 + 80));
      v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v27, (const char (*)[16])" ,old_camp_id: ");
      v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v3 + 32));
      v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v29, (const char (*)[16])" ,new_camp_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v49);
      *(_DWORD *)(v3 + 80) = -1;
      M_current = (unsigned int *)std::make_pair<int,unsigned int &>((int *)(v3 + 80), (unsigned int *)(v3 + 48));
    }
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 224));
  std::queue<unsigned int>::~queue((std::queue<unsigned int> *const)(v3 + 304));
LABEL_56:
  v36 = (std::pair<int,unsigned int>)M_current;
  if ( v50 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
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
  return v36;
};

// Line 957: range 00000000171D514E-00000000171D53DE
bool __cdecl PlayerBlossomComp::findNextCircleCampId(BlossomCircleCampInfo const&)::{lambda(unsigned int)#1}::operator()(
        const PlayerBlossomComp::findNextCircleCampId::<lambda(uint32_t)> *const __closure,
        uint32_t circle_camp_id)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  char v3; // bl
  PlayerBlossomComp *this; // rax
  PlayerBasicComp *BasicComp; // rax
  uint32_t Level; // ecx
  BlossomExcelConfigMgr *p_blossom_config_mgr; // rcx
  char v8; // r12
  const data::BlossomGroupsExcelConfig *groups_config_ptr; // [rsp+18h] [rbp-28h]
  std::shared_ptr<Config> v11[2]; // [rsp+20h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v11);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v11);
  groups_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomGroupsExcelConfig(
                        &v2->design_config.txt_config_mgr.blossom_config_mgr,
                        circle_camp_id);
  std::shared_ptr<Config>::~shared_ptr(v11);
  if ( !groups_config_ptr )
    return 0;
  v3 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__this);
  this = __closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  Level = PlayerBasicComp::getLevel(BasicComp);
  if ( *(_BYTE *)(((unsigned __int64)&groups_config_ptr->limit_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&groups_config_ptr->limit_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&groups_config_ptr->limit_level);
  }
  if ( Level < groups_config_ptr->limit_level )
    goto LABEL_19;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__this);
  if ( PlayerBlossomComp::checkCircleCampIdInUse(__closure->__this, circle_camp_id) )
    goto LABEL_19;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v11);
  v3 = 1;
  p_blossom_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v11)->design_config.txt_config_mgr.blossom_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(__closure);
  }
  if ( !BlossomExcelConfigMgr::checkBlossomRefreshTypeIsMatch(
          p_blossom_config_mgr,
          circle_camp_id,
          __closure->__refresh_type) )
    goto LABEL_19;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__this);
  if ( PlayerBlossomComp::checkGroupsCanRegister(__closure->__this, circle_camp_id) )
    v8 = 1;
  else
LABEL_19:
    v8 = 0;
  if ( v3 )
    std::shared_ptr<Config>::~shared_ptr(v11);
  return v8 != 0;
};

// Line 1043: range 00000000171D62DA-00000000171D6F30
__int64 __fastcall PlayerBlossomComp::updateCircleCampId(
        PlayerBlossomComp *const this,
        uint32_t old_camp_id,
        uint32_t new_camp_id,
        bool is_delay_unload)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  unsigned int v14; // r14d
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  bool v20; // r14
  common::milog::MiLogStream *v21; // r14
  Scene *v22; // rax
  SceneBlockGroupComp *BlockGroupComp; // rax
  unsigned __int64 v24; // rdx
  common::milog::MiLogStream *v25; // r14
  BlossomCircleCampInfo *v26; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomCircleCampInfo> >,bool> v27; // rax
  common::milog::MiLogStream *v28; // r14
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+24h] [rbp-25Ch] BYREF
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::iterator __for_end; // [rsp+28h] [rbp-258h] BYREF
  BlossomCircleCampInfo *old_camp_info_ptr; // [rsp+30h] [rbp-250h]
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *__for_range; // [rsp+38h] [rbp-248h]
  BlossomRefreshInfo *refresh_info; // [rsp+40h] [rbp-240h]
  std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > *__in; // [rsp+48h] [rbp-238h]
  std::tuple_element<0,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *scene_ptr; // [rsp+50h] [rbp-230h]
  std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *group_vec; // [rsp+58h] [rbp-228h]
  std::shared_ptr<Config> v42; // [rsp+60h] [rbp-220h] BYREF
  common::milog::MiLogStream v43; // [rsp+70h] [rbp-210h] BYREF
  char v44[496]; // [rsp+90h] [rbp-1F0h] BYREF

  v4 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(448LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 48 4 15 refresh_id:1056 64 4 14 delay_sec:1066 80 4 16 old_camp_id:1042 96 4 16 new_camp_id:10"
                        "42 112 8 9 iter:1095 144 24 17 group_id_vec:1065 208 48 20 scene_group_map:1084 288 128 18 new_camp_info:1058";
  *(_QWORD *)(v4 + 16) = PlayerBlossomComp::updateCircleCampId;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = 61956;
  v6[536862723] = -234881024;
  v6[536862724] = 62194;
  v6[536862725] = -218959360;
  v6[536862726] = 62194;
  v6[536862728] = -218959118;
  v6[536862733] = -202116109;
  *(_DWORD *)(v4 + 80) = old_camp_id;
  *(_DWORD *)(v4 + 96) = new_camp_id;
  common::milog::MiLogStream::create(
    &v43,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/blossom/player_blossom_comp.cpp",
    "updateCircleCampId",
    1044);
  v7 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
         &v43,
         (const char (*)[49])"[PlayerBlossomComp] update circle camp id, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
  v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v8, (const char (*)[16])" ,old_camp_id: ");
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 80));
  v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v10, (const char (*)[16])" ,new_camp_id: ");
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 96));
  v13 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v12, (const char (*)[18])" is_delay_unload:");
  common::milog::MiLogStream::operator<<(v13, is_delay_unload);
  common::milog::MiLogStream::~MiLogStream(&v43);
  if ( *(_DWORD *)(v4 + 80) == *(_DWORD *)(v4 + 96) )
  {
    v14 = 0;
    goto LABEL_49;
  }
  old_camp_info_ptr = PlayerBlossomComp::findBlossomCircleCampInfo(this, *(_DWORD *)(v4 + 80));
  if ( old_camp_info_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)old_camp_info_ptr >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)old_camp_info_ptr >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(old_camp_info_ptr);
    }
    *(_DWORD *)(v4 + 48) = old_camp_info_ptr->refresh_id;
    BlossomCircleCampInfo::BlossomCircleCampInfo((BlossomCircleCampInfo *const)(v4 + 288), old_camp_info_ptr);
    *(_DWORD *)(v4 + 292) = *(_DWORD *)(v4 + 96);
    *(_DWORD *)(v4 + 300) = 0;
    std::set<unsigned int>::insert(
      (std::set<unsigned int> *const)(v4 + 312),
      (const std::set<unsigned int>::value_type *)(v4 + 296));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    BasicComp = Player::getBasicComp(this->player_);
    *(_DWORD *)(v4 + 360) = PlayerBasicComp::getWorldLevel(BasicComp);
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 144));
    *(_DWORD *)(v4 + 64) = 0;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v42);
    v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42);
    v20 = BlossomExcelConfigMgr::getBlossomGroupIdVec(
            &v19->design_config.txt_config_mgr.blossom_config_mgr,
            *(_DWORD *)(v4 + 80),
            (std::vector<unsigned int> *)(v4 + 144),
            (uint32_t *)(v4 + 64)) != 0;
    std::shared_ptr<Config>::~shared_ptr(&v42);
    if ( v20 )
    {
      common::milog::MiLogStream::create(
        &v43,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "updateCircleCampId",
        1069);
      v21 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
              &v43,
              (const char (*)[55])"[PlayerBlossomComp] getBlossomGroupIdVec failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
      common::milog::MiLogStream::~MiLogStream(&v43);
      v14 = -1;
      goto LABEL_48;
    }
    if ( *(_DWORD *)(v4 + 64) )
      is_delay_unload = 1;
    if ( is_delay_unload )
      std::set<unsigned int>::insert(
        (std::set<unsigned int> *const)(v4 + 368),
        (const std::set<unsigned int>::value_type *)(v4 + 80));
    std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v4 + 208));
    PlayerBlossomComp::getGroupSceneMap(
      this,
      (const std::vector<unsigned int> *)(v4 + 144),
      (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v4 + 208));
    __for_range = (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v4 + 208);
    *(std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::iterator *)(v4 + 112) = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::begin((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v4 + 208));
    __for_end._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::end(__for_range)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::_Self *)(v4 + 112),
              &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator*((const std::_Rb_tree_iterator<std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > > *const)(v4 + 112));
      scene_ptr = std::get<0ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(__in);
      group_vec = std::get<1ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(__in);
      if ( std::operator!=<Scene>(0LL, scene_ptr) )
      {
        v22 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
        BlockGroupComp = Scene::getBlockGroupComp(v22);
        if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
          __asan_report_load8(BlockGroupComp);
        v24 = (unsigned __int64)(BlockGroupComp->_vptr_SceneCompBase + 13);
        if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
          __asan_report_load8(BlockGroupComp->_vptr_SceneCompBase + 13);
        (*(void (__fastcall **)(SceneBlockGroupComp *, std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *, bool))v24)(
          BlockGroupComp,
          group_vec,
          !is_delay_unload);
      }
      std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator++((std::_Rb_tree_iterator<std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > > *const)(v4 + 112));
    }
    *(std::map<unsigned int,BlossomRefreshInfo>::iterator *)(v4 + 112) = std::map<unsigned int,BlossomRefreshInfo>::find(
                                                                           &this->refresh_info_map_,
                                                                           (const std::map<unsigned int,BlossomRefreshInfo>::key_type *)(v4 + 48));
    __for_end._M_node = std::map<unsigned int,BlossomRefreshInfo>::end(&this->refresh_info_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo> >::_Self *)(v4 + 112),
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo> >::_Self *)&__for_end) )
    {
      common::milog::MiLogStream::create(
        &v43,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "updateCircleCampId",
        1098);
      v25 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              &v43,
              (const char (*)[50])"[PlayerBlossomComp] find refresh_id failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    else
    {
      refresh_info = &std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo> > *const)(v4 + 112))->second;
      if ( std::map<unsigned int,BlossomCircleCampInfo>::erase(
             &refresh_info->circle_camp_info_map,
             (const std::map<unsigned int,BlossomCircleCampInfo>::key_type *)(v4 + 80)) == 1 )
      {
        v27 = std::map<unsigned int,BlossomCircleCampInfo>::emplace<unsigned int &,BlossomCircleCampInfo&>(
                &refresh_info->circle_camp_info_map,
                (unsigned int *)(v4 + 96),
                (BlossomCircleCampInfo *)(v4 + 288),
                (unsigned int *)(v4 + 96),
                v26);
        if ( !v27.second )
        {
          common::milog::MiLogStream::create(
            &v43,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/blossom/player_blossom_comp.cpp",
            "updateCircleCampId",
            1106);
          v28 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                  &v43,
                  (const char (*)[53])"[PlayerBlossomComp] circle_camp_id duplicated, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &val);
          v30 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  v29,
                  (const char (*)[18])",circle_camp_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v4 + 96));
          common::milog::MiLogStream::~MiLogStream(&v43);
          v14 = -1;
          goto LABEL_47;
        }
      }
      std::set<unsigned int>::insert(
        &refresh_info->used_camp_id_set,
        (const std::set<unsigned int>::value_type *)(v4 + 96));
      PlayerBlossomComp::broadcastBlossomBriefInfo(this);
      if ( !PlayerBlossomComp::startCircleCampGroup(this, (const BlossomCircleCampInfo *)(v4 + 288)) )
      {
        v14 = 0;
        goto LABEL_47;
      }
      common::milog::MiLogStream::create(
        &v43,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "updateCircleCampId",
        1117);
      v25 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
              &v43,
              (const char (*)[55])"[PlayerBlossomComp] startCircleCampGroup failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
    common::milog::MiLogStream::~MiLogStream(&v43);
    v14 = -1;
LABEL_47:
    std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::~map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v4 + 208));
LABEL_48:
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 144));
    BlossomCircleCampInfo::~BlossomCircleCampInfo((BlossomCircleCampInfo *const)(v4 + 288));
    goto LABEL_49;
  }
  common::milog::MiLogStream::create(
    &v43,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/blossom/player_blossom_comp.cpp",
    "updateCircleCampId",
    1053);
  v15 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
          &v43,
          (const char (*)[60])"[PlayerBlossomComp] findBlossomCircleCampInfo failed, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
  v17 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v16, (const char (*)[19])" ,circle_camp_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 80));
  common::milog::MiLogStream::~MiLogStream(&v43);
  v14 = -1;
LABEL_49:
  result = v14;
  if ( v44 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8034) = 0;
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
  }
  return result;
};

// Line 1125: range 00000000171D6F96-00000000171D853D
__int64 __fastcall PlayerBlossomComp::createBlossomChestByGroup(
        PlayerBlossomComp *const this,
        GroupPtr *p_group_ptr,
        uint32_t config_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rbx
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t GroupId; // eax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rbx
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // rbx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  uint32_t progress; // ecx
  common::milog::MiLogStream *v29; // r14
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // r14
  BlossomExcelConfigMgr *p_blossom_config_mgr; // rcx
  common::milog::MiLogStream *v32; // r14
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  common::milog::MiLogStream *v38; // r14
  uint32_t v39; // r14d
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  uint32_t v41; // eax
  Group *v42; // rax
  common::milog::MiLogStream *v43; // r14
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // [rsp+0h] [rbp-500h]
  uint32_t create_time; // [rsp+8h] [rbp-4F8h]
  unsigned int val; // [rsp+20h] [rbp-4E0h] BYREF
  uint32_t circle_camp_id; // [rsp+24h] [rbp-4DCh]
  BlossomCircleCampInfo *circle_camp_info_ptr; // [rsp+28h] [rbp-4D8h]
  BlossomCircleCampInfo *circle_camp_info; // [rsp+30h] [rbp-4D0h]
  const data::BlossomRefreshExcelConfig *refresh_config_ptr; // [rsp+38h] [rbp-4C8h]
  const data::BlossomGroupsExcelConfig *groups_config_ptr; // [rsp+40h] [rbp-4C0h]
  const data::BlossomRewardExcelConfig *reward_config_ptr; // [rsp+48h] [rbp-4B8h]
  common::milog::MiLogStream v57; // [rsp+50h] [rbp-4B0h] BYREF
  char v58[1168]; // [rsp+70h] [rbp-490h] BYREF

  v3 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1120LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 48 4 15 refresh_id:1142 64 4 12 drop_id:1206 80 4 14 config_id:1124 96 16 14 world_ptr:1171 12"
                        "8 16 15 gadget_ptr:1223 160 32 11 notify:1233 224 48 20 qualify_uid_set:1179 304 120 24 blossom_"
                        "chest_param:1187 464 520 10 param:1218";
  *(_QWORD *)(v3 + 16) = PlayerBlossomComp::createBlossomChestByGroup;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862726] = -218959118;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862733] = -218959360;
  v5[536862734] = 62194;
  v5[536862750] = -218103808;
  v5[536862751] = -202116109;
  v5[536862752] = -202116109;
  v5[536862753] = -202116109;
  v5[536862754] = -202116109;
  *(_DWORD *)(v3 + 80) = config_id;
  if ( std::operator==<Group>(0LL, p_group_ptr) )
  {
    common::milog::MiLogStream::create(
      &v57,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "createBlossomChestByGroup",
      1128);
    v6 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v57,
           (const char (*)[45])"[PlayerBlossomComp] group_ptr is null, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v57);
    v7 = -1;
    goto LABEL_77;
  }
  common::milog::MiLogStream::create(
    &v57,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/blossom/player_blossom_comp.cpp",
    "createBlossomChestByGroup",
    1132);
  v8 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
         &v57,
         (const char (*)[53])"[PlayerBlossomComp] createBlossomChestByGroup, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  *(_DWORD *)(v3 + 64) = Player::getUid(this->player_);
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 64));
  v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])" ,group_id: ");
  v11 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
  val = Group::getGroupId(v11);
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
  v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v12, (const char (*)[14])" ,config_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 80));
  common::milog::MiLogStream::~MiLogStream(&v57);
  v14 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
  GroupId = Group::getGroupId(v14);
  circle_camp_info_ptr = PlayerBlossomComp::findBlossomCircleCampInfoByGroupId(this, GroupId);
  if ( !circle_camp_info_ptr )
  {
    common::milog::MiLogStream::create(
      &v57,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "createBlossomChestByGroup",
      1137);
    v16 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
            &v57,
            (const char (*)[69])"[PlayerBlossomComp] findBlossomCircleCampInfoByGroupId failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v3 + 64) = Player::getUid(this->player_);
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 64));
    v18 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v17, (const char (*)[13])" ,group_id: ");
    v19 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
    val = Group::getGroupId(v19);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
    common::milog::MiLogStream::~MiLogStream(&v57);
    v7 = -1;
    goto LABEL_77;
  }
  circle_camp_info = circle_camp_info_ptr;
  if ( *(_BYTE *)(((unsigned __int64)circle_camp_info_ptr >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)circle_camp_info_ptr >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(circle_camp_info_ptr);
  }
  *(_DWORD *)(v3 + 48) = circle_camp_info->refresh_id;
  if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info->circle_camp_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)circle_camp_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&circle_camp_info->circle_camp_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&circle_camp_info->circle_camp_id);
  }
  circle_camp_id = circle_camp_info->circle_camp_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 128));
  v20 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
  refresh_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomRefreshExcelConfig(
                         &v20->design_config.txt_config_mgr.blossom_config_mgr,
                         *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 128));
  if ( !refresh_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v57,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "createBlossomChestByGroup",
      1147);
    v21 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
            &v57,
            (const char (*)[64])"[PlayerBlossomComp] findBlossomRefreshExcelConfig failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_39:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
    common::milog::MiLogStream::~MiLogStream(&v57);
    v7 = -1;
    goto LABEL_77;
  }
  if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->reward_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->reward_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&refresh_config_ptr->reward_type);
  }
  if ( refresh_config_ptr->reward_type == BLOSSOM_REWARD_TYPE_DEFAULT )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 128));
    v27 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    groups_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomGroupsExcelConfig(
                          &v27->design_config.txt_config_mgr.blossom_config_mgr,
                          circle_camp_id);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 128));
    if ( !groups_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v57,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "createBlossomChestByGroup",
        1160);
      v21 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
              &v57,
              (const char (*)[63])"[PlayerBlossomComp] findBlossomGroupsExcelConfig failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      goto LABEL_39;
    }
    if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info->progress >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&circle_camp_info->progress >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&circle_camp_info->progress);
    }
    progress = circle_camp_info->progress;
    if ( *(_BYTE *)(((unsigned __int64)&groups_config_ptr->finish_progress >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)groups_config_ptr + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&groups_config_ptr->finish_progress >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&groups_config_ptr->finish_progress);
    }
    if ( progress < groups_config_ptr->finish_progress )
    {
      common::milog::MiLogStream::create(
        &v57,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "createBlossomChestByGroup",
        1166);
      v21 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              &v57,
              (const char (*)[47])"[PlayerBlossomComp] progress not finish, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      goto LABEL_39;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v3 + 96));
    if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v57,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "createBlossomChestByGroup",
        1174);
      v29 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              &v57,
              (const char (*)[45])"[PlayerBlossomComp] world_ptr is null, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &val);
      common::milog::MiLogStream::~MiLogStream(&v57);
      v7 = -1;
      goto LABEL_76;
    }
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 224));
    v30 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    std::function<ForeachPolicy ()(Player &)>::function<PlayerBlossomComp::createBlossomChestByGroup(std::shared_ptr<Group>,unsigned int)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v57,
      (PlayerBlossomComp::createBlossomChestByGroup::<lambda(Player&)>)(v3 + 224));
    World::foreachPlayer(v30, (std::function<ForeachPolicy(Player&)> *)&v57);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v57);
    GroupBlossomChestParam::GroupBlossomChestParam((GroupBlossomChestParam *const)(v3 + 304));
    if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->blossom_chest_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->blossom_chest_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&refresh_config_ptr->blossom_chest_id);
    }
    *(_DWORD *)(v3 + 304) = refresh_config_ptr->blossom_chest_id;
    *(_DWORD *)(v3 + 312) = 0;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 128));
    p_blossom_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128))->design_config.txt_config_mgr.blossom_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info->valid_world_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&circle_camp_info->valid_world_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&circle_camp_info->valid_world_level);
    }
    reward_config_ptr = BlossomExcelConfigMgr::findBlossomDropReward(
                          p_blossom_config_mgr,
                          *(_DWORD *)(v3 + 48),
                          circle_camp_info->valid_world_level);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 128));
    if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->item_limit_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)refresh_config_ptr + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->item_limit_type >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&refresh_config_ptr->item_limit_type);
    }
    if ( refresh_config_ptr->item_limit_type )
    {
      if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->item_limit_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)refresh_config_ptr + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->item_limit_type >> 3)
                                                                           + 0x7FFF8000) )
      {
        __asan_report_load4(&refresh_config_ptr->item_limit_type);
      }
      *(_DWORD *)(v3 + 416) = refresh_config_ptr->item_limit_type;
    }
    else
    {
      *(_DWORD *)(v3 + 416) = 56;
    }
    *(_DWORD *)(v3 + 420) = *(_DWORD *)(v3 + 48);
    if ( reward_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&reward_config_ptr->drop_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&reward_config_ptr->drop_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&reward_config_ptr->drop_id);
      }
      *(_DWORD *)(v3 + 64) = reward_config_ptr->drop_id;
      if ( *(_DWORD *)(v3 + 64) )
      {
        *(_DWORD *)(v3 + 308) = *(_DWORD *)(v3 + 64);
        std::set<unsigned int>::operator=(
          (std::set<unsigned int> *const)(v3 + 320),
          (const std::set<unsigned int> *)(v3 + 224));
        std::set<unsigned int>::operator=(
          (std::set<unsigned int> *const)(v3 + 368),
          (const std::set<unsigned int> *)(v3 + 224));
        GroupEntityParam::GroupEntityParam((GroupEntityParam *const)(v3 + 464));
        *(_DWORD *)(v3 + 464) = *(_DWORD *)(v3 + 80);
        GroupBlossomChestParam::operator=(
          (GroupBlossomChestParam *const)(v3 + 576),
          (const GroupBlossomChestParam *)(v3 + 304));
        v37 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
        Group::createGadget((Group *const)(v3 + 128), (const GroupEntityParam *)v37);
        if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v3 + 128)) )
        {
          common::milog::MiLogStream::create(
            &v57,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/blossom/player_blossom_comp.cpp",
            "createBlossomChestByGroup",
            1226);
          v38 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                  &v57,
                  (const char (*)[46])"[PlayerBlossomComp] gadget_ptr is null, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &val);
          common::milog::MiLogStream::~MiLogStream(&v57);
          v7 = -1;
        }
        else
        {
          v47 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          create_time = common::tools::TimeUtils::getNow();
          v39 = *(_DWORD *)(v3 + 80);
          v40 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
          v41 = Group::getGroupId(v40);
          PlayerWorld::onCreateRewardPoint(v47, v41, v39, (const std::set<unsigned int> *)(v3 + 224), create_time);
          proto::BlossomChestCreateNotify::BlossomChestCreateNotify((proto::BlossomChestCreateNotify *const)(v3 + 160));
          proto::BlossomChestCreateNotify::set_refresh_id(
            (proto::BlossomChestCreateNotify *const)(v3 + 160),
            *(_DWORD *)(v3 + 48));
          proto::BlossomChestCreateNotify::set_circle_camp_id(
            (proto::BlossomChestCreateNotify *const)(v3 + 160),
            circle_camp_id);
          v42 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
          Group::notifyAllPlayer<proto::BlossomChestCreateNotify>(v42, (proto::BlossomChestCreateNotify *)(v3 + 160), 0);
          common::milog::MiLogStream::create(
            &v57,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/blossom/player_blossom_comp.cpp",
            "createBlossomChestByGroup",
            1238);
          v43 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                  &v57,
                  (const char (*)[49])"[PlayerBlossomComp] blossom chest created, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &val);
          v45 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v44, (const char (*)[12])" ,drop_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream(&v57);
          v7 = 0;
          proto::BlossomChestCreateNotify::~BlossomChestCreateNotify((proto::BlossomChestCreateNotify *const)(v3 + 160));
        }
        std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 128));
        GroupEntityParam::~GroupEntityParam((GroupEntityParam *const)(v3 + 464));
        goto LABEL_75;
      }
      common::milog::MiLogStream::create(
        &v57,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "createBlossomChestByGroup",
        1209);
      v32 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v57,
              (const char (*)[40])"[PlayerBlossomComp] drop_id is 0, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v57,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "createBlossomChestByGroup",
        1202);
      v32 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
              &v57,
              (const char (*)[56])"[PlayerBlossomComp] findBlossomDropReward failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    val = Player::getUid(this->player_);
    v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &val);
    v34 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v33, (const char (*)[13])" refresh_id:");
    v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v3 + 48));
    v36 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v35, (const char (*)[14])" world_level:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &circle_camp_info->valid_world_level);
    common::milog::MiLogStream::~MiLogStream(&v57);
    v7 = -1;
LABEL_75:
    GroupBlossomChestParam::~GroupBlossomChestParam((GroupBlossomChestParam *const)(v3 + 304));
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 224));
LABEL_76:
    std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 96));
    goto LABEL_77;
  }
  common::milog::MiLogStream::create(
    &v57,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/blossom/player_blossom_comp.cpp",
    "createBlossomChestByGroup",
    1153);
  v22 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
          &v57,
          (const char (*)[41])"[PlayerBlossomComp] invalid reward type:");
  v23 = common::milog::MiLogStream::operator<<<data::BlossomRewardType,(data::BlossomRewardType*)0>(
          v22,
          &refresh_config_ptr->reward_type);
  v24 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v23, (const char (*)[7])" uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
  v26 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v25, (const char (*)[13])" refresh_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v3 + 48));
  common::milog::MiLogStream::~MiLogStream(&v57);
  v7 = -1;
LABEL_77:
  if ( v58 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8078) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8080) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8088) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1120LL, v58);
  }
  return v7;
};

// Line 1180: range 00000000171D6F32-00000000171D6F94
ForeachPolicy __cdecl PlayerBlossomComp::createBlossomChestByGroup(std::shared_ptr<Group>,unsigned int)::{lambda(Player &)#1}::operator()(
        const PlayerBlossomComp::createBlossomChestByGroup::<lambda(Player&)> *const __closure,
        Player *player)
{
  std::set<unsigned int> *qualify_uid_set; // rbx
  std::set<unsigned int>::value_type __x[5]; // [rsp+1Ch] [rbp-14h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  qualify_uid_set = __closure->__qualify_uid_set;
  __x[0] = Player::getUid(player);
  std::set<unsigned int>::insert(qualify_uid_set, __x);
  return 0;
};

// Line 1244: range 00000000171D853E-00000000171D8950
int32_t __cdecl PlayerBlossomComp::getBlossomRefreshTypeByGroup(
        PlayerBlossomComp *const this,
        GroupPtr *p_group_ptr,
        data::BlossomRefreshType *refresh_type)
{
  common::milog::MiLogStream *v3; // rbx
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t GroupId; // edx
  common::milog::MiLogStream *v7; // rbx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rbx
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  __int64 v12; // rsi
  common::milog::MiLogStream *v13; // rbx
  data::BlossomRefreshType v14; // ecx
  char v15; // dl
  __int64 v16; // rdx
  unsigned int Uid; // [rsp+2Ch] [rbp-64h] BYREF
  unsigned int val; // [rsp+30h] [rbp-60h] BYREF
  uint32_t refresh_id; // [rsp+34h] [rbp-5Ch]
  BlossomCircleCampInfo *circle_camp_info_ptr; // [rsp+38h] [rbp-58h]
  BlossomCircleCampInfo *circle_camp_info; // [rsp+40h] [rbp-50h]
  const data::BlossomRefreshExcelConfig *refresh_config_ptr; // [rsp+48h] [rbp-48h]
  std::shared_ptr<Config> v24; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v25; // [rsp+60h] [rbp-30h] BYREF

  if ( std::operator==<Group>(0LL, p_group_ptr) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "getBlossomRefreshTypeByGroup",
      1247);
    v3 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v25,
           (const char (*)[45])"[PlayerBlossomComp] group_ptr is null, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v25);
    return -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
    GroupId = Group::getGroupId(v5);
    circle_camp_info_ptr = PlayerBlossomComp::findBlossomCircleCampInfoByGroupId(this, GroupId);
    if ( circle_camp_info_ptr )
    {
      circle_camp_info = circle_camp_info_ptr;
      if ( *(_BYTE *)(((unsigned __int64)circle_camp_info_ptr >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)circle_camp_info_ptr >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(circle_camp_info_ptr);
      }
      refresh_id = circle_camp_info->refresh_id;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v24);
      v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
      v12 = refresh_id;
      refresh_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomRefreshExcelConfig(
                             &v11->design_config.txt_config_mgr.blossom_config_mgr,
                             refresh_id);
      std::shared_ptr<Config>::~shared_ptr(&v24);
      if ( refresh_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->refresh_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->refresh_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&refresh_config_ptr->refresh_type);
        }
        v14 = refresh_config_ptr->refresh_type;
        v15 = *(_BYTE *)(((unsigned __int64)refresh_type >> 3) + 0x7FFF8000);
        LOBYTE(v12) = v15 != 0;
        v16 = (v15 != 0) & (unsigned __int8)((char)(((unsigned __int8)refresh_type & 7) + 3) >= v15);
        if ( (_BYTE)v16 )
          __asan_report_store4(refresh_type, v12, v16);
        *refresh_type = v14;
        return 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/blossom/player_blossom_comp.cpp",
          "getBlossomRefreshTypeByGroup",
          1263);
        v13 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                &v25,
                (const char (*)[64])"[PlayerBlossomComp] findBlossomRefreshExcelConfig failed, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        common::milog::MiLogStream::~MiLogStream(&v25);
        return -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "getBlossomRefreshTypeByGroup",
        1254);
      v7 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
             &v25,
             (const char (*)[69])"[PlayerBlossomComp] findBlossomCircleCampInfoByGroupId failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Uid = Player::getUid(this->player_);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &Uid);
      v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])" ,group_id: ");
      v10 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
      val = Group::getGroupId(v10);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v25);
      return -1;
    }
  }
};

// Line 1273: range 00000000171D8952-00000000171D9B62
int32_t __cdecl PlayerBlossomComp::addBlossomScheduleProgressByGroup(
        PlayerBlossomComp *const this,
        GroupPtr *p_group_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rbx
  int32_t result; // eax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t GroupId; // edx
  common::milog::MiLogStream *v9; // rbx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rbx
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rbx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rbx
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  uint32_t round_max_count; // ecx
  common::milog::MiLogStream *v23; // rbx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rbx
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  common::milog::MiLogStream *v32; // rbx
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rbx
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  common::milog::MiLogStream *v41; // r14
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  uint32_t progress; // ecx
  char *v54; // rsi
  int32_t v55; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v56; // rdx
  char v57; // cl
  uint32_t v58; // r14d
  __int64 v59; // rax
  char v60; // dl
  __int64 v61; // rdx
  uint32_t round; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v63; // rdx
  char v64; // cl
  uint32_t v65; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v66; // rdx
  char v67; // cl
  Group *v68; // rax
  Group *v69; // rcx
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rcx
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v80; // rax
  unsigned int Uid; // [rsp+10h] [rbp-E0h] BYREF
  unsigned int val; // [rsp+14h] [rbp-DCh] BYREF
  uint32_t circle_camp_id; // [rsp+18h] [rbp-D8h]
  BlossomCircleCampInfo *circle_camp_info_ptr; // [rsp+20h] [rbp-D0h]
  BlossomCircleCampInfo *circle_camp_info; // [rsp+28h] [rbp-C8h]
  const data::BlossomRefreshExcelConfig *refresh_config_ptr; // [rsp+30h] [rbp-C0h]
  const data::BlossomGroupsExcelConfig *groups_config_ptr; // [rsp+38h] [rbp-B8h]
  common::milog::MiLogStream v90; // [rsp+40h] [rbp-B0h] BYREF
  char v91[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v91;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 refresh_id:1288 64 16 12 evt_ptr:1331";
  *(_QWORD *)(v2 + 16) = PlayerBlossomComp::addBlossomScheduleProgressByGroup;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  if ( std::operator==<Group>(0LL, p_group_ptr) )
  {
    common::milog::MiLogStream::create(
      &v90,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "addBlossomScheduleProgressByGroup",
      1276);
    v5 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v90,
           (const char (*)[45])"[PlayerBlossomComp] group_ptr is null, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v90);
    result = -1;
    goto LABEL_73;
  }
  v7 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
  GroupId = Group::getGroupId(v7);
  circle_camp_info_ptr = PlayerBlossomComp::findBlossomCircleCampInfoByGroupId(this, GroupId);
  if ( !circle_camp_info_ptr )
  {
    common::milog::MiLogStream::create(
      &v90,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "addBlossomScheduleProgressByGroup",
      1283);
    v9 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
           &v90,
           (const char (*)[69])"[PlayerBlossomComp] findBlossomCircleCampInfoByGroupId failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Uid = Player::getUid(this->player_);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &Uid);
    v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])" ,group_id: ");
    v12 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
    val = Group::getGroupId(v12);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
    common::milog::MiLogStream::~MiLogStream(&v90);
    result = -1;
    goto LABEL_73;
  }
  circle_camp_info = circle_camp_info_ptr;
  if ( *(_BYTE *)(((unsigned __int64)circle_camp_info_ptr >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)circle_camp_info_ptr >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(circle_camp_info_ptr);
  }
  *(_DWORD *)(v2 + 48) = circle_camp_info->refresh_id;
  if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info->circle_camp_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)circle_camp_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&circle_camp_info->circle_camp_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&circle_camp_info->circle_camp_id);
  }
  circle_camp_id = circle_camp_info->circle_camp_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 64));
  v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  refresh_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomRefreshExcelConfig(
                         &v13->design_config.txt_config_mgr.blossom_config_mgr,
                         *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
  if ( !refresh_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v90,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "addBlossomScheduleProgressByGroup",
      1293);
    v14 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
            &v90,
            (const char (*)[64])"[PlayerBlossomComp] findBlossomRefreshExcelConfig failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_19:
    val = Player::getUid(this->player_);
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
    v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v15, (const char (*)[14])", refresh_id:");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &circle_camp_info->refresh_id);
    v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])", camp_id:");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &circle_camp_info->circle_camp_id);
    v20 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
    operator<<(v19, v20);
    common::milog::MiLogStream::~MiLogStream(&v90);
    result = -1;
    goto LABEL_73;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 64));
  v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  groups_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomGroupsExcelConfig(
                        &v21->design_config.txt_config_mgr.blossom_config_mgr,
                        circle_camp_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
  if ( !groups_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v90,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "addBlossomScheduleProgressByGroup",
      1300);
    v14 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
            &v90,
            (const char (*)[63])"[PlayerBlossomComp] findBlossomGroupsExcelConfig failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_19;
  }
  if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->round_max_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->round_max_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&refresh_config_ptr->round_max_count);
  }
  if ( refresh_config_ptr->round_max_count )
  {
    round_max_count = refresh_config_ptr->round_max_count;
    if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info->round >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&circle_camp_info->round >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&circle_camp_info->round);
    }
    if ( round_max_count < circle_camp_info->round )
      goto LABEL_33;
  }
  if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info->round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&circle_camp_info->round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&circle_camp_info->round);
  }
  if ( circle_camp_info->round )
  {
    if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info->state >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)circle_camp_info + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&circle_camp_info->state >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&circle_camp_info->state);
    }
    if ( circle_camp_info->state == 2 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info->progress >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&circle_camp_info->progress >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&circle_camp_info->progress);
      }
      ++circle_camp_info->progress;
      std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)(v2 + 64), p_group_ptr);
      PlayerBlossomComp::broadcastBlossomScheduleInfo(this, circle_camp_info, (GroupPtr *)(v2 + 64));
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 64));
      common::milog::MiLogStream::create(
        &v90,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "addBlossomScheduleProgressByGroup",
        1325);
      v41 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
              &v90,
              (const char (*)[61])"[PlayerBlossomComp] addBlossomScheduleProgressByGroup, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Uid = Player::getUid(this->player_);
      v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &Uid);
      v43 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v42, (const char (*)[13])" ,group_id: ");
      v44 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
      val = Group::getGroupId(v44);
      v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &val);
      v46 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v45, (const char (*)[17])" ,new progress: ");
      v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, &circle_camp_info->progress);
      v48 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v47, (const char (*)[14])", refresh_id:");
      v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, &circle_camp_info->refresh_id);
      v50 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v49, (const char (*)[11])", camp_id:");
      v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v50,
              &circle_camp_info->circle_camp_id);
      v52 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
      operator<<(v51, v52);
      common::milog::MiLogStream::~MiLogStream(&v90);
      if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info->progress >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&circle_camp_info->progress >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&circle_camp_info->progress);
      }
      progress = circle_camp_info->progress;
      if ( *(_BYTE *)(((unsigned __int64)&groups_config_ptr->finish_progress >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)groups_config_ptr + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&groups_config_ptr->finish_progress >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&groups_config_ptr->finish_progress);
      }
      if ( progress >= groups_config_ptr->finish_progress )
      {
        EventUtil::createEvent((data::EventType)(v2 + 64));
        v54 = (char *)(v2 + 64);
        if ( std::operator!=<Event>(0LL, (const std::shared_ptr<Event> *)(v2 + 64)) )
        {
          v55 = *(_DWORD *)(v2 + 48);
          v56 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v57 = *(_BYTE *)(((unsigned __int64)&v56->param1 >> 3) + 0x7FFF8000);
          if ( v57 != 0 && (char)((((_BYTE)v56 + 44) & 7) + 3) >= v57 )
          {
            LOBYTE(v54) = v57 != 0;
            __asan_report_store4(&v56->param1, v54, v56);
          }
          v56->param1 = v55;
          v58 = circle_camp_id;
          v59 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v60 = *(_BYTE *)(((unsigned __int64)(v59 + 48) >> 3) + 0x7FFF8000);
          LOBYTE(v54) = v60 != 0;
          v61 = (v60 != 0) & (unsigned __int8)(v60 <= 3);
          if ( (_BYTE)v61 )
            v59 = __asan_report_store4(v59 + 48, v54, v61);
          *(_DWORD *)(v59 + 48) = v58;
          if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info->round >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&circle_camp_info->round >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&circle_camp_info->round);
          }
          round = circle_camp_info->round;
          v63 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v64 = *(_BYTE *)(((unsigned __int64)&v63->param3 >> 3) + 0x7FFF8000);
          if ( v64 != 0 && (char)((((_BYTE)v63 + 52) & 7) + 3) >= v64 )
          {
            LOBYTE(v54) = v64 != 0;
            __asan_report_store4(&v63->param3, v54, v63);
          }
          v63->param3 = round;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v65 = Player::getUid(this->player_);
          v66 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v67 = *(_BYTE *)(((unsigned __int64)&v66->uid >> 3) + 0x7FFF8000);
          if ( v67 != 0 && (char)((((_BYTE)v66 + 60) & 7) + 3) >= v67 )
          {
            LOBYTE(v54) = v67 != 0;
            __asan_report_store4(&v66->uid, v54, v66);
          }
          v66->uid = v65;
          v68 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
          Group::handleEvent(v68, (EventPtr *)(v2 + 64));
        }
        v69 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
        if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info->valid_world_level >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&circle_camp_info->valid_world_level >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&circle_camp_info->valid_world_level);
        }
        if ( PlayerBlossomComp::tryGrantBagReward(this, *(_DWORD *)(v2 + 48), circle_camp_info->valid_world_level, v69) )
        {
          common::milog::MiLogStream::create(
            &v90,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/blossom/player_blossom_comp.cpp",
            "addBlossomScheduleProgressByGroup",
            1344);
          v70 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  &v90,
                  (const char (*)[38])" grant bag reward failed @refresh_id:");
          v71 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v70,
                  (const unsigned int *)(v2 + 48));
          v72 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v71,
                  (const char (*)[15])", world_level:");
          v73 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v72,
                  &circle_camp_info->valid_world_level);
          v74 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v73, (const char (*)[3])", ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v75 = operator<<(v74, this->player_);
          v76 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v75,
                  (const char (*)[14])", refresh_id:");
          v77 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v76,
                  &circle_camp_info->refresh_id);
          v78 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v77, (const char (*)[11])", camp_id:");
          v79 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v78,
                  &circle_camp_info->circle_camp_id);
          v80 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
          operator<<(v79, v80);
          common::milog::MiLogStream::~MiLogStream(&v90);
        }
        std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 64));
      }
      result = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v90,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "addBlossomScheduleProgressByGroup",
        1315);
      v32 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v90,
              (const char (*)[44])"[PlayerBlossomComp] state is invalid, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &val);
      v34 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v33, (const char (*)[10])", state: ");
      v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &circle_camp_info->state);
      v36 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v35, (const char (*)[14])", refresh_id:");
      v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &circle_camp_info->refresh_id);
      v38 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v37, (const char (*)[11])", camp_id:");
      v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v38,
              &circle_camp_info->circle_camp_id);
      v40 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
      operator<<(v39, v40);
      common::milog::MiLogStream::~MiLogStream(&v90);
      result = -1;
    }
  }
  else
  {
LABEL_33:
    common::milog::MiLogStream::create(
      &v90,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "addBlossomScheduleProgressByGroup",
      1308);
    v23 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            &v90,
            (const char (*)[44])"[PlayerBlossomComp] round is invalid, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
    v25 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v24, (const char (*)[10])", round: ");
    v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &circle_camp_info->round);
    v27 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v26, (const char (*)[14])", refresh_id:");
    v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &circle_camp_info->refresh_id);
    v29 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v28, (const char (*)[11])", camp_id:");
    v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &circle_camp_info->circle_camp_id);
    v31 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
    operator<<(v30, v31);
    common::milog::MiLogStream::~MiLogStream(&v90);
    result = -1;
  }
LABEL_73:
  if ( v91 == (char *)v2 )
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

// Line 1352: range 00000000171D9B64-00000000171D9F12
int32_t __cdecl PlayerBlossomComp::getBlossomScheduleStateByGroup(
        PlayerBlossomComp *const this,
        GroupPtr *p_group_ptr,
        uint32_t *state)
{
  common::milog::MiLogStream *v3; // rbx
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t GroupId; // edx
  common::milog::MiLogStream *v7; // rbx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rbx
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  __int64 v11; // rsi
  uint32_t v12; // ecx
  char v13; // dl
  __int64 v14; // rdx
  common::milog::MiLogStream *v15; // rbx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rbx
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  unsigned int Uid; // [rsp+28h] [rbp-48h] BYREF
  unsigned int val; // [rsp+2Ch] [rbp-44h] BYREF
  BlossomCircleCampInfo *circle_camp_info_ptr; // [rsp+30h] [rbp-40h]
  BlossomCircleCampInfo *circle_camp_info; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v27; // [rsp+40h] [rbp-30h] BYREF

  if ( std::operator==<Group>(0LL, p_group_ptr) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "getBlossomScheduleStateByGroup",
      1355);
    v3 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v27,
           (const char (*)[45])"[PlayerBlossomComp] group_ptr is null, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v27);
    return -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
    GroupId = Group::getGroupId(v5);
    circle_camp_info_ptr = PlayerBlossomComp::findBlossomCircleCampInfoByGroupId(this, GroupId);
    if ( circle_camp_info_ptr )
    {
      circle_camp_info = circle_camp_info_ptr;
      v11 = (((_BYTE)circle_camp_info_ptr + 12) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info_ptr->state >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)circle_camp_info_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&circle_camp_info_ptr->state >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&circle_camp_info_ptr->state);
      }
      v12 = circle_camp_info->state;
      v13 = *(_BYTE *)(((unsigned __int64)state >> 3) + 0x7FFF8000);
      LOBYTE(v11) = v13 != 0;
      v14 = (v13 != 0) & (unsigned __int8)((char)(((unsigned __int8)state & 7) + 3) >= v13);
      if ( (_BYTE)v14 )
        __asan_report_store4(state, v11, v14);
      *state = v12;
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "getBlossomScheduleStateByGroup",
        1369);
      v15 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
              &v27,
              (const char (*)[58])"[PlayerBlossomComp] getBlossomScheduleStateByGroup, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Uid = Player::getUid(this->player_);
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &Uid);
      v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v16, (const char (*)[13])" ,group_id: ");
      v18 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
      val = Group::getGroupId(v18);
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
      v20 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v19, (const char (*)[10])" ,state: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, state);
      common::milog::MiLogStream::~MiLogStream(&v27);
      return 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "getBlossomScheduleStateByGroup",
        1362);
      v7 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
             &v27,
             (const char (*)[69])"[PlayerBlossomComp] findBlossomCircleCampInfoByGroupId failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Uid = Player::getUid(this->player_);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &Uid);
      v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])" ,group_id: ");
      v10 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
      val = Group::getGroupId(v10);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v27);
      return -1;
    }
  }
};

// Line 1375: range 00000000171DA006-00000000171DB5A4
__int64 __fastcall PlayerBlossomComp::setBlossomScheduleStateByGroup(
        PlayerBlossomComp *const this,
        GroupPtr *p_group_ptr,
        __int32 state)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rbx
  __int64 result; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t GroupId; // eax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rbx
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // rbx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  __int64 v23; // rsi
  uint32_t v24; // ecx
  char v25; // dl
  __int64 v26; // rdx
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rcx
  uint32_t valid_world_level; // r15d
  uint32_t revise_level; // r14d
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  uint32_t v36; // eax
  uint32_t MonsterShowLevel; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rcx
  Player *player; // r14
  PlayerBasicComp *v41; // rax
  unsigned int *v42; // r8
  std::shared_ptr<Group> *v43; // r9
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rcx
  uint32_t v50; // r15d
  uint32_t v51; // r14d
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  uint32_t v53; // eax
  uint32_t v54; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v55; // r14
  PlayerBasicComp *v56; // rax
  float CurClimateMeter; // xmm0_4
  PlayerAvatarComp *AvatarComp; // r14
  PlayerVehicleComp *VehicleComp; // rax
  common::milog::MiLogStream *v60; // r14
  common::milog::MiLogStream *v61; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v62; // rax
  Player *v63; // r14
  std::string v64; // [rsp+0h] [rbp-1A0h]
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v65; // [rsp+10h] [rbp-190h]
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v66; // [rsp+10h] [rbp-190h]
  unsigned int val; // [rsp+38h] [rbp-168h] BYREF
  uint32_t circle_camp_id; // [rsp+3Ch] [rbp-164h]
  BlossomCircleCampInfo *circle_camp_info_ptr; // [rsp+40h] [rbp-160h]
  BlossomCircleCampInfo *circle_camp_info; // [rsp+48h] [rbp-158h]
  const data::BlossomRefreshExcelConfig *refresh_config_ptr; // [rsp+50h] [rbp-150h]
  const data::BlossomGroupsExcelConfig *groups_config_ptr; // [rsp+58h] [rbp-148h]
  std::shared_ptr<google::protobuf::Message> v74; // [rsp+60h] [rbp-140h] BYREF
  common::milog::MiLogStream v75; // [rsp+70h] [rbp-130h] BYREF
  char v76[272]; // [rsp+90h] [rbp-110h] BYREF

  *((_DWORD *)&v64._anon_0._M_allocated_capacity + 3) = state;
  v3 = (unsigned __int64)v76;
  v64._M_string_length = (std::string::size_type)v76;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 1 11 holder:1434 64 4 15 refresh_id:1392 80 4 17 refresh_type:1411 96 4 23 vehicle_hp_perce"
                        "nt:1461 112 4 10 state:1374 128 16 14 world_ptr:1436 160 16 12 log_ptr:1448 192 16 14 event_ptr:1439";
  *(_QWORD *)(v3 + 16) = PlayerBlossomComp::setBlossomScheduleStateByGroup;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -202178560;
  *(_DWORD *)(v3 + 112) = *((_DWORD *)&v64._anon_0._M_allocated_capacity + 3);
  if ( std::operator==<Group>(0LL, p_group_ptr) )
  {
    common::milog::MiLogStream::create(
      &v75,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "setBlossomScheduleStateByGroup",
      1378);
    v6 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v75,
           (const char (*)[45])"[PlayerBlossomComp] group_ptr is null, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v75);
    result = 0xFFFFFFFFLL;
    goto LABEL_83;
  }
  common::milog::MiLogStream::create(
    &v75,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/blossom/player_blossom_comp.cpp",
    "setBlossomScheduleStateByGroup",
    1382);
  v8 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
         &v75,
         (const char (*)[58])"[PlayerBlossomComp] setBlossomScheduleStateByGroup, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  *(_DWORD *)(v3 + 96) = Player::getUid(this->player_);
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 96));
  v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])" ,group_id: ");
  v11 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
  val = Group::getGroupId(v11);
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
  v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])" ,state: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 112));
  common::milog::MiLogStream::~MiLogStream(&v75);
  v14 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
  GroupId = Group::getGroupId(v14);
  circle_camp_info_ptr = PlayerBlossomComp::findBlossomCircleCampInfoByGroupId(this, GroupId);
  if ( !circle_camp_info_ptr )
  {
    common::milog::MiLogStream::create(
      &v75,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "setBlossomScheduleStateByGroup",
      1387);
    v16 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
            &v75,
            (const char (*)[69])"[PlayerBlossomComp] findBlossomCircleCampInfoByGroupId failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v3 + 96) = Player::getUid(this->player_);
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 96));
    v18 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v17, (const char (*)[13])" ,group_id: ");
    v19 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
    val = Group::getGroupId(v19);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
    common::milog::MiLogStream::~MiLogStream(&v75);
    result = 0xFFFFFFFFLL;
    goto LABEL_83;
  }
  circle_camp_info = circle_camp_info_ptr;
  if ( *(_BYTE *)(((unsigned __int64)circle_camp_info_ptr >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)circle_camp_info_ptr >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(circle_camp_info_ptr);
  }
  *(_DWORD *)(v3 + 64) = circle_camp_info->refresh_id;
  if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info->circle_camp_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)circle_camp_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&circle_camp_info->circle_camp_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&circle_camp_info->circle_camp_id);
  }
  circle_camp_id = circle_camp_info->circle_camp_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v74);
  v20 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v74);
  refresh_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomRefreshExcelConfig(
                         &v20->design_config.txt_config_mgr.blossom_config_mgr,
                         *(_DWORD *)(v3 + 64));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v74);
  if ( !refresh_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v75,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "setBlossomScheduleStateByGroup",
      1397);
    v21 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
            &v75,
            (const char (*)[64])"[PlayerBlossomComp] findBlossomRefreshExcelConfig failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_21:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
    common::milog::MiLogStream::~MiLogStream(&v75);
    result = 0xFFFFFFFFLL;
    goto LABEL_83;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v74);
  v22 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v74);
  v23 = circle_camp_id;
  groups_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomGroupsExcelConfig(
                        &v22->design_config.txt_config_mgr.blossom_config_mgr,
                        circle_camp_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v74);
  if ( !groups_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v75,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "setBlossomScheduleStateByGroup",
      1404);
    v21 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
            &v75,
            (const char (*)[63])"[PlayerBlossomComp] findBlossomGroupsExcelConfig failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_21;
  }
  v24 = *(_DWORD *)(v3 + 112);
  v25 = *(_BYTE *)(((unsigned __int64)&circle_camp_info->state >> 3) + 0x7FFF8000);
  LOBYTE(v23) = v25 != 0;
  v26 = (v25 != 0) & (unsigned __int8)((char)((((_BYTE)circle_camp_info + 12) & 7) + 3) >= v25);
  if ( (_BYTE)v26 )
    __asan_report_store4(&circle_camp_info->state, v23, v26);
  circle_camp_info->state = v24;
  std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)&v74, p_group_ptr);
  PlayerBlossomComp::broadcastBlossomScheduleInfo(this, circle_camp_info, (GroupPtr *)&v74);
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)&v74);
  if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->refresh_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->refresh_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&refresh_config_ptr->refresh_type);
  }
  *(_DWORD *)(v3 + 80) = refresh_config_ptr->refresh_type;
  if ( *(_DWORD *)(v3 + 112) == 2 )
  {
    if ( *(_DWORD *)(v3 + 80) != 4 && *(_DWORD *)(v3 + 80) != 5 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      BasicComp = Player::getBasicComp(this->player_);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v75, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xA97u, v64);
      std::string::~string(&v75);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyBlossomProgressBegin>();
      v28 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      proto_log::PlayerLogBodyBlossomProgressBegin::set_refresh_id(v28, *(_DWORD *)(v3 + 64));
      v29 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      proto_log::PlayerLogBodyBlossomProgressBegin::set_circle_camp_id(v29, circle_camp_id);
      v30 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->city_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)refresh_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->city_id >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&refresh_config_ptr->city_id);
      }
      proto_log::PlayerLogBodyBlossomProgressBegin::set_city_id(v30, refresh_config_ptr->city_id);
      v31 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      if ( *(_BYTE *)(((unsigned __int64)&groups_config_ptr->section_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&groups_config_ptr->section_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&groups_config_ptr->section_id);
      }
      proto_log::PlayerLogBodyBlossomProgressBegin::set_section_id(v31, groups_config_ptr->section_id);
      v32 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->refresh_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->refresh_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&refresh_config_ptr->refresh_type);
      }
      proto_log::PlayerLogBodyBlossomProgressBegin::set_refresh_type(v32, refresh_config_ptr->refresh_type);
      v65 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info->valid_world_level >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&circle_camp_info->valid_world_level >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&circle_camp_info->valid_world_level);
      }
      valid_world_level = circle_camp_info->valid_world_level;
      if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->revise_level >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->revise_level >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&refresh_config_ptr->revise_level);
      }
      revise_level = refresh_config_ptr->revise_level;
      v35 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
      v36 = Group::getGroupId(v35);
      MonsterShowLevel = PlayerBlossomComp::getMonsterShowLevel(this, v36, revise_level, valid_world_level);
      proto_log::PlayerLogBodyBlossomProgressBegin::set_monster_level(v65, MonsterShowLevel);
      v38 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->round_max_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->round_max_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&refresh_config_ptr->round_max_count);
      }
      proto_log::PlayerLogBodyBlossomProgressBegin::set_round_max_count(v38, refresh_config_ptr->round_max_count);
      v39 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info->round >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&circle_camp_info->round >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&circle_camp_info->round);
      }
      proto_log::PlayerLogBodyBlossomProgressBegin::set_round(v39, circle_camp_info->round);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      player = this->player_;
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&v74, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyBlossomProgressBegin,void>(
        (std::shared_ptr<google::protobuf::Message> *const)(v3 + 192),
        (const std::shared_ptr<proto_log::PlayerLogBodyBlossomProgressBegin> *)(v3 + 160));
      Player::printStatLog(player, (MessagePtr *)(v3 + 192), &v74, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v3 + 192));
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v74);
      std::shared_ptr<proto_log::PlayerLogBodyBlossomProgressBegin>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyBlossomProgressBegin> *const)(v3 + 160));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
    }
  }
  else if ( *(_DWORD *)(v3 + 112) == 3 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v41 = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v75, v41);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xA98u, v64);
    std::string::~string(&v75);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v3 + 128));
    if ( std::operator!=<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v3 + 128)) )
    {
      common::tools::perf::make_shared<FinishBlossomProgressEvent,unsigned int &,unsigned int &,std::shared_ptr<Group> &>(
        (unsigned int *)&v74,
        (unsigned int *)(v3 + 64),
        (std::shared_ptr<Group> *)(v3 + 80),
        (unsigned int *)p_group_ptr,
        v42,
        v43);
      std::shared_ptr<BaseEvent>::shared_ptr<FinishBlossomProgressEvent,void>(
        (std::shared_ptr<BaseEvent> *const)(v3 + 192),
        (std::shared_ptr<FinishBlossomProgressEvent> *)&v74);
      std::shared_ptr<FinishBlossomProgressEvent>::~shared_ptr((std::shared_ptr<FinishBlossomProgressEvent> *const)&v74);
      v44 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      std::shared_ptr<BaseEvent>::shared_ptr(
        (std::shared_ptr<BaseEvent> *const)&v74,
        (const std::shared_ptr<BaseEvent> *)(v3 + 192));
      std::function<ForeachPolicy ()(Player &)>::function<PlayerBlossomComp::setBlossomScheduleStateByGroup(std::shared_ptr<Group>,unsigned int)::{lambda(Player &)#1},void,void>(
        (std::function<ForeachPolicy(Player&)> *const)&v75,
        (PlayerBlossomComp::setBlossomScheduleStateByGroup::<lambda(Player&)> *)&v74);
      World::foreachPlayer(v44, (std::function<ForeachPolicy(Player&)> *)&v75);
      std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v75);
      PlayerBlossomComp::setBlossomScheduleStateByGroup(std::shared_ptr<Group>,unsigned int)::{lambda(Player &)#1}::~Player((PlayerBlossomComp::setBlossomScheduleStateByGroup::<lambda(Player&)> *const)&v74);
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v3 + 192));
    }
    common::tools::perf::make_shared<proto_log::PlayerLogBodyBlossomProgressFinish>();
    v45 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    proto_log::PlayerLogBodyBlossomProgressFinish::set_refresh_id(v45, *(_DWORD *)(v3 + 64));
    v46 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    proto_log::PlayerLogBodyBlossomProgressFinish::set_circle_camp_id(v46, circle_camp_id);
    v47 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->city_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)refresh_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->city_id >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&refresh_config_ptr->city_id);
    }
    proto_log::PlayerLogBodyBlossomProgressFinish::set_city_id(v47, refresh_config_ptr->city_id);
    v48 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    if ( *(_BYTE *)(((unsigned __int64)&groups_config_ptr->section_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&groups_config_ptr->section_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&groups_config_ptr->section_id);
    }
    proto_log::PlayerLogBodyBlossomProgressFinish::set_section_id(v48, groups_config_ptr->section_id);
    v49 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->refresh_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->refresh_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&refresh_config_ptr->refresh_type);
    }
    proto_log::PlayerLogBodyBlossomProgressFinish::set_refresh_type(v49, refresh_config_ptr->refresh_type);
    v66 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info->valid_world_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&circle_camp_info->valid_world_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&circle_camp_info->valid_world_level);
    }
    v50 = circle_camp_info->valid_world_level;
    if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->revise_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->revise_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&refresh_config_ptr->revise_level);
    }
    v51 = refresh_config_ptr->revise_level;
    v52 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
    v53 = Group::getGroupId(v52);
    v54 = PlayerBlossomComp::getMonsterShowLevel(this, v53, v51, v50);
    proto_log::PlayerLogBodyBlossomProgressFinish::set_monster_level(v66, v54);
    v55 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v56 = Player::getBasicComp(this->player_);
    CurClimateMeter = PlayerBasicComp::getCurClimateMeter(v56);
    proto_log::PlayerLogBodyBlossomProgressFinish::set_climate_meter(v55, (int)CurClimateMeter);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    AvatarComp = Player::getAvatarComp(this->player_);
    std::shared_ptr<proto_log::PlayerLogBodyBlossomProgressFinish>::shared_ptr(
      (std::shared_ptr<proto_log::PlayerLogBodyBlossomProgressFinish> *const)&v74,
      (const std::shared_ptr<proto_log::PlayerLogBodyBlossomProgressFinish> *)(v3 + 160));
    std::function<ForeachPolicy ()(Avatar &)>::function<PlayerBlossomComp::setBlossomScheduleStateByGroup(std::shared_ptr<Group>,unsigned int)::{lambda(Avatar &)#2},void,void>(
      (std::function<ForeachPolicy(Avatar&)> *const)&v75,
      (PlayerBlossomComp::setBlossomScheduleStateByGroup::<lambda(Avatar&)> *)&v74);
    PlayerAvatarComp::foreachMyAvatarInSceneTeam(AvatarComp, (std::function<ForeachPolicy(Avatar&)> *)&v75);
    std::function<ForeachPolicy ()(Avatar &)>::~function((std::function<ForeachPolicy(Avatar&)> *const)&v75);
    PlayerBlossomComp::setBlossomScheduleStateByGroup(std::shared_ptr<Group>,unsigned int)::{lambda(Avatar &)#2}::~Avatar((PlayerBlossomComp::setBlossomScheduleStateByGroup::<lambda(Avatar&)> *const)&v74);
    *(_DWORD *)(v3 + 96) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    VehicleComp = Player::getVehicleComp(this->player_);
    if ( !PlayerVehicleComp::getCurVehicleHpPercent(VehicleComp, (float *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v75,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "setBlossomScheduleStateByGroup",
        1464);
      v60 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v75, (const char (*)[8])"player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, &val);
      common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v61, (const char (*)[13])" has no boat");
      common::milog::MiLogStream::~MiLogStream(&v75);
    }
    v62 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    proto_log::PlayerLogBodyBlossomProgressFinish::set_vehicle_hp_percent(v62, *(float *)(v3 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v63 = this->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&v74, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyBlossomProgressFinish,void>(
      (std::shared_ptr<google::protobuf::Message> *const)(v3 + 192),
      (const std::shared_ptr<proto_log::PlayerLogBodyBlossomProgressFinish> *)(v3 + 160));
    Player::printStatLog(v63, (MessagePtr *)(v3 + 192), &v74, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v3 + 192));
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v74);
    std::shared_ptr<proto_log::PlayerLogBodyBlossomProgressFinish>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyBlossomProgressFinish> *const)(v3 + 160));
    std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 128));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  }
  result = 0LL;
LABEL_83:
  if ( v64._M_string_length == v3 )
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

// Line 1440: range 00000000171D9F14-00000000171D9F8B
ForeachPolicy __cdecl PlayerBlossomComp::setBlossomScheduleStateByGroup(std::shared_ptr<Group>,unsigned int)::{lambda(Player &)#1}::operator()(
        const PlayerBlossomComp::setBlossomScheduleStateByGroup::<lambda(Player&)> *const __closure,
        Player *player)
{
  PlayerEventComp *EventComp; // rbx
  std::shared_ptr<BaseEvent> v4; // [rsp+10h] [rbp-20h] BYREF

  EventComp = Player::getEventComp(player);
  std::shared_ptr<BaseEvent>::shared_ptr(&v4, &__closure->__event_ptr);
  PlayerEventComp::notifyEvent(EventComp, &v4);
  std::shared_ptr<BaseEvent>::~shared_ptr(&v4);
  return 0;
};

// Line 1440: range 00000000171F631E-00000000171F6343
void __cdecl PlayerBlossomComp::setBlossomScheduleStateByGroup(std::shared_ptr<Group>,unsigned int)::{lambda(Player &)#1}::Player(
        PlayerBlossomComp::setBlossomScheduleStateByGroup::<lambda(Player&)> *const this,
        PlayerBlossomComp::setBlossomScheduleStateByGroup::<lambda(Player&)> *a2)
{
  std::shared_ptr<BaseEvent>::shared_ptr(&this->__event_ptr, &a2->__event_ptr);
};

// Line 1440: range 00000000171F640E-00000000171F6433
void __cdecl PlayerBlossomComp::setBlossomScheduleStateByGroup(std::shared_ptr<Group>,unsigned int)::{lambda(Player &)#1}::Player(
        PlayerBlossomComp::setBlossomScheduleStateByGroup::<lambda(Player&)> *const this,
        const PlayerBlossomComp::setBlossomScheduleStateByGroup::<lambda(Player&)> *a2)
{
  std::shared_ptr<BaseEvent>::shared_ptr(&this->__event_ptr, &a2->__event_ptr);
};

// Line 1440: range 00000000171D9F8C-00000000171D9FA6
void __cdecl PlayerBlossomComp::setBlossomScheduleStateByGroup(std::shared_ptr<Group>,unsigned int)::{lambda(Player &)#1}::~Player(
        PlayerBlossomComp::setBlossomScheduleStateByGroup::<lambda(Player&)> *const this)
{
  std::shared_ptr<BaseEvent>::~shared_ptr(&this->__event_ptr);
};

// Line 1456: range 00000000171D9FA8-00000000171D9FE9
ForeachPolicy __cdecl PlayerBlossomComp::setBlossomScheduleStateByGroup(std::shared_ptr<Group>,unsigned int)::{lambda(Avatar &)#2}::operator()(
        const PlayerBlossomComp::setBlossomScheduleStateByGroup::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rbx
  uint32_t AvatarId; // eax

  v2 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomProgressFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure);
  AvatarId = Avatar::getAvatarId(avatar);
  proto_log::PlayerLogBodyBlossomProgressFinish::add_avatar_id_list(v2, AvatarId);
  return 0;
};

// Line 1456: range 00000000171F6526-00000000171F654B
void __cdecl PlayerBlossomComp::setBlossomScheduleStateByGroup(std::shared_ptr<Group>,unsigned int)::{lambda(Avatar &)#2}::Avatar(
        PlayerBlossomComp::setBlossomScheduleStateByGroup::<lambda(Avatar&)> *const this,
        PlayerBlossomComp::setBlossomScheduleStateByGroup::<lambda(Avatar&)> *a2)
{
  std::shared_ptr<proto_log::PlayerLogBodyBlossomProgressFinish>::shared_ptr(&this->__log_ptr, &a2->__log_ptr);
};

// Line 1456: range 00000000171F6616-00000000171F663B
void __cdecl PlayerBlossomComp::setBlossomScheduleStateByGroup(std::shared_ptr<Group>,unsigned int)::{lambda(Avatar &)#2}::Avatar(
        PlayerBlossomComp::setBlossomScheduleStateByGroup::<lambda(Avatar&)> *const this,
        const PlayerBlossomComp::setBlossomScheduleStateByGroup::<lambda(Avatar&)> *a2)
{
  std::shared_ptr<proto_log::PlayerLogBodyBlossomProgressFinish>::shared_ptr(&this->__log_ptr, &a2->__log_ptr);
};

// Line 1456: range 00000000171D9FEA-00000000171DA004
void __cdecl PlayerBlossomComp::setBlossomScheduleStateByGroup(std::shared_ptr<Group>,unsigned int)::{lambda(Avatar &)#2}::~Avatar(
        PlayerBlossomComp::setBlossomScheduleStateByGroup::<lambda(Avatar&)> *const this)
{
  std::shared_ptr<proto_log::PlayerLogBodyBlossomProgressFinish>::~shared_ptr(&this->__log_ptr);
};

// Line 1475: range 00000000171DB5A6-00000000171DB8A4
int32_t __cdecl PlayerBlossomComp::refreshBlossomDropRewardByGroup(
        PlayerBlossomComp *const this,
        GroupPtr *p_group_ptr)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t GroupId; // edx
  common::milog::MiLogStream *v10; // rbx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rbx
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  unsigned int Uid; // [rsp+10h] [rbp-40h] BYREF
  unsigned int val; // [rsp+14h] [rbp-3Ch] BYREF
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<Group>(0LL, p_group_ptr) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "refreshBlossomDropRewardByGroup",
      1478);
    v2 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v17,
           (const char (*)[45])"[PlayerBlossomComp] group_ptr is null, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v17);
    return -1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "refreshBlossomDropRewardByGroup",
      1482);
    v4 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v17,
           (const char (*)[59])"[PlayerBlossomComp] refreshBlossomDropRewardByGroup, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Uid = Player::getUid(this->player_);
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &Uid);
    v6 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v5, (const char (*)[13])" ,group_id: ");
    v7 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
    val = Group::getGroupId(v7);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v8 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
    GroupId = Group::getGroupId(v8);
    if ( PlayerBlossomComp::findBlossomCircleCampInfoByGroupId(this, GroupId) )
    {
      return 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "refreshBlossomDropRewardByGroup",
        1487);
      v10 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
              &v17,
              (const char (*)[69])"[PlayerBlossomComp] findBlossomCircleCampInfoByGroupId failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Uid = Player::getUid(this->player_);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &Uid);
      v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])" ,group_id: ");
      v13 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
      val = Group::getGroupId(v13);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v17);
      return -1;
    }
  }
};

// Line 1495: range 00000000171DB8A6-00000000171DBEAE
int32_t __cdecl PlayerBlossomComp::getBlossomBriefInfoList(
        PlayerBlossomComp *const this,
        const proto::GetBlossomBriefInfoListReq *req,
        proto::GetBlossomBriefInfoListRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  BlossomExcelConfigMgr *p_blossom_config_mgr; // rcx
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  int32_t result; // eax
  std::map<unsigned int,BlossomRefreshInfo>::iterator __for_begin_0; // [rsp+28h] [rbp-168h] BYREF
  std::map<unsigned int,BlossomRefreshInfo>::iterator __for_end_0; // [rsp+30h] [rbp-160h] BYREF
  std::map<unsigned int,BlossomCircleCampInfo>::const_iterator __for_begin_1; // [rsp+38h] [rbp-158h] BYREF
  std::map<unsigned int,BlossomCircleCampInfo>::const_iterator __for_end_1; // [rsp+40h] [rbp-150h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+48h] [rbp-148h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+50h] [rbp-140h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+58h] [rbp-138h]
  std::map<unsigned int,BlossomRefreshInfo> *__for_range_0; // [rsp+60h] [rbp-130h]
  const std::pair<unsigned int const,BlossomRefreshInfo> *v19; // [rsp+68h] [rbp-128h]
  std::tuple_element<0,const std::pair<unsigned int const,BlossomRefreshInfo> >::type *refresh_id; // [rsp+70h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,BlossomRefreshInfo> >::type *refresh_info; // [rsp+78h] [rbp-118h]
  const data::BlossomRefreshExcelConfig *refresh_config_ptr; // [rsp+80h] [rbp-110h]
  const std::map<unsigned int,BlossomCircleCampInfo> *__for_range_1; // [rsp+88h] [rbp-108h]
  const std::pair<unsigned int const,BlossomCircleCampInfo> *v24; // [rsp+90h] [rbp-100h]
  std::tuple_element<0,const std::pair<unsigned int const,BlossomCircleCampInfo> >::type *_; // [rsp+98h] [rbp-F8h]
  std::tuple_element<1,const std::pair<unsigned int const,BlossomCircleCampInfo> >::type *circle_camp_info; // [rsp+A0h] [rbp-F0h]
  proto::BlossomBriefInfo *proto_info; // [rsp+A8h] [rbp-E8h]
  std::shared_ptr<Config> v28; // [rsp+B0h] [rbp-E0h] BYREF
  common::milog::MiLogStream v29; // [rsp+C0h] [rbp-D0h] BYREF
  char v30[176]; // [rsp+E0h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 4 12 city_id:1497 48 48 16 city_id_set:1496";
  *(_QWORD *)(v3 + 16) = PlayerBlossomComp::getBlossomBriefInfoList;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862723] = -202116109;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 48));
  __for_range = proto::GetBlossomBriefInfoListReq::city_id_list(req);
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
    std::set<unsigned int>::insert(
      (std::set<unsigned int> *const)(v3 + 48),
      (const std::set<unsigned int>::value_type *)(v3 + 32));
    ++__for_begin;
  }
  __for_range_0 = &this->refresh_info_map_;
  __for_begin_0._M_node = std::map<unsigned int,BlossomRefreshInfo>::begin(&this->refresh_info_map_)._M_node;
  __for_end_0._M_node = std::map<unsigned int,BlossomRefreshInfo>::end(&this->refresh_info_map_)._M_node;
  while ( 1 )
  {
    if ( !std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v8 = 0;
      goto LABEL_27;
    }
    v19 = std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo>>::operator*(&__for_begin_0);
    refresh_id = std::get<0ul,unsigned int const,BlossomRefreshInfo>(v19);
    refresh_info = (std::tuple_element<1,const std::pair<unsigned int const,BlossomRefreshInfo> >::type *)std::get<1ul,unsigned int const,BlossomRefreshInfo>(v19);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v28);
    p_blossom_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28)->design_config.txt_config_mgr.blossom_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)refresh_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)refresh_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)refresh_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(refresh_id);
    }
    refresh_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomRefreshExcelConfig(
                           p_blossom_config_mgr,
                           *refresh_id);
    std::shared_ptr<Config>::~shared_ptr(&v28);
    if ( !refresh_config_ptr )
      break;
    if ( std::set<unsigned int>::count((const std::set<unsigned int> *const)(v3 + 48), &refresh_config_ptr->city_id) )
    {
      __for_range_1 = &refresh_info->circle_camp_info_map;
      __for_begin_1._M_node = std::map<unsigned int,BlossomCircleCampInfo>::begin(&refresh_info->circle_camp_info_map)._M_node;
      __for_end_1._M_node = std::map<unsigned int,BlossomCircleCampInfo>::end(__for_range_1)._M_node;
      while ( std::operator!=(&__for_begin_1, &__for_end_1) )
      {
        v24 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,BlossomCircleCampInfo>>::operator*(&__for_begin_1);
        _ = std::get<0ul,unsigned int const,BlossomCircleCampInfo>(v24);
        circle_camp_info = (std::tuple_element<1,const std::pair<unsigned int const,BlossomCircleCampInfo> >::type *)std::get<1ul,unsigned int const,BlossomCircleCampInfo>(v24);
        proto_info = proto::GetBlossomBriefInfoListRsp::add_brief_info_list(rsp_0);
        if ( PlayerBlossomComp::fillBlossomBriefInfo(this, circle_camp_info, proto_info) )
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/blossom/player_blossom_comp.cpp",
            "getBlossomBriefInfoList",
            1521);
          v7 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                 &v29,
                 (const char (*)[55])"[PlayerBlossomComp] fillBlossomBriefInfo failed, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          goto LABEL_16;
        }
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,BlossomCircleCampInfo>>::operator++(&__for_begin_1);
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo>>::operator++(&__for_begin_0);
  }
  common::milog::MiLogStream::create(
    &v29,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/blossom/player_blossom_comp.cpp",
    "getBlossomBriefInfoList",
    1507);
  v7 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
         &v29,
         (const char (*)[64])"[PlayerBlossomComp] findBlossomRefreshExcelConfig failed, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
LABEL_16:
  *(_DWORD *)(v3 + 32) = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
  common::milog::MiLogStream::~MiLogStream(&v29);
  v8 = -1;
LABEL_27:
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 48));
  result = v8;
  if ( v30 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1531: range 00000000171DBEB0-00000000171DC32C
int32_t __cdecl PlayerBlossomComp::openBlossomCircleCampGuide(
        PlayerBlossomComp *const this,
        const proto::OpenBlossomCircleCampGuideNotify *notify)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  int32_t v6; // r14d
  __int64 v7; // rsi
  __int64 v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,BlossomCircleCampInfo>::iterator __for_begin_0; // [rsp+10h] [rbp-140h] BYREF
  std::map<unsigned int,BlossomCircleCampInfo>::iterator __for_end_0; // [rsp+18h] [rbp-138h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-130h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+28h] [rbp-128h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-120h]
  BlossomRefreshInfo *refresh_info; // [rsp+38h] [rbp-118h]
  std::map<unsigned int,BlossomCircleCampInfo> *__for_range_0; // [rsp+40h] [rbp-110h]
  std::pair<unsigned int const,BlossomCircleCampInfo> *__in; // [rsp+48h] [rbp-108h]
  std::tuple_element<0,std::pair<unsigned int const,BlossomCircleCampInfo> >::type *circle_camp_id; // [rsp+50h] [rbp-100h]
  std::tuple_element<1,std::pair<unsigned int const,BlossomCircleCampInfo> >::type *circle_camp_info; // [rsp+58h] [rbp-F8h]
  common::milog::MiLogStream v20; // [rsp+60h] [rbp-F0h] BYREF
  char v21[208]; // [rsp+80h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 19 circle_camp_id:1533 48 8 9 iter:1538 80 48 30 notify_circle_camp_id_set:1532";
  *(_QWORD *)(v2 + 16) = PlayerBlossomComp::openBlossomCircleCampGuide;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 80));
  __for_range = proto::OpenBlossomCircleCampGuideNotify::circle_camp_id_list(notify);
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
    std::set<unsigned int>::insert(
      (std::set<unsigned int> *const)(v2 + 80),
      (const std::set<unsigned int>::value_type *)(v2 + 32));
    ++__for_begin;
  }
  *(_DWORD *)(v2 + 32) = proto::OpenBlossomCircleCampGuideNotify::refresh_id(notify);
  *(std::map<unsigned int,BlossomRefreshInfo>::iterator *)(v2 + 48) = std::map<unsigned int,BlossomRefreshInfo>::find(
                                                                        &this->refresh_info_map_,
                                                                        (const std::map<unsigned int,BlossomRefreshInfo>::key_type *)(v2 + 32));
  __for_end_0._M_node = std::map<unsigned int,BlossomRefreshInfo>::end(&this->refresh_info_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo> >::_Self *)(v2 + 48),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo> >::_Self *)&__for_end_0) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "openBlossomCircleCampGuide",
      1541);
    v5 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v20,
           (const char (*)[50])"[PlayerBlossomComp] find refresh_id failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v2 + 32) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v20);
    v6 = -1;
  }
  else
  {
    refresh_info = &std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo> > *const)(v2 + 48))->second;
    __for_range_0 = &refresh_info->circle_camp_info_map;
    __for_begin_0._M_node = std::map<unsigned int,BlossomCircleCampInfo>::begin(&refresh_info->circle_camp_info_map)._M_node;
    __for_end_0._M_node = std::map<unsigned int,BlossomCircleCampInfo>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomCircleCampInfo>>::operator*(&__for_begin_0);
      circle_camp_id = std::get<0ul,unsigned int const,BlossomCircleCampInfo>(__in);
      circle_camp_info = std::get<1ul,unsigned int const,BlossomCircleCampInfo>(__in);
      if ( std::set<unsigned int>::count((const std::set<unsigned int> *const)(v2 + 80), circle_camp_id) )
      {
        v7 = ((_BYTE)circle_camp_info + 20) & 7;
        v8 = (*(_BYTE *)(((unsigned __int64)&circle_camp_info->is_guide_opened >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&circle_camp_info->is_guide_opened >> 3) + 0x7FFF8000));
        if ( (_BYTE)v8 )
          __asan_report_store1(&circle_camp_info->is_guide_opened, v7, v8);
        circle_camp_info->is_guide_opened = 1;
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomCircleCampInfo>>::operator++(&__for_begin_0);
    }
    v6 = 0;
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 80));
  result = v6;
  if ( v21 == (char *)v2 )
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

// Line 1559: range 00000000171DC32E-00000000171DC351
void __cdecl PlayerBlossomComp::onPlayerLevelUp(PlayerBlossomComp *const this, const PlayerLevelupEvent *event)
{
  PlayerBlossomComp::tryRefresh(this, 1);
};

// Line 1564: range 00000000171DC352-00000000171DC69D
void __cdecl PlayerBlossomComp::onPlayerWorldLevelChange(
        PlayerBlossomComp *const this,
        const PlayerWorldLevelChangeEvent *event)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  uint32_t *p_state; // rax
  __int64 v8; // rsi
  uint32_t new_world_level; // ecx
  char v10; // al
  bool is_changed; // [rsp+1Bh] [rbp-95h]
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  std::map<unsigned int,BlossomRefreshInfo>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,BlossomRefreshInfo>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,BlossomCircleCampInfo>::iterator __for_begin_0; // [rsp+30h] [rbp-80h] BYREF
  std::map<unsigned int,BlossomCircleCampInfo>::iterator __for_end_0; // [rsp+38h] [rbp-78h] BYREF
  std::map<unsigned int,BlossomRefreshInfo> *__for_range; // [rsp+40h] [rbp-70h]
  std::pair<unsigned int const,BlossomRefreshInfo> *__in; // [rsp+48h] [rbp-68h]
  std::tuple_element<0,std::pair<unsigned int const,BlossomRefreshInfo> >::type *_; // [rsp+50h] [rbp-60h]
  std::tuple_element<1,std::pair<unsigned int const,BlossomRefreshInfo> >::type *refresh_info; // [rsp+58h] [rbp-58h]
  std::map<unsigned int,BlossomCircleCampInfo> *__for_range_0; // [rsp+60h] [rbp-50h]
  std::pair<unsigned int const,BlossomCircleCampInfo> *v23; // [rsp+68h] [rbp-48h]
  std::tuple_element<0,std::pair<unsigned int const,BlossomCircleCampInfo> >::type *__0; // [rsp+70h] [rbp-40h]
  std::tuple_element<1,std::pair<unsigned int const,BlossomCircleCampInfo> >::type *circle_camp_info; // [rsp+78h] [rbp-38h]
  common::milog::MiLogStream v26; // [rsp+80h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v26,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/blossom/player_blossom_comp.cpp",
    "onPlayerWorldLevelChange",
    1565);
  v2 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
         &v26,
         (const char (*)[48])"[PlayerBlossomComp] onPlayerWorldLevelUp, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
  v4 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v3, (const char (*)[20])" ,old_world_level: ");
  v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &event->old_world_level);
  v6 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v5, (const char (*)[20])" ,new_world_level: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &event->new_world_level);
  common::milog::MiLogStream::~MiLogStream(&v26);
  is_changed = 0;
  __for_range = &this->refresh_info_map_;
  __for_begin._M_node = std::map<unsigned int,BlossomRefreshInfo>::begin(&this->refresh_info_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,BlossomRefreshInfo>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,BlossomRefreshInfo>(__in);
    refresh_info = std::get<1ul,unsigned int const,BlossomRefreshInfo>(__in);
    __for_range_0 = &refresh_info->circle_camp_info_map;
    __for_begin_0._M_node = std::map<unsigned int,BlossomCircleCampInfo>::begin(&refresh_info->circle_camp_info_map)._M_node;
    __for_end_0._M_node = std::map<unsigned int,BlossomCircleCampInfo>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v23 = std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomCircleCampInfo>>::operator*(&__for_begin_0);
      __0 = std::get<0ul,unsigned int const,BlossomCircleCampInfo>(v23);
      circle_camp_info = std::get<1ul,unsigned int const,BlossomCircleCampInfo>(v23);
      p_state = &circle_camp_info->state;
      v8 = (((_BYTE)circle_camp_info + 12) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_state);
      }
      if ( circle_camp_info->state <= 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&event->new_world_level >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&event->new_world_level >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&event->new_world_level);
        }
        new_world_level = event->new_world_level;
        v10 = *(_BYTE *)(((unsigned __int64)&circle_camp_info->valid_world_level >> 3) + 0x7FFF8000);
        if ( v10 != 0 && v10 <= 3 )
        {
          LOBYTE(v8) = v10 != 0;
          __asan_report_store4(&circle_camp_info->valid_world_level, v8, &circle_camp_info->valid_world_level);
        }
        circle_camp_info->valid_world_level = new_world_level;
        is_changed = 1;
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomCircleCampInfo>>::operator++(&__for_begin_0);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo>>::operator++(&__for_begin);
  }
  if ( is_changed )
    PlayerBlossomComp::broadcastBlossomBriefInfo(this);
};

// Line 1589: range 00000000171DC69E-00000000171DC76F
void __cdecl PlayerBlossomComp::onFinishQuest(PlayerBlossomComp *const this, const FinishQuestEvent *event)
{
  BlossomExcelConfigMgr *p_blossom_config_mgr; // rcx
  bool v3; // bl
  std::shared_ptr<Config> v4[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v4);
  p_blossom_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4)->design_config.txt_config_mgr.blossom_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&event->quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->quest_id);
  }
  v3 = !BlossomExcelConfigMgr::isRefreshQuest(p_blossom_config_mgr, event->quest_id);
  std::shared_ptr<Config>::~shared_ptr(v4);
  if ( !v3 )
    PlayerBlossomComp::tryRefresh(this, 1);
};

// Line 1599: range 00000000171DC770-00000000171DC8B9
void __cdecl PlayerBlossomComp::onActivityCondMeet(PlayerBlossomComp *const this, const ActivityCondMeetEvent *event)
{
  unsigned int *v2; // rax
  unsigned int *v3; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  bool isRefreshActivityCond; // bl
  bool is_found; // [rsp+13h] [rbp-3Dh]
  unsigned int activity_cond_id; // [rsp+14h] [rbp-3Ch]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-28h]
  std::shared_ptr<Config> v11[2]; // [rsp+30h] [rbp-20h] BYREF

  is_found = 0;
  __for_range = &event->cond_id_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(&event->cond_id_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&event->cond_id_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v2 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    activity_cond_id = *v3;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v11);
    v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v11);
    isRefreshActivityCond = BlossomExcelConfigMgr::isRefreshActivityCond(
                              &v4->design_config.txt_config_mgr.blossom_config_mgr,
                              activity_cond_id);
    std::shared_ptr<Config>::~shared_ptr(v11);
    if ( isRefreshActivityCond )
    {
      is_found = 1;
      break;
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( is_found )
    PlayerBlossomComp::tryRefresh(this, 1);
};

// Line 1617: range 00000000171DC8BA-00000000171DCA03
void __cdecl PlayerBlossomComp::onActivityCondExpire(
        PlayerBlossomComp *const this,
        const ActivityCondExpireEvent *event)
{
  unsigned int *v2; // rax
  unsigned int *v3; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  bool isRefreshActivityCond; // bl
  bool is_found; // [rsp+13h] [rbp-3Dh]
  unsigned int activity_cond_id; // [rsp+14h] [rbp-3Ch]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-28h]
  std::shared_ptr<Config> v11[2]; // [rsp+30h] [rbp-20h] BYREF

  is_found = 0;
  __for_range = &event->cond_id_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(&event->cond_id_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&event->cond_id_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v2 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    activity_cond_id = *v3;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v11);
    v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v11);
    isRefreshActivityCond = BlossomExcelConfigMgr::isRefreshActivityCond(
                              &v4->design_config.txt_config_mgr.blossom_config_mgr,
                              activity_cond_id);
    std::shared_ptr<Config>::~shared_ptr(v11);
    if ( isRefreshActivityCond )
    {
      is_found = 1;
      break;
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( is_found )
    PlayerBlossomComp::tryRefresh(this, 1);
};

// Line 1635: range 00000000171DCA04-00000000171DCED5
void __cdecl PlayerBlossomComp::onGroupsReplace(PlayerBlossomComp *const this, const GroupsReplaceEvent *event)
{
  std::set<unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  unsigned int *v6; // rax
  unsigned int *v7; // rdx
  unsigned int *v8; // rax
  unsigned int *v9; // rdx
  unsigned int val; // [rsp+14h] [rbp-11Ch] BYREF
  unsigned int circle_camp_id; // [rsp+18h] [rbp-118h]
  unsigned int group_id; // [rsp+1Ch] [rbp-114h]
  std::set<unsigned int>::iterator __for_begin_0; // [rsp+20h] [rbp-110h] BYREF
  std::set<unsigned int>::iterator __for_end_0; // [rsp+28h] [rbp-108h] BYREF
  const std::unordered_set<unsigned int> *__for_range; // [rsp+30h] [rbp-100h]
  std::set<unsigned int> *__for_range_0; // [rsp+38h] [rbp-F8h]
  std::tuple_element<0,std::pair<int,unsigned int> >::type *retcode; // [rsp+40h] [rbp-F0h]
  std::tuple_element<1,std::pair<int,unsigned int> >::type *new_camp_id; // [rsp+48h] [rbp-E8h]
  BlossomCircleCampInfo *circle_camp_info_ptr; // [rsp+50h] [rbp-E0h]
  std::pair<int,unsigned int> __for_end; // [rsp+58h] [rbp-D8h] BYREF
  common::milog::MiLogStream v21; // [rsp+60h] [rbp-D0h] BYREF
  char v22[176]; // [rsp+80h] [rbp-B0h] BYREF

  v2 = (std::set<unsigned int> *)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 15 target_set:1637";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)PlayerBlossomComp::onGroupsReplace;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  common::milog::MiLogStream::create(
    &v21,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/blossom/player_blossom_comp.cpp",
    "onGroupsReplace",
    1636);
  v5 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
         &v21,
         (const char (*)[43])"[PlayerBlossomComp] onGroupsReplace, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
  common::milog::MiLogStream::~MiLogStream(&v21);
  std::set<unsigned int>::set(v2 + 1);
  __for_range = &event->replaced_groups;
  __for_end_0._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_set<unsigned int>::begin(&event->replaced_groups)._M_cur;
  __for_end = (std::pair<int,unsigned int>)std::unordered_set<unsigned int>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end_0,
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end) )
  {
    v6 = (unsigned int *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_const_iterator<unsigned int,true,false> *const)&__for_end_0);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    group_id = *v7;
    circle_camp_info_ptr = PlayerBlossomComp::findBlossomCircleCampInfoByGroupId(this, group_id);
    if ( circle_camp_info_ptr )
      std::set<unsigned int>::insert(v2 + 1, &circle_camp_info_ptr->circle_camp_id);
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_const_iterator<unsigned int,true,false> *const)&__for_end_0);
  }
  if ( !std::set<unsigned int>::empty(v2 + 1) )
  {
    __for_range_0 = v2 + 1;
    __for_begin_0._M_node = std::set<unsigned int>::begin(v2 + 1)._M_node;
    __for_end_0._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v8 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin_0);
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      circle_camp_id = *v9;
      __for_end = PlayerBlossomComp::findNextCircleCampId(this, circle_camp_id);
      retcode = std::get<0ul,int,unsigned int>(&__for_end);
      new_camp_id = std::get<1ul,int,unsigned int>(&__for_end);
      if ( *(_BYTE *)(((unsigned __int64)retcode >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retcode >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(retcode);
      }
      if ( !*retcode )
      {
        if ( *(_BYTE *)(((unsigned __int64)new_camp_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)new_camp_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)new_camp_id >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(new_camp_id);
        }
        PlayerBlossomComp::updateCircleCampId(this, circle_camp_id, *new_camp_id, 0);
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin_0);
    }
  }
  std::set<unsigned int>::~set(v2 + 1);
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1664: range 00000000171DCED6-00000000171DD445
int32_t __cdecl PlayerBlossomComp::genCityRefreshIdMap(
        PlayerBlossomComp *const this,
        std::map<unsigned int,std::vector<unsigned int>> *city_refresh_id_map)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  PlayerBasicComp *BasicComp; // rax
  BlossomExcelConfigMgr *p_blossom_config_mgr; // rcx
  bool v8; // r14
  std::vector<data::BlossomRefreshCond> *p_refresh_cond_vec; // rsi
  std::vector<unsigned int> *v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+18h] [rbp-E8h] BYREF
  uint32_t now; // [rsp+1Ch] [rbp-E4h]
  uint32_t time_offset; // [rsp+20h] [rbp-E0h]
  uint32_t level; // [rsp+24h] [rbp-DCh]
  std::unordered_map<unsigned int,data::BlossomRefreshExcelConfig>::const_iterator __for_begin; // [rsp+28h] [rbp-D8h] BYREF
  std::unordered_map<unsigned int,data::BlossomRefreshExcelConfig>::const_iterator __for_end; // [rsp+30h] [rbp-D0h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo> >::_Self __y; // [rsp+38h] [rbp-C8h] BYREF
  const std::unordered_map<unsigned int,data::BlossomRefreshExcelConfig> *__for_range; // [rsp+40h] [rbp-C0h]
  const std::pair<unsigned int const,data::BlossomRefreshExcelConfig> *v24; // [rsp+48h] [rbp-B8h]
  std::tuple_element<0,const std::pair<unsigned int const,data::BlossomRefreshExcelConfig> >::type *refresh_id; // [rsp+50h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BlossomRefreshExcelConfig> >::type *excel_config; // [rsp+58h] [rbp-A8h]
  std::shared_ptr<Config> v27; // [rsp+60h] [rbp-A0h] BYREF
  common::milog::MiLogStream v28; // [rsp+70h] [rbp-90h] BYREF
  char v29[112]; // [rsp+90h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 9 iter:1672";
  *(_QWORD *)(v2 + 16) = PlayerBlossomComp::genCityRefreshIdMap;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  now = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v27);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27);
  time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v5->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v27);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  level = PlayerBasicComp::getLevel(BasicComp);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v27);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.blossom_config_mgr.blossom_refresh_excel_config_map;
  std::shared_ptr<Config>::~shared_ptr(&v27);
  __for_begin._M_cur = std::unordered_map<unsigned int,data::BlossomRefreshExcelConfig>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::BlossomRefreshExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::BlossomRefreshExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v24 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlossomRefreshExcelConfig>,false,false>::operator*(&__for_begin);
    refresh_id = std::get<0ul,unsigned int const,data::BlossomRefreshExcelConfig>(v24);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::BlossomRefreshExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BlossomRefreshExcelConfig>(v24);
    *(std::map<unsigned int,BlossomRefreshInfo>::iterator *)(v2 + 32) = std::map<unsigned int,BlossomRefreshInfo>::find(
                                                                          &this->refresh_info_map_,
                                                                          refresh_id);
    __y._M_node = std::map<unsigned int,BlossomRefreshInfo>::end(&this->refresh_info_map_)._M_node;
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo> >::_Self *)(v2 + 32),
            &__y) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v27);
      p_blossom_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.blossom_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&excel_config->city_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->city_id >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&excel_config->city_id);
      }
      v8 = !BlossomExcelConfigMgr::checkCityBlossomIsOpen(p_blossom_config_mgr, excel_config->city_id, level);
      std::shared_ptr<Config>::~shared_ptr(&v27);
      if ( !v8 )
      {
        p_refresh_cond_vec = &excel_config->refresh_cond_vec;
        if ( *(_BYTE *)(((unsigned __int64)refresh_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)refresh_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)refresh_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(refresh_id);
        }
        if ( PlayerBlossomComp::checkRefreshCondVecIsMeet(this, *refresh_id, p_refresh_cond_vec) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&excel_config->refresh_count >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)excel_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->refresh_count >> 3)
                                                                        + 0x7FFF8000) )
          {
            __asan_report_load4(&excel_config->refresh_count);
          }
          if ( excel_config->refresh_count )
          {
            v10 = std::map<unsigned int,std::vector<unsigned int>>::operator[](
                    city_refresh_id_map,
                    &excel_config->city_id);
            std::vector<unsigned int>::push_back(v10, refresh_id);
            common::milog::MiLogStream::create(
              &v28,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/blossom/player_blossom_comp.cpp",
              "genCityRefreshIdMap",
              1700);
            v11 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                    &v28,
                    (const char (*)[40])"[PlayerBlossomComp] need refresh, uid: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            val = Player::getUid(this->player_);
            v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
            v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v12,
                    (const char (*)[15])" ,refresh_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, refresh_id);
            common::milog::MiLogStream::~MiLogStream(&v28);
          }
        }
      }
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlossomRefreshExcelConfig>,false,false>::operator++(&__for_begin);
  }
  result = 0;
  if ( v29 == (char *)v2 )
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

// Line 1707: range 00000000171DD6C6-00000000171DDD04
__int64 __fastcall PlayerBlossomComp::genInitialSectionId(
        PlayerBlossomComp *const this,
        uint32_t city_id,
        uint32_t *initial_section_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // r14
  unsigned int v8; // r14d
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  unsigned __int64 v13; // r14
  std::vector<unsigned int>::iterator v14; // rax
  int v15; // eax
  std::vector<unsigned int>::size_type v16; // rsi
  std::vector<unsigned int>::reference v17; // rax
  uint32_t *v18; // rdx
  uint32_t v19; // ecx
  char v20; // dl
  __int64 v21; // rdx
  std::pair<unsigned int,unsigned int> *v22; // r14
  std::pair<unsigned int,int> *v23; // rax
  __int64 result; // rax
  std::vector<unsigned int> *__result; // [rsp+8h] [rbp-158h]
  bool __last; // [rsp+10h] [rbp-150h]
  unsigned int *__lasta; // [rsp+10h] [rbp-150h]
  uint32_t time_offset; // [rsp+30h] [rbp-130h]
  std::pair<unsigned int,unsigned int> __t; // [rsp+38h] [rbp-128h] BYREF
  std::shared_ptr<Config> v31; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v32; // [rsp+50h] [rbp-110h] BYREF
  char v33[240]; // [rsp+70h] [rbp-F0h] BYREF
  PlayerBlossomComp::genInitialSectionId::<lambda(uint32_t)> v34; // 0:rcx.8,8:r8.8

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 8 now:1723 48 4 12 city_id:1706 64 24 19 section_id_vec:1709 128 24 23 tmp_section_id_vec:1725";
  *(_QWORD *)(v3 + 16) = PlayerBlossomComp::genInitialSectionId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234881024;
  v5[536862723] = -218959118;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = city_id;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 64));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v31);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
  __last = BlossomExcelConfigMgr::getBlossomSectionIdVec(
             &v6->design_config.txt_config_mgr.blossom_config_mgr,
             *(_DWORD *)(v3 + 48),
             (std::vector<unsigned int> *)(v3 + 64)) != 0;
  std::shared_ptr<Config>::~shared_ptr(&v31);
  if ( __last )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "genInitialSectionId",
      1712);
    v7 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           &v32,
           (const char (*)[57])"[PlayerBlossomComp] getBlossomSectionIdVec failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v3 + 32) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v32);
    v8 = -1;
  }
  else if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "genInitialSectionId",
      1718);
    v9 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v32,
           (const char (*)[51])"[PlayerBlossomComp] section_id_vec is empty, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v3 + 32) = Player::getUid(this->player_);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
    v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" ,city_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v32);
    v8 = -1;
  }
  else
  {
    *(_DWORD *)(v3 + 32) = common::tools::TimeUtils::getNow();
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v31);
    v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
    time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v12->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v31);
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 128));
    v13 = *(unsigned int *)(v3 + 32) | ((unsigned __int64)time_offset << 32);
    __result = std::back_inserter<std::vector<unsigned int>>((std::vector<unsigned int> *)(v3 + 128)).container;
    __lasta = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 64))._M_current;
    v14._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 64))._M_current;
    *(_QWORD *)&v34.__now = v13;
    v34.__this = this;
    std::copy_if<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,std::back_insert_iterator<std::vector<unsigned int>>,PlayerBlossomComp::genInitialSectionId(unsigned int,unsigned int &)::{lambda(unsigned int)#1}>(
      v14,
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)__lasta,
      (std::back_insert_iterator<std::vector<unsigned int> >)__result,
      v34);
    if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 128)) )
      std::vector<unsigned int>::operator=(
        (std::vector<unsigned int> *const)(v3 + 128),
        (const std::vector<unsigned int> *)(v3 + 64));
    v15 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 128));
    v16 = common::tools::RandomUtils::rand<unsigned int>(0, v15 - 1);
    v17 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 128), v16);
    v18 = v17;
    if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v17);
    }
    v19 = *v18;
    v20 = *(_BYTE *)(((unsigned __int64)initial_section_id >> 3) + 0x7FFF8000);
    LOBYTE(v16) = v20 != 0;
    v21 = (v20 != 0) & (unsigned __int8)((char)(((unsigned __int8)initial_section_id & 7) + 3) >= v20);
    if ( (_BYTE)v21 )
      __asan_report_store4(initial_section_id, v16, v21);
    *initial_section_id = v19;
    __t = std::make_pair<unsigned int &,unsigned int &>(initial_section_id, (unsigned int *)(v3 + 32));
    v22 = std::move<std::pair<unsigned int,unsigned int>>(&__t);
    v23 = std::map<unsigned int,std::pair<unsigned int,int>>::operator[](
            &this->initial_section_map_,
            (const std::map<unsigned int,std::pair<unsigned int,int>>::key_type *)(v3 + 48));
    std::pair<unsigned int,int>::operator=<unsigned int,unsigned int>(v23, v22);
    v8 = 0;
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 128));
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 64));
  result = v8;
  if ( v33 == (char *)v3 )
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

// Line 1727: range 00000000171DD446-00000000171DD6C4
_BOOL8 __fastcall PlayerBlossomComp::genInitialSectionId(unsigned int,unsigned int &)::{lambda(unsigned int)#1}::operator()(
        unsigned __int64 __closure,
        uint32_t section_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  _BOOL8 result; // rax
  time_t v6; // r15
  time_t v7; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v8; // rdx
  unsigned int *p_second; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+28h] [rbp-98h] BYREF
  char v11[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 section_id:1727 64 8 9 iter:1729";
  *(_QWORD *)(v2 + 16) = PlayerBlossomComp::genInitialSectionId(unsigned int,unsigned int &)::{lambda(unsigned int)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = section_id;
  if ( *(_BYTE *)(((__closure + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure + 8);
  *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                  (std::map<unsigned int,unsigned int> *const)(*(_QWORD *)(__closure + 8) + 80LL),
                                                                  (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,unsigned int>::end((std::map<unsigned int,unsigned int> *const)(*(_QWORD *)(__closure + 8) + 80LL))._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 1LL;
  }
  else
  {
    if ( *(_BYTE *)(((__closure + 4) >> 3) + 0x7FFF8000) != 0
      && (char)(((__closure + 4) & 7) + 3) >= *(_BYTE *)(((__closure + 4) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(__closure + 4);
    }
    v6 = *(unsigned int *)(__closure + 4);
    if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((__closure >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(__closure);
    v7 = *(unsigned int *)__closure;
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    p_second = &v8->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = common::tools::TimeUtils::isSameDay(v8->second, v7, v6);
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

// Line 1761: range 00000000171DDD06-00000000171DE574
__int64 __fastcall PlayerBlossomComp::genCandidateSectionIdVec(
        PlayerBlossomComp *const this,
        uint32_t city_id,
        std::vector<unsigned int> *candidate_section_id_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  unsigned int v8; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool v10; // r14
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::vector<unsigned int>::iterator v19; // rax
  unsigned int *v20; // r14
  __int64 result; // rax
  bool is_initial_section_valid; // [rsp+2Bh] [rbp-145h]
  unsigned int val; // [rsp+2Ch] [rbp-144h] BYREF
  uint32_t now; // [rsp+30h] [rbp-140h]
  uint32_t time_offset; // [rsp+34h] [rbp-13Ch]
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > __i; // [rsp+38h] [rbp-138h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,int> > >::_Self __y; // [rsp+40h] [rbp-130h] BYREF
  const std::pair<unsigned int,int> *initial_section_info; // [rsp+48h] [rbp-128h]
  std::shared_ptr<Config> v30; // [rsp+50h] [rbp-120h] BYREF
  common::milog::MiLogStream v31; // [rsp+60h] [rbp-110h] BYREF
  char v32[240]; // [rsp+80h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 23 initial_section_id:1762 48 4 12 city_id:1760 64 8 9 iter:1764 96 8 17 initial_iter:180"
                        "1 128 24 19 section_id_vec:1787";
  *(_QWORD *)(v3 + 16) = PlayerBlossomComp::genCandidateSectionIdVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = city_id;
  *(_DWORD *)(v3 + 32) = 0;
  is_initial_section_valid = 0;
  *(std::map<unsigned int,std::pair<unsigned int,int>>::iterator *)(v3 + 64) = std::map<unsigned int,std::pair<unsigned int,int>>::find(
                                                                                 &this->initial_section_map_,
                                                                                 (const std::map<unsigned int,std::pair<unsigned int,int>>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::pair<unsigned int,int>>::end(&this->initial_section_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,int> > >::_Self *)(v3 + 64),
         &__y) )
  {
    initial_section_info = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,int>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,int> > > *const)(v3 + 64))->second;
    now = common::tools::TimeUtils::getNow();
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v30);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
    time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v6->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v30);
    if ( *(_BYTE *)(((unsigned __int64)&initial_section_info->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)initial_section_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&initial_section_info->second >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&initial_section_info->second);
    }
    if ( common::tools::TimeUtils::isSameDay(now, initial_section_info->second, time_offset) )
    {
      if ( *(_BYTE *)(((unsigned __int64)initial_section_info >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)initial_section_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)initial_section_info >> 3)
                                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(initial_section_info);
      }
      *(_DWORD *)(v3 + 32) = initial_section_info->first;
      is_initial_section_valid = 1;
    }
  }
  if ( is_initial_section_valid
    || !(unsigned int)PlayerBlossomComp::genInitialSectionId(this, *(_DWORD *)(v3 + 48), (uint32_t *)(v3 + 32)) )
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 128));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v30);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
    v10 = BlossomExcelConfigMgr::getBlossomSectionIdVec(
            &v9->design_config.txt_config_mgr.blossom_config_mgr,
            *(_DWORD *)(v3 + 48),
            (std::vector<unsigned int> *)(v3 + 128)) != 0;
    std::shared_ptr<Config>::~shared_ptr(&v30);
    if ( v10 )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "genCandidateSectionIdVec",
        1790);
      v11 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
              &v31,
              (const char (*)[57])"[PlayerBlossomComp] getBlossomSectionIdVec failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    else
    {
      if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/blossom/player_blossom_comp.cpp",
          "genCandidateSectionIdVec",
          1796);
        v12 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                &v31,
                (const char (*)[51])"[PlayerBlossomComp] section_id_vec is empty, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
        v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" ,city_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v31);
        v8 = -1;
        goto LABEL_29;
      }
      M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 128))._M_current;
      v16._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 128))._M_current;
      *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 96) = std::find<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,unsigned int>(
                                                                                               v16,
                                                                                               (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                                                                                               (const unsigned int *)(v3 + 32));
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,int> > >::_Base_ptr)std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 128))._M_current;
      if ( !__gnu_cxx::operator==<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 96),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__y) )
      {
        std::vector<unsigned int>::clear(candidate_section_id_vec);
        v19._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 128))._M_current;
        std::vector<unsigned int>::assign<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,void>(
          candidate_section_id_vec,
          *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 96),
          v19);
        v20 = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 128))._M_current;
        __i._M_current = std::vector<unsigned int>::end(candidate_section_id_vec)._M_current;
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
          (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__y,
          &__i);
        std::vector<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,void>(
          candidate_section_id_vec,
          (std::vector<unsigned int>::const_iterator)__y._M_node,
          (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v20,
          *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 96));
        v8 = 0;
        goto LABEL_29;
      }
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "genCandidateSectionIdVec",
        1804);
      v17 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v31,
              (const char (*)[41])"[PlayerBlossomComp] initial_section_id: ");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 32));
      v11 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v18,
              (const char (*)[18])" not found, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
    common::milog::MiLogStream::~MiLogStream(&v31);
    v8 = -1;
LABEL_29:
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 128));
    goto LABEL_30;
  }
  common::milog::MiLogStream::create(
    &v31,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/blossom/player_blossom_comp.cpp",
    "genCandidateSectionIdVec",
    1781);
  v7 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
         &v31,
         (const char (*)[54])"[PlayerBlossomComp] genInitialSectionId failed, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
  common::milog::MiLogStream::~MiLogStream(&v31);
  v8 = -1;
LABEL_30:
  result = v8;
  if ( v32 == (char *)v3 )
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

// Line 1817: range 00000000171DE73E-00000000171DFADF
__int64 __fastcall PlayerBlossomComp::genCircleCampIdMap(
        PlayerBlossomComp *const this,
        uint32_t city_id,
        const std::vector<unsigned int> *refresh_id_vec,
        std::map<unsigned int,std::vector<unsigned int>> *circle_camp_id_map)
{
  unsigned int v4; // r15d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v15; // rax
  _DWORD *v16; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // r14
  uint32_t refresh_count; // r14d
  char *v20; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v21; // rax
  uint32_t *v22; // rdx
  char v23; // cl
  PlayerBasicComp *BasicComp; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v25; // rax
  _DWORD *v26; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  bool v28; // r14
  common::milog::MiLogStream *v29; // r14
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  int v32; // r14d
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v34; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v35; // rax
  _DWORD *v36; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  common::milog::MiLogStream *v38; // r14
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v42; // rax
  _DWORD *v43; // rdx
  std::map<unsigned int,std::vector<unsigned int>>::mapped_type *v44; // rax
  std::vector<unsigned int>::size_type v45; // r14
  std::map<unsigned int,unsigned int>::mapped_type *v46; // rax
  _DWORD *v47; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // rax
  BlossomExcelConfigMgr *p_blossom_config_mgr; // rcx
  bool v50; // r14
  std::vector<unsigned int> *v51; // rax
  common::milog::MiLogStream *v52; // r14
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  __int64 result; // rax
  std::mt19937 *__g; // [rsp+8h] [rbp-268h]
  bool is_all_find; // [rsp+3Fh] [rbp-231h]
  unsigned int val; // [rsp+40h] [rbp-230h] BYREF
  uint32_t level; // [rsp+44h] [rbp-22Ch]
  std::vector<unsigned int>::iterator __for_begin_0; // [rsp+48h] [rbp-228h] BYREF
  std::vector<unsigned int>::iterator __for_end_0; // [rsp+50h] [rbp-220h] BYREF
  std::vector<unsigned int>::iterator __for_begin_1; // [rsp+58h] [rbp-218h] BYREF
  std::vector<unsigned int>::iterator __for_end_1; // [rsp+60h] [rbp-210h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+68h] [rbp-208h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+70h] [rbp-200h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+78h] [rbp-1F8h]
  std::vector<unsigned int> *__for_range_0; // [rsp+80h] [rbp-1F0h]
  std::vector<unsigned int> *__for_range_1; // [rsp+88h] [rbp-1E8h]
  const data::BlossomGroupsExcelConfig *groups_config_ptr; // [rsp+90h] [rbp-1E0h]
  const std::vector<unsigned int> *__for_range_2; // [rsp+98h] [rbp-1D8h]
  const data::BlossomRefreshExcelConfig *refresh_config_ptr_0; // [rsp+A0h] [rbp-1D0h]
  const data::BlossomRefreshExcelConfig *refresh_config_ptr; // [rsp+A8h] [rbp-1C8h]
  std::shared_ptr<Config> v75; // [rsp+B0h] [rbp-1C0h] BYREF
  common::milog::MiLogStream v76; // [rsp+C0h] [rbp-1B0h] BYREF
  char v77[400]; // [rsp+E0h] [rbp-190h] BYREF

  v5 = (unsigned __int64)v77;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(352LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "8 48 4 15 section_id:1864 64 4 19 circle_camp_id:1878 80 4 15 refresh_id:1908 96 4 12 city_id:18"
                        "16 112 16 21 is_all_find_func:1850 144 24 29 candidate_section_id_vec:1825 208 24 23 circle_camp"
                        "_id_vec:1867 272 48 22 refresh_count_map:1835";
  *(_QWORD *)(v5 + 16) = PlayerBlossomComp::genCircleCampIdMap;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -234556924;
  v7[536862723] = 61956;
  v7[536862724] = 62194;
  v7[536862725] = -218959360;
  v7[536862726] = 62194;
  v7[536862727] = -218959360;
  v7[536862728] = 62194;
  v7[536862730] = -202116109;
  *(_DWORD *)(v5 + 96) = city_id;
  if ( std::vector<unsigned int>::empty(refresh_id_vec) )
  {
    common::milog::MiLogStream::create(
      &v76,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "genCircleCampIdMap",
      1820);
    v8 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v76,
           (const char (*)[51])"[PlayerBlossomComp] refresh_id_vec is empty, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])" ,city_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v5 + 96));
    common::milog::MiLogStream::~MiLogStream(&v76);
    v4 = -1;
  }
  else
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v5 + 144));
    if ( (unsigned int)PlayerBlossomComp::genCandidateSectionIdVec(
                         this,
                         *(_DWORD *)(v5 + 96),
                         (std::vector<unsigned int> *)(v5 + 144)) )
    {
      common::milog::MiLogStream::create(
        &v76,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "genCircleCampIdMap",
        1828);
      v11 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
              &v76,
              (const char (*)[59])"[PlayerBlossomComp] genCandidateSectionIdVec failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])" ,city_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v5 + 96));
      common::milog::MiLogStream::~MiLogStream(&v76);
      v4 = -1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v76,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "genCircleCampIdMap",
        1831);
      v14 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v76,
              (const char (*)[46])"[BLOSSOM_TEST] candidate_section_id_vec.size ");
      __for_end._M_current = (const unsigned int *)std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v5 + 144));
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
        v14,
        (const unsigned __int64 *)&__for_end);
      common::milog::MiLogStream::~MiLogStream(&v76);
      std::map<unsigned int,std::vector<unsigned int>>::clear(circle_camp_id_map);
      std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v5 + 272));
      __for_range = refresh_id_vec;
      __for_begin._M_current = std::vector<unsigned int>::begin(refresh_id_vec)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v15 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        v16 = v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v15);
        }
        *(_DWORD *)(v5 + 80) = *v16;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v75);
        v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v75);
        refresh_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomRefreshExcelConfig(
                               &v17->design_config.txt_config_mgr.blossom_config_mgr,
                               *(_DWORD *)(v5 + 80));
        std::shared_ptr<Config>::~shared_ptr(&v75);
        if ( !refresh_config_ptr )
        {
          common::milog::MiLogStream::create(
            &v76,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/blossom/player_blossom_comp.cpp",
            "genCircleCampIdMap",
            1841);
          v18 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                  &v76,
                  (const char (*)[64])"[PlayerBlossomComp] findBlossomRefreshExcelConfig failed, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
          common::milog::MiLogStream::~MiLogStream(&v76);
          v4 = -1;
          goto LABEL_83;
        }
        if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->refresh_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)refresh_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->refresh_count >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&refresh_config_ptr->refresh_count);
        }
        refresh_count = refresh_config_ptr->refresh_count;
        v20 = (char *)(v5 + 80);
        v21 = std::map<unsigned int,unsigned int>::operator[](
                (std::map<unsigned int,unsigned int> *const)(v5 + 272),
                (const std::map<unsigned int,unsigned int>::key_type *)(v5 + 80));
        v22 = v21;
        v23 = *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000);
        if ( v23 != 0 && (char)(((unsigned __int8)v21 & 7) + 3) >= v23 )
        {
          LOBYTE(v20) = v23 != 0;
          __asan_report_store4(v21, v20, v21);
        }
        *v22 = refresh_count;
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      is_all_find = 0;
      *(_QWORD *)(v5 + 112) = v5 + 272;
      *(_QWORD *)(v5 + 120) = circle_camp_id_map;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      BasicComp = Player::getBasicComp(this->player_);
      level = PlayerBasicComp::getLevel(BasicComp);
      __for_range_0 = (std::vector<unsigned int> *)(v5 + 144);
      __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v5 + 144))._M_current;
      __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
      {
        v25 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
        v26 = v25;
        if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v25);
        }
        *(_DWORD *)(v5 + 48) = *v26;
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v5 + 208));
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v75);
        v27 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v75);
        v28 = BlossomExcelConfigMgr::getBlossomInitialCircleCampIdVec(
                &v27->design_config.txt_config_mgr.blossom_config_mgr,
                *(_DWORD *)(v5 + 48),
                (std::vector<unsigned int> *)(v5 + 208)) != 0;
        std::shared_ptr<Config>::~shared_ptr(&v75);
        if ( v28 )
        {
          common::milog::MiLogStream::create(
            &v76,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/blossom/player_blossom_comp.cpp",
            "genCircleCampIdMap",
            1871);
          v29 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                  &v76,
                  (const char (*)[62])"[BLOSSOM_TEST] getBlossomInitialCircleCampIdVec failed, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &val);
          v31 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v30,
                  (const char (*)[15])" ,section_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v5 + 48));
          common::milog::MiLogStream::~MiLogStream(&v76);
          v32 = 0;
        }
        else
        {
          __g = common::tools::RandomUtils::getRandGenerator();
          M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v5 + 208))._M_current;
          v34._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v5 + 208))._M_current;
          std::shuffle<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul> &>(
            v34,
            (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
            __g);
          __for_range_1 = (std::vector<unsigned int> *)(v5 + 208);
          __for_begin_1._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v5 + 208))._M_current;
          __for_end_1._M_current = std::vector<unsigned int>::end(__for_range_1)._M_current;
          while ( 1 )
          {
            if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_1, &__for_end_1) )
              goto LABEL_70;
            v35 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_1);
            v36 = v35;
            if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v35);
            }
            *(_DWORD *)(v5 + 64) = *v36;
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v75);
            v37 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v75);
            groups_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomGroupsExcelConfig(
                                  &v37->design_config.txt_config_mgr.blossom_config_mgr,
                                  *(_DWORD *)(v5 + 64));
            std::shared_ptr<Config>::~shared_ptr(&v75);
            if ( !groups_config_ptr )
              break;
            if ( PlayerBlossomComp::checkCircleCampIdInUse(this, *(_DWORD *)(v5 + 64)) )
            {
              common::milog::MiLogStream::create(
                &v76,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/blossom/player_blossom_comp.cpp",
                "genCircleCampIdMap",
                1890);
              v39 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                      &v76,
                      (const char (*)[55])"[BLOSSOM_TEST] checkCircleCampIdInUse circle_camp_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v39,
                (const unsigned int *)(v5 + 64));
              common::milog::MiLogStream::~MiLogStream(&v76);
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&groups_config_ptr->limit_level >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&groups_config_ptr->limit_level >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&groups_config_ptr->limit_level);
              }
              if ( level >= groups_config_ptr->limit_level )
              {
                if ( PlayerBlossomComp::checkGroupsCanRegister(this, *(_DWORD *)(v5 + 64)) )
                {
                  __for_range_2 = refresh_id_vec;
                  __for_begin._M_current = std::vector<unsigned int>::begin(refresh_id_vec)._M_current;
                  __for_end._M_current = std::vector<unsigned int>::end(__for_range_2)._M_current;
                  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
                  {
                    v42 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
                    v43 = v42;
                    if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v42 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v42);
                    }
                    *(_DWORD *)(v5 + 80) = *v43;
                    v44 = std::map<unsigned int,std::vector<unsigned int>>::operator[](
                            circle_camp_id_map,
                            (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v5 + 80));
                    v45 = std::vector<unsigned int>::size(v44);
                    v46 = std::map<unsigned int,unsigned int>::operator[](
                            (std::map<unsigned int,unsigned int> *const)(v5 + 272),
                            (const std::map<unsigned int,unsigned int>::key_type *)(v5 + 80));
                    v47 = v46;
                    if ( *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v46 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v46);
                    }
                    if ( v45 != *v47 )
                    {
                      ServiceBox::findService<GameserverService>();
                      GameserverService::getConfig((GameserverService *const)&v75);
                      v48 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v75);
                      refresh_config_ptr_0 = data::BlossomExcelConfigMgrBase::findBlossomRefreshExcelConfig(
                                               &v48->design_config.txt_config_mgr.blossom_config_mgr,
                                               *(_DWORD *)(v5 + 80));
                      std::shared_ptr<Config>::~shared_ptr(&v75);
                      if ( !refresh_config_ptr_0 )
                      {
                        common::milog::MiLogStream::create(
                          &v76,
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/player/blossom/player_blossom_comp.cpp",
                          "genCircleCampIdMap",
                          1919);
                        v38 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                                &v76,
                                (const char (*)[64])"[PlayerBlossomComp] findBlossomRefreshExcelConfig failed, uid: ");
                        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                          __asan_report_load8(&this->player_);
                        goto LABEL_42;
                      }
                      ServiceBox::findService<GameserverService>();
                      GameserverService::getConfig((GameserverService *const)&v75);
                      p_blossom_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v75)->design_config.txt_config_mgr.blossom_config_mgr;
                      if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr_0->refresh_type >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr_0->refresh_type >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_load4(&refresh_config_ptr_0->refresh_type);
                      }
                      v50 = BlossomExcelConfigMgr::checkBlossomRefreshTypeIsMatch(
                              p_blossom_config_mgr,
                              *(_DWORD *)(v5 + 64),
                              refresh_config_ptr_0->refresh_type);
                      std::shared_ptr<Config>::~shared_ptr(&v75);
                      if ( v50 )
                      {
                        v51 = std::map<unsigned int,std::vector<unsigned int>>::operator[](
                                circle_camp_id_map,
                                (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v5 + 80));
                        std::vector<unsigned int>::push_back(
                          v51,
                          (const std::vector<unsigned int>::value_type *)(v5 + 64));
                        break;
                      }
                    }
                    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
                  }
                  if ( !PlayerBlossomComp::genCircleCampIdMap(unsigned int,std::vector<unsigned int> const&,std::map<unsigned int,std::vector<unsigned int>> &)::{lambda(void)#1}::operator()((const PlayerBlossomComp::genCircleCampIdMap::<lambda()> *const)(v5 + 112)) )
                    goto LABEL_69;
                  is_all_find = 1;
LABEL_70:
                  if ( is_all_find )
                    v32 = 2;
                  else
                    v32 = 3;
                  goto LABEL_73;
                }
                common::milog::MiLogStream::create(
                  &v76,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/blossom/player_blossom_comp.cpp",
                  "genCircleCampIdMap",
                  1904);
                v41 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                        &v76,
                        (const char (*)[41])"[BLOSSOM_TEST] checkGroupsCanRegister : ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v41,
                  (const unsigned int *)(v5 + 64));
                common::milog::MiLogStream::~MiLogStream(&v76);
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v76,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/blossom/player_blossom_comp.cpp",
                  "genCircleCampIdMap",
                  1897);
                v40 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                        &v76,
                        (const char (*)[56])"[BLOSSOM_TEST] level < groups_config_ptr->limit_level: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v40,
                  &groups_config_ptr->limit_level);
                common::milog::MiLogStream::~MiLogStream(&v76);
              }
            }
LABEL_69:
            __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_1);
          }
          common::milog::MiLogStream::create(
            &v76,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/blossom/player_blossom_comp.cpp",
            "genCircleCampIdMap",
            1883);
          v38 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                  &v76,
                  (const char (*)[63])"[PlayerBlossomComp] findBlossomGroupsExcelConfig failed, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
LABEL_42:
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &val);
          common::milog::MiLogStream::~MiLogStream(&v76);
          v4 = -1;
          v32 = 1;
        }
LABEL_73:
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 208));
        if ( v32 != 3 && v32 )
        {
          if ( v32 == 1 )
            goto LABEL_83;
          break;
        }
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
      }
      if ( !is_all_find )
      {
        common::milog::MiLogStream::create(
          &v76,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/blossom/player_blossom_comp.cpp",
          "genCircleCampIdMap",
          1946);
        v52 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                &v76,
                (const char (*)[65])"[PlayerBlossomComp] not all the refresh id can be refresh, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, &val);
        v54 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v53, (const char (*)[11])",city_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, (const unsigned int *)(v5 + 96));
        common::milog::MiLogStream::~MiLogStream(&v76);
      }
      v4 = 0;
LABEL_83:
      std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v5 + 272));
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 144));
  }
  result = v4;
  if ( v77 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 1850: range 00000000171DE576-00000000171DE73C
bool __cdecl PlayerBlossomComp::genCircleCampIdMap(unsigned int,std::vector<unsigned int> const&,std::map<unsigned int,std::vector<unsigned int>> &)::{lambda(void)#1}::operator()(
        const PlayerBlossomComp::genCircleCampIdMap::<lambda()> *const __closure)
{
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v1; // rax
  std::pair<unsigned int const,unsigned int> *v2; // rdx
  std::map<unsigned int,std::vector<unsigned int>>::mapped_type *v3; // rax
  std::vector<unsigned int>::size_type v4; // rcx
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-20h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *refresh_id; // [rsp+28h] [rbp-18h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+30h] [rbp-10h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+38h] [rbp-8h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  __for_range = __closure->__refresh_count_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(__for_range)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v1 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    v2 = v1;
    if ( ((unsigned __int8)v1 & 7) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v1->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v1 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v1->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v1, 8LL);
    }
    __in = *v2;
    refresh_id = std::get<0ul,unsigned int const,unsigned int>(&__in);
    count = std::get<1ul,unsigned int const,unsigned int>(&__in);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__circle_camp_id_map >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__circle_camp_id_map);
    v3 = std::map<unsigned int,std::vector<unsigned int>>::operator[](__closure->__circle_camp_id_map, refresh_id);
    v4 = std::vector<unsigned int>::size(v3);
    if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(count);
    }
    if ( v4 < *count )
      return 0;
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  return 1;
};

// Line 1953: range 00000000171DFAE0-00000000171DFD0C
int32_t __cdecl PlayerBlossomComp::refreshCircleCamp(
        PlayerBlossomComp *const this,
        const std::map<unsigned int,std::vector<unsigned int>> *circle_camp_id_map)
{
  int32_t v2; // ebx
  const std::pair<unsigned int const,std::vector<unsigned int> > *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  int v7; // r12d
  unsigned int val; // [rsp+14h] [rbp-7Ch] BYREF
  std::map<unsigned int,std::vector<unsigned int>>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::map<unsigned int,std::vector<unsigned int>>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  const std::map<unsigned int,std::vector<unsigned int>> *__for_range; // [rsp+28h] [rbp-68h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<unsigned int> > >::type *refresh_id; // [rsp+30h] [rbp-60h]
  std::tuple_element<1,std::pair<unsigned int const,std::vector<unsigned int> > >::type *circle_camp_id_vec; // [rsp+38h] [rbp-58h]
  std::pair<unsigned int const,std::vector<unsigned int> > __in; // [rsp+40h] [rbp-50h] BYREF
  common::milog::MiLogStream v16; // [rsp+60h] [rbp-30h] BYREF

  __for_range = circle_camp_id_map;
  __for_begin._M_node = std::map<unsigned int,std::vector<unsigned int>>::begin(circle_camp_id_map)._M_node;
  __for_end._M_node = std::map<unsigned int,std::vector<unsigned int>>::end(circle_camp_id_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v3 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator*(&__for_begin);
    std::pair<unsigned int const,std::vector<unsigned int>>::pair(&__in, v3);
    refresh_id = std::get<0ul,unsigned int const,std::vector<unsigned int>>(&__in);
    circle_camp_id_vec = std::get<1ul,unsigned int const,std::vector<unsigned int>>(&__in);
    if ( *(_BYTE *)(((unsigned __int64)refresh_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)refresh_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)refresh_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(refresh_id);
    }
    if ( PlayerBlossomComp::doRefreshCircleCamp(this, *refresh_id, circle_camp_id_vec) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "refreshCircleCamp",
        1958);
      v4 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
             &v16,
             (const char (*)[54])"[PlayerBlossomComp] doRefreshCircleCamp failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
      v6 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v5, (const char (*)[15])" ,refresh_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, refresh_id);
      common::milog::MiLogStream::~MiLogStream(&v16);
      v2 = -1;
      v7 = 0;
    }
    else
    {
      v7 = 1;
    }
    std::pair<unsigned int const,std::vector<unsigned int>>::~pair(&__in);
    if ( v7 != 1 )
      return v2;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 1967: range 00000000171DFD0E-00000000171E0785
__int64 __fastcall PlayerBlossomComp::doRefreshCircleCamp(
        PlayerBlossomComp *const this,
        __int32 refresh_id,
        const std::vector<unsigned int> *circle_camp_id_vec)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // r15
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r15
  PlayerBasicComp *BasicComp; // rax
  BlossomRefreshInfo *v13; // r8
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v14; // rax
  _DWORD *v15; // rdx
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // r14
  PlayerBasicComp *v23; // rax
  BlossomCircleCampInfo *v24; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomCircleCampInfo> >,bool> v25; // rax
  common::milog::MiLogStream *v26; // r14
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  int v29; // r15d
  uint32_t v30; // r15d
  uint32_t *p_section_id; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v32; // rax
  uint32_t *v33; // rdx
  char v34; // cl
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo> >,bool> refreshed; // rax
  common::milog::MiLogStream *v36; // r14
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  __int64 result; // rax
  std::string v40; // [rsp+0h] [rbp-250h]
  char *v41; // [rsp+0h] [rbp-250h]
  const std::vector<unsigned int> *circle_camp_id_veca; // [rsp+8h] [rbp-248h]
  PlayerBlossomComp *thisa; // [rsp+18h] [rbp-238h]
  unsigned int val; // [rsp+28h] [rbp-228h] BYREF
  uint32_t now; // [rsp+2Ch] [rbp-224h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-220h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-218h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-210h]
  const data::BlossomGroupsExcelConfig *groups_config_ptr; // [rsp+48h] [rbp-208h]
  std::shared_ptr<Config> v50; // [rsp+50h] [rbp-200h] BYREF
  common::milog::MiLogStream v51; // [rsp+60h] [rbp-1F0h] BYREF
  common::milog::MiLogStream v52; // [rsp+80h] [rbp-1D0h] BYREF
  char v53[432]; // [rsp+A0h] [rbp-1B0h] BYREF

  *(&v40._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v40._anon_0._M_allocated_capacity) = refresh_id;
  v40._M_string_length = (std::string::size_type)circle_camp_id_vec;
  v4 = (unsigned __int64)v53;
  v40._M_dataplus._M_p = v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(384LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 1 11 holder:1971 48 4 19 circle_camp_id:1975 64 4 15 refresh_id:1966 80 104 17 refresh_info"
                        ":1973 224 128 21 circle_camp_info:1990";
  *(_QWORD *)(v4 + 16) = PlayerBlossomComp::doRefreshCircleCamp;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556927;
  v6[536862722] = 61956;
  v6[536862725] = -234881024;
  v6[536862726] = -218959118;
  v6[536862731] = -202116109;
  *(_DWORD *)(v4 + 64) = refresh_id;
  common::milog::MiLogStream::create(
    &v52,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/blossom/player_blossom_comp.cpp",
    "doRefreshCircleCamp",
    1968);
  v7 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
         &v52,
         (const char (*)[46])"[PlayerBlossomComp] doRefreshCircleCamp uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
  v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v8, (const char (*)[15])" ,refresh_id: ");
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 64));
  v11 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v10, (const char (*)[21])" ,circle camp size: ");
  __for_end._M_current = (const unsigned int *)std::vector<unsigned int>::size((const std::vector<unsigned int> *const)v40._M_string_length);
  common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v11, (const unsigned __int64 *)&__for_end);
  common::milog::MiLogStream::~MiLogStream(&v52);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v52, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0xA96u, v40);
  std::string::~string(&v52);
  now = common::tools::TimeUtils::getNow();
  BlossomRefreshInfo::BlossomRefreshInfo((BlossomRefreshInfo *const)(v4 + 80));
  *(_DWORD *)(v4 + 128) = now;
  __for_range = circle_camp_id_veca;
  __for_begin._M_current = std::vector<unsigned int>::begin(circle_camp_id_veca)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v14 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v15 = v14;
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v14);
    }
    *(_DWORD *)(v4 + 48) = *v15;
    if ( PlayerBlossomComp::checkCircleCampIdInUse(thisa, *(_DWORD *)(v4 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v51,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "doRefreshCircleCamp",
        1979);
      v16 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
              &v51,
              (const char (*)[49])"[PlayerBlossomComp] circle_camp_id in use, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->player_);
      val = Player::getUid(thisa->player_);
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
      v18 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v17, (const char (*)[15])" ,refresh_id: ");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 64));
      v20 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v19,
              (const char (*)[19])" ,circle_camp_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v51);
      v3 = -1;
      goto LABEL_36;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v50);
    v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v50);
    groups_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomGroupsExcelConfig(
                          &v21->design_config.txt_config_mgr.blossom_config_mgr,
                          *(_DWORD *)(v4 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v50);
    if ( !groups_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v52,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "doRefreshCircleCamp",
        1986);
      v22 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
              &v52,
              (const char (*)[63])"[PlayerBlossomComp] findBlossomGroupsExcelConfig failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->player_);
      val = Player::getUid(thisa->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
      common::milog::MiLogStream::~MiLogStream(&v52);
      v3 = -1;
      goto LABEL_36;
    }
    BlossomCircleCampInfo::BlossomCircleCampInfo((BlossomCircleCampInfo *const)(v4 + 224));
    *(_DWORD *)(v4 + 224) = *(_DWORD *)(v4 + 64);
    *(_DWORD *)(v4 + 228) = *(_DWORD *)(v4 + 48);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    v23 = Player::getBasicComp(thisa->player_);
    *(_DWORD *)(v4 + 296) = PlayerBasicComp::getWorldLevel(v23);
    v25 = std::map<unsigned int,BlossomCircleCampInfo>::emplace<unsigned int &,BlossomCircleCampInfo&>(
            (std::map<unsigned int,BlossomCircleCampInfo> *const)(v4 + 80),
            (unsigned int *)(v4 + 48),
            (BlossomCircleCampInfo *)(v4 + 224),
            (unsigned int *)(v4 + 48),
            v24);
    if ( !v25.second )
    {
      common::milog::MiLogStream::create(
        &v52,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "doRefreshCircleCamp",
        1997);
      v26 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
              &v52,
              (const char (*)[53])"[PlayerBlossomComp] circle_camp_id duplicated, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->player_);
      val = Player::getUid(thisa->player_);
      v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
      v28 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v27,
              (const char (*)[18])",circle_camp_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v52);
      v3 = -1;
      v29 = 0;
    }
    else
    {
      std::set<unsigned int>::insert(
        (std::set<unsigned int> *const)(v4 + 136),
        (const std::set<unsigned int>::value_type *)(v4 + 48));
      v30 = now;
      p_section_id = &groups_config_ptr->section_id;
      v32 = std::map<unsigned int,unsigned int>::operator[](
              &thisa->recent_used_section_id_map_,
              &groups_config_ptr->section_id);
      v33 = v32;
      v34 = *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000);
      if ( v34 != 0 && (char)(((unsigned __int8)v32 & 7) + 3) >= v34 )
      {
        LOBYTE(p_section_id) = v34 != 0;
        __asan_report_store4(v32, p_section_id, v32);
      }
      *v33 = v30;
      v29 = 1;
    }
    BlossomCircleCampInfo::~BlossomCircleCampInfo((BlossomCircleCampInfo *const)(v4 + 224));
    if ( v29 != 1 )
      goto LABEL_36;
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  refreshed = std::map<unsigned int,BlossomRefreshInfo>::emplace<unsigned int &,BlossomRefreshInfo&>(
                &thisa->refresh_info_map_,
                (unsigned int *)(v4 + 64),
                (BlossomRefreshInfo *)(v4 + 80),
                (unsigned int *)&thisa->refresh_info_map_,
                v13);
  if ( !refreshed.second )
  {
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "doRefreshCircleCamp",
      2008);
    v36 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
            &v52,
            (const char (*)[49])"[PlayerBlossomComp] refresh id duplicated, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    val = Player::getUid(thisa->player_);
    v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &val);
    v38 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v37, (const char (*)[14])",refresh_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v52);
    v3 = -1;
  }
  else
  {
    PlayerBlossomComp::logCircleCampRefresh(thisa, *(_DWORD *)(v4 + 64));
    v3 = 0;
  }
LABEL_36:
  BlossomRefreshInfo::~BlossomRefreshInfo((BlossomRefreshInfo *const)(v4 + 80));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
  result = v3;
  if ( v41 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF802C) = 0;
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
  }
  return result;
};

// Line 2018: range 00000000171E0786-00000000171E0A8E
int32_t __cdecl PlayerBlossomComp::startAllBlossomGroup(PlayerBlossomComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v4; // rax
  _DWORD *v5; // rdx
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-ECh] BYREF
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-D0h] BYREF
  char v16[176]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 15 refresh_id:2020 64 24 19 refresh_id_vec:2019";
  *(_QWORD *)(v1 + 16) = PlayerBlossomComp::startAllBlossomGroup;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  PlayerBlossomComp::getCurRefreshIdVec((std::vector<unsigned int> *)(v1 + 64), this);
  __for_range = (std::vector<unsigned int> *)(v1 + 64);
  __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 64))._M_current;
  __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v1 + 64))._M_current;
  while ( 1 )
  {
    if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v9 = 0;
      goto LABEL_14;
    }
    v4 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    *(_DWORD *)(v1 + 48) = *v5;
    if ( PlayerBlossomComp::startBlossomGroup(this, *(_DWORD *)(v1 + 48)) )
      break;
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/blossom/player_blossom_comp.cpp",
    "startAllBlossomGroup",
    2024);
  v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
         &v15,
         (const char (*)[52])"[PlayerBlossomComp] startBlossomGroup failed, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
  v8 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v7, (const char (*)[15])" ,refresh_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v1 + 48));
  common::milog::MiLogStream::~MiLogStream(&v15);
  v9 = -1;
LABEL_14:
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 64));
  result = v9;
  if ( v16 == (char *)v1 )
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

// Line 2033: range 00000000171E0A90-00000000171E0EDA
__int64 __fastcall PlayerBlossomComp::startBlossomGroup(PlayerBlossomComp *const this, uint32_t refresh_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  common::milog::MiLogStream *v5; // r13
  unsigned int v6; // r14d
  common::milog::MiLogStream *v7; // r14
  __int64 result; // rax
  unsigned int val; // [rsp+14h] [rbp-12Ch] BYREF
  std::map<unsigned int,BlossomCircleCampInfo>::iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::map<unsigned int,BlossomCircleCampInfo>::iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  BlossomRefreshInfo *refresh_info; // [rsp+28h] [rbp-118h]
  std::map<unsigned int,BlossomCircleCampInfo> *__for_range; // [rsp+30h] [rbp-110h]
  const std::pair<unsigned int const,BlossomCircleCampInfo> *v14; // [rsp+38h] [rbp-108h]
  std::tuple_element<0,const std::pair<unsigned int const,BlossomCircleCampInfo> >::type *_; // [rsp+40h] [rbp-100h]
  std::tuple_element<1,const std::pair<unsigned int const,BlossomCircleCampInfo> >::type *circle_camp_info; // [rsp+48h] [rbp-F8h]
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-F0h] BYREF
  char v18[208]; // [rsp+70h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 15 refresh_id:2032 48 8 9 iter:2034 80 48 25 circle_camp_info_map:2042";
  *(_QWORD *)(v2 + 16) = PlayerBlossomComp::startBlossomGroup;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 32) = refresh_id;
  *(std::map<unsigned int,BlossomRefreshInfo>::iterator *)(v2 + 48) = std::map<unsigned int,BlossomRefreshInfo>::find(
                                                                        &this->refresh_info_map_,
                                                                        (const std::map<unsigned int,BlossomRefreshInfo>::key_type *)(v2 + 32));
  __for_end._M_node = std::map<unsigned int,BlossomRefreshInfo>::end(&this->refresh_info_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo> >::_Self *)(v2 + 48),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo> >::_Self *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "startBlossomGroup",
      2037);
    v5 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v17,
           (const char (*)[50])"[PlayerBlossomComp] find refresh_id failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v6 = -1;
  }
  else
  {
    refresh_info = &std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo> > *const)(v2 + 48))->second;
    std::map<unsigned int,BlossomCircleCampInfo>::map(
      (std::map<unsigned int,BlossomCircleCampInfo> *const)(v2 + 80),
      &refresh_info->circle_camp_info_map);
    __for_range = (std::map<unsigned int,BlossomCircleCampInfo> *)(v2 + 80);
    __for_begin._M_node = std::map<unsigned int,BlossomCircleCampInfo>::begin((std::map<unsigned int,BlossomCircleCampInfo> *const)(v2 + 80))._M_node;
    __for_end._M_node = std::map<unsigned int,BlossomCircleCampInfo>::end(__for_range)._M_node;
    while ( 1 )
    {
      if ( !std::operator!=(&__for_begin, &__for_end) )
      {
        v6 = 0;
        goto LABEL_16;
      }
      v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomCircleCampInfo>>::operator*(&__for_begin);
      _ = std::get<0ul,unsigned int const,BlossomCircleCampInfo>(v14);
      circle_camp_info = (std::tuple_element<1,const std::pair<unsigned int const,BlossomCircleCampInfo> >::type *)std::get<1ul,unsigned int const,BlossomCircleCampInfo>(v14);
      if ( PlayerBlossomComp::startCircleCampGroup(this, circle_camp_info) )
        break;
      std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomCircleCampInfo>>::operator++(&__for_begin);
    }
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "startBlossomGroup",
      2047);
    v7 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v17,
           (const char (*)[55])"[PlayerBlossomComp] startCircleCampGroup failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v6 = -1;
LABEL_16:
    std::map<unsigned int,BlossomCircleCampInfo>::~map((std::map<unsigned int,BlossomCircleCampInfo> *const)(v2 + 80));
  }
  result = v6;
  if ( v18 == (char *)v2 )
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

// Line 2056: range 00000000171E0EDC-00000000171E15F0
int32_t __cdecl PlayerBlossomComp::startCircleCampGroup(
        PlayerBlossomComp *const this,
        const BlossomCircleCampInfo *circle_camp_info)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  BlossomExcelConfigMgr *p_blossom_config_mgr; // rcx
  bool v6; // r14
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  BlossomExcelConfigMgr *v9; // rcx
  const ReviseLevelGrowExcelConfigMgr *p_revise_level_grow_config_mgr; // rdi
  uint32_t valid_world_level; // edx
  Scene *v12; // rax
  SceneBlockGroupComp *BlockGroupComp; // rax
  unsigned __int64 v14; // rdx
  int32_t result; // eax
  unsigned int val; // [rsp+10h] [rbp-160h] BYREF
  uint32_t revise_level; // [rsp+14h] [rbp-15Ch]
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::iterator __for_begin; // [rsp+18h] [rbp-158h] BYREF
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::iterator __for_end; // [rsp+20h] [rbp-150h] BYREF
  const data::BlossomRefreshExcelConfig *refresh_config_ptr; // [rsp+28h] [rbp-148h]
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *__for_range; // [rsp+30h] [rbp-140h]
  std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > *__in; // [rsp+38h] [rbp-138h]
  std::tuple_element<0,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *scene_ptr; // [rsp+40h] [rbp-130h]
  std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *group_vec; // [rsp+48h] [rbp-128h]
  std::shared_ptr<Config> v26; // [rsp+50h] [rbp-120h] BYREF
  common::milog::MiLogStream v27; // [rsp+60h] [rbp-110h] BYREF
  char v28[240]; // [rsp+80h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 24 21 all_group_id_vec:2057 112 48 20 scene_group_map:2078";
  *(_QWORD *)(v2 + 16) = PlayerBlossomComp::startCircleCampGroup;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218959360;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 48));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v26);
  p_blossom_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.blossom_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info->circle_camp_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)circle_camp_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&circle_camp_info->circle_camp_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&circle_camp_info->circle_camp_id);
  }
  v6 = BlossomExcelConfigMgr::getBlossomAllGroupIdVec(
         p_blossom_config_mgr,
         circle_camp_info->circle_camp_id,
         (std::vector<unsigned int> *)(v2 + 48)) != 0;
  std::shared_ptr<Config>::~shared_ptr(&v26);
  if ( v6 )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "startCircleCampGroup",
      2060);
    v7 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
           &v27,
           (const char (*)[58])"[PlayerBlossomComp] getBlossomAllGroupIdVec failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_9:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v27);
    v8 = -1;
    goto LABEL_32;
  }
  if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v2 + 48)) )
  {
    v8 = 0;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v26);
    v9 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.blossom_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)circle_camp_info >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)circle_camp_info >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(circle_camp_info);
    }
    refresh_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomRefreshExcelConfig(
                           v9,
                           circle_camp_info->refresh_id);
    std::shared_ptr<Config>::~shared_ptr(&v26);
    if ( !refresh_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "startCircleCampGroup",
        2072);
      v7 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
             &v27,
             (const char (*)[64])"[PlayerBlossomComp] findBlossomRefreshExcelConfig failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      goto LABEL_9;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v26);
    p_revise_level_grow_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.revise_level_grow_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info->valid_world_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&circle_camp_info->valid_world_level >> 3) + 0x7FFF8000) <= 3 )
    {
      p_revise_level_grow_config_mgr = (const ReviseLevelGrowExcelConfigMgr *)&circle_camp_info->valid_world_level;
      __asan_report_load4(&circle_camp_info->valid_world_level);
    }
    valid_world_level = circle_camp_info->valid_world_level;
    if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->revise_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->revise_level >> 3) + 0x7FFF8000) <= 3 )
    {
      p_revise_level_grow_config_mgr = (const ReviseLevelGrowExcelConfigMgr *)&refresh_config_ptr->revise_level;
      __asan_report_load4(&refresh_config_ptr->revise_level);
    }
    revise_level = ReviseLevelGrowExcelConfigMgr::findReviseLevel(
                     p_revise_level_grow_config_mgr,
                     refresh_config_ptr->revise_level,
                     valid_world_level);
    std::shared_ptr<Config>::~shared_ptr(&v26);
    std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 112));
    PlayerBlossomComp::getGroupSceneMap(
      this,
      (const std::vector<unsigned int> *)(v2 + 48),
      (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v2 + 112));
    __for_range = (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v2 + 112);
    __for_begin._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::begin((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 112))._M_node;
    __for_end._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::end((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 112))._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator*(&__for_begin);
      scene_ptr = std::get<0ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(__in);
      group_vec = std::get<1ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(__in);
      if ( std::operator!=<Scene>(0LL, scene_ptr) )
      {
        v12 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
        BlockGroupComp = Scene::getBlockGroupComp(v12);
        if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
          __asan_report_load8(BlockGroupComp);
        v14 = (unsigned __int64)(BlockGroupComp->_vptr_SceneCompBase + 12);
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
          __asan_report_load8(BlockGroupComp->_vptr_SceneCompBase + 12);
        (*(void (__fastcall **)(SceneBlockGroupComp *, std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *, _QWORD, _QWORD))v14)(
          BlockGroupComp,
          group_vec,
          revise_level,
          0LL);
      }
      std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator++(&__for_begin);
    }
    v8 = 0;
    std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::~map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 112));
  }
LABEL_32:
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 48));
  result = v8;
  if ( v28 == (char *)v2 )
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

// Line 2091: range 00000000171E15F2-00000000171E18FA
int32_t __cdecl PlayerBlossomComp::clearAllBlossomGroup(PlayerBlossomComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v4; // rax
  _DWORD *v5; // rdx
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-ECh] BYREF
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-D0h] BYREF
  char v16[176]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 15 refresh_id:2093 64 24 19 refresh_id_vec:2092";
  *(_QWORD *)(v1 + 16) = PlayerBlossomComp::clearAllBlossomGroup;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  PlayerBlossomComp::getCurRefreshIdVec((std::vector<unsigned int> *)(v1 + 64), this);
  __for_range = (std::vector<unsigned int> *)(v1 + 64);
  __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 64))._M_current;
  __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v1 + 64))._M_current;
  while ( 1 )
  {
    if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v9 = 0;
      goto LABEL_14;
    }
    v4 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    *(_DWORD *)(v1 + 48) = *v5;
    if ( PlayerBlossomComp::clearBlossomGroup(this, *(_DWORD *)(v1 + 48)) )
      break;
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/blossom/player_blossom_comp.cpp",
    "clearAllBlossomGroup",
    2097);
  v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
         &v15,
         (const char (*)[52])"[PlayerBlossomComp] clearBlossomGroup failed, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
  v8 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v7, (const char (*)[15])" ,refresh_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v1 + 48));
  common::milog::MiLogStream::~MiLogStream(&v15);
  v9 = -1;
LABEL_14:
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 64));
  result = v9;
  if ( v16 == (char *)v1 )
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

// Line 2106: range 00000000171E18FC-00000000171E1D62
__int64 __fastcall PlayerBlossomComp::clearBlossomGroup(PlayerBlossomComp *const this, uint32_t refresh_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  common::milog::MiLogStream *v5; // r12
  unsigned int v6; // r14d
  common::milog::MiLogStream *v7; // r14
  __int64 result; // rax
  unsigned int val; // [rsp+14h] [rbp-12Ch] BYREF
  std::map<unsigned int,BlossomCircleCampInfo>::iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::map<unsigned int,BlossomCircleCampInfo>::iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  BlossomRefreshInfo *refresh_info; // [rsp+28h] [rbp-118h]
  std::map<unsigned int,BlossomCircleCampInfo> *__for_range; // [rsp+30h] [rbp-110h]
  const std::pair<unsigned int const,BlossomCircleCampInfo> *v14; // [rsp+38h] [rbp-108h]
  std::tuple_element<0,const std::pair<unsigned int const,BlossomCircleCampInfo> >::type *_; // [rsp+40h] [rbp-100h]
  std::tuple_element<1,const std::pair<unsigned int const,BlossomCircleCampInfo> >::type *circle_camp_info; // [rsp+48h] [rbp-F8h]
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-F0h] BYREF
  char v18[208]; // [rsp+70h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 15 refresh_id:2105 48 8 9 iter:2107 80 48 25 circle_camp_info_map:2116";
  *(_QWORD *)(v2 + 16) = PlayerBlossomComp::clearBlossomGroup;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 32) = refresh_id;
  *(std::map<unsigned int,BlossomRefreshInfo>::iterator *)(v2 + 48) = std::map<unsigned int,BlossomRefreshInfo>::find(
                                                                        &this->refresh_info_map_,
                                                                        (const std::map<unsigned int,BlossomRefreshInfo>::key_type *)(v2 + 32));
  __for_end._M_node = std::map<unsigned int,BlossomRefreshInfo>::end(&this->refresh_info_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo> >::_Self *)(v2 + 48),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo> >::_Self *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "clearBlossomGroup",
      2110);
    v5 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v17,
           (const char (*)[50])"[PlayerBlossomComp] find refresh_id failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v6 = -1;
  }
  else
  {
    refresh_info = &std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo> > *const)(v2 + 48))->second;
    std::map<unsigned int,BlossomCircleCampInfo>::map(
      (std::map<unsigned int,BlossomCircleCampInfo> *const)(v2 + 80),
      &refresh_info->circle_camp_info_map);
    PlayerBlossomComp::clearBlossomDecorateGroup(this, *(_DWORD *)(v2 + 32));
    __for_range = (std::map<unsigned int,BlossomCircleCampInfo> *)(v2 + 80);
    __for_begin._M_node = std::map<unsigned int,BlossomCircleCampInfo>::begin((std::map<unsigned int,BlossomCircleCampInfo> *const)(v2 + 80))._M_node;
    __for_end._M_node = std::map<unsigned int,BlossomCircleCampInfo>::end(__for_range)._M_node;
    while ( 1 )
    {
      if ( !std::operator!=(&__for_begin, &__for_end) )
      {
        v6 = 0;
        goto LABEL_16;
      }
      v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomCircleCampInfo>>::operator*(&__for_begin);
      _ = std::get<0ul,unsigned int const,BlossomCircleCampInfo>(v14);
      circle_camp_info = (std::tuple_element<1,const std::pair<unsigned int const,BlossomCircleCampInfo> >::type *)std::get<1ul,unsigned int const,BlossomCircleCampInfo>(v14);
      if ( PlayerBlossomComp::clearCircleCampGroup(this, circle_camp_info) )
        break;
      std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomCircleCampInfo>>::operator++(&__for_begin);
    }
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "clearBlossomGroup",
      2124);
    v7 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v17,
           (const char (*)[55])"[PlayerBlossomComp] clearCircleCampGroup failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v6 = -1;
LABEL_16:
    std::map<unsigned int,BlossomCircleCampInfo>::~map((std::map<unsigned int,BlossomCircleCampInfo> *const)(v2 + 80));
  }
  result = v6;
  if ( v18 == (char *)v2 )
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

// Line 2133: range 00000000171E1D64-00000000171E2756
int32_t __cdecl PlayerBlossomComp::clearCircleCampGroup(
        PlayerBlossomComp *const this,
        const BlossomCircleCampInfo *circle_camp_info)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  BlossomExcelConfigMgr *p_blossom_config_mgr; // rcx
  bool v6; // r14
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  Scene *v9; // rax
  SceneBlockGroupComp *BlockGroupComp; // rax
  unsigned __int64 v11; // rdx
  std::_Rb_tree_const_iterator<unsigned int>::reference v12; // rax
  _DWORD *v13; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  bool v15; // r14
  Scene *v16; // rax
  SceneBlockGroupComp *v17; // rax
  unsigned __int64 v18; // rdx
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-22Ch] BYREF
  std::set<unsigned int>::iterator __for_begin_0; // [rsp+18h] [rbp-228h] BYREF
  std::set<unsigned int>::iterator __for_end_0; // [rsp+20h] [rbp-220h] BYREF
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::iterator __for_begin; // [rsp+28h] [rbp-218h] BYREF
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::iterator __for_end; // [rsp+30h] [rbp-210h] BYREF
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *__for_range; // [rsp+38h] [rbp-208h]
  const std::set<unsigned int> *__for_range_0; // [rsp+40h] [rbp-200h]
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *__for_range_1; // [rsp+48h] [rbp-1F8h]
  std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > *v36; // [rsp+50h] [rbp-1F0h]
  std::tuple_element<0,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *scene_ptr_0; // [rsp+58h] [rbp-1E8h]
  std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *group_vec_0; // [rsp+60h] [rbp-1E0h]
  std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > *__in; // [rsp+68h] [rbp-1D8h]
  std::tuple_element<0,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *scene_ptr; // [rsp+70h] [rbp-1D0h]
  std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *group_vec; // [rsp+78h] [rbp-1C8h]
  std::shared_ptr<Config> v42; // [rsp+80h] [rbp-1C0h] BYREF
  common::milog::MiLogStream v43; // [rsp+90h] [rbp-1B0h] BYREF
  char v44[400]; // [rsp+B0h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 12 camp_id:2152 64 24 21 all_group_id_vec:2134 128 24 17 group_id_vec:2154 192 48 20 scen"
                        "e_group_map:2141 272 48 20 scene_group_map:2157";
  *(_QWORD *)(v2 + 16) = PlayerBlossomComp::clearCircleCampGroup;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862727] = -219021312;
  v4[536862728] = 62194;
  v4[536862730] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v42);
  p_blossom_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42)->design_config.txt_config_mgr.blossom_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info->circle_camp_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)circle_camp_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&circle_camp_info->circle_camp_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&circle_camp_info->circle_camp_id);
  }
  v6 = BlossomExcelConfigMgr::getBlossomAllGroupIdVec(
         p_blossom_config_mgr,
         circle_camp_info->circle_camp_id,
         (std::vector<unsigned int> *)(v2 + 64)) != 0;
  std::shared_ptr<Config>::~shared_ptr(&v42);
  if ( v6 )
  {
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "clearCircleCampGroup",
      2137);
    v7 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
           &v43,
           (const char (*)[58])"[PlayerBlossomComp] getBlossomAllGroupIdVec failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v43);
    v8 = -1;
  }
  else
  {
    std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 192));
    PlayerBlossomComp::getGroupSceneMap(
      this,
      (const std::vector<unsigned int> *)(v2 + 64),
      (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v2 + 192));
    __for_range = (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v2 + 192);
    __for_begin._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::begin((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 192))._M_node;
    __for_end._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::end((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 192))._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator*(&__for_begin);
      scene_ptr = std::get<0ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(__in);
      group_vec = std::get<1ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(__in);
      if ( std::operator!=<Scene>(0LL, scene_ptr) )
      {
        v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
        BlockGroupComp = Scene::getBlockGroupComp(v9);
        if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
          __asan_report_load8(BlockGroupComp);
        v11 = (unsigned __int64)(BlockGroupComp->_vptr_SceneCompBase + 13);
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
          __asan_report_load8(BlockGroupComp->_vptr_SceneCompBase + 13);
        (*(void (__fastcall **)(SceneBlockGroupComp *, std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *, __int64))v11)(
          BlockGroupComp,
          group_vec,
          1LL);
      }
      std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator++(&__for_begin);
    }
    __for_range_0 = &circle_camp_info->delay_unload_camp_set;
    __for_begin_0._M_node = std::set<unsigned int>::begin(&circle_camp_info->delay_unload_camp_set)._M_node;
    __for_end_0._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v12 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin_0);
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      *(_DWORD *)(v2 + 48) = *v13;
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 128));
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v42);
      v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42);
      v15 = BlossomExcelConfigMgr::getBlossomAllGroupIdVec(
              &v14->design_config.txt_config_mgr.blossom_config_mgr,
              *(_DWORD *)(v2 + 48),
              (std::vector<unsigned int> *)(v2 + 128)) == 0;
      std::shared_ptr<Config>::~shared_ptr(&v42);
      if ( v15 )
      {
        std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 272));
        PlayerBlossomComp::getGroupSceneMap(
          this,
          (const std::vector<unsigned int> *)(v2 + 128),
          (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v2 + 272));
        __for_range_1 = (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v2 + 272);
        __for_begin._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::begin((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 272))._M_node;
        __for_end._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::end(__for_range_1)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v36 = std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator*(&__for_begin);
          scene_ptr_0 = std::get<0ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(v36);
          group_vec_0 = std::get<1ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(v36);
          if ( std::operator!=<Scene>(0LL, scene_ptr_0) )
          {
            v16 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr_0);
            v17 = Scene::getBlockGroupComp(v16);
            if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v17);
            v18 = (unsigned __int64)(v17->_vptr_SceneCompBase + 13);
            if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v17->_vptr_SceneCompBase + 13);
            (*(void (__fastcall **)(SceneBlockGroupComp *, std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *, __int64))v18)(
              v17,
              group_vec_0,
              1LL);
          }
          std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator++(&__for_begin);
        }
        std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::~map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 272));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v43,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/blossom/player_blossom_comp.cpp",
          "clearCircleCampGroup",
          2169);
        v19 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                &v43,
                (const char (*)[58])"[PlayerBlossomComp] getBlossomAllGroupIdVec failed, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
        v21 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v20, (const char (*)[10])" camp_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v43);
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 128));
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin_0);
    }
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "clearCircleCampGroup",
      2172);
    v22 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            &v43,
            (const char (*)[24])" delay_unload_camp_set:");
    v23 = common::milog::MiLogStream::operator<<<unsigned int>(v22, &circle_camp_info->delay_unload_camp_set);
    v24 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v23, (const char (*)[8])" @camp:");
    v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &circle_camp_info->circle_camp_id);
    v26 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v25, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
    common::milog::MiLogStream::~MiLogStream(&v43);
    v8 = 0;
    std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::~map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 192));
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
  result = v8;
  if ( v44 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 2178: range 00000000171E2758-00000000171E2F64
__int64 __fastcall PlayerBlossomComp::clearBlossomDecorateGroup(PlayerBlossomComp *const this, uint32_t refresh_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  unsigned int v9; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo> >::pointer v10; // rax
  unsigned int *v11; // rax
  unsigned int *v12; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  bool v14; // r14
  common::milog::MiLogStream *v15; // r14
  Scene *v16; // rax
  SceneBlockGroupComp *BlockGroupComp; // rax
  unsigned __int64 v18; // rdx
  __int64 result; // rax
  unsigned int val; // [rsp+18h] [rbp-1F8h] BYREF
  unsigned int circle_camp_id; // [rsp+1Ch] [rbp-1F4h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-1F0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-1E8h] BYREF
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::iterator __for_begin_0; // [rsp+30h] [rbp-1E0h] BYREF
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::iterator __for_end_0; // [rsp+38h] [rbp-1D8h] BYREF
  BlossomRefreshInfo *refresh_info; // [rsp+40h] [rbp-1D0h]
  std::set<unsigned int> *__for_range; // [rsp+48h] [rbp-1C8h]
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *__for_range_0; // [rsp+50h] [rbp-1C0h]
  std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > *__in; // [rsp+58h] [rbp-1B8h]
  std::tuple_element<0,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *scene_ptr; // [rsp+60h] [rbp-1B0h]
  std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *group_vec; // [rsp+68h] [rbp-1A8h]
  std::shared_ptr<Config> v32; // [rsp+70h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v33; // [rsp+80h] [rbp-190h] BYREF
  char v34[368]; // [rsp+A0h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 15 refresh_id:2177 64 8 9 iter:2181 96 24 26 decorate_group_id_vec:2197 160 48 21 used_ca"
                        "mp_id_set:2189 240 48 20 scene_group_map:2204";
  *(_QWORD *)(v2 + 16) = PlayerBlossomComp::clearBlossomDecorateGroup;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862729] = -202116109;
  *(_DWORD *)(v2 + 48) = refresh_id;
  common::milog::MiLogStream::create(
    &v33,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/blossom/player_blossom_comp.cpp",
    "clearBlossomDecorateGroup",
    2179);
  v5 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
         &v33,
         (const char (*)[53])"[PlayerBlossomComp] clearBlossomDecorateGroup, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
  v7 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" ,refresh_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream(&v33);
  *(std::map<unsigned int,BlossomRefreshInfo>::iterator *)(v2 + 64) = std::map<unsigned int,BlossomRefreshInfo>::find(
                                                                        &this->refresh_info_map_,
                                                                        (const std::map<unsigned int,BlossomRefreshInfo>::key_type *)(v2 + 48));
  __for_end_0._M_node = std::map<unsigned int,BlossomRefreshInfo>::end(&this->refresh_info_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo> >::_Self *)&__for_end_0) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "clearBlossomDecorateGroup",
      2184);
    v8 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v33,
           (const char (*)[50])"[PlayerBlossomComp] find refresh_id failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v33);
    v9 = -1;
  }
  else
  {
    v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo> > *const)(v2 + 64));
    refresh_info = &v10->second;
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 160), &v10->second.used_camp_id_set);
    __for_range = (std::set<unsigned int> *)(v2 + 160);
    __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 160))._M_node;
    __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v11 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      circle_camp_id = *v12;
      if ( !PlayerBlossomComp::checkCircleCampIdInUse(this, circle_camp_id) )
      {
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 96));
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v32);
        v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
        v14 = BlossomExcelConfigMgr::getBlossomDecorateGroupIdVec(
                &v13->design_config.txt_config_mgr.blossom_config_mgr,
                circle_camp_id,
                (std::vector<unsigned int> *)(v2 + 96)) != 0;
        std::shared_ptr<Config>::~shared_ptr(&v32);
        if ( v14 )
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/blossom/player_blossom_comp.cpp",
            "clearBlossomDecorateGroup",
            2200);
          v15 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                  &v33,
                  (const char (*)[63])"[PlayerBlossomComp] getBlossomDecorateGroupIdVec failed, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
          common::milog::MiLogStream::~MiLogStream(&v33);
        }
        else
        {
          std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 240));
          PlayerBlossomComp::getGroupSceneMap(
            this,
            (const std::vector<unsigned int> *)(v2 + 96),
            (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v2 + 240));
          __for_range_0 = (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v2 + 240);
          __for_begin_0._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::begin((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 240))._M_node;
          __for_end_0._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::end(__for_range_0)._M_node;
          while ( std::operator!=(&__for_begin_0, &__for_end_0) )
          {
            __in = std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator*(&__for_begin_0);
            scene_ptr = std::get<0ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(__in);
            group_vec = std::get<1ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(__in);
            if ( std::operator!=<Scene>(0LL, scene_ptr) )
            {
              v16 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
              BlockGroupComp = Scene::getBlockGroupComp(v16);
              if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
                __asan_report_load8(BlockGroupComp);
              v18 = (unsigned __int64)(BlockGroupComp->_vptr_SceneCompBase + 13);
              if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
                __asan_report_load8(BlockGroupComp->_vptr_SceneCompBase + 13);
              (*(void (__fastcall **)(SceneBlockGroupComp *, std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *, __int64))v18)(
                BlockGroupComp,
                group_vec,
                1LL);
            }
            std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator++(&__for_begin_0);
          }
          std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::~map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v2 + 240));
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 96));
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    v9 = 0;
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 160));
  }
  result = v9;
  if ( v34 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
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
  return result;
};

// Line 2219: range 00000000171E2F66-00000000171E3EE8
int32_t __cdecl PlayerBlossomComp::fillBlossomBriefInfo(
        PlayerBlossomComp *const this,
        const BlossomCircleCampInfo *circle_camp_info,
        proto::BlossomBriefInfo *proto_info)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  BlossomExcelConfigMgr *p_blossom_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rbx
  int32_t v8; // r14d
  std::vector<unsigned int>::const_reference v9; // rax
  _DWORD *v10; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // r14
  BlossomExcelConfigMgr *v18; // rcx
  common::milog::MiLogStream *v19; // rax
  BlossomExcelConfigMgr *v20; // rcx
  common::milog::MiLogStream *v21; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  proto::Vector *v24; // rax
  const BlossomExcelConfigMgr *p_valid_world_level; // rdi
  uint32_t valid_world_level; // edx
  uint32_t v27; // ecx
  uint32_t MonsterShowLevel; // edx
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-FCh] BYREF
  uint32_t resin; // [rsp+28h] [rbp-F8h]
  uint32_t reward_id; // [rsp+2Ch] [rbp-F4h]
  const data::BlossomGroupsExcelConfig *groups_config_ptr; // [rsp+30h] [rbp-F0h]
  const SceneScriptConfig *scene_script_config_ptr; // [rsp+38h] [rbp-E8h]
  const data::BlossomRefreshExcelConfig *refresh_config_ptr; // [rsp+40h] [rbp-E0h]
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+48h] [rbp-D8h]
  const data::BlossomChestExcelConfig *chest_config_ptr; // [rsp+50h] [rbp-D0h]
  const data::BlossomRewardExcelConfig *reward_config_ptr; // [rsp+58h] [rbp-C8h]
  std::shared_ptr<Config> v41; // [rsp+60h] [rbp-C0h] BYREF
  common::milog::MiLogStream v42; // [rsp+70h] [rbp-B0h] BYREF
  char v43[144]; // [rsp+90h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 13 group_id:2233 48 4 13 scene_id:2234 64 16 14 scene_ptr:2236";
  *(_QWORD *)(v3 + 16) = PlayerBlossomComp::fillBlossomBriefInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v41);
  p_blossom_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41)->design_config.txt_config_mgr.blossom_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info->circle_camp_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)circle_camp_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&circle_camp_info->circle_camp_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&circle_camp_info->circle_camp_id);
  }
  groups_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomGroupsExcelConfig(
                        p_blossom_config_mgr,
                        circle_camp_info->circle_camp_id);
  std::shared_ptr<Config>::~shared_ptr(&v41);
  if ( !groups_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "fillBlossomBriefInfo",
      2223);
    v7 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
           &v42,
           (const char (*)[63])"[PlayerBlossomComp] findBlossomGroupsExcelConfig failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_9:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v42);
    v8 = -1;
    goto LABEL_70;
  }
  if ( std::vector<unsigned int>::empty(&groups_config_ptr->new_group_vec) )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "fillBlossomBriefInfo",
      2229);
    v7 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v42,
           (const char (*)[50])"[PlayerBlossomComp] new_group_vec is empty, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_9;
  }
  v9 = std::vector<unsigned int>::operator[](&groups_config_ptr->new_group_vec, 0LL);
  v10 = v9;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v9);
  }
  *(_DWORD *)(v3 + 32) = *v10;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v41);
  v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41);
  *(_DWORD *)(v3 + 48) = LuaConfigMgr::getSceneIdByGroupId(&v11->design_config.lua_config_mgr, *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v41);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  SceneComp = (unsigned int)Player::getSceneComp(this->player_);
  PlayerSceneComp::getPersonalScene((PlayerSceneComp *const)(v3 + 64), SceneComp);
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "fillBlossomBriefInfo",
      2239);
    v13 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
            &v42,
            (const char (*)[51])"[PlayerBlossomComp] getPersonalScene failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
    v15 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v14, (const char (*)[8])" scene:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v42);
    v8 = -1;
    goto LABEL_69;
  }
  v16 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  scene_script_config_ptr = Scene::getScriptConfig(v16);
  if ( !scene_script_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "fillBlossomBriefInfo",
      2246);
    v17 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
            &v42,
            (const char (*)[50])"[PlayerBlossomComp] getScriptConfig failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_25:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
    common::milog::MiLogStream::~MiLogStream(&v42);
    v8 = -1;
    goto LABEL_69;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v41);
  v18 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41)->design_config.txt_config_mgr.blossom_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)circle_camp_info >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)circle_camp_info >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(circle_camp_info);
  }
  refresh_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomRefreshExcelConfig(v18, circle_camp_info->refresh_id);
  std::shared_ptr<Config>::~shared_ptr(&v41);
  if ( !refresh_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "fillBlossomBriefInfo",
      2253);
    v17 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
            &v42,
            (const char (*)[64])"[PlayerBlossomComp] findBlossomRefreshExcelConfig failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_25;
  }
  group_info_config_ptr = SceneScriptConfig::findGroupInfoConfig(scene_script_config_ptr, *(_DWORD *)(v3 + 32));
  if ( group_info_config_ptr )
  {
    resin = 0;
    if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->blossom_chest_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->blossom_chest_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&refresh_config_ptr->blossom_chest_id);
    }
    if ( refresh_config_ptr->blossom_chest_id )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v41);
      v20 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41)->design_config.txt_config_mgr.blossom_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->blossom_chest_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->blossom_chest_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&refresh_config_ptr->blossom_chest_id);
      }
      chest_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomChestExcelConfig(
                           v20,
                           refresh_config_ptr->blossom_chest_id);
      std::shared_ptr<Config>::~shared_ptr(&v41);
      if ( !chest_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/blossom/player_blossom_comp.cpp",
          "fillBlossomBriefInfo",
          2271);
        v21 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                &v42,
                (const char (*)[62])"[PlayerBlossomComp] findBlossomChestExcelConfig failed, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
        v23 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v22,
                (const char (*)[21])" ,blossom_chest_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v23,
          &refresh_config_ptr->blossom_chest_id);
        common::milog::MiLogStream::~MiLogStream(&v42);
        v8 = -1;
        goto LABEL_69;
      }
      if ( *(_BYTE *)(((unsigned __int64)&chest_config_ptr->resin >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)chest_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&chest_config_ptr->resin >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&chest_config_ptr->resin);
      }
      resin = chest_config_ptr->resin;
    }
    if ( *(_BYTE *)(((unsigned __int64)circle_camp_info >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)circle_camp_info >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(circle_camp_info);
    }
    proto::BlossomBriefInfo::set_refresh_id(proto_info, circle_camp_info->refresh_id);
    if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info->circle_camp_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)circle_camp_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&circle_camp_info->circle_camp_id >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&circle_camp_info->circle_camp_id);
    }
    proto::BlossomBriefInfo::set_circle_camp_id(proto_info, circle_camp_info->circle_camp_id);
    if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->city_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)refresh_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->city_id >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&refresh_config_ptr->city_id);
    }
    proto::BlossomBriefInfo::set_city_id(proto_info, refresh_config_ptr->city_id);
    proto::BlossomBriefInfo::set_resin(proto_info, resin);
    Vector3::operator proto::Vector((proto::Vector *)&v42, &group_info_config_ptr->pos);
    v24 = proto::BlossomBriefInfo::mutable_pos(proto_info);
    proto::Vector::operator=(v24, (proto::Vector *)&v42);
    proto::Vector::~Vector((proto::Vector *const)&v42);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v41);
    p_valid_world_level = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41)->design_config.txt_config_mgr.blossom_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info->valid_world_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&circle_camp_info->valid_world_level >> 3) + 0x7FFF8000) <= 3 )
    {
      p_valid_world_level = (const BlossomExcelConfigMgr *)&circle_camp_info->valid_world_level;
      __asan_report_load4(&circle_camp_info->valid_world_level);
    }
    valid_world_level = circle_camp_info->valid_world_level;
    if ( *(_BYTE *)(((unsigned __int64)circle_camp_info >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)circle_camp_info >> 3) + 0x7FFF8000) <= 3 )
    {
      p_valid_world_level = (const BlossomExcelConfigMgr *)circle_camp_info;
      __asan_report_load4(circle_camp_info);
    }
    reward_config_ptr = BlossomExcelConfigMgr::findBlossomDropReward(
                          p_valid_world_level,
                          circle_camp_info->refresh_id,
                          valid_world_level);
    std::shared_ptr<Config>::~shared_ptr(&v41);
    reward_id = 0;
    if ( reward_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&reward_config_ptr->preview_reward >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)reward_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reward_config_ptr->preview_reward >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(&reward_config_ptr->preview_reward);
      }
      reward_id = reward_config_ptr->preview_reward;
    }
    proto::BlossomBriefInfo::set_reward_id(proto_info, reward_id);
    if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info->valid_world_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&circle_camp_info->valid_world_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&circle_camp_info->valid_world_level);
    }
    v27 = circle_camp_info->valid_world_level;
    if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->revise_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->revise_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&refresh_config_ptr->revise_level);
    }
    MonsterShowLevel = PlayerBlossomComp::getMonsterShowLevel(
                         this,
                         *(_DWORD *)(v3 + 32),
                         refresh_config_ptr->revise_level,
                         v27);
    proto::BlossomBriefInfo::set_monster_level(proto_info, MonsterShowLevel);
    if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info->is_guide_opened >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)circle_camp_info + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&circle_camp_info->is_guide_opened >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load1(&circle_camp_info->is_guide_opened);
    }
    proto::BlossomBriefInfo::set_is_guide_opened(proto_info, circle_camp_info->is_guide_opened);
    if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info->state >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)circle_camp_info + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&circle_camp_info->state >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&circle_camp_info->state);
    }
    proto::BlossomBriefInfo::set_state(proto_info, circle_camp_info->state);
    proto::BlossomBriefInfo::set_scene_id(proto_info, *(_DWORD *)(v3 + 48));
    v8 = 0;
    goto LABEL_69;
  }
  common::milog::MiLogStream::create(
    &v42,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/blossom/player_blossom_comp.cpp",
    "fillBlossomBriefInfo",
    2260);
  v19 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
          &v42,
          (const char (*)[58])"[PlayerBlossomComp] findGroupInfoConfig failed, group_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 32));
  common::milog::MiLogStream::~MiLogStream(&v42);
  v8 = -1;
LABEL_69:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
LABEL_70:
  result = v8;
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

// Line 2298: range 00000000171E3F78-00000000171E43FA
void __cdecl PlayerBlossomComp::broadcastBlossomBriefInfo(PlayerBlossomComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  void (__fastcall **v4)(PlayerBlossomComp *const); // rax
  std::__shared_ptr_access<proto::WorldOwnerBlossomBriefInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  google::protobuf::RepeatedPtrField<proto::BlossomBriefInfo> *v6; // rdx
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  unsigned int val; // [rsp+1Ch] [rbp-C4h] BYREF
  std::shared_ptr<proto::WorldOwnerBlossomBriefInfoNotify> v11; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 15 notify_ptr:2302 64 16 14 world_ptr:2309";
  *(_QWORD *)(v1 + 16) = PlayerBlossomComp::broadcastBlossomBriefInfo;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v4 = (void (__fastcall **)(PlayerBlossomComp *const))(this->_vptr_PlayerCompBase + 10);
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    __asan_report_load8(this->_vptr_PlayerCompBase + 10);
  (*v4)(this);
  common::tools::perf::make_shared<proto::WorldOwnerBlossomBriefInfoNotify>();
  v5 = std::__shared_ptr_access<proto::WorldOwnerBlossomBriefInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::WorldOwnerBlossomBriefInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  v6 = proto::WorldOwnerBlossomBriefInfoNotify::mutable_brief_info_list(v5);
  if ( PlayerBlossomComp::fillBlossomBriefInfoList(this, v6) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "broadcastBlossomBriefInfo",
      2305);
    v7 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v12,
           (const char (*)[59])"[PlayerBlossomComp] fillBlossomBriefInfoList failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v1 + 64));
    if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "broadcastBlossomBriefInfo",
        2312);
      v8 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
             &v12,
             (const char (*)[51])"[PlayerBlossomComp] getMyPlayerWorld failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v12);
    }
    else
    {
      v9 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      std::shared_ptr<proto::WorldOwnerBlossomBriefInfoNotify>::shared_ptr(
        &v11,
        (const std::shared_ptr<proto::WorldOwnerBlossomBriefInfoNotify> *)(v1 + 32));
      std::function<ForeachPolicy ()(Player &)>::function<PlayerBlossomComp::broadcastBlossomBriefInfo(void)::{lambda(Player &)#1},void,void>(
        (std::function<ForeachPolicy(Player&)> *const)&v12,
        (PlayerBlossomComp::broadcastBlossomBriefInfo::<lambda(Player&)> *)&v11);
      World::foreachPlayer(v9, (std::function<ForeachPolicy(Player&)> *)&v12);
      std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v12);
      PlayerBlossomComp::broadcastBlossomBriefInfo(void)::{lambda(Player &)#1}::~Player((PlayerBlossomComp::broadcastBlossomBriefInfo::<lambda(Player&)> *const)&v11);
    }
    std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v1 + 64));
  }
  std::shared_ptr<proto::WorldOwnerBlossomBriefInfoNotify>::~shared_ptr((std::shared_ptr<proto::WorldOwnerBlossomBriefInfoNotify> *const)(v1 + 32));
  if ( v13 == (char *)v1 )
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

// Line 2317: range 00000000171E3EEA-00000000171E3F5B
ForeachPolicy __cdecl PlayerBlossomComp::broadcastBlossomBriefInfo(void)::{lambda(Player &)#1}::operator()(
        const PlayerBlossomComp::broadcastBlossomBriefInfo::<lambda(Player&)> *const __closure,
        Player *player)
{
  std::shared_ptr<proto::WorldOwnerBlossomBriefInfoNotify> __r; // [rsp+10h] [rbp-20h] BYREF

  std::dynamic_pointer_cast<google::protobuf::Message const,proto::WorldOwnerBlossomBriefInfoNotify>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  return 0;
};

// Line 2317: range 00000000171F672E-00000000171F6753
void __cdecl PlayerBlossomComp::broadcastBlossomBriefInfo(void)::{lambda(Player &)#1}::Player(
        PlayerBlossomComp::broadcastBlossomBriefInfo::<lambda(Player&)> *const this,
        PlayerBlossomComp::broadcastBlossomBriefInfo::<lambda(Player&)> *a2)
{
  std::shared_ptr<proto::WorldOwnerBlossomBriefInfoNotify>::shared_ptr(&this->__notify_ptr, &a2->__notify_ptr);
};

// Line 2317: range 00000000171F681E-00000000171F6843
void __cdecl PlayerBlossomComp::broadcastBlossomBriefInfo(void)::{lambda(Player &)#1}::Player(
        PlayerBlossomComp::broadcastBlossomBriefInfo::<lambda(Player&)> *const this,
        const PlayerBlossomComp::broadcastBlossomBriefInfo::<lambda(Player&)> *a2)
{
  std::shared_ptr<proto::WorldOwnerBlossomBriefInfoNotify>::shared_ptr(&this->__notify_ptr, &a2->__notify_ptr);
};

// Line 2317: range 00000000171E3F5C-00000000171E3F76
void __cdecl PlayerBlossomComp::broadcastBlossomBriefInfo(void)::{lambda(Player &)#1}::~Player(
        PlayerBlossomComp::broadcastBlossomBriefInfo::<lambda(Player&)> *const this)
{
  std::shared_ptr<proto::WorldOwnerBlossomBriefInfoNotify>::~shared_ptr(&this->__notify_ptr);
};

// Line 2325: range 00000000171E43FC-00000000171E4750
int32_t __cdecl PlayerBlossomComp::fillBlossomScheduleInfo(
        PlayerBlossomComp *const this,
        const BlossomCircleCampInfo *circle_camp_info,
        proto::BlossomScheduleInfo *schedule_info)
{
  BlossomExcelConfigMgr *p_blossom_config_mgr; // rcx
  common::milog::MiLogStream *v4; // rbx
  unsigned int val; // [rsp+24h] [rbp-4Ch] BYREF
  const data::BlossomGroupsExcelConfig *groups_config_ptr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v9; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v10; // [rsp+40h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  p_blossom_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9)->design_config.txt_config_mgr.blossom_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info->circle_camp_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)circle_camp_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&circle_camp_info->circle_camp_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&circle_camp_info->circle_camp_id);
  }
  groups_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomGroupsExcelConfig(
                        p_blossom_config_mgr,
                        circle_camp_info->circle_camp_id);
  std::shared_ptr<Config>::~shared_ptr(&v9);
  if ( groups_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)circle_camp_info >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)circle_camp_info >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(circle_camp_info);
    }
    proto::BlossomScheduleInfo::set_refresh_id(schedule_info, circle_camp_info->refresh_id);
    if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info->circle_camp_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)circle_camp_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&circle_camp_info->circle_camp_id >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&circle_camp_info->circle_camp_id);
    }
    proto::BlossomScheduleInfo::set_circle_camp_id(schedule_info, circle_camp_info->circle_camp_id);
    if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info->round >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&circle_camp_info->round >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&circle_camp_info->round);
    }
    proto::BlossomScheduleInfo::set_round(schedule_info, circle_camp_info->round);
    if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info->state >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)circle_camp_info + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&circle_camp_info->state >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&circle_camp_info->state);
    }
    proto::BlossomScheduleInfo::set_state(schedule_info, circle_camp_info->state);
    if ( *(_BYTE *)(((unsigned __int64)&circle_camp_info->progress >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&circle_camp_info->progress >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&circle_camp_info->progress);
    }
    proto::BlossomScheduleInfo::set_progress(schedule_info, circle_camp_info->progress);
    if ( *(_BYTE *)(((unsigned __int64)&groups_config_ptr->finish_progress >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)groups_config_ptr + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&groups_config_ptr->finish_progress >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&groups_config_ptr->finish_progress);
    }
    proto::BlossomScheduleInfo::set_finish_progress(schedule_info, groups_config_ptr->finish_progress);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "fillBlossomScheduleInfo",
      2329);
    v4 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
           &v10,
           (const char (*)[63])"[PlayerBlossomComp] findBlossomGroupsExcelConfig failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v10);
    return -1;
  }
};

// Line 2344: range 00000000171E4752-00000000171E4B2D
int32_t __cdecl PlayerBlossomComp::broadcastBlossomScheduleInfo(
        PlayerBlossomComp *const this,
        const BlossomCircleCampInfo *circle_camp_info,
        GroupPtr *p_group_ptr)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // r14
  proto::BlossomScheduleInfo *v9; // rax
  Group *v10; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-F4h] BYREF
  char v14[240]; // [rsp+30h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 32 11 notify:2358 112 48 18 schedule_info:2351";
  *(_QWORD *)(v3 + 16) = PlayerBlossomComp::broadcastBlossomScheduleInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -219021312;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  if ( std::operator==<Group>(0LL, p_group_ptr) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 48),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "broadcastBlossomScheduleInfo",
      2347);
    v6 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           (common::milog::MiLogStream *const)(v3 + 48),
           (const char (*)[45])"[PlayerBlossomComp] group_ptr is null, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 48));
    v7 = -1;
  }
  else
  {
    proto::BlossomScheduleInfo::BlossomScheduleInfo((proto::BlossomScheduleInfo *const)(v3 + 112));
    if ( PlayerBlossomComp::fillBlossomScheduleInfo(this, circle_camp_info, (proto::BlossomScheduleInfo *)(v3 + 112)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 48),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "broadcastBlossomScheduleInfo",
        2354);
      v8 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
             (common::milog::MiLogStream *const)(v3 + 48),
             (const char (*)[58])"[PlayerBlossomComp] fillBlossomScheduleInfo failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 48));
      v7 = -1;
    }
    else
    {
      proto::WorldOwnerBlossomScheduleInfoNotify::WorldOwnerBlossomScheduleInfoNotify((proto::WorldOwnerBlossomScheduleInfoNotify *const)(v3 + 48));
      v9 = proto::WorldOwnerBlossomScheduleInfoNotify::mutable_schedule_info((proto::WorldOwnerBlossomScheduleInfoNotify *const)(v3 + 48));
      proto::BlossomScheduleInfo::CopyFrom(v9, (const proto::BlossomScheduleInfo *)(v3 + 112));
      v10 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
      Group::notifyAllPlayer<proto::WorldOwnerBlossomScheduleInfoNotify>(
        v10,
        (proto::WorldOwnerBlossomScheduleInfoNotify *)(v3 + 48),
        0);
      v7 = 0;
      proto::WorldOwnerBlossomScheduleInfoNotify::~WorldOwnerBlossomScheduleInfoNotify((proto::WorldOwnerBlossomScheduleInfoNotify *const)(v3 + 48));
    }
    proto::BlossomScheduleInfo::~BlossomScheduleInfo((proto::BlossomScheduleInfo *const)(v3 + 112));
  }
  result = v7;
  if ( v14 == (char *)v3 )
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

// Line 2366: range 00000000171E4B2E-00000000171E5565
__int64 __fastcall PlayerBlossomComp::logCircleCampRefresh(PlayerBlossomComp *const this, uint32_t refresh_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rbx
  BlossomExcelConfigMgr *p_blossom_config_mgr; // rcx
  common::milog::MiLogStream *v10; // rbx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomCircleCampRefresh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomCircleCampRefresh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomCircleCampRefresh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomCircleCampRefresh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rcx
  unsigned int *v15; // rax
  unsigned int *v16; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomCircleCampRefresh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  unsigned int *v18; // rax
  unsigned int *v19; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomCircleCampRefresh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomCircleCampRefresh,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rcx
  Player *player; // r14
  unsigned int val; // [rsp+1Ch] [rbp-164h] BYREF
  unsigned int decorate_group_id; // [rsp+20h] [rbp-160h]
  unsigned int new_group_id; // [rsp+24h] [rbp-15Ch]
  std::map<unsigned int,BlossomCircleCampInfo>::iterator __for_begin; // [rsp+28h] [rbp-158h] BYREF
  std::map<unsigned int,BlossomCircleCampInfo>::iterator __for_end; // [rsp+30h] [rbp-150h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+38h] [rbp-148h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+40h] [rbp-140h] BYREF
  const data::BlossomRefreshExcelConfig *refresh_config_ptr; // [rsp+48h] [rbp-138h]
  BlossomRefreshInfo *refresh_info; // [rsp+50h] [rbp-130h]
  std::map<unsigned int,BlossomCircleCampInfo> *__for_range; // [rsp+58h] [rbp-128h]
  const std::pair<unsigned int const,BlossomCircleCampInfo> *v33; // [rsp+60h] [rbp-120h]
  std::tuple_element<0,const std::pair<unsigned int const,BlossomCircleCampInfo> >::type *circle_camp_id; // [rsp+68h] [rbp-118h]
  std::tuple_element<1,const std::pair<unsigned int const,BlossomCircleCampInfo> >::type *circle_camp_info; // [rsp+70h] [rbp-110h]
  const data::BlossomGroupsExcelConfig *groups_config_ptr; // [rsp+78h] [rbp-108h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+80h] [rbp-100h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+88h] [rbp-F8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+90h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> v40; // [rsp+A0h] [rbp-E0h] BYREF
  common::milog::MiLogStream v41; // [rsp+B0h] [rbp-D0h] BYREF
  char v42[176]; // [rsp+D0h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 refresh_id:2365 64 8 9 iter:2374 96 16 12 log_ptr:2391";
  *(_QWORD *)(v2 + 16) = PlayerBlossomComp::logCircleCampRefresh;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = refresh_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v40);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v40);
  refresh_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomRefreshExcelConfig(
                         &v5->design_config.txt_config_mgr.blossom_config_mgr,
                         *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v40);
  if ( refresh_config_ptr )
  {
    *(std::map<unsigned int,BlossomRefreshInfo>::iterator *)(v2 + 64) = std::map<unsigned int,BlossomRefreshInfo>::find(
                                                                          &this->refresh_info_map_,
                                                                          (const std::map<unsigned int,BlossomRefreshInfo>::key_type *)(v2 + 48));
    __for_end_0._M_current = (const unsigned int *)std::map<unsigned int,BlossomRefreshInfo>::end(&this->refresh_info_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo> >::_Self *)(v2 + 64),
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo> >::_Self *)&__for_end_0) )
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "logCircleCampRefresh",
        2377);
      v8 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
             &v41,
             (const char (*)[50])"[PlayerBlossomComp] find refresh_id failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v41);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      refresh_info = &std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo> > *const)(v2 + 64))->second;
      __for_range = &refresh_info->circle_camp_info_map;
      __for_begin._M_node = std::map<unsigned int,BlossomCircleCampInfo>::begin(&refresh_info->circle_camp_info_map)._M_node;
      __for_end._M_node = std::map<unsigned int,BlossomCircleCampInfo>::end(__for_range)._M_node;
      while ( 1 )
      {
        if ( !std::operator!=(&__for_begin, &__for_end) )
        {
          result = 0LL;
          goto LABEL_42;
        }
        v33 = std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomCircleCampInfo>>::operator*(&__for_begin);
        circle_camp_id = std::get<0ul,unsigned int const,BlossomCircleCampInfo>(v33);
        circle_camp_info = (std::tuple_element<1,const std::pair<unsigned int const,BlossomCircleCampInfo> >::type *)std::get<1ul,unsigned int const,BlossomCircleCampInfo>(v33);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v40);
        p_blossom_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v40)->design_config.txt_config_mgr.blossom_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)circle_camp_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)circle_camp_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)circle_camp_id >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4(circle_camp_id);
        }
        groups_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomGroupsExcelConfig(
                              p_blossom_config_mgr,
                              *circle_camp_id);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v40);
        if ( !groups_config_ptr )
          break;
        common::tools::perf::make_shared<proto_log::PlayerLogBodyBlossomCircleCampRefresh>();
        v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomCircleCampRefresh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomCircleCampRefresh,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        proto_log::PlayerLogBodyBlossomCircleCampRefresh::set_refresh_id(v11, *(_DWORD *)(v2 + 48));
        v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomCircleCampRefresh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomCircleCampRefresh,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( *(_BYTE *)(((unsigned __int64)circle_camp_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)circle_camp_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)circle_camp_id >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4(circle_camp_id);
        }
        proto_log::PlayerLogBodyBlossomCircleCampRefresh::set_circle_camp_id(v12, *circle_camp_id);
        v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomCircleCampRefresh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomCircleCampRefresh,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->city_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)refresh_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->city_id >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&refresh_config_ptr->city_id);
        }
        proto_log::PlayerLogBodyBlossomCircleCampRefresh::set_city_id(v13, refresh_config_ptr->city_id);
        v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomCircleCampRefresh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomCircleCampRefresh,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&groups_config_ptr->section_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&groups_config_ptr->section_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&groups_config_ptr->section_id);
        }
        proto_log::PlayerLogBodyBlossomCircleCampRefresh::set_section_id(v14, groups_config_ptr->section_id);
        __for_range_0 = &groups_config_ptr->new_group_vec;
        __for_begin_0._M_current = std::vector<unsigned int>::begin(&groups_config_ptr->new_group_vec)._M_current;
        __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
        {
          v15 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
          v16 = v15;
          if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v15);
          }
          new_group_id = *v16;
          v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomCircleCampRefresh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomCircleCampRefresh,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          proto_log::PlayerLogBodyBlossomCircleCampRefresh::add_new_group_id_list(v17, new_group_id);
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
        }
        __for_range_1 = &groups_config_ptr->decorate_group_vec;
        __for_begin_0._M_current = std::vector<unsigned int>::begin(&groups_config_ptr->decorate_group_vec)._M_current;
        __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_1)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
        {
          v18 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
          v19 = v18;
          if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v18);
          }
          decorate_group_id = *v19;
          v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomCircleCampRefresh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomCircleCampRefresh,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          proto_log::PlayerLogBodyBlossomCircleCampRefresh::add_decorate_group_id_list(v20, decorate_group_id);
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
        }
        v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomCircleCampRefresh,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlossomCircleCampRefresh,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->refresh_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->refresh_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&refresh_config_ptr->refresh_type);
        }
        proto_log::PlayerLogBodyBlossomCircleCampRefresh::set_refresh_type(v21, refresh_config_ptr->refresh_type);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        player = this->player_;
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&v40, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyBlossomCircleCampRefresh,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyBlossomCircleCampRefresh> *)(v2 + 96));
        Player::printStatLog(player, &p_body_ptr, &v40, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v40);
        std::shared_ptr<proto_log::PlayerLogBodyBlossomCircleCampRefresh>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyBlossomCircleCampRefresh> *const)(v2 + 96));
        std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomCircleCampInfo>>::operator++(&__for_begin);
      }
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "logCircleCampRefresh",
        2387);
      v10 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
              &v41,
              (const char (*)[63])"[PlayerBlossomComp] findBlossomGroupsExcelConfig failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v41);
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "logCircleCampRefresh",
      2370);
    v6 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
           &v41,
           (const char (*)[64])"[PlayerBlossomComp] findBlossomRefreshExcelConfig failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v41);
    result = 0xFFFFFFFFLL;
  }
LABEL_42:
  if ( v42 == (char *)v2 )
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

// Line 2413: range 00000000171E5566-00000000171E5A76
uint32_t __cdecl PlayerBlossomComp::getMonsterShowLevel(
        PlayerBlossomComp *const this,
        uint32_t group_id,
        uint32_t revise_id,
        uint32_t world_level)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  uint32_t v12; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  unsigned __int64 v15; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  TxtConfigMgr *p_txt_config_mgr; // rdx
  uint32_t *p_max_monster_curve_level; // rax
  bool v19; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  TxtConfigMgr *v21; // rdx
  uint32_t *v22; // rax
  uint32_t result; // eax
  unsigned int val; // [rsp+20h] [rbp-E0h] BYREF
  uint32_t monster_level; // [rsp+24h] [rbp-DCh]
  uint32_t revise_level; // [rsp+28h] [rbp-D8h]
  uint32_t base_level; // [rsp+2Ch] [rbp-D4h]
  std::shared_ptr<Config> v30; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<Config> v31; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v32; // [rsp+50h] [rbp-B0h] BYREF
  char v33[144]; // [rsp+70h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 13 scene_id:2415 64 16 14 scene_ptr:2416";
  *(_QWORD *)(v4 + 16) = PlayerBlossomComp::getMonsterShowLevel;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v31);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
  *(_DWORD *)(v4 + 48) = LuaConfigMgr::getSceneIdByGroupId(&v7->design_config.lua_config_mgr, group_id);
  std::shared_ptr<Config>::~shared_ptr(&v31);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  SceneComp = (unsigned int)Player::getSceneComp(this->player_);
  PlayerSceneComp::getPersonalScene((PlayerSceneComp *const)(v4 + 64), SceneComp);
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "getMonsterShowLevel",
      2419);
    v9 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v32,
           (const char (*)[51])"[PlayerBlossomComp] getPersonalScene failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" scene_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v32);
    v12 = 0;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v31);
    v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
    revise_level = ReviseLevelGrowExcelConfigMgr::findReviseLevel(
                     &v13->design_config.txt_config_mgr.revise_level_grow_config_mgr,
                     revise_id,
                     world_level);
    std::shared_ptr<Config>::~shared_ptr(&v31);
    v14 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v14);
    v15 = (unsigned __int64)(v14->_vptr_DescribalBase + 33);
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v14->_vptr_DescribalBase + 33);
    base_level = revise_level
               + (*(__int64 (__fastcall **)(std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v15)(v14)
               + 1;
    monster_level = PlayerWorld::getAdjustedLevel(world_level, base_level);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v30);
    v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
    p_txt_config_mgr = &v16->design_config.txt_config_mgr;
    p_max_monster_curve_level = &v16->design_config.txt_config_mgr.grow_curve_config_mgr.max_monster_curve_level;
    if ( *(_BYTE *)(((unsigned __int64)p_max_monster_curve_level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_max_monster_curve_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_max_monster_curve_level >> 3)
                                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(p_max_monster_curve_level);
    }
    v19 = monster_level > p_txt_config_mgr->grow_curve_config_mgr.max_monster_curve_level;
    std::shared_ptr<Config>::~shared_ptr(&v30);
    if ( v19 )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v31);
      v20 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
      v21 = &v20->design_config.txt_config_mgr;
      v22 = &v20->design_config.txt_config_mgr.grow_curve_config_mgr.max_monster_curve_level;
      if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v22);
      }
      monster_level = v21->grow_curve_config_mgr.max_monster_curve_level;
      std::shared_ptr<Config>::~shared_ptr(&v31);
    }
    v12 = monster_level;
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 64));
  result = v12;
  if ( v33 == (char *)v4 )
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

// Line 2435: range 00000000171E5A78-00000000171E5CA3
__int64 __fastcall PlayerBlossomComp::checkRefreshCondVecIsMeet(
        PlayerBlossomComp *const this,
        uint32_t refresh_id,
        const std::vector<data::BlossomRefreshCond> *cond_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *refreshed; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  std::vector<data::BlossomRefreshCond>::const_iterator __for_begin; // [rsp+20h] [rbp-A0h] BYREF
  std::vector<data::BlossomRefreshCond>::const_iterator __for_end; // [rsp+28h] [rbp-98h] BYREF
  const std::vector<data::BlossomRefreshCond> *__for_range; // [rsp+30h] [rbp-90h]
  const data::BlossomRefreshCond *cond; // [rsp+38h] [rbp-88h]
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
  *(_QWORD *)(v3 + 8) = "1 32 4 15 refresh_id:2434";
  *(_QWORD *)(v3 + 16) = PlayerBlossomComp::checkRefreshCondVecIsMeet;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = refresh_id;
  __for_range = cond_vec;
  __for_begin._M_current = std::vector<data::BlossomRefreshCond>::begin(cond_vec)._M_current;
  __for_end._M_current = std::vector<data::BlossomRefreshCond>::end(cond_vec)._M_current;
  while ( __gnu_cxx::operator!=<data::BlossomRefreshCond const*,std::vector<data::BlossomRefreshCond>>(
            &__for_begin,
            &__for_end) )
  {
    cond = __gnu_cxx::__normal_iterator<data::BlossomRefreshCond const*,std::vector<data::BlossomRefreshCond>>::operator*(&__for_begin);
    if ( !PlayerBlossomComp::checkRefreshCondIsMeet(this, cond) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "checkRefreshCondVecIsMeet",
        2440);
      v6 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(&v15, (const char (*)[55])byte_26051680);
      refreshed = common::milog::MiLogStream::operator<<<data::BlossomRefreshCondType,(data::BlossomRefreshCondType*)0>(
                    v6,
                    &cond->type);
      v8 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
             refreshed,
             (const char (*)[15])" ,refresh_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = 0LL;
      goto LABEL_10;
    }
    __gnu_cxx::__normal_iterator<data::BlossomRefreshCond const*,std::vector<data::BlossomRefreshCond>>::operator++(&__for_begin);
  }
  result = 1LL;
LABEL_10:
  if ( v16 == (char *)v3 )
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

// Line 2449: range 00000000171E5CA4-00000000171E6A99
bool __cdecl PlayerBlossomComp::checkRefreshCondIsMeet(
        PlayerBlossomComp *const this,
        const data::BlossomRefreshCond *cond)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r14
  bool isStateOpen; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *refreshed; // rax
  common::milog::MiLogStream *v8; // rbx
  PlayerBasicComp *BasicComp; // rax
  uint32_t Level; // ebx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v11; // rax
  uint32_t *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rbx
  PlayerBasicComp *v16; // rax
  uint32_t v17; // ebx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v18; // rax
  uint32_t *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rbx
  PlayerBasicComp *v23; // rbx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v24; // rax
  uint32_t *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rbx
  PlayerQuestComp *QuestComp; // rbx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v30; // rax
  uint32_t *v31; // rdx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rbx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v35; // rax
  uint32_t *v36; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v37; // rax
  uint32_t *v38; // rdx
  PlayerActivityComp *ActivityComp; // rax
  std::vector<unsigned int>::const_reference v40; // rax
  _DWORD *v41; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rcx
  uint32_t SceneComp; // ecx
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rcx
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  bool result; // al
  uint32_t idx; // [rsp+14h] [rbp-CCh]
  uint32_t activity_id; // [rsp+18h] [rbp-C8h]
  uint32_t activity_cond_id; // [rsp+1Ch] [rbp-C4h]
  unsigned __int64 val; // [rsp+20h] [rbp-C0h] BYREF
  const data::SceneTagConfig *scene_tag_config_ptr; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v59; // [rsp+30h] [rbp-B0h] BYREF
  char v60[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v60;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 17 scene_tag_id:2517 64 16 14 scene_ptr:2525";
  *(_QWORD *)(v2 + 16) = PlayerBlossomComp::checkRefreshCondIsMeet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&cond->type);
  }
  switch ( cond->type )
  {
    case BLOSSOM_REFRESH_COND_NONE:
      isStateOpen = 1;
      break;
    case BLOSSOM_REFRESH_COND_PLAYER_LEVEL_EQUAL_GREATER:
      if ( std::vector<unsigned int>::size(&cond->param) == 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        BasicComp = Player::getBasicComp(this->player_);
        Level = PlayerBasicComp::getLevel(BasicComp);
        v11 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &cond->param,
                                                                                                    0LL);
        v12 = v11;
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v11);
        }
        isStateOpen = Level >= *v12;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v59,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/blossom/player_blossom_comp.cpp",
          "checkRefreshCondIsMeet",
          2460);
        v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
               &v59,
               (const char (*)[32])"[PlayerBlossomComp] cond_type: ");
        refreshed = common::milog::MiLogStream::operator<<<data::BlossomRefreshCondType,(data::BlossomRefreshCondType*)0>(
                      v6,
                      &cond->type);
        v8 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
               refreshed,
               (const char (*)[22])byte_260517A0);
        val = std::vector<unsigned int>::size(&cond->param);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v8, &val);
        common::milog::MiLogStream::~MiLogStream(&v59);
        isStateOpen = 0;
      }
      break;
    case BLOSSOM_REFRESH_COND_PLAYER_LEVEL_LESS_THAN:
      if ( std::vector<unsigned int>::size(&cond->param) == 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v16 = Player::getBasicComp(this->player_);
        v17 = PlayerBasicComp::getLevel(v16);
        v18 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &cond->param,
                                                                                                    0LL);
        v19 = v18;
        if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v18);
        }
        isStateOpen = v17 < *v19;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v59,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/blossom/player_blossom_comp.cpp",
          "checkRefreshCondIsMeet",
          2470);
        v13 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v59,
                (const char (*)[32])"[PlayerBlossomComp] cond_type: ");
        v14 = common::milog::MiLogStream::operator<<<data::BlossomRefreshCondType,(data::BlossomRefreshCondType*)0>(
                v13,
                &cond->type);
        v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v14, (const char (*)[22])byte_260517A0);
        val = std::vector<unsigned int>::size(&cond->param);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v59);
        isStateOpen = 0;
      }
      break;
    case BLOSSOM_REFRESH_COND_OPEN_STATE:
      if ( std::vector<unsigned int>::size(&cond->param) == 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v23 = Player::getBasicComp(this->player_);
        v24 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &cond->param,
                                                                                                    0LL);
        v25 = v24;
        if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v24);
        }
        isStateOpen = PlayerBasicComp::isStateOpen(v23, *v25);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v59,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/blossom/player_blossom_comp.cpp",
          "checkRefreshCondIsMeet",
          2480);
        v20 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v59,
                (const char (*)[32])"[PlayerBlossomComp] cond_type: ");
        v21 = common::milog::MiLogStream::operator<<<data::BlossomRefreshCondType,(data::BlossomRefreshCondType*)0>(
                v20,
                &cond->type);
        v22 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v21, (const char (*)[22])byte_260517A0);
        val = std::vector<unsigned int>::size(&cond->param);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v22, &val);
        common::milog::MiLogStream::~MiLogStream(&v59);
        isStateOpen = 0;
      }
      break;
    case BLOSSOM_REFRESH_COND_QUEST_FINISH:
      if ( std::vector<unsigned int>::size(&cond->param) == 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        QuestComp = Player::getQuestComp(this->player_);
        v30 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &cond->param,
                                                                                                    0LL);
        v31 = v30;
        if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v30);
        }
        isStateOpen = PlayerQuestComp::getQuestState(QuestComp, *v31) == QUEST_STATE_FINISHED;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v59,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/blossom/player_blossom_comp.cpp",
          "checkRefreshCondIsMeet",
          2490);
        v26 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v59,
                (const char (*)[32])"[PlayerBlossomComp] cond_type: ");
        v27 = common::milog::MiLogStream::operator<<<data::BlossomRefreshCondType,(data::BlossomRefreshCondType*)0>(
                v26,
                &cond->type);
        v28 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v27, (const char (*)[22])byte_260517A0);
        val = std::vector<unsigned int>::size(&cond->param);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v28, &val);
        common::milog::MiLogStream::~MiLogStream(&v59);
        isStateOpen = 0;
      }
      break;
    case BLOSSOM_REFRESH_COND_ACTIVITY_COND:
      for ( idx = 0; idx < std::vector<unsigned int>::size(&cond->param); idx += 2 )
      {
        if ( idx + 1 >= std::vector<unsigned int>::size(&cond->param) )
        {
          common::milog::MiLogStream::create(
            &v59,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/blossom/player_blossom_comp.cpp",
            "checkRefreshCondIsMeet",
            2502);
          v32 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                  &v59,
                  (const char (*)[32])"[PlayerBlossomComp] cond_type: ");
          v33 = common::milog::MiLogStream::operator<<<data::BlossomRefreshCondType,(data::BlossomRefreshCondType*)0>(
                  v32,
                  &cond->type);
          v34 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v33, (const char (*)[22])byte_260517A0);
          val = std::vector<unsigned int>::size(&cond->param);
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v34, &val);
          common::milog::MiLogStream::~MiLogStream(&v59);
          isStateOpen = 0;
          goto LABEL_67;
        }
        v35 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &cond->param,
                                                                                                    idx);
        v36 = v35;
        if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v35);
        }
        activity_id = *v36;
        v37 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &cond->param,
                                                                                                    idx + 1);
        v38 = v37;
        if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v37 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v37);
        }
        activity_cond_id = *v38;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        ActivityComp = Player::getActivityComp(this->player_);
        if ( !PlayerActivityComp::isActivityCondMeet(ActivityComp, activity_id, activity_cond_id) )
        {
          isStateOpen = 0;
          goto LABEL_67;
        }
      }
      isStateOpen = 1;
      break;
    case BLOSSOM_REFRESH_COND_SCENE_TAG_ADDED:
      v40 = std::vector<unsigned int>::operator[](&cond->param, 0LL);
      v41 = v40;
      if ( *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v40 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v40);
      }
      *(_DWORD *)(v2 + 48) = *v41;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v2 + 64));
      v42 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      scene_tag_config_ptr = data::SceneExcelConfigMgrBase::findSceneTagConfig(
                               &v42->design_config.txt_config_mgr.scene_config_mgr,
                               *(_DWORD *)(v2 + 48));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
      if ( scene_tag_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        SceneComp = (unsigned int)Player::getSceneComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&scene_tag_config_ptr->scene_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&scene_tag_config_ptr->scene_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&scene_tag_config_ptr->scene_id);
        }
        PlayerSceneComp::getPersonalScene((PlayerSceneComp *const)(v2 + 64), SceneComp);
        if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v59,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/blossom/player_blossom_comp.cpp",
            "checkRefreshCondIsMeet",
            2528);
          v47 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v59, (const char (*)[11])"scene_tag:");
          v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v47,
                  (const unsigned int *)(v2 + 48));
          v49 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v48, (const char (*)[9])" @scene:");
          v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v49,
                  &scene_tag_config_ptr->scene_id);
          v51 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v50, (const char (*)[10])" nullptr.");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          operator<<(v51, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v59);
          isStateOpen = 0;
        }
        else
        {
          v52 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          isStateOpen = Scene::isSceneTagValid(v52, *(_DWORD *)(v2 + 48));
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v59,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/blossom/player_blossom_comp.cpp",
          "checkRefreshCondIsMeet",
          2521);
        v43 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v59, (const char (*)[11])"scene_tag:");
        v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v43,
                (const unsigned int *)(v2 + 48));
        v45 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v44,
                (const char (*)[19])" config NOT found.");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v45, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v59);
        isStateOpen = 0;
      }
      break;
    default:
      isStateOpen = 0;
      break;
  }
LABEL_67:
  result = isStateOpen;
  if ( v60 == (char *)v2 )
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

// Line 2544: range 00000000171E6A9A-00000000171E6B72
std::vector<unsigned int> *__cdecl PlayerBlossomComp::getCurRefreshIdVec(
        std::vector<unsigned int> *retstr,
        PlayerBlossomComp *const this)
{
  std::map<unsigned int,BlossomRefreshInfo>::iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::map<unsigned int,BlossomRefreshInfo>::iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,BlossomRefreshInfo> *__for_range; // [rsp+20h] [rbp-30h]
  const std::pair<unsigned int const,BlossomRefreshInfo> *v6; // [rsp+28h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,BlossomRefreshInfo> >::type *refresh_id; // [rsp+30h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,BlossomRefreshInfo> >::type *_; // [rsp+38h] [rbp-18h]

  std::vector<unsigned int>::vector(retstr);
  __for_range = &this->refresh_info_map_;
  __for_begin._M_node = std::map<unsigned int,BlossomRefreshInfo>::begin(&this->refresh_info_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,BlossomRefreshInfo>::end(&this->refresh_info_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo>>::operator*(&__for_begin);
    refresh_id = std::get<0ul,unsigned int const,BlossomRefreshInfo>(v6);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,BlossomRefreshInfo> >::type *)std::get<1ul,unsigned int const,BlossomRefreshInfo>(v6);
    std::vector<unsigned int>::push_back(retstr, refresh_id);
    std::_Rb_tree_iterator<std::pair<unsigned int const,BlossomRefreshInfo>>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 2555: range 00000000171E6B74-00000000171E6EE3
void __cdecl PlayerBlossomComp::getGroupSceneMap(
        PlayerBlossomComp *const this,
        const std::vector<unsigned int> *group_vec,
        std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *scene_group_map)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v6; // rax
  _DWORD *v7; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::vector<unsigned int> *v12; // rax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-D8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-D0h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Config> v17; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v18; // [rsp+50h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 13 group_id:2556 48 4 13 scene_id:2558 64 16 14 scene_ptr:2559";
  *(_QWORD *)(v3 + 16) = PlayerBlossomComp::getGroupSceneMap;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  __for_range = group_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(group_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(group_vec)._M_current;
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
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v17);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
    *(_DWORD *)(v3 + 48) = LuaConfigMgr::getSceneIdByGroupId(&v8->design_config.lua_config_mgr, *(_DWORD *)(v3 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v17);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    SceneComp = (unsigned int)Player::getSceneComp(this->player_);
    PlayerSceneComp::getPersonalScene((PlayerSceneComp *const)(v3 + 64), SceneComp);
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "getGroupSceneMap",
        2562);
      v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v18, (const char (*)[8])" scene:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" nullptr");
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
    else
    {
      v12 = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::operator[](
              scene_group_map,
              (const std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::key_type *)(v3 + 64));
      std::vector<unsigned int>::push_back(v12, (const std::vector<unsigned int>::value_type *)(v3 + 32));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
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

// Line 2570: range 00000000171E6EE4-00000000171E7062
int32_t __cdecl PlayerBlossomComp::getCampRewardActionReason(
        const data::BlossomRefreshExcelConfig *refresh_config,
        ActionReason *reason)
{
  __int64 v2; // rsi
  data::ItemLimitType item_limit_type; // ecx
  char v4; // dl
  __int64 v5; // rdx
  data::BlossomRefreshType refresh_type; // eax
  __int64 v7; // rdx
  __int64 v9; // rdx

  v2 = (((_BYTE)refresh_config + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&refresh_config->item_limit_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)refresh_config + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&refresh_config->item_limit_type >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&refresh_config->item_limit_type);
  }
  item_limit_type = refresh_config->item_limit_type;
  v4 = *(_BYTE *)(((unsigned __int64)&reason->limit_type >> 3) + 0x7FFF8000);
  LOBYTE(v2) = v4 != 0;
  v5 = (v4 != 0) & (unsigned __int8)((char)((((_BYTE)reason + 4) & 7) + 3) >= v4);
  if ( (_BYTE)v5 )
    __asan_report_store4(&reason->limit_type, v2, v5);
  reason->limit_type = item_limit_type;
  if ( *(_BYTE *)(((unsigned __int64)&refresh_config->refresh_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&refresh_config->refresh_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&refresh_config->refresh_type);
  }
  refresh_type = refresh_config->refresh_type;
  if ( refresh_type > BLOSSOM_ISLAND_SENTRY_TOWER_B )
  {
    if ( refresh_type != BLOSSOM_ISLAND_BOMB )
      return -1;
    v9 = (*(_BYTE *)(((unsigned __int64)reason >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)reason & 7)
                                                                                                  + 3) >= *(_BYTE *)(((unsigned __int64)reason >> 3) + 0x7FFF8000));
    if ( (_BYTE)v9 )
      __asan_report_store4(reason, ((unsigned __int8)reason & 7u) + 3, v9);
    reason->reason_type = ACTION_REASON_SUMMER_TIME_BOMB_REWARD;
    return 0;
  }
  else
  {
    if ( refresh_type < BLOSSOM_ISLAND_SENTRY_TOWER_A )
      return -1;
    v7 = (*(_BYTE *)(((unsigned __int64)reason >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)reason & 7)
                                                                                                  + 3) >= *(_BYTE *)(((unsigned __int64)reason >> 3) + 0x7FFF8000));
    if ( (_BYTE)v7 )
      __asan_report_store4(reason, ((unsigned __int8)reason & 7u) + 3, v7);
    reason->reason_type = ACTION_REASON_SUMMER_TIME_SENTRY_TOWER_REWARD;
    return 0;
  }
};

// Line 2592: range 00000000171E7064-00000000171E7087
void __cdecl PlayerBlossomComp::onSceneTagChange(PlayerBlossomComp *const this, const SceneTagChangeEvent *event)
{
  PlayerBlossomComp::tryRefresh(this, 1);
};

// Line 2597: range 00000000171E7784-00000000171E80D1
__int64 __fastcall PlayerBlossomComp::tryGrantBagReward(
        PlayerBlossomComp *const this,
        uint32_t refresh_id,
        uint32_t valid_world_level,
        Group *group)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rbx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned int v10; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rcx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // r14
  __int64 v25; // rdx
  __int64 result; // rax
  PlayerBlossomComp::tryGrantBagReward::<lambda(Player&)> v27; // [rsp-30h] [rbp-1A0h]
  unsigned int val; // [rsp+28h] [rbp-148h] BYREF
  uint32_t drop_id; // [rsp+2Ch] [rbp-144h]
  const GroupInfoScriptConfig *group_info_script_config_ptr; // [rsp+30h] [rbp-140h]
  const data::BlossomRefreshExcelConfig *refresh_config_ptr; // [rsp+38h] [rbp-138h]
  const data::BlossomRewardExcelConfig *reward_config_ptr; // [rsp+40h] [rbp-130h]
  const Vector3 *group_pos; // [rsp+48h] [rbp-128h]
  common::milog::MiLogStream v36; // [rsp+50h] [rbp-120h] BYREF
  PlayerBlossomComp::tryGrantBagReward::<lambda(Player&)> __f; // [rsp+70h] [rbp-100h]
  char v38[208]; // [rsp+A0h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 15 refresh_id:2596 48 4 22 valid_world_level:2596 64 16 14 world_ptr:2629 96 24 18 action_reason:2621";
  *(_QWORD *)(v4 + 16) = PlayerBlossomComp::tryGrantBagReward;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -219021312;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  *(_DWORD *)(v4 + 32) = refresh_id;
  *(_DWORD *)(v4 + 48) = valid_world_level;
  group_info_script_config_ptr = Group::getInfoScriptConfig(group);
  if ( !group_info_script_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "tryGrantBagReward",
      2601);
    v7 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v36,
           (const char (*)[56])"[PlayerBlossomComp] get group info config failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])" group:");
    operator<<(v9, group);
    common::milog::MiLogStream::~MiLogStream(&v36);
    v10 = -1;
    goto LABEL_34;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 64));
  v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  refresh_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomRefreshExcelConfig(
                         &v11->design_config.txt_config_mgr.blossom_config_mgr,
                         *(_DWORD *)(v4 + 32));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 64));
  if ( !refresh_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "tryGrantBagReward",
      2607);
    v12 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
            &v36,
            (const char (*)[64])"[PlayerBlossomComp] findBlossomRefreshExcelConfig failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
    v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])" refresh_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream(&v36);
    v10 = -1;
    goto LABEL_34;
  }
  if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->reward_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->reward_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&refresh_config_ptr->reward_type);
  }
  if ( refresh_config_ptr->reward_type != BLOSSOM_REWARD_TYPE_TO_BAG )
  {
    v10 = 0;
    goto LABEL_34;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 64));
  v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  reward_config_ptr = BlossomExcelConfigMgr::findBlossomDropReward(
                        &v15->design_config.txt_config_mgr.blossom_config_mgr,
                        *(_DWORD *)(v4 + 32),
                        *(_DWORD *)(v4 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 64));
  if ( !reward_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "tryGrantBagReward",
      2617);
    v16 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            &v36,
            (const char (*)[41])" reward config not found for refresh_id:");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v4 + 32));
    v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v17, (const char (*)[14])" world_level:");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 48));
    v20 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v19, (const char (*)[3])", ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_19:
    operator<<(v20, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v36);
    v10 = -1;
    goto LABEL_34;
  }
  if ( *(_BYTE *)(((unsigned __int64)&reward_config_ptr->drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&reward_config_ptr->drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&reward_config_ptr->drop_id);
  }
  drop_id = reward_config_ptr->drop_id;
  ActionReason::ActionReason((ActionReason *const)(v4 + 96), ACTION_REASON_NONE, ITEM_LIMIT_NONE);
  if ( PlayerBlossomComp::getCampRewardActionReason(refresh_config_ptr, (ActionReason *)(v4 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "tryGrantBagReward",
      2624);
    v21 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
            &v36,
            (const char (*)[51])" get camp reward action reason failed. refresh_id:");
    v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v4 + 32));
    v20 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v22, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_19;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v4 + 64));
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v4 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "tryGrantBagReward",
      2632);
    v23 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
            &v36,
            (const char (*)[45])"[PlayerBlossomComp] world_ptr is null, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
    common::milog::MiLogStream::~MiLogStream(&v36);
    v10 = -1;
  }
  else
  {
    group_pos = &group_info_script_config_ptr->pos;
    v24 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    __f.__group_pos = &group_info_script_config_ptr->pos;
    __f.__drop_id = drop_id;
    v25 = *(_QWORD *)(v4 + 104);
    *(_QWORD *)&__f.__action_reason.reason_type = *(_QWORD *)(v4 + 96);
    *(_QWORD *)&__f.__action_reason.quest_id = v25;
    *(_QWORD *)&__f.__action_reason.item_exceed_msg_type = *(_QWORD *)(v4 + 112);
    __f.__refresh_id = *(_DWORD *)(v4 + 32);
    __f.__valid_world_level = *(_DWORD *)(v4 + 48);
    *(_OWORD *)&v27.__action_reason.is_general_reward_hiden = *(_OWORD *)&__f.__action_reason.is_general_reward_hiden;
    *(_QWORD *)&v27.__action_reason.is_transfered_from_avatar_card = *(_QWORD *)&__f.__action_reason.is_transfered_from_avatar_card;
    *(_OWORD *)&v27.__drop_id = *(_OWORD *)&__f.__drop_id;
    v27.__group_pos = &group_info_script_config_ptr->pos;
    std::function<ForeachPolicy ()(Player &)>::function<PlayerBlossomComp::tryGrantBagReward(unsigned int,unsigned int,Group &)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v36,
      v27);
    World::foreachPlayer(v24, (std::function<ForeachPolicy(Player&)> *)&v36);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v36);
    v10 = 0;
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v4 + 64));
LABEL_34:
  result = v10;
  if ( v38 == (char *)v4 )
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

// Line 2637: range 00000000171E7088-00000000171E7782
ForeachPolicy __cdecl PlayerBlossomComp::tryGrantBagReward(unsigned int,unsigned int,Group &)::{lambda(Player &)#1}::operator()(
        const PlayerBlossomComp::tryGrantBagReward::<lambda(Player&)> *const __closure,
        Player *player)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rdx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  ActionReason *p_action_reason; // rcx
  uint32_t LogLevel; // eax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  ForeachPolicy result; // eax
  unsigned int val; // [rsp+10h] [rbp-130h] BYREF
  unsigned int radius; // [rsp+14h] [rbp-12Ch]
  const Vector3 *player_pos; // [rsp+18h] [rbp-128h]
  std::shared_ptr<Config> v33; // [rsp+20h] [rbp-120h] BYREF
  common::milog::MiLogStream v34; // [rsp+30h] [rbp-110h] BYREF
  char v35[240]; // [rsp+50h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 13 distance:2648 64 8 18 output_result:2655 96 16 15 avatar_ptr:2640 128 24 13 item_vec:2654";
  *(_QWORD *)(v3 + 16) = PlayerBlossomComp::tryGrantBagReward(unsigned int,unsigned int,Group &)::{lambda(Player &)#1}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  Player::getAvatarComp(player);
  PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v3 + 96));
  if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/blossom/player_blossom_comp.cpp",
      "operator()",
      2643);
    v6 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v34, (const char (*)[22])off_26051A60);
    operator<<(v6, player);
    common::milog::MiLogStream::~MiLogStream(&v34);
  }
  else
  {
    v7 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    player_pos = Entity::getPosition((const Entity *const)v7);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v33);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33);
    radius = ConstValueExcelConfigMgr::getBlossomBagRewardRadius(&v8->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v33);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      *(double *)v2.m128i_i64 = __asan_report_load8(__closure);
    *(float *)v2.m128i_i32 = getPlaneDistance(player_pos, __closure->__group_pos);
    *(_DWORD *)(v3 + 48) = _mm_cvtsi128_si32(v2);
    if ( *(float *)(v3 + 48) <= (float)(int)radius )
    {
      std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 128));
      p_action_reason = &__closure->__action_reason;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__drop_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&__closure->__drop_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&__closure->__drop_id);
      }
      *(OutputResult *)(v3 + 64) = DropUtils::dropItems(
                                     player,
                                     __closure->__drop_id,
                                     1u,
                                     p_action_reason,
                                     (std::vector<ItemParam> *)(v3 + 128));
      if ( *(_DWORD *)(v3 + 64) )
      {
        LogLevel = OutputResult::getLogLevel((const OutputResult *const)(v3 + 64));
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          LogLevel,
          "./src/player/blossom/player_blossom_comp.cpp",
          "operator()",
          2658);
        v18 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v34,
                (const char (*)[25])"dropItems fail drop_id: ");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &__closure->__drop_id);
        v20 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])" uid: ");
        val = Player::getUid(player);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
        common::milog::MiLogStream::~MiLogStream(&v34);
      }
      else
      {
        ItemComp = Player::getItemComp(player);
        if ( PlayerItemComp::addItemBatchWithStackLimit(
               ItemComp,
               (std::vector<ItemParam> *)(v3 + 128),
               &__closure->__action_reason,
               0LL) )
        {
          common::milog::MiLogStream::create(
            &v34,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/blossom/player_blossom_comp.cpp",
            "operator()",
            2663);
          v22 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v34,
                  (const char (*)[39])" add bag drop item failed @refresh_id:");
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &__closure->__refresh_id);
          v24 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v23, (const char (*)[12])" world_lvl:");
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v24,
                  &__closure->__valid_world_level);
          v26 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v25, (const char (*)[11])", drop_id:");
          v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &__closure->__drop_id);
          v28 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v27, (const char (*)[3])", ");
          operator<<(v28, player);
          common::milog::MiLogStream::~MiLogStream(&v34);
        }
      }
      std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 128));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/blossom/player_blossom_comp.cpp",
        "operator()",
        2651);
      v9 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             &v34,
             (const char (*)[28])"[PlayerBlossomComp] player:");
      val = Player::getUid(player);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" pos:");
      v12 = operator<<(v11, player_pos);
      v13 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              v12,
              (const char (*)[27])" too far from camp center:");
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      v14 = operator<<(v13, __closure->__group_pos);
      v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])" dist:");
      common::milog::MiLogStream::operator<<<float,(float *)0>(v15, (const float *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v34);
    }
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 96));
  result = FOREACH_CONTINUE;
  if ( v35 == (char *)v3 )
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

// Line 2669: range 00000000171FBCC7-00000000171FBCEA
void __cdecl GLOBAL__sub_I_merge_single_monster_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
  __static_initialization_and_destruction_1(1, 0xFFFF);
};

// Line 2669: range 00000000171FAEC6-00000000171FBBB3
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
  const boost::system::error_category *ssl_category; // rax
  const boost::system::error_category *stream_category; // rax
  _BYTE *v14; // rcx
  _BYTE *v15; // rcx
  char v16; // dl
  __int64 v17; // rdx
  _BYTE *v18; // rcx
  _BYTE *v19; // rcx
  char v20; // dl
  __int64 v21; // rdx
  _BYTE *v22; // rcx
  _BYTE *v23; // rcx
  char v24; // dl
  __int64 v25; // rdx
  _BYTE *v26; // rcx
  _BYTE *v27; // rcx
  char v28; // dl
  __int64 v29; // rdx
  _BYTE *v30; // rcx
  _BYTE *v31; // rcx
  char v32; // dl
  __int64 v33; // rdx
  _BYTE *v34; // rcx
  _BYTE *v35; // rcx
  char v36; // dl
  __int64 v37; // rdx
  _BYTE *v38; // rcx
  _BYTE *v39; // rcx
  char v40; // dl
  __int64 v41; // rdx
  const char *v42; // rcx
  _BYTE *v43; // rcx
  _BYTE *v44; // rcx
  char v45; // dl
  __int64 v46; // rdx
  _BYTE *v47; // rcx
  _BYTE *v48; // rcx
  char v49; // dl
  __int64 v50; // rdx
  _BYTE *v51; // rcx
  _BYTE *v52; // rcx
  char v53; // dl
  __int64 v54; // rdx
  const char *v55; // rcx
  _BYTE *v56; // rcx
  _BYTE *v57; // rcx
  char v58; // dl
  __int64 v59; // rdx
  _BYTE *v60; // rcx
  _BYTE *v61; // rcx
  char v62; // dl
  __int64 v63; // rdx
  _BYTE *v64; // rcx
  _BYTE *v65; // rcx
  char v66; // dl
  __int64 v67; // rdx
  _BYTE *v68; // rcx
  _BYTE *v69; // rcx
  char v70; // dl
  __int64 v71; // rdx
  _BYTE *v72; // rcx
  _BYTE *v73; // rcx
  char v74; // dl
  __int64 v75; // rdx
  luabind::detail::class_id v76; // rax
  luabind::type_id cls; // [rsp+18h] [rbp-8h] BYREF

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_single_monster.cpp");
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
      ssl_category = boost::asio::error::get_ssl_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::ssl_category >> 3) + 0x7FFF8000) )
        ssl_category = (const boost::system::error_category *)__asan_report_store8(
                                                                &boost::asio::error::ssl_category,
                                                                5LL);
      boost::asio::error::ssl_category = ssl_category;
      stream_category = boost::asio::ssl::error::get_stream_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::ssl::error::stream_category >> 3) + 0x7FFF8000) )
        stream_category = (const boost::system::error_category *)__asan_report_store8(
                                                                   &boost::asio::ssl::error::stream_category,
                                                                   5LL);
      boost::asio::ssl::error::stream_category = stream_category;
      v14 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
      }
      if ( !*v14 )
      {
        v15 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        v16 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v16 != 0;
        v17 = (v16 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= v16);
        if ( (_BYTE)v17 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
            v7,
            v17);
        *v15 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
        v7 = (__int64)&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
          &_dso_handle);
      }
      v18 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_);
      }
      if ( !*v18 )
      {
        v19 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_;
        v20 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v20 != 0;
        v21 = (v20 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ & 7) >= v20);
        if ( (_BYTE)v21 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_,
            v7,
            v21);
        *v19 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_);
        v7 = (__int64)&boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_,
          &_dso_handle);
      }
      v22 = &`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id);
      }
      if ( !*v22 )
      {
        v23 = &`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id;
        v24 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v24 != 0;
        v25 = (v24 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id & 7) >= v24);
        if ( (_BYTE)v25 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id,
            v7,
            v25);
        *v23 = 1;
        boost::asio::detail::service_id<boost::asio::detail::strand_service>::service_id(&boost::asio::detail::service_base<boost::asio::detail::strand_service>::id);
        v7 = (__int64)&boost::asio::detail::service_base<boost::asio::detail::strand_service>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::strand_service>::~service_id,
          &boost::asio::detail::service_base<boost::asio::detail::strand_service>::id,
          &_dso_handle);
      }
      v26 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_);
      }
      if ( !*v26 )
      {
        v27 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_;
        v28 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v28 != 0;
        v29 = (v28 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ & 7) >= v28);
        if ( (_BYTE)v29 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_,
            v7,
            v29);
        *v27 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_);
        v7 = (__int64)&boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_,
          &_dso_handle);
      }
      v30 = &`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_);
      }
      if ( !*v30 )
      {
        v31 = &`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_;
        v32 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v32 != 0;
        v33 = (v32 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_ & 7) >= v32);
        if ( (_BYTE)v33 )
          __asan_report_store1(&`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_, v7, v33);
        *v31 = 1;
        boost::asio::ssl::detail::openssl_init<true>::openssl_init(&boost::asio::ssl::detail::openssl_init<true>::instance_);
        v7 = (__int64)&boost::asio::ssl::detail::openssl_init<true>::instance_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::ssl::detail::openssl_init<true>::~openssl_init,
          &boost::asio::ssl::detail::openssl_init<true>::instance_,
          &_dso_handle);
      }
      v34 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_);
      }
      if ( !*v34 )
      {
        v35 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        v36 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v36 != 0;
        v37 = (v36 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= v36);
        if ( (_BYTE)v37 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
            v7,
            v37);
        *v35 = 1;
        v7 = (__int64)&boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::posix_global_impl<boost::asio::system_context>::~posix_global_impl,
          &boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
          &_dso_handle);
      }
      v38 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
      }
      if ( !*v38 )
      {
        v39 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        v40 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v40 != 0;
        v41 = (v40 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= v40);
        if ( (_BYTE)v41 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero,
            v7,
            v41);
        *v39 = 1;
        v42 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero, v7);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v42;
      }
      v43 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
      }
      if ( !*v43 )
      {
        v44 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        v45 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v45 != 0;
        v46 = (v45 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= v45);
        if ( (_BYTE)v46 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
            v7,
            v46);
        *v44 = 1;
        boost::asio::detail::service_id<boost::asio::detail::scheduler>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
        v7 = (__int64)&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::scheduler>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
          &_dso_handle);
      }
      v47 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
      }
      if ( !*v47 )
      {
        v48 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        v49 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v49 != 0;
        v50 = (v49 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= v49);
        if ( (_BYTE)v50 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
            v7,
            v50);
        *v48 = 1;
        boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
        v7 = (__int64)&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
          &_dso_handle);
      }
      v51 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
      }
      if ( !*v51 )
      {
        v52 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
        v53 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v53 != 0;
        v54 = (v53 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= v53);
        if ( (_BYTE)v54 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero,
            v7,
            v54);
        *v52 = 1;
        v55 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero, v7);
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero = v55;
      }
      v56 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id);
      }
      if ( !*v56 )
      {
        v57 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id;
        v58 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v58 != 0;
        v59 = (v58 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id & 7) >= v58);
        if ( (_BYTE)v59 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id,
            v7,
            v59);
        *v57 = 1;
        boost::asio::detail::service_id<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id);
        v7 = (__int64)&boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id,
          &_dso_handle);
      }
      v60 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id);
      }
      if ( !*v60 )
      {
        v61 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id;
        v62 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v62 != 0;
        v63 = (v62 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id & 7) >= v62);
        if ( (_BYTE)v63 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id,
            v7,
            v63);
        *v61 = 1;
        boost::asio::detail::service_id<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id);
        v7 = (__int64)&boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id,
          &_dso_handle);
      }
      v64 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id);
      }
      if ( !*v64 )
      {
        v65 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id;
        v66 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v66 != 0;
        v67 = (v66 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id & 7) >= v66);
        if ( (_BYTE)v67 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id,
            v7,
            v67);
        *v65 = 1;
        boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id);
        v7 = (__int64)&boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id,
          &_dso_handle);
      }
      v68 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id);
      }
      if ( !*v68 )
      {
        v69 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id;
        v70 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v70 != 0;
        v71 = (v70 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id & 7) >= v70);
        if ( (_BYTE)v71 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id,
            v7,
            v71);
        *v69 = 1;
        boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id);
        v7 = (__int64)&boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id,
          &_dso_handle);
      }
      v72 = &`guard variable for'luabind::detail::registered_class<ScriptContext>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<ScriptContext>::id);
      }
      if ( !*v72 )
      {
        v73 = &`guard variable for'luabind::detail::registered_class<ScriptContext>::id;
        v74 = *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v7) = v74 != 0;
        v75 = (v74 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id & 7) >= v74);
        if ( (_BYTE)v75 )
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<ScriptContext>::id, v7, v75);
        *v73 = 1;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'ScriptContext);
        v76 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<ScriptContext>::id >> 3) + 0x7FFF8000) )
          v76 = __asan_report_store8(
                  &luabind::detail::registered_class<ScriptContext>::id,
                  &`typeinfo for'ScriptContext);
        luabind::detail::registered_class<ScriptContext>::id = v76;
      }
    }
    __asan_after_dynamic_init();
  }
};

// Line 2669: range 00000000171FBBB4-00000000171FBCC6
// local variable allocation has failed, the output may be wrong!
void __cdecl __static_initialization_and_destruction_1(int __initialize_p, int __priority)
{
  _BYTE *v2; // rcx
  _BYTE *v3; // rcx
  char v4; // dl
  __int64 v5; // rdx
  luabind::detail::class_id v6; // rax
  luabind::type_id cls; // [rsp+18h] [rbp-8h] BYREF

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_single_monster.cpp");
    if ( __priority == 0xFFFF )
    {
      v2 = &`guard variable for'luabind::detail::registered_class<ScriptContext *>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id);
      }
      if ( !*v2 )
      {
        v3 = &`guard variable for'luabind::detail::registered_class<ScriptContext *>::id;
        v4 = *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id >> 3)
                      + 0x7FFF8000);
        LOBYTE(__priority) = v4 != 0;
        v5 = (v4 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id & 7) >= v4);
        if ( (_BYTE)v5 )
          __asan_report_store1(
            &`guard variable for'luabind::detail::registered_class<ScriptContext *>::id,
            *(_QWORD *)&__priority,
            v5);
        *v3 = 1;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'ScriptContext *);
        v6 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<ScriptContext *>::id >> 3) + 0x7FFF8000) )
          v6 = __asan_report_store8(
                 &luabind::detail::registered_class<ScriptContext *>::id,
                 &`typeinfo for'ScriptContext *);
        luabind::detail::registered_class<ScriptContext *>::id = v6;
      }
    }
    __asan_after_dynamic_init();
  }
};
