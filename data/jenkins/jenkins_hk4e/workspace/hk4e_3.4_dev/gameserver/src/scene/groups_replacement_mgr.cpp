// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/groups_replacement_mgr.cpp

// Line 22: range 000000001316AA08-000000001316AC8C
std::string *__cdecl ReplaceInfo::getReplacedByStr[abi:cxx11](std::string *retstr, const ReplaceInfo *const this)
{
  unsigned int *v2; // rax
  unsigned int *v3; // rdx
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  const std::unordered_set<unsigned int> *__for_range; // [rsp+28h] [rbp-58h]
  std::string __rhs; // [rsp+30h] [rbp-50h] BYREF
  std::string __lhs; // [rsp+50h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  common::tools::StringUtils::numToStr<unsigned int>(&__rhs, this->group_id);
  std::operator+<char>(&__lhs, "group_id=", &__rhs);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::operator+<char>(retstr, &__lhs, " replaced by <");
  std::string::~string(&__lhs);
  std::string::~string(&__rhs);
  __for_range = &this->final_replaced_by_groups_set;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&this->final_replaced_by_groups_set)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&this->final_replaced_by_groups_set)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v2 = (unsigned int *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    common::tools::StringUtils::numToStr<unsigned int>(&__rhs, *v3);
    std::operator+<char>(&__lhs, &__rhs, " ");
    std::string::operator+=(retstr, &__lhs);
    std::string::~string(&__lhs);
    std::string::~string(&__rhs);
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  std::string::operator+=(retstr, ">");
  return retstr;
};

// Line 33: range 000000001316AC8E-000000001316AEBF
std::string *__fastcall ReplaceInfoMgr::getReplacedByStr[abi:cxx11](
        std::string *retstr,
        const ReplaceInfoMgr *const this,
        uint32_t group_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  ReplaceInfo *p_second; // rsi
  std::allocator<char> __a; // [rsp+27h] [rbp-89h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,ReplaceInfo>,false> __y; // [rsp+28h] [rbp-88h] BYREF
  char v11[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 11 group_id:32 64 8 7 iter:34";
  *(_QWORD *)(v3 + 16) = ReplaceInfoMgr::getReplacedByStr[abi:cxx11];
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = group_id;
  *(std::unordered_map<unsigned int,ReplaceInfo>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,ReplaceInfo>::find(
                                                                                 &this->group_to_replace_info_map_,
                                                                                 (const std::unordered_map<unsigned int,ReplaceInfo>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,ReplaceInfo>::end(&this->group_to_replace_info_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,ReplaceInfo>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ReplaceInfo>,false> *)(v3 + 64),
         &__y) )
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(retstr, _s, &__a);
    std::allocator<char>::~allocator(&__a);
  }
  else
  {
    p_second = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,ReplaceInfo>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,ReplaceInfo>,false,false> *const)(v3 + 64))->second;
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                            + 15) >> 3)
                                                          + 0x7FFF8000) )
    {
      p_second = (ReplaceInfo *)32;
      __asan_report_store_n(retstr, 32LL);
    }
    ReplaceInfo::getReplacedByStr[abi:cxx11](retstr, p_second);
  }
  if ( v11 == (char *)v3 )
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
  return retstr;
};

// Line 41: range 000000001316AEC0-000000001316AF0C
void __cdecl ReplaceInfoMgr::clear(ReplaceInfoMgr *const this)
{
  std::unordered_map<unsigned int,ReplaceInfo>::clear(&this->group_to_replace_info_map_);
  std::unordered_set<unsigned int>::clear(&this->active_groups);
  std::unordered_set<unsigned int>::clear(&this->replaced_groups);
  std::unordered_set<ReplaceInfo *>::clear(&this->root_set_);
};

// Line 50: range 000000001316AF0E-000000001316B7AE
void __fastcall ReplaceInfoMgr::add(ReplaceInfoMgr *const this, uint32_t group_id, bool is_replaceable)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  uint32_t v7; // ecx
  char v8; // al
  __int64 v9; // rsi
  __int64 v10; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v12; // rax
  _DWORD *v13; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,ReplaceInfo>,false,false>::pointer v14; // rax
  bool *p_is_replaceable; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v21; // rax
  _DWORD *v22; // rdx
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-140h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_begin_0; // [rsp+18h] [rbp-138h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,ReplaceInfo>,false> __y; // [rsp+20h] [rbp-130h] BYREF
  ReplaceInfo *new_info; // [rsp+28h] [rbp-128h]
  const std::unordered_set<unsigned int> *replace_set; // [rsp+30h] [rbp-120h]
  const std::unordered_set<unsigned int> *__for_range; // [rsp+38h] [rbp-118h]
  const std::unordered_set<unsigned int> *replaced_by_set; // [rsp+40h] [rbp-110h]
  const std::unordered_set<unsigned int> *__for_range_0; // [rsp+48h] [rbp-108h]
  ReplaceInfo *tar_info_0; // [rsp+50h] [rbp-100h]
  ReplaceInfo *tar_info; // [rsp+58h] [rbp-F8h]
  std::shared_ptr<Config> v35; // [rsp+60h] [rbp-F0h] BYREF
  common::milog::MiLogStream v36; // [rsp+70h] [rbp-E0h] BYREF
  char v37[192]; // [rsp+90h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 8 group:90 48 4 11 group_id:49 64 8 5 it:51 96 8 7 iter:67 128 8 7 iter:92";
  *(_QWORD *)(v3 + 16) = ReplaceInfoMgr::add;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -202116352;
  *(_DWORD *)(v3 + 48) = group_id;
  *(std::unordered_map<unsigned int,ReplaceInfo>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,ReplaceInfo>::find(
                                                                           &this->group_to_replace_info_map_,
                                                                           (const std::unordered_map<unsigned int,ReplaceInfo>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,ReplaceInfo>::end(&this->group_to_replace_info_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,ReplaceInfo>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ReplaceInfo>,false> *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/groups_replacement_mgr.cpp",
      off_24F4A6C0,
      54);
    common::milog::MiLogStream::operator()(&v36, "duplicate group_id=%u", *(unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v36);
  }
  else
  {
    v6 = (char *)(v3 + 48);
    new_info = std::unordered_map<unsigned int,ReplaceInfo>::operator[](
                 &this->group_to_replace_info_map_,
                 (const std::unordered_map<unsigned int,ReplaceInfo>::key_type *)(v3 + 48));
    v7 = *(_DWORD *)(v3 + 48);
    v8 = *(_BYTE *)(((unsigned __int64)new_info >> 3) + 0x7FFF8000);
    if ( v8 != 0 && v8 <= 3 )
    {
      LOBYTE(v6) = v8 != 0;
      __asan_report_store4(new_info, v6, (_BYTE)new_info);
    }
    new_info->group_id = v7;
    v9 = ((_BYTE)new_info + 5) & 7;
    v10 = (*(_BYTE *)(((unsigned __int64)&new_info->is_replaceable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&new_info->is_replaceable >> 3) + 0x7FFF8000));
    if ( (_BYTE)v10 )
      __asan_report_store1(&new_info->is_replaceable, v9, v10);
    new_info->is_replaceable = is_replaceable;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v35);
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35);
    replace_set = LuaConfigMgr::queryGroupReplaceSet(&v11->design_config.lua_config_mgr, *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v35);
    __for_range = replace_set;
    __for_begin._M_cur = std::unordered_set<unsigned int>::begin(replace_set)._M_cur;
    __for_begin_0._M_cur = std::unordered_set<unsigned int>::end(__for_range)._M_cur;
    while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_begin_0) )
    {
      v12 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      *(_DWORD *)(v3 + 32) = *v13;
      *(std::unordered_map<unsigned int,ReplaceInfo>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,ReplaceInfo>::find(
                                                                               &this->group_to_replace_info_map_,
                                                                               (const std::unordered_map<unsigned int,ReplaceInfo>::key_type *)(v3 + 32));
      __y._M_cur = std::unordered_map<unsigned int,ReplaceInfo>::end(&this->group_to_replace_info_map_)._M_cur;
      if ( std::__detail::operator!=<std::pair<unsigned int const,ReplaceInfo>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ReplaceInfo>,false> *)(v3 + 96),
             &__y) )
      {
        v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,ReplaceInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,ReplaceInfo>,false,false> *const)(v3 + 96));
        tar_info = &v14->second;
        p_is_replaceable = &v14->second.is_replaceable;
        if ( *(_BYTE *)(((unsigned __int64)p_is_replaceable >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)p_is_replaceable & 7) >= *(_BYTE *)(((unsigned __int64)p_is_replaceable >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(p_is_replaceable);
        }
        if ( tar_info->is_replaceable )
        {
          std::unordered_set<unsigned int>::insert(
            &new_info->replace_groups_set,
            (const std::unordered_set<unsigned int>::value_type *)(v3 + 32));
          std::unordered_set<unsigned int>::insert(
            &tar_info->replaced_by_groups_set,
            (const std::unordered_set<unsigned int>::value_type *)(v3 + 48));
          *(_QWORD *)(v3 + 128) = tar_info;
          if ( common::tools::MiscUtils::isContains<std::unordered_set<ReplaceInfo *>,ReplaceInfo *>(
                 &this->root_set_,
                 (ReplaceInfo *const *)(v3 + 128)) )
          {
            __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,ReplaceInfo>,false>::__node_type *)tar_info;
            std::unordered_set<ReplaceInfo *>::erase(
              &this->root_set_,
              (const std::unordered_set<ReplaceInfo*>::key_type *)&__y);
            common::milog::MiLogStream::create(
              &v36,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/scene/groups_replacement_mgr.cpp",
              off_24F4A6C0,
              80);
            v16 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v36, (const char (*)[7])"group<");
            v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v16,
                    (const unsigned int *)(v3 + 32));
            v18 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    v17,
                    (const char (*)[21])"> replaced by group<");
            v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v18,
                    (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v19,
              (const char (*)[20])">, leaves root set.");
            common::milog::MiLogStream::~MiLogStream(&v36);
          }
        }
      }
      std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
    }
    if ( is_replaceable )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v35);
      v20 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35);
      replaced_by_set = LuaConfigMgr::queryGroupReplacedBySet(&v20->design_config.lua_config_mgr, *(_DWORD *)(v3 + 48));
      std::shared_ptr<Config>::~shared_ptr(&v35);
      __for_range_0 = replaced_by_set;
      __for_begin_0._M_cur = std::unordered_set<unsigned int>::begin(replaced_by_set)._M_cur;
      *(std::unordered_set<unsigned int>::const_iterator *)(v3 + 96) = std::unordered_set<unsigned int>::end(__for_range_0);
      while ( std::__detail::operator!=<unsigned int,false>(
                &__for_begin_0,
                (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v3 + 96)) )
      {
        v21 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin_0);
        v22 = v21;
        if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v21);
        }
        *(_DWORD *)(v3 + 32) = *v22;
        *(std::unordered_map<unsigned int,ReplaceInfo>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,ReplaceInfo>::find(
                                                                                  &this->group_to_replace_info_map_,
                                                                                  (const std::unordered_map<unsigned int,ReplaceInfo>::key_type *)(v3 + 32));
        __y._M_cur = std::unordered_map<unsigned int,ReplaceInfo>::end(&this->group_to_replace_info_map_)._M_cur;
        if ( std::__detail::operator!=<std::pair<unsigned int const,ReplaceInfo>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ReplaceInfo>,false> *)(v3 + 128),
               &__y) )
        {
          tar_info_0 = &std::__detail::_Node_iterator<std::pair<unsigned int const,ReplaceInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,ReplaceInfo>,false,false> *const)(v3 + 128))->second;
          std::unordered_set<unsigned int>::insert(
            &new_info->replaced_by_groups_set,
            (const std::unordered_set<unsigned int>::value_type *)(v3 + 32));
          std::unordered_set<unsigned int>::insert(
            &tar_info_0->replace_groups_set,
            (const std::unordered_set<unsigned int>::value_type *)(v3 + 48));
        }
        std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin_0);
      }
    }
    if ( !is_replaceable || std::unordered_set<unsigned int>::empty(&new_info->replaced_by_groups_set) )
    {
      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,ReplaceInfo>,false>::__node_type *)new_info;
      std::unordered_set<ReplaceInfo *>::insert(&this->root_set_, (std::unordered_set<ReplaceInfo*>::value_type *)&__y);
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/groups_replacement_mgr.cpp",
        off_24F4A6C0,
        106);
      common::milog::MiLogStream::operator()(&v36, off_24F4A860, *(unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v36);
    }
  }
  if ( v37 == (char *)v3 )
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

// Line 113: range 000000001316B7B0-000000001316BD08
void __fastcall ReplaceInfoMgr::del(ReplaceInfoMgr *const this, uint32_t group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__detail::_Node_iterator<std::pair<unsigned int const,ReplaceInfo>,false,false>::pointer v5; // rax
  std::__detail::_Node_iterator<unsigned int,true,false>::reference v6; // rax
  _DWORD *v7; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,ReplaceInfo>,false,false>::pointer v8; // rax
  std::__detail::_Node_iterator<unsigned int,true,false>::reference v9; // rax
  _DWORD *v10; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,ReplaceInfo>,false,false>::pointer v11; // rax
  std::unordered_set<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-100h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-F8h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,ReplaceInfo>,false> __y; // [rsp+20h] [rbp-F0h] BYREF
  ReplaceInfo *del_info; // [rsp+28h] [rbp-E8h]
  std::unordered_set<unsigned int> *__for_range; // [rsp+30h] [rbp-E0h]
  std::unordered_set<unsigned int> *__for_range_0; // [rsp+38h] [rbp-D8h]
  ReplaceInfo *tar_info_0; // [rsp+40h] [rbp-D0h]
  ReplaceInfo *tar_info; // [rsp+48h] [rbp-C8h]
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-C0h] BYREF
  char v21[160]; // [rsp+70h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 9 group:136 48 4 12 group_id:112 64 8 6 it:114 96 8 8 iter:138";
  *(_QWORD *)(v2 + 16) = ReplaceInfoMgr::del;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = group_id;
  *(std::unordered_map<unsigned int,ReplaceInfo>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,ReplaceInfo>::find(
                                                                           &this->group_to_replace_info_map_,
                                                                           (const std::unordered_map<unsigned int,ReplaceInfo>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,ReplaceInfo>::end(&this->group_to_replace_info_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,ReplaceInfo>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ReplaceInfo>,false> *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/groups_replacement_mgr.cpp",
      off_24F1A860,
      117);
    common::milog::MiLogStream::operator()(&v20, "group_id=%u not registered", *(unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  else
  {
    v5 = std::__detail::_Node_iterator<std::pair<unsigned int const,ReplaceInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,ReplaceInfo>,false,false> *const)(v2 + 64));
    del_info = &v5->second;
    __for_range = &v5->second.replace_groups_set;
    __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&v5->second.replace_groups_set)._M_cur;
    __for_end._M_cur = std::unordered_set<unsigned int>::end(__for_range)._M_cur;
    while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
    {
      v6 = std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      *(_DWORD *)(v2 + 32) = *v7;
      *(std::unordered_map<unsigned int,ReplaceInfo>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,ReplaceInfo>::find(
                                                                               &this->group_to_replace_info_map_,
                                                                               (const std::unordered_map<unsigned int,ReplaceInfo>::key_type *)(v2 + 32));
      __y._M_cur = std::unordered_map<unsigned int,ReplaceInfo>::end(&this->group_to_replace_info_map_)._M_cur;
      if ( !std::__detail::operator==<std::pair<unsigned int const,ReplaceInfo>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ReplaceInfo>,false> *)(v2 + 96),
              &__y) )
      {
        v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,ReplaceInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,ReplaceInfo>,false,false> *const)(v2 + 96));
        tar_info = &v8->second;
        std::unordered_set<unsigned int>::erase(
          &v8->second.replaced_by_groups_set,
          (const std::unordered_set<unsigned int>::key_type *)(v2 + 48));
        if ( std::unordered_set<unsigned int>::empty(&tar_info->replaced_by_groups_set) )
        {
          __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,ReplaceInfo>,false>::__node_type *)tar_info;
          std::unordered_set<ReplaceInfo *>::insert(
            &this->root_set_,
            (std::unordered_set<ReplaceInfo*>::value_type *)&__y);
          common::milog::MiLogStream::create(
            &v20,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/groups_replacement_mgr.cpp",
            off_24F1A860,
            132);
          common::milog::MiLogStream::operator()(
            &v20,
            off_24F4A960,
            *(unsigned int *)(v2 + 48),
            *(unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v20);
        }
      }
      std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
    }
    __for_range_0 = &del_info->replaced_by_groups_set;
    __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&del_info->replaced_by_groups_set)._M_cur;
    __for_end._M_cur = std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
    {
      v9 = std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      *(_DWORD *)(v2 + 32) = *v10;
      *(std::unordered_map<unsigned int,ReplaceInfo>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,ReplaceInfo>::find(
                                                                               &this->group_to_replace_info_map_,
                                                                               (const std::unordered_map<unsigned int,ReplaceInfo>::key_type *)(v2 + 32));
      __y._M_cur = std::unordered_map<unsigned int,ReplaceInfo>::end(&this->group_to_replace_info_map_)._M_cur;
      if ( !std::__detail::operator==<std::pair<unsigned int const,ReplaceInfo>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ReplaceInfo>,false> *)(v2 + 96),
              &__y) )
      {
        v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,ReplaceInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,ReplaceInfo>,false,false> *const)(v2 + 96));
        tar_info_0 = &v11->second;
        std::unordered_set<unsigned int>::erase(
          &v11->second.replace_groups_set,
          (const std::unordered_set<unsigned int>::key_type *)(v2 + 32));
      }
      std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
    }
    std::unordered_map<unsigned int,ReplaceInfo>::erase(
      &this->group_to_replace_info_map_,
      *(std::unordered_map<unsigned int,ReplaceInfo>::iterator *)(v2 + 64));
  }
  if ( v21 == (char *)v2 )
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

// Line 149: range 000000001316BD0A-000000001316C572
void __cdecl ReplaceInfoMgr::adjustByKahns(ReplaceInfoMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  ReplaceInfo **v4; // rax
  std::__detail::_Node_iterator<unsigned int,true,false>::reference v5; // rax
  _DWORD *v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::unordered_set<unsigned int>::size_type v13; // r14
  std::unordered_set<unsigned int>::size_type v14; // r14
  int begin_time_us; // [rsp+18h] [rbp-1A8h]
  int end_time_us; // [rsp+1Ch] [rbp-1A4h]
  std::unordered_set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-1A0h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-198h] BYREF
  std::__detail::_Node_iterator_base<ReplaceInfo*,false> __y; // [rsp+30h] [rbp-190h] BYREF
  ReplaceInfo *info_ptr; // [rsp+38h] [rbp-188h]
  std::unordered_set<unsigned int> *__for_range; // [rsp+40h] [rbp-180h]
  ReplaceInfo *cur_info; // [rsp+48h] [rbp-178h]
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-170h] BYREF
  common::milog::MiLogStream v24; // [rsp+70h] [rbp-150h] BYREF
  char v25[304]; // [rsp+90h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 48 4 12 to_group:186 64 8 8 iter:160 96 8 6 it:188 128 16 9 timer:150 160 56 12 open_set:157";
  *(_QWORD *)(v1 + 16) = ReplaceInfoMgr::adjustByKahns;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -218959360;
  v3[536862724] = -219021312;
  v3[536862726] = -218103808;
  v3[536862727] = -202116109;
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v1 + 128));
  begin_time_us = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v1 + 128));
  std::unordered_set<unsigned int>::clear(&this->active_groups);
  std::unordered_set<unsigned int>::clear(&this->replaced_groups);
  std::unordered_set<ReplaceInfo *>::unordered_set(
    (std::unordered_set<ReplaceInfo*> *const)(v1 + 160),
    &this->root_set_);
  while ( !std::unordered_set<ReplaceInfo *>::empty((const std::unordered_set<ReplaceInfo*> *const)(v1 + 160)) )
  {
    *(std::unordered_set<ReplaceInfo*>::iterator *)(v1 + 64) = std::unordered_set<ReplaceInfo *>::begin((std::unordered_set<ReplaceInfo*> *const)(v1 + 160));
    __y._M_cur = std::unordered_set<ReplaceInfo *>::end((std::unordered_set<ReplaceInfo*> *const)(v1 + 160))._M_cur;
    if ( !std::__detail::operator==<ReplaceInfo *,false>(
            (const std::__detail::_Node_iterator_base<ReplaceInfo*,false> *)(v1 + 64),
            &__y) )
    {
      v4 = (ReplaceInfo **)std::__detail::_Node_iterator<ReplaceInfo *,true,false>::operator*((const std::__detail::_Node_iterator<ReplaceInfo*,true,false> *const)(v1 + 64));
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
        v4 = (ReplaceInfo **)__asan_report_load8(v4);
      info_ptr = *v4;
      std::unordered_set<ReplaceInfo *>::erase(
        (std::unordered_set<ReplaceInfo*> *const)(v1 + 160),
        *(std::unordered_set<ReplaceInfo*>::iterator *)(v1 + 64));
      if ( info_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&info_ptr->is_replaced >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)info_ptr + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&info_ptr->is_replaced >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load1(&info_ptr->is_replaced);
        }
        if ( info_ptr->is_replaced )
          std::unordered_set<unsigned int>::insert(&this->replaced_groups, &info_ptr->group_id);
        else
          std::unordered_set<unsigned int>::insert(&this->active_groups, &info_ptr->group_id);
        __for_range = &info_ptr->replace_groups_set;
        __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&info_ptr->replace_groups_set)._M_cur;
        __for_end._M_cur = std::unordered_set<unsigned int>::end(__for_range)._M_cur;
        while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
        {
          v5 = std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
          v6 = v5;
          if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v5);
          }
          *(_DWORD *)(v1 + 48) = *v6;
          *(std::unordered_map<unsigned int,ReplaceInfo>::iterator *)(v1 + 96) = std::unordered_map<unsigned int,ReplaceInfo>::find(
                                                                                   &this->group_to_replace_info_map_,
                                                                                   (const std::unordered_map<unsigned int,ReplaceInfo>::key_type *)(v1 + 48));
          __y._M_cur = (std::__detail::_Node_iterator_base<ReplaceInfo*,false>::__node_type *)std::unordered_map<unsigned int,ReplaceInfo>::end(&this->group_to_replace_info_map_)._M_cur;
          if ( std::__detail::operator!=<std::pair<unsigned int const,ReplaceInfo>,false>(
                 (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ReplaceInfo>,false> *)(v1 + 96),
                 (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ReplaceInfo>,false> *)&__y) )
          {
            cur_info = &std::__detail::_Node_iterator<std::pair<unsigned int const,ReplaceInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,ReplaceInfo>,false,false> *const)(v1 + 96))->second;
            if ( *(_BYTE *)(((unsigned __int64)&info_ptr->is_replaced >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)info_ptr + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&info_ptr->is_replaced >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_load1(&info_ptr->is_replaced);
            }
            if ( !info_ptr->is_replaced )
            {
              v7 = ((_BYTE)cur_info + 4) & 7;
              v8 = (*(_BYTE *)(((unsigned __int64)&cur_info->is_replaced >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&cur_info->is_replaced >> 3) + 0x7FFF8000));
              if ( (_BYTE)v8 )
                __asan_report_store1(&cur_info->is_replaced, v7, v8);
              cur_info->is_replaced = 1;
              std::unordered_set<unsigned int>::insert(&cur_info->final_replaced_by_groups_set, &info_ptr->group_id);
              common::milog::MiLogStream::create(
                &v23,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/scene/groups_replacement_mgr.cpp",
                "adjustByKahns",
                196);
              v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                     &v23,
                     (const char (*)[12])"proc edge <");
              v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &info_ptr->group_id);
              v11 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v10, (const char (*)[5])off_24F4AAE0);
              v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v11,
                      (const unsigned int *)(v1 + 48));
              common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])">: replaced!");
              common::milog::MiLogStream::~MiLogStream(&v23);
            }
            std::unordered_set<unsigned int>::erase(&cur_info->replaced_by_groups_set, &info_ptr->group_id);
            if ( std::unordered_set<unsigned int>::empty(&cur_info->replaced_by_groups_set) )
            {
              __y._M_cur = (std::__detail::_Node_iterator_base<ReplaceInfo*,false>::__node_type *)cur_info;
              std::unordered_set<ReplaceInfo *>::insert(
                (std::unordered_set<ReplaceInfo*> *const)(v1 + 160),
                (std::unordered_set<ReplaceInfo*>::value_type *)&__y);
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v24,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/groups_replacement_mgr.cpp",
              "adjustByKahns",
              211);
            common::milog::MiLogStream::operator()(&v24, "group_id=%u not found in map.", *(unsigned int *)(v1 + 48));
            common::milog::MiLogStream::~MiLogStream(&v24);
          }
          std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/groups_replacement_mgr.cpp",
          "adjustByKahns",
          166);
        common::milog::MiLogStream::operator()(&v24, "null info ptr.");
        common::milog::MiLogStream::~MiLogStream(&v24);
      }
    }
  }
  v13 = std::unordered_set<unsigned int>::size(&this->replaced_groups);
  v14 = std::unordered_set<unsigned int>::size(&this->active_groups) + v13;
  if ( v14 != std::unordered_map<unsigned int,ReplaceInfo>::size(&this->group_to_replace_info_map_) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/groups_replacement_mgr.cpp",
      "adjustByKahns",
      217);
    common::milog::MiLogStream::operator()(&v24, "size mismatch.");
    common::milog::MiLogStream::~MiLogStream(&v24);
  }
  end_time_us = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v1 + 128));
  common::milog::MiLogStream::create(
    &v24,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/groups_replacement_mgr.cpp",
    "adjustByKahns",
    221);
  common::milog::MiLogStream::operator()(&v24, "[PERF] cost <%d> us", (unsigned int)(end_time_us - begin_time_us));
  common::milog::MiLogStream::~MiLogStream(&v24);
  std::unordered_set<ReplaceInfo *>::~unordered_set((std::unordered_set<ReplaceInfo*> *const)(v1 + 160));
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v1 + 128));
  if ( v25 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 258: range 000000001316C574-000000001316C6F5
void __cdecl GroupsReplacementMgr::GroupsReplacementMgr(
        GroupsReplacementMgr *const this,
        SceneBlockGroupComp *scene_block_group_comp)
{
  __int64 v2; // rsi
  bool v3; // dl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, scene_block_group_comp);
  this->scene_block_group_comp_ = scene_block_group_comp;
  std::unordered_map<unsigned int,GroupLoadParam>::unordered_map(&this->reg_groups_map_);
  if ( *(char *)(((unsigned __int64)&this->is_after_player_login_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_after_player_login_, scene_block_group_comp, &this->is_after_player_login_);
  this->is_after_player_login_ = 0;
  v2 = (((_BYTE)this + 68) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->do_reload_stack_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->do_reload_stack_ >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->do_reload_stack_, v2, v3);
  this->do_reload_stack_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_groups_replacement_stack_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_groups_replacement_stack_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->refresh_groups_replacement_stack_, v2, (_BYTE)this + 72);
  }
  this->refresh_groups_replacement_stack_ = 0;
  ReplaceInfoMgr::ReplaceInfoMgr(&this->reg_groups_replace_mgr_);
  std::unordered_set<unsigned int>::unordered_set(&this->all_replaced_groups_set_);
  if ( *(char *)(((unsigned __int64)&this->is_replacement_enable_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_replacement_enable_, v2, &this->is_replacement_enable_);
  this->is_replacement_enable_ = 1;
  std::unordered_set<unsigned int>::unordered_set(&this->nearby_active_groups_set_);
};

// Line 266: range 000000001316C6F6-000000001316CDC3
bool __cdecl GroupsReplacementMgr::canRegisterGroups(
        const GroupsReplacementMgr *const this,
        const std::vector<unsigned int> *group_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r15
  std::pair<unsigned int const,GroupLoadParam> *n; // rax
  SceneBlockGroupComp *scene_block_group_comp; // rcx
  bool isGroupReplaceable; // si
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v9; // rax
  _DWORD *v10; // rdx
  bool v11; // al
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v12; // rax
  _DWORD *v13; // rdx
  const char *v14; // rax
  bool result; // al
  bool is_replaced; // [rsp+1Fh] [rbp-221h]
  std::unordered_map<unsigned int,GroupLoadParam>::const_iterator __for_begin; // [rsp+20h] [rbp-220h] BYREF
  std::unordered_map<unsigned int,GroupLoadParam>::const_iterator __for_end; // [rsp+28h] [rbp-218h] BYREF
  const std::unordered_map<unsigned int,GroupLoadParam> *__for_range; // [rsp+30h] [rbp-210h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-208h]
  const std::unordered_set<unsigned int> *replaced_groups; // [rsp+40h] [rbp-200h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+48h] [rbp-1F8h]
  std::tuple_element<0,std::pair<unsigned int const,GroupLoadParam> >::type *group_id; // [rsp+50h] [rbp-1F0h]
  std::tuple_element<1,std::pair<unsigned int const,GroupLoadParam> >::type *_; // [rsp+58h] [rbp-1E8h]
  std::pair<unsigned int const,GroupLoadParam> __in; // [rsp+64h] [rbp-1DCh] BYREF
  common::milog::MiLogStream v27; // [rsp+70h] [rbp-1D0h] BYREF
  std::string v28; // [rsp+90h] [rbp-1B0h] BYREF
  char v29[400]; // [rsp+B0h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 group_id:289 64 224 7 mgr:274";
  *(_QWORD *)(v2 + 16) = GroupsReplacementMgr::canRegisterGroups;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862729] = -202116109;
  v4[536862730] = -202116109;
  if ( GroupsReplacementMgr::hasMutualReplace(this, group_vec) )
  {
    v5 = 0;
  }
  else
  {
    ReplaceInfoMgr::ReplaceInfoMgr((ReplaceInfoMgr *const)(v2 + 64));
    __for_range = &this->reg_groups_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,GroupLoadParam>::begin(&this->reg_groups_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,GroupLoadParam>::end(&this->reg_groups_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,GroupLoadParam>,false>(&__for_begin, &__for_end) )
    {
      n = (std::pair<unsigned int const,GroupLoadParam> *)std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupLoadParam>,false,false>::operator*(&__for_begin);
      if ( ((unsigned __int8)n & 7) >= *(_BYTE *)(((unsigned __int64)n >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)n >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&n->second.revise_id + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)n + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&n->second.revise_id + 3) >> 3) + 0x7FFF8000) )
      {
        n = (std::pair<unsigned int const,GroupLoadParam> *)__asan_report_load_n(n, 12LL);
      }
      __in = *n;
      group_id = std::get<0ul,unsigned int const,GroupLoadParam>(&__in);
      _ = std::get<1ul,unsigned int const,GroupLoadParam>(&__in);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      scene_block_group_comp = this->scene_block_group_comp_;
      if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(group_id);
      }
      isGroupReplaceable = SceneBlockGroupComp::isGroupReplaceable(scene_block_group_comp, *group_id);
      if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(group_id);
      }
      ReplaceInfoMgr::add((ReplaceInfoMgr *const)(v2 + 64), *group_id, isGroupReplaceable);
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,GroupLoadParam>,false,false>::operator++(&__for_begin);
    }
    __for_range_0 = group_vec;
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLoadParam>,false>::__node_type *)std::vector<unsigned int>::begin(group_vec)._M_current;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLoadParam>,false>::__node_type *)std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end) )
    {
      v9 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      *(_DWORD *)(v2 + 48) = *v10;
      if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,GroupLoadParam> const,unsigned int>(
              &this->reg_groups_map_,
              (const unsigned int *)(v2 + 48)) )
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v11 = SceneBlockGroupComp::isGroupReplaceable(this->scene_block_group_comp_, *(_DWORD *)(v2 + 48));
        ReplaceInfoMgr::add((ReplaceInfoMgr *const)(v2 + 64), *(_DWORD *)(v2 + 48), v11);
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
    }
    ReplaceInfoMgr::adjustByKahns((ReplaceInfoMgr *const)(v2 + 64));
    is_replaced = 0;
    replaced_groups = ReplaceInfoMgr::getReplacedGroups((const ReplaceInfoMgr *const)(v2 + 64));
    __for_range_1 = group_vec;
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLoadParam>,false>::__node_type *)std::vector<unsigned int>::begin(group_vec)._M_current;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLoadParam>,false>::__node_type *)std::vector<unsigned int>::end(__for_range_1)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end) )
    {
      v12 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      *(_DWORD *)(v2 + 48) = *v13;
      if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
             replaced_groups,
             (const unsigned int *)(v2 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/groups_replacement_mgr.cpp",
          "canRegisterGroups",
          293);
        ReplaceInfoMgr::getReplacedByStr[abi:cxx11](&v28, (const ReplaceInfoMgr *const)(v2 + 64), *(_DWORD *)(v2 + 48));
        v14 = (const char *)std::string::c_str(&v28);
        common::milog::MiLogStream::operator()(&v27, "%s", v14);
        std::string::~string(&v28);
        common::milog::MiLogStream::~MiLogStream(&v27);
        is_replaced = 1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
    }
    v5 = !is_replaced;
    ReplaceInfoMgr::~ReplaceInfoMgr((ReplaceInfoMgr *const)(v2 + 64));
  }
  result = v5;
  if ( v29 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
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

// Line 307: range 000000001316CDC4-000000001316D961
int32_t __cdecl GroupsReplacementMgr::registerGroups(
        GroupsReplacementMgr *const this,
        const std::vector<unsigned int> *group_vec,
        uint32_t revise_level,
        uint32_t revise_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  bool *p_is_ignore_mutual_replace_check; // rax
  char v12; // al
  int32_t v13; // r14d
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v14; // rax
  _DWORD *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  GroupLoadParam *v22; // rax
  bool v23; // dl
  bool v24; // dl
  std::__detail::_Node_iterator<unsigned int,true,false>::reference v25; // rax
  _DWORD *v26; // rdx
  char v28; // al
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  int32_t result; // eax
  SceneBlockGroupComp *scene_block_group_comp; // [rsp+10h] [rbp-1F0h]
  std::unordered_set<unsigned int>::hasher __hf; // [rsp+3Ch] [rbp-1C4h] BYREF
  std::unordered_set<unsigned int>::key_equal __eql; // [rsp+3Dh] [rbp-1C3h] BYREF
  std::allocator<unsigned int> __a; // [rsp+3Eh] [rbp-1C2h] BYREF
  bool is_need_refresh_replacement; // [rsp+3Fh] [rbp-1C1h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+40h] [rbp-1C0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+48h] [rbp-1B8h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+50h] [rbp-1B0h]
  const LuaConfigMgr *lua_config_mgr; // [rsp+58h] [rbp-1A8h]
  std::unordered_set<unsigned int> *__for_range_0; // [rsp+60h] [rbp-1A0h]
  GroupLoadParam *param; // [rsp+68h] [rbp-198h]
  common::milog::MiLogStream v48; // [rsp+70h] [rbp-190h] BYREF
  std::unordered_set<unsigned int> group_set; // [rsp+90h] [rbp-170h] BYREF
  char v50[304]; // [rsp+D0h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 48 4 13 owner_uid:308 64 4 12 group_id:338 80 4 12 group_id:318 96 16 14 config_ptr:311 128 16"
                        " 13 group_ptr:345 160 56 20 valid_groups_set:317";
  *(_QWORD *)(v4 + 16) = GroupsReplacementMgr::registerGroups;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862726] = -218103808;
  v6[536862727] = -202116109;
  *(_DWORD *)(v4 + 48) = GroupsReplacementMgr::getOwnerUid(this);
  common::milog::MiLogStream::create(
    &v48,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/groups_replacement_mgr.cpp",
    "registerGroups",
    309);
  v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
         &v48,
         (const char (*)[25])"register Dynamic Groups ");
  v8 = common::milog::MiLogStream::operator<<<unsigned int>(v7, group_vec);
  v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" uid:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 48));
  common::milog::MiLogStream::~MiLogStream(&v48);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 96));
  if ( !GroupsReplacementMgr::hasMutualReplace(this, group_vec) )
    goto LABEL_10;
  if ( std::operator==<Config>((const std::shared_ptr<Config> *)(v4 + 96), 0LL) )
    goto LABEL_9;
  v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
  p_is_ignore_mutual_replace_check = &v10->is_ignore_mutual_replace_check;
  if ( *(_BYTE *)(((unsigned __int64)p_is_ignore_mutual_replace_check >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)p_is_ignore_mutual_replace_check & 7) >= *(_BYTE *)(((unsigned __int64)p_is_ignore_mutual_replace_check >> 3)
                                                                           + 0x7FFF8000) )
  {
    __asan_report_load1(p_is_ignore_mutual_replace_check);
  }
  if ( !v10->is_ignore_mutual_replace_check )
LABEL_9:
    v12 = 1;
  else
LABEL_10:
    v12 = 0;
  if ( v12 )
  {
    v13 = -1;
  }
  else
  {
    std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v4 + 160));
    __for_range = group_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(group_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(group_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v14 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v15 = v14;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v14);
      }
      *(_DWORD *)(v4 + 80) = *v15;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      if ( !SceneBlockGroupComp::isDynamicGroup(this->scene_block_group_comp_, *(_DWORD *)(v4 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v48,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/groups_replacement_mgr.cpp",
          "registerGroups",
          322);
        v16 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v48,
                (const char (*)[34])" skip register non dynamic group:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v4 + 80));
        v18 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v17, (const char (*)[6])" uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream(&v48);
      }
      else if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,GroupLoadParam>,unsigned int>(
                  &this->reg_groups_map_,
                  (const unsigned int *)(v4 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v48,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/groups_replacement_mgr.cpp",
          "registerGroups",
          327);
        v19 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v48,
                (const char (*)[29])"duplicate register group_id=");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v4 + 80));
        v21 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v20, (const char (*)[13])", owner_uid=");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream(&v48);
      }
      else
      {
        std::unordered_set<unsigned int>::insert(
          (std::unordered_set<unsigned int> *const)(v4 + 160),
          (const std::unordered_set<unsigned int>::value_type *)(v4 + 80));
        v22 = std::unordered_map<unsigned int,GroupLoadParam>::operator[](
                &this->reg_groups_map_,
                (const std::unordered_map<unsigned int,GroupLoadParam>::key_type *)(v4 + 80));
        param = v22;
        v23 = *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
           && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000);
        if ( v23 )
          __asan_report_store4(v22, ((unsigned __int8)v22 & 7u) + 3, v23);
        param->revise_level = revise_level;
        v24 = *(_BYTE *)(((unsigned __int64)&param->revise_id >> 3) + 0x7FFF8000) != 0
           && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->revise_id >> 3) + 0x7FFF8000);
        if ( v24 )
          __asan_report_store4(&param->revise_id, (((_BYTE)param + 4) & 7u) + 3, v24);
        param->revise_id = revise_id;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    is_need_refresh_replacement = 0;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v4 + 128));
    lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128))->design_config.lua_config_mgr;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 128));
    __for_range_0 = (std::unordered_set<unsigned int> *)(v4 + 160);
    __for_begin._M_current = (const unsigned int *)std::unordered_set<unsigned int>::begin((std::unordered_set<unsigned int> *const)(v4 + 160))._M_cur;
    __for_end._M_current = (const unsigned int *)std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<unsigned int,false>(
              (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_begin,
              (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end) )
    {
      v25 = std::__detail::_Node_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
      v26 = v25;
      if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v25);
      }
      *(_DWORD *)(v4 + 64) = *v26;
      if ( !is_need_refresh_replacement && LuaConfigMgr::isGroupJoinReplacement(lua_config_mgr, *(_DWORD *)(v4 + 64)) )
        is_need_refresh_replacement = 1;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      SceneBlockGroupComp::getActiveGroup(
        (SceneBlockGroupComp *const)(v4 + 128),
        (uint32_t)this->scene_block_group_comp_);
      if ( !std::operator!=<Group>((const std::shared_ptr<Group> *)(v4 + 128), 0LL) )
        goto LABEL_46;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      if ( SceneBlockGroupComp::isGroupDelayUnregister(this->scene_block_group_comp_, *(_DWORD *)(v4 + 64)) )
        v28 = 1;
      else
LABEL_46:
        v28 = 0;
      if ( v28 )
      {
        common::milog::MiLogStream::create(
          &v48,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/scene/groups_replacement_mgr.cpp",
          "registerGroups",
          348);
        v29 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v48, (const char (*)[5])"uid:");
        v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v29,
                (const unsigned int *)(v4 + 48));
        v31 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v30, (const char (*)[11])" group_id:");
        v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v31,
                (const unsigned int *)(v4 + 64));
        common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v32, (const char (*)[37])off_24F4AEE0);
        common::milog::MiLogStream::~MiLogStream(&v48);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        scene_block_group_comp = this->scene_block_group_comp_;
        *(_DWORD *)(v4 + 80) = *(_DWORD *)(v4 + 64);
        std::allocator<unsigned int>::allocator(&__a);
        std::unordered_set<unsigned int>::unordered_set(
          &group_set,
          (std::initializer_list<unsigned int>)__PAIR128__(1LL, v4 + 80),
          0LL,
          &__hf,
          &__eql,
          &__a);
        SceneBlockGroupComp::forceUnloadGroupBatch(scene_block_group_comp, &group_set, 0, 0, 0);
        std::unordered_set<unsigned int>::~unordered_set(&group_set);
        std::allocator<unsigned int>::~allocator(&__a);
      }
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v4 + 128));
      std::__detail::_Node_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
    }
    if ( *(char *)(((unsigned __int64)&this->is_replacement_enable_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_replacement_enable_);
    if ( this->is_replacement_enable_ )
    {
      if ( !std::unordered_set<unsigned int>::empty((const std::unordered_set<unsigned int> *const)(v4 + 160)) )
      {
        if ( is_need_refresh_replacement )
          GroupsReplacementMgr::refreshGroupsReplacement(this);
        GroupsReplacementMgr::doReload(
          this,
          LOAD_AND_START,
          1,
          "./src/scene/groups_replacement_mgr.cpp",
          "registerGroups",
          365);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/groups_replacement_mgr.cpp",
        "registerGroups",
        370);
      v33 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v48,
              (const char (*)[39])"wait afterPlayerLogin load group, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v48);
    }
    v13 = 0;
    std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v4 + 160));
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 96));
  result = v13;
  if ( v50 == (char *)v4 )
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

// Line 377: range 000000001316D962-000000001316DAB7
void __cdecl GroupsReplacementMgr::disable(GroupsReplacementMgr *const this)
{
  __int64 v1; // rsi
  common::milog::MiLogStream *v2; // rbx
  Scene *Scene; // rax
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_replacement_enable_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_replacement_enable_);
  if ( this->is_replacement_enable_ )
  {
    if ( *(char *)(((unsigned __int64)&this->is_replacement_enable_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_replacement_enable_, v1, &this->is_replacement_enable_);
    this->is_replacement_enable_ = 0;
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/groups_replacement_mgr.cpp",
      "disable",
      383);
    v2 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v5,
           (const char (*)[37])"group replacement disable. scene_id:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    Scene = SceneCompBase::getScene((SceneCompBase *const)this->scene_block_group_comp_);
    val = Scene::getSceneId(Scene);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
};

// Line 388: range 000000001316DAB8-000000001316DC0A
void __cdecl GroupsReplacementMgr::enable(GroupsReplacementMgr *const this)
{
  __int64 v1; // rsi
  common::milog::MiLogStream *v2; // rbx
  Scene *Scene; // rax
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_replacement_enable_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_replacement_enable_);
  if ( !this->is_replacement_enable_ )
  {
    if ( *(char *)(((unsigned __int64)&this->is_replacement_enable_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_replacement_enable_, v1, &this->is_replacement_enable_);
    this->is_replacement_enable_ = 1;
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/groups_replacement_mgr.cpp",
      "enable",
      394);
    v2 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v5,
           (const char (*)[36])"group replacement enable. scene_id:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    Scene = SceneCompBase::getScene((SceneCompBase *const)this->scene_block_group_comp_);
    val = Scene::getSceneId(Scene);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
};

// Line 398: range 000000001316DC0C-000000001316DD06
void __cdecl GroupsReplacementMgr::prePlayerLogin(GroupsReplacementMgr *const this, bool is_relogin)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  if ( !is_relogin )
  {
    if ( *(char *)(((unsigned __int64)&this->is_after_player_login_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_after_player_login_);
    if ( this->is_after_player_login_ )
    {
      common::milog::MiLogStream::create(
        &v4,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/groups_replacement_mgr.cpp",
        "prePlayerLogin",
        406);
      v2 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v4,
             (const char (*)[42])"is_after_player_login_ already true, uid:");
      val = GroupsReplacementMgr::getOwnerUid(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
      common::milog::MiLogStream::~MiLogStream(&v4);
    }
    else
    {
      GroupsReplacementMgr::disable(this);
    }
  }
};

// Line 415: range 000000001316DD08-000000001316EA68
void __cdecl GroupsReplacementMgr::afterPlayerLogin(GroupsReplacementMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  Scene *v8; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  Player *v12; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v16; // rax
  _DWORD *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  unsigned __int64 v24; // rax
  Player *v25; // rax
  common::milog::MiLogStream *v26; // r14
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  unsigned int *v31; // rax
  uint32_t *v32; // rdx
  unsigned __int64 v33; // rax
  SceneBlockGroupComp *scene_block_group_comp; // rdx
  SceneBlockGroupComp *v35; // rax
  unsigned __int64 v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // r14
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  uint32_t group_id; // [rsp+1Ch] [rbp-184h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-180h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-178h] BYREF
  Scene *scene; // [rsp+30h] [rbp-170h]
  const LuaConfigMgr *lua_config_mgr; // [rsp+38h] [rbp-168h]
  const TxtConfigMgr *txt_config_mgr; // [rsp+40h] [rbp-160h]
  const std::vector<unsigned int> *frombin_dynamic_groups_vec; // [rsp+48h] [rbp-158h]
  const std::vector<unsigned int> *__for_range; // [rsp+50h] [rbp-150h]
  const std::vector<unsigned int> *frombin_abandon_blockbin_scene_groups_vec; // [rsp+58h] [rbp-148h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+60h] [rbp-140h]
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+68h] [rbp-138h]
  std::shared_ptr<Config> v55; // [rsp+70h] [rbp-130h] BYREF
  std::shared_ptr<Config> v56; // [rsp+80h] [rbp-120h] BYREF
  common::milog::MiLogStream v57; // [rsp+90h] [rbp-110h] BYREF
  char v58[240]; // [rsp+B0h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "7 48 4 13 owner_uid:416 64 4 12 scene_id:443 80 4 29 clear_dynamic_group_count:444 96 4 44 clear"
                        "_abandon_blockbin_scene_group_count:445 112 4 12 group_id:448 128 16 9 timer:432 160 16 20 owner_player_ptr:433";
  *(_QWORD *)(v1 + 16) = GroupsReplacementMgr::afterPlayerLogin;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -234556924;
  v3[536862723] = -234556924;
  v3[536862724] = -219021312;
  v3[536862725] = -202178560;
  *(_DWORD *)(v1 + 48) = GroupsReplacementMgr::getOwnerUid(this);
  if ( *(char *)(((unsigned __int64)&this->is_after_player_login_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_after_player_login_);
  if ( this->is_after_player_login_ )
  {
    common::milog::MiLogStream::create(
      &v57,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/groups_replacement_mgr.cpp",
      "afterPlayerLogin",
      419);
    v4 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v57,
           (const char (*)[42])"is_after_player_login_ already true, uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, (const unsigned int *)(v1 + 48));
    common::milog::MiLogStream::~MiLogStream(&v57);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v57,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/groups_replacement_mgr.cpp",
      "afterPlayerLogin",
      423);
    v5 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v57,
           (const char (*)[23])"afterPlayerLogin, uid:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v6, (const char (*)[10])" sceneid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v8 = SceneCompBase::getScene((SceneCompBase *const)this->scene_block_group_comp_);
    *(_DWORD *)(v1 + 112) = Scene::getSceneId(v8);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 112));
    common::milog::MiLogStream::~MiLogStream(&v57);
    if ( *(char *)(((unsigned __int64)&this->is_after_player_login_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_after_player_login_, v1 + 112, &this->is_after_player_login_);
    this->is_after_player_login_ = 1;
    GroupsReplacementMgr::enable(this);
    GroupsReplacementMgr::refreshGroupsReplacement(this);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    scene = SceneCompBase::getScene((SceneCompBase *const)this->scene_block_group_comp_);
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v1 + 128));
    Scene::getOwnPlayer((const Scene *const)(v1 + 160));
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 160), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v57,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/groups_replacement_mgr.cpp",
        "afterPlayerLogin",
        436);
      v9 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             &v57,
             (const char (*)[23])"owner player not exist");
      *(_DWORD *)(v1 + 112) = Scene::getSceneId(scene);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v1 + 112));
      v11 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])", uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::~MiLogStream(&v57);
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v55);
      lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v55)->design_config.lua_config_mgr;
      std::shared_ptr<Config>::~shared_ptr(&v55);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v56);
      txt_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v56)->design_config.txt_config_mgr;
      std::shared_ptr<Config>::~shared_ptr(&v56);
      *(_DWORD *)(v1 + 64) = Scene::getSceneId(scene);
      *(_DWORD *)(v1 + 80) = 0;
      *(_DWORD *)(v1 + 96) = 0;
      v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
      frombin_dynamic_groups_vec = Player::getFromBinSceneDynamicGroupsVec(v12, *(_DWORD *)(v1 + 64));
      common::milog::MiLogStream::create(
        &v57,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/groups_replacement_mgr.cpp",
        "afterPlayerLogin",
        447);
      v13 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v57,
              (const char (*)[28])"frombin_dynamic_groups_vec:");
      __for_end._M_current = (const unsigned int *)std::vector<unsigned int>::size(frombin_dynamic_groups_vec);
      v14 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v13,
              (const unsigned __int64 *)&__for_end);
      v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])", uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::~MiLogStream(&v57);
      __for_range = frombin_dynamic_groups_vec;
      __for_begin._M_current = std::vector<unsigned int>::begin(frombin_dynamic_groups_vec)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v16 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        v17 = v16;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v16);
        }
        *(_DWORD *)(v1 + 112) = *v17;
        group_info_config_ptr = LuaConfigMgr::findGroupInfoConfig(lua_config_mgr, *(_DWORD *)(v1 + 112));
        if ( group_info_config_ptr )
        {
          if ( *(char *)(((unsigned __int64)&group_info_config_ptr->is_dynamic_load >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&group_info_config_ptr->is_dynamic_load);
          if ( !group_info_config_ptr->is_dynamic_load )
          {
            common::milog::MiLogStream::create(
              &v57,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/scene/groups_replacement_mgr.cpp",
              "afterPlayerLogin",
              458);
            v21 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    &v57,
                    (const char (*)[28])off_24F4B3A0);
            v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v21,
                    (const unsigned int *)(v1 + 112));
            v23 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v22, (const char (*)[7])", uid:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v1 + 48));
            common::milog::MiLogStream::~MiLogStream(&v57);
          }
          else if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,GroupLoadParam>,unsigned int>(
                       &this->reg_groups_map_,
                       (const unsigned int *)(v1 + 112)) )
          {
            if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
              __asan_report_load8(scene);
            v24 = (unsigned __int64)(scene->_vptr_DescribalBase + 58);
            if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
              v24 = __asan_report_load8(scene->_vptr_DescribalBase + 58);
            (*(void (__fastcall **)(Scene *, _QWORD))v24)(scene, *(unsigned int *)(v1 + 112));
            ++*(_DWORD *)(v1 + 80);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v57,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/groups_replacement_mgr.cpp",
            "afterPlayerLogin",
            453);
          v18 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  &v57,
                  (const char (*)[31])"findGroupInfoConfig group_id: ");
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v18,
                  (const unsigned int *)(v1 + 112));
          v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v19, (const char (*)[13])" fails, uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v1 + 48));
          common::milog::MiLogStream::~MiLogStream(&v57);
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      if ( SceneExcelConfigMgr::isSceneAbandonBlockbin(&txt_config_mgr->scene_config_mgr, *(_DWORD *)(v1 + 64)) )
      {
        v25 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
        frombin_abandon_blockbin_scene_groups_vec = Player::getFromBinAbandonBlockbinSceneGroupsVec(
                                                      v25,
                                                      *(_DWORD *)(v1 + 64));
        common::milog::MiLogStream::create(
          &v57,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/groups_replacement_mgr.cpp",
          "afterPlayerLogin",
          472);
        v26 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v57,
                (const char (*)[43])"frombin_abandon_blockbin_scene_groups_vec:");
        __for_end._M_current = (const unsigned int *)std::vector<unsigned int>::size(frombin_abandon_blockbin_scene_groups_vec);
        v27 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v26,
                (const unsigned __int64 *)&__for_end);
        v28 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v27, (const char (*)[12])", scene_id:");
        v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v28,
                (const unsigned int *)(v1 + 64));
        v30 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v29, (const char (*)[7])", uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v1 + 48));
        common::milog::MiLogStream::~MiLogStream(&v57);
        __for_range_0 = frombin_abandon_blockbin_scene_groups_vec;
        __for_begin._M_current = std::vector<unsigned int>::begin(frombin_abandon_blockbin_scene_groups_vec)._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v31 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
          v32 = v31;
          if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v31);
          }
          group_id = *v32;
          if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
            __asan_report_load8(scene);
          v33 = (unsigned __int64)(scene->_vptr_DescribalBase + 58);
          if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
            v33 = __asan_report_load8(scene->_vptr_DescribalBase + 58);
          (*(void (__fastcall **)(Scene *, _QWORD))v33)(scene, group_id);
          ++*(_DWORD *)(v1 + 96);
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        scene_block_group_comp = this->scene_block_group_comp_;
        v35 = this->scene_block_group_comp_;
        if ( *(_BYTE *)(((unsigned __int64)this->scene_block_group_comp_ >> 3) + 0x7FFF8000) )
          v35 = (SceneBlockGroupComp *)__asan_report_load8(this->scene_block_group_comp_);
        v36 = (unsigned __int64)(v35->_vptr_SceneCompBase + 22);
        if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
          v36 = __asan_report_load8(v36);
        (*(void (__fastcall **)(SceneBlockGroupComp *))v36)(scene_block_group_comp);
      }
      common::milog::MiLogStream::create(
        &v57,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/groups_replacement_mgr.cpp",
        "afterPlayerLogin",
        480);
      v37 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v57,
              (const char (*)[27])"clear_dynamic_group_count:");
      v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, (const unsigned int *)(v1 + 80));
      v39 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              v38,
              (const char (*)[42])"clear_abandon_blockbin_scene_group_count:");
      v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, (const unsigned int *)(v1 + 96));
      v41 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v40, (const char (*)[7])" cost ");
      *(_DWORD *)(v1 + 112) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v1 + 128));
      v42 = common::milog::MiLogStream::operator<<<int,(int *)0>(v41, (const int *)(v1 + 112));
      v43 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v42, (const char (*)[9])off_24F4B560);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::~MiLogStream(&v57);
    }
    GroupsReplacementMgr::doReload(
      this,
      LOAD_AND_START,
      1,
      "./src/scene/groups_replacement_mgr.cpp",
      "afterPlayerLogin",
      486);
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 160));
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v1 + 128));
  }
  if ( v58 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 491: range 000000001316EA6A-000000001316F450
int32_t __cdecl GroupsReplacementMgr::unregisterGroups(
        GroupsReplacementMgr *const this,
        const std::vector<unsigned int> *group_vec,
        bool is_force_unload)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v6; // rax
  _DWORD *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int32_t v11; // r14d
  unsigned int *v12; // rax
  unsigned int *v13; // rdx
  unsigned __int64 Scene; // rax
  unsigned __int64 v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::__detail::_Node_iterator<unsigned int,true,false>::reference v20; // rax
  _DWORD *v21; // rdx
  SceneBlockGroupComp *scene_block_group_comp; // r14
  SceneBlockGroupComp *v23; // rax
  unsigned __int64 v24; // rax
  void (__fastcall *v25)(SceneBlockGroupComp *, std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, _QWORD); // r15
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  int32_t result; // eax
  bool is_need_refresh_replacement; // [rsp+2Bh] [rbp-145h]
  unsigned int group_id; // [rsp+2Ch] [rbp-144h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-140h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-138h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-130h]
  const LuaConfigMgr *lua_config_mgr; // [rsp+48h] [rbp-128h]
  std::unordered_set<unsigned int> *__for_range_0; // [rsp+50h] [rbp-120h]
  std::unordered_set<unsigned int> *__for_range_1; // [rsp+58h] [rbp-118h]
  common::milog::MiLogStream v40; // [rsp+60h] [rbp-110h] BYREF
  char v41[240]; // [rsp+80h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 13 owner_uid:492 48 4 12 group_id:543 64 16 13 group_ptr:545 96 56 20 valid_groups_set:493";
  *(_QWORD *)(v3 + 16) = GroupsReplacementMgr::unregisterGroups;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 32) = GroupsReplacementMgr::getOwnerUid(this);
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v3 + 96));
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
    *(_DWORD *)(v3 + 48) = *v7;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    if ( !SceneBlockGroupComp::isDynamicGroup(this->scene_block_group_comp_, *(_DWORD *)(v3 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/groups_replacement_mgr.cpp",
        "unregisterGroups",
        498);
      v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             &v40,
             (const char (*)[36])" skip unregister non dynamic group:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
      v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v40);
    }
    else
    {
      std::unordered_set<unsigned int>::insert(
        (std::unordered_set<unsigned int> *const)(v3 + 96),
        (const std::unordered_set<unsigned int>::value_type *)(v3 + 48));
      if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,GroupLoadParam>,unsigned int>(
              &this->reg_groups_map_,
              (const unsigned int *)(v3 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/groups_replacement_mgr.cpp",
          "unregisterGroups",
          505);
        common::milog::MiLogStream::operator()(
          &v40,
          "group_id=%u not registered. owner_uid=%u",
          *(unsigned int *)(v3 + 48),
          *(unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v40);
      }
      else
      {
        std::unordered_map<unsigned int,GroupLoadParam>::erase(
          &this->reg_groups_map_,
          (const std::unordered_map<unsigned int,GroupLoadParam>::key_type *)(v3 + 48));
      }
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( std::unordered_set<unsigned int>::empty((const std::unordered_set<unsigned int> *const)(v3 + 96)) )
  {
    v11 = 0;
  }
  else
  {
    is_need_refresh_replacement = 0;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 64));
    lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64))->design_config.lua_config_mgr;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
    __for_range_0 = (std::unordered_set<unsigned int> *)(v3 + 96);
    __for_begin._M_current = (const unsigned int *)std::unordered_set<unsigned int>::begin((std::unordered_set<unsigned int> *const)(v3 + 96))._M_cur;
    __for_end._M_current = (const unsigned int *)std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<unsigned int,false>(
              (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_begin,
              (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end) )
    {
      v12 = (unsigned int *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      group_id = *v13;
      if ( !is_need_refresh_replacement && LuaConfigMgr::isGroupJoinReplacement(lua_config_mgr, group_id) )
        is_need_refresh_replacement = 1;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      Scene = (unsigned __int64)SceneCompBase::getScene((SceneCompBase *const)this->scene_block_group_comp_);
      if ( *(_BYTE *)((Scene >> 3) + 0x7FFF8000) )
        Scene = __asan_report_load8(Scene);
      v16 = *(_QWORD *)Scene + 464LL;
      if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        Scene = __asan_report_load8(*(_QWORD *)Scene + 464LL);
      (*(void (__fastcall **)(unsigned __int64, _QWORD))v16)(Scene, group_id);
      std::__detail::_Node_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
    }
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/groups_replacement_mgr.cpp",
      "unregisterGroups",
      529);
    v17 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            &v40,
            (const char (*)[19])" clear bin groups:");
    v18 = common::milog::MiLogStream::operator<<<unsigned int>(v17, (const std::unordered_set<unsigned int> *)(v3 + 96));
    v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v40);
    if ( is_force_unload )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      SceneBlockGroupComp::forceUnloadGroupBatch(
        this->scene_block_group_comp_,
        (const std::unordered_set<unsigned int> *)(v3 + 96),
        1,
        1,
        0);
      if ( is_need_refresh_replacement )
        GroupsReplacementMgr::refreshGroupsReplacement(this);
      v11 = GroupsReplacementMgr::doReload(
              this,
              LOAD_AND_START,
              1,
              "./src/scene/groups_replacement_mgr.cpp",
              "unregisterGroups",
              539);
    }
    else
    {
      __for_range_1 = (std::unordered_set<unsigned int> *)(v3 + 96);
      __for_begin._M_current = (const unsigned int *)std::unordered_set<unsigned int>::begin((std::unordered_set<unsigned int> *const)(v3 + 96))._M_cur;
      __for_end._M_current = (const unsigned int *)std::unordered_set<unsigned int>::end(__for_range_1)._M_cur;
      while ( std::__detail::operator!=<unsigned int,false>(
                (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_begin,
                (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end) )
      {
        v20 = std::__detail::_Node_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
        v21 = v20;
        if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v20);
        }
        *(_DWORD *)(v3 + 48) = *v21;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        SceneBlockGroupComp::getActiveGroup(
          (SceneBlockGroupComp *const)(v3 + 64),
          (uint32_t)this->scene_block_group_comp_);
        if ( std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v3 + 64)) )
        {
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          scene_block_group_comp = this->scene_block_group_comp_;
          v23 = this->scene_block_group_comp_;
          if ( *(_BYTE *)(((unsigned __int64)this->scene_block_group_comp_ >> 3) + 0x7FFF8000) )
            v23 = (SceneBlockGroupComp *)__asan_report_load8(this->scene_block_group_comp_);
          v24 = (unsigned __int64)(v23->_vptr_SceneCompBase + 34);
          if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
            v24 = __asan_report_load8(v24);
          v25 = *(void (__fastcall **)(SceneBlockGroupComp *, std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, _QWORD))v24;
          v26 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          v25(scene_block_group_comp, v26, 1LL, 0LL);
          common::milog::MiLogStream::create(
            &v40,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/groups_replacement_mgr.cpp",
            "unregisterGroups",
            549);
          v27 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v40, (const char (*)[8])" group:");
          v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v27,
                  (const unsigned int *)(v3 + 48));
          v29 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  v28,
                  (const char (*)[39])" marked unregister cleared. owner_uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v40);
        }
        std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 64));
        std::__detail::_Node_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
      }
      if ( is_need_refresh_replacement )
        GroupsReplacementMgr::refreshGroupsReplacement(this);
      v11 = 0;
    }
  }
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v3 + 96));
  result = v11;
  if ( v41 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
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

// Line 563: range 000000001316F452-000000001316F662
void __fastcall GroupsReplacementMgr::onModifyReplaceable(GroupsReplacementMgr *const this, uint32_t group_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r13
  std::shared_ptr<Config> v8; // [rsp+10h] [rbp-90h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-80h] BYREF
  char v10[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 group_id:562";
  *(_QWORD *)(v2 + 16) = GroupsReplacementMgr::onModifyReplaceable;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = group_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( !SceneBlockGroupComp::isGroupActive(this->scene_block_group_comp_, *(_DWORD *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/groups_replacement_mgr.cpp",
      "onModifyReplaceable",
      567);
    v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v9,
           (const char (*)[31])"group is not active. group_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v8);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8);
    v7 = !LuaConfigMgr::isGroupJoinReplacement(&v6->design_config.lua_config_mgr, *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v8);
    if ( !v7 )
      GroupsReplacementMgr::refreshGroupsReplacement(this);
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
};

// Line 579: range 000000001316F664-000000001316FABB
bool __cdecl GroupsReplacementMgr::hasMutualReplace(
        const GroupsReplacementMgr *const this,
        const std::vector<unsigned int> *group_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v6; // rax
  unsigned int *v7; // rax
  unsigned int *v8; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v10; // rax
  _DWORD *v11; // rdx
  bool v12; // r14
  bool result; // al
  std::unordered_set<unsigned int>::hasher __hf; // [rsp+11h] [rbp-13Fh] BYREF
  std::unordered_set<unsigned int>::key_equal __eql; // [rsp+12h] [rbp-13Eh] BYREF
  std::allocator<unsigned int> __a; // [rsp+13h] [rbp-13Dh] BYREF
  unsigned int group_id; // [rsp+14h] [rbp-13Ch]
  std::unordered_set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-138h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-130h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-128h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end_0; // [rsp+30h] [rbp-120h] BYREF
  std::unordered_set<unsigned int> *__for_range; // [rsp+38h] [rbp-118h]
  const std::unordered_set<unsigned int> *replace_set; // [rsp+40h] [rbp-110h]
  const std::unordered_set<unsigned int> *__for_range_0; // [rsp+48h] [rbp-108h]
  std::shared_ptr<Config> v25; // [rsp+50h] [rbp-100h] BYREF
  common::milog::MiLogStream v26; // [rsp+60h] [rbp-F0h] BYREF
  char v27[208]; // [rsp+80h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 tar_group:584 64 56 13 group_set:580";
  *(_QWORD *)(v2 + 16) = GroupsReplacementMgr::hasMutualReplace;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  std::allocator<unsigned int>::allocator(&__a);
  M_current = std::vector<unsigned int>::end(group_vec)._M_current;
  v6._M_current = std::vector<unsigned int>::begin(group_vec)._M_current;
  std::unordered_set<unsigned int>::unordered_set<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
    (std::unordered_set<unsigned int> *const)(v2 + 64),
    v6,
    (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
    0LL,
    &__hf,
    &__eql,
    &__a);
  std::allocator<unsigned int>::~allocator(&__a);
  __for_range = (std::unordered_set<unsigned int> *)(v2 + 64);
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin((std::unordered_set<unsigned int> *const)(v2 + 64))._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v7 = (unsigned int *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    group_id = *v8;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v25);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
    replace_set = LuaConfigMgr::queryGroupReplaceSet(&v9->design_config.lua_config_mgr, group_id);
    std::shared_ptr<Config>::~shared_ptr(&v25);
    __for_range_0 = replace_set;
    __for_begin_0._M_cur = std::unordered_set<unsigned int>::begin(replace_set)._M_cur;
    __for_end_0._M_cur = std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<unsigned int,false>(&__for_begin_0, &__for_end_0) )
    {
      v10 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin_0);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      *(_DWORD *)(v2 + 48) = *v11;
      if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
             (std::unordered_set<unsigned int> *)(v2 + 64),
             (const unsigned int *)(v2 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/groups_replacement_mgr.cpp",
          "hasMutualReplace",
          588);
        common::milog::MiLogStream::operator()(
          &v26,
          "group<%u> replaces group<%u>",
          group_id,
          *(unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v26);
        v12 = 1;
        goto LABEL_17;
      }
      std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin_0);
    }
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  v12 = 0;
LABEL_17:
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v2 + 64));
  result = v12;
  if ( v27 == (char *)v2 )
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

// Line 598: range 000000001316FABC-0000000013170907
void __cdecl GroupsReplacementMgr::refreshGroupsReplacement(GroupsReplacementMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  SceneBlockGroupComp *scene_block_group_comp; // rcx
  bool isGroupReplaceable; // cl
  unsigned int *v8; // rax
  uint32_t *v9; // rdx
  bool v10; // al
  unsigned int *v11; // rax
  uint32_t *v12; // rdx
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v13; // rax
  _DWORD *v14; // rdx
  std::unordered_set<unsigned int> *v15; // rax
  Player *v16; // rax
  PlayerEventComp *EventComp; // r14
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // r14
  Scene *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  const std::unordered_set<unsigned int> *UnregisterClearedGroupSet; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  unsigned int val; // [rsp+1Ch] [rbp-254h] BYREF
  uint32_t active_group_id; // [rsp+20h] [rbp-250h]
  uint32_t group_id_0; // [rsp+24h] [rbp-24Ch]
  std::unordered_set<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-248h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end_0; // [rsp+30h] [rbp-240h] BYREF
  std::unordered_map<unsigned int,GroupLoadParam>::iterator __for_begin; // [rsp+38h] [rbp-238h] BYREF
  std::unordered_map<unsigned int,GroupLoadParam>::iterator __for_end; // [rsp+40h] [rbp-230h] BYREF
  const LuaConfigMgr *lua_config_mgr; // [rsp+48h] [rbp-228h]
  std::unordered_map<unsigned int,GroupLoadParam> *__for_range; // [rsp+50h] [rbp-220h]
  const std::unordered_set<unsigned int> *__for_range_0; // [rsp+58h] [rbp-218h]
  const std::unordered_set<unsigned int> *active_groups_set; // [rsp+60h] [rbp-210h]
  const std::unordered_set<unsigned int> *__for_range_1; // [rsp+68h] [rbp-208h]
  Scene *scene; // [rsp+70h] [rbp-200h]
  const std::unordered_set<unsigned int> *replace_set; // [rsp+78h] [rbp-1F8h]
  const std::unordered_set<unsigned int> *__for_range_2; // [rsp+80h] [rbp-1F0h]
  const std::pair<unsigned int const,GroupLoadParam> *v49; // [rsp+88h] [rbp-1E8h]
  std::tuple_element<0,const std::pair<unsigned int const,GroupLoadParam> >::type *group_id; // [rsp+90h] [rbp-1E0h]
  std::tuple_element<1,const std::pair<unsigned int const,GroupLoadParam> >::type *_; // [rsp+98h] [rbp-1D8h]
  std::unordered_set<unsigned int> v52; // [rsp+A0h] [rbp-1D0h] BYREF
  char v53[400]; // [rsp+E0h] [rbp-190h] BYREF

  v1 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(352LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "7 32 4 13 owner_uid:606 48 4 21 replaced_group_id:643 64 8 11 context:607 96 16 9 timer:604 128 "
                        "16 20 owner_player_ptr:666 160 56 31 new_all_replaced_groups_set:636 256 56 27 diff_replaced_group_set:637";
  *(_QWORD *)(v1 + 16) = GroupsReplacementMgr::refreshGroupsReplacement;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -218959360;
  v3[536862723] = -219021312;
  v3[536862724] = -219021312;
  v3[536862726] = -234881024;
  v3[536862727] = -218959118;
  v3[536862729] = -218103808;
  v3[536862730] = -202116109;
  if ( *(char *)(((unsigned __int64)&this->is_replacement_enable_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_replacement_enable_);
  if ( this->is_replacement_enable_ )
  {
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v1 + 96));
    *(_DWORD *)(v1 + 32) = GroupsReplacementMgr::getOwnerUid(this);
    GroupsReplacementMgr::RefreshGroupsReplacementContext::RefreshGroupsReplacementContext(
      (GroupsReplacementMgr::RefreshGroupsReplacementContext *const)(v1 + 64),
      this);
    if ( *(_BYTE *)(((unsigned __int64)&this->refresh_groups_replacement_stack_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->refresh_groups_replacement_stack_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->refresh_groups_replacement_stack_);
    }
    if ( this->refresh_groups_replacement_stack_ <= 50 )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v52._M_h._M_before_begin);
      lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v52._M_h._M_before_begin)->design_config.lua_config_mgr;
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v52._M_h._M_before_begin);
      ReplaceInfoMgr::clear(&this->reg_groups_replace_mgr_);
      __for_range = &this->reg_groups_map_;
      __for_begin._M_cur = std::unordered_map<unsigned int,GroupLoadParam>::begin(&this->reg_groups_map_)._M_cur;
      __for_end._M_cur = std::unordered_map<unsigned int,GroupLoadParam>::end(&this->reg_groups_map_)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,GroupLoadParam>,false>(&__for_begin, &__for_end) )
      {
        v49 = std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLoadParam>,false,false>::operator*(&__for_begin);
        group_id = std::get<0ul,unsigned int const,GroupLoadParam>(v49);
        _ = (std::tuple_element<1,const std::pair<unsigned int const,GroupLoadParam> >::type *)std::get<1ul,unsigned int const,GroupLoadParam>(v49);
        if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(group_id);
        }
        if ( LuaConfigMgr::isGroupJoinReplacement(lua_config_mgr, *group_id) )
        {
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          scene_block_group_comp = this->scene_block_group_comp_;
          if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(group_id);
          }
          isGroupReplaceable = SceneBlockGroupComp::isGroupReplaceable(scene_block_group_comp, *group_id);
          if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(group_id);
          }
          ReplaceInfoMgr::add(&this->reg_groups_replace_mgr_, *group_id, isGroupReplaceable);
        }
        std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLoadParam>,false,false>::operator++(&__for_begin);
      }
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      __for_range_0 = SceneBlockGroupComp::getUnregisterClearedGroupSet(this->scene_block_group_comp_);
      __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLoadParam>,false>::__node_type *)std::unordered_set<unsigned int>::begin(__for_range_0)._M_cur;
      __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLoadParam>,false>::__node_type *)std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
      while ( std::__detail::operator!=<unsigned int,false>(
                (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_begin,
                (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end) )
      {
        v8 = (unsigned int *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_const_iterator<unsigned int,true,false> *const)&__for_begin);
        v9 = v8;
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v8);
        }
        group_id_0 = *v9;
        if ( LuaConfigMgr::isGroupJoinReplacement(lua_config_mgr, group_id_0) )
        {
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          v10 = SceneBlockGroupComp::isGroupReplaceable(this->scene_block_group_comp_, group_id_0);
          ReplaceInfoMgr::add(&this->reg_groups_replace_mgr_, group_id_0, v10);
        }
        std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_const_iterator<unsigned int,true,false> *const)&__for_begin);
      }
      ReplaceInfoMgr::adjustByKahns(&this->reg_groups_replace_mgr_);
      std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v1 + 160));
      std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v1 + 256));
      active_groups_set = ReplaceInfoMgr::getActiveGroups(&this->reg_groups_replace_mgr_);
      __for_range_1 = active_groups_set;
      __for_begin_0._M_cur = std::unordered_set<unsigned int>::begin(active_groups_set)._M_cur;
      __for_end_0._M_cur = std::unordered_set<unsigned int>::end(__for_range_1)._M_cur;
      while ( std::__detail::operator!=<unsigned int,false>(&__for_begin_0, &__for_end_0) )
      {
        v11 = (unsigned int *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin_0);
        v12 = v11;
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v11);
        }
        active_group_id = *v12;
        replace_set = LuaConfigMgr::queryGroupReplaceSet(lua_config_mgr, active_group_id);
        __for_range_2 = replace_set;
        __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLoadParam>,false>::__node_type *)std::unordered_set<unsigned int>::begin(replace_set)._M_cur;
        __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLoadParam>,false>::__node_type *)std::unordered_set<unsigned int>::end(__for_range_2)._M_cur;
        while ( std::__detail::operator!=<unsigned int,false>(
                  (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_begin,
                  (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end) )
        {
          v13 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_const_iterator<unsigned int,true,false> *const)&__for_begin);
          v14 = v13;
          if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v13);
          }
          *(_DWORD *)(v1 + 48) = *v14;
          if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                  (std::unordered_set<unsigned int> *)(v1 + 160),
                  (const unsigned int *)(v1 + 48)) )
          {
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            if ( SceneBlockGroupComp::isGroupReplaceable(this->scene_block_group_comp_, *(_DWORD *)(v1 + 48)) )
            {
              std::unordered_set<unsigned int>::insert(
                (std::unordered_set<unsigned int> *const)(v1 + 160),
                (const std::unordered_set<unsigned int>::value_type *)(v1 + 48));
              if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                      &this->all_replaced_groups_set_,
                      (const unsigned int *)(v1 + 48)) )
                std::unordered_set<unsigned int>::insert(
                  (std::unordered_set<unsigned int> *const)(v1 + 256),
                  (const std::unordered_set<unsigned int>::value_type *)(v1 + 48));
            }
          }
          std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_const_iterator<unsigned int,true,false> *const)&__for_begin);
        }
        std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin_0);
      }
      v15 = std::move<std::unordered_set<unsigned int> &>((std::unordered_set<unsigned int> *)(v1 + 160));
      std::unordered_set<unsigned int>::operator=(&this->all_replaced_groups_set_, v15);
      if ( !std::unordered_set<unsigned int>::empty((const std::unordered_set<unsigned int> *const)(v1 + 256)) )
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        scene = SceneCompBase::getScene((SceneCompBase *const)this->scene_block_group_comp_);
        Scene::getOwnPlayer((const Scene *const)(v1 + 128));
        if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v1 + 128), 0LL) )
        {
          v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
          EventComp = Player::getEventComp(v16);
          common::tools::perf::make_shared<GroupsReplaceEvent,std::unordered_set<unsigned int> &>(
            &v52,
            (std::unordered_set<unsigned int> *)(v1 + 256));
          std::shared_ptr<BaseEvent>::shared_ptr<GroupsReplaceEvent,void>(
            (std::shared_ptr<BaseEvent> *const)&v52._M_h._M_before_begin,
            (std::shared_ptr<GroupsReplaceEvent> *)&v52);
          PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v52._M_h._M_before_begin);
          std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v52._M_h._M_before_begin);
          std::shared_ptr<GroupsReplaceEvent>::~shared_ptr((std::shared_ptr<GroupsReplaceEvent> *const)&v52);
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v52._M_h._M_rehash_policy,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/groups_replacement_mgr.cpp",
            "refreshGroupsReplacement",
            673);
          v18 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                  (common::milog::MiLogStream *const)&v52._M_h._M_rehash_policy,
                  (const char (*)[28])"player not exist. scene_id:");
          *(_DWORD *)(v1 + 48) = Scene::getSceneId(scene);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v1 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v52._M_h._M_rehash_policy);
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 128));
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v52._M_h._M_rehash_policy,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/groups_replacement_mgr.cpp",
        "refreshGroupsReplacement",
        676);
      v19 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              (common::milog::MiLogStream *const)&v52._M_h._M_rehash_policy,
              (const char (*)[35])"refreshGroupsReplacement. sceneid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v20 = SceneCompBase::getScene((SceneCompBase *const)this->scene_block_group_comp_);
      val = Scene::getSceneId(v20);
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
      v22 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              v21,
              (const char (*)[25])", reg_groups_map_ count:");
      __for_begin_0._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::unordered_map<unsigned int,GroupLoadParam>::size(&this->reg_groups_map_);
      v23 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v22,
              (const unsigned __int64 *)&__for_begin_0);
      v24 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              v23,
              (const char (*)[28])", unregister cleared count:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      UnregisterClearedGroupSet = SceneBlockGroupComp::getUnregisterClearedGroupSet(this->scene_block_group_comp_);
      __for_end_0._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::unordered_set<unsigned int>::size(UnregisterClearedGroupSet);
      v26 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v24,
              (const unsigned __int64 *)&__for_end_0);
      v27 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              v26,
              (const char (*)[29])", replaced_groups_set count:");
      __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLoadParam>,false>::__node_type *)std::unordered_set<unsigned int>::size(&this->all_replaced_groups_set_);
      v28 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v27,
              (const unsigned __int64 *)&__for_begin);
      v29 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              v28,
              (const char (*)[33])", diff_replaced_group_set count:");
      __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLoadParam>,false>::__node_type *)std::unordered_set<unsigned int>::size((const std::unordered_set<unsigned int> *const)(v1 + 256));
      v30 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v29,
              (const unsigned __int64 *)&__for_end);
      v31 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v30, (const char (*)[7])", uid:");
      v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v1 + 32));
      v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v32, (const char (*)[16])" time_cost(us):");
      *(_DWORD *)(v1 + 48) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v1 + 96));
      common::milog::MiLogStream::operator<<<int,(int *)0>(v33, (const int *)(v1 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v52._M_h._M_rehash_policy);
      std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v1 + 256));
      std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v1 + 160));
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v52._M_h._M_rehash_policy,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/groups_replacement_mgr.cpp",
        "refreshGroupsReplacement",
        610);
      v4 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
             (common::milog::MiLogStream *const)&v52._M_h._M_rehash_policy,
             (const char (*)[5])"uid:");
      v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
        v5,
        (const char (*)[40])" refresh_groups_replacement_stack_ > 50");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v52._M_h._M_rehash_policy);
    }
    GroupsReplacementMgr::RefreshGroupsReplacementContext::~RefreshGroupsReplacementContext((GroupsReplacementMgr::RefreshGroupsReplacementContext *const)(v1 + 64));
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v1 + 96));
  }
  if ( v53 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 686: range 0000000013170A48-0000000013171665
int32_t __cdecl GroupsReplacementMgr::doReload(
        GroupsReplacementMgr *const this,
        LoadOption option,
        bool unload_invalid,
        const char *file,
        const char *func,
        int32_t line)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int32_t v11; // r14d
  SceneBlockGroupComp *scene_block_group_comp; // rdx
  SceneBlockGroupComp *v13; // rax
  unsigned __int64 v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  const std::unordered_set<unsigned int> *AllReplacedGroups; // rax
  std::__detail::_Node_iterator<unsigned int,true,false>::reference v19; // rax
  _DWORD *v20; // rdx
  Scene *Scene; // rax
  SceneBlockGroupComp *v22; // rdx
  SceneBlockGroupComp *v23; // rax
  unsigned __int64 v24; // rax
  std::__detail::_Node_iterator<unsigned int,true,false>::reference v25; // rax
  _DWORD *v26; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLoadParam>,false,false>::pointer v27; // rdx
  SceneBlockGroupComp *v28; // r14
  common::milog::MiLogStream *v29; // r14
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  int32_t result; // eax
  std::unordered_set<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-240h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end_0; // [rsp+38h] [rbp-238h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end; // [rsp+40h] [rbp-230h] BYREF
  std::unordered_set<unsigned int> *__for_range; // [rsp+48h] [rbp-228h]
  std::unordered_set<unsigned int> *__for_range_0; // [rsp+50h] [rbp-220h]
  GroupLoadParam *param; // [rsp+58h] [rbp-218h]
  std::vector<unsigned int> vec; // [rsp+60h] [rbp-210h] BYREF
  common::milog::MiLogStream v42; // [rsp+80h] [rbp-1F0h] BYREF
  char v43[464]; // [rsp+A0h] [rbp-1D0h] BYREF

  v6 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_3(416LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "7 48 4 13 owner_uid:687 64 4 12 group_id:730 80 8 11 context:689 112 8 8 iter:732 144 48 19 batc"
                        "h_group_map:728 224 56 21 nearby_groups_set:699 320 56 23 replaced_groups_set:704";
  *(_QWORD *)(v6 + 16) = GroupsReplacementMgr::doReload;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = 61956;
  v8[536862722] = -234881024;
  v8[536862723] = 62194;
  v8[536862723] = -234881024;
  v8[536862724] = 62194;
  v8[536862726] = -218959118;
  v8[536862728] = -234881024;
  v8[536862729] = -218959118;
  v8[536862731] = -218103808;
  v8[536862732] = -202116109;
  *(_DWORD *)(v6 + 48) = GroupsReplacementMgr::getOwnerUid(this);
  GroupsReplacementMgr::DoReloadContext::DoReloadContext((GroupsReplacementMgr::DoReloadContext *const)(v6 + 80), this);
  if ( *(_BYTE *)(((unsigned __int64)&this->do_reload_stack_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->do_reload_stack_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->do_reload_stack_);
  }
  if ( this->do_reload_stack_ <= 50 )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    SceneBlockGroupComp::setIsNeedReloadGroup(this->scene_block_group_comp_, 0);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    scene_block_group_comp = this->scene_block_group_comp_;
    v13 = this->scene_block_group_comp_;
    if ( *(_BYTE *)(((unsigned __int64)this->scene_block_group_comp_ >> 3) + 0x7FFF8000) )
      v13 = (SceneBlockGroupComp *)__asan_report_load8(this->scene_block_group_comp_);
    v14 = (unsigned __int64)(v13->_vptr_SceneCompBase + 40);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v14);
    (*(void (__fastcall **)(unsigned __int64, SceneBlockGroupComp *))v14)(v6 + 224, scene_block_group_comp);
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/groups_replacement_mgr.cpp",
      "doReload",
      701);
    v15 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            &v42,
            (const char (*)[26])"HPTEST nearby_groups_set:");
    v16 = common::milog::MiLogStream::operator<<<unsigned int>(
            v15,
            (const std::unordered_set<unsigned int> *)(v6 + 224));
    v17 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v16, (const char (*)[6])" uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v6 + 48));
    common::milog::MiLogStream::~MiLogStream(&v42);
    AllReplacedGroups = GroupsReplacementMgr::getAllReplacedGroups(this);
    std::unordered_set<unsigned int>::unordered_set(
      (std::unordered_set<unsigned int> *const)(v6 + 320),
      AllReplacedGroups);
    std::unordered_set<unsigned int>::clear(&this->nearby_active_groups_set_);
    __for_range = (std::unordered_set<unsigned int> *)(v6 + 224);
    *(std::unordered_set<unsigned int>::iterator *)(v6 + 112) = std::unordered_set<unsigned int>::begin((std::unordered_set<unsigned int> *const)(v6 + 224));
    __for_end._M_cur = std::unordered_set<unsigned int>::end(__for_range)._M_cur;
    while ( std::__detail::operator!=<unsigned int,false>(
              (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v6 + 112),
              &__for_end) )
    {
      v19 = std::__detail::_Node_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_iterator<unsigned int,true,false> *const)(v6 + 112));
      v20 = v19;
      if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v19);
      }
      *(_DWORD *)(v6 + 64) = *v20;
      if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
              (std::unordered_set<unsigned int> *)(v6 + 320),
              (const unsigned int *)(v6 + 64)) )
        std::unordered_set<unsigned int>::insert(
          &this->nearby_active_groups_set_,
          (const std::unordered_set<unsigned int>::value_type *)(v6 + 64));
      std::__detail::_Node_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_iterator<unsigned int,true,false> *const)(v6 + 112));
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    Scene = SceneCompBase::getScene((SceneCompBase *const)this->scene_block_group_comp_);
    if ( Scene::getSceneType(Scene) != SCENE_DUNGEON )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      SceneBlockGroupComp::forceUnloadGroupBatch(
        this->scene_block_group_comp_,
        (const std::unordered_set<unsigned int> *)(v6 + 320),
        1,
        0,
        1);
      if ( unload_invalid )
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v22 = this->scene_block_group_comp_;
        v23 = this->scene_block_group_comp_;
        if ( *(_BYTE *)(((unsigned __int64)this->scene_block_group_comp_ >> 3) + 0x7FFF8000) )
          v23 = (SceneBlockGroupComp *)__asan_report_load8(this->scene_block_group_comp_);
        v24 = (unsigned __int64)(v23->_vptr_SceneCompBase + 41);
        if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
          v24 = __asan_report_load8(v24);
        (*(void (__fastcall **)(SceneBlockGroupComp *, std::unordered_set<unsigned int> *))v24)(
          v22,
          &this->nearby_active_groups_set_);
      }
    }
    std::map<unsigned int,GroupLoadParam>::map((std::map<unsigned int,GroupLoadParam> *const)(v6 + 144));
    __for_range_0 = &this->nearby_active_groups_set_;
    __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&this->nearby_active_groups_set_)._M_cur;
    __for_end_0._M_cur = std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end_0) )
    {
      v25 = std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
      v26 = v25;
      if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v25);
      }
      *(_DWORD *)(v6 + 64) = *v26;
      *(std::unordered_map<unsigned int,GroupLoadParam>::iterator *)(v6 + 112) = std::unordered_map<unsigned int,GroupLoadParam>::find(
                                                                                   &this->reg_groups_map_,
                                                                                   (const std::unordered_map<unsigned int,GroupLoadParam>::key_type *)(v6 + 64));
      param = std::map<unsigned int,GroupLoadParam>::operator[](
                (std::map<unsigned int,GroupLoadParam> *const)(v6 + 144),
                (const std::map<unsigned int,GroupLoadParam>::key_type *)(v6 + 64));
      __for_end._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::unordered_map<unsigned int,GroupLoadParam>::end(&this->reg_groups_map_)._M_cur;
      if ( std::__detail::operator!=<std::pair<unsigned int const,GroupLoadParam>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLoadParam>,false> *)(v6 + 112),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLoadParam>,false> *)&__for_end) )
      {
        v27 = std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLoadParam>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLoadParam>,false,false> *const)(v6 + 112));
        if ( ((unsigned __int8)param & 7) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&param->revise_id + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)param + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&param->revise_id + 3) >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_store_n(param, 8LL);
        }
        if ( (((unsigned __int8)v27 + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&v27->second >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&v27->second >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v27->second.revise_id + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v27 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v27->second.revise_id + 3) >> 3)
                                                           + 0x7FFF8000) )
        {
          __asan_report_load_n(&v27->second, 8LL);
        }
        *param = v27->second;
      }
      std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v28 = this->scene_block_group_comp_;
    std::function<ForeachPolicy ()(Group &)>::function<GroupsReplacementMgr::doReload(LoadOption,bool,char const*,char const*,int)::{lambda(Group &)#1},void,void>(
      (std::function<ForeachPolicy(Group&)> *const)&v42,
      (GroupsReplacementMgr::doReload::<lambda(Group&)>)(v6 + 144));
    SceneBlockGroupComp::foreachGroup(v28, (std::function<ForeachPolicy(Group&)> *)&v42);
    std::function<ForeachPolicy ()(Group &)>::~function((std::function<ForeachPolicy(Group&)> *const)&v42);
    if ( option == LOAD_ONLY )
    {
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/groups_replacement_mgr.cpp",
        "doReload",
        753);
      v29 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v42,
              (const char (*)[35])"[TRIGGER_DEBUG] init load groups: ");
      common::tools::MiscUtils::getAllMapKeys<std::map<unsigned int,GroupLoadParam>>(
        &vec,
        (const std::map<unsigned int,GroupLoadParam> *)(v6 + 144));
      v30 = common::milog::MiLogStream::operator<<<unsigned int>(v29, &vec);
      v31 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v30, (const char (*)[6])" uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v6 + 48));
      std::vector<unsigned int>::~vector(&vec);
      common::milog::MiLogStream::~MiLogStream(&v42);
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    if ( SceneBlockGroupComp::loadGroupBatch(
           this->scene_block_group_comp_,
           (const std::map<unsigned int,GroupLoadParam> *)(v6 + 144),
           option == LOAD_AND_START) )
    {
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/groups_replacement_mgr.cpp",
        "doReload",
        759);
      v32 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v42,
              (const char (*)[30])"async batch load failed.uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, (const unsigned int *)(v6 + 48));
      common::milog::MiLogStream::~MiLogStream(&v42);
      v11 = -1;
    }
    else
    {
      v11 = 0;
    }
    std::map<unsigned int,GroupLoadParam>::~map((std::map<unsigned int,GroupLoadParam> *const)(v6 + 144));
    std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v6 + 320));
    std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v6 + 224));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/groups_replacement_mgr.cpp",
      "doReload",
      692);
    v9 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v42, (const char (*)[5])"uid:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v6 + 48));
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v10, (const char (*)[23])" do_reload_stack_ > 50");
    common::milog::MiLogStream::~MiLogStream(&v42);
    v11 = -1;
  }
  GroupsReplacementMgr::DoReloadContext::~DoReloadContext((GroupsReplacementMgr::DoReloadContext *const)(v6 + 80));
  result = v11;
  if ( v43 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF802C) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 741: range 0000000013170908-0000000013170A46
ForeachPolicy __cdecl GroupsReplacementMgr::doReload(LoadOption,bool,char const*,char const*,int)::{lambda(Group &)#1}::operator()(
        const GroupsReplacementMgr::doReload::<lambda(Group&)> *const __closure,
        Group *group)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  ForeachPolicy result; // eax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 group_id:743";
  *(_QWORD *)(v2 + 16) = GroupsReplacementMgr::doReload(LoadOption,bool,char const*,char const*,int)::{lambda(Group &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = Group::getGroupId(group);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  if ( common::tools::MiscUtils::isContains<std::map<unsigned int,GroupLoadParam>,unsigned int>(
         __closure->__batch_group_map,
         (const unsigned int *)(v2 + 32)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    std::map<unsigned int,GroupLoadParam>::erase(
      __closure->__batch_group_map,
      (const std::map<unsigned int,GroupLoadParam>::key_type *)(v2 + 32));
  }
  result = FOREACH_CONTINUE;
  if ( v6 == (char *)v2 )
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

// Line 766: range 0000000013171666-00000000131716AA
int32_t __cdecl GroupsReplacementMgr::doInsituReload(
        GroupsReplacementMgr *const this,
        LoadOption option,
        const char *file,
        const char *func,
        int32_t line)
{
  return GroupsReplacementMgr::doReload(this, option, 1, file, func, line);
};

// Line 771: range 00000000131716AC-00000000131716F1
uint32_t __cdecl GroupsReplacementMgr::getOwnerUid(const GroupsReplacementMgr *const this)
{
  Scene *Scene; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Scene = SceneCompBase::getScene((SceneCompBase *const)this->scene_block_group_comp_);
  return Scene::getOwnerUid(Scene);
};

// Line 776: range 00000000131716F2-0000000013171A47
void __cdecl GroupsReplacementMgr::fillNotReplacedGroupLoadParamBatch(
        GroupsReplacementMgr *const this,
        const std::vector<unsigned int> *group_vec,
        std::map<unsigned int,GroupLoadParam> *group_id_map)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v6; // rax
  _DWORD *v7; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLoadParam>,false,false>::pointer v8; // rdx
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-B0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-A8h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLoadParam>,false> __y; // [rsp+30h] [rbp-A0h] BYREF
  const std::unordered_set<unsigned int> *replaced_groups_set; // [rsp+38h] [rbp-98h]
  const std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-90h]
  GroupLoadParam *param; // [rsp+48h] [rbp-88h]
  char v16[128]; // [rsp+50h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 group_id:779 64 8 8 iter:785";
  *(_QWORD *)(v3 + 16) = GroupsReplacementMgr::fillNotReplacedGroupLoadParamBatch;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  replaced_groups_set = GroupsReplacementMgr::getAllReplacedGroups(this);
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
    *(_DWORD *)(v3 + 48) = *v7;
    if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
            replaced_groups_set,
            (const unsigned int *)(v3 + 48)) )
    {
      param = std::map<unsigned int,GroupLoadParam>::operator[](
                group_id_map,
                (const std::map<unsigned int,GroupLoadParam>::key_type *)(v3 + 48));
      *(std::unordered_map<unsigned int,GroupLoadParam>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,GroupLoadParam>::find(
                                                                                  &this->reg_groups_map_,
                                                                                  (const std::unordered_map<unsigned int,GroupLoadParam>::key_type *)(v3 + 48));
      __y._M_cur = std::unordered_map<unsigned int,GroupLoadParam>::end(&this->reg_groups_map_)._M_cur;
      if ( std::__detail::operator!=<std::pair<unsigned int const,GroupLoadParam>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GroupLoadParam>,false> *)(v3 + 64),
             &__y) )
      {
        v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLoadParam>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,GroupLoadParam>,false,false> *const)(v3 + 64));
        if ( ((unsigned __int8)param & 7) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&param->revise_id + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)param + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&param->revise_id + 3) >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_store_n(param, 8LL);
        }
        if ( (((unsigned __int8)v8 + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&v8->second >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&v8->second >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v8->second.revise_id + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v8 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v8->second.revise_id + 3) >> 3)
                                                          + 0x7FFF8000) )
        {
          __asan_report_load_n(&v8->second, 8LL);
        }
        *param = v8->second;
      }
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
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
};
