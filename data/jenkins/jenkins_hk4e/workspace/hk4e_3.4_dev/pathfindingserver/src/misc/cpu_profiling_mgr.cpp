// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/misc/cpu_profiling_mgr.cpp

// Line 18: range 000000000CB6E02E-000000000CB6E081
void __cdecl CPUProfilingMgr::CPUProfilingMgr(CPUProfilingMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->mode_ = CPMT_NONE;
  CPUProfilingMgr::Reset(this);
};

// Line 23: range 000000000CB6E082-000000000CB6E46D
void __fastcall CPUProfilingMgr::AddObstacleInfo(
        CPUProfilingMgr *const this,
        uint64_t cost_time,
        const NavMeshObstacle *obstacle,
        DynamicUniqueTokenType uid)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  const Vector3f *Position; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  const Vector3f *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  const Vector3f *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  int Handle; // [rsp+28h] [rbp-D8h] BYREF
  Vector3f val; // [rsp+2Ch] [rbp-D4h] BYREF
  Vector3f WorldExtents; // [rsp+38h] [rbp-C8h] BYREF
  Vector3f v32; // [rsp+44h] [rbp-BCh] BYREF
  common::milog::MiLogStream v33; // [rsp+50h] [rbp-B0h] BYREF
  char v34[144]; // [rsp+70h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 uid:22 64 8 12 cost_time:22";
  *(_QWORD *)(v4 + 16) = CPUProfilingMgr::AddObstacleInfo;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116352;
  *(_QWORD *)(v4 + 64) = cost_time;
  *(_DWORD *)(v4 + 48) = uid;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  if ( this->mode_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    if ( this->mode_ == CPMT_DETAIL_LOG )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        0x29u,
        "./src/misc/cpu_profiling_mgr.cpp",
        "AddObstacleInfo",
        29);
      v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v33, (const char (*)[10])"obstacle,");
      v8 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
             v7,
             (const unsigned __int64 *)(v4 + 64));
      v9 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v8, (const char (*)[2])",");
      Position = NavMeshObstacle::GetPosition(obstacle);
      v11 = common::milog::MiLogStream::operator<<<float,(float *)0>(v9, &Position->x);
      v12 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v11, (const char (*)[2])",");
      v13 = NavMeshObstacle::GetPosition(obstacle);
      v14 = common::milog::MiLogStream::operator<<<float,(float *)0>(v12, &v13->y);
      v15 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v14, (const char (*)[2])",");
      v16 = NavMeshObstacle::GetPosition(obstacle);
      v17 = common::milog::MiLogStream::operator<<<float,(float *)0>(v15, &v16->z);
      v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])",");
      val = NavMeshObstacle::GetWorldExtents(obstacle);
      v19 = common::milog::MiLogStream::operator<<<float,(float *)0>(v18, &val.x);
      v20 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v19, (const char (*)[2])",");
      WorldExtents = NavMeshObstacle::GetWorldExtents(obstacle);
      v21 = common::milog::MiLogStream::operator<<<float,(float *)0>(v20, &WorldExtents.y);
      v22 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v21, (const char (*)[2])",");
      v32 = NavMeshObstacle::GetWorldExtents(obstacle);
      v23 = common::milog::MiLogStream::operator<<<float,(float *)0>(v22, &v32.z);
      v24 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v23, (const char (*)[2])",");
      Handle = NavMeshObstacle::GetHandle(obstacle);
      v25 = common::milog::MiLogStream::operator<<<int,(int *)0>(v24, &Handle);
      v26 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v25, (const char (*)[2])",");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v33);
    }
  }
  if ( v34 == (char *)v4 )
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

// Line 38: range 000000000CB6E46E-000000000CB6E781
void __fastcall CPUProfilingMgr::AddQueryPathInfo(
        CPUProfilingMgr *const this,
        uint64_t cost_time,
        const proto::QueryPathReq *req,
        DynamicUniqueTokenType uid)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  proto::QueryPathReq_OptionType val; // [rsp+2Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 uid:37 64 8 12 cost_time:37";
  *(_QWORD *)(v4 + 16) = CPUProfilingMgr::AddQueryPathInfo;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116352;
  *(_QWORD *)(v4 + 64) = cost_time;
  *(_DWORD *)(v4 + 48) = uid;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  if ( this->mode_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)this->count_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this->count_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(this->count_);
    }
    ++this->count_[0];
    if ( *(_BYTE *)(((unsigned __int64)this->cost_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->cost_, (((_BYTE)this + 4) & 7u) + 3);
    this->cost_[0] += *(_QWORD *)(v4 + 64);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    if ( this->mode_ == CPMT_DETAIL_LOG )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        0x29u,
        "./src/misc/cpu_profiling_mgr.cpp",
        "AddQueryPathInfo",
        46);
      v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v15, (const char (*)[12])"path_query_");
      val = proto::QueryPathReq::query_type(req);
      v8 = common::milog::MiLogStream::operator<<<proto::QueryPathReq_OptionType,(proto::QueryPathReq_OptionType*)0>(
             v7,
             &val);
      v9 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v8, (const char (*)[2])",");
      v10 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v9,
              (const unsigned __int64 *)(v4 + 64));
      v11 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v10, (const char (*)[2])",");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
  }
  if ( v16 == (char *)v4 )
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

// Line 51: range 000000000CB6E782-000000000CB6E853
void __cdecl CPUProfilingMgr::AddObstacleCount(CPUProfilingMgr *const this, uint64_t cost)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  if ( this->mode_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->count_[1] >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->count_[1] >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->count_[1]);
    }
    ++this->count_[1];
    if ( *(_BYTE *)(((unsigned __int64)&this->cost_[1] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->cost_[1], cost);
    this->cost_[1] += cost;
  }
};

// Line 59: range 000000000CB6E854-000000000CB6EB55
void __fastcall CPUProfilingMgr::AddObstacleTotal(
        CPUProfilingMgr *const this,
        uint64_t cost_time,
        uint32_t change_count,
        DynamicUniqueTokenType uid)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-A0h] BYREF
  char v15[128]; // [rsp+40h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 15 change_count:58 48 4 6 uid:58 64 8 12 cost_time:58";
  *(_QWORD *)(v4 + 16) = CPUProfilingMgr::AddObstacleTotal;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202116352;
  *(_QWORD *)(v4 + 64) = cost_time;
  *(_DWORD *)(v4 + 32) = change_count;
  *(_DWORD *)(v4 + 48) = uid;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  if ( this->mode_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->count_[2] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->count_[2] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->count_[2]);
    }
    this->count_[2] += *(_DWORD *)(v4 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&this->cost_[2] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->cost_[2], (((_BYTE)this + 12) & 7u) + 3);
    this->cost_[2] += *(_QWORD *)(v4 + 64);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    if ( this->mode_ == CPMT_DETAIL_LOG )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        0x29u,
        "./src/misc/cpu_profiling_mgr.cpp",
        "AddObstacleTotal",
        67);
      v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v14, (const char (*)[14])"obstacle_avg,");
      v8 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
             v7,
             (const unsigned __int64 *)(v4 + 64));
      v9 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v8, (const char (*)[2])",");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 32));
      v11 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v10, (const char (*)[2])",");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
  }
  if ( v15 == (char *)v4 )
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

// Line 73: range 000000000CB6EB56-000000000CB6EB98
void __cdecl CPUProfilingMgr::Reset(CPUProfilingMgr *const this)
{
  memset(this->count_, 0, sizeof(this->count_));
  memset(this->cost_, 0, sizeof(this->cost_));
};
