// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_limited_shop_comp.cpp

// Line 44: range 0000000014623872-00000000146238AC
void __cdecl HomeLimitedShopGoodsRandomer::HomeLimitedShopGoodsRandomer(HomeLimitedShopGoodsRandomer *const this)
{
  std::map<unsigned int,unsigned int>::map(&this->candidate_map_);
  std::map<unsigned int,unsigned int>::map(&this->weight_map_);
  std::unordered_set<unsigned int>::unordered_set(&this->exclude_id_);
};

// Line 44: range 00000000146238AE-00000000146238E8
void __cdecl HomeLimitedShopGoodsRandomer::~HomeLimitedShopGoodsRandomer(HomeLimitedShopGoodsRandomer *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->exclude_id_);
  std::map<unsigned int,unsigned int>::~map(&this->weight_map_);
  std::map<unsigned int,unsigned int>::~map(&this->candidate_map_);
};

// Line 48: range 00000000146483E8-0000000014648435
void __cdecl HomeLimitedShopGoodsRandomer::addExcludeID<std::set<unsigned int>>(
        HomeLimitedShopGoodsRandomer *const this,
        const std::set<unsigned int> *goods_ids)
{
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r12
  std::set<unsigned int>::iterator v3; // rax

  M_node = std::cend<std::set<unsigned int>>(goods_ids)._M_node;
  v3._M_node = std::cbegin<std::set<unsigned int>>(goods_ids)._M_node;
  std::unordered_set<unsigned int>::insert<std::_Rb_tree_const_iterator<unsigned int>>(
    &this->exclude_id_,
    v3,
    (std::_Rb_tree_const_iterator<unsigned int>)M_node);
};

// Line 48: range 000000001464839A-00000000146483E7
void __cdecl HomeLimitedShopGoodsRandomer::addExcludeID<std::unordered_set<unsigned int>>(
        HomeLimitedShopGoodsRandomer *const this,
        const std::unordered_set<unsigned int> *goods_ids)
{
  std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *M_cur; // r12
  std::unordered_set<unsigned int>::const_iterator v3; // rax

  M_cur = std::cend<std::unordered_set<unsigned int>>(goods_ids)._M_cur;
  v3._M_cur = std::cbegin<std::unordered_set<unsigned int>>(goods_ids)._M_cur;
  std::unordered_set<unsigned int>::insert<std::__detail::_Node_const_iterator<unsigned int,true,false>>(
    &this->exclude_id_,
    v3,
    (std::__detail::_Node_const_iterator<unsigned int,true,false>)M_cur);
};

// Line 48: range 0000000014648436-0000000014648483
void __cdecl HomeLimitedShopGoodsRandomer::addExcludeID<std::vector<unsigned int>>(
        HomeLimitedShopGoodsRandomer *const this,
        const std::vector<unsigned int> *goods_ids)
{
  const unsigned int *M_current; // r12
  std::vector<unsigned int>::const_iterator v3; // rax

  M_current = std::cend<std::vector<unsigned int>>(goods_ids)._M_current;
  v3._M_current = std::cbegin<std::vector<unsigned int>>(goods_ids)._M_current;
  std::unordered_set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
    &this->exclude_id_,
    v3,
    (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
};

// Line 56: range 0000000014623148-0000000014623166
void __cdecl HomeLimitedShopGoodsRandomer::clearExcludeID(HomeLimitedShopGoodsRandomer *const this)
{
  std::unordered_set<unsigned int>::clear(&this->exclude_id_);
};

// Line 61: range 0000000014623168-0000000014623313
void __fastcall HomeLimitedShopGoodsRandomer::addCandidateID(
        HomeLimitedShopGoodsRandomer *const this,
        uint32_t goods_id,
        uint32_t weight)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::map<unsigned int,unsigned int>::mapped_type *v6; // rax
  _DWORD *v7; // rdx
  std::map<unsigned int,unsigned int>::mapped_type *v8; // rax
  _DWORD *v9; // rdx
  char v11[112]; // [rsp+10h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 11 goods_id:61";
  *(_QWORD *)(v3 + 16) = HomeLimitedShopGoodsRandomer::addCandidateID;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = goods_id;
  if ( *(_DWORD *)(v3 + 32) && weight )
  {
    v6 = std::map<unsigned int,unsigned int>::operator[](
           &this->candidate_map_,
           (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 32));
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v6);
    }
    *v7 = weight;
    if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
            &this->exclude_id_,
            (const unsigned int *)(v3 + 32)) )
    {
      v8 = std::map<unsigned int,unsigned int>::operator[](
             &this->weight_map_,
             (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 32));
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v8);
      }
      *v9 = weight;
    }
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 90: range 0000000014623314-000000001462346E
void __cdecl HomeLimitedShopGoodsRandomer::adjust(HomeLimitedShopGoodsRandomer *const this)
{
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v1; // ebx
  std::map<unsigned int,unsigned int>::mapped_type *v2; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v3; // rdx
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-30h]
  const std::pair<unsigned int const,unsigned int> *v7; // [rsp+28h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *id; // [rsp+30h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *weight; // [rsp+38h] [rbp-18h]

  std::map<unsigned int,unsigned int>::clear(&this->weight_map_);
  __for_range = &this->candidate_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->candidate_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->candidate_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,unsigned int>(v7);
    weight = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v7);
    if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(&this->exclude_id_, id) )
    {
      if ( *(_BYTE *)(((unsigned __int64)weight >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)weight & 7) + 3) >= *(_BYTE *)(((unsigned __int64)weight >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v1 = *weight;
      v2 = std::map<unsigned int,unsigned int>::operator[](&this->weight_map_, id);
      v3 = v2;
      if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v2);
      }
      *v3 = v1;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
};

// Line 103: range 0000000014623470-00000000146235D2
uint32_t __cdecl HomeLimitedShopGoodsRandomer::select(
        HomeLimitedShopGoodsRandomer *const this,
        uint32_t count,
        std::vector<unsigned int> *selected_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  uint32_t result; // eax
  unsigned int i; // [rsp+2Ch] [rbp-64h]
  char v9[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 id:112";
  *(_QWORD *)(v3 + 16) = HomeLimitedShopGoodsRandomer::select;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  std::vector<unsigned int>::clear(selected_vec);
  for ( i = 0; count > i; ++i )
  {
    if ( std::map<unsigned int,unsigned int>::empty(&this->weight_map_) )
      break;
    *(_DWORD *)(v3 + 32) = 0;
    if ( common::tools::RandomUtils::weightSelectOne<unsigned int,unsigned int>(
           &this->weight_map_,
           (unsigned int *)(v3 + 32),
           0) )
    {
      break;
    }
    std::vector<unsigned int>::push_back(selected_vec, (const std::vector<unsigned int>::value_type *)(v3 + 32));
    std::map<unsigned int,unsigned int>::erase(
      &this->weight_map_,
      (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 32));
  }
  result = std::vector<unsigned int>::size(selected_vec);
  if ( v9 == (char *)v3 )
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

// Line 135: range 000000001458626A-0000000014586610
void __cdecl HomeLimitedShopCommon::getShopTime(
        uint32_t now,
        uint32_t *open_time,
        uint32_t *close_time,
        uint32_t *guest_open_time)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t v5; // ecx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t v7; // ecx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t v9; // ecx
  uint32_t week_time; // [rsp+2Ch] [rbp-14h]
  std::shared_ptr<Config> v13; // [rsp+30h] [rbp-10h] BYREF

  week_time = common::tools::TimeUtils::getWeekTime(now, 0LL);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
  v5 = ConstValueExcelConfigMgr::getHomeWorldLimitedShopOpenTime(&v4->design_config.txt_config_mgr.const_value_config_mgr)
     + week_time;
  if ( *(_BYTE *)(((unsigned __int64)open_time >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)open_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)open_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(open_time);
  }
  *open_time = v5;
  std::shared_ptr<Config>::~shared_ptr(&v13);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
  v7 = ConstValueExcelConfigMgr::getHomeWorldLimitedShopGuestOpenTime(&v6->design_config.txt_config_mgr.const_value_config_mgr)
     + week_time;
  if ( *(_BYTE *)(((unsigned __int64)guest_open_time >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)guest_open_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)guest_open_time >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_store4(guest_open_time);
  }
  *guest_open_time = v7;
  std::shared_ptr<Config>::~shared_ptr(&v13);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
  v9 = ConstValueExcelConfigMgr::getHomeWorldLimitedShopCloseTime(&v8->design_config.txt_config_mgr.const_value_config_mgr)
     + week_time;
  if ( *(_BYTE *)(((unsigned __int64)close_time >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)close_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)close_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(close_time);
  }
  *close_time = v9;
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( *(_BYTE *)(((unsigned __int64)close_time >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)close_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)close_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( now < *close_time )
  {
    if ( *(_BYTE *)(((unsigned __int64)close_time >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)close_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)close_time >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( now < *close_time - 604800 )
    {
      if ( *(_BYTE *)(((unsigned __int64)open_time >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)open_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)open_time >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *open_time -= 604800;
      if ( *(_BYTE *)(((unsigned __int64)guest_open_time >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)guest_open_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)guest_open_time >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *guest_open_time -= 604800;
      *close_time -= 604800;
    }
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)open_time >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)open_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)open_time >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *open_time += 604800;
    if ( *(_BYTE *)(((unsigned __int64)guest_open_time >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)guest_open_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)guest_open_time >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *guest_open_time += 604800;
    *close_time += 604800;
  }
};

// Line 161: range 0000000014586612-0000000014586753
uint32_t __cdecl HomeLimitedShopCommon::randomModuleIndex(uint32_t module_id, uint32_t uid, uint32_t max)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t Now; // eax
  uint32_t result; // eax
  uint32_t week_time; // [rsp+1Ch] [rbp-84h]
  char v10[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 13 open_time:170 48 4 14 close_time:170 64 4 19 guest_open_time:170";
  *(_QWORD *)(v3 + 16) = HomeLimitedShopCommon::randomModuleIndex;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116348;
  Now = common::tools::TimeUtils::getNow();
  HomeLimitedShopCommon::getShopTime(Now, (uint32_t *)(v3 + 32), (uint32_t *)(v3 + 48), (uint32_t *)(v3 + 64));
  week_time = common::tools::TimeUtils::getWeekTime(*(unsigned int *)(v3 + 32), 0LL);
  result = common::tools::RandomUtils::rand<unsigned int>(0, max, uid + module_id + week_time);
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

// Line 177: range 0000000014586754-0000000014587133
__int64 __fastcall HomeLimitedShopCommon::randomDjinnPos(
        uint32_t module_id,
        const std::map<unsigned int,std::set<unsigned int>> *unlock_block_map,
        uint32_t uid,
        unsigned __int64 djinn_info)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  JsonConfigMgr *p_json_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t v13; // ecx
  uint32_t block_id; // ecx
  uint32_t v15; // edx
  unsigned int v16; // r14d
  std::vector<WeekendDjinnInfo>::reference v17; // rdx
  int v18; // eax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  std::vector<WeekendDjinnInfo>::reference v24; // rdx
  __int64 result; // rax
  uint32_t index_0; // [rsp+28h] [rbp-168h]
  uint32_t index; // [rsp+2Ch] [rbp-164h]
  std::map<unsigned int,std::set<unsigned int>>::const_iterator __for_begin; // [rsp+30h] [rbp-160h] BYREF
  std::map<unsigned int,std::set<unsigned int>>::const_iterator __for_end; // [rsp+38h] [rbp-158h] BYREF
  std::vector<data::ConfigHomeBlock>::const_iterator __for_begin_0; // [rsp+40h] [rbp-150h] BYREF
  std::vector<data::ConfigHomeBlock>::const_iterator __for_end_0; // [rsp+48h] [rbp-148h] BYREF
  std::vector<data::ConfigWeekendDjinn>::const_iterator __for_begin_1; // [rsp+50h] [rbp-140h] BYREF
  std::vector<data::ConfigWeekendDjinn>::const_iterator __for_end_1; // [rsp+58h] [rbp-138h] BYREF
  const std::map<unsigned int,std::set<unsigned int>> *__for_range; // [rsp+60h] [rbp-130h]
  const std::pair<unsigned int const,std::set<unsigned int> > *v37; // [rsp+68h] [rbp-128h]
  std::tuple_element<0,const std::pair<unsigned int const,std::set<unsigned int> > >::type *scene_id; // [rsp+70h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *unlock_block_id_set; // [rsp+78h] [rbp-118h]
  const data::ConfigSceneHomeInfo *config_scene_home_ptr; // [rsp+80h] [rbp-110h]
  const std::vector<data::ConfigHomeBlock> *__for_range_0; // [rsp+88h] [rbp-108h]
  const data::ConfigHomeBlock *home_block_config; // [rsp+90h] [rbp-100h]
  const std::vector<data::ConfigWeekendDjinn> *__for_range_1; // [rsp+98h] [rbp-F8h]
  const data::ConfigWeekendDjinn *_; // [rsp+A0h] [rbp-F0h]
  WeekendDjinnInfo *new_djinn_info; // [rsp+A8h] [rbp-E8h]
  std::shared_ptr<Config> v46; // [rsp+B0h] [rbp-E0h] BYREF
  common::milog::MiLogStream v47; // [rsp+C0h] [rbp-D0h] BYREF
  char v48[176]; // [rsp+E0h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 13 module_id:176 48 4 7 uid:176 64 24 18 djinn_info_vec:178";
  *(_QWORD *)(v4 + 16) = HomeLimitedShopCommon::randomDjinnPos;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218103808;
  v6[536862723] = -202116109;
  *(_DWORD *)(v4 + 32) = module_id;
  *(_DWORD *)(v4 + 48) = uid;
  std::vector<WeekendDjinnInfo>::vector((std::vector<WeekendDjinnInfo> *const)(v4 + 64));
  __for_range = unlock_block_map;
  __for_begin._M_node = std::map<unsigned int,std::set<unsigned int>>::begin(unlock_block_map)._M_node;
  __for_end._M_node = std::map<unsigned int,std::set<unsigned int>>::end(unlock_block_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v37 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator*(&__for_begin);
    scene_id = std::get<0ul,unsigned int const,std::set<unsigned int>>(v37);
    unlock_block_id_set = (std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::set<unsigned int>>(v37);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v46);
    p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v46)->design_config.json_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)scene_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    config_scene_home_ptr = JsonConfigMgr::findSceneHomeConfig(p_json_config_mgr, *scene_id);
    std::shared_ptr<Config>::~shared_ptr(&v46);
    if ( config_scene_home_ptr )
    {
      __for_range_0 = &config_scene_home_ptr->block_arrangement_info_list;
      __for_begin_0._M_current = std::vector<data::ConfigHomeBlock>::begin(&config_scene_home_ptr->block_arrangement_info_list)._M_current;
      __for_end_0._M_current = std::vector<data::ConfigHomeBlock>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<data::ConfigHomeBlock const*,std::vector<data::ConfigHomeBlock>>(
                &__for_begin_0,
                &__for_end_0) )
      {
        home_block_config = __gnu_cxx::__normal_iterator<data::ConfigHomeBlock const*,std::vector<data::ConfigHomeBlock>>::operator*(&__for_begin_0);
        if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
               unlock_block_id_set,
               &home_block_config->block_id) )
        {
          index_0 = 0;
          __for_range_1 = &home_block_config->weekend_djinn_info_list;
          __for_begin_1._M_current = std::vector<data::ConfigWeekendDjinn>::begin(&home_block_config->weekend_djinn_info_list)._M_current;
          __for_end_1._M_current = std::vector<data::ConfigWeekendDjinn>::end(__for_range_1)._M_current;
          while ( __gnu_cxx::operator!=<data::ConfigWeekendDjinn const*,std::vector<data::ConfigWeekendDjinn>>(
                    &__for_begin_1,
                    &__for_end_1) )
          {
            _ = __gnu_cxx::__normal_iterator<data::ConfigWeekendDjinn const*,std::vector<data::ConfigWeekendDjinn>>::operator*(&__for_begin_1);
            new_djinn_info = std::vector<WeekendDjinnInfo>::emplace_back<>((std::vector<WeekendDjinnInfo> *const)(v4 + 64));
            if ( *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)scene_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v13 = *scene_id;
            if ( *(_BYTE *)(((unsigned __int64)new_djinn_info >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)new_djinn_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)new_djinn_info >> 3)
                                                                               + 0x7FFF8000) )
            {
              __asan_report_store4(new_djinn_info);
            }
            new_djinn_info->scene_id = v13;
            if ( *(_BYTE *)(((unsigned __int64)home_block_config >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)home_block_config >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            block_id = home_block_config->block_id;
            if ( *(_BYTE *)(((unsigned __int64)&new_djinn_info->block_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)new_djinn_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&new_djinn_info->block_id >> 3)
                                                                           + 0x7FFF8000) )
            {
              __asan_report_store4(&new_djinn_info->block_id);
            }
            new_djinn_info->block_id = block_id;
            v15 = index_0++;
            if ( *(_BYTE *)(((unsigned __int64)&new_djinn_info->index >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)new_djinn_info + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&new_djinn_info->index >> 3)
                                                                           + 0x7FFF8000) )
            {
              __asan_report_store4(&new_djinn_info->index);
            }
            new_djinn_info->index = v15;
            __gnu_cxx::__normal_iterator<data::ConfigWeekendDjinn const*,std::vector<data::ConfigWeekendDjinn>>::operator++(&__for_begin_1);
          }
        }
        __gnu_cxx::__normal_iterator<data::ConfigHomeBlock const*,std::vector<data::ConfigHomeBlock>>::operator++(&__for_begin_0);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_limited_shop_comp.cpp",
        "randomDjinnPos",
        184);
      v8 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v47,
             (const char (*)[38])"findSceneHomeConfig fail. module_id: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 32));
      v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])"scene id: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, scene_id);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])" uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v47);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator++(&__for_begin);
  }
  if ( std::vector<WeekendDjinnInfo>::size((const std::vector<WeekendDjinnInfo> *const)(v4 + 64)) )
  {
    if ( std::vector<WeekendDjinnInfo>::size((const std::vector<WeekendDjinnInfo> *const)(v4 + 64)) == 1 )
    {
      v17 = std::vector<WeekendDjinnInfo>::operator[]((std::vector<WeekendDjinnInfo> *const)(v4 + 64), 0LL);
      if ( (char)(djinn_info & 7) >= *(_BYTE *)((djinn_info >> 3) + 0x7FFF8000)
        && *(_BYTE *)((djinn_info >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((djinn_info + 11) >> 3) + 0x7FFF8000) != 0
        && (char)((djinn_info + 11) & 7) >= *(_BYTE *)(((djinn_info + 11) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(djinn_info, 12LL);
      }
      if ( ((unsigned __int8)v17 & 7) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v17->index + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v17 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v17->index + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v17, 12LL);
      }
      *(_QWORD *)djinn_info = *(_QWORD *)&v17->scene_id;
      *(_DWORD *)(djinn_info + 8) = v17->index;
      v16 = 0;
    }
    else
    {
      v18 = std::vector<WeekendDjinnInfo>::size((const std::vector<WeekendDjinnInfo> *const)(v4 + 64));
      index = HomeLimitedShopCommon::randomModuleIndex(*(_DWORD *)(v4 + 32), *(_DWORD *)(v4 + 48), v18 - 1);
      if ( index >= std::vector<WeekendDjinnInfo>::size((const std::vector<WeekendDjinnInfo> *const)(v4 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v47,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/home/home_limited_shop_comp.cpp",
          "randomDjinnPos",
          214);
        v19 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                &v47,
                (const char (*)[37])"randomModuleIndex error. module_id: ");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v4 + 32));
        v21 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v20, (const char (*)[8])"index: ");
        __for_end_1._M_current = (const data::ConfigWeekendDjinn *)std::vector<WeekendDjinnInfo>::size((const std::vector<WeekendDjinnInfo> *const)(v4 + 64));
        v22 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v21,
                (const unsigned __int64 *)&__for_end_1);
        v23 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v22, (const char (*)[7])" uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream(&v47);
        index %= std::vector<WeekendDjinnInfo>::size((const std::vector<WeekendDjinnInfo> *const)(v4 + 64));
      }
      v24 = std::vector<WeekendDjinnInfo>::operator[]((std::vector<WeekendDjinnInfo> *const)(v4 + 64), index);
      if ( (char)(djinn_info & 7) >= *(_BYTE *)((djinn_info >> 3) + 0x7FFF8000)
        && *(_BYTE *)((djinn_info >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((djinn_info + 11) >> 3) + 0x7FFF8000) != 0
        && (char)((djinn_info + 11) & 7) >= *(_BYTE *)(((djinn_info + 11) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(djinn_info, 12LL);
      }
      if ( ((unsigned __int8)v24 & 7) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v24->index + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v24 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v24->index + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v24, 12LL);
      }
      *(_QWORD *)djinn_info = *(_QWORD *)&v24->scene_id;
      *(_DWORD *)(djinn_info + 8) = v24->index;
      v16 = 0;
    }
  }
  else
  {
    v16 = -1;
  }
  std::vector<WeekendDjinnInfo>::~vector((std::vector<WeekendDjinnInfo> *const)(v4 + 64));
  result = v16;
  if ( v48 == (char *)v4 )
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

// Line 225: range 0000000014587134-00000000145876E3
int32_t __cdecl HomeLimitedShopComp::fromBin(HomeLimitedShopComp *const this, const proto::HomeDataBin *home_data_bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t refresh_time; // edx
  std::unordered_map<unsigned int,GoodsInfo>::mapped_type *v6; // rax
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rax
  int32_t result; // eax
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type __k; // [rsp+1Ch] [rbp-104h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeLimitedShopGoodsInfoBin>::const_iterator __for_begin_1; // [rsp+20h] [rbp-100h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeLimitedShopNPCPosBin>::const_iterator __for_begin; // [rsp+28h] [rbp-F8h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+30h] [rbp-F0h]
  const proto::HomeLimitedShopBin *limited_shop_bin; // [rsp+38h] [rbp-E8h]
  const google::protobuf::RepeatedPtrField<proto::HomeLimitedShopPoolRecordBin> *__for_range; // [rsp+40h] [rbp-E0h]
  const google::protobuf::RepeatedPtrField<proto::HomeLimitedShopGoodsInfoBin> *__for_range_1; // [rsp+48h] [rbp-D8h]
  const google::protobuf::RepeatedPtrField<proto::HomeLimitedShopNPCPosBin> *__for_range_2; // [rsp+50h] [rbp-D0h]
  const proto::HomeLimitedShopNPCPosBin *npc_pos_bin; // [rsp+58h] [rbp-C8h]
  const proto::HomeLimitedShopGoodsInfoBin *goods_info_bin; // [rsp+60h] [rbp-C0h]
  const proto::HomeLimitedShopPoolRecordBin *pool_record_bin; // [rsp+68h] [rbp-B8h]
  std::unordered_set<unsigned int> *record_set; // [rsp+70h] [rbp-B0h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+78h] [rbp-A8h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+80h] [rbp-A0h]
  const uint32_t *goods_id; // [rsp+88h] [rbp-98h]
  char v25[144]; // [rsp+90h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 14 goods_info:244 64 12 14 djinn_info:251";
  *(_QWORD *)(v2 + 16) = HomeLimitedShopComp::fromBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202177536;
  std::unordered_map<unsigned int,GoodsInfo>::clear(&this->goods_info_map_);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::clear(&this->pool_record_map_);
  std::unordered_map<unsigned int,WeekendDjinnInfo>::clear(&this->djinn_pos_map_);
  limited_shop_bin = proto::HomeDataBin::limited_shop_bin(home_data_bin);
  refresh_time = proto::HomeLimitedShopBin::last_refresh_time(limited_shop_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_refresh_time_);
  }
  this->last_refresh_time_ = refresh_time;
  __for_range = proto::HomeLimitedShopBin::pool_record_bin_list(limited_shop_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeLimitedShopPoolRecordBin>::begin(__for_range).it_;
  *(google::protobuf::RepeatedPtrField<proto::HomeLimitedShopPoolRecordBin>::const_iterator *)(v2 + 32) = google::protobuf::RepeatedPtrField<proto::HomeLimitedShopPoolRecordBin>::end(__for_range);
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeLimitedShopPoolRecordBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeLimitedShopPoolRecordBin> *const)&__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeLimitedShopPoolRecordBin>::iterator *)(v2 + 32)) )
  {
    pool_record_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeLimitedShopPoolRecordBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeLimitedShopPoolRecordBin> *const)&__for_begin);
    __k = proto::HomeLimitedShopPoolRecordBin::pool_id(pool_record_bin);
    record_set = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
                   &this->pool_record_map_,
                   &__k);
    __for_range_0 = proto::HomeLimitedShopPoolRecordBin::goods_id_list(pool_record_bin);
    __for_begin_0 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_0);
    __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range_0);
    while ( __for_begin_0 != __for_end )
    {
      goods_id = __for_begin_0;
      std::unordered_set<unsigned int>::insert(record_set, __for_begin_0++);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeLimitedShopPoolRecordBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::HomeLimitedShopPoolRecordBin> *const)&__for_begin);
  }
  __for_range_1 = proto::HomeLimitedShopBin::goods_info_bin_list(limited_shop_bin);
  __for_begin_1.it_ = google::protobuf::RepeatedPtrField<proto::HomeLimitedShopGoodsInfoBin>::begin(__for_range_1).it_;
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeLimitedShopGoodsInfoBin>::end(__for_range_1).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeLimitedShopGoodsInfoBin const>::operator!=(
            &__for_begin_1,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeLimitedShopGoodsInfoBin>::iterator *)&__for_begin) )
  {
    goods_info_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeLimitedShopGoodsInfoBin const>::operator*(&__for_begin_1);
    *(_DWORD *)(v2 + 32) = 0;
    *(_DWORD *)(v2 + 36) = 0;
    *(_DWORD *)(v2 + 32) = proto::HomeLimitedShopGoodsInfoBin::goods_id(goods_info_bin);
    *(_DWORD *)(v2 + 36) = proto::HomeLimitedShopGoodsInfoBin::buy_num(goods_info_bin);
    v6 = std::unordered_map<unsigned int,GoodsInfo>::operator[](
           &this->goods_info_map_,
           (const std::unordered_map<unsigned int,GoodsInfo>::key_type *)(v2 + 32));
    v7 = v6;
    if ( ((unsigned __int8)v6 & 7) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v6->num + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v6 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v6->num + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v6, 8LL);
    }
    *v7 = *(_QWORD *)(v2 + 32);
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeLimitedShopGoodsInfoBin const>::operator++(&__for_begin_1);
  }
  __for_range_2 = proto::HomeLimitedShopBin::npc_pos_bin_list(limited_shop_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeLimitedShopNPCPosBin>::begin(__for_range_2).it_;
  *(google::protobuf::RepeatedPtrField<proto::HomeLimitedShopNPCPosBin>::const_iterator *)(v2 + 32) = google::protobuf::RepeatedPtrField<proto::HomeLimitedShopNPCPosBin>::end(__for_range_2);
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeLimitedShopNPCPosBin const>::operator!=(
            &__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeLimitedShopNPCPosBin>::iterator *)(v2 + 32)) )
  {
    npc_pos_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeLimitedShopNPCPosBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 64) = 0;
    *(_DWORD *)(v2 + 68) = 0;
    *(_DWORD *)(v2 + 72) = 0;
    *(_DWORD *)(v2 + 64) = proto::HomeLimitedShopNPCPosBin::scene_id(npc_pos_bin);
    *(_DWORD *)(v2 + 68) = proto::HomeLimitedShopNPCPosBin::block_id(npc_pos_bin);
    *(_DWORD *)(v2 + 72) = proto::HomeLimitedShopNPCPosBin::index(npc_pos_bin);
    __k = proto::HomeLimitedShopNPCPosBin::module_id(npc_pos_bin);
    v8 = (unsigned __int64)std::unordered_map<unsigned int,WeekendDjinnInfo>::operator[](&this->djinn_pos_map_, &__k);
    if ( (char)(v8 & 7) >= *(_BYTE *)((v8 >> 3) + 0x7FFF8000) && *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((v8 + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((v8 + 11) & 7) >= *(_BYTE *)(((v8 + 11) >> 3) + 0x7FFF8000) )
    {
      v8 = __asan_report_store_n(v8, 12LL);
    }
    *(_QWORD *)v8 = *(_QWORD *)(v2 + 64);
    *(_DWORD *)(v8 + 8) = *(_DWORD *)(v2 + 72);
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeLimitedShopNPCPosBin const>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 261: range 00000000145876E4-0000000014587CA9
int32_t __cdecl HomeLimitedShopComp::toBin(HomeLimitedShopComp *const this, proto::HomeDataBin *home_data_bin)
{
  google::protobuf::uint32 *v2; // rdx
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::iterator __for_end; // [rsp+20h] [rbp-A0h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-98h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end_0; // [rsp+30h] [rbp-90h] BYREF
  proto::HomeLimitedShopBin *limited_shop_bin; // [rsp+38h] [rbp-88h]
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *__for_range; // [rsp+40h] [rbp-80h]
  std::unordered_map<unsigned int,GoodsInfo> *__for_range_1; // [rsp+48h] [rbp-78h]
  std::unordered_map<unsigned int,WeekendDjinnInfo> *__for_range_2; // [rsp+50h] [rbp-70h]
  const std::pair<unsigned int const,WeekendDjinnInfo> *v12; // [rsp+58h] [rbp-68h]
  std::tuple_element<0,const std::pair<unsigned int const,WeekendDjinnInfo> >::type *module_id; // [rsp+60h] [rbp-60h]
  std::tuple_element<1,const std::pair<unsigned int const,WeekendDjinnInfo> >::type *djinn_info; // [rsp+68h] [rbp-58h]
  proto::HomeLimitedShopNPCPosBin *npc_pos_bin; // [rsp+70h] [rbp-50h]
  const std::pair<unsigned int const,GoodsInfo> *v16; // [rsp+78h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,GoodsInfo> >::type *goods_id_0; // [rsp+80h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,GoodsInfo> >::type *goods_info; // [rsp+88h] [rbp-38h]
  proto::HomeLimitedShopGoodsInfoBin *goods_info_bin; // [rsp+90h] [rbp-30h]
  const std::pair<unsigned int const,std::unordered_set<unsigned int> > *v20; // [rsp+98h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *pool_id; // [rsp+A0h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *record_set; // [rsp+A8h] [rbp-18h]
  proto::HomeLimitedShopPoolRecordBin *pool_record_bin; // [rsp+B0h] [rbp-10h]
  const std::unordered_set<unsigned int> *__for_range_0; // [rsp+B8h] [rbp-8h]

  limited_shop_bin = proto::HomeDataBin::mutable_limited_shop_bin(home_data_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeLimitedShopBin::set_last_refresh_time(limited_shop_bin, this->last_refresh_time_);
  __for_range = &this->pool_record_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::begin(&this->pool_record_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::end(&this->pool_record_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v20 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator*(&__for_begin);
    pool_id = std::get<0ul,unsigned int const,std::unordered_set<unsigned int>>(v20);
    record_set = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::unordered_set<unsigned int>>(v20);
    pool_record_bin = proto::HomeLimitedShopBin::add_pool_record_bin_list(limited_shop_bin);
    if ( *(_BYTE *)(((unsigned __int64)pool_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)pool_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pool_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::HomeLimitedShopPoolRecordBin::set_pool_id(pool_record_bin, *pool_id);
    __for_range_0 = record_set;
    __for_begin_0._M_cur = std::unordered_set<unsigned int>::begin(record_set)._M_cur;
    __for_end_0._M_cur = std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<unsigned int,false>(&__for_begin_0, &__for_end_0) )
    {
      v2 = (google::protobuf::uint32 *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin_0);
      if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::HomeLimitedShopPoolRecordBin::add_goods_id_list(pool_record_bin, *v2);
      std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin_0);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator++(&__for_begin);
  }
  __for_range_1 = &this->goods_info_map_;
  __for_begin_0._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::unordered_map<unsigned int,GoodsInfo>::begin(&this->goods_info_map_)._M_cur;
  __for_end_0._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::unordered_map<unsigned int,GoodsInfo>::end(__for_range_1)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,GoodsInfo>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GoodsInfo>,false> *)&__for_begin_0,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,GoodsInfo>,false> *)&__for_end_0) )
  {
    v16 = std::__detail::_Node_iterator<std::pair<unsigned int const,GoodsInfo>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,GoodsInfo>,false,false> *const)&__for_begin_0);
    goods_id_0 = std::get<0ul,unsigned int const,GoodsInfo>(v16);
    goods_info = (std::tuple_element<1,const std::pair<unsigned int const,GoodsInfo> >::type *)std::get<1ul,unsigned int const,GoodsInfo>(v16);
    goods_info_bin = proto::HomeLimitedShopBin::add_goods_info_bin_list(limited_shop_bin);
    if ( *(_BYTE *)(((unsigned __int64)goods_id_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)goods_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)goods_id_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::HomeLimitedShopGoodsInfoBin::set_goods_id(goods_info_bin, *goods_id_0);
    if ( *(_BYTE *)(((unsigned __int64)&goods_info->num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)goods_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_info->num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::HomeLimitedShopGoodsInfoBin::set_buy_num(goods_info_bin, goods_info->num);
    std::__detail::_Node_iterator<std::pair<unsigned int const,GoodsInfo>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,GoodsInfo>,false,false> *const)&__for_begin_0);
  }
  __for_range_2 = &this->djinn_pos_map_;
  __for_begin_0._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::unordered_map<unsigned int,WeekendDjinnInfo>::begin(&this->djinn_pos_map_)._M_cur;
  __for_end_0._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::unordered_map<unsigned int,WeekendDjinnInfo>::end(__for_range_2)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,WeekendDjinnInfo>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,WeekendDjinnInfo>,false> *)&__for_begin_0,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,WeekendDjinnInfo>,false> *)&__for_end_0) )
  {
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,WeekendDjinnInfo>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,WeekendDjinnInfo>,false,false> *const)&__for_begin_0);
    module_id = std::get<0ul,unsigned int const,WeekendDjinnInfo>(v12);
    djinn_info = (std::tuple_element<1,const std::pair<unsigned int const,WeekendDjinnInfo> >::type *)std::get<1ul,unsigned int const,WeekendDjinnInfo>(v12);
    if ( *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)module_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( *module_id )
    {
      npc_pos_bin = proto::HomeLimitedShopBin::add_npc_pos_bin_list(limited_shop_bin);
      if ( *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)module_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::HomeLimitedShopNPCPosBin::set_module_id(npc_pos_bin, *module_id);
      if ( *(_BYTE *)(((unsigned __int64)djinn_info >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)djinn_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)djinn_info >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::HomeLimitedShopNPCPosBin::set_scene_id(npc_pos_bin, djinn_info->scene_id);
      if ( *(_BYTE *)(((unsigned __int64)&djinn_info->block_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)djinn_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&djinn_info->block_id >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::HomeLimitedShopNPCPosBin::set_block_id(npc_pos_bin, djinn_info->block_id);
      if ( *(_BYTE *)(((unsigned __int64)&djinn_info->index >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)djinn_info + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&djinn_info->index >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::HomeLimitedShopNPCPosBin::set_index(npc_pos_bin, djinn_info->index);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,WeekendDjinnInfo>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,WeekendDjinnInfo>,false,false> *const)&__for_begin_0);
  }
  return 0;
};

// Line 299: range 0000000014587CAA-0000000014587E3D
void __cdecl HomeLimitedShopComp::checkRefreshTime(HomeLimitedShopComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  uint32_t now; // [rsp+18h] [rbp-88h]
  uint32_t week_time; // [rsp+1Ch] [rbp-84h]
  char v6[128]; // [rsp+20h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 13 open_time:300 48 4 14 close_time:300 64 4 19 guest_open_time:300";
  *(_QWORD *)(v1 + 16) = HomeLimitedShopComp::checkRefreshTime;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -202116348;
  now = common::tools::TimeUtils::getNow();
  HomeLimitedShopCommon::getShopTime(now, (uint32_t *)(v1 + 32), (uint32_t *)(v1 + 48), (uint32_t *)(v1 + 64));
  week_time = common::tools::TimeUtils::getWeekTime(*(unsigned int *)(v1 + 32), 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( week_time > this->last_refresh_time_ && now >= *(_DWORD *)(v1 + 32) )
  {
    this->last_refresh_time_ = week_time;
    HomeLimitedShopComp::refreshShop(this);
  }
  if ( v6 == (char *)v1 )
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

// Line 315: range 0000000014587E3E-0000000014587E68
int32_t __cdecl HomeLimitedShopComp::start(HomeLimitedShopComp *const this)
{
  HomeLimitedShopComp::checkRefreshTime(this);
  HomeLimitedShopComp::checkDjinnInfo(this);
  return 0;
};

// Line 322: range 0000000014587E6A-0000000014588112
bool __cdecl HomeLimitedShopComp::isOpen(HomeLimitedShopComp *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  bool result; // al
  uint32_t Uid; // r14d
  uint32_t v8; // eax
  uint32_t now; // [rsp+1Ch] [rbp-B4h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-B0h] BYREF
  char v11[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 13 open_time:328 48 4 14 close_time:328 64 4 19 guest_open_time:328";
  *(_QWORD *)(v2 + 16) = HomeLimitedShopComp::isOpen;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_gm_open_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_gm_open_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_gm_open_);
  }
  if ( this->is_gm_open_ )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/home/home_limited_shop_comp.cpp",
      "isOpen",
      325);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v10, (const char (*)[19])"gm open. home uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v2 + 64) = Home::getHomeUid(this->home_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 1;
  }
  else
  {
    now = common::tools::TimeUtils::getNow();
    HomeLimitedShopCommon::getShopTime(now, (uint32_t *)(v2 + 32), (uint32_t *)(v2 + 48), (uint32_t *)(v2 + 64));
    Uid = Player::getUid(player);
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( Uid == Home::getHomeUid(this->home_) )
      v8 = *(_DWORD *)(v2 + 32);
    else
      v8 = *(_DWORD *)(v2 + 64);
    result = now >= v8;
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

// Line 343: range 0000000014588114-000000001458834C
bool __cdecl HomeLimitedShopComp::isClose(HomeLimitedShopComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // r14
  bool result; // al
  uint32_t now; // [rsp+1Ch] [rbp-B4h]
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-B0h] BYREF
  char v8[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 13 open_time:349 48 4 14 close_time:349 64 4 19 guest_open_time:349";
  *(_QWORD *)(v1 + 16) = HomeLimitedShopComp::isClose;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_gm_open_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_gm_open_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_gm_open_);
  }
  if ( this->is_gm_open_ )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/home/home_limited_shop_comp.cpp",
      "isClose",
      346);
    v4 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v7, (const char (*)[19])"gm open. home uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v1 + 64) = Home::getHomeUid(this->home_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, (const unsigned int *)(v1 + 64));
    common::milog::MiLogStream::~MiLogStream(&v7);
    result = 0;
  }
  else
  {
    now = common::tools::TimeUtils::getNow();
    HomeLimitedShopCommon::getShopTime(now, (uint32_t *)(v1 + 32), (uint32_t *)(v1 + 48), (uint32_t *)(v1 + 64));
    result = now < *(_DWORD *)(v1 + 32);
  }
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
  return result;
};

// Line 356: range 000000001458834E-0000000014588893
__int64 __fastcall HomeLimitedShopComp::isBuyGoodConditionMeet(
        HomeLimitedShopComp *const this,
        Player *player,
        uint32_t goods_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  std::vector<bool>::size_type v9; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v10; // rdx
  PlayerQuestComp *QuestComp; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  unsigned int v15; // eax
  __int64 result; // rax
  bool quest_finished; // [rsp+2Bh] [rbp-125h]
  uint32_t quest_id; // [rsp+2Ch] [rbp-124h]
  std::vector<data::HomeWorldLimitShopCond>::const_iterator __for_begin; // [rsp+30h] [rbp-120h] BYREF
  std::vector<data::HomeWorldLimitShopCond>::const_iterator __for_end; // [rsp+38h] [rbp-118h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+40h] [rbp-110h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+48h] [rbp-108h] BYREF
  const data::HomeWorldLimitShopExcelConfig *goods_config_ptr; // [rsp+50h] [rbp-100h]
  const std::vector<data::HomeWorldLimitShopCond> *__for_range; // [rsp+58h] [rbp-F8h]
  const data::HomeWorldLimitShopCond *shop_cond; // [rsp+60h] [rbp-F0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+68h] [rbp-E8h]
  std::shared_ptr<Config> v28; // [rsp+70h] [rbp-E0h] BYREF
  common::milog::MiLogStream v29; // [rsp+80h] [rbp-D0h] BYREF
  char v30[176]; // [rsp+A0h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 4 12 goods_id:355 48 40 20 is_satisfied_vec:364";
  *(_QWORD *)(v3 + 16) = HomeLimitedShopComp::isBuyGoodConditionMeet;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 32) = goods_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v28);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
  goods_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldLimitShopExcelConfig(
                       &v6->design_config.txt_config_mgr.home_config_mgr,
                       *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v28);
  if ( goods_config_ptr )
  {
    std::vector<bool>::vector((std::vector<bool> *const)(v3 + 48));
    v9 = std::vector<data::HomeWorldLimitShopCond>::size(&goods_config_ptr->cond);
    std::vector<bool>::reserve((std::vector<bool> *const)(v3 + 48), v9);
    __for_range = &goods_config_ptr->cond;
    __for_begin._M_current = std::vector<data::HomeWorldLimitShopCond>::begin(&goods_config_ptr->cond)._M_current;
    __for_end._M_current = std::vector<data::HomeWorldLimitShopCond>::end(&goods_config_ptr->cond)._M_current;
    while ( __gnu_cxx::operator!=<data::HomeWorldLimitShopCond const*,std::vector<data::HomeWorldLimitShopCond>>(
              &__for_begin,
              &__for_end) )
    {
      shop_cond = __gnu_cxx::__normal_iterator<data::HomeWorldLimitShopCond const*,std::vector<data::HomeWorldLimitShopCond>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)&shop_cond->condition >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&shop_cond->condition >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( shop_cond->condition == HOMEWORLD_LIMIT_SHOP_COND_TYPE_QUEST_FINISH )
      {
        quest_finished = 0;
        __for_range_0 = &shop_cond->condition_param;
        __for_begin_0._M_current = std::vector<unsigned int>::begin(&shop_cond->condition_param)._M_current;
        __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
        {
          v10 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
          if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          quest_id = *v10;
          QuestComp = Player::getQuestComp(player);
          if ( PlayerQuestComp::getQuestState(QuestComp, quest_id) == QUEST_STATE_FINISHED )
          {
            quest_finished = 1;
            break;
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
        }
        if ( !quest_finished )
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/home/home_limited_shop_comp.cpp",
            "isBuyGoodConditionMeet",
            385);
          v12 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
                  &v29,
                  (const char (*)[68])"player did not satisfy pre-quest condition to buy goods. goods id: ");
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v12,
                  (const unsigned int *)(v3 + 32));
          v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])"player: ");
          operator<<(v14, player);
          common::milog::MiLogStream::~MiLogStream(&v29);
        }
        std::vector<bool>::push_back((std::vector<bool> *const)(v3 + 48), quest_finished);
      }
      else
      {
        std::vector<bool>::push_back((std::vector<bool> *const)(v3 + 48), 1);
      }
      __gnu_cxx::__normal_iterator<data::HomeWorldLimitShopCond const*,std::vector<data::HomeWorldLimitShopCond>>::operator++(&__for_begin);
    }
    LOBYTE(v15) = CommonMiscs::evaluateLogicComb(LOGIC_AND, (const std::vector<bool> *)(v3 + 48));
    v8 = v15;
    std::vector<bool>::~vector((std::vector<bool> *const)(v3 + 48));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_limited_shop_comp.cpp",
      "isBuyGoodConditionMeet",
      360);
    v7 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v29,
           (const char (*)[51])"findHomeWorldLimitShopExcelConfig fail. goods_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v29);
    v8 = 0;
  }
  result = v8;
  if ( v30 == (char *)v3 )
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

// Line 401: range 0000000014588894-0000000014589948
int32_t __cdecl HomeLimitedShopComp::buyGoods(
        HomeLimitedShopComp *const this,
        Player *player,
        const proto::HomeLimitedShopGoods *buy_goods_info,
        uint32_t buy_count)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  PlayerBasicComp *BasicComp; // rax
  int32_t v8; // r14d
  FeatureSwitchMgr *p_feature_switch_mgr; // r14
  const proto::ItemParam *v10; // rax
  uint32_t v11; // eax
  common::milog::MiLogStream *v12; // r14
  const proto::ItemParam *v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  uint32_t v17; // ecx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  PlayerShopComp *ShopComp; // rcx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  uint32_t Uid; // edx
  uint32_t buy_limit; // ecx
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLimitedShopBuy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // r14
  uint32_t HomeUid; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLimitedShopBuy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLimitedShopBuy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLimitedShopBuy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLimitedShopBuy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  PlayerWatcherComp *WatcherComp; // r14
  uint32_t v41; // eax
  int32_t result; // eax
  std::string v43; // [rsp+0h] [rbp-220h]
  uint32_t buy_counta; // [rsp+4h] [rbp-21Ch]
  const proto::HomeLimitedShopGoods *buy_goods_infoa; // [rsp+8h] [rbp-218h]
  Player *playera; // [rsp+10h] [rbp-210h]
  HomeLimitedShopComp *thisa; // [rsp+18h] [rbp-208h]
  uint32_t cost_home_coin; // [rsp+28h] [rbp-1F8h]
  int retcode; // [rsp+2Ch] [rbp-1F4h]
  int32_t ret; // [rsp+30h] [rbp-1F0h]
  uint32_t last_count; // [rsp+34h] [rbp-1ECh]
  std::vector<data::IdCountConfig>::const_iterator __for_begin; // [rsp+38h] [rbp-1E8h] BYREF
  const data::HomeWorldLimitShopExcelConfig *goods_config_ptr; // [rsp+40h] [rbp-1E0h]
  GoodsInfo *goods_info; // [rsp+48h] [rbp-1D8h]
  const std::vector<data::IdCountConfig> *__for_range; // [rsp+50h] [rbp-1D0h]
  PlayerItemComp *item_comp; // [rsp+58h] [rbp-1C8h]
  const std::vector<data::IdCountConfig> *__for_range_0; // [rsp+60h] [rbp-1C0h]
  const data::IdCountConfig *id_count_config_0; // [rsp+68h] [rbp-1B8h]
  const data::IdCountConfig *id_count_config; // [rsp+70h] [rbp-1B0h]
  std::vector<data::IdCountConfig>::const_iterator __for_end; // [rsp+78h] [rbp-1A8h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+80h] [rbp-1A0h] BYREF
  std::string v62; // [rsp+90h] [rbp-190h] BYREF
  char v63[368]; // [rsp+B0h] [rbp-170h] BYREF

  *(&v43._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v43._anon_0._M_allocated_capacity = (std::string::size_type)player;
  v43._M_string_length = (std::string::size_type)buy_goods_info;
  HIDWORD(v43._M_dataplus._M_p) = buy_count;
  v4 = (unsigned __int64)v63;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(320LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 48 1 10 holder:402 64 4 12 goods_id:423 80 4 16 disable_type:441 96 16 14 item_param:470 128 1"
                        "6 11 log_ptr:498 160 16 14 item_param:457 192 24 23 cost_item_param_vec:454 256 24 10 reason:469";
  *(_QWORD *)(v4 + 16) = HomeLimitedShopComp::buyGoods;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234556924;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = -234881024;
  v6[536862727] = -218959118;
  v6[536862728] = -218103808;
  v6[536862729] = -202116109;
  BasicComp = Player::getBasicComp(player);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v62, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0xCBDu, v43);
  std::string::~string(&v62);
  if ( !HomeLimitedShopComp::isOpen(thisa, playera) )
  {
    v8 = 9761;
  }
  else if ( buy_counta )
  {
    HomeLimitedShopComp::checkRefreshTime(thisa);
    retcode = HomeLimitedShopComp::checkGoodsInfo(thisa, buy_goods_infoa);
    if ( retcode )
    {
      v8 = retcode;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v4 + 160));
      p_feature_switch_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160))->feature_switch_mgr;
      v10 = proto::HomeLimitedShopGoods::goods_item(buy_goods_infoa);
      v11 = proto::ItemParam::item_id(v10);
      LOBYTE(p_feature_switch_mgr) = FeatureSwitchMgr::isItemClosed(p_feature_switch_mgr, v11);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 160));
      if ( (_BYTE)p_feature_switch_mgr )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v62,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/home/home_limited_shop_comp.cpp",
          "buyGoods",
          420);
        v12 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                (common::milog::MiLogStream *const)&v62,
                (const char (*)[40])"[FEATURE_SWITCH] isItemClosed item_id: ");
        v13 = proto::HomeLimitedShopGoods::goods_item(buy_goods_infoa);
        *(_DWORD *)(v4 + 80) = proto::ItemParam::item_id(v13);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v62);
        v8 = 142;
      }
      else
      {
        *(_DWORD *)(v4 + 64) = proto::HomeLimitedShopGoods::goods_id(buy_goods_infoa);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v4 + 160));
        v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        goods_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldLimitShopExcelConfig(
                             &v14->design_config.txt_config_mgr.home_config_mgr,
                             *(_DWORD *)(v4 + 64));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 160));
        if ( goods_config_ptr )
        {
          if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,GoodsInfo>,unsigned int>(
                  &thisa->goods_info_map_,
                  (const unsigned int *)(v4 + 64)) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v62,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/home/home_limited_shop_comp.cpp",
              "buyGoods",
              432);
            v16 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                    (common::milog::MiLogStream *const)&v62,
                    (const char (*)[44])"goods_id not in goods_info_map_ . goods_id ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v4 + 64));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v62);
            v8 = -1;
          }
          else
          {
            goods_info = std::unordered_map<unsigned int,GoodsInfo>::operator[](
                           &thisa->goods_info_map_,
                           (const std::unordered_map<unsigned int,GoodsInfo>::key_type *)(v4 + 64));
            if ( *(_BYTE *)(((unsigned __int64)&goods_info->num >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)goods_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_info->num >> 3)
                                                                       + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v17 = goods_info->num + buy_counta;
            if ( *(_BYTE *)(((unsigned __int64)&goods_config_ptr->buy_limit >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&goods_config_ptr->buy_limit >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            if ( v17 <= goods_config_ptr->buy_limit )
            {
              ShopComp = Player::getShopComp(playera);
              if ( *(_BYTE *)(((unsigned __int64)&goods_config_ptr->item_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)goods_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config_ptr->item_id >> 3)
                                                                                + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              *(_DWORD *)(v4 + 80) = PlayerShopComp::findGoodsDisableType(ShopComp, goods_config_ptr->item_id);
              if ( *(_DWORD *)(v4 + 80) )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&v62,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/home/home_limited_shop_comp.cpp",
                  "buyGoods",
                  444);
                v23 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                        (common::milog::MiLogStream *const)&v62,
                        (const char (*)[25])"goods disable. item_id: ");
                v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v23,
                        &goods_config_ptr->item_id);
                v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        v24,
                        (const char (*)[16])" disable type: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v25,
                  (const unsigned int *)(v4 + 80));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v62);
                v8 = -1;
              }
              else if ( (unsigned __int8)HomeLimitedShopComp::isBuyGoodConditionMeet(
                                           thisa,
                                           playera,
                                           *(_DWORD *)(v4 + 64)) != 1 )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&v62,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/home/home_limited_shop_comp.cpp",
                  "buyGoods",
                  450);
                v26 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                        (common::milog::MiLogStream *const)&v62,
                        (const char (*)[59])"player did not satisfy conditions to buy goods. goods id: ");
                v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v26,
                        (const unsigned int *)(v4 + 64));
                v28 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v27, (const char (*)[9])"player: ");
                operator<<(v28, playera);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v62);
                v8 = -1;
              }
              else
              {
                std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v4 + 192));
                __for_range = &goods_config_ptr->cost_items;
                __for_begin._M_current = std::vector<data::IdCountConfig>::begin(&goods_config_ptr->cost_items)._M_current;
                __for_end._M_current = std::vector<data::IdCountConfig>::end(&goods_config_ptr->cost_items)._M_current;
                while ( __gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
                          &__for_begin,
                          &__for_end) )
                {
                  id_count_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*(&__for_begin);
                  *(_DWORD *)(v4 + 160) = 0;
                  *(_DWORD *)(v4 + 164) = 0;
                  *(_DWORD *)(v4 + 168) = 0;
                  *(_DWORD *)(v4 + 172) = 0;
                  ItemParam::fromIdCountConfig((ItemParam *const)(v4 + 160), id_count_config);
                  *(_DWORD *)(v4 + 164) *= buy_counta;
                  std::vector<ItemParam>::push_back(
                    (std::vector<ItemParam> *const)(v4 + 192),
                    (const std::vector<ItemParam>::value_type *)(v4 + 160));
                  __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++(&__for_begin);
                }
                item_comp = Player::getItemComp(playera);
                if ( PlayerItemComp::checkSubItemBatch(item_comp, (const std::vector<ItemParam> *)(v4 + 192)) )
                {
                  v8 = 609;
                }
                else
                {
                  ActionReason::ActionReason(
                    (ActionReason *const)(v4 + 256),
                    ACTION_REASON_HOME_LIMITED_SHOP_BUY,
                    ITEM_LIMIT_UNLIMITED);
                  *(_DWORD *)(v4 + 96) = 0;
                  *(_DWORD *)(v4 + 100) = 0;
                  *(_DWORD *)(v4 + 104) = 0;
                  *(_DWORD *)(v4 + 108) = 0;
                  if ( *(_BYTE *)(((unsigned __int64)&goods_config_ptr->item_id >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)goods_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config_ptr->item_id >> 3)
                                                                                    + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  *(_DWORD *)(v4 + 96) = goods_config_ptr->item_id;
                  *(_DWORD *)(v4 + 100) = buy_counta;
                  ret = PlayerItemComp::checkAddItem(
                          item_comp,
                          (const ItemParam *)(v4 + 96),
                          (const ActionReason *)(v4 + 256));
                  if ( ret )
                  {
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)&v62,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/home/home_limited_shop_comp.cpp",
                      "buyGoods",
                      477);
                    v29 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                            (common::milog::MiLogStream *const)&v62,
                            (const char (*)[19])off_2540AAA0);
                    v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v29,
                            (const unsigned int *)(v4 + 96));
                    v31 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                            v30,
                            (const char (*)[9])" player:");
                    operator<<(v31, playera);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v62);
                    v8 = ret;
                  }
                  else
                  {
                    SubItemReason::SubItemReason((SubItemReason *const)&__for_end, (const ActionReason *)(v4 + 256));
                    PlayerItemComp::subItemBatch(
                      item_comp,
                      (const std::vector<ItemParam> *)(v4 + 192),
                      (const SubItemReason *)&__for_end);
                    if ( *(_BYTE *)(((unsigned __int64)&goods_info->num >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)goods_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_info->num >> 3)
                                                                               + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    goods_info->num += buy_counta;
                    PlayerItemComp::addItem(
                      item_comp,
                      (const ItemParam *)(v4 + 96),
                      (const ActionReason *)(v4 + 256),
                      0LL);
                    Uid = Player::getUid(playera);
                    HomeLimitedShopComp::notifyGoodsInfo(thisa, *(_DWORD *)(v4 + 64), Uid);
                    cost_home_coin = 0;
                    __for_range_0 = &goods_config_ptr->cost_items;
                    __for_begin._M_current = std::vector<data::IdCountConfig>::begin(&goods_config_ptr->cost_items)._M_current;
                    __for_end._M_current = std::vector<data::IdCountConfig>::end(__for_range_0)._M_current;
                    while ( __gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
                              &__for_begin,
                              &__for_end) )
                    {
                      id_count_config_0 = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*(&__for_begin);
                      if ( *(_BYTE *)(((unsigned __int64)&id_count_config_0->id >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)&id_count_config_0->id >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_load4();
                      }
                      if ( id_count_config_0->id == 204 )
                      {
                        if ( *(_BYTE *)(((unsigned __int64)&id_count_config_0->count >> 3) + 0x7FFF8000) != 0
                          && (char)((((_BYTE)id_count_config_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&id_count_config_0->count >> 3)
                                                                                           + 0x7FFF8000) )
                        {
                          __asan_report_load4();
                        }
                        cost_home_coin += id_count_config_0->count;
                      }
                      __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++(&__for_begin);
                    }
                    if ( *(_BYTE *)(((unsigned __int64)&goods_config_ptr->buy_limit >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&goods_config_ptr->buy_limit >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4();
                    }
                    buy_limit = goods_config_ptr->buy_limit;
                    if ( *(_BYTE *)(((unsigned __int64)&goods_info->num >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)goods_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_info->num >> 3)
                                                                               + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    last_count = buy_limit - goods_info->num;
                    common::tools::perf::make_shared<proto_log::PlayerLogBodyHomeLimitedShopBuy>();
                    v34 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLimitedShopBuy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLimitedShopBuy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                    if ( *(_BYTE *)(((unsigned __int64)&thisa->home_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    HomeUid = Home::getHomeUid(thisa->home_);
                    proto_log::PlayerLogBodyHomeLimitedShopBuy::set_uid(v34, HomeUid);
                    v36 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLimitedShopBuy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLimitedShopBuy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                    proto_log::PlayerLogBodyHomeLimitedShopBuy::set_goods_id(v36, *(_DWORD *)(v4 + 64));
                    v37 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLimitedShopBuy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLimitedShopBuy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                    proto_log::PlayerLogBodyHomeLimitedShopBuy::set_buy_count(v37, buy_counta);
                    v38 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLimitedShopBuy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLimitedShopBuy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                    proto_log::PlayerLogBodyHomeLimitedShopBuy::set_cost_home_coin(v38, cost_home_coin);
                    v39 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLimitedShopBuy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLimitedShopBuy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                    proto_log::PlayerLogBodyHomeLimitedShopBuy::set_last_count(v39, last_count);
                    std::shared_ptr<google::protobuf::Message>::shared_ptr(
                      (std::shared_ptr<google::protobuf::Message> *const)(v4 + 160),
                      0LL);
                    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyHomeLimitedShopBuy,void>(
                      &p_body_ptr,
                      (const std::shared_ptr<proto_log::PlayerLogBodyHomeLimitedShopBuy> *)(v4 + 128));
                    Player::printStatLog(playera, &p_body_ptr, (MessagePtr *)(v4 + 160), 0xEu);
                    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
                    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v4 + 160));
                    std::shared_ptr<proto_log::PlayerLogBodyHomeLimitedShopBuy>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyHomeLimitedShopBuy> *const)(v4 + 128));
                    WatcherComp = Player::getWatcherComp(playera);
                    if ( *(_BYTE *)(((unsigned __int64)&thisa->home_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    v41 = Home::getHomeUid(thisa->home_);
                    PlayerWatcherComp::triggerHomeLimitedShopBuy(WatcherComp, v41, buy_counta);
                    v8 = 0;
                  }
                }
                std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v4 + 192));
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&v62,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/home/home_limited_shop_comp.cpp",
                "buyGoods",
                438);
              v18 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                      (common::milog::MiLogStream *const)&v62,
                      (const char (*)[17])"goods_info.num: ");
              v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &goods_info->num);
              v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])"  >= ");
              v21 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                      v20,
                      (const char (*)[30])"goods_config_ptr->buy_limit: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &goods_config_ptr->buy_limit);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v62);
              v8 = -1;
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v62,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/home/home_limited_shop_comp.cpp",
            "buyGoods",
            427);
          v15 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                  (common::milog::MiLogStream *const)&v62,
                  (const char (*)[51])"findHomeWorldLimitShopExcelConfig fail. goods_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v62);
          v8 = 5;
        }
      }
    }
  }
  else
  {
    v8 = -1;
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
  result = v8;
  if ( v63 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 512: range 000000001458994A-000000001458A44E
int32_t __cdecl HomeLimitedShopComp::checkGoodsInfo(
        HomeLimitedShopComp *const this,
        const proto::HomeLimitedShopGoods *buy_goods_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  uint32_t num; // r14d
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  const proto::ItemParam *v11; // rax
  google::protobuf::uint32 v12; // ecx
  common::milog::MiLogStream *v13; // r14
  const proto::ItemParam *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  const proto::ItemParam *v18; // rax
  common::milog::MiLogStream *v19; // r12
  const proto::ItemParam *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  google::protobuf::uint32 v24; // ecx
  common::milog::MiLogStream *v25; // r12
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  __int64 v29; // r12
  common::milog::MiLogStream *v30; // r12
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r12
  common::milog::MiLogStream *v33; // rax
  const google::protobuf::RepeatedPtrField<proto::ItemParam> *v34; // rax
  google::protobuf::uint32 v35; // ecx
  google::protobuf::uint32 v36; // ecx
  char v37; // al
  common::milog::MiLogStream *v38; // r12
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // r12
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  unsigned int v45; // [rsp+18h] [rbp-D8h] BYREF
  unsigned int val; // [rsp+1Ch] [rbp-D4h] BYREF
  unsigned __int64 v47; // [rsp+20h] [rbp-D0h] BYREF
  size_t i; // [rsp+28h] [rbp-C8h]
  GoodsInfo *goods_info; // [rsp+30h] [rbp-C0h]
  const data::HomeWorldLimitShopExcelConfig *goods_config_ptr; // [rsp+38h] [rbp-B8h]
  const proto::ItemParam *proto_cost_item; // [rsp+40h] [rbp-B0h]
  const data::IdCountConfig *config_cost_item; // [rsp+48h] [rbp-A8h]
  std::shared_ptr<Config> v53; // [rsp+50h] [rbp-A0h] BYREF
  common::milog::MiLogStream v54; // [rsp+60h] [rbp-90h] BYREF
  char v55[112]; // [rsp+80h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 goods_id:513";
  *(_QWORD *)(v2 + 16) = HomeLimitedShopComp::checkGoodsInfo;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = proto::HomeLimitedShopGoods::goods_id(buy_goods_info);
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,GoodsInfo>,unsigned int>(
          &this->goods_info_map_,
          (const unsigned int *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v54,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/home/home_limited_shop_comp.cpp",
      "checkGoodsInfo",
      516);
    v5 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v54,
           (const char (*)[44])"goods_id not in goods_info_map_ . goods_id ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v54);
    result = -1;
  }
  else
  {
    goods_info = std::unordered_map<unsigned int,GoodsInfo>::operator[](
                   &this->goods_info_map_,
                   (const std::unordered_map<unsigned int,GoodsInfo>::key_type *)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&goods_info->num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)goods_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_info->num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    num = goods_info->num;
    if ( num == proto::HomeLimitedShopGoods::bought_num(buy_goods_info) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v53);
      v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v53);
      goods_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldLimitShopExcelConfig(
                           &v9->design_config.txt_config_mgr.home_config_mgr,
                           *(_DWORD *)(v2 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v53);
      if ( goods_config_ptr )
      {
        v11 = proto::HomeLimitedShopGoods::goods_item(buy_goods_info);
        v12 = proto::ItemParam::item_id(v11);
        if ( *(_BYTE *)(((unsigned __int64)&goods_config_ptr->item_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)goods_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config_ptr->item_id >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( v12 == goods_config_ptr->item_id )
        {
          v18 = proto::HomeLimitedShopGoods::goods_item(buy_goods_info);
          if ( proto::ItemParam::count(v18) == 1 )
          {
            v24 = proto::HomeLimitedShopGoods::buy_limit(buy_goods_info);
            if ( *(_BYTE *)(((unsigned __int64)&goods_config_ptr->buy_limit >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&goods_config_ptr->buy_limit >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            if ( v24 == goods_config_ptr->buy_limit )
            {
              v29 = proto::HomeLimitedShopGoods::cost_item_list_size(buy_goods_info);
              if ( v29 == std::vector<data::IdCountConfig>::size(&goods_config_ptr->cost_items) )
              {
                for ( i = 0LL; i < proto::HomeLimitedShopGoods::cost_item_list_size(buy_goods_info); ++i )
                {
                  v34 = proto::HomeLimitedShopGoods::cost_item_list(buy_goods_info);
                  proto_cost_item = google::protobuf::RepeatedPtrField<proto::ItemParam>::operator[](v34, i);
                  config_cost_item = std::vector<data::IdCountConfig>::operator[](&goods_config_ptr->cost_items, i);
                  v35 = proto::ItemParam::item_id(proto_cost_item);
                  if ( *(_BYTE *)(((unsigned __int64)&config_cost_item->id >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&config_cost_item->id >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4();
                  }
                  if ( v35 != config_cost_item->id )
                    goto LABEL_32;
                  v36 = proto::ItemParam::count(proto_cost_item);
                  if ( *(_BYTE *)(((unsigned __int64)&config_cost_item->count >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)config_cost_item + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_cost_item->count >> 3)
                                                                                    + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  if ( v36 == config_cost_item->count )
                    v37 = 0;
                  else
LABEL_32:
                    v37 = 1;
                  if ( v37 )
                  {
                    common::milog::MiLogStream::create(
                      &v54,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/home/home_limited_shop_comp.cpp",
                      "checkGoodsInfo",
                      558);
                    v38 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                            &v54,
                            (const char (*)[32])"buy_goods_info cost_items: id: ");
                    v45 = proto::ItemParam::item_id(proto_cost_item);
                    v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &v45);
                    v40 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                            v39,
                            (const char (*)[9])" count: ");
                    val = proto::ItemParam::count(proto_cost_item);
                    v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &val);
                    v42 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                            v41,
                            (const char (*)[24])" config cost_items: id:");
                    v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v42,
                            &config_cost_item->id);
                    v44 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                            v43,
                            (const char (*)[9])" count: ");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v44,
                      &config_cost_item->count);
                    common::milog::MiLogStream::~MiLogStream(&v54);
                    result = -1;
                    goto LABEL_38;
                  }
                }
                result = 0;
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v54,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/home/home_limited_shop_comp.cpp",
                  "checkGoodsInfo",
                  549);
                v30 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                        &v54,
                        (const char (*)[37])"buy_goods_info cost_item_list_size:(");
                val = proto::HomeLimitedShopGoods::cost_item_list_size(buy_goods_info);
                v31 = common::milog::MiLogStream::operator<<<int,(int *)0>(v30, (const int *)&val);
                v32 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                        v31,
                        (const char (*)[29])") != config cost_item_size:(");
                v47 = std::vector<data::IdCountConfig>::size(&goods_config_ptr->cost_items);
                v33 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v32, &v47);
                common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v33, (const char (*)[2])")");
                common::milog::MiLogStream::~MiLogStream(&v54);
                result = -1;
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v54,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/home/home_limited_shop_comp.cpp",
                "checkGoodsInfo",
                544);
              v25 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                      &v54,
                      (const char (*)[27])"buy_goods_info buy_limit:(");
              val = proto::HomeLimitedShopGoods::buy_limit(buy_goods_info);
              v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
              v27 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                      v26,
                      (const char (*)[24])") != config buy_limit:(");
              v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v27,
                      &goods_config_ptr->buy_limit);
              common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v28, (const char (*)[2])")");
              common::milog::MiLogStream::~MiLogStream(&v54);
              result = -1;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v54,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/home/home_limited_shop_comp.cpp",
              "checkGoodsInfo",
              538);
            v19 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                    &v54,
                    (const char (*)[23])"buy_goods_info count:(");
            v20 = proto::HomeLimitedShopGoods::goods_item(buy_goods_info);
            v45 = proto::ItemParam::count(v20);
            v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &v45);
            v22 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                    v21,
                    (const char (*)[20])") != config count:(");
            val = 1;
            v23 = common::milog::MiLogStream::operator<<<int,(int *)0>(v22, (const int *)&val);
            common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v23, (const char (*)[2])")");
            common::milog::MiLogStream::~MiLogStream(&v54);
            result = -1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v54,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/home/home_limited_shop_comp.cpp",
            "checkGoodsInfo",
            533);
          v13 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  &v54,
                  (const char (*)[25])"buy_goods_info item_id:(");
          v14 = proto::HomeLimitedShopGoods::goods_item(buy_goods_info);
          val = proto::ItemParam::item_id(v14);
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
          v16 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  v15,
                  (const char (*)[22])") != config item_id:(");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])")");
          common::milog::MiLogStream::~MiLogStream(&v54);
          result = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v54,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/home/home_limited_shop_comp.cpp",
          "checkGoodsInfo",
          528);
        v10 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                &v54,
                (const char (*)[51])"findHomeWorldLimitShopExcelConfig fail. goods_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v54);
        result = 5;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v54,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/home/home_limited_shop_comp.cpp",
        "checkGoodsInfo",
        522);
      v8 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
             &v54,
             (const char (*)[48])"goods_info.num != buy_goods_info.bought_num(). ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v54);
      result = -1;
    }
  }
LABEL_38:
  if ( v55 == (char *)v2 )
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

// Line 569: range 000000001458A6C0-000000001458A790
void __cdecl HomeLimitedShopComp::notifyGoodsInfo(
        HomeLimitedShopComp *const this,
        uint32_t goods_id,
        uint32_t exlude_uid)
{
  Home *home; // r12
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+10h] [rbp-30h] BYREF
  HomeLimitedShopComp::notifyGoodsInfo::<lambda(Player&)> v6; // 0:rsi.8,8:rdx.8

  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  home = this->home_;
  v6.__goods_id = goods_id;
  v6.__exlude_uid = exlude_uid;
  v6.__this = this;
  std::function<ForeachPolicy ()(Player &)>::function<HomeLimitedShopComp::notifyGoodsInfo(unsigned int,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    v6);
  Home::foreachPlayer(home, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
};

// Line 570: range 000000001458A450-000000001458A6BE
ForeachPolicy __cdecl HomeLimitedShopComp::notifyGoodsInfo(unsigned int,unsigned int)::{lambda(Player &)#1}::operator()(
        const HomeLimitedShopComp::notifyGoodsInfo::<lambda(Player&)> *const __closure,
        Player *player)
{
  ForeachPolicy v2; // r15d
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t Uid; // ecx
  HomeLimitedShopComp *this; // r14
  proto::HomeLimitedShopGoods *v8; // rcx
  int v9; // r14d
  ForeachPolicy result; // eax
  char v11[176]; // [rsp+20h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 48 10 notify:574";
  *(_QWORD *)(v3 + 16) = HomeLimitedShopComp::notifyGoodsInfo(unsigned int,unsigned int)::{lambda(Player &)#1}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -202116109;
  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__exlude_uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)__closure + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__exlude_uid >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( Uid == __closure->__exlude_uid )
    goto LABEL_15;
  proto::HomeLimitedShopInfoChangeNotify::HomeLimitedShopInfoChangeNotify((proto::HomeLimitedShopInfoChangeNotify *const)(v3 + 48));
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this = __closure->__this;
  v8 = proto::HomeLimitedShopInfoChangeNotify::add_goods_list((proto::HomeLimitedShopInfoChangeNotify *const)(v3 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__goods_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__goods_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( HomeLimitedShopComp::fillGoodsInfo(this, player, __closure->__goods_id, v8) )
  {
    v2 = FOREACH_BREAK;
    v9 = 0;
  }
  else
  {
    Player::sendProto(player, (const google::protobuf::Message *)(v3 + 48));
    v9 = 1;
  }
  proto::HomeLimitedShopInfoChangeNotify::~HomeLimitedShopInfoChangeNotify((proto::HomeLimitedShopInfoChangeNotify *const)(v3 + 48));
  if ( v9 == 1 )
LABEL_15:
    v2 = FOREACH_CONTINUE;
  result = v2;
  if ( v11 == (char *)v3 )
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

// Line 586: range 000000001458AA68-000000001458AAF4
void __cdecl HomeLimitedShopComp::notifyAllGoodsInfo(HomeLimitedShopComp *const this)
{
  Home *home; // rbx
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  home = this->home_;
  std::function<ForeachPolicy ()(Player &)>::function<HomeLimitedShopComp::notifyAllGoodsInfo(void)::{lambda(Player &)#1},void,void>(
    &p_func,
    (HomeLimitedShopComp::notifyAllGoodsInfo::<lambda(Player&)>)this);
  Home::foreachPlayer(home, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
};

// Line 587: range 000000001458A792-000000001458AA66
ForeachPolicy __cdecl HomeLimitedShopComp::notifyAllGoodsInfo(void)::{lambda(Player &)#1}::operator()(
        const HomeLimitedShopComp::notifyAllGoodsInfo::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  HomeLimitedShopComp *this; // r14
  proto::HomeLimitedShopGoods *v6; // rcx
  ForeachPolicy v7; // r14d
  ForeachPolicy result; // eax
  std::unordered_map<unsigned int,GoodsInfo>::iterator __for_begin; // [rsp+20h] [rbp-E0h] BYREF
  std::unordered_map<unsigned int,GoodsInfo>::iterator __for_end; // [rsp+28h] [rbp-D8h] BYREF
  std::unordered_map<unsigned int,GoodsInfo> *__for_range; // [rsp+30h] [rbp-D0h]
  const std::pair<unsigned int const,GoodsInfo> *v12; // [rsp+38h] [rbp-C8h]
  std::tuple_element<0,const std::pair<unsigned int const,GoodsInfo> >::type *goods_id; // [rsp+40h] [rbp-C0h]
  std::tuple_element<1,const std::pair<unsigned int const,GoodsInfo> >::type *goods_info; // [rsp+48h] [rbp-B8h]
  char v15[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 48 10 notify:589";
  *(_QWORD *)(v2 + 16) = HomeLimitedShopComp::notifyAllGoodsInfo(void)::{lambda(Player &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  proto::HomeLimitedShopInfoChangeNotify::HomeLimitedShopInfoChangeNotify((proto::HomeLimitedShopInfoChangeNotify *const)(v2 + 48));
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __for_range = &__closure->__this->goods_info_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,GoodsInfo>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,GoodsInfo>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,GoodsInfo>,false>(&__for_begin, &__for_end) )
  {
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,GoodsInfo>,false,false>::operator*(&__for_begin);
    goods_id = std::get<0ul,unsigned int const,GoodsInfo>(v12);
    goods_info = (std::tuple_element<1,const std::pair<unsigned int const,GoodsInfo> >::type *)std::get<1ul,unsigned int const,GoodsInfo>(v12);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v6 = proto::HomeLimitedShopInfoChangeNotify::add_goods_list((proto::HomeLimitedShopInfoChangeNotify *const)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)goods_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)goods_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)goods_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( HomeLimitedShopComp::fillGoodsInfo(this, player, *goods_id, v6) )
    {
      v7 = FOREACH_BREAK;
      goto LABEL_16;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,GoodsInfo>,false,false>::operator++(&__for_begin);
  }
  Player::sendProto(player, (const google::protobuf::Message *)(v2 + 48));
  v7 = FOREACH_CONTINUE;
LABEL_16:
  proto::HomeLimitedShopInfoChangeNotify::~HomeLimitedShopInfoChangeNotify((proto::HomeLimitedShopInfoChangeNotify *const)(v2 + 48));
  result = v7;
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
  return result;
};

// Line 604: range 000000001458AAF6-000000001458B022
__int64 __fastcall HomeLimitedShopComp::fillGoodsInfo(
        HomeLimitedShopComp *const this,
        Player *player,
        uint32_t goods_id,
        proto::HomeLimitedShopGoods *goods_info)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::unordered_map<unsigned int,GoodsInfo>::mapped_type *v10; // rdx
  PlayerShopComp *ShopComp; // rcx
  uint32_t GoodsDisableType; // eax
  std::vector<data::IdCountConfig>::const_iterator __for_begin; // [rsp+28h] [rbp-C8h] BYREF
  std::vector<data::IdCountConfig>::const_iterator __for_end; // [rsp+30h] [rbp-C0h] BYREF
  const data::HomeWorldLimitShopExcelConfig *goods_config_ptr; // [rsp+38h] [rbp-B8h]
  proto::ItemParam *goods_item; // [rsp+40h] [rbp-B0h]
  const std::vector<data::IdCountConfig> *__for_range; // [rsp+48h] [rbp-A8h]
  const data::IdCountConfig *id_count_config; // [rsp+50h] [rbp-A0h]
  proto::ItemParam *goods_item_0; // [rsp+58h] [rbp-98h]
  std::shared_ptr<Config> v22; // [rsp+60h] [rbp-90h] BYREF
  common::milog::MiLogStream v23; // [rsp+70h] [rbp-80h] BYREF
  char v24[96]; // [rsp+90h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 12 goods_id:603";
  *(_QWORD *)(v4 + 16) = HomeLimitedShopComp::fillGoodsInfo;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = goods_id;
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,GoodsInfo>,unsigned int>(
          &this->goods_info_map_,
          (const unsigned int *)(v4 + 32)) )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v22);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
    goods_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldLimitShopExcelConfig(
                         &v8->design_config.txt_config_mgr.home_config_mgr,
                         *(_DWORD *)(v4 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v22);
    if ( goods_config_ptr )
    {
      proto::HomeLimitedShopGoods::set_goods_id(goods_info, *(_DWORD *)(v4 + 32));
      v10 = std::unordered_map<unsigned int,GoodsInfo>::operator[](
              &this->goods_info_map_,
              (const std::unordered_map<unsigned int,GoodsInfo>::key_type *)(v4 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v10->num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v10 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::HomeLimitedShopGoods::set_bought_num(goods_info, v10->num);
      if ( *(_BYTE *)(((unsigned __int64)&goods_config_ptr->buy_limit >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&goods_config_ptr->buy_limit >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::HomeLimitedShopGoods::set_buy_limit(goods_info, goods_config_ptr->buy_limit);
      ShopComp = Player::getShopComp(player);
      if ( *(_BYTE *)(((unsigned __int64)&goods_config_ptr->item_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)goods_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config_ptr->item_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      GoodsDisableType = PlayerShopComp::findGoodsDisableType(ShopComp, goods_config_ptr->item_id);
      proto::HomeLimitedShopGoods::set_disable_type(goods_info, GoodsDisableType);
      goods_item = proto::HomeLimitedShopGoods::mutable_goods_item(goods_info);
      if ( *(_BYTE *)(((unsigned __int64)&goods_config_ptr->item_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)goods_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config_ptr->item_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::ItemParam::set_item_id(goods_item, goods_config_ptr->item_id);
      proto::ItemParam::set_count(goods_item, 1u);
      __for_range = &goods_config_ptr->cost_items;
      __for_begin._M_current = std::vector<data::IdCountConfig>::begin(&goods_config_ptr->cost_items)._M_current;
      __for_end._M_current = std::vector<data::IdCountConfig>::end(&goods_config_ptr->cost_items)._M_current;
      while ( __gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
                &__for_begin,
                &__for_end) )
      {
        id_count_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*(&__for_begin);
        goods_item_0 = proto::HomeLimitedShopGoods::add_cost_item_list(goods_info);
        if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto::ItemParam::set_item_id(goods_item_0, id_count_config->id);
        if ( *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)id_count_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::ItemParam::set_count(goods_item_0, id_count_config->count);
        __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++(&__for_begin);
      }
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_limited_shop_comp.cpp",
        "fillGoodsInfo",
        612);
      v9 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
             &v23,
             (const char (*)[51])"findHomeWorldLimitShopExcelConfig fail. goods_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 32));
      common::milog::MiLogStream::~MiLogStream(&v23);
      result = 5LL;
    }
  }
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

// Line 634: range 000000001458B024-000000001458B13F
int32_t __cdecl HomeLimitedShopComp::fillAllGoodsInfo(
        HomeLimitedShopComp *const this,
        Player *player,
        proto::HomeLimitedShop *shop_info)
{
  proto::HomeLimitedShopGoods *v3; // rcx
  int32_t retcode; // [rsp+2Ch] [rbp-34h]
  std::unordered_map<unsigned int,GoodsInfo>::iterator __for_begin; // [rsp+30h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,GoodsInfo>::iterator __for_end; // [rsp+38h] [rbp-28h] BYREF
  std::unordered_map<unsigned int,GoodsInfo> *__for_range; // [rsp+40h] [rbp-20h]
  const std::pair<unsigned int const,GoodsInfo> *v10; // [rsp+48h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,GoodsInfo> >::type *goods_id; // [rsp+50h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,GoodsInfo> >::type *goods_info; // [rsp+58h] [rbp-8h]

  HomeLimitedShopComp::checkRefreshTime(this);
  __for_range = &this->goods_info_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,GoodsInfo>::begin(&this->goods_info_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,GoodsInfo>::end(&this->goods_info_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,GoodsInfo>,false>(&__for_begin, &__for_end) )
  {
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,GoodsInfo>,false,false>::operator*(&__for_begin);
    goods_id = std::get<0ul,unsigned int const,GoodsInfo>(v10);
    goods_info = (std::tuple_element<1,const std::pair<unsigned int const,GoodsInfo> >::type *)std::get<1ul,unsigned int const,GoodsInfo>(v10);
    v3 = proto::HomeLimitedShop::add_goods_list(shop_info);
    if ( *(_BYTE *)(((unsigned __int64)goods_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)goods_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)goods_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    retcode = HomeLimitedShopComp::fillGoodsInfo(this, player, *goods_id, v3);
    if ( retcode )
      return retcode;
    std::__detail::_Node_iterator<std::pair<unsigned int const,GoodsInfo>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 648: range 000000001458B140-000000001458B59A
void __cdecl HomeLimitedShopComp::fillShopInfo(HomeLimitedShopComp *const this, proto::HomeLimitedShopInfo *shop_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t CurModuleId; // edx
  uint32_t Now; // eax
  uint32_t HomeUid; // edx
  const data::ConfigWeekendDjinn *config_djinn_info; // [rsp+18h] [rbp-98h]
  proto::Vector *pos; // [rsp+20h] [rbp-90h]
  proto::Vector *rot; // [rsp+28h] [rbp-88h]
  char v11[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 13 open_time:652 48 4 14 close_time:652 64 4 19 guest_open_time:652";
  *(_QWORD *)(v2 + 16) = HomeLimitedShopComp::fillShopInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116348;
  HomeLimitedShopComp::checkRefreshTime(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  CurModuleId = Home::getCurModuleId(this->home_);
  config_djinn_info = HomeLimitedShopComp::getWeekendDjinnConfig(this, CurModuleId);
  Now = common::tools::TimeUtils::getNow();
  HomeLimitedShopCommon::getShopTime(Now, (uint32_t *)(v2 + 32), (uint32_t *)(v2 + 48), (uint32_t *)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  HomeUid = Home::getHomeUid(this->home_);
  proto::HomeLimitedShopInfo::set_uid(shop_info, HomeUid);
  proto::HomeLimitedShopInfo::set_next_open_time(shop_info, *(_DWORD *)(v2 + 32));
  proto::HomeLimitedShopInfo::set_next_close_time(shop_info, *(_DWORD *)(v2 + 48));
  proto::HomeLimitedShopInfo::set_next_guest_open_time(shop_info, *(_DWORD *)(v2 + 64));
  if ( config_djinn_info )
  {
    pos = proto::HomeLimitedShopInfo::mutable_djinn_pos(shop_info);
    if ( *(_BYTE *)(((unsigned __int64)&config_djinn_info->pos >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_djinn_info + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_djinn_info->pos >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::Vector::set_x(pos, config_djinn_info->pos.x);
    if ( *(_BYTE *)(((unsigned __int64)&config_djinn_info->pos.y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_djinn_info + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_djinn_info->pos.y >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::Vector::set_y(pos, config_djinn_info->pos.y);
    if ( *(_BYTE *)(((unsigned __int64)&config_djinn_info->pos.z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_djinn_info + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_djinn_info->pos.z >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::Vector::set_z(pos, config_djinn_info->pos.z);
    rot = proto::HomeLimitedShopInfo::mutable_djinn_rot(shop_info);
    if ( *(_BYTE *)(((unsigned __int64)&config_djinn_info->rot >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_djinn_info + 48) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_djinn_info->rot >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::Vector::set_x(rot, config_djinn_info->rot.x);
    if ( *(_BYTE *)(((unsigned __int64)&config_djinn_info->rot.y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_djinn_info + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_djinn_info->rot.y >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::Vector::set_y(rot, config_djinn_info->rot.y);
    if ( *(_BYTE *)(((unsigned __int64)&config_djinn_info->rot.z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_djinn_info + 56) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_djinn_info->rot.z >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::Vector::set_z(rot, config_djinn_info->rot.z);
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
};

// Line 674: range 000000001458B59C-000000001458B5AA
void __cdecl HomeLimitedShopComp::notifyShopInfo(HomeLimitedShopComp *const this, Player *player)
{
  ;
};

// Line 678: range 000000001458B5AC-000000001458B5DA
int32_t __cdecl HomeLimitedShopComp::refreshShop(HomeLimitedShopComp *const this)
{
  std::unordered_map<unsigned int,WeekendDjinnInfo>::clear(&this->djinn_pos_map_);
  HomeLimitedShopComp::refreshShopGoods(this);
  return 0;
};

// Line 685: range 000000001458B5DC-000000001458C57C
int32_t __cdecl HomeLimitedShopComp::refreshShopGoods(HomeLimitedShopComp *const this)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  HomeBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::pair<unsigned int const,unsigned int> *v14; // rax
  std::pair<unsigned int const,unsigned int> *v15; // rdx
  HomeWorldExcelConfigMgr *p_home_config_mgr; // rcx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v22; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  common::milog::MiLogStream *v24; // rax
  int v25; // r15d
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  const unsigned int *v31; // r15
  std::vector<unsigned int>::const_iterator v32; // rax
  const unsigned int *v33; // r15
  std::vector<unsigned int>::const_iterator v34; // rax
  const unsigned int *M_current; // r15
  std::vector<unsigned int>::const_iterator v36; // rax
  uint32_t *v37; // rdx
  int32_t result; // eax
  const unsigned int *__last; // [rsp+10h] [rbp-2F0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type ret_count; // [rsp+20h] [rbp-2E0h]
  uint32_t ret_counta; // [rsp+20h] [rbp-2E0h]
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-2D8h] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-2D0h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+38h] [rbp-2C8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+40h] [rbp-2C0h] BYREF
  const data::HomeworldLevelExcelConfig *level_config_ptr; // [rsp+48h] [rbp-2B8h]
  const std::unordered_map<unsigned int,unsigned int> *pool_info_ptr; // [rsp+50h] [rbp-2B0h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+58h] [rbp-2A8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *pool_id; // [rsp+60h] [rbp-2A0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+68h] [rbp-298h]
  const std::vector<unsigned int> *goods_vec_ptr; // [rsp+70h] [rbp-290h]
  std::unordered_set<unsigned int> *pool_record_set; // [rsp+78h] [rbp-288h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+80h] [rbp-280h]
  std::vector<unsigned int> *__for_range_1; // [rsp+88h] [rbp-278h]
  const data::HomeWorldLimitShopExcelConfig *goods_config_ptr; // [rsp+90h] [rbp-270h]
  std::pair<unsigned int const,unsigned int> v56; // [rsp+98h] [rbp-268h] BYREF
  std::shared_ptr<Config> v57; // [rsp+A0h] [rbp-260h] BYREF
  common::milog::MiLogStream v58; // [rsp+B0h] [rbp-250h] BYREF
  char v59[560]; // [rsp+D0h] [rbp-230h] BYREF

  v2 = (unsigned __int64)v59;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 14 home_level:688 64 4 12 goods_id:716 80 24 16 goods_id_vec:727 144 24 22 extra_goods_id"
                        "_vec:738 208 48 23 closed_goods_id_set:702 288 152 12 randomer:713";
  *(_QWORD *)(v2 + 16) = HomeLimitedShopComp::refreshShopGoods;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862723] = -218959360;
  v4[536862724] = 62194;
  v4[536862725] = -218959360;
  v4[536862726] = 62194;
  v4[536862728] = -218959118;
  v4[536862733] = -218103808;
  v4[536862734] = -202116109;
  v4[536862735] = -202116109;
  std::unordered_map<unsigned int,GoodsInfo>::clear(&this->goods_info_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Home::getBasicComp(this->home_);
  *(_DWORD *)(v2 + 48) = HomeBasicComp::getLevel(BasicComp);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v57);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v57);
  level_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeworldLevelExcelConfig(
                       &v6->design_config.txt_config_mgr.home_config_mgr,
                       *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v57);
  if ( !level_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v58,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_limited_shop_comp.cpp",
      "refreshShopGoods",
      692);
    v7 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v58,
           (const char (*)[44])"findHomeworldLevelExcelConfig fail. level: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])" uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_9:
    *(_DWORD *)(v2 + 64) = Home::getHomeUid(this->home_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v58);
    v1 = 5;
    goto LABEL_52;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v57);
  v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v57);
  pool_info_ptr = HomeWorldExcelConfigMgr::findGoodsPoolInfo(
                    &v10->design_config.txt_config_mgr.home_config_mgr,
                    *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v57);
  if ( !pool_info_ptr )
  {
    common::milog::MiLogStream::create(
      &v58,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_limited_shop_comp.cpp",
      "refreshShopGoods",
      698);
    v11 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            &v58,
            (const char (*)[32])"findGoodsPoolInfo fail. level: ");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])" uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_9;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v57);
  v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v57);
  FeatureSwitchMgr::getAllClosedHomeLimitedShopGoods((std::set<unsigned int> *)(v2 + 208), &v13->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v57);
  __for_range = pool_info_ptr;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(pool_info_ptr)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(pool_info_ptr)._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
    {
      v1 = 0;
      goto LABEL_51;
    }
    v14 = (std::pair<unsigned int const,unsigned int> *)std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    v15 = v14;
    if ( ((unsigned __int8)v14 & 7) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v14->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v14 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v14->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v14, 8LL);
    }
    v56 = *v15;
    pool_id = std::get<0ul,unsigned int const,unsigned int>(&v56);
    count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(&v56);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v57);
    p_home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v57)->design_config.txt_config_mgr.home_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)pool_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)pool_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pool_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    goods_vec_ptr = HomeWorldExcelConfigMgr::findGoodsVecByPoolID(p_home_config_mgr, *pool_id);
    std::shared_ptr<Config>::~shared_ptr(&v57);
    if ( !goods_vec_ptr )
      break;
    pool_record_set = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
                        &this->pool_record_map_,
                        pool_id);
    HomeLimitedShopGoodsRandomer::HomeLimitedShopGoodsRandomer((HomeLimitedShopGoodsRandomer *const)(v2 + 288));
    HomeLimitedShopGoodsRandomer::addExcludeID<std::unordered_set<unsigned int>>(
      (HomeLimitedShopGoodsRandomer *const)(v2 + 288),
      pool_record_set);
    HomeLimitedShopGoodsRandomer::addExcludeID<std::set<unsigned int>>(
      (HomeLimitedShopGoodsRandomer *const)(v2 + 288),
      (const std::set<unsigned int> *)(v2 + 208));
    __for_range_0 = goods_vec_ptr;
    __for_begin_0._M_current = std::vector<unsigned int>::begin(goods_vec_ptr)._M_current;
    __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
    {
      v22 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
      if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 64) = *v22;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v57);
      v23 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v57);
      goods_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldLimitShopExcelConfig(
                           &v23->design_config.txt_config_mgr.home_config_mgr,
                           *(_DWORD *)(v2 + 64));
      std::shared_ptr<Config>::~shared_ptr(&v57);
      if ( !goods_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v58,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/home/home_limited_shop_comp.cpp",
          "refreshShopGoods",
          721);
        v24 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                &v58,
                (const char (*)[51])"findHomeWorldLimitShopExcelConfig fail. goods_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v2 + 64));
        common::milog::MiLogStream::~MiLogStream(&v58);
        v1 = 5;
        v25 = 0;
        goto LABEL_48;
      }
      if ( *(_BYTE *)(((unsigned __int64)&goods_config_ptr->weight >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&goods_config_ptr->weight >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      HomeLimitedShopGoodsRandomer::addCandidateID(
        (HomeLimitedShopGoodsRandomer *const)(v2 + 288),
        *(_DWORD *)(v2 + 64),
        goods_config_ptr->weight);
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
    }
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 80));
    if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    ret_count = HomeLimitedShopGoodsRandomer::select(
                  (HomeLimitedShopGoodsRandomer *const)(v2 + 288),
                  *count,
                  (std::vector<unsigned int> *)(v2 + 80));
    if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( ret_count >= *count )
    {
      M_current = std::vector<unsigned int>::cend((const std::vector<unsigned int> *const)(v2 + 80))._M_current;
      v36._M_current = std::vector<unsigned int>::cbegin((const std::vector<unsigned int> *const)(v2 + 80))._M_current;
      std::unordered_set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
        pool_record_set,
        v36,
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
    }
    else
    {
      ret_counta = *count - ret_count;
      HomeLimitedShopGoodsRandomer::clearExcludeID((HomeLimitedShopGoodsRandomer *const)(v2 + 288));
      HomeLimitedShopGoodsRandomer::addExcludeID<std::vector<unsigned int>>(
        (HomeLimitedShopGoodsRandomer *const)(v2 + 288),
        (const std::vector<unsigned int> *)(v2 + 80));
      HomeLimitedShopGoodsRandomer::addExcludeID<std::set<unsigned int>>(
        (HomeLimitedShopGoodsRandomer *const)(v2 + 288),
        (const std::set<unsigned int> *)(v2 + 208));
      HomeLimitedShopGoodsRandomer::adjust((HomeLimitedShopGoodsRandomer *const)(v2 + 288));
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 144));
      if ( ret_counta > HomeLimitedShopGoodsRandomer::select(
                          (HomeLimitedShopGoodsRandomer *const)(v2 + 288),
                          ret_counta,
                          (std::vector<unsigned int> *)(v2 + 144)) )
      {
        common::milog::MiLogStream::create(
          &v58,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/home/home_limited_shop_comp.cpp",
          "refreshShopGoods",
          742);
        v26 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v58,
                (const char (*)[32])"goods generater fail. pool_id: ");
        v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, pool_id);
        v28 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v27, (const char (*)[8])" count:");
        v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, count);
        v30 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v29, (const char (*)[10])" exclude:");
        common::milog::MiLogStream::operator<<<unsigned int>(v30, pool_record_set);
        common::milog::MiLogStream::~MiLogStream(&v58);
      }
      __last = std::vector<unsigned int>::cend((const std::vector<unsigned int> *const)(v2 + 144))._M_current;
      v31 = std::vector<unsigned int>::cbegin((const std::vector<unsigned int> *const)(v2 + 144))._M_current;
      v32._M_current = std::vector<unsigned int>::cend((const std::vector<unsigned int> *const)(v2 + 80))._M_current;
      std::vector<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,void>(
        (std::vector<unsigned int> *const)(v2 + 80),
        v32,
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v31,
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)__last);
      std::unordered_set<unsigned int>::clear(pool_record_set);
      v33 = std::vector<unsigned int>::cend((const std::vector<unsigned int> *const)(v2 + 144))._M_current;
      v34._M_current = std::vector<unsigned int>::cbegin((const std::vector<unsigned int> *const)(v2 + 144))._M_current;
      std::unordered_set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
        pool_record_set,
        v34,
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v33);
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 144));
    }
    __for_range_1 = (std::vector<unsigned int> *)(v2 + 80);
    __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 80))._M_current;
    __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_1)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin_0,
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end_0) )
    {
      v37 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin_0);
      if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v37 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      HomeLimitedShopComp::addGoods(this, *v37);
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin_0);
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 80));
    v25 = 1;
LABEL_48:
    HomeLimitedShopGoodsRandomer::~HomeLimitedShopGoodsRandomer((HomeLimitedShopGoodsRandomer *const)(v2 + 288));
    if ( v25 != 1 )
      goto LABEL_51;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v58,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/home/home_limited_shop_comp.cpp",
    "refreshShopGoods",
    708);
  v17 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          &v58,
          (const char (*)[35])"findGoodsVecByPoolID fail. level: ");
  v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 48));
  v19 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v18, (const char (*)[11])" pool_id: ");
  v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, pool_id);
  v21 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v20, (const char (*)[7])" uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v2 + 64) = Home::getHomeUid(this->home_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v2 + 64));
  common::milog::MiLogStream::~MiLogStream(&v58);
  v1 = 5;
LABEL_51:
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 208));
LABEL_52:
  result = v1;
  if ( v59 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF803C) = 0;
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
  }
  return result;
};

// Line 767: range 000000001458C57E-000000001458C85E
__int64 __fastcall HomeLimitedShopComp::addGoods(HomeLimitedShopComp *const this, uint32_t goods_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::unordered_map<unsigned int,GoodsInfo>::mapped_type *v8; // rax
  _QWORD *v9; // rdx
  const data::HomeWorldLimitShopExcelConfig *goods_config_ptr; // [rsp+18h] [rbp-B8h]
  std::shared_ptr<Config> v11; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-A0h] BYREF
  char v13[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 goods_id:766 64 8 14 goods_info:778";
  *(_QWORD *)(v2 + 16) = HomeLimitedShopComp::addGoods;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = goods_id;
  if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,GoodsInfo>,unsigned int>(
         &this->goods_info_map_,
         (const unsigned int *)(v2 + 48)) )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v11);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
    goods_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldLimitShopExcelConfig(
                         &v6->design_config.txt_config_mgr.home_config_mgr,
                         *(_DWORD *)(v2 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v11);
    if ( goods_config_ptr )
    {
      *(_DWORD *)(v2 + 64) = 0;
      *(_DWORD *)(v2 + 68) = 0;
      *(_DWORD *)(v2 + 64) = *(_DWORD *)(v2 + 48);
      *(_DWORD *)(v2 + 68) = 0;
      v8 = std::unordered_map<unsigned int,GoodsInfo>::operator[](
             &this->goods_info_map_,
             (const std::unordered_map<unsigned int,GoodsInfo>::key_type *)(v2 + 48));
      v9 = v8;
      if ( ((unsigned __int8)v8 & 7) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v8->num + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v8 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v8->num + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v8, 8LL);
      }
      *v9 = *(_QWORD *)(v2 + 64);
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_limited_shop_comp.cpp",
        "addGoods",
        775);
      v7 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
             &v12,
             (const char (*)[51])"findHomeWorldLimitShopExcelConfig fail. goods_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v12);
      result = 5LL;
    }
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

// Line 787: range 000000001458C860-000000001458C8BC
void __cdecl HomeLimitedShopComp::syncWeekendDjinnInfo(
        HomeLimitedShopComp *const this,
        std::unordered_map<unsigned int,WeekendDjinnInfo> *djinn_pos_map)
{
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,WeekendDjinnInfo>,false>::__node_type *M_cur; // rbx
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,WeekendDjinnInfo>,false>::__node_type *v3; // rcx

  std::unordered_map<unsigned int,WeekendDjinnInfo>::clear(djinn_pos_map);
  M_cur = std::unordered_map<unsigned int,WeekendDjinnInfo>::end(&this->djinn_pos_map_)._M_cur;
  v3 = std::unordered_map<unsigned int,WeekendDjinnInfo>::begin(&this->djinn_pos_map_)._M_cur;
  std::unordered_map<unsigned int,WeekendDjinnInfo>::insert<std::__detail::_Node_iterator<std::pair<unsigned int const,WeekendDjinnInfo>,false,false>>(
    djinn_pos_map,
    (std::__detail::_Node_iterator<std::pair<unsigned int const,WeekendDjinnInfo>,false,false>)v3,
    (std::__detail::_Node_iterator<std::pair<unsigned int const,WeekendDjinnInfo>,false,false>)M_cur);
};

// Line 793: range 000000001458C8BE-000000001458CD05
void __cdecl HomeLimitedShopComp::checkDjinnInfo(HomeLimitedShopComp *const this)
{
  std::map<unsigned int,std::set<unsigned int>> *v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  const JsonConfigMgr *p_json_config_mgr; // rdi
  uint32_t index; // ecx
  uint32_t block_id; // esi
  bool v7; // r14
  HomeSceneComp *SceneComp; // rcx
  uint32_t HomeUid; // edi
  std::unordered_map<unsigned int,WeekendDjinnInfo>::iterator __for_begin; // [rsp+10h] [rbp-F0h] BYREF
  std::unordered_map<unsigned int,WeekendDjinnInfo>::iterator __for_end; // [rsp+18h] [rbp-E8h] BYREF
  std::unordered_map<unsigned int,WeekendDjinnInfo> *__for_range; // [rsp+20h] [rbp-E0h]
  std::pair<unsigned int const,WeekendDjinnInfo> *__in; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,WeekendDjinnInfo> >::type *module_id; // [rsp+30h] [rbp-D0h]
  std::tuple_element<1,std::pair<unsigned int const,WeekendDjinnInfo> >::type *djinn_info; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Config> v17; // [rsp+40h] [rbp-C0h] BYREF
  char v18[176]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = (std::map<unsigned int,std::set<unsigned int>> *)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = (std::map<unsigned int,std::set<unsigned int>> *)v2;
  }
  *(_QWORD *)v1->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v1->_M_t._M_impl._M_header._M_color = "1 48 48 20 unlock_block_map:798";
  v1->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)HomeLimitedShopComp::checkDjinnInfo;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  __for_range = &this->djinn_pos_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,WeekendDjinnInfo>::begin(&this->djinn_pos_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,WeekendDjinnInfo>::end(&this->djinn_pos_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,WeekendDjinnInfo>,false>(&__for_begin, &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,WeekendDjinnInfo>,false,false>::operator*(&__for_begin);
    module_id = std::get<0ul,unsigned int const,WeekendDjinnInfo>(__in);
    djinn_info = std::get<1ul,unsigned int const,WeekendDjinnInfo>(__in);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v17);
    p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.json_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&djinn_info->index >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)djinn_info + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&djinn_info->index >> 3) + 0x7FFF8000) )
    {
      p_json_config_mgr = (const JsonConfigMgr *)&djinn_info->index;
      __asan_report_load4();
    }
    index = djinn_info->index;
    if ( *(_BYTE *)(((unsigned __int64)&djinn_info->block_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)djinn_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&djinn_info->block_id >> 3)
                                                               + 0x7FFF8000) )
    {
      p_json_config_mgr = (const JsonConfigMgr *)&djinn_info->block_id;
      __asan_report_load4();
    }
    block_id = djinn_info->block_id;
    if ( *(_BYTE *)(((unsigned __int64)djinn_info >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)djinn_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)djinn_info >> 3) + 0x7FFF8000) )
    {
      p_json_config_mgr = (const JsonConfigMgr *)djinn_info;
      __asan_report_load4();
    }
    v7 = JsonConfigMgr::findWeekendDjinnPosConfig(p_json_config_mgr, djinn_info->scene_id, block_id, index) == 0LL;
    std::shared_ptr<Config>::~shared_ptr(&v17);
    if ( v7 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneComp = Home::getSceneComp(this->home_);
      if ( *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)module_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      HomeSceneComp::getUnlockBlockID(v1 + 1, SceneComp, *module_id);
      if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      HomeUid = Home::getHomeUid(this->home_);
      if ( *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)module_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) )
      {
        HomeUid = (unsigned int)module_id;
        __asan_report_load4();
      }
      HomeLimitedShopCommon::randomDjinnPos(*module_id, v1 + 1, HomeUid, (unsigned __int64)djinn_info);
      std::map<unsigned int,std::set<unsigned int>>::~map(v1 + 1);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,WeekendDjinnInfo>,false,false>::operator++(&__for_begin);
  }
  if ( v18 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 805: range 000000001458CD06-000000001458CFED
const WeekendDjinnInfo *__fastcall HomeLimitedShopComp::getWeekendDjinnInfo(
        HomeLimitedShopComp *const this,
        uint32_t module_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  HomeSceneComp *SceneComp; // rax
  uint32_t HomeUid; // eax
  unsigned __int64 v7; // rax
  const WeekendDjinnInfo *result; // rax
  char v9[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 13 module_id:804 48 12 14 djinn_info:812 80 48 20 unlock_block_map:813";
  *(_QWORD *)(v2 + 16) = HomeLimitedShopComp::getWeekendDjinnInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = 0x4000000;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 32) = module_id;
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,WeekendDjinnInfo>,unsigned int>(
          &this->djinn_pos_map_,
          (const unsigned int *)(v2 + 32)) )
  {
    *(_DWORD *)(v2 + 48) = 0;
    *(_DWORD *)(v2 + 52) = 0;
    *(_DWORD *)(v2 + 56) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = Home::getSceneComp(this->home_);
    HomeSceneComp::getUnlockBlockID(
      (std::map<unsigned int,std::set<unsigned int>> *)(v2 + 80),
      SceneComp,
      *(_DWORD *)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    HomeUid = Home::getHomeUid(this->home_);
    HomeLimitedShopCommon::randomDjinnPos(
      *(_DWORD *)(v2 + 32),
      (const std::map<unsigned int,std::set<unsigned int>> *)(v2 + 80),
      HomeUid,
      v2 + 48);
    v7 = (unsigned __int64)std::unordered_map<unsigned int,WeekendDjinnInfo>::operator[](
                             &this->djinn_pos_map_,
                             (const std::unordered_map<unsigned int,WeekendDjinnInfo>::key_type *)(v2 + 32));
    if ( (char)(v7 & 7) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) && *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((v7 + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((v7 + 11) & 7) >= *(_BYTE *)(((v7 + 11) >> 3) + 0x7FFF8000) )
    {
      v7 = __asan_report_store_n(v7, 12LL);
    }
    *(_QWORD *)v7 = *(_QWORD *)(v2 + 48);
    *(_DWORD *)(v7 + 8) = *(_DWORD *)(v2 + 56);
    std::map<unsigned int,std::set<unsigned int>>::~map((std::map<unsigned int,std::set<unsigned int>> *const)(v2 + 80));
  }
  result = std::unordered_map<unsigned int,WeekendDjinnInfo>::operator[](
             &this->djinn_pos_map_,
             (const std::unordered_map<unsigned int,WeekendDjinnInfo>::key_type *)(v2 + 32));
  if ( v9 == (char *)v2 )
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

// Line 822: range 000000001458CFEE-000000001458D145
const data::ConfigWeekendDjinn *__cdecl HomeLimitedShopComp::getWeekendDjinnConfig(
        HomeLimitedShopComp *const this,
        uint32_t module_id)
{
  JsonConfigMgr *p_json_config_mgr; // rdi
  uint32_t index; // ecx
  uint32_t block_id; // esi
  const data::ConfigWeekendDjinn *WeekendDjinnPosConfig; // rbx
  WeekendDjinnInfo *djinn_info; // [rsp+18h] [rbp-28h]
  std::shared_ptr<Config> v8[2]; // [rsp+20h] [rbp-20h] BYREF

  djinn_info = (WeekendDjinnInfo *)HomeLimitedShopComp::getWeekendDjinnInfo(this, module_id);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v8);
  p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v8)->design_config.json_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&djinn_info->index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)djinn_info + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&djinn_info->index >> 3) + 0x7FFF8000) )
  {
    p_json_config_mgr = (JsonConfigMgr *)&djinn_info->index;
    __asan_report_load4();
  }
  index = djinn_info->index;
  if ( *(_BYTE *)(((unsigned __int64)&djinn_info->block_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)djinn_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&djinn_info->block_id >> 3)
                                                             + 0x7FFF8000) )
  {
    p_json_config_mgr = (JsonConfigMgr *)&djinn_info->block_id;
    __asan_report_load4();
  }
  block_id = djinn_info->block_id;
  if ( *(_BYTE *)(((unsigned __int64)djinn_info >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)djinn_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)djinn_info >> 3) + 0x7FFF8000) )
  {
    p_json_config_mgr = (JsonConfigMgr *)djinn_info;
    __asan_report_load4();
  }
  WeekendDjinnPosConfig = JsonConfigMgr::findWeekendDjinnPosConfig(
                            p_json_config_mgr,
                            djinn_info->scene_id,
                            block_id,
                            index);
  std::shared_ptr<Config>::~shared_ptr(v8);
  return WeekendDjinnPosConfig;
};
