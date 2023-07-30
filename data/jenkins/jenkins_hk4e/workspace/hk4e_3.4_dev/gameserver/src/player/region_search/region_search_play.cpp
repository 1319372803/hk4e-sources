// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/region_search/region_search_play.cpp

// Line 33: range 0000000015C94732-0000000015C947E1
void __cdecl RegionSearchSource::fromBin(RegionSearchSource *const this, const proto::RegionSearchSourceBin *proto)
{
  google::protobuf::uint32 v2; // ecx
  char v3; // dl
  bool v4; // dl
  uint32_t v5; // ecx
  char v6; // dl
  bool v7; // dl
  const proto::RegionSearchSourceBin *protoa; // [rsp+0h] [rbp-10h]

  protoa = proto;
  v2 = proto::RegionSearchSourceBin::type(proto);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(proto) = v3 != 0;
  v4 = v3 != 0 && (char)(((unsigned __int8)this & 7) + 3) >= v3;
  if ( v4 )
    __asan_report_store4(this, proto, v4);
  this->type = v2;
  v5 = proto::RegionSearchSourceBin::param(protoa);
  v6 = *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000);
  LOBYTE(proto) = v6 != 0;
  v7 = v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6;
  if ( v7 )
    __asan_report_store4(&this->param, proto, v7);
  this->param = v5;
};

// Line 39: range 0000000015C947E2-0000000015C9488F
void __cdecl RegionSearchSource::toBin(const RegionSearchSource *const this, proto::RegionSearchSourceBin *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::RegionSearchSourceBin::set_type(proto, this->type);
  if ( *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->param);
  }
  proto::RegionSearchSourceBin::set_param(proto, this->param);
};

// Line 45: range 0000000015C94890-0000000015C94B6F
void __cdecl RegionSearchRegion::fromBin(RegionSearchRegion *const this, const proto::RegionSearchRegionBin *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t v5; // edx
  char v6; // al
  uint32_t v7; // edx
  char v8; // al
  const proto::RegionSearchRegionBin *protoa; // [rsp+0h] [rbp-A0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-90h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+18h] [rbp-88h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+20h] [rbp-80h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-78h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+30h] [rbp-70h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+38h] [rbp-68h]
  char v16[96]; // [rsp+40h] [rbp-60h] BYREF

  protoa = proto;
  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 group_id:53";
  *(_QWORD *)(v2 + 16) = RegionSearchRegion::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  v5 = proto::RegionSearchRegionBin::region_id(proto);
  v6 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(proto) = v6 != 0;
    __asan_report_store4(this, proto, v5);
  }
  this->region_id = v5;
  std::set<unsigned int>::clear(&this->oneoff_group_set);
  __for_range = proto::RegionSearchRegionBin::oneoff_group_list(protoa);
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
    proto = (const proto::RegionSearchRegionBin *)(v2 + 32);
    std::set<unsigned int>::insert(&this->oneoff_group_set, (const std::set<unsigned int>::value_type *)(v2 + 32));
    ++__for_begin;
  }
  std::set<unsigned int>::clear(&this->recycle_group_set);
  __for_range_0 = proto::RegionSearchRegionBin::recycle_group_list(protoa);
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
    proto = (const proto::RegionSearchRegionBin *)(v2 + 32);
    std::set<unsigned int>::insert(&this->recycle_group_set, (const std::set<unsigned int>::value_type *)(v2 + 32));
    ++__for_begin_0;
  }
  v7 = proto::RegionSearchRegionBin::recycle_progress(protoa);
  v8 = *(_BYTE *)(((unsigned __int64)&this->recycle_progress >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(proto) = v8 != 0;
    __asan_report_store4(&this->recycle_progress, proto, v7);
  }
  this->recycle_progress = v7;
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

// Line 61: range 0000000015C94B70-0000000015C94D6D
void __cdecl RegionSearchRegion::toBin(const RegionSearchRegion *const this, proto::RegionSearchRegionBin *proto)
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
  proto::RegionSearchRegionBin::set_region_id(proto, this->region_id);
  __for_range = &this->oneoff_group_set;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->oneoff_group_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->oneoff_group_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::RegionSearchRegionBin::add_oneoff_group_list(proto, *v3);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  __for_range_0 = &this->recycle_group_set;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->recycle_group_set)._M_node;
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
    proto::RegionSearchRegionBin::add_recycle_group_list(proto, *v5);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->recycle_progress >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->recycle_progress >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->recycle_progress);
  }
  proto::RegionSearchRegionBin::set_recycle_progress(proto, this->recycle_progress);
};

// Line 75: range 0000000015C94D6E-0000000015C94F49
void __cdecl RegionSearch::fromBin(RegionSearch *const this, const proto::RegionSearchBin *proto)
{
  uint32_t v2; // edx
  char v3; // al
  google::protobuf::uint32 v4; // edi
  __int64 v5; // rsi
  bool v6; // dl
  uint32_t v7; // edx
  char v8; // al
  google::protobuf::RepeatedPtrField<proto::RegionSearchRegionBin>::const_iterator *p_for_end; // rsi
  RegionSearchRegion *v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rdx
  char v13; // al
  const proto::RegionSearchBin *protoa; // [rsp+0h] [rbp-50h]
  std::map<unsigned int,RegionSearchRegion>::key_type __k; // [rsp+1Ch] [rbp-34h] BYREF
  google::protobuf::RepeatedPtrField<proto::RegionSearchRegionBin>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  google::protobuf::RepeatedPtrField<proto::RegionSearchRegionBin>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const google::protobuf::RepeatedPtrField<proto::RegionSearchRegionBin> *__for_range; // [rsp+30h] [rbp-20h]
  const proto::RegionSearchRegionBin *region_bin; // [rsp+38h] [rbp-18h]

  protoa = proto;
  v2 = proto::RegionSearchBin::search_id(proto);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(proto) = v3 != 0;
    __asan_report_store4(this, proto, v2);
  }
  this->search_id = v2;
  v4 = proto::RegionSearchBin::state(protoa);
  v5 = (((_BYTE)this + 4) & 7u) + 3;
  v6 = *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000);
  if ( v6 )
  {
    v4 = (_DWORD)this + 4;
    __asan_report_store4(&this->state, v5, v6);
  }
  this->state = v4;
  v7 = proto::RegionSearchBin::progress(protoa);
  v8 = *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v5) = v8 != 0;
    __asan_report_store4(&this->progress, v5, v7);
  }
  this->progress = v7;
  __for_range = proto::RegionSearchBin::region_list(protoa);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::RegionSearchRegionBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::RegionSearchRegionBin>::end(__for_range).it_;
  while ( 1 )
  {
    p_for_end = &__for_end;
    if ( !google::protobuf::internal::RepeatedPtrIterator<proto::RegionSearchRegionBin const>::operator!=(
            &__for_begin,
            &__for_end) )
      break;
    region_bin = google::protobuf::internal::RepeatedPtrIterator<proto::RegionSearchRegionBin const>::operator*(&__for_begin);
    __k = proto::RegionSearchRegionBin::region_id(region_bin);
    v10 = std::map<unsigned int,RegionSearchRegion>::operator[](&this->region_map, &__k);
    RegionSearchRegion::fromBin(v10, region_bin);
    google::protobuf::internal::RepeatedPtrIterator<proto::RegionSearchRegionBin const>::operator++(&__for_begin);
  }
  LOBYTE(v11) = proto::RegionSearchBin::is_entered(protoa);
  v12 = v11;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_entered >> 3) + 0x7FFF8000);
  if ( v13 < 0 )
  {
    LOBYTE(p_for_end) = v13 != 0;
    __asan_report_store1(&this->is_entered, p_for_end, v12);
  }
  this->is_entered = v12;
};

// Line 87: range 0000000015C94F4A-0000000015C95124
void __cdecl RegionSearch::toBin(const RegionSearch *const this, proto::RegionSearchBin *proto)
{
  proto::RegionSearchRegionBin *v2; // rax
  std::map<unsigned int,RegionSearchRegion>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,RegionSearchRegion>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::map<unsigned int,RegionSearchRegion> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<unsigned int const,RegionSearchRegion> *v6; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,RegionSearchRegion> >::type *region_id; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,RegionSearchRegion> >::type *region; // [rsp+38h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::RegionSearchBin::set_search_id(proto, this->search_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->state);
  }
  proto::RegionSearchBin::set_state(proto, this->state);
  if ( *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->progress);
  }
  proto::RegionSearchBin::set_progress(proto, this->progress);
  __for_range = &this->region_map;
  __for_begin._M_node = std::map<unsigned int,RegionSearchRegion>::begin(&this->region_map)._M_node;
  __for_end._M_node = std::map<unsigned int,RegionSearchRegion>::end(&this->region_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,RegionSearchRegion>>::operator*(&__for_begin);
    region_id = std::get<0ul,unsigned int const,RegionSearchRegion>(v6);
    region = (std::tuple_element<1,const std::pair<unsigned int const,RegionSearchRegion> >::type *)std::get<1ul,unsigned int const,RegionSearchRegion>(v6);
    v2 = proto::RegionSearchBin::add_region_list(proto);
    RegionSearchRegion::toBin(region, v2);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,RegionSearchRegion>>::operator++(&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_entered >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_entered);
  proto::RegionSearchBin::set_is_entered(proto, this->is_entered);
};

// Line 99: range 0000000015C95126-0000000015C9525F
void __cdecl RegionSearch::toClient(const RegionSearch *const this, proto::RegionSearch *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::RegionSearch::set_region_search_id(proto, this->search_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->state);
  }
  proto::RegionSearch::set_state(proto, this->state);
  if ( *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->progress);
  }
  proto::RegionSearch::set_progress(proto, this->progress);
  if ( *(char *)(((unsigned __int64)&this->is_entered >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_entered);
  proto::RegionSearch::set_is_entered(proto, this->is_entered);
};

// Line 107: range 0000000015C95260-0000000015C95535
void __cdecl RegionSearchPlay::fromBin(RegionSearchPlay *const this, const proto::RegionSearchPlayBin *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  uint32_t v5; // edx
  char v6; // al
  const proto::RegionSearchSourceBin *v7; // rax
  google::protobuf::RepeatedPtrField<proto::RegionSearchBin>::const_iterator *p_for_end; // rsi
  RegionSearch *v9; // rax
  std::shared_ptr<RegionSearch> *v10; // rax
  bool is_entered; // cl
  char v12; // dl
  __int64 v13; // rdx
  const proto::RegionSearchPlayBin *protoa; // [rsp+0h] [rbp-B0h]
  std::map<unsigned int,std::shared_ptr<RegionSearch>>::key_type __k; // [rsp+1Ch] [rbp-94h] BYREF
  google::protobuf::RepeatedPtrField<proto::RegionSearchBin>::const_iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  google::protobuf::RepeatedPtrField<proto::RegionSearchBin>::const_iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  const google::protobuf::RepeatedPtrField<proto::RegionSearchBin> *__for_range; // [rsp+30h] [rbp-80h]
  const proto::RegionSearchBin *search_bin; // [rsp+38h] [rbp-78h]
  char v20[112]; // [rsp+40h] [rbp-70h] BYREF

  protoa = proto;
  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 search_ptr:112";
  *(_QWORD *)(v2 + 16) = RegionSearchPlay::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  v5 = proto::RegionSearchPlayBin::id(proto);
  v6 = *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(proto) = v6 != 0;
    __asan_report_store4(&this->id_, proto, v5);
  }
  this->id_ = v5;
  v7 = proto::RegionSearchPlayBin::source(protoa);
  RegionSearchSource::fromBin(&this->source_, v7);
  __for_range = proto::RegionSearchPlayBin::search_list(protoa);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::RegionSearchBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::RegionSearchBin>::end(__for_range).it_;
  while ( 1 )
  {
    p_for_end = &__for_end;
    if ( !google::protobuf::internal::RepeatedPtrIterator<proto::RegionSearchBin const>::operator!=(
            &__for_begin,
            &__for_end) )
      break;
    search_bin = google::protobuf::internal::RepeatedPtrIterator<proto::RegionSearchBin const>::operator*(&__for_begin);
    common::tools::perf::make_shared<RegionSearch>();
    if ( !std::operator==<RegionSearch>(0LL, (const std::shared_ptr<RegionSearch> *)(v2 + 32)) )
    {
      v9 = std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      RegionSearch::fromBin(v9, search_bin);
      __k = proto::RegionSearchBin::search_id(search_bin);
      v10 = std::map<unsigned int,std::shared_ptr<RegionSearch>>::operator[](&this->search_map_, &__k);
      std::shared_ptr<RegionSearch>::operator=(v10, (const std::shared_ptr<RegionSearch> *)(v2 + 32));
    }
    std::shared_ptr<RegionSearch>::~shared_ptr((std::shared_ptr<RegionSearch> *const)(v2 + 32));
    google::protobuf::internal::RepeatedPtrIterator<proto::RegionSearchBin const>::operator++(&__for_begin);
  }
  is_entered = proto::RegionSearchPlayBin::is_entered(protoa);
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_entered_ >> 3) + 0x7FFF8000);
  LOBYTE(p_for_end) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this + 20) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->is_entered_, p_for_end, v13);
  this->is_entered_ = is_entered;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 124: range 0000000015C95536-0000000015C956C8
void __cdecl RegionSearchPlay::toBin(const RegionSearchPlay *const this, proto::RegionSearchPlayBin *proto)
{
  proto::RegionSearchSourceBin *v2; // rax
  std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rbx
  proto::RegionSearchBin *v4; // rax
  std::map<unsigned int,std::shared_ptr<RegionSearch>>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::map<unsigned int,std::shared_ptr<RegionSearch>>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  const std::map<unsigned int,std::shared_ptr<RegionSearch>> *__for_range; // [rsp+20h] [rbp-30h]
  const std::pair<unsigned int const,std::shared_ptr<RegionSearch> > *v8; // [rsp+28h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<RegionSearch> > >::type *search_id; // [rsp+30h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<RegionSearch> > >::type *search_ptr; // [rsp+38h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->id_);
  }
  proto::RegionSearchPlayBin::set_id(proto, this->id_);
  v2 = proto::RegionSearchPlayBin::mutable_source(proto);
  RegionSearchSource::toBin(&this->source_, v2);
  __for_range = &this->search_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<RegionSearch>>::begin(&this->search_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<RegionSearch>>::end(&this->search_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearch>>>::operator*(&__for_begin);
    search_id = std::get<0ul,unsigned int const,std::shared_ptr<RegionSearch>>(v8);
    search_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<RegionSearch> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<RegionSearch>>(v8);
    if ( !std::operator==<RegionSearch>(0LL, search_ptr) )
    {
      v3 = std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)search_ptr);
      v4 = proto::RegionSearchPlayBin::add_search_list(proto);
      RegionSearch::toBin(v3, v4);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearch>>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->is_entered_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_entered_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_entered_);
  }
  proto::RegionSearchPlayBin::set_is_entered(proto, this->is_entered_);
};

// Line 139: range 0000000015C956CA-0000000015C9583D
void __cdecl RegionSearchPlay::toClient(const RegionSearchPlay *const this, proto::RegionSearchInfo *proto)
{
  std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rbx
  proto::RegionSearch *v3; // rax
  std::map<unsigned int,std::shared_ptr<RegionSearch>>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::map<unsigned int,std::shared_ptr<RegionSearch>>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  const std::map<unsigned int,std::shared_ptr<RegionSearch>> *__for_range; // [rsp+20h] [rbp-30h]
  const std::pair<unsigned int const,std::shared_ptr<RegionSearch> > *v7; // [rsp+28h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<RegionSearch> > >::type *search_id; // [rsp+30h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<RegionSearch> > >::type *search_ptr; // [rsp+38h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->id_);
  }
  proto::RegionSearchInfo::set_id(proto, this->id_);
  __for_range = &this->search_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<RegionSearch>>::begin(&this->search_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<RegionSearch>>::end(&this->search_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearch>>>::operator*(&__for_begin);
    search_id = std::get<0ul,unsigned int const,std::shared_ptr<RegionSearch>>(v7);
    search_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<RegionSearch> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<RegionSearch>>(v7);
    if ( !std::operator==<RegionSearch>(0LL, search_ptr) )
    {
      v2 = std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)search_ptr);
      v3 = proto::RegionSearchInfo::add_region_search_list(proto);
      RegionSearch::toClient(v2, v3);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearch>>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->is_entered_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_entered_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_entered_);
  }
  proto::RegionSearchInfo::set_is_entered(proto, this->is_entered_);
};

// Line 153: range 0000000015C9583E-0000000015C9592F
// local variable allocation has failed, the output may be wrong!
void __cdecl RegionSearchPlay::init(RegionSearchPlay *const this, uint32_t id, const RegionSearchSource *source)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id_, *(_QWORD *)&id, (_BYTE)this + 16);
  }
  this->id_ = id;
  if ( *(_BYTE *)(((unsigned __int64)&this->source_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->source_, *(_QWORD *)&id);
  if ( ((unsigned __int8)source & 7) >= *(_BYTE *)(((unsigned __int64)source >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)source >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&source->param + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)source + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&source->param + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(source, 8LL);
  }
  this->source_ = *source;
};

// Line 159: range 0000000015C95930-0000000015C9602F
void __cdecl RegionSearchPlay::onLogin(RegionSearchPlay *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  RegionSearchExcelConfigMgr *p_region_search_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r15
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr v8; // r14
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr v9; // r15
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr v10; // r14
  Scene *v11; // rax
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v13; // rdx
  uint32_t revise_level; // [rsp+14h] [rbp-16Ch]
  std::map<unsigned int,std::shared_ptr<RegionSearch>>::iterator __for_begin; // [rsp+18h] [rbp-168h] BYREF
  std::map<unsigned int,std::shared_ptr<RegionSearch>>::iterator __for_end; // [rsp+20h] [rbp-160h] BYREF
  std::map<unsigned int,RegionSearchRegion>::iterator __for_begin_0; // [rsp+28h] [rbp-158h] BYREF
  std::map<unsigned int,RegionSearchRegion>::iterator __for_end_0; // [rsp+30h] [rbp-150h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > __i; // [rsp+38h] [rbp-148h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __position; // [rsp+40h] [rbp-140h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > v21; // [rsp+48h] [rbp-138h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > v22; // [rsp+50h] [rbp-130h] BYREF
  const data::RegionSearchExcelConfig *play_config_ptr; // [rsp+58h] [rbp-128h]
  std::map<unsigned int,std::shared_ptr<RegionSearch>> *__for_range; // [rsp+60h] [rbp-120h]
  std::pair<unsigned int const,std::shared_ptr<RegionSearch> > *__in; // [rsp+68h] [rbp-118h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<RegionSearch> > >::type *_; // [rsp+70h] [rbp-110h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<RegionSearch> > >::type *search_ptr; // [rsp+78h] [rbp-108h]
  std::map<unsigned int,RegionSearchRegion> *__for_range_0; // [rsp+80h] [rbp-100h]
  std::pair<unsigned int const,RegionSearchRegion> *v29; // [rsp+88h] [rbp-F8h]
  std::tuple_element<0,std::pair<unsigned int const,RegionSearchRegion> >::type *__0; // [rsp+90h] [rbp-F0h]
  std::tuple_element<1,std::pair<unsigned int const,RegionSearchRegion> >::type *region; // [rsp+98h] [rbp-E8h]
  std::shared_ptr<PlayerWorldScene> __r; // [rsp+A0h] [rbp-E0h] BYREF
  common::milog::MiLogStream v33; // [rsp+B0h] [rbp-D0h] BYREF
  char v34[176]; // [rsp+D0h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 13 scene_ptr:164 64 24 17 add_group_vec:177";
  *(_QWORD *)(v1 + 16) = RegionSearchPlay::onLogin;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  if ( !Player::isRelogin(this->player_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)&__r);
    std::shared_ptr<Scene>::shared_ptr<PlayerWorldScene,void>((std::shared_ptr<Scene> *const)(v1 + 32), &__r);
    std::shared_ptr<PlayerWorldScene>::~shared_ptr(&__r);
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/region_search/region_search_play.cpp",
        "onLogin",
        167);
      common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
        &v33,
        (const char (*)[44])"[REGION_SEARCH] get main world scene failed");
      common::milog::MiLogStream::~MiLogStream(&v33);
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&__r);
      p_region_search_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__r)->design_config.txt_config_mgr.region_search_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->id_);
      }
      play_config_ptr = data::ActivityRegionSearchMgrBase::findRegionSearchExcelConfig(
                          p_region_search_config_mgr,
                          this->id_);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__r);
      if ( play_config_ptr )
      {
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 64));
        __for_range = &this->search_map_;
        __for_begin._M_node = std::map<unsigned int,std::shared_ptr<RegionSearch>>::begin(&this->search_map_)._M_node;
        __for_end._M_node = std::map<unsigned int,std::shared_ptr<RegionSearch>>::end(&this->search_map_)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearch>>>::operator*(&__for_begin);
          _ = std::get<0ul,unsigned int const,std::shared_ptr<RegionSearch>>(__in);
          search_ptr = std::get<1ul,unsigned int const,std::shared_ptr<RegionSearch>>(__in);
          if ( !std::operator==<RegionSearch>(0LL, search_ptr) )
          {
            __for_range_0 = &std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)search_ptr)->region_map;
            __for_begin_0._M_node = std::map<unsigned int,RegionSearchRegion>::begin(__for_range_0)._M_node;
            __for_end_0._M_node = std::map<unsigned int,RegionSearchRegion>::end(__for_range_0)._M_node;
            while ( std::operator!=(&__for_begin_0, &__for_end_0) )
            {
              v29 = std::_Rb_tree_iterator<std::pair<unsigned int const,RegionSearchRegion>>::operator*(&__for_begin_0);
              __0 = std::get<0ul,unsigned int const,RegionSearchRegion>(v29);
              region = std::get<1ul,unsigned int const,RegionSearchRegion>(v29);
              M_node = std::set<unsigned int>::end(&region->oneoff_group_set)._M_node;
              v8 = std::set<unsigned int>::begin(&region->oneoff_group_set)._M_node;
              __i._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v1 + 64))._M_current;
              __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
                &__position,
                &__i);
              std::vector<unsigned int>::insert<std::_Rb_tree_const_iterator<unsigned int>,void>(
                (std::vector<unsigned int> *const)(v1 + 64),
                __position,
                (std::_Rb_tree_const_iterator<unsigned int>)v8,
                (std::_Rb_tree_const_iterator<unsigned int>)M_node);
              v9 = std::set<unsigned int>::end(&region->recycle_group_set)._M_node;
              v10 = std::set<unsigned int>::begin(&region->recycle_group_set)._M_node;
              v21._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v1 + 64))._M_current;
              __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
                &v22,
                &v21);
              std::vector<unsigned int>::insert<std::_Rb_tree_const_iterator<unsigned int>,void>(
                (std::vector<unsigned int> *const)(v1 + 64),
                v22,
                (std::_Rb_tree_const_iterator<unsigned int>)v10,
                (std::_Rb_tree_const_iterator<unsigned int>)v9);
              std::_Rb_tree_iterator<std::pair<unsigned int const,RegionSearchRegion>>::operator++(&__for_begin_0);
            }
          }
          std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearch>>>::operator++(&__for_begin);
        }
        revise_level = RegionSearchPlay::getReviseLevel(this, play_config_ptr);
        v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp(v11);
        if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
          BlockGroupComp = __asan_report_load8(BlockGroupComp);
        v13 = *(_QWORD *)BlockGroupComp + 96LL;
        if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
          BlockGroupComp = __asan_report_load8(*(_QWORD *)BlockGroupComp + 96LL);
        (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD, _QWORD))v13)(
          BlockGroupComp,
          v1 + 64,
          revise_level,
          0LL);
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 64));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/region_search/region_search_play.cpp",
          "onLogin",
          173);
        v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
               &v33,
               (const char (*)[25])"[REGION_SEARCH] play_id=");
        v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->id_);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v6, (const char (*)[18])" config not found");
        common::milog::MiLogStream::~MiLogStream(&v33);
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  }
  if ( v34 == (char *)v1 )
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

// Line 195: range 0000000015C96030-0000000015C9603A
void __cdecl RegionSearchPlay::onLogout(RegionSearchPlay *const this)
{
  ;
};

// Line 199: range 0000000015C9603C-0000000015C96C6B
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall RegionSearchPlay::addSearchProgress(
        RegionSearchPlay *const this,
        uint32_t region_id,
        uint32_t progress_add)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  proto::RegionSearchState *p_state; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  unsigned int v17; // r14d
  std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  uint32_t progress; // ecx
  uint32_t v29; // edi
  RegionSearchExcelConfigMgr *p_region_search_config_mgr; // rcx
  __int64 v31; // rsi
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  uint32_t v35; // ecx
  std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rdx
  char v37; // cl
  std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rdx
  char v39; // cl
  RegionSearch *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // r14
  std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  PlayerEventComp *EventComp; // r14
  __int64 result; // rax
  std::string v47; // [rsp+0h] [rbp-1E0h] OVERLAPPED BYREF
  std::map<unsigned int,std::shared_ptr<RegionSearch>>::iterator __for_end; // [rsp+20h] [rbp-1C0h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,RegionSearchRegion> >::_Self __x; // [rsp+28h] [rbp-1B8h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,RegionSearchRegion> >::_Self __y; // [rsp+30h] [rbp-1B0h] BYREF
  std::map<unsigned int,std::shared_ptr<RegionSearch>> *__for_range; // [rsp+38h] [rbp-1A8h]
  std::pair<unsigned int const,std::shared_ptr<RegionSearch> > *__in; // [rsp+40h] [rbp-1A0h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<RegionSearch> > >::type *search_id; // [rsp+48h] [rbp-198h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<RegionSearch> > >::type *search_ptr; // [rsp+50h] [rbp-190h]
  const data::RegionSearchCondExcelConfig *search_config_ptr; // [rsp+58h] [rbp-188h]
  std::shared_ptr<Config> v56; // [rsp+60h] [rbp-180h] BYREF
  common::milog::MiLogStream v57; // [rsp+70h] [rbp-170h] BYREF
  common::milog::MiLogStream v58; // [rsp+90h] [rbp-150h] BYREF
  common::milog::MiLogStream v59; // [rsp+B0h] [rbp-130h] BYREF
  std::string v60; // [rsp+D0h] [rbp-110h] BYREF
  char v61[240]; // [rsp+F0h] [rbp-F0h] BYREF

  v47._M_string_length = (std::string::size_type)this;
  v47._M_dataplus._M_p = (std::string::pointer)__PAIR64__(region_id, progress_add);
  v3 = (unsigned __int64)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 1 10 holder:201 48 4 13 region_id:198 64 4 16 progress_add:198 80 16 13 event_ptr:251 112 4"
                        "8 14 search_map:202";
  *(_QWORD *)(v3 + 16) = RegionSearchPlay::addSearchProgress;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = 61956;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = HIDWORD(v47._M_dataplus._M_p);
  *(_DWORD *)(v3 + 64) = v47._M_dataplus._M_p;
  v47._anon_0._M_local_buf[3] = 0;
  if ( *(_BYTE *)(((v47._M_string_length + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v47._M_string_length + 8);
  BasicComp = Player::getBasicComp(*(Player *const *)(v47._M_string_length + 8));
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v60, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0xC47u, v47);
  std::string::~string(&v60);
  std::map<unsigned int,std::shared_ptr<RegionSearch>>::map(
    (std::map<unsigned int,std::shared_ptr<RegionSearch>> *const)(v3 + 112),
    (const std::map<unsigned int,std::shared_ptr<RegionSearch>> *)(v47._M_string_length + 32));
  __for_range = (std::map<unsigned int,std::shared_ptr<RegionSearch>> *)(v3 + 112);
  *((std::map<unsigned int,std::shared_ptr<RegionSearch>>::iterator *)&v47._anon_0._M_allocated_capacity + 1) = std::map<unsigned int,std::shared_ptr<RegionSearch>>::begin((std::map<unsigned int,std::shared_ptr<RegionSearch>> *const)(v3 + 112));
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<RegionSearch>>::end((std::map<unsigned int,std::shared_ptr<RegionSearch>> *const)(v3 + 112))._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearch> > >::_Self *)&v47._anon_0._M_allocated_capacity
          + 1,
            &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearch>>>::operator*(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearch> > > *const)&v47._anon_0._M_allocated_capacity
           + 1);
    search_id = std::get<0ul,unsigned int const,std::shared_ptr<RegionSearch>>(__in);
    search_ptr = std::get<1ul,unsigned int const,std::shared_ptr<RegionSearch>>(__in);
    if ( !std::operator==<RegionSearch>(0LL, search_ptr) )
    {
      v7 = std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)search_ptr);
      __y._M_node = std::map<unsigned int,RegionSearchRegion>::end(&v7->region_map)._M_node;
      v8 = std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)search_ptr);
      __x._M_node = std::map<unsigned int,RegionSearchRegion>::find(
                      &v8->region_map,
                      (const std::map<unsigned int,RegionSearchRegion>::key_type *)(v3 + 48))._M_node;
      if ( !std::operator==(&__x, &__y) )
      {
        v9 = std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)search_ptr);
        p_state = &v9->state;
        if ( *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_state);
        }
        if ( v9->state != REGION_SEARCH_STARTED )
        {
          common::milog::MiLogStream::create(
            &v57,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/region_search/region_search_play.cpp",
            "addSearchProgress",
            216);
          v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  &v57,
                  (const char (*)[27])"[REGION_SEARCH] search_id=");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, search_id);
          v13 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v12, (const char (*)[8])" state=");
          v14 = std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)search_ptr);
          v15 = common::milog::MiLogStream::operator<<<proto::RegionSearchState,(proto::RegionSearchState*)0>(
                  v13,
                  &v14->state);
          v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid=");
          if ( *(_BYTE *)(((v47._M_string_length + 8) >> 3) + 0x7FFF8000) )
            __asan_report_load8(v47._M_string_length + 8);
          HIDWORD(v47._anon_0._M_allocated_capacity) = Player::getUid(*(const Player *const *)(v47._M_string_length + 8));
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v16,
            (const unsigned int *)&v47._anon_0._M_allocated_capacity + 1);
          common::milog::MiLogStream::~MiLogStream(&v57);
          v17 = -1;
          goto LABEL_51;
        }
        v18 = std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)search_ptr);
        if ( *(_BYTE *)(((unsigned __int64)&v18->progress >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v18->progress >> 3) + 0x7FFF8000) <= 3 )
        {
          v18 = (std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v18->progress);
        }
        v18->progress += *(_DWORD *)(v3 + 64);
        common::milog::MiLogStream::create(
          &v58,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/region_search/region_search_play.cpp",
          "addSearchProgress",
          220);
        v19 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                &v58,
                (const char (*)[27])"[REGION_SEARCH] search_id=");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, search_id);
        v21 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v20, (const char (*)[15])" add progress=");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(v3 + 64));
        v23 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v22, (const char (*)[15])" cur_progress=");
        v24 = std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)search_ptr);
        v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &v24->progress);
        v26 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v25, (const char (*)[6])" uid=");
        if ( *(_BYTE *)(((v47._M_string_length + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v47._M_string_length + 8);
        HIDWORD(v47._anon_0._M_allocated_capacity) = Player::getUid(*(const Player *const *)(v47._M_string_length + 8));
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v26,
          (const unsigned int *)&v47._anon_0._M_allocated_capacity + 1);
        common::milog::MiLogStream::~MiLogStream(&v58);
        v27 = std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)search_ptr);
        if ( *(_BYTE *)(((unsigned __int64)&v27->progress >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v27->progress >> 3) + 0x7FFF8000) <= 3 )
        {
          v27 = (std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v27->progress);
        }
        progress = v27->progress;
        v29 = *(_DWORD *)(v3 + 64);
        if ( *(_BYTE *)(((unsigned __int64)search_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)search_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)search_id >> 3) + 0x7FFF8000) )
        {
          v29 = (unsigned int)search_id;
          __asan_report_load4(search_id);
        }
        RegionSearchPlay::logSearchAddProgress((RegionSearchPlay *const)v47._M_string_length, *search_id, v29, progress);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v56);
        p_region_search_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v56)->design_config.txt_config_mgr.region_search_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)search_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)search_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)search_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(search_id);
        }
        v31 = *search_id;
        search_config_ptr = data::ActivityRegionSearchMgrBase::findRegionSearchCondExcelConfig(
                              p_region_search_config_mgr,
                              v31);
        std::shared_ptr<Config>::~shared_ptr(&v56);
        if ( search_config_ptr )
        {
          v34 = std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)search_ptr);
          if ( *(_BYTE *)(((unsigned __int64)&v34->progress >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v34->progress >> 3) + 0x7FFF8000) <= 3 )
          {
            v34 = (std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v34->progress);
          }
          v35 = v34->progress;
          if ( *(_BYTE *)(((unsigned __int64)&search_config_ptr->total_progress >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)search_config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&search_config_ptr->total_progress >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4(&search_config_ptr->total_progress);
          }
          if ( v35 >= search_config_ptr->total_progress )
          {
            if ( *(_BYTE *)(((unsigned __int64)&search_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&search_config_ptr->reward_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&search_config_ptr->reward_id);
            }
            if ( search_config_ptr->reward_id )
            {
              v38 = std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)search_ptr);
              v39 = *(_BYTE *)(((unsigned __int64)&v38->state >> 3) + 0x7FFF8000);
              if ( v39 != 0 && (char)((((_BYTE)v38 + 4) & 7) + 3) >= v39 )
              {
                LOBYTE(v31) = v39 != 0;
                __asan_report_store4(&v38->state, v31, (_BYTE)v38);
              }
              v38->state = REGION_SEARCH_WAIT_REWARD;
            }
            else
            {
              v36 = std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)search_ptr);
              v37 = *(_BYTE *)(((unsigned __int64)&v36->state >> 3) + 0x7FFF8000);
              if ( v37 != 0 && (char)((((_BYTE)v36 + 4) & 7) + 3) >= v37 )
              {
                LOBYTE(v31) = v37 != 0;
                __asan_report_store4(&v36->state, v31, (_BYTE)v36);
              }
              v36->state = REGION_SEARCH_FINISHED;
            }
            if ( *(_BYTE *)(((unsigned __int64)search_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)search_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)search_id >> 3)
                                                                          + 0x7FFF8000) )
            {
              __asan_report_load4(search_id);
            }
            RegionSearchPlay::logSearchFinish((RegionSearchPlay *const)v47._M_string_length, *search_id);
            v40 = std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)search_ptr);
            RegionSearchPlay::close((RegionSearchPlay *const)v47._M_string_length, v40, 0);
            v47._anon_0._M_local_buf[3] = 1;
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v60,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/region_search/region_search_play.cpp",
              "addSearchProgress",
              249);
            v41 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    (common::milog::MiLogStream *const)&v60,
                    (const char (*)[27])"[REGION_SEARCH] search_id=");
            v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, search_id);
            v43 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v42,
                    (const char (*)[18])" change state to ");
            v44 = std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)search_ptr);
            common::milog::MiLogStream::operator<<<proto::RegionSearchState,(proto::RegionSearchState*)0>(
              v43,
              &v44->state);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v60);
            common::tools::perf::make_shared<RegionSearchFinishSearchEvent,unsigned int &,unsigned int const&>(
              (unsigned int *)(v3 + 80),
              (const unsigned int *)(v47._M_string_length + 16),
              search_id,
              (const unsigned int *)(v47._M_string_length + 16));
            if ( *(_BYTE *)(((v47._M_string_length + 8) >> 3) + 0x7FFF8000) )
              __asan_report_load8(v47._M_string_length + 8);
            EventComp = Player::getEventComp(*(Player *const *)(v47._M_string_length + 8));
            std::shared_ptr<BaseEvent>::shared_ptr<RegionSearchFinishSearchEvent,void>(
              (std::shared_ptr<BaseEvent> *const)&v56,
              (const std::shared_ptr<RegionSearchFinishSearchEvent> *)(v3 + 80));
            PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v56);
            std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v56);
            std::shared_ptr<RegionSearchFinishSearchEvent>::~shared_ptr((std::shared_ptr<RegionSearchFinishSearchEvent> *const)(v3 + 80));
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v59,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/region_search/region_search_play.cpp",
            "addSearchProgress",
            228);
          v32 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  &v59,
                  (const char (*)[27])"[REGION_SEARCH] search_id=");
          v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, search_id);
          common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v33, (const char (*)[18])" config not found");
          common::milog::MiLogStream::~MiLogStream(&v59);
        }
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearch>>>::operator++(
      (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearch> > > *const)&v47._anon_0._M_allocated_capacity
    + 1);
  }
  if ( v47._anon_0._M_local_buf[3] )
    RegionSearchPlay::refresh((RegionSearchPlay *const)v47._M_string_length);
  v17 = 0;
LABEL_51:
  std::map<unsigned int,std::shared_ptr<RegionSearch>>::~map((std::map<unsigned int,std::shared_ptr<RegionSearch>> *const)(v3 + 112));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
  result = v17;
  if ( v61 == (char *)v3 )
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

// Line 263: range 0000000015C96C6C-0000000015C96EDB
void __cdecl RegionSearchPlay::logSearchAddProgress(
        RegionSearchPlay *const this,
        uint32_t search_id,
        uint32_t progress_add,
        uint32_t total_progress)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  std::__shared_ptr_access<proto_log::PlayerLogBodyRegionSearchAddProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRegionSearchAddProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRegionSearchAddProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRegionSearchAddProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  Player *player; // r14
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-90h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-80h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 11 log_ptr:264";
  *(_QWORD *)(v4 + 16) = RegionSearchPlay::logSearchAddProgress;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto_log::PlayerLogBodyRegionSearchAddProgress>();
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyRegionSearchAddProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRegionSearchAddProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->id_);
  }
  proto_log::PlayerLogBodyRegionSearchAddProgress::set_play_id(v7, this->id_);
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyRegionSearchAddProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRegionSearchAddProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  proto_log::PlayerLogBodyRegionSearchAddProgress::set_search_id(v8, search_id);
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyRegionSearchAddProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRegionSearchAddProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  proto_log::PlayerLogBodyRegionSearchAddProgress::set_progress_add(v9, progress_add);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyRegionSearchAddProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRegionSearchAddProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  proto_log::PlayerLogBodyRegionSearchAddProgress::set_total_progress(v10, total_progress);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyRegionSearchAddProgress,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyRegionSearchAddProgress> *)(v4 + 32));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyRegionSearchAddProgress>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyRegionSearchAddProgress> *const)(v4 + 32));
  if ( v16 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 273: range 0000000015C96EDC-0000000015C9723E
// local variable allocation has failed, the output may be wrong!
void __cdecl RegionSearchPlay::logSearchFinish(RegionSearchPlay *const this, uint32_t search_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFinishRegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyFinishRegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  Player *v8; // r14
  std::string v9; // [rsp+0h] [rbp-120h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-100h] BYREF
  char v11[32]; // [rsp+30h] [rbp-F0h] BYREF
  char v12[208]; // [rsp+50h] [rbp-D0h] BYREF

  v9._M_string_length = (std::string::size_type)this;
  HIDWORD(v9._M_dataplus._M_p) = search_id;
  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 10 holder:275 64 16 11 log_ptr:276 96 32 12 trans_no:274";
  *(_QWORD *)(v2 + 16) = RegionSearchPlay::logSearchFinish;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((v9._M_string_length + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v9._M_string_length + 8);
  BasicComp = Player::getBasicComp(*(Player *const *)(v9._M_string_length + 8));
  PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)(v2 + 96), BasicComp);
  std::string::basic_string(v11, v2 + 96);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xC48u, v9);
  std::string::~string(v11);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyFinishRegionSearch>();
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyFinishRegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFinishRegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((v9._M_string_length + 16) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v9._M_string_length + 16) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(v9._M_string_length + 16);
  }
  proto_log::PlayerLogBodyFinishRegionSearch::set_play_id(v6, *(_DWORD *)(v9._M_string_length + 16));
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyFinishRegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFinishRegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  proto_log::PlayerLogBodyFinishRegionSearch::set_search_id(v7, HIDWORD(v9._M_dataplus._M_p));
  if ( *(_BYTE *)(((v9._M_string_length + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v9._M_string_length + 8);
  v8 = *(Player **)(v9._M_string_length + 8);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyFinishRegionSearch,void>(
    (std::shared_ptr<google::protobuf::Message> *const)&v9._anon_0,
    (const std::shared_ptr<proto_log::PlayerLogBodyFinishRegionSearch> *)(v2 + 64));
  Player::printStatLog(v8, (MessagePtr *)&v9._anon_0, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v9._anon_0);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyFinishRegionSearch>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyFinishRegionSearch> *const)(v2 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  std::string::~string((void *)(v2 + 96));
  if ( v12 == (char *)v2 )
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
};

// Line 283: range 0000000015C97240-0000000015C97A46
__int64 __fastcall RegionSearchPlay::addRecycleProgress(
        RegionSearchPlay *const this,
        uint32_t region_id,
        uint32_t progress_add)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  proto::RegionSearchState *p_state; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  unsigned int v16; // r14d
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  uint32_t recycle_progress; // ecx
  __int64 result; // rax
  unsigned int val; // [rsp+14h] [rbp-1ACh] BYREF
  std::map<unsigned int,std::shared_ptr<RegionSearch>>::iterator __for_begin; // [rsp+18h] [rbp-1A8h] BYREF
  std::map<unsigned int,std::shared_ptr<RegionSearch>>::iterator __for_end; // [rsp+20h] [rbp-1A0h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,RegionSearchRegion> >::_Self __y; // [rsp+28h] [rbp-198h] BYREF
  std::map<unsigned int,std::shared_ptr<RegionSearch>> *__for_range; // [rsp+30h] [rbp-190h]
  std::pair<unsigned int const,std::shared_ptr<RegionSearch> > *__in; // [rsp+38h] [rbp-188h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<RegionSearch> > >::type *search_id; // [rsp+40h] [rbp-180h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<RegionSearch> > >::type *search_ptr; // [rsp+48h] [rbp-178h]
  RegionSearchRegion *region; // [rsp+50h] [rbp-170h]
  const data::RegionSearchRegionExcelConfig *region_config_ptr; // [rsp+58h] [rbp-168h]
  std::shared_ptr<Config> v41; // [rsp+60h] [rbp-160h] BYREF
  common::milog::MiLogStream v42; // [rsp+70h] [rbp-150h] BYREF
  common::milog::MiLogStream v43; // [rsp+90h] [rbp-130h] BYREF
  common::milog::MiLogStream v44; // [rsp+B0h] [rbp-110h] BYREF
  char v45[240]; // [rsp+D0h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 13 region_id:282 64 4 16 progress_add:282 80 8 8 iter:292 112 48 14 search_map:285";
  *(_QWORD *)(v3 + 16) = RegionSearchPlay::addRecycleProgress;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = region_id;
  *(_DWORD *)(v3 + 64) = progress_add;
  std::map<unsigned int,std::shared_ptr<RegionSearch>>::map(
    (std::map<unsigned int,std::shared_ptr<RegionSearch>> *const)(v3 + 112),
    &this->search_map_);
  __for_range = (std::map<unsigned int,std::shared_ptr<RegionSearch>> *)(v3 + 112);
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<RegionSearch>>::begin((std::map<unsigned int,std::shared_ptr<RegionSearch>> *const)(v3 + 112))._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<RegionSearch>>::end((std::map<unsigned int,std::shared_ptr<RegionSearch>> *const)(v3 + 112))._M_node;
  while ( 1 )
  {
    if ( !std::operator!=(&__for_begin, &__for_end) )
    {
      v16 = 0;
      goto LABEL_31;
    }
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearch>>>::operator*(&__for_begin);
    search_id = std::get<0ul,unsigned int const,std::shared_ptr<RegionSearch>>(__in);
    search_ptr = std::get<1ul,unsigned int const,std::shared_ptr<RegionSearch>>(__in);
    if ( !std::operator==<RegionSearch>(0LL, search_ptr) )
    {
      v6 = std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)search_ptr);
      *(std::map<unsigned int,RegionSearchRegion>::iterator *)(v3 + 80) = std::map<unsigned int,RegionSearchRegion>::find(
                                                                            &v6->region_map,
                                                                            (const std::map<unsigned int,RegionSearchRegion>::key_type *)(v3 + 48));
      v7 = std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)search_ptr);
      __y._M_node = std::map<unsigned int,RegionSearchRegion>::end(&v7->region_map)._M_node;
      if ( !std::operator==(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,RegionSearchRegion> >::_Self *)(v3 + 80),
              &__y) )
        break;
    }
LABEL_29:
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearch>>>::operator++(&__for_begin);
  }
  region = &std::_Rb_tree_iterator<std::pair<unsigned int const,RegionSearchRegion>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,RegionSearchRegion> > *const)(v3 + 80))->second;
  v8 = std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)search_ptr);
  p_state = &v8->state;
  if ( *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_state);
  }
  if ( v8->state == REGION_SEARCH_STARTED )
  {
    if ( *(_BYTE *)(((unsigned __int64)&region->recycle_progress >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&region->recycle_progress >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&region->recycle_progress);
    }
    region->recycle_progress += *(_DWORD *)(v3 + 64);
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/region_search/region_search_play.cpp",
      "addRecycleProgress",
      304);
    v17 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            &v43,
            (const char (*)[27])"[REGION_SEARCH] region_id=");
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
    v19 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            v18,
            (const char (*)[23])" add recycle progress=");
    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 64));
    v21 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v20, (const char (*)[15])" cur_progress=");
    v22 = std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)search_ptr);
    v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &v22->progress);
    v24 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v23, (const char (*)[6])" uid=");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
    common::milog::MiLogStream::~MiLogStream(&v43);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v41);
    v25 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41);
    region_config_ptr = data::ActivityRegionSearchMgrBase::findRegionSearchRegionExcelConfig(
                          &v25->design_config.txt_config_mgr.region_search_config_mgr,
                          *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v41);
    if ( region_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->recycle_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)region_config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&region_config_ptr->recycle_type >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&region_config_ptr->recycle_type);
      }
      if ( region_config_ptr->recycle_type == REGION_SEARCH_RECYCLE_PROGRESS )
      {
        if ( *(_BYTE *)(((unsigned __int64)&region->recycle_progress >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&region->recycle_progress >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&region->recycle_progress);
        }
        recycle_progress = region->recycle_progress;
        if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->recycle_param >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&region_config_ptr->recycle_param >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&region_config_ptr->recycle_param);
        }
        if ( recycle_progress >= region_config_ptr->recycle_param )
          RegionSearchPlay::refreshRecycleGroup(this, region, region_config_ptr);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/region_search/region_search_play.cpp",
        "addRecycleProgress",
        309);
      v26 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v44,
              (const char (*)[27])"[REGION_SEARCH] region_id=");
      v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v27, (const char (*)[18])" config not found");
      common::milog::MiLogStream::~MiLogStream(&v44);
    }
    goto LABEL_29;
  }
  common::milog::MiLogStream::create(
    &v42,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/region_search/region_search_play.cpp",
    "addRecycleProgress",
    300);
  v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          &v42,
          (const char (*)[27])"[REGION_SEARCH] search_id=");
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, search_id);
  v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" state=");
  v13 = std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)search_ptr);
  v14 = common::milog::MiLogStream::operator<<<proto::RegionSearchState,(proto::RegionSearchState*)0>(v12, &v13->state);
  v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid=");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
  common::milog::MiLogStream::~MiLogStream(&v42);
  v16 = -1;
LABEL_31:
  std::map<unsigned int,std::shared_ptr<RegionSearch>>::~map((std::map<unsigned int,std::shared_ptr<RegionSearch>> *const)(v3 + 112));
  result = v16;
  if ( v45 == (char *)v3 )
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

// Line 327: range 0000000015C97A48-0000000015C98C42
void __cdecl RegionSearchPlay::refreshRecycleGroup(
        RegionSearchPlay *const this,
        RegionSearchRegion *region,
        const data::RegionSearchRegionExcelConfig *region_config)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  __m128i v7; // xmm0
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned __int64 Position; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v10; // rax
  _DWORD *v11; // rdx
  uint32_t v12; // eax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  unsigned __int64 n; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v18; // rax
  _DWORD *v19; // rdx
  uint32_t v20; // eax
  Group *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  RegionSearchExcelConfigMgr *p_region_search_config_mgr; // rcx
  Scene *v26; // rax
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v28; // rdx
  Scene *v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r15
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr v36; // r14
  Scene *v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rdx
  unsigned int *M_current; // r15
  unsigned int *v41; // rsi
  uint32_t revise_level; // [rsp+20h] [rbp-3E0h]
  float distance; // [rsp+24h] [rbp-3DCh]
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-3D8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-3D0h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-3C8h]
  std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-3C0h]
  const data::RegionSearchExcelConfig *play_config_ptr; // [rsp+48h] [rbp-3B8h]
  common::milog::MiLogStream v51; // [rsp+50h] [rbp-3B0h] BYREF
  char v52[912]; // [rsp+70h] [rbp-390h] BYREF

  v3 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(864LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "14 48 4 12 group_id:366 64 4 12 group_id:343 80 12 14 avatar_pos:334 112 12 13 group_pos:350 144"
                        " 16 13 scene_ptr:328 176 16 14 avatar_ptr:335 208 16 13 group_ptr:345 240 24 17 all_group_vec:34"
                        "1 304 24 17 add_group_vec:362 368 24 17 new_group_vec:364 432 24 20 remove_group_vec:405 496 28 "
                        "15 log_context:374 560 48 17 old_group_set:340 640 160 18 script_context:375";
  *(_QWORD *)(v3 + 16) = RegionSearchPlay::refreshRecycleGroup;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862722] = 0x4000000;
  v5[536862723] = 62194;
  v5[536862723] = 0x4000000;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = 62194;
  v5[536862727] = 62194;
  v5[536862728] = -218959360;
  v5[536862729] = 62194;
  v5[536862730] = -218959360;
  v5[536862731] = 62194;
  v5[536862732] = -218959360;
  v5[536862733] = 62194;
  v5[536862734] = -218959360;
  v5[536862735] = 62194;
  v5[536862736] = -219020288;
  v5[536862737] = 62194;
  v5[536862739] = -218959118;
  v5[536862745] = -202116109;
  v5[536862746] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)(v3 + 208));
  std::shared_ptr<Scene>::shared_ptr<PlayerWorldScene,void>(
    (std::shared_ptr<Scene> *const)(v3 + 144),
    (std::shared_ptr<PlayerWorldScene> *)(v3 + 208));
  std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v3 + 208));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 144)) )
  {
    common::milog::MiLogStream::create(
      &v51,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/region_search/region_search_play.cpp",
      "refreshRecycleGroup",
      331);
    v6 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v51,
           (const char (*)[47])"[REGION_SEARCH] getMainWorldScene failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v3 + 64) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v51);
  }
  else
  {
    v7 = 0LL;
    Vector3::Vector3((Vector3 *const)(v3 + 80), 0.0, 0.0, 0.0);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getAvatarComp(this->player_);
    PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v3 + 176));
    if ( std::operator!=<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 176)) )
    {
      v8 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
      Position = (unsigned __int64)Entity::getPosition((const Entity *const)v8);
      if ( (char)(Position & 7) >= *(_BYTE *)((Position >> 3) + 0x7FFF8000)
        && *(_BYTE *)((Position >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) != 0
        && (char)((Position + 11) & 7) >= *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) )
      {
        Position = __asan_report_load_n(Position, 12LL);
      }
      *(_QWORD *)(v3 + 80) = *(_QWORD *)Position;
      *(_DWORD *)(v3 + 88) = *(_DWORD *)(Position + 8);
    }
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 560), &region->recycle_group_set);
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 240), &region_config->recycle_group_list);
    __for_range = (std::set<unsigned int> *)(v3 + 560);
    __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v3 + 560))._M_node;
    __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v3 + 560))._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v10 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      *(_DWORD *)(v3 + 64) = *v11;
      v12 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
      Scene::findGroup((Scene *const)(v3 + 208), v12);
      if ( !std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v3 + 208)) )
      {
        v13 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 208));
        n = (unsigned __int64)Group::getPosition(v13);
        if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
        {
          n = __asan_report_load_n(n, 12LL);
        }
        *(_QWORD *)(v3 + 112) = *(_QWORD *)n;
        *(_DWORD *)(v3 + 120) = *(_DWORD *)(n + 8);
        *(float *)v7.m128i_i32 = getPlaneDistance((const Vector3 *)(v3 + 80), (const Vector3 *)(v3 + 112));
        distance = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
        v7 = (__m128i)0x42200000u;
        if ( distance <= 40.0 )
          common::tools::MiscUtils::removeValues<std::vector<unsigned int>,unsigned int>(
            (std::vector<unsigned int> *)(v3 + 240),
            (const unsigned int *)(v3 + 64));
      }
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 208));
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    common::milog::MiLogStream::create(
      &v51,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/region_search/region_search_play.cpp",
      "refreshRecycleGroup",
      357);
    v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            &v51,
            (const char (*)[22])"candidate group list:");
    v16 = common::milog::MiLogStream::operator<<<unsigned int>(v15, (const std::vector<unsigned int> *)(v3 + 240));
    v17 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v16, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v3 + 64) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v51);
    if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 240)) )
      std::vector<unsigned int>::operator=(
        (std::vector<unsigned int> *const)(v3 + 240),
        &region_config->recycle_group_list);
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 304));
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 368));
    if ( *(_BYTE *)(((unsigned __int64)&region_config->recycle_group_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&region_config->recycle_group_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&region_config->recycle_group_num);
    }
    common::tools::RandomUtils::randomSelect<unsigned int>(
      (const std::vector<unsigned int> *)(v3 + 240),
      (std::vector<unsigned int> *)(v3 + 368),
      region_config->recycle_group_num);
    __for_range_0 = (std::vector<unsigned int> *)(v3 + 368);
    __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 368))._M_current;
    __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
    {
      v18 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
      v19 = v18;
      if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v18);
      }
      *(_DWORD *)(v3 + 48) = *v19;
      if ( std::set<unsigned int>::count(
             (const std::set<unsigned int> *const)(v3 + 560),
             (const std::set<unsigned int>::key_type *)(v3 + 48)) )
      {
        std::set<unsigned int>::erase(
          (std::set<unsigned int> *const)(v3 + 560),
          (const std::set<unsigned int>::key_type *)(v3 + 48));
        v20 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
        Scene::findGroup((Scene *const)(v3 + 208), v20);
        if ( std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v3 + 208)) )
        {
          *(_QWORD *)(v3 + 496) = 0LL;
          *(_QWORD *)(v3 + 504) = 0LL;
          *(_QWORD *)(v3 + 512) = 0LL;
          *(_DWORD *)(v3 + 520) = 0;
          ScriptContext::ScriptContext((ScriptContext *const)(v3 + 640));
          v21 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 208));
          Group::refresh(v21, (const ScriptContext *)(v3 + 640), *(SuiteLogContext *)(v3 + 496));
          common::milog::MiLogStream::create(
            &v51,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/region_search/region_search_play.cpp",
            "refreshRecycleGroup",
            377);
          v22 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  &v51,
                  (const char (*)[18])"refresh group_id:");
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v22,
                  (const unsigned int *)(v3 + 48));
          v24 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v23, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          *(_DWORD *)(v3 + 64) = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream(&v51);
          ScriptContext::~ScriptContext((ScriptContext *const)(v3 + 640));
        }
        std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 208));
      }
      else
      {
        std::vector<unsigned int>::push_back(
          (std::vector<unsigned int> *const)(v3 + 304),
          (const std::vector<unsigned int>::value_type *)(v3 + 48));
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
    }
    if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 304)) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v3 + 208));
      p_region_search_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 208))->design_config.txt_config_mgr.region_search_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->id_);
      }
      play_config_ptr = data::ActivityRegionSearchMgrBase::findRegionSearchExcelConfig(
                          p_region_search_config_mgr,
                          this->id_);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 208));
      if ( play_config_ptr )
      {
        revise_level = RegionSearchPlay::getReviseLevel(this, play_config_ptr);
        v26 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
        BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp(v26);
        if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
          BlockGroupComp = __asan_report_load8(BlockGroupComp);
        v28 = *(_QWORD *)BlockGroupComp + 104LL;
        if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
          BlockGroupComp = __asan_report_load8(*(_QWORD *)BlockGroupComp + 104LL);
        (*(void (__fastcall **)(unsigned __int64, unsigned __int64, __int64))v28)(BlockGroupComp, v3 + 304, 1LL);
        v29 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
        v30 = (unsigned __int64)Scene::getBlockGroupComp(v29);
        if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
          v30 = __asan_report_load8(v30);
        v31 = *(_QWORD *)v30 + 96LL;
        if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
          v30 = __asan_report_load8(*(_QWORD *)v30 + 96LL);
        (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD, _QWORD))v31)(
          v30,
          v3 + 304,
          revise_level,
          0LL);
        common::milog::MiLogStream::create(
          &v51,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/region_search/region_search_play.cpp",
          "refreshRecycleGroup",
          395);
        v32 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v51,
                (const char (*)[34])"[REGION_SEARCH] register groups: ");
        common::milog::MiLogStream::operator<<<unsigned int>(v32, (const std::vector<unsigned int> *)(v3 + 304));
        common::milog::MiLogStream::~MiLogStream(&v51);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v51,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/region_search/region_search_play.cpp",
          "refreshRecycleGroup",
          399);
        v33 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v51,
                (const char (*)[25])"[REGION_SEARCH] play_id=");
        v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &this->id_);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v34, (const char (*)[18])" config not found");
        common::milog::MiLogStream::~MiLogStream(&v51);
      }
    }
    if ( !std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v3 + 560)) )
    {
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 432));
      M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v3 + 560))._M_node;
      v36 = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v3 + 560))._M_node;
      __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 432))._M_current;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_end,
        (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin);
      std::vector<unsigned int>::insert<std::_Rb_tree_const_iterator<unsigned int>,void>(
        (std::vector<unsigned int> *const)(v3 + 432),
        (std::vector<unsigned int>::const_iterator)__for_end._M_node,
        (std::_Rb_tree_const_iterator<unsigned int>)v36,
        (std::_Rb_tree_const_iterator<unsigned int>)M_node);
      v37 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
      v38 = (unsigned __int64)Scene::getBlockGroupComp(v37);
      if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
        v38 = __asan_report_load8(v38);
      v39 = *(_QWORD *)v38 + 104LL;
      if ( *(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
        v38 = __asan_report_load8(*(_QWORD *)v38 + 104LL);
      (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v39)(v38, v3 + 432, 0LL);
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 432));
    }
    std::set<unsigned int>::clear(&region->recycle_group_set);
    M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 368))._M_current;
    v41 = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 368))._M_current;
    std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
      &region->recycle_group_set,
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v41,
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
    if ( *(_BYTE *)(((unsigned __int64)&region->recycle_progress >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&region->recycle_progress >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&region->recycle_progress, v41, (_BYTE)region + 104);
    }
    region->recycle_progress = 0;
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 368));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 304));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 240));
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 560));
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 176));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 144));
  if ( v52 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF804C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8064) = 0LL;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8068) = -168430091;
  }
};

// Line 415: range 0000000015C98C44-0000000015C9907E
bool __cdecl RegionSearchPlay::refresh(RegionSearchPlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  bool result; // al
  std::_Rb_tree_const_iterator<unsigned int>::reference v7; // rax
  _DWORD *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::vector<data::RegionSearchCond> *p_cond; // rsi
  bool is_add_new; // [rsp+1Fh] [rbp-C1h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-C0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-B8h] BYREF
  const RegionSearchExcelConfigMgr *region_search_mgr; // [rsp+30h] [rbp-B0h]
  const std::set<unsigned int> *search_set_ptr; // [rsp+38h] [rbp-A8h]
  const std::set<unsigned int> *__for_range; // [rsp+40h] [rbp-A0h]
  const data::RegionSearchCondExcelConfig *search_config_ptr; // [rsp+48h] [rbp-98h]
  std::shared_ptr<Config> v19; // [rsp+50h] [rbp-90h] BYREF
  common::milog::MiLogStream v20; // [rsp+60h] [rbp-80h] BYREF
  char v21[96]; // [rsp+80h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 13 search_id:425";
  *(_QWORD *)(v1 + 16) = RegionSearchPlay::refresh;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  is_add_new = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  region_search_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.region_search_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v19);
  if ( *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->id_);
  }
  search_set_ptr = RegionSearchExcelConfigMgr::findSearchSetByPlay(region_search_mgr, this->id_);
  if ( search_set_ptr )
  {
    __for_range = search_set_ptr;
    __for_begin._M_node = std::set<unsigned int>::begin(search_set_ptr)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(search_set_ptr)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v7 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      *(_DWORD *)(v1 + 32) = *v8;
      if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,std::shared_ptr<RegionSearch>>,unsigned int>(
              &this->search_map_,
              (const unsigned int *)(v1 + 32)) )
      {
        search_config_ptr = data::ActivityRegionSearchMgrBase::findRegionSearchCondExcelConfig(
                              region_search_mgr,
                              *(_DWORD *)(v1 + 32));
        if ( search_config_ptr )
        {
          p_cond = &search_config_ptr->cond;
          if ( *(_BYTE *)(((unsigned __int64)&search_config_ptr->logic_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&search_config_ptr->logic_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&search_config_ptr->logic_type);
          }
          if ( RegionSearchPlay::checkCond(this, search_config_ptr->logic_type, p_cond)
            && !RegionSearchPlay::addSearch(this, search_config_ptr) )
          {
            is_add_new = 1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v20,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/region_search/region_search_play.cpp",
            "refresh",
            434);
          v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                 &v20,
                 (const char (*)[27])"[REGION_SEARCH] search_id=");
          v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v9,
                  (const unsigned int *)(v1 + 32));
          common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v10, (const char (*)[18])" config not found");
          common::milog::MiLogStream::~MiLogStream(&v20);
        }
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    result = is_add_new;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/region_search/region_search_play.cpp",
      "refresh",
      422);
    v4 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v20,
           (const char (*)[25])"[REGION_SEARCH] play_id=");
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->id_);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v5, (const char (*)[15])off_259C7E00);
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = 0;
  }
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

// Line 450: range 0000000015C99080-0000000015C99186
uint32_t __cdecl RegionSearchPlay::getReviseLevel(
        RegionSearchPlay *const this,
        const data::RegionSearchExcelConfig *play_config)
{
  PlayerBasicComp *BasicComp; // rax
  ReviseLevelGrowExcelConfigMgr *p_revise_level_grow_config_mgr; // rcx
  uint32_t ReviseLevel; // ebx
  uint32_t world_level; // [rsp+1Ch] [rbp-24h]
  std::shared_ptr<Config> v7[2]; // [rsp+20h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  world_level = PlayerBasicComp::getWorldLevel(BasicComp);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v7);
  p_revise_level_grow_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v7)->design_config.txt_config_mgr.revise_level_grow_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&play_config->revise_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)play_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&play_config->revise_level >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load4(&play_config->revise_level);
  }
  ReviseLevel = ReviseLevelGrowExcelConfigMgr::findReviseLevel(
                  p_revise_level_grow_config_mgr,
                  play_config->revise_level,
                  world_level);
  std::shared_ptr<Config>::~shared_ptr(v7);
  return ReviseLevel;
};

// Line 456: range 0000000015C99188-0000000015C99AE1
int32_t __cdecl RegionSearchPlay::addSearch(
        RegionSearchPlay *const this,
        const data::RegionSearchCondExcelConfig *search_config)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  char *v6; // rsi
  uint32_t id; // r14d
  unsigned __int64 v8; // rax
  char v9; // dl
  bool v10; // dl
  std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rdx
  char v12; // cl
  const RegionSearchExcelConfigMgr *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v16; // rax
  _DWORD *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v21; // rax
  std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  RegionSearchRegion *v23; // rax
  Scene *v24; // rax
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v26; // rdx
  std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  RegionSearchRegion *v28; // rcx
  std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::shared_ptr<RegionSearch> *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r14
  int32_t result; // eax
  uint32_t revise_level; // [rsp+1Ch] [rbp-194h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-190h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-188h] BYREF
  const RegionSearchExcelConfigMgr *region_search_mgr; // [rsp+30h] [rbp-180h]
  const data::RegionSearchExcelConfig *play_config_ptr; // [rsp+38h] [rbp-178h]
  const std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-170h]
  const data::RegionSearchRegionExcelConfig *region_config_ptr; // [rsp+48h] [rbp-168h]
  std::shared_ptr<PlayerWorldScene> __r; // [rsp+50h] [rbp-160h] BYREF
  common::milog::MiLogStream v47; // [rsp+60h] [rbp-150h] BYREF
  char v48[304]; // [rsp+80h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 13 region_id:477 48 16 13 scene_ptr:457 80 16 14 search_ptr:463 112 112 10 region:485";
  *(_QWORD *)(v2 + 16) = RegionSearchPlay::addSearch;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862727] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)&__r);
  std::shared_ptr<Scene>::shared_ptr<PlayerWorldScene,void>((std::shared_ptr<Scene> *const)(v2 + 48), &__r);
  std::shared_ptr<PlayerWorldScene>::~shared_ptr(&__r);
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/region_search/region_search_play.cpp",
      "addSearch",
      460);
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      &v47,
      (const char (*)[44])"[REGION_SEARCH] get main world scene failed");
    common::milog::MiLogStream::~MiLogStream(&v47);
    v5 = -1;
  }
  else
  {
    common::tools::perf::make_shared<RegionSearch>();
    v6 = (char *)(v2 + 80);
    if ( std::operator==<RegionSearch>(0LL, (const std::shared_ptr<RegionSearch> *)(v2 + 80)) )
    {
      v5 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&search_config->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&search_config->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&search_config->id);
      }
      id = search_config->id;
      v8 = (unsigned __int64)std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      v9 = *(_BYTE *)((v8 >> 3) + 0x7FFF8000);
      LOBYTE(v6) = v9 != 0;
      v10 = v9 != 0 && v9 <= 3;
      if ( v10 )
        v8 = __asan_report_store4(v8, v6, v10);
      *(_DWORD *)v8 = id;
      v11 = std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      v12 = *(_BYTE *)(((unsigned __int64)&v11->state >> 3) + 0x7FFF8000);
      if ( v12 != 0 && (char)((((_BYTE)v11 + 4) & 7) + 3) >= v12 )
      {
        LOBYTE(v6) = v12 != 0;
        __asan_report_store4(&v11->state, v6, (_BYTE)v11);
      }
      v11->state = REGION_SEARCH_STARTED;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&__r);
      region_search_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__r)->design_config.txt_config_mgr.region_search_config_mgr;
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__r);
      v13 = region_search_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->id_);
      }
      play_config_ptr = data::ActivityRegionSearchMgrBase::findRegionSearchExcelConfig(v13, this->id_);
      if ( play_config_ptr )
      {
        __for_range = &search_config->region_list;
        __for_begin._M_current = std::vector<unsigned int>::begin(&search_config->region_list)._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(&search_config->region_list)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v16 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
          v17 = v16;
          if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v16);
          }
          *(_DWORD *)(v2 + 32) = *v17;
          region_config_ptr = data::ActivityRegionSearchMgrBase::findRegionSearchRegionExcelConfig(
                                region_search_mgr,
                                *(_DWORD *)(v2 + 32));
          if ( region_config_ptr )
          {
            RegionSearchRegion::RegionSearchRegion((RegionSearchRegion *const)(v2 + 112));
            *(_DWORD *)(v2 + 112) = *(_DWORD *)(v2 + 32);
            M_current = std::vector<unsigned int>::end(&region_config_ptr->oneoff_group_list)._M_current;
            v21._M_current = std::vector<unsigned int>::begin(&region_config_ptr->oneoff_group_list)._M_current;
            std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
              (std::set<unsigned int> *const)(v2 + 120),
              v21,
              (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
            v22 = std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
            v23 = std::map<unsigned int,RegionSearchRegion>::operator[](
                    &v22->region_map,
                    (const std::map<unsigned int,RegionSearchRegion>::key_type *)(v2 + 32));
            RegionSearchRegion::operator=(v23, (const RegionSearchRegion *)(v2 + 112));
            revise_level = RegionSearchPlay::getReviseLevel(this, play_config_ptr);
            v24 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
            BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp(v24);
            if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
              BlockGroupComp = __asan_report_load8(BlockGroupComp);
            v26 = *(_QWORD *)BlockGroupComp + 96LL;
            if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
              BlockGroupComp = __asan_report_load8(*(_QWORD *)BlockGroupComp + 96LL);
            (*(void (__fastcall **)(unsigned __int64, std::vector<unsigned int> *, _QWORD, _QWORD))v26)(
              BlockGroupComp,
              &region_config_ptr->oneoff_group_list,
              revise_level,
              0LL);
            v27 = std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
            v28 = std::map<unsigned int,RegionSearchRegion>::operator[](
                    &v27->region_map,
                    (const std::map<unsigned int,RegionSearchRegion>::key_type *)(v2 + 32));
            RegionSearchPlay::refreshRecycleGroup(this, v28, region_config_ptr);
            RegionSearchRegion::~RegionSearchRegion((RegionSearchRegion *const)(v2 + 112));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v47,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/region_search/region_search_play.cpp",
              "addSearch",
              482);
            v18 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    &v47,
                    (const char (*)[27])"[REGION_SEARCH] region_id=");
            v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v18,
                    (const unsigned int *)(v2 + 32));
            common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v19,
              (const char (*)[18])" config not found");
            common::milog::MiLogStream::~MiLogStream(&v47);
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        v29 = std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        v30 = std::map<unsigned int,std::shared_ptr<RegionSearch>>::operator[](&this->search_map_, &v29->search_id);
        std::shared_ptr<RegionSearch>::operator=(v30, (const std::shared_ptr<RegionSearch> *)(v2 + 80));
        common::milog::MiLogStream::create(
          &v47,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/region_search/region_search_play.cpp",
          "addSearch",
          494);
        v31 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v47,
                (const char (*)[25])"[REGION_SEARCH] play_id=");
        v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &this->id_);
        v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v32,
                (const char (*)[16])" add search_id=");
        v34 = std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &v34->search_id);
        v36 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v35, (const char (*)[6])" uid=");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        *(_DWORD *)(v2 + 32) = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v47);
        v5 = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v47,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/region_search/region_search_play.cpp",
          "addSearch",
          474);
        v14 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v47,
                (const char (*)[25])"[REGION_SEARCH] play_id=");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->id_);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v15, (const char (*)[18])" config not found");
        common::milog::MiLogStream::~MiLogStream(&v47);
        v5 = -1;
      }
    }
    std::shared_ptr<RegionSearch>::~shared_ptr((std::shared_ptr<RegionSearch> *const)(v2 + 80));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 48));
  result = v5;
  if ( v48 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 499: range 0000000015C99AE2-0000000015C99D17
bool __cdecl RegionSearchPlay::checkCond(
        RegionSearchPlay *const this,
        data::LogicType logic_type,
        const std::vector<data::RegionSearchCond> *cond_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::vector<bool>::size_type v6; // rax
  bool v7; // al
  bool v8; // r14
  bool result; // al
  data::LogicType logic_typea; // [rsp+14h] [rbp-DCh]
  std::vector<data::RegionSearchCond>::const_iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::vector<data::RegionSearchCond>::const_iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  const std::vector<data::RegionSearchCond> *__for_range; // [rsp+30h] [rbp-C0h]
  const data::RegionSearchCond *cond; // [rsp+38h] [rbp-B8h]
  char v16[176]; // [rsp+40h] [rbp-B0h] BYREF

  logic_typea = logic_type;
  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 40 18 cond_check_vec:504";
  *(_QWORD *)(v3 + 16) = RegionSearchPlay::checkCond;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  if ( logic_type == LOGIC_NONE )
    logic_typea = LOGIC_AND;
  std::vector<bool>::vector((std::vector<bool> *const)(v3 + 48));
  v6 = std::vector<data::RegionSearchCond>::size(cond_vec);
  std::vector<bool>::reserve((std::vector<bool> *const)(v3 + 48), v6);
  __for_range = cond_vec;
  __for_begin._M_current = std::vector<data::RegionSearchCond>::begin(cond_vec)._M_current;
  __for_end._M_current = std::vector<data::RegionSearchCond>::end(cond_vec)._M_current;
  while ( __gnu_cxx::operator!=<data::RegionSearchCond const*,std::vector<data::RegionSearchCond>>(
            &__for_begin,
            &__for_end) )
  {
    cond = __gnu_cxx::__normal_iterator<data::RegionSearchCond const*,std::vector<data::RegionSearchCond>>::operator*(&__for_begin);
    v7 = RegionSearchPlay::checkCond(this, cond);
    std::vector<bool>::push_back((std::vector<bool> *const)(v3 + 48), v7);
    __gnu_cxx::__normal_iterator<data::RegionSearchCond const*,std::vector<data::RegionSearchCond>>::operator++(&__for_begin);
  }
  v8 = CommonMiscs::evaluateLogicComb(logic_typea, (const std::vector<bool> *)(v3 + 48));
  std::vector<bool>::~vector((std::vector<bool> *const)(v3 + 48));
  result = v8;
  if ( v16 == (char *)v3 )
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

// Line 514: range 0000000015C99D18-0000000015C9A15A
bool __cdecl RegionSearchPlay::checkCond(RegionSearchPlay *const this, const data::RegionSearchCond *cond)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  data::RegionSearchCondType type; // eax
  std::vector<int>::const_reference v6; // rax
  uint32_t *v7; // rax
  uint32_t *v8; // rdx
  uint32_t ActivityComp; // eax
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t *v11; // rax
  uint32_t *v12; // rdx
  bool isMeetCond; // r14
  bool result; // al
  uint32_t cond_id; // [rsp+1Ch] [rbp-94h]
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-90h] BYREF
  char v17[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 16 activity_ptr:526";
  *(_QWORD *)(v2 + 16) = RegionSearchPlay::checkCond;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&cond->type);
  }
  type = cond->type;
  if ( type == REGION_SEARCH_COND_ACTIVITY_COND )
  {
    if ( std::vector<int>::size(&cond->param) > 1 )
    {
      v6 = std::vector<int>::operator[](&cond->param, 0LL);
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      v7 = (uint32_t *)std::vector<int>::operator[](&cond->param, 1uLL);
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      cond_id = *v8;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      ActivityComp = (unsigned int)Player::getActivityComp(this->player_);
      PlayerActivityComp::findBaseActivity((PlayerActivityComp *const)(v2 + 32), ActivityComp);
      if ( std::operator==<BaseActivity>(0LL, (const std::shared_ptr<BaseActivity> *)(v2 + 32)) )
      {
        isMeetCond = 0;
      }
      else
      {
        v10 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        isMeetCond = BaseActivity::isMeetCond(v10, cond_id);
      }
      std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)(v2 + 32));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/region_search/region_search_play.cpp",
        "checkCond",
        521);
      common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v16, (const char (*)[15])"param size < 2");
      common::milog::MiLogStream::~MiLogStream(&v16);
      isMeetCond = 0;
    }
  }
  else if ( type == REGION_SEARCH_COND_FINISH_SEARCH )
  {
    if ( std::vector<int>::size(&cond->param) )
    {
      v11 = (uint32_t *)std::vector<int>::operator[](&cond->param, 0LL);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      isMeetCond = RegionSearchPlay::isSearchFinish(this, *v12);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/region_search/region_search_play.cpp",
        "checkCond",
        537);
      common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v16, (const char (*)[15])"param size < 1");
      common::milog::MiLogStream::~MiLogStream(&v16);
      isMeetCond = 0;
    }
  }
  else
  {
    isMeetCond = 1;
  }
  result = isMeetCond;
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

// Line 552: range 0000000015C9A15C-0000000015C9A381
_BOOL8 __fastcall RegionSearchPlay::isSearchFinish(const RegionSearchPlay *const this, uint32_t search_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  _BOOL4 v5; // r14d
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearch> > >::pointer v6; // rax
  std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  proto::RegionSearchState *p_state; // rax
  _BOOL8 result; // rax
  proto::RegionSearchState state; // [rsp+14h] [rbp-BCh]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearch> > >::_Self __y; // [rsp+18h] [rbp-B8h] BYREF
  char v12[176]; // [rsp+20h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 search_id:551 64 8 8 iter:553 96 16 14 search_ptr:558";
  *(_QWORD *)(v2 + 16) = RegionSearchPlay::isSearchFinish;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = search_id;
  *(std::map<unsigned int,std::shared_ptr<RegionSearch>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::shared_ptr<RegionSearch>>::find(
                                                                                         &this->search_map_,
                                                                                         (const std::map<unsigned int,std::shared_ptr<RegionSearch>>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<RegionSearch>>::end(&this->search_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearch> > >::_Self *)(v2 + 64),
         &__y) )
  {
    v5 = 0;
  }
  else
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearch>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearch> > > *const)(v2 + 64));
    std::shared_ptr<RegionSearch>::shared_ptr((std::shared_ptr<RegionSearch> *const)(v2 + 96), &v6->second);
    if ( std::operator==<RegionSearch>(0LL, (const std::shared_ptr<RegionSearch> *)(v2 + 96)) )
    {
      v5 = 0;
    }
    else
    {
      v7 = std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      p_state = &v7->state;
      if ( *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_state);
      }
      state = v7->state;
      v5 = state == REGION_SEARCH_FINISHED || state == REGION_SEARCH_WAIT_REWARD;
    }
    std::shared_ptr<RegionSearch>::~shared_ptr((std::shared_ptr<RegionSearch> *const)(v2 + 96));
  }
  result = v5;
  if ( v12 == (char *)v2 )
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

// Line 573: range 0000000015C9A530-0000000015C9AA02
void __cdecl RegionSearchPlay::close(RegionSearchPlay *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  RegionSearch *v4; // rcx
  RegionSearchExcelConfigMgr *p_region_search_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  std::map<unsigned int,std::shared_ptr<RegionSearch>>::iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::map<unsigned int,std::shared_ptr<RegionSearch>>::iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  std::map<unsigned int,std::shared_ptr<RegionSearch>> *__for_range; // [rsp+28h] [rbp-118h]
  const data::RegionSearchExcelConfig *play_config_ptr; // [rsp+30h] [rbp-110h]
  std::pair<unsigned int const,std::shared_ptr<RegionSearch> > *__in; // [rsp+38h] [rbp-108h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<RegionSearch> > >::type *_; // [rsp+40h] [rbp-100h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<RegionSearch> > >::type *search_ptr; // [rsp+48h] [rbp-F8h]
  common::milog::MiLogStream v16; // [rsp+50h] [rbp-F0h] BYREF
  char v17[208]; // [rsp+70h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 16 13 world_ptr:597 80 48 14 search_map:575";
  *(_QWORD *)(v1 + 16) = RegionSearchPlay::close;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862724] = -202116109;
  std::map<unsigned int,std::shared_ptr<RegionSearch>>::map(
    (std::map<unsigned int,std::shared_ptr<RegionSearch>> *const)(v1 + 80),
    &this->search_map_);
  __for_range = (std::map<unsigned int,std::shared_ptr<RegionSearch>> *)(v1 + 80);
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<RegionSearch>>::begin((std::map<unsigned int,std::shared_ptr<RegionSearch>> *const)(v1 + 80))._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<RegionSearch>>::end((std::map<unsigned int,std::shared_ptr<RegionSearch>> *const)(v1 + 80))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearch>>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<RegionSearch>>(__in);
    search_ptr = std::get<1ul,unsigned int const,std::shared_ptr<RegionSearch>>(__in);
    if ( !std::operator==<RegionSearch>(0LL, search_ptr) )
    {
      v4 = std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)search_ptr);
      RegionSearchPlay::close(this, v4, 1);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearch>>>::operator++(&__for_begin);
  }
  std::map<unsigned int,std::shared_ptr<RegionSearch>>::clear(&this->search_map_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 48));
  p_region_search_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48))->design_config.txt_config_mgr.region_search_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->id_);
  }
  play_config_ptr = data::ActivityRegionSearchMgrBase::findRegionSearchExcelConfig(
                      p_region_search_config_mgr,
                      this->id_);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 48));
  if ( play_config_ptr )
  {
    if ( !(unsigned __int8)std::string::empty(&play_config_ptr->ability_group) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v1 + 48));
      if ( !std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v1 + 48)) )
      {
        v8 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
        std::function<ForeachPolicy ()(Player &)>::function<RegionSearchPlay::close(void)::{lambda(Player &)#1},void,void>(
          (std::function<ForeachPolicy(Player&)> *const)&v16,
          (RegionSearchPlay::close::<lambda(Player&)>)play_config_ptr);
        World::foreachPlayer(v8, (std::function<ForeachPolicy(Player&)> *)&v16);
        std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v16);
      }
      std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v1 + 48));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/region_search/region_search_play.cpp",
      "close",
      590);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v16,
           (const char (*)[25])"[REGION_SEARCH] play_id=");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->id_);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v7, (const char (*)[18])" config not found");
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  std::map<unsigned int,std::shared_ptr<RegionSearch>>::~map((std::map<unsigned int,std::shared_ptr<RegionSearch>> *const)(v1 + 80));
  if ( v17 == (char *)v1 )
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

// Line 602: range 0000000015C9A382-0000000015C9A52E
ForeachPolicy __cdecl RegionSearchPlay::close(void)::{lambda(Player &)#1}::operator()(
        const RegionSearchPlay::close::<lambda(Player&)> *const __closure,
        Player *player)
{
  PlayerAbilityGroupComp *AbilityGroupComp; // rcx
  PlayerAbilityGroupComp *v3; // r14
  std::initializer_list<std::string > *i; // rbx
  PlayerAbilityGroupComp *v5; // rax
  std::allocator<std::string > __a; // [rsp+1Fh] [rbp-61h] BYREF
  std::vector<std::string> group_vec; // [rsp+20h] [rbp-60h] BYREF
  std::initializer_list<std::string > __l; // [rsp+40h] [rbp-40h] BYREF
  __int64 v10; // [rsp+60h] [rbp-20h] BYREF

  AbilityGroupComp = Player::getAbilityGroupComp(player);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  if ( PlayerAbilityGroupComp::isHasAbilityGroupInNoneFilter(
         AbilityGroupComp,
         &__closure->__play_config_ptr->ability_group) )
  {
    v3 = Player::getAbilityGroupComp(player);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    std::string::basic_string(&__l, &__closure->__play_config_ptr->ability_group);
    std::allocator<std::string>::allocator(&__a);
    std::vector<std::string>::vector(&group_vec, (std::initializer_list<std::string >)__PAIR128__(1LL, &__l), &__a);
    PlayerAbilityGroupComp::delNoneFilterAbilityGroup(v3, &group_vec);
    std::vector<std::string>::~vector(&group_vec);
    std::allocator<std::string>::~allocator(&__a);
    for ( i = (std::initializer_list<std::string > *)&v10; i != &__l; std::string::~string(i) )
      i -= 2;
    v5 = Player::getAbilityGroupComp(player);
    PlayerAbilityGroupComp::tryRefreshAbilityGroup(v5);
  }
  return 0;
};

// Line 614: range 0000000015C9AA04-0000000015C9AFDC
void __cdecl RegionSearchPlay::close(RegionSearchPlay *const this, RegionSearch *search, bool is_force)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r15
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr v8; // r14
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr v9; // r15
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr v10; // r14
  Scene *v11; // rax
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  unsigned int val; // [rsp+2Ch] [rbp-124h] BYREF
  std::map<unsigned int,RegionSearchRegion>::iterator __for_begin; // [rsp+30h] [rbp-120h] BYREF
  std::map<unsigned int,RegionSearchRegion>::iterator __for_end; // [rsp+38h] [rbp-118h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > __i; // [rsp+40h] [rbp-110h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __position; // [rsp+48h] [rbp-108h] BYREF
  std::map<unsigned int,RegionSearchRegion> *__for_range; // [rsp+50h] [rbp-100h]
  std::pair<unsigned int const,RegionSearchRegion> *__in; // [rsp+58h] [rbp-F8h]
  std::tuple_element<0,std::pair<unsigned int const,RegionSearchRegion> >::type *_; // [rsp+60h] [rbp-F0h]
  std::tuple_element<1,std::pair<unsigned int const,RegionSearchRegion> >::type *region; // [rsp+68h] [rbp-E8h]
  std::shared_ptr<PlayerWorldScene> __r; // [rsp+70h] [rbp-E0h] BYREF
  common::milog::MiLogStream v27; // [rsp+80h] [rbp-D0h] BYREF
  char v28[176]; // [rsp+A0h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 13 scene_ptr:615 64 24 20 remove_group_vec:621";
  *(_QWORD *)(v3 + 16) = RegionSearchPlay::close;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)&__r);
  std::shared_ptr<Scene>::shared_ptr<PlayerWorldScene,void>((std::shared_ptr<Scene> *const)(v3 + 32), &__r);
  std::shared_ptr<PlayerWorldScene>::~shared_ptr(&__r);
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/region_search/region_search_play.cpp",
      "close",
      618);
    v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(&v27, (const char (*)[34])off_259C8120);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v27);
  }
  else
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 64));
    __for_range = &search->region_map;
    __for_begin._M_node = std::map<unsigned int,RegionSearchRegion>::begin(&search->region_map)._M_node;
    __for_end._M_node = std::map<unsigned int,RegionSearchRegion>::end(&search->region_map)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,RegionSearchRegion>>::operator*(&__for_begin);
      _ = std::get<0ul,unsigned int const,RegionSearchRegion>(__in);
      region = std::get<1ul,unsigned int const,RegionSearchRegion>(__in);
      M_node = std::set<unsigned int>::end(&region->oneoff_group_set)._M_node;
      v8 = std::set<unsigned int>::begin(&region->oneoff_group_set)._M_node;
      __i._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 64))._M_current;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
        &__position,
        &__i);
      std::vector<unsigned int>::insert<std::_Rb_tree_const_iterator<unsigned int>,void>(
        (std::vector<unsigned int> *const)(v3 + 64),
        __position,
        (std::_Rb_tree_const_iterator<unsigned int>)v8,
        (std::_Rb_tree_const_iterator<unsigned int>)M_node);
      std::set<unsigned int>::clear(&region->oneoff_group_set);
      v9 = std::set<unsigned int>::end(&region->recycle_group_set)._M_node;
      v10 = std::set<unsigned int>::begin(&region->recycle_group_set)._M_node;
      __i._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 64))._M_current;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
        &__position,
        &__i);
      std::vector<unsigned int>::insert<std::_Rb_tree_const_iterator<unsigned int>,void>(
        (std::vector<unsigned int> *const)(v3 + 64),
        __position,
        (std::_Rb_tree_const_iterator<unsigned int>)v10,
        (std::_Rb_tree_const_iterator<unsigned int>)v9);
      std::set<unsigned int>::clear(&region->recycle_group_set);
      std::_Rb_tree_iterator<std::pair<unsigned int const,RegionSearchRegion>>::operator++(&__for_begin);
    }
    v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp(v11);
    if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
      BlockGroupComp = __asan_report_load8(BlockGroupComp);
    v13 = *(_QWORD *)BlockGroupComp + 104LL;
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      BlockGroupComp = __asan_report_load8(*(_QWORD *)BlockGroupComp + 104LL);
    (*(void (__fastcall **)(unsigned __int64, unsigned __int64, __int64))v13)(BlockGroupComp, v3 + 64, 1LL);
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/region_search/region_search_play.cpp",
      "close",
      631);
    v14 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            &v27,
            (const char (*)[35])"[REGION_SEARCH] unregister Groups:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int>(v14, (const std::vector<unsigned int> *)(v3 + 64));
    v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid=");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
    common::milog::MiLogStream::~MiLogStream(&v27);
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
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
};

// Line 635: range 0000000015C9AFDE-0000000015C9B45C
void __cdecl RegionSearchPlay::refreshAbilityGroup(RegionSearchPlay *const this, Player *player)
{
  RegionSearchExcelConfigMgr *p_region_search_config_mgr; // rcx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  PlayerAbilityGroupComp *v5; // rax
  PlayerAbilityGroupComp *v6; // r12
  common::milog::MiLogStream *j; // rbx
  PlayerAbilityGroupComp *AbilityGroupComp; // rax
  PlayerAbilityGroupComp *v9; // r14
  common::milog::MiLogStream *i; // rbx
  PlayerAbilityGroupComp *v11; // rax
  std::allocator<std::string > __a; // [rsp+16h] [rbp-8Ah] BYREF
  bool need_refresh; // [rsp+17h] [rbp-89h]
  const data::RegionSearchExcelConfig *play_config_ptr; // [rsp+18h] [rbp-88h]
  std::shared_ptr<Config> v15; // [rsp+20h] [rbp-80h] BYREF
  std::vector<std::string> group_vec; // [rsp+30h] [rbp-70h] BYREF
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-50h] BYREF
  _BYTE v18[48]; // [rsp+70h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  p_region_search_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr.region_search_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->id_);
  }
  play_config_ptr = data::ActivityRegionSearchMgrBase::findRegionSearchExcelConfig(
                      p_region_search_config_mgr,
                      this->id_);
  std::shared_ptr<Config>::~shared_ptr(&v15);
  if ( play_config_ptr )
  {
    if ( !(unsigned __int8)std::string::empty(&play_config_ptr->ability_group) )
    {
      need_refresh = 0;
      if ( RegionSearchPlay::checkAbilityGroup(this, player) )
      {
        AbilityGroupComp = Player::getAbilityGroupComp(player);
        if ( PlayerAbilityGroupComp::isHasAbilityGroupInNoneFilter(AbilityGroupComp, &play_config_ptr->ability_group) )
        {
          v9 = Player::getAbilityGroupComp(player);
          std::string::basic_string(&v17, &play_config_ptr->ability_group);
          std::allocator<std::string>::allocator(&__a);
          std::vector<std::string>::vector(
            &group_vec,
            (std::initializer_list<std::string >)__PAIR128__(1LL, &v17),
            &__a);
          PlayerAbilityGroupComp::delNoneFilterAbilityGroup(v9, &group_vec);
          std::vector<std::string>::~vector(&group_vec);
          std::allocator<std::string>::~allocator(&__a);
          for ( i = (common::milog::MiLogStream *)v18; i != &v17; std::string::~string(i) )
            --i;
          need_refresh = 1;
        }
      }
      else
      {
        v5 = Player::getAbilityGroupComp(player);
        if ( !PlayerAbilityGroupComp::isHasAbilityGroupInNoneFilter(v5, &play_config_ptr->ability_group) )
        {
          v6 = Player::getAbilityGroupComp(player);
          std::string::basic_string(&v17, &play_config_ptr->ability_group);
          std::allocator<std::string>::allocator(&__a);
          std::vector<std::string>::vector(
            &group_vec,
            (std::initializer_list<std::string >)__PAIR128__(1LL, &v17),
            &__a);
          PlayerAbilityGroupComp::addNoneFilterAbilityGroup(v6, &group_vec, 0);
          std::vector<std::string>::~vector(&group_vec);
          std::allocator<std::string>::~allocator(&__a);
          for ( j = (common::milog::MiLogStream *)v18; j != &v17; std::string::~string(j) )
            --j;
          need_refresh = 1;
        }
      }
      if ( need_refresh )
      {
        v11 = Player::getAbilityGroupComp(player);
        PlayerAbilityGroupComp::tryRefreshAbilityGroup(v11);
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/region_search/region_search_play.cpp",
      "refreshAbilityGroup",
      639);
    v3 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v17,
           (const char (*)[25])"[REGION_SEARCH] play_id=");
    v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->id_);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v4, (const char (*)[18])" config not found");
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
};

// Line 672: range 0000000015C9B45E-0000000015C9C060
int32_t __cdecl RegionSearchPlay::checkAbilityGroup(RegionSearchPlay *const this, Player *player)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerWidgetComp *WidgetComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t WidgetNewConfig; // eax
  int32_t v8; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  unsigned __int64 Position; // rax
  std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  proto::RegionSearchState *p_state; // rax
  const RegionSearchExcelConfigMgr *v16; // rcx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  __gnu_cxx::__alloc_traits<std::allocator<float>,float>::value_type *v23; // rax
  float *v24; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<float>,float>::value_type *v25; // rax
  float *v26; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<float>,float>::value_type *v27; // rax
  unsigned int *v28; // rdx
  __m128i v29; // xmm0
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  int32_t result; // eax
  float y_; // [rsp+8h] [rbp-258h]
  float z_; // [rsp+Ch] [rbp-254h]
  std::map<unsigned int,std::shared_ptr<RegionSearch>>::iterator __for_begin; // [rsp+28h] [rbp-238h] BYREF
  std::map<unsigned int,std::shared_ptr<RegionSearch>>::iterator __for_end; // [rsp+30h] [rbp-230h] BYREF
  std::map<unsigned int,RegionSearchRegion>::iterator __for_begin_0; // [rsp+38h] [rbp-228h] BYREF
  std::map<unsigned int,RegionSearchRegion>::iterator __for_end_0; // [rsp+40h] [rbp-220h] BYREF
  const RegionSearchExcelConfigMgr *region_search_mgr; // [rsp+48h] [rbp-218h]
  std::map<unsigned int,std::shared_ptr<RegionSearch>> *__for_range; // [rsp+50h] [rbp-210h]
  std::pair<unsigned int const,std::shared_ptr<RegionSearch> > *__in; // [rsp+58h] [rbp-208h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<RegionSearch> > >::type *_; // [rsp+60h] [rbp-200h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<RegionSearch> > >::type *search_ptr; // [rsp+68h] [rbp-1F8h]
  std::map<unsigned int,RegionSearchRegion> *__for_range_0; // [rsp+70h] [rbp-1F0h]
  std::pair<unsigned int const,RegionSearchRegion> *v48; // [rsp+78h] [rbp-1E8h]
  std::tuple_element<0,std::pair<unsigned int const,RegionSearchRegion> >::type *region_id; // [rsp+80h] [rbp-1E0h]
  std::tuple_element<1,std::pair<unsigned int const,RegionSearchRegion> >::type *region; // [rsp+88h] [rbp-1D8h]
  const data::RegionSearchRegionExcelConfig *region_config_ptr; // [rsp+90h] [rbp-1D0h]
  const std::vector<float> *region_center; // [rsp+98h] [rbp-1C8h]
  std::shared_ptr<Config> v53; // [rsp+A0h] [rbp-1C0h] BYREF
  common::milog::MiLogStream v54; // [rsp+B0h] [rbp-1B0h] BYREF
  common::milog::MiLogStream v55; // [rsp+D0h] [rbp-190h] BYREF
  common::milog::MiLogStream v56; // [rsp+F0h] [rbp-170h] BYREF
  char v57[336]; // [rsp+110h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 4 12 distance:721 48 12 7 pos:692 80 12 10 center:720 112 16 27 water_widget_config_ptr:675"
                        " 144 16 13 scene_ptr:681 176 16 14 avatar_ptr:686 208 48 14 search_map:695";
  *(_QWORD *)(v2 + 16) = RegionSearchPlay::checkAbilityGroup;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = 0x4000000;
  v4[536862722] = 62194;
  v4[536862722] = 0x4000000;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862726] = 62194;
  v4[536862728] = -202116109;
  WidgetComp = Player::getWidgetComp(player);
  PlayerWidgetComp::getQuickUseMaterialId(WidgetComp);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v53);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v53);
  WidgetNewConfig = (unsigned int)JsonConfigMgr::getWidgetNewConfig(&v6->design_config.json_config_mgr);
  WidgetJsonNewConfig::findWidgetConfigById<data::ConfigWidgetToyWaterSprite>(
    (const WidgetJsonNewConfig *const)(v2 + 112),
    WidgetNewConfig);
  std::shared_ptr<Config>::~shared_ptr(&v53);
  if ( std::operator==<data::ConfigWidgetToyWaterSprite const>(
         0LL,
         (const std::shared_ptr<const data::ConfigWidgetToyWaterSprite> *)(v2 + 112)) )
  {
    v8 = -1;
  }
  else
  {
    Player::getSceneComp(player);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 144));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 144))
      || (v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144)),
          Scene::getSceneType(v9) != SCENE_WORLD) )
    {
      v8 = -1;
    }
    else
    {
      Player::getAvatarComp(player);
      PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v2 + 176));
      if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 176)) )
      {
        common::milog::MiLogStream::create(
          &v56,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/region_search/region_search_play.cpp",
          "checkAbilityGroup",
          689);
        v11 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v56,
                (const char (*)[44])"[REGION_SEARCH] get cur avatar failed, uid=");
        *(_DWORD *)(v2 + 32) = Player::getUid(player);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v56);
        v8 = -1;
      }
      else
      {
        v12 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
        Position = (unsigned __int64)Entity::getPosition((const Entity *const)v12);
        if ( (char)(Position & 7) >= *(_BYTE *)((Position >> 3) + 0x7FFF8000)
          && *(_BYTE *)((Position >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((Position + 11) & 7) >= *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) )
        {
          Position = __asan_report_load_n(Position, 12LL);
        }
        *(_QWORD *)(v2 + 48) = *(_QWORD *)Position;
        *(_DWORD *)(v2 + 56) = *(_DWORD *)(Position + 8);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v53);
        region_search_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v53)->design_config.txt_config_mgr.region_search_config_mgr;
        std::shared_ptr<Config>::~shared_ptr(&v53);
        std::map<unsigned int,std::shared_ptr<RegionSearch>>::map(
          (std::map<unsigned int,std::shared_ptr<RegionSearch>> *const)(v2 + 208),
          &this->search_map_);
        __for_range = (std::map<unsigned int,std::shared_ptr<RegionSearch>> *)(v2 + 208);
        __for_begin._M_node = std::map<unsigned int,std::shared_ptr<RegionSearch>>::begin((std::map<unsigned int,std::shared_ptr<RegionSearch>> *const)(v2 + 208))._M_node;
        __for_end._M_node = std::map<unsigned int,std::shared_ptr<RegionSearch>>::end((std::map<unsigned int,std::shared_ptr<RegionSearch>> *const)(v2 + 208))._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearch>>>::operator*(&__for_begin);
          _ = std::get<0ul,unsigned int const,std::shared_ptr<RegionSearch>>(__in);
          search_ptr = std::get<1ul,unsigned int const,std::shared_ptr<RegionSearch>>(__in);
          if ( !std::operator==<RegionSearch>(0LL, search_ptr) )
          {
            v14 = std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)search_ptr);
            p_state = &v14->state;
            if ( *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(p_state);
            }
            if ( v14->state == REGION_SEARCH_STARTED )
            {
              __for_range_0 = &std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)search_ptr)->region_map;
              __for_begin_0._M_node = std::map<unsigned int,RegionSearchRegion>::begin(__for_range_0)._M_node;
              __for_end_0._M_node = std::map<unsigned int,RegionSearchRegion>::end(__for_range_0)._M_node;
              while ( std::operator!=(&__for_begin_0, &__for_end_0) )
              {
                v48 = std::_Rb_tree_iterator<std::pair<unsigned int const,RegionSearchRegion>>::operator*(&__for_begin_0);
                region_id = std::get<0ul,unsigned int const,RegionSearchRegion>(v48);
                region = std::get<1ul,unsigned int const,RegionSearchRegion>(v48);
                v16 = region_search_mgr;
                if ( *(_BYTE *)(((unsigned __int64)region_id >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)region_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)region_id >> 3)
                                                                              + 0x7FFF8000) )
                {
                  __asan_report_load4(region_id);
                }
                region_config_ptr = data::ActivityRegionSearchMgrBase::findRegionSearchRegionExcelConfig(
                                      v16,
                                      *region_id);
                if ( !region_config_ptr )
                {
                  common::milog::MiLogStream::create(
                    &v54,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/region_search/region_search_play.cpp",
                    "checkAbilityGroup",
                    711);
                  v17 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                          &v54,
                          (const char (*)[27])"[REGION_SEARCH] region_id=");
                  v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, region_id);
                  v19 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                          v18,
                          (const char (*)[24])" config not found, uid=");
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->player_);
                  *(_DWORD *)(v2 + 32) = Player::getUid(this->player_);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v19,
                    (const unsigned int *)(v2 + 32));
                  common::milog::MiLogStream::~MiLogStream(&v54);
                  v8 = -1;
                  goto LABEL_47;
                }
                if ( std::vector<float>::size(&region_config_ptr->region_center) <= 2 )
                {
                  common::milog::MiLogStream::create(
                    &v55,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/region_search/region_search_play.cpp",
                    "checkAbilityGroup",
                    716);
                  v20 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                          &v55,
                          (const char (*)[27])"[REGION_SEARCH] region_id=");
                  v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, region_id);
                  v22 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                          v21,
                          (const char (*)[24])" center not found, uid=");
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->player_);
                  *(_DWORD *)(v2 + 32) = Player::getUid(this->player_);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v22,
                    (const unsigned int *)(v2 + 32));
                  common::milog::MiLogStream::~MiLogStream(&v55);
                  v8 = -1;
                  goto LABEL_47;
                }
                region_center = &region_config_ptr->region_center;
                v23 = (__gnu_cxx::__alloc_traits<std::allocator<float>,float>::value_type *)std::vector<float>::operator[](
                                                                                              &region_config_ptr->region_center,
                                                                                              2uLL);
                v24 = v23;
                if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v23);
                }
                z_ = *v24;
                v25 = (__gnu_cxx::__alloc_traits<std::allocator<float>,float>::value_type *)std::vector<float>::operator[](
                                                                                              region_center,
                                                                                              1uLL);
                v26 = v25;
                if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v25);
                }
                y_ = *v26;
                v27 = (__gnu_cxx::__alloc_traits<std::allocator<float>,float>::value_type *)std::vector<float>::operator[](
                                                                                              region_center,
                                                                                              0LL);
                v28 = (unsigned int *)v27;
                if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v27);
                }
                v29 = _mm_cvtsi32_si128(*v28);
                Vector3::Vector3((Vector3 *const)(v2 + 80), *(float *)v29.m128i_i32, y_, z_);
                *(float *)v29.m128i_i32 = getPlaneDistance((const Vector3 *)(v2 + 48), (const Vector3 *)(v2 + 80));
                *(_DWORD *)(v2 + 32) = _mm_cvtsi128_si32(v29);
                common::milog::MiLogStream::create(
                  &v56,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/region_search/region_search_play.cpp",
                  "checkAbilityGroup",
                  723);
                v30 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                        &v56,
                        (const char (*)[27])"[REGION_SEARCH] region_id:");
                v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, region_id);
                v32 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        v31,
                        (const char (*)[11])" distance:");
                v33 = common::milog::MiLogStream::operator<<<float,(float *)0>(v32, (const float *)(v2 + 32));
                v34 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v33, (const char (*)[9])" radius:");
                common::milog::MiLogStream::operator<<<float,(float *)0>(v34, &region_config_ptr->region_radius);
                common::milog::MiLogStream::~MiLogStream(&v56);
                if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->region_radius >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&region_config_ptr->region_radius >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&region_config_ptr->region_radius);
                }
                if ( region_config_ptr->region_radius >= *(float *)(v2 + 32) )
                {
                  v8 = 0;
                  goto LABEL_47;
                }
                std::_Rb_tree_iterator<std::pair<unsigned int const,RegionSearchRegion>>::operator++(&__for_begin_0);
              }
            }
          }
          std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearch>>>::operator++(&__for_begin);
        }
        v8 = -1;
LABEL_47:
        std::map<unsigned int,std::shared_ptr<RegionSearch>>::~map((std::map<unsigned int,std::shared_ptr<RegionSearch>> *const)(v2 + 208));
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 176));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 144));
  }
  std::shared_ptr<data::ConfigWidgetToyWaterSprite const>::~shared_ptr((std::shared_ptr<const data::ConfigWidgetToyWaterSprite> *const)(v2 + 112));
  result = v8;
  if ( v57 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
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

// Line 735: range 0000000015C9C062-0000000015C9C1E8
bool __cdecl RegionSearchPlay::isFinish(const RegionSearchPlay *const this)
{
  RegionSearchExcelConfigMgr *p_region_search_config_mgr; // rcx
  unsigned int *v3; // rax
  uint32_t *v4; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-40h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-38h] BYREF
  const std::set<unsigned int> *search_set_ptr; // [rsp+30h] [rbp-30h]
  const std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-28h]
  std::shared_ptr<Config> v9[2]; // [rsp+40h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v9);
  p_region_search_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v9)->design_config.txt_config_mgr.region_search_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->id_);
  }
  search_set_ptr = RegionSearchExcelConfigMgr::findSearchSetByPlay(p_region_search_config_mgr, this->id_);
  std::shared_ptr<Config>::~shared_ptr(v9);
  if ( !search_set_ptr )
    return 0;
  __for_range = search_set_ptr;
  __for_begin._M_node = std::set<unsigned int>::begin(search_set_ptr)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(search_set_ptr)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v3 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    if ( !RegionSearchPlay::isSearchFinish(this, *v4) )
      return 0;
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  return 1;
};

// Line 752: range 0000000015C9C1EA-0000000015C9C519
_BOOL8 __fastcall RegionSearchPlay::onEnterRegion(RegionSearchPlay *const this, uint32_t region_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdx
  std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  char *v8; // rsi
  std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  __int64 v10; // rax
  char v11; // dl
  _BOOL8 v12; // rdx
  _BOOL8 result; // rax
  bool ret; // [rsp+1Fh] [rbp-E1h]
  std::map<unsigned int,std::shared_ptr<RegionSearch>>::iterator __for_begin; // [rsp+20h] [rbp-E0h] BYREF
  std::map<unsigned int,std::shared_ptr<RegionSearch>>::iterator __for_end; // [rsp+28h] [rbp-D8h] BYREF
  std::map<unsigned int,std::shared_ptr<RegionSearch>> *__for_range; // [rsp+30h] [rbp-D0h]
  std::pair<unsigned int const,std::shared_ptr<RegionSearch> > *__in; // [rsp+38h] [rbp-C8h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<RegionSearch> > >::type *_; // [rsp+40h] [rbp-C0h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<RegionSearch> > >::type *search_ptr; // [rsp+48h] [rbp-B8h]
  char v21[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 4 13 region_id:751 48 48 14 search_map:755";
  *(_QWORD *)(v2 + 16) = RegionSearchPlay::onEnterRegion;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 32) = region_id;
  ret = 0;
  v5 = ((_BYTE)this + 20) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_entered_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_entered_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_entered_, v5, v6);
  this->is_entered_ = 1;
  std::map<unsigned int,std::shared_ptr<RegionSearch>>::map(
    (std::map<unsigned int,std::shared_ptr<RegionSearch>> *const)(v2 + 48),
    &this->search_map_);
  __for_range = (std::map<unsigned int,std::shared_ptr<RegionSearch>> *)(v2 + 48);
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<RegionSearch>>::begin((std::map<unsigned int,std::shared_ptr<RegionSearch>> *const)(v2 + 48))._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<RegionSearch>>::end((std::map<unsigned int,std::shared_ptr<RegionSearch>> *const)(v2 + 48))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearch>>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<RegionSearch>>(__in);
    search_ptr = std::get<1ul,unsigned int const,std::shared_ptr<RegionSearch>>(__in);
    if ( !std::operator==<RegionSearch>(0LL, search_ptr) )
    {
      v7 = std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)search_ptr);
      v8 = (char *)(v2 + 32);
      if ( common::tools::MiscUtils::isContains<std::map<unsigned int,RegionSearchRegion>,unsigned int>(
             &v7->region_map,
             (const unsigned int *)(v2 + 32)) )
      {
        v9 = std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)search_ptr);
        if ( *(char *)(((unsigned __int64)&v9->is_entered >> 3) + 0x7FFF8000) < 0 )
          v9 = (std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v9->is_entered);
        if ( !v9->is_entered )
        {
          v10 = (__int64)std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)search_ptr);
          v11 = *(_BYTE *)(((unsigned __int64)(v10 + 64) >> 3) + 0x7FFF8000);
          LOBYTE(v8) = v11 != 0;
          v12 = v11 < 0;
          if ( v12 )
            v10 = __asan_report_store1(v10 + 64, v8, v12);
          *(_BYTE *)(v10 + 64) = 1;
          ret = 1;
        }
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearch>>>::operator++(&__for_begin);
  }
  std::map<unsigned int,std::shared_ptr<RegionSearch>>::~map((std::map<unsigned int,std::shared_ptr<RegionSearch>> *const)(v2 + 48));
  result = ret;
  if ( v21 == (char *)v2 )
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

// Line 776: range 0000000015C9C51A-0000000015C9CC36
__int64 __fastcall RegionSearchPlay::takeSearchReward(RegionSearchPlay *const this, uint32_t search_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int v5; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearch> > >::pointer v6; // rax
  std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  proto::RegionSearchState *p_state; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  __int64 v10; // rsi
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  char v15; // cl
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  PlayerItemComp *ItemComp; // rcx
  PlayerItemComp *p_reward_id; // rdi
  __int64 reward_id; // rsi
  std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rdx
  char v22; // cl
  __int64 result; // rax
  unsigned int val; // [rsp+14h] [rbp-13Ch] BYREF
  data::ItemLimitType limit_type; // [rsp+18h] [rbp-138h]
  int32_t ret; // [rsp+1Ch] [rbp-134h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearch> > >::_Self __y; // [rsp+20h] [rbp-130h] BYREF
  const data::RegionSearchCondExcelConfig *search_config_ptr; // [rsp+28h] [rbp-128h]
  std::shared_ptr<Config> v29; // [rsp+30h] [rbp-120h] BYREF
  common::milog::MiLogStream v30; // [rsp+40h] [rbp-110h] BYREF
  char v31[240]; // [rsp+60h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 13 search_id:775 64 8 8 iter:777 96 16 14 search_ptr:782 128 24 10 reason:805";
  *(_QWORD *)(v2 + 16) = RegionSearchPlay::takeSearchReward;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = search_id;
  *(std::map<unsigned int,std::shared_ptr<RegionSearch>>::iterator *)(v2 + 64) = std::map<unsigned int,std::shared_ptr<RegionSearch>>::find(
                                                                                   &this->search_map_,
                                                                                   (const std::map<unsigned int,std::shared_ptr<RegionSearch>>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<RegionSearch>>::end(&this->search_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearch> > >::_Self *)(v2 + 64),
         &__y) )
  {
    v5 = 9122;
    goto LABEL_38;
  }
  v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearch>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearch> > > *const)(v2 + 64));
  std::shared_ptr<RegionSearch>::shared_ptr((std::shared_ptr<RegionSearch> *const)(v2 + 96), &v6->second);
  if ( std::operator==<RegionSearch>(0LL, (const std::shared_ptr<RegionSearch> *)(v2 + 96)) )
  {
    v5 = 9122;
  }
  else
  {
    v7 = std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    p_state = &v7->state;
    if ( *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_state);
    }
    if ( v7->state == REGION_SEARCH_WAIT_REWARD )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v29);
      v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
      v10 = *(unsigned int *)(v2 + 48);
      search_config_ptr = data::ActivityRegionSearchMgrBase::findRegionSearchCondExcelConfig(
                            &v9->design_config.txt_config_mgr.region_search_config_mgr,
                            v10);
      std::shared_ptr<Config>::~shared_ptr(&v29);
      if ( search_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&search_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&search_config_ptr->reward_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&search_config_ptr->reward_id);
        }
        if ( search_config_ptr->reward_id )
        {
          limit_type = RegionSearchPlay::getRewardLimitType(this);
          ActionReason::ActionReason((ActionReason *const)(v2 + 128), ACTION_REASON_REGION_SEARCH_REWARD, limit_type);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          ItemComp = Player::getItemComp(this->player_);
          if ( *(_BYTE *)(((unsigned __int64)&search_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&search_config_ptr->reward_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&search_config_ptr->reward_id);
          }
          ret = PlayerItemComp::checkGrantReward(
                  ItemComp,
                  search_config_ptr->reward_id,
                  (const ActionReason *)(v2 + 128));
          if ( ret )
          {
            v5 = ret;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            p_reward_id = Player::getItemComp(this->player_);
            if ( *(_BYTE *)(((unsigned __int64)&search_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&search_config_ptr->reward_id >> 3) + 0x7FFF8000) <= 3 )
            {
              p_reward_id = (PlayerItemComp *)&search_config_ptr->reward_id;
              __asan_report_load4(&search_config_ptr->reward_id);
            }
            reward_id = search_config_ptr->reward_id;
            PlayerItemComp::grantReward(p_reward_id, reward_id, (const ActionReason *)(v2 + 128), 0LL);
            v21 = std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v22 = *(_BYTE *)(((unsigned __int64)&v21->state >> 3) + 0x7FFF8000);
            if ( v22 != 0 && (char)((((_BYTE)v21 + 4) & 7) + 3) >= v22 )
            {
              LOBYTE(reward_id) = v22 != 0;
              __asan_report_store4(&v21->state, reward_id, (_BYTE)v21);
            }
            v21->state = REGION_SEARCH_FINISHED;
            v5 = 0;
          }
          goto LABEL_37;
        }
        v14 = std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearch,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        v15 = *(_BYTE *)(((unsigned __int64)&v14->state >> 3) + 0x7FFF8000);
        if ( v15 != 0 && (char)((((_BYTE)v14 + 4) & 7) + 3) >= v15 )
        {
          LOBYTE(v10) = v15 != 0;
          __asan_report_store4(&v14->state, v10, (_BYTE)v14);
        }
        v14->state = REGION_SEARCH_FINISHED;
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/region_search/region_search_play.cpp",
          "takeSearchReward",
          801);
        v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v30, (const char (*)[11])"search_id=");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v2 + 48));
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v17, (const char (*)[16])off_259C85E0);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/region_search/region_search_play.cpp",
          "takeSearchReward",
          795);
        v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v30, (const char (*)[11])"search_id=");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v2 + 48));
        v13 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                v12,
                (const char (*)[23])" config not found uid=");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
      }
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v30);
      v5 = -1;
    }
    else
    {
      v5 = 9123;
    }
  }
LABEL_37:
  std::shared_ptr<RegionSearch>::~shared_ptr((std::shared_ptr<RegionSearch> *const)(v2 + 96));
LABEL_38:
  result = v5;
  if ( v31 == (char *)v2 )
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

// Line 817: range 0000000015C9CC38-0000000015C9CDA8
data::ItemLimitType __cdecl RegionSearchPlay::getRewardLimitType(RegionSearchPlay *const this)
{
  data::ItemLimitType RewardItemLimitType; // ebx
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-24h]
  std::shared_ptr<Config> v6[2]; // [rsp+20h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->source_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->source_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->source_);
  }
  if ( this->source_.type != ACTIVITY )
    return 1405;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v6);
  p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v6)->design_config.txt_config_mgr.new_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->source_.param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->source_.param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->source_.param);
  }
  activity_type = NewActivityExcelConfigMgr::getActivityTypeByScheduleId(p_new_activity_config_mgr, this->source_.param);
  std::shared_ptr<Config>::~shared_ptr(v6);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v6);
  v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v6);
  RewardItemLimitType = NewActivityExcelConfigMgr::getRewardItemLimitType(
                          &v3->design_config.txt_config_mgr.new_activity_config_mgr,
                          activity_type);
  std::shared_ptr<Config>::~shared_ptr(v6);
  return RewardItemLimitType;
};
