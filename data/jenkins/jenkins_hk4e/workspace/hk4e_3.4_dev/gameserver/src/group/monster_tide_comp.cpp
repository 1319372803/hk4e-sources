// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/group/monster_tide_comp.cpp

// Line 20: range 00000000168D3FE0-00000000168D423E
MonsterTideComp *__fastcall MonsterTideComp::findMonsterTide(
        MonsterTideComp *const this,
        unsigned __int64 tide_index,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<MonsterTide> > >::pointer v9; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<MonsterTide> > >::_Self __y; // [rsp+28h] [rbp-A8h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-A0h] BYREF
  char v14[128]; // [rsp+50h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 tide_index:19 64 8 7 iter:21";
  *(_QWORD *)(v3 + 16) = MonsterTideComp::findMonsterTide;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::map<unsigned int,std::shared_ptr<MonsterTide>>::iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<MonsterTide>>::find(
                                                                                  (std::map<unsigned int,std::shared_ptr<MonsterTide>> *const)(tide_index + 8),
                                                                                  (const std::map<unsigned int,std::shared_ptr<MonsterTide>>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<MonsterTide>>::end((std::map<unsigned int,std::shared_ptr<MonsterTide>> *const)(tide_index + 8))._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<MonsterTide> > >::_Self *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/group/monster_tide_comp.cpp",
      "findMonsterTide",
      24);
    v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v13,
           (const char (*)[28])"tide not found, tide_index:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v7, (const char (*)[8])" group:");
    if ( *(_BYTE *)((tide_index >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v8, *(const Group **)tide_index);
    common::milog::MiLogStream::~MiLogStream(&v13);
    std::shared_ptr<MonsterTide>::shared_ptr((std::shared_ptr<MonsterTide> *const)this, 0LL);
  }
  else
  {
    v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<MonsterTide>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<MonsterTide> > > *const)(v3 + 64));
    std::shared_ptr<MonsterTide>::shared_ptr((std::shared_ptr<MonsterTide> *const)this, &v9->second);
  }
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
  return this;
};

// Line 33: range 00000000168D4240-00000000168D46C1
__int64 __fastcall MonsterTideComp::addMonsterTide(
        MonsterTideComp *const this,
        uint32_t tide_index,
        const std::vector<unsigned int> *monster_config_id_vec,
        uint32_t total_monster_count,
        uint32_t min_monster_count,
        uint32_t max_monster_count)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  unsigned int v12; // r14d
  uint32_t v13; // r14d
  unsigned __int64 v14; // rax
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  bool *p_is_infinite; // rax
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  uint32_t *p_min_monster_count; // rax
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::remove_reference<const std::vector<unsigned int>&>::type *v21; // r14
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rdx
  MonsterTideState *p_state; // rax
  std::shared_ptr<MonsterTide> *v25; // rax
  __int64 result; // rax
  common::milog::MiLogStream v31; // [rsp+20h] [rbp-B0h] BYREF
  char v32[144]; // [rsp+40h] [rbp-90h] BYREF

  v6 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 4 13 tide_index:31 64 16 19 monster_tide_ptr:39";
  *(_QWORD *)(v6 + 16) = MonsterTideComp::addMonsterTide;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -202178560;
  *(_DWORD *)(v6 + 48) = tide_index;
  if ( common::tools::MiscUtils::isContains<std::map<unsigned int,std::shared_ptr<MonsterTide>>,unsigned int>(
         &this->monster_tide_map_,
         (const unsigned int *)(v6 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/group/monster_tide_comp.cpp",
      "addMonsterTide",
      36);
    v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v31,
           (const char (*)[38])"already has monster tide, tide_index:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v6 + 48));
    v11 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])" group:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v11, this->group_);
    common::milog::MiLogStream::~MiLogStream(&v31);
    v12 = -1;
  }
  else
  {
    common::tools::perf::make_shared<MonsterTide>();
    v13 = *(_DWORD *)(v6 + 48);
    v14 = (unsigned __int64)std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v14 >> 3) + 0x7FFF8000) <= 3 )
      v14 = __asan_report_store4(v14);
    *(_DWORD *)v14 = v13;
    v15 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
    p_is_infinite = &v15->is_infinite;
    if ( *(_BYTE *)(((unsigned __int64)p_is_infinite >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_infinite & 7) >= *(_BYTE *)(((unsigned __int64)p_is_infinite >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(p_is_infinite);
    }
    v15->is_infinite = total_monster_count == 0;
    v17 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v17->total_monster_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v17->total_monster_count >> 3) + 0x7FFF8000) <= 3 )
    {
      v17 = (std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v17->total_monster_count);
    }
    v17->total_monster_count = total_monster_count;
    v18 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
    p_min_monster_count = &v18->min_monster_count;
    if ( *(_BYTE *)(((unsigned __int64)p_min_monster_count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_min_monster_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_min_monster_count >> 3)
                                                                            + 0x7FFF8000) )
    {
      __asan_report_store4(p_min_monster_count);
    }
    v18->min_monster_count = min_monster_count;
    v20 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v20->max_monster_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v20->max_monster_count >> 3) + 0x7FFF8000) <= 3 )
    {
      v20 = (std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v20->max_monster_count);
    }
    v20->max_monster_count = max_monster_count;
    v21 = std::move<std::vector<unsigned int> const&>(monster_config_id_vec);
    v22 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
    std::vector<unsigned int>::operator=(&v22->monster_config_id_vec, v21);
    v23 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
    p_state = &v23->state;
    if ( *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p_state);
    }
    v23->state = MONSTER_TIDE_NORMAL;
    v25 = std::map<unsigned int,std::shared_ptr<MonsterTide>>::operator[](
            &this->monster_tide_map_,
            (const std::map<unsigned int,std::shared_ptr<MonsterTide>>::key_type *)(v6 + 48));
    std::shared_ptr<MonsterTide>::operator=(v25, (const std::shared_ptr<MonsterTide> *)(v6 + 64));
    v12 = MonsterTideComp::checkAndAddTideMonster(this, *(_DWORD *)(v6 + 48));
    std::shared_ptr<MonsterTide>::~shared_ptr((std::shared_ptr<MonsterTide> *const)(v6 + 64));
  }
  result = v12;
  if ( v32 == (char *)v6 )
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
  return result;
};

// Line 53: range 00000000168D46C2-00000000168D4983
void __cdecl MonsterTideComp::clear(MonsterTideComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  uint32_t *v4; // rdx
  std::map<unsigned int,std::shared_ptr<MonsterTide>>::iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::map<unsigned int,std::shared_ptr<MonsterTide>>::iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  std::map<unsigned int,std::shared_ptr<MonsterTide>> *__for_range; // [rsp+28h] [rbp-A8h]
  std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-A0h]
  const std::pair<unsigned int const,std::shared_ptr<MonsterTide> > *v9; // [rsp+38h] [rbp-98h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<MonsterTide> > >::type *tide_index; // [rsp+40h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<MonsterTide> > >::type *_; // [rsp+48h] [rbp-88h]
  char v12[128]; // [rsp+50h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 17 tide_index_vec:54";
  *(_QWORD *)(v1 + 16) = MonsterTideComp::clear;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 32));
  __for_range = &this->monster_tide_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<MonsterTide>>::begin(&this->monster_tide_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<MonsterTide>>::end(&this->monster_tide_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<MonsterTide>>>::operator*(&__for_begin);
    tide_index = std::get<0ul,unsigned int const,std::shared_ptr<MonsterTide>>(v9);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<MonsterTide> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<MonsterTide>>(v9);
    std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v1 + 32), tide_index);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<MonsterTide>>>::operator++(&__for_begin);
  }
  __for_range_0 = (std::vector<unsigned int> *)(v1 + 32);
  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<MonsterTide> > >::_Base_ptr)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 32))._M_current;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<MonsterTide> > >::_Base_ptr)std::vector<unsigned int>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
  {
    v4 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    MonsterTideComp::delMonsterTide(this, *v4);
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
  }
  std::map<unsigned int,std::shared_ptr<MonsterTide>>::clear(&this->monster_tide_map_);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 32));
  if ( v12 == (char *)v1 )
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

// Line 68: range 00000000168D4984-00000000168D4F7E
__int64 __fastcall MonsterTideComp::delMonsterTide(MonsterTideComp *const this, uint32_t tide_index)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  unsigned int v8; // r14d
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v12; // rax
  std::pair<unsigned int const,unsigned int> *v13; // rdx
  uint32_t v14; // ecx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 result; // rax
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-120h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+18h] [rbp-118h] BYREF
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-110h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *monster_config_id; // [rsp+28h] [rbp-108h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *entity_id; // [rsp+30h] [rbp-100h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+38h] [rbp-F8h] BYREF
  common::milog::MiLogStream v24; // [rsp+40h] [rbp-F0h] BYREF
  char v25[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 13 tide_index:67 64 16 12 scene_ptr:69 96 16 19 monster_tide_ptr:76 128 16 14 monster_ptr:85";
  *(_QWORD *)(v2 + 16) = MonsterTideComp::delMonsterTide;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  *(_DWORD *)(v2 + 48) = tide_index;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Group::getScene((const Group *const)(v2 + 64));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/group/monster_tide_comp.cpp",
      "delMonsterTide",
      72);
    v5 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v24,
           (const char (*)[27])"scene is null, tide_index:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])" group:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v7, this->group_);
    common::milog::MiLogStream::~MiLogStream(&v24);
    v8 = -1;
  }
  else
  {
    MonsterTideComp::findMonsterTide((MonsterTideComp *const)(v2 + 96), (unsigned __int64)this, *(_DWORD *)(v2 + 48));
    if ( std::operator==<MonsterTide>(0LL, (const std::shared_ptr<MonsterTide> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/group/monster_tide_comp.cpp",
        "delMonsterTide",
        79);
      v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v24,
             (const char (*)[38])"monster_tide_ptr is null, tide_index:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      v11 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])" group:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v11, this->group_);
      common::milog::MiLogStream::~MiLogStream(&v24);
      v8 = -1;
    }
    else
    {
      __for_range = &std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96))->cur_monster_config_id_map;
      __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(__for_range)._M_node;
      __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
        v13 = v12;
        if ( ((unsigned __int8)v12 & 7) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v12->second + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v12 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v12->second + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(v12, 8LL);
        }
        __in = *v13;
        monster_config_id = std::get<0ul,unsigned int const,unsigned int>(&__in);
        entity_id = std::get<1ul,unsigned int const,unsigned int>(&__in);
        v14 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)entity_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)entity_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        Scene::findEntity<Monster>((const Scene *const)(v2 + 128), v14);
        if ( std::operator!=<Monster>(0LL, (const std::shared_ptr<Monster> *)(v2 + 128)) )
        {
          v15 = (unsigned __int64)std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
            v15 = __asan_report_load8();
          v16 = *(_QWORD *)v15 + 128LL;
          if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
            v15 = __asan_report_load8();
          (*(void (__fastcall **)(unsigned __int64, VisionContext *))v16)(v15, &VisionContext::miss_context);
        }
        std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 128));
        std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
      }
      std::map<unsigned int,std::shared_ptr<MonsterTide>>::erase(
        &this->monster_tide_map_,
        (const std::map<unsigned int,std::shared_ptr<MonsterTide>>::key_type *)(v2 + 48));
      v8 = 0;
    }
    std::shared_ptr<MonsterTide>::~shared_ptr((std::shared_ptr<MonsterTide> *const)(v2 + 96));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  result = v8;
  if ( v25 == (char *)v2 )
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

// Line 98: range 00000000168D4F80-00000000168D5E8B
__int64 __fastcall MonsterTideComp::checkAndAddTideMonster(MonsterTideComp *const this, uint32_t tide_index)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  unsigned int v8; // r14d
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::map<unsigned int,unsigned int>::size_type v11; // r14
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::map<unsigned int,unsigned int>::size_type v14; // r14
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  bool *p_is_infinite; // rax
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  uint32_t monster_count; // r14d
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  char v21; // al
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::vector<unsigned int>::reference v25; // rdx
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  bool v27; // r14
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rcx
  common::milog::MiLogStream *v32; // rax
  int v33; // r14d
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r14
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rcx
  std::map<unsigned int,unsigned int> *p_cur_monster_config_id_map; // r14
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  unsigned int *v44; // rcx
  unsigned int *v45; // r8
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rax
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  uint32_t EntityId; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v51; // rdx
  uint32_t *p_source_entity_id; // rax
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // rdx
  int32_t v54; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v55; // rdx
  int32_t *p_param1; // rax
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v57; // rax
  int32_t tide_count; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v59; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v60; // rax
  data::MonsterType MonsterType; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v62; // rax
  __int64 result; // rax
  uint32_t add_monster_count; // [rsp+10h] [rbp-3A0h]
  uint32_t delta_index; // [rsp+14h] [rbp-39Ch]
  uint32_t config_id_vec_size; // [rsp+18h] [rbp-398h]
  unsigned int idx; // [rsp+1Ch] [rbp-394h]
  common::milog::MiLogStream v68; // [rsp+20h] [rbp-390h] BYREF
  char v69[880]; // [rsp+40h] [rbp-370h] BYREF

  v2 = (unsigned __int64)v69;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(832LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 4 21 monster_config_id:134 48 4 13 config_id:142 64 4 13 tide_index:97 80 16 19 monster_tid"
                        "e_ptr:99 112 16 15 monster_ptr:165 144 16 11 evt_ptr:179 176 520 9 param:161";
  *(_QWORD *)(v2 + 16) = MonsterTideComp::checkAndAddTideMonster;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = 61956;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862741] = -218103808;
  v4[536862742] = -202116109;
  v4[536862743] = -202116109;
  v4[536862744] = -202116109;
  v4[536862745] = -202116109;
  *(_DWORD *)(v2 + 64) = tide_index;
  MonsterTideComp::findMonsterTide((MonsterTideComp *const)(v2 + 80), (unsigned __int64)this, *(_DWORD *)(v2 + 64));
  if ( std::operator==<MonsterTide>(0LL, (const std::shared_ptr<MonsterTide> *)(v2 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v68,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/group/monster_tide_comp.cpp",
      "checkAndAddTideMonster",
      102);
    v5 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v68,
           (const char (*)[38])"monster_tide_ptr is null, tide_index:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 64));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])" group:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v7, this->group_);
    common::milog::MiLogStream::~MiLogStream(&v68);
    v8 = -1;
  }
  else
  {
    v9 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    config_id_vec_size = std::vector<unsigned int>::size(&v9->monster_config_id_vec);
    if ( config_id_vec_size )
    {
      v10 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      v11 = std::map<unsigned int,unsigned int>::size(&v10->cur_monster_config_id_map);
      v12 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      if ( *(_BYTE *)(((unsigned __int64)&v12->min_monster_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v12 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v12->min_monster_count >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( v11 < v12->min_monster_count )
      {
        for ( add_monster_count = 0; add_monster_count <= 0x63; ++add_monster_count )
        {
          v13 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
          v14 = std::map<unsigned int,unsigned int>::size(&v13->cur_monster_config_id_map);
          v15 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
          if ( *(_BYTE *)(((unsigned __int64)&v15->max_monster_count >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v15->max_monster_count >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( v14 >= v15->max_monster_count )
            break;
          v16 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
          p_is_infinite = &v16->is_infinite;
          if ( *(_BYTE *)(((unsigned __int64)p_is_infinite >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)p_is_infinite & 7) >= *(_BYTE *)(((unsigned __int64)p_is_infinite >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(p_is_infinite);
          }
          if ( v16->is_infinite )
            goto LABEL_28;
          v18 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
          if ( *(_BYTE *)(((unsigned __int64)&v18->monster_count >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)v18 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->monster_count >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          monster_count = v18->monster_count;
          v20 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
          if ( *(_BYTE *)(((unsigned __int64)&v20->total_monster_count >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v20->total_monster_count >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( monster_count >= v20->total_monster_count )
            v21 = 1;
          else
LABEL_28:
            v21 = 0;
          if ( v21 )
          {
            MonsterTideComp::finishMonsterTide(this, *(_DWORD *)(v2 + 64), 0);
            v8 = 0;
            goto LABEL_80;
          }
          *(_DWORD *)(v2 + 32) = 0;
          for ( delta_index = 0; delta_index < config_id_vec_size; ++delta_index )
          {
            v22 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
            if ( *(_BYTE *)(((unsigned __int64)&v22->index >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v22->index >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            idx = (v22->index + delta_index) % config_id_vec_size;
            v23 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
            if ( idx >= std::vector<unsigned int>::size(&v23->monster_config_id_vec) )
              break;
            v24 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
            v25 = std::vector<unsigned int>::operator[](&v24->monster_config_id_vec, idx);
            if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v2 + 48) = *v25;
            v26 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
            if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int>,unsigned int>(
                    &v26->cur_monster_config_id_map,
                    (const unsigned int *)(v2 + 48)) )
            {
              if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              Group::findEntityByConfigId<Monster>((Group *const)(v2 + 144), (uint32_t)this->group_);
              v27 = std::operator==<Monster>(0LL, (const std::shared_ptr<Monster> *)(v2 + 144));
              std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 144));
              if ( v27 )
              {
                *(_DWORD *)(v2 + 32) = *(_DWORD *)(v2 + 48);
                v28 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
                if ( *(_BYTE *)(((unsigned __int64)&v28->index >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&v28->index >> 3) + 0x7FFF8000) <= 3 )
                {
                  v28 = (std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v28->index);
                }
                v28->index = (idx + 1) % config_id_vec_size;
                break;
              }
            }
          }
          if ( !*(_DWORD *)(v2 + 32) )
          {
            common::milog::MiLogStream::create(
              &v68,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/group/monster_tide_comp.cpp",
              "checkAndAddTideMonster",
              157);
            v29 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                    &v68,
                    (const char (*)[47])"cannot found valid monster config, tide_index:");
            v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v29,
                    (const unsigned int *)(v2 + 64));
            v31 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v30, (const char (*)[8])" group:");
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            operator<<(v31, this->group_);
            common::milog::MiLogStream::~MiLogStream(&v68);
            break;
          }
          GroupEntityParam::GroupEntityParam((GroupEntityParam *const)(v2 + 176));
          *(_BYTE *)(v2 + 184) = 1;
          *(_DWORD *)(v2 + 176) = *(_DWORD *)(v2 + 32);
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Group::createMonster((Group *const)(v2 + 112), (const GroupEntityParam *)this->group_);
          if ( std::operator==<Monster>(0LL, (const std::shared_ptr<Monster> *)(v2 + 112)) )
          {
            common::milog::MiLogStream::create(
              &v68,
              &common::milog::MiLogDefault::default_log_obj_,
              0x10u,
              "./src/group/monster_tide_comp.cpp",
              "checkAndAddTideMonster",
              168);
            v32 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                    &v68,
                    (const char (*)[40])"createMonster fails, monster_config_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, (const unsigned int *)(v2 + 32));
            common::milog::MiLogStream::~MiLogStream(&v68);
            v33 = 0;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v68,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/group/monster_tide_comp.cpp",
              "checkAndAddTideMonster",
              171);
            v34 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                    &v68,
                    (const char (*)[26])"create monster_config_id:");
            v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v34,
                    (const unsigned int *)(v2 + 32));
            v36 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v35, (const char (*)[6])" map:");
            v37 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
            v38 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
                    v36,
                    &v37->cur_monster_config_id_map);
            v39 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v38,
                    (const char (*)[13])" tide_index:");
            v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v39,
                    (const unsigned int *)(v2 + 64));
            v41 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v40, (const char (*)[8])" group:");
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            operator<<(v41, this->group_);
            common::milog::MiLogStream::~MiLogStream(&v68);
            p_cur_monster_config_id_map = &std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80))->cur_monster_config_id_map;
            v43 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
            *(_DWORD *)(v2 + 48) = Entity::getEntityId((const Entity *const)v43);
            std::map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int>(
              p_cur_monster_config_id_map,
              (unsigned int *)(v2 + 32),
              (unsigned int *)(v2 + 48),
              v44,
              v45);
            v46 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
            if ( *(_BYTE *)(((unsigned __int64)&v46->monster_count >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)v46 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v46->monster_count >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            ++v46->monster_count;
            v47 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
            if ( *(_BYTE *)(((unsigned __int64)&v47->tide_count >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v47->tide_count >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            v47->tide_count += add_monster_count == 0;
            EventUtil::createEvent((std::shared_ptr<Event> *)(v2 + 144), 36);
            if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v2 + 144), 0LL) )
            {
              std::to_string((std::string *)&v68, *(_DWORD *)(v2 + 64));
              v48 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
              std::string::operator=(&v48->source_name, &v68);
              std::string::~string(&v68);
              v49 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
              EntityId = Entity::getEntityId((const Entity *const)v49);
              v51 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
              p_source_entity_id = &v51->source_entity_id;
              if ( *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p_source_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3)
                                                                                     + 0x7FFF8000) )
              {
                __asan_report_store4(p_source_entity_id);
              }
              v51->source_entity_id = EntityId;
              v53 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
              if ( *(_BYTE *)(((unsigned __int64)&v53->monster_count >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)v53 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v53->monster_count >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v54 = v53->monster_count;
              v55 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
              p_param1 = &v55->param1;
              if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_store4(p_param1);
              }
              v55->param1 = v54;
              v57 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
              if ( *(_BYTE *)(((unsigned __int64)&v57->tide_count >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v57->tide_count >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              tide_count = v57->tide_count;
              v59 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
              if ( *(_BYTE *)(((unsigned __int64)&v59->param2 >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v59->param2 >> 3) + 0x7FFF8000) <= 3 )
              {
                v59 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v59->param2);
              }
              v59->param2 = tide_count;
              v60 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
              MonsterType = Monster::getMonsterType(v60);
              v62 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
              if ( *(_BYTE *)(((unsigned __int64)&v62->param4 >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v62->param4 >> 3) + 0x7FFF8000) <= 3 )
              {
                v62 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v62->param4);
              }
              v62->param4 = MonsterType;
              if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              Group::handleEvent(this->group_, (EventPtr *)(v2 + 144));
            }
            std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 144));
            v33 = 1;
          }
          std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 112));
          GroupEntityParam::~GroupEntityParam((GroupEntityParam *const)(v2 + 176));
          if ( v33 != 1 )
            break;
        }
        v8 = 0;
      }
      else
      {
        v8 = 0;
      }
    }
    else
    {
      v8 = -1;
    }
  }
LABEL_80:
  std::shared_ptr<MonsterTide>::~shared_ptr((std::shared_ptr<MonsterTide> *const)(v2 + 80));
  result = v8;
  if ( v69 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8064) = 0;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 196: range 00000000168D5E8C-00000000168D644A
__int64 __fastcall MonsterTideComp::finishMonsterTide(
        MonsterTideComp *const this,
        uint32_t tide_index,
        int32_t end_type)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  unsigned int v9; // r14d
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  MonsterTideState *p_state; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  int32_t *p_param1; // rax
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  uint32_t monster_count; // r14d
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  int32_t v21; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  __int64 result; // rax
  common::milog::MiLogStream v26; // [rsp+10h] [rbp-D0h] BYREF
  char v27[176]; // [rsp+30h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 14 tide_index:195 64 16 20 monster_tide_ptr:197 96 16 11 evt_ptr:212";
  *(_QWORD *)(v3 + 16) = MonsterTideComp::finishMonsterTide;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = tide_index;
  MonsterTideComp::findMonsterTide((MonsterTideComp *const)(v3 + 64), (unsigned __int64)this, *(_DWORD *)(v3 + 48));
  if ( std::operator==<MonsterTide>(0LL, (const std::shared_ptr<MonsterTide> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/group/monster_tide_comp.cpp",
      "finishMonsterTide",
      200);
    v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v26,
           (const char (*)[38])"monster_tide_ptr is null, tide_index:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v7, (const char (*)[8])" group:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_7:
    operator<<(v8, this->group_);
    common::milog::MiLogStream::~MiLogStream(&v26);
    v9 = -1;
    goto LABEL_30;
  }
  v10 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&v10->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( v10->state == MONSTER_TIDE_FINISHED )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/group/monster_tide_comp.cpp",
      "finishMonsterTide",
      206);
    v11 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            &v26,
            (const char (*)[43])"monster_tide already finished, tide_index:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v12, (const char (*)[8])" group:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_7;
  }
  v13 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  p_state = &v13->state;
  if ( *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(p_state);
  }
  v13->state = MONSTER_TIDE_FINISHED;
  EventUtil::createEvent((std::shared_ptr<Event> *)(v3 + 96), 35);
  if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v3 + 96), 0LL) )
  {
    std::to_string((std::string *)&v26, *(_DWORD *)(v3 + 48));
    v15 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    std::string::operator=(&v15->source_name, &v26);
    std::string::~string(&v26);
    v16 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    p_param1 = &v16->param1;
    if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p_param1);
    }
    v16->param1 = end_type;
    v18 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v18->monster_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v18 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->monster_count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    monster_count = v18->monster_count;
    v20 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    v21 = monster_count - std::map<unsigned int,unsigned int>::size(&v20->cur_monster_config_id_map);
    v22 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&v22->param2 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v22->param2 >> 3) + 0x7FFF8000) <= 3 )
    {
      v22 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v22->param2);
    }
    v22->param2 = v21;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Group::handleEvent(this->group_, (EventPtr *)(v3 + 96));
  }
  v23 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  if ( std::map<unsigned int,unsigned int>::empty(&v23->cur_monster_config_id_map) )
    v9 = MonsterTideComp::delMonsterTide(this, *(_DWORD *)(v3 + 48));
  else
    v9 = 0;
  std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v3 + 96));
LABEL_30:
  std::shared_ptr<MonsterTide>::~shared_ptr((std::shared_ptr<MonsterTide> *const)(v3 + 64));
  result = v9;
  if ( v27 == (char *)v3 )
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

// Line 231: range 00000000168D644C-00000000168D6B70
void __cdecl MonsterTideComp::onGroupMonsterDie(MonsterTideComp *const this, Monster *monster)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  uint32_t EntityId; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rdx
  uint32_t *p_source_entity_id; // rax
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rdx
  uint32_t monster_count; // r14d
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  int32_t v22; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rdx
  int32_t *p_param1; // rax
  data::MonsterType MonsterType; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rdx
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rdx
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::map<unsigned int,std::shared_ptr<MonsterTide>>::iterator __for_begin; // [rsp+10h] [rbp-100h] BYREF
  std::map<unsigned int,std::shared_ptr<MonsterTide>>::iterator __for_end; // [rsp+18h] [rbp-F8h] BYREF
  std::map<unsigned int,std::shared_ptr<MonsterTide>> *__for_range; // [rsp+20h] [rbp-F0h]
  const std::pair<unsigned int const,std::shared_ptr<MonsterTide> > *v34; // [rsp+28h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<MonsterTide> > >::type *cur_tide_index; // [rsp+30h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<MonsterTide> > >::type *monster_tide_ptr; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v37; // [rsp+40h] [rbp-D0h] BYREF
  char v38[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 21 monster_config_id:232 48 4 14 tide_index:233 64 16 20 monster_tide_ptr:247 96 16 11 evt_ptr:258";
  *(_QWORD *)(v2 + 16) = MonsterTideComp::onGroupMonsterDie;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 32) = Entity::getConfigId((const Entity *const)monster);
  *(_DWORD *)(v2 + 48) = 0;
  __for_range = &this->monster_tide_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<MonsterTide>>::begin(&this->monster_tide_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<MonsterTide>>::end(&this->monster_tide_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v34 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<MonsterTide>>>::operator*(&__for_begin);
    cur_tide_index = std::get<0ul,unsigned int const,std::shared_ptr<MonsterTide>>(v34);
    monster_tide_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<MonsterTide> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<MonsterTide>>(v34);
    if ( !std::operator==<MonsterTide>(0LL, monster_tide_ptr) )
    {
      v5 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)monster_tide_ptr);
      if ( common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int>,unsigned int>(
             &v5->cur_monster_config_id_map,
             (const unsigned int *)(v2 + 32)) )
      {
        if ( *(_BYTE *)(((unsigned __int64)cur_tide_index >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)cur_tide_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cur_tide_index >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v2 + 48) = *cur_tide_index;
        break;
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<MonsterTide>>>::operator++(&__for_begin);
  }
  MonsterTideComp::findMonsterTide((MonsterTideComp *const)(v2 + 64), (unsigned __int64)this, *(_DWORD *)(v2 + 48));
  if ( !std::operator==<MonsterTide>(0LL, (const std::shared_ptr<MonsterTide> *)(v2 + 64)) )
  {
    v6 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    std::map<unsigned int,unsigned int>::erase(
      &v6->cur_monster_config_id_map,
      (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/group/monster_tide_comp.cpp",
      "onGroupMonsterDie",
      254);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v37,
           (const char (*)[25])"erase monster_config_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" map:");
    v10 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v11 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v9, &v10->cur_monster_config_id_map);
    v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])" tide_index:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
    v14 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v13, (const char (*)[8])" group:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v14, this->group_);
    common::milog::MiLogStream::~MiLogStream(&v37);
    EventUtil::createEvent((std::shared_ptr<Event> *)(v2 + 96), 37);
    if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v2 + 96), 0LL) )
    {
      std::to_string((std::string *)&v37, *(_DWORD *)(v2 + 48));
      v15 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      std::string::operator=(&v15->source_name, &v37);
      std::string::~string(&v37);
      EntityId = Entity::getEntityId((const Entity *const)monster);
      v17 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      p_source_entity_id = &v17->source_entity_id;
      if ( *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_source_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_store4(p_source_entity_id);
      }
      v17->source_entity_id = EntityId;
      v19 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v19->monster_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v19 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->monster_count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      monster_count = v19->monster_count;
      v21 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v22 = monster_count - std::map<unsigned int,unsigned int>::size(&v21->cur_monster_config_id_map);
      v23 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      p_param1 = &v23->param1;
      if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(p_param1);
      }
      v23->param1 = v22;
      MonsterType = Monster::getMonsterType(monster);
      v26 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v26->param4 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v26->param4 >> 3) + 0x7FFF8000) <= 3 )
      {
        v26 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v26->param4);
      }
      v26->param4 = MonsterType;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Group::handleEvent(this->group_, (EventPtr *)(v2 + 96));
    }
    v27 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v27->state >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v27 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v27->state >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( v27->state == MONSTER_TIDE_NORMAL )
    {
      MonsterTideComp::checkAndAddTideMonster(this, *(_DWORD *)(v2 + 48));
    }
    else
    {
      v28 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v28->state >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v28 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v28->state >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( v28->state == MONSTER_TIDE_FINISHED )
      {
        v29 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( std::map<unsigned int,unsigned int>::empty(&v29->cur_monster_config_id_map) )
          MonsterTideComp::delMonsterTide(this, *(_DWORD *)(v2 + 48));
      }
    }
    std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 96));
  }
  std::shared_ptr<MonsterTide>::~shared_ptr((std::shared_ptr<MonsterTide> *const)(v2 + 64));
  if ( v38 == (char *)v2 )
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

// Line 280: range 00000000168D6B72-00000000168D6E75
__int64 __fastcall MonsterTideComp::pauseMonsterTide(MonsterTideComp *const this, uint32_t tide_index)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int v5; // r14d
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  MonsterTideState *p_state; // rax
  __int64 result; // rax
  common::milog::MiLogStream v16; // [rsp+10h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 tide_index:279 64 16 20 monster_tide_ptr:281";
  *(_QWORD *)(v2 + 16) = MonsterTideComp::pauseMonsterTide;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = tide_index;
  MonsterTideComp::findMonsterTide((MonsterTideComp *const)(v2 + 64), (unsigned __int64)this, *(_DWORD *)(v2 + 48));
  if ( std::operator==<MonsterTide>(0LL, (const std::shared_ptr<MonsterTide> *)(v2 + 64)) )
  {
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v6->state >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v6 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->state >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( v6->state == MONSTER_TIDE_NORMAL )
    {
      v13 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      p_state = &v13->state;
      if ( *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(p_state);
      }
      v13->state = MONSTER_TIDE_PAUSED;
      v5 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        0x10u,
        "./src/group/monster_tide_comp.cpp",
        "pauseMonsterTide",
        289);
      v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
             &v16,
             (const char (*)[20])"monster tide state:");
      v8 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v9 = common::milog::MiLogStream::operator<<<MonsterTideState,(MonsterTideState*)0>(v7, &v8->state);
      v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])" tide_index:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" group:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v12, this->group_);
      common::milog::MiLogStream::~MiLogStream(&v16);
      v5 = -1;
    }
  }
  std::shared_ptr<MonsterTide>::~shared_ptr((std::shared_ptr<MonsterTide> *const)(v2 + 64));
  result = v5;
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

// Line 299: range 00000000168D6E76-00000000168D718A
__int64 __fastcall MonsterTideComp::resumeMonsterTide(MonsterTideComp *const this, uint32_t tide_index)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int v5; // r14d
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  MonsterTideState *p_state; // rax
  __int64 result; // rax
  common::milog::MiLogStream v16; // [rsp+10h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 tide_index:298 64 16 20 monster_tide_ptr:300";
  *(_QWORD *)(v2 + 16) = MonsterTideComp::resumeMonsterTide;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = tide_index;
  MonsterTideComp::findMonsterTide((MonsterTideComp *const)(v2 + 64), (unsigned __int64)this, *(_DWORD *)(v2 + 48));
  if ( std::operator==<MonsterTide>(0LL, (const std::shared_ptr<MonsterTide> *)(v2 + 64)) )
  {
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v6->state >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v6 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->state >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( v6->state == MONSTER_TIDE_PAUSED )
    {
      v13 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      p_state = &v13->state;
      if ( *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(p_state);
      }
      v13->state = MONSTER_TIDE_NORMAL;
      v5 = MonsterTideComp::checkAndAddTideMonster(this, *(_DWORD *)(v2 + 48));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        0x10u,
        "./src/group/monster_tide_comp.cpp",
        "resumeMonsterTide",
        308);
      v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
             &v16,
             (const char (*)[20])"monster tide state:");
      v8 = std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v9 = common::milog::MiLogStream::operator<<<MonsterTideState,(MonsterTideState*)0>(v7, &v8->state);
      v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])" tide_index:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" group:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v12, this->group_);
      common::milog::MiLogStream::~MiLogStream(&v16);
      v5 = -1;
    }
  }
  std::shared_ptr<MonsterTide>::~shared_ptr((std::shared_ptr<MonsterTide> *const)(v2 + 64));
  result = v5;
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
