// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_grid_comp.cpp

// Line 28: range 0000000015CCE02C-0000000015CCE0A4
uint32_t __cdecl SceneGridComp::getGridWidth(data::VisionLevelType type)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  uint32_t GridWidth; // ebx
  std::shared_ptr<Config> v4[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v4);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4);
  GridWidth = HK4EDesignConfig::findGridWidth(&v1->design_config, type);
  std::shared_ptr<Config>::~shared_ptr(v4);
  return GridWidth;
};

// Line 33: range 0000000015CCE0A6-0000000015CCE11E
uint32_t __cdecl SceneGridComp::getSightRange(data::VisionLevelType type)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  uint32_t VisionRange; // ebx
  std::shared_ptr<Config> v4[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v4);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4);
  VisionRange = HK4EDesignConfig::findVisionRange(&v1->design_config, type);
  std::shared_ptr<Config>::~shared_ptr(v4);
  return VisionRange;
};

// Line 39: range 0000000015CCE120-0000000015CCE354
bool __cdecl SceneGridComp::isInSightRange(
        const SceneGridComp *const this,
        data::VisionLevelType range_type,
        const Vector3 *pos,
        const Vector3 *far_pos)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  bool result; // al
  unsigned int sight_radius; // [rsp+2Ch] [rbp-94h]
  uint32_t sight_range; // [rsp+30h] [rbp-90h]
  uint32_t grid_width; // [rsp+34h] [rbp-8Ch]
  Vector2 v13; // [rsp+38h] [rbp-88h] BYREF
  char v14[128]; // [rsp+40h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 8 8 coord:52 64 8 12 far_coord:54";
  *(_QWORD *)(v4 + 16) = SceneGridComp::isInSightRange;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -202116352;
  sight_range = SceneGridComp::getSightRange(range_type);
  grid_width = SceneGridComp::getGridWidth(range_type);
  sight_radius = 1;
  if ( grid_width )
    sight_radius = sight_range / grid_width;
  if ( !sight_radius )
    sight_radius = 1;
  Coordinate::Coordinate((Coordinate *const)(v4 + 32), 0, 0);
  Vector2::Vector2(&v13, pos);
  SceneGridComp::posToCoordinate(this, range_type, &v13, (Coordinate *)(v4 + 32));
  Coordinate::Coordinate((Coordinate *const)(v4 + 64), 0, 0);
  Vector2::Vector2(&v13, far_pos);
  SceneGridComp::posToCoordinate(this, range_type, &v13, (Coordinate *)(v4 + 64));
  result = sight_radius >= abs32(*(_DWORD *)(v4 + 32) - *(_DWORD *)(v4 + 64))
        && sight_radius >= abs32(*(_DWORD *)(v4 + 36) - *(_DWORD *)(v4 + 68));
  if ( v14 == (char *)v4 )
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

// Line 64: range 0000000015CCE356-0000000015CCE7BA
int32_t __cdecl SceneGridComp::init(SceneGridComp *const this, const Vector2 *begin_pos, const Vector2 *scene_size)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  data::VisionLevelType range_type; // [rsp+2Ch] [rbp-E4h]
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v21; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v22; // [rsp+70h] [rbp-A0h] BYREF
  char v23[128]; // [rsp+90h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 13 grid_width:74 48 4 14 sight_range:75 64 8 6 idx:71";
  *(_QWORD *)(v3 + 16) = SceneGridComp::init;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  if ( SceneSightComp::init(this, begin_pos, scene_size) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_grid_comp.cpp",
      "init",
      67);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v22,
      (const char (*)[27])"SceneSightComp::init fails");
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = -1;
  }
  else
  {
    for ( *(_QWORD *)(v3 + 64) = 0LL; *(_QWORD *)(v3 + 64) <= 5uLL; ++*(_QWORD *)(v3 + 64) )
    {
      range_type = (unsigned int)*(_QWORD *)(v3 + 64);
      *(_DWORD *)(v3 + 32) = SceneGridComp::getGridWidth(range_type);
      *(_DWORD *)(v3 + 48) = SceneGridComp::getSightRange(range_type);
      if ( !*(_DWORD *)(v3 + 32) || !*(_DWORD *)(v3 + 48) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/scene_grid_comp.cpp",
          "init",
          78);
        v7 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v20, (const char (*)[7])"type: ");
        v8 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
               v7,
               (const unsigned __int64 *)(v3 + 64));
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          v8,
          (const char (*)[34])" grid_width or sight_range valid!");
        common::milog::MiLogStream::~MiLogStream(&v20);
        result = -1;
        goto LABEL_17;
      }
      if ( *(_DWORD *)(v3 + 32) * (*(_DWORD *)(v3 + 48) / *(_DWORD *)(v3 + 32)) != *(_DWORD *)(v3 + 48) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/scene_grid_comp.cpp",
          "init",
          85);
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               &v21,
               (const unsigned int *)(v3 + 48));
        v10 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v9, (const char (*)[2])"/");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v11, (const char (*)[21])" divide not exactly!");
        common::milog::MiLogStream::~MiLogStream(&v21);
        result = -1;
        goto LABEL_17;
      }
      if ( SceneGridComp::createGridMgr(this, range_type, *(_DWORD *)(v3 + 32), *(_DWORD *)(v3 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/scene_grid_comp.cpp",
          "init",
          92);
        v12 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                &v22,
                (const char (*)[21])"createGridMgr type: ");
        v13 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v12,
                (const unsigned __int64 *)(v3 + 64));
        v14 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v13, (const char (*)[14])" grid_width: ");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v3 + 32));
        v16 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v15, (const char (*)[15])" sight_range: ");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v17, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream(&v22);
        result = -1;
        goto LABEL_17;
      }
    }
    result = 0;
  }
LABEL_17:
  if ( v23 == (char *)v3 )
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

// Line 102: range 0000000015CCE7BC-0000000015CCEF02
__int64 __fastcall SceneGridComp::createGridMgr(
        SceneGridComp *const this,
        data::VisionLevelType range_type,
        int grid_width,
        uint32_t sight_range)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  GridMgr *v10; // rax
  std::array<std::unique_ptr<GridMgr>,6>::size_type v11; // r14
  common::milog::MiLogStream *v12; // rax
  std::unique_ptr<GridMgr> *v13; // r14
  std::unique_ptr<GridMgr> *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  __int64 result; // rax
  char *val; // [rsp+28h] [rbp-D8h] BYREF
  common::milog::MiLogStream v26; // [rsp+30h] [rbp-D0h] BYREF
  char v27[176]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 4 10 length:115 48 4 9 width:121 64 4 16 sight_radius:127 80 4 14 range_type:101 96 8 16 grid_mgr_utr:103";
  *(_QWORD *)(v4 + 16) = SceneGridComp::createGridMgr;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234556924;
  v6[536862723] = -202116352;
  *(_DWORD *)(v4 + 80) = range_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  std::make_unique<GridMgr,data::VisionLevelType &,Scene &>(
    (data::VisionLevelType *)(v4 + 96),
    (Scene *)(v4 + 80),
    (data::VisionLevelType *)this->scene_,
    (Scene *)(v4 + 80));
  if ( std::operator==<GridMgr,std::default_delete<GridMgr>>(0LL, (const std::unique_ptr<GridMgr> *)(v4 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_grid_comp.cpp",
      "createGridMgr",
      106);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v26,
      (const char (*)[28])"make_unique<GridMgr> failed");
    common::milog::MiLogStream::~MiLogStream(&v26);
    v7 = -1;
  }
  else if ( grid_width )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_size_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_size_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 32) = (int)std::ceil(this->scene_size_.x / (float)grid_width);
    if ( *(_DWORD *)(v4 + 32) <= 0xFFFFu )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_size_.y >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->scene_size_.y >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v4 + 48) = (int)std::ceil(this->scene_size_.y / (float)grid_width);
      if ( *(_DWORD *)(v4 + 48) <= 0xFFFFu )
      {
        *(_DWORD *)(v4 + 64) = sight_range / grid_width;
        if ( !*(_DWORD *)(v4 + 64) )
          *(_DWORD *)(v4 + 64) = 1;
        v10 = std::unique_ptr<GridMgr>::operator->((const std::unique_ptr<GridMgr> *const)(v4 + 96));
        if ( GridMgr::init(v10, *(_DWORD *)(v4 + 32), *(_DWORD *)(v4 + 48), *(_DWORD *)(v4 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_grid_comp.cpp",
            "createGridMgr",
            134);
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v26, (const char (*)[17])"allocGrid failed");
          common::milog::MiLogStream::~MiLogStream(&v26);
          v7 = -1;
        }
        else
        {
          v11 = *(int *)(v4 + 80);
          if ( v11 < std::array<std::unique_ptr<GridMgr>,6ul>::size(&this->grid_mgr_arr_) )
          {
            v13 = std::move<std::unique_ptr<GridMgr> &>((std::unique_ptr<GridMgr> *)(v4 + 96));
            v14 = std::array<std::unique_ptr<GridMgr>,6ul>::operator[](&this->grid_mgr_arr_, *(unsigned int *)(v4 + 80));
            std::unique_ptr<GridMgr>::operator=(v14, v13);
            common::milog::MiLogStream::create(
              &v26,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/scene/scene_grid_comp.cpp",
              "createGridMgr",
              143);
            v15 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                    &v26,
                    (const char (*)[23])"GridMgr::init length: ");
            v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v15,
                    (const unsigned int *)(v4 + 32));
            v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" width: ");
            v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v17,
                    (const unsigned int *)(v4 + 48));
            v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v18,
                    (const char (*)[16])" sight_radius: ");
            v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v19,
                    (const unsigned int *)(v4 + 64));
            v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v20,
                    (const char (*)[16])" vision_level: ");
            val = (char *)data::enumValToStr((data::VisionLevelType)*(_DWORD *)(v4 + 80));
            common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v21, (const char *const *)&val);
            common::milog::MiLogStream::~MiLogStream(&v26);
            v7 = 0;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v26,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_grid_comp.cpp",
              "createGridMgr",
              139);
            v12 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                    &v26,
                    (const char (*)[20])"invalid range_type:");
            common::milog::MiLogStream::operator<<<data::VisionLevelType,(data::VisionLevelType*)0>(
              v12,
              (const data::VisionLevelType *)(v4 + 80));
            common::milog::MiLogStream::~MiLogStream(&v26);
            v7 = -1;
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_grid_comp.cpp",
          "createGridMgr",
          124);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               &v26,
               (const char (*)[16])"invalid width: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream(&v26);
        v7 = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_grid_comp.cpp",
        "createGridMgr",
        118);
      v8 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v26, (const char (*)[17])"invalid length: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 32));
      common::milog::MiLogStream::~MiLogStream(&v26);
      v7 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_grid_comp.cpp",
      "createGridMgr",
      111);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v26, (const char (*)[16])"grid_width == 0");
    common::milog::MiLogStream::~MiLogStream(&v26);
    v7 = -1;
  }
  std::unique_ptr<GridMgr>::~unique_ptr((std::unique_ptr<GridMgr> *const)(v4 + 96));
  result = v7;
  if ( v27 == (char *)v4 )
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

// Line 149: range 0000000015CCEF04-0000000015CCF034
GridMgrUtr *__cdecl SceneGridComp::getGridMgr(SceneGridComp *const this, data::VisionLevelType range_type)
{
  common::milog::MiLogStream *v2; // rbx
  char *val; // [rsp+18h] [rbp-38h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( (int)range_type < std::array<std::unique_ptr<GridMgr>,6ul>::size(&this->grid_mgr_arr_) )
    return std::array<std::unique_ptr<GridMgr>,6ul>::operator[](&this->grid_mgr_arr_, (unsigned int)range_type);
  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/scene/scene_grid_comp.cpp",
    "getGridMgr",
    152);
  v2 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v5, (const char (*)[20])"invalid range_type:");
  val = (char *)data::enumValToStr(range_type);
  common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v2, (const char *const *)&val);
  common::milog::MiLogStream::~MiLogStream(&v5);
  if ( !(_BYTE)`guard variable for'SceneGridComp::getGridMgr(data::VisionLevelType)::dummy_grid_mgr_utr )
  {
    if ( __cxa_guard_acquire(&`guard variable for'SceneGridComp::getGridMgr(data::VisionLevelType)::dummy_grid_mgr_utr) )
    {
      __cxa_guard_release(&`guard variable for'SceneGridComp::getGridMgr(data::VisionLevelType)::dummy_grid_mgr_utr);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unique_ptr<GridMgr>::~unique_ptr,
        &SceneGridComp::getGridMgr(data::VisionLevelType)::dummy_grid_mgr_utr,
        &_dso_handle);
    }
  }
  return &SceneGridComp::getGridMgr(data::VisionLevelType)::dummy_grid_mgr_utr;
};

// Line 160: range 0000000015CCF036-0000000015CCF6A4
int32_t __cdecl SceneGridComp::placeEntity(
        SceneGridComp *const this,
        Entity *entity,
        std::vector<std::shared_ptr<Entity>> *entity_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  GridMgr *v10; // rcx
  GridMgr *v11; // rcx
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  int32_t result; // eax
  const std::unique_ptr<GridMgr> *grid_mgr_utr; // [rsp+20h] [rbp-120h]
  const Vector3 *pos; // [rsp+28h] [rbp-118h]
  Vector2 v19; // [rsp+38h] [rbp-108h] BYREF
  std::enable_shared_from_this<Scene> v20; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v21; // [rsp+50h] [rbp-F0h] BYREF
  char v22[208]; // [rsp+70h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 14 range_type:161 64 8 9 coord:182 96 24 13 coord_vec:172";
  *(_QWORD *)(v3 + 16) = SceneGridComp::placeEntity;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 48) = SceneGridComp::getVisionLevelType(this, entity);
  grid_mgr_utr = SceneGridComp::getGridMgr(this, (data::VisionLevelType)*(_DWORD *)(v3 + 48));
  if ( std::operator==<GridMgr,std::default_delete<GridMgr>>(grid_mgr_utr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_grid_comp.cpp",
      "placeEntity",
      165);
    v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v21,
           (const char (*)[34])"grid_mgr_utr is null, range_type:");
    common::milog::MiLogStream::operator<<<data::VisionLevelType,(data::VisionLevelType*)0>(
      v6,
      (const data::VisionLevelType *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v21);
    v7 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v8 = (unsigned __int64)(entity->_vptr_DescribalBase + 3);
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(Entity *))v8)(entity) == 5 )
    {
      std::vector<Coordinate>::vector((std::vector<Coordinate> *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v9 = (unsigned __int64)(entity->_vptr_DescribalBase + 34);
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8();
      (*(void (__fastcall **)(Entity *, SceneGridComp *const, unsigned __int64))v9)(entity, this, v3 + 96);
      v10 = std::unique_ptr<GridMgr>::operator->(grid_mgr_utr);
      GridMgr::placeRegionEntity(v10, (Region *)entity, (const std::vector<Coordinate> *)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      std::enable_shared_from_this<Scene>::shared_from_this(&v20);
      Entity::setScene(entity, (ScenePtr *)&v20);
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)&v20);
      v7 = 0;
      std::vector<Coordinate>::~vector((std::vector<Coordinate> *const)(v3 + 96));
    }
    else
    {
      pos = Entity::getPosition(entity);
      Coordinate::Coordinate((Coordinate *const)(v3 + 64), 0, 0);
      Vector2::Vector2(&v19, pos);
      SceneGridComp::posToCoordinate(this, *(data::VisionLevelType *)(v3 + 48), &v19, (Coordinate *)(v3 + 64));
      v11 = std::unique_ptr<GridMgr>::operator->(grid_mgr_utr);
      if ( GridMgr::placeEntity(v11, entity, (const Coordinate *)(v3 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_grid_comp.cpp",
          "placeEntity",
          186);
        v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v21, (const char (*)[13])"range_type: ");
        v19 = (Vector2)data::enumValToStr((data::VisionLevelType)*(_DWORD *)(v3 + 48));
        v13 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v12, (const char *const *)&v19);
        v14 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                v13,
                (const char (*)[20])" placeEntity failed");
        common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v14, entity);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v7 = -1;
      }
      else
      {
        Entity::setRoomId(entity, 0);
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        std::enable_shared_from_this<Scene>::shared_from_this(&v20);
        Entity::setScene(entity, (ScenePtr *)&v20);
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)&v20);
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        if ( Scene::getPlayerCount(this->scene_) )
          SceneGridComp::getSurroundEntityVec(this, entity, entity_vec);
        v7 = 0;
      }
    }
  }
  result = v7;
  if ( v22 == (char *)v3 )
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
  return result;
};

// Line 205: range 0000000015CCF6A6-0000000015CCFB33
int32_t __cdecl SceneGridComp::removeEntity(SceneGridComp *const this, Entity *entity)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  GridMgr *v9; // rax
  GridMgr *v10; // rdx
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-E8h] BYREF
  GridMgrUtr *grid_mgr_utr; // [rsp+20h] [rbp-E0h]
  Region *region; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 8) = "2 48 4 14 range_type:206 64 24 13 coord_vec:217";
  *(_QWORD *)(v2 + 16) = SceneGridComp::removeEntity;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = SceneGridComp::getVisionLevelType(this, entity);
  grid_mgr_utr = SceneGridComp::getGridMgr(this, (data::VisionLevelType)*(_DWORD *)(v2 + 48));
  if ( std::operator==<GridMgr,std::default_delete<GridMgr>>(grid_mgr_utr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_grid_comp.cpp",
      "removeEntity",
      210);
    v5 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v18,
           (const char (*)[34])"grid_mgr_utr is null, range_type:");
    common::milog::MiLogStream::operator<<<data::VisionLevelType,(data::VisionLevelType*)0>(
      v5,
      (const data::VisionLevelType *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v18);
    v6 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v7 = (unsigned __int64)(entity->_vptr_DescribalBase + 3);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(Entity *))v7)(entity) == 5 )
    {
      std::vector<Coordinate>::vector((std::vector<Coordinate> *const)(v2 + 64));
      region = (Region *)entity;
      if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(region->_vptr_DescribalBase + 34);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8();
      (*(void (__fastcall **)(Region *, SceneGridComp *const, unsigned __int64))v8)(region, this, v2 + 64);
      v9 = std::unique_ptr<GridMgr>::operator->(grid_mgr_utr);
      GridMgr::removeRegionEntity(v9, region, (const std::vector<Coordinate> *)(v2 + 64));
      v6 = 0;
      std::vector<Coordinate>::~vector((std::vector<Coordinate> *const)(v2 + 64));
    }
    else
    {
      v10 = std::unique_ptr<GridMgr>::operator->(grid_mgr_utr);
      if ( GridMgr::removeEntity(v10, entity) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_grid_comp.cpp",
          "removeEntity",
          227);
        v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v18, (const char (*)[13])"range_type: ");
        val = (char *)data::enumValToStr((data::VisionLevelType)*(_DWORD *)(v2 + 48));
        v12 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)&val);
        v13 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v12,
                (const char (*)[21])" removeEntity failed");
        common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v13, entity);
        common::milog::MiLogStream::~MiLogStream(&v18);
        v6 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Scene::getPlayerCount(this->scene_);
        v6 = 0;
      }
    }
  }
  result = v6;
  if ( v19 == (char *)v2 )
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

// Line 242: range 0000000015CCFF14-0000000015CD0843
int32_t __cdecl SceneGridComp::entityMoveTo(
        SceneGridComp *const this,
        Entity *entity,
        const Vector3 *dest_pos,
        std::vector<std::shared_ptr<Entity>> *miss_entity_vec,
        std::vector<std::shared_ptr<Entity>> *meet_entity_vec)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  GridMgr *v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rbx
  unsigned __int64 v20; // rax
  const Vector3 *Position; // rax
  Scene *scene; // r14
  std::vector<std::shared_ptr<Entity>> *v23; // rax
  std::vector<std::shared_ptr<Entity>> *v24; // rax
  int32_t result; // eax
  SceneGridComp::entityMoveTo::<lambda(Player&)> v26; // [rsp-30h] [rbp-2E0h]
  const std::unique_ptr<GridMgr> *grid_mgr_utr; // [rsp+38h] [rbp-278h]
  const Vector3 *cur_pos; // [rsp+40h] [rbp-270h]
  std::vector<std::shared_ptr<Entity>> *tmp_miss_vec; // [rsp+48h] [rbp-268h]
  std::vector<std::shared_ptr<Entity>> *tmp_meet_vec; // [rsp+50h] [rbp-260h]
  Vector2 pos; // [rsp+58h] [rbp-258h] BYREF
  std::shared_ptr<Entity> p_; // [rsp+60h] [rbp-250h] BYREF
  common::milog::MiLogStream v36; // [rsp+70h] [rbp-240h] BYREF
  std::string val; // [rsp+90h] [rbp-220h] BYREF
  std::string v38; // [rsp+B0h] [rbp-200h] BYREF
  common::milog::MiLogStream v39; // [rsp+D0h] [rbp-1E0h] BYREF
  SceneGridComp::entityMoveTo::<lambda(Player&)> __f; // [rsp+F0h] [rbp-1C0h]
  char v41[400]; // [rsp+120h] [rbp-190h] BYREF

  v5 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(352LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "7 48 4 14 range_type:243 64 8 14 dest_coord:251 96 8 13 cur_coord:273 128 8 14 dest_coord:275 16"
                        "0 16 14 entity_ptr:260 192 48 16 miss_visitor:261 272 48 16 meet_visitor:262";
  *(_QWORD *)(v5 + 16) = SceneGridComp::entityMoveTo;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -219021312;
  v7[536862727] = -219021312;
  v7[536862728] = 62194;
  v7[536862730] = -202116109;
  *(_DWORD *)(v5 + 48) = SceneGridComp::getVisionLevelType(this, entity);
  grid_mgr_utr = SceneGridComp::getGridMgr(this, (data::VisionLevelType)*(_DWORD *)(v5 + 48));
  if ( std::operator==<GridMgr,std::default_delete<GridMgr>>(grid_mgr_utr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_grid_comp.cpp",
      "entityMoveTo",
      247);
    v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v39,
           (const char (*)[34])"grid_mgr_utr is null, range_type:");
    common::milog::MiLogStream::operator<<<data::VisionLevelType,(data::VisionLevelType*)0>(
      v8,
      (const data::VisionLevelType *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream(&v39);
    v9 = -1;
    goto LABEL_21;
  }
  Coordinate::Coordinate((Coordinate *const)(v5 + 64), 0, 0);
  Vector2::Vector2(&pos, dest_pos);
  SceneGridComp::posToCoordinate(this, *(data::VisionLevelType *)(v5 + 48), &pos, (Coordinate *)(v5 + 64));
  v10 = std::unique_ptr<GridMgr>::operator->(grid_mgr_utr);
  if ( GridMgr::entityMoveTo(v10, entity, (const Coordinate *)(v5 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_grid_comp.cpp",
      "entityMoveTo",
      255);
    v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v36, (const char (*)[12])"range_type:");
    pos = (Vector2)data::enumValToStr((data::VisionLevelType)*(_DWORD *)(v5 + 48));
    v12 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)&pos);
    v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            v12,
            (const char (*)[22])" entityMoveTo failed.");
    v14 = common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v13, entity);
    v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])" dest_pos:");
    Vector3::toString[abi:cxx11](&val, dest_pos);
    v16 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, &val);
    v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v16, (const char (*)[13])" dest_coord:");
    Coordinate::toString[abi:cxx11](&v38, (const Coordinate *const)(v5 + 64));
    v18 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, &v38);
    v19 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v18, (const char (*)[18])" scene_begin_pos:");
    Vector2::toString[abi:cxx11]((std::string *)&v39, &this->begin_pos_);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, (const std::string *)&v39);
    std::string::~string(&v39);
    std::string::~string(&v38);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v36);
    v9 = -1;
    goto LABEL_21;
  }
  toThisPtr<Entity>((Entity *)(v5 + 160));
  std::shared_ptr<Entity>::shared_ptr(&p_, (const std::shared_ptr<Entity> *)(v5 + 160));
  ZN13EntityVisitorCI27VisitorESt10shared_ptrI6EntityE((EntityVisitor *const)(v5 + 192), &p_);
  std::shared_ptr<Entity>::~shared_ptr(&p_);
  std::shared_ptr<Entity>::shared_ptr(&p_, (const std::shared_ptr<Entity> *)(v5 + 160));
  ZN13EntityVisitorCI27VisitorESt10shared_ptrI6EntityE((EntityVisitor *const)(v5 + 272), &p_);
  std::shared_ptr<Entity>::~shared_ptr(&p_);
  if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v20 = (unsigned __int64)(entity->_vptr_DescribalBase + 3);
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
    v20 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(Entity *))v20)(entity) == 1 )
  {
    Position = Entity::getPosition(entity);
    SceneGridComp::visitDiffGrids(this, Position, dest_pos, (Visitor *)(v5 + 192), (Visitor *)(v5 + 272));
LABEL_19:
    tmp_miss_vec = Visitor::getEntityVec((Visitor *const)(v5 + 192));
    v23 = std::move<std::vector<std::shared_ptr<Entity>> &>(tmp_miss_vec);
    std::vector<std::shared_ptr<Entity>>::operator=(miss_entity_vec, v23);
    tmp_meet_vec = Visitor::getEntityVec((Visitor *const)(v5 + 272));
    v24 = std::move<std::vector<std::shared_ptr<Entity>> &>(tmp_meet_vec);
    std::vector<std::shared_ptr<Entity>>::operator=(meet_entity_vec, v24);
    v9 = 0;
    goto LABEL_20;
  }
  cur_pos = Entity::getPosition(entity);
  Coordinate::Coordinate((Coordinate *const)(v5 + 96), 0, 0);
  Vector2::Vector2(&pos, cur_pos);
  SceneGridComp::posToCoordinate(this, *(data::VisionLevelType *)(v5 + 48), &pos, (Coordinate *)(v5 + 96));
  Coordinate::Coordinate((Coordinate *const)(v5 + 128), 0, 0);
  Vector2::Vector2(&pos, dest_pos);
  SceneGridComp::posToCoordinate(this, *(data::VisionLevelType *)(v5 + 48), &pos, (Coordinate *)(v5 + 128));
  if ( !operator==((const Coordinate *)(v5 + 96), (const Coordinate *)(v5 + 128)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    __f.__range_type = *(_DWORD *)(v5 + 48);
    __f.__this = this;
    __f.__cur_pos = cur_pos;
    __f.__dest_pos = dest_pos;
    __f.__miss_visitor = (EntityVisitor *)(v5 + 192);
    __f.__meet_visitor = (EntityVisitor *)(v5 + 272);
    v26.__meet_visitor = (EntityVisitor *)(v5 + 272);
    v26.__miss_visitor = (EntityVisitor *)(v5 + 192);
    v26.__dest_pos = dest_pos;
    v26.__cur_pos = cur_pos;
    v26.__this = this;
    *(_QWORD *)&v26.__range_type = *(_QWORD *)&__f.__range_type;
    std::function<ForeachPolicy ()(Player &)>::function<SceneGridComp::entityMoveTo(Entity &,Vector3 const&,std::vector<std::shared_ptr<Entity>> &,std::vector<std::shared_ptr<Entity>> &)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v39,
      v26);
    Scene::foreachPlayer(scene, (std::function<ForeachPolicy(Player&)> *)&v39);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v39);
    goto LABEL_19;
  }
  v9 = 0;
LABEL_20:
  EntityVisitor::~EntityVisitor((EntityVisitor *const)(v5 + 272));
  EntityVisitor::~EntityVisitor((EntityVisitor *const)(v5 + 192));
  std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v5 + 160));
LABEL_21:
  result = v9;
  if ( v41 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF801C) = 0LL;
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

// Line 284: range 0000000015CCFB34-0000000015CCFF12
ForeachPolicy __cdecl SceneGridComp::entityMoveTo(Entity &,Vector3 const&,std::vector<std::shared_ptr<Entity>> &,std::vector<std::shared_ptr<Entity>> &)::{lambda(Player &)#1}::operator()(
        const SceneGridComp::entityMoveTo::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 this; // rax
  __int64 v6; // r14
  SceneGridComp *v7; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  const Vector3 *Position; // rsi
  const Vector3 *cur_pos; // rdx
  SceneGridComp *v11; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  const Vector3 *v13; // rsi
  const Vector3 *dest_pos; // rdx
  EntityVisitor *miss_visitor; // r14
  Entity *v16; // rax
  EntityVisitor *meet_visitor; // r14
  Entity *v18; // rax
  ForeachPolicy result; // eax
  bool is_in_cur_sight; // [rsp+1Eh] [rbp-72h]
  bool is_in_dest_sight; // [rsp+1Fh] [rbp-71h]
  char v22[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 25 player_eye_entity_ptr:286";
  *(_QWORD *)(v2 + 16) = SceneGridComp::entityMoveTo(Entity &,Vector3 const&,std::vector<std::shared_ptr<Entity>> &,std::vector<std::shared_ptr<Entity>> &)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this = (__int64)__closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)(this + 8) >> 3) + 0x7FFF8000) )
    this = __asan_report_load8();
  v6 = *(_QWORD *)(this + 8);
  Player::getUid(player);
  Scene::getPlayerEyeEntity((Scene *const)(v2 + 32), v6);
  if ( !std::operator==<Entity>((const std::shared_ptr<Entity> *)(v2 + 32), 0LL) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v7 = __closure->__this;
    v8 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Position = Entity::getPosition(v8);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__cur_pos >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    cur_pos = __closure->__cur_pos;
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    is_in_cur_sight = SceneGridComp::isInSightRange(v7, __closure->__range_type, cur_pos, Position);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v11 = __closure->__this;
    v12 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v13 = Entity::getPosition(v12);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__dest_pos >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    dest_pos = __closure->__dest_pos;
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    is_in_dest_sight = SceneGridComp::isInSightRange(v11, __closure->__range_type, dest_pos, v13);
    if ( is_in_cur_sight && !is_in_dest_sight )
    {
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__miss_visitor >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      miss_visitor = __closure->__miss_visitor;
      v16 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      Visitor::visitEntity(miss_visitor, v16);
    }
    if ( !is_in_cur_sight && is_in_dest_sight )
    {
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__meet_visitor >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      meet_visitor = __closure->__meet_visitor;
      v18 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      Visitor::visitEntity(meet_visitor, v18);
    }
  }
  std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v2 + 32));
  result = FOREACH_CONTINUE;
  if ( v22 == (char *)v2 )
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

// Line 316: range 0000000015CD0844-0000000015CD0A6D
void __cdecl SceneGridComp::getSurroundEntityVec(
        SceneGridComp *const this,
        Entity *entity,
        std::vector<std::shared_ptr<Entity>> *entity_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  std::vector<std::shared_ptr<Entity>> *v7; // rdx
  std::vector<std::shared_ptr<Entity>> *tmp_entity_vec; // [rsp+28h] [rbp-B8h]
  EntityPtr p_; // [rsp+30h] [rbp-B0h] BYREF
  char v11[160]; // [rsp+40h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 48 11 visitor:317";
  *(_QWORD *)(v3 + 16) = SceneGridComp::getSurroundEntityVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -202116109;
  toThisPtr<Entity>((Entity *)&p_);
  ZN13EntityVisitorCI27VisitorESt10shared_ptrI6EntityE((EntityVisitor *const)(v3 + 48), &p_);
  std::shared_ptr<Entity>::~shared_ptr(&p_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)(this->_vptr_SceneCompBase + 10);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(SceneGridComp *const, Entity *, unsigned __int64))v6)(this, entity, v3 + 48);
  tmp_entity_vec = Visitor::getEntityVec((Visitor *const)(v3 + 48));
  v7 = std::move<std::vector<std::shared_ptr<Entity>> &>(tmp_entity_vec);
  std::vector<std::shared_ptr<Entity>>::operator=(entity_vec, v7);
  EntityVisitor::~EntityVisitor((EntityVisitor *const)(v3 + 48));
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
};

// Line 326: range 0000000015CD0A6E-0000000015CD0DEA
void __cdecl SceneGridComp::visitGridsInSight(SceneGridComp *const this, Entity *entity, Visitor *visitor)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 (__fastcall **vptr_Visitor)(Visitor *); // rax
  int v7; // eax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  char v10; // al
  const Vector3 *Position; // rax
  GridMgr *v12; // rax
  uint32_t i; // [rsp+24h] [rbp-8Ch]
  GridMgrUtr *grid_mgr_utr; // [rsp+30h] [rbp-80h]
  Vector2 pos; // [rsp+38h] [rbp-78h] BYREF
  char v17[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 9 coord:356";
  *(_QWORD *)(v3 + 16) = SceneGridComp::visitGridsInSight;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)visitor >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  vptr_Visitor = (__int64 (__fastcall **)(Visitor *))visitor->_vptr_Visitor;
  if ( *(_BYTE *)(((unsigned __int64)visitor->_vptr_Visitor >> 3) + 0x7FFF8000) )
    vptr_Visitor = (__int64 (__fastcall **)(Visitor *))__asan_report_load8();
  v7 = (*vptr_Visitor)(visitor);
  if ( v7 == 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v8 = (unsigned __int64)(entity->_vptr_DescribalBase + 3);
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(Entity *))v8)(entity) == 1 )
      goto LABEL_23;
    if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = (unsigned __int64)(entity->_vptr_DescribalBase + 3);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(Entity *))v9)(entity) == 13 )
LABEL_23:
      v10 = 0;
    else
      v10 = 1;
    if ( v10 )
    {
      SceneGridComp::visitPlayerEyeEntityDirectly(this, entity, visitor);
      goto LABEL_31;
    }
  }
  else if ( v7 > 0 && (unsigned int)(v7 - 2) <= 1 )
  {
    SceneGridComp::visitAvatarDirectly(this, entity, visitor);
    goto LABEL_31;
  }
  for ( i = 0; i < std::array<std::unique_ptr<GridMgr>,6ul>::size(&this->grid_mgr_arr_); ++i )
  {
    grid_mgr_utr = std::array<std::unique_ptr<GridMgr>,6ul>::operator[](&this->grid_mgr_arr_, i);
    if ( !std::operator==<GridMgr,std::default_delete<GridMgr>>(grid_mgr_utr, 0LL) )
    {
      Coordinate::Coordinate((Coordinate *const)(v3 + 32), 0, 0);
      Position = Entity::getPosition(entity);
      Vector2::Vector2(&pos, Position);
      SceneGridComp::posToCoordinate(this, (data::VisionLevelType)i, &pos, (Coordinate *)(v3 + 32));
      v12 = std::unique_ptr<GridMgr>::operator->(grid_mgr_utr);
      GridMgr::visitGridsInSight(v12, (const Coordinate *)(v3 + 32), visitor, 0);
    }
  }
LABEL_31:
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 364: range 0000000015CD0DEC-0000000015CD0FE6
std::set<std::shared_ptr<Region>> *__cdecl SceneGridComp::findPossibleRegionSet(
        std::set<std::shared_ptr<Region>> *retstr,
        SceneGridComp *const this,
        const Vector3 *pos,
        uint32_t room_id)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  const GridMgr *v7; // rax
  uint32_t i; // [rsp+28h] [rbp-88h]
  GridMgrUtr *grid_mgr_utr; // [rsp+30h] [rbp-80h]
  Vector2 v12; // [rsp+38h] [rbp-78h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 9 coord:374";
  *(_QWORD *)(v4 + 16) = SceneGridComp::findPossibleRegionSet;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  std::set<std::shared_ptr<Region>>::set(retstr);
  for ( i = 0; i < std::array<std::unique_ptr<GridMgr>,6ul>::size(&this->grid_mgr_arr_); ++i )
  {
    grid_mgr_utr = std::array<std::unique_ptr<GridMgr>,6ul>::operator[](&this->grid_mgr_arr_, i);
    if ( !std::operator==<GridMgr,std::default_delete<GridMgr>>(grid_mgr_utr, 0LL) )
    {
      Coordinate::Coordinate((Coordinate *const)(v4 + 32), 0, 0);
      Vector2::Vector2(&v12, pos);
      SceneGridComp::posToCoordinate(this, (data::VisionLevelType)i, &v12, (Coordinate *)(v4 + 32));
      v7 = std::unique_ptr<GridMgr>::operator->(grid_mgr_utr);
      GridMgr::getAllRegion(v7, (const Coordinate *)(v4 + 32), retstr);
    }
  }
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 383: range 0000000015CD1244-0000000015CD1314
void __cdecl SceneGridComp::visitAvatarDirectly(SceneGridComp *const this, Entity *entity, Visitor *visitor)
{
  Scene *scene; // rbx
  SceneGridComp::visitAvatarDirectly::<lambda(Player&)> v4; // [rsp-20h] [rbp-A0h]
  data::VisionLevelType range_type; // [rsp+2Ch] [rbp-54h]
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+30h] [rbp-50h] BYREF
  SceneGridComp::visitAvatarDirectly::<lambda(Player&)> __f; // [rsp+50h] [rbp-30h]

  range_type = SceneGridComp::getVisionLevelType(this, entity);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene = this->scene_;
  __f.__entity = entity;
  __f.__visitor = visitor;
  __f.__range_type = range_type;
  __f.__this = this;
  v4.__this = this;
  *(_OWORD *)&v4.__visitor = __PAIR128__(*(unsigned __int64 *)&__f.__range_type, (unsigned __int64)visitor);
  v4.__entity = entity;
  std::function<ForeachPolicy ()(Player &)>::function<SceneGridComp::visitAvatarDirectly(Entity &,Visitor &)::{lambda(Player &)#1},void,void>(
    &p_func,
    v4);
  Scene::foreachPlayer(scene, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
};

// Line 387: range 0000000015CD0FE8-0000000015CD1242
ForeachPolicy __cdecl SceneGridComp::visitAvatarDirectly(Entity &,Visitor &)::{lambda(Player &)#1}::operator()(
        const SceneGridComp::visitAvatarDirectly::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  SceneGridComp *this; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  const Vector3 *Position; // r15
  const Vector3 *v9; // rsi
  char v10; // al
  Visitor *visitor; // r14
  Entity *v12; // rax
  ForeachPolicy result; // eax
  char v14[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 avatar_ptr:389";
  *(_QWORD *)(v2 + 16) = SceneGridComp::visitAvatarDirectly(Entity &,Visitor &)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Player::getCurAvatar((Player *const)(v2 + 32));
  if ( !std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 32), 0LL) )
    goto LABEL_14;
  v5 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( !Entity::isOnScene((const Entity *const)v5) )
    goto LABEL_14;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this = __closure->__this;
  v7 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  Position = Entity::getPosition((const Entity *const)v7);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v9 = Entity::getPosition(__closure->__entity);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__range_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__range_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( SceneGridComp::isInSightRange(this, __closure->__range_type, v9, Position) )
    v10 = 1;
  else
LABEL_14:
    v10 = 0;
  if ( v10 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__visitor >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    visitor = __closure->__visitor;
    v12 = (Entity *)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Visitor::visitEntity(visitor, v12);
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 32));
  result = FOREACH_CONTINUE;
  if ( v14 == (char *)v2 )
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

// Line 400: range 0000000015CD15B0-0000000015CD1680
void __cdecl SceneGridComp::visitPlayerEyeEntityDirectly(SceneGridComp *const this, Entity *entity, Visitor *visitor)
{
  Scene *scene; // rbx
  SceneGridComp::visitPlayerEyeEntityDirectly::<lambda(Player&)> v4; // [rsp-20h] [rbp-A0h]
  data::VisionLevelType range_type; // [rsp+2Ch] [rbp-54h]
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+30h] [rbp-50h] BYREF
  SceneGridComp::visitPlayerEyeEntityDirectly::<lambda(Player&)> __f; // [rsp+50h] [rbp-30h]

  range_type = SceneGridComp::getVisionLevelType(this, entity);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene = this->scene_;
  __f.__entity = entity;
  __f.__visitor = visitor;
  __f.__range_type = range_type;
  __f.__this = this;
  v4.__this = this;
  *(_OWORD *)&v4.__visitor = __PAIR128__(*(unsigned __int64 *)&__f.__range_type, (unsigned __int64)visitor);
  v4.__entity = entity;
  std::function<ForeachPolicy ()(Player &)>::function<SceneGridComp::visitPlayerEyeEntityDirectly(Entity &,Visitor &)::{lambda(Player &)#1},void,void>(
    &p_func,
    v4);
  Scene::foreachPlayer(scene, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
};

// Line 404: range 0000000015CD1316-0000000015CD15AF
ForeachPolicy __cdecl SceneGridComp::visitPlayerEyeEntityDirectly(Entity &,Visitor &)::{lambda(Player &)#1}::operator()(
        const SceneGridComp::visitPlayerEyeEntityDirectly::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 this; // rax
  __int64 v6; // r14
  SceneGridComp *v7; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  const Vector3 *Position; // r15
  const Vector3 *v10; // rsi
  char v11; // al
  Visitor *visitor; // r14
  Entity *v13; // rax
  ForeachPolicy result; // eax
  char v15[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 25 player_eye_entity_ptr:406";
  *(_QWORD *)(v2 + 16) = SceneGridComp::visitPlayerEyeEntityDirectly(Entity &,Visitor &)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this = (__int64)__closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)(this + 8) >> 3) + 0x7FFF8000) )
    this = __asan_report_load8();
  v6 = *(_QWORD *)(this + 8);
  Player::getUid(player);
  Scene::getPlayerEyeEntity((Scene *const)(v2 + 32), v6);
  if ( !std::operator!=<Entity>((const std::shared_ptr<Entity> *)(v2 + 32), 0LL) )
    goto LABEL_17;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = __closure->__this;
  v8 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  Position = Entity::getPosition(v8);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v10 = Entity::getPosition(__closure->__entity);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__range_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__range_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( SceneGridComp::isInSightRange(v7, __closure->__range_type, v10, Position) )
    v11 = 1;
  else
LABEL_17:
    v11 = 0;
  if ( v11 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__visitor >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    visitor = __closure->__visitor;
    v13 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Visitor::visitEntity(visitor, v13);
  }
  std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v2 + 32));
  result = FOREACH_CONTINUE;
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

// Line 449: range 0000000015CD1682-0000000015CD18FE
void __cdecl SceneGridComp::visitDiffGrids(
        SceneGridComp *const this,
        const Vector3 *from_pos,
        const Vector3 *to_pos,
        Visitor *miss_visitor,
        Visitor *meet_visitor)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r13
  GridMgr *v8; // rax
  uint32_t i; // [rsp+38h] [rbp-A8h]
  GridMgrUtr *grid_mgr_utr; // [rsp+40h] [rbp-A0h]
  Vector2 pos; // [rsp+48h] [rbp-98h] BYREF
  char v15[144]; // [rsp+50h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 8 14 from_coord:458 64 8 12 to_coord:458";
  *(_QWORD *)(v5 + 16) = SceneGridComp::visitDiffGrids;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -202116352;
  for ( i = 0; i < std::array<std::unique_ptr<GridMgr>,6ul>::size(&this->grid_mgr_arr_); ++i )
  {
    grid_mgr_utr = std::array<std::unique_ptr<GridMgr>,6ul>::operator[](&this->grid_mgr_arr_, i);
    if ( !std::operator==<GridMgr,std::default_delete<GridMgr>>(grid_mgr_utr, 0LL) )
    {
      Coordinate::Coordinate((Coordinate *const)(v5 + 32), 0, 0);
      Coordinate::Coordinate((Coordinate *const)(v5 + 64), 0, 0);
      Vector2::Vector2(&pos, from_pos);
      SceneGridComp::posToCoordinate(this, (data::VisionLevelType)i, &pos, (Coordinate *)(v5 + 32));
      Vector2::Vector2(&pos, to_pos);
      SceneGridComp::posToCoordinate(this, (data::VisionLevelType)i, &pos, (Coordinate *)(v5 + 64));
      if ( !operator==((const Coordinate *)(v5 + 32), (const Coordinate *)(v5 + 64)) )
      {
        v8 = std::unique_ptr<GridMgr>::operator->(grid_mgr_utr);
        GridMgr::visitDiffGrids(
          v8,
          (const Coordinate *)(v5 + 32),
          (const Coordinate *)(v5 + 64),
          miss_visitor,
          meet_visitor);
      }
    }
  }
  if ( v15 == (char *)v5 )
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
};

// Line 471: range 0000000015CD1900-0000000015CD1B11
bool __cdecl SceneGridComp::isEntityMoveGrid(
        SceneGridComp *const this,
        Entity *entity,
        const Vector3 *prev_pos,
        uint32_t prev_room)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  const Vector3 *Position; // rax
  bool result; // al
  signed int i; // [rsp+20h] [rbp-A0h]
  Vector2 pos; // [rsp+28h] [rbp-98h] BYREF
  char v12[144]; // [rsp+30h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 8 9 coord:475 64 8 14 prev_coord:475";
  *(_QWORD *)(v4 + 16) = SceneGridComp::isEntityMoveGrid;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -202116352;
  for ( i = 0; (unsigned int)i < std::array<std::unique_ptr<GridMgr>,6ul>::size(&this->grid_mgr_arr_); ++i )
  {
    Coordinate::Coordinate((Coordinate *const)(v4 + 32), 0, 0);
    Coordinate::Coordinate((Coordinate *const)(v4 + 64), 0, 0);
    Position = Entity::getPosition(entity);
    Vector2::Vector2(&pos, Position);
    SceneGridComp::posToCoordinate(this, (data::VisionLevelType)i, &pos, (Coordinate *)(v4 + 32));
    Vector2::Vector2(&pos, prev_pos);
    SceneGridComp::posToCoordinate(this, (data::VisionLevelType)i, &pos, (Coordinate *)(v4 + 64));
    if ( operator!=((const Coordinate *)(v4 + 32), (const Coordinate *)(v4 + 64)) )
    {
      result = 1;
      goto LABEL_10;
    }
  }
  result = 0;
LABEL_10:
  if ( v12 == (char *)v4 )
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

// Line 487: range 0000000015CD1B12-0000000015CD1B2F
data::VisionLevelType __cdecl SceneGridComp::getVisionLevelType(const SceneGridComp *const this, Entity *entity)
{
  return Entity::getVisionLevelType(entity);
};

// Line 492: range 0000000015CD1B30-0000000015CD1DBF
void __cdecl SceneGridComp::posToCoordinate(
        const SceneGridComp *const this,
        data::VisionLevelType range_type,
        const Vector2 *pos,
        Coordinate *coord)
{
  float x; // xmm0_4
  __int64 v5; // rsi
  int32_t v6; // ecx
  char v7; // dl
  bool v8; // dl
  __int64 v9; // rsi
  float y; // xmm0_4
  int32_t v11; // ecx
  char v12; // dl
  bool v13; // dl
  int grid_width; // [rsp+2Ch] [rbp-34h]
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-30h] BYREF

  grid_width = SceneGridComp::getGridWidth(range_type);
  if ( grid_width )
  {
    if ( *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    x = pos->x;
    v5 = (((_BYTE)this + 20) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&this->begin_pos_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_pos_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v6 = (int)(float)((float)(x - this->begin_pos_.x) / (float)grid_width);
    v7 = *(_BYTE *)(((unsigned __int64)coord >> 3) + 0x7FFF8000);
    LOBYTE(v5) = v7 != 0;
    v8 = v7 != 0 && (char)(((unsigned __int8)coord & 7) + 3) >= v7;
    if ( v8 )
      __asan_report_store4(coord, v5, v8);
    coord->x = v6;
    v9 = (((_BYTE)pos + 4) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    y = pos->y;
    if ( *(_BYTE *)(((unsigned __int64)&this->begin_pos_.y >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->begin_pos_.y >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v11 = (int)(float)((float)(y - this->begin_pos_.y) / (float)grid_width);
    v12 = *(_BYTE *)(((unsigned __int64)&coord->y >> 3) + 0x7FFF8000);
    LOBYTE(v9) = v12 != 0;
    v13 = v12 != 0 && (char)((((_BYTE)coord + 4) & 7) + 3) >= v12;
    if ( v13 )
      __asan_report_store4(&coord->y, v9, v13);
    coord->y = v11;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_grid_comp.cpp",
      "posToCoordinate",
      496);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v17, (const char (*)[16])"0 == grid_width");
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
};

// Line 504: range 0000000015CD1DC0-0000000015CD20BD
int32_t __cdecl SceneGridComp::fillGridByGm(
        SceneGridComp *const this,
        const Vector2 *pos_begin,
        const Vector2 *pos_end)
{
  unsigned __int64 p_M_refcount; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t result; // eax
  int32_t v7; // eax
  int32_t i; // [rsp+24h] [rbp-CCh]
  int32_t j; // [rsp+28h] [rbp-C8h]
  size_t idx; // [rsp+30h] [rbp-C0h]
  const std::unique_ptr<GridMgr> *grid_mgr_utr; // [rsp+38h] [rbp-B8h]
  GridMgr v13; // [rsp+40h] [rbp-B0h] BYREF

  p_M_refcount = (unsigned __int64)&v13.mesh_ptr_._M_refcount;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      p_M_refcount = v4;
  }
  *(_QWORD *)p_M_refcount = 1102416563LL;
  *(_QWORD *)(p_M_refcount + 8) = "2 32 8 15 coord_begin:514 64 8 13 coord_end:515";
  *(_QWORD *)(p_M_refcount + 16) = SceneGridComp::fillGridByGm;
  v5 = (_DWORD *)(p_M_refcount >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  for ( idx = 0LL; idx <= 5; ++idx )
  {
    grid_mgr_utr = SceneGridComp::getGridMgr(this, (data::VisionLevelType)idx);
    if ( std::operator==<GridMgr,std::default_delete<GridMgr>>(grid_mgr_utr, 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v13.scene_,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/scene_grid_comp.cpp",
        "fillGridByGm",
        511);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
        (common::milog::MiLogStream *const)&v13.scene_,
        (const char (*)[21])"grid_mgr_utr is null");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v13.scene_);
      result = -1;
      goto LABEL_20;
    }
    Coordinate::Coordinate((Coordinate *const)(p_M_refcount + 32), 0, 0);
    Coordinate::Coordinate((Coordinate *const)(p_M_refcount + 64), 0, 0);
    SceneGridComp::posToCoordinate(this, (data::VisionLevelType)idx, pos_begin, (Coordinate *)(p_M_refcount + 32));
    SceneGridComp::posToCoordinate(this, (data::VisionLevelType)idx, pos_end, (Coordinate *)(p_M_refcount + 64));
    if ( *(_DWORD *)(p_M_refcount + 32) > *(_DWORD *)(p_M_refcount + 64) )
      std::swap<int>((int *)(p_M_refcount + 32), (int *)(p_M_refcount + 64));
    if ( *(_DWORD *)(p_M_refcount + 36) > *(_DWORD *)(p_M_refcount + 68) )
      std::swap<int>((int *)(p_M_refcount + 36), (int *)(p_M_refcount + 68));
    for ( i = *(_DWORD *)(p_M_refcount + 32); i <= *(_DWORD *)(p_M_refcount + 64); ++i )
    {
      for ( j = *(_DWORD *)(p_M_refcount + 36); j <= *(_DWORD *)(p_M_refcount + 68); ++j )
      {
        v7 = (unsigned int)std::unique_ptr<GridMgr>::operator->(grid_mgr_utr);
        GridMgr::getGrid(&v13, v7, i);
        std::shared_ptr<Grid>::~shared_ptr((std::shared_ptr<Grid> *const)&v13);
      }
    }
  }
  result = 0;
LABEL_20:
  if ( &v13.mesh_ptr_._M_refcount == (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)p_M_refcount )
  {
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_M_refcount >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_M_refcount = 1172321806LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_M_refcount >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};
