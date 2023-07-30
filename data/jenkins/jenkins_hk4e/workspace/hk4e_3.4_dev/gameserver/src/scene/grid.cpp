// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/grid.cpp

// Line 18: range 00000000131E7E4E-00000000131E7E78
void __cdecl GridEntityInfo::GridEntityInfo(GridEntityInfo *const this)
{
  std::unordered_map<unsigned int,std::weak_ptr<Entity>>::unordered_map(&this->entity_map);
  std::set<std::weak_ptr<Region>,std::owner_less<std::weak_ptr<Region>>,std::allocator<std::weak_ptr<Region>>>::set(&this->region_set);
};

// Line 18: range 00000000131E7DCE-00000000131E7DF8
void __cdecl GridEntityInfo::~GridEntityInfo(GridEntityInfo *const this)
{
  std::set<std::weak_ptr<Region>,std::owner_less<std::weak_ptr<Region>>,std::allocator<std::weak_ptr<Region>>>::~set(&this->region_set);
  std::unordered_map<unsigned int,std::weak_ptr<Entity>>::~unordered_map(&this->entity_map);
};

// Line 24: range 0000000013164DBE-0000000013164E56
void __cdecl Grid::~Grid(Grid *const this)
{
  __int64 v1; // rsi
  GridEntityInfo *entity_info_ptr; // rbx

  if ( *(_BYTE *)(((unsigned __int64)&this->entity_info_ptr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->entity_info_ptr_);
  entity_info_ptr = this->entity_info_ptr_;
  if ( entity_info_ptr )
  {
    GridEntityInfo::~GridEntityInfo(this->entity_info_ptr_);
    v1 = 104LL;
    operator delete(entity_info_ptr, 0x68uLL);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_info_ptr_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->entity_info_ptr_, v1);
  this->entity_info_ptr_ = 0LL;
  std::enable_shared_from_this<Grid>::~enable_shared_from_this(this);
};

// Line 32: range 0000000013164E58-00000000131652FF
void __cdecl Grid::accept(Grid *const this, Visitor *t)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t EntityId; // r14d
  unsigned __int64 v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> >,false,false>::pointer v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  Entity *v16; // rdx
  common::milog::MiLogStream *v17; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> >,false,false>::pointer v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::weak_ptr<Entity> >,false> __y; // [rsp+18h] [rbp-C8h] BYREF
  std::unordered_map<unsigned int,std::weak_ptr<Entity>> *entity_map; // [rsp+20h] [rbp-C0h]
  const EntityWtr *entity_wtr; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v24; // [rsp+30h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 5 it:36 64 16 13 entity_ptr:39";
  *(_QWORD *)(v2 + 16) = Grid::accept;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_info_ptr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->entity_info_ptr_);
  if ( this->entity_info_ptr_
    && !std::unordered_map<unsigned int,std::weak_ptr<Entity>>::empty(&this->entity_info_ptr_->entity_map) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->entity_info_ptr_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->entity_info_ptr_);
    entity_map = &this->entity_info_ptr_->entity_map;
    *(std::unordered_map<unsigned int,std::weak_ptr<Entity>>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::weak_ptr<Entity>>::begin(entity_map);
    while ( 1 )
    {
      __y._M_cur = std::unordered_map<unsigned int,std::weak_ptr<Entity>>::end(entity_map)._M_cur;
      if ( !std::__detail::operator!=<std::pair<unsigned int const,std::weak_ptr<Entity>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::weak_ptr<Entity> >,false> *)(v2 + 32),
              &__y) )
        break;
      entity_wtr = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> >,false,false> *const)(v2 + 32))->second;
      std::weak_ptr<Entity>::lock((const std::weak_ptr<Entity> *const)(v2 + 64));
      if ( std::operator!=<Entity>((const std::shared_ptr<Entity> *)(v2 + 64), 0LL) )
      {
        v6 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        EntityId = Entity::getEntityId(v6);
        v8 = (unsigned __int64)std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> >,false,false> *const)(v2 + 32));
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v8 >> 3) + 0x7FFF8000) <= 3 )
          v8 = __asan_report_load4(v8);
        if ( EntityId == *(_DWORD *)v8 )
        {
          std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> >,false,false> *const)(v2 + 32));
          v16 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          Entity::accept(v16, t);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/grid.cpp",
            "accept",
            44);
          v9 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                 &v24,
                 (const char (*)[39])"[GRID] entity_id not match entity_id: ");
          v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> >,false,false> *const)(v2 + 32));
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &v10->first);
          v12 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v11, (const char (*)[2])" ");
          v13 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v14 = common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v12, v13);
          v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])" grid:");
          __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::weak_ptr<Entity> >,false>::__node_type *)this;
          common::milog::MiLogStream::operator<<<void const*,(void const**)0>(v15, (const void *const *)&__y._M_cur);
          common::milog::MiLogStream::~MiLogStream(&v24);
          *(std::unordered_map<unsigned int,std::weak_ptr<Entity>>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::weak_ptr<Entity>>::erase(
                                                                                             entity_map,
                                                                                             *(std::unordered_map<unsigned int,std::weak_ptr<Entity>>::iterator *)(v2 + 32));
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/grid.cpp",
          "accept",
          55);
        v17 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v24,
                (const char (*)[34])"[GRID] entity is null entity_id: ");
        v18 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> >,false,false> *const)(v2 + 32));
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &v18->first);
        v20 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])" grid:");
        __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::weak_ptr<Entity> >,false>::__node_type *)this;
        common::milog::MiLogStream::operator<<<void const*,(void const**)0>(v20, (const void *const *)&__y._M_cur);
        common::milog::MiLogStream::~MiLogStream(&v24);
        *(std::unordered_map<unsigned int,std::weak_ptr<Entity>>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::weak_ptr<Entity>>::erase(
                                                                                           entity_map,
                                                                                           *(std::unordered_map<unsigned int,std::weak_ptr<Entity>>::iterator *)(v2 + 32));
      }
      std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v2 + 64));
    }
  }
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
};

// Line 63: range 0000000013165300-0000000013165389
void __cdecl Grid::clear(Grid *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_info_ptr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->entity_info_ptr_);
  if ( this->entity_info_ptr_ )
  {
    std::unordered_map<unsigned int,std::weak_ptr<Entity>>::clear(&this->entity_info_ptr_->entity_map);
    if ( *(_BYTE *)(((unsigned __int64)&this->entity_info_ptr_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->entity_info_ptr_);
    std::set<std::weak_ptr<Region>,std::owner_less<std::weak_ptr<Region>>,std::allocator<std::weak_ptr<Region>>>::clear(&this->entity_info_ptr_->region_set);
  }
};

// Line 73: range 000000001316538A-0000000013165DC5
int32_t __cdecl Grid::addEntity(Grid *const this, Entity *entity)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  const Coordinate *Coordinate; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  const Coordinate *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  GridEntityInfo *v20; // rax
  GridEntityInfo *v21; // r14
  GridEntityInfo *entity_info_ptr; // r14
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  GridEntityInfo *v29; // r14
  unsigned int *v30; // rcx
  std::shared_ptr<Entity> *v31; // r8
  bool v32; // r14
  common::milog::MiLogStream *v33; // rdx
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rdx
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  int v43; // r14d
  GridEntityInfo *v44; // r12
  unsigned int *v45; // rcx
  std::shared_ptr<Entity> *v46; // r8
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-CCh] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::weak_ptr<Entity> >,false> __y; // [rsp+28h] [rbp-C8h] BYREF
  std::shared_ptr<Entity> __b; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v51; // [rsp+40h] [rbp-B0h] BYREF
  char v52[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 7 iter:92 64 16 17 cur_entity_ptr:97";
  *(_QWORD *)(v3 + 16) = Grid::addEntity;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202178560;
  common::milog::MiLogStream::create(
    &v51,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/grid.cpp",
    "addEntity",
    75);
  v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
         &v51,
         (const char (*)[29])"[GRID] add entity:entity_id:");
  val = Entity::getEntityId(entity);
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
  v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])" grid:");
  __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::weak_ptr<Entity> >,false>::__node_type *)this;
  common::milog::MiLogStream::operator<<<void const*,(void const**)0>(v8, (const void *const *)&__y._M_cur);
  common::milog::MiLogStream::~MiLogStream(&v51);
  if ( Entity::isOnGrid(entity) )
  {
    common::milog::MiLogStream::create(
      &v51,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/grid.cpp",
      "addEntity",
      79);
    v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v51,
           (const char (*)[34])"[GRID] entity is on grid, entity:");
    v10 = common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v9, entity);
    v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" cur_grid:");
    Coordinate = Entity::getCoordinate(entity);
    v13 = common::milog::MiLogStream::operator<<<int,(int *)0>(v11, (const int *)Coordinate);
    v14 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v13, (const char (*)[2])",");
    v15 = Entity::getCoordinate(entity);
    v16 = common::milog::MiLogStream::operator<<<int,(int *)0>(v14, &v15->y);
    v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v16, (const char (*)[16])" and this_grid:");
    v18 = common::milog::MiLogStream::operator<<<int,(int *)0>(v17, &this->x);
    v19 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v18, (const char (*)[2])",");
    common::milog::MiLogStream::operator<<<int,(int *)0>(v19, &this->y);
    common::milog::MiLogStream::~MiLogStream(&v51);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_info_ptr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->entity_info_ptr_);
  if ( !this->entity_info_ptr_ )
  {
    v20 = (GridEntityInfo *)operator new(0x68uLL, &std::nothrow);
    v21 = v20;
    if ( v20 )
      GridEntityInfo::GridEntityInfo(v20);
    if ( *(_BYTE *)(((unsigned __int64)&this->entity_info_ptr_ >> 3) + 0x7FFF8000) )
      __asan_report_store8(&this->entity_info_ptr_, &std::nothrow);
    this->entity_info_ptr_ = v21;
    if ( !this->entity_info_ptr_ )
    {
      common::milog::MiLogStream::create(
        &v51,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/grid.cpp",
        "addEntity",
        88);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        &v51,
        (const char (*)[32])"[GRID] entity_info_ptr_ is null");
      common::milog::MiLogStream::~MiLogStream(&v51);
      v2 = -1;
      goto LABEL_34;
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_info_ptr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->entity_info_ptr_);
  entity_info_ptr = this->entity_info_ptr_;
  val = Entity::getEntityId(entity);
  *(std::unordered_map<unsigned int,std::weak_ptr<Entity>>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,std::weak_ptr<Entity>>::find(
                                                                                     &entity_info_ptr->entity_map,
                                                                                     &val);
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_info_ptr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->entity_info_ptr_);
  __y._M_cur = std::unordered_map<unsigned int,std::weak_ptr<Entity>>::end(&this->entity_info_ptr_->entity_map)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::weak_ptr<Entity>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::weak_ptr<Entity> >,false> *)(v3 + 32),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v51,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/grid.cpp",
      "addEntity",
      96);
    v23 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            &v51,
            (const char (*)[43])"[GRID] entity already exists. this_entity:");
    v24 = common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v23, entity);
    v25 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v24, (const char (*)[7])" grid:");
    __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::weak_ptr<Entity> >,false>::__node_type *)this;
    common::milog::MiLogStream::operator<<<void const*,(void const**)0>(v25, (const void *const *)&__y._M_cur);
    common::milog::MiLogStream::~MiLogStream(&v51);
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> >,false,false> *const)(v3 + 32));
    std::weak_ptr<Entity>::lock((const std::weak_ptr<Entity> *const)(v3 + 64));
    if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v51,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/grid.cpp",
        "addEntity",
        101);
      v26 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v51,
              (const char (*)[40])"[GRID] cur_entity is null. this_entity:");
      v27 = common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v26, entity);
      v28 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v27, (const char (*)[7])" grid:");
      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::weak_ptr<Entity> >,false>::__node_type *)this;
      common::milog::MiLogStream::operator<<<void const*,(void const**)0>(v28, (const void *const *)&__y._M_cur);
      common::milog::MiLogStream::~MiLogStream(&v51);
      if ( *(_BYTE *)(((unsigned __int64)&this->entity_info_ptr_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->entity_info_ptr_);
      v29 = this->entity_info_ptr_;
      toThisPtr<Entity>((Entity *)&__b);
      val = Entity::getEntityId(entity);
      std::unordered_map<unsigned int,std::weak_ptr<Entity>>::emplace<unsigned int,std::shared_ptr<Entity>>(
        &v29->entity_map,
        &val,
        &__b,
        v30,
        v31);
      std::shared_ptr<Entity>::~shared_ptr(&__b);
    }
    else
    {
      toThisPtr<Entity>((Entity *)&__b);
      v32 = std::operator==<Entity,Entity>((const std::shared_ptr<Entity> *)(v3 + 64), &__b);
      std::shared_ptr<Entity>::~shared_ptr(&__b);
      if ( !v32 )
      {
        common::milog::MiLogStream::create(
          &v51,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/grid.cpp",
          "addEntity",
          115);
        v36 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v51,
                (const char (*)[34])"[GRID] cur_entity != this_entity.");
        v37 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v36, (const char (*)[13])" cur_entity:");
        v38 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        v39 = common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v37, v38);
        v40 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v39, (const char (*)[14])" this_entity:");
        v41 = common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v40, entity);
        v42 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v41, (const char (*)[7])" grid:");
        __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::weak_ptr<Entity> >,false>::__node_type *)this;
        common::milog::MiLogStream::operator<<<void const*,(void const**)0>(v42, (const void *const *)&__y._M_cur);
        common::milog::MiLogStream::~MiLogStream(&v51);
        v2 = -1;
        v43 = 0;
        goto LABEL_28;
      }
      common::milog::MiLogStream::create(
        &v51,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/grid.cpp",
        "addEntity",
        109);
      v33 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              &v51,
              (const char (*)[47])"[GRID] cur_entity == this_entity. this_entity:");
      v34 = common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v33, entity);
      v35 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v34, (const char (*)[7])" grid:");
      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::weak_ptr<Entity> >,false>::__node_type *)this;
      common::milog::MiLogStream::operator<<<void const*,(void const**)0>(v35, (const void *const *)&__y._M_cur);
      common::milog::MiLogStream::~MiLogStream(&v51);
    }
    v43 = 1;
LABEL_28:
    std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 64));
    if ( v43 != 1 )
      goto LABEL_34;
    goto LABEL_33;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_info_ptr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->entity_info_ptr_);
  v44 = this->entity_info_ptr_;
  toThisPtr<Entity>((Entity *)&__b);
  val = Entity::getEntityId(entity);
  std::unordered_map<unsigned int,std::weak_ptr<Entity>>::emplace<unsigned int,std::shared_ptr<Entity>>(
    &v44->entity_map,
    &val,
    &__b,
    v45,
    v46);
  std::shared_ptr<Entity>::~shared_ptr(&__b);
LABEL_33:
  Entity::setOnGrid(entity, 1);
  v2 = 0;
LABEL_34:
  result = v2;
  if ( v52 == (char *)v3 )
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

// Line 130: range 0000000013165DC6-00000000131664A6
int32_t __cdecl Grid::delEntity(Grid *const this, Entity *entity)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  GridEntityInfo *entity_info_ptr; // r14
  bool v9; // r14
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-CCh] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::weak_ptr<Entity> >,false> __y; // [rsp+18h] [rbp-C8h] BYREF
  std::shared_ptr<Entity> __b; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v27; // [rsp+30h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 8 iter:141 64 16 18 cur_entity_ptr:144";
  *(_QWORD *)(v2 + 16) = Grid::delEntity;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  common::milog::MiLogStream::create(
    &v27,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/grid.cpp",
    "delEntity",
    132);
  v5 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
         &v27,
         (const char (*)[30])"[GRID] del entity: entity_id:");
  val = Entity::getEntityId(entity);
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
  v7 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v6, (const char (*)[7])" grid:");
  __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::weak_ptr<Entity> >,false>::__node_type *)this;
  common::milog::MiLogStream::operator<<<void const*,(void const**)0>(v7, (const void *const *)&__y._M_cur);
  common::milog::MiLogStream::~MiLogStream(&v27);
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_info_ptr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->entity_info_ptr_);
  if ( !this->entity_info_ptr_ )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/grid.cpp",
      "delEntity",
      138);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v27,
      (const char (*)[32])"[GRID] entity_info_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v27);
    goto LABEL_24;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_info_ptr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->entity_info_ptr_);
  entity_info_ptr = this->entity_info_ptr_;
  val = Entity::getEntityId(entity);
  *(std::unordered_map<unsigned int,std::weak_ptr<Entity>>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::weak_ptr<Entity>>::find(
                                                                                     &entity_info_ptr->entity_map,
                                                                                     &val);
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_info_ptr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->entity_info_ptr_);
  __y._M_cur = std::unordered_map<unsigned int,std::weak_ptr<Entity>>::end(&this->entity_info_ptr_->entity_map)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::weak_ptr<Entity>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::weak_ptr<Entity> >,false> *)(v2 + 32),
         &__y) )
  {
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity> >,false,false> *const)(v2 + 32));
    std::weak_ptr<Entity>::lock((const std::weak_ptr<Entity> *const)(v2 + 64));
    toThisPtr<Entity>((Entity *)&__b);
    v9 = std::operator==<Entity,Entity>((const std::shared_ptr<Entity> *)(v2 + 64), &__b);
    std::shared_ptr<Entity>::~shared_ptr(&__b);
    if ( v9 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->entity_info_ptr_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->entity_info_ptr_);
    }
    else
    {
      if ( !std::operator==<Entity>((const std::shared_ptr<Entity> *)(v2 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/grid.cpp",
          "delEntity",
          161);
        v13 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v27,
                (const char (*)[34])"[GRID] cur_entity != this_entity.");
        v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])" cur_entity:");
        v15 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v16 = common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v14, v15);
        v17 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v16, (const char (*)[14])" this_entity:");
        v18 = common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v17, entity);
        v19 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v18, (const char (*)[7])" grid:");
        __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::weak_ptr<Entity> >,false>::__node_type *)this;
        common::milog::MiLogStream::operator<<<void const*,(void const**)0>(v19, (const void *const *)&__y._M_cur);
        common::milog::MiLogStream::~MiLogStream(&v27);
        goto LABEL_22;
      }
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/grid.cpp",
        "delEntity",
        155);
      v10 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v27,
              (const char (*)[40])"[GRID] cur_entity is null. this_entity:");
      v11 = common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v10, entity);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])" grid:");
      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::weak_ptr<Entity> >,false>::__node_type *)this;
      common::milog::MiLogStream::operator<<<void const*,(void const**)0>(v12, (const void *const *)&__y._M_cur);
      common::milog::MiLogStream::~MiLogStream(&v27);
      if ( *(_BYTE *)(((unsigned __int64)&this->entity_info_ptr_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->entity_info_ptr_);
    }
    std::unordered_map<unsigned int,std::weak_ptr<Entity>>::erase(
      &this->entity_info_ptr_->entity_map,
      *(std::unordered_map<unsigned int,std::weak_ptr<Entity>>::iterator *)(v2 + 32));
LABEL_22:
    std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v2 + 64));
    goto LABEL_24;
  }
  common::milog::MiLogStream::create(
    &v27,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/scene/grid.cpp",
    "delEntity",
    167);
  v20 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          &v27,
          (const char (*)[29])"[GRID] entity doesn't exist.");
  v21 = common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v20, entity);
  v22 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v21, (const char (*)[7])" grid:");
  __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::weak_ptr<Entity> >,false>::__node_type *)this;
  common::milog::MiLogStream::operator<<<void const*,(void const**)0>(v22, (const void *const *)&__y._M_cur);
  common::milog::MiLogStream::~MiLogStream(&v27);
LABEL_24:
  Entity::setOnGrid(entity, 0);
  result = 0;
  if ( v28 == (char *)v2 )
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

// Line 178: range 00000000131664A8-00000000131666FC
int32_t __cdecl Grid::addRegion(Grid *const this, Region *region)
{
  GridEntityInfo *v2; // rax
  GridEntityInfo *v3; // rbx
  RegionSet *p_region_set; // rbx
  std::pair<std::_Rb_tree_const_iterator<std::weak_ptr<Region> >,bool> v6; // rax
  common::milog::MiLogStream *v7; // rdx
  std::shared_ptr<Region> __r; // [rsp+10h] [rbp-50h] BYREF
  std::weak_ptr<Region> __x; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->entity_info_ptr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->entity_info_ptr_);
  if ( this->entity_info_ptr_ )
    goto LABEL_17;
  v2 = (GridEntityInfo *)operator new(0x68uLL, &std::nothrow);
  v3 = v2;
  if ( v2 )
    GridEntityInfo::GridEntityInfo(v2);
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_info_ptr_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->entity_info_ptr_, &std::nothrow);
  this->entity_info_ptr_ = v3;
  if ( this->entity_info_ptr_ )
  {
LABEL_17:
    if ( *(_BYTE *)(((unsigned __int64)&this->entity_info_ptr_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->entity_info_ptr_);
    p_region_set = &this->entity_info_ptr_->region_set;
    toThisPtr<Region>((Region *)&__r);
    std::weak_ptr<Region>::weak_ptr<Region,void>(&__x, &__r);
    v6 = std::set<std::weak_ptr<Region>,std::owner_less<std::weak_ptr<Region>>,std::allocator<std::weak_ptr<Region>>>::insert(
           p_region_set,
           &__x);
    LOBYTE(p_region_set) = !v6.second;
    std::weak_ptr<Region>::~weak_ptr(&__x);
    std::shared_ptr<Region>::~shared_ptr(&__r);
    if ( (_BYTE)p_region_set )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/grid.cpp",
        "addRegion",
        190);
      v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v10,
             (const char (*)[29])"[GRID] region already exists");
      common::milog::MiLogStream::operator<<<Region,(Region*)0>(v7, region);
      common::milog::MiLogStream::~MiLogStream(&v10);
      return -1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/grid.cpp",
      "addRegion",
      184);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v10,
      (const char (*)[32])"[GRID] entity_info_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v10);
    return -1;
  }
};

// Line 198: range 00000000131666FE-00000000131668EF
int32_t __cdecl Grid::delRegion(Grid *const this, Region *region)
{
  RegionSet *p_region_set; // rbx
  common::milog::MiLogStream *v4; // rdx
  std::shared_ptr<Region> __r; // [rsp+10h] [rbp-50h] BYREF
  std::weak_ptr<Region> __x; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v7; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->entity_info_ptr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->entity_info_ptr_);
  if ( this->entity_info_ptr_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->entity_info_ptr_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->entity_info_ptr_);
    p_region_set = &this->entity_info_ptr_->region_set;
    toThisPtr<Region>((Region *)&__r);
    std::weak_ptr<Region>::weak_ptr<Region,void>(&__x, &__r);
    LOBYTE(p_region_set) = std::set<std::weak_ptr<Region>,std::owner_less<std::weak_ptr<Region>>,std::allocator<std::weak_ptr<Region>>>::erase(
                             p_region_set,
                             &__x) == 0;
    std::weak_ptr<Region>::~weak_ptr(&__x);
    std::shared_ptr<Region>::~shared_ptr(&__r);
    if ( (_BYTE)p_region_set )
    {
      common::milog::MiLogStream::create(
        &v7,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/grid.cpp",
        "delRegion",
        206);
      v4 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             &v7,
             (const char (*)[28])"[GRID] region doesn't exist");
      common::milog::MiLogStream::operator<<<Region,(Region*)0>(v4, region);
      common::milog::MiLogStream::~MiLogStream(&v7);
      return -1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/grid.cpp",
      "delRegion",
      201);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v7,
      (const char (*)[32])"[GRID] entity_info_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v7);
    return -1;
  }
};

// Line 214: range 00000000131668F0-000000001316696E
bool __cdecl Grid::hasEntity(const Grid *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_info_ptr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->entity_info_ptr_);
  if ( !this->entity_info_ptr_ )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_info_ptr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->entity_info_ptr_);
  return !std::unordered_map<unsigned int,std::weak_ptr<Entity>>::empty(&this->entity_info_ptr_->entity_map);
};

// Line 221: range 0000000013166970-0000000013166A51
bool __cdecl Grid::isEmpty(const Grid *const this)
{
  char v2; // al

  if ( *(_BYTE *)(((unsigned __int64)&this->entity_info_ptr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->entity_info_ptr_);
  if ( !this->entity_info_ptr_ )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_info_ptr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->entity_info_ptr_);
  if ( !std::unordered_map<unsigned int,std::weak_ptr<Entity>>::empty(&this->entity_info_ptr_->entity_map) )
    goto LABEL_11;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_info_ptr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->entity_info_ptr_);
  if ( !std::set<std::weak_ptr<Region>,std::owner_less<std::weak_ptr<Region>>,std::allocator<std::weak_ptr<Region>>>::empty(&this->entity_info_ptr_->region_set) )
LABEL_11:
    v2 = 1;
  else
    v2 = 0;
  return v2 == 0;
};

// Line 231: range 0000000013166A52-0000000013166C8C
void __cdecl Grid::getAllEntity(const Grid *const this, std::set<std::shared_ptr<Entity>> *entity_set)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::unordered_map<unsigned int,std::weak_ptr<Entity>>::iterator __for_begin; // [rsp+18h] [rbp-98h] BYREF
  std::unordered_map<unsigned int,std::weak_ptr<Entity>>::iterator __for_end; // [rsp+20h] [rbp-90h] BYREF
  std::unordered_map<unsigned int,std::weak_ptr<Entity>> *tmp_entity_map; // [rsp+28h] [rbp-88h]
  std::unordered_map<unsigned int,std::weak_ptr<Entity>> *__for_range; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,std::weak_ptr<Entity> > *__in; // [rsp+38h] [rbp-78h]
  std::tuple_element<0,std::pair<unsigned int const,std::weak_ptr<Entity> > >::type *entity_id; // [rsp+40h] [rbp-70h]
  std::tuple_element<1,std::pair<unsigned int const,std::weak_ptr<Entity> > >::type *entity_wtr; // [rsp+48h] [rbp-68h]
  char v12[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 entity_ptr:237";
  *(_QWORD *)(v2 + 16) = Grid::getAllEntity;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_info_ptr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->entity_info_ptr_);
  if ( this->entity_info_ptr_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->entity_info_ptr_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->entity_info_ptr_);
    tmp_entity_map = &this->entity_info_ptr_->entity_map;
    __for_range = tmp_entity_map;
    __for_begin._M_cur = std::unordered_map<unsigned int,std::weak_ptr<Entity>>::begin(tmp_entity_map)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,std::weak_ptr<Entity>>::end(tmp_entity_map)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,std::weak_ptr<Entity>>,false>(
              &__for_begin,
              &__for_end) )
    {
      __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>,false,false>::operator*(&__for_begin);
      entity_id = std::get<0ul,unsigned int const,std::weak_ptr<Entity>>(__in);
      entity_wtr = std::get<1ul,unsigned int const,std::weak_ptr<Entity>>(__in);
      std::weak_ptr<Entity>::lock((const std::weak_ptr<Entity> *const)(v2 + 32));
      if ( std::operator!=<Entity>((const std::shared_ptr<Entity> *)(v2 + 32), 0LL) )
        std::set<std::shared_ptr<Entity>>::insert(
          entity_set,
          (const std::set<std::shared_ptr<Entity>>::value_type *)(v2 + 32));
      std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v2 + 32));
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>,false,false>::operator++(&__for_begin);
    }
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
};

// Line 245: range 0000000013166C8E-0000000013166E9A
void __cdecl Grid::getAllRegion(const Grid *const this, std::set<std::shared_ptr<Region>> *region_set)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::set<std::weak_ptr<Region>,std::owner_less<std::weak_ptr<Region> >,std::allocator<std::weak_ptr<Region> > >::iterator __for_begin; // [rsp+18h] [rbp-88h] BYREF
  std::set<std::weak_ptr<Region>,std::owner_less<std::weak_ptr<Region> >,std::allocator<std::weak_ptr<Region> > >::iterator __for_end; // [rsp+20h] [rbp-80h] BYREF
  RegionSet *tmp_region_set; // [rsp+28h] [rbp-78h]
  std::set<std::weak_ptr<Region>,std::owner_less<std::weak_ptr<Region> >,std::allocator<std::weak_ptr<Region> > > *__for_range; // [rsp+30h] [rbp-70h]
  const std::weak_ptr<Region> *region_wtr; // [rsp+38h] [rbp-68h]
  char v10[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 region_ptr:251";
  *(_QWORD *)(v2 + 16) = Grid::getAllRegion;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_info_ptr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->entity_info_ptr_);
  if ( this->entity_info_ptr_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->entity_info_ptr_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->entity_info_ptr_);
    tmp_region_set = &this->entity_info_ptr_->region_set;
    __for_range = tmp_region_set;
    __for_begin._M_node = std::set<std::weak_ptr<Region>,std::owner_less<std::weak_ptr<Region>>,std::allocator<std::weak_ptr<Region>>>::begin(tmp_region_set)._M_node;
    __for_end._M_node = std::set<std::weak_ptr<Region>,std::owner_less<std::weak_ptr<Region>>,std::allocator<std::weak_ptr<Region>>>::end(tmp_region_set)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      region_wtr = std::_Rb_tree_const_iterator<std::weak_ptr<Region>>::operator*(&__for_begin);
      std::weak_ptr<Region>::lock((const std::weak_ptr<Region> *const)(v2 + 32));
      if ( std::operator!=<Region>((const std::shared_ptr<Region> *)(v2 + 32), 0LL) )
        std::set<std::shared_ptr<Region>>::insert(
          region_set,
          (const std::set<std::shared_ptr<Region>>::value_type *)(v2 + 32));
      std::shared_ptr<Region>::~shared_ptr((std::shared_ptr<Region> *const)(v2 + 32));
      std::_Rb_tree_const_iterator<std::weak_ptr<Region>>::operator++(&__for_begin);
    }
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

// Line 259: range 0000000013166E9C-0000000013167237
int32_t __cdecl Grid::foreachRegion(Grid *const this, std::function<ForeachPolicy(Region&)> *p_func)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::set<std::weak_ptr<Region>,std::owner_less<std::weak_ptr<Region> >,std::allocator<std::weak_ptr<Region> > >::size_type v6; // rax
  int v7; // r14d
  Region *v8; // rdx
  int32_t result; // eax
  std::set<std::weak_ptr<Region>,std::owner_less<std::weak_ptr<Region> >,std::allocator<std::weak_ptr<Region> > >::iterator __for_begin; // [rsp+28h] [rbp-E8h] BYREF
  std::set<std::weak_ptr<Region>,std::owner_less<std::weak_ptr<Region> >,std::allocator<std::weak_ptr<Region> > >::iterator __for_end; // [rsp+30h] [rbp-E0h] BYREF
  RegionSet *region_set; // [rsp+38h] [rbp-D8h]
  std::set<std::weak_ptr<Region>,std::owner_less<std::weak_ptr<Region> >,std::allocator<std::weak_ptr<Region> > > *__for_range; // [rsp+40h] [rbp-D0h]
  std::vector<std::weak_ptr<Region>> *__for_range_0; // [rsp+48h] [rbp-C8h]
  std::weak_ptr<Region> *region_wtr; // [rsp+50h] [rbp-C0h]
  const std::weak_ptr<Region> *region_ptr; // [rsp+58h] [rbp-B8h]
  char v17[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 14 region_ptr:271 64 24 18 region_wtr_vec:263";
  *(_QWORD *)(v3 + 16) = Grid::foreachRegion;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_info_ptr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->entity_info_ptr_);
  if ( this->entity_info_ptr_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->entity_info_ptr_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->entity_info_ptr_);
    region_set = &this->entity_info_ptr_->region_set;
    std::vector<std::weak_ptr<Region>>::vector((std::vector<std::weak_ptr<Region>> *const)(v3 + 64));
    v6 = std::set<std::weak_ptr<Region>,std::owner_less<std::weak_ptr<Region>>,std::allocator<std::weak_ptr<Region>>>::size(region_set);
    std::vector<std::weak_ptr<Region>>::reserve((std::vector<std::weak_ptr<Region>> *const)(v3 + 64), v6);
    __for_range = region_set;
    __for_begin._M_node = std::set<std::weak_ptr<Region>,std::owner_less<std::weak_ptr<Region>>,std::allocator<std::weak_ptr<Region>>>::begin(region_set)._M_node;
    __for_end._M_node = std::set<std::weak_ptr<Region>,std::owner_less<std::weak_ptr<Region>>,std::allocator<std::weak_ptr<Region>>>::end(region_set)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      region_ptr = std::_Rb_tree_const_iterator<std::weak_ptr<Region>>::operator*(&__for_begin);
      std::vector<std::weak_ptr<Region>>::emplace_back<std::weak_ptr<Region> const&>(
        (std::vector<std::weak_ptr<Region>> *const)(v3 + 64),
        region_ptr,
        region_ptr);
      std::_Rb_tree_const_iterator<std::weak_ptr<Region>>::operator++(&__for_begin);
    }
    __for_range_0 = (std::vector<std::weak_ptr<Region>> *)(v3 + 64);
    __for_begin._M_node = (std::_Rb_tree_const_iterator<std::weak_ptr<Region> >::_Base_ptr)std::vector<std::weak_ptr<Region>>::begin((std::vector<std::weak_ptr<Region>> *const)(v3 + 64))._M_current;
    __for_end._M_node = (std::_Rb_tree_const_iterator<std::weak_ptr<Region> >::_Base_ptr)std::vector<std::weak_ptr<Region>>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<std::weak_ptr<Region> *,std::vector<std::weak_ptr<Region>>>(
              (const __gnu_cxx::__normal_iterator<std::weak_ptr<Region>*,std::vector<std::weak_ptr<Region>> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<std::weak_ptr<Region>*,std::vector<std::weak_ptr<Region>> > *)&__for_end) )
    {
      region_wtr = __gnu_cxx::__normal_iterator<std::weak_ptr<Region> *,std::vector<std::weak_ptr<Region>>>::operator*((const __gnu_cxx::__normal_iterator<std::weak_ptr<Region>*,std::vector<std::weak_ptr<Region>> > *const)&__for_begin);
      std::weak_ptr<Region>::lock((const std::weak_ptr<Region> *const)(v3 + 32));
      if ( std::operator==<Region>((const std::shared_ptr<Region> *)(v3 + 32), 0LL) )
      {
        v7 = 0;
      }
      else
      {
        v8 = std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        if ( std::function<ForeachPolicy ()(Region &)>::operator()(p_func, v8) )
        {
          v2 = 1;
          v7 = 1;
        }
        else
        {
          v7 = 2;
        }
      }
      std::shared_ptr<Region>::~shared_ptr((std::shared_ptr<Region> *const)(v3 + 32));
      if ( v7 && v7 != 2 )
        goto LABEL_24;
      __gnu_cxx::__normal_iterator<std::weak_ptr<Region> *,std::vector<std::weak_ptr<Region>>>::operator++((__gnu_cxx::__normal_iterator<std::weak_ptr<Region>*,std::vector<std::weak_ptr<Region>> > *const)&__for_begin);
    }
    v2 = 0;
LABEL_24:
    std::vector<std::weak_ptr<Region>>::~vector((std::vector<std::weak_ptr<Region>> *const)(v3 + 64));
  }
  else
  {
    v2 = 0;
  }
  result = v2;
  if ( v17 == (char *)v3 )
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
