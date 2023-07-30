// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/misc/push_platform_mgr.cpp

// Line 41: range 000000001557D0BA-000000001557D102
int32_t __cdecl PushPlatformManager::init(PushPlatformManager *const this)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->is_init_ = 1;
  return 0;
};

// Line 50: range 000000001557D104-000000001557D2E0
int32_t __cdecl PushPlatformManager::start(PushPlatformManager *const this)
{
  PushPlatformManager *v2; // [rsp+18h] [rbp-68h] BYREF
  void (*__f[2])(PushPlatformManager *); // [rsp+20h] [rbp-60h] BYREF
  std::_Bind_helper<false,void (PushPlatformManager::*)(),PushPlatformManager*>::type p_func; // [rsp+30h] [rbp-50h] BYREF
  common::milog::MiLogStream v5; // [rsp+50h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(this);
  if ( !this->is_init_ )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/misc/push_platform_mgr.cpp",
      "start",
      53);
    common::milog::MiLogStream::operator()(&v5, "[PushPlatformManager] not init yet");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_run_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_run_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_run_);
    }
    this->is_run_ = 1;
    v2 = this;
    __f[0] = (void (*)(PushPlatformManager *))PushPlatformManager::workThread;
    __f[1] = 0LL;
    std::bind<void (PushPlatformManager::*)(void),PushPlatformManager*>(&p_func, __f, &v2, (PushPlatformManager **)__f);
    common::tools::ThreadGroup::createThread<std::_Bind<void (PushPlatformManager::*)(void) ()(PushPlatformManager*)>>(
      &this->thread_group_,
      &p_func);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/misc/push_platform_mgr.cpp",
      "start",
      62);
    common::milog::MiLogStream::operator()(&v5, "[PushPlatformManager] started");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return 0;
  }
};

// Line 69: range 000000001557D2E2-000000001557D409
int32_t __cdecl PushPlatformManager::stop(PushPlatformManager *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->is_run_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_run_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_run_);
  }
  if ( !this->is_run_ )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_run_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_run_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_run_);
  }
  this->is_run_ = 0;
  common::tools::ThreadGroup::joinAll(&this->thread_group_);
  common::milog::MiLogStream::create(
    &v2,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/misc/push_platform_mgr.cpp",
    "stop",
    79);
  common::milog::MiLogStream::operator()(&v2, "[PushPlatformManager] stoped");
  common::milog::MiLogStream::~MiLogStream(&v2);
  return 0;
};

// Line 86: range 000000001557D40A-000000001557D4A2
int32_t __cdecl PushPlatformManager::final(PushPlatformManager *const this)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->is_init_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_run_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_run_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_run_);
  }
  this->is_run_ = 0;
  common::tools::SafeQueue<Json::Value>::clear(&this->push_content_queue_);
  return 0;
};

// Line 96: range 000000001557D4A4-000000001557D8C6
void __cdecl PushPlatformManager::workThread(PushPlatformManager *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  pthread_t v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  std::shared_ptr<ConfigBase> *v7; // rax
  int v8; // r14d
  std::shared_ptr<ConfigBase> __r; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-D0h] BYREF
  char v11[176]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 40 12 json_obj:108";
  *(_QWORD *)(v1 + 16) = PushPlatformManager::workThread;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/misc/push_platform_mgr.cpp",
    "workThread",
    98);
  common::milog::MiLogStream::operator()(&v10, "[PushPlatformManager] workThread start");
  common::milog::MiLogStream::~MiLogStream(&v10);
  v4 = pthread_self();
  pthread_setname_np(v4, "push_platform");
  do
  {
    v5 = (unsigned __int64)std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::config_mgr_ptr);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8();
    v6 = *(_QWORD *)v5 + 32LL;
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8();
    (*(void (__fastcall **)(std::shared_ptr<ConfigBase> *, unsigned __int64))v6)(&__r, v5);
    v7 = (std::shared_ptr<ConfigBase> *)ZTWN11ThreadLocal15config_base_ptrE(&__r);
    std::shared_ptr<ConfigBase>::operator=(v7, &__r);
    std::shared_ptr<ConfigBase>::~shared_ptr(&__r);
    Json::Value::Value(v1 + 48, 0LL);
    if ( !common::tools::SafeQueue<Json::Value>::pop(&this->push_content_queue_, (Json::Value *)(v1 + 48)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->is_run_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_run_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_run_);
      }
      if ( this->is_run_ )
      {
        usleep(0x3E8u);
        v8 = 0;
      }
      else
      {
        v8 = 1;
      }
    }
    else
    {
      if ( PushPlatformManager::pushJsonValueToPlatform(this, (const Json::Value *)(v1 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v10,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/misc/push_platform_mgr.cpp",
          "workThread",
          128);
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          &v10,
          (const char (*)[39])"push player tags to push platform fail");
        common::milog::MiLogStream::~MiLogStream(&v10);
      }
      v8 = 2;
    }
    Json::Value::~Value((Json::Value_0 *const)(v1 + 48));
  }
  while ( !v8 || v8 == 2 );
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/misc/push_platform_mgr.cpp",
    "workThread",
    132);
  common::milog::MiLogStream::operator()(&v10, "[PushPlatformManager] workThread stop");
  common::milog::MiLogStream::~MiLogStream(&v10);
  if ( v11 == (char *)v1 )
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

// Line 137: range 000000001557D8C8-000000001557DA41
void __fastcall PushPlatformManager::asyncSetPlayerLevelTags(
        PushPlatformManager *const this,
        uint32_t uid,
        uint32_t channel_id,
        uint32_t level,
        PushPlatformManager **a5,
        const std::_Placeholder<1> *a6)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  char *v9; // [rsp+0h] [rbp-D0h]
  unsigned int *v10; // [rsp+8h] [rbp-C8h]
  std::_Bind<std::string (PushPlatformManager::*(PushPlatformManager*,std::_Placeholder<1>))(unsigned int)> *channel_ida; // [rsp+10h] [rbp-C0h]
  PushPlatformManager *v12; // [rsp+28h] [rbp-A8h] BYREF
  std::string *(*__f[2])(std::string *__return_ptr __struct_ptr, PushPlatformManager *, unsigned int); // [rsp+30h] [rbp-A0h] BYREF
  std::_Bind_helper<false,std::string (PushPlatformManager::*)(unsigned int),PushPlatformManager*,const std::_Placeholder<1>&>::type v14; // [rsp+40h] [rbp-90h] BYREF
  char v15[12][9]; // [rsp+60h] [rbp-70h] BYREF

  channel_ida = (std::_Bind<std::string (PushPlatformManager::*(PushPlatformManager*,std::_Placeholder<1>))(unsigned int)> *)__PAIR64__(uid, channel_id);
  HIDWORD(v10) = level;
  v6 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 4 9 level:136";
  *(_QWORD *)(v6 + 16) = PushPlatformManager::asyncSetPlayerLevelTags;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202116348;
  *(_DWORD *)(v6 + 32) = HIDWORD(v10);
  v12 = this;
  __f[0] = (std::string *(*)(std::string *__return_ptr __struct_ptr, PushPlatformManager *, unsigned int))PushPlatformManager::genPlayerLevelTags[abi:cxx11];
  __f[1] = 0LL;
  std::bind<std::string (PushPlatformManager::*)(unsigned int),PushPlatformManager*,std::_Placeholder<1> const&>(
    &v14,
    __f,
    &v12,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    a5,
    a6);
  PushPlatformManager::asyncSetPlayerTags<char const(&)[9],unsigned int &,std::_Bind<std::string (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>>(
    this,
    HIDWORD(channel_ida),
    (uint32_t)channel_ida,
    (const char (*)[9])"add_tags",
    (unsigned int *)(v6 + 32),
    &v14,
    v15,
    v10,
    channel_ida);
  if ( v9 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 144: range 000000001557DA42-000000001557DC79
// local variable allocation has failed, the output may be wrong!
void __fastcall PushPlatformManager::asyncSetPlayerLanguageTags(
        PushPlatformManager *const this,
        uint32_t uid,
        uint32_t channel_id,
        uint32_t new_language_type,
        PushPlatformManager **old_language_type,
        const std::_Placeholder<1> *a6)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  _DWORD *v8; // r12
  PushPlatformManager **v9; // r8
  const std::_Placeholder<1> *v10; // r9
  const char (*v11)[9]; // [rsp-8h] [rbp-138h]
  __m128i v12; // [rsp+0h] [rbp-130h] BYREF
  const char (*v13)[12]; // [rsp+10h] [rbp-120h]
  unsigned int *v14; // [rsp+18h] [rbp-118h]
  std::_Bind<const std::string& (PushPlatformManager::*(PushPlatformManager*,std::_Placeholder<1>))(unsigned int)> *channel_ida; // [rsp+20h] [rbp-110h] OVERLAPPED
  PushPlatformManager *thisa; // [rsp+28h] [rbp-108h]
  PushPlatformManager *v17; // [rsp+30h] [rbp-100h] BYREF
  PushPlatformManager *v18; // [rsp+38h] [rbp-F8h] BYREF
  const std::string *(*v19[2])(PushPlatformManager *, unsigned int); // [rsp+40h] [rbp-F0h] BYREF
  const std::string *(*__f[2])(PushPlatformManager *, unsigned int); // [rsp+50h] [rbp-E0h] BYREF
  std::_Bind_helper<false,const std::string& (PushPlatformManager::*)(unsigned int),PushPlatformManager*,const std::_Placeholder<1>&>::type v21; // [rsp+60h] [rbp-D0h] BYREF
  std::_Bind_helper<false,const std::string& (PushPlatformManager::*)(unsigned int),PushPlatformManager*,const std::_Placeholder<1>&>::type v22; // [rsp+80h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+A0h] [rbp-90h] BYREF

  thisa = this;
  channel_ida = (std::_Bind<const std::string& (PushPlatformManager::*(PushPlatformManager*,std::_Placeholder<1>))(unsigned int)> *)__PAIR64__(uid, channel_id);
  v14 = (unsigned int *)__PAIR64__(new_language_type, (unsigned int)old_language_type);
  v6 = (unsigned __int64)v23;
  v13 = (const char (*)[12])v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 4 21 new_language_type:143 64 4 21 old_language_type:143";
  *(_QWORD *)(v6 + 16) = PushPlatformManager::asyncSetPlayerLanguageTags;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -202116348;
  *(_DWORD *)(v6 + 48) = HIDWORD(v14);
  *(_DWORD *)(v6 + 64) = (_DWORD)v14;
  if ( *(_DWORD *)(v6 + 48) != *(_DWORD *)(v6 + 64) )
  {
    v18 = thisa;
    v12.m128i_i64[0] = (__int64)PushPlatformManager::genPlayerLanguageTags[abi:cxx11];
    v12.m128i_i64[1] = 0LL;
    *(__m128i *)__f = _mm_load_si128(&v12);
    std::bind<std::string const& (PushPlatformManager::*)(unsigned int),PushPlatformManager*,std::_Placeholder<1> const&>(
      &v22,
      __f,
      &v18,
      (const std::_Placeholder<1> *)&std::placeholders::_1,
      old_language_type,
      a6);
    v17 = thisa;
    v19[0] = (const std::string *(*)(PushPlatformManager *, unsigned int))PushPlatformManager::genPlayerLanguageTags[abi:cxx11];
    v19[1] = 0LL;
    std::bind<std::string const& (PushPlatformManager::*)(unsigned int),PushPlatformManager*,std::_Placeholder<1> const&>(
      &v21,
      v19,
      &v17,
      (const std::_Placeholder<1> *)&std::placeholders::_1,
      v9,
      v10);
    PushPlatformManager::asyncSetPlayerTags<char const(&)[9],unsigned int &,std::_Bind<std::string const& (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>,char const(&)[12],unsigned int &,std::_Bind<std::string const& (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>>(
      thisa,
      HIDWORD(channel_ida),
      (uint32_t)channel_ida,
      (const char (*)[9])"add_tags",
      (unsigned int *)(v6 + 48),
      &v21,
      (const char (*)[12])"remove_tags",
      (unsigned int *)(v6 + 64),
      &v22,
      v11,
      (unsigned int *)v12.m128i_i64[0],
      (std::_Bind<const std::string& (PushPlatformManager::*(PushPlatformManager*,std::_Placeholder<1>))(unsigned int)> *)v12.m128i_i64[1],
      v13,
      v14,
      channel_ida);
  }
  if ( v13 == (const char (*)[12])v6 )
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
};

// Line 159: range 000000001557DC7A-000000001557DEA2
// local variable allocation has failed, the output may be wrong!
void __fastcall PushPlatformManager::asyncSetPlayerLevelAndLanguageTags(
        PushPlatformManager *const this,
        uint32_t uid,
        uint32_t channel_id,
        uint32_t level,
        PushPlatformManager **language_type,
        const std::_Placeholder<1> *a6)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  _DWORD *v8; // r12
  PushPlatformManager **v9; // r8
  const std::_Placeholder<1> *v10; // r9
  const char (*v11)[9]; // [rsp-8h] [rbp-138h]
  __m128i v12; // [rsp+0h] [rbp-130h] BYREF
  const char (*v13)[9]; // [rsp+10h] [rbp-120h]
  unsigned int *v14; // [rsp+18h] [rbp-118h]
  std::_Bind<const std::string& (PushPlatformManager::*(PushPlatformManager*,std::_Placeholder<1>))(unsigned int)> *channel_ida; // [rsp+20h] [rbp-110h] OVERLAPPED
  PushPlatformManager *thisa; // [rsp+28h] [rbp-108h]
  PushPlatformManager *v17; // [rsp+30h] [rbp-100h] BYREF
  PushPlatformManager *v18; // [rsp+38h] [rbp-F8h] BYREF
  std::string *(*v19[2])(std::string *__return_ptr __struct_ptr, PushPlatformManager *, unsigned int); // [rsp+40h] [rbp-F0h] BYREF
  const std::string *(*__f[2])(PushPlatformManager *, unsigned int); // [rsp+50h] [rbp-E0h] BYREF
  std::_Bind_helper<false,std::string (PushPlatformManager::*)(unsigned int),PushPlatformManager*,const std::_Placeholder<1>&>::type v21; // [rsp+60h] [rbp-D0h] BYREF
  std::_Bind_helper<false,const std::string& (PushPlatformManager::*)(unsigned int),PushPlatformManager*,const std::_Placeholder<1>&>::type v22; // [rsp+80h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+A0h] [rbp-90h] BYREF

  thisa = this;
  channel_ida = (std::_Bind<const std::string& (PushPlatformManager::*(PushPlatformManager*,std::_Placeholder<1>))(unsigned int)> *)__PAIR64__(uid, channel_id);
  v14 = (unsigned int *)__PAIR64__(level, (unsigned int)language_type);
  v6 = (unsigned __int64)v23;
  v13 = (const char (*)[9])v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 4 9 level:158 64 4 17 language_type:158";
  *(_QWORD *)(v6 + 16) = PushPlatformManager::asyncSetPlayerLevelAndLanguageTags;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -202116348;
  *(_DWORD *)(v6 + 48) = HIDWORD(v14);
  *(_DWORD *)(v6 + 64) = (_DWORD)v14;
  v18 = thisa;
  v12.m128i_i64[0] = (__int64)PushPlatformManager::genPlayerLanguageTags[abi:cxx11];
  v12.m128i_i64[1] = 0LL;
  *(__m128i *)__f = _mm_load_si128(&v12);
  std::bind<std::string const& (PushPlatformManager::*)(unsigned int),PushPlatformManager*,std::_Placeholder<1> const&>(
    &v22,
    __f,
    &v18,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    language_type,
    a6);
  v17 = thisa;
  v19[0] = (std::string *(*)(std::string *__return_ptr __struct_ptr, PushPlatformManager *, unsigned int))PushPlatformManager::genPlayerLevelTags[abi:cxx11];
  v19[1] = 0LL;
  std::bind<std::string (PushPlatformManager::*)(unsigned int),PushPlatformManager*,std::_Placeholder<1> const&>(
    &v21,
    v19,
    &v17,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v9,
    v10);
  PushPlatformManager::asyncSetPlayerTags<char const(&)[9],unsigned int &,std::_Bind<std::string (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>,char const(&)[9],unsigned int &,std::_Bind<std::string const& (PushPlatformManager::*)(unsigned int) ()(PushPlatformManager*,std::_Placeholder<1>)>>(
    thisa,
    HIDWORD(channel_ida),
    (uint32_t)channel_ida,
    (const char (*)[9])"add_tags",
    (unsigned int *)(v6 + 48),
    &v21,
    (const char (*)[9])"add_tags",
    (unsigned int *)(v6 + 64),
    &v22,
    v11,
    (unsigned int *)v12.m128i_i64[0],
    (std::_Bind<std::string (PushPlatformManager::*(PushPlatformManager*,std::_Placeholder<1>))(unsigned int)> *)v12.m128i_i64[1],
    v13,
    v14,
    channel_ida);
  if ( v13 == (const char (*)[9])v6 )
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
};

// Line 168: range 000000001557DEA4-000000001557E110
int32_t __cdecl PushPlatformManager::pushJsonValueToPlatform(
        PushPlatformManager *const this,
        const Json::Value *json_obj)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool isPushPlatformClosed; // r14
  int32_t v7; // r14d
  GameserverService *v8; // r14
  int32_t result; // eax
  std::shared_ptr<Config> v10; // [rsp+10h] [rbp-1C0h] BYREF
  std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> p_func; // [rsp+20h] [rbp-1B0h] BYREF
  char v12[400]; // [rsp+40h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 240 16 http_request:175";
  *(_QWORD *)(v2 + 16) = PushPlatformManager::pushJsonValueToPlatform;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862729] = -202116109;
  v4[536862730] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10);
  isPushPlatformClosed = FeatureSwitchMgr::isPushPlatformClosed(&v5->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v10);
  if ( isPushPlatformClosed )
  {
    v7 = 0;
  }
  else
  {
    common::minet::http_client::HttpRequest::HttpRequest((common::minet::http_client::HttpRequest *const)(v2 + 48));
    PushPlatformManager::fillPushHttpRequest(this, (common::minet::http_client::HttpRequest *)(v2 + 48), json_obj);
    v8 = ServiceBox::findService<GameserverService>();
    std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::function(
      &p_func,
      0LL);
    v7 = GameserverService::asyncHttpRequest(
           v8,
           (const common::minet::http_client::HttpRequest *)(v2 + 48),
           5LL,
           0,
           &p_func);
    std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::~function(&p_func);
    common::minet::http_client::HttpRequest::~HttpRequest((common::minet::http_client::HttpRequest *const)(v2 + 48));
  }
  result = v7;
  if ( v12 == (char *)v2 )
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

// Line 181: range 000000001557E112-000000001557E6BF
void __cdecl PushPlatformManager::fillPushHttpRequest(
        PushPlatformManager *const this,
        common::minet::http_client::HttpRequest *http_request,
        const Json::Value *json_obj)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::string *p_push_tags_host; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool push_tags_is_ssl; // cl
  const char *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rcx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-101h] BYREF
  Json::String v27; // [rsp+30h] [rbp-100h] BYREF
  std::string v28; // [rsp+50h] [rbp-E0h] BYREF
  char v29[192]; // [rsp+70h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 16 14 config_ptr:182 80 48 15 json_writer:192";
  *(_QWORD *)(v3 + 16) = PushPlatformManager::fillPushHttpRequest;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862724] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 48));
  p_push_tags_host = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48))->push_tags_host;
  std::string::operator=(http_request, p_push_tags_host);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
  std::string::operator=(&http_request->port, &v7->push_tags_port);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
  std::string::operator=(&http_request->uri, &v8->push_tags_uri);
  if ( *(_BYTE *)(((unsigned __int64)&http_request->method >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&http_request->method >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&http_request->method);
  }
  http_request->method = HTTP_POST;
  if ( *(_BYTE *)(((unsigned __int64)&http_request->version >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)http_request - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&http_request->version >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_store4(&http_request->version);
  }
  http_request->version = HTTP_VER_1_0;
  v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
  if ( *(char *)(((unsigned __int64)&v9->push_tags_is_ssl >> 3) + 0x7FFF8000) < 0 )
    v9 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v9->push_tags_is_ssl);
  push_tags_is_ssl = v9->push_tags_is_ssl;
  if ( *(char *)(((unsigned __int64)&http_request->is_ssl >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&http_request->is_ssl);
  http_request->is_ssl = push_tags_is_ssl;
  Json::FastWriter::FastWriter((Json::FastWriter *const)(v3 + 80));
  std::allocator<char>::allocator(&__a);
  Json::FastWriter::write[abi:cxx11](&v27, (Json::FastWriter *const)(v3 + 80), json_obj);
  v11 = (const char *)std::string::c_str(&v27);
  std::string::basic_string<std::allocator<char>>(&v28, v11, &__a);
  std::string::operator=(&http_request->body, &v28);
  std::string::~string(&v28);
  std::string::~string(&v27);
  std::allocator<char>::~allocator(&__a);
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&v28,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/misc/push_platform_mgr.cpp",
    "fillPushHttpRequest",
    195);
  v12 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
          (common::milog::MiLogStream *const)&v28,
          (const char (*)[20])" http_request.host:");
  v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, &http_request->host);
  v14 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v13, (const char (*)[20])" http_request.port:");
  v15 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, &http_request->port);
  v16 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v15, (const char (*)[19])" http_request.uri:");
  v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, &http_request->uri);
  v18 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          v17,
          (const char (*)[22])" http_request.method:");
  v19 = common::milog::MiLogStream::operator<<<common::minet::http_client::HttpMethod,(common::minet::http_client::HttpMethod*)0>(
          v18,
          &http_request->method);
  v20 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          v19,
          (const char (*)[23])" http_request.version:");
  v21 = common::milog::MiLogStream::operator<<<common::minet::http_client::HttpVersion,(common::minet::http_client::HttpVersion*)0>(
          v20,
          &http_request->version);
  v22 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          v21,
          (const char (*)[22])" http_request.is_ssl:");
  if ( *(char *)(((unsigned __int64)&http_request->is_ssl >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&http_request->is_ssl);
  v23 = common::milog::MiLogStream::operator<<(v22, http_request->is_ssl);
  v24 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v23, (const char (*)[20])" http_request.body:");
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v24, &http_request->body);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v28);
  Json::FastWriter::~FastWriter((Json::FastWriter *const)(v3 + 80));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 48));
  if ( v29 == (char *)v3 )
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

// Line 205: range 000000001557E6C0-000000001557E794
std::string *__cdecl PushPlatformManager::genPlayerLevelTags[abi:cxx11](
        std::string *retstr,
        PushPlatformManager *const this,
        uint32_t level)
{
  std::string __rhs; // [rsp+20h] [rbp-30h] BYREF

  std::to_string(&__rhs, level);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::operator+<char>(retstr, off_25809FA0, &__rhs);
  std::string::~string(&__rhs);
  return retstr;
};

// Line 210: range 000000001557E796-000000001557E9AB
const std::string *__fastcall PushPlatformManager::genPlayerLanguageTags[abi:cxx11](
        PushPlatformManager *const this,
        uint32_t type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::string *result; // rax
  std::allocator<char> __a; // [rsp+17h] [rbp-99h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::string >,false> __y; // [rsp+18h] [rbp-98h] BYREF
  char v8[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 type:209 64 8 8 iter:213";
  *(_QWORD *)(v2 + 16) = PushPlatformManager::genPlayerLanguageTags[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = type;
  if ( !(_BYTE)`guard variable for'PushPlatformManager::genPlayerLanguageTags[abi:cxx11](unsigned int)::none
    && __cxa_guard_acquire(&`guard variable for'PushPlatformManager::genPlayerLanguageTags[abi:cxx11](unsigned int)::none) )
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)&PushPlatformManager::genPlayerLanguageTags[abi:cxx11](unsigned int)::none,
      "NONE",
      &__a);
    __cxa_guard_release(&`guard variable for'PushPlatformManager::genPlayerLanguageTags[abi:cxx11](unsigned int)::none);
    __cxa_atexit(
      (void (__fastcall *)(void *))&std::string::~string,
      (void *)&PushPlatformManager::genPlayerLanguageTags[abi:cxx11](unsigned int)::none,
      &_dso_handle);
    std::allocator<char>::~allocator(&__a);
  }
  *(std::unordered_map<unsigned int,std::string>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::string>::find(
                                                                           &language_desc_map,
                                                                           (const std::unordered_map<unsigned int,std::string>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::string>::end(&language_desc_map)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::string>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::string >,false> *)(v2 + 64),
         &__y) )
  {
    result = &PushPlatformManager::genPlayerLanguageTags[abi:cxx11](unsigned int)::none;
  }
  else
  {
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::string>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::string >,false,false> *const)(v2 + 64))->second;
  }
  if ( v8 == (char *)v2 )
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

// Line 220: range 000000001557E9AC-000000001557EE61
std::string *__cdecl PushPlatformManager::genSignStr[abi:cxx11](
        std::string *retstr,
        PushPlatformManager *const this,
        uint32_t timestamp)
{
  double v3; // xmm0_8
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-191h] BYREF
  std::string __rhs; // [rsp+30h] [rbp-190h] BYREF
  std::string __lhs; // [rsp+50h] [rbp-170h] BYREF
  std::string v20; // [rsp+70h] [rbp-150h] BYREF
  std::string v21; // [rsp+90h] [rbp-130h] BYREF
  char v22[272]; // [rsp+B0h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 7 ret:226 64 16 14 config_ptr:221 96 32 8 sign:223 160 32 11 content:224";
  *(_QWORD *)(v4 + 16) = PushPlatformManager::genSignStr[abi:cxx11];
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862724] = -218959118;
  v6[536862726] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 64));
  std::string::basic_string(v4 + 96);
  std::to_string(&v21, timestamp);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&v7->app_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v7->app_id >> 3) + 0x7FFF8000) <= 3 )
  {
    v3 = __asan_report_load4();
  }
  std::to_string(&__rhs, v7->app_id);
  std::operator+<char>(&__lhs, "app_id=", &__rhs);
  std::operator+<char>(&v20, &__lhs, "&ts=");
  std::operator+<char>((std::string *)(v4 + 160), &v20, &v21);
  std::string::~string(&v20);
  std::string::~string(&__lhs);
  std::string::~string(&__rhs);
  std::string::~string(&v21);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  *(_DWORD *)(v4 + 48) = common::tools::Sha256SignUtils::genSha256Sign(
                           &v8->push_tags_app_secret,
                           (const std::string *)(v4 + 160),
                           (std::string *)(v4 + 96));
  if ( *(_DWORD *)(v4 + 48) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/misc/push_platform_mgr.cpp",
      "genSignStr",
      229);
    v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           (common::milog::MiLogStream *const)&v21,
           (const char (*)[27])off_2580A180);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 48));
    v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" key:");
    v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &v12->push_tags_app_secret);
    v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])" content:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, (const std::string *)(v4 + 160));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v21);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(retstr, byte_257A0640, &__a);
    std::allocator<char>::~allocator(&__a);
  }
  else
  {
    std::string::basic_string(retstr, v4 + 96, v3);
  }
  std::string::~string((void *)(v4 + 160));
  std::string::~string((void *)(v4 + 96));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 64));
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
  return retstr;
};
