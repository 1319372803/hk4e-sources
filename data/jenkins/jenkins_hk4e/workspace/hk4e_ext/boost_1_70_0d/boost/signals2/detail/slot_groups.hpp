// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/signals2/detail/slot_groups.hpp

// Line 37: range 000000000BF90396-000000000BF904C7
bool __cdecl boost::signals2::detail::group_key_less<int,std::less<int>>::operator()(
        const boost::signals2::detail::group_key_less<int,std::less<int> > *const this,
        const boost::signals2::detail::group_key<int>::type *key1,
        const boost::signals2::detail::group_key<int>::type *key2)
{
  boost::signals2::detail::slot_meta_group first; // ecx
  const int *v5; // r12
  const int *v6; // rax

  if ( *(_BYTE *)(((unsigned __int64)key1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)key1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(key1);
  }
  first = key1->first;
  if ( *(_BYTE *)(((unsigned __int64)key2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)key2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(key2);
  }
  if ( first != key2->first )
    return key1->first < key2->first;
  if ( *(_BYTE *)(((unsigned __int64)key1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)key1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(key1);
  }
  if ( key1->first != grouped_slots )
    return 0;
  v5 = boost::optional<int>::get(&key2->second);
  v6 = boost::optional<int>::get(&key1->second);
  return std::less<int>::operator()(&this->_group_compare, v6, v5);
};

// Line 47: range 000000000BFA0190-000000000BFA01BA
void __cdecl boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::~grouped_list(
        boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *const this)
{
  std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>>>>::~map(&this->_group_map);
  std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::~list(&this->_list);
};

// Line 47: range 000000000BFA24BE-000000000BFA24E8
void __cdecl boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::~grouped_list(
        boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *const this)
{
  std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>>>>::~map(&this->_group_map);
  std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::~list(&this->_list);
};

// Line 69: range 000000000BF8F134-000000000BF8F4A0
void __cdecl boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::grouped_list(
        boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *const this,
        const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *other)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rax
  char v6[256]; // [rsp+10h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 8 15 other_map_it:73 64 8 15 this_list_it:74 96 8 14 this_map_it:75 128 8 16 other_list_it:"
                        "82 160 8 20 other_next_map_it:83 192 8 21 other_next_list_it:85";
  *(_QWORD *)(v2 + 16) = boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::grouped_list;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -202116352;
  std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::list(
    &this->_list,
    &other->_list);
  std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>>>>::map(
    &this->_group_map,
    &other->_group_map);
  std::_Rb_tree_const_iterator<std::pair<std::pair const<boost::signals2::detail::slot_meta_group,std::pair const::optional<int>>,std::_List_iterator<std::pair const::shared_ptr<boost::signals2::connection_body<std::pair const::optional<int>,boost::slot<int ()(common::minet::AServerSession *),std::pair const::function<int ()(common::minet::AServerSession *)>>,boost::mutex>>>>>::_Rb_tree_const_iterator((std::_Rb_tree_const_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > > *const)(v2 + 32));
  *(std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >>::iterator *)(v2 + 64) = std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::begin(&this->_list);
  *(std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::group_key_less<int,std::less<int> >,std::allocator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > > >::iterator *)(v2 + 96) = std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>>>>::begin(&this->_group_map);
  *(std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::group_key_less<int,std::less<int> >,std::allocator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > > >::const_iterator *)(v2 + 32) = std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>>>>::begin(&other->_group_map);
  while ( 1 )
  {
    *(std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::group_key_less<int,std::less<int> >,std::allocator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > > >::const_iterator *)(v2 + 192) = std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>>>>::end(&other->_group_map);
    if ( !std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > >::_Self *)(v2 + 32),
            (const std::_Rb_tree_const_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > >::_Self *)(v2 + 192)) )
      break;
    *(std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::group_key_less<int,std::less<int> >,std::allocator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > > >::iterator *)(v2 + 192) = std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>>>>::end(&this->_group_map);
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > >::_Self *)(v2 + 96),
            (const std::_Rb_tree_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > >::_Self *)(v2 + 192)) )
    {
      __asan_handle_no_return(v2 + 96);
      __assert_fail(
        "this_map_it != _group_map.end()",
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/signals2"
        "/detail/slot_groups.hpp",
        0x50u,
        "boost::signals2::detail::grouped_list<Group, GroupCompare, ValueType>::grouped_list(const boost::signals2::detai"
        "l::grouped_list<Group, GroupCompare, ValueType>&) [with Group = int; GroupCompare = std::less<int>; ValueType = "
        "boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group, b"
        "oost::optional<int> >, boost::signals2::slot<int(common::minet::AServerSession*), boost::function<int(common::mi"
        "net::AServerSession*)> >, boost::signals2::mutex> >]");
    }
    v5 = (__int64)std::_Rb_tree_iterator<std::pair<std::pair const<boost::signals2::detail::slot_meta_group,std::pair const::optional<int>>,std::_List_iterator<std::pair const::shared_ptr<boost::signals2::connection_body<std::pair const::optional<int>,boost::slot<int ()(common::minet::AServerSession *),std::pair const::function<int ()(common::minet::AServerSession *)>>,boost::mutex>>>>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > > *const)(v2 + 96));
    if ( *(_BYTE *)(((unsigned __int64)(v5 + 16) >> 3) + 0x7FFF8000) )
      v5 = __asan_report_store8();
    *(_QWORD *)(v5 + 16) = *(_QWORD *)(v2 + 64);
    *(boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::const_iterator *)(v2 + 128) = boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::get_list_iterator(other, (const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::const_map_iterator *)(v2 + 32));
    *(_QWORD *)(v2 + 160) = *(_QWORD *)(v2 + 32);
    std::_Rb_tree_const_iterator<std::pair<std::pair const<boost::signals2::detail::slot_meta_group,std::pair const::optional<int>>,std::_List_iterator<std::pair const::shared_ptr<boost::signals2::connection_body<std::pair const::optional<int>,boost::slot<int ()(common::minet::AServerSession *),std::pair const::function<int ()(common::minet::AServerSession *)>>,boost::mutex>>>>>::operator++((std::_Rb_tree_const_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > > *const)(v2 + 160));
    *(boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::const_iterator *)(v2 + 192) = boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::get_list_iterator(other, (const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::const_map_iterator *)(v2 + 160));
    while ( std::operator!=(
              (const std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::_Self *)(v2 + 128),
              (const std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::_Self *)(v2 + 192)) )
    {
      std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::operator++((std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *const)(v2 + 128));
      std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::operator++((std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *const)(v2 + 64));
    }
    std::_Rb_tree_const_iterator<std::pair<std::pair const<boost::signals2::detail::slot_meta_group,std::pair const::optional<int>>,std::_List_iterator<std::pair const::shared_ptr<boost::signals2::connection_body<std::pair const::optional<int>,boost::slot<int ()(common::minet::AServerSession *),std::pair const::function<int ()(common::minet::AServerSession *)>>,boost::mutex>>>>>::operator++((std::_Rb_tree_const_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > > *const)(v2 + 32));
    std::_Rb_tree_iterator<std::pair<std::pair const<boost::signals2::detail::slot_meta_group,std::pair const::optional<int>>,std::_List_iterator<std::pair const::shared_ptr<boost::signals2::connection_body<std::pair const::optional<int>,boost::slot<int ()(common::minet::AServerSession *),std::pair const::function<int ()(common::minet::AServerSession *)>>,boost::mutex>>>>>::operator++((std::_Rb_tree_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > > *const)(v2 + 96));
  }
  if ( v6 == (char *)v2 )
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

// Line 69: range 000000000BF91438-000000000BF917A4
void __cdecl boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::grouped_list(
        boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *const this,
        const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *other)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rax
  char v6[256]; // [rsp+10h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 8 15 other_map_it:73 64 8 15 this_list_it:74 96 8 14 this_map_it:75 128 8 16 other_list_it:"
                        "82 160 8 20 other_next_map_it:83 192 8 21 other_next_list_it:85";
  *(_QWORD *)(v2 + 16) = boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::grouped_list;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -202116352;
  std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::list(
    &this->_list,
    &other->_list);
  std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>>>>::map(
    &this->_group_map,
    &other->_group_map);
  std::_Rb_tree_const_iterator<std::pair<std::pair const<boost::signals2::detail::slot_meta_group,std::pair const::optional<int>>,std::_List_iterator<std::pair const::shared_ptr<boost::signals2::connection_body<std::pair const::optional<int>,boost::slot<int ()(common::minet::AServerSession *,unsigned int),std::pair const::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::mutex>>>>>::_Rb_tree_const_iterator((std::_Rb_tree_const_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > > *const)(v2 + 32));
  *(std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >>::iterator *)(v2 + 64) = std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::begin(&this->_list);
  *(std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::group_key_less<int,std::less<int> >,std::allocator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > > >::iterator *)(v2 + 96) = std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>>>>::begin(&this->_group_map);
  *(std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::group_key_less<int,std::less<int> >,std::allocator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > > >::const_iterator *)(v2 + 32) = std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>>>>::begin(&other->_group_map);
  while ( 1 )
  {
    *(std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::group_key_less<int,std::less<int> >,std::allocator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > > >::const_iterator *)(v2 + 192) = std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>>>>::end(&other->_group_map);
    if ( !std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > >::_Self *)(v2 + 32),
            (const std::_Rb_tree_const_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > >::_Self *)(v2 + 192)) )
      break;
    *(std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::group_key_less<int,std::less<int> >,std::allocator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > > >::iterator *)(v2 + 192) = std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>>>>::end(&this->_group_map);
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > >::_Self *)(v2 + 96),
            (const std::_Rb_tree_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > >::_Self *)(v2 + 192)) )
    {
      __asan_handle_no_return(v2 + 96);
      __assert_fail(
        "this_map_it != _group_map.end()",
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/signals2"
        "/detail/slot_groups.hpp",
        0x50u,
        "boost::signals2::detail::grouped_list<Group, GroupCompare, ValueType>::grouped_list(const boost::signals2::detai"
        "l::grouped_list<Group, GroupCompare, ValueType>&) [with Group = int; GroupCompare = std::less<int>; ValueType = "
        "boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group, b"
        "oost::optional<int> >, boost::signals2::slot<int(common::minet::AServerSession*, unsigned int), boost::function<"
        "int(common::minet::AServerSession*, unsigned int)> >, boost::signals2::mutex> >]");
    }
    v5 = (__int64)std::_Rb_tree_iterator<std::pair<std::pair const<boost::signals2::detail::slot_meta_group,std::pair const::optional<int>>,std::_List_iterator<std::pair const::shared_ptr<boost::signals2::connection_body<std::pair const::optional<int>,boost::slot<int ()(common::minet::AServerSession *,unsigned int),std::pair const::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::mutex>>>>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > > *const)(v2 + 96));
    if ( *(_BYTE *)(((unsigned __int64)(v5 + 16) >> 3) + 0x7FFF8000) )
      v5 = __asan_report_store8();
    *(_QWORD *)(v5 + 16) = *(_QWORD *)(v2 + 64);
    *(boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::const_iterator *)(v2 + 128) = boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::get_list_iterator(other, (const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::const_map_iterator *)(v2 + 32));
    *(_QWORD *)(v2 + 160) = *(_QWORD *)(v2 + 32);
    std::_Rb_tree_const_iterator<std::pair<std::pair const<boost::signals2::detail::slot_meta_group,std::pair const::optional<int>>,std::_List_iterator<std::pair const::shared_ptr<boost::signals2::connection_body<std::pair const::optional<int>,boost::slot<int ()(common::minet::AServerSession *,unsigned int),std::pair const::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::mutex>>>>>::operator++((std::_Rb_tree_const_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > > *const)(v2 + 160));
    *(boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::const_iterator *)(v2 + 192) = boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::get_list_iterator(other, (const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::const_map_iterator *)(v2 + 160));
    while ( std::operator!=(
              (const std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::_Self *)(v2 + 128),
              (const std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::_Self *)(v2 + 192)) )
    {
      std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::operator++((std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *const)(v2 + 128));
      std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::operator++((std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *const)(v2 + 64));
    }
    std::_Rb_tree_const_iterator<std::pair<std::pair const<boost::signals2::detail::slot_meta_group,std::pair const::optional<int>>,std::_List_iterator<std::pair const::shared_ptr<boost::signals2::connection_body<std::pair const::optional<int>,boost::slot<int ()(common::minet::AServerSession *,unsigned int),std::pair const::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::mutex>>>>>::operator++((std::_Rb_tree_const_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > > *const)(v2 + 32));
    std::_Rb_tree_iterator<std::pair<std::pair const<boost::signals2::detail::slot_meta_group,std::pair const::optional<int>>,std::_List_iterator<std::pair const::shared_ptr<boost::signals2::connection_body<std::pair const::optional<int>,boost::slot<int ()(common::minet::AServerSession *,unsigned int),std::pair const::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::mutex>>>>>::operator++((std::_Rb_tree_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > > *const)(v2 + 96));
  }
  if ( v6 == (char *)v2 )
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

// Line 93: range 000000000BF89834-000000000BF8984D
boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::iterator __cdecl boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::begin(
        boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *const this)
{
  return std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::begin(&this->_list);
};

// Line 93: range 000000000BF8AEFC-000000000BF8AF15
boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::iterator __cdecl boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::begin(
        boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *const this)
{
  return std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::begin(&this->_list);
};

// Line 97: range 000000000BF8F6C2-000000000BF8F6DB
boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::iterator __cdecl boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::end(
        boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *const this)
{
  return std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::end(&this->_list);
};

// Line 97: range 000000000BF91948-000000000BF91961
boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::iterator __cdecl boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::end(
        boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *const this)
{
  return std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::end(&this->_list);
};

// Line 106: range 000000000BF95C50-000000000BF95D48
boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::iterator __cdecl boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::upper_bound(
        boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *const this,
        const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::group_key_type *key)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::iterator result; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > > map_it; // [rsp+18h] [rbp-68h] BYREF
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 10 map_it:108";
  *(_QWORD *)(v2 + 16) = boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::upper_bound;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::group_key_less<int,std::less<int> >,std::allocator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > > >::iterator *)(v2 + 32) = std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>>>>::upper_bound(&this->_group_map, key);
  std::_Rb_tree_const_iterator<std::pair<std::pair const<boost::signals2::detail::slot_meta_group,std::pair const::optional<int>>,std::_List_iterator<std::pair const::shared_ptr<boost::signals2::connection_body<std::pair const::optional<int>,boost::slot<int ()(common::minet::AServerSession *),std::pair const::function<int ()(common::minet::AServerSession *)>>,boost::mutex>>>>>::_Rb_tree_const_iterator(
    &map_it,
    (const std::_Rb_tree_const_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > >::iterator *)(v2 + 32));
  result._M_node = boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::get_list_iterator(
                     this,
                     &map_it)._M_node;
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

// Line 106: range 000000000BF97E5A-000000000BF97F52
boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::iterator __cdecl boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::upper_bound(
        boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *const this,
        const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::group_key_type *key)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::iterator result; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > > map_it; // [rsp+18h] [rbp-68h] BYREF
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 10 map_it:108";
  *(_QWORD *)(v2 + 16) = boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::upper_bound;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::group_key_less<int,std::less<int> >,std::allocator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > > >::iterator *)(v2 + 32) = std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>>>>::upper_bound(&this->_group_map, key);
  std::_Rb_tree_const_iterator<std::pair<std::pair const<boost::signals2::detail::slot_meta_group,std::pair const::optional<int>>,std::_List_iterator<std::pair const::shared_ptr<boost::signals2::connection_body<std::pair const::optional<int>,boost::slot<int ()(common::minet::AServerSession *,unsigned int),std::pair const::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::mutex>>>>>::_Rb_tree_const_iterator(
    &map_it,
    (const std::_Rb_tree_const_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > >::iterator *)(v2 + 32));
  result._M_node = boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::get_list_iterator(
                     this,
                     &map_it)._M_node;
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

// Line 111: range 000000000BF7D730-000000000BF7D882
void __cdecl boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::push_front(
        boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *const this,
        const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::group_key_type *key,
        const boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > *value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 10 map_it:113";
  *(_QWORD *)(v3 + 16) = boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::push_front;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  std::_Rb_tree_iterator<std::pair<std::pair const<boost::signals2::detail::slot_meta_group,std::pair const::optional<int>>,std::_List_iterator<std::pair const::shared_ptr<boost::signals2::connection_body<std::pair const::optional<int>,boost::slot<int ()(common::minet::AServerSession *),std::pair const::function<int ()(common::minet::AServerSession *)>>,boost::mutex>>>>>::_Rb_tree_iterator((std::_Rb_tree_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > > *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(key);
  }
  if ( key->first )
    *(std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::group_key_less<int,std::less<int> >,std::allocator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > > >::iterator *)(v3 + 32) = std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>>>>::lower_bound(&this->_group_map, key);
  else
    *(std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::group_key_less<int,std::less<int> >,std::allocator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > > >::iterator *)(v3 + 32) = std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>>>>::begin(&this->_group_map);
  boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::m_insert(
    this,
    (const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::map_iterator *)(v3 + 32),
    key,
    value);
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 111: range 000000000BF7E8AA-000000000BF7E9FC
void __cdecl boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::push_front(
        boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *const this,
        const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::group_key_type *key,
        const boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > *value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 10 map_it:113";
  *(_QWORD *)(v3 + 16) = boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::push_front;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  std::_Rb_tree_iterator<std::pair<std::pair const<boost::signals2::detail::slot_meta_group,std::pair const::optional<int>>,std::_List_iterator<std::pair const::shared_ptr<boost::signals2::connection_body<std::pair const::optional<int>,boost::slot<int ()(common::minet::AServerSession *,unsigned int),std::pair const::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::mutex>>>>>::_Rb_tree_iterator((std::_Rb_tree_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > > *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(key);
  }
  if ( key->first )
    *(std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::group_key_less<int,std::less<int> >,std::allocator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > > >::iterator *)(v3 + 32) = std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>>>>::lower_bound(&this->_group_map, key);
  else
    *(std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::group_key_less<int,std::less<int> >,std::allocator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > > >::iterator *)(v3 + 32) = std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>>>>::begin(&this->_group_map);
  boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::m_insert(
    this,
    (const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::map_iterator *)(v3 + 32),
    key,
    value);
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 123: range 000000000BF7D5DC-000000000BF7D72F
void __cdecl boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::push_back(
        boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *const this,
        const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::group_key_type *key,
        const boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > *value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 10 map_it:125";
  *(_QWORD *)(v3 + 16) = boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::push_back;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  std::_Rb_tree_iterator<std::pair<std::pair const<boost::signals2::detail::slot_meta_group,std::pair const::optional<int>>,std::_List_iterator<std::pair const::shared_ptr<boost::signals2::connection_body<std::pair const::optional<int>,boost::slot<int ()(common::minet::AServerSession *),std::pair const::function<int ()(common::minet::AServerSession *)>>,boost::mutex>>>>>::_Rb_tree_iterator((std::_Rb_tree_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > > *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(key);
  }
  if ( key->first == back_ungrouped_slots )
    *(std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::group_key_less<int,std::less<int> >,std::allocator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > > >::iterator *)(v3 + 32) = std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>>>>::end(&this->_group_map);
  else
    *(std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::group_key_less<int,std::less<int> >,std::allocator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > > >::iterator *)(v3 + 32) = std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>>>>::upper_bound(&this->_group_map, key);
  boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::m_insert(
    this,
    (const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::map_iterator *)(v3 + 32),
    key,
    value);
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 123: range 000000000BF7E756-000000000BF7E8A9
void __cdecl boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::push_back(
        boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *const this,
        const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::group_key_type *key,
        const boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > *value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 10 map_it:125";
  *(_QWORD *)(v3 + 16) = boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::push_back;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  std::_Rb_tree_iterator<std::pair<std::pair const<boost::signals2::detail::slot_meta_group,std::pair const::optional<int>>,std::_List_iterator<std::pair const::shared_ptr<boost::signals2::connection_body<std::pair const::optional<int>,boost::slot<int ()(common::minet::AServerSession *,unsigned int),std::pair const::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::mutex>>>>>::_Rb_tree_iterator((std::_Rb_tree_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > > *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(key);
  }
  if ( key->first == back_ungrouped_slots )
    *(std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::group_key_less<int,std::less<int> >,std::allocator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > > >::iterator *)(v3 + 32) = std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>>>>::end(&this->_group_map);
  else
    *(std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::group_key_less<int,std::less<int> >,std::allocator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > > >::iterator *)(v3 + 32) = std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>>>>::upper_bound(&this->_group_map, key);
  boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::m_insert(
    this,
    (const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::map_iterator *)(v3 + 32),
    key,
    value);
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 146: range 000000000BF8F7EE-000000000BF8FB32
boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::iterator __cdecl boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::erase(
        boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *const this,
        const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::group_key_type *key,
        const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::iterator *it)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::_Rb_tree_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > >::pointer v6; // rcx
  std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *p_second; // rdx
  unsigned __int64 v8; // rax
  boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::iterator result; // rax
  std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::_Self __y; // [rsp+28h] [rbp-88h] BYREF
  char v12[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 10 map_it:149 64 8 8 next:154";
  *(_QWORD *)(v3 + 16) = boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::erase;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  __y._M_node = std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::end(&this->_list)._M_node;
  if ( !std::operator!=(it, &__y) )
  {
    __asan_handle_no_return(it);
    __assert_fail(
      "it != _list.end()",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/signals2/d"
      "etail/slot_groups.hpp",
      0x94u,
      "boost::signals2::detail::grouped_list<Group, GroupCompare, ValueType>::iterator boost::signals2::detail::grouped_l"
      "ist<Group, GroupCompare, ValueType>::erase(const group_key_type&, const iterator&) [with Group = int; GroupCompare"
      " = std::less<int>; ValueType = boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals"
      "2::detail::slot_meta_group, boost::optional<int> >, boost::signals2::slot<int(common::minet::AServerSession*), boo"
      "st::function<int(common::minet::AServerSession*)> >, boost::signals2::mutex> >; boost::signals2::detail::grouped_l"
      "ist<Group, GroupCompare, ValueType>::iterator = std::_List_iterator<boost::shared_ptr<boost::signals2::detail::con"
      "nection_body<std::pair<boost::signals2::detail::slot_meta_group, boost::optional<int> >, boost::signals2::slot<int"
      "(common::minet::AServerSession*), boost::function<int(common::minet::AServerSession*)> >, boost::signals2::mutex> "
      "> >; boost::signals2::detail::grouped_list<Group, GroupCompare, ValueType>::group_key_type = std::pair<boost::sign"
      "als2::detail::slot_meta_group, boost::optional<int> >]");
  }
  *(std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::group_key_less<int,std::less<int> >,std::allocator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > > >::iterator *)(v3 + 32) = std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>>>>::lower_bound(&this->_group_map, key);
  __y._M_node = (std::__detail::_List_node_base *)std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>>>>::end(&this->_group_map)._M_node;
  if ( !std::operator!=(
          (const std::_Rb_tree_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > >::_Self *)(v3 + 32),
          (const std::_Rb_tree_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > >::_Self *)&__y) )
  {
    __asan_handle_no_return(v3 + 32);
    __assert_fail(
      "map_it != _group_map.end()",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/signals2/d"
      "etail/slot_groups.hpp",
      0x96u,
      "boost::signals2::detail::grouped_list<Group, GroupCompare, ValueType>::iterator boost::signals2::detail::grouped_l"
      "ist<Group, GroupCompare, ValueType>::erase(const group_key_type&, const iterator&) [with Group = int; GroupCompare"
      " = std::less<int>; ValueType = boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals"
      "2::detail::slot_meta_group, boost::optional<int> >, boost::signals2::slot<int(common::minet::AServerSession*), boo"
      "st::function<int(common::minet::AServerSession*)> >, boost::signals2::mutex> >; boost::signals2::detail::grouped_l"
      "ist<Group, GroupCompare, ValueType>::iterator = std::_List_iterator<boost::shared_ptr<boost::signals2::detail::con"
      "nection_body<std::pair<boost::signals2::detail::slot_meta_group, boost::optional<int> >, boost::signals2::slot<int"
      "(common::minet::AServerSession*), boost::function<int(common::minet::AServerSession*)> >, boost::signals2::mutex> "
      "> >; boost::signals2::detail::grouped_list<Group, GroupCompare, ValueType>::group_key_type = std::pair<boost::sign"
      "als2::detail::slot_meta_group, boost::optional<int> >]");
  }
  v6 = std::_Rb_tree_iterator<std::pair<std::pair const<boost::signals2::detail::slot_meta_group,std::pair const::optional<int>>,std::_List_iterator<std::pair const::shared_ptr<boost::signals2::connection_body<std::pair const::optional<int>,boost::slot<int ()(common::minet::AServerSession *),std::pair const::function<int ()(common::minet::AServerSession *)>>,boost::mutex>>>>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > > *const)(v3 + 32));
  if ( !boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::weakly_equivalent(
          this,
          &v6->first,
          key) )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "weakly_equivalent(map_it->first, key)",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/signals2/d"
      "etail/slot_groups.hpp",
      0x97u,
      "boost::signals2::detail::grouped_list<Group, GroupCompare, ValueType>::iterator boost::signals2::detail::grouped_l"
      "ist<Group, GroupCompare, ValueType>::erase(const group_key_type&, const iterator&) [with Group = int; GroupCompare"
      " = std::less<int>; ValueType = boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals"
      "2::detail::slot_meta_group, boost::optional<int> >, boost::signals2::slot<int(common::minet::AServerSession*), boo"
      "st::function<int(common::minet::AServerSession*)> >, boost::signals2::mutex> >; boost::signals2::detail::grouped_l"
      "ist<Group, GroupCompare, ValueType>::iterator = std::_List_iterator<boost::shared_ptr<boost::signals2::detail::con"
      "nection_body<std::pair<boost::signals2::detail::slot_meta_group, boost::optional<int> >, boost::signals2::slot<int"
      "(common::minet::AServerSession*), boost::function<int(common::minet::AServerSession*)> >, boost::signals2::mutex> "
      "> >; boost::signals2::detail::grouped_list<Group, GroupCompare, ValueType>::group_key_type = std::pair<boost::sign"
      "als2::detail::slot_meta_group, boost::optional<int> >]");
  }
  p_second = &std::_Rb_tree_iterator<std::pair<std::pair const<boost::signals2::detail::slot_meta_group,std::pair const::optional<int>>,std::_List_iterator<std::pair const::shared_ptr<boost::signals2::connection_body<std::pair const::optional<int>,boost::slot<int ()(common::minet::AServerSession *),std::pair const::function<int ()(common::minet::AServerSession *)>>,boost::mutex>>>>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > > *const)(v3 + 32))->second;
  if ( std::operator==(p_second, it) )
  {
    if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::iterator *)(v3 + 64) = (boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::iterator)it->_M_node;
    std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::operator++((std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *const)(v3 + 64));
    __y._M_node = boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::upper_bound(
                    this,
                    key)._M_node;
    if ( std::operator!=(
           (const std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::_Self *)(v3 + 64),
           &__y) )
    {
      v8 = (unsigned __int64)std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>>>>::operator[](
                               &this->_group_map,
                               key);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_store8();
      *(_QWORD *)v8 = *(_QWORD *)(v3 + 64);
    }
    else
    {
      std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>>>>::erase[abi:cxx11](
        &this->_group_map,
        *(std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::group_key_less<int,std::less<int> >,std::allocator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > > >::iterator *)(v3 + 32));
    }
  }
  std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::_List_const_iterator(
    (std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *const)&__y,
    it);
  result._M_node = std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::erase(
                     &this->_list,
                     (std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >>::const_iterator)__y._M_node)._M_node;
  if ( v12 == (char *)v3 )
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

// Line 146: range 000000000BF91A74-000000000BF91DB8
boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::iterator __cdecl boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::erase(
        boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *const this,
        const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::group_key_type *key,
        const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::iterator *it)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::_Rb_tree_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > >::pointer v6; // rcx
  std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *p_second; // rdx
  unsigned __int64 v8; // rax
  boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::iterator result; // rax
  std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::_Self __y; // [rsp+28h] [rbp-88h] BYREF
  char v12[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 10 map_it:149 64 8 8 next:154";
  *(_QWORD *)(v3 + 16) = boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::erase;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  __y._M_node = std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::end(&this->_list)._M_node;
  if ( !std::operator!=(it, &__y) )
  {
    __asan_handle_no_return(it);
    __assert_fail(
      "it != _list.end()",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/signals2/d"
      "etail/slot_groups.hpp",
      0x94u,
      "boost::signals2::detail::grouped_list<Group, GroupCompare, ValueType>::iterator boost::signals2::detail::grouped_l"
      "ist<Group, GroupCompare, ValueType>::erase(const group_key_type&, const iterator&) [with Group = int; GroupCompare"
      " = std::less<int>; ValueType = boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals"
      "2::detail::slot_meta_group, boost::optional<int> >, boost::signals2::slot<int(common::minet::AServerSession*, unsi"
      "gned int), boost::function<int(common::minet::AServerSession*, unsigned int)> >, boost::signals2::mutex> >; boost:"
      ":signals2::detail::grouped_list<Group, GroupCompare, ValueType>::iterator = std::_List_iterator<boost::shared_ptr<"
      "boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group, boost::optional<int> "
      ">, boost::signals2::slot<int(common::minet::AServerSession*, unsigned int), boost::function<int(common::minet::ASe"
      "rverSession*, unsigned int)> >, boost::signals2::mutex> > >; boost::signals2::detail::grouped_list<Group, GroupCom"
      "pare, ValueType>::group_key_type = std::pair<boost::signals2::detail::slot_meta_group, boost::optional<int> >]");
  }
  *(std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::group_key_less<int,std::less<int> >,std::allocator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > > >::iterator *)(v3 + 32) = std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>>>>::lower_bound(&this->_group_map, key);
  __y._M_node = (std::__detail::_List_node_base *)std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>>>>::end(&this->_group_map)._M_node;
  if ( !std::operator!=(
          (const std::_Rb_tree_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > >::_Self *)(v3 + 32),
          (const std::_Rb_tree_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > >::_Self *)&__y) )
  {
    __asan_handle_no_return(v3 + 32);
    __assert_fail(
      "map_it != _group_map.end()",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/signals2/d"
      "etail/slot_groups.hpp",
      0x96u,
      "boost::signals2::detail::grouped_list<Group, GroupCompare, ValueType>::iterator boost::signals2::detail::grouped_l"
      "ist<Group, GroupCompare, ValueType>::erase(const group_key_type&, const iterator&) [with Group = int; GroupCompare"
      " = std::less<int>; ValueType = boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals"
      "2::detail::slot_meta_group, boost::optional<int> >, boost::signals2::slot<int(common::minet::AServerSession*, unsi"
      "gned int), boost::function<int(common::minet::AServerSession*, unsigned int)> >, boost::signals2::mutex> >; boost:"
      ":signals2::detail::grouped_list<Group, GroupCompare, ValueType>::iterator = std::_List_iterator<boost::shared_ptr<"
      "boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group, boost::optional<int> "
      ">, boost::signals2::slot<int(common::minet::AServerSession*, unsigned int), boost::function<int(common::minet::ASe"
      "rverSession*, unsigned int)> >, boost::signals2::mutex> > >; boost::signals2::detail::grouped_list<Group, GroupCom"
      "pare, ValueType>::group_key_type = std::pair<boost::signals2::detail::slot_meta_group, boost::optional<int> >]");
  }
  v6 = std::_Rb_tree_iterator<std::pair<std::pair const<boost::signals2::detail::slot_meta_group,std::pair const::optional<int>>,std::_List_iterator<std::pair const::shared_ptr<boost::signals2::connection_body<std::pair const::optional<int>,boost::slot<int ()(common::minet::AServerSession *,unsigned int),std::pair const::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::mutex>>>>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > > *const)(v3 + 32));
  if ( !boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::weakly_equivalent(
          this,
          &v6->first,
          key) )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "weakly_equivalent(map_it->first, key)",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/signals2/d"
      "etail/slot_groups.hpp",
      0x97u,
      "boost::signals2::detail::grouped_list<Group, GroupCompare, ValueType>::iterator boost::signals2::detail::grouped_l"
      "ist<Group, GroupCompare, ValueType>::erase(const group_key_type&, const iterator&) [with Group = int; GroupCompare"
      " = std::less<int>; ValueType = boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals"
      "2::detail::slot_meta_group, boost::optional<int> >, boost::signals2::slot<int(common::minet::AServerSession*, unsi"
      "gned int), boost::function<int(common::minet::AServerSession*, unsigned int)> >, boost::signals2::mutex> >; boost:"
      ":signals2::detail::grouped_list<Group, GroupCompare, ValueType>::iterator = std::_List_iterator<boost::shared_ptr<"
      "boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group, boost::optional<int> "
      ">, boost::signals2::slot<int(common::minet::AServerSession*, unsigned int), boost::function<int(common::minet::ASe"
      "rverSession*, unsigned int)> >, boost::signals2::mutex> > >; boost::signals2::detail::grouped_list<Group, GroupCom"
      "pare, ValueType>::group_key_type = std::pair<boost::signals2::detail::slot_meta_group, boost::optional<int> >]");
  }
  p_second = &std::_Rb_tree_iterator<std::pair<std::pair const<boost::signals2::detail::slot_meta_group,std::pair const::optional<int>>,std::_List_iterator<std::pair const::shared_ptr<boost::signals2::connection_body<std::pair const::optional<int>,boost::slot<int ()(common::minet::AServerSession *,unsigned int),std::pair const::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::mutex>>>>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > > *const)(v3 + 32))->second;
  if ( std::operator==(p_second, it) )
  {
    if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::iterator *)(v3 + 64) = (boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::iterator)it->_M_node;
    std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::operator++((std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *const)(v3 + 64));
    __y._M_node = boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::upper_bound(
                    this,
                    key)._M_node;
    if ( std::operator!=(
           (const std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::_Self *)(v3 + 64),
           &__y) )
    {
      v8 = (unsigned __int64)std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>>>>::operator[](
                               &this->_group_map,
                               key);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_store8();
      *(_QWORD *)v8 = *(_QWORD *)(v3 + 64);
    }
    else
    {
      std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>>>>::erase[abi:cxx11](
        &this->_group_map,
        *(std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::group_key_less<int,std::less<int> >,std::allocator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > > >::iterator *)(v3 + 32));
    }
  }
  std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::_List_const_iterator(
    (std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *const)&__y,
    it);
  result._M_node = std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::erase(
                     &this->_list,
                     (std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >>::const_iterator)__y._M_node)._M_node;
  if ( v12 == (char *)v3 )
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

// Line 176: range 000000000BF8A10A-000000000BF8A170
bool __cdecl boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::weakly_equivalent(
        boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *const this,
        const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::group_key_type *arg1,
        const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::group_key_type *arg2)
{
  return !boost::signals2::detail::group_key_less<int,std::less<int>>::operator()(&this->_group_key_compare, arg1, arg2)
      && !boost::signals2::detail::group_key_less<int,std::less<int>>::operator()(&this->_group_key_compare, arg2, arg1);
};

// Line 176: range 000000000BF8B618-000000000BF8B67E
bool __cdecl boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::weakly_equivalent(
        boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *const this,
        const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::group_key_type *arg1,
        const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::group_key_type *arg2)
{
  return !boost::signals2::detail::group_key_less<int,std::less<int>>::operator()(&this->_group_key_compare, arg1, arg2)
      && !boost::signals2::detail::group_key_less<int,std::less<int>>::operator()(&this->_group_key_compare, arg2, arg1);
};

// Line 182: range 000000000BF840DE-000000000BF843E4
void __cdecl boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::m_insert(
        boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *const this,
        const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::map_iterator *map_it,
        const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::group_key_type *key,
        const boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > *value)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::_Rb_tree_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > >::pointer v7; // rdx
  boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::map_type *p_group_map; // rdx
  std::_Rb_tree_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > >::pointer v10; // rcx
  std::_Rb_tree_const_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > > v14; // [rsp+28h] [rbp-D8h] BYREF
  std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > __x; // [rsp+30h] [rbp-D0h] BYREF
  char v16[176]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 8 11 list_it:184 64 8 10 new_it:185 96 8 18 lower_bound_it:190";
  *(_QWORD *)(v4 + 16) = boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::m_insert;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -202116352;
  std::_Rb_tree_const_iterator<std::pair<std::pair const<boost::signals2::detail::slot_meta_group,std::pair const::optional<int>>,std::_List_iterator<std::pair const::shared_ptr<boost::signals2::connection_body<std::pair const::optional<int>,boost::slot<int ()(common::minet::AServerSession *),std::pair const::function<int ()(common::minet::AServerSession *)>>,boost::mutex>>>>>::_Rb_tree_const_iterator(
    &v14,
    map_it);
  *(boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::iterator *)(v4 + 32) = boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::get_list_iterator(this, &v14);
  std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::_List_const_iterator(
    (std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *const)&v14,
    (const std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::iterator *)(v4 + 32));
  *(std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >>::iterator *)(v4 + 64) = std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::insert(&this->_list, (std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >>::const_iterator)v14._M_node, value);
  v14._M_node = std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>>>>::end(&this->_group_map)._M_node;
  if ( std::operator!=(
         map_it,
         (const std::_Rb_tree_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > >::_Self *)&v14) )
  {
    v7 = std::_Rb_tree_iterator<std::pair<std::pair const<boost::signals2::detail::slot_meta_group,std::pair const::optional<int>>,std::_List_iterator<std::pair const::shared_ptr<boost::signals2::connection_body<std::pair const::optional<int>,boost::slot<int ()(common::minet::AServerSession *),std::pair const::function<int ()(common::minet::AServerSession *)>>,boost::mutex>>>>>::operator->(map_it);
    if ( boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::weakly_equivalent(
           this,
           key,
           &v7->first) )
    {
      p_group_map = &this->_group_map;
      if ( *(_BYTE *)(((unsigned __int64)map_it >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>>>>::erase[abi:cxx11](
        p_group_map,
        (std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::group_key_less<int,std::less<int> >,std::allocator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > > >::iterator)map_it->_M_node);
    }
  }
  *(std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::group_key_less<int,std::less<int> >,std::allocator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > > >::iterator *)(v4 + 96) = std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>>>>::lower_bound(&this->_group_map, key);
  v14._M_node = std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>>>>::end(&this->_group_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > >::_Self *)(v4 + 96),
         (const std::_Rb_tree_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > >::_Self *)&v14)
    || (v10 = std::_Rb_tree_iterator<std::pair<std::pair const<boost::signals2::detail::slot_meta_group,std::pair const::optional<int>>,std::_List_iterator<std::pair const::shared_ptr<boost::signals2::connection_body<std::pair const::optional<int>,boost::slot<int ()(common::minet::AServerSession *),std::pair const::function<int ()(common::minet::AServerSession *)>>,boost::mutex>>>>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > > *const)(v4 + 96)),
        !boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::weakly_equivalent(
           this,
           &v10->first,
           key)) )
  {
    std::pair<std::pair const<boost::signals2::detail::slot_meta_group,std::pair const::optional<int>>,std::_List_iterator<std::pair const::shared_ptr<boost::signals2::connection_body<std::pair const::optional<int>,boost::slot<int ()(common::minet::AServerSession *),std::pair const::function<int ()(common::minet::AServerSession *)>>,boost::mutex>>>>::pair<std::_List_iterator<std::pair const::shared_ptr<boost::signals2::connection_body<std::pair const::optional<int>,boost::slot<int ()(common::minet::AServerSession *),std::pair const::function<int ()(common::minet::AServerSession *)>>,boost::mutex>>>&,true>(
      &__x,
      key,
      (std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *)(v4 + 64));
    std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>>>>::insert(
      &this->_group_map,
      &__x);
  }
  if ( v16 == (char *)v4 )
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
};

// Line 182: range 000000000BF84CBC-000000000BF84FC2
void __cdecl boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::m_insert(
        boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *const this,
        const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::map_iterator *map_it,
        const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::group_key_type *key,
        const boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > *value)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::_Rb_tree_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > >::pointer v7; // rdx
  boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::map_type *p_group_map; // rdx
  std::_Rb_tree_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > >::pointer v10; // rcx
  std::_Rb_tree_const_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > > v14; // [rsp+28h] [rbp-D8h] BYREF
  std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > __x; // [rsp+30h] [rbp-D0h] BYREF
  char v16[176]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 8 11 list_it:184 64 8 10 new_it:185 96 8 18 lower_bound_it:190";
  *(_QWORD *)(v4 + 16) = boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::m_insert;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -202116352;
  std::_Rb_tree_const_iterator<std::pair<std::pair const<boost::signals2::detail::slot_meta_group,std::pair const::optional<int>>,std::_List_iterator<std::pair const::shared_ptr<boost::signals2::connection_body<std::pair const::optional<int>,boost::slot<int ()(common::minet::AServerSession *,unsigned int),std::pair const::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::mutex>>>>>::_Rb_tree_const_iterator(
    &v14,
    map_it);
  *(boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::iterator *)(v4 + 32) = boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::get_list_iterator(this, &v14);
  std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::_List_const_iterator(
    (std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *const)&v14,
    (const std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::iterator *)(v4 + 32));
  *(std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >>::iterator *)(v4 + 64) = std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::insert(&this->_list, (std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >>::const_iterator)v14._M_node, value);
  v14._M_node = std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>>>>::end(&this->_group_map)._M_node;
  if ( std::operator!=(
         map_it,
         (const std::_Rb_tree_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > >::_Self *)&v14) )
  {
    v7 = std::_Rb_tree_iterator<std::pair<std::pair const<boost::signals2::detail::slot_meta_group,std::pair const::optional<int>>,std::_List_iterator<std::pair const::shared_ptr<boost::signals2::connection_body<std::pair const::optional<int>,boost::slot<int ()(common::minet::AServerSession *,unsigned int),std::pair const::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::mutex>>>>>::operator->(map_it);
    if ( boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::weakly_equivalent(
           this,
           key,
           &v7->first) )
    {
      p_group_map = &this->_group_map;
      if ( *(_BYTE *)(((unsigned __int64)map_it >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>>>>::erase[abi:cxx11](
        p_group_map,
        (std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::group_key_less<int,std::less<int> >,std::allocator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > > >::iterator)map_it->_M_node);
    }
  }
  *(std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::group_key_less<int,std::less<int> >,std::allocator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > > >::iterator *)(v4 + 96) = std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>>>>::lower_bound(&this->_group_map, key);
  v14._M_node = std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>>>>::end(&this->_group_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > >::_Self *)(v4 + 96),
         (const std::_Rb_tree_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > >::_Self *)&v14)
    || (v10 = std::_Rb_tree_iterator<std::pair<std::pair const<boost::signals2::detail::slot_meta_group,std::pair const::optional<int>>,std::_List_iterator<std::pair const::shared_ptr<boost::signals2::connection_body<std::pair const::optional<int>,boost::slot<int ()(common::minet::AServerSession *,unsigned int),std::pair const::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::mutex>>>>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > > *const)(v4 + 96)),
        !boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::weakly_equivalent(
           this,
           &v10->first,
           key)) )
  {
    std::pair<std::pair const<boost::signals2::detail::slot_meta_group,std::pair const::optional<int>>,std::_List_iterator<std::pair const::shared_ptr<boost::signals2::connection_body<std::pair const::optional<int>,boost::slot<int ()(common::minet::AServerSession *,unsigned int),std::pair const::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::mutex>>>>::pair<std::_List_iterator<std::pair const::shared_ptr<boost::signals2::connection_body<std::pair const::optional<int>,boost::slot<int ()(common::minet::AServerSession *,unsigned int),std::pair const::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::mutex>>>&,true>(
      &__x,
      key,
      (std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *)(v4 + 64));
    std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>>>>::insert(
      &this->_group_map,
      &__x);
  }
  if ( v16 == (char *)v4 )
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
};

// Line 200: range 000000000BF89DB8-000000000BF89F04
boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::iterator __cdecl boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::get_list_iterator(
        boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *const this,
        const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::const_map_iterator *map_it)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::_Rb_tree_const_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > >::pointer v5; // rax
  boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::iterator result; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > >::iterator __it; // [rsp+10h] [rbp-70h] BYREF
  std::_Rb_tree_const_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > > __y; // [rsp+18h] [rbp-68h] BYREF
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 11 list_it:202";
  *(_QWORD *)(v2 + 16) = boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::get_list_iterator;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::_List_iterator((std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *const)(v2 + 32));
  __it._M_node = std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>>>>::end(&this->_group_map)._M_node;
  std::_Rb_tree_const_iterator<std::pair<std::pair const<boost::signals2::detail::slot_meta_group,std::pair const::optional<int>>,std::_List_iterator<std::pair const::shared_ptr<boost::signals2::connection_body<std::pair const::optional<int>,boost::slot<int ()(common::minet::AServerSession *),std::pair const::function<int ()(common::minet::AServerSession *)>>,boost::mutex>>>>>::_Rb_tree_const_iterator(
    &__y,
    &__it);
  if ( std::operator==(map_it, &__y) )
  {
    *(std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >>::iterator *)(v2 + 32) = std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::end(&this->_list);
  }
  else
  {
    v5 = std::_Rb_tree_const_iterator<std::pair<std::pair const<boost::signals2::detail::slot_meta_group,std::pair const::optional<int>>,std::_List_iterator<std::pair const::shared_ptr<boost::signals2::connection_body<std::pair const::optional<int>,boost::slot<int ()(common::minet::AServerSession *),std::pair const::function<int ()(common::minet::AServerSession *)>>,boost::mutex>>>>>::operator->(map_it);
    if ( *(_BYTE *)(((unsigned __int64)&v5->second >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_QWORD *)(v2 + 32) = v5->second._M_node;
  }
  result._M_node = *(std::__detail::_List_node_base **)(v2 + 32);
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

// Line 200: range 000000000BF8B2C6-000000000BF8B412
boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::iterator __cdecl boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::get_list_iterator(
        boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *const this,
        const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::const_map_iterator *map_it)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::_Rb_tree_const_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > >::pointer v5; // rax
  boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::iterator result; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > >::iterator __it; // [rsp+10h] [rbp-70h] BYREF
  std::_Rb_tree_const_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > > __y; // [rsp+18h] [rbp-68h] BYREF
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 11 list_it:202";
  *(_QWORD *)(v2 + 16) = boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::get_list_iterator;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::_List_iterator((std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *const)(v2 + 32));
  __it._M_node = std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>>>>::end(&this->_group_map)._M_node;
  std::_Rb_tree_const_iterator<std::pair<std::pair const<boost::signals2::detail::slot_meta_group,std::pair const::optional<int>>,std::_List_iterator<std::pair const::shared_ptr<boost::signals2::connection_body<std::pair const::optional<int>,boost::slot<int ()(common::minet::AServerSession *,unsigned int),std::pair const::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::mutex>>>>>::_Rb_tree_const_iterator(
    &__y,
    &__it);
  if ( std::operator==(map_it, &__y) )
  {
    *(std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >>::iterator *)(v2 + 32) = std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::end(&this->_list);
  }
  else
  {
    v5 = std::_Rb_tree_const_iterator<std::pair<std::pair const<boost::signals2::detail::slot_meta_group,std::pair const::optional<int>>,std::_List_iterator<std::pair const::shared_ptr<boost::signals2::connection_body<std::pair const::optional<int>,boost::slot<int ()(common::minet::AServerSession *,unsigned int),std::pair const::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::mutex>>>>>::operator->(map_it);
    if ( *(_BYTE *)(((unsigned __int64)&v5->second >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_QWORD *)(v2 + 32) = v5->second._M_node;
  }
  result._M_node = *(std::__detail::_List_node_base **)(v2 + 32);
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

// Line 212: range 000000000BF95700-000000000BF9582B
boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::const_iterator __cdecl boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::get_list_iterator(
        const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *const this,
        const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::const_map_iterator *map_it)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::_Rb_tree_const_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > >::pointer v5; // rax
  boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >::const_iterator result; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > >::_Self __y; // [rsp+18h] [rbp-68h] BYREF
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 11 list_it:214";
  *(_QWORD *)(v2 + 16) = boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::get_list_iterator;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::_List_const_iterator((std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *const)(v2 + 32));
  __y._M_node = std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>>>>::end(&this->_group_map)._M_node;
  if ( std::operator==(map_it, &__y) )
  {
    *(std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >>::const_iterator *)(v2 + 32) = std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::end(&this->_list);
  }
  else
  {
    v5 = std::_Rb_tree_const_iterator<std::pair<std::pair const<boost::signals2::detail::slot_meta_group,std::pair const::optional<int>>,std::_List_iterator<std::pair const::shared_ptr<boost::signals2::connection_body<std::pair const::optional<int>,boost::slot<int ()(common::minet::AServerSession *),std::pair const::function<int ()(common::minet::AServerSession *)>>,boost::mutex>>>>>::operator->(map_it);
    std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>::_List_const_iterator(
      (std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *const)&__y,
      &v5->second);
    *(std::_Rb_tree_const_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > > >::_Self *)(v2 + 32) = __y;
  }
  result._M_node = *(const std::__detail::_List_node_base **)(v2 + 32);
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

// Line 212: range 000000000BF97978-000000000BF97AA3
boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::const_iterator __cdecl boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::get_list_iterator(
        const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *const this,
        const boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::const_map_iterator *map_it)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::_Rb_tree_const_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > >::pointer v5; // rax
  boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >::const_iterator result; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > >::_Self __y; // [rsp+18h] [rbp-68h] BYREF
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 11 list_it:214";
  *(_QWORD *)(v2 + 16) = boost::signals2::detail::grouped_list<int,std::less<int>,boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::get_list_iterator;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::_List_const_iterator((std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *const)(v2 + 32));
  __y._M_node = std::map<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>,boost::signals2::detail::group_key_less<int,std::less<int>>,std::allocator<std::pair<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>> const,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>>>>::end(&this->_group_map)._M_node;
  if ( std::operator==(map_it, &__y) )
  {
    *(std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >>::const_iterator *)(v2 + 32) = std::list<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::end(&this->_list);
  }
  else
  {
    v5 = std::_Rb_tree_const_iterator<std::pair<std::pair const<boost::signals2::detail::slot_meta_group,std::pair const::optional<int>>,std::_List_iterator<std::pair const::shared_ptr<boost::signals2::connection_body<std::pair const::optional<int>,boost::slot<int ()(common::minet::AServerSession *,unsigned int),std::pair const::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::mutex>>>>>::operator->(map_it);
    std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>::_List_const_iterator(
      (std::_List_const_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *const)&__y,
      &v5->second);
    *(std::_Rb_tree_const_iterator<std::pair<const std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > > >::_Self *)(v2 + 32) = __y;
  }
  result._M_node = *(const std::__detail::_List_node_base **)(v2 + 32);
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
