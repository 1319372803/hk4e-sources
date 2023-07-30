// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/group_link/player_group_link_comp.cpp

// Line 28: range 0000000016640ECE-0000000016641023
int32_t __cdecl GroupLink::fromBin(GroupLink *const this, const proto::PlayerGroupLinkBin *bin)
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
  const proto::PlayerGroupLinkBin *bina; // [rsp+0h] [rbp-10h]

  bina = bin;
  v2 = proto::PlayerGroupLinkBin::link_id(bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, bin, v4);
  this->link_id = v2;
  v5 = proto::PlayerGroupLinkBin::cur_bundle_id(bina);
  v6 = *(_BYTE *)(((unsigned __int64)&this->cur_bundle_id >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->cur_bundle_id, bin, v7);
  this->cur_bundle_id = v5;
  v8 = proto::PlayerGroupLinkBin::activity_id(bina);
  v9 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->activity_id, bin, v10);
  this->activity_id = v8;
  v11 = proto::PlayerGroupLinkBin::schedule_id(bina);
  v12 = *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store4(&this->schedule_id, bin, v13);
  this->schedule_id = v11;
  return 0;
};

// Line 37: range 0000000016641024-0000000016641175
int32_t __cdecl GroupLink::toBin(const GroupLink *const this, proto::PlayerGroupLinkBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::PlayerGroupLinkBin::set_link_id(bin, this->link_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_bundle_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_bundle_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_bundle_id);
  }
  proto::PlayerGroupLinkBin::set_cur_bundle_id(bin, this->cur_bundle_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->activity_id);
  }
  proto::PlayerGroupLinkBin::set_activity_id(bin, this->activity_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->schedule_id);
  }
  proto::PlayerGroupLinkBin::set_schedule_id(bin, this->schedule_id);
  return 0;
};

// Line 46: range 0000000016641176-0000000016641316
int32_t __cdecl GroupLinkBundle::fromBin(GroupLinkBundle *const this, const proto::PlayerGroupBundleBin *bin)
{
  uint32_t v2; // ecx
  char v3; // dl
  __int64 v4; // rdx
  uint32_t v5; // ecx
  char v6; // dl
  __int64 v7; // rdx
  bool is_activated; // cl
  char v9; // dl
  __int64 v10; // rdx
  uint32_t v11; // ecx
  char v12; // dl
  __int64 v13; // rdx
  bool is_show_mark; // cl
  char v15; // dl
  __int64 v16; // rdx
  const proto::PlayerGroupBundleBin *bina; // [rsp+0h] [rbp-10h]

  bina = bin;
  v2 = proto::PlayerGroupBundleBin::bundle_id(bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, bin, v4);
  this->bundle_id = v2;
  v5 = proto::PlayerGroupBundleBin::activity_id(bina);
  v6 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->activity_id, bin, v7);
  this->activity_id = v5;
  is_activated = proto::PlayerGroupBundleBin::is_activated(bina);
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_activated >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this + 12) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_activated, bin, v10);
  this->is_activated = is_activated;
  v11 = proto::PlayerGroupBundleBin::schedule_id(bina);
  v12 = *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store4(&this->schedule_id, bin, v13);
  this->schedule_id = v11;
  is_show_mark = proto::PlayerGroupBundleBin::is_show_mark(bina);
  v15 = *(_BYTE *)(((unsigned __int64)&this->is_show_mark >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v15 != 0;
  v16 = (v15 != 0) & (unsigned __int8)((((unsigned __int8)this + 13) & 7) >= v15);
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->is_show_mark, bin, v16);
  this->is_show_mark = is_show_mark;
  return 0;
};

// Line 56: range 0000000016641318-00000000166414BB
int32_t __cdecl GroupLinkBundle::toBin(const GroupLinkBundle *const this, proto::PlayerGroupBundleBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::PlayerGroupBundleBin::set_bundle_id(bin, this->bundle_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->activity_id);
  }
  proto::PlayerGroupBundleBin::set_activity_id(bin, this->activity_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_activated >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_activated >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_activated);
  }
  proto::PlayerGroupBundleBin::set_is_activated(bin, this->is_activated);
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->schedule_id);
  }
  proto::PlayerGroupBundleBin::set_schedule_id(bin, this->schedule_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_show_mark >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 13) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_show_mark >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_show_mark);
  }
  proto::PlayerGroupBundleBin::set_is_show_mark(bin, this->is_show_mark);
  return 0;
};

// Line 66: range 00000000166414BC-0000000016641753
int32_t __cdecl PlayerGroupLinkComp::fromBin(
        PlayerGroupLinkComp *const this,
        const proto::PlayerDataBin *player_data_bin)
{
  GroupLink *v2; // rax
  GroupLinkBundle *v3; // rax
  std::unordered_map<unsigned int,GroupLink>::key_type *p_k; // rsi
  __int64 v5; // rdx
  char v6; // al
  const google::protobuf::RepeatedField<unsigned int> *v7; // rax
  std::unordered_map<unsigned int,GroupLink>::key_type __k; // [rsp+1Ch] [rbp-64h] BYREF
  google::protobuf::RepeatedPtrField<proto::PlayerGroupLinkBin>::const_iterator __for_begin; // [rsp+20h] [rbp-60h] BYREF
  google::protobuf::RepeatedPtrField<proto::PlayerGroupLinkBin>::const_iterator __for_end; // [rsp+28h] [rbp-58h] BYREF
  const proto::PlayerGroupLinkCompBin *group_link_comp_bin; // [rsp+30h] [rbp-50h]
  const google::protobuf::RepeatedPtrField<proto::PlayerGroupLinkBin> *__for_range; // [rsp+38h] [rbp-48h]
  const google::protobuf::RepeatedPtrField<proto::PlayerGroupBundleBin> *__for_range_0; // [rsp+40h] [rbp-40h]
  const google::protobuf::RepeatedPtrField<proto::PlayerGroupBundleFinishBin> *__for_range_1; // [rsp+48h] [rbp-38h]
  const proto::PlayerGroupBundleFinishBin *finish_bundle_bin; // [rsp+50h] [rbp-30h]
  std::pair<unsigned int,std::unordered_set<unsigned int> > *finish_data; // [rsp+58h] [rbp-28h]
  const proto::PlayerGroupBundleBin *bundle_bin; // [rsp+60h] [rbp-20h]
  const proto::PlayerGroupLinkBin *link_bin; // [rsp+68h] [rbp-18h]

  std::unordered_map<unsigned int,GroupLink>::clear(&this->links_map_);
  std::unordered_map<unsigned int,GroupLinkBundle>::clear(&this->group_bundle_map_);
  std::unordered_map<unsigned int,std::pair<unsigned int,std::unordered_set<unsigned int>>>::clear(&this->finished_group_bundle_map_);
  group_link_comp_bin = proto::PlayerDataBin::group_link_bin(player_data_bin);
  __for_range = proto::PlayerGroupLinkCompBin::link_bin_list(group_link_comp_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::PlayerGroupLinkBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::PlayerGroupLinkBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::PlayerGroupLinkBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    link_bin = google::protobuf::internal::RepeatedPtrIterator<proto::PlayerGroupLinkBin const>::operator*(&__for_begin);
    __k = proto::PlayerGroupLinkBin::link_id(link_bin);
    v2 = std::unordered_map<unsigned int,GroupLink>::operator[](&this->links_map_, &__k);
    GroupLink::fromBin(v2, link_bin);
    google::protobuf::internal::RepeatedPtrIterator<proto::PlayerGroupLinkBin const>::operator++(&__for_begin);
  }
  __for_range_0 = proto::PlayerGroupLinkCompBin::bundle_bin_list(group_link_comp_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::PlayerGroupBundleBin>::begin(__for_range_0).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::PlayerGroupBundleBin>::end(__for_range_0).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::PlayerGroupBundleBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::PlayerGroupBundleBin> *const)&__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::PlayerGroupBundleBin>::iterator *)&__for_end) )
  {
    bundle_bin = google::protobuf::internal::RepeatedPtrIterator<proto::PlayerGroupBundleBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::PlayerGroupBundleBin> *const)&__for_begin);
    __k = proto::PlayerGroupBundleBin::bundle_id(bundle_bin);
    v3 = std::unordered_map<unsigned int,GroupLinkBundle>::operator[](&this->group_bundle_map_, &__k);
    GroupLinkBundle::fromBin(v3, bundle_bin);
    google::protobuf::internal::RepeatedPtrIterator<proto::PlayerGroupBundleBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::PlayerGroupBundleBin> *const)&__for_begin);
  }
  __for_range_1 = proto::PlayerGroupLinkCompBin::finish_bundle_bin_list(group_link_comp_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::PlayerGroupBundleFinishBin>::begin(__for_range_1).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::PlayerGroupBundleFinishBin>::end(__for_range_1).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::PlayerGroupBundleFinishBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::PlayerGroupBundleFinishBin> *const)&__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::PlayerGroupBundleFinishBin>::iterator *)&__for_end) )
  {
    finish_bundle_bin = google::protobuf::internal::RepeatedPtrIterator<proto::PlayerGroupBundleFinishBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::PlayerGroupBundleFinishBin> *const)&__for_begin);
    __k = proto::PlayerGroupBundleFinishBin::activity_id(finish_bundle_bin);
    p_k = &__k;
    finish_data = std::unordered_map<unsigned int,std::pair<unsigned int,std::unordered_set<unsigned int>>>::operator[](
                    &this->finished_group_bundle_map_,
                    &__k);
    v5 = proto::PlayerGroupBundleFinishBin::schedule_id(finish_bundle_bin);
    v6 = *(_BYTE *)(((unsigned __int64)finish_data >> 3) + 0x7FFF8000);
    if ( v6 != 0 && v6 <= 3 )
    {
      LOBYTE(p_k) = v6 != 0;
      __asan_report_store4(finish_data, p_k, v5);
    }
    finish_data->first = v5;
    v7 = proto::PlayerGroupBundleFinishBin::bundle_id_list(finish_bundle_bin);
    common::tools::MiscUtils::setFromRepeated<std::unordered_set<unsigned int>,unsigned int>(&finish_data->second, v7);
    google::protobuf::internal::RepeatedPtrIterator<proto::PlayerGroupBundleFinishBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::PlayerGroupBundleFinishBin> *const)&__for_begin);
  }
  return 0;
};

// Line 89: range 0000000016641754-0000000016641A17
int32_t __cdecl PlayerGroupLinkComp::toBin(PlayerGroupLinkComp *const this, proto::PlayerDataBin *player_data_bin)
{
  proto::PlayerGroupLinkBin *v2; // rax
  proto::PlayerGroupBundleBin *v3; // rax
  google::protobuf::RepeatedField<unsigned int> *v4; // rax
  std::unordered_map<unsigned int,GroupLink>::iterator __for_begin; // [rsp+10h] [rbp-80h] BYREF
  std::unordered_map<unsigned int,GroupLink>::iterator __for_end; // [rsp+18h] [rbp-78h] BYREF
  proto::PlayerGroupLinkCompBin *group_link_bin; // [rsp+20h] [rbp-70h]
  std::unordered_map<unsigned int,GroupLink> *__for_range; // [rsp+28h] [rbp-68h]
  std::unordered_map<unsigned int,GroupLinkBundle> *__for_range_0; // [rsp+30h] [rbp-60h]
  std::unordered_map<unsigned int,std::pair<unsigned int,std::unordered_set<unsigned int> >> *__for_range_1; // [rsp+38h] [rbp-58h]
  const std::pair<unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int> > > *v12; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int> > > >::type *activity_id; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int> > > >::type *finish_data; // [rsp+50h] [rbp-40h]
  proto::PlayerGroupBundleFinishBin *finish_bundle_bin; // [rsp+58h] [rbp-38h]
  const std::pair<unsigned int const,GroupLinkBundle> *v16; // [rsp+60h] [rbp-30h]
  std::tuple_element<0,const std::pair<unsigned int const,GroupLinkBundle> >::type *bundle_id; // [rsp+68h] [rbp-28h]
  std::tuple_element<1,const std::pair<unsigned int const,GroupLinkBundle> >::type *bundle; // [rsp+70h] [rbp-20h]
  const std::pair<unsigned int const,GroupLink> *v19; // [rsp+78h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,GroupLink> >::type *link_id; // [rsp+80h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,GroupLink> >::type *link_info; // [rsp+88h] [rbp-8h]

  group_link_bin = proto::PlayerDataBin::mutable_group_link_bin(player_data_bin);
  __for_range = &this->links_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,GroupLink>::begin(&this->links_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,GroupLink>::end(&this->links_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,GroupLink>,false>(&__for_begin, &__for_end) )
  {
    v19 = std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLink>,false,false>::operator*(&__for_begin);
    link_id = std::get<0ul,unsigned int const,GroupLink>(v19);
    link_info = (std::tuple_element<1,const std::pair<unsigned int const,GroupLink> >::type *)std::get<1ul,unsigned int const,GroupLink>(v19);
    v2 = proto::PlayerGroupLinkCompBin::add_link_bin_list(group_link_bin);
    GroupLink::toBin(link_info, v2);
    std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLink>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = &this->group_bundle_map_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLink>,false>::__node_type *)std::unordered_map<unsigned int,GroupLinkBundle>::begin(&this->group_bundle_map_)._M_cur;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLink>,false>::__node_type *)std::unordered_map<unsigned int,GroupLinkBundle>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,GroupLinkBundle>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLinkBundle>,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLinkBundle>,false> *)&__for_end) )
  {
    v16 = std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false> *const)&__for_begin);
    bundle_id = std::get<0ul,unsigned int const,GroupLinkBundle>(v16);
    bundle = (std::tuple_element<1,const std::pair<unsigned int const,GroupLinkBundle> >::type *)std::get<1ul,unsigned int const,GroupLinkBundle>(v16);
    v3 = proto::PlayerGroupLinkCompBin::add_bundle_bin_list(group_link_bin);
    GroupLinkBundle::toBin(bundle, v3);
    std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false> *const)&__for_begin);
  }
  __for_range_1 = &this->finished_group_bundle_map_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLink>,false>::__node_type *)std::unordered_map<unsigned int,std::pair<unsigned int,std::unordered_set<unsigned int>>>::begin(&this->finished_group_bundle_map_)._M_cur;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLink>,false>::__node_type *)std::unordered_map<unsigned int,std::pair<unsigned int,std::unordered_set<unsigned int>>>::end(__for_range_1)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int>>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int> > >,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int> > >,false> *)&__for_end) )
  {
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int>>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int> > >,false,false> *const)&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int>>>(v12);
    finish_data = (std::tuple_element<1,const std::pair<unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int> > > >::type *)std::get<1ul,unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int>>>(v12);
    finish_bundle_bin = proto::PlayerGroupLinkCompBin::add_finish_bundle_bin_list(group_link_bin);
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(activity_id);
    }
    proto::PlayerGroupBundleFinishBin::set_activity_id(finish_bundle_bin, *activity_id);
    if ( *(_BYTE *)(((unsigned __int64)finish_data >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)finish_data >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(finish_data);
    }
    proto::PlayerGroupBundleFinishBin::set_schedule_id(finish_bundle_bin, finish_data->first);
    v4 = proto::PlayerGroupBundleFinishBin::mutable_bundle_id_list(finish_bundle_bin);
    common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(&finish_data->second, v4);
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int>>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int> > >,false,false> *const)&__for_begin);
  }
  return 0;
};

// Line 110: range 0000000016641A18-0000000016641A83
int32_t __cdecl PlayerGroupLinkComp::onLogin(PlayerGroupLinkComp *const this, bool is_new_player)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !Player::isRelogin(this->player_) )
  {
    PlayerGroupLinkComp::initAllGroupLink(this);
    PlayerGroupLinkComp::initAllGroupBundle(this);
  }
  return 0;
};

// Line 122: range 0000000016641A84-0000000016641AD2
int32_t __cdecl PlayerGroupLinkComp::notifyAllData(PlayerGroupLinkComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  PlayerGroupLinkComp::sendGroupLinkBundleNotify(this, this->player_);
  return 0;
};

// Line 128: range 0000000016641AD4-000000001664215E
void __cdecl PlayerGroupLinkComp::initAllGroupLink(PlayerGroupLinkComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  const ActivityGroupLinksExcelConfigMgr *v4; // rcx
  common::milog::MiLogStream *v5; // rax
  const PlayerActivityComp *ActivityComp; // rdi
  uint32_t schedule_id; // ecx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v12; // rax
  uint32_t *v13; // rdx
  std::unordered_map<unsigned int,GroupLink>::iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  std::unordered_map<unsigned int,GroupLink>::iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  const ActivityGroupLinksExcelConfigMgr *activity_group_links_config_mgr; // [rsp+28h] [rbp-E8h]
  std::unordered_map<unsigned int,GroupLink> *__for_range; // [rsp+30h] [rbp-E0h]
  std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-D8h]
  const std::pair<unsigned int const,GroupLink> *v20; // [rsp+40h] [rbp-D0h]
  std::tuple_element<0,const std::pair<unsigned int const,GroupLink> >::type *link_id; // [rsp+48h] [rbp-C8h]
  std::tuple_element<1,const std::pair<unsigned int const,GroupLink> >::type *link_info; // [rsp+50h] [rbp-C0h]
  std::shared_ptr<Config> v24; // [rsp+60h] [rbp-B0h] BYREF
  common::milog::MiLogStream v25; // [rsp+70h] [rbp-A0h] BYREF
  char v26[128]; // [rsp+90h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 22 delete_link_id_vec:129";
  *(_QWORD *)(v1 + 16) = PlayerGroupLinkComp::initAllGroupLink;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 32));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v24);
  activity_group_links_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24)->design_config.txt_config_mgr.activity_group_links_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v24);
  __for_range = &this->links_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,GroupLink>::begin(&this->links_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,GroupLink>::end(&this->links_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,GroupLink>,false>(&__for_begin, &__for_end) )
  {
    v20 = std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLink>,false,false>::operator*(&__for_begin);
    link_id = std::get<0ul,unsigned int const,GroupLink>(v20);
    link_info = (std::tuple_element<1,const std::pair<unsigned int const,GroupLink> >::type *)std::get<1ul,unsigned int const,GroupLink>(v20);
    v4 = activity_group_links_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)link_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)link_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)link_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(link_id);
    }
    if ( data::ActivityGroupLinksExcelConfigMgrBase::findActivityGroupLinksExcelConfig(v4, *link_id) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      ActivityComp = Player::getActivityComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&link_info->schedule_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)link_info + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&link_info->schedule_id >> 3)
                                                                 + 0x7FFF8000) )
      {
        ActivityComp = (const PlayerActivityComp *)&link_info->schedule_id;
        __asan_report_load4(&link_info->schedule_id);
      }
      schedule_id = link_info->schedule_id;
      if ( *(_BYTE *)(((unsigned __int64)&link_info->activity_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)link_info + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&link_info->activity_id >> 3)
                                                                + 0x7FFF8000) )
      {
        ActivityComp = (const PlayerActivityComp *)&link_info->activity_id;
        __asan_report_load4(&link_info->activity_id);
      }
      if ( !PlayerActivityComp::isActivityOpen(ActivityComp, link_info->activity_id, schedule_id) )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/group_link/player_group_link_comp.cpp",
          "initAllGroupLink",
          142);
        v8 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
               &v25,
               (const char (*)[41])"[GroupLink]activity not open. link_id : ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, link_id);
        common::milog::MiLogStream::~MiLogStream(&v25);
        std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v1 + 32), link_id);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&link_info->cur_bundle_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)link_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&link_info->cur_bundle_id >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4(&link_info->cur_bundle_id);
        }
        if ( !PlayerGroupLinkComp::isGroupBundleRegistered(this, link_info->cur_bundle_id) )
        {
          common::milog::MiLogStream::create(
            &v25,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/group_link/player_group_link_comp.cpp",
            "initAllGroupLink",
            148);
          v9 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                 &v25,
                 (const char (*)[49])"[GroupLink]cur bundle not register. bundle_id : ");
          v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &link_info->cur_bundle_id);
          v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" link_id : ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, link_id);
          common::milog::MiLogStream::~MiLogStream(&v25);
          std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v1 + 32), link_id);
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/group_link/player_group_link_comp.cpp",
        "initAllGroupLink",
        136);
      v5 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
             &v25,
             (const char (*)[62])"[GroupLink]findActivityGroupLinksExcelConfig fail. link_id : ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, link_id);
      common::milog::MiLogStream::~MiLogStream(&v25);
      std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v1 + 32), link_id);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLink>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = (std::vector<unsigned int> *)(v1 + 32);
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLink>,false>::__node_type *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 32))._M_current;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLink>,false>::__node_type *)std::vector<unsigned int>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
  {
    v12 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v12);
    }
    PlayerGroupLinkComp::unregisterGroupLink(this, *v13);
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 32));
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

// Line 160: range 0000000016642160-00000000166429EC
__int64 __fastcall PlayerGroupLinkComp::registerGroupLink(
        PlayerGroupLinkComp *const this,
        uint32_t link_id,
        uint32_t activity_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned int v10; // r14d
  PlayerActivityComp *ActivityComp; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t v13; // eax
  common::milog::MiLogStream *v14; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::vector<unsigned int>::const_reference v18; // rax
  _DWORD *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  std::unordered_map<unsigned int,GroupLink>::mapped_type *v23; // rax
  uint32_t v24; // ecx
  char v25; // dl
  char *v26; // rsi
  __int64 v27; // rdx
  uint32_t v28; // ecx
  char v29; // dl
  __int64 v30; // rdx
  uint32_t v31; // ecx
  char v32; // dl
  __int64 v33; // rdx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  uint32_t ScheduleId; // ecx
  char v36; // dl
  __int64 v37; // rdx
  __int64 result; // rax
  const data::ActivityGroupLinksExcelConfig *link_config_ptr; // [rsp+10h] [rbp-F0h]
  GroupLink *group_link; // [rsp+18h] [rbp-E8h]
  std::shared_ptr<Config> v42; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v43; // [rsp+30h] [rbp-D0h] BYREF
  char v44[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 13 bundle_id:189 64 4 11 link_id:159 80 4 15 activity_id:159 96 16 16 activity_ptr:172";
  *(_QWORD *)(v3 + 16) = PlayerGroupLinkComp::registerGroupLink;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 64) = link_id;
  *(_DWORD *)(v3 + 80) = activity_id;
  common::milog::MiLogStream::create(
    &v43,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/group_link/player_group_link_comp.cpp",
    "registerGroupLink",
    161);
  v6 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
         &v43,
         (const char (*)[40])"[GroupLink] registerGroupLink link_id: ");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 64));
  v8 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v7, (const char (*)[15])" activity_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 80));
  common::milog::MiLogStream::~MiLogStream(&v43);
  if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,GroupLink>,unsigned int>(
         &this->links_map_,
         (const unsigned int *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/group_link/player_group_link_comp.cpp",
      "registerGroupLink",
      164);
    v9 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v43,
           (const char (*)[50])"[GroupLink]duplicate active group link. link_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v43);
    v10 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ActivityComp = Player::getActivityComp(this->player_);
    if ( !PlayerActivityComp::isActivityOpen(ActivityComp, *(_DWORD *)(v3 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v43,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/group_link/player_group_link_comp.cpp",
        "registerGroupLink",
        169);
      v12 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v43,
              (const char (*)[44])"[GroupLink]activity not open. activity_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream(&v43);
      v10 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v13 = (unsigned int)Player::getActivityComp(this->player_);
      PlayerActivityComp::findBaseActivity((PlayerActivityComp *const)(v3 + 96), v13);
      if ( std::operator==<BaseActivity>((const std::shared_ptr<BaseActivity> *)(v3 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v43,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/group_link/player_group_link_comp.cpp",
          "registerGroupLink",
          175);
        v14 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v43,
                (const char (*)[48])"[GroupLink]findBaseActivity fail. activity_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream(&v43);
        v10 = -1;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v42);
        v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42);
        link_config_ptr = data::ActivityGroupLinksExcelConfigMgrBase::findActivityGroupLinksExcelConfig(
                            &v15->design_config.txt_config_mgr.activity_group_links_config_mgr,
                            *(_DWORD *)(v3 + 64));
        std::shared_ptr<Config>::~shared_ptr(&v42);
        if ( link_config_ptr )
        {
          if ( std::vector<unsigned int>::empty(&link_config_ptr->set_list) )
          {
            common::milog::MiLogStream::create(
              &v43,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/group_link/player_group_link_comp.cpp",
              "registerGroupLink",
              186);
            v17 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                    &v43,
                    (const char (*)[60])"[GroupLink]link_config_ptr set_list is empty. group link : ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 64));
            common::milog::MiLogStream::~MiLogStream(&v43);
            v10 = -1;
          }
          else
          {
            v18 = std::vector<unsigned int>::operator[](&link_config_ptr->set_list, 0LL);
            v19 = v18;
            if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v18);
            }
            *(_DWORD *)(v3 + 48) = *v19;
            if ( PlayerGroupLinkComp::registerGroupBundle(this, *(_DWORD *)(v3 + 48), *(_DWORD *)(v3 + 80)) )
            {
              common::milog::MiLogStream::create(
                &v43,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/group_link/player_group_link_comp.cpp",
                "registerGroupLink",
                192);
              v20 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                      &v43,
                      (const char (*)[51])"[GroupLink]registerGroupBundle fail. group link : ");
              v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v20,
                      (const unsigned int *)(v3 + 64));
              v22 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v21,
                      (const char (*)[13])" bundle id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v22,
                (const unsigned int *)(v3 + 48));
              common::milog::MiLogStream::~MiLogStream(&v43);
              v10 = -1;
            }
            else
            {
              v26 = (char *)(v3 + 64);
              v23 = std::unordered_map<unsigned int,GroupLink>::operator[](
                      &this->links_map_,
                      (const std::unordered_map<unsigned int,GroupLink>::key_type *)(v3 + 64));
              group_link = v23;
              v24 = *(_DWORD *)(v3 + 64);
              v25 = *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000);
              LOBYTE(v26) = v25 != 0;
              v27 = (v25 != 0) & (unsigned __int8)((char)(((unsigned __int8)v23 & 7) + 3) >= v25);
              if ( (_BYTE)v27 )
                __asan_report_store4(v23, v26, v27);
              group_link->link_id = v24;
              v28 = *(_DWORD *)(v3 + 48);
              v29 = *(_BYTE *)(((unsigned __int64)&group_link->cur_bundle_id >> 3) + 0x7FFF8000);
              LOBYTE(v26) = v29 != 0;
              v30 = (v29 != 0) & (unsigned __int8)((char)((((_BYTE)group_link + 4) & 7) + 3) >= v29);
              if ( (_BYTE)v30 )
                __asan_report_store4(&group_link->cur_bundle_id, v26, v30);
              group_link->cur_bundle_id = v28;
              v31 = *(_DWORD *)(v3 + 80);
              v32 = *(_BYTE *)(((unsigned __int64)&group_link->activity_id >> 3) + 0x7FFF8000);
              LOBYTE(v26) = v32 != 0;
              v33 = (v32 != 0) & (unsigned __int8)((char)((((_BYTE)group_link + 8) & 7) + 3) >= v32);
              if ( (_BYTE)v33 )
                __asan_report_store4(&group_link->activity_id, v26, v33);
              group_link->activity_id = v31;
              v34 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
              ScheduleId = BaseActivity::getScheduleId(v34);
              v36 = *(_BYTE *)(((unsigned __int64)&group_link->schedule_id >> 3) + 0x7FFF8000);
              LOBYTE(v26) = v36 != 0;
              v37 = (v36 != 0) & (unsigned __int8)((char)((((_BYTE)group_link + 12) & 7) + 3) >= v36);
              if ( (_BYTE)v37 )
                __asan_report_store4(&group_link->schedule_id, v26, v37);
              group_link->schedule_id = ScheduleId;
              v10 = 0;
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v43,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/group_link/player_group_link_comp.cpp",
            "registerGroupLink",
            181);
          v16 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                  &v43,
                  (const char (*)[65])"[GroupLink]findActivityGroupLinksExcelConfig fail. group link : ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream(&v43);
          v10 = -1;
        }
      }
      std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)(v3 + 96));
    }
  }
  result = v10;
  if ( v44 == (char *)v3 )
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

// Line 204: range 00000000166429EE-0000000016642D7F
__int64 __fastcall PlayerGroupLinkComp::unregisterGroupLink(PlayerGroupLinkComp *const this, uint32_t link_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLink>,false,false>::pointer v8; // rdx
  uint32_t *p_cur_bundle_id; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLink>,false> __y; // [rsp+18h] [rbp-A8h] BYREF
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-A0h] BYREF
  char v15[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 13 bundle_id:212 48 4 11 link_id:203 64 8 8 iter:206";
  *(_QWORD *)(v2 + 16) = PlayerGroupLinkComp::unregisterGroupLink;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = link_id;
  common::milog::MiLogStream::create(
    &v14,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/group_link/player_group_link_comp.cpp",
    "unregisterGroupLink",
    205);
  v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
         &v14,
         (const char (*)[42])"[GroupLink] unregisterGroupLink link_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream(&v14);
  *(std::unordered_map<unsigned int,GroupLink>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,GroupLink>::find(
                                                                         &this->links_map_,
                                                                         (const std::unordered_map<unsigned int,GroupLink>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,GroupLink>::cend(&this->links_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,GroupLink>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLink>,false> *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/group_link/player_group_link_comp.cpp",
      "unregisterGroupLink",
      209);
    v6 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v14,
           (const char (*)[44])"[GroupLink]find group link fail. link_id : ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLink>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLink>,false,false> *const)(v2 + 64));
    p_cur_bundle_id = &v8->second.cur_bundle_id;
    if ( *(_BYTE *)(((unsigned __int64)p_cur_bundle_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_cur_bundle_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_cur_bundle_id >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(p_cur_bundle_id);
    }
    *(_DWORD *)(v2 + 32) = v8->second.cur_bundle_id;
    if ( PlayerGroupLinkComp::unregisterGroupBundle(this, *(_DWORD *)(v2 + 32), 0) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/group_link/player_group_link_comp.cpp",
        "unregisterGroupLink",
        215);
      v10 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              &v14,
              (const char (*)[50])"[GroupLink]unregisterGroupBundle fail. link_id : ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])" bundle id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
    std::unordered_map<unsigned int,GroupLink>::erase(
      &this->links_map_,
      *(std::unordered_map<unsigned int,GroupLink>::iterator *)(v2 + 64));
    result = 0LL;
  }
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

// Line 222: range 0000000016642D80-00000000166431B8
__int64 __fastcall PlayerGroupLinkComp::unregisterGroupLinkByActivity(
        PlayerGroupLinkComp *const this,
        uint32_t activity_id,
        uint32_t schedule_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  uint32_t *p_activity_id; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v10; // rax
  uint32_t *v11; // rdx
  __int64 result; // rax
  std::unordered_map<unsigned int,GroupLink>::iterator __for_begin; // [rsp+18h] [rbp-108h] BYREF
  std::unordered_map<unsigned int,GroupLink>::iterator __for_end; // [rsp+20h] [rbp-100h] BYREF
  std::unordered_map<unsigned int,GroupLink> *__for_range; // [rsp+28h] [rbp-F8h]
  std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-F0h]
  const std::pair<unsigned int const,GroupLink> *v18; // [rsp+38h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,GroupLink> >::type *link_id; // [rsp+40h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,GroupLink> >::type *group_link; // [rsp+48h] [rbp-D8h]
  common::milog::MiLogStream v21; // [rsp+50h] [rbp-D0h] BYREF
  char v22[176]; // [rsp+70h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 15 activity_id:221 48 4 15 schedule_id:221 64 24 15 link_id_vec:224";
  *(_QWORD *)(v3 + 16) = PlayerGroupLinkComp::unregisterGroupLinkByActivity;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 32) = activity_id;
  *(_DWORD *)(v3 + 48) = schedule_id;
  common::milog::MiLogStream::create(
    &v21,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/group_link/player_group_link_comp.cpp",
    "unregisterGroupLinkByActivity",
    223);
  v6 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
         &v21,
         (const char (*)[56])"[GroupLink] unregisterGroupLinkByActivity activity_id: ");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
  v8 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v7, (const char (*)[15])" schedule_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
  common::milog::MiLogStream::~MiLogStream(&v21);
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 64));
  __for_range = &this->links_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,GroupLink>::begin(&this->links_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,GroupLink>::end(&this->links_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,GroupLink>,false>(&__for_begin, &__for_end) )
  {
    v18 = std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLink>,false,false>::operator*(&__for_begin);
    link_id = std::get<0ul,unsigned int const,GroupLink>(v18);
    group_link = (std::tuple_element<1,const std::pair<unsigned int const,GroupLink> >::type *)std::get<1ul,unsigned int const,GroupLink>(v18);
    p_activity_id = &group_link->activity_id;
    if ( *(_BYTE *)(((unsigned __int64)p_activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_activity_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(p_activity_id);
    }
    if ( group_link->activity_id == *(_DWORD *)(v3 + 32) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&group_link->schedule_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)group_link + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&group_link->schedule_id >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(&group_link->schedule_id);
      }
      if ( group_link->schedule_id == *(_DWORD *)(v3 + 48) )
        std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v3 + 64), link_id);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLink>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = (std::vector<unsigned int> *)(v3 + 64);
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLink>,false>::__node_type *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 64))._M_current;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLink>,false>::__node_type *)std::vector<unsigned int>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
  {
    v10 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v10);
    }
    PlayerGroupLinkComp::unregisterGroupLink(this, *v11);
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 64));
  result = 0LL;
  if ( v22 == (char *)v3 )
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

// Line 240: range 00000000166431BA-00000000166437E9
int32_t __fastcall PlayerGroupLinkComp::registerNextLinkBundleByBundleId(
        PlayerGroupLinkComp *const this,
        uint32_t bundle_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t *p_cur_bundle_id; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  ActivityGroupLinksExcelConfigMgr *activity_group_links_config_mgr; // [rsp+18h] [rbp-C8h]
  const data::GroupLinksBundleExcelConfig *bundle_config_ptr; // [rsp+20h] [rbp-C0h]
  GroupLink *group_link; // [rsp+28h] [rbp-B8h]
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
  *(_QWORD *)(v2 + 8) = "2 48 4 11 link_id:254 64 4 13 bundle_id:239";
  *(_QWORD *)(v2 + 16) = PlayerGroupLinkComp::registerNextLinkBundleByBundleId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = bundle_id;
  common::milog::MiLogStream::create(
    &v23,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/group_link/player_group_link_comp.cpp",
    "registerNextLinkBundleByBundleId",
    241);
  v5 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
         &v23,
         (const char (*)[57])"[GroupLink] registerNextLinkBundleByBundleId bundle_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 64));
  common::milog::MiLogStream::~MiLogStream(&v23);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  activity_group_links_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.activity_group_links_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v22);
  bundle_config_ptr = data::ActivityGroupLinksExcelConfigMgrBase::findGroupLinksBundleExcelConfig(
                        activity_group_links_config_mgr,
                        *(_DWORD *)(v2 + 64));
  if ( bundle_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&bundle_config_ptr->link_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)bundle_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bundle_config_ptr->link_type >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&bundle_config_ptr->link_type);
    }
    if ( bundle_config_ptr->link_type == CIRCLE )
    {
      *(_DWORD *)(v2 + 48) = ActivityGroupLinksExcelConfigMgr::getLinkIdByBundleId(
                               activity_group_links_config_mgr,
                               *(_DWORD *)(v2 + 64));
      if ( *(_DWORD *)(v2 + 48) )
      {
        if ( !PlayerGroupLinkComp::isGroupLinkRegistered(this, *(_DWORD *)(v2 + 48)) )
        {
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/group_link/player_group_link_comp.cpp",
            "registerNextLinkBundleByBundleId",
            262);
          v10 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  &v23,
                  (const char (*)[45])"[GroupLink]link is not registered. link_id: ");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v10,
                  (const unsigned int *)(v2 + 48));
          v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v11,
                  (const char (*)[14])" bundle_id : ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 64));
          common::milog::MiLogStream::~MiLogStream(&v23);
          result = -1;
        }
        else
        {
          group_link = std::unordered_map<unsigned int,GroupLink>::operator[](
                         &this->links_map_,
                         (const std::unordered_map<unsigned int,GroupLink>::key_type *)(v2 + 48));
          p_cur_bundle_id = &group_link->cur_bundle_id;
          if ( *(_BYTE *)(((unsigned __int64)p_cur_bundle_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_cur_bundle_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_cur_bundle_id >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4(p_cur_bundle_id);
          }
          if ( group_link->cur_bundle_id == *(_DWORD *)(v2 + 64) )
          {
            result = PlayerGroupLinkComp::registerNextLinkBundle(this, *(_DWORD *)(v2 + 48));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v23,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/group_link/player_group_link_comp.cpp",
              "registerNextLinkBundleByBundleId",
              268);
            v14 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                    &v23,
                    (const char (*)[56])"[GroupLink]cur_bundle_id not equel bundle_id. link_id: ");
            v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v14,
                    (const unsigned int *)(v2 + 48));
            v16 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v15,
                    (const char (*)[17])" cur_bundle_id: ");
            v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v16,
                    &group_link->cur_bundle_id);
            v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v17,
                    (const char (*)[14])" bundle_id : ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 64));
            common::milog::MiLogStream::~MiLogStream(&v23);
            result = -1;
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/group_link/player_group_link_comp.cpp",
          "registerNextLinkBundleByBundleId",
          257);
        v9 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
               &v23,
               (const char (*)[50])"[GroupLink]getLinkIdByBundleId fail. bundle_id : ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 64));
        common::milog::MiLogStream::~MiLogStream(&v23);
        result = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/group_link/player_group_link_comp.cpp",
        "registerNextLinkBundleByBundleId",
        251);
      v8 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v23,
             (const char (*)[41])"[GroupLink]link_type error. bundle_id : ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v23);
      result = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/group_link/player_group_link_comp.cpp",
      "registerNextLinkBundleByBundleId",
      246);
    v6 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
           &v23,
           (const char (*)[62])"[GroupLink]findGroupLinksBundleExcelConfig fail. bundle_id : ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v23);
    result = -1;
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
  return result;
};

// Line 275: range 00000000166437EA-0000000016643C1C
__int64 __fastcall PlayerGroupLinkComp::registerNextLinkBundle(PlayerGroupLinkComp *const this, uint32_t link_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 v11; // rdx
  uint32_t next_bundle_id; // [rsp+18h] [rbp-A8h]
  unsigned int ret; // [rsp+1Ch] [rbp-A4h]
  GroupLink *group_link; // [rsp+20h] [rbp-A0h]
  ActivityGroupLinksExcelConfigMgr *activity_group_links_config_mgr; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v16; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-80h] BYREF
  char v18[96]; // [rsp+60h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 link_id:274";
  *(_QWORD *)(v2 + 16) = PlayerGroupLinkComp::registerNextLinkBundle;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = link_id;
  common::milog::MiLogStream::create(
    &v17,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/group_link/player_group_link_comp.cpp",
    "registerNextLinkBundle",
    276);
  v5 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
         &v17,
         (const char (*)[45])"[GroupLink] registerNextLinkBundle link_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v17);
  if ( !PlayerGroupLinkComp::isGroupLinkRegistered(this, *(_DWORD *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/group_link/player_group_link_comp.cpp",
      "registerNextLinkBundle",
      279);
    v6 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v17,
           (const char (*)[45])"[GroupLink]link is not registered. link_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    group_link = std::unordered_map<unsigned int,GroupLink>::operator[](
                   &this->links_map_,
                   (const std::unordered_map<unsigned int,GroupLink>::key_type *)(v2 + 32));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v16);
    activity_group_links_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16)->design_config.txt_config_mgr.activity_group_links_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v16);
    if ( *(_BYTE *)(((unsigned __int64)&group_link->cur_bundle_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)group_link + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&group_link->cur_bundle_id >> 3)
                                                               + 0x7FFF8000) )
    {
      __asan_report_load4(&group_link->cur_bundle_id);
    }
    next_bundle_id = ActivityGroupLinksExcelConfigMgr::getLinkNextBundleId(
                       activity_group_links_config_mgr,
                       *(_DWORD *)(v2 + 32),
                       group_link->cur_bundle_id);
    if ( next_bundle_id )
    {
      if ( *(_BYTE *)(((unsigned __int64)&group_link->activity_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)group_link + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&group_link->activity_id >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&group_link->activity_id);
      }
      ret = PlayerGroupLinkComp::registerGroupBundle(this, next_bundle_id, group_link->activity_id);
      if ( !ret )
      {
        v11 = (*(_BYTE *)(((unsigned __int64)&group_link->cur_bundle_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)group_link + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&group_link->cur_bundle_id >> 3) + 0x7FFF8000));
        if ( (_BYTE)v11 )
          __asan_report_store4(&group_link->cur_bundle_id, (((_BYTE)group_link + 4) & 7u) + 3, v11);
        group_link->cur_bundle_id = next_bundle_id;
      }
      result = ret;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/group_link/player_group_link_comp.cpp",
        "registerNextLinkBundle",
        287);
      v8 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v17,
             (const char (*)[47])"[GroupLink]getLinkNextBundleId fail. link_id: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])" bundle_id : ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &group_link->cur_bundle_id);
      common::milog::MiLogStream::~MiLogStream(&v17);
      result = 0xFFFFFFFFLL;
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

// Line 299: range 0000000016643C1E-0000000016643E7D
int32_t __fastcall PlayerGroupLinkComp::activateGroupBundleByGroupId(
        PlayerGroupLinkComp *const this,
        uint32_t group_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  uint32_t bundle_id; // [rsp+1Ch] [rbp-94h]
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
  *(_QWORD *)(v2 + 8) = "1 32 4 12 group_id:298";
  *(_QWORD *)(v2 + 16) = PlayerGroupLinkComp::activateGroupBundleByGroupId;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = group_id;
  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/group_link/player_group_link_comp.cpp",
    "activateGroupBundleByGroupId",
    300);
  v5 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
         &v11,
         (const char (*)[52])"[GroupLink] activateGroupBundleByGroupId group_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v11);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10);
  bundle_id = ActivityGroupLinksExcelConfigMgr::getBundleIdByGroupId(
                &v6->design_config.txt_config_mgr.activity_group_links_config_mgr,
                *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v10);
  if ( bundle_id )
  {
    result = PlayerGroupLinkComp::activateGroupBundle(this, bundle_id);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/group_link/player_group_link_comp.cpp",
      "activateGroupBundleByGroupId",
      304);
    v7 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v11,
           (const char (*)[56])"[GroupLink]finishGroupBundleByGroupId fail. group id : ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = -1;
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

// Line 311: range 0000000016643E7E-00000000166440DD
int32_t __fastcall PlayerGroupLinkComp::deactivateGroupBundleByGroupId(
        PlayerGroupLinkComp *const this,
        uint32_t group_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  uint32_t bundle_id; // [rsp+1Ch] [rbp-94h]
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
  *(_QWORD *)(v2 + 8) = "1 32 4 12 group_id:310";
  *(_QWORD *)(v2 + 16) = PlayerGroupLinkComp::deactivateGroupBundleByGroupId;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = group_id;
  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/group_link/player_group_link_comp.cpp",
    "deactivateGroupBundleByGroupId",
    312);
  v5 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
         &v11,
         (const char (*)[54])"[GroupLink] deactivateGroupBundleByGroupId group_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v11);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10);
  bundle_id = ActivityGroupLinksExcelConfigMgr::getBundleIdByGroupId(
                &v6->design_config.txt_config_mgr.activity_group_links_config_mgr,
                *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v10);
  if ( bundle_id )
  {
    result = PlayerGroupLinkComp::deactivateGroupBundle(this, bundle_id);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/group_link/player_group_link_comp.cpp",
      "deactivateGroupBundleByGroupId",
      316);
    v7 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v11,
           (const char (*)[56])"[GroupLink]finishGroupBundleByGroupId fail. group id : ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = -1;
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

// Line 324: range 00000000166440DE-000000001664433D
int32_t __fastcall PlayerGroupLinkComp::finishGroupBundleByGroupId(PlayerGroupLinkComp *const this, uint32_t group_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  uint32_t bundle_id; // [rsp+1Ch] [rbp-94h]
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
  *(_QWORD *)(v2 + 8) = "1 32 4 12 group_id:323";
  *(_QWORD *)(v2 + 16) = PlayerGroupLinkComp::finishGroupBundleByGroupId;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = group_id;
  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/group_link/player_group_link_comp.cpp",
    "finishGroupBundleByGroupId",
    325);
  v5 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
         &v11,
         (const char (*)[50])"[GroupLink] finishGroupBundleByGroupId group_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v11);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10);
  bundle_id = ActivityGroupLinksExcelConfigMgr::getBundleIdByGroupId(
                &v6->design_config.txt_config_mgr.activity_group_links_config_mgr,
                *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v10);
  if ( bundle_id )
  {
    result = PlayerGroupLinkComp::finishGroupBundle(this, bundle_id);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/group_link/player_group_link_comp.cpp",
      "finishGroupBundleByGroupId",
      329);
    v7 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v11,
           (const char (*)[56])"[GroupLink]finishGroupBundleByGroupId fail. group id : ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = -1;
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

// Line 336: range 000000001664433E-0000000016644D0D
__int64 __fastcall PlayerGroupLinkComp::registerGroupBundle(
        PlayerGroupLinkComp *const this,
        uint32_t bundle_id,
        uint32_t activity_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  unsigned int v11; // r14d
  PlayerActivityComp *ActivityComp; // rax
  common::milog::MiLogStream *v13; // rax
  uint32_t v14; // eax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  GroupLinkBundle *v17; // rax
  uint32_t v18; // ecx
  char v19; // dl
  char *v20; // rsi
  __int64 v21; // rdx
  uint32_t v22; // ecx
  char v23; // dl
  __int64 v24; // rdx
  __int64 v25; // rsi
  bool is_default_activate; // cl
  char v27; // dl
  __int64 v28; // rdx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  uint32_t ScheduleId; // ecx
  char v31; // dl
  __int64 v32; // rdx
  __int64 v33; // rsi
  bool is_default_show_mark; // cl
  char v35; // dl
  __int64 v36; // rdx
  Scene *v37; // rax
  SceneBlockGroupComp *BlockGroupComp; // rax
  unsigned __int64 v39; // rdx
  __int64 result; // rax
  uint32_t revise_id; // [rsp+1Ch] [rbp-154h]
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::iterator __for_begin; // [rsp+20h] [rbp-150h] BYREF
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::iterator __for_end; // [rsp+28h] [rbp-148h] BYREF
  const data::GroupLinksBundleExcelConfig *bundle_config_ptr; // [rsp+30h] [rbp-140h]
  GroupLinkBundle *bundle; // [rsp+38h] [rbp-138h]
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *__for_range; // [rsp+40h] [rbp-130h]
  std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > *__in; // [rsp+48h] [rbp-128h]
  std::tuple_element<0,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *scene_ptr; // [rsp+50h] [rbp-120h]
  std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *group_vec; // [rsp+58h] [rbp-118h]
  common::milog::MiLogStream v51; // [rsp+60h] [rbp-110h] BYREF
  char v52[240]; // [rsp+80h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 13 bundle_id:335 64 4 15 activity_id:335 80 16 16 activity_ptr:349 112 48 19 scene_group_map:373";
  *(_QWORD *)(v3 + 16) = PlayerGroupLinkComp::registerGroupBundle;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = bundle_id;
  *(_DWORD *)(v3 + 64) = activity_id;
  common::milog::MiLogStream::create(
    &v51,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/group_link/player_group_link_comp.cpp",
    "registerGroupBundle",
    337);
  v6 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
         &v51,
         (const char (*)[44])"[GroupLink] registerGroupBundle bundle_id: ");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
  v8 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v7, (const char (*)[15])" activity_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 64));
  common::milog::MiLogStream::~MiLogStream(&v51);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 80));
  v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
  bundle_config_ptr = data::ActivityGroupLinksExcelConfigMgrBase::findGroupLinksBundleExcelConfig(
                        &v9->design_config.txt_config_mgr.activity_group_links_config_mgr,
                        *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 80));
  if ( bundle_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ActivityComp = Player::getActivityComp(this->player_);
    if ( !PlayerActivityComp::isActivityOpen(ActivityComp, *(_DWORD *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v51,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/group_link/player_group_link_comp.cpp",
        "registerGroupBundle",
        346);
      v13 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v51,
              (const char (*)[44])"[GroupLink]activity not open. activity_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v51);
      v11 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v14 = (unsigned int)Player::getActivityComp(this->player_);
      PlayerActivityComp::findBaseActivity((PlayerActivityComp *const)(v3 + 80), v14);
      if ( std::operator==<BaseActivity>((const std::shared_ptr<BaseActivity> *)(v3 + 80), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v51,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/group_link/player_group_link_comp.cpp",
          "registerGroupBundle",
          352);
        v15 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v51,
                (const char (*)[48])"[GroupLink]findBaseActivity fail. activity_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream(&v51);
        v11 = -1;
      }
      else if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,GroupLinkBundle>,unsigned int>(
                  &this->group_bundle_map_,
                  (const unsigned int *)(v3 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v51,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/group_link/player_group_link_comp.cpp",
          "registerGroupBundle",
          357);
        v16 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                &v51,
                (const char (*)[52])"[GroupLink]bundle_id already register. bundle_id : ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v51);
        v11 = -1;
      }
      else
      {
        v20 = (char *)(v3 + 48);
        v17 = std::unordered_map<unsigned int,GroupLinkBundle>::operator[](
                &this->group_bundle_map_,
                (const std::unordered_map<unsigned int,GroupLinkBundle>::key_type *)(v3 + 48));
        bundle = v17;
        v18 = *(_DWORD *)(v3 + 48);
        v19 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
        LOBYTE(v20) = v19 != 0;
        v21 = (v19 != 0) & (unsigned __int8)((char)(((unsigned __int8)v17 & 7) + 3) >= v19);
        if ( (_BYTE)v21 )
          __asan_report_store4(v17, v20, v21);
        bundle->bundle_id = v18;
        v22 = *(_DWORD *)(v3 + 64);
        v23 = *(_BYTE *)(((unsigned __int64)&bundle->activity_id >> 3) + 0x7FFF8000);
        LOBYTE(v20) = v23 != 0;
        v24 = (v23 != 0) & (unsigned __int8)((char)((((_BYTE)bundle + 4) & 7) + 3) >= v23);
        if ( (_BYTE)v24 )
          __asan_report_store4(&bundle->activity_id, v20, v24);
        bundle->activity_id = v22;
        v25 = ((_BYTE)bundle_config_ptr + 60) & 7;
        if ( *(_BYTE *)(((unsigned __int64)&bundle_config_ptr->is_default_activate >> 3) + 0x7FFF8000) != 0
          && (char)v25 >= *(_BYTE *)(((unsigned __int64)&bundle_config_ptr->is_default_activate >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&bundle_config_ptr->is_default_activate);
        }
        is_default_activate = bundle_config_ptr->is_default_activate;
        v27 = *(_BYTE *)(((unsigned __int64)&bundle->is_activated >> 3) + 0x7FFF8000);
        LOBYTE(v25) = v27 != 0;
        v28 = (v27 != 0) & (unsigned __int8)((((unsigned __int8)bundle + 12) & 7) >= v27);
        if ( (_BYTE)v28 )
          __asan_report_store1(&bundle->is_activated, v25, v28);
        bundle->is_activated = is_default_activate;
        v29 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
        ScheduleId = BaseActivity::getScheduleId(v29);
        v31 = *(_BYTE *)(((unsigned __int64)&bundle->schedule_id >> 3) + 0x7FFF8000);
        LOBYTE(v25) = v31 != 0;
        v32 = (v31 != 0) & (unsigned __int8)((char)((((_BYTE)bundle + 8) & 7) + 3) >= v31);
        if ( (_BYTE)v32 )
          __asan_report_store4(&bundle->schedule_id, v25, v32);
        bundle->schedule_id = ScheduleId;
        v33 = ((_BYTE)bundle_config_ptr + 62) & 7;
        if ( *(_BYTE *)(((unsigned __int64)&bundle_config_ptr->is_default_show_mark >> 3) + 0x7FFF8000) != 0
          && (char)v33 >= *(_BYTE *)(((unsigned __int64)&bundle_config_ptr->is_default_show_mark >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&bundle_config_ptr->is_default_show_mark);
        }
        is_default_show_mark = bundle_config_ptr->is_default_show_mark;
        v35 = *(_BYTE *)(((unsigned __int64)&bundle->is_show_mark >> 3) + 0x7FFF8000);
        LOBYTE(v33) = v35 != 0;
        v36 = (v35 != 0) & (unsigned __int8)((((unsigned __int8)bundle + 13) & 7) >= v35);
        if ( (_BYTE)v36 )
          __asan_report_store1(&bundle->is_show_mark, v33, v36);
        bundle->is_show_mark = is_default_show_mark;
        PlayerGroupLinkComp::sendGroupLinkBundleActivateNotify(this, bundle);
        std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v3 + 112));
        if ( *(_BYTE *)(((unsigned __int64)&bundle_config_ptr->revise_level >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&bundle_config_ptr->revise_level >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&bundle_config_ptr->revise_level);
        }
        revise_id = bundle_config_ptr->revise_level;
        PlayerGroupLinkComp::getGroupSceneMap(
          this,
          &bundle_config_ptr->group_list,
          (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v3 + 112));
        __for_range = (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v3 + 112);
        __for_begin._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::begin((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v3 + 112))._M_node;
        __for_end._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::end((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v3 + 112))._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          __in = std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator*(&__for_begin);
          scene_ptr = std::get<0ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(__in);
          group_vec = std::get<1ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(__in);
          if ( std::operator!=<Scene>(0LL, scene_ptr) )
          {
            v37 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
            BlockGroupComp = Scene::getBlockGroupComp(v37);
            if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v39 = (unsigned __int64)(BlockGroupComp->_vptr_SceneCompBase + 12);
            if ( *(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            (*(void (__fastcall **)(SceneBlockGroupComp *, std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *, _QWORD, _QWORD))v39)(
              BlockGroupComp,
              group_vec,
              0LL,
              revise_id);
          }
          std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator++(&__for_begin);
        }
        v11 = 0;
        std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::~map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v3 + 112));
      }
      std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)(v3 + 80));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v51,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/group_link/player_group_link_comp.cpp",
      "registerGroupBundle",
      341);
    v10 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
            &v51,
            (const char (*)[62])"[GroupLink]findGroupLinksBundleExcelConfig fail. bundle_id : ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v51);
    v11 = -1;
  }
  result = v11;
  if ( v52 == (char *)v3 )
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

// Line 387: range 0000000016644D0E-0000000016645136
__int64 __fastcall PlayerGroupLinkComp::activateGroupBundle(PlayerGroupLinkComp *const this, uint32_t bundle_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLinkBundle>,false> *p_y; // rsi
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false>::pointer v9; // rdx
  bool *p_is_activated; // rax
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false>::pointer v12; // rdx
  char v13; // cl
  common::milog::MiLogStream *v14; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false>::pointer v15; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLinkBundle>,false> __y; // [rsp+18h] [rbp-A8h] BYREF
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-A0h] BYREF
  char v18[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 bundle_id:386 64 8 8 iter:389";
  *(_QWORD *)(v2 + 16) = PlayerGroupLinkComp::activateGroupBundle;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = bundle_id;
  common::milog::MiLogStream::create(
    &v17,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/group_link/player_group_link_comp.cpp",
    "activateGroupBundle",
    388);
  v5 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
         &v17,
         (const char (*)[44])"[GroupLink] activateGroupBundle bundle_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream(&v17);
  *(std::unordered_map<unsigned int,GroupLinkBundle>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,GroupLinkBundle>::find(
                                                                               &this->group_bundle_map_,
                                                                               (const std::unordered_map<unsigned int,GroupLinkBundle>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,GroupLinkBundle>::cend(&this->group_bundle_map_)._M_cur;
  p_y = &__y;
  if ( std::__detail::operator==<std::pair<unsigned int const,GroupLinkBundle>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLinkBundle>,false> *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/group_link/player_group_link_comp.cpp",
      "activateGroupBundle",
      392);
    v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v17,
           (const char (*)[43])"[GROUP_LINK]find bundle fail. bundle_id : ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v9 = std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false> *const)(v2 + 64));
    p_is_activated = &v9->second.is_activated;
    if ( *(_BYTE *)(((unsigned __int64)p_is_activated >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_activated & 7) >= *(_BYTE *)(((unsigned __int64)p_is_activated >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_activated);
    }
    if ( v9->second.is_activated )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/group_link/player_group_link_comp.cpp",
        "activateGroupBundle",
        397);
      v11 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              &v17,
              (const char (*)[50])"[GROUP_LINK]bundle already activated. bundle_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v17);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false> *const)(v2 + 64));
      v13 = *(_BYTE *)(((unsigned __int64)&v12->second.is_activated >> 3) + 0x7FFF8000);
      if ( v13 != 0 && (((unsigned __int8)v12 + 16) & 7) >= v13 )
      {
        LOBYTE(p_y) = v13 != 0;
        __asan_report_store1(&v12->second.is_activated, p_y, v12);
      }
      v12->second.is_activated = 1;
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/group_link/player_group_link_comp.cpp",
        "activateGroupBundle",
        401);
      v14 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v17,
              (const char (*)[33])"[GROUP_LINK]activate bundle_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v17);
      v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false> *const)(v2 + 64));
      PlayerGroupLinkComp::sendGroupLinkBundleActivateNotify(this, &v15->second);
      result = 0LL;
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

// Line 407: range 0000000016645138-0000000016645563
__int64 __fastcall PlayerGroupLinkComp::deactivateGroupBundle(PlayerGroupLinkComp *const this, uint32_t bundle_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLinkBundle>,false> *p_y; // rsi
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false>::pointer v9; // rdx
  bool *p_is_activated; // rax
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false>::pointer v12; // rdx
  char v13; // cl
  common::milog::MiLogStream *v14; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false>::pointer v15; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLinkBundle>,false> __y; // [rsp+18h] [rbp-A8h] BYREF
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-A0h] BYREF
  char v18[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 bundle_id:406 64 8 8 iter:409";
  *(_QWORD *)(v2 + 16) = PlayerGroupLinkComp::deactivateGroupBundle;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = bundle_id;
  common::milog::MiLogStream::create(
    &v17,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/group_link/player_group_link_comp.cpp",
    "deactivateGroupBundle",
    408);
  v5 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
         &v17,
         (const char (*)[46])"[GroupLink] deactivateGroupBundle bundle_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream(&v17);
  *(std::unordered_map<unsigned int,GroupLinkBundle>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,GroupLinkBundle>::find(
                                                                               &this->group_bundle_map_,
                                                                               (const std::unordered_map<unsigned int,GroupLinkBundle>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,GroupLinkBundle>::cend(&this->group_bundle_map_)._M_cur;
  p_y = &__y;
  if ( std::__detail::operator==<std::pair<unsigned int const,GroupLinkBundle>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLinkBundle>,false> *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/group_link/player_group_link_comp.cpp",
      "deactivateGroupBundle",
      412);
    v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v17,
           (const char (*)[43])"[GROUP_LINK]find bundle fail. bundle_id : ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v9 = std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false> *const)(v2 + 64));
    p_is_activated = &v9->second.is_activated;
    if ( *(_BYTE *)(((unsigned __int64)p_is_activated >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_activated & 7) >= *(_BYTE *)(((unsigned __int64)p_is_activated >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_activated);
    }
    if ( !v9->second.is_activated )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/group_link/player_group_link_comp.cpp",
        "deactivateGroupBundle",
        417);
      v11 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              &v17,
              (const char (*)[52])"[GROUP_LINK]bundle already deactivated. bundle_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v17);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false> *const)(v2 + 64));
      v13 = *(_BYTE *)(((unsigned __int64)&v12->second.is_activated >> 3) + 0x7FFF8000);
      if ( v13 != 0 && (((unsigned __int8)v12 + 16) & 7) >= v13 )
      {
        LOBYTE(p_y) = v13 != 0;
        __asan_report_store1(&v12->second.is_activated, p_y, v12);
      }
      v12->second.is_activated = 0;
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/group_link/player_group_link_comp.cpp",
        "deactivateGroupBundle",
        421);
      v14 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v17,
              (const char (*)[35])"[GROUP_LINK]deactivate bundle_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v17);
      v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false> *const)(v2 + 64));
      PlayerGroupLinkComp::sendGroupLinkBundleActivateNotify(this, &v15->second);
      result = 0LL;
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

// Line 428: range 0000000016645564-0000000016645BB6
__int64 __fastcall PlayerGroupLinkComp::finishGroupBundle(PlayerGroupLinkComp *const this, uint32_t bundle_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v9; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false>::pointer v10; // rdx
  uint32_t *p_activity_id; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false>::pointer v12; // rdx
  uint32_t *p_schedule_id; // rax
  common::milog::MiLogStream *v14; // rax
  PlayerEventComp *EventComp; // r14
  uint32_t activity_id; // [rsp+18h] [rbp-E8h]
  uint32_t schedule_id; // [rsp+1Ch] [rbp-E4h]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLinkBundle>,false> __y; // [rsp+20h] [rbp-E0h] BYREF
  const data::GroupLinksBundleExcelConfig *bundle_config_ptr; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<GroupBundleFinishEvent> __r; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<Config> v21; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 bundle_id:427 64 8 8 iter:437";
  *(_QWORD *)(v2 + 16) = PlayerGroupLinkComp::finishGroupBundle;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = bundle_id;
  common::milog::MiLogStream::create(
    &v22,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/group_link/player_group_link_comp.cpp",
    "finishGroupBundle",
    429);
  v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
         &v22,
         (const char (*)[42])"[GroupLink] finishGroupBundle bundle_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream(&v22);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
  bundle_config_ptr = data::ActivityGroupLinksExcelConfigMgrBase::findGroupLinksBundleExcelConfig(
                        &v6->design_config.txt_config_mgr.activity_group_links_config_mgr,
                        *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v21);
  if ( bundle_config_ptr )
  {
    *(std::unordered_map<unsigned int,GroupLinkBundle>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,GroupLinkBundle>::find(
                                                                                 &this->group_bundle_map_,
                                                                                 (const std::unordered_map<unsigned int,GroupLinkBundle>::key_type *)(v2 + 48));
    __y._M_cur = std::unordered_map<unsigned int,GroupLinkBundle>::end(&this->group_bundle_map_)._M_cur;
    if ( std::__detail::operator==<std::pair<unsigned int const,GroupLinkBundle>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLinkBundle>,false> *)(v2 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/group_link/player_group_link_comp.cpp",
        "finishGroupBundle",
        440);
      v9 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
             &v22,
             (const char (*)[43])"[GROUP_LINK]find bundle fail. bundle_id : ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v22);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false> *const)(v2 + 64));
      p_activity_id = &v10->second.activity_id;
      if ( *(_BYTE *)(((unsigned __int64)p_activity_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_activity_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(p_activity_id);
      }
      activity_id = v10->second.activity_id;
      v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false> *const)(v2 + 64));
      p_schedule_id = &v12->second.schedule_id;
      if ( *(_BYTE *)(((unsigned __int64)p_schedule_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_schedule_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(p_schedule_id);
      }
      schedule_id = v12->second.schedule_id;
      if ( PlayerGroupLinkComp::unregisterGroupBundle(this, *(_DWORD *)(v2 + 48), 0) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/group_link/player_group_link_comp.cpp",
          "finishGroupBundle",
          447);
        v14 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                &v22,
                (const char (*)[52])"[GroupLink]unregisterGroupBundle fail. bundle_id : ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v22);
        result = 0xFFFFFFFFLL;
      }
      else
      {
        PlayerGroupLinkComp::recordGroupFinishedBundle(this, *(_DWORD *)(v2 + 48), activity_id, schedule_id);
        PlayerGroupLinkComp::onGroupBundleReward(this, *(_DWORD *)(v2 + 48), activity_id);
        if ( *(_BYTE *)(((unsigned __int64)&bundle_config_ptr->link_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)bundle_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bundle_config_ptr->link_type >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4(&bundle_config_ptr->link_type);
        }
        if ( bundle_config_ptr->link_type == CIRCLE )
        {
          PlayerGroupLinkComp::registerNextLinkBundleByBundleId(this, *(_DWORD *)(v2 + 48));
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          EventComp = Player::getEventComp(this->player_);
          common::tools::perf::make_shared<GroupBundleFinishEvent,unsigned int &>(
            (unsigned int *)&__r,
            (unsigned int *)(v2 + 48));
          std::shared_ptr<BaseEvent>::shared_ptr<GroupBundleFinishEvent,void>(
            (std::shared_ptr<BaseEvent> *const)&v21,
            &__r);
          PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v21);
          std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v21);
          std::shared_ptr<GroupBundleFinishEvent>::~shared_ptr(&__r);
        }
        result = 0LL;
      }
    }
  }
  else
  {
    std::unordered_map<unsigned int,GroupLinkBundle>::erase(
      &this->group_bundle_map_,
      (const std::unordered_map<unsigned int,GroupLinkBundle>::key_type *)(v2 + 48));
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/group_link/player_group_link_comp.cpp",
      "finishGroupBundle",
      434);
    v7 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v22,
           (const char (*)[51])"findGroupLinksBundleExcelConfig fail. bundle_id : ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = 0xFFFFFFFFLL;
  }
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

// Line 472: range 0000000016645BB8-000000001664615F
__int64 __fastcall PlayerGroupLinkComp::unregisterGroupBundle(
        PlayerGroupLinkComp *const this,
        uint32_t bundle_id,
        bool is_force)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  Scene *v11; // rax
  SceneBlockGroupComp *BlockGroupComp; // rax
  unsigned __int64 v13; // rdx
  __int64 result; // rax
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::iterator __for_begin; // [rsp+18h] [rbp-138h] BYREF
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::iterator __for_end; // [rsp+20h] [rbp-130h] BYREF
  const data::GroupLinksBundleExcelConfig *bundle_config_ptr; // [rsp+28h] [rbp-128h]
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *__for_range; // [rsp+30h] [rbp-120h]
  std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > *__in; // [rsp+38h] [rbp-118h]
  std::tuple_element<0,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *scene_ptr; // [rsp+40h] [rbp-110h]
  std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *group_vec; // [rsp+48h] [rbp-108h]
  std::shared_ptr<Config> v23; // [rsp+50h] [rbp-100h] BYREF
  common::milog::MiLogStream v24; // [rsp+60h] [rbp-F0h] BYREF
  char v25[208]; // [rsp+80h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 13 bundle_id:471 48 8 8 iter:474 80 48 19 scene_group_map:488";
  *(_QWORD *)(v3 + 16) = PlayerGroupLinkComp::unregisterGroupBundle;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 32) = bundle_id;
  common::milog::MiLogStream::create(
    &v24,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/group_link/player_group_link_comp.cpp",
    "unregisterGroupBundle",
    473);
  v6 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
         &v24,
         (const char (*)[46])"[GroupLink] unregisterGroupBundle bundle_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
  common::milog::MiLogStream::~MiLogStream(&v24);
  *(std::unordered_map<unsigned int,GroupLinkBundle>::iterator *)(v3 + 48) = std::unordered_map<unsigned int,GroupLinkBundle>::find(
                                                                               &this->group_bundle_map_,
                                                                               (const std::unordered_map<unsigned int,GroupLinkBundle>::key_type *)(v3 + 32));
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::_Base_ptr)std::unordered_map<unsigned int,GroupLinkBundle>::cend(&this->group_bundle_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,GroupLinkBundle>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLinkBundle>,false> *)(v3 + 48),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLinkBundle>,false> *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/group_link/player_group_link_comp.cpp",
      "unregisterGroupBundle",
      477);
    v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v24,
           (const char (*)[43])"[GROUP_LINK]find bundle fail. bundle_id : ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v24);
    v8 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v23);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23);
    bundle_config_ptr = data::ActivityGroupLinksExcelConfigMgrBase::findGroupLinksBundleExcelConfig(
                          &v9->design_config.txt_config_mgr.activity_group_links_config_mgr,
                          *(_DWORD *)(v3 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v23);
    if ( bundle_config_ptr )
    {
      std::unordered_map<unsigned int,GroupLinkBundle>::erase(
        &this->group_bundle_map_,
        (const std::unordered_map<unsigned int,GroupLinkBundle>::key_type *)(v3 + 32));
      std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v3 + 80));
      PlayerGroupLinkComp::getGroupSceneMap(
        this,
        &bundle_config_ptr->group_list,
        (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v3 + 80));
      __for_range = (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v3 + 80);
      __for_begin._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::begin((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v3 + 80))._M_node;
      __for_end._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::end(__for_range)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        __in = std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator*(&__for_begin);
        scene_ptr = std::get<0ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(__in);
        group_vec = std::get<1ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(__in);
        if ( std::operator!=<Scene>(0LL, scene_ptr) )
        {
          v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
          BlockGroupComp = Scene::getBlockGroupComp(v11);
          if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v13 = (unsigned __int64)(BlockGroupComp->_vptr_SceneCompBase + 13);
          if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          (*(void (__fastcall **)(SceneBlockGroupComp *, std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *, bool))v13)(
            BlockGroupComp,
            group_vec,
            is_force);
        }
        std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator++(&__for_begin);
      }
      PlayerGroupLinkComp::sendGroupLinkDeleteBundleNotify(this, *(_DWORD *)(v3 + 32));
      v8 = 0;
      std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::~map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v3 + 80));
    }
    else
    {
      std::unordered_map<unsigned int,GroupLinkBundle>::erase(
        &this->group_bundle_map_,
        (const std::unordered_map<unsigned int,GroupLinkBundle>::key_type *)(v3 + 32));
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/group_link/player_group_link_comp.cpp",
        "unregisterGroupBundle",
        484);
      v10 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              &v24,
              (const char (*)[51])"findGroupLinksBundleExcelConfig fail. bundle_id : ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v24);
      v8 = -1;
    }
  }
  result = v8;
  if ( v25 == (char *)v3 )
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

// Line 503: range 0000000016646160-00000000166465AB
__int64 __fastcall PlayerGroupLinkComp::unregisterGroupBundleByActivity(
        PlayerGroupLinkComp *const this,
        uint32_t activity_id,
        uint32_t schedule_id,
        bool is_force)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  uint32_t *p_activity_id; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v11; // rax
  uint32_t *v12; // rdx
  __int64 result; // rax
  std::unordered_map<unsigned int,GroupLinkBundle>::iterator __for_begin; // [rsp+28h] [rbp-108h] BYREF
  std::unordered_map<unsigned int,GroupLinkBundle>::iterator __for_end; // [rsp+30h] [rbp-100h] BYREF
  std::unordered_map<unsigned int,GroupLinkBundle> *__for_range; // [rsp+38h] [rbp-F8h]
  std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-F0h]
  const std::pair<unsigned int const,GroupLinkBundle> *v20; // [rsp+48h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,GroupLinkBundle> >::type *bundle_id; // [rsp+50h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,GroupLinkBundle> >::type *group_bundle; // [rsp+58h] [rbp-D8h]
  common::milog::MiLogStream v23; // [rsp+60h] [rbp-D0h] BYREF
  char v24[176]; // [rsp+80h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 15 activity_id:502 48 4 15 schedule_id:502 64 24 17 bundle_id_vec:505";
  *(_QWORD *)(v4 + 16) = PlayerGroupLinkComp::unregisterGroupBundleByActivity;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218103808;
  v6[536862723] = -202116109;
  *(_DWORD *)(v4 + 32) = activity_id;
  *(_DWORD *)(v4 + 48) = schedule_id;
  common::milog::MiLogStream::create(
    &v23,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/group_link/player_group_link_comp.cpp",
    "unregisterGroupBundleByActivity",
    504);
  v7 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
         &v23,
         (const char (*)[58])"[GroupLink] unregisterGroupBundleByActivity activity_id: ");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 32));
  v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v8, (const char (*)[15])" schedule_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 48));
  common::milog::MiLogStream::~MiLogStream(&v23);
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 64));
  __for_range = &this->group_bundle_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,GroupLinkBundle>::begin(&this->group_bundle_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,GroupLinkBundle>::end(&this->group_bundle_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,GroupLinkBundle>,false>(&__for_begin, &__for_end) )
  {
    v20 = std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false>::operator*(&__for_begin);
    bundle_id = std::get<0ul,unsigned int const,GroupLinkBundle>(v20);
    group_bundle = (std::tuple_element<1,const std::pair<unsigned int const,GroupLinkBundle> >::type *)std::get<1ul,unsigned int const,GroupLinkBundle>(v20);
    p_activity_id = &group_bundle->activity_id;
    if ( *(_BYTE *)(((unsigned __int64)p_activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_activity_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(p_activity_id);
    }
    if ( group_bundle->activity_id == *(_DWORD *)(v4 + 32) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&group_bundle->schedule_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)group_bundle + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&group_bundle->schedule_id >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4(&group_bundle->schedule_id);
      }
      if ( group_bundle->schedule_id == *(_DWORD *)(v4 + 48) )
        std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v4 + 64), bundle_id);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = (std::vector<unsigned int> *)(v4 + 64);
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLinkBundle>,false>::__node_type *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v4 + 64))._M_current;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLinkBundle>,false>::__node_type *)std::vector<unsigned int>::end(__for_range_0)._M_current;
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
    PlayerGroupLinkComp::unregisterGroupBundle(this, *v12, is_force);
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 64));
  result = 0LL;
  if ( v24 == (char *)v4 )
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

// Line 521: range 00000000166465AC-00000000166478C1
__int64 __fastcall PlayerGroupLinkComp::onGroupBundleReward(
        PlayerGroupLinkComp *const this,
        uint32_t bundle_id,
        uint32_t activity_id)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  const data::ActivityGroupLinksExcelConfigMgrBase *v8; // rcx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t ActivityComp; // eax
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  unsigned __int64 v13; // rdx
  uint32_t drop_id; // esi
  uint32_t LogLevel; // eax
  common::milog::MiLogStream *v16; // r14
  int v17; // r15d
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  PlayerItemComp *ItemComp; // rax
  PlayerItemComp *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rcx
  common::milog::MiLogStream *v27; // r15
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  common::milog::MiLogStream *v29; // rcx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  unsigned __int64 Position; // rax
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v33; // rax
  int v34; // r15d
  LuaConfigMgr *v35; // rcx
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rcx
  Scene *v40; // rax
  __int64 result; // rax
  proto::ActionReasonType default_type; // [rsp+24h] [rbp-24Ch]
  data::ItemLimitType limit_type; // [rsp+28h] [rbp-248h]
  ActivityGroupLinksExcelConfigMgr *activity_group_links_config_mgr; // [rsp+30h] [rbp-240h]
  uint32_t *bundle_config_ptr; // [rsp+38h] [rbp-238h]
  const data::GroupLinksBundleRewardExcelConfig *reward_config_ptr; // [rsp+40h] [rbp-230h]
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+48h] [rbp-228h]
  std::shared_ptr<Scene> v49; // [rsp+50h] [rbp-220h] BYREF
  common::milog::MiLogStream v50; // [rsp+60h] [rbp-210h] BYREF
  char v51[496]; // [rsp+80h] [rbp-1F0h] BYREF

  v4 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(448LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "11 32 4 7 ret:567 48 4 13 bundle_id:520 64 4 15 activity_id:520 80 8 17 output_result:556 112 12"
                        " 7 pos:578 144 16 16 activity_ptr:548 176 16 14 avatar_ptr:577 208 16 13 scene_ptr:579 240 24 10"
                        " reason:554 304 24 18 item_param_vec:555 368 40 14 drop_param:606";
  *(_QWORD *)(v4 + 16) = PlayerGroupLinkComp::onGroupBundleReward;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = 61956;
  v6[536862722] = -234881024;
  v6[536862723] = 62194;
  v6[536862723] = 0x4000000;
  v6[536862724] = 62194;
  v6[536862725] = 62194;
  v6[536862726] = 62194;
  v6[536862727] = 62194;
  v6[536862728] = -218959360;
  v6[536862729] = 62194;
  v6[536862730] = -218959360;
  v6[536862731] = 62194;
  v6[536862732] = -218103808;
  v6[536862733] = -202116109;
  *(_DWORD *)(v4 + 48) = bundle_id;
  *(_DWORD *)(v4 + 64) = activity_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v49);
  activity_group_links_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49)->design_config.txt_config_mgr.activity_group_links_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v49);
  bundle_config_ptr = (uint32_t *)data::ActivityGroupLinksExcelConfigMgrBase::findGroupLinksBundleExcelConfig(
                                    activity_group_links_config_mgr,
                                    *(_DWORD *)(v4 + 48));
  if ( !bundle_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v50,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/group_link/player_group_link_comp.cpp",
      "onGroupBundleReward",
      526);
    v7 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
           &v50,
           (const char (*)[62])"[GroupLink]findGroupLinksBundleExcelConfig fail. bundle_id : ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v50);
    v3 = -1;
    goto LABEL_81;
  }
  if ( *(_BYTE *)(((unsigned __int64)(bundle_config_ptr + 13) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)bundle_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(bundle_config_ptr + 13) >> 3)
                                                                     + 0x7FFF8000) )
  {
    __asan_report_load4(bundle_config_ptr + 13);
  }
  if ( !bundle_config_ptr[13] )
  {
    v3 = 0;
    goto LABEL_81;
  }
  v8 = activity_group_links_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)(bundle_config_ptr + 13) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)bundle_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(bundle_config_ptr + 13) >> 3)
                                                                     + 0x7FFF8000) )
  {
    __asan_report_load4(bundle_config_ptr + 13);
  }
  reward_config_ptr = data::ActivityGroupLinksExcelConfigMgrBase::findGroupLinksBundleRewardExcelConfig(
                        v8,
                        bundle_config_ptr[13]);
  if ( !reward_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v50,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/group_link/player_group_link_comp.cpp",
      "onGroupBundleReward",
      536);
    v9 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
           &v50,
           (const char (*)[68])"[GroupLink]findGroupLinksBundleRewardExcelConfig fail. bundle_id : ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v50);
    v3 = -1;
    goto LABEL_81;
  }
  if ( *(_BYTE *)(((unsigned __int64)&reward_config_ptr->drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&reward_config_ptr->drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&reward_config_ptr->drop_id);
  }
  if ( !reward_config_ptr->drop_id )
  {
    v3 = 0;
    goto LABEL_81;
  }
  if ( *(_BYTE *)(((unsigned __int64)(bundle_config_ptr + 12) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(bundle_config_ptr + 12) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(bundle_config_ptr + 12);
  }
  if ( bundle_config_ptr[12] == 1 )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v49);
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49);
    limit_type = NewActivityExcelConfigMgr::getDropItemLimitTypeByActivityId(
                   &v10->design_config.txt_config_mgr.new_activity_config_mgr,
                   *(_DWORD *)(v4 + 64));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v49);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ActivityComp = (unsigned int)Player::getActivityComp(this->player_);
    PlayerActivityComp::findBaseActivity((PlayerActivityComp *const)(v4 + 144), ActivityComp);
    default_type = ACTION_REASON_GROUP_LINK_BUNDLE_FINISH;
    if ( std::operator!=<BaseActivity>(0LL, (const std::shared_ptr<BaseActivity> *)(v4 + 144)) )
    {
      v12 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v13 = (unsigned __int64)(v12->_vptr_DescribalBase + 18);
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      default_type = (*(unsigned int (__fastcall **)(std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v13)(v12);
    }
    ActionReason::ActionReason((ActionReason *const)(v4 + 240), default_type, limit_type);
    std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v4 + 304));
    if ( *(_BYTE *)(((unsigned __int64)&reward_config_ptr->drop_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&reward_config_ptr->drop_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&reward_config_ptr->drop_id);
    }
    drop_id = reward_config_ptr->drop_id;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(OutputResult *)(v4 + 80) = DropUtils::dropItems(
                                   this->player_,
                                   drop_id,
                                   1u,
                                   (const ActionReason *)(v4 + 240),
                                   (std::vector<ItemParam> *)(v4 + 304));
    if ( *(_DWORD *)(v4 + 80) )
    {
      LogLevel = OutputResult::getLogLevel((const OutputResult *const)(v4 + 80));
      common::milog::MiLogStream::create(
        &v50,
        &common::milog::MiLogDefault::default_log_obj_,
        LogLevel,
        "./src/player/group_link/player_group_link_comp.cpp",
        "onGroupBundleReward",
        559);
      v16 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v50,
              (const char (*)[36])"[GroupLink] dropItems failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v4 + 32) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v4 + 32));
      common::milog::MiLogStream::~MiLogStream(&v50);
      v3 = *(_DWORD *)(v4 + 80);
      v17 = 0;
LABEL_79:
      std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v4 + 304));
      std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)(v4 + 144));
      if ( !v17 )
        goto LABEL_81;
      goto LABEL_80;
    }
    if ( std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v4 + 304)) )
    {
      common::milog::MiLogStream::create(
        &v50,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/group_link/player_group_link_comp.cpp",
        "onGroupBundleReward",
        564);
      v18 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
              &v50,
              (const char (*)[53])"[GroupLink]dropItems item_param_vec empty. drop_id: ");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &reward_config_ptr->drop_id);
      v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v19, (const char (*)[13])" bundle_id: ");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v4 + 48));
      v22 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v21, (const char (*)[15])" activity_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v4 + 64));
      common::milog::MiLogStream::~MiLogStream(&v50);
      v3 = 0;
      v17 = 0;
      goto LABEL_79;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(this->player_);
    *(_DWORD *)(v4 + 32) = PlayerItemComp::checkAddItemBatch(
                             ItemComp,
                             (const std::vector<ItemParam> *)(v4 + 304),
                             (const ActionReason *)(v4 + 240));
    if ( !*(_DWORD *)(v4 + 32) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v24 = Player::getItemComp(this->player_);
      PlayerItemComp::addItemBatch(
        v24,
        (const std::vector<ItemParam> *)(v4 + 304),
        (const ActionReason *)(v4 + 240),
        0LL);
LABEL_78:
      v17 = 1;
      goto LABEL_79;
    }
    common::milog::MiLogStream::create(
      &v50,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/group_link/player_group_link_comp.cpp",
      "onGroupBundleReward",
      576);
    v25 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            &v50,
            (const char (*)[41])"[GroupLink]checkAddItemBatch fail. ret: ");
    v26 = common::milog::MiLogStream::operator<<<int,(int *)0>(v25, (const int *)(v4 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v26, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v50);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getCurAvatar((Player *const)(v4 + 176));
    Vector3::Vector3((Vector3 *const)(v4 + 112), 0.0, 0.0, 0.0);
    *(_QWORD *)(v4 + 208) = 0LL;
    *(_QWORD *)(v4 + 216) = 0LL;
    if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v4 + 176), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v50,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/group_link/player_group_link_comp.cpp",
        "onGroupBundleReward",
        582);
      v27 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              &v50,
              (const char (*)[24])"[GroupLink]cur avatar. ");
      v28 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 176));
      v29 = common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v27, v28);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v29, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v50);
      std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 176));
      Entity::getScene((const Entity *const)&v49);
      std::shared_ptr<Scene>::operator=((std::shared_ptr<Scene> *const)(v4 + 208), &v49);
      std::shared_ptr<Scene>::~shared_ptr(&v49);
      v30 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 176));
      Position = (unsigned __int64)Entity::getPosition((const Entity *const)v30);
      if ( (char)(Position & 7) >= *(_BYTE *)((Position >> 3) + 0x7FFF8000)
        && *(_BYTE *)((Position >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) != 0
        && (char)((Position + 11) & 7) >= *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) )
      {
        Position = __asan_report_load_n(Position, 12LL);
      }
      *(_QWORD *)(v4 + 112) = *(_QWORD *)Position;
      *(_DWORD *)(v4 + 120) = *(_DWORD *)(Position + 8);
    }
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v4 + 208), 0LL) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v49);
      p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49)->design_config.lua_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)(bundle_config_ptr + 10) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(bundle_config_ptr + 10) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(bundle_config_ptr + 10);
      }
      group_info_config_ptr = LuaConfigMgr::findGroupInfoConfig(p_lua_config_mgr, bundle_config_ptr[10]);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v49);
      if ( !group_info_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v50,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/group_link/player_group_link_comp.cpp",
          "onGroupBundleReward",
          592);
        v33 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v50,
                (const char (*)[49])"[GroupLink]findGroupInfoConfig fail. group_id : ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, bundle_config_ptr + 10);
        common::milog::MiLogStream::~MiLogStream(&v50);
        v3 = -1;
        v34 = 0;
        goto LABEL_76;
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v49);
      v35 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49)->design_config.lua_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)(bundle_config_ptr + 10) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(bundle_config_ptr + 10) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(bundle_config_ptr + 10);
      }
      LuaConfigMgr::getSceneIdByGroupId(v35, bundle_config_ptr[10]);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v49);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneComp = (unsigned int)Player::getSceneComp(this->player_);
      PlayerSceneComp::findScene((const PlayerSceneComp *const)&v49, SceneComp);
      std::shared_ptr<Scene>::operator=((std::shared_ptr<Scene> *const)(v4 + 208), &v49);
      std::shared_ptr<Scene>::~shared_ptr(&v49);
      if ( *(char *)(((unsigned __int64)&group_info_config_ptr->pos >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&group_info_config_ptr->pos.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)group_info_config_ptr + 19) & 7) >= *(_BYTE *)((((unsigned __int64)&group_info_config_ptr->pos.z
                                                                             + 3) >> 3)
                                                                           + 0x7FFF8000) )
      {
        __asan_report_load_n(&group_info_config_ptr->pos, 12LL);
      }
      *(_QWORD *)(v4 + 112) = *(_QWORD *)&group_info_config_ptr->pos.x;
      *(float *)(v4 + 120) = group_info_config_ptr->pos.z;
      common::milog::MiLogStream::create(
        &v50,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/group_link/player_group_link_comp.cpp",
        "onGroupBundleReward",
        599);
      v37 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v50,
              (const char (*)[41])"[GroupLink] getCurAvatar fail. new pos: ");
      operator<<(v37, (const Vector3 *)(v4 + 112));
      common::milog::MiLogStream::~MiLogStream(&v50);
    }
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v4 + 208), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v50,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/group_link/player_group_link_comp.cpp",
        "onGroupBundleReward",
        603);
      v38 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v50,
              (const char (*)[40])"[GroupLink]find scene fail. group_id : ");
      v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, bundle_config_ptr + 10);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v39, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v50);
      v3 = -1;
      v34 = 0;
    }
    else
    {
      DropParam::DropParam((DropParam *const)(v4 + 368));
      if ( *(_BYTE *)(((unsigned __int64)&reward_config_ptr->drop_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&reward_config_ptr->drop_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&reward_config_ptr->drop_id);
      }
      *(_DWORD *)(v4 + 368) = reward_config_ptr->drop_id;
      *(_DWORD *)(v4 + 372) = 1;
      *(_QWORD *)(v4 + 384) = *(_QWORD *)(v4 + 112);
      *(_DWORD *)(v4 + 392) = *(_DWORD *)(v4 + 120);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v4 + 380) = Player::getUid(this->player_);
      v40 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 208));
      Scene::dropItems(
        v40,
        (const std::vector<ItemParam> *)(v4 + 304),
        (const DropParam *)(v4 + 368),
        (const ActionReason *)(v4 + 240));
      v34 = 1;
    }
LABEL_76:
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 208));
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 176));
    if ( v34 != 1 )
    {
      v17 = 0;
      goto LABEL_79;
    }
    goto LABEL_78;
  }
LABEL_80:
  v3 = 0;
LABEL_81:
  result = v3;
  if ( v51 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
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

// Line 622: range 00000000166478C2-0000000016647B9F
void __fastcall PlayerGroupLinkComp::recordGroupFinishedBundle(
        PlayerGroupLinkComp *const this,
        uint32_t bundle_id,
        uint32_t activity_id,
        uint32_t schedule_id)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::unordered_set<unsigned int> *p_second; // rsi
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  unsigned int v15; // ecx
  char v16; // al
  std::pair<unsigned int,std::unordered_set<unsigned int> > *finish_data; // [rsp+28h] [rbp-A8h]
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-A0h] BYREF
  char v21[128]; // [rsp+50h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 13 bundle_id:621 48 4 15 activity_id:621 64 4 15 schedule_id:621";
  *(_QWORD *)(v4 + 16) = PlayerGroupLinkComp::recordGroupFinishedBundle;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 32) = bundle_id;
  *(_DWORD *)(v4 + 48) = activity_id;
  *(_DWORD *)(v4 + 64) = schedule_id;
  p_second = (std::unordered_set<unsigned int> *)(v4 + 48);
  finish_data = std::unordered_map<unsigned int,std::pair<unsigned int,std::unordered_set<unsigned int>>>::operator[](
                  &this->finished_group_bundle_map_,
                  (const std::unordered_map<unsigned int,std::pair<unsigned int,std::unordered_set<unsigned int> >>::key_type *)(v4 + 48));
  if ( *(_BYTE *)(((unsigned __int64)finish_data >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)finish_data >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(finish_data);
  }
  if ( finish_data->first && finish_data->first != *(_DWORD *)(v4 + 64) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/group_link/player_group_link_comp.cpp",
      "recordGroupFinishedBundle",
      626);
    v8 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v20,
           (const char (*)[47])"[GroupLink]schedule_id not match. bundle_id : ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 32));
    v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            v9,
            (const char (*)[22])" bundle schedule_id: ");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 64));
    v12 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            v11,
            (const char (*)[22])" record schedule id: ");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &finish_data->first);
    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v13, (const char (*)[16])" record bundle:");
    p_second = &finish_data->second;
    common::milog::MiLogStream::operator<<<unsigned int>(v14, &finish_data->second);
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  v15 = *(_DWORD *)(v4 + 64);
  v16 = *(_BYTE *)(((unsigned __int64)finish_data >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(p_second) = v16 != 0;
    __asan_report_store4(finish_data, p_second, finish_data);
  }
  finish_data->first = v15;
  std::unordered_set<unsigned int>::insert(
    &finish_data->second,
    (const std::unordered_set<unsigned int>::value_type *)(v4 + 32));
  if ( v21 == (char *)v4 )
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

// Line 634: range 0000000016647BA0-0000000016647D57
void __fastcall PlayerGroupLinkComp::deleteGroupFinishedBundle(
        PlayerGroupLinkComp *const this,
        uint32_t activity_id,
        uint32_t schedule_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int> > >,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int> > >,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 15 activity_id:633 64 8 8 iter:635";
  *(_QWORD *)(v3 + 16) = PlayerGroupLinkComp::deleteGroupFinishedBundle;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = activity_id;
  *(std::unordered_map<unsigned int,std::pair<unsigned int,std::unordered_set<unsigned int> >>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::pair<unsigned int,std::unordered_set<unsigned int>>>::find(&this->finished_group_bundle_map_, (const std::unordered_map<unsigned int,std::pair<unsigned int,std::unordered_set<unsigned int> >>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::pair<unsigned int,std::unordered_set<unsigned int>>>::end(&this->finished_group_bundle_map_)._M_cur;
  if ( !std::__detail::operator==<std::pair<unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int>>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int> > >,false> *)(v3 + 64),
          &__y) )
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int>>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int> > >,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v6->second);
    }
    if ( schedule_id == v6->second.first )
      std::unordered_map<unsigned int,std::pair<unsigned int,std::unordered_set<unsigned int>>>::erase(
        &this->finished_group_bundle_map_,
        (const std::unordered_map<unsigned int,std::pair<unsigned int,std::unordered_set<unsigned int> >>::key_type *)(v3 + 48));
  }
  if ( v9 == (char *)v3 )
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

// Line 648: range 0000000016647D58-0000000016647FE8
void __cdecl PlayerGroupLinkComp::registerObserver(PlayerGroupLinkComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::weak_ptr<PlayerGroupLinkComp> *p_this_wtr; // [rsp+10h] [rbp-C0h]
  std::weak_ptr<PlayerGroupLinkComp> v5; // [rsp+20h] [rbp-B0h] BYREF
  std::enable_shared_from_this<PlayerCompBase> v6; // [rsp+30h] [rbp-A0h] BYREF
  char v7[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:649 64 16 12 this_wtr:650";
  *(_QWORD *)(v1 + 16) = PlayerGroupLinkComp::registerObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<PlayerCompBase>::shared_from_this(&v6);
  std::dynamic_pointer_cast<PlayerGroupLinkComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)(v1 + 32));
  std::shared_ptr<PlayerCompBase>::~shared_ptr((std::shared_ptr<PlayerCompBase> *const)&v6);
  std::weak_ptr<PlayerGroupLinkComp>::weak_ptr<PlayerGroupLinkComp,void>(
    (std::weak_ptr<PlayerGroupLinkComp> *const)(v1 + 64),
    (const std::shared_ptr<PlayerGroupLinkComp> *)(v1 + 32));
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->activity_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    p_this_wtr = (std::weak_ptr<PlayerGroupLinkComp> *)Player::getEventComp(this->player_);
    std::weak_ptr<PlayerGroupLinkComp>::weak_ptr(&v5, (const std::weak_ptr<PlayerGroupLinkComp> *)(v1 + 64));
    PlayerEventComp::registerObserver<PlayerGroupLinkComp,ActivityScheduleEvent>(
      (PlayerEventComp *const)&v6,
      p_this_wtr,
      (void (*)(PlayerGroupLinkComp *, const ActivityScheduleEvent *))&v5);
    std::weak_ptr<Observer>::operator=(&this->activity_obs_wtr_, (std::weak_ptr<Observer> *)&v6);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v6);
    std::weak_ptr<PlayerGroupLinkComp>::~weak_ptr(&v5);
  }
  std::weak_ptr<PlayerGroupLinkComp>::~weak_ptr((std::weak_ptr<PlayerGroupLinkComp> *const)(v1 + 64));
  std::shared_ptr<PlayerGroupLinkComp>::~shared_ptr((std::shared_ptr<PlayerGroupLinkComp> *const)(v1 + 32));
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

// Line 659: range 0000000016647FEA-00000000166481E5
void __cdecl PlayerGroupLinkComp::onActivitySettle(PlayerGroupLinkComp *const this, const ActivityScheduleEvent *event)
{
  uint32_t schedule_id; // edx
  uint32_t v3; // edx
  uint32_t v4; // edx

  if ( *(char *)(((unsigned __int64)&event->is_start >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&event->is_start);
  if ( !event->is_start )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->schedule_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->schedule_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->schedule_id);
    }
    schedule_id = event->schedule_id;
    if ( *(_BYTE *)(((unsigned __int64)&event->activty_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->activty_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->activty_id);
    }
    PlayerGroupLinkComp::unregisterGroupLinkByActivity(this, event->activty_id, schedule_id);
    if ( *(_BYTE *)(((unsigned __int64)&event->schedule_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->schedule_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->schedule_id);
    }
    v3 = event->schedule_id;
    if ( *(_BYTE *)(((unsigned __int64)&event->activty_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->activty_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->activty_id);
    }
    PlayerGroupLinkComp::unregisterGroupBundleByActivity(this, event->activty_id, v3, 0);
    if ( *(_BYTE *)(((unsigned __int64)&event->schedule_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->schedule_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->schedule_id);
    }
    v4 = event->schedule_id;
    if ( *(_BYTE *)(((unsigned __int64)&event->activty_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->activty_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->activty_id);
    }
    PlayerGroupLinkComp::deleteGroupFinishedBundle(this, event->activty_id, v4);
  }
};

// Line 671: range 00000000166481E6-0000000016648E4B
void __cdecl PlayerGroupLinkComp::initAllGroupBundle(PlayerGroupLinkComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  const ActivityGroupLinksExcelConfigMgr *v5; // rcx
  common::milog::MiLogStream *v6; // rax
  const PlayerActivityComp *ActivityComp; // rdi
  uint32_t schedule_id; // ecx
  common::milog::MiLogStream *v9; // rax
  Scene *v10; // rax
  SceneBlockGroupComp *BlockGroupComp; // rax
  unsigned __int64 v12; // rdx
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v13; // rax
  _DWORD *v14; // rdx
  const PlayerActivityComp *v15; // rdi
  unsigned int first; // ecx
  common::milog::MiLogStream *v17; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v18; // rax
  _DWORD *v19; // rdx
  uint32_t revise_id; // [rsp+1Ch] [rbp-294h]
  std::unordered_map<unsigned int,GroupLinkBundle>::iterator __for_begin; // [rsp+20h] [rbp-290h] BYREF
  std::unordered_map<unsigned int,GroupLinkBundle>::iterator __for_end; // [rsp+28h] [rbp-288h] BYREF
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::iterator __for_begin_0; // [rsp+30h] [rbp-280h] BYREF
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::iterator __for_end_0; // [rsp+38h] [rbp-278h] BYREF
  const ActivityGroupLinksExcelConfigMgr *activity_group_links_config_mgr; // [rsp+40h] [rbp-270h]
  std::unordered_map<unsigned int,GroupLinkBundle> *__for_range; // [rsp+48h] [rbp-268h]
  std::vector<unsigned int> *__for_range_1; // [rsp+50h] [rbp-260h]
  std::unordered_map<unsigned int,std::pair<unsigned int,std::unordered_set<unsigned int> >> *__for_range_2; // [rsp+58h] [rbp-258h]
  std::vector<unsigned int> *__for_range_3; // [rsp+60h] [rbp-250h]
  std::pair<unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int> > > *v31; // [rsp+68h] [rbp-248h]
  std::tuple_element<0,std::pair<unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int> > > >::type *activity_id; // [rsp+70h] [rbp-240h]
  std::tuple_element<1,std::pair<unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int> > > >::type *data; // [rsp+78h] [rbp-238h]
  const std::pair<unsigned int const,GroupLinkBundle> *v34; // [rsp+80h] [rbp-230h]
  std::tuple_element<0,const std::pair<unsigned int const,GroupLinkBundle> >::type *bundle_id; // [rsp+88h] [rbp-228h]
  std::tuple_element<1,const std::pair<unsigned int const,GroupLinkBundle> >::type *bundle_info; // [rsp+90h] [rbp-220h]
  const data::GroupLinksBundleExcelConfig *bundle_config_ptr; // [rsp+98h] [rbp-218h]
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *__for_range_0; // [rsp+A0h] [rbp-210h]
  std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > *__in; // [rsp+A8h] [rbp-208h]
  std::tuple_element<0,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *scene_ptr; // [rsp+B0h] [rbp-200h]
  std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *group_vec; // [rsp+B8h] [rbp-1F8h]
  std::shared_ptr<Config> v42; // [rsp+C0h] [rbp-1F0h] BYREF
  common::milog::MiLogStream v43; // [rsp+D0h] [rbp-1E0h] BYREF
  common::milog::MiLogStream v44; // [rsp+F0h] [rbp-1C0h] BYREF
  common::milog::MiLogStream v45; // [rsp+110h] [rbp-1A0h] BYREF
  char v46[384]; // [rsp+130h] [rbp-180h] BYREF

  v1 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(352LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 32 4 15 activity_id:722 48 24 24 delete_bundle_id_vec:672 112 24 26 delete_activity_id_vec:713"
                        " 176 48 19 scene_group_map:698 256 56 24 tmp_group_bundle_map:675";
  *(_QWORD *)(v1 + 16) = PlayerGroupLinkComp::initAllGroupBundle;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61956;
  v3[536862722] = -218959360;
  v3[536862723] = 62194;
  v3[536862724] = -218959360;
  v3[536862725] = 62194;
  v3[536862727] = -218959118;
  v3[536862729] = -218103808;
  v3[536862730] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 48));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v42);
  activity_group_links_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42)->design_config.txt_config_mgr.activity_group_links_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v42);
  std::unordered_map<unsigned int,GroupLinkBundle>::unordered_map(
    (std::unordered_map<unsigned int,GroupLinkBundle> *const)(v1 + 256),
    &this->group_bundle_map_);
  __for_range = (std::unordered_map<unsigned int,GroupLinkBundle> *)(v1 + 256);
  __for_begin._M_cur = std::unordered_map<unsigned int,GroupLinkBundle>::begin((std::unordered_map<unsigned int,GroupLinkBundle> *const)(v1 + 256))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,GroupLinkBundle>::end((std::unordered_map<unsigned int,GroupLinkBundle> *const)(v1 + 256))._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,GroupLinkBundle>,false>(&__for_begin, &__for_end) )
  {
    v34 = std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false>::operator*(&__for_begin);
    bundle_id = std::get<0ul,unsigned int const,GroupLinkBundle>(v34);
    bundle_info = (std::tuple_element<1,const std::pair<unsigned int const,GroupLinkBundle> >::type *)std::get<1ul,unsigned int const,GroupLinkBundle>(v34);
    if ( *(_BYTE *)(((unsigned __int64)bundle_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)bundle_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bundle_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(bundle_id);
    }
    if ( !PlayerGroupLinkComp::isGroupBundleRegistered(this, *bundle_id) )
    {
      common::milog::MiLogStream::create(
        &v43,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/group_link/player_group_link_comp.cpp",
        "initAllGroupBundle",
        681);
      v4 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
             &v43,
             (const char (*)[45])"[GroupLink]bundle not registered, bundle_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, bundle_id);
      common::milog::MiLogStream::~MiLogStream(&v43);
    }
    else
    {
      v5 = activity_group_links_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)bundle_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)bundle_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bundle_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(bundle_id);
      }
      bundle_config_ptr = data::ActivityGroupLinksExcelConfigMgrBase::findGroupLinksBundleExcelConfig(v5, *bundle_id);
      if ( bundle_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        ActivityComp = Player::getActivityComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&bundle_info->schedule_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)bundle_info + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bundle_info->schedule_id >> 3)
                                                                    + 0x7FFF8000) )
        {
          ActivityComp = (const PlayerActivityComp *)&bundle_info->schedule_id;
          __asan_report_load4(&bundle_info->schedule_id);
        }
        schedule_id = bundle_info->schedule_id;
        if ( *(_BYTE *)(((unsigned __int64)&bundle_info->activity_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)bundle_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bundle_info->activity_id >> 3)
                                                                    + 0x7FFF8000) )
        {
          ActivityComp = (const PlayerActivityComp *)&bundle_info->activity_id;
          __asan_report_load4(&bundle_info->activity_id);
        }
        if ( !PlayerActivityComp::isActivityOpen(ActivityComp, bundle_info->activity_id, schedule_id) )
        {
          common::milog::MiLogStream::create(
            &v45,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/group_link/player_group_link_comp.cpp",
            "initAllGroupBundle",
            693);
          v9 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                 &v45,
                 (const char (*)[43])"[GroupLink]activity not open. bundle_id : ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, bundle_id);
          common::milog::MiLogStream::~MiLogStream(&v45);
          std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v1 + 48), bundle_id);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&bundle_config_ptr->revise_level >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&bundle_config_ptr->revise_level >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&bundle_config_ptr->revise_level);
          }
          revise_id = bundle_config_ptr->revise_level;
          std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v1 + 176));
          PlayerGroupLinkComp::getGroupSceneMap(
            this,
            &bundle_config_ptr->group_list,
            (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v1 + 176));
          __for_range_0 = (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v1 + 176);
          __for_begin_0._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::begin((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v1 + 176))._M_node;
          __for_end_0._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::end(__for_range_0)._M_node;
          while ( std::operator!=(&__for_begin_0, &__for_end_0) )
          {
            __in = std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator*(&__for_begin_0);
            scene_ptr = std::get<0ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(__in);
            group_vec = std::get<1ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(__in);
            if ( std::operator!=<Scene>(0LL, scene_ptr) )
            {
              v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
              BlockGroupComp = Scene::getBlockGroupComp(v10);
              if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v12 = (unsigned __int64)(BlockGroupComp->_vptr_SceneCompBase + 12);
              if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              (*(void (__fastcall **)(SceneBlockGroupComp *, std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *, _QWORD, _QWORD))v12)(
                BlockGroupComp,
                group_vec,
                0LL,
                revise_id);
            }
            std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator++(&__for_begin_0);
          }
          std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::~map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v1 + 176));
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v44,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/group_link/player_group_link_comp.cpp",
          "initAllGroupBundle",
          687);
        v6 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
               &v44,
               (const char (*)[62])"[GroupLink]findGroupLinksBundleExcelConfig fail. bundle_id : ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, bundle_id);
        common::milog::MiLogStream::~MiLogStream(&v44);
        std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v1 + 48), bundle_id);
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false>::operator++(&__for_begin);
  }
  __for_range_1 = (std::vector<unsigned int> *)(v1 + 48);
  __for_begin_0._M_node = (std::_Rb_tree_iterator<std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::_Base_ptr)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 48))._M_current;
  __for_end_0._M_node = (std::_Rb_tree_iterator<std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::_Base_ptr)std::vector<unsigned int>::end(__for_range_1)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin_0,
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end_0) )
  {
    v13 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin_0);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v13);
    }
    *(_DWORD *)(v1 + 32) = *v14;
    std::unordered_map<unsigned int,GroupLinkBundle>::erase(
      &this->group_bundle_map_,
      (const std::unordered_map<unsigned int,GroupLinkBundle>::key_type *)(v1 + 32));
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin_0);
  }
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 112));
  __for_range_2 = &this->finished_group_bundle_map_;
  __for_begin_0._M_node = (std::_Rb_tree_iterator<std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::_Base_ptr)std::unordered_map<unsigned int,std::pair<unsigned int,std::unordered_set<unsigned int>>>::begin(&this->finished_group_bundle_map_)._M_cur;
  __for_end_0._M_node = (std::_Rb_tree_iterator<std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::_Base_ptr)std::unordered_map<unsigned int,std::pair<unsigned int,std::unordered_set<unsigned int>>>::end(__for_range_2)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int>>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int> > >,false> *)&__for_begin_0,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int> > >,false> *)&__for_end_0) )
  {
    v31 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int>>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int> > >,false,false> *const)&__for_begin_0);
    activity_id = std::get<0ul,unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int>>>(v31);
    data = std::get<1ul,unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int>>>(v31);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v15 = Player::getActivityComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) <= 3 )
    {
      v15 = (const PlayerActivityComp *)data;
      __asan_report_load4(data);
    }
    first = data->first;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      v15 = (const PlayerActivityComp *)activity_id;
      __asan_report_load4(activity_id);
    }
    if ( !PlayerActivityComp::isActivityOpen(v15, *activity_id, first) )
    {
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/group_link/player_group_link_comp.cpp",
        "initAllGroupBundle",
        718);
      v17 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              &v45,
              (const char (*)[45])"[GroupLink]activity not open. activity_id : ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, activity_id);
      common::milog::MiLogStream::~MiLogStream(&v45);
      std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v1 + 112), activity_id);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int>>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int> > >,false,false> *const)&__for_begin_0);
  }
  __for_range_3 = (std::vector<unsigned int> *)(v1 + 112);
  __for_begin_0._M_node = (std::_Rb_tree_iterator<std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::_Base_ptr)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 112))._M_current;
  __for_end_0._M_node = (std::_Rb_tree_iterator<std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::_Base_ptr)std::vector<unsigned int>::end(__for_range_3)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin_0,
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end_0) )
  {
    v18 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin_0);
    v19 = v18;
    if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v18);
    }
    *(_DWORD *)(v1 + 32) = *v19;
    std::unordered_map<unsigned int,std::pair<unsigned int,std::unordered_set<unsigned int>>>::erase(
      &this->finished_group_bundle_map_,
      (const std::unordered_map<unsigned int,std::pair<unsigned int,std::unordered_set<unsigned int> >>::key_type *)(v1 + 32));
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin_0);
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 112));
  std::unordered_map<unsigned int,GroupLinkBundle>::~unordered_map((std::unordered_map<unsigned int,GroupLinkBundle> *const)(v1 + 256));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 48));
  if ( v46 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF801C) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8024) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8028) = -168430091;
  }
};

// Line 729: range 0000000016648E4C-0000000016648FC3
bool __fastcall PlayerGroupLinkComp::isGroupBundleFinish(
        const PlayerGroupLinkComp *const this,
        uint32_t activity_id,
        uint32_t bundle_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool result; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int> > >,false,false>::pointer v7; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int> > >,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v10[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 15 activity_id:728 48 4 13 bundle_id:728 64 8 8 iter:730";
  *(_QWORD *)(v3 + 16) = PlayerGroupLinkComp::isGroupBundleFinish;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 32) = activity_id;
  *(_DWORD *)(v3 + 48) = bundle_id;
  *(std::unordered_map<unsigned int,std::pair<unsigned int,std::unordered_set<unsigned int> >>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::pair<unsigned int,std::unordered_set<unsigned int>>>::find(&this->finished_group_bundle_map_, (const std::unordered_map<unsigned int,std::pair<unsigned int,std::unordered_set<unsigned int> >>::key_type *)(v3 + 32));
  __y._M_cur = std::unordered_map<unsigned int,std::pair<unsigned int,std::unordered_set<unsigned int>>>::end(&this->finished_group_bundle_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int>>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int> > >,false> *)(v3 + 64),
         &__y) )
  {
    result = 0;
  }
  else
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,std::unordered_set<unsigned int> > >,false,false> *const)(v3 + 64));
    result = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
               &v7->second.second,
               (const unsigned int *)(v3 + 48));
  }
  if ( v10 == (char *)v3 )
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

// Line 739: range 0000000016648FC4-0000000016649253
std::vector<unsigned int> *__fastcall PlayerGroupLinkComp::getGroupIdVec(
        std::vector<unsigned int> *retstr,
        const PlayerGroupLinkComp *const this,
        uint32_t bundle_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  const data::GroupLinksBundleExcelConfig *bundle_config_ptr; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v11; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v12; // [rsp+40h] [rbp-80h] BYREF
  char v13[96]; // [rsp+60h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 13 bundle_id:738";
  *(_QWORD *)(v3 + 16) = PlayerGroupLinkComp::getGroupIdVec;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = bundle_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
  bundle_config_ptr = data::ActivityGroupLinksExcelConfigMgrBase::findGroupLinksBundleExcelConfig(
                        &v6->design_config.txt_config_mgr.activity_group_links_config_mgr,
                        *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( bundle_config_ptr )
  {
    std::vector<unsigned int>::vector(retstr, &bundle_config_ptr->group_list);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/group_link/player_group_link_comp.cpp",
      "getGroupIdVec",
      743);
    v7 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
           &v12,
           (const char (*)[62])"[GroupLink]findGroupLinksBundleExcelConfig fail. bundle_id : ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v12);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 24LL);
    }
    retstr->_M_impl._M_start = 0LL;
    retstr->_M_impl._M_finish = 0LL;
    retstr->_M_impl._M_end_of_storage = 0LL;
    std::vector<unsigned int>::vector(retstr);
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
  return retstr;
};

// Line 750: range 0000000016649254-00000000166496F8
void __fastcall PlayerGroupLinkComp::broadcastActiveGroupLuaEvent(
        PlayerGroupLinkComp *const this,
        uint32_t bundle_id,
        EventPtr *p_event_ptr)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  Scene *v8; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v9; // rax
  Group *v10; // rax
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::iterator __for_begin; // [rsp+28h] [rbp-138h] BYREF
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::iterator __for_end; // [rsp+30h] [rbp-130h] BYREF
  std::vector<unsigned int>::iterator __for_begin_0; // [rsp+38h] [rbp-128h] BYREF
  std::vector<unsigned int>::iterator __for_end_0; // [rsp+40h] [rbp-120h] BYREF
  const data::GroupLinksBundleExcelConfig *bundle_config_ptr; // [rsp+48h] [rbp-118h]
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *__for_range; // [rsp+50h] [rbp-110h]
  std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > *__in; // [rsp+58h] [rbp-108h]
  std::tuple_element<0,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *scene_ptr; // [rsp+60h] [rbp-100h]
  std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *group_vec; // [rsp+68h] [rbp-F8h]
  SceneBlockGroupComp *block_group_comp; // [rsp+70h] [rbp-F0h]
  std::vector<unsigned int> *__for_range_0; // [rsp+78h] [rbp-E8h]
  common::milog::MiLogStream v23; // [rsp+80h] [rbp-E0h] BYREF
  char v24[192]; // [rsp+A0h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 13 bundle_id:749 48 16 13 group_ptr:767 80 48 19 scene_group_map:757";
  *(_QWORD *)(v3 + 16) = PlayerGroupLinkComp::broadcastActiveGroupLuaEvent;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = 62194;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 32) = bundle_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 48));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
  bundle_config_ptr = data::ActivityGroupLinksExcelConfigMgrBase::findGroupLinksBundleExcelConfig(
                        &v6->design_config.txt_config_mgr.activity_group_links_config_mgr,
                        *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 48));
  if ( bundle_config_ptr )
  {
    std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v3 + 80));
    PlayerGroupLinkComp::getGroupSceneMap(
      this,
      &bundle_config_ptr->group_list,
      (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v3 + 80));
    __for_range = (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v3 + 80);
    __for_begin._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::begin((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v3 + 80))._M_node;
    __for_end._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::end((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v3 + 80))._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator*(&__for_begin);
      scene_ptr = std::get<0ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(__in);
      group_vec = std::get<1ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(__in);
      if ( std::operator!=<Scene>(0LL, scene_ptr) )
      {
        v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
        block_group_comp = Scene::getBlockGroupComp(v8);
        __for_range_0 = group_vec;
        __for_begin_0._M_current = std::vector<unsigned int>::begin(group_vec)._M_current;
        __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
        {
          v9 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
          if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v9);
          }
          SceneBlockGroupComp::getActiveGroup((SceneBlockGroupComp *const)(v3 + 48), (uint32_t)block_group_comp);
          if ( std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v3 + 48)) )
          {
            v10 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
            Group::handleEvent(v10, p_event_ptr);
          }
          std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 48));
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
        }
      }
      std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator++(&__for_begin);
    }
    std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::~map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v3 + 80));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/group_link/player_group_link_comp.cpp",
      "broadcastActiveGroupLuaEvent",
      754);
    v7 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
           &v23,
           (const char (*)[62])"[GroupLink]findGroupLinksBundleExcelConfig fail. bundle_id : ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  if ( v24 == (char *)v3 )
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
};

// Line 778: range 00000000166496FA-00000000166498C9
std::vector<unsigned int> *__cdecl PlayerGroupLinkComp::findGroupBundleByActivity(
        std::vector<unsigned int> *retstr,
        PlayerGroupLinkComp *const this,
        uint32_t activity_id)
{
  common::milog::MiLogStream *v3; // rcx
  uint32_t *p_activity_id; // rax
  std::unordered_map<unsigned int,GroupLinkBundle>::iterator __for_begin; // [rsp+20h] [rbp-60h] BYREF
  std::unordered_map<unsigned int,GroupLinkBundle>::iterator __for_end; // [rsp+28h] [rbp-58h] BYREF
  std::unordered_map<unsigned int,GroupLinkBundle> *__for_range; // [rsp+30h] [rbp-50h]
  const std::pair<unsigned int const,GroupLinkBundle> *v10; // [rsp+38h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,GroupLinkBundle> >::type *bundle_id; // [rsp+40h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,GroupLinkBundle> >::type *bundle_data; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v13; // [rsp+50h] [rbp-30h] BYREF

  std::vector<unsigned int>::vector(retstr);
  if ( activity_id )
  {
    __for_range = &this->group_bundle_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,GroupLinkBundle>::begin(&this->group_bundle_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,GroupLinkBundle>::end(&this->group_bundle_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,GroupLinkBundle>,false>(&__for_begin, &__for_end) )
    {
      v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false>::operator*(&__for_begin);
      bundle_id = std::get<0ul,unsigned int const,GroupLinkBundle>(v10);
      bundle_data = (std::tuple_element<1,const std::pair<unsigned int const,GroupLinkBundle> >::type *)std::get<1ul,unsigned int const,GroupLinkBundle>(v10);
      p_activity_id = &bundle_data->activity_id;
      if ( *(_BYTE *)(((unsigned __int64)p_activity_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_activity_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(p_activity_id);
      }
      if ( activity_id == bundle_data->activity_id )
        std::vector<unsigned int>::push_back(retstr, bundle_id);
      std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false>::operator++(&__for_begin);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/group_link/player_group_link_comp.cpp",
      "findGroupBundleByActivity",
      782);
    v3 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v13, (const char (*)[18])"activity_id is 0.");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v3, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  return retstr;
};

// Line 796: range 00000000166498CA-0000000016649C31
void __cdecl PlayerGroupLinkComp::getGroupSceneMap(
        PlayerGroupLinkComp *const this,
        const std::vector<unsigned int> *group_vec,
        std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *scene_group_map)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v6; // rax
  _DWORD *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::vector<unsigned int> *v10; // rax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-D8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-D0h] BYREF
  const LuaConfigMgr *lua_config_mgr; // [rsp+38h] [rbp-C8h]
  PlayerSceneComp *scene_comp; // [rsp+40h] [rbp-C0h]
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-B8h]
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 12 group_id:799 48 4 12 scene_id:801 64 16 13 scene_ptr:802";
  *(_QWORD *)(v3 + 16) = PlayerGroupLinkComp::getGroupSceneMap;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 64));
  lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64))->design_config.lua_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene_comp = Player::getSceneComp(this->player_);
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
    *(_DWORD *)(v3 + 48) = LuaConfigMgr::getSceneIdByGroupId(lua_config_mgr, *(_DWORD *)(v3 + 32));
    PlayerSceneComp::getPersonalScene((PlayerSceneComp *const)(v3 + 64), (uint32_t)scene_comp);
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/group_link/player_group_link_comp.cpp",
        "getGroupSceneMap",
        805);
      v8 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             &v17,
             (const char (*)[19])"[GroupLink] scene:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" nullptr");
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
    else
    {
      v10 = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::operator[](
              scene_group_map,
              (const std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::key_type *)(v3 + 64));
      std::vector<unsigned int>::push_back(v10, (const std::vector<unsigned int>::value_type *)(v3 + 32));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
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
};

// Line 812: range 0000000016649C32-0000000016649E57
int32_t __cdecl PlayerGroupLinkComp::sendGroupLinkBundleNotify(PlayerGroupLinkComp *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  proto::GroupLinkBundle *v5; // rdx
  int32_t result; // eax
  std::unordered_map<unsigned int,GroupLinkBundle>::iterator __for_begin; // [rsp+10h] [rbp-E0h] BYREF
  std::unordered_map<unsigned int,GroupLinkBundle>::iterator __for_end; // [rsp+18h] [rbp-D8h] BYREF
  std::unordered_map<unsigned int,GroupLinkBundle> *__for_range; // [rsp+20h] [rbp-D0h]
  const std::pair<unsigned int const,GroupLinkBundle> *v10; // [rsp+28h] [rbp-C8h]
  std::tuple_element<0,const std::pair<unsigned int const,GroupLinkBundle> >::type *bundle_id; // [rsp+30h] [rbp-C0h]
  std::tuple_element<1,const std::pair<unsigned int const,GroupLinkBundle> >::type *bundle; // [rsp+38h] [rbp-B8h]
  char v13[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 48 10 notify:813";
  *(_QWORD *)(v2 + 16) = PlayerGroupLinkComp::sendGroupLinkBundleNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  proto::GroupLinkAllNotify::GroupLinkAllNotify((proto::GroupLinkAllNotify *const)(v2 + 48));
  __for_range = &this->group_bundle_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,GroupLinkBundle>::begin(&this->group_bundle_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,GroupLinkBundle>::end(&this->group_bundle_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,GroupLinkBundle>,false>(&__for_begin, &__for_end) )
  {
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false>::operator*(&__for_begin);
    bundle_id = std::get<0ul,unsigned int const,GroupLinkBundle>(v10);
    bundle = (std::tuple_element<1,const std::pair<unsigned int const,GroupLinkBundle> >::type *)std::get<1ul,unsigned int const,GroupLinkBundle>(v10);
    v5 = proto::GroupLinkAllNotify::add_bundle_list((proto::GroupLinkAllNotify *const)(v2 + 48));
    PlayerGroupLinkComp::fillGroupLinkBundle(this, bundle, v5);
    std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false>::operator++(&__for_begin);
  }
  Player::sendProto(player, (const google::protobuf::Message *)(v2 + 48));
  proto::GroupLinkAllNotify::~GroupLinkAllNotify((proto::GroupLinkAllNotify *const)(v2 + 48));
  result = 0;
  if ( v13 == (char *)v2 )
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

// Line 823: range 0000000016649E58-0000000016649FDF
int32_t __cdecl PlayerGroupLinkComp::sendGroupLinkDeleteBundleNotify(
        PlayerGroupLinkComp *const this,
        uint32_t bundle_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerSceneComp *SceneComp; // rax
  int32_t result; // eax
  char v7[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 10 notify:824";
  *(_QWORD *)(v2 + 16) = PlayerGroupLinkComp::sendGroupLinkDeleteBundleNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  proto::GroupLinkDeleteNotify::GroupLinkDeleteNotify((proto::GroupLinkDeleteNotify *const)(v2 + 32));
  proto::GroupLinkDeleteNotify::set_bundle_id((proto::GroupLinkDeleteNotify *const)(v2 + 32), bundle_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  PlayerSceneComp::notifyPlayerWorldAndSelf(SceneComp, (const google::protobuf::Message *)(v2 + 32));
  proto::GroupLinkDeleteNotify::~GroupLinkDeleteNotify((proto::GroupLinkDeleteNotify *const)(v2 + 32));
  result = 0;
  if ( v7 == (char *)v2 )
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

// Line 831: range 0000000016649FE0-000000001664A1C7
void __cdecl PlayerGroupLinkComp::onGMClearAll(PlayerGroupLinkComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  size_t v4; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false>::pointer v6; // rax
  uint32_t *p_first; // rdx
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLinkBundle>,false> __y; // [rsp+20h] [rbp-70h] BYREF
  size_t count; // [rsp+28h] [rbp-68h]
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 8 iter:832";
  *(_QWORD *)(v1 + 16) = PlayerGroupLinkComp::onGMClearAll;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  *(std::unordered_map<unsigned int,GroupLinkBundle>::iterator *)(v1 + 32) = std::unordered_map<unsigned int,GroupLinkBundle>::begin(&this->group_bundle_map_);
  count = 0LL;
  while ( 1 )
  {
    v4 = count++;
    if ( v4 > 0x3E7 )
      break;
    __y._M_cur = std::unordered_map<unsigned int,GroupLinkBundle>::end(&this->group_bundle_map_)._M_cur;
    if ( !std::__detail::operator!=<std::pair<unsigned int const,GroupLinkBundle>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLinkBundle>,false> *)(v1 + 32),
            &__y) )
      break;
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false> *const)(v1 + 32));
    p_first = (uint32_t *)&v6->first;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    PlayerGroupLinkComp::unregisterGroupBundle(this, *p_first, 1);
    *(std::unordered_map<unsigned int,GroupLinkBundle>::iterator *)(v1 + 32) = std::unordered_map<unsigned int,GroupLinkBundle>::begin(&this->group_bundle_map_);
  }
  std::unordered_map<unsigned int,GroupLinkBundle>::clear(&this->group_bundle_map_);
  std::unordered_map<unsigned int,GroupLink>::clear(&this->links_map_);
  std::unordered_map<unsigned int,std::pair<unsigned int,std::unordered_set<unsigned int>>>::clear(&this->finished_group_bundle_map_);
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 846: range 000000001664A1C8-000000001664A358
int32_t __cdecl PlayerGroupLinkComp::sendGroupLinkBundleActivateNotify(
        PlayerGroupLinkComp *const this,
        const GroupLinkBundle *bundle)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  proto::GroupLinkBundle *v5; // rdx
  PlayerSceneComp *SceneComp; // rax
  int32_t result; // eax
  char v8[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 10 notify:847";
  *(_QWORD *)(v2 + 16) = PlayerGroupLinkComp::sendGroupLinkBundleActivateNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  proto::GroupLinkChangeNotify::GroupLinkChangeNotify((proto::GroupLinkChangeNotify *const)(v2 + 32));
  v5 = proto::GroupLinkChangeNotify::mutable_bundle((proto::GroupLinkChangeNotify *const)(v2 + 32));
  PlayerGroupLinkComp::fillGroupLinkBundle(this, bundle, v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  PlayerSceneComp::notifyPlayerWorldAndSelf(SceneComp, (const google::protobuf::Message *)(v2 + 32));
  proto::GroupLinkChangeNotify::~GroupLinkChangeNotify((proto::GroupLinkChangeNotify *const)(v2 + 32));
  result = 0;
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
  return result;
};

// Line 854: range 000000001664A35A-000000001664A7D9
int32_t __cdecl PlayerGroupLinkComp::fillGroupLinkBundle(
        const PlayerGroupLinkComp *const this,
        const GroupLinkBundle *bundle,
        proto::GroupLinkBundle *proto)
{
  ActivityGroupLinksExcelConfigMgr *p_activity_group_links_config_mgr; // rcx
  common::milog::MiLogStream *v4; // rdx
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  proto::Vector *v8; // rax
  LuaConfigMgr *v9; // rcx
  google::protobuf::uint32 SceneIdByGroupId; // edx
  const data::GroupLinksBundleExcelConfig *bundle_config_ptr; // [rsp+20h] [rbp-50h]
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v14; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  p_activity_group_links_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.activity_group_links_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)bundle >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)bundle & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bundle >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(bundle);
  }
  bundle_config_ptr = data::ActivityGroupLinksExcelConfigMgrBase::findGroupLinksBundleExcelConfig(
                        p_activity_group_links_config_mgr,
                        bundle->bundle_id);
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( bundle_config_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v14);
    p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.lua_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&bundle_config_ptr->hint_group >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&bundle_config_ptr->hint_group >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&bundle_config_ptr->hint_group);
    }
    group_info_config_ptr = LuaConfigMgr::findGroupInfoConfig(p_lua_config_mgr, bundle_config_ptr->hint_group);
    std::shared_ptr<Config>::~shared_ptr(&v14);
    if ( group_info_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)bundle >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)bundle & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bundle >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(bundle);
      }
      proto::GroupLinkBundle::set_bundle_id(proto, bundle->bundle_id);
      if ( *(_BYTE *)(((unsigned __int64)&bundle_config_ptr->hint_radius >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)bundle_config_ptr + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bundle_config_ptr->hint_radius >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(&bundle_config_ptr->hint_radius);
      }
      proto::GroupLinkBundle::set_radius(proto, bundle_config_ptr->hint_radius);
      v8 = proto::GroupLinkBundle::mutable_center(proto);
      Vector3::toClient(&group_info_config_ptr->pos, v8);
      if ( *(_BYTE *)(((unsigned __int64)&bundle->is_activated >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)bundle + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&bundle->is_activated >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&bundle->is_activated);
      }
      proto::GroupLinkBundle::set_is_activated(proto, bundle->is_activated);
      if ( *(_BYTE *)(((unsigned __int64)&bundle->is_show_mark >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)bundle + 13) & 7) >= *(_BYTE *)(((unsigned __int64)&bundle->is_show_mark >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&bundle->is_show_mark);
      }
      proto::GroupLinkBundle::set_is_show_mark(proto, bundle->is_show_mark);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v14);
      v9 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.lua_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&bundle_config_ptr->hint_group >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&bundle_config_ptr->hint_group >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&bundle_config_ptr->hint_group);
      }
      SceneIdByGroupId = LuaConfigMgr::getSceneIdByGroupId(v9, bundle_config_ptr->hint_group);
      proto::GroupLinkBundle::set_scene_id(proto, SceneIdByGroupId);
      std::shared_ptr<Config>::~shared_ptr(&v14);
      return 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/group_link/player_group_link_comp.cpp",
        "fillGroupLinkBundle",
        864);
      v7 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
             &v15,
             (const char (*)[51])"[GroupLink]findGroupScriptConfig fail. group_id : ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &bundle_config_ptr->hint_group);
      common::milog::MiLogStream::~MiLogStream(&v15);
      return -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/group_link/player_group_link_comp.cpp",
      "fillGroupLinkBundle",
      858);
    v4 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
           &v15,
           (const char (*)[62])"[GroupLink]findGroupLinksBundleExcelConfig fail. bundle_id : ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &bundle->bundle_id);
    common::milog::MiLogStream::~MiLogStream(&v15);
    return -1;
  }
};

// Line 877: range 000000001664A7DA-000000001664AB53
__int64 __fastcall PlayerGroupLinkComp::updateBundleMarkShowState(
        PlayerGroupLinkComp *const this,
        uint32_t bundle_id,
        bool is_show)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false>::pointer v7; // rax
  bool *p_is_show_mark; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  proto::GroupLinkBundle *v11; // rax
  PlayerSceneComp *SceneComp; // rax
  __int64 result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLinkBundle>,false> __y; // [rsp+10h] [rbp-E0h] BYREF
  GroupLinkBundle *bundle; // [rsp+18h] [rbp-D8h]
  char v17[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 13 bundle_id:876 64 8 8 iter:878 96 32 10 notify:890";
  *(_QWORD *)(v3 + 16) = PlayerGroupLinkComp::updateBundleMarkShowState;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 48) = bundle_id;
  *(std::unordered_map<unsigned int,GroupLinkBundle>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,GroupLinkBundle>::find(
                                                                               &this->group_bundle_map_,
                                                                               (const std::unordered_map<unsigned int,GroupLinkBundle>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,GroupLinkBundle>::end(&this->group_bundle_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,GroupLinkBundle>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLinkBundle>,false> *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/group_link/player_group_link_comp.cpp",
      "updateBundleMarkShowState",
      881);
    v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           (common::milog::MiLogStream *const)(v3 + 96),
           (const char (*)[30])"bundle not found , bundle_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  }
  else
  {
    v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLinkBundle>,false,false> *const)(v3 + 64));
    bundle = &v7->second;
    p_is_show_mark = &v7->second.is_show_mark;
    if ( *(_BYTE *)(((unsigned __int64)p_is_show_mark >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_show_mark & 7) >= *(_BYTE *)(((unsigned __int64)p_is_show_mark >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_show_mark);
    }
    if ( is_show != bundle->is_show_mark )
    {
      v9 = ((_BYTE)bundle + 13) & 7;
      v10 = (*(_BYTE *)(((unsigned __int64)&bundle->is_show_mark >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&bundle->is_show_mark >> 3) + 0x7FFF8000));
      if ( (_BYTE)v10 )
        __asan_report_store1(&bundle->is_show_mark, v9, v10);
      bundle->is_show_mark = is_show;
      proto::GroupLinkMarkUpdateNotify::GroupLinkMarkUpdateNotify((proto::GroupLinkMarkUpdateNotify *const)(v3 + 96));
      v11 = proto::GroupLinkMarkUpdateNotify::mutable_bundle((proto::GroupLinkMarkUpdateNotify *const)(v3 + 96));
      PlayerGroupLinkComp::fillGroupLinkBundle(this, bundle, v11);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneComp = Player::getSceneComp(this->player_);
      PlayerSceneComp::notifyPlayerWorldAndSelf(SceneComp, (const google::protobuf::Message *)(v3 + 96));
      proto::GroupLinkMarkUpdateNotify::~GroupLinkMarkUpdateNotify((proto::GroupLinkMarkUpdateNotify *const)(v3 + 96));
    }
  }
  result = 0LL;
  if ( v17 == (char *)v3 )
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

// Line 897: range 000000001664AB54-000000001664ADC2
__int64 __fastcall PlayerGroupLinkComp::updateBundleMarkShowStateByGroupId(
        PlayerGroupLinkComp *const this,
        uint32_t group_id,
        bool is_show)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  uint32_t bundle_id; // [rsp+1Ch] [rbp-94h]
  std::shared_ptr<Config> v12; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-80h] BYREF
  char v14[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 12 group_id:896";
  *(_QWORD *)(v3 + 16) = PlayerGroupLinkComp::updateBundleMarkShowStateByGroupId;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = group_id;
  common::milog::MiLogStream::create(
    &v13,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/group_link/player_group_link_comp.cpp",
    "updateBundleMarkShowStateByGroupId",
    898);
  v6 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
         &v13,
         (const char (*)[58])"[GroupLink] updateBundleMarkShowStateByGroupId group_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
  common::milog::MiLogStream::~MiLogStream(&v13);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v12);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
  bundle_id = ActivityGroupLinksExcelConfigMgr::getBundleIdByGroupId(
                &v7->design_config.txt_config_mgr.activity_group_links_config_mgr,
                *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v12);
  if ( bundle_id )
  {
    result = PlayerGroupLinkComp::updateBundleMarkShowState(this, bundle_id, is_show);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/group_link/player_group_link_comp.cpp",
      "updateBundleMarkShowStateByGroupId",
      902);
    v8 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
           &v13,
           (const char (*)[64])"[GroupLink]updateBundleMarkShowStateByGroupId fail. group id : ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = 0xFFFFFFFFLL;
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
