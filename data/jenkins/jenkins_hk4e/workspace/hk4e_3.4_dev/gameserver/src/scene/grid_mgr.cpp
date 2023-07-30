// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/grid_mgr.cpp

// Line 24: range 00000000131B1FF8-00000000131B206C
void __cdecl _tls_init()
{
  if ( *(_BYTE *)(__readfsqword(0) - 10968) != 1 )
  {
    *(_BYTE *)(__readfsqword(0) - 10968) = 1;
    std::stack<std::shared_ptr<Grid>,std::vector<std::shared_ptr<Grid>>>::stack<std::vector<std::shared_ptr<Grid>>,void>((std::stack<std::shared_ptr<Grid>,std::vector<std::shared_ptr<Grid>> > *)((char *)&GridAllocator::grid_pool_stack + __readfsqword(0)));
    __cxa_thread_atexit(
      (void (__fastcall *)(void *))std::stack<std::shared_ptr<Grid>,std::vector<std::shared_ptr<Grid>>>::~stack,
      (char *)&GridAllocator::grid_pool_stack + __readfsqword(0),
      &_dso_handle);
  }
};

// Line 27: range 0000000013167238-0000000013167527
GridPtr __cdecl GridAllocator::create(GridAllocator *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  unsigned __int64 v4; // rsi
  std::stack<std::shared_ptr<Grid>,std::vector<std::shared_ptr<Grid>> > *v6; // rax
  std::shared_ptr<Grid> *v7; // rax
  std::shared_ptr<Grid> *v8; // rsi
  std::stack<std::shared_ptr<Grid>,std::vector<std::shared_ptr<Grid>> > *v9; // rax
  std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  Grid *v17; // rax
  GridPtr result; // rax
  std::shared_ptr<Grid> *v19; // [rsp+8h] [rbp-98h]
  common::milog::MiLogStream v20; // [rsp+10h] [rbp-90h] BYREF
  char v21[112]; // [rsp+30h] [rbp-70h] BYREF

  v19 = (std::shared_ptr<Grid> *)this;
  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (GridAllocator *const)64;
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 11 grid_ptr:30";
  *(_QWORD *)(v1 + 16) = GridAllocator::create;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  v4 = (unsigned __int64)&Config::grid_config.is_use_pool & 7;
  if ( *(_BYTE *)(((unsigned __int64)&Config::grid_config.is_use_pool >> 3) + 0x7FFF8000) != 0
    && (char)v4 >= *(_BYTE *)(((unsigned __int64)&Config::grid_config.is_use_pool >> 3) + 0x7FFF8000) )
  {
    this = (GridAllocator *const)&Config::grid_config.is_use_pool;
    __asan_report_load1(&Config::grid_config.is_use_pool);
  }
  if ( Config::grid_config.is_use_pool
    && (this = (GridAllocator *const)ZTWN13GridAllocator15grid_pool_stackE(this),
        !std::stack<std::shared_ptr<Grid>,std::vector<std::shared_ptr<Grid>>>::empty((const std::stack<std::shared_ptr<Grid>,std::vector<std::shared_ptr<Grid>> > *const)this)) )
  {
    v6 = (std::stack<std::shared_ptr<Grid>,std::vector<std::shared_ptr<Grid>> > *)ZTWN13GridAllocator15grid_pool_stackE(this);
    v7 = std::stack<std::shared_ptr<Grid>,std::vector<std::shared_ptr<Grid>>>::top(v6);
    v8 = std::move<std::shared_ptr<Grid> &>(v7);
    std::shared_ptr<Grid>::shared_ptr((std::shared_ptr<Grid> *const)(v1 + 32), v8);
    v9 = (std::stack<std::shared_ptr<Grid>,std::vector<std::shared_ptr<Grid>> > *)ZTWN13GridAllocator15grid_pool_stackE(v1 + 32);
    std::stack<std::shared_ptr<Grid>,std::vector<std::shared_ptr<Grid>>>::pop(v9);
    if ( std::__shared_ptr<Grid,(__gnu_cxx::_Lock_policy)2>::operator bool((const std::__shared_ptr<Grid,(__gnu_cxx::_Lock_policy)2> *const)(v1 + 32)) )
    {
      v10 = std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( !Grid::isEmpty(v10) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/grid_mgr.cpp",
          "create",
          34);
        v12 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                &v20,
                (const char (*)[19])"grid not empty, x:");
        v13 = std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        v14 = common::milog::MiLogStream::operator<<<int,(int *)0>(v12, &v13->x);
        v15 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v14, (const char (*)[4])" y:");
        v16 = std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        common::milog::MiLogStream::operator<<<int,(int *)0>(v15, &v16->y);
        common::milog::MiLogStream::~MiLogStream(&v20);
        v17 = std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        Grid::clear(v17);
      }
    }
    std::shared_ptr<Grid>::shared_ptr(v19, (std::shared_ptr<Grid> *)(v1 + 32));
    std::shared_ptr<Grid>::~shared_ptr((std::shared_ptr<Grid> *const)(v1 + 32));
  }
  else
  {
    if ( *(_WORD *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      __asan_report_store16(v19, v4);
    result = common::tools::perf::make_shared<Grid>();
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
  result._M_ptr = (std::__shared_ptr<Grid,(__gnu_cxx::_Lock_policy)2>::element_type *)v19;
  return result;
};

// Line 43: range 0000000013167528-0000000013167624
void __cdecl GridAllocator::destory(GridAllocator *const this, GridPtr *grid_ptr)
{
  void *p_is_use_pool; // rdi
  const std::stack<std::shared_ptr<Grid>,std::vector<std::shared_ptr<Grid>> > *v3; // rax
  std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rdi
  std::stack<std::shared_ptr<Grid>,std::vector<std::shared_ptr<Grid>> > *v6; // rbx
  std::shared_ptr<Grid> *v7; // rax
  std::shared_ptr<Grid> *v8; // rdx

  p_is_use_pool = grid_ptr;
  if ( !std::operator==<Grid>(grid_ptr, 0LL) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&Config::grid_config.is_use_pool >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)&Config::grid_config.is_use_pool & 7) >= *(_BYTE *)(((unsigned __int64)&Config::grid_config.is_use_pool >> 3)
                                                                             + 0x7FFF8000) )
    {
      p_is_use_pool = &Config::grid_config.is_use_pool;
      __asan_report_load1(&Config::grid_config.is_use_pool);
    }
    if ( Config::grid_config.is_use_pool )
    {
      v3 = (const std::stack<std::shared_ptr<Grid>,std::vector<std::shared_ptr<Grid>> > *)ZTWN13GridAllocator15grid_pool_stackE(p_is_use_pool);
      if ( std::stack<std::shared_ptr<Grid>,std::vector<std::shared_ptr<Grid>>>::size(v3) <= 0x270F )
      {
        v5 = std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false> *const)grid_ptr);
        if ( !Grid::isEmpty(v5) )
        {
          v5 = std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false> *const)grid_ptr);
          Grid::clear(v5);
        }
        v6 = (std::stack<std::shared_ptr<Grid>,std::vector<std::shared_ptr<Grid>> > *)ZTWN13GridAllocator15grid_pool_stackE(v5);
        v7 = std::move<std::shared_ptr<Grid> &>(grid_ptr);
        std::stack<std::shared_ptr<Grid>,std::vector<std::shared_ptr<Grid>>>::emplace<std::shared_ptr<Grid>>(v6, v7, v8);
      }
    }
    std::__shared_ptr<Grid,(__gnu_cxx::_Lock_policy)2>::reset(grid_ptr);
  }
};

// Line 61: range 0000000013167626-0000000013167969
std::string *__cdecl GridMgr::getDesc[abi:cxx11](std::string *retstr, const GridMgr *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // r14
  unsigned int SceneId; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // r14
  const char *v9; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v11; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v12; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v13; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v14; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v15; // rcx
  char v17[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 7 ostr:62";
  *(_QWORD *)(v2 + 16) = GridMgr::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "[scene_id:");
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->scene_);
  SceneId = Scene::getSceneId(this->scene_);
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, SceneId);
  v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, ",range_type:");
  if ( *(_BYTE *)(((unsigned __int64)&this->range_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->range_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->range_type_);
  }
  v9 = data::enumValToStr(this->range_type_);
  v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, v9);
  v11 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, ",length:");
  if ( *(_BYTE *)(((unsigned __int64)&this->length_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->length_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->length_);
  }
  v12 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v11, this->length_);
  v13 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v12, ",width:");
  if ( *(_BYTE *)(((unsigned __int64)&this->width_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->width_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->width_);
  }
  v14 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v13, this->width_);
  v15 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v14, ",sight_radius:");
  if ( *(_BYTE *)(((unsigned __int64)&this->sight_radius_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sight_radius_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->sight_radius_);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v15, this->sight_radius_);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
    "]");
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
  if ( v17 == (char *)v2 )
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

// Line 70: range 000000001316796A-0000000013167B55
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl GridMgr::init(GridMgr *const this, uint32_t length, uint32_t width, uint32_t sight_radius)
{
  __int64 v4; // rsi
  bool v5; // dl
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::shared_ptr<Mesh<Grid,GridAllocator> > v12; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->length_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->length_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->length_, *(_QWORD *)&length, (_BYTE)this + 24);
  }
  this->length_ = length;
  v4 = (((_BYTE)this + 28) & 7u) + 3;
  v5 = *(_BYTE *)(((unsigned __int64)&this->width_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->width_ >> 3) + 0x7FFF8000);
  if ( v5 )
    __asan_report_store4(&this->width_, v4, v5);
  this->width_ = width;
  if ( *(_BYTE *)(((unsigned __int64)&this->sight_radius_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sight_radius_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sight_radius_, v4, (_BYTE)this + 32);
  }
  this->sight_radius_ = sight_radius;
  Mesh<Grid,GridAllocator>::createMesh((int32_t)&v12, this->length_);
  std::shared_ptr<Mesh<Grid,GridAllocator>>::operator=(&this->mesh_ptr_, &v12);
  std::shared_ptr<Mesh<Grid,GridAllocator>>::~shared_ptr(&v12);
  if ( !std::operator==<Mesh<Grid,GridAllocator>>(0LL, &this->mesh_ptr_) )
    return 0;
  common::milog::MiLogStream::create(
    &v13,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/scene/grid_mgr.cpp",
    "init",
    77);
  v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
         &v13,
         (const char (*)[25])"allocMesh fails, length:");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->length_);
  v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])", width:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->width_);
  common::milog::MiLogStream::~MiLogStream(&v13);
  return -1;
};

// Line 84: range 0000000013167B56-000000001316805A
int32_t __cdecl GridMgr::placeEntity(GridMgr *const this, Entity *entity, const Coordinate *coord)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  Grid *v9; // rdx
  common::milog::MiLogStream *v10; // rdx
  unsigned __int64 v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  const Coordinate *Coordinate; // rax
  int32_t result; // eax
  unsigned int EntityId; // [rsp+24h] [rbp-BCh] BYREF
  void *v22; // [rsp+28h] [rbp-B8h] BYREF
  common::milog::MiLogStream v23; // [rsp+30h] [rbp-B0h] BYREF
  std::string val; // [rsp+50h] [rbp-90h] BYREF
  char v25[112]; // [rsp+70h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 11 grid_ptr:85";
  *(_QWORD *)(v3 + 16) = GridMgr::placeEntity;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  GridMgr::getGrid((GridMgr *const)(v3 + 32), (const Coordinate *)this);
  if ( std::operator==<Grid>(0LL, (const std::shared_ptr<Grid> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/grid_mgr.cpp",
      "placeEntity",
      88);
    v6 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v23, (const char (*)[14])"getGrid fails");
    v7 = common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v6, entity);
    Coordinate::toString[abi:cxx11](&val, coord);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v23);
    v8 = -1;
  }
  else
  {
    v9 = std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( Grid::addEntity(v9, entity) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/grid_mgr.cpp",
        "placeEntity",
        93);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)&val,
              (const char (*)[16])"addEntity fails");
      common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v10, entity);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v8 = -1;
    }
    else
    {
      Entity::setCoordinate(entity, coord);
      if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
        __asan_report_load8(entity);
      v11 = (unsigned __int64)(entity->_vptr_DescribalBase + 3);
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        v11 = __asan_report_load8(entity->_vptr_DescribalBase + 3);
      if ( (*(unsigned int (__fastcall **)(Entity *))v11)(entity) == 1 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/grid_mgr.cpp",
          "placeEntity",
          99);
        v12 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                (common::milog::MiLogStream *const)&val,
                (const char (*)[21])"[GRID] place avatar:");
        v13 = common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v12, entity);
        v14 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v13, (const char (*)[4])" @ ");
        v22 = std::__shared_ptr<Grid,(__gnu_cxx::_Lock_policy)2>::get((const std::__shared_ptr<Grid,(__gnu_cxx::_Lock_policy)2> *const)(v3 + 32));
        common::milog::MiLogStream::operator<<<void const*,(void const**)0>(v14, (const void *const *)&v22);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      }
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/grid_mgr.cpp",
        "placeEntity",
        102);
      v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v23,
              (const char (*)[22])"[FY] place entity_id:");
      EntityId = Entity::getEntityId(entity);
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &EntityId);
      v17 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v16, (const char (*)[4])" @ ");
      Coordinate = Entity::getCoordinate(entity);
      Coordinate::toString[abi:cxx11](&val, Coordinate);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v23);
      v8 = 0;
    }
  }
  std::shared_ptr<Grid>::~shared_ptr((std::shared_ptr<Grid> *const)(v3 + 32));
  result = v8;
  if ( v25 == (char *)v3 )
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

// Line 108: range 000000001316805C-00000000131684D8
int32_t __cdecl GridMgr::placeRegionEntity(
        GridMgr *const this,
        Region *region,
        const std::vector<Coordinate> *coord_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // r14
  Grid *v8; // rdx
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r12
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r12
  int32_t result; // eax
  data::VisionLevelType VisionLevelType; // [rsp+2Ch] [rbp-D4h] BYREF
  std::vector<Coordinate>::const_iterator __for_begin; // [rsp+30h] [rbp-D0h] BYREF
  std::vector<Coordinate>::const_iterator __for_end; // [rsp+38h] [rbp-C8h] BYREF
  const std::vector<Coordinate> *__for_range; // [rsp+40h] [rbp-C0h]
  const Coordinate *coord; // [rsp+48h] [rbp-B8h]
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-B0h] BYREF
  std::string val; // [rsp+70h] [rbp-90h] BYREF
  char v24[112]; // [rsp+90h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 grid_ptr:111";
  *(_QWORD *)(v3 + 16) = GridMgr::placeRegionEntity;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = coord_vec;
  __for_begin._M_current = std::vector<Coordinate>::begin(coord_vec)._M_current;
  __for_end._M_current = std::vector<Coordinate>::end(coord_vec)._M_current;
  while ( __gnu_cxx::operator!=<Coordinate const*,std::vector<Coordinate>>(&__for_begin, &__for_end) )
  {
    coord = __gnu_cxx::__normal_iterator<Coordinate const*,std::vector<Coordinate>>::operator*(&__for_begin);
    GridMgr::getGrid((GridMgr *const)(v3 + 32), (const Coordinate *)this);
    if ( std::operator==<Grid>(0LL, (const std::shared_ptr<Grid> *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/grid_mgr.cpp",
        "placeRegionEntity",
        114);
      v6 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v22, (const char (*)[14])"getGrid fails");
      v7 = common::milog::MiLogStream::operator<<<Region,(Region*)0>(v6, region);
      Coordinate::toString[abi:cxx11](&val, coord);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    else
    {
      v8 = std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( Grid::addRegion(v8, region) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/grid_mgr.cpp",
          "placeRegionEntity",
          119);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)&val,
               (const char (*)[16])"addRegion fails");
        common::milog::MiLogStream::operator<<<Region,(Region*)0>(v9, region);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      }
      if ( !Entity::isOnGrid(region) )
        Entity::setOnGrid(region, 1);
    }
    std::shared_ptr<Grid>::~shared_ptr((std::shared_ptr<Grid> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<Coordinate const*,std::vector<Coordinate>>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&val,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/grid_mgr.cpp",
    "placeRegionEntity",
    126);
  v10 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          (common::milog::MiLogStream *const)&val,
          (const char (*)[23])"[REGION] place region:");
  v11 = common::milog::MiLogStream::operator<<<Region,(Region*)0>(v10, region);
  v12 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v11, (const char (*)[15])" vision_level:");
  VisionLevelType = Entity::getVisionLevelType(region);
  v13 = common::milog::MiLogStream::operator<<<data::VisionLevelType,(data::VisionLevelType*)0>(v12, &VisionLevelType);
  v14 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v13, (const char (*)[17])" coord_vec size:");
  __for_end._M_current = (const Coordinate *)std::vector<Coordinate>::size(coord_vec);
  common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v14, (const unsigned __int64 *)&__for_end);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
  result = 0;
  if ( v24 == (char *)v3 )
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

// Line 131: range 00000000131684DA-0000000013168CA2
int32_t __cdecl GridMgr::removeEntity(GridMgr *const this, Entity *entity)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rdx
  Grid *v8; // rdx
  common::milog::MiLogStream *v9; // rdx
  unsigned __int64 v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  const Coordinate *Coordinate; // rax
  common::milog::MiLogStream *v18; // rdx
  char v19; // r14
  std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  Mesh<Grid,GridAllocator> *v21; // r15
  bool v22; // r15
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  int32_t result; // eax
  unsigned int EntityId; // [rsp+24h] [rbp-CCh] BYREF
  void *val; // [rsp+28h] [rbp-C8h] BYREF
  std::shared_ptr<Grid> p_grid_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v34; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v35; // [rsp+60h] [rbp-90h] BYREF
  char v36[112]; // [rsp+80h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 grid_ptr:137";
  *(_QWORD *)(v2 + 16) = GridMgr::removeEntity;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( !Entity::isOnGrid(entity) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/grid_mgr.cpp",
      "removeEntity",
      134);
    v5 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
           &v35,
           (const char (*)[21])"entity not on grid: ");
    common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v5, entity);
    common::milog::MiLogStream::~MiLogStream(&v35);
    v6 = 0;
  }
  else
  {
    Entity::getCoordinate(entity);
    GridMgr::findGrid((const GridMgr *const)(v2 + 32), (const Coordinate *)this);
    if ( std::operator==<Grid>(0LL, (const std::shared_ptr<Grid> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/grid_mgr.cpp",
        "removeEntity",
        140);
      v7 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             &v35,
             (const char (*)[22])"grid_ptr is nullptr: ");
      common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v7, entity);
      common::milog::MiLogStream::~MiLogStream(&v35);
      v6 = 0;
    }
    else
    {
      v8 = std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( Grid::delEntity(v8, entity) )
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/grid_mgr.cpp",
          "removeEntity",
          145);
        v9 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
               &v35,
               (const char (*)[17])"delEntity fails:");
        common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v9, entity);
        common::milog::MiLogStream::~MiLogStream(&v35);
        v6 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
          __asan_report_load8(entity);
        v10 = (unsigned __int64)(entity->_vptr_DescribalBase + 3);
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load8(entity->_vptr_DescribalBase + 3);
        if ( (*(unsigned int (__fastcall **)(Entity *))v10)(entity) == 1 )
        {
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/grid_mgr.cpp",
            "removeEntity",
            150);
          v11 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  &v35,
                  (const char (*)[22])"[GRID] remove avatar:");
          v12 = common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v11, entity);
          v13 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v12, (const char (*)[4])" @ ");
          val = std::__shared_ptr<Grid,(__gnu_cxx::_Lock_policy)2>::get((const std::__shared_ptr<Grid,(__gnu_cxx::_Lock_policy)2> *const)(v2 + 32));
          common::milog::MiLogStream::operator<<<void const*,(void const**)0>(v13, (const void *const *)&val);
          common::milog::MiLogStream::~MiLogStream(&v35);
        }
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/grid_mgr.cpp",
          "removeEntity",
          153);
        v14 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                &v34,
                (const char (*)[23])"[FY] remove entity_id:");
        EntityId = Entity::getEntityId(entity);
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &EntityId);
        v16 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v15, (const char (*)[4])" @ ");
        Coordinate = Entity::getCoordinate(entity);
        Coordinate::toString[abi:cxx11]((std::string *)&v35, Coordinate);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, (const std::string *)&v35);
        std::string::~string(&v35);
        common::milog::MiLogStream::~MiLogStream(&v34);
        if ( std::operator==<Mesh<Grid,GridAllocator>>(&this->mesh_ptr_, 0LL) )
        {
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/grid_mgr.cpp",
            "removeEntity",
            158);
          v18 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  &v35,
                  (const char (*)[25])"mesh is nullptr, entity:");
          common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v18, entity);
          common::milog::MiLogStream::~MiLogStream(&v35);
          v6 = -1;
        }
        else
        {
          v19 = 0;
          if ( *(_BYTE *)(((unsigned __int64)&Config::grid_config >> 3) + 0x7FFF8000) != 0
            && (char)((unsigned __int64)&Config::grid_config & 7) >= *(_BYTE *)(((unsigned __int64)&Config::grid_config >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load1(&Config::grid_config);
          }
          v22 = 0;
          if ( Config::grid_config.is_destory )
          {
            v20 = std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
            if ( Grid::isEmpty(v20) )
            {
              v21 = std::__shared_ptr_access<Mesh<Grid,GridAllocator>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Mesh<Grid,GridAllocator>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->mesh_ptr_);
              std::shared_ptr<Grid>::shared_ptr(&p_grid_ptr, (const std::shared_ptr<Grid> *)(v2 + 32));
              v19 = 1;
              if ( !Mesh<Grid,GridAllocator>::destoryGrid(v21, &p_grid_ptr) )
                v22 = 1;
            }
          }
          if ( v19 )
            std::shared_ptr<Grid>::~shared_ptr(&p_grid_ptr);
          if ( v22 )
          {
            common::milog::MiLogStream::create(
              &v35,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/scene/grid_mgr.cpp",
              "removeEntity",
              164);
            v23 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    &v35,
                    (const char (*)[28])"destoryGrid failed, entity:");
            v24 = common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v23, entity);
            v25 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v24, (const char (*)[4])" x:");
            v26 = std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
            v27 = common::milog::MiLogStream::operator<<<int,(int *)0>(v25, &v26->x);
            v28 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v27, (const char (*)[4])" y:");
            v29 = std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
            common::milog::MiLogStream::operator<<<int,(int *)0>(v28, &v29->y);
            common::milog::MiLogStream::~MiLogStream(&v35);
            v6 = -1;
          }
          else
          {
            v6 = 0;
          }
        }
      }
    }
    std::shared_ptr<Grid>::~shared_ptr((std::shared_ptr<Grid> *const)(v2 + 32));
  }
  result = v6;
  if ( v36 == (char *)v2 )
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

// Line 171: range 0000000013168CA4-0000000013169386
int32_t __cdecl GridMgr::removeRegionEntity(
        GridMgr *const this,
        Region *region,
        const std::vector<Coordinate> *coord_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // r14
  Grid *v8; // rdx
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rdx
  char v11; // r14
  std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  Mesh<Grid,GridAllocator> *v13; // r15
  bool v14; // r15
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r12
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r12
  int32_t result; // eax
  data::VisionLevelType VisionLevelType; // [rsp+2Ch] [rbp-E4h] BYREF
  std::vector<Coordinate>::const_iterator __for_begin; // [rsp+30h] [rbp-E0h] BYREF
  std::vector<Coordinate>::const_iterator __for_end; // [rsp+38h] [rbp-D8h] BYREF
  const std::vector<Coordinate> *__for_range; // [rsp+40h] [rbp-D0h]
  const Coordinate *coord; // [rsp+48h] [rbp-C8h]
  std::shared_ptr<Grid> p_grid_ptr; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v35; // [rsp+60h] [rbp-B0h] BYREF
  std::string val; // [rsp+80h] [rbp-90h] BYREF
  char v37[112]; // [rsp+A0h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 grid_ptr:174";
  *(_QWORD *)(v3 + 16) = GridMgr::removeRegionEntity;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = coord_vec;
  __for_begin._M_current = std::vector<Coordinate>::begin(coord_vec)._M_current;
  __for_end._M_current = std::vector<Coordinate>::end(coord_vec)._M_current;
  while ( __gnu_cxx::operator!=<Coordinate const*,std::vector<Coordinate>>(&__for_begin, &__for_end) )
  {
    coord = __gnu_cxx::__normal_iterator<Coordinate const*,std::vector<Coordinate>>::operator*(&__for_begin);
    GridMgr::getGrid((GridMgr *const)(v3 + 32), (const Coordinate *)this);
    if ( std::operator==<Grid>(0LL, (const std::shared_ptr<Grid> *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/grid_mgr.cpp",
        "removeRegionEntity",
        177);
      v6 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v35, (const char (*)[14])"getGrid fails");
      v7 = common::milog::MiLogStream::operator<<<Region,(Region*)0>(v6, region);
      Coordinate::toString[abi:cxx11](&val, coord);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v35);
    }
    else
    {
      v8 = std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( Grid::delRegion(v8, region) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/grid_mgr.cpp",
          "removeRegionEntity",
          182);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)&val,
               (const char (*)[16])"delRegion fails");
        common::milog::MiLogStream::operator<<<Region,(Region*)0>(v9, region);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      }
      if ( std::operator==<Mesh<Grid,GridAllocator>>(&this->mesh_ptr_, 0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/grid_mgr.cpp",
          "removeRegionEntity",
          187);
        v10 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                (common::milog::MiLogStream *const)&val,
                (const char (*)[25])"mesh is nullptr, entity:");
        common::milog::MiLogStream::operator<<<Region,(Region*)0>(v10, region);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      }
      else
      {
        v11 = 0;
        if ( *(_BYTE *)(((unsigned __int64)&Config::grid_config >> 3) + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&Config::grid_config & 7) >= *(_BYTE *)(((unsigned __int64)&Config::grid_config >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load1(&Config::grid_config);
        }
        v14 = 0;
        if ( Config::grid_config.is_destory )
        {
          v12 = std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
          if ( Grid::isEmpty(v12) )
          {
            v13 = std::__shared_ptr_access<Mesh<Grid,GridAllocator>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Mesh<Grid,GridAllocator>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->mesh_ptr_);
            std::shared_ptr<Grid>::shared_ptr(&p_grid_ptr, (const std::shared_ptr<Grid> *)(v3 + 32));
            v11 = 1;
            if ( !Mesh<Grid,GridAllocator>::destoryGrid(v13, &p_grid_ptr) )
              v14 = 1;
          }
        }
        if ( v11 )
          std::shared_ptr<Grid>::~shared_ptr(&p_grid_ptr);
        if ( v14 )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&val,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/grid_mgr.cpp",
            "removeRegionEntity",
            193);
          v15 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                  (common::milog::MiLogStream *const)&val,
                  (const char (*)[28])"destoryGrid failed, entity:");
          v16 = common::milog::MiLogStream::operator<<<Region,(Region*)0>(v15, region);
          v17 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v16, (const char (*)[4])" x:");
          v18 = std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
          v19 = common::milog::MiLogStream::operator<<<int,(int *)0>(v17, &v18->x);
          v20 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v19, (const char (*)[4])" y:");
          v21 = std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
          common::milog::MiLogStream::operator<<<int,(int *)0>(v20, &v21->y);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        }
      }
    }
    std::shared_ptr<Grid>::~shared_ptr((std::shared_ptr<Grid> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<Coordinate const*,std::vector<Coordinate>>::operator++(&__for_begin);
  }
  Entity::setOnGrid(region, 0);
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&val,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/grid_mgr.cpp",
    "removeRegionEntity",
    198);
  v22 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
          (common::milog::MiLogStream *const)&val,
          (const char (*)[24])"[REGION] remove region:");
  v23 = common::milog::MiLogStream::operator<<<Region,(Region*)0>(v22, region);
  v24 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v23, (const char (*)[15])" vision_level:");
  VisionLevelType = Entity::getVisionLevelType(region);
  v25 = common::milog::MiLogStream::operator<<<data::VisionLevelType,(data::VisionLevelType*)0>(v24, &VisionLevelType);
  v26 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v25, (const char (*)[17])" coord_vec size:");
  __for_end._M_current = (const Coordinate *)std::vector<Coordinate>::size(coord_vec);
  common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v26, (const unsigned __int64 *)&__for_end);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
  result = 0;
  if ( v37 == (char *)v3 )
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

// Line 203: range 0000000013169388-0000000013169BBA
int32_t __cdecl GridMgr::entityMoveTo(GridMgr *const this, Entity *entity, const Coordinate *dest_coord)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  const Coordinate *Coordinate; // rax
  _QWORD *v7; // rdx
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int32_t v11; // r14d
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  Grid *v15; // rdx
  common::milog::MiLogStream *v16; // rdx
  Grid *v17; // rdx
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rdx
  char v20; // r14
  std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  Mesh<Grid,GridAllocator> *v22; // r15
  bool v23; // r15
  common::milog::MiLogStream *v24; // rdx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  int32_t result; // eax
  std::shared_ptr<Grid> p_grid_ptr; // [rsp+20h] [rbp-100h] BYREF
  common::milog::MiLogStream v34; // [rsp+30h] [rbp-F0h] BYREF
  std::string val; // [rsp+50h] [rbp-D0h] BYREF
  char v36[176]; // [rsp+70h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 13 cur_coord:204 64 16 16 cur_grid_ptr:205 96 16 17 dest_grid_ptr:211";
  *(_QWORD *)(v3 + 16) = GridMgr::entityMoveTo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  Coordinate = Entity::getCoordinate(entity);
  v7 = Coordinate;
  if ( ((unsigned __int8)Coordinate & 7) >= *(_BYTE *)(((unsigned __int64)Coordinate >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)Coordinate >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&Coordinate->y + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)Coordinate + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&Coordinate->y + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(Coordinate, 8LL);
  }
  *(_QWORD *)(v3 + 32) = *v7;
  GridMgr::findGrid((const GridMgr *const)(v3 + 64), (const Coordinate *)this);
  if ( std::operator==<Grid>(0LL, (const std::shared_ptr<Grid> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/grid_mgr.cpp",
      "entityMoveTo",
      208);
    v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v34, (const char (*)[11])"cur_coord:");
    Coordinate::toString[abi:cxx11](&val, (const Coordinate *const)(v3 + 32));
    v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &val);
    v10 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            v9,
            (const char (*)[31])" grid doesn't exist! grid_mgr:");
    common::milog::MiLogStream::operator<<<GridMgr,(GridMgr*)0>(v10, this);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v34);
    v11 = -1;
  }
  else
  {
    GridMgr::getGrid((GridMgr *const)(v3 + 96), (const Coordinate *)this);
    if ( std::operator==<Grid>(0LL, (const std::shared_ptr<Grid> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/grid_mgr.cpp",
        "entityMoveTo",
        214);
      v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v34, (const char (*)[12])"dest_coord:");
      Coordinate::toString[abi:cxx11](&val, dest_coord);
      v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, &val);
      v14 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              v13,
              (const char (*)[31])" grid doesn't exist! grid_mgr:");
      common::milog::MiLogStream::operator<<<GridMgr,(GridMgr*)0>(v14, this);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v34);
      v11 = -1;
    }
    else if ( std::operator==<Grid,Grid>(
                (const std::shared_ptr<Grid> *)(v3 + 64),
                (const std::shared_ptr<Grid> *)(v3 + 96)) )
    {
      v11 = 0;
    }
    else
    {
      v15 = std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( Grid::delEntity(v15, entity) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/grid_mgr.cpp",
          "entityMoveTo",
          224);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)&val,
                (const char (*)[16])"delEntity fails");
        common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v16, entity);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      }
      v17 = std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( Grid::addEntity(v17, entity) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/grid_mgr.cpp",
          "entityMoveTo",
          228);
        v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)&val,
                (const char (*)[16])"addEntity fails");
        common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v18, entity);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        v11 = -1;
      }
      else if ( std::operator==<Mesh<Grid,GridAllocator>>(&this->mesh_ptr_, 0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/grid_mgr.cpp",
          "entityMoveTo",
          234);
        v19 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                (common::milog::MiLogStream *const)&val,
                (const char (*)[25])"mesh is nullptr, entity:");
        common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v19, entity);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        v11 = -1;
      }
      else
      {
        v20 = 0;
        if ( *(_BYTE *)(((unsigned __int64)&Config::grid_config >> 3) + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&Config::grid_config & 7) >= *(_BYTE *)(((unsigned __int64)&Config::grid_config >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load1(&Config::grid_config);
        }
        v23 = 0;
        if ( Config::grid_config.is_destory )
        {
          v21 = std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          if ( Grid::isEmpty(v21) )
          {
            v22 = std::__shared_ptr_access<Mesh<Grid,GridAllocator>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Mesh<Grid,GridAllocator>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->mesh_ptr_);
            std::shared_ptr<Grid>::shared_ptr(&p_grid_ptr, (const std::shared_ptr<Grid> *)(v3 + 64));
            v20 = 1;
            if ( !Mesh<Grid,GridAllocator>::destoryGrid(v22, &p_grid_ptr) )
              v23 = 1;
          }
        }
        if ( v20 )
          std::shared_ptr<Grid>::~shared_ptr(&p_grid_ptr);
        if ( v23 )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&val,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/grid_mgr.cpp",
            "entityMoveTo",
            240);
          v24 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                  (common::milog::MiLogStream *const)&val,
                  (const char (*)[28])"destoryGrid failed, entity:");
          v25 = common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v24, entity);
          v26 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v25, (const char (*)[4])" x:");
          v27 = std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          v28 = common::milog::MiLogStream::operator<<<int,(int *)0>(v26, &v27->x);
          v29 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v28, (const char (*)[4])" y:");
          v30 = std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          common::milog::MiLogStream::operator<<<int,(int *)0>(v29, &v30->y);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
          v11 = -1;
        }
        else
        {
          Entity::setCoordinate(entity, dest_coord);
          v11 = 0;
        }
      }
    }
    std::shared_ptr<Grid>::~shared_ptr((std::shared_ptr<Grid> *const)(v3 + 96));
  }
  std::shared_ptr<Grid>::~shared_ptr((std::shared_ptr<Grid> *const)(v3 + 64));
  result = v11;
  if ( v36 == (char *)v3 )
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

// Line 250: range 0000000013169BBC-0000000013169E17
void __cdecl GridMgr::visitGridsInSight(
        GridMgr *const this,
        const Coordinate *center,
        Visitor *visitor,
        uint32_t sight_radius)
{
  int32_t *v4; // rax
  int32_t *v5; // rdx
  int32_t *v6; // rax
  int32_t *v7; // rdx
  int32_t sight_radiusa; // [rsp+4h] [rbp-3Ch]
  int __a; // [rsp+2Ch] [rbp-14h] BYREF
  int __b; // [rsp+30h] [rbp-10h] BYREF
  int32_t i; // [rsp+34h] [rbp-Ch]
  int32_t j; // [rsp+38h] [rbp-8h]
  int32_t radius; // [rsp+3Ch] [rbp-4h]

  sight_radiusa = sight_radius;
  if ( !sight_radius )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->sight_radius_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->sight_radius_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->sight_radius_);
    }
    sight_radiusa = this->sight_radius_;
  }
  radius = sight_radiusa;
  if ( *(_BYTE *)(((unsigned __int64)center >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)center & 7) + 3) >= *(_BYTE *)(((unsigned __int64)center >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(center);
  }
  __b = center->x - radius;
  __a = 0;
  v4 = (int32_t *)std::max<int>(&__a, &__b);
  v5 = v4;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v4);
  }
  for ( i = *v5; ; ++i )
  {
    if ( *(_BYTE *)(((unsigned __int64)center >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)center & 7) + 3) >= *(_BYTE *)(((unsigned __int64)center >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(center);
    }
    if ( i > center->x + radius )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&center->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)center + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&center->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&center->y);
    }
    __b = center->y - radius;
    __a = 0;
    v6 = (int32_t *)std::max<int>(&__a, &__b);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    for ( j = *v7; ; ++j )
    {
      if ( *(_BYTE *)(((unsigned __int64)&center->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)center + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&center->y >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&center->y);
      }
      if ( j > center->y + radius )
        break;
      GridMgr::visitGrid(this, i, j, visitor);
    }
  }
};

// Line 271: range 0000000013169E18-000000001316A4F1
void __cdecl GridMgr::visitDiffGrids(
        GridMgr *const this,
        const Coordinate *center1,
        const Coordinate *center2,
        Visitor *t1,
        Visitor *t2)
{
  int32_t x; // esi
  int32_t y; // ecx
  int32_t v7; // ecx
  int32_t v8; // ecx
  int32_t v9; // ecx
  int32_t i; // [rsp+34h] [rbp-6Ch]
  int32_t j; // [rsp+38h] [rbp-68h]
  int32_t i_0; // [rsp+3Ch] [rbp-64h]
  int32_t j_0; // [rsp+40h] [rbp-60h]
  int32_t low_y; // [rsp+44h] [rbp-5Ch]
  int32_t up_y; // [rsp+48h] [rbp-58h]
  int32_t j_1; // [rsp+4Ch] [rbp-54h]
  int32_t i_1; // [rsp+50h] [rbp-50h]
  int32_t j_2; // [rsp+54h] [rbp-4Ch]
  int32_t i_2; // [rsp+58h] [rbp-48h]
  int32_t j_3; // [rsp+5Ch] [rbp-44h]
  int32_t i_3; // [rsp+60h] [rbp-40h]
  int32_t j_4; // [rsp+64h] [rbp-3Ch]
  int32_t i_4; // [rsp+68h] [rbp-38h]
  int32_t j_5; // [rsp+6Ch] [rbp-34h]
  int32_t i_5; // [rsp+70h] [rbp-30h]
  int32_t i_6; // [rsp+74h] [rbp-2Ch]
  int32_t i_7; // [rsp+78h] [rbp-28h]
  int32_t i_8; // [rsp+7Ch] [rbp-24h]
  int32_t left_x1; // [rsp+80h] [rbp-20h]
  int32_t right_x1; // [rsp+84h] [rbp-1Ch]
  int32_t low_y1; // [rsp+88h] [rbp-18h]
  int32_t up_y1; // [rsp+8Ch] [rbp-14h]
  int32_t left_x2; // [rsp+90h] [rbp-10h]
  int32_t right_x2; // [rsp+94h] [rbp-Ch]
  int32_t low_y2; // [rsp+98h] [rbp-8h]
  int32_t up_y2; // [rsp+9Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)center1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)center1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)center1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(center1);
  }
  x = center1->x;
  if ( *(_BYTE *)(((unsigned __int64)&this->sight_radius_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sight_radius_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->sight_radius_);
  }
  left_x1 = x - this->sight_radius_;
  right_x1 = center1->x + this->sight_radius_;
  if ( *(_BYTE *)(((unsigned __int64)&center1->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)center1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&center1->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&center1->y);
  }
  low_y1 = center1->y - this->sight_radius_;
  up_y1 = center1->y + this->sight_radius_;
  if ( *(_BYTE *)(((unsigned __int64)center2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)center2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)center2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(center2);
  }
  left_x2 = center2->x - this->sight_radius_;
  right_x2 = center2->x + this->sight_radius_;
  if ( *(_BYTE *)(((unsigned __int64)&center2->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)center2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&center2->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&center2->y);
  }
  low_y2 = center2->y - this->sight_radius_;
  up_y2 = center2->y + this->sight_radius_;
  if ( right_x1 >= left_x2 && right_x2 >= left_x1 && up_y1 >= low_y2 && up_y2 >= low_y1 )
  {
    low_y = low_y1;
    up_y = up_y1;
    if ( *(_BYTE *)(((unsigned __int64)&center1->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)center1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&center1->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&center1->y);
    }
    y = center1->y;
    if ( *(_BYTE *)(((unsigned __int64)&center2->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)center2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&center2->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&center2->y);
    }
    if ( y >= center2->y )
    {
      if ( *(_BYTE *)(((unsigned __int64)&center1->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)center1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&center1->y >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&center1->y);
      }
      v7 = center1->y;
      if ( *(_BYTE *)(((unsigned __int64)&center2->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)center2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&center2->y >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&center2->y);
      }
      if ( v7 > center2->y )
      {
        for ( j_3 = up_y1; j_3 > up_y2; --j_3 )
        {
          for ( i_3 = left_x1; i_3 <= right_x1; ++i_3 )
            GridMgr::visitGrid(this, i_3, j_3, t1);
        }
        for ( j_4 = low_y2; j_4 < low_y1; ++j_4 )
        {
          for ( i_4 = left_x2; i_4 <= right_x2; ++i_4 )
            GridMgr::visitGrid(this, i_4, j_4, t2);
        }
        low_y = low_y1;
        up_y = up_y2;
      }
    }
    else
    {
      for ( j_1 = low_y1; j_1 < low_y2; ++j_1 )
      {
        for ( i_1 = left_x1; i_1 <= right_x1; ++i_1 )
          GridMgr::visitGrid(this, i_1, j_1, t1);
      }
      for ( j_2 = up_y2; j_2 > up_y1; --j_2 )
      {
        for ( i_2 = left_x2; i_2 <= right_x2; ++i_2 )
          GridMgr::visitGrid(this, i_2, j_2, t2);
      }
      low_y = low_y2;
      up_y = up_y1;
    }
    for ( j_5 = low_y; j_5 <= up_y; ++j_5 )
    {
      if ( *(_BYTE *)(((unsigned __int64)center1 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)center1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)center1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(center1);
      }
      v8 = center1->x;
      if ( *(_BYTE *)(((unsigned __int64)center2 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)center2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)center2 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(center2);
      }
      if ( v8 >= center2->x )
      {
        if ( *(_BYTE *)(((unsigned __int64)center1 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)center1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)center1 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(center1);
        }
        v9 = center1->x;
        if ( *(_BYTE *)(((unsigned __int64)center2 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)center2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)center2 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(center2);
        }
        if ( v9 > center2->x )
        {
          for ( i_7 = left_x2; i_7 < left_x1; ++i_7 )
            GridMgr::visitGrid(this, i_7, j_5, t2);
          for ( i_8 = right_x1; i_8 > right_x2; --i_8 )
            GridMgr::visitGrid(this, i_8, j_5, t1);
        }
      }
      else
      {
        for ( i_5 = left_x1; i_5 < left_x2; ++i_5 )
          GridMgr::visitGrid(this, i_5, j_5, t1);
        for ( i_6 = right_x2; i_6 > right_x1; --i_6 )
          GridMgr::visitGrid(this, i_6, j_5, t2);
      }
    }
  }
  else
  {
    for ( i = left_x1; i <= right_x1; ++i )
    {
      for ( j = low_y1; j <= up_y1; ++j )
        GridMgr::visitGrid(this, i, j, t1);
    }
    for ( i_0 = left_x2; i_0 <= right_x2; ++i_0 )
    {
      for ( j_0 = low_y2; j_0 <= up_y2; ++j_0 )
        GridMgr::visitGrid(this, i_0, j_0, t2);
    }
  }
};

// Line 342: range 000000001316A4F2-000000001316A623
void __cdecl GridMgr::visitGrid(GridMgr *const this, int32_t x, int32_t y, Visitor *visitor)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  Grid *v7; // rdx
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 12 grid_ptr:343";
  *(_QWORD *)(v4 + 16) = GridMgr::visitGrid;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  GridMgr::findGrid((const GridMgr *const)(v4 + 32), (int32_t)this, x);
  if ( std::operator!=<Grid>((const std::shared_ptr<Grid> *)(v4 + 32), 0LL) )
  {
    v7 = std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    Grid::accept(v7, visitor);
  }
  std::shared_ptr<Grid>::~shared_ptr((std::shared_ptr<Grid> *const)(v4 + 32));
  if ( v9 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 351: range 000000001316A624-000000001316A6B2
// local variable allocation has failed, the output may be wrong!
GridPtr __cdecl GridMgr::getGrid(GridMgr *const this, int32_t x, int32_t y)
{
  GridPtr result; // rax
  std::__shared_ptr_access<Mesh<Grid,GridAllocator>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rsi

  if ( std::operator==<Mesh<Grid,GridAllocator>>(
         (const std::shared_ptr<Mesh<Grid,GridAllocator> > *)(*(_QWORD *)&x + 40LL),
         0LL) )
  {
    std::shared_ptr<Grid>::shared_ptr((std::shared_ptr<Grid> *const)this, 0LL);
  }
  else
  {
    v4 = std::__shared_ptr_access<Mesh<Grid,GridAllocator>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Mesh<Grid,GridAllocator>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(*(_QWORD *)&x + 40LL));
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, v4);
    result = Mesh<Grid,GridAllocator>::getGrid((Mesh<Grid,GridAllocator> *const)this, (int32_t)v4, y);
  }
  result._M_ptr = (std::__shared_ptr<Grid,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 358: range 000000001316A6B4-000000001316A77F
GridPtr __cdecl GridMgr::getGrid(GridMgr *const this, const Coordinate *coord)
{
  const Coordinate *v2; // rdx
  int32_t x; // edx
  __int64 v4; // rsi
  GridPtr result; // rax
  const Coordinate *coorda; // [rsp+8h] [rbp-18h]
  int32_t thisa; // [rsp+10h] [rbp-10h]

  thisa = (int)coord;
  coorda = v2;
  if ( *(_BYTE *)(((unsigned __int64)&v2->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v2->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v2->y);
  }
  if ( *(_BYTE *)(((unsigned __int64)coorda >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)coorda & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coorda >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(coorda);
  }
  x = coorda->x;
  v4 = *(unsigned __int16 *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( (_WORD)v4 )
    __asan_report_store16(this, v4);
  result = GridMgr::getGrid(this, thisa, x);
  result._M_ptr = (std::__shared_ptr<Grid,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 363: range 000000001316A780-000000001316A80E
// local variable allocation has failed, the output may be wrong!
GridPtr __cdecl GridMgr::findGrid(const GridMgr *const this, int32_t x, int32_t y)
{
  GridPtr result; // rax
  std::__shared_ptr_access<Mesh<Grid,GridAllocator>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rsi

  if ( std::operator==<Mesh<Grid,GridAllocator>>(
         (const std::shared_ptr<Mesh<Grid,GridAllocator> > *)(*(_QWORD *)&x + 40LL),
         0LL) )
  {
    std::shared_ptr<Grid>::shared_ptr((std::shared_ptr<Grid> *const)this, 0LL);
  }
  else
  {
    v4 = std::__shared_ptr_access<Mesh<Grid,GridAllocator>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Mesh<Grid,GridAllocator>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(*(_QWORD *)&x + 40LL));
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, v4);
    result = Mesh<Grid,GridAllocator>::findGrid((const Mesh<Grid,GridAllocator> *const)this, (int32_t)v4, y);
  }
  result._M_ptr = (std::__shared_ptr<Grid,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 370: range 000000001316A810-000000001316A8DB
GridPtr __cdecl GridMgr::findGrid(const GridMgr *const this, const Coordinate *coord)
{
  const Coordinate *v2; // rdx
  int32_t x; // edx
  __int64 v4; // rsi
  GridPtr result; // rax
  const Coordinate *coorda; // [rsp+8h] [rbp-18h]
  int32_t thisa; // [rsp+10h] [rbp-10h]

  thisa = (int)coord;
  coorda = v2;
  if ( *(_BYTE *)(((unsigned __int64)&v2->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v2->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v2->y);
  }
  if ( *(_BYTE *)(((unsigned __int64)coorda >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)coorda & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coorda >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(coorda);
  }
  x = coorda->x;
  v4 = *(unsigned __int16 *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( (_WORD)v4 )
    __asan_report_store16(this, v4);
  result = GridMgr::findGrid(this, thisa, x);
  result._M_ptr = (std::__shared_ptr<Grid,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 375: range 000000001316A8DC-000000001316AA07
void __cdecl GridMgr::getAllRegion(
        const GridMgr *const this,
        const Coordinate *coord,
        std::set<std::shared_ptr<Region>> *region_set)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 grid_ptr:376";
  *(_QWORD *)(v3 + 16) = GridMgr::getAllRegion;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  GridMgr::findGrid((const GridMgr *const)(v3 + 32), (const Coordinate *)this);
  if ( std::__shared_ptr<Grid,(__gnu_cxx::_Lock_policy)2>::operator bool((const std::__shared_ptr<Grid,(__gnu_cxx::_Lock_policy)2> *const)(v3 + 32)) )
  {
    v6 = std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Grid,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    Grid::getAllRegion(v6, region_set);
  }
  std::shared_ptr<Grid>::~shared_ptr((std::shared_ptr<Grid> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
