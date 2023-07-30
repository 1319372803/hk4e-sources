// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gameserver_service.cpp

// Line 43: range 0000000017595386-000000001759563B
void __cdecl GameserverService::GameserverService(GameserverService *const this)
{
  int (**v1)(...); // rdx

  ServiceBase::ServiceBase(this);
  v1 = (int (**)(...))(&`vtable for'GameserverService + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ServiceBase = v1;
  AbilityDataMgr::AbilityDataMgr(&this->ability_data_mgr);
  PushPlatformManager::PushPlatformManager(&this->push_platform_mgr);
  GlobalRateLimiterMgr::GlobalRateLimiterMgr(&this->global_rate_limiter_mgr);
  ExternalMonitorReportMgr::ExternalMonitorReportMgr(&this->external_monitor_report_mgr);
  std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::unique_ptr<std::default_delete<common::minet::http_client::HttpClientMgrBase>,void>(&this->http_client_mgr_ptr_);
  std::vector<GameThreadLocal>::vector(&this->game_thread_local_vec_);
  std::deque<std::atomic<unsigned int>>::deque(&this->game_thread_load_deque_);
  std::deque<std::atomic<unsigned int>>::deque(&this->online_player_num_deque_);
  std::deque<std::atomic<unsigned int>>::deque(&this->online_home_num_deque_);
  std::deque<std::atomic<unsigned int>>::deque(&this->game_login_load_deque_);
  std::unordered_map<unsigned int,std::shared_ptr<PlayerSessionProxy>>::unordered_map(&this->player_session_map_);
  std::shared_mutex::shared_mutex(&this->player_session_mutex_);
  std::vector<std::set<unsigned int>>::vector(&this->game_thread_uid_vec_);
  std::shared_mutex::shared_mutex(&this->home_session_map_mutex_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->home_session_prepare_map_);
  std::unordered_map<unsigned int,std::shared_ptr<HomeSession>>::unordered_map(&this->home_session_map_);
  std::set<unsigned int>::set(&this->multiserver_service_type_set_);
  std::map<unsigned int,TransferPlayer>::map(&this->transfer_player_map_);
  std::shared_mutex::shared_mutex(&this->player_transfer_mutex_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_report_version_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_report_version_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_report_version_time_);
  }
  this->last_report_version_time_ = 0;
};

// Line 47: range 000000001759563C-0000000017595797
void __cdecl GameserverService::~GameserverService(GameserverService *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GameserverService + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ServiceBase = v1;
  std::map<unsigned int,TransferPlayer>::~map(&this->transfer_player_map_);
  std::set<unsigned int>::~set(&this->multiserver_service_type_set_);
  std::unordered_map<unsigned int,std::shared_ptr<HomeSession>>::~unordered_map(&this->home_session_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->home_session_prepare_map_);
  std::vector<std::set<unsigned int>>::~vector(&this->game_thread_uid_vec_);
  std::unordered_map<unsigned int,std::shared_ptr<PlayerSessionProxy>>::~unordered_map(&this->player_session_map_);
  std::deque<std::atomic<unsigned int>>::~deque(&this->game_login_load_deque_);
  std::deque<std::atomic<unsigned int>>::~deque(&this->online_home_num_deque_);
  std::deque<std::atomic<unsigned int>>::~deque(&this->online_player_num_deque_);
  std::deque<std::atomic<unsigned int>>::~deque(&this->game_thread_load_deque_);
  std::vector<GameThreadLocal>::~vector(&this->game_thread_local_vec_);
  std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::~unique_ptr(&this->http_client_mgr_ptr_);
  GlobalRateLimiterMgr::~GlobalRateLimiterMgr(&this->global_rate_limiter_mgr);
  PushPlatformManager::~PushPlatformManager(&this->push_platform_mgr);
  AbilityDataMgr::~AbilityDataMgr(&this->ability_data_mgr);
  ServiceBase::~ServiceBase(this);
};

// Line 47: range 0000000017595798-00000000175957C2
void __cdecl GameserverService::~GameserverService(GameserverService *const this)
{
  GameserverService::~GameserverService(this);
  operator delete(this, 0x1AA0uLL);
};

// Line 53: range 00000000175957C4-0000000017596B56
int32_t __cdecl GameserverService::init(GameserverService *const this, common::tools::PTree *pt)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::vector<GameThreadLocal> *p_game_thread_local_vec; // rcx
  std::vector<std::set<unsigned int>> *p_game_thread_uid_vec; // rcx
  std::deque<std::atomic<unsigned int>> *p_online_player_num_deque; // rcx
  std::deque<std::atomic<unsigned int>> *p_online_home_num_deque; // rcx
  std::deque<std::atomic<unsigned int>> *p_game_thread_load_deque; // rcx
  std::deque<std::atomic<unsigned int>> *p_game_login_load_deque; // rcx
  common::tools::PTree *v13; // r14
  common::tools::PTree *v14; // r14
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned int (__fastcall *v17)(unsigned __int64, _QWORD, _QWORD, _QWORD); // r8
  common::tools::PTree *v18; // r14
  common::tools::PTree *v19; // r14
  common::tools::PTree *v20; // r14
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  char v27; // al
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::tools::PTree *v35; // r14
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rdx
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+13h] [rbp-1BDh] BYREF
  uint32_t http_thread_num; // [rsp+14h] [rbp-1BCh]
  std::unique_ptr<common::minet::http_client::HttpClientMgr> __u; // [rsp+18h] [rbp-1B8h] BYREF
  std::string path; // [rsp+20h] [rbp-1B0h] BYREF
  std::string v46; // [rsp+40h] [rbp-190h] BYREF
  std::string v47; // [rsp+60h] [rbp-170h] BYREF
  std::string v48; // [rsp+80h] [rbp-150h] BYREF
  std::string v49; // [rsp+A0h] [rbp-130h] BYREF
  std::string child_name; // [rsp+C0h] [rbp-110h] BYREF
  char v51[240]; // [rsp+E0h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 4 19 default_capacity:93 64 4 32 first_login_nickname_capacity:99 80 4 24 safe_server_capac"
                        "ity:100 96 4 35 output_control_monitor_capacity:101 112 4 29 home_verify_post_capacity:112 128 8"
                        " 16 gameserver_pt:55 160 16 17 async_http_opt:86";
  *(_QWORD *)(v2 + 16) = GameserverService::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -218959360;
  v4[536862725] = -202178560;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&child_name, "Root.ServiceList.Gameserver", &__a);
  common::tools::PTree::getChild(pt, &child_name);
  std::string::~string(&child_name);
  std::allocator<char>::~allocator(&__a);
  if ( ServiceBase::init(this, (common::tools::PTree *)(v2 + 128)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&child_name,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/gameserver_service.cpp",
      "init",
      60);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
      (common::milog::MiLogStream *const)&child_name,
      (const char (*)[24])"ServiceBase::init fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
    v5 = -1;
  }
  else if ( !ServiceBase::findStatLogMgr(this, 0xEu) || !ServiceBase::findStatLogMgr(this, 0x1Au) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&child_name,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/gameserver_service.cpp",
      "init",
      67);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
      (common::milog::MiLogStream *const)&child_name,
      (const char (*)[21])"miss stat log config");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
    v5 = -1;
  }
  else
  {
    p_game_thread_local_vec = &this->game_thread_local_vec_;
    if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    std::vector<GameThreadLocal>::resize(p_game_thread_local_vec, this->thread_num_);
    p_game_thread_uid_vec = &this->game_thread_uid_vec_;
    if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    std::vector<std::set<unsigned int>>::resize(p_game_thread_uid_vec, this->thread_num_);
    p_online_player_num_deque = &this->online_player_num_deque_;
    if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    std::deque<std::atomic<unsigned int>>::resize(p_online_player_num_deque, this->thread_num_);
    p_online_home_num_deque = &this->online_home_num_deque_;
    if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    std::deque<std::atomic<unsigned int>>::resize(p_online_home_num_deque, this->thread_num_);
    p_game_thread_load_deque = &this->game_thread_load_deque_;
    if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    std::deque<std::atomic<unsigned int>>::resize(p_game_thread_load_deque, this->thread_num_);
    p_game_login_load_deque = &this->game_login_load_deque_;
    if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    std::deque<std::atomic<unsigned int>>::resize(p_game_login_load_deque, this->thread_num_);
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
        "./src/gameserver_service.cpp",
        "init",
        82);
      common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
        (common::milog::MiLogStream *const)&child_name,
        (const char (*)[45])"make unique http_client::HttpClientMgr fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
      v5 = -1;
    }
    else
    {
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&child_name, "Root.AsyncHttpClient", &__a);
      common::tools::PTree::getChildOptional(pt, &child_name);
      std::string::~string(&child_name);
      std::allocator<char>::~allocator(&__a);
      if ( !std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v2 + 160)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&child_name,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/gameserver_service.cpp",
          "init",
          89);
        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          (common::milog::MiLogStream *const)&child_name,
          (const char (*)[31])off_2613FCC0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
        v5 = -1;
      }
      else
      {
        v13 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v2 + 160));
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>(&path, "<xmlattr>.thread", &__a);
        http_thread_num = common::tools::PTree::get<unsigned int>(v13, &path, 0);
        std::string::~string(&path);
        std::allocator<char>::~allocator(&__a);
        v14 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v2 + 160));
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>(&v46, "<xmlattr>.capacity", &__a);
        *(_DWORD *)(v2 + 48) = common::tools::PTree::get<unsigned int>(v14, &v46, 0);
        std::string::~string(&v46);
        std::allocator<char>::~allocator(&__a);
        v15 = (unsigned __int64)std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::operator->(&this->http_client_mgr_ptr_);
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          v15 = __asan_report_load8();
        v16 = *(_QWORD *)v15 + 16LL;
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
          v15 = __asan_report_load8();
        v17 = *(unsigned int (__fastcall **)(unsigned __int64, _QWORD, _QWORD, _QWORD))v16;
        if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( v17(v15, http_thread_num, *(unsigned int *)(v2 + 48), this->thread_num_) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&child_name,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/gameserver_service.cpp",
            "init",
            96);
          common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            (common::milog::MiLogStream *const)&child_name,
            (const char (*)[28])"http_client_mgr_ init fails");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
          v5 = -1;
        }
        else
        {
          v18 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v2 + 160));
          std::allocator<char>::allocator(&__a);
          std::string::basic_string<std::allocator<char>>(&v47, "<xmlattr>.first_login_nickname_capacity", &__a);
          *(_DWORD *)(v2 + 64) = common::tools::PTree::get<unsigned int>(v18, &v47, 0);
          std::string::~string(&v47);
          std::allocator<char>::~allocator(&__a);
          v19 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v2 + 160));
          std::allocator<char>::allocator(&__a);
          std::string::basic_string<std::allocator<char>>(&v48, "<xmlattr>.safe_server_capacity", &__a);
          *(_DWORD *)(v2 + 80) = common::tools::PTree::get<unsigned int>(v19, &v48, 0);
          std::string::~string(&v48);
          std::allocator<char>::~allocator(&__a);
          v20 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v2 + 160));
          std::allocator<char>::allocator(&__a);
          std::string::basic_string<std::allocator<char>>(&v49, "<xmlattr>.output_control_monitor_capacity", &__a);
          *(_DWORD *)(v2 + 96) = common::tools::PTree::get<unsigned int>(v20, &v49, 0);
          std::string::~string(&v49);
          std::allocator<char>::~allocator(&__a);
          v21 = (unsigned __int64)std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::operator->(&this->http_client_mgr_ptr_);
          if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
            v21 = __asan_report_load8();
          v22 = *(_QWORD *)v21 + 24LL;
          if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
            v21 = __asan_report_load8();
          if ( (*(unsigned int (__fastcall **)(unsigned __int64, __int64, _QWORD))v22)(
                 v21,
                 1LL,
                 *(unsigned int *)(v2 + 64)) )
          {
            goto LABEL_51;
          }
          v23 = (unsigned __int64)std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::operator->(&this->http_client_mgr_ptr_);
          if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
            v23 = __asan_report_load8();
          v24 = *(_QWORD *)v23 + 24LL;
          if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
            v23 = __asan_report_load8();
          if ( (*(unsigned int (__fastcall **)(unsigned __int64, __int64, _QWORD))v24)(
                 v23,
                 2LL,
                 *(unsigned int *)(v2 + 80)) )
          {
            goto LABEL_51;
          }
          v25 = (unsigned __int64)std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::operator->(&this->http_client_mgr_ptr_);
          if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
            v25 = __asan_report_load8();
          v26 = *(_QWORD *)v25 + 24LL;
          if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
            v25 = __asan_report_load8();
          if ( (*(unsigned int (__fastcall **)(unsigned __int64, __int64, _QWORD))v26)(
                 v25,
                 4LL,
                 *(unsigned int *)(v2 + 96)) )
          {
LABEL_51:
            v27 = 1;
          }
          else
          {
            v27 = 0;
          }
          if ( v27 )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&child_name,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/gameserver_service.cpp",
              "init",
              106);
            common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              (common::milog::MiLogStream *const)&child_name,
              (const char (*)[34])"http_client_mgr setCapacity fails");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
            v5 = -1;
          }
          else
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&child_name,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/gameserver_service.cpp",
              "init",
              109);
            v28 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    (common::milog::MiLogStream *const)&child_name,
                    (const char (*)[18])"default_capacity:");
            v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v28,
                    (const unsigned int *)(v2 + 48));
            v30 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    v29,
                    (const char (*)[32])" first_login_nickname_capacity:");
            v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v30,
                    (const unsigned int *)(v2 + 64));
            v32 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                    v31,
                    (const char (*)[23])" safe_server_capacity:");
            v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v32,
                    (const unsigned int *)(v2 + 80));
            v34 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                    v33,
                    (const char (*)[34])" output_control_monitor_capacity:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v2 + 96));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
            v35 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v2 + 160));
            std::allocator<char>::allocator(&__a);
            std::string::basic_string<std::allocator<char>>(&child_name, "<xmlattr>.home_verify_post_capacity", &__a);
            *(_DWORD *)(v2 + 112) = common::tools::PTree::get<unsigned int>(v35, &child_name, 0);
            std::string::~string(&child_name);
            std::allocator<char>::~allocator(&__a);
            v36 = (unsigned __int64)std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::operator->(&this->http_client_mgr_ptr_);
            if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
              v36 = __asan_report_load8();
            v37 = *(_QWORD *)v36 + 24LL;
            if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
              v36 = __asan_report_load8();
            if ( (*(unsigned int (__fastcall **)(unsigned __int64, __int64, _QWORD))v37)(
                   v36,
                   3LL,
                   *(unsigned int *)(v2 + 112)) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&child_name,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/gameserver_service.cpp",
                "init",
                115);
              common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                (common::milog::MiLogStream *const)&child_name,
                (const char (*)[34])"http_client_mgr setCapacity fails");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
              v5 = -1;
            }
            else
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&child_name,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/gameserver_service.cpp",
                "init",
                118);
              v38 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                      (common::milog::MiLogStream *const)&child_name,
                      (const char (*)[18])"default_capacity:");
              v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v38,
                      (const unsigned int *)(v2 + 48));
              v40 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                      v39,
                      (const char (*)[28])" home_verify_post_capacity:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v40,
                (const unsigned int *)(v2 + 112));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
              if ( PushPlatformManager::init(&this->push_platform_mgr) )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&child_name,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/gameserver_service.cpp",
                  "init",
                  123);
                common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  (common::milog::MiLogStream *const)&child_name,
                  (const char (*)[24])"init platform_mgr fails");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
                v5 = -1;
              }
              else if ( GlobalRateLimiterMgr::init(&this->global_rate_limiter_mgr) )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&child_name,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/gameserver_service.cpp",
                  "init",
                  129);
                common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  (common::milog::MiLogStream *const)&child_name,
                  (const char (*)[35])"init global_rate_limiter_mgr fails");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
                v5 = -1;
              }
              else
              {
                GameserverService::addMultiserverServiceType(this, 9u);
                GameserverService::addMultiserverServiceType(this, 0xAu);
                GameserverService::addMultiserverServiceType(this, 0xBu);
                GameserverService::addMultiserverServiceType(this, 0xFu);
                GameserverService::addMultiserverServiceType(this, 0xDu);
                GameserverService::addMultiserverServiceType(this, 0x11u);
                if ( ServiceBase::addHandler<LoginHandler>(this) )
                {
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)&child_name,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/gameserver_service.cpp",
                    "init",
                    142);
                  common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&child_name, off_26140180);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
                  v5 = -1;
                }
                else if ( ServiceBase::addHandler<MiscHandler>(this) )
                {
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)&child_name,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/gameserver_service.cpp",
                    "init",
                    143);
                  common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&child_name, off_261401E0);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
                  v5 = -1;
                }
                else if ( ServiceBase::addHandler<HomeHandler>(this) )
                {
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)&child_name,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/gameserver_service.cpp",
                    "init",
                    144);
                  common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&child_name, off_26140220);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
                  v5 = -1;
                }
                else
                {
                  v5 = 0;
                }
              }
            }
          }
        }
      }
      std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v2 + 160));
    }
  }
  common::tools::PTree::~PTree((common::tools::PTree *const)(v2 + 128));
  result = v5;
  if ( v51 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 149: range 0000000017596B58-00000000175971A3
int32_t __cdecl GameserverService::start(GameserverService *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  proto::NodeserverConnectedAndRegisteredNotify *v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  char v9; // al
  int32_t result; // eax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-120h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-118h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+20h] [rbp-110h]
  unsigned int *app_id; // [rsp+28h] [rbp-108h]
  std::shared_ptr<proto::NodeserverConnectedAndRegisteredNotify> p_proto_ptr; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-F0h] BYREF
  char v17[208]; // [rsp+60h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 16 15 network_ptr:156 64 16 14 notify_ptr:172 96 24 21 target_app_id_vec:163";
  *(_QWORD *)(v1 + 16) = GameserverService::start;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  if ( ServiceBase::start(this) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/gameserver_service.cpp",
      "start",
      152);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v16, (const char (*)[23])"ServiceBase start fail");
    common::milog::MiLogStream::~MiLogStream(&v16);
    v4 = -1;
  }
  else
  {
    std::dynamic_pointer_cast<NetworkMgr,NetworkMgrBase>((const std::shared_ptr<NetworkMgrBase> *)(v1 + 32));
    if ( std::operator==<NetworkMgr>(0LL, (const std::shared_ptr<NetworkMgr> *)(v1 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/gameserver_service.cpp",
        "start",
        159);
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v16, (const char (*)[17])"network_ptr null");
      common::milog::MiLogStream::~MiLogStream(&v16);
      v4 = -1;
    }
    else
    {
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 96));
      v5 = std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( NetworkMgr::findNodeserverAllConnTargetAppIdVec(v5, (std::vector<unsigned int> *)(v1 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/gameserver_service.cpp",
          "start",
          166);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          &v16,
          (const char (*)[35])"find nodeserver target_app_id fail");
        common::milog::MiLogStream::~MiLogStream(&v16);
        v4 = -1;
      }
      else
      {
        __for_range = (std::vector<unsigned int> *)(v1 + 96);
        __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 96))._M_current;
        __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v1 + 96))._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          app_id = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
          common::tools::perf::make_shared<proto::NodeserverConnectedAndRegisteredNotify>();
          v6 = std::__shared_ptr_access<proto::NodeserverConnectedAndRegisteredNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::NodeserverConnectedAndRegisteredNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
          if ( *(_BYTE *)(((unsigned __int64)app_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)app_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)app_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto::NodeserverConnectedAndRegisteredNotify::set_nodeserver_id(v6, *app_id);
          std::shared_ptr<proto::NodeserverConnectedAndRegisteredNotify>::shared_ptr(
            &p_proto_ptr,
            (const std::shared_ptr<proto::NodeserverConnectedAndRegisteredNotify> *)(v1 + 64));
          GameserverService::broadcastToAllThread<proto::NodeserverConnectedAndRegisteredNotify>(this, &p_proto_ptr);
          std::shared_ptr<proto::NodeserverConnectedAndRegisteredNotify>::~shared_ptr(&p_proto_ptr);
          std::shared_ptr<proto::NodeserverConnectedAndRegisteredNotify>::~shared_ptr((std::shared_ptr<proto::NodeserverConnectedAndRegisteredNotify> *const)(v1 + 64));
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        if ( !std::operator!=<common::minet::http_client::HttpClientMgrBase,std::default_delete<common::minet::http_client::HttpClientMgrBase>>(
                &this->http_client_mgr_ptr_,
                0LL) )
          goto LABEL_22;
        v7 = (unsigned __int64)std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::operator->(&this->http_client_mgr_ptr_);
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8();
        v8 = *(_QWORD *)v7 + 32LL;
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8();
        if ( (*(unsigned int (__fastcall **)(unsigned __int64))v8)(v7) )
          v9 = 1;
        else
LABEL_22:
          v9 = 0;
        if ( v9 )
        {
          common::milog::MiLogStream::create(
            &v16,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/gameserver_service.cpp",
            "start",
            179);
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            &v16,
            (const char (*)[33])"http_client_mgr_ptr_ start fails");
          common::milog::MiLogStream::~MiLogStream(&v16);
          v4 = -1;
        }
        else if ( PushPlatformManager::start(&this->push_platform_mgr) )
        {
          common::milog::MiLogStream::create(
            &v16,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/gameserver_service.cpp",
            "start",
            185);
          common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            &v16,
            (const char (*)[25])"start platform_mgr fails");
          common::milog::MiLogStream::~MiLogStream(&v16);
          v4 = -1;
        }
        else
        {
          v4 = 0;
        }
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 96));
    }
    std::shared_ptr<NetworkMgr>::~shared_ptr((std::shared_ptr<NetworkMgr> *const)(v1 + 32));
  }
  result = v4;
  if ( v17 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 194: range 00000000175971A4-0000000017597339
int32_t __cdecl GameserverService::stop(GameserverService *const this)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( PushPlatformManager::stop(&this->push_platform_mgr) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gameserver_service.cpp",
      "stop",
      197);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v4, (const char (*)[24])"stop platform_mgr fails");
    common::milog::MiLogStream::~MiLogStream(&v4);
  }
  if ( ServiceBase::stop(this) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gameserver_service.cpp",
      "stop",
      202);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v4, (const char (*)[24])"ServiceBase::fini fails");
    common::milog::MiLogStream::~MiLogStream(&v4);
  }
  if ( std::operator!=<common::minet::http_client::HttpClientMgrBase,std::default_delete<common::minet::http_client::HttpClientMgrBase>>(
         0LL,
         &this->http_client_mgr_ptr_) )
  {
    v1 = (unsigned __int64)std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::operator->(&this->http_client_mgr_ptr_);
    if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
      v1 = __asan_report_load8();
    v2 = *(_QWORD *)v1 + 48LL;
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      v1 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64))v2)(v1);
  }
  return 0;
};

// Line 215: range 000000001759733A-00000000175974EE
int32_t __cdecl GameserverService::fini(GameserverService *const this)
{
  std::vector<GameThreadLocal>::iterator __for_begin; // [rsp+10h] [rbp-50h] BYREF
  std::vector<GameThreadLocal>::iterator __for_end; // [rsp+18h] [rbp-48h] BYREF
  std::vector<GameThreadLocal> *__for_range; // [rsp+20h] [rbp-40h]
  GameThreadLocal *tl; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-30h] BYREF

  if ( PushPlatformManager::final(&this->push_platform_mgr) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gameserver_service.cpp",
      "fini",
      218);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(&v6, (const char (*)[25])"final platform_mgr fails");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  if ( ServiceBase::fini(this) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gameserver_service.cpp",
      "fini",
      223);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v6, (const char (*)[24])"ServiceBase::fini fails");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  __for_range = &this->game_thread_local_vec_;
  __for_begin._M_current = std::vector<GameThreadLocal>::begin(&this->game_thread_local_vec_)._M_current;
  __for_end._M_current = std::vector<GameThreadLocal>::end(&this->game_thread_local_vec_)._M_current;
  while ( __gnu_cxx::operator!=<GameThreadLocal *,std::vector<GameThreadLocal>>(&__for_begin, &__for_end) )
  {
    tl = __gnu_cxx::__normal_iterator<GameThreadLocal *,std::vector<GameThreadLocal>>::operator*(&__for_begin);
    PlayerMgr::destroy(&tl->player_mgr);
    DungeonMgr::destroy(&tl->dungeon_mgr);
    HomeMgr::destroy(&tl->home_mgr);
    __gnu_cxx::__normal_iterator<GameThreadLocal *,std::vector<GameThreadLocal>>::operator++(&__for_begin);
  }
  AbilityConfigImplMgr::destroy();
  return 0;
};

// Line 244: range 00000000175974F0-0000000017597F51
_BOOL8 __fastcall GameserverService::workThreadProc(GameserverService *const this, uint32_t thread_index)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  _BOOL4 v6; // r14d
  common::tools::TimerMgr *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  uint32_t normal_save_check_interval; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rdx
  uint32_t v12; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  unsigned int hard_limit_send_save_proto_cost_time_ms; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  _BOOL8 result; // rax
  bool is_busy; // [rsp+13h] [rbp-DDh]
  bool is_busya; // [rsp+13h] [rbp-DDh]
  bool is_busyb; // [rsp+13h] [rbp-DDh]
  bool is_busyc; // [rsp+13h] [rbp-DDh]
  bool is_busyd; // [rsp+13h] [rbp-DDh]
  uint32_t hard_limit_cost_time_ms; // [rsp+14h] [rbp-DCh]
  GameThreadLocal *tl; // [rsp+18h] [rbp-D8h]
  uint64_t cur_tick; // [rsp+28h] [rbp-C8h]
  PlayerMgr *player_mgr; // [rsp+30h] [rbp-C0h]
  HomeMgr *home_mgr; // [rsp+38h] [rbp-B8h]
  common::milog::MiLogStream v31; // [rsp+40h] [rbp-B0h] BYREF
  char v32[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 16 thread_index:243 64 16 14 config_ptr:260";
  *(_QWORD *)(v2 + 16) = GameserverService::workThreadProc;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = thread_index;
  tl = std::vector<GameThreadLocal>::operator[](&this->game_thread_local_vec_, *(unsigned int *)(v2 + 48));
  if ( std::operator==<common::tools::TimerMgr>(&tl->timer_mgr_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/gameserver_service.cpp",
      "workThreadProc",
      252);
    v5 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v31,
           (const char (*)[40])"timer_mgr_ptr is nullptr, thread_index:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v31);
    v6 = 0;
  }
  else
  {
    cur_tick = common::tools::TimeUtils::getNowMs();
    v7 = std::__shared_ptr_access<common::tools::TimerMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::tools::TimerMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)tl);
    is_busy = common::tools::TimerMgr::update(v7, cur_tick);
    GameserverService::getConfig((GameserverService *const)(v2 + 64));
    player_mgr = &tl->player_mgr;
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v8->normal_save_check_interval >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v8 - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->normal_save_check_interval >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    normal_save_check_interval = v8->normal_save_check_interval;
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v10->player_save_timeout_after_send_proto >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v10 - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->player_save_timeout_after_send_proto >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    is_busya = (is_busy | PlayerMgr::checkSaveWaitPlayer(
                            player_mgr,
                            v10->player_save_timeout_after_send_proto,
                            normal_save_check_interval)) != 0;
    home_mgr = &tl->home_mgr;
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v11->normal_save_check_interval >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v11 - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->normal_save_check_interval >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v12 = v11->normal_save_check_interval;
    v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v13->home_save_timeout_after_send_proto >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v13 - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->home_save_timeout_after_send_proto >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    is_busyb = (is_busya | HomeMgr::checkSaveWaitHome(home_mgr, v13->home_save_timeout_after_send_proto, v12)) != 0;
    if ( std::atomic<ServiceBase::Status>::operator ServiceBase::Status(&this->status_) == STATUS_STOP )
    {
      hard_limit_send_save_proto_cost_time_ms = std::numeric_limits<unsigned int>::max();
    }
    else
    {
      v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v15->hard_limit_send_save_proto_cost_time_ms >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v15->hard_limit_send_save_proto_cost_time_ms >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      hard_limit_send_save_proto_cost_time_ms = v15->hard_limit_send_save_proto_cost_time_ms;
    }
    hard_limit_cost_time_ms = hard_limit_send_save_proto_cost_time_ms;
    v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v16->allow_send_save_proto_cost_time_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v16 - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->allow_send_save_proto_cost_time_ms >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    is_busyc = (is_busyb | PlayerMgr::sendSaveProto(
                             player_mgr,
                             v16->allow_send_save_proto_cost_time_ms,
                             hard_limit_cost_time_ms)) != 0;
    v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v17->allow_send_save_proto_cost_time_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v17 - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->allow_send_save_proto_cost_time_ms >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    is_busyd = (is_busyc | HomeMgr::sendSaveProto(
                             home_mgr,
                             v17->allow_send_save_proto_cost_time_ms,
                             hard_limit_cost_time_ms)) != 0;
    if ( std::operator!=<common::minet::http_client::HttpClientMgrBase,std::default_delete<common::minet::http_client::HttpClientMgrBase>>(
           &this->http_client_mgr_ptr_,
           0LL) )
    {
      v18 = (unsigned __int64)std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::operator->(&this->http_client_mgr_ptr_);
      if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
        v18 = __asan_report_load8();
      v19 = *(_QWORD *)v18 + 56LL;
      if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
        v18 = __asan_report_load8();
      is_busyd = (is_busyd | ((*(unsigned int (__fastcall **)(unsigned __int64, _QWORD))v19)(
                                v18,
                                *(unsigned int *)(v2 + 48)) != 0)) != 0;
    }
    if ( !*(_DWORD *)(v2 + 48) )
      GameserverService::cleanTimeoutTransferPlayer(this);
    if ( *(_BYTE *)(((unsigned __int64)&tl->silent_unload_group_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&tl->silent_unload_group_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( tl->silent_unload_group_num <= 0x31 )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/gameserver_service.cpp",
        "workThreadProc",
        294);
      if ( *(_BYTE *)(((unsigned __int64)&tl->silent_unload_group_time >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator()(
        &v31,
        "silent unload %d groups @ last loop. cost [%lu] us.",
        50 - tl->silent_unload_group_num,
        tl->silent_unload_group_time);
      common::milog::MiLogStream::~MiLogStream(&v31);
      if ( *(_BYTE *)(((unsigned __int64)&tl->silent_unload_group_num >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&tl->silent_unload_group_num >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&tl->silent_unload_group_num);
      }
      tl->silent_unload_group_num = 50;
      if ( *(_BYTE *)(((unsigned __int64)&tl->silent_unload_group_time >> 3) + 0x7FFF8000) )
        __asan_report_store8(&tl->silent_unload_group_time);
      tl->silent_unload_group_time = 0LL;
    }
    if ( *(_BYTE *)(((unsigned __int64)&tl->silent_reload_group_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&tl->silent_reload_group_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( tl->silent_reload_group_num <= 0x13 )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/gameserver_service.cpp",
        "workThreadProc",
        302);
      if ( *(_BYTE *)(((unsigned __int64)&tl->silent_reload_group_time >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator()(
        &v31,
        "silent reload %d groups @ last loop. cost [%lu] us.",
        20 - tl->silent_reload_group_num,
        tl->silent_reload_group_time);
      common::milog::MiLogStream::~MiLogStream(&v31);
      if ( *(_BYTE *)(((unsigned __int64)&tl->silent_reload_group_num >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&tl->silent_reload_group_num >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&tl->silent_reload_group_num);
      }
      tl->silent_reload_group_num = 20;
      if ( *(_BYTE *)(((unsigned __int64)&tl->silent_reload_group_time >> 3) + 0x7FFF8000) )
        __asan_report_store8(&tl->silent_reload_group_time);
      tl->silent_reload_group_time = 0LL;
    }
    if ( *(_BYTE *)(((unsigned __int64)&tl->force_silent_update_group_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&tl->force_silent_update_group_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( tl->force_silent_update_group_num )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/gameserver_service.cpp",
        "workThreadProc",
        310);
      common::milog::MiLogStream::operator()(&v31, off_261406E0, tl->force_silent_update_group_num);
      common::milog::MiLogStream::~MiLogStream(&v31);
      if ( *(_BYTE *)(((unsigned __int64)&tl->force_silent_update_group_num >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&tl->force_silent_update_group_num >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&tl->force_silent_update_group_num);
      }
      tl->force_silent_update_group_num = 0;
    }
    v6 = is_busyd;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
  }
  result = v6;
  if ( v32 == (char *)v2 )
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

// Line 318: range 0000000017597F52-00000000175981ED
bool __cdecl GameserverService::isResVersionChanged(GameserverService *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,proto::ResVersionConfig>::size_type v4; // r14
  bool v5; // r14
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::pointer v7; // rax
  google::protobuf::uint32 v8; // r14d
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::pointer v9; // rax
  bool result; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::_Self __y; // [rsp+18h] [rbp-D8h] BYREF
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::_Self v12; // [rsp+20h] [rbp-D0h] BYREF
  ClientVersionConfig *last_version_config; // [rsp+28h] [rbp-C8h]
  const std::map<unsigned int,proto::ResVersionConfig> *res_version_map; // [rsp+30h] [rbp-C0h]
  const std::map<unsigned int,proto::ResVersionConfig> *last_res_version_map; // [rsp+38h] [rbp-B8h]
  char v16[176]; // [rsp+40h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 8 9 iter1:327 64 8 9 iter2:328 96 16 14 config_ptr:320";
  *(_QWORD *)(v1 + 16) = GameserverService::isResVersionChanged;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -218959360;
  v3[536862723] = -202178560;
  last_version_config = &GameserverService::getGameThreadLocal(this)->last_version_config;
  GameserverService::getConfig((GameserverService *const)(v1 + 96));
  res_version_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96))->design_config.version_config.res_version_map;
  last_res_version_map = &last_version_config->res_version_map;
  v4 = std::map<unsigned int,proto::ResVersionConfig>::size(&last_version_config->res_version_map);
  if ( v4 == std::map<unsigned int,proto::ResVersionConfig>::size(res_version_map) )
  {
    *(std::map<unsigned int,proto::ResVersionConfig>::const_iterator *)(v1 + 32) = std::map<unsigned int,proto::ResVersionConfig>::begin(last_res_version_map);
    *(std::map<unsigned int,proto::ResVersionConfig>::const_iterator *)(v1 + 64) = std::map<unsigned int,proto::ResVersionConfig>::begin(res_version_map);
    while ( 1 )
    {
      __y._M_node = std::map<unsigned int,proto::ResVersionConfig>::end(last_res_version_map)._M_node;
      if ( !std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::_Self *)(v1 + 32),
              &__y) )
        break;
      v12._M_node = std::map<unsigned int,proto::ResVersionConfig>::end(res_version_map)._M_node;
      if ( !std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::_Self *)(v1 + 64),
              &v12) )
        break;
      v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> > *const)(v1 + 32));
      v8 = proto::ResVersionConfig::version(&v7->second);
      v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> > *const)(v1 + 64));
      if ( v8 != proto::ResVersionConfig::version(&v9->second) )
      {
        v5 = 1;
        goto LABEL_16;
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> > *const)(v1 + 32));
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> > *const)(v1 + 64));
    }
    v5 = 0;
  }
  else
  {
    v5 = 1;
  }
LABEL_16:
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 96));
  result = v5;
  if ( v16 == (char *)v1 )
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
  return result;
};

// Line 340: range 00000000175981EE-000000001759836E
bool __cdecl GameserverService::isClientDataVersionChanged(GameserverService *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t ClientDataVersion; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t ClientSilenceDataVersion; // r14d
  bool v8; // r14
  bool result; // al
  ClientVersionConfig *last_version_config; // [rsp+18h] [rbp-78h]
  char v11[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 config_ptr:342";
  *(_QWORD *)(v1 + 16) = GameserverService::isClientDataVersionChanged;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  last_version_config = &GameserverService::getGameThreadLocal(this)->last_version_config;
  GameserverService::getConfig((GameserverService *const)(v1 + 32));
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  ClientDataVersion = ClientVersionConfig::getClientDataVersion(&v4->design_config.version_config);
  v8 = 1;
  if ( ClientDataVersion == ClientVersionConfig::getClientDataVersion(last_version_config) )
  {
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    ClientSilenceDataVersion = ClientVersionConfig::getClientSilenceDataVersion(&v6->design_config.version_config);
    if ( ClientSilenceDataVersion == ClientVersionConfig::getClientSilenceDataVersion(last_version_config) )
      v8 = 0;
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 32));
  result = v8;
  if ( v11 == (char *)v1 )
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

// Line 349: range 0000000017598370-00000000175984B6
bool __cdecl GameserverService::isServerDataVersionChanged(GameserverService *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t ServerDataVersion; // r14d
  bool result; // al
  ClientVersionConfig *last_version_config; // [rsp+18h] [rbp-78h]
  char v8[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 config_ptr:351";
  *(_QWORD *)(v1 + 16) = GameserverService::isServerDataVersionChanged;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  last_version_config = &GameserverService::getGameThreadLocal(this)->last_version_config;
  GameserverService::getConfig((GameserverService *const)(v1 + 32));
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  ServerDataVersion = ClientVersionConfig::getServerDataVersion(&v4->design_config.version_config);
  LOBYTE(ServerDataVersion) = ServerDataVersion != ClientVersionConfig::getServerDataVersion(last_version_config);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 32));
  result = ServerDataVersion;
  if ( v8 == (char *)v1 )
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

// Line 356: range 00000000175984B8-0000000017598677
bool __cdecl GameserverService::isCrcVersionChanged(GameserverService *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // rbx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  bool v5; // r14
  bool result; // al
  const std::map<unsigned int,std::set<std::string>> *last_crc_version_map; // [rsp+18h] [rbp-D8h]
  char v8[208]; // [rsp+20h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 16 14 config_ptr:358 80 48 23 cur_crc_version_map:359";
  *(_QWORD *)(v1 + 16) = GameserverService::isCrcVersionChanged;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862724] = -202116109;
  last_crc_version_map = &GameserverService::getGameThreadLocal(this)->last_crc_version_map;
  GameserverService::getConfig((GameserverService *const)(v1 + 48));
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
  SecurityUtils::getCrcVersionMap[abi:cxx11](
    (std::map<unsigned int,std::set<std::string>> *)(v1 + 80),
    &v4->security_config);
  v5 = std::operator!=<unsigned int,std::set<std::string>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::set<std::string>>>>(
         last_crc_version_map,
         (const std::map<unsigned int,std::set<std::string>> *)(v1 + 80));
  std::map<unsigned int,std::set<std::string>>::~map((std::map<unsigned int,std::set<std::string>> *const)(v1 + 80));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 48));
  result = v5;
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 364: range 0000000017598678-0000000017598913
bool __cdecl GameserverService::isNextResVersionChanged(GameserverService *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::map<unsigned int,proto::ResVersionConfig>::size_type v4; // r14
  bool v5; // r14
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::pointer v7; // rax
  google::protobuf::uint32 v8; // r14d
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::pointer v9; // rax
  bool result; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::_Self __y; // [rsp+18h] [rbp-D8h] BYREF
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::_Self v12; // [rsp+20h] [rbp-D0h] BYREF
  ClientVersionConfig *last_version_config; // [rsp+28h] [rbp-C8h]
  const std::map<unsigned int,proto::ResVersionConfig> *next_res_version_map; // [rsp+30h] [rbp-C0h]
  const std::map<unsigned int,proto::ResVersionConfig> *last_next_res_version_map; // [rsp+38h] [rbp-B8h]
  char v16[176]; // [rsp+40h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 8 9 iter1:373 64 8 9 iter2:374 96 16 14 config_ptr:366";
  *(_QWORD *)(v1 + 16) = GameserverService::isNextResVersionChanged;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -218959360;
  v3[536862723] = -202178560;
  last_version_config = &GameserverService::getGameThreadLocal(this)->last_version_config;
  GameserverService::getConfig((GameserverService *const)(v1 + 96));
  next_res_version_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96))->design_config.version_config.next_res_version_map;
  last_next_res_version_map = &last_version_config->next_res_version_map;
  v4 = std::map<unsigned int,proto::ResVersionConfig>::size(&last_version_config->next_res_version_map);
  if ( v4 == std::map<unsigned int,proto::ResVersionConfig>::size(next_res_version_map) )
  {
    *(std::map<unsigned int,proto::ResVersionConfig>::const_iterator *)(v1 + 32) = std::map<unsigned int,proto::ResVersionConfig>::begin(last_next_res_version_map);
    *(std::map<unsigned int,proto::ResVersionConfig>::const_iterator *)(v1 + 64) = std::map<unsigned int,proto::ResVersionConfig>::begin(next_res_version_map);
    while ( 1 )
    {
      __y._M_node = std::map<unsigned int,proto::ResVersionConfig>::end(last_next_res_version_map)._M_node;
      if ( !std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::_Self *)(v1 + 32),
              &__y) )
        break;
      v12._M_node = std::map<unsigned int,proto::ResVersionConfig>::end(next_res_version_map)._M_node;
      if ( !std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::_Self *)(v1 + 64),
              &v12) )
        break;
      v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> > *const)(v1 + 32));
      v8 = proto::ResVersionConfig::version(&v7->second);
      v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> > *const)(v1 + 64));
      if ( v8 != proto::ResVersionConfig::version(&v9->second) )
      {
        v5 = 1;
        goto LABEL_16;
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> > *const)(v1 + 32));
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> > *const)(v1 + 64));
    }
    v5 = 0;
  }
  else
  {
    v5 = 1;
  }
LABEL_16:
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 96));
  result = v5;
  if ( v16 == (char *)v1 )
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
  return result;
};

// Line 387: range 0000000017598914-0000000017599416
void __cdecl GameserverService::sendVersionConfigSyncNotify(GameserverService *const this, uint32_t nodeserver_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  proto::DataVersionConfig *v7; // rax
  proto::ResVersionConfig *v8; // rax
  proto::ResVersionConfig *v9; // rax
  common::milog::MiLogStream *v10; // r14
  GameserverService *v11; // r14
  unsigned __int64 v12; // rdx
  common::milog::MiLogStream *v13; // r14
  NetworkMgrBase *v14; // r14
  uint32_t v15; // ecx
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  common::minet::Packet *v19; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // r14
  unsigned __int64 v21; // rax
  void (__fastcall *v22)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  std::unordered_map<unsigned int,std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >>>>::iterator __for_begin_0; // [rsp+28h] [rbp-308h] BYREF
  std::unordered_map<unsigned int,std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >>>>::iterator __for_end_0; // [rsp+30h] [rbp-300h] BYREF
  std::map<unsigned int,proto::ResVersionConfig>::const_iterator __for_begin; // [rsp+38h] [rbp-2F8h] BYREF
  std::map<unsigned int,proto::ResVersionConfig>::const_iterator __for_end; // [rsp+40h] [rbp-2F0h] BYREF
  const ClientVersionConfig *version_config; // [rsp+48h] [rbp-2E8h]
  google::protobuf::Map<unsigned int,proto::ResVersionConfig> *proto_res_version_map; // [rsp+50h] [rbp-2E0h]
  const std::map<unsigned int,proto::ResVersionConfig> *__for_range; // [rsp+58h] [rbp-2D8h]
  google::protobuf::Map<unsigned int,proto::CrcVersionConfig> *proto_crc_version_config_map; // [rsp+60h] [rbp-2D0h]
  std::unordered_map<unsigned int,std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >>>> *__for_range_0; // [rsp+68h] [rbp-2C8h]
  google::protobuf::Map<unsigned int,proto::ResVersionConfig> *proto_next_res_version_map; // [rsp+70h] [rbp-2C0h]
  const std::map<unsigned int,proto::ResVersionConfig> *__for_range_2; // [rsp+78h] [rbp-2B8h]
  const std::pair<unsigned int const,proto::ResVersionConfig> *v34; // [rsp+80h] [rbp-2B0h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::ResVersionConfig> >::type *platform_1; // [rsp+88h] [rbp-2A8h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::ResVersionConfig> >::type *res_version_0; // [rsp+90h] [rbp-2A0h]
  const std::pair<unsigned int const,std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >>> > *v37; // [rsp+98h] [rbp-298h]
  std::tuple_element<0,const std::pair<unsigned int const,std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >>> > >::type *platform_0; // [rsp+A0h] [rbp-290h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >>> > >::type *client_version_map; // [rsp+A8h] [rbp-288h]
  proto::CrcVersionConfig *proto_crc_version_config; // [rsp+B0h] [rbp-280h]
  const std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >>> *__for_range_1; // [rsp+B8h] [rbp-278h]
  const std::pair<const std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >> > *v42; // [rsp+C0h] [rbp-270h]
  std::tuple_element<0,const std::pair<const std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >> > >::type *client_version_str; // [rsp+C8h] [rbp-268h]
  std::tuple_element<1,const std::pair<const std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >> > >::type *_; // [rsp+D0h] [rbp-260h]
  const std::pair<unsigned int const,proto::ResVersionConfig> *v45; // [rsp+D8h] [rbp-258h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::ResVersionConfig> >::type *platform; // [rsp+E0h] [rbp-250h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::ResVersionConfig> >::type *res_version; // [rsp+E8h] [rbp-248h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+F0h] [rbp-240h] BYREF
  common::milog::MiLogStream v49; // [rsp+100h] [rbp-230h] BYREF
  common::milog::MiLogStream v50; // [rsp+120h] [rbp-210h] BYREF
  std::string val; // [rsp+140h] [rbp-1F0h] BYREF
  char v52[464]; // [rsp+160h] [rbp-1D0h] BYREF

  v2 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 14 config_ptr:394 64 16 14 packet_ptr:421 96 248 10 notify:397";
  *(_QWORD *)(v2 + 16) = GameserverService::sendVersionConfigSyncNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862730] = -218103808;
  v4[536862731] = -202116109;
  v4[536862732] = -202116109;
  v5 = (unsigned __int64)std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  v6 = *(_QWORD *)v5 + 40LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v6)(v5) == 1 )
  {
    GameserverService::getConfig((GameserverService *const)(v2 + 32));
    version_config = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32))->design_config.version_config;
    proto::ClientVersionSyncNotify::ClientVersionSyncNotify((proto::ClientVersionSyncNotify *const)(v2 + 96));
    v7 = proto::ClientVersionSyncNotify::mutable_data_version_config((proto::ClientVersionSyncNotify *const)(v2 + 96));
    proto::DataVersionConfig::operator=(v7, &version_config->data_version_config);
    proto_res_version_map = proto::ClientVersionSyncNotify::mutable_res_version_config_map((proto::ClientVersionSyncNotify *const)(v2 + 96));
    __for_range = &version_config->res_version_map;
    __for_begin._M_node = std::map<unsigned int,proto::ResVersionConfig>::begin(&version_config->res_version_map)._M_node;
    __for_end._M_node = std::map<unsigned int,proto::ResVersionConfig>::end(&version_config->res_version_map)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v45 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig>>::operator*(&__for_begin);
      platform = std::get<0ul,unsigned int const,proto::ResVersionConfig>(v45);
      res_version = (std::tuple_element<1,const std::pair<unsigned int const,proto::ResVersionConfig> >::type *)std::get<1ul,unsigned int const,proto::ResVersionConfig>(v45);
      v8 = google::protobuf::Map<unsigned int,proto::ResVersionConfig>::operator[](proto_res_version_map, platform);
      proto::ResVersionConfig::operator=(v8, res_version);
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig>>::operator++(&__for_begin);
    }
    proto_crc_version_config_map = proto::ClientVersionSyncNotify::mutable_crc_version_config_map((proto::ClientVersionSyncNotify *const)(v2 + 96));
    __for_range_0 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32))->security_config.platform_segment_crc_map;
    __for_begin_0._M_cur = std::unordered_map<unsigned int,std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>>>::begin(__for_range_0)._M_cur;
    __for_end_0._M_cur = std::unordered_map<unsigned int,std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>>>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>>>,false>(
              &__for_begin_0,
              &__for_end_0) )
    {
      v37 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>>>,false,false>::operator*(&__for_begin_0);
      platform_0 = std::get<0ul,unsigned int const,std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>>>(v37);
      client_version_map = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >>> > >::type *)std::get<1ul,unsigned int const,std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>>>(v37);
      proto_crc_version_config = google::protobuf::Map<unsigned int,proto::CrcVersionConfig>::operator[](
                                   proto_crc_version_config_map,
                                   platform_0);
      __for_range_1 = client_version_map;
      __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::_Base_ptr)std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>>::begin(client_version_map)._M_cur;
      __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::_Base_ptr)std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>>::end(__for_range_1)._M_cur;
      while ( std::__detail::operator!=<std::pair<std::string const,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>>,true>(
                (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >> >,true> *)&__for_begin,
                (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >> >,true> *)&__for_end) )
      {
        v42 = std::__detail::_Node_const_iterator<std::pair<std::string const,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >> >,false,true> *const)&__for_begin);
        client_version_str = std::get<0ul,std::string const,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>>(v42);
        _ = (std::tuple_element<1,const std::pair<const std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >> > >::type *)std::get<1ul,std::string const,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>>(v42);
        proto::CrcVersionConfig::add_client_version_list(proto_crc_version_config, client_version_str);
        std::__detail::_Node_const_iterator<std::pair<std::string const,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree> >> >,false,true> *const)&__for_begin);
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<std::string,std::vector<std::tuple<unsigned int,unsigned int,std::shared_ptr<SegmentCRCTree>>>>>,false,false>::operator++(&__for_begin_0);
    }
    proto_next_res_version_map = proto::ClientVersionSyncNotify::mutable_next_res_version_config_map((proto::ClientVersionSyncNotify *const)(v2 + 96));
    __for_range_2 = &version_config->next_res_version_map;
    __for_begin._M_node = std::map<unsigned int,proto::ResVersionConfig>::begin(&version_config->next_res_version_map)._M_node;
    __for_end._M_node = std::map<unsigned int,proto::ResVersionConfig>::end(__for_range_2)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v34 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig>>::operator*(&__for_begin);
      platform_1 = std::get<0ul,unsigned int const,proto::ResVersionConfig>(v34);
      res_version_0 = (std::tuple_element<1,const std::pair<unsigned int const,proto::ResVersionConfig> >::type *)std::get<1ul,unsigned int const,proto::ResVersionConfig>(v34);
      v9 = google::protobuf::Map<unsigned int,proto::ResVersionConfig>::operator[](
             proto_next_res_version_map,
             platform_1);
      proto::ResVersionConfig::operator=(v9, res_version_0);
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig>>::operator++(&__for_begin);
    }
    common::minet::PacketUtils::createPacket<proto::ClientVersionSyncNotify>((const proto::ClientVersionSyncNotify *)(v2 + 64));
    if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v50,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gameserver_service.cpp",
        "sendVersionConfigSyncNotify",
        424);
      v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v50,
              (const char (*)[28])"createPacket fails, notify:");
      google::protobuf::Message::ShortDebugString[abi:cxx11](&val, (google::protobuf::Message *)(v2 + 96));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v50);
    }
    else
    {
      v11 = ServiceBox::findService<GameserverService>();
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v2 + 64));
      ServiceBase::setPacketSource(v11, (common::minet::PacketPtr)__PAIR128__(v12, &packet_ptr));
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
      if ( nodeserver_id )
      {
        common::milog::MiLogStream::create(
          &v49,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gameserver_service.cpp",
          "sendVersionConfigSyncNotify",
          435);
        v16 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                &v49,
                (const char (*)[23])"send to nodeserver_id:");
        common::tools::AppIdUtils::getAppIdStr[abi:cxx11]((std::string *)&v50, nodeserver_id);
        v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, (const std::string *)&v50);
        v18 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                v17,
                (const char (*)[26])" ClientVersionSyncNotify:");
        google::protobuf::Message::ShortDebugString[abi:cxx11](&val, (google::protobuf::Message *)(v2 + 96));
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, &val);
        std::string::~string(&val);
        std::string::~string(&v50);
        common::milog::MiLogStream::~MiLogStream(&v49);
        v19 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        common::minet::Packet::setTarget(v19, 4u, nodeserver_id);
        v20 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
        if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v21 = (unsigned __int64)(v20->_vptr_NetworkMgrBase + 8);
        if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
          v21 = __asan_report_load8();
        v22 = *(void (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v21;
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          &packet_ptr,
          (const std::shared_ptr<common::minet::Packet> *)(v2 + 64));
        v22(v20, &packet_ptr);
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v50,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gameserver_service.cpp",
          "sendVersionConfigSyncNotify",
          430);
        v13 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v50,
                (const char (*)[35])"broadcast ClientVersionSyncNotify:");
        google::protobuf::Message::ShortDebugString[abi:cxx11](&val, (google::protobuf::Message *)(v2 + 96));
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v50);
        v14 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          &packet_ptr,
          (const std::shared_ptr<common::minet::Packet> *)(v2 + 64));
        NetworkMgrBase::broadcastPacketToTargetService(
          v14,
          (common::minet::PacketPtr)__PAIR128__(4LL, &packet_ptr),
          v15);
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
      }
    }
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 64));
    proto::ClientVersionSyncNotify::~ClientVersionSyncNotify((proto::ClientVersionSyncNotify *const)(v2 + 96));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 32));
  }
  if ( v52 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = -168430091;
  }
};

// Line 443: range 0000000017599418-00000000175996B4
int32_t __cdecl GameserverService::onWorkThreadStart(GameserverService *const this, uint32_t thread_index)
{
  GameThreadLocal *tl; // [rsp+18h] [rbp-48h]
  std::shared_ptr<common::tools::TimerMgr> __r; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v5; // [rsp+30h] [rbp-30h] BYREF

  tl = std::vector<GameThreadLocal>::operator[](&this->game_thread_local_vec_, thread_index);
  common::tools::perf::make_shared<common::tools::TimerMgr>();
  std::shared_ptr<common::tools::TimerMgr>::operator=(&tl->timer_mgr_ptr, &__r);
  std::shared_ptr<common::tools::TimerMgr>::~shared_ptr(&__r);
  if ( std::operator==<common::tools::TimerMgr>(&tl->timer_mgr_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gameserver_service.cpp",
      "onWorkThreadStart",
      452);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v5,
      (const char (*)[29])"make_shared<TimerMgr> failed");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return -1;
  }
  else if ( DungeonMgr::init(&tl->dungeon_mgr) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gameserver_service.cpp",
      "onWorkThreadStart",
      460);
    common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v5, (const char (*)[11])"init fails");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return -1;
  }
  else if ( PlayerMgr::init(&tl->player_mgr) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gameserver_service.cpp",
      "onWorkThreadStart",
      467);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v5, (const char (*)[22])"player_mgr init fails");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return -1;
  }
  else
  {
    GlobalActivityMgr::onStart(&tl->global_activity_mgr);
    if ( HomeMgr::init(&tl->home_mgr) )
    {
      common::milog::MiLogStream::create(
        &v5,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gameserver_service.cpp",
        "onWorkThreadStart",
        475);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v5, (const char (*)[20])"home_mgr init fails");
      common::milog::MiLogStream::~MiLogStream(&v5);
      return -1;
    }
    else
    {
      return 0;
    }
  }
};

// Line 484: range 00000000175996B6-000000001759970C
int32_t __cdecl GameserverService::onWorkThreadStop(GameserverService *const this, uint32_t thread_index)
{
  GameThreadLocal *tl; // [rsp+18h] [rbp-8h]

  tl = std::vector<GameThreadLocal>::operator[](&this->game_thread_local_vec_, thread_index);
  DungeonMgr::destroy(&tl->dungeon_mgr);
  GlobalActivityMgr::onStop(&tl->global_activity_mgr);
  return 0;
};

// Line 498: range 000000001759970E-0000000017599E04
int32_t __cdecl GameserverService::defaultProcessPacketFunc(
        GameserverService *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned int v8; // r14d
  const std::string *v9; // rax
  const char *v10; // rax
  std::__shared_ptr_access<proto::QueryPlayerMemDataByMuipRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  GameserverService *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  _BOOL4 v15; // r15d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  Player *v18; // rax
  PlayerCoroExec *v19; // r14
  int v20; // r15d
  unsigned int v21; // ebx
  const std::string *v22; // rax
  __int64 v23; // rax
  int32_t result; // eax
  uint32_t cmd_id; // [rsp+24h] [rbp-10Ch]
  PlayerMgr *player_mgr; // [rsp+28h] [rbp-108h]
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v28; // [rsp+40h] [rbp-F0h] BYREF
  char v29[208]; // [rsp+60h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 7 uid:500 64 16 14 player_ptr:504 96 16 17 coro_exec_ptr:529 128 16 9 timer:530";
  *(_QWORD *)(v3 + 16) = GameserverService::defaultProcessPacketFunc;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  cmd_id = common::minet::Packet::getCmdId(v6);
  v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  *(_DWORD *)(v3 + 48) = common::minet::Packet::getUserId(v7);
  player_mgr = &GameserverService::getGameThreadLocal(this)->player_mgr;
  if ( !*(_DWORD *)(v3 + 48) )
    goto LABEL_22;
  PlayerMgr::findPlayerAndCheckSession(
    (PlayerMgr *const)(v3 + 64),
    (uint32_t)player_mgr,
    (const common::minet::PacketPtr *)*(unsigned int *)(v3 + 48));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gameserver_service.cpp",
      "defaultProcessPacketFunc",
      507);
    v8 = *(_DWORD *)(v3 + 48);
    v9 = ProtoUtils::getCmdName[abi:cxx11](cmd_id);
    v10 = (const char *)std::string::c_str(v9);
    common::milog::MiLogStream::operator()(&v28, "findPlayer fails, cmd_id=%u, name=%s, uid:%u", cmd_id, v10, v8);
    common::milog::MiLogStream::~MiLogStream(&v28);
    if ( cmd_id == 10275 )
    {
      common::tools::perf::make_shared<proto::QueryPlayerMemDataByMuipRsp>();
      v11 = std::__shared_ptr_access<proto::QueryPlayerMemDataByMuipRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::QueryPlayerMemDataByMuipRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      proto::QueryPlayerMemDataByMuipRsp::set_retcode(v11, 140);
      v12 = ServiceBox::findService<GameserverService>();
      std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
      std::shared_ptr<proto::QueryPlayerMemDataByMuipRsp>::shared_ptr(
        (std::shared_ptr<proto::QueryPlayerMemDataByMuipRsp> *const)(v3 + 128),
        (const std::shared_ptr<proto::QueryPlayerMemDataByMuipRsp> *)(v3 + 96));
      LOBYTE(v12) = ServiceBase::sendRsp<proto::QueryPlayerMemDataByMuipRsp>(
                      v12,
                      (std::shared_ptr<proto::QueryPlayerMemDataByMuipRsp> *)(v3 + 128),
                      &p_req_packet_ptr) != 0;
      std::shared_ptr<proto::QueryPlayerMemDataByMuipRsp>::~shared_ptr((std::shared_ptr<proto::QueryPlayerMemDataByMuipRsp> *const)(v3 + 128));
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
      if ( (_BYTE)v12 )
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gameserver_service.cpp",
          "defaultProcessPacketFunc",
          517);
        v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                &v28,
                (const char (*)[22])"send rsp failed, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v28);
      }
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gameserver_service.cpp",
        "defaultProcessPacketFunc",
        519);
      v14 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
              &v28,
              (const char (*)[58])"QueryPlayerMemDataByMuipReq default process failed, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v28);
      std::shared_ptr<proto::QueryPlayerMemDataByMuipRsp>::~shared_ptr((std::shared_ptr<proto::QueryPlayerMemDataByMuipRsp> *const)(v3 + 96));
    }
    v2 = -1;
    v15 = 0;
  }
  else
  {
    if ( ProtoUtils::isAllowClientSend(cmd_id) )
    {
      v16 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      if ( common::minet::Packet::getEnetIsReliable(v16) )
      {
        v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        Player::updateLastPingTime(v18);
      }
    }
    std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    Player::getCoroExecPtr((Player *const)(v3 + 96));
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v3 + 128));
    common::tools::TimeUtils::Timer::reset((common::tools::TimeUtils::Timer *const)(v3 + 128));
    if ( std::__shared_ptr<PlayerCoroExec,(__gnu_cxx::_Lock_policy)2>::operator bool((const std::__shared_ptr<PlayerCoroExec,(__gnu_cxx::_Lock_policy)2> *const)(v3 + 96)) )
    {
      v19 = std::__shared_ptr_access<PlayerCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
      PlayerCoroExec::pushPacket(v19, &p_req_packet_ptr);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
      v2 = 0;
      v20 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gameserver_service.cpp",
        "defaultProcessPacketFunc",
        539);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        &v28,
        (const char (*)[25])"coro_exec_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v28);
      v20 = 1;
    }
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v3 + 128));
    std::shared_ptr<PlayerCoroExec>::~shared_ptr((std::shared_ptr<PlayerCoroExec> *const)(v3 + 96));
    v15 = v20 == 1;
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  if ( v15 )
  {
LABEL_22:
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gameserver_service.cpp",
      "defaultProcessPacketFunc",
      543);
    v21 = *(_DWORD *)(v3 + 48);
    v22 = ProtoUtils::getCmdName[abi:cxx11](cmd_id);
    v23 = std::string::c_str(v22);
    common::milog::MiLogStream::operator()(&v28, off_26140CC0, cmd_id, v23, v21);
    common::milog::MiLogStream::~MiLogStream(&v28);
    v2 = -1;
  }
  result = v2;
  if ( v29 == (char *)v3 )
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

// Line 549: range 0000000017599E06-0000000017599EC0
int32_t __cdecl GameserverService::getPacketQueueIndex(
        GameserverService *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  common::milog::MiLogStream v3; // [rsp+20h] [rbp-30h] BYREF

  if ( !std::operator==<common::minet::Packet>(0LL, p_packet_ptr) )
    return GameserverService::packetThreadRoute(this, p_packet_ptr);
  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/gameserver_service.cpp",
    "getPacketQueueIndex",
    552);
  common::milog::MiLogStream::operator()(&v3, "packet_ptr is nullptr");
  common::milog::MiLogStream::~MiLogStream(&v3);
  return 0;
};

// Line 583: range 0000000017599EC2-000000001759A773
int32_t __cdecl GameserverService::packetThreadRoute(
        GameserverService *const this,
        const common::minet::PacketPtr *packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::minet::Packet *v8; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  common::milog::MiLogStream *v32; // rdx
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  uint32_t UserSessionId; // edx
  common::milog::MiLogStream *v35; // rdx
  uint32_t cmd_id; // [rsp+18h] [rbp-E8h]
  int thread_index_0; // [rsp+1Ch] [rbp-E4h]
  uint32_t target_uid; // [rsp+20h] [rbp-E0h]
  int thread_index; // [rsp+24h] [rbp-DCh]
  const std::string *cmd_name; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<common::minet::Packet> p_packet_ptr; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v42; // [rsp+40h] [rbp-C0h] BYREF
  char v43[160]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 7 uid:585 64 4 12 home_uid:586 80 4 23 packet_thread_index:589 96 4 16 thread_index:623";
  *(_QWORD *)(v2 + 16) = GameserverService::packetThreadRoute;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -202116348;
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  *(_DWORD *)(v2 + 48) = common::minet::Packet::getUserId(v5);
  v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  *(_DWORD *)(v2 + 64) = common::minet::Packet::getHomeUserId(v6);
  v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  cmd_id = common::minet::Packet::getCmdId(v7);
  cmd_name = ProtoUtils::getCmdName[abi:cxx11](cmd_id);
  v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  *(_DWORD *)(v2 + 80) = common::minet::Packet::getGameThreadIndex(v8);
  if ( *(_DWORD *)(v2 + 64) )
  {
    if ( cmd_id == 12007 )
    {
      result = GameserverService::findHomeThreadIndexOnTryEnter(this, *(_DWORD *)(v2 + 64), *(_DWORD *)(v2 + 80));
    }
    else
    {
      *(_DWORD *)(v2 + 96) = GameserverService::findHomeThreadIndex(this, *(_DWORD *)(v2 + 64));
      if ( *(int *)(v2 + 96) < 0 )
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gameserver_service.cpp",
          "packetThreadRoute",
          614);
        v15 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v42,
                (const char (*)[42])"[HOME] cannot find home thread, home_uid:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v2 + 64));
        v17 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v16, (const char (*)[6])" cmd:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, cmd_name);
        common::milog::MiLogStream::~MiLogStream(&v42);
        result = -1;
      }
      else if ( *(int *)(v2 + 80) < 0 || *(_DWORD *)(v2 + 80) == *(_DWORD *)(v2 + 96) )
      {
        result = *(_DWORD *)(v2 + 96);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gameserver_service.cpp",
          "packetThreadRoute",
          606);
        v10 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                &v42,
                (const char (*)[21])"packet thread index:");
        v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v2 + 80));
        v12 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                v11,
                (const char (*)[20])" home thread index:");
        v13 = common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v2 + 96));
        v14 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v13,
                (const char (*)[21])" not same, home_uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 64));
        common::milog::MiLogStream::~MiLogStream(&v42);
        result = -1;
      }
    }
  }
  else if ( *(int *)(v2 + 80) < 0 )
  {
    if ( cmd_id == 112 )
    {
      std::shared_ptr<common::minet::Packet>::shared_ptr(&p_packet_ptr, packet_ptr);
      target_uid = GameserverService::getTargetUidFromLogin(this, &p_packet_ptr);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
      thread_index = GameserverService::findPlayerThreadIndexOnLogin(this, *(_DWORD *)(v2 + 48), target_uid);
      if ( thread_index < 0 )
        result = GameserverService::getMinLoadThreadIndex(this);
      else
        result = thread_index;
    }
    else if ( *(_DWORD *)(v2 + 48) )
    {
      thread_index_0 = GameserverService::findPlayerThreadIndex(this, *(_DWORD *)(v2 + 48));
      if ( thread_index_0 < 0 )
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gameserver_service.cpp",
          "packetThreadRoute",
          655);
        v28 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v42,
                (const char (*)[31])"cannot find player thread,uid:");
        v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v28,
                (const unsigned int *)(v2 + 48));
        v30 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v29, (const char (*)[6])" cmd:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v30, cmd_name);
        common::milog::MiLogStream::~MiLogStream(&v42);
        result = -1;
      }
      else
      {
        result = thread_index_0;
      }
    }
    else
    {
      v31 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
      if ( common::minet::Packet::getUserSessionId(v31) )
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gameserver_service.cpp",
          "packetThreadRoute",
          663);
        v32 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v42,
                (const char (*)[32])"packet is get player token,cmd:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v32, cmd_name);
        common::milog::MiLogStream::~MiLogStream(&v42);
        v33 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
        UserSessionId = common::minet::Packet::getUserSessionId(v33);
        if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        result = UserSessionId % this->thread_num_;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gameserver_service.cpp",
          "packetThreadRoute",
          670);
        v35 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v42,
                (const char (*)[38])"packet is not for player or home,cmd:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v35, cmd_name);
        common::milog::MiLogStream::~MiLogStream(&v42);
        result = 0;
      }
    }
  }
  else if ( !*(_DWORD *)(v2 + 48)
         || (*(_DWORD *)(v2 + 96) = GameserverService::findPlayerThreadIndex(this, *(_DWORD *)(v2 + 48)),
             *(int *)(v2 + 96) < 0)
         || *(_DWORD *)(v2 + 80) == *(_DWORD *)(v2 + 96) )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gameserver_service.cpp",
      "packetThreadRoute",
      632);
    v23 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            &v42,
            (const char (*)[32])"packet has thread index, index:");
    v24 = common::milog::MiLogStream::operator<<<int,(int *)0>(v23, (const int *)(v2 + 80));
    v25 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v24, (const char (*)[6])" uid:");
    v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v2 + 48));
    v27 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v26, (const char (*)[6])" cmd:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v27, cmd_name);
    common::milog::MiLogStream::~MiLogStream(&v42);
    result = *(_DWORD *)(v2 + 80);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gameserver_service.cpp",
      "packetThreadRoute",
      626);
    v18 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            &v42,
            (const char (*)[21])"packet_thread_index:");
    v19 = common::milog::MiLogStream::operator<<<int,(int *)0>(v18, (const int *)(v2 + 80));
    v20 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            v19,
            (const char (*)[22])" player thread index:");
    v21 = common::milog::MiLogStream::operator<<<int,(int *)0>(v20, (const int *)(v2 + 96));
    v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v21, (const char (*)[16])" not same, uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v42);
    result = -1;
  }
  if ( v43 == (char *)v2 )
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

// Line 676: range 000000001759A774-000000001759A7B8
bool __cdecl GameserverService::canPushPacket(GameserverService *const this, uint16_t cmd_id)
{
  return cmd_id == 10112 || cmd_id == 10175 || cmd_id == 12035 || ServiceBase::canPushPacket(this, cmd_id);
};

// Line 689: range 000000001759A7BA-000000001759ABEF
int32_t __cdecl GameserverService::checkExitWorkDone(GameserverService *const this)
{
  int32_t v1; // r15d
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t shutdown_save_check_interval; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t v9; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  int v12; // r14d
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-A1h] BYREF
  PlayerMgr *player_mgr; // [rsp+20h] [rbp-A0h]
  HomeMgr *home_mgr; // [rsp+28h] [rbp-98h]
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-90h] BYREF
  char v18[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 config_ptr:692";
  *(_QWORD *)(v2 + 16) = GameserverService::checkExitWorkDone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::atomic<ServiceBase::Status>::operator ServiceBase::Status(&this->status_) != STATUS_STOP )
    goto LABEL_23;
  GameserverService::getConfig((GameserverService *const)(v2 + 32));
  player_mgr = &GameserverService::getGameThreadLocal(this)->player_mgr;
  PlayerMgr::logoutAllOnlinePlayerAndMoveToSaveWait(player_mgr);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&v5->shutdown_save_check_interval >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v5->shutdown_save_check_interval >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  shutdown_save_check_interval = v5->shutdown_save_check_interval;
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&v7->player_save_timeout_after_send_proto >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v7 - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->player_save_timeout_after_send_proto >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  PlayerMgr::checkSaveWaitPlayer(player_mgr, v7->player_save_timeout_after_send_proto, shutdown_save_check_interval);
  home_mgr = &GameserverService::getGameThreadLocal(this)->home_mgr;
  HomeMgr::stopAllOnlineHomeAndMoveToSaveWait(home_mgr);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&v8->shutdown_save_check_interval >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->shutdown_save_check_interval >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v9 = v8->shutdown_save_check_interval;
  v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&v10->home_save_timeout_after_send_proto >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->home_save_timeout_after_send_proto >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  HomeMgr::checkSaveWaitHome(home_mgr, v10->home_save_timeout_after_send_proto, v9);
  if ( PlayerMgr::getSaveWaitPlayerNum(player_mgr) || HomeMgr::getSaveWaitHomeNum(home_mgr) )
  {
    v1 = 1;
    v12 = 0;
  }
  else
  {
    if ( PlayerMgr::checkOnlinePlayerMapOnExit(player_mgr) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/gameserver_service.cpp",
        "checkExitWorkDone",
        713);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        &v17,
        (const char (*)[32])"checkOnlinePlayerMapOnExit fail");
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v17, "onCleanPlayer", &__a);
    common::tools::perf::MemoryPerf::output((const std::string *)&v17);
    std::string::~string(&v17);
    std::allocator<char>::~allocator(&__a);
    v12 = 1;
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 32));
  if ( v12 == 1 )
LABEL_23:
    v1 = 0;
  result = v1;
  if ( v18 == (char *)v2 )
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

// Line 723: range 000000001759ABF0-000000001759ADB1
std::string *__cdecl GameserverService::getCustomCmdLogTail[abi:cxx11](
        std::string *retstr,
        GameserverService *const this)
{
  unsigned int SaveWaitPlayerNum; // eax
  unsigned int OnlinePlayerNum; // eax
  PlayerMgr *player_mgr; // [rsp+18h] [rbp-98h]
  std::string __rhs; // [rsp+20h] [rbp-90h] BYREF
  std::string __lhs; // [rsp+40h] [rbp-70h] BYREF
  std::string v8; // [rsp+60h] [rbp-50h] BYREF
  std::string v9; // [rsp+80h] [rbp-30h] BYREF

  player_mgr = &GameserverService::getGameThreadLocal(this)->player_mgr;
  SaveWaitPlayerNum = PlayerMgr::getSaveWaitPlayerNum(player_mgr);
  std::to_string(&v9, SaveWaitPlayerNum);
  OnlinePlayerNum = PlayerMgr::getOnlinePlayerNum(player_mgr);
  std::to_string(&__rhs, OnlinePlayerNum);
  std::operator+<char>(&__lhs, "|", &__rhs);
  std::operator+<char>(&v8, &__lhs, "|");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::operator+<char>(retstr, &v8, &v9);
  std::string::~string(&v8);
  std::string::~string(&__lhs);
  std::string::~string(&__rhs);
  std::string::~string(&v9);
  return retstr;
};

// Line 732: range 000000001759ADB2-000000001759AF9E
GameserverService *__fastcall GameserverService::findPlayerSession(GameserverService *const this, __int64 uid, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerSessionProxy> >,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<PlayerSessionProxy> >,false> __y; // [rsp+28h] [rbp-A8h] BYREF
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 7 uid:731 64 8 8 iter:734 96 16 8 lock:733";
  *(_QWORD *)(v3 + 16) = GameserverService::findPlayerSession;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = a3;
  std::shared_lock<std::shared_mutex>::shared_lock(
    (std::shared_lock<std::shared_mutex> *const)(v3 + 96),
    (std::shared_lock<std::shared_mutex>::mutex_type *)(uid + 6408));
  *(std::unordered_map<unsigned int,std::shared_ptr<PlayerSessionProxy>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<PlayerSessionProxy>>::find(
                                                                                                   (std::unordered_map<unsigned int,std::shared_ptr<PlayerSessionProxy>> *const)(uid + 6352),
                                                                                                   (const std::unordered_map<unsigned int,std::shared_ptr<PlayerSessionProxy>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<PlayerSessionProxy>>::end((std::unordered_map<unsigned int,std::shared_ptr<PlayerSessionProxy>> *const)(uid + 6352))._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::shared_ptr<PlayerSessionProxy>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<PlayerSessionProxy> >,false> *)(v3 + 64),
         &__y) )
  {
    std::shared_ptr<PlayerSessionProxy>::shared_ptr((std::shared_ptr<PlayerSessionProxy> *const)this, 0LL);
  }
  else
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerSessionProxy>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerSessionProxy> >,false,false> *const)(v3 + 64));
    std::shared_ptr<PlayerSessionProxy>::shared_ptr((std::shared_ptr<PlayerSessionProxy> *const)this, &v6->second);
  }
  std::shared_lock<std::shared_mutex>::~shared_lock((std::shared_lock<std::shared_mutex> *const)(v3 + 96));
  if ( v10 == (char *)v3 )
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
  return this;
};

// Line 743: range 000000001759AFA0-000000001759B3E3
PlayerSessionProxyPtr __cdecl GameserverService::createPlayerSession(
        GameserverService *const this,
        const common::minet::PacketPtr *packet_ptr,
        const proto::PlayerLoginReq *login_req)
{
  const proto::PlayerLoginReq *v3; // rcx
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  unsigned __int64 v7; // rax
  _BYTE *v8; // rdx
  PlayerSessionProxyPtr result; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  PlayerSessionProxy *v11; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  const proto::PacketHead *Head; // rax
  PlayerSessionProxy *v14; // rdx
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  unsigned int *v16; // rcx
  std::shared_ptr<PlayerSessionProxy> *v17; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerSessionProxy> >,false,false>,bool> v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  PlayerSessionProxy *v21; // rax
  const proto::PlayerLoginReq *login_reqa; // [rsp+0h] [rbp-100h]
  bool ret; // [rsp+2Bh] [rbp-D5h]
  unsigned int val; // [rsp+2Ch] [rbp-D4h] BYREF
  common::milog::MiLogStream v26; // [rsp+30h] [rbp-D0h] BYREF
  char v27[176]; // [rsp+50h] [rbp-B0h] BYREF

  login_reqa = v3;
  v4 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 7 uid:750 64 16 15 session_ptr:751 96 16 8 lock:762";
  *(_QWORD *)(v4 + 16) = GameserverService::createPlayerSession;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -202178560;
  v7 = ZTWN11ThreadLocal17is_in_work_threadE();
  v8 = (_BYTE *)v7;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && (char)(v7 & 7) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    __asan_report_load1(v7);
  if ( *v8 != 1 )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/gameserver_service.cpp",
      "createPlayerSession",
      746);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v26,
      (const char (*)[25])"need call in work thread");
    common::milog::MiLogStream::~MiLogStream(&v26);
    std::shared_ptr<PlayerSessionProxy>::shared_ptr((std::shared_ptr<PlayerSessionProxy> *const)this, 0LL);
  }
  else
  {
    v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)login_req);
    *(_DWORD *)(v4 + 48) = common::minet::Packet::getUserId(v10);
    common::tools::perf::make_shared<PlayerSessionProxy,unsigned int &>(
      (unsigned int *)(v4 + 64),
      (unsigned int *)(v4 + 48));
    if ( std::operator==<PlayerSessionProxy>(0LL, (const std::shared_ptr<PlayerSessionProxy> *)(v4 + 64)) )
    {
      std::shared_ptr<PlayerSessionProxy>::shared_ptr((std::shared_ptr<PlayerSessionProxy> *const)this, 0LL);
    }
    else
    {
      v11 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)login_req);
      Head = common::minet::Packet::getHead(v12);
      PlayerSessionProxy::setLoginPacketHead(v11, Head);
      v14 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      PlayerSessionProxy::setLoginReq(v14, login_reqa);
      std::unique_lock<std::shared_mutex>::unique_lock(
        (std::unique_lock<std::shared_mutex> *const)(v4 + 96),
        (std::unique_lock<std::shared_mutex>::mutex_type *)&packet_ptr[400]._M_refcount);
      v15 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      val = PlayerSessionProxy::getUid(v15);
      v18 = std::unordered_map<unsigned int,std::shared_ptr<PlayerSessionProxy>>::emplace<unsigned int,std::shared_ptr<PlayerSessionProxy>&>(
              (std::unordered_map<unsigned int,std::shared_ptr<PlayerSessionProxy>> *const)&packet_ptr[397],
              &val,
              (std::shared_ptr<PlayerSessionProxy> *)(v4 + 64),
              v16,
              v17);
      ret = v18.second;
      std::unique_lock<std::shared_mutex>::~unique_lock((std::unique_lock<std::shared_mutex> *const)(v4 + 96));
      if ( !ret )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/gameserver_service.cpp",
          "createPlayerSession",
          768);
        v19 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                &v26,
                (const char (*)[21])"duplicated session: ");
        v20 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        val = PlayerSessionProxy::getUid(v20);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
        common::milog::MiLogStream::~MiLogStream(&v26);
        std::shared_ptr<PlayerSessionProxy>::shared_ptr((std::shared_ptr<PlayerSessionProxy> *const)this, 0LL);
      }
      else
      {
        v21 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        PlayerSessionProxy::onConnect(v21);
        GameserverService::increaseThreadLoad((GameserverService *const)packet_ptr, *(_DWORD *)(v4 + 48));
        std::shared_ptr<PlayerSessionProxy>::shared_ptr(
          (std::shared_ptr<PlayerSessionProxy> *const)this,
          (std::shared_ptr<PlayerSessionProxy> *)(v4 + 64));
      }
    }
    std::shared_ptr<PlayerSessionProxy>::~shared_ptr((std::shared_ptr<PlayerSessionProxy> *const)(v4 + 64));
  }
  if ( v27 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 779: range 000000001759B3E4-000000001759B61D
int32_t __cdecl GameserverService::bindPlayerSession(
        GameserverService *const this,
        PlayerSessionProxyPtr *p_session_ptr,
        const common::minet::PacketPtr *packet_ptr,
        const proto::PlayerLoginReq *login_req)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v10; // rax
  int32_t result; // eax
  PlayerSessionProxy *v12; // r13
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  const proto::PacketHead *Head; // rax
  PlayerSessionProxy *v15; // rdx
  PlayerSessionProxy *v16; // rax
  PlayerSessionProxy *v17; // rax
  common::milog::MiLogStream v20; // [rsp+20h] [rbp-80h] BYREF
  char v21[96]; // [rsp+40h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 7 uid:780";
  *(_QWORD *)(v4 + 16) = GameserverService::bindPlayerSession;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
  *(_DWORD *)(v4 + 32) = common::minet::Packet::getUserId(v7);
  if ( std::operator==<PlayerSessionProxy>(p_session_ptr, 0LL)
    || (v8 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_session_ptr),
        PlayerSessionProxy::isConnected(v8)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/gameserver_service.cpp",
      "bindPlayerSession",
      783);
    v10 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            &v20,
            (const char (*)[38])"session is nullptr or connected, uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = -1;
  }
  else
  {
    v12 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_session_ptr);
    v13 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
    Head = common::minet::Packet::getHead(v13);
    PlayerSessionProxy::setLoginPacketHead(v12, Head);
    v15 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_session_ptr);
    PlayerSessionProxy::setLoginReq(v15, login_req);
    v16 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_session_ptr);
    PlayerSessionProxy::genNewLoginRand(v16);
    v17 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_session_ptr);
    PlayerSessionProxy::onConnect(v17);
    result = 0;
  }
  if ( v21 == (char *)v4 )
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

// Line 794: range 000000001759B61E-000000001759B95D
__int64 __fastcall GameserverService::removePlayerSession(GameserverService *const this, uint32_t uid)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerSessionProxy> >,false,false>::pointer v5; // rax
  unsigned int v6; // r14d
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  __int64 result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<PlayerSessionProxy> >,false> __y; // [rsp+18h] [rbp-F8h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-F0h] BYREF
  char v11[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 7 uid:793 64 8 8 iter:798 96 16 15 session_ptr:795 128 16 8 lock:797";
  *(_QWORD *)(v2 + 16) = GameserverService::removePlayerSession;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  *(_DWORD *)(v2 + 48) = uid;
  *(_QWORD *)(v2 + 96) = 0LL;
  *(_QWORD *)(v2 + 104) = 0LL;
  std::unique_lock<std::shared_mutex>::unique_lock(
    (std::unique_lock<std::shared_mutex> *const)(v2 + 128),
    &this->player_session_mutex_);
  *(std::unordered_map<unsigned int,std::shared_ptr<PlayerSessionProxy>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::shared_ptr<PlayerSessionProxy>>::find(
                                                                                                   &this->player_session_map_,
                                                                                                   (const std::unordered_map<unsigned int,std::shared_ptr<PlayerSessionProxy>>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<PlayerSessionProxy>>::end(&this->player_session_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<PlayerSessionProxy>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<PlayerSessionProxy> >,false> *)(v2 + 64),
         &__y) )
  {
    v5 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerSessionProxy>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerSessionProxy> >,false,false> *const)(v2 + 64));
    std::shared_ptr<PlayerSessionProxy>::operator=((std::shared_ptr<PlayerSessionProxy> *const)(v2 + 96), &v5->second);
    std::unordered_map<unsigned int,std::shared_ptr<PlayerSessionProxy>>::erase(
      &this->player_session_map_,
      *(std::unordered_map<unsigned int,std::shared_ptr<PlayerSessionProxy>>::iterator *)(v2 + 64));
  }
  std::unique_lock<std::shared_mutex>::~unique_lock((std::unique_lock<std::shared_mutex> *const)(v2 + 128));
  if ( std::operator==<PlayerSessionProxy>((const std::shared_ptr<PlayerSessionProxy> *)(v2 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gameserver_service.cpp",
      "removePlayerSession",
      807);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v10, (const char (*)[16])"session is null");
    common::milog::MiLogStream::~MiLogStream(&v10);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( PlayerSessionProxy::isConnected(v7) )
    {
      std::shared_ptr<PlayerSessionProxy>::shared_ptr(
        (std::shared_ptr<PlayerSessionProxy> *const)(v2 + 128),
        (const std::shared_ptr<PlayerSessionProxy> *)(v2 + 96));
      GameserverService::disconnectPlayerSession(this, (PlayerSessionProxyPtr *)(v2 + 128));
      std::shared_ptr<PlayerSessionProxy>::~shared_ptr((std::shared_ptr<PlayerSessionProxy> *const)(v2 + 128));
    }
    GameserverService::decreaseThreadLoad(this, *(_DWORD *)(v2 + 48));
    v6 = 0;
  }
  std::shared_ptr<PlayerSessionProxy>::~shared_ptr((std::shared_ptr<PlayerSessionProxy> *const)(v2 + 96));
  result = v6;
  if ( v11 == (char *)v2 )
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

// Line 821: range 000000001759B95E-000000001759BB68
__int64 __fastcall GameserverService::addTransferPlayer(
        GameserverService *const this,
        uint32_t uid,
        uint32_t transfer_start_time)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::map<unsigned int,TransferPlayer>::mapped_type *v6; // rax
  _QWORD *v7; // rdx
  __int64 result; // rax
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 7 uid:820 64 8 10 player:822 96 16 8 lock:824";
  *(_QWORD *)(v3 + 16) = GameserverService::addTransferPlayer;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = uid;
  *(_DWORD *)(v3 + 64) = *(_DWORD *)(v3 + 48);
  *(_DWORD *)(v3 + 68) = transfer_start_time;
  std::unique_lock<std::shared_mutex>::unique_lock(
    (std::unique_lock<std::shared_mutex> *const)(v3 + 96),
    &this->player_session_mutex_);
  v6 = std::map<unsigned int,TransferPlayer>::operator[](
         &this->transfer_player_map_,
         (const std::map<unsigned int,TransferPlayer>::key_type *)(v3 + 48));
  v7 = v6;
  if ( ((unsigned __int8)v6 & 7) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&v6->transfer_start_time + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v6 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v6->transfer_start_time + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v6, 8LL);
  }
  *v7 = *(_QWORD *)(v3 + 64);
  std::unique_lock<std::shared_mutex>::~unique_lock((std::unique_lock<std::shared_mutex> *const)(v3 + 96));
  result = 0LL;
  if ( v10 == (char *)v3 )
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

// Line 831: range 000000001759BB6A-000000001759BDA7
int32_t __cdecl GameserverService::cleanTimeoutTransferPlayer(GameserverService *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::_Rb_tree_iterator<std::pair<unsigned int const,TransferPlayer> >::pointer v4; // rax
  int32_t result; // eax
  uint32_t now; // [rsp+1Ch] [rbp-A4h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,TransferPlayer> >::_Self __y; // [rsp+20h] [rbp-A0h] BYREF
  TransferPlayer *transfer_player; // [rsp+28h] [rbp-98h]
  char v9[144]; // [rsp+30h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 8 iter:834 64 16 8 lock:833";
  *(_QWORD *)(v1 + 16) = GameserverService::cleanTimeoutTransferPlayer;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202178560;
  now = common::tools::TimeUtils::getNow();
  std::unique_lock<std::shared_mutex>::unique_lock(
    (std::unique_lock<std::shared_mutex> *const)(v1 + 64),
    &this->player_session_mutex_);
  *(std::map<unsigned int,TransferPlayer>::iterator *)(v1 + 32) = std::map<unsigned int,TransferPlayer>::begin(&this->transfer_player_map_);
  while ( 1 )
  {
    __y._M_node = std::map<unsigned int,TransferPlayer>::end(&this->transfer_player_map_)._M_node;
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,TransferPlayer> >::_Self *)(v1 + 32),
            &__y) )
      break;
    v4 = std::_Rb_tree_iterator<std::pair<unsigned int const,TransferPlayer>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,TransferPlayer> > *const)(v1 + 32));
    transfer_player = &v4->second;
    if ( *(_BYTE *)(((unsigned __int64)&v4->second.transfer_start_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v4 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v4->second.transfer_start_time >> 3)
                                                       + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( now <= transfer_player->transfer_start_time + 10 )
      std::_Rb_tree_iterator<std::pair<unsigned int const,TransferPlayer>>::operator++(
        (std::_Rb_tree_iterator<std::pair<unsigned int const,TransferPlayer> > *const)(v1 + 32),
        0);
    else
      *(std::map<unsigned int,TransferPlayer>::iterator *)(v1 + 32) = std::map<unsigned int,TransferPlayer>::erase[abi:cxx11](
                                                                        &this->transfer_player_map_,
                                                                        *(std::map<unsigned int,TransferPlayer>::iterator *)(v1 + 32));
  }
  std::unique_lock<std::shared_mutex>::~unique_lock((std::unique_lock<std::shared_mutex> *const)(v1 + 64));
  result = 0;
  if ( v9 == (char *)v1 )
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

// Line 850: range 000000001759BDA8-000000001759BF6D
TransferPlayer *__fastcall GameserverService::findTransferPlayer(GameserverService *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  TransferPlayer *p_second; // r14
  TransferPlayer *result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,TransferPlayer> >::_Self __y; // [rsp+18h] [rbp-B8h] BYREF
  char v8[176]; // [rsp+20h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 uid:849 64 8 8 iter:852 96 16 8 lock:851";
  *(_QWORD *)(v2 + 16) = GameserverService::findTransferPlayer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = uid;
  std::shared_lock<std::shared_mutex>::shared_lock(
    (std::shared_lock<std::shared_mutex> *const)(v2 + 96),
    &this->player_transfer_mutex_);
  *(std::map<unsigned int,TransferPlayer>::iterator *)(v2 + 64) = std::map<unsigned int,TransferPlayer>::find(
                                                                    &this->transfer_player_map_,
                                                                    (const std::map<unsigned int,TransferPlayer>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,TransferPlayer>::end(&this->transfer_player_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,TransferPlayer> >::_Self *)(v2 + 64),
         &__y) )
  {
    p_second = &std::_Rb_tree_iterator<std::pair<unsigned int const,TransferPlayer>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,TransferPlayer> > *const)(v2 + 64))->second;
  }
  else
  {
    p_second = 0LL;
  }
  std::shared_lock<std::shared_mutex>::~shared_lock((std::shared_lock<std::shared_mutex> *const)(v2 + 96));
  result = p_second;
  if ( v8 == (char *)v2 )
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

// Line 862: range 000000001759BF6E-000000001759C3E7
void __cdecl GameserverService::notifyGateNotFoundPlayer(
        GameserverService *const this,
        const common::minet::PacketPtr *packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::minet::Packet *v5; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::minet::Packet *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  NetworkMgrBase *v15; // r14
  common::minet::Packet *v16; // rax
  uint32_t v17; // r15d
  uint32_t v18; // r8d
  unsigned int val; // [rsp+24h] [rbp-ECh] BYREF
  unsigned int ServiceAppId; // [rsp+28h] [rbp-E8h] BYREF
  unsigned int UserSessionId; // [rsp+2Ch] [rbp-E4h] BYREF
  std::shared_ptr<common::minet::Packet> v22; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-D0h] BYREF
  char v24[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 21 notify_packet_ptr:865 64 24 10 notify:863";
  *(_QWORD *)(v2 + 16) = GameserverService::notifyGateNotFoundPlayer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  proto::DisconnectClientNotify::DisconnectClientNotify((proto::DisconnectClientNotify *const)(v2 + 64));
  proto::DisconnectClientNotify::set_data((proto::DisconnectClientNotify *const)(v2 + 64), 8u);
  common::minet::PacketUtils::createPacket<proto::DisconnectClientNotify>((const proto::DisconnectClientNotify *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gameserver_service.cpp",
      "notifyGateNotFoundPlayer",
      868);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v23, (const char (*)[21])"create packet failed");
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  else
  {
    v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
    if ( common::minet::Packet::copyHead(v5, v6) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gameserver_service.cpp",
        "notifyGateNotFoundPlayer",
        873);
      common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v23, (const char (*)[16])"copyHead failed");
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gameserver_service.cpp",
        "notifyGateNotFoundPlayer",
        877);
      v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v23,
             (const char (*)[39])"[LOGIN] notifyGateNotFoundPlayer uid: ");
      v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
      val = common::minet::Packet::getUserId(v8);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])" gatesession: ");
      v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
      ServiceAppId = common::minet::Packet::getServiceAppId(v11, 2u);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &ServiceAppId);
      v13 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v12, (const char (*)[2])":");
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
      UserSessionId = common::minet::Packet::getUserSessionId(v14);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &UserSessionId);
      common::milog::MiLogStream::~MiLogStream(&v23);
      v15 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
      v16 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
      v17 = common::minet::Packet::getServiceAppId(v16, 2u);
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &v22,
        (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
      NetworkMgrBase::sendPacketToTargetService(v15, (common::minet::PacketPtr)__PAIR128__(2LL, &v22), v17, v18);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&v22);
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  proto::DisconnectClientNotify::~DisconnectClientNotify((proto::DisconnectClientNotify *const)(v2 + 64));
  if ( v24 == (char *)v2 )
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

// Line 887: range 000000001759C3E8-000000001759C4B2
void __cdecl GameserverService::disconnectPlayerSession(
        GameserverService *const this,
        PlayerSessionProxyPtr *p_session_ptr)
{
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  PlayerSessionProxy *v3; // rax
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator!=<PlayerSessionProxy>(p_session_ptr, 0LL) )
  {
    v2 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_session_ptr);
    if ( !PlayerSessionProxy::isConnected(v2) )
    {
      common::milog::MiLogStream::create(
        &v4,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gameserver_service.cpp",
        "disconnectPlayerSession",
        893);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v4,
        (const char (*)[26])"session not not connected");
      common::milog::MiLogStream::~MiLogStream(&v4);
    }
    else
    {
      v3 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_session_ptr);
      PlayerSessionProxy::onDisconnect(v3);
    }
  }
};

// Line 903: range 000000001759C4B4-000000001759C73F
ConfigPtr __cdecl GameserverService::getConfig(GameserverService *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  int v5; // r14d
  ConfigPtr result; // rax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-B0h] BYREF
  char v8[144]; // [rsp+30h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 coro_ptr:905 64 16 12 base_ptr:908";
  *(_QWORD *)(v1 + 16) = GameserverService::getConfig;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  common::minet::Coroutine::thisCoro();
  if ( !std::operator!=<common::minet::Coroutine>(0LL, (const std::shared_ptr<common::minet::Coroutine> *)(v1 + 32)) )
    goto LABEL_20;
  v4 = std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  std::shared_ptr<ConfigBase>::shared_ptr((std::shared_ptr<ConfigBase> *const)(v1 + 64), &v4->config_base_ptr);
  if ( std::operator!=<ConfigBase>(0LL, (const std::shared_ptr<ConfigBase> *)(v1 + 64)) )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    std::dynamic_pointer_cast<Config,ConfigBase>((const std::shared_ptr<ConfigBase> *)this);
    v5 = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/gameserver_service.cpp",
      "getConfig",
      915);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v7, (const char (*)[18])"base_ptr is null!");
    common::milog::MiLogStream::~MiLogStream(&v7);
    v5 = 1;
  }
  std::shared_ptr<ConfigBase>::~shared_ptr((std::shared_ptr<ConfigBase> *const)(v1 + 64));
  if ( v5 == 1 )
  {
LABEL_20:
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    GameserverService::getConfigFromThreadLocal(this);
  }
  std::shared_ptr<common::minet::Coroutine>::~shared_ptr((std::shared_ptr<common::minet::Coroutine> *const)(v1 + 32));
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
  result._M_ptr = (std::__shared_ptr<Config,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 922: range 000000001759C740-000000001759C986
ConfigPtr __cdecl GameserverService::getConfigFromThreadLocal(GameserverService *const this)
{
  std::shared_ptr<ConfigBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  const std::shared_ptr<ConfigBase> *v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  ConfigPtr result; // rax
  std::shared_ptr<ConfigBase> *v8; // [rsp+8h] [rbp-98h]
  std::shared_ptr<ConfigBase> __r; // [rsp+10h] [rbp-90h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-80h] BYREF
  char v11[96]; // [rsp+40h] [rbp-60h] BYREF

  v8 = (std::shared_ptr<ConfigBase> *)this;
  v1 = (std::shared_ptr<ConfigBase> *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (GameserverService *const)64;
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<ConfigBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 12 base_ptr:924";
  v1[1]._M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)GameserverService::getConfigFromThreadLocal;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  v4 = (const std::shared_ptr<ConfigBase> *)ZTWN11ThreadLocal15config_base_ptrE(this);
  std::shared_ptr<ConfigBase>::shared_ptr(v1 + 2, v4);
  if ( std::operator==<ConfigBase>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gameserver_service.cpp",
      "getConfigFromThreadLocal",
      929);
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      &v10,
      (const char (*)[40])"ThreadLocal::config_base_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v10);
    v5 = (unsigned __int64)std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::config_mgr_ptr);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8();
    v6 = *(_QWORD *)v5 + 32LL;
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8();
    (*(void (__fastcall **)(std::shared_ptr<ConfigBase> *, unsigned __int64))v6)(&__r, v5);
    std::shared_ptr<ConfigBase>::operator=(v1 + 2, &__r);
    std::shared_ptr<ConfigBase>::~shared_ptr(&__r);
  }
  if ( *(_WORD *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    __asan_report_store16(v8);
  std::dynamic_pointer_cast<Config,ConfigBase>(v8);
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
  result._M_ptr = (std::__shared_ptr<Config,(__gnu_cxx::_Lock_policy)2>::element_type *)v8;
  return result;
};

// Line 940: range 000000001759C988-000000001759CC15
int32_t __cdecl GameserverService::asyncHttpRequest(
        GameserverService *const this,
        const common::minet::http_client::HttpRequest *req,
        time_t timeout,
        uint32_t type,
        common::minet::http_client::ResponseCallBackFunc *p_func)
{
  unsigned __int64 v5; // rax
  _BYTE *v6; // rdx
  int32_t v8; // ebx
  std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::pointer v9; // rbx
  unsigned __int64 v10; // rax
  __int64 (__fastcall *v11)(std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::pointer, const common::minet::http_client::HttpRequest *, time_t, _QWORD, _QWORD, common::milog::MiLogStream *); // r12
  unsigned __int64 v12; // rdx
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-30h] BYREF

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
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/gameserver_service.cpp",
      "asyncHttpRequest",
      944);
    common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
      &v17,
      (const char (*)[60])"asyncHttpRequest with a callback need called in work thread");
    common::milog::MiLogStream::~MiLogStream(&v17);
    return -1;
  }
  else if ( std::operator==<common::minet::http_client::HttpClientMgrBase,std::default_delete<common::minet::http_client::HttpClientMgrBase>>(
              0LL,
              &this->http_client_mgr_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gameserver_service.cpp",
      "asyncHttpRequest",
      949);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v17,
      (const char (*)[32])"http_client_mgr_ptr_ is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v17);
    return -1;
  }
  else
  {
    v9 = std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::operator->(&this->http_client_mgr_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v10 = (unsigned __int64)(v9->_vptr_HttpClientMgrBase + 8);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8();
    v11 = *(__int64 (__fastcall **)(std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::pointer, const common::minet::http_client::HttpRequest *, time_t, _QWORD, _QWORD, common::milog::MiLogStream *))v10;
    std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::function(
      (std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v17,
      p_func);
    v12 = ZTWN11ThreadLocal17work_thread_indexE();
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0 && (char)((v12 & 7) + 3) >= *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      __asan_report_load4();
    v8 = v11(v9, req, timeout, *(unsigned int *)v12, type, &v17);
    std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::~function((std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v17);
  }
  return v8;
};

// Line 957: range 000000001759CC16-000000001759CDC0
int32_t __cdecl GameserverService::asyncHttpRequest(
        GameserverService *const this,
        const std::string *url,
        uint32_t type)
{
  int32_t v3; // ebx
  std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::pointer v4; // rbx
  unsigned __int64 v5; // rax
  __int64 (__fastcall *v6)(std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::pointer, const std::string *, __int64, _QWORD, _QWORD, common::milog::MiLogStream *); // r12
  unsigned __int64 v7; // rdx
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<common::minet::http_client::HttpClientMgrBase,std::default_delete<common::minet::http_client::HttpClientMgrBase>>(
         0LL,
         &this->http_client_mgr_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gameserver_service.cpp",
      "asyncHttpRequest",
      960);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v10,
      (const char (*)[32])"http_client_mgr_ptr_ is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v10);
    return -1;
  }
  else
  {
    v4 = std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::operator->(&this->http_client_mgr_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = (unsigned __int64)(v4->_vptr_HttpClientMgrBase + 9);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8();
    v6 = *(__int64 (__fastcall **)(std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::pointer, const std::string *, __int64, _QWORD, _QWORD, common::milog::MiLogStream *))v5;
    std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::function(
      (std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v10,
      0LL);
    v7 = ZTWN11ThreadLocal17work_thread_indexE();
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && (char)((v7 & 7) + 3) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      __asan_report_load4();
    v3 = v6(v4, url, 5LL, *(unsigned int *)v7, type, &v10);
    std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::~function((std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v10);
  }
  return v3;
};

// Line 968: range 000000001759CDC2-000000001759CFA6
common::tools::TimerMgrPtr __cdecl GameserverService::getTimerMgrPtr(GameserverService *const this)
{
  GameserverService *v1; // rsi
  unsigned __int64 v2; // rax
  _BYTE *v3; // rdx
  unsigned __int64 v4; // rdx
  GameThreadLocal *GameThreadLocal; // rdx
  common::tools::TimerMgrPtr result; // rax
  unsigned __int64 v7; // rax
  _BYTE *v8; // rdx
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-30h] BYREF

  v2 = ZTWN11ThreadLocal17is_in_work_threadE();
  v3 = (_BYTE *)v2;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)(v2 & 7) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    __asan_report_load1(v2);
  if ( *v3 )
  {
    v4 = ZTWN11ThreadLocal17work_thread_indexE();
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) != 0 && (char)((v4 & 7) + 3) >= *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      __asan_report_load4();
  }
  else
  {
    v7 = ZTWN11ThreadLocal23is_in_async_work_threadE();
    v8 = (_BYTE *)v7;
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && (char)(v7 & 7) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      __asan_report_load1(v7);
    if ( !*v8 )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/gameserver_service.cpp",
        "getTimerMgrPtr",
        977);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v9,
        (const char (*)[26])"cannot find timer_mgr_ptr");
      common::milog::MiLogStream::~MiLogStream(&v9);
      std::shared_ptr<common::tools::TimerMgr>::shared_ptr((std::shared_ptr<common::tools::TimerMgr> *const)this, 0LL);
      goto LABEL_14;
    }
    v4 = ZTWN11ThreadLocal26work_thread_index_in_asyncE();
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) != 0 && (char)((v4 & 7) + 3) >= *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      __asan_report_load4();
  }
  GameThreadLocal = GameserverService::getGameThreadLocal(v1, *(_DWORD *)v4);
  std::shared_ptr<common::tools::TimerMgr>::shared_ptr(
    (std::shared_ptr<common::tools::TimerMgr> *const)this,
    &GameThreadLocal->timer_mgr_ptr);
LABEL_14:
  result._M_ptr = (std::__shared_ptr<common::tools::TimerMgr,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 982: range 000000001759CFA8-000000001759D147
GameThreadLocal *__cdecl GameserverService::getGameThreadLocal(GameserverService *const this)
{
  unsigned __int64 v1; // rax
  _BYTE *v2; // rdx
  unsigned __int64 v3; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( !(_BYTE)`guard variable for'GameserverService::getGameThreadLocal(void)::empty_thread_local
    && __cxa_guard_acquire(&`guard variable for'GameserverService::getGameThreadLocal(void)::empty_thread_local) )
  {
    GameThreadLocal::GameThreadLocal(&GameserverService::getGameThreadLocal(void)::empty_thread_local);
    __cxa_guard_release(&`guard variable for'GameserverService::getGameThreadLocal(void)::empty_thread_local);
    __cxa_atexit(
      (void (__fastcall *)(void *))GameThreadLocal::~GameThreadLocal,
      &GameserverService::getGameThreadLocal(void)::empty_thread_local,
      &_dso_handle);
  }
  v1 = ZTWN11ThreadLocal17is_in_work_threadE();
  v2 = (_BYTE *)v1;
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) != 0 && (char)(v1 & 7) >= *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    __asan_report_load1(v1);
  if ( *v2 )
  {
    v3 = ZTWN11ThreadLocal17work_thread_indexE();
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) != 0 && (char)((v3 & 7) + 3) >= *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      __asan_report_load4();
    return GameserverService::getGameThreadLocal(this, *(_DWORD *)v3);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/gameserver_service.cpp",
      "getGameThreadLocal",
      988);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v5,
      (const char (*)[28])"thread is not a work thread");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return &GameserverService::getGameThreadLocal(void)::empty_thread_local;
  }
};

// Line 993: range 000000001759D148-000000001759D3B5
std::vector<GameThreadLocal>::reference __fastcall GameserverService::getGameThreadLocal(
        GameserverService *const this,
        uint32_t thread_index)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::vector<GameThreadLocal>::reference result; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-90h] BYREF
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 16 thread_index:992";
  *(_QWORD *)(v2 + 16) = GameserverService::getGameThreadLocal;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = thread_index;
  if ( !(_BYTE)`guard variable for'GameserverService::getGameThreadLocal(unsigned int)::empty_thread_local
    && __cxa_guard_acquire(&`guard variable for'GameserverService::getGameThreadLocal(unsigned int)::empty_thread_local) )
  {
    GameThreadLocal::GameThreadLocal(&GameserverService::getGameThreadLocal(unsigned int)::empty_thread_local);
    __cxa_guard_release(&`guard variable for'GameserverService::getGameThreadLocal(unsigned int)::empty_thread_local);
    __cxa_atexit(
      (void (__fastcall *)(void *))GameThreadLocal::~GameThreadLocal,
      &GameserverService::getGameThreadLocal(unsigned int)::empty_thread_local,
      &_dso_handle);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->thread_num_ > *(_DWORD *)(v2 + 32) )
  {
    result = std::vector<GameThreadLocal>::operator[](&this->game_thread_local_vec_, *(unsigned int *)(v2 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/gameserver_service.cpp",
      "getGameThreadLocal",
      997);
    v5 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v9, (const char (*)[14])"thread index:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v6, (const char (*)[28])off_26141C00);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->thread_num_);
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = &GameserverService::getGameThreadLocal(unsigned int)::empty_thread_local;
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

// Line 1006: range 000000001759D3B6-000000001759D5EB
int32_t __cdecl GameserverService::setPacketGameThreadIndex(
        GameserverService *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rax
  _BYTE *v3; // rdx
  common::minet::Packet *v4; // rbx
  unsigned __int64 v5; // rdx
  unsigned __int64 v7; // rax
  _BYTE *v8; // rdx
  common::milog::MiLogStream *v9; // rbx
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rbx
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  unsigned __int16 CmdId; // [rsp+1Ah] [rbp-36h] BYREF
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-30h] BYREF

  v2 = ZTWN11ThreadLocal17is_in_work_threadE();
  v3 = (_BYTE *)v2;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)(v2 & 7) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    __asan_report_load1(v2);
  if ( *v3 )
  {
    v4 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    v5 = ZTWN11ThreadLocal17work_thread_indexE();
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)((v5 & 7) + 3) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      __asan_report_load4();
LABEL_6:
    common::minet::Packet::setGameThreadIndex(v4, *(_DWORD *)v5);
    return 0;
  }
  v7 = ZTWN11ThreadLocal23is_in_async_work_threadE();
  v8 = (_BYTE *)v7;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && (char)(v7 & 7) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    __asan_report_load1(v7);
  if ( *v8 )
  {
    v4 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    v5 = ZTWN11ThreadLocal26work_thread_index_in_asyncE();
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)((v5 & 7) + 3) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      __asan_report_load4();
    goto LABEL_6;
  }
  common::milog::MiLogStream::create(
    &v16,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/gameserver_service.cpp",
    "setPacketGameThreadIndex",
    1017);
  v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
         &v16,
         (const char (*)[30])"packet in unknown thread,uid:");
  v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  val = common::minet::Packet::getUserId(v10);
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
  v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])"cmd_id:");
  v13 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  CmdId = common::minet::Packet::getCmdId(v13);
  common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(v12, &CmdId);
  common::milog::MiLogStream::~MiLogStream(&v16);
  return -1;
};

// Line 1022: range 000000001759D5EC-000000001759D869
uint32_t __cdecl GameserverService::getTargetUidFromLogin(
        GameserverService *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t v5; // r14d
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<const proto::PlayerLoginReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 proto_ptr:1028";
  *(_QWORD *)(v2 + 16) = GameserverService::getTargetUidFromLogin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::operator==<common::minet::Packet>(p_packet_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/gameserver_service.cpp",
      "getTargetUidFromLogin",
      1025);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v11, (const char (*)[15])"packet is null");
    common::milog::MiLogStream::~MiLogStream(&v11);
    v5 = 0;
  }
  else
  {
    std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    common::minet::Packet::getConstProto<proto::PlayerLoginReq>((common::minet::Packet *const)(v2 + 32));
    if ( std::operator==<proto::PlayerLoginReq const>(
           (const std::shared_ptr<const proto::PlayerLoginReq> *)(v2 + 32),
           0LL) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/gameserver_service.cpp",
        "getTargetUidFromLogin",
        1031);
      v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v11,
             (const char (*)[41])"getConstProto PlayerLoginReq failed,uid:");
      v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      val = common::minet::Packet::getUserId(v7);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      common::milog::MiLogStream::~MiLogStream(&v11);
      v5 = 0;
    }
    else
    {
      v8 = std::__shared_ptr_access<proto::PlayerLoginReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const proto::PlayerLoginReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      v5 = proto::PlayerLoginReq::target_uid(v8);
    }
    std::shared_ptr<proto::PlayerLoginReq const>::~shared_ptr((std::shared_ptr<const proto::PlayerLoginReq> *const)(v2 + 32));
  }
  result = v5;
  if ( v12 == (char *)v2 )
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

// Line 1038: range 000000001759D86A-000000001759DC2B
__int64 __fastcall GameserverService::findPlayerThreadIndexOnLogin(
        GameserverService *const this,
        uint32_t uid,
        uint32_t target_uid)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerSessionProxy> >,false,false>::pointer v6; // rax
  common::milog::MiLogStream *v7; // rax
  uint32_t ThreadIndex; // r14d
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerSessionProxy> >,false,false>::pointer v9; // rax
  PlayerSessionProxy *v10; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerSessionProxy> >,false,false>::pointer v11; // rax
  common::milog::MiLogStream *v12; // rax
  __int64 result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<PlayerSessionProxy> >,false> __y; // [rsp+18h] [rbp-D8h] BYREF
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-D0h] BYREF
  char v17[176]; // [rsp+40h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 8 uid:1037 48 4 15 target_uid:1037 64 8 9 iter:1040 96 16 9 lock:1039";
  *(_QWORD *)(v3 + 16) = GameserverService::findPlayerThreadIndexOnLogin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 32) = uid;
  *(_DWORD *)(v3 + 48) = target_uid;
  std::shared_lock<std::shared_mutex>::shared_lock(
    (std::shared_lock<std::shared_mutex> *const)(v3 + 96),
    &this->player_session_mutex_);
  *(std::unordered_map<unsigned int,std::shared_ptr<PlayerSessionProxy>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<PlayerSessionProxy>>::find(
                                                                                                   &this->player_session_map_,
                                                                                                   (const std::unordered_map<unsigned int,std::shared_ptr<PlayerSessionProxy>>::key_type *)(v3 + 32));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<PlayerSessionProxy>>::end(&this->player_session_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<PlayerSessionProxy>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<PlayerSessionProxy> >,false> *)(v3 + 64),
         &__y) )
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerSessionProxy>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerSessionProxy> >,false,false> *const)(v3 + 64));
    if ( std::operator==<PlayerSessionProxy>(0LL, &v6->second) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/gameserver_service.cpp",
        "findPlayerThreadIndexOnLogin",
        1045);
      v7 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             &v16,
             (const char (*)[22])"session is null, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v16);
      ThreadIndex = -1;
      goto LABEL_14;
    }
    goto LABEL_7;
  }
  if ( *(_DWORD *)(v3 + 48)
    && (*(std::unordered_map<unsigned int,std::shared_ptr<PlayerSessionProxy>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<PlayerSessionProxy>>::find(&this->player_session_map_, (const std::unordered_map<unsigned int,std::shared_ptr<PlayerSessionProxy>>::key_type *)(v3 + 48)),
        __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<PlayerSessionProxy>>::end(&this->player_session_map_)._M_cur,
        std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<PlayerSessionProxy>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<PlayerSessionProxy> >,false> *)(v3 + 64),
          &__y)) )
  {
    v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerSessionProxy>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerSessionProxy> >,false,false> *const)(v3 + 64));
    if ( !std::operator==<PlayerSessionProxy>(0LL, &v11->second) )
    {
LABEL_7:
      v9 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerSessionProxy>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerSessionProxy> >,false,false> *const)(v3 + 64));
      v10 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9->second);
      ThreadIndex = PlayerSessionProxy::getThreadIndex(v10);
      goto LABEL_14;
    }
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/gameserver_service.cpp",
      "findPlayerThreadIndexOnLogin",
      1058);
    v12 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            &v16,
            (const char (*)[22])"session is null, uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v16);
    ThreadIndex = -1;
  }
  else
  {
    ThreadIndex = -1;
  }
LABEL_14:
  std::shared_lock<std::shared_mutex>::~shared_lock((std::shared_lock<std::shared_mutex> *const)(v3 + 96));
  result = ThreadIndex;
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

// Line 1068: range 000000001759DC2C-000000001759DEAA
__int64 __fastcall GameserverService::findPlayerThreadIndex(GameserverService *const this, uint32_t uid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerSessionProxy> >,false,false>::pointer v5; // rax
  common::milog::MiLogStream *v6; // rax
  uint32_t ThreadIndex; // r14d
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerSessionProxy> >,false,false>::pointer v8; // rax
  PlayerSessionProxy *v9; // rax
  __int64 result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<PlayerSessionProxy> >,false> __y; // [rsp+18h] [rbp-D8h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-D0h] BYREF
  char v13[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 8 uid:1067 64 8 9 iter:1070 96 16 9 lock:1069";
  *(_QWORD *)(v2 + 16) = GameserverService::findPlayerThreadIndex;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = uid;
  std::shared_lock<std::shared_mutex>::shared_lock(
    (std::shared_lock<std::shared_mutex> *const)(v2 + 96),
    &this->player_session_mutex_);
  *(std::unordered_map<unsigned int,std::shared_ptr<PlayerSessionProxy>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::shared_ptr<PlayerSessionProxy>>::find(
                                                                                                   &this->player_session_map_,
                                                                                                   (const std::unordered_map<unsigned int,std::shared_ptr<PlayerSessionProxy>>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<PlayerSessionProxy>>::end(&this->player_session_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<PlayerSessionProxy>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<PlayerSessionProxy> >,false> *)(v2 + 64),
         &__y) )
  {
    v5 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerSessionProxy>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerSessionProxy> >,false,false> *const)(v2 + 64));
    if ( std::operator==<PlayerSessionProxy>(0LL, &v5->second) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/gameserver_service.cpp",
        "findPlayerThreadIndex",
        1075);
      v6 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             &v12,
             (const char (*)[22])"session is null, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v12);
      ThreadIndex = -1;
    }
    else
    {
      v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerSessionProxy>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerSessionProxy> >,false,false> *const)(v2 + 64));
      v9 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8->second);
      ThreadIndex = PlayerSessionProxy::getThreadIndex(v9);
    }
  }
  else
  {
    ThreadIndex = -1;
  }
  std::shared_lock<std::shared_mutex>::~shared_lock((std::shared_lock<std::shared_mutex> *const)(v2 + 96));
  result = ThreadIndex;
  if ( v13 == (char *)v2 )
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

// Line 1085: range 000000001759DEAC-000000001759E098
GameserverService *__fastcall GameserverService::findHomeSession(GameserverService *const this, __int64 uid, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HomeSession> >,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<HomeSession> >,false> __y; // [rsp+28h] [rbp-A8h] BYREF
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 8 uid:1084 64 8 9 iter:1087 96 16 9 lock:1086";
  *(_QWORD *)(v3 + 16) = GameserverService::findHomeSession;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = a3;
  std::shared_lock<std::shared_mutex>::shared_lock(
    (std::shared_lock<std::shared_mutex> *const)(v3 + 96),
    (std::shared_lock<std::shared_mutex>::mutex_type *)(uid + 6488));
  *(std::unordered_map<unsigned int,std::shared_ptr<HomeSession>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<HomeSession>>::find(
                                                                                            (std::unordered_map<unsigned int,std::shared_ptr<HomeSession>> *const)(uid + 6600),
                                                                                            (const std::unordered_map<unsigned int,std::shared_ptr<HomeSession>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<HomeSession>>::end((std::unordered_map<unsigned int,std::shared_ptr<HomeSession>> *const)(uid + 6600))._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::shared_ptr<HomeSession>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<HomeSession> >,false> *)(v3 + 64),
         &__y) )
  {
    std::shared_ptr<HomeSession>::shared_ptr((std::shared_ptr<HomeSession> *const)this, 0LL);
  }
  else
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HomeSession>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HomeSession> >,false,false> *const)(v3 + 64));
    std::shared_ptr<HomeSession>::shared_ptr((std::shared_ptr<HomeSession> *const)this, &v6->second);
  }
  std::shared_lock<std::shared_mutex>::~shared_lock((std::shared_lock<std::shared_mutex> *const)(v3 + 96));
  if ( v10 == (char *)v3 )
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
  return this;
};

// Line 1096: range 000000001759E09A-000000001759E439
GameserverService *__fastcall GameserverService::createHomeSession(GameserverService *const this, __int64 uid, int a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned __int64 v6; // rax
  _BYTE *v7; // rdx
  std::shared_ptr<HomeSession> *v8; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HomeSession> >,false,false>,bool> v9; // rax
  common::milog::MiLogStream *v10; // rax
  HomeSession *v11; // rax
  bool ret; // [rsp+2Fh] [rbp-C1h]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-C0h] BYREF
  char v16[160]; // [rsp+50h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 8 uid:1095 64 16 16 session_ptr:1103 96 16 9 lock:1111";
  *(_QWORD *)(v3 + 16) = GameserverService::createHomeSession;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = a3;
  v6 = ZTWN11ThreadLocal17is_in_work_threadE();
  v7 = (_BYTE *)v6;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0 && (char)(v6 & 7) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    __asan_report_load1(v6);
  if ( *v7 != 1 )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/gameserver_service.cpp",
      "createHomeSession",
      1099);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v15,
      (const char (*)[25])"need call in work thread");
    common::milog::MiLogStream::~MiLogStream(&v15);
    std::shared_ptr<HomeSession>::shared_ptr((std::shared_ptr<HomeSession> *const)this, 0LL);
  }
  else
  {
    common::tools::perf::make_shared<HomeSession,unsigned int &>((unsigned int *)(v3 + 64), (unsigned int *)(v3 + 48));
    if ( std::operator==<HomeSession>(0LL, (const std::shared_ptr<HomeSession> *)(v3 + 64)) )
    {
      std::shared_ptr<HomeSession>::shared_ptr((std::shared_ptr<HomeSession> *const)this, 0LL);
    }
    else
    {
      std::unique_lock<std::shared_mutex>::unique_lock(
        (std::unique_lock<std::shared_mutex> *const)(v3 + 96),
        (std::unique_lock<std::shared_mutex>::mutex_type *)(uid + 6488));
      v9 = std::unordered_map<unsigned int,std::shared_ptr<HomeSession>>::emplace<unsigned int &,std::shared_ptr<HomeSession>&>(
             (std::unordered_map<unsigned int,std::shared_ptr<HomeSession>> *const)(uid + 6600),
             (unsigned int *)(v3 + 48),
             (std::shared_ptr<HomeSession> *)(v3 + 64),
             (unsigned int *)(uid + 6600),
             v8);
      ret = v9.second;
      std::unordered_map<unsigned int,unsigned int>::erase(
        (std::unordered_map<unsigned int,unsigned int> *const)(uid + 6544),
        (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
      std::unique_lock<std::shared_mutex>::~unique_lock((std::unique_lock<std::shared_mutex> *const)(v3 + 96));
      if ( !ret )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/gameserver_service.cpp",
          "createHomeSession",
          1118);
        v10 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                &v15,
                (const char (*)[21])"duplicated session: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v15);
        std::shared_ptr<HomeSession>::shared_ptr((std::shared_ptr<HomeSession> *const)this, 0LL);
      }
      else
      {
        v11 = std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        HomeSession::addTimer(v11);
        std::shared_ptr<HomeSession>::shared_ptr(
          (std::shared_ptr<HomeSession> *const)this,
          (std::shared_ptr<HomeSession> *)(v3 + 64));
      }
    }
    std::shared_ptr<HomeSession>::~shared_ptr((std::shared_ptr<HomeSession> *const)(v3 + 64));
  }
  if ( v16 == (char *)v3 )
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
  return this;
};

// Line 1127: range 000000001759E43A-000000001759E707
__int64 __fastcall GameserverService::removeHomeSession(GameserverService *const this, uint32_t uid)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HomeSession> >,false,false>::pointer v5; // rax
  unsigned int v6; // r14d
  __int64 result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<HomeSession> >,false> __y; // [rsp+18h] [rbp-F8h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-F0h] BYREF
  char v10[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 8 uid:1126 64 8 9 iter:1131 96 16 16 session_ptr:1128 128 16 9 lock:1130";
  *(_QWORD *)(v2 + 16) = GameserverService::removeHomeSession;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  *(_DWORD *)(v2 + 48) = uid;
  *(_QWORD *)(v2 + 96) = 0LL;
  *(_QWORD *)(v2 + 104) = 0LL;
  std::unique_lock<std::shared_mutex>::unique_lock(
    (std::unique_lock<std::shared_mutex> *const)(v2 + 128),
    &this->home_session_map_mutex_);
  *(std::unordered_map<unsigned int,std::shared_ptr<HomeSession>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::shared_ptr<HomeSession>>::find(
                                                                                            &this->home_session_map_,
                                                                                            (const std::unordered_map<unsigned int,std::shared_ptr<HomeSession>>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<HomeSession>>::end(&this->home_session_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<HomeSession>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<HomeSession> >,false> *)(v2 + 64),
         &__y) )
  {
    v5 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HomeSession>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HomeSession> >,false,false> *const)(v2 + 64));
    std::shared_ptr<HomeSession>::operator=((std::shared_ptr<HomeSession> *const)(v2 + 96), &v5->second);
    std::unordered_map<unsigned int,std::shared_ptr<HomeSession>>::erase(
      &this->home_session_map_,
      *(std::unordered_map<unsigned int,std::shared_ptr<HomeSession>>::iterator *)(v2 + 64));
  }
  std::unique_lock<std::shared_mutex>::~unique_lock((std::unique_lock<std::shared_mutex> *const)(v2 + 128));
  if ( std::operator==<HomeSession>((const std::shared_ptr<HomeSession> *)(v2 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gameserver_service.cpp",
      "removeHomeSession",
      1140);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v9, (const char (*)[16])"session is null");
    common::milog::MiLogStream::~MiLogStream(&v9);
    v6 = -1;
  }
  else
  {
    v6 = 0;
  }
  std::shared_ptr<HomeSession>::~shared_ptr((std::shared_ptr<HomeSession> *const)(v2 + 96));
  result = v6;
  if ( v10 == (char *)v2 )
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

// Line 1148: range 000000001759E708-000000001759E986
__int64 __fastcall GameserverService::findHomeThreadIndex(GameserverService *const this, uint32_t uid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HomeSession> >,false,false>::pointer v5; // rax
  common::milog::MiLogStream *v6; // rax
  uint32_t ThreadIndex; // r14d
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HomeSession> >,false,false>::pointer v8; // rax
  HomeSession *v9; // rax
  __int64 result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<HomeSession> >,false> __y; // [rsp+18h] [rbp-D8h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-D0h] BYREF
  char v13[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 8 uid:1147 64 8 9 iter:1150 96 16 9 lock:1149";
  *(_QWORD *)(v2 + 16) = GameserverService::findHomeThreadIndex;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = uid;
  std::shared_lock<std::shared_mutex>::shared_lock(
    (std::shared_lock<std::shared_mutex> *const)(v2 + 96),
    &this->home_session_map_mutex_);
  *(std::unordered_map<unsigned int,std::shared_ptr<HomeSession>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::shared_ptr<HomeSession>>::find(
                                                                                            &this->home_session_map_,
                                                                                            (const std::unordered_map<unsigned int,std::shared_ptr<HomeSession>>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<HomeSession>>::end(&this->home_session_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<HomeSession>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<HomeSession> >,false> *)(v2 + 64),
         &__y) )
  {
    v5 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HomeSession>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HomeSession> >,false,false> *const)(v2 + 64));
    if ( std::operator==<HomeSession>(0LL, &v5->second) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/gameserver_service.cpp",
        "findHomeThreadIndex",
        1155);
      v6 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             &v12,
             (const char (*)[22])"session is null, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v12);
      ThreadIndex = -1;
    }
    else
    {
      v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HomeSession>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HomeSession> >,false,false> *const)(v2 + 64));
      v9 = std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8->second);
      ThreadIndex = HomeSession::getThreadIndex(v9);
    }
  }
  else
  {
    ThreadIndex = -1;
  }
  std::shared_lock<std::shared_mutex>::~shared_lock((std::shared_lock<std::shared_mutex> *const)(v2 + 96));
  result = ThreadIndex;
  if ( v13 == (char *)v2 )
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

// Line 1164: range 000000001759E988-000000001759ED93
__int64 __fastcall GameserverService::findHomeThreadIndexOnTryEnter(
        GameserverService *const this,
        uint32_t uid,
        int32_t packet_thread_index)
{
  uint32_t ThreadIndex; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HomeSession> >,false,false>::pointer v7; // rax
  common::milog::MiLogStream *v8; // rax
  int v9; // r15d
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HomeSession> >,false,false>::pointer v10; // rax
  HomeSession *v11; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v12; // rdx
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v13; // rax
  int32_t *v14; // rdx
  __int64 result; // rax
  int32_t thread_index; // [rsp+24h] [rbp-FCh]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<HomeSession> >,false> __y; // [rsp+28h] [rbp-F8h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-F0h] BYREF
  char v20[208]; // [rsp+50h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 8 uid:1163 64 8 17 iter_session:1173 96 8 17 iter_prepare:1184 128 16 9 lock:1172";
  *(_QWORD *)(v4 + 16) = GameserverService::findHomeThreadIndexOnTryEnter;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -202178560;
  *(_DWORD *)(v4 + 48) = uid;
  thread_index = packet_thread_index;
  if ( packet_thread_index < 0 )
    thread_index = GameserverService::getMinLoadThreadIndex(this);
  std::unique_lock<std::shared_mutex>::unique_lock(
    (std::unique_lock<std::shared_mutex> *const)(v4 + 128),
    &this->home_session_map_mutex_);
  *(std::unordered_map<unsigned int,std::shared_ptr<HomeSession>>::iterator *)(v4 + 64) = std::unordered_map<unsigned int,std::shared_ptr<HomeSession>>::find(
                                                                                            &this->home_session_map_,
                                                                                            (const std::unordered_map<unsigned int,std::shared_ptr<HomeSession>>::key_type *)(v4 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<HomeSession>>::end(&this->home_session_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<HomeSession>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<HomeSession> >,false> *)(v4 + 64),
         &__y) )
  {
    v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HomeSession>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HomeSession> >,false,false> *const)(v4 + 64));
    if ( std::operator==<HomeSession>(0LL, &v7->second) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/gameserver_service.cpp",
        "findHomeThreadIndexOnTryEnter",
        1178);
      v8 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             &v19,
             (const char (*)[22])"session is null, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v19);
      ThreadIndex = -1;
    }
    else
    {
      v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HomeSession>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<HomeSession> >,false,false> *const)(v4 + 64));
      v11 = std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10->second);
      ThreadIndex = HomeSession::getThreadIndex(v11);
    }
    v9 = 0;
  }
  else
  {
    *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v4 + 96) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                              &this->home_session_prepare_map_,
                                                                              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v4 + 48));
    __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<HomeSession> >,false>::__node_type *)std::unordered_map<unsigned int,unsigned int>::end(&this->home_session_prepare_map_)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v4 + 96),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__y) )
    {
      v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v4 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v12->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v12 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v12->second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      ThreadIndex = v12->second;
      v9 = 0;
    }
    else
    {
      v13 = std::unordered_map<unsigned int,unsigned int>::operator[](
              &this->home_session_prepare_map_,
              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v4 + 48));
      v14 = (int32_t *)v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v13);
      }
      *v14 = thread_index;
      v9 = 1;
    }
  }
  std::unique_lock<std::shared_mutex>::~unique_lock((std::unique_lock<std::shared_mutex> *const)(v4 + 128));
  if ( v9 == 1 )
    ThreadIndex = thread_index;
  result = ThreadIndex;
  if ( v20 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1196: range 000000001759ED94-000000001759F13B
void __fastcall GameserverService::increaseThreadLoad(GameserverService *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  _BYTE *v6; // rdx
  unsigned __int64 v7; // rdx
  std::set<unsigned int> *v8; // rdi
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v9; // rax
  unsigned __int64 v10; // rdx
  std::vector<std::set<unsigned int>>::size_type v11; // rsi
  const std::set<unsigned int> *v12; // rdi
  std::__atomic_base<unsigned int>::__int_type v13; // r14d
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  std::deque<std::atomic<unsigned int>>::reference v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdi
  common::milog::MiLogStream *v19; // r13
  __int64 v20; // rdx
  const unsigned int *v21; // rax
  common::milog::MiLogStream v23; // [rsp+20h] [rbp-B0h] BYREF
  char v24[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 num:1204 64 4 8 uid:1195";
  *(_QWORD *)(v2 + 16) = GameserverService::increaseThreadLoad;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = uid;
  v5 = ZTWN11ThreadLocal17is_in_work_threadE();
  v6 = (_BYTE *)v5;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)(v5 & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load1(v5);
  if ( *v6 != 1 )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/gameserver_service.cpp",
      "increaseThreadLoad",
      1199);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v23,
      (const char (*)[27])"need called in work thread");
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  else
  {
    v7 = ((__int64 (*)(void))ZTWN11ThreadLocal17work_thread_indexE)();
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && (char)((v7 & 7) + 3) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      __asan_report_load4();
    v8 = std::vector<std::set<unsigned int>>::operator[](&this->game_thread_uid_vec_, *(unsigned int *)v7);
    v9 = std::set<unsigned int>::insert(v8, (const std::set<unsigned int>::value_type *)(v2 + 64));
    v10 = ZTWN11ThreadLocal17work_thread_indexE(v8, v2 + 64, *(_QWORD *)&v9.second);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0 && (char)((v10 & 7) + 3) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      __asan_report_load4();
    v11 = *(unsigned int *)v10;
    v12 = std::vector<std::set<unsigned int>>::operator[](&this->game_thread_uid_vec_, v11);
    *(_DWORD *)(v2 + 48) = std::set<unsigned int>::size(v12);
    v13 = *(_DWORD *)(v2 + 48);
    v15 = ZTWN11ThreadLocal17work_thread_indexE(v12, v11, v14);
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) != 0 && (char)((v15 & 7) + 3) >= *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      __asan_report_load4();
    v16 = std::deque<std::atomic<unsigned int>>::operator[](&this->game_thread_load_deque_, *(unsigned int *)v15);
    std::__atomic_base<unsigned int>::operator=(v16, v13);
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gameserver_service.cpp",
      "increaseThreadLoad",
      1207);
    v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v23, (const char (*)[13])"thread load:");
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 48));
    v19 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v18, (const char (*)[15])" thread index:");
    v21 = (const unsigned int *)ZTWN11ThreadLocal17work_thread_indexE(v18, " thread index:", v20);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, v21);
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  if ( v24 == (char *)v2 )
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

// Line 1211: range 000000001759F13C-000000001759F4E3
void __fastcall GameserverService::decreaseThreadLoad(GameserverService *const this, __int64 uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  _BYTE *v6; // rdx
  char v7; // cl
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rdx
  std::set<unsigned int> *v10; // rdi
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  std::vector<std::set<unsigned int>>::size_type v13; // rsi
  const std::set<unsigned int> *v14; // rdi
  std::__atomic_base<unsigned int>::__int_type v15; // r14d
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  std::deque<std::atomic<unsigned int>>::reference v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdi
  common::milog::MiLogStream *v21; // r13
  __int64 v22; // rdx
  const unsigned int *v23; // rax
  common::milog::MiLogStream v25; // [rsp+20h] [rbp-B0h] BYREF
  char v26[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 num:1219 64 4 8 uid:1210";
  *(_QWORD *)(v2 + 16) = GameserverService::decreaseThreadLoad;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = uid;
  v5 = ZTWN11ThreadLocal17is_in_work_threadE();
  v6 = (_BYTE *)v5;
  v7 = *(_BYTE *)((v5 >> 3) + 0x7FFF8000);
  LOBYTE(uid) = v7 != 0;
  v8 = v5 & 7;
  if ( v7 != 0 && (char)v8 >= v7 )
  {
    v8 = v5;
    __asan_report_load1(v5);
  }
  if ( *v6 != 1 )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/gameserver_service.cpp",
      "decreaseThreadLoad",
      1214);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v25,
      (const char (*)[27])"need called in work thread");
    common::milog::MiLogStream::~MiLogStream(&v25);
  }
  else
  {
    v9 = ZTWN11ThreadLocal17work_thread_indexE(v8, uid, v6);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) != 0 && (char)((v9 & 7) + 3) >= *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      __asan_report_load4();
    v10 = std::vector<std::set<unsigned int>>::operator[](&this->game_thread_uid_vec_, *(unsigned int *)v9);
    std::set<unsigned int>::erase(v10, (const std::set<unsigned int>::key_type *)(v2 + 64));
    v12 = ZTWN11ThreadLocal17work_thread_indexE(v10, v2 + 64, v11);
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0 && (char)((v12 & 7) + 3) >= *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      __asan_report_load4();
    v13 = *(unsigned int *)v12;
    v14 = std::vector<std::set<unsigned int>>::operator[](&this->game_thread_uid_vec_, v13);
    *(_DWORD *)(v2 + 48) = std::set<unsigned int>::size(v14);
    v15 = *(_DWORD *)(v2 + 48);
    v17 = ZTWN11ThreadLocal17work_thread_indexE(v14, v13, v16);
    if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) != 0 && (char)((v17 & 7) + 3) >= *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
      __asan_report_load4();
    v18 = std::deque<std::atomic<unsigned int>>::operator[](&this->game_thread_load_deque_, *(unsigned int *)v17);
    std::__atomic_base<unsigned int>::operator=(v18, v15);
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gameserver_service.cpp",
      "decreaseThreadLoad",
      1222);
    v19 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v25, (const char (*)[13])"thread load:");
    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v2 + 48));
    v21 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v20, (const char (*)[15])" thread index:");
    v23 = (const unsigned int *)ZTWN11ThreadLocal17work_thread_indexE(v20, " thread index:", v22);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, v23);
    common::milog::MiLogStream::~MiLogStream(&v25);
  }
  if ( v26 == (char *)v2 )
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

// Line 1226: range 000000001759F4E4-000000001759F75F
void __fastcall GameserverService::afterPushPacket(
        GameserverService *const this,
        const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *p_packet_ptr,
        uint32_t queue_index)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::deque<std::atomic<unsigned int>>::reference v7; // rax
  common::milog::MiLogStream *v8; // r14
  const std::atomic<unsigned int> *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-90h] BYREF
  char v14[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 16 queue_index:1225";
  *(_QWORD *)(v3 + 16) = GameserverService::afterPushPacket;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = queue_index;
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)p_packet_ptr) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gameserver_service.cpp",
      "afterPushPacket",
      1229);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v13, (const char (*)[15])"packet is null");
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else
  {
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_packet_ptr);
    if ( common::minet::Packet::getCmdId(v6) == 112 )
    {
      v7 = std::deque<std::atomic<unsigned int>>::operator[](&this->game_login_load_deque_, *(unsigned int *)(v3 + 32));
      std::__atomic_base<unsigned int>::operator++(v7, 0);
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gameserver_service.cpp",
        "afterPushPacket",
        1238);
      v8 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             &v13,
             (const char (*)[19])"thread login load:");
      v9 = std::deque<std::atomic<unsigned int>>::operator[](&this->game_login_load_deque_, *(unsigned int *)(v3 + 32));
      v10 = common::milog::MiLogStream::operator<<<std::atomic<unsigned int>,(std::atomic<unsigned int>*)0>(v8, v9);
      v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v10, (const char (*)[15])" thread index:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
  }
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1243: range 000000001759F760-000000001759F981
void __cdecl GameserverService::decreaseLoginLoad(GameserverService *const this)
{
  unsigned __int64 v1; // rax
  _BYTE *v2; // rdx
  char v3; // cl
  bool v4; // si
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rdx
  std::deque<std::atomic<unsigned int>>::reference v7; // rax
  common::milog::MiLogStream *v8; // r12
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  const std::atomic<unsigned int> *v11; // rax
  common::milog::MiLogStream *v12; // rdi
  common::milog::MiLogStream *v13; // rbx
  __int64 v14; // rdx
  const unsigned int *v15; // rax
  common::milog::MiLogStream v17; // [rsp+10h] [rbp-30h] BYREF

  v1 = ZTWN11ThreadLocal17is_in_work_threadE();
  v2 = (_BYTE *)v1;
  v3 = *(_BYTE *)((v1 >> 3) + 0x7FFF8000);
  v4 = v3 != 0;
  v5 = v1 & 7;
  if ( v3 != 0 && (char)v5 >= v3 )
  {
    v5 = v1;
    __asan_report_load1(v1);
  }
  if ( *v2 != 1 )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/gameserver_service.cpp",
      "decreaseLoginLoad",
      1246);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v17,
      (const char (*)[27])"need called in work thread");
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
  else
  {
    v6 = ZTWN11ThreadLocal17work_thread_indexE(v5, v4, v2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0 && (char)((v6 & 7) + 3) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load4();
    v7 = std::deque<std::atomic<unsigned int>>::operator[](&this->game_login_load_deque_, *(unsigned int *)v6);
    std::__atomic_base<unsigned int>::operator--(v7, 0);
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gameserver_service.cpp",
      "decreaseLoginLoad",
      1251);
    v8 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v17, (const char (*)[19])"thread login load:");
    v10 = ZTWN11ThreadLocal17work_thread_indexE(&v17, "thread login load:", v9);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0 && (char)((v10 & 7) + 3) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      __asan_report_load4();
    v11 = std::deque<std::atomic<unsigned int>>::operator[](&this->game_login_load_deque_, *(unsigned int *)v10);
    v12 = common::milog::MiLogStream::operator<<<std::atomic<unsigned int>,(std::atomic<unsigned int>*)0>(v8, v11);
    v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v12, (const char (*)[15])" thread index:");
    v15 = (const unsigned int *)ZTWN11ThreadLocal17work_thread_indexE(v12, " thread index:", v14);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, v15);
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
};

// Line 1256: range 000000001759F982-000000001759FD25
int32_t __cdecl GameserverService::getMinLoadThreadIndex(GameserverService *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::deque<std::atomic<unsigned int>>::reference v7; // rax
  std::deque<std::atomic<unsigned int>>::reference v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int32_t v12; // r15d
  int32_t result; // eax
  bool is_cal_login_load; // [rsp+17h] [rbp-C9h]
  int32_t i; // [rsp+18h] [rbp-C8h]
  uint32_t load; // [rsp+1Ch] [rbp-C4h]
  std::shared_ptr<ConfigBase> v17; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 13 min_load:1257 48 4 17 thread_index:1258 64 16 15 config_ptr:1261";
  *(_QWORD *)(v1 + 16) = GameserverService::getMinLoadThreadIndex;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 32) = -1;
  *(_DWORD *)(v1 + 48) = 0;
  is_cal_login_load = 0;
  v4 = (unsigned __int64)std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::config_mgr_ptr);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8();
  v5 = *(_QWORD *)v4 + 32LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8();
  (*(void (__fastcall **)(std::shared_ptr<ConfigBase> *, unsigned __int64))v5)(&v17, v4);
  std::dynamic_pointer_cast<Config,ConfigBase>((const std::shared_ptr<ConfigBase> *)(v1 + 64));
  std::shared_ptr<ConfigBase>::~shared_ptr(&v17);
  if ( std::operator!=<Config>(0LL, (const std::shared_ptr<Config> *)(v1 + 64)) )
  {
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    if ( *(char *)(((unsigned __int64)&v6->is_cal_login_load >> 3) + 0x7FFF8000) < 0 )
      v6 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v6->is_cal_login_load);
    is_cal_login_load = v6->is_cal_login_load;
  }
  for ( i = 0; ; ++i )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->thread_num_ <= i )
      break;
    v7 = std::deque<std::atomic<unsigned int>>::operator[](&this->game_thread_load_deque_, i);
    load = std::__atomic_base<unsigned int>::operator unsigned int(v7);
    if ( is_cal_login_load )
    {
      v8 = std::deque<std::atomic<unsigned int>>::operator[](&this->game_login_load_deque_, i);
      load += std::__atomic_base<unsigned int>::operator unsigned int(v8);
    }
    if ( load < *(_DWORD *)(v1 + 32) )
    {
      *(_DWORD *)(v1 + 32) = load;
      *(_DWORD *)(v1 + 48) = i;
    }
  }
  common::milog::MiLogStream::create(
    &v18,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/gameserver_service.cpp",
    "getMinLoadThreadIndex",
    1279);
  v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v18, (const char (*)[18])off_26142520);
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v1 + 32));
  v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v10, (const char (*)[15])" thread index:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v1 + 48));
  common::milog::MiLogStream::~MiLogStream(&v18);
  v12 = *(_DWORD *)(v1 + 48);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 64));
  result = v12;
  if ( v19 == (char *)v1 )
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

// Line 1284: range 000000001759FD26-00000000175A0102
void __fastcall GameserverService::updateOnlinePlayerNum(GameserverService *const this, __int64 num)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  _BYTE *v6; // rdx
  char v7; // cl
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rdx
  char v10; // cl
  std::deque<std::atomic<unsigned int>>::size_type v11; // r14
  __int64 v12; // rdx
  common::milog::MiLogStream *v13; // r13
  __int64 v14; // rdx
  const unsigned int *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r13
  std::__atomic_base<unsigned int>::__int_type v18; // r14d
  unsigned __int64 v19; // rdx
  std::deque<std::atomic<unsigned int>>::reference v20; // rax
  common::milog::MiLogStream *v21; // r14
  __int64 v22; // rdx
  const unsigned int *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  unsigned __int64 val; // [rsp+28h] [rbp-98h] BYREF
  common::milog::MiLogStream v28; // [rsp+30h] [rbp-90h] BYREF
  char v29[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 num:1283";
  *(_QWORD *)(v2 + 16) = GameserverService::updateOnlinePlayerNum;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = num;
  v5 = ZTWN11ThreadLocal17is_in_work_threadE();
  v6 = (_BYTE *)v5;
  v7 = *(_BYTE *)((v5 >> 3) + 0x7FFF8000);
  LOBYTE(num) = v7 != 0;
  v8 = v5 & 7;
  if ( v7 != 0 && (char)v8 >= v7 )
  {
    v8 = v5;
    __asan_report_load1(v5);
  }
  if ( *v6 != 1 )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/gameserver_service.cpp",
      "updateOnlinePlayerNum",
      1287);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v28,
      (const char (*)[27])"need called in work thread");
    common::milog::MiLogStream::~MiLogStream(&v28);
  }
  else
  {
    v9 = ZTWN11ThreadLocal17work_thread_indexE(v8, num, v6);
    v10 = *(_BYTE *)((v9 >> 3) + 0x7FFF8000);
    LOBYTE(num) = v10 != 0;
    if ( v10 != 0 && (char)((v9 & 7) + 3) >= v10 )
      __asan_report_load4();
    v11 = *(unsigned int *)v9;
    if ( v11 < std::deque<std::atomic<unsigned int>>::size(&this->online_player_num_deque_) )
    {
      v18 = *(_DWORD *)(v2 + 32);
      v19 = ZTWN11ThreadLocal17work_thread_indexE(&this->online_player_num_deque_, num, v12);
      if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) != 0 && (char)((v19 & 7) + 3) >= *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
        __asan_report_load4();
      v20 = std::deque<std::atomic<unsigned int>>::operator[](&this->online_player_num_deque_, *(unsigned int *)v19);
      std::__atomic_base<unsigned int>::operator=(v20, v18);
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gameserver_service.cpp",
        "updateOnlinePlayerNum",
        1296);
      v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v28, (const char (*)[14])"thread index:");
      v23 = (const unsigned int *)ZTWN11ThreadLocal17work_thread_indexE(&v28, "thread index:", v22);
      v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, v23);
      v25 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v24,
              (const char (*)[20])" online player num:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v28);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/gameserver_service.cpp",
        "updateOnlinePlayerNum",
        1292);
      v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v28, (const char (*)[14])"thread index:");
      v15 = (const unsigned int *)ZTWN11ThreadLocal17work_thread_indexE(&v28, "thread index:", v14);
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, v15);
      v17 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              v16,
              (const char (*)[24])" large than deque size:");
      val = std::deque<std::atomic<unsigned int>>::size(&this->online_player_num_deque_);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v17, &val);
      common::milog::MiLogStream::~MiLogStream(&v28);
    }
  }
  if ( v29 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1300: range 00000000175A0104-00000000175A04E0
void __fastcall GameserverService::updateOnlineHomeNum(GameserverService *const this, __int64 num)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  _BYTE *v6; // rdx
  char v7; // cl
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rdx
  char v10; // cl
  std::deque<std::atomic<unsigned int>>::size_type v11; // r14
  __int64 v12; // rdx
  common::milog::MiLogStream *v13; // r13
  __int64 v14; // rdx
  const unsigned int *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r13
  std::__atomic_base<unsigned int>::__int_type v18; // r14d
  unsigned __int64 v19; // rdx
  std::deque<std::atomic<unsigned int>>::reference v20; // rax
  common::milog::MiLogStream *v21; // r14
  __int64 v22; // rdx
  const unsigned int *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  unsigned __int64 val; // [rsp+28h] [rbp-98h] BYREF
  common::milog::MiLogStream v28; // [rsp+30h] [rbp-90h] BYREF
  char v29[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 num:1299";
  *(_QWORD *)(v2 + 16) = GameserverService::updateOnlineHomeNum;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = num;
  v5 = ZTWN11ThreadLocal17is_in_work_threadE();
  v6 = (_BYTE *)v5;
  v7 = *(_BYTE *)((v5 >> 3) + 0x7FFF8000);
  LOBYTE(num) = v7 != 0;
  v8 = v5 & 7;
  if ( v7 != 0 && (char)v8 >= v7 )
  {
    v8 = v5;
    __asan_report_load1(v5);
  }
  if ( *v6 != 1 )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/gameserver_service.cpp",
      "updateOnlineHomeNum",
      1303);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v28,
      (const char (*)[27])"need called in work thread");
    common::milog::MiLogStream::~MiLogStream(&v28);
  }
  else
  {
    v9 = ZTWN11ThreadLocal17work_thread_indexE(v8, num, v6);
    v10 = *(_BYTE *)((v9 >> 3) + 0x7FFF8000);
    LOBYTE(num) = v10 != 0;
    if ( v10 != 0 && (char)((v9 & 7) + 3) >= v10 )
      __asan_report_load4();
    v11 = *(unsigned int *)v9;
    if ( v11 < std::deque<std::atomic<unsigned int>>::size(&this->online_home_num_deque_) )
    {
      v18 = *(_DWORD *)(v2 + 32);
      v19 = ZTWN11ThreadLocal17work_thread_indexE(&this->online_home_num_deque_, num, v12);
      if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) != 0 && (char)((v19 & 7) + 3) >= *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
        __asan_report_load4();
      v20 = std::deque<std::atomic<unsigned int>>::operator[](&this->online_home_num_deque_, *(unsigned int *)v19);
      std::__atomic_base<unsigned int>::operator=(v20, v18);
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gameserver_service.cpp",
        "updateOnlineHomeNum",
        1312);
      v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v28, (const char (*)[14])"thread index:");
      v23 = (const unsigned int *)ZTWN11ThreadLocal17work_thread_indexE(&v28, "thread index:", v22);
      v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, v23);
      v25 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v24,
              (const char (*)[18])" online home num:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v28);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/gameserver_service.cpp",
        "updateOnlineHomeNum",
        1308);
      v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v28, (const char (*)[14])"thread index:");
      v15 = (const unsigned int *)ZTWN11ThreadLocal17work_thread_indexE(&v28, "thread index:", v14);
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, v15);
      v17 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              v16,
              (const char (*)[24])" large than deque size:");
      val = std::deque<std::atomic<unsigned int>>::size(&this->online_home_num_deque_);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v17, &val);
      common::milog::MiLogStream::~MiLogStream(&v28);
    }
  }
  if ( v29 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1316: range 00000000175A04E2-00000000175A0634
void __cdecl GameserverService::onMonitorReport(GameserverService *const this, uint32_t thread_index)
{
  std::deque<std::atomic<unsigned int>>::reference v2; // rax
  MonitorReport *v3; // rax
  MonitorReport *v4; // rax
  std::deque<std::atomic<unsigned int>>::reference v5; // rax
  MonitorReport *v6; // rdi
  const std::stack<std::shared_ptr<Grid>,std::vector<std::shared_ptr<Grid>> > *v7; // rax
  MonitorReport *v8; // rax
  int32_t num; // [rsp+18h] [rbp-28h]
  int32_t mp_player_num; // [rsp+1Ch] [rbp-24h]
  int32_t home_num; // [rsp+20h] [rbp-20h]
  int32_t grid_num; // [rsp+24h] [rbp-1Ch]
  GameThreadLocal *tl; // [rsp+28h] [rbp-18h]

  if ( thread_index < std::deque<std::atomic<unsigned int>>::size(&this->online_player_num_deque_) )
  {
    v2 = std::deque<std::atomic<unsigned int>>::operator[](&this->online_player_num_deque_, thread_index);
    num = std::__atomic_base<unsigned int>::operator unsigned int(v2);
    v3 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
    MonitorReport::addValue(v3, MONITOR_ONLINE_PLAYER_NUM, num);
    tl = std::vector<GameThreadLocal>::operator[](&this->game_thread_local_vec_, thread_index);
    mp_player_num = PlayerMgr::getMpPlayerNum(&tl->player_mgr);
    v4 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
    MonitorReport::addValue(v4, MONITOR_MP_PLAYER_NUM, mp_player_num);
    v5 = std::deque<std::atomic<unsigned int>>::operator[](&this->online_home_num_deque_, thread_index);
    home_num = std::__atomic_base<unsigned int>::operator unsigned int(v5);
    v6 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
    MonitorReport::addValue(v6, MONITOR_ONLINE_HOME_NUM, home_num);
  }
  v7 = (const std::stack<std::shared_ptr<Grid>,std::vector<std::shared_ptr<Grid>> > *)ZTWN13GridAllocator15grid_pool_stackE();
  grid_num = std::stack<std::shared_ptr<Grid>,std::vector<std::shared_ptr<Grid>>>::size(v7);
  v8 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
  MonitorReport::addValue(v8, MONITOR_GRID_POOL_SIZE, grid_num);
};

// Line 1338: range 00000000175A0636-00000000175A0714
void __cdecl GameserverService::onEverySecond(GameserverService *const this, uint32_t thread_index)
{
  unsigned __int64 v2; // rdx
  time_t Now; // rcx
  std::shared_ptr<MonitorReport> monitor_report_ptr; // [rsp+10h] [rbp-20h] BYREF

  if ( !thread_index )
  {
    std::shared_ptr<MonitorReport>::shared_ptr(&monitor_report_ptr, &ResourceBox::monitor_report_ptr);
    ExternalMonitorReportMgr::reportToMonitor(
      &this->external_monitor_report_mgr,
      (std::shared_ptr<MonitorReport>)__PAIR128__(v2, &monitor_report_ptr));
    std::shared_ptr<MonitorReport>::~shared_ptr(&monitor_report_ptr);
    Now = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&this->last_report_version_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_report_version_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( Now > this->last_report_version_time_ + 120 )
      GameserverService::reportVersionInfos(this);
  }
};

// Line 1352: range 00000000175A0716-00000000175A12DB
// local variable allocation has failed, the output may be wrong!
void __cdecl GameserverService::reportVersionInfos(GameserverService *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rdx
  int Now; // esi
  MonitorReport *v7; // r14
  int32_t v8; // eax
  MonitorReport *v9; // r14
  int32_t v10; // eax
  MonitorReport *v11; // r14
  int32_t v12; // eax
  MonitorReport *v13; // r14
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::pointer v14; // rax
  int32_t v15; // eax
  MonitorReport *v16; // r14
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::pointer v17; // rax
  int32_t v18; // eax
  MonitorReport *v19; // r14
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::pointer v20; // rax
  int32_t v21; // eax
  MonitorReport *v22; // r14
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::pointer v23; // rax
  int32_t v24; // eax
  MonitorReport *v25; // r14
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::pointer v26; // rax
  int32_t v27; // eax
  MonitorReport *v28; // r14
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::pointer v29; // rax
  int32_t v30; // eax
  MonitorReport *v31; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  std::string v33; // [rsp+0h] [rbp-E0h] OVERLAPPED BYREF
  const proto::DataVersionConfig *data_version_config; // [rsp+20h] [rbp-C0h]
  const std::map<unsigned int,proto::ResVersionConfig> *res_version_map; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v36; // [rsp+30h] [rbp-B0h] BYREF
  char v37[144]; // [rsp+50h] [rbp-90h] BYREF

  v33._M_string_length = (std::string::size_type)this;
  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (GameserverService *const)96;
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 iter:1368 64 16 15 config_ptr:1361";
  *(_QWORD *)(v2 + 16) = GameserverService::reportVersionInfos;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  v5 = ZTWN11ThreadLocal17work_thread_indexE(this, v1);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)((v5 & 7) + 3) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load4();
  if ( *(_DWORD *)v5 )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gameserver_service.cpp",
      "reportVersionInfos",
      1355);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      &v36,
      (const char (*)[35])"Just allowed run in 0 work thread!");
    common::milog::MiLogStream::~MiLogStream(&v36);
  }
  else
  {
    Now = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((v33._M_string_length + 6808) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v33._M_string_length + 6808) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(v33._M_string_length + 6808);
    }
    *(_DWORD *)(v33._M_string_length + 6808) = Now;
    GameserverService::getConfig((GameserverService *const)(v2 + 64));
    data_version_config = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->design_config.version_config.data_version_config;
    res_version_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->design_config.version_config.res_version_map;
    v7 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
    std::allocator<char>::allocator((char *)&v33._anon_0._M_allocated_capacity + 3);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)&v36,
      byte_260C1F00,
      (const std::allocator<char> *)&v33._anon_0._M_allocated_capacity + 3);
    v8 = proto::DataVersionConfig::server(data_version_config);
    MonitorReport::addValue(v7, MONITOR_SERVER_VERSION, v8, v33);
    std::string::~string(&v36);
    std::allocator<char>::~allocator((char *)&v33._anon_0._M_allocated_capacity + 3);
    v9 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
    std::allocator<char>::allocator((char *)&v33._anon_0._M_allocated_capacity + 3);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)&v36,
      byte_260C1F00,
      (const std::allocator<char> *)&v33._anon_0._M_allocated_capacity + 3);
    v10 = proto::DataVersionConfig::client(data_version_config);
    MonitorReport::addValue(v9, MONITOR_CLIENT_VERSION, v10, v33);
    std::string::~string(&v36);
    std::allocator<char>::~allocator((char *)&v33._anon_0._M_allocated_capacity + 3);
    v11 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
    std::allocator<char>::allocator((char *)&v33._anon_0._M_allocated_capacity + 3);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)&v36,
      byte_260C1F00,
      (const std::allocator<char> *)&v33._anon_0._M_allocated_capacity + 3);
    v12 = proto::DataVersionConfig::client_silence(data_version_config);
    MonitorReport::addValue(v11, MONITOR_CLIENT_SILENCE_VERSION, v12, v33);
    std::string::~string(&v36);
    std::allocator<char>::~allocator((char *)&v33._anon_0._M_allocated_capacity + 3);
    HIDWORD(v33._anon_0._M_allocated_capacity) = 2;
    *(std::map<unsigned int,proto::ResVersionConfig>::const_iterator *)(v2 + 32) = std::map<unsigned int,proto::ResVersionConfig>::find(
                                                                                     res_version_map,
                                                                                     (const std::map<unsigned int,proto::ResVersionConfig>::key_type *)&v33._anon_0._M_allocated_capacity
                                                                                   + 1);
    *((std::map<unsigned int,proto::ResVersionConfig>::const_iterator *)&v33._anon_0._M_allocated_capacity + 1) = std::map<unsigned int,proto::ResVersionConfig>::end(res_version_map);
    if ( std::operator!=(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::_Self *)(v2 + 32),
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::_Self *)&v33._anon_0._M_allocated_capacity
         + 1) )
    {
      v13 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
      std::allocator<char>::allocator((char *)&v33._anon_0._M_allocated_capacity + 3);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)&v36,
        byte_260C1F00,
        (const std::allocator<char> *)&v33._anon_0._M_allocated_capacity + 3);
      v14 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> > *const)(v2 + 32));
      v15 = proto::ResVersionConfig::version(&v14->second);
      MonitorReport::addValue(v13, MONITOR_ANDROID_RES_VERSION, v15, v33);
      std::string::~string(&v36);
      std::allocator<char>::~allocator((char *)&v33._anon_0._M_allocated_capacity + 3);
    }
    HIDWORD(v33._anon_0._M_allocated_capacity) = 1;
    *(std::map<unsigned int,proto::ResVersionConfig>::const_iterator *)(v2 + 32) = std::map<unsigned int,proto::ResVersionConfig>::find(
                                                                                     res_version_map,
                                                                                     (const std::map<unsigned int,proto::ResVersionConfig>::key_type *)&v33._anon_0._M_allocated_capacity
                                                                                   + 1);
    *((std::map<unsigned int,proto::ResVersionConfig>::const_iterator *)&v33._anon_0._M_allocated_capacity + 1) = std::map<unsigned int,proto::ResVersionConfig>::end(res_version_map);
    if ( std::operator!=(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::_Self *)(v2 + 32),
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::_Self *)&v33._anon_0._M_allocated_capacity
         + 1) )
    {
      v16 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
      std::allocator<char>::allocator((char *)&v33._anon_0._M_allocated_capacity + 3);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)&v36,
        byte_260C1F00,
        (const std::allocator<char> *)&v33._anon_0._M_allocated_capacity + 3);
      v17 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> > *const)(v2 + 32));
      v18 = proto::ResVersionConfig::version(&v17->second);
      MonitorReport::addValue(v16, MONITOR_IOS_RES_VERSION, v18, v33);
      std::string::~string(&v36);
      std::allocator<char>::~allocator((char *)&v33._anon_0._M_allocated_capacity + 3);
    }
    HIDWORD(v33._anon_0._M_allocated_capacity) = 3;
    *(std::map<unsigned int,proto::ResVersionConfig>::const_iterator *)(v2 + 32) = std::map<unsigned int,proto::ResVersionConfig>::find(
                                                                                     res_version_map,
                                                                                     (const std::map<unsigned int,proto::ResVersionConfig>::key_type *)&v33._anon_0._M_allocated_capacity
                                                                                   + 1);
    *((std::map<unsigned int,proto::ResVersionConfig>::const_iterator *)&v33._anon_0._M_allocated_capacity + 1) = std::map<unsigned int,proto::ResVersionConfig>::end(res_version_map);
    if ( std::operator!=(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::_Self *)(v2 + 32),
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::_Self *)&v33._anon_0._M_allocated_capacity
         + 1) )
    {
      v19 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
      std::allocator<char>::allocator((char *)&v33._anon_0._M_allocated_capacity + 3);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)&v36,
        byte_260C1F00,
        (const std::allocator<char> *)&v33._anon_0._M_allocated_capacity + 3);
      v20 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> > *const)(v2 + 32));
      v21 = proto::ResVersionConfig::version(&v20->second);
      MonitorReport::addValue(v19, MONITOR_PC_RES_VERSION, v21, v33);
      std::string::~string(&v36);
      std::allocator<char>::~allocator((char *)&v33._anon_0._M_allocated_capacity + 3);
    }
    HIDWORD(v33._anon_0._M_allocated_capacity) = 4;
    *(std::map<unsigned int,proto::ResVersionConfig>::const_iterator *)(v2 + 32) = std::map<unsigned int,proto::ResVersionConfig>::find(
                                                                                     res_version_map,
                                                                                     (const std::map<unsigned int,proto::ResVersionConfig>::key_type *)&v33._anon_0._M_allocated_capacity
                                                                                   + 1);
    *((std::map<unsigned int,proto::ResVersionConfig>::const_iterator *)&v33._anon_0._M_allocated_capacity + 1) = std::map<unsigned int,proto::ResVersionConfig>::end(res_version_map);
    if ( std::operator!=(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::_Self *)(v2 + 32),
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::_Self *)&v33._anon_0._M_allocated_capacity
         + 1) )
    {
      v22 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
      std::allocator<char>::allocator((char *)&v33._anon_0._M_allocated_capacity + 3);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)&v36,
        byte_260C1F00,
        (const std::allocator<char> *)&v33._anon_0._M_allocated_capacity + 3);
      v23 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> > *const)(v2 + 32));
      v24 = proto::ResVersionConfig::version(&v23->second);
      MonitorReport::addValue(v22, MONITOR_PS4_RES_VERSION, v24, v33);
      std::string::~string(&v36);
      std::allocator<char>::~allocator((char *)&v33._anon_0._M_allocated_capacity + 3);
    }
    HIDWORD(v33._anon_0._M_allocated_capacity) = 8;
    *(std::map<unsigned int,proto::ResVersionConfig>::const_iterator *)(v2 + 32) = std::map<unsigned int,proto::ResVersionConfig>::find(
                                                                                     res_version_map,
                                                                                     (const std::map<unsigned int,proto::ResVersionConfig>::key_type *)&v33._anon_0._M_allocated_capacity
                                                                                   + 1);
    *((std::map<unsigned int,proto::ResVersionConfig>::const_iterator *)&v33._anon_0._M_allocated_capacity + 1) = std::map<unsigned int,proto::ResVersionConfig>::end(res_version_map);
    if ( std::operator!=(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::_Self *)(v2 + 32),
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::_Self *)&v33._anon_0._M_allocated_capacity
         + 1) )
    {
      v25 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
      std::allocator<char>::allocator((char *)&v33._anon_0._M_allocated_capacity + 3);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)&v36,
        byte_260C1F00,
        (const std::allocator<char> *)&v33._anon_0._M_allocated_capacity + 3);
      v26 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> > *const)(v2 + 32));
      v27 = proto::ResVersionConfig::version(&v26->second);
      MonitorReport::addValue(v25, MONITOR_PS5_RES_VERSION, v27, v33);
      std::string::~string(&v36);
      std::allocator<char>::~allocator((char *)&v33._anon_0._M_allocated_capacity + 3);
    }
    HIDWORD(v33._anon_0._M_allocated_capacity) = 5;
    *(std::map<unsigned int,proto::ResVersionConfig>::const_iterator *)(v2 + 32) = std::map<unsigned int,proto::ResVersionConfig>::find(
                                                                                     res_version_map,
                                                                                     (const std::map<unsigned int,proto::ResVersionConfig>::key_type *)&v33._anon_0._M_allocated_capacity
                                                                                   + 1);
    *((std::map<unsigned int,proto::ResVersionConfig>::const_iterator *)&v33._anon_0._M_allocated_capacity + 1) = std::map<unsigned int,proto::ResVersionConfig>::end(res_version_map);
    if ( std::operator!=(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::_Self *)(v2 + 32),
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::_Self *)&v33._anon_0._M_allocated_capacity
         + 1) )
    {
      v28 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
      std::allocator<char>::allocator((char *)&v33._anon_0._M_allocated_capacity + 3);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)&v36,
        byte_260C1F00,
        (const std::allocator<char> *)&v33._anon_0._M_allocated_capacity + 3);
      v29 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> > *const)(v2 + 32));
      v30 = proto::ResVersionConfig::version(&v29->second);
      MonitorReport::addValue(v28, MONITOR_SERVER_RES_VERSION, v30, v33);
      std::string::~string(&v36);
      std::allocator<char>::~allocator((char *)&v33._anon_0._M_allocated_capacity + 3);
    }
    v31 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
    std::allocator<char>::allocator((char *)&v33._anon_0._M_allocated_capacity + 3);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)&v36,
      byte_260C1F00,
      (const std::allocator<char> *)&v33._anon_0._M_allocated_capacity + 3);
    v32 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v32->xml_config_version >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v32->xml_config_version >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    MonitorReport::addValue(v31, MONITOR_XML_CONFIG_VERSION, v32->xml_config_version, v33);
    std::string::~string(&v36);
    std::allocator<char>::~allocator((char *)&v33._anon_0._M_allocated_capacity + 3);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
  }
  if ( v37 == (char *)v2 )
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

// Line 1405: range 00000000175A12DC-00000000175A136B
uint32_t __cdecl GameserverService::getOnlinePlayerNum(GameserverService *const this)
{
  uint32_t sum; // [rsp+1Ch] [rbp-54h]
  std::atomic<unsigned int> *num; // [rsp+28h] [rbp-48h]
  std::deque<std::atomic<unsigned int>>::iterator __for_begin; // [rsp+30h] [rbp-40h] BYREF
  std::deque<std::atomic<unsigned int>>::iterator __for_end; // [rsp+50h] [rbp-20h] BYREF

  sum = 0;
  std::deque<std::atomic<unsigned int>>::begin(&__for_begin, &this->online_player_num_deque_);
  std::deque<std::atomic<unsigned int>>::end(&__for_end, &this->online_player_num_deque_);
  while ( std::operator!=<std::atomic<unsigned int>,std::atomic<unsigned int>&,std::atomic<unsigned int>*>(
            &__for_begin,
            &__for_end) )
  {
    num = std::_Deque_iterator<std::atomic<unsigned int>,std::atomic<unsigned int>&,std::atomic<unsigned int>*>::operator*(&__for_begin);
    sum += std::__atomic_base<unsigned int>::operator unsigned int(num);
    std::_Deque_iterator<std::atomic<unsigned int>,std::atomic<unsigned int>&,std::atomic<unsigned int>*>::operator++(&__for_begin);
  }
  return sum;
};

// Line 1415: range 00000000175A136C-00000000175A17F3
bool __cdecl GameserverService::isOnlinePlayerNumSafe(GameserverService *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool v10; // r14
  GameserverService *v11; // rax
  GameThreadLocal *GameThreadLocal; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  bool result; // al
  common::milog::MiLogStream v20; // [rsp+10h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+30h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 10 count:1416 48 4 21 count_cur_thread:1425 64 16 15 config_ptr:1418";
  *(_QWORD *)(v1 + 16) = GameserverService::isOnlinePlayerNumSafe;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 32) = GameserverService::getOnlinePlayerNum(this);
  common::milog::MiLogStream::create(
    &v20,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/gameserver_service.cpp",
    "isOnlinePlayerNumSafe",
    1417);
  v4 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v20, (const char (*)[21])"onlline player num: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, (const unsigned int *)(v1 + 32));
  common::milog::MiLogStream::~MiLogStream(&v20);
  GameserverService::getConfig((GameserverService *const)(v1 + 64));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&v5->warn_online_player >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v5 - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v5->warn_online_player >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( v5->warn_online_player > *(_DWORD *)(v1 + 32) )
  {
    v11 = ServiceBox::findService<GameserverService>();
    GameThreadLocal = GameserverService::getGameThreadLocal(v11);
    *(_DWORD *)(v1 + 48) = PlayerMgr::getOnlinePlayerNum(&GameThreadLocal->player_mgr);
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gameserver_service.cpp",
      "isOnlinePlayerNumSafe",
      1426);
    v13 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            &v20,
            (const char (*)[32])"onlline player num cur thread: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v1 + 48));
    common::milog::MiLogStream::~MiLogStream(&v20);
    v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v14->warn_online_player_per_thread >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v14 - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->warn_online_player_per_thread >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( v14->warn_online_player_per_thread > *(_DWORD *)(v1 + 48) )
    {
      v10 = 1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gameserver_service.cpp",
        "isOnlinePlayerNumSafe",
        1429);
      v15 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v20,
              (const char (*)[33])"online player per thread count: ");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v1 + 48));
      v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v16, (const char (*)[13])" warn count:");
      v18 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &v18->warn_online_player_per_thread);
      common::milog::MiLogStream::~MiLogStream(&v20);
      v10 = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gameserver_service.cpp",
      "isOnlinePlayerNumSafe",
      1421);
    v6 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v20,
           (const char (*)[22])"online player count: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])" warn count:");
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &v9->warn_online_player);
    common::milog::MiLogStream::~MiLogStream(&v20);
    v10 = 0;
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 64));
  result = v10;
  if ( v21 == (char *)v1 )
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

// Line 1437: range 00000000175A17F4-00000000175A182E
uint32_t __cdecl GameserverService::getServiceLoad(GameserverService *const this)
{
  if ( std::atomic<ServiceBase::Status>::operator ServiceBase::Status(&this->status_) == STATUS_RUN )
    return GameserverService::getOnlinePlayerNum(this);
  else
    return 10000;
};

// Line 1446: range 00000000175A1830-00000000175A1C24
bool __cdecl GameserverService::isMultiserverServiceAllStart(
        const GameserverService *const this,
        const std::vector<unsigned int> *type_vec)
{
  std::_Rb_tree_const_iterator<unsigned int> *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const unsigned int *v5; // r15
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v7; // rax
  int *v8; // rdx
  common::milog::MiLogStream *v9; // r14
  const unsigned int *v10; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v11; // rdx
  const std::string *v12; // rax
  const char *v13; // rax
  bool result; // al
  bool is_multiserver_services_started; // [rsp+2Bh] [rbp-E5h]
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __lhs; // [rsp+30h] [rbp-E0h] BYREF
  std::_Rb_tree_const_iterator<unsigned int>::_Self __y; // [rsp+38h] [rbp-D8h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-D0h] BYREF
  char v19[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (std::_Rb_tree_const_iterator<unsigned int> *)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::_Rb_tree_const_iterator<unsigned int> *)v3;
  }
  v2->_M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)"2 32 8 9 iter:1448 64 32 21 service_type_str:1459";
  v2[2]._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)GameserverService::isMultiserverServiceAllStart;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862723] = -202116109;
  is_multiserver_services_started = 1;
  v2[4]._M_node = std::set<unsigned int>::cbegin(&this->multiserver_service_type_set_)._M_node;
  while ( 1 )
  {
    __y._M_node = std::set<unsigned int>::cend(&this->multiserver_service_type_set_)._M_node;
    if ( !std::operator!=(v2 + 4, &__y) )
      break;
    v5 = std::_Rb_tree_const_iterator<unsigned int>::operator*(v2 + 4);
    M_current = std::vector<unsigned int>::end(type_vec)._M_current;
    v7._M_current = std::vector<unsigned int>::begin(type_vec)._M_current;
    __y._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                                                                           v7,
                                                                           (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                                                                           v5)._M_current;
    __lhs._M_current = std::vector<unsigned int>::end(type_vec)._M_current;
    if ( __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(
           &__lhs,
           (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__y) )
    {
      v8 = (int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(v2 + 4);
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( !proto::ServiceType_IsValid(*v8) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gameserver_service.cpp",
          "isMultiserverServiceAllStart",
          1455);
        v9 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
               &v18,
               (const char (*)[35])"invalid proto::ServiceType value: ");
        v10 = std::_Rb_tree_const_iterator<unsigned int>::operator*(v2 + 4);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, v10);
        common::milog::MiLogStream::~MiLogStream(&v18);
      }
      v11 = std::_Rb_tree_const_iterator<unsigned int>::operator*(v2 + 4);
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v12 = proto::ServiceType_Name[abi:cxx11]((proto::ServiceType)*v11);
      std::string::basic_string(&v2[8], v12);
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/gameserver_service.cpp",
        "isMultiserverServiceAllStart",
        1460);
      v13 = (const char *)std::string::c_str(&v2[8]);
      common::milog::MiLogStream::operator()(&v18, "%s has not started", v13);
      common::milog::MiLogStream::~MiLogStream(&v18);
      is_multiserver_services_started = 0;
      std::string::~string(&v2[8]);
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(v2 + 4, 0);
  }
  result = is_multiserver_services_started;
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1469: range 00000000175A1C26-00000000175A267A
void __cdecl GameserverService::updateAllPlayerOnlineStatus(GameserverService *const this, uint32_t nodeserver_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  GameserverService *v5; // rax
  GameThreadLocal *GameThreadLocal; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v7; // rdx
  GameserverService *v8; // rax
  unsigned int v9; // eax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::vector<unsigned int> *v11; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  bool isSubAccount; // r14
  std::unordered_map<unsigned int,bool>::mapped_type *v14; // rax
  bool *v15; // rdx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v16; // rdx
  std::unordered_map<unsigned int,bool>::mapped_type *v17; // rax
  bool *v18; // rdx
  const google::protobuf::RepeatedPtrField<proto::PlayerOnlineStatusInfo> *v19; // rax
  unsigned __int64 v20; // rdx
  common::minet::Packet *v21; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // r14
  unsigned __int64 v23; // rax
  unsigned int (__fastcall *v24)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, unsigned __int64); // r15
  bool v25; // r14
  std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator __for_begin_0; // [rsp+28h] [rbp-288h] BYREF
  std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator __for_end_0; // [rsp+30h] [rbp-280h] BYREF
  std::vector<unsigned int>::iterator __for_begin; // [rsp+38h] [rbp-278h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+40h] [rbp-270h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-268h]
  std::unordered_map<unsigned int,std::vector<unsigned int>> *__for_range_0; // [rsp+50h] [rbp-260h]
  const std::pair<unsigned int const,std::vector<unsigned int> > *v32; // [rsp+58h] [rbp-258h]
  std::tuple_element<0,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *platform_type; // [rsp+60h] [rbp-250h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *uid_vec; // [rsp+68h] [rbp-248h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+70h] [rbp-240h]
  proto::PlayerOnlineStatusInfo *proto_online_info; // [rsp+78h] [rbp-238h]
  common::milog::MiLogStream v37; // [rsp+80h] [rbp-230h] BYREF
  char v38[528]; // [rsp+A0h] [rbp-210h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 4 8 uid:1480 64 4 8 uid:1495 80 16 22 online_packet_ptr:1507 112 16 15 player_ptr:1482 144 "
                        "24 12 uid_vec:1470 208 48 18 online_notify:1490 288 56 25 platform_uid_vec_map:1478 384 56 23 is"
                        "_sub_account_map:1479";
  *(_QWORD *)(v2 + 16) = GameserverService::updateAllPlayerOnlineStatus;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = -218959360;
  v4[536862726] = 62194;
  v4[536862728] = -218959118;
  v4[536862730] = -234881024;
  v4[536862731] = -218959118;
  v4[536862733] = -218103808;
  v4[536862734] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 144));
  v5 = ServiceBox::findService<GameserverService>();
  GameThreadLocal = GameserverService::getGameThreadLocal(v5);
  PlayerMgr::getOnlinePlayerUidVec(&GameThreadLocal->player_mgr, (std::vector<unsigned int> *)(v2 + 144));
  if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v2 + 144)) )
  {
    std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map((std::unordered_map<unsigned int,std::vector<unsigned int>> *const)(v2 + 288));
    std::unordered_map<unsigned int,bool>::unordered_map((std::unordered_map<unsigned int,bool> *const)(v2 + 384));
    __for_range = (std::vector<unsigned int> *)(v2 + 144);
    __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 144))._M_current;
    __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 144))._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v7 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 48) = *v7;
      v8 = ServiceBox::findService<GameserverService>();
      v9 = (unsigned int)GameserverService::getGameThreadLocal(v8);
      PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v2 + 112), v9 + 16);
      if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 112)) )
      {
        v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        *(_DWORD *)(v2 + 64) = Player::getPlatformType(v10);
        v11 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
                (std::unordered_map<unsigned int,std::vector<unsigned int>> *const)(v2 + 288),
                (std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 64));
        std::vector<unsigned int>::push_back(v11, (const std::vector<unsigned int>::value_type *)(v2 + 48));
        v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        isSubAccount = Player::isSubAccount(v12);
        v14 = std::unordered_map<unsigned int,bool>::operator[](
                (std::unordered_map<unsigned int,bool> *const)(v2 + 384),
                (const std::unordered_map<unsigned int,bool>::key_type *)(v2 + 48));
        v15 = v14;
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)v14 & 7) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(v14);
        }
        *v15 = isSubAccount;
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 112));
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    proto::PlayerOnlineStatusNotify::PlayerOnlineStatusNotify((proto::PlayerOnlineStatusNotify *const)(v2 + 208));
    __for_range_0 = (std::unordered_map<unsigned int,std::vector<unsigned int>> *)(v2 + 288);
    __for_begin_0._M_cur = std::unordered_map<unsigned int,std::vector<unsigned int>>::begin((std::unordered_map<unsigned int,std::vector<unsigned int>> *const)(v2 + 288))._M_cur;
    __for_end_0._M_cur = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
              &__for_begin_0,
              &__for_end_0) )
    {
      v32 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator*(&__for_begin_0);
      platform_type = std::get<0ul,unsigned int const,std::vector<unsigned int>>(v32);
      uid_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::vector<unsigned int>>(v32);
      if ( !std::vector<unsigned int>::empty(uid_vec) )
      {
        __for_range_1 = uid_vec;
        __for_begin._M_current = (unsigned int *)std::vector<unsigned int>::begin(uid_vec)._M_current;
        __for_end._M_current = (unsigned int *)std::vector<unsigned int>::end(__for_range_1)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_begin,
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end) )
        {
          v16 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 64) = *v16;
          proto_online_info = proto::PlayerOnlineStatusNotify::add_player_info_list((proto::PlayerOnlineStatusNotify *const)(v2 + 208));
          proto::PlayerOnlineStatusInfo::set_uid(proto_online_info, *(_DWORD *)(v2 + 64));
          proto::PlayerOnlineStatusInfo::set_online_status(proto_online_info, PlayerOnlineStatusInfo_StatusType_ONLINE);
          if ( *(_BYTE *)(((unsigned __int64)platform_type >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)platform_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)platform_type >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto::PlayerOnlineStatusInfo::set_platform_type(proto_online_info, *platform_type);
          v17 = std::unordered_map<unsigned int,bool>::operator[](
                  (std::unordered_map<unsigned int,bool> *const)(v2 + 384),
                  (const std::unordered_map<unsigned int,bool>::key_type *)(v2 + 64));
          v18 = v17;
          if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)v17 & 7) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(v17);
          }
          proto::PlayerOnlineStatusInfo::set_is_sub_account(proto_online_info, *v18);
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
        }
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator++(&__for_begin_0);
    }
    v19 = proto::PlayerOnlineStatusNotify::player_info_list((const proto::PlayerOnlineStatusNotify *const)(v2 + 208));
    if ( google::protobuf::RepeatedPtrField<proto::PlayerOnlineStatusInfo>::size(v19) )
    {
      common::minet::PacketUtils::createPacket<proto::PlayerOnlineStatusNotify>((const proto::PlayerOnlineStatusNotify *)(v2 + 80));
      if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v37,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gameserver_service.cpp",
          "updateAllPlayerOnlineStatus",
          1510);
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v37, (const char (*)[20])"createPacket failed");
        common::milog::MiLogStream::~MiLogStream(&v37);
      }
      else
      {
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          (std::shared_ptr<common::minet::Packet> *const)(v2 + 112),
          (const std::shared_ptr<common::minet::Packet> *)(v2 + 80));
        ServiceBase::setPacketSource(this, (common::minet::PacketPtr)__PAIR128__(v20, v2 + 112));
        std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 112));
        v21 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        common::minet::Packet::setTarget(v21, 4u, nodeserver_id);
        v22 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
        if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v23 = (unsigned __int64)(v22->_vptr_NetworkMgrBase + 8);
        if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
          v23 = __asan_report_load8();
        v24 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, unsigned __int64))v23;
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          (std::shared_ptr<common::minet::Packet> *const)(v2 + 112),
          (const std::shared_ptr<common::minet::Packet> *)(v2 + 80));
        v25 = v24(v22, v2 + 112) != 0;
        std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 112));
        if ( v25 )
        {
          common::milog::MiLogStream::create(
            &v37,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/gameserver_service.cpp",
            "updateAllPlayerOnlineStatus",
            1518);
          common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v37, (const char (*)[18])"sendPacket failed");
          common::milog::MiLogStream::~MiLogStream(&v37);
        }
      }
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 80));
    }
    proto::PlayerOnlineStatusNotify::~PlayerOnlineStatusNotify((proto::PlayerOnlineStatusNotify *const)(v2 + 208));
    std::unordered_map<unsigned int,bool>::~unordered_map((std::unordered_map<unsigned int,bool> *const)(v2 + 384));
    std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map((std::unordered_map<unsigned int,std::vector<unsigned int>> *const)(v2 + 288));
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 144));
  if ( v38 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
};

// Line 1524: range 00000000175A267C-00000000175A2A0A
void __cdecl GameserverService::updatePlayerOnlineStatus(
        GameserverService *const this,
        uint32_t uid,
        proto::PlayerOnlineStatusInfo::StatusType type,
        uint32_t platform_type,
        bool is_sub_account,
        const std::string *country_code)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  GameserverService *v9; // r14
  unsigned __int64 v10; // rdx
  NetworkMgrBase *v11; // r14
  uint32_t v12; // ecx
  proto::PlayerOnlineStatusInfo *proto_online_info; // [rsp+28h] [rbp-108h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-F0h] BYREF
  char v20[208]; // [rsp+60h] [rbp-D0h] BYREF

  v6 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(160LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 16 22 status_packet_ptr:1533 80 48 18 status_notify:1525";
  *(_QWORD *)(v6 + 16) = GameserverService::updatePlayerOnlineStatus;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = 61937;
  v8[536862722] = 62194;
  v8[536862724] = -202116109;
  proto::PlayerOnlineStatusNotify::PlayerOnlineStatusNotify((proto::PlayerOnlineStatusNotify *const)(v6 + 80));
  proto_online_info = proto::PlayerOnlineStatusNotify::add_player_info_list((proto::PlayerOnlineStatusNotify *const)(v6 + 80));
  proto::PlayerOnlineStatusInfo::set_platform_type(proto_online_info, platform_type);
  proto::PlayerOnlineStatusInfo::set_uid(proto_online_info, uid);
  proto::PlayerOnlineStatusInfo::set_online_status(proto_online_info, type);
  proto::PlayerOnlineStatusInfo::set_is_sub_account(proto_online_info, is_sub_account);
  proto::PlayerOnlineStatusInfo::set_country_code(proto_online_info, country_code);
  common::minet::PacketUtils::createPacket<proto::PlayerOnlineStatusNotify>((const proto::PlayerOnlineStatusNotify *)(v6 + 48));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v6 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gameserver_service.cpp",
      "updatePlayerOnlineStatus",
      1536);
    common::milog::MiLogStream::operator()(&v19, "create packet failed");
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  else
  {
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v6 + 48));
    ServiceBase::setPacketSource(v9, (common::minet::PacketPtr)__PAIR128__(v10, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v11 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v6 + 48));
    NetworkMgrBase::broadcastPacketToTargetService(v11, (common::minet::PacketPtr)__PAIR128__(4LL, &packet_ptr), v12);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v6 + 48));
  proto::PlayerOnlineStatusNotify::~PlayerOnlineStatusNotify((proto::PlayerOnlineStatusNotify *const)(v6 + 80));
  if ( v20 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1545: range 00000000175A2A0C-00000000175A2F3C
void __cdecl GameserverService::updateAllHomeOnlineStatus(GameserverService *const this, uint32_t nodeserver_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  GameserverService *v5; // rax
  const google::protobuf::RepeatedPtrField<proto::HomeOnlineStatusInfo> *v6; // rax
  unsigned __int64 v7; // rdx
  common::minet::Packet *v8; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  unsigned __int64 v10; // rax
  unsigned int (__fastcall *v11)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  bool v12; // r14
  std::unordered_map<unsigned int,std::shared_ptr<Home>>::iterator __for_begin; // [rsp+28h] [rbp-138h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Home>>::iterator __for_end; // [rsp+30h] [rbp-130h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Home>> *__for_range; // [rsp+38h] [rbp-128h]
  const std::pair<unsigned int const,std::shared_ptr<Home> > *v16; // [rsp+40h] [rbp-120h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Home> > >::type *home_uid; // [rsp+48h] [rbp-118h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Home> > >::type *_; // [rsp+50h] [rbp-110h]
  proto::HomeOnlineStatusInfo *proto_online_info; // [rsp+58h] [rbp-108h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+60h] [rbp-100h] BYREF
  common::milog::MiLogStream v21; // [rsp+70h] [rbp-F0h] BYREF
  char v22[208]; // [rsp+90h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 22 online_packet_ptr:1555 80 48 18 online_notify:1546";
  *(_QWORD *)(v2 + 16) = GameserverService::updateAllHomeOnlineStatus;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  proto::HomeOnlineStatusNotify::HomeOnlineStatusNotify((proto::HomeOnlineStatusNotify *const)(v2 + 80));
  v5 = ServiceBox::findService<GameserverService>();
  __for_range = &GameserverService::getGameThreadLocal(v5)->home_mgr.online_home_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Home>>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Home>>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Home>>,false>(&__for_begin, &__for_end) )
  {
    v16 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Home>>,false,false>::operator*(&__for_begin);
    home_uid = std::get<0ul,unsigned int const,std::shared_ptr<Home>>(v16);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Home> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Home>>(v16);
    proto_online_info = proto::HomeOnlineStatusNotify::add_home_info_list((proto::HomeOnlineStatusNotify *const)(v2 + 80));
    if ( *(_BYTE *)(((unsigned __int64)home_uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)home_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)home_uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::HomeOnlineStatusInfo::set_home_uid(proto_online_info, *home_uid);
    proto::HomeOnlineStatusInfo::set_online_status(proto_online_info, HomeOnlineStatusInfo_StatusType_ONLINE);
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Home>>,false,false>::operator++(&__for_begin);
  }
  v6 = proto::HomeOnlineStatusNotify::home_info_list((const proto::HomeOnlineStatusNotify *const)(v2 + 80));
  if ( google::protobuf::RepeatedPtrField<proto::HomeOnlineStatusInfo>::size(v6) )
  {
    common::minet::PacketUtils::createPacket<proto::HomeOnlineStatusNotify>((const proto::HomeOnlineStatusNotify *)(v2 + 48));
    if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gameserver_service.cpp",
        "updateAllHomeOnlineStatus",
        1558);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v21, (const char (*)[20])"createPacket failed");
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    else
    {
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v2 + 48));
      ServiceBase::setPacketSource(this, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
      v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      common::minet::Packet::setTarget(v8, 4u, nodeserver_id);
      v9 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v10 = (unsigned __int64)(v9->_vptr_NetworkMgrBase + 8);
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8();
      v11 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v10;
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v2 + 48));
      v12 = v11(v9, &packet_ptr) != 0;
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
      if ( v12 )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gameserver_service.cpp",
          "updateAllHomeOnlineStatus",
          1566);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v21, (const char (*)[18])"sendPacket failed");
        common::milog::MiLogStream::~MiLogStream(&v21);
      }
    }
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 48));
  }
  proto::HomeOnlineStatusNotify::~HomeOnlineStatusNotify((proto::HomeOnlineStatusNotify *const)(v2 + 80));
  if ( v22 == (char *)v2 )
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
};

// Line 1572: range 00000000175A2F3E-00000000175A326E
void __cdecl GameserverService::updateHomeOnlineStatus(
        GameserverService *const this,
        uint32_t home_uid,
        proto::HomeOnlineStatusInfo::StatusType type)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  GameserverService *v6; // r14
  unsigned __int64 v7; // rdx
  NetworkMgrBase *v8; // r14
  uint32_t v9; // ecx
  proto::HomeOnlineStatusInfo *proto_online_info; // [rsp+18h] [rbp-108h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-100h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-F0h] BYREF
  char v14[208]; // [rsp+50h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 16 22 status_packet_ptr:1578 80 48 18 status_notify:1573";
  *(_QWORD *)(v3 + 16) = GameserverService::updateHomeOnlineStatus;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862724] = -202116109;
  proto::HomeOnlineStatusNotify::HomeOnlineStatusNotify((proto::HomeOnlineStatusNotify *const)(v3 + 80));
  proto_online_info = proto::HomeOnlineStatusNotify::add_home_info_list((proto::HomeOnlineStatusNotify *const)(v3 + 80));
  proto::HomeOnlineStatusInfo::set_home_uid(proto_online_info, home_uid);
  proto::HomeOnlineStatusInfo::set_online_status(proto_online_info, type);
  common::minet::PacketUtils::createPacket<proto::HomeOnlineStatusNotify>((const proto::HomeOnlineStatusNotify *)(v3 + 48));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gameserver_service.cpp",
      "updateHomeOnlineStatus",
      1581);
    common::milog::MiLogStream::operator()(&v13, "create packet failed");
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v3 + 48));
    ServiceBase::setPacketSource(v6, (common::minet::PacketPtr)__PAIR128__(v7, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v3 + 48));
    NetworkMgrBase::broadcastPacketToTargetService(v8, (common::minet::PacketPtr)__PAIR128__(4LL, &packet_ptr), v9);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v3 + 48));
  proto::HomeOnlineStatusNotify::~HomeOnlineStatusNotify((proto::HomeOnlineStatusNotify *const)(v3 + 80));
  if ( v14 == (char *)v3 )
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
