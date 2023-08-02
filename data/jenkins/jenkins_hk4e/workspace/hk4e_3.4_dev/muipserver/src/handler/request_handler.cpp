// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/muipserver/src/handler/request_handler.cpp

// Line 47: range 000000000CBED938-000000000CBED94B
HttpSession *__cdecl RequestHandler::getSession(RequestHandler *const this)
{
  return (HttpSession *)&this[-864];
};

// Line 53: range 000000000CBED94C-000000000CBEEC6E
void __cdecl RequestHandler::processRequest(
        RequestHandler *const this,
        const common::minet::http_client::HttpRequest *request,
        common::minet::http_client::HttpResponse *response,
        boost::asio::yield_context *p_yield)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,unsigned int>,false,true>::pointer v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  const std::string *v13; // rax
  RequestHandler **v15; // r9
  Json::Value_0 *v16; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::string >,false,false>::pointer v17; // rax
  Json::Value_0 *v18; // rax
  Json::Value *v19; // rax
  Json::Value_0 *v20; // rax
  int v21; // eax
  std::map<std::string,std::string>::mapped_type *v22; // rax
  const char *v23; // rsi
  std::map<std::string,std::string>::mapped_type *v24; // rax
  char *v25; // rsi
  __int64 v26; // r14
  const char *v27; // rax
  const char *v28; // rax
  MuipserverService *v29; // rax
  std::atomic<unsigned int> *v30; // rdx
  char v31; // cl
  common::minet::http_client::HttpResponse *responsea; // [rsp+8h] [rbp-478h]
  const common::minet::http_client::HttpRequest *requesta; // [rsp+10h] [rbp-470h]
  std::allocator<char> v35; // [rsp+2Dh] [rbp-453h] BYREF
  std::allocator<char> __a; // [rsp+2Eh] [rbp-452h] BYREF
  bool is_use_html; // [rsp+2Fh] [rbp-451h]
  std::unordered_map<unsigned int,std::string>::key_type __x; // [rsp+30h] [rbp-450h] BYREF
  int32_t retcode; // [rsp+34h] [rbp-44Ch]
  unsigned int v40; // [rsp+38h] [rbp-448h]
  int v41; // [rsp+3Ch] [rbp-444h]
  std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> __y; // [rsp+40h] [rbp-440h] BYREF
  RequestHandler::RequestFunc *func; // [rsp+48h] [rbp-438h]
  const std::string *retcode_name; // [rsp+50h] [rbp-430h]
  std::atomic<unsigned int> *p_total_request_per_time; // [rsp+58h] [rbp-428h]
  std::string __rhs; // [rsp+60h] [rbp-420h] BYREF
  std::string __lhs; // [rsp+80h] [rbp-400h] BYREF
  common::milog::MiLogStream v48; // [rsp+A0h] [rbp-3E0h] BYREF
  Json::Value_0 other; // [rsp+C0h] [rbp-3C0h] BYREF
  char v50[912]; // [rsp+F0h] [rbp-390h] BYREF

  requesta = request;
  responsea = response;
  v4 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(864LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "13 48 4 9 cmd_id:57 64 8 6 it:118 96 16 8 timer:54 128 16 13 config_ptr:61 160 32 11 ret_str:117"
                        " 224 32 10 ticket:133 288 32 12 json_str:137 352 32 10 cmd_str:68 416 32 13 region_str:95 480 40"
                        " 12 data_json:56 560 40 8 json:115 640 48 15 json_writer:150 720 112 15 json_writer:140";
  *(_QWORD *)(v4 + 16) = RequestHandler::processRequest;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862726] = -218959118;
  v6[536862728] = -218959118;
  v6[536862730] = -218959118;
  v6[536862732] = -218959118;
  v6[536862734] = -218959118;
  v6[536862736] = -218959360;
  v6[536862737] = 62194;
  v6[536862738] = -234881024;
  v6[536862739] = -218959118;
  v6[536862741] = -219021312;
  v6[536862742] = 62194;
  v6[536862746] = -202116109;
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v4 + 96));
  retcode = 0;
  Json::Value::Value(v4 + 480, 0LL);
  *(_DWORD *)(v4 + 48) = 0;
  is_use_html = 0;
  ServiceBox::findService<MuipserverService>();
  MuipserverService::getConfig((MuipserverService *const)(v4 + 128));
  if ( std::operator!=<char>(&request->uri, off_1A6727A0) )
  {
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/request_handler.cpp",
      "processRequest",
      64);
    v7 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v48, (const char (*)[17])"Not support uri:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &request->uri);
    common::milog::MiLogStream::~MiLogStream(&v48);
    retcode = 1001;
  }
  else
  {
    std::string::basic_string(v4 + 352);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v48, off_1A6728C0, &__a);
    getRequestParam<std::string>(request, (const std::string *)&v48, (std::string *)(v4 + 352));
    std::string::~string(&v48);
    std::allocator<char>::~allocator(&__a);
    if ( common::tools::StringUtils::strToNum<unsigned int>(
           (const std::string *)(v4 + 352),
           (unsigned int *)(v4 + 48),
           1) )
    {
      v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
      if ( (unsigned __int8)std::string::empty(&v8->api_sign_key) )
      {
        *(std::unordered_map<std::string,unsigned int>::iterator *)(v4 + 64) = std::unordered_map<std::string,unsigned int>::find(
                                                                                 &RequestHandler::request_cmd_map_[abi:cxx11],
                                                                                 (const std::unordered_map<std::string,unsigned int>::key_type *)(v4 + 352));
        __y._M_cur = std::unordered_map<std::string,unsigned int>::end(&RequestHandler::request_cmd_map_[abi:cxx11])._M_cur;
        if ( std::__detail::operator!=<std::pair<std::string const,unsigned int>,true>(
               (const std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> *)(v4 + 64),
               &__y) )
        {
          v9 = std::__detail::_Node_iterator<std::pair<std::string const,unsigned int>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,unsigned int>,false,true> *const)(v4 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) <= 3 )
          {
            v9 = (std::__detail::_Node_iterator<std::pair<const std::string,unsigned int>,false,true>::pointer)__asan_report_load4(&v9->second);
          }
          *(_DWORD *)(v4 + 48) = v9->second;
          is_use_html = 1;
        }
      }
    }
    if ( *(_DWORD *)(v4 + 48) )
    {
      v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
      if ( (unsigned __int8)std::string::empty(&v10->api_sign_key) != 1 && RequestHandler::verifySign(this, request) )
      {
        retcode = 1003;
      }
      else
      {
        std::string::basic_string(v4 + 416);
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v48, "region", &__a);
        getRequestParam<std::string>(request, (const std::string *)&v48, (std::string *)(v4 + 416));
        std::string::~string(&v48);
        std::allocator<char>::~allocator(&__a);
        if ( (unsigned __int8)std::string::empty(v4 + 416) != 1
          && (v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128)),
              v13 = ConfigBase::getRegionName[abi:cxx11](v12),
              std::operator!=<char>((const std::string *)(v4 + 416), v13)) )
        {
          retcode = 1010;
        }
        else
        {
          *(std::unordered_map<unsigned int,int (RequestHandler::*)(const common::minet::http_client::HttpRequest&,Json::Value&,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >),std::hash<unsigned int>,std::equal_to<unsigned int>,std::allocator<std::pair<unsigned int const,int (RequestHandler::*)(const common::minet::http_client::HttpRequest&,Json::Value&,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >)> > >::iterator *)(v4 + 64) = std::unordered_map<unsigned int,int (RequestHandler::*)(common::minet::http_client::HttpRequest const&,Json::Value &,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>),std::hash<unsigned int>,std::equal_to<unsigned int>,std::allocator<std::pair<unsigned int const,int (RequestHandler::*)(common::minet::http_client::HttpRequest const&,Json::Value &,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)>>>::find(&RequestHandler::request_handler_map_, (const std::unordered_map<unsigned int,int (RequestHandler::*)(const common::minet::http_client::HttpRequest&,Json::Value&,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >),std::hash<unsigned int>,std::equal_to<unsigned int>,std::allocator<std::pair<unsigned int const,int (RequestHandler::*)(const common::minet::http_client::HttpRequest&,Json::Value&,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >)> > >::key_type *)(v4 + 48));
          __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true>::__node_type *)std::unordered_map<unsigned int,int (RequestHandler::*)(common::minet::http_client::HttpRequest const&,Json::Value &,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>),std::hash<unsigned int>,std::equal_to<unsigned int>,std::allocator<std::pair<unsigned int const,int (RequestHandler::*)(common::minet::http_client::HttpRequest const&,Json::Value &,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)>>>::end(&RequestHandler::request_handler_map_)._M_cur;
          if ( std::__detail::operator==<std::pair<unsigned int const,int (RequestHandler::*)(common::minet::http_client::HttpRequest const&,Json::Value &,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)>,false>(
                 (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,int (RequestHandler::*)(const common::minet::http_client::HttpRequest&,Json::Value&,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >)>,false> *)(v4 + 64),
                 (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,int (RequestHandler::*)(const common::minet::http_client::HttpRequest&,Json::Value&,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >)>,false> *)&__y) )
          {
            retcode = 1001;
          }
          else
          {
            func = &std::__detail::_Node_iterator<std::pair<unsigned int const,int (RequestHandler::*)(common::minet::http_client::HttpRequest const&,Json::Value &,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,int (RequestHandler::*)(const common::minet::http_client::HttpRequest&,Json::Value&,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >)>,false,false> *const)(v4 + 64))->second;
            __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true>::__node_type *)this;
            retcode = std::invoke<int (RequestHandler::*&)(common::minet::http_client::HttpRequest const&,Json::Value &,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>),RequestHandler*,common::minet::http_client::HttpRequest const&,Json::Value &,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>&>(
                        func,
                        (RequestHandler **)&__y,
                        request,
                        (Json::Value *)(v4 + 480),
                        p_yield,
                        v15,
                        (const common::minet::http_client::HttpRequest *)p_yield,
                        (Json::Value *)responsea,
                        (boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *)request);
          }
        }
        std::string::~string((void *)(v4 + 416));
      }
    }
    else
    {
      retcode = 1002;
    }
    std::string::~string((void *)(v4 + 352));
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 128));
  Json::Value::Value(v4 + 560, 0LL);
  Json::Value::Value((Json::Value *)&other, retcode);
  v16 = Json::Value::operator[]((Json::Value_0 *const)(v4 + 560), "retcode");
  Json::Value::operator=(v16, &other);
  Json::Value::~Value(&other);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)(v4 + 160), "unknown", &__a);
  std::allocator<char>::~allocator(&__a);
  __x = retcode;
  *(std::unordered_map<unsigned int,std::string>::iterator *)(v4 + 64) = std::unordered_map<unsigned int,std::string>::find(
                                                                           &RequestHandler::retcode_map_[abi:cxx11],
                                                                           &__x);
  __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true>::__node_type *)std::unordered_map<unsigned int,std::string>::end(&RequestHandler::retcode_map_[abi:cxx11])._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::string>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::string >,false> *)(v4 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::string >,false> *)&__y) )
  {
    v17 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::string>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::string >,false,false> *const)(v4 + 64));
    std::string::operator=(v4 + 160, &v17->second);
  }
  else if ( proto::Retcode_IsValid(retcode) )
  {
    retcode_name = ProtoUtils::getRetcodeName[abi:cxx11](retcode);
    if ( (unsigned __int8)std::string::empty(retcode_name) != 1 )
      std::string::operator=(v4 + 160, retcode_name);
  }
  Json::Value::Value(&other, v4 + 160);
  v18 = Json::Value::operator[]((Json::Value_0 *const)(v4 + 560), off_1A662A20);
  Json::Value::operator=(v18, &other);
  Json::Value::~Value(&other);
  v19 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v4 + 560), "data");
  Json::Value::operator=(v19);
  std::string::basic_string(v4 + 224);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)&v48, "ticket", &__a);
  getRequestParam<std::string>(requesta, (const std::string *)&v48, (std::string *)(v4 + 224));
  std::string::~string(&v48);
  std::allocator<char>::~allocator(&__a);
  Json::Value::Value(&other, v4 + 224);
  v20 = Json::Value::operator[]((Json::Value_0 *const)(v4 + 560), "ticket");
  Json::Value::operator=(v20, &other);
  Json::Value::~Value(&other);
  std::string::basic_string(v4 + 288);
  if ( is_use_html )
  {
    Json::StyledWriter::StyledWriter((Json::StyledWriter *const)(v4 + 720));
    Json::StyledWriter::write[abi:cxx11](
      (Json::String *)(v4 + 352),
      (Json::StyledWriter *const)(v4 + 720),
      (const Json::Value *)(v4 + 560));
    std::string::operator=(v4 + 288, v4 + 352);
    std::string::~string((void *)(v4 + 352));
    boost::algorithm::replace_all<std::string,char [2],char [6]>(
      (std::string *)(v4 + 288),
      (const char (*)[2])"\n",
      (const char (*)[6])"<br/>");
    boost::algorithm::replace_all<std::string,char [3],char [6]>(
      (std::string *)(v4 + 288),
      (const char (*)[3])"\\n",
      (const char (*)[6])"<br/>");
    boost::algorithm::replace_all<std::string,char [2],char [13]>(
      (std::string *)(v4 + 288),
      (const char (*)[2])" ",
      (const char (*)[13])"&nbsp;&nbsp;");
    boost::algorithm::replace_all<std::string,char [2],char [25]>(
      (std::string *)(v4 + 288),
      (const char (*)[2])"\t",
      (const char (*)[25])"&nbsp;&nbsp;&nbsp;&nbsp;");
    v21 = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v4 + 96));
    common::tools::StringUtils::numToStr<int>(&__rhs, v21 / 1000);
    std::operator+<char>(&__lhs, aHtmlHeadTitle, &__rhs);
    std::operator+<char>((std::string *)(v4 + 352), &__lhs, "ms)</title></head><body>");
    std::operator+<char>((std::string *)&v48, (std::string *)(v4 + 352), (const std::string *)(v4 + 288));
    std::operator+<char>((std::string *)(v4 + 416), (std::string *)&v48, "</body></html>");
    std::string::operator=(v4 + 288, v4 + 416);
    std::string::~string((void *)(v4 + 416));
    std::string::~string(&v48);
    std::string::~string((void *)(v4 + 352));
    std::string::~string(&__lhs);
    std::string::~string(&__rhs);
    Json::StyledWriter::~StyledWriter((Json::StyledWriter *const)(v4 + 720));
  }
  else
  {
    Json::FastWriter::FastWriter((Json::FastWriter *const)(v4 + 640));
    Json::FastWriter::write[abi:cxx11](
      (Json::String *)&v48,
      (Json::FastWriter *const)(v4 + 640),
      (const Json::Value *)(v4 + 560));
    std::string::operator=(v4 + 288, &v48);
    std::string::~string(&v48);
    Json::FastWriter::~FastWriter((Json::FastWriter *const)(v4 + 640));
  }
  if ( is_use_html )
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v48, "Content-Type", &__a);
    v22 = std::map<std::string,std::string>::operator[](
            &responsea->head_map,
            (std::map<std::string,std::string>::key_type *)&v48);
    v23 = "text/html;charset=UTF-8";
    std::string::operator=(v22, "text/html;charset=UTF-8");
  }
  else
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v48, "Content-Type", &__a);
    v24 = std::map<std::string,std::string>::operator[](
            &responsea->head_map,
            (std::map<std::string,std::string>::key_type *)&v48);
    v23 = "application/json";
    std::string::operator=(v24, "application/json");
  }
  std::string::~string(&v48);
  std::allocator<char>::~allocator(&__a);
  if ( *(_BYTE *)(((unsigned __int64)responsea >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)responsea >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(responsea, v23);
  }
  responsea->status = 200;
  v25 = (char *)(v4 + 288);
  std::string::operator=(&responsea->body, v4 + 288);
  if ( *(_DWORD *)(v4 + 48) )
  {
    v26 = (unsigned int)common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v4 + 96));
    v27 = (const char *)std::string::c_str(&requesta->uri);
    common::milog::MiLog::writeLog(
      &common::milog::MiLogDefault::default_log_obj_,
      0xBu,
      "|%s|%u|%u|%s|%d|%s|%u",
      "muip",
      0LL,
      *(unsigned int *)(v4 + 48),
      v27,
      (unsigned int)retcode,
      "ret_str",
      v26);
    LODWORD(v26) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v4 + 96));
    std::allocator<char>::allocator(&__a);
    v28 = (const char *)std::string::c_str(&requesta->uri);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v48, v28, &__a);
    std::allocator<char>::allocator(&v35);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v4 + 416), "muip", &v35);
    CmdReport::addCmdRecord(0, (const std::string *)(v4 + 416), (const std::string *)&v48, v26, 1u);
    std::string::~string((void *)(v4 + 416));
    std::allocator<char>::~allocator(&v35);
    std::string::~string(&v48);
    std::allocator<char>::~allocator(&__a);
    v29 = ServiceBox::findService<MuipserverService>();
    v25 = (char *)*(unsigned int *)(v4 + 48);
    MuipserverService::addRequestReport(v29, (uint32_t)v25);
  }
  p_total_request_per_time = &ServiceBox::findService<MuipserverService>()->total_request_per_time;
  v40 = 1;
  v41 = 5;
  v30 = p_total_request_per_time;
  v31 = *(_BYTE *)(((unsigned __int64)p_total_request_per_time >> 3) + 0x7FFF8000);
  if ( v31 != 0 && (char)(((unsigned __int8)p_total_request_per_time & 7) + 3) >= v31 )
  {
    LOBYTE(v25) = v31 != 0;
    __asan_report_store4(p_total_request_per_time, v25);
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)v30, v40);
  std::string::~string((void *)(v4 + 288));
  std::string::~string((void *)(v4 + 224));
  std::string::~string((void *)(v4 + 160));
  Json::Value::~Value((Json::Value_0 *const)(v4 + 560));
  Json::Value::~Value((Json::Value_0 *const)(v4 + 480));
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v4 + 96));
  if ( v50 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8054) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8068) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8068) = -168430091;
  }
};

// Line 177: range 000000000CBEEC70-000000000CBEF202
int32_t __cdecl RequestHandler::fillPlayerDataToJson(
        RequestHandler *const this,
        const TablePlayerData *row,
        Json::Value *jval)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // rbx
  Json::Value_0 *v6; // rax
  Json::Value_0 *v7; // rax
  Json::Value_0 *v8; // rax
  int32_t v9; // r14d
  Json::Value_0 *v10; // rax
  int32_t result; // eax
  std::string output; // [rsp+20h] [rbp-380h] BYREF
  Json::Value_0 other; // [rsp+40h] [rbp-360h] BYREF
  char v15[816]; // [rsp+70h] [rbp-330h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(768LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 32 12 bin_data:181 112 520 19 player_data_bin:187";
  *(_QWORD *)(v3 + 16) = RequestHandler::fillPlayerDataToJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -219021312;
  v5[536862723] = 62194;
  v5[536862739] = -218103808;
  v5[536862740] = -202116109;
  v5[536862741] = -202116109;
  v5[536862742] = -202116109;
  v5[536862743] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(row);
  }
  Json::Value::Value((Json::Value *)&other, row->uid);
  v6 = Json::Value::operator[]((Json::Value_0 *const)jval, off_1A660020);
  Json::Value::operator=(v6, &other);
  Json::Value::~Value(&other);
  Json::Value::Value(&other, &row->nickname);
  v7 = Json::Value::operator[]((Json::Value_0 *const)jval, "nickname");
  Json::Value::operator=(v7, &other);
  Json::Value::~Value(&other);
  if ( *(_BYTE *)(((unsigned __int64)&row->data_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&row->data_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&row->data_version);
  }
  Json::Value::Value((Json::Value *)&other, row->data_version);
  v8 = Json::Value::operator[]((Json::Value_0 *const)jval, "data_version");
  Json::Value::operator=(v8, &other);
  Json::Value::~Value(&other);
  std::string::basic_string(v3 + 48);
  mysqlpp::String::to_string(&row->bin_data, (std::string *)(v3 + 48));
  if ( common::tools::ZlibUtil::isCompressWithPad((const std::string *)(v3 + 48)) )
  {
    common::tools::ZlibUtil::uncompressWithPad(&output, (const std::string *)(v3 + 48));
    std::string::operator=(v3 + 48, &output);
    std::string::~string(&output);
  }
  proto::PlayerDataBin::PlayerDataBin((proto::PlayerDataBin *const)(v3 + 112));
  if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v3 + 112, v3 + 48) != 1 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&output,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/request_handler.cpp",
      "fillPlayerDataToJson",
      190);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      (common::milog::MiLogStream *const)&output,
      (const char (*)[38])"player_data_bin ParseFromString fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&output);
    v9 = -1;
  }
  else
  {
    google::protobuf::Message::DebugString[abi:cxx11](&output, (google::protobuf::Message *)(v3 + 112));
    Json::Value::Value(&other, &output);
    v10 = Json::Value::operator[]((Json::Value_0 *const)jval, off_1A672D20);
    Json::Value::operator=(v10, &other);
    Json::Value::~Value(&other);
    std::string::~string(&output);
    v9 = 0;
  }
  proto::PlayerDataBin::~PlayerDataBin((proto::PlayerDataBin *const)(v3 + 112));
  std::string::~string((void *)(v3 + 48));
  result = v9;
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8054) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF805C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 198: range 000000000CBEF203-000000000CBEF660
std::string *__cdecl getSignStr(std::string *retstr, const common::minet::http_client::HttpRequest *request)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::map<std::string,std::string>::const_iterator __for_begin; // [rsp+10h] [rbp-1B0h] BYREF
  std::map<std::string,std::string>::const_iterator __for_end; // [rsp+18h] [rbp-1A8h] BYREF
  const std::map<std::string,std::string> *__for_range; // [rsp+20h] [rbp-1A0h]
  const std::pair<const std::string,std::string > *v11; // [rsp+28h] [rbp-198h]
  std::tuple_element<0,const std::pair<const std::string,std::string > >::type *key; // [rsp+30h] [rbp-190h]
  std::tuple_element<1,const std::pair<const std::string,std::string > >::type *value; // [rsp+38h] [rbp-188h]
  std::string __lhs; // [rsp+40h] [rbp-180h] BYREF
  std::string v15; // [rsp+60h] [rbp-160h] BYREF
  char v16[320]; // [rsp+80h] [rbp-140h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 16 14 config_ptr:212 80 32 16 sign_content:199 144 112 10 sha256:214";
  *(_QWORD *)(v2 + 16) = getSignStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = -219021312;
  v4[536862724] = 62194;
  v4[536862728] = -202116109;
  std::string::basic_string(v2 + 80);
  __for_range = &request->param_map;
  __for_begin._M_node = std::map<std::string,std::string>::begin(&request->param_map)._M_node;
  __for_end._M_node = std::map<std::string,std::string>::end(&request->param_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>::operator*(&__for_begin);
    key = std::get<0ul,std::string const,std::string>(v11);
    value = (std::tuple_element<1,const std::pair<const std::string,std::string > >::type *)std::get<1ul,std::string const,std::string>(v11);
    if ( !(unsigned __int8)std::string::empty(value) && !std::operator==<char>(key, "sign") )
    {
      if ( (unsigned __int8)std::string::empty(v2 + 80) != 1 )
        std::string::operator+=(v2 + 80, "&");
      std::operator+<char>(&__lhs, key, "=");
      std::operator+<char>(&v15, &__lhs, value);
      std::string::operator+=(v2 + 80, &v15);
      std::string::~string(&v15);
      std::string::~string(&__lhs);
    }
    std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>::operator++(&__for_begin);
  }
  ServiceBox::findService<MuipserverService>();
  MuipserverService::getConfig((MuipserverService *const)(v2 + 48));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
  std::string::operator+=(v2 + 80, &v6->api_sign_key);
  ext::hash::SHA256::SHA256((ext::hash::SHA256 *const)(v2 + 144));
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  ext::hash::SHA256::operator()(retstr, (ext::hash::SHA256 *const)(v2 + 144), (const std::string *)(v2 + 80));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 48));
  std::string::~string((void *)(v2 + 80));
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return retstr;
};

// Line 221: range 000000000CBEF662-000000000CBEF88B
int32_t __cdecl RequestHandler::verifySign(
        RequestHandler *const this,
        const common::minet::http_client::HttpRequest *request)
{
  std::string *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-F1h] BYREF
  std::string key; // [rsp+20h] [rbp-F0h] BYREF
  char v9[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (std::string *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = (std::string *)v3;
  }
  v2->_M_dataplus._M_p = (std::string::pointer)1102416563;
  v2->_M_string_length = (std::string::size_type)"2 32 32 15 expect_sign:222 96 32 8 sign:223";
  v2->_anon_0._M_allocated_capacity = (std::string::size_type)RequestHandler::verifySign;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  getSignStr(v2 + 1, request);
  std::string::basic_string(&v2[3]);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&key, "sign", &__a);
  getRequestParam<std::string>(request, &key, v2 + 3);
  std::string::~string(&key);
  std::allocator<char>::~allocator(&__a);
  if ( std::operator!=<char>(v2 + 1, v2 + 3) )
    v5 = -1;
  else
    v5 = 0;
  std::string::~string(&v2[3]);
  std::string::~string(&v2[1]);
  result = v5;
  if ( v9 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    v2->_M_dataplus._M_p = (std::string::pointer)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 234: range 000000000CBEF88C-000000000CBEFA98
bool __cdecl RequestHandler::isEnableWhiteAccountUid(RequestHandler *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  Config *v4; // rax
  bool v5; // r14
  const google::protobuf::Timestamp *v6; // rax
  const google::protobuf::Timestamp *v7; // rax
  bool result; // al
  uint32_t now; // [rsp+1Ch] [rbp-A4h]
  const data::DbRegionConfig *region_config_ptr; // [rsp+20h] [rbp-A0h]
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-90h] BYREF
  char v12[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 config_ptr:236";
  *(_QWORD *)(v1 + 16) = RequestHandler::isEnableWhiteAccountUid;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  ServiceBox::findService<MuipserverService>();
  MuipserverService::getConfig((MuipserverService *const)(v1 + 32));
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  region_config_ptr = Config::findCurDbRegionConfig(v4);
  if ( region_config_ptr )
  {
    now = common::tools::TimeUtils::getNow();
    v6 = proto::StopRegisterConfig::begin_time(&region_config_ptr->stop_register_config);
    v5 = 0;
    if ( google::protobuf::Timestamp::seconds(v6) <= now )
    {
      v7 = proto::StopRegisterConfig::end_time(&region_config_ptr->stop_register_config);
      if ( now <= google::protobuf::Timestamp::seconds(v7) )
        v5 = 1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/request_handler.cpp",
      "isEnableWhiteAccountUid",
      240);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v11,
      (const char (*)[29])"findCurDbRegionConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v11);
    v5 = 0;
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 32));
  result = v5;
  if ( v12 == (char *)v1 )
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

// Line 251: range 000000000CBEFA9A-000000000CBEFCC3
__int64 __fastcall RequestHandler::isUidExist(const RequestHandler *const this, uint32_t uid)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  __int64 result; // rax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-130h] BYREF
  char v9[272]; // [rsp+30h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 1 12 is_exist:252 48 4 7 uid:250 64 120 18 player_uid_row:253";
  *(_QWORD *)(v2 + 16) = RequestHandler::isUidExist;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  *(_DWORD *)(v2 + 48) = uid;
  *(_BYTE *)(v2 + 32) = 0;
  TablePlayerUid::TablePlayerUid((TablePlayerUid *const)(v2 + 64));
  if ( MysqlOpPlayerData::selectPlayerUidByUid(*(_DWORD *)(v2 + 48), (TablePlayerUid *)(v2 + 64), (bool *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/request_handler.cpp",
      "isUidExist",
      256);
    v5 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v8,
           (const char (*)[34])"selectPlayerUidByUid fails, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v8);
    v6 = 0;
  }
  else
  {
    v6 = *(unsigned __int8 *)(v2 + 32);
  }
  TablePlayerUid::~TablePlayerUid((TablePlayerUid *const)(v2 + 64));
  result = v6;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 264: range 000000000CBEFCC4-000000000CBF022E
int32_t __cdecl RequestHandler::processRequestOnOtherServer(
        RequestHandler *const this,
        RequestHandler::MakeReqFunc *p_make_req,
        RequestHandler::MakeRspFunc *p_make_rsp,
        const common::minet::http_client::HttpRequest *http_request,
        Json::Value *jval,
        boost::asio::yield_context *p_yield)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r14
  int v9; // r13d
  common::minet::Packet *v10; // rdx
  MuipserverService *v11; // r13
  unsigned __int64 v12; // rdx
  common::minet::Packet *v13; // rax
  MuipserverService *v14; // rax
  boost::asio::io_context *async_rsp_mgr; // r13
  uint32_t IoContext; // eax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // r13
  unsigned __int64 v19; // rax
  __int64 (__fastcall *v20)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, unsigned __int64); // r15
  AsyncRsp *v21; // r13
  common::minet::Packet *v22; // rcx
  int32_t result; // eax
  uint32_t session_id; // [rsp+40h] [rbp-110h]
  int ret; // [rsp+44h] [rbp-10Ch]
  int reta; // [rsp+44h] [rbp-10Ch]
  int retb; // [rsp+44h] [rbp-10Ch]
  HttpSession *session; // [rsp+48h] [rbp-108h]
  common::milog::MiLogStream v33; // [rsp+50h] [rbp-100h] BYREF
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > v34; // [rsp+70h] [rbp-E0h] BYREF
  char v35[176]; // [rsp+A0h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 32 16 14 packet_ptr:269 64 16 11 rsp_ptr:284 96 16 18 rsp_packet_ptr:297";
  *(_QWORD *)(v6 + 16) = RequestHandler::processRequestOnOtherServer;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -219021312;
  v8[536862722] = -219021312;
  v8[536862723] = -202178560;
  session = RequestHandler::getSession(this);
  session_id = common::minet::AServerSession::getSessionId(session);
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v6 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/request_handler.cpp",
      "processRequestOnOtherServer",
      272);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v33, (const char (*)[19])"createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v33);
    v9 = -1;
  }
  else
  {
    v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
    ret = std::function<int ()(common::minet::http_client::HttpRequest const&,common::minet::Packet &)>::operator()(
            p_make_req,
            http_request,
            v10);
    if ( ret )
    {
      v9 = ret;
    }
    else
    {
      v11 = ServiceBox::findService<MuipserverService>();
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        (std::shared_ptr<common::minet::Packet> *const)(v6 + 96),
        (const std::shared_ptr<common::minet::Packet> *)(v6 + 32));
      ServiceBase::setPacketSource(v11, (common::minet::PacketPtr)__PAIR128__(v12, v6 + 96));
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v6 + 96));
      v13 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
      common::minet::Packet::setExt(v13, 0, session_id);
      v14 = ServiceBox::findService<MuipserverService>();
      if ( *(_BYTE *)(((unsigned __int64)&v14->async_rsp_mgr >> 3) + 0x7FFF8000) )
        v14 = (MuipserverService *)__asan_report_load8(&v14->async_rsp_mgr);
      async_rsp_mgr = (boost::asio::io_context *)v14->async_rsp_mgr;
      IoContext = (unsigned int)common::minet::AServerSession::getIoContext(session);
      AsyncRspMgr::getAsyncRsp((AsyncRspMgr *const)(v6 + 64), async_rsp_mgr, IoContext);
      if ( std::operator==<AsyncRsp>((const std::shared_ptr<AsyncRsp> *)(v6 + 64), 0LL) )
      {
        v9 = 2;
      }
      else
      {
        v17 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
        v18 = v17;
        if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v17);
        v19 = (unsigned __int64)(v18->_vptr_NetworkMgrBase + 8);
        if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
          v19 = __asan_report_load8(v18->_vptr_NetworkMgrBase + 8);
        v20 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, unsigned __int64))v19;
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          (std::shared_ptr<common::minet::Packet> *const)(v6 + 96),
          (const std::shared_ptr<common::minet::Packet> *)(v6 + 32));
        reta = v20(v18, v6 + 96);
        std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v6 + 96));
        if ( reta )
        {
          v9 = reta;
        }
        else
        {
          *(_QWORD *)(v6 + 96) = 0LL;
          *(_QWORD *)(v6 + 104) = 0LL;
          v21 = std::__shared_ptr_access<AsyncRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AsyncRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
          boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
            &v34,
            p_yield);
          retb = AsyncRsp::waitRsp(v21, (common::minet::PacketPtr *)(v6 + 96), &v34);
          boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v34);
          if ( retb )
          {
            v9 = retb;
          }
          else if ( std::operator==<common::minet::Packet>(
                      0LL,
                      (const std::shared_ptr<common::minet::Packet> *)(v6 + 96)) )
          {
            common::milog::MiLogStream::create(
              &v33,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/request_handler.cpp",
              "processRequestOnOtherServer",
              306);
            common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v33, (const char (*)[14])"waitRsp fails");
            common::milog::MiLogStream::~MiLogStream(&v33);
            v9 = -1;
          }
          else
          {
            v22 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 96));
            v9 = std::function<int ()(common::minet::Packet &,Json::Value &)>::operator()(p_make_rsp, v22, jval);
          }
          std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v6 + 96));
        }
      }
      std::shared_ptr<AsyncRsp>::~shared_ptr((std::shared_ptr<AsyncRsp> *const)(v6 + 64));
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v6 + 32));
  result = v9;
  if ( v35 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 316: range 000000000CBF0230-000000000CBF069C
int32_t __cdecl RequestHandler::onSendOfflineMsgRsp(common::minet::Packet *rsp_packet, Json::Value *jval)
{
  proto::SendOfflineMsgRsp *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  unsigned int UserId; // eax
  Json::Value_0 *v7; // rax
  const std::string *v8; // rax
  Json::Value_0 *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  Json::Value_0 *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  Json::Value_0 *v16; // rax
  int32_t result; // eax
  int val; // [rsp+14h] [rbp-ECh] BYREF
  int32_t ret; // [rsp+18h] [rbp-E8h]
  int32_t retcode; // [rsp+1Ch] [rbp-E4h]
  common::milog::MiLogStream v21; // [rsp+20h] [rbp-E0h] BYREF
  Json::Value_0 other; // [rsp+40h] [rbp-C0h] BYREF
  char v23[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (proto::SendOfflineMsgRsp *)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (proto::SendOfflineMsgRsp *)v3;
  }
  v2->_vptr_MessageLite = (int (**)(...))1102416563;
  v2->_internal_metadata_.ptr_ = "1 32 32 7 rsp:317";
  v2->ticket_.ptr_ = (std::string *)RequestHandler::onSendOfflineMsgRsp;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  proto::SendOfflineMsgRsp::SendOfflineMsgRsp(v2 + 1);
  ret = common::minet::Packet::getProto<proto::SendOfflineMsgRsp>(rsp_packet, v2 + 1);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/request_handler.cpp",
      "onSendOfflineMsgRsp",
      321);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v21,
      (const char (*)[26])"rsp_packet.getProto fails");
    common::milog::MiLogStream::~MiLogStream(&v21);
    v5 = ret;
    goto LABEL_25;
  }
  UserId = common::minet::Packet::getUserId(rsp_packet);
  Json::Value::Value((Json::Value *)&other, UserId);
  v7 = Json::Value::operator[]((Json::Value_0 *const)jval, off_1A660020);
  Json::Value::operator=(v7, &other);
  Json::Value::~Value(&other);
  v8 = proto::SendOfflineMsgRsp::ticket[abi:cxx11](v2 + 1);
  Json::Value::Value(&other, v8);
  v9 = Json::Value::operator[]((Json::Value_0 *const)jval, "ticket");
  Json::Value::operator=(v9, &other);
  Json::Value::~Value(&other);
  retcode = proto::SendOfflineMsgRsp::retcode(v2 + 1);
  common::milog::MiLogStream::create(
    &v21,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/handler/request_handler.cpp",
    "onSendOfflineMsgRsp",
    328);
  v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
          &v21,
          (const char (*)[28])"SendOfflineMsgRsp retcode: ");
  val = proto::SendOfflineMsgRsp::retcode(v2 + 1);
  v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, &val);
  v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])" ticket: ");
  v13 = Json::Value::operator[]((Json::Value_0 *const)jval, "ticket");
  v14 = common::milog::MiLogStream::operator<<<Json::Value,(Json::Value*)0>(v12, (const Json::Value *)v13);
  v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])" uid: ");
  v16 = Json::Value::operator[]((Json::Value_0 *const)jval, off_1A660020);
  common::milog::MiLogStream::operator<<<Json::Value,(Json::Value*)0>(v15, (const Json::Value *)v16);
  common::milog::MiLogStream::~MiLogStream(&v21);
  if ( retcode == 1309 )
  {
    v5 = 2013;
    goto LABEL_25;
  }
  if ( retcode <= 1309 )
  {
    if ( retcode == 638 )
    {
      v5 = 2016;
      goto LABEL_25;
    }
    if ( retcode <= 638 )
    {
      if ( retcode == 601 )
        goto LABEL_21;
      if ( retcode <= 601 )
      {
        if ( retcode == 531 )
        {
          v5 = 2026;
          goto LABEL_25;
        }
        if ( retcode <= 531 )
        {
          if ( retcode == 513 )
            goto LABEL_21;
          if ( retcode <= 513 )
          {
            if ( !retcode )
            {
              v5 = 0;
              goto LABEL_25;
            }
            if ( retcode == 401 )
            {
LABEL_21:
              v5 = 2009;
              goto LABEL_25;
            }
          }
        }
      }
    }
  }
  v5 = 1;
LABEL_25:
  proto::SendOfflineMsgRsp::~SendOfflineMsgRsp(v2 + 1);
  result = v5;
  if ( v23 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_vptr_MessageLite = (int (**)(...))1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 352: range 000000000CBF069E-000000000CBF0A6A
int32_t __cdecl RequestHandler::onSendHomeOfflineMsgRsp(common::minet::Packet *rsp_packet, Json::Value *jval)
{
  proto::SendHomeOfflineMsgRsp *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  unsigned int HomeUserId; // eax
  Json::Value_0 *v7; // rax
  const std::string *v8; // rax
  Json::Value_0 *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  Json::Value_0 *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  Json::Value_0 *v16; // rax
  int32_t result; // eax
  int val; // [rsp+14h] [rbp-ECh] BYREF
  int32_t ret; // [rsp+18h] [rbp-E8h]
  int32_t retcode; // [rsp+1Ch] [rbp-E4h]
  common::milog::MiLogStream v21; // [rsp+20h] [rbp-E0h] BYREF
  Json::Value_0 other; // [rsp+40h] [rbp-C0h] BYREF
  char v23[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (proto::SendHomeOfflineMsgRsp *)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (proto::SendHomeOfflineMsgRsp *)v3;
  }
  v2->_vptr_MessageLite = (int (**)(...))1102416563;
  v2->_internal_metadata_.ptr_ = "1 32 32 7 rsp:353";
  v2->ticket_.ptr_ = (std::string *)RequestHandler::onSendHomeOfflineMsgRsp;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  proto::SendHomeOfflineMsgRsp::SendHomeOfflineMsgRsp(v2 + 1);
  ret = common::minet::Packet::getProto<proto::SendHomeOfflineMsgRsp>(rsp_packet, v2 + 1);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/request_handler.cpp",
      "onSendHomeOfflineMsgRsp",
      357);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v21,
      (const char (*)[26])"rsp_packet.getProto fails");
    common::milog::MiLogStream::~MiLogStream(&v21);
    v5 = ret;
  }
  else
  {
    HomeUserId = common::minet::Packet::getHomeUserId(rsp_packet);
    Json::Value::Value((Json::Value *)&other, HomeUserId);
    v7 = Json::Value::operator[]((Json::Value_0 *const)jval, "home_uid");
    Json::Value::operator=(v7, &other);
    Json::Value::~Value(&other);
    v8 = proto::SendHomeOfflineMsgRsp::ticket[abi:cxx11](v2 + 1);
    Json::Value::Value(&other, v8);
    v9 = Json::Value::operator[]((Json::Value_0 *const)jval, "ticket");
    Json::Value::operator=(v9, &other);
    Json::Value::~Value(&other);
    retcode = proto::SendHomeOfflineMsgRsp::retcode(v2 + 1);
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/handler/request_handler.cpp",
      "onSendHomeOfflineMsgRsp",
      364);
    v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            &v21,
            (const char (*)[32])"SendHomeOfflineMsgRsp retcode: ");
    val = proto::SendHomeOfflineMsgRsp::retcode(v2 + 1);
    v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, &val);
    v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])" ticket: ");
    v13 = Json::Value::operator[]((Json::Value_0 *const)jval, "ticket");
    v14 = common::milog::MiLogStream::operator<<<Json::Value,(Json::Value*)0>(v12, (const Json::Value *)v13);
    v15 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])" home_uid: ");
    v16 = Json::Value::operator[]((Json::Value_0 *const)jval, "home_uid");
    common::milog::MiLogStream::operator<<<Json::Value,(Json::Value*)0>(v15, (const Json::Value *)v16);
    common::milog::MiLogStream::~MiLogStream(&v21);
    if ( retcode )
    {
      if ( retcode == 1309 )
        v5 = 2013;
      else
        v5 = 1;
    }
    else
    {
      v5 = 0;
    }
  }
  proto::SendHomeOfflineMsgRsp::~SendHomeOfflineMsgRsp(v2 + 1);
  result = v5;
  if ( v23 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_vptr_MessageLite = (int (**)(...))1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 381: range 000000000CBF124E-000000000CBF14A5
int32_t __cdecl RequestHandler::processQueryPlayerMemData(
        RequestHandler *const this,
        uint32_t uid,
        const QueryPlayerMemDataParam *param,
        const common::minet::http_client::HttpRequest *global_request,
        Json::Value *global_jval,
        boost::asio::yield_context *p_yield)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  _DWORD *v8; // r13
  int32_t v9; // r12d
  int32_t result; // eax
  std::function<int(const common::minet::http_client::HttpRequest&,common::minet::Packet&)> p_make_req; // [rsp+30h] [rbp-110h] BYREF
  std::function<int(common::minet::Packet&,Json::Value&)> p_make_rsp; // [rsp+50h] [rbp-F0h] BYREF
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > v17; // [rsp+70h] [rbp-D0h] BYREF
  char v18[160]; // [rsp+A0h] [rbp-A0h] BYREF
  RequestHandler::processQueryPlayerMemData::<lambda(const common::minet::http_client::HttpRequest&, common::minet::Packet&)> v19; // 0:esi.4,8:rdx.8

  v6 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 16 17 make_req_func:382 64 24 17 make_rsp_func:393";
  *(_QWORD *)(v6 + 16) = RequestHandler::processQueryPlayerMemData;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -219021312;
  v8[536862722] = -218103808;
  v8[536862723] = -202116109;
  *(_DWORD *)(v6 + 32) = uid;
  *(_QWORD *)(v6 + 40) = param;
  *(_DWORD *)(v6 + 64) = uid;
  *(_QWORD *)(v6 + 72) = param;
  *(_QWORD *)(v6 + 80) = this;
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
    &v17,
    p_yield);
  std::function<int ()(common::minet::Packet &,Json::Value &)>::function<RequestHandler::processQueryPlayerMemData(unsigned int,QueryPlayerMemDataParam const&,common::minet::http_client::HttpRequest const&,Json::Value &,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)::{lambda(common::minet::Packet &,Json::Value &)#2},void,void>(
    &p_make_rsp,
    *(RequestHandler::processQueryPlayerMemData::<lambda(common::minet::Packet&, Json::Value&)> *)(v6 + 64));
  v19.__param = *(const QueryPlayerMemDataParam **)(v6 + 40);
  v19.__uid = *(_DWORD *)(v6 + 32);
  std::function<int ()(common::minet::http_client::HttpRequest const&,common::minet::Packet &)>::function<RequestHandler::processQueryPlayerMemData(unsigned int,QueryPlayerMemDataParam const&,common::minet::http_client::HttpRequest const&,Json::Value &,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)::{lambda(common::minet::http_client::HttpRequest const&,common::minet::Packet &)#1},void,void>(
    &p_make_req,
    v19);
  v9 = RequestHandler::processRequestOnOtherServer(this, &p_make_req, &p_make_rsp, global_request, global_jval, &v17);
  std::function<int ()(common::minet::http_client::HttpRequest const&,common::minet::Packet &)>::~function(&p_make_req);
  std::function<int ()(common::minet::Packet &,Json::Value &)>::~function(&p_make_rsp);
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v17);
  result = v9;
  if ( v18 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 382: range 000000000CBF0A6C-000000000CBF0CE4
int __cdecl RequestHandler::processQueryPlayerMemData(unsigned int,QueryPlayerMemDataParam const&,common::minet::http_client::HttpRequest const&,Json::Value &,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)::{lambda(common::minet::http_client::HttpRequest const&,common::minet::Packet &)#1}::operator()(
        const RequestHandler::processQueryPlayerMemData::<lambda(const common::minet::http_client::HttpRequest&, common::minet::Packet&)> *const __closure,
        const common::minet::http_client::HttpRequest *request,
        common::minet::Packet *packet)
{
  proto::QueryPlayerMemDataByMuipReq *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 param; // rax
  google::protobuf::RepeatedField<unsigned int> *v7; // rcx
  int result; // eax
  char v10[176]; // [rsp+20h] [rbp-B0h] BYREF

  v3 = (proto::QueryPlayerMemDataByMuipReq *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = (proto::QueryPlayerMemDataByMuipReq *)v4;
  }
  v3->_vptr_MessageLite = (int (**)(...))1102416563;
  v3->_internal_metadata_.ptr_ = "1 48 48 7 req:384";
  *(_QWORD *)&v3->param_list_.current_size_ = RequestHandler::processQueryPlayerMemData(unsigned int,QueryPlayerMemDataParam const&,common::minet::http_client::HttpRequest const&,Json::Value &,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)::{lambda(common::minet::http_client::HttpRequest const&,common::minet::Packet &)#1}::operator();
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -202116109;
  proto::QueryPlayerMemDataByMuipReq::QueryPlayerMemDataByMuipReq(v3 + 1);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__param);
  param = (unsigned __int64)__closure->__param;
  if ( *(_BYTE *)((param >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((param >> 3) + 0x7FFF8000) <= 3 )
    param = __asan_report_load4(__closure->__param);
  proto::QueryPlayerMemDataByMuipReq::set_data_type(v3 + 1, *(_DWORD *)param);
  v7 = proto::QueryPlayerMemDataByMuipReq::mutable_param_list(v3 + 1);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__param);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&__closure->__param->param_vec, v7);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(__closure);
  }
  common::minet::Packet::setUserId(packet, __closure->__uid);
  common::minet::Packet::setTargetService(packet, 3u);
  common::minet::Packet::setProto<proto::QueryPlayerMemDataByMuipReq>(packet, v3 + 1);
  proto::QueryPlayerMemDataByMuipReq::~QueryPlayerMemDataByMuipReq(v3 + 1);
  result = 0;
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    v3->_vptr_MessageLite = (int (**)(...))1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 393: range 000000000CBF0CE6-000000000CBF124D
int32_t __cdecl RequestHandler::processQueryPlayerMemData(unsigned int,QueryPlayerMemDataParam const&,common::minet::http_client::HttpRequest const&,Json::Value &,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)::{lambda(common::minet::Packet &,Json::Value &)#2}::operator()(
        const RequestHandler::processQueryPlayerMemData::<lambda(common::minet::Packet&, Json::Value&)> *const __closure,
        common::minet::Packet *rsp_packet,
        Json::Value *jval)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  RequestHandler *this; // rdi
  const QueryPlayerMemDataParam *param; // rdx
  Json::Value_0 *v9; // rax
  const std::string *v10; // rax
  Json::Value_0 *v11; // rax
  RequestHandler *v12; // rdi
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  int32_t result; // eax
  int32_t retcode; // [rsp+28h] [rbp-108h]
  int retcode_0; // [rsp+2Ch] [rbp-104h]
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-100h] BYREF
  Json::Value_0 other; // [rsp+50h] [rbp-E0h] BYREF
  char v22[176]; // [rsp+80h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 40 7 rsp:395";
  *(_QWORD *)(v3 + 16) = RequestHandler::processQueryPlayerMemData(unsigned int,QueryPlayerMemDataParam const&,common::minet::http_client::HttpRequest const&,Json::Value &,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)::{lambda(common::minet::Packet &,Json::Value &)#2}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  proto::QueryPlayerMemDataByMuipRsp::QueryPlayerMemDataByMuipRsp((proto::QueryPlayerMemDataByMuipRsp *const)(v3 + 48));
  if ( common::minet::Packet::getProto<proto::QueryPlayerMemDataByMuipRsp>(
         rsp_packet,
         (proto::QueryPlayerMemDataByMuipRsp *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/request_handler.cpp",
      "operator()",
      398);
    common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
      &v20,
      (const char (*)[56])"getConstProto<proto::QueryPlayerMemDataByMuipRsp> fails");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v6 = -1;
  }
  else
  {
    if ( proto::QueryPlayerMemDataByMuipRsp::retcode((const proto::QueryPlayerMemDataByMuipRsp *const)(v3 + 48)) != 140 )
      goto LABEL_37;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__this);
    this = __closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__param >> 3) + 0x7FFF8000) )
    {
      this = (RequestHandler *)&__closure->__param;
      __asan_report_load8(&__closure->__param);
    }
    param = __closure->__param;
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
    {
      this = (RequestHandler *)__closure;
      __asan_report_load4(__closure);
    }
    retcode = RequestHandler::getPlayerMemDataFromDb(
                this,
                __closure->__uid,
                param,
                (proto::QueryPlayerMemDataByMuipRsp *)(v3 + 48));
    if ( retcode )
    {
      v6 = retcode;
    }
    else
    {
LABEL_37:
      if ( proto::QueryPlayerMemDataByMuipRsp::retcode((const proto::QueryPlayerMemDataByMuipRsp *const)(v3 + 48)) )
      {
        if ( proto::QueryPlayerMemDataByMuipRsp::retcode((const proto::QueryPlayerMemDataByMuipRsp *const)(v3 + 48)) == 140 )
        {
          v6 = 2015;
        }
        else if ( proto::QueryPlayerMemDataByMuipRsp::retcode((const proto::QueryPlayerMemDataByMuipRsp *const)(v3 + 48)) == 6 )
        {
          v6 = 1012;
        }
        else if ( proto::QueryPlayerMemDataByMuipRsp::retcode((const proto::QueryPlayerMemDataByMuipRsp *const)(v3 + 48)) == 5002 )
        {
          v6 = 2023;
        }
        else
        {
          retcode_0 = proto::QueryPlayerMemDataByMuipRsp::retcode((const proto::QueryPlayerMemDataByMuipRsp *const)(v3 + 48));
          Json::Value::Value((Json::Value *)&other, retcode_0);
          v9 = Json::Value::operator[]((Json::Value_0 *const)jval, "retcode");
          Json::Value::operator=(v9, &other);
          Json::Value::~Value(&other);
          if ( proto::Retcode_IsValid(retcode_0) )
          {
            v10 = proto::Retcode_Name[abi:cxx11]((proto::Retcode)retcode_0);
            Json::Value::Value(&other, v10);
            v11 = Json::Value::operator[]((Json::Value_0 *const)jval, "retcode_message");
            Json::Value::operator=(v11, &other);
            Json::Value::~Value(&other);
          }
          v6 = 1;
        }
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__this);
        v12 = __closure->__this;
        if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
        {
          v12 = (RequestHandler *)__closure;
          __asan_report_load4(__closure);
        }
        if ( RequestHandler::parsePlayerMemData(
               v12,
               __closure->__uid,
               (proto::QueryPlayerMemDataByMuipRsp *)(v3 + 48),
               jval) )
        {
          common::milog::MiLogStream::create(
            &v20,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/request_handler.cpp",
            "operator()",
            428);
          v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v20, (const char (*)[6])"uid: ");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &__closure->__uid);
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v14, (const char (*)[17])" parse rsp fails");
          common::milog::MiLogStream::~MiLogStream(&v20);
          v6 = 1;
        }
        else
        {
          v6 = 0;
        }
      }
    }
  }
  proto::QueryPlayerMemDataByMuipRsp::~QueryPlayerMemDataByMuipRsp((proto::QueryPlayerMemDataByMuipRsp *const)(v3 + 48));
  result = v6;
  if ( v22 == (char *)v3 )
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

// Line 437: range 000000000CBF14A6-000000000CBF23B8
__int64 __fastcall RequestHandler::getPlayerMemDataFromDb(
        RequestHandler *const this,
        uint32_t uid,
        unsigned __int64 param,
        proto::QueryPlayerMemDataByMuipRsp *rsp_0)
{
  unsigned int v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // r15d
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  const std::string *v18; // rax
  google::protobuf::uint32 v19; // eax
  google::protobuf::uint32 v20; // eax
  google::protobuf::uint32 v21; // eax
  google::protobuf::uint32 v22; // eax
  google::protobuf::uint32 login_time; // eax
  proto::ProfilePicture *v24; // r15
  google::protobuf::uint32 v25; // eax
  proto::ProfilePicture *v26; // r15
  google::protobuf::uint32 v27; // eax
  google::protobuf::uint32 v28; // eax
  google::protobuf::uint32 v29; // eax
  _BOOL4 v30; // r15d
  common::milog::MiLogStream *v31; // rax
  int v32; // r15d
  proto::PlayerH5ActivityCompBin *v33; // rax
  proto::H5ActivityBin *v34; // rax
  proto::H5ActivityBin *v35; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,proto::H5ActivityBin>,false,false>,bool> v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v40; // rax
  _DWORD *v41; // rdx
  char *v42; // rsi
  int *v43; // rax
  _DWORD *v44; // rdx
  char v45; // cl
  char *v46; // rsi
  int *v47; // rax
  _DWORD *v48; // rdx
  char v49; // cl
  google::protobuf::uint32 v50; // eax
  google::protobuf::uint32 v51; // eax
  google::protobuf::uint32 refresh_time; // eax
  google::protobuf::RepeatedField<unsigned int> *v53; // r15
  google::protobuf::RepeatedField<unsigned int> *v54; // rax
  google::protobuf::RepeatedField<unsigned int> *v55; // r15
  google::protobuf::RepeatedField<unsigned int> *v56; // rax
  google::protobuf::RepeatedPtrField<proto::PlayerMemH5AcitivityWatcherData> *v57; // r15
  int v58; // eax
  google::protobuf::uint32 v59; // eax
  google::protobuf::uint32 v60; // eax
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+30h] [rbp-570h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+38h] [rbp-568h] BYREF
  google::protobuf::RepeatedPtrField<proto::H5ActivityBin>::iterator __for_begin; // [rsp+40h] [rbp-560h] BYREF
  google::protobuf::RepeatedPtrField<proto::H5ActivityBin>::iterator __for_end; // [rsp+48h] [rbp-558h] BYREF
  google::protobuf::RepeatedPtrField<proto::H5ActivityBin> *__for_range; // [rsp+50h] [rbp-550h]
  proto::PlayerMemH5ActivityDataResult *proto_result; // [rsp+58h] [rbp-548h]
  google::protobuf::Map<unsigned int,int> *proto_retcode_map; // [rsp+60h] [rbp-540h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+68h] [rbp-538h]
  proto::H5ActivityBin *h5_activity_bin_0; // [rsp+70h] [rbp-530h]
  proto::PlayerMemH5ActivityData *proto_h5_activity_data; // [rsp+78h] [rbp-528h]
  const google::protobuf::RepeatedPtrField<proto::H5ActivityWatcherBin> *__for_range_1; // [rsp+80h] [rbp-520h]
  const proto::H5ActivityWatcherBin *watcher_bin; // [rsp+88h] [rbp-518h]
  proto::PlayerMemH5AcitivityWatcherData *proto_watcher_data; // [rsp+90h] [rbp-510h]
  proto::H5ActivityBin *h5_activity_bin; // [rsp+98h] [rbp-508h]
  proto::PlayerMemBasicData *basic_data; // [rsp+A0h] [rbp-500h]
  const proto::PlayerBasicBriefData *basic_redis_data; // [rsp+A8h] [rbp-4F8h]
  common::milog::MiLogStream v80; // [rsp+B0h] [rbp-4F0h] BYREF
  char v81[1232]; // [rsp+D0h] [rbp-4D0h] BYREF

  v5 = (unsigned __int64)v81;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_5(1184LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "8 32 1 12 is_exist:475 48 4 18 h5_schedule_id:509 64 4 7 uid:436 80 8 8 iter:511 112 32 12 bin_d"
                        "ata:486 176 56 23 h5_activity_bin_map:498 272 192 19 player_data_row:476 528 520 19 player_data_bin:492";
  *(_QWORD *)(v5 + 16) = RequestHandler::getPlayerMemDataFromDb;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556927;
  v7[536862722] = 61956;
  v7[536862722] = -234881024;
  v7[536862723] = 62194;
  v7[536862724] = -219021312;
  v7[536862725] = 62194;
  v7[536862727] = -218959360;
  v7[536862728] = 62194;
  v7[536862734] = -219021312;
  v7[536862735] = -218959118;
  v7[536862736] = 62194;
  v7[536862752] = -218103808;
  v7[536862753] = -202116109;
  v7[536862754] = -202116109;
  v7[536862755] = -202116109;
  v7[536862756] = -202116109;
  *(_DWORD *)(v5 + 64) = uid;
  common::milog::MiLogStream::create(
    &v80,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/handler/request_handler.cpp",
    "getPlayerMemDataFromDb",
    438);
  v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
         &v80,
         (const char (*)[28])"getPlayerMemDataFromDb uid:");
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 64));
  v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])" data_type:");
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)param);
  v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])" param_vec:");
  common::milog::MiLogStream::operator<<<unsigned int>(v12, (const std::vector<unsigned int> *)(param + 8));
  common::milog::MiLogStream::~MiLogStream(&v80);
  if ( *(_BYTE *)((param >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((param >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(param);
  if ( *(_DWORD *)param )
  {
    if ( *(_DWORD *)param != 1 )
    {
      v4 = 2;
      goto LABEL_47;
    }
    *(_BYTE *)(v5 + 32) = 0;
    TablePlayerData::TablePlayerData((TablePlayerData *const)(v5 + 272));
    if ( MysqlOpPlayerData::selectPlayerDataByUid(
           *(_DWORD *)(v5 + 64),
           (TablePlayerData *)(v5 + 272),
           (bool *)(v5 + 32)) )
    {
      v30 = 0;
    }
    else if ( *(_BYTE *)(v5 + 32) != 1 )
    {
      v4 = 2001;
      v30 = 1;
    }
    else
    {
      std::string::basic_string(v5 + 112);
      mysqlpp::String::to_string((const mysqlpp::String *const)(v5 + 360), (std::string *)(v5 + 112));
      if ( common::tools::ZlibUtil::isCompressWithPad((const std::string *)(v5 + 112)) )
      {
        common::tools::ZlibUtil::uncompressWithPad((std::string *)&v80, (const std::string *)(v5 + 112));
        std::string::operator=(v5 + 112, &v80);
        std::string::~string(&v80);
      }
      proto::PlayerDataBin::PlayerDataBin((proto::PlayerDataBin *const)(v5 + 528));
      if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v5 + 528, v5 + 112) != 1 )
      {
        common::milog::MiLogStream::create(
          &v80,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/request_handler.cpp",
          "getPlayerMemDataFromDb",
          495);
        v31 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v80,
                (const char (*)[44])"player_data_bin ParseFromString fails, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v5 + 64));
        common::milog::MiLogStream::~MiLogStream(&v80);
        v4 = 2;
        v32 = 0;
      }
      else
      {
        std::unordered_map<unsigned int,proto::H5ActivityBin>::unordered_map((std::unordered_map<unsigned int,proto::H5ActivityBin> *const)(v5 + 176));
        v33 = proto::PlayerDataBin::mutable_h5_activity_bin((proto::PlayerDataBin *const)(v5 + 528));
        __for_range = proto::PlayerH5ActivityCompBin::mutable_h5_activity_list(v33);
        __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::H5ActivityBin>::begin(__for_range).it_;
        __for_end.it_ = google::protobuf::RepeatedPtrField<proto::H5ActivityBin>::end(__for_range).it_;
        while ( google::protobuf::internal::RepeatedPtrIterator<proto::H5ActivityBin>::operator!=(
                  &__for_begin,
                  &__for_end) )
        {
          h5_activity_bin = google::protobuf::internal::RepeatedPtrIterator<proto::H5ActivityBin>::operator*(&__for_begin);
          *(_DWORD *)(v5 + 48) = proto::H5ActivityBin::h5_activity_schedule_id(h5_activity_bin);
          v34 = std::move<proto::H5ActivityBin &>(h5_activity_bin);
          v36 = std::unordered_map<unsigned int,proto::H5ActivityBin>::emplace<unsigned int &,proto::H5ActivityBin>(
                  (std::unordered_map<unsigned int,proto::H5ActivityBin> *const)(v5 + 176),
                  (unsigned int *)(v5 + 48),
                  v34,
                  (unsigned int *)(v5 + 48),
                  v35);
          if ( !v36.second )
          {
            common::milog::MiLogStream::create(
              &v80,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/handler/request_handler.cpp",
              "getPlayerMemDataFromDb",
              504);
            v37 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                    &v80,
                    (const char (*)[26])"duplicate h5_schedule_id:");
            v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v37,
                    (const unsigned int *)(v5 + 48));
            v39 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v38, (const char (*)[6])" uid:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, (const unsigned int *)(v5 + 64));
            common::milog::MiLogStream::~MiLogStream(&v80);
          }
          google::protobuf::internal::RepeatedPtrIterator<proto::H5ActivityBin>::operator++(&__for_begin);
        }
        proto_result = proto::QueryPlayerMemDataByMuipRsp::mutable_h5_activity_data_result(rsp_0);
        proto_retcode_map = proto::PlayerMemH5ActivityDataResult::mutable_retcode_map(proto_result);
        __for_range_0 = (const std::vector<unsigned int> *)(param + 8);
        __for_begin_0._M_current = std::vector<unsigned int>::begin((const std::vector<unsigned int> *const)(param + 8))._M_current;
        __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
        {
          v40 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
          v41 = v40;
          if ( *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v40 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v40);
          }
          *(_DWORD *)(v5 + 48) = *v41;
          *(std::unordered_map<unsigned int,proto::H5ActivityBin>::iterator *)(v5 + 80) = std::unordered_map<unsigned int,proto::H5ActivityBin>::find(
                                                                                            (std::unordered_map<unsigned int,proto::H5ActivityBin> *const)(v5 + 176),
                                                                                            (const std::unordered_map<unsigned int,proto::H5ActivityBin>::key_type *)(v5 + 48));
          __for_end.it_ = (void *const *)std::unordered_map<unsigned int,proto::H5ActivityBin>::end((std::unordered_map<unsigned int,proto::H5ActivityBin> *const)(v5 + 176))._M_cur;
          if ( std::__detail::operator==<std::pair<unsigned int const,proto::H5ActivityBin>,false>(
                 (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,proto::H5ActivityBin>,false> *)(v5 + 80),
                 (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,proto::H5ActivityBin>,false> *)&__for_end) )
          {
            v42 = (char *)(v5 + 48);
            v43 = google::protobuf::Map<unsigned int,int>::operator[](
                    proto_retcode_map,
                    (const google::protobuf::Map<unsigned int,int>::key_type *)(v5 + 48));
            v44 = v43;
            v45 = *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000);
            if ( v45 != 0 && (char)(((unsigned __int8)v43 & 7) + 3) >= v45 )
            {
              LOBYTE(v42) = v45 != 0;
              __asan_report_store4(v43, v42);
            }
            *v44 = 5;
          }
          else
          {
            v46 = (char *)(v5 + 48);
            v47 = google::protobuf::Map<unsigned int,int>::operator[](
                    proto_retcode_map,
                    (const google::protobuf::Map<unsigned int,int>::key_type *)(v5 + 48));
            v48 = v47;
            v49 = *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000);
            if ( v49 != 0 && (char)(((unsigned __int8)v47 & 7) + 3) >= v49 )
            {
              LOBYTE(v46) = v49 != 0;
              __asan_report_store4(v47, v46);
            }
            *v48 = 0;
            h5_activity_bin_0 = &std::__detail::_Node_iterator<std::pair<unsigned int const,proto::H5ActivityBin>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,proto::H5ActivityBin>,false,false> *const)(v5 + 80))->second;
            proto_h5_activity_data = proto::PlayerMemH5ActivityDataResult::add_h5_activity_data_list(proto_result);
            v50 = proto::H5ActivityBin::h5_activity_schedule_id(h5_activity_bin_0);
            proto::PlayerMemH5ActivityData::set_h5_schedule_id(proto_h5_activity_data, v50);
            v51 = proto::H5ActivityBin::h5_activity_id(h5_activity_bin_0);
            proto::PlayerMemH5ActivityData::set_h5_activity_id(proto_h5_activity_data, v51);
            refresh_time = proto::H5ActivityBin::last_refresh_time(h5_activity_bin_0);
            proto::PlayerMemH5ActivityData::set_last_refresh_time(proto_h5_activity_data, refresh_time);
            v53 = proto::PlayerMemH5ActivityData::mutable_finished_h5_activity_watcher_list(proto_h5_activity_data);
            v54 = proto::H5ActivityBin::mutable_finished_h5_activity_watcher_list(h5_activity_bin_0);
            google::protobuf::RepeatedField<unsigned int>::Swap(v53, v54);
            v55 = proto::PlayerMemH5ActivityData::mutable_unaccept_h5_activity_watcher_list(proto_h5_activity_data);
            v56 = proto::H5ActivityBin::mutable_unaccept_h5_activity_watcher_list(h5_activity_bin_0);
            google::protobuf::RepeatedField<unsigned int>::Swap(v55, v56);
            v57 = proto::PlayerMemH5ActivityData::mutable_h5_activity_watcher_list(proto_h5_activity_data);
            v58 = proto::H5ActivityBin::h5_activity_watcher_list_size(h5_activity_bin_0);
            google::protobuf::RepeatedPtrField<proto::PlayerMemH5AcitivityWatcherData>::Reserve(v57, v58);
            __for_range_1 = proto::H5ActivityBin::h5_activity_watcher_list(h5_activity_bin_0);
            __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::H5ActivityWatcherBin>::begin(__for_range_1).it_;
            __for_end.it_ = google::protobuf::RepeatedPtrField<proto::H5ActivityWatcherBin>::end(__for_range_1).it_;
            while ( google::protobuf::internal::RepeatedPtrIterator<proto::H5ActivityWatcherBin const>::operator!=(
                      (const google::protobuf::internal::RepeatedPtrIterator<const proto::H5ActivityWatcherBin> *const)&__for_begin,
                      (const google::protobuf::internal::RepeatedPtrIterator<const proto::H5ActivityWatcherBin>::iterator *)&__for_end) )
            {
              watcher_bin = google::protobuf::internal::RepeatedPtrIterator<proto::H5ActivityWatcherBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::H5ActivityWatcherBin> *const)&__for_begin);
              proto_watcher_data = proto::PlayerMemH5ActivityData::add_h5_activity_watcher_list(proto_h5_activity_data);
              v59 = proto::H5ActivityWatcherBin::h5_activity_watcher_id(watcher_bin);
              proto::PlayerMemH5AcitivityWatcherData::set_h5_activity_watcher_id(proto_watcher_data, v59);
              v60 = proto::H5ActivityWatcherBin::progress(watcher_bin);
              proto::PlayerMemH5AcitivityWatcherData::set_progress(proto_watcher_data, v60);
              google::protobuf::internal::RepeatedPtrIterator<proto::H5ActivityWatcherBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::H5ActivityWatcherBin> *const)&__for_begin);
            }
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
        }
        proto::QueryPlayerMemDataByMuipRsp::set_retcode(rsp_0, 0);
        std::unordered_map<unsigned int,proto::H5ActivityBin>::~unordered_map((std::unordered_map<unsigned int,proto::H5ActivityBin> *const)(v5 + 176));
        v32 = 1;
      }
      proto::PlayerDataBin::~PlayerDataBin((proto::PlayerDataBin *const)(v5 + 528));
      std::string::~string((void *)(v5 + 112));
      v30 = v32 == 0;
    }
    TablePlayerData::~TablePlayerData((TablePlayerData *const)(v5 + 272));
    if ( !v30 )
      goto LABEL_46;
  }
  else
  {
    proto::PlayerBriefDataRedisData::PlayerBriefDataRedisData((proto::PlayerBriefDataRedisData *const)(v5 + 176));
    *(_BYTE *)(v5 + 32) = 0;
    if ( RedisOpSocialData::getPlayerBriefData(
           *(_DWORD *)(v5 + 64),
           (proto::PlayerBriefDataRedisData *)(v5 + 176),
           (bool *)(v5 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v80,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/request_handler.cpp",
        "getPlayerMemDataFromDb",
        447);
      v13 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v80,
              (const char (*)[31])"getPlayerBriefData fails, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v5 + 64));
      common::milog::MiLogStream::~MiLogStream(&v80);
      proto::QueryPlayerMemDataByMuipRsp::set_retcode(rsp_0, -1);
      v4 = 0;
      v14 = 0;
    }
    else if ( *(_BYTE *)(v5 + 32) != 1 )
    {
      common::milog::MiLogStream::create(
        &v80,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/request_handler.cpp",
        "getPlayerMemDataFromDb",
        453);
      v15 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v80,
              (const char (*)[27])"Not found redis data, uid:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v5 + 64));
      v17 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])" data_type:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)param);
      common::milog::MiLogStream::~MiLogStream(&v80);
      proto::QueryPlayerMemDataByMuipRsp::set_retcode(rsp_0, 5002);
      v4 = 0;
      v14 = 0;
    }
    else
    {
      proto::QueryPlayerMemDataByMuipRsp::Clear(rsp_0);
      proto::QueryPlayerMemDataByMuipRsp::set_retcode(rsp_0, 0);
      basic_data = proto::QueryPlayerMemDataByMuipRsp::mutable_basic_data(rsp_0);
      basic_redis_data = proto::PlayerBriefDataRedisData::basic_brief((const proto::PlayerBriefDataRedisData *const)(v5 + 176));
      v18 = proto::PlayerBasicBriefData::nickname[abi:cxx11](basic_redis_data);
      proto::PlayerMemBasicData::set_nickname(basic_data, v18);
      v19 = proto::PlayerBasicBriefData::level(basic_redis_data);
      proto::PlayerMemBasicData::set_level(basic_data, v19);
      v20 = proto::PlayerBasicBriefData::exp(basic_redis_data);
      proto::PlayerMemBasicData::set_exp(basic_data, v20);
      v21 = proto::PlayerBasicBriefData::hcoin(basic_redis_data);
      proto::PlayerMemBasicData::set_hcoin(basic_data, v21);
      v22 = proto::PlayerBasicBriefData::scoin(basic_redis_data);
      proto::PlayerMemBasicData::set_scoin(basic_data, v22);
      login_time = proto::PlayerBasicBriefData::last_login_time(basic_redis_data);
      proto::PlayerMemBasicData::set_last_login(basic_data, login_time);
      v24 = proto::PlayerMemBasicData::mutable_profile_picture(basic_data);
      v25 = proto::PlayerBasicBriefData::head_image_avatar_id(basic_redis_data);
      proto::ProfilePicture::set_avatar_id(v24, v25);
      v26 = proto::PlayerMemBasicData::mutable_profile_picture(basic_data);
      v27 = proto::PlayerBasicBriefData::profile_picture_costume_id(basic_redis_data);
      proto::ProfilePicture::set_costume_id(v26, v27);
      v28 = proto::PlayerBasicBriefData::register_time(basic_redis_data);
      proto::PlayerMemBasicData::set_register_time(basic_data, v28);
      v29 = proto::PlayerBasicBriefData::gender_type(basic_redis_data);
      proto::PlayerMemBasicData::set_gender_type(basic_data, v29);
      v14 = 1;
    }
    proto::PlayerBriefDataRedisData::~PlayerBriefDataRedisData((proto::PlayerBriefDataRedisData *const)(v5 + 176));
    if ( v14 )
LABEL_46:
      v4 = 0;
  }
LABEL_47:
  if ( v81 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8080) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8088) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8090) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    __asan_stack_free_5(v5, 1184LL, v81);
  }
  return v4;
};

// Line 545: range 000000000CBF23BA-000000000CBF3073
__int64 __fastcall RequestHandler::parsePlayerMemData(
        RequestHandler *const this,
        uint32_t uid,
        proto::QueryPlayerMemDataByMuipRsp *rsp_0,
        Json::Value_0 *jval)
{
  unsigned int v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  proto::QueryPlayerMemDataByMuipRsp::DetailCase v8; // eax
  Json::Value_0 *v9; // rax
  const std::string *v10; // rax
  Json::Value_0 *v11; // rax
  unsigned int v12; // eax
  Json::Value_0 *v13; // rax
  unsigned int login; // eax
  Json::Value_0 *v15; // rax
  unsigned int v16; // eax
  Json::Value_0 *v17; // rax
  unsigned int v18; // eax
  Json::Value_0 *v19; // rax
  const proto::ProfilePicture *v20; // rax
  unsigned int v21; // eax
  Json::Value_0 *v22; // rax
  const proto::ProfilePicture *v23; // rax
  unsigned int v24; // eax
  Json::Value_0 *v25; // rax
  std::remove_reference<Json::Value&>::type *v26; // r14
  Json::Value_0 *v27; // rax
  unsigned int v28; // eax
  Json::Value_0 *v29; // rax
  unsigned int v30; // eax
  Json::Value_0 *v31; // rax
  int *p_second; // rax
  int second; // eax
  common::milog::MiLogStream *v34; // rax
  _BOOL4 v35; // r15d
  common::milog::MiLogStream *v36; // rax
  int v37; // r15d
  std::remove_reference<Json::Value&>::type *v38; // r15
  Json::Value_0 *v39; // rax
  __int64 result; // rax
  int v41; // [rsp+0h] [rbp-360h]
  char *v42; // [rsp+8h] [rbp-358h]
  Json::Value *jvalb; // [rsp+10h] [rbp-350h]
  int v46; // [rsp+20h] [rbp-340h]
  proto::PlayerMemH5ActivityDataResult *proto_result; // [rsp+30h] [rbp-330h]
  google::protobuf::Map<unsigned int,int> *__for_range; // [rsp+38h] [rbp-328h]
  google::protobuf::Map<unsigned int,int>::iterator::reference p__; // [rsp+40h] [rbp-320h]
  const proto::PlayerMemBasicData *basic_data; // [rsp+48h] [rbp-318h]
  google::protobuf::Map<unsigned int,int>::iterator __for_begin; // [rsp+50h] [rbp-310h] BYREF
  google::protobuf::Map<unsigned int,int>::iterator __for_end; // [rsp+70h] [rbp-2F0h] BYREF
  common::milog::MiLogStream v53; // [rsp+90h] [rbp-2D0h] BYREF
  char v54[688]; // [rsp+B0h] [rbp-2B0h] BYREF

  v5 = (unsigned __int64)v54;
  v42 = v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(640LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 48 4 7 uid:544 64 4 11 options:584 80 32 15 json_string:583 144 40 14 status_ret:588 224 40 14"
                        " json_value:595 304 272 15 json_reader:594";
  *(_QWORD *)(v5 + 16) = RequestHandler::parsePlayerMemData;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = 61956;
  v7[536862723] = -219021312;
  v7[536862724] = 62194;
  v7[536862725] = -234881024;
  v7[536862726] = -218959118;
  v7[536862728] = -218959360;
  v7[536862729] = 62194;
  v7[536862738] = -202116109;
  v7[536862739] = -202116109;
  *(_DWORD *)(v5 + 48) = uid;
  v8 = proto::QueryPlayerMemDataByMuipRsp::detail_case(rsp_0);
  if ( v8 == kBasicData )
  {
    basic_data = proto::QueryPlayerMemDataByMuipRsp::basic_data(rsp_0);
    Json::Value::Value((Json::Value *)(v5 + 224), *(_DWORD *)(v5 + 48));
    v9 = Json::Value::operator[](jval, off_1A660020);
    Json::Value::operator=(v9, (Json::Value_0 *)(v5 + 224));
    Json::Value::~Value((Json::Value_0 *const)(v5 + 224));
    v10 = proto::PlayerMemBasicData::nickname[abi:cxx11](basic_data);
    Json::Value::Value(v5 + 224, v10);
    v11 = Json::Value::operator[](jval, "nickname");
    Json::Value::operator=(v11, (Json::Value_0 *)(v5 + 224));
    Json::Value::~Value((Json::Value_0 *const)(v5 + 224));
    v12 = proto::PlayerMemBasicData::level(basic_data);
    Json::Value::Value((Json::Value *)(v5 + 224), v12);
    v13 = Json::Value::operator[](jval, "level");
    Json::Value::operator=(v13, (Json::Value_0 *)(v5 + 224));
    Json::Value::~Value((Json::Value_0 *const)(v5 + 224));
    login = proto::PlayerMemBasicData::last_login(basic_data);
    Json::Value::Value((Json::Value *)(v5 + 224), login);
    v15 = Json::Value::operator[](jval, "last_login");
    Json::Value::operator=(v15, (Json::Value_0 *)(v5 + 224));
    Json::Value::~Value((Json::Value_0 *const)(v5 + 224));
    v16 = proto::PlayerMemBasicData::scoin(basic_data);
    Json::Value::Value((Json::Value *)(v5 + 224), v16);
    v17 = Json::Value::operator[](jval, "scoin");
    Json::Value::operator=(v17, (Json::Value_0 *)(v5 + 224));
    Json::Value::~Value((Json::Value_0 *const)(v5 + 224));
    v18 = proto::PlayerMemBasicData::hcoin(basic_data);
    Json::Value::Value((Json::Value *)(v5 + 224), v18);
    v19 = Json::Value::operator[](jval, "hcoin");
    Json::Value::operator=(v19, (Json::Value_0 *)(v5 + 224));
    Json::Value::~Value((Json::Value_0 *const)(v5 + 224));
    Json::Value::Value(v5 + 144, 0LL);
    v20 = proto::PlayerMemBasicData::profile_picture(basic_data);
    v21 = proto::ProfilePicture::avatar_id(v20);
    Json::Value::Value((Json::Value *)(v5 + 224), v21);
    v22 = Json::Value::operator[]((Json::Value_0 *const)(v5 + 144), "avatar_id");
    Json::Value::operator=(v22, (Json::Value_0 *)(v5 + 224));
    Json::Value::~Value((Json::Value_0 *const)(v5 + 224));
    v23 = proto::PlayerMemBasicData::profile_picture(basic_data);
    v24 = proto::ProfilePicture::costume_id(v23);
    Json::Value::Value((Json::Value *)(v5 + 224), v24);
    v25 = Json::Value::operator[]((Json::Value_0 *const)(v5 + 144), "costume_id");
    Json::Value::operator=(v25, (Json::Value_0 *)(v5 + 224));
    Json::Value::~Value((Json::Value_0 *const)(v5 + 224));
    v26 = std::move<Json::Value &>((Json::Value *)(v5 + 144));
    v27 = Json::Value::operator[](jval, "profile_picture");
    Json::Value::operator=(v27, (Json::Value_0 *)v26);
    v28 = proto::PlayerMemBasicData::register_time(basic_data);
    Json::Value::Value((Json::Value *)(v5 + 224), v28);
    v29 = Json::Value::operator[](jval, "register_time");
    Json::Value::operator=(v29, (Json::Value_0 *)(v5 + 224));
    Json::Value::~Value((Json::Value_0 *const)(v5 + 224));
    v30 = proto::PlayerMemBasicData::gender_type(basic_data);
    Json::Value::Value((Json::Value *)(v5 + 224), v30);
    v31 = Json::Value::operator[](jval, "gender_type");
    Json::Value::operator=(v31, (Json::Value_0 *)(v5 + 224));
    Json::Value::~Value((Json::Value_0 *const)(v5 + 224));
    Json::Value::~Value((Json::Value_0 *const)(v5 + 144));
LABEL_32:
    v4 = 0;
    goto LABEL_33;
  }
  if ( v8 != kH5ActivityDataResult )
  {
    common::milog::MiLogStream::create(
      &v53,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/request_handler.cpp",
      "parsePlayerMemData",
      605);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      &v53,
      (const char (*)[30])"Not support such detail case!");
    common::milog::MiLogStream::~MiLogStream(&v53);
    v4 = -1;
    goto LABEL_33;
  }
  proto_result = proto::QueryPlayerMemDataByMuipRsp::mutable_h5_activity_data_result(rsp_0);
  __for_range = proto::PlayerMemH5ActivityDataResult::mutable_retcode_map(proto_result);
  google::protobuf::Map<unsigned int,int>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,int>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p__ = google::protobuf::Map<unsigned int,int>::iterator::operator*(&__for_begin);
    p_second = &p__->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    second = p__->second;
    if ( second )
    {
      if ( second == 5 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&p__->second >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)p__ + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p__->second >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(&p__->second, (((_BYTE)p__ + 4) & 7u) + 3);
        }
        p__->second = 2025;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&p__->second >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)p__ + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p__->second >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(&p__->second, (((_BYTE)p__ + 4) & 7u) + 3);
        }
        p__->second = 1;
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&p__->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p__ + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p__->second >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&p__->second, (((_BYTE)p__ + 4) & 7u) + 3);
      }
      p__->second = 0;
    }
    google::protobuf::Map<unsigned int,int>::iterator::operator++(&__for_begin);
  }
  std::string::basic_string(v5 + 80);
  google::protobuf::util::JsonPrintOptions::JsonPrintOptions((google::protobuf::util::JsonPrintOptions *const)(v5 + 64));
  *(_BYTE *)(v5 + 64) = 1;
  *(_BYTE *)(v5 + 65) = 1;
  *(_BYTE *)(v5 + 67) = 1;
  google::protobuf::util::MessageToJsonString(
    (google::protobuf::util::Status *)(v5 + 144),
    proto_result,
    v41,
    v54,
    (int)jval,
    (char)rsp_0,
    v46,
    this);
  if ( !google::protobuf::util::Status::ok((const google::protobuf::util::Status *const)(v5 + 144)) )
  {
    common::milog::MiLogStream::create(
      &v53,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/request_handler.cpp",
      "parsePlayerMemData",
      591);
    v34 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
            &v53,
            (const char (*)[53])"activity_data_rsp to json_string failed player_uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream(&v53);
    v4 = -1;
    v35 = 0;
  }
  else
  {
    Json::Reader::Reader((Json::Reader *)(v5 + 304));
    Json::Value::Value(v5 + 224, 0LL);
    if ( !Json::Reader::parse(
            (Json::Reader *const)(v5 + 304),
            (const std::string *)(v5 + 80),
            (Json::Value *)(v5 + 224),
            1) )
    {
      common::milog::MiLogStream::create(
        &v53,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/request_handler.cpp",
        "parsePlayerMemData",
        598);
      v36 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
              &v53,
              (const char (*)[64])"activity_data_rsp json_string to json_value failed player_uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, (const unsigned int *)(v5 + 48));
      common::milog::MiLogStream::~MiLogStream(&v53);
      v4 = -1;
      v37 = 0;
    }
    else
    {
      v38 = std::move<Json::Value &>((Json::Value *)(v5 + 224));
      v39 = Json::Value::operator[]((Json::Value_0 *const)jvalb, "h5_activity_data_result");
      Json::Value::operator=(v39, (Json::Value_0 *)v38);
      v37 = 1;
    }
    Json::Value::~Value((Json::Value_0 *const)(v5 + 224));
    Json::Reader::~Reader((Json::Reader *const)(v5 + 304));
    v35 = v37 != 0;
  }
  google::protobuf::util::Status::~Status((google::protobuf::util::Status *const)(v5 + 144));
  std::string::~string((void *)(v5 + 80));
  if ( v35 )
    goto LABEL_32;
LABEL_33:
  result = v4;
  if ( v42 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8048) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 615: range 000000000CBF3074-000000000CBF32A9
int32_t __cdecl AsyncRsp::waitRsp(
        AsyncRsp *const this,
        common::minet::PacketPtr *packet_ptr,
        boost::asio::yield_context *p_yield)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  boost::system::error_code rhs; // [rsp+20h] [rbp-D0h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-C0h] BYREF
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > handler; // [rsp+50h] [rbp-A0h] BYREF
  char v12[112]; // [rsp+80h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 6 ec:616";
  *(_QWORD *)(v3 + 16) = AsyncRsp::waitRsp;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  *(_DWORD *)(v3 + 32) = 0;
  *(_BYTE *)(v3 + 36) = 0;
  *(_QWORD *)(v3 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::operator[](
    &handler,
    p_yield,
    (boost::system::error_code *)(v3 + 32));
  boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::async_wait<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>(
    &this->dt_,
    &handler);
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&handler);
  boost::system::error_code::error_code<boost::asio::error::basic_errors>(&rhs, operation_aborted, 0LL);
  if ( boost::system::operator!=((const boost::system::error_code *)(v3 + 32), &rhs) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/request_handler.cpp",
      "waitRsp",
      622);
    v6 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v10,
           (const char (*)[31])"async rsp timeout, session_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->session_id_);
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 4;
  }
  else
  {
    std::shared_ptr<common::minet::Packet>::operator=(packet_ptr, &this->packet_ptr_);
    result = 0;
  }
  if ( v12 == (char *)v3 )
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

// Line 631: range 000000000CBF34E0-000000000CBF36E0
void __cdecl AsyncRsp::postNotifyRsp(
        AsyncRsp *const this,
        AsyncRspPtr *p_rsp_ptr,
        common::minet::PacketPtr *p_packet_ptr)
{
  boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data **p_prev; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  uint32_t session_id; // [rsp+24h] [rbp-9Ch]
  boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> v8; // [rsp+28h] [rbp-98h] BYREF

  p_prev = &v8.impl_.implementation_.timer_data.prev_;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      p_prev = (boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data **)v4;
  }
  *p_prev = (boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data *)1102416563;
  p_prev[1] = (boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data *)"1 32 16 17 async_rsp_wtr:632";
  p_prev[2] = (boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data *)AsyncRsp::postNotifyRsp;
  v5 = (unsigned __int64)p_prev >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  std::weak_ptr<AsyncRsp>::weak_ptr<AsyncRsp,void>((std::weak_ptr<AsyncRsp> *const)p_prev + 2, p_rsp_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->session_id_);
  }
  session_id = this->session_id_;
  std::weak_ptr<AsyncRsp>::weak_ptr(
    (std::weak_ptr<AsyncRsp> *const)&v8.impl_.implementation_,
    (const std::weak_ptr<AsyncRsp> *)p_prev + 2);
  LODWORD(v8.impl_.implementation_.timer_data.op_queue_.front_) = session_id;
  std::shared_ptr<common::minet::Packet>::shared_ptr(
    (std::shared_ptr<common::minet::Packet> *const)&v8.impl_.implementation_.timer_data.op_queue_.back_,
    p_packet_ptr);
  boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::get_executor(&v8);
  boost::asio::post<boost::asio::executor,AsyncRsp::postNotifyRsp(std::shared_ptr<AsyncRsp>,std::shared_ptr<common::minet::Packet>)::{lambda(void)#1}>(
    (const boost::asio::executor *)&v8,
    (AsyncRsp::postNotifyRsp::<lambda()> *)&v8.impl_.implementation_,
    0LL);
  boost::asio::executor::~executor((boost::asio::executor *const)&v8);
  AsyncRsp::postNotifyRsp(std::shared_ptr<AsyncRsp>,std::shared_ptr<common::minet::Packet>)::{lambda(void)#1}::~shared_ptr((AsyncRsp::postNotifyRsp::<lambda()> *const)&v8.impl_.implementation_);
  std::weak_ptr<AsyncRsp>::~weak_ptr((std::weak_ptr<AsyncRsp> *const)p_prev + 2);
  if ( &v8.impl_.implementation_.timer_data.prev_ == p_prev )
  {
    *(_QWORD *)(((unsigned __int64)p_prev >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *p_prev = (boost::asio::detail::timer_queue<boost::asio::detail::forwarding_posix_time_traits>::per_timer_data *)1172321806;
    *(_QWORD *)(((unsigned __int64)p_prev >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 634: range 000000000CBF32AA-000000000CBF34B3
void __cdecl AsyncRsp::postNotifyRsp(std::shared_ptr<AsyncRsp>,std::shared_ptr<common::minet::Packet>)::{lambda(void)#1}::operator()(
        const AsyncRsp::postNotifyRsp::<lambda()> *const __closure)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // rax
  AsyncRsp *v5; // r14
  std::shared_ptr<common::minet::Packet> p_packet_ptr; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-90h] BYREF
  char v8[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 17 async_rsp_ptr:636";
  *(_QWORD *)(v1 + 16) = AsyncRsp::postNotifyRsp(std::shared_ptr<AsyncRsp>,std::shared_ptr<common::minet::Packet>)::{lambda(void)#1}::operator();
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  std::weak_ptr<AsyncRsp>::lock((const std::weak_ptr<AsyncRsp> *const)(v1 + 32));
  if ( std::operator==<AsyncRsp>((const std::shared_ptr<AsyncRsp> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/request_handler.cpp",
      "operator()",
      639);
    v4 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v7,
           (const char (*)[31])"async_rsp is null! session_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &__closure->__session_id);
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  else
  {
    v5 = std::__shared_ptr_access<AsyncRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AsyncRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_packet_ptr, &__closure->__packet_ptr);
    AsyncRsp::notifyRsp(v5, &p_packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
  }
  std::shared_ptr<AsyncRsp>::~shared_ptr((std::shared_ptr<AsyncRsp> *const)(v1 + 32));
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 634: range 000000000CC1E962-000000000CC1EA17
void __cdecl AsyncRsp::postNotifyRsp(std::shared_ptr<AsyncRsp>,std::shared_ptr<common::minet::Packet>)::{lambda(void)#1}::shared_ptr(
        AsyncRsp::postNotifyRsp::<lambda()> *const this,
        AsyncRsp::postNotifyRsp::<lambda()> *a2)
{
  uint32_t session_id; // ecx
  char v3; // al
  AsyncRsp::postNotifyRsp::<lambda()> *v4; // [rsp+0h] [rbp-10h]

  v4 = a2;
  std::weak_ptr<AsyncRsp>::weak_ptr(&this->__async_rsp_wtr, &a2->__async_rsp_wtr);
  if ( *(_BYTE *)(((unsigned __int64)&v4->__session_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v4->__session_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->__session_id);
  }
  session_id = a2->__session_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->__session_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->__session_id, a2);
  }
  this->__session_id = session_id;
  std::shared_ptr<common::minet::Packet>::shared_ptr(&this->__packet_ptr, &v4->__packet_ptr);
};

// Line 634: range 000000000CBF34B4-000000000CBF34DE
void __cdecl AsyncRsp::postNotifyRsp(std::shared_ptr<AsyncRsp>,std::shared_ptr<common::minet::Packet>)::{lambda(void)#1}::~shared_ptr(
        AsyncRsp::postNotifyRsp::<lambda()> *const this)
{
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&this->__packet_ptr);
  std::weak_ptr<AsyncRsp>::~weak_ptr(&this->__async_rsp_wtr);
};

// Line 647: range 000000000CBF36E2-000000000CBF3717
void __cdecl AsyncRsp::notifyRsp(AsyncRsp *const this, common::minet::PacketPtr *p_packet_ptr)
{
  std::shared_ptr<common::minet::Packet>::operator=(&this->packet_ptr_, p_packet_ptr);
  boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>::cancel(&this->dt_);
};

// Line 653: range 000000000CBF38C8-000000000CBF3B1F
AsyncRspMgr *__fastcall AsyncRspMgr::getAsyncRsp(
        AsyncRspMgr *const this,
        std::lock_guard<std::mutex>::mutex_type *ioc,
        boost::asio::io_context *session_id,
        int a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  AsyncRsp *__p; // [rsp+8h] [rbp-C8h]
  std::weak_ptr<AsyncRsp> *rsp_wtr; // [rsp+38h] [rbp-98h]
  char v12[144]; // [rsp+40h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 14 session_id:652 64 8 8 lock:654";
  *(_QWORD *)(v4 + 16) = AsyncRspMgr::getAsyncRsp;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116352;
  *(_DWORD *)(v4 + 48) = a4;
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v4 + 64), ioc);
  rsp_wtr = std::map<unsigned int,std::weak_ptr<AsyncRsp>>::operator[](
              (std::map<unsigned int,std::weak_ptr<AsyncRsp>> *const)&ioc[1],
              (const std::map<unsigned int,std::weak_ptr<AsyncRsp>>::key_type *)(v4 + 48));
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  std::weak_ptr<AsyncRsp>::lock((const std::weak_ptr<AsyncRsp> *const)this);
  if ( std::operator==<AsyncRsp>((const std::shared_ptr<AsyncRsp> *)this, 0LL) )
  {
    __p = (AsyncRsp *)operator new(0x68uLL);
    AsyncRsp::AsyncRsp(__p, session_id, *(_DWORD *)(v4 + 48));
    std::__shared_ptr<AsyncRsp,(__gnu_cxx::_Lock_policy)2>::reset<AsyncRsp,AsyncRspMgr::getAsyncRsp(boost::asio::io_context &,unsigned int)::{lambda(AsyncRsp*)#1}>(
      (std::__shared_ptr<AsyncRsp,(__gnu_cxx::_Lock_policy)2> *const)this,
      __p,
      (AsyncRspMgr::getAsyncRsp::<lambda(AsyncRsp*)>)ioc);
    std::weak_ptr<AsyncRsp>::operator=<AsyncRsp>(rsp_wtr, (const std::shared_ptr<AsyncRsp> *)this);
  }
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v4 + 64));
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
  return this;
};

// Line 659: range 000000000CBF3718-000000000CBF38C6
void __cdecl AsyncRspMgr::getAsyncRsp(boost::asio::io_context &,unsigned int)::{lambda(AsyncRsp *)#1}::operator()(
        const AsyncRspMgr::getAsyncRsp::<lambda(AsyncRsp*)> *const __closure,
        AsyncRsp *rsp_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::map<unsigned int,std::weak_ptr<AsyncRsp>> *p_rsp_map; // r13
  std::map<unsigned int,std::weak_ptr<AsyncRsp>>::key_type __x; // [rsp+1Ch] [rbp-74h] BYREF
  char v7[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 lock:665";
  *(_QWORD *)(v2 + 16) = AsyncRspMgr::getAsyncRsp(boost::asio::io_context &,unsigned int)::{lambda(AsyncRsp *)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( rsp_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    std::lock_guard<std::mutex>::lock_guard(
      (std::lock_guard<std::mutex> *const)(v2 + 32),
      &__closure->__this->rsp_map_mu_);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    p_rsp_map = &__closure->__this->rsp_map_;
    __x = AsyncRsp::getSessionId(rsp_ptr);
    std::map<unsigned int,std::weak_ptr<AsyncRsp>>::erase(p_rsp_map, &__x);
    AsyncRsp::~AsyncRsp(rsp_ptr);
    operator delete(rsp_ptr, 0x68uLL);
    std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v2 + 32));
  }
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 675: range 000000000CBF3B20-000000000CBF3F5A
__int64 __fastcall AsyncRspMgr::notifyApiResponse(
        AsyncRspMgr *const this,
        uint32_t session_id,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int v7; // r15d
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<AsyncRsp> > >::pointer v8; // rax
  AsyncRsp *v9; // r14
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<AsyncRsp> > >::_Self __y; // [rsp+28h] [rbp-128h] BYREF
  std::weak_ptr<AsyncRsp> v13; // [rsp+30h] [rbp-120h] BYREF
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-110h] BYREF
  char v15[240]; // [rsp+60h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 14 session_id:674 64 8 8 lock:678 96 8 6 it:679 128 16 11 rsp_ptr:676 160 16 11 rsp_wtr:685";
  *(_QWORD *)(v4 + 16) = AsyncRspMgr::notifyApiResponse;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -219021312;
  v6[536862725] = -202178560;
  *(_DWORD *)(v4 + 48) = session_id;
  *(_QWORD *)(v4 + 128) = 0LL;
  *(_QWORD *)(v4 + 136) = 0LL;
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v4 + 64), &this->rsp_map_mu_);
  *(std::map<unsigned int,std::weak_ptr<AsyncRsp>>::iterator *)(v4 + 96) = std::map<unsigned int,std::weak_ptr<AsyncRsp>>::find(
                                                                             &this->rsp_map_,
                                                                             (const std::map<unsigned int,std::weak_ptr<AsyncRsp>>::key_type *)(v4 + 48));
  __y._M_node = std::map<unsigned int,std::weak_ptr<AsyncRsp>>::end(&this->rsp_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<AsyncRsp> > >::_Self *)(v4 + 96),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/request_handler.cpp",
      "notifyApiResponse",
      682);
    common::milog::MiLogStream::operator()(&v14, "session not found! session_id=%u", *(unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v14);
    v3 = -1;
    v7 = 0;
  }
  else
  {
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<AsyncRsp>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::weak_ptr<AsyncRsp> > > *const)(v4 + 96));
    std::weak_ptr<AsyncRsp>::weak_ptr((std::weak_ptr<AsyncRsp> *const)(v4 + 160), &v8->second);
    std::weak_ptr<AsyncRsp>::lock(&v13);
    std::shared_ptr<AsyncRsp>::operator=(
      (std::shared_ptr<AsyncRsp> *const)(v4 + 128),
      (std::shared_ptr<AsyncRsp> *)&v13);
    std::shared_ptr<AsyncRsp>::~shared_ptr((std::shared_ptr<AsyncRsp> *const)&v13);
    std::weak_ptr<AsyncRsp>::~weak_ptr((std::weak_ptr<AsyncRsp> *const)(v4 + 160));
    v7 = 1;
  }
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v4 + 64));
  if ( v7 == 1 )
  {
    if ( std::operator!=<AsyncRsp>((const std::shared_ptr<AsyncRsp> *)(v4 + 128), 0LL) )
    {
      v9 = std::__shared_ptr_access<AsyncRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AsyncRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        (std::shared_ptr<common::minet::Packet> *const)&v13,
        p_packet_ptr);
      std::shared_ptr<AsyncRsp>::shared_ptr(
        (std::shared_ptr<AsyncRsp> *const)(v4 + 160),
        (const std::shared_ptr<AsyncRsp> *)(v4 + 128));
      AsyncRsp::postNotifyRsp(v9, (AsyncRspPtr *)(v4 + 160), (common::minet::PacketPtr *)&v13);
      std::shared_ptr<AsyncRsp>::~shared_ptr((std::shared_ptr<AsyncRsp> *const)(v4 + 160));
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&v13);
      v3 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/request_handler.cpp",
        "notifyApiResponse",
        693);
      common::milog::MiLogStream::operator()(&v14, "rsp is null! session_id=%u", *(unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v14);
      v3 = -1;
    }
  }
  std::shared_ptr<AsyncRsp>::~shared_ptr((std::shared_ptr<AsyncRsp> *const)(v4 + 128));
  result = v3;
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
