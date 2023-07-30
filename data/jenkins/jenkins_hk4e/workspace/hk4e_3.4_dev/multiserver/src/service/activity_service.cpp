// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/activity_service.cpp

// Line 21: range 000000000DE8B7A6-000000000DE8BE64
int32_t __cdecl ActivityService::init(ActivityService *const this, common::tools::PTree *pt)
{
  std::optional<common::tools::PTree> *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  std::vector<ActivityThreadLocal> *p_activity_thread_local_vec; // rcx
  int v7; // eax
  common::tools::PTree *v8; // r14
  common::tools::PTree *v9; // r14
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned int (__fastcall *v12)(unsigned __int64, _QWORD, _QWORD, _QWORD); // r8
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-E1h] BYREF
  uint32_t http_thread_num; // [rsp+20h] [rbp-E0h]
  uint32_t http_capacity; // [rsp+24h] [rbp-DCh]
  std::unique_ptr<common::minet::http_client::HttpClientMgr> __u; // [rsp+28h] [rbp-D8h] BYREF
  std::string path; // [rsp+30h] [rbp-D0h] BYREF
  std::string child_name; // [rsp+50h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (std::optional<common::tools::PTree> *)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::optional<common::tools::PTree> *)v3;
  }
  v2->_M_payload._M_payload._M_value.impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)1102416563;
  *(_QWORD *)&v2->_M_payload._M_engaged = "2 32 8 8 as_pt:23 64 16 17 async_http_opt:44";
  v2[1]._M_payload._M_payload._M_value.impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)ActivityService::init;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&child_name, "Root.ServiceList.Activityservice", &__a);
  common::tools::PTree::getChild(pt, &child_name);
  std::string::~string(&child_name);
  std::allocator<char>::~allocator(&__a);
  if ( ServiceBase::init(this, (common::tools::PTree *)&v2[2]) )
  {
    v5 = -1;
  }
  else
  {
    p_activity_thread_local_vec = &this->activity_thread_local_vec_;
    v7 = *(unsigned __int8 *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000);
    if ( (_BYTE)v7 != 0 && (char)v7 <= 3 )
      __asan_report_load4(&this->thread_num_);
    std::vector<ActivityThreadLocal>::resize(p_activity_thread_local_vec, this->thread_num_);
    if ( ServiceBase::addHandler<ActivityHandler>(this) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&child_name,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/service/activity_service.cpp",
        "init",
        34);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&child_name, off_1BB49100);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
      v5 = -1;
    }
    else
    {
      std::make_unique<common::minet::http_client::HttpClientMgr>();
      std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::operator=<common::minet::http_client::HttpClientMgr,std::default_delete<common::minet::http_client::HttpClientMgr>>(
        &this->http_client_mgr_ptr_,
        &__u);
      std::unique_ptr<common::minet::http_client::HttpClientMgr>::~unique_ptr(&__u);
      if ( std::operator==<common::minet::http_client::HttpClientMgrBase,std::default_delete<common::minet::http_client::HttpClientMgrBase>>(
             0LL,
             &this->http_client_mgr_ptr_) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&child_name,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/service/activity_service.cpp",
          "init",
          39);
        common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
          (common::milog::MiLogStream *const)&child_name,
          (const char (*)[45])"make unique http_client::HttpClientMgr fails");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
        v5 = -1;
      }
      else
      {
        http_thread_num = 1;
        http_capacity = 1000;
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>(&child_name, "Root.AsyncHttpClient", &__a);
        common::tools::PTree::getChildOptional(
          (common::tools::PTree *)&v2[4],
          (const common::tools::PTree *const)&v2[2],
          &child_name);
        std::string::~string(&child_name);
        std::allocator<char>::~allocator(&__a);
        if ( std::optional<common::tools::PTree>::has_value(v2 + 4) )
        {
          v8 = std::optional<common::tools::PTree>::operator->(v2 + 4);
          std::allocator<char>::allocator(&__a);
          std::string::basic_string<std::allocator<char>>(&path, "<xmlattr>.thread", &__a);
          http_thread_num = common::tools::PTree::get<unsigned int>(v8, &path, 1u);
          std::string::~string(&path);
          std::allocator<char>::~allocator(&__a);
          v9 = std::optional<common::tools::PTree>::operator->(v2 + 4);
          std::allocator<char>::allocator(&__a);
          std::string::basic_string<std::allocator<char>>(&child_name, "<xmlattr>.capacity", &__a);
          http_capacity = common::tools::PTree::get<unsigned int>(v9, &child_name, 0x3E8u);
          std::string::~string(&child_name);
          std::allocator<char>::~allocator(&__a);
        }
        v10 = (unsigned __int64)std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::operator->(&this->http_client_mgr_ptr_);
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v10);
        v11 = *(_QWORD *)v10 + 16LL;
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
          __asan_report_load8(*(_QWORD *)v10 + 16LL);
        v12 = *(unsigned int (__fastcall **)(unsigned __int64, _QWORD, _QWORD, _QWORD))v11;
        if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 3 )
        {
          v10 = __asan_report_load4(&this->thread_num_);
        }
        if ( v12(v10, http_thread_num, http_capacity, this->thread_num_) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&child_name,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/service/activity_service.cpp",
            "init",
            52);
          common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            (common::milog::MiLogStream *const)&child_name,
            (const char (*)[28])"http_client_mgr init failed");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
          v5 = -1;
        }
        else
        {
          v5 = 0;
        }
        std::optional<common::tools::PTree>::~optional(v2 + 4);
      }
    }
  }
  common::tools::PTree::~PTree((common::tools::PTree *const)&v2[2]);
  result = v5;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_payload._M_payload._M_value.impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 60: range 000000000DE8BE66-000000000DE8C3F9
int32_t __cdecl ActivityService::start(ActivityService *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::pointer v5; // rax
  unsigned __int64 v6; // rdx
  char v7; // al
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  int32_t result; // eax
  common::milog::MiLogStream v15; // [rsp+10h] [rbp-90h] BYREF
  char v16[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 config_ptr:72";
  *(_QWORD *)(v1 + 16) = ActivityService::start;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( ServiceBase::start(this) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/activity_service.cpp",
      "start",
      63);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"ServiceBase start fail");
    common::milog::MiLogStream::~MiLogStream(&v15);
    v4 = -1;
  }
  else
  {
    if ( !std::operator!=<common::minet::http_client::HttpClientMgrBase,std::default_delete<common::minet::http_client::HttpClientMgrBase>>(
            0LL,
            &this->http_client_mgr_ptr_) )
      goto LABEL_13;
    v5 = std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::operator->(&this->http_client_mgr_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v5);
    v6 = (unsigned __int64)(v5->_vptr_HttpClientMgrBase + 4);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v5->_vptr_HttpClientMgrBase + 4);
    if ( (*(unsigned int (__fastcall **)(std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::pointer))v6)(v5) )
      v7 = 1;
    else
LABEL_13:
      v7 = 0;
    if ( v7 )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/service/activity_service.cpp",
        "start",
        68);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        &v15,
        (const char (*)[29])"http_client_mgr start failed");
      common::milog::MiLogStream::~MiLogStream(&v15);
      v4 = -1;
    }
    else
    {
      ActivityService::getConfig((ActivityService *const)(v1 + 32));
      if ( std::operator==<Config>(0LL, (const std::shared_ptr<Config> *)(v1 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/service/activity_service.cpp",
          "start",
          75);
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(&v15, (const char (*)[28])off_1BB493A0);
        common::milog::MiLogStream::~MiLogStream(&v15);
        v4 = -1;
      }
      else
      {
        v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&v8->custom_dungeon_cache_max_size >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v8 - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->custom_dungeon_cache_max_size >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&v8->custom_dungeon_cache_max_size);
        }
        common::tools::LruCache<unsigned long,proto::ServerCustomDungeon>::setMaxSize(
          &this->custom_dungeon_cache_,
          v8->custom_dungeon_cache_max_size);
        v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&v9->custom_dungeon_cache_timeout >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v9->custom_dungeon_cache_timeout >> 3) + 0x7FFF8000) <= 3 )
        {
          v9 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v9->custom_dungeon_cache_timeout);
        }
        common::tools::LruCache<unsigned long,proto::ServerCustomDungeon>::setMaxLiveTime(
          &this->custom_dungeon_cache_,
          v9->custom_dungeon_cache_timeout);
        v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&v10->custom_dungeon_search_cache_max_size >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v10 - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->custom_dungeon_search_cache_max_size >> 3)
                                                             + 0x7FFF8000) )
        {
          __asan_report_load4(&v10->custom_dungeon_search_cache_max_size);
        }
        common::tools::LruCache<unsigned long,proto::CustomDungeonBriefRedisData>::setMaxSize(
          &this->custom_dungeon_search_cache_,
          v10->custom_dungeon_search_cache_max_size);
        v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&v11->custom_dungeon_search_cache_timeout >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v11->custom_dungeon_search_cache_timeout >> 3) + 0x7FFF8000) <= 3 )
        {
          v11 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v11->custom_dungeon_search_cache_timeout);
        }
        common::tools::LruCache<unsigned long,proto::CustomDungeonBriefRedisData>::setMaxLiveTime(
          &this->custom_dungeon_search_cache_,
          v11->custom_dungeon_search_cache_timeout);
        v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&v12->home_blueprint_detail_cache_max_size >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v12->home_blueprint_detail_cache_max_size >> 3) + 0x7FFF8000) <= 3 )
        {
          v12 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v12->home_blueprint_detail_cache_max_size);
        }
        common::tools::LruCache<std::string,proto::HomeBlueprintDetailRedisData>::setMaxSize(
          &this->home_blueprint_detail_cache_,
          v12->home_blueprint_detail_cache_max_size);
        v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&v13->home_blueprint_detail_cache_timeout >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v13 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->home_blueprint_detail_cache_timeout >> 3)
                                                             + 0x7FFF8000) )
        {
          __asan_report_load4(&v13->home_blueprint_detail_cache_timeout);
        }
        common::tools::LruCache<std::string,proto::HomeBlueprintDetailRedisData>::setMaxLiveTime(
          &this->home_blueprint_detail_cache_,
          v13->home_blueprint_detail_cache_timeout);
        v4 = 0;
      }
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 32));
    }
  }
  result = v4;
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 90: range 000000000DE8C3FA-000000000DE8C50D
int32_t __cdecl ActivityService::stop(ActivityService *const this)
{
  std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::pointer v1; // rax
  unsigned __int64 v2; // rdx
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator!=<common::minet::http_client::HttpClientMgrBase,std::default_delete<common::minet::http_client::HttpClientMgrBase>>(
         0LL,
         &this->http_client_mgr_ptr_) )
  {
    v1 = std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::operator->(&this->http_client_mgr_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v1);
    v2 = (unsigned __int64)(v1->_vptr_HttpClientMgrBase + 6);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v1->_vptr_HttpClientMgrBase + 6);
    (*(void (__fastcall **)(std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::pointer))v2)(v1);
  }
  if ( ServiceBase::stop(this) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/activity_service.cpp",
      "stop",
      97);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v4, (const char (*)[23])"ServerBase stop failed");
    common::milog::MiLogStream::~MiLogStream(&v4);
  }
  return 0;
};

// Line 104: range 000000000DE8C50E-000000000DE8C5BB
bool __cdecl ActivityService::workThreadProc(ActivityService *const this, uint32_t thread_index)
{
  std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::pointer v2; // rax
  unsigned __int64 v3; // rdx
  bool is_busy; // [rsp+1Fh] [rbp-1h]

  is_busy = 0;
  if ( std::operator!=<common::minet::http_client::HttpClientMgrBase,std::default_delete<common::minet::http_client::HttpClientMgrBase>>(
         0LL,
         &this->http_client_mgr_ptr_) )
  {
    v2 = std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::operator->(&this->http_client_mgr_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v2);
    v3 = (unsigned __int64)(v2->_vptr_HttpClientMgrBase + 7);
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v2->_vptr_HttpClientMgrBase + 7);
    return (*(unsigned int (__fastcall **)(std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::pointer, _QWORD))v3)(
             v2,
             thread_index) != 0;
  }
  return is_busy;
};

// Line 114: range 000000000DE8C5BC-000000000DE8C5CD
int32_t __cdecl ActivityService::onWorkThreadStart(ActivityService *const this, uint32_t thread_index)
{
  return 0;
};

// Line 120: range 000000000DE8C5CE-000000000DE8C85B
int32_t __cdecl ActivityService::asyncHttpRequest(
        ActivityService *const this,
        const common::minet::http_client::HttpRequest *req,
        time_t timeout,
        uint32_t type,
        common::minet::http_client::ResponseCallBackFunc *p_func)
{
  unsigned __int64 v5; // rax
  _BYTE *v6; // rdx
  int32_t v8; // ebx
  std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::pointer v9; // rax
  _QWORD *p_vptr_HttpClientMgrBase; // rbx
  unsigned __int64 v11; // rax
  __int64 (__fastcall *v12)(_QWORD *, const common::minet::http_client::HttpRequest *, time_t, _QWORD, _QWORD, common::milog::MiLogStream *); // r12
  unsigned __int64 v13; // rax
  unsigned int *v14; // rdx
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-30h] BYREF

  v5 = ZTWN11ThreadLocal17is_in_work_threadE();
  v6 = (_BYTE *)v5;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)(v5 & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load1(v5);
  if ( *v6 != 1
    && std::operator!=<void,common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&>(
         0LL,
         p_func) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/activity_service.cpp",
      "asyncHttpRequest",
      124);
    common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
      &v19,
      (const char (*)[60])"asyncHttpRequest with a callback need called in work thread");
    common::milog::MiLogStream::~MiLogStream(&v19);
    return -1;
  }
  else if ( std::operator==<common::minet::http_client::HttpClientMgrBase,std::default_delete<common::minet::http_client::HttpClientMgrBase>>(
              0LL,
              &this->http_client_mgr_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/activity_service.cpp",
      "asyncHttpRequest",
      129);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v19,
      (const char (*)[32])"http_client_mgr_ptr_ is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v19);
    return -1;
  }
  else
  {
    v9 = std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::operator->(&this->http_client_mgr_ptr_);
    p_vptr_HttpClientMgrBase = &v9->_vptr_HttpClientMgrBase;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v9);
    v11 = *p_vptr_HttpClientMgrBase + 64LL;
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      __asan_report_load8(*p_vptr_HttpClientMgrBase + 64LL);
    v12 = *(__int64 (__fastcall **)(_QWORD *, const common::minet::http_client::HttpRequest *, time_t, _QWORD, _QWORD, common::milog::MiLogStream *))v11;
    std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::function(
      (std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v19,
      p_func);
    v13 = ZTWN11ThreadLocal17work_thread_indexE();
    v14 = (unsigned int *)v13;
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) != 0 && (char)((v13 & 7) + 3) >= *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v13);
    v8 = v12(p_vptr_HttpClientMgrBase, req, timeout, *v14, type, &v19);
    std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::~function((std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v19);
  }
  return v8;
};

// Line 139: range 000000000DE8C85C-000000000DE8CA2E
ConfigPtr __cdecl ActivityService::getConfig(ActivityService *const this)
{
  std::shared_ptr<ConfigBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  const std::shared_ptr<ConfigBase> *v4; // rax
  std::shared_ptr<ConfigBase> *p_r; // rsi
  std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 v7; // rdx
  ConfigPtr result; // rax
  std::shared_ptr<ConfigBase> *v9; // [rsp+8h] [rbp-78h]
  std::shared_ptr<ConfigBase> __r; // [rsp+10h] [rbp-70h] BYREF
  char v11[96]; // [rsp+20h] [rbp-60h] BYREF

  v9 = (std::shared_ptr<ConfigBase> *)this;
  v1 = (std::shared_ptr<ConfigBase> *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (ActivityService *const)64;
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<ConfigBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 12 base_ptr:141";
  v1[1]._M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)ActivityService::getConfig;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  v4 = (const std::shared_ptr<ConfigBase> *)ZTWN11ThreadLocal15config_base_ptrE(this);
  std::shared_ptr<ConfigBase>::shared_ptr(v1 + 2, v4);
  p_r = v1 + 2;
  if ( std::operator==<ConfigBase>(0LL, v1 + 2) )
  {
    v6 = std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::config_mgr_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v6);
    v7 = (unsigned __int64)(v6->_vptr_ConfigMgrBase + 4);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v6->_vptr_ConfigMgrBase + 4);
    (*(void (__fastcall **)(std::shared_ptr<ConfigBase> *, std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v7)(
      &__r,
      v6);
    p_r = &__r;
    std::shared_ptr<ConfigBase>::operator=(v1 + 2, &__r);
    std::shared_ptr<ConfigBase>::~shared_ptr(&__r);
  }
  if ( *(_WORD *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    __asan_report_store16(v9, p_r);
  std::dynamic_pointer_cast<Config,ConfigBase>(v9);
  std::shared_ptr<ConfigBase>::~shared_ptr(v1 + 2);
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Config,(__gnu_cxx::_Lock_policy)2>::element_type *)v9;
  return result;
};

// Line 153: range 000000000DE8CA30-000000000DE8CBA1
ActivityThreadLocal *__cdecl ActivityService::getActivityThreadLocal(ActivityService *const this)
{
  unsigned __int64 v1; // rax
  _BYTE *v2; // rdx
  unsigned __int64 v3; // rax
  uint32_t *v4; // rdx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-30h] BYREF

  if ( !(_BYTE)`guard variable for'ActivityService::getActivityThreadLocal(void)::empty_thread_local
    && __cxa_guard_acquire(&`guard variable for'ActivityService::getActivityThreadLocal(void)::empty_thread_local) )
  {
    ActivityThreadLocal::ActivityThreadLocal(&ActivityService::getActivityThreadLocal(void)::empty_thread_local);
    __cxa_guard_release(&`guard variable for'ActivityService::getActivityThreadLocal(void)::empty_thread_local);
    __cxa_atexit(
      (void (__fastcall *)(void *))ActivityThreadLocal::~ActivityThreadLocal,
      &ActivityService::getActivityThreadLocal(void)::empty_thread_local,
      &_dso_handle);
  }
  v1 = ZTWN11ThreadLocal17is_in_work_threadE();
  v2 = (_BYTE *)v1;
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) != 0 && (char)(v1 & 7) >= *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    __asan_report_load1(v1);
  if ( *v2 )
  {
    v3 = ZTWN11ThreadLocal17work_thread_indexE();
    v4 = (uint32_t *)v3;
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) != 0 && (char)((v3 & 7) + 3) >= *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v3);
    return ActivityService::getActivityThreadLocal(this, *v4);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/activity_service.cpp",
      "getActivityThreadLocal",
      159);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v6,
      (const char (*)[28])"thread is not a work thread");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return &ActivityService::getActivityThreadLocal(void)::empty_thread_local;
  }
};

// Line 164: range 000000000DE8CBA2-000000000DE8CDD8
std::vector<ActivityThreadLocal>::reference __fastcall ActivityService::getActivityThreadLocal(
        ActivityService *const this,
        uint32_t thread_index)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::vector<ActivityThreadLocal>::reference result; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-80h] BYREF
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 16 thread_index:163";
  *(_QWORD *)(v2 + 16) = ActivityService::getActivityThreadLocal;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = thread_index;
  if ( !(_BYTE)`guard variable for'ActivityService::getActivityThreadLocal(unsigned int)::empty_thread_local
    && __cxa_guard_acquire(&`guard variable for'ActivityService::getActivityThreadLocal(unsigned int)::empty_thread_local) )
  {
    ActivityThreadLocal::ActivityThreadLocal(&ActivityService::getActivityThreadLocal(unsigned int)::empty_thread_local);
    __cxa_guard_release(&`guard variable for'ActivityService::getActivityThreadLocal(unsigned int)::empty_thread_local);
    __cxa_atexit(
      (void (__fastcall *)(void *))ActivityThreadLocal::~ActivityThreadLocal,
      &ActivityService::getActivityThreadLocal(unsigned int)::empty_thread_local,
      &_dso_handle);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->thread_num_);
  }
  if ( this->thread_num_ > *(_DWORD *)(v2 + 32) )
  {
    result = std::vector<ActivityThreadLocal>::operator[](&this->activity_thread_local_vec_, *(unsigned int *)(v2 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/activity_service.cpp",
      "getActivityThreadLocal",
      168);
    v5 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v9, (const char (*)[14])"thread index:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v6, (const char (*)[28])off_1BB49640);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->thread_num_);
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = &ActivityService::getActivityThreadLocal(unsigned int)::empty_thread_local;
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
  return result;
};
