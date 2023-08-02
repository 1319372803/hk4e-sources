// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/muipserver/src/service/muipserver_service.cpp

// Line 26: range 000000000CBF6DE4-000000000CBF6ED6
void __cdecl MuipserverService::MuipserverService(MuipserverService *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServiceBase::ServiceBase(this);
  v2 = (int (**)(...))(&`vtable for'MuipserverService + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ServiceBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->async_rsp_mgr >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->async_rsp_mgr, v1);
  this->async_rsp_mgr = &g_async_rsp_mgr;
  std::atomic<unsigned int>::atomic(&this->total_request_per_time, 0);
  std::map<unsigned int,std::atomic<unsigned int>>::map(&this->cmd_request_per_time_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_report_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_report_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_report_time, 0LL);
  }
  this->last_report_time = 0;
};

// Line 30: range 000000000CBF6ED8-000000000CBF7478
int32_t __cdecl MuipserverService::init(MuipserverService *const this, common::tools::PTree *pt)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  std::map<unsigned int,std::atomic<unsigned int>>::mapped_type *v6; // rax
  common::tools::PTree *v7; // r14
  common::tools::PTree *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-121h] BYREF
  std::unordered_map<unsigned int,int (RequestHandler::*)(const common::minet::http_client::HttpRequest&,Json::Value&,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >),std::hash<unsigned int>,std::equal_to<unsigned int>,std::allocator<std::pair<unsigned int const,int (RequestHandler::*)(const common::minet::http_client::HttpRequest&,Json::Value&,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >)> > >::const_iterator __for_begin; // [rsp+20h] [rbp-120h] BYREF
  std::unordered_map<unsigned int,int (RequestHandler::*)(const common::minet::http_client::HttpRequest&,Json::Value&,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >),std::hash<unsigned int>,std::equal_to<unsigned int>,std::allocator<std::pair<unsigned int const,int (RequestHandler::*)(const common::minet::http_client::HttpRequest&,Json::Value&,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >)> > >::const_iterator __for_end; // [rsp+28h] [rbp-118h] BYREF
  const std::unordered_map<unsigned int,int (RequestHandler::*)(const common::minet::http_client::HttpRequest&,Json::Value&,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >),std::hash<unsigned int>,std::equal_to<unsigned int>,std::allocator<std::pair<unsigned int const,int (RequestHandler::*)(const common::minet::http_client::HttpRequest&,Json::Value&,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >)> > > *__for_range; // [rsp+30h] [rbp-110h]
  const std::pair<unsigned int const,int (RequestHandler::*)(const common::minet::http_client::HttpRequest&,Json::Value&,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >)> *v17; // [rsp+38h] [rbp-108h]
  std::tuple_element<0,const std::pair<unsigned int const,int (RequestHandler::*)(const common::minet::http_client::HttpRequest&,Json::Value&,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >)> >::type *cmd_id; // [rsp+40h] [rbp-100h]
  std::tuple_element<1,const std::pair<unsigned int const,int (RequestHandler::*)(const common::minet::http_client::HttpRequest&,Json::Value&,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >)> >::type *_; // [rsp+48h] [rbp-F8h]
  std::string v20; // [rsp+50h] [rbp-F0h] BYREF
  std::string child_name; // [rsp+70h] [rbp-D0h] BYREF
  char v22[176]; // [rsp+90h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 25 config_player_db_count:49 48 4 23 config_home_db_count:50 64 8 8 ms_pt:32 96 16 21 mys"
                        "ql_extra_pt_opt:48";
  *(_QWORD *)(v2 + 16) = MuipserverService::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&child_name, "Root.ServiceList.Muipserver", &__a);
  common::tools::PTree::getChild(pt, &child_name);
  std::string::~string(&child_name);
  std::allocator<char>::~allocator(&__a);
  if ( ServiceBase::init(this, (common::tools::PTree *)(v2 + 64)) )
  {
    v5 = -1;
  }
  else
  {
    __for_range = RequestHandler::getRequestHandlerMap();
    __for_begin._M_cur = std::unordered_map<unsigned int,int (RequestHandler::*)(common::minet::http_client::HttpRequest const&,Json::Value &,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>),std::hash<unsigned int>,std::equal_to<unsigned int>,std::allocator<std::pair<unsigned int const,int (RequestHandler::*)(common::minet::http_client::HttpRequest const&,Json::Value &,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)>>>::begin(__for_range)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,int (RequestHandler::*)(common::minet::http_client::HttpRequest const&,Json::Value &,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>),std::hash<unsigned int>,std::equal_to<unsigned int>,std::allocator<std::pair<unsigned int const,int (RequestHandler::*)(common::minet::http_client::HttpRequest const&,Json::Value &,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)>>>::end(__for_range)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,int (RequestHandler::*)(common::minet::http_client::HttpRequest const&,Json::Value &,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)>,false>(
              &__for_begin,
              &__for_end) )
    {
      v17 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,int (RequestHandler::*)(common::minet::http_client::HttpRequest const&,Json::Value &,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)>,false,false>::operator*(&__for_begin);
      cmd_id = std::get<0ul,unsigned int const,int (RequestHandler::*)(common::minet::http_client::HttpRequest const&,Json::Value &,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)>(v17);
      _ = (std::tuple_element<1,const std::pair<unsigned int const,int (RequestHandler::*)(const common::minet::http_client::HttpRequest&,Json::Value&,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >)> >::type *)std::get<1ul,unsigned int const,int (RequestHandler::*)(common::minet::http_client::HttpRequest const&,Json::Value &,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)>(v17);
      v6 = std::map<unsigned int,std::atomic<unsigned int>>::operator[](&this->cmd_request_per_time_map, cmd_id);
      std::__atomic_base<unsigned int>::operator=(v6, 0);
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,int (RequestHandler::*)(common::minet::http_client::HttpRequest const&,Json::Value &,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)>,false,false>::operator++(&__for_begin);
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&child_name, "Root.MysqlExtraConf", &__a);
    common::tools::PTree::getChildOptional(pt, &child_name);
    std::string::~string(&child_name);
    std::allocator<char>::~allocator(&__a);
    *(_DWORD *)(v2 + 32) = 0;
    *(_DWORD *)(v2 + 48) = 0;
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v2 + 96)) )
    {
      v7 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v2 + 96));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v20, "<xmlattr>.player_db_count", &__a);
      *(_DWORD *)(v2 + 32) = common::tools::PTree::get<unsigned int>(v7, &v20, 0);
      std::string::~string(&v20);
      std::allocator<char>::~allocator(&__a);
      v8 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v2 + 96));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&child_name, "<xmlattr>.home_db_count", &__a);
      *(_DWORD *)(v2 + 48) = common::tools::PTree::get<unsigned int>(v8, &child_name, 0);
      std::string::~string(&child_name);
      std::allocator<char>::~allocator(&__a);
    }
    if ( *(_DWORD *)(v2 + 32) == *(_DWORD *)(v2 + 48) )
    {
      if ( MysqlOpPlayerData::init(*(_DWORD *)(v2 + 32)) )
      {
        v5 = -1;
      }
      else if ( MysqlOpHomeData::init(*(_DWORD *)(v2 + 48)) )
      {
        v5 = -1;
      }
      else
      {
        v5 = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&child_name,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/service/muipserver_service.cpp",
        "init",
        60);
      v9 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
             (common::milog::MiLogStream *const)&child_name,
             (const char (*)[17])"player_db_count:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
      v11 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              v10,
              (const char (*)[29])" is not equal home_db_count:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
      v5 = -1;
    }
    std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v2 + 96));
  }
  common::tools::PTree::~PTree((common::tools::PTree *const)(v2 + 64));
  result = v5;
  if ( v22 == (char *)v2 )
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

// Line 89: range 000000000CBF747A-000000000CBF75DF
int32_t __cdecl MuipserverService::defaultProcessPacketFunc(
        MuipserverService *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  common::minet::Packet *v2; // rax
  MuipserverService *v3; // rax
  AsyncRspMgr *async_rsp_mgr; // rbx
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  const std::string *v6; // rax
  const char *v7; // rax
  uint32_t http_session_id; // [rsp+14h] [rbp-4Ch]
  int32_t ret; // [rsp+18h] [rbp-48h]
  uint32_t cmd_id; // [rsp+1Ch] [rbp-44h]
  std::shared_ptr<common::minet::Packet> v12; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-30h] BYREF

  v2 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  http_session_id = common::minet::Packet::getExt(v2, 0);
  v3 = ServiceBox::findService<MuipserverService>();
  if ( *(_BYTE *)(((unsigned __int64)&v3->async_rsp_mgr >> 3) + 0x7FFF8000) )
    v3 = (MuipserverService *)__asan_report_load8(&v3->async_rsp_mgr);
  async_rsp_mgr = v3->async_rsp_mgr;
  std::shared_ptr<common::minet::Packet>::shared_ptr(&v12, p_packet_ptr);
  ret = AsyncRspMgr::notifyApiResponse(async_rsp_mgr, http_session_id, &v12);
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&v12);
  if ( ret )
  {
    v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    cmd_id = common::minet::Packet::getCmdId(v5);
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/muipserver_service.cpp",
      "defaultProcessPacketFunc",
      95);
    v6 = ProtoUtils::getCmdName[abi:cxx11](cmd_id);
    v7 = (const char *)std::string::c_str(v6);
    common::milog::MiLogStream::operator()(
      &v13,
      "can not find func for http_session_id=%u cmd_id=%u, name=%s",
      http_session_id,
      cmd_id,
      v7);
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  return ret;
};

// Line 101: range 000000000CBF75E0-000000000CBF7BFB
void __cdecl MuipserverService::onMonitorReport(MuipserverService *const this, uint32_t thread_index)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::allocator<char> v8; // [rsp+12h] [rbp-11Eh] BYREF
  std::allocator<char> __a; // [rsp+13h] [rbp-11Dh] BYREF
  uint32_t now; // [rsp+14h] [rbp-11Ch]
  int32_t second; // [rsp+18h] [rbp-118h]
  uint32_t value; // [rsp+1Ch] [rbp-114h]
  std::map<unsigned int,std::atomic<unsigned int>>::iterator __for_begin; // [rsp+20h] [rbp-110h] BYREF
  std::map<unsigned int,std::atomic<unsigned int>>::iterator __for_end; // [rsp+28h] [rbp-108h] BYREF
  std::map<unsigned int,std::atomic<unsigned int>> *__for_range; // [rsp+30h] [rbp-100h]
  std::pair<unsigned int const,std::atomic<unsigned int> > *__in; // [rsp+38h] [rbp-F8h]
  std::tuple_element<0,std::pair<unsigned int const,std::atomic<unsigned int> > >::type *cmd_id; // [rsp+40h] [rbp-F0h]
  std::tuple_element<1,std::pair<unsigned int const,std::atomic<unsigned int> > >::type *requst_request_per_time; // [rsp+48h] [rbp-E8h]
  std::string label_key; // [rsp+50h] [rbp-E0h] BYREF
  std::string label_value; // [rsp+70h] [rbp-C0h] BYREF
  char v21[160]; // [rsp+90h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 4 9 value:111 48 40 23 service_name_holder:123";
  *(_QWORD *)(v2 + 16) = MuipserverService::onMonitorReport;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  if ( !thread_index )
  {
    now = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&this->last_report_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_report_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->last_report_time);
    }
    second = now - this->last_report_time;
    if ( second > 30 )
    {
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&label_value, "total", &__a);
      std::allocator<char>::allocator(&v8);
      std::string::basic_string<std::allocator<char>>(&label_key, "cmd_id", &v8);
      MonitorReportUtils::ContextHolder::ContextHolder(
        (MonitorReportUtils::ContextHolder *const)(v2 + 48),
        &label_key,
        &label_value);
      std::string::~string(&label_key);
      std::allocator<char>::~allocator(&v8);
      std::string::~string(&label_value);
      std::allocator<char>::~allocator(&__a);
      *(_DWORD *)(v2 + 32) = std::__atomic_base<unsigned int>::operator unsigned int(&this->total_request_per_time);
      std::__atomic_base<unsigned int>::operator=(&this->total_request_per_time, 0);
      if ( *(_DWORD *)(v2 + 32) )
      {
        v5 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
        MonitorReport::addValue(v5, MONITOR_MUIP_QPS, *(_DWORD *)(v2 + 32));
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&label_value,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/service/muipserver_service.cpp",
        "onMonitorReport",
        117);
      v6 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
             (common::milog::MiLogStream *const)&label_value,
             (const char (*)[20])"request_per_second:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&label_value);
      MonitorReportUtils::ContextHolder::~ContextHolder((MonitorReportUtils::ContextHolder *const)(v2 + 48));
      __for_range = &this->cmd_request_per_time_map;
      __for_begin._M_node = std::map<unsigned int,std::atomic<unsigned int>>::begin(&this->cmd_request_per_time_map)._M_node;
      __for_end._M_node = std::map<unsigned int,std::atomic<unsigned int>>::end(__for_range)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::atomic<unsigned int>>>::operator*(&__for_begin);
        cmd_id = std::get<0ul,unsigned int const,std::atomic<unsigned int>>(__in);
        requst_request_per_time = std::get<1ul,unsigned int const,std::atomic<unsigned int>>(__in);
        if ( *(_BYTE *)(((unsigned __int64)cmd_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)cmd_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cmd_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(cmd_id);
        }
        common::tools::StringUtils::numToStr<unsigned int>(&label_key, *cmd_id);
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>(&label_value, "cmd_id", &__a);
        MonitorReportUtils::ContextHolder::ContextHolder(
          (MonitorReportUtils::ContextHolder *const)(v2 + 48),
          &label_value,
          &label_key);
        std::string::~string(&label_value);
        std::allocator<char>::~allocator(&__a);
        std::string::~string(&label_key);
        value = std::__atomic_base<unsigned int>::operator unsigned int(requst_request_per_time);
        std::__atomic_base<unsigned int>::operator=(requst_request_per_time, 0);
        if ( value )
        {
          v7 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
          MonitorReport::addValue(v7, MONITOR_MUIP_QPS, value);
        }
        MonitorReportUtils::ContextHolder::~ContextHolder((MonitorReportUtils::ContextHolder *const)(v2 + 48));
        std::_Rb_tree_iterator<std::pair<unsigned int const,std::atomic<unsigned int>>>::operator++(&__for_begin);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->last_report_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_report_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->last_report_time, &__for_end);
      }
      this->last_report_time = now;
    }
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

// Line 138: range 000000000CBF7BFC-000000000CBF7DD4
void __fastcall MuipserverService::addRequestReport(MuipserverService *const this, uint32_t cmd_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char *v5; // rsi
  std::map<unsigned int,std::atomic<unsigned int>>::mapped_type *v6; // rax
  volatile signed __int32 *v7; // rdx
  char v8; // cl
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
  *(_QWORD *)(v2 + 8) = "1 32 4 10 cmd_id:137";
  *(_QWORD *)(v2 + 16) = MuipserverService::addRequestReport;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = cmd_id;
  if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,std::atomic<unsigned int>>,unsigned int>(
          &this->cmd_request_per_time_map,
          (const unsigned int *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/muipserver_service.cpp",
      "addRequestReport",
      142);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v9, (const char (*)[18])"cmd_id not in map");
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    v5 = (char *)(v2 + 32);
    v6 = std::map<unsigned int,std::atomic<unsigned int>>::operator[](
           &this->cmd_request_per_time_map,
           (const std::map<unsigned int,std::atomic<unsigned int>>::key_type *)(v2 + 32));
    v7 = (volatile signed __int32 *)v6;
    v8 = *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000);
    if ( v8 != 0 && (char)(((unsigned __int8)v6 & 7) + 3) >= v8 )
    {
      LOBYTE(v5) = v8 != 0;
      __asan_report_store4(v6, v5);
    }
    _InterlockedExchangeAdd(v7, 1u);
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

// Line 151: range 000000000CBF7DD6-000000000CBF7FA8
ConfigPtr __cdecl MuipserverService::getConfig(MuipserverService *const this)
{
  std::shared_ptr<ConfigBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  const std::shared_ptr<ConfigBase> *v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  ConfigPtr result; // rax
  std::shared_ptr<ConfigBase> *v8; // [rsp+8h] [rbp-78h]
  std::shared_ptr<ConfigBase> __r; // [rsp+10h] [rbp-70h] BYREF
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v8 = (std::shared_ptr<ConfigBase> *)this;
  v1 = (std::shared_ptr<ConfigBase> *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (MuipserverService *const)64;
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<ConfigBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 12 base_ptr:153";
  v1[1]._M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)MuipserverService::getConfig;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  v4 = (const std::shared_ptr<ConfigBase> *)ZTWN11ThreadLocal15config_base_ptrE(this);
  std::shared_ptr<ConfigBase>::shared_ptr(v1 + 2, v4);
  if ( std::operator==<ConfigBase>(0LL, v1 + 2) )
  {
    v5 = (unsigned __int64)std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::config_mgr_ptr);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(v5);
    v6 = *(_QWORD *)v5 + 32LL;
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(*(_QWORD *)v5 + 32LL);
    (*(void (__fastcall **)(std::shared_ptr<ConfigBase> *, unsigned __int64))v6)(&__r, v5);
    std::shared_ptr<ConfigBase>::operator=(v1 + 2, &__r);
    std::shared_ptr<ConfigBase>::~shared_ptr(&__r);
  }
  if ( *(_WORD *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    __asan_report_store16(v8);
  std::dynamic_pointer_cast<Config,ConfigBase>(v8);
  std::shared_ptr<ConfigBase>::~shared_ptr(v1 + 2);
  if ( v10 == (char *)v1 )
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

// Line 162: range 000000000CC3E05E-000000000CC3E072
void __cdecl GLOBAL__sub_I_merge_merge_main_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 162: range 000000000CC1FD3C-000000000CC3D7AD
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority);
