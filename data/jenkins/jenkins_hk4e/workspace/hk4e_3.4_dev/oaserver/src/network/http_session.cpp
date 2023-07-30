// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/oaserver/src/network/http_session.cpp

// Line 48: range 000000000CA85860-000000000CA85912
void __cdecl HttpSession::HttpSession(HttpSession *const this, boost::asio::io_context *ioc)
{
  int (**v2)(...); // rdx

  common::minet::AServerSession::AServerSession(this, ioc);
  v2 = (int (**)(...))(&`vtable for'HttpSession + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, ioc);
  this->_vptr_AServerSession = v2;
  common::minet::http_client::HttpRequest::HttpRequest(&this->request_);
  common::minet::http_client::HttpResponse::HttpResponse(&this->response_);
  if ( *(_BYTE *)(((unsigned __int64)&this->create_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->create_time_ms_, ioc);
  this->create_time_ms_ = 0LL;
};

// Line 53: range 000000000CA85914-000000000CA859B7
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl HttpSession::onConnect(HttpSession *const this, boost::asio::yield_context *p_yield)
{
  int (**NowMs)(...); // rax
  int32_t v3; // ebx
  boost::asio::yield_context p_yielda; // [rsp+0h] [rbp-50h] OVERLAPPED BYREF

  p_yielda.coro_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)this;
  p_yielda.coro_._M_ptr = (std::__weak_ptr<boost::coroutines2::detail::push_coroutine<void>,(__gnu_cxx::_Lock_policy)2>::element_type *)p_yield;
  NowMs = (int (**)(...))common::tools::TimeUtils::getNowMs();
  if ( *(_BYTE *)(((unsigned __int64)&this->create_time_ms_ >> 3) + 0x7FFF8000) )
    NowMs = (int (**)(...))__asan_report_store8(&p_yielda.coro_._M_refcount._M_pi[54], p_yield);
  p_yielda.coro_._M_refcount._M_pi[54]._vptr__Sp_counted_base = NowMs;
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
    (boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *const)&p_yielda.ca_,
    (const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *)p_yielda.coro_._M_ptr);
  v3 = common::minet::AServerSession::onConnect(
         (common::minet::AServerSession *const)p_yielda.coro_._M_refcount._M_pi,
         p_yielda);
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context((boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *const)&p_yielda.ca_);
  return v3;
};

// Line 60: range 000000000CA859B8-000000000CA869B3
int32_t __cdecl HttpSession::onRecv(
        HttpSession *const this,
        char *data,
        uint32_t len,
        boost::asio::yield_context *p_yield)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  uint64_t NowMs; // rdx
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  int32_t v11; // r14d
  boost::optional<long unsigned int> v12; // rax
  boost::optional<long unsigned int> v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char> >::value_type *v19; // rax
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >::value_type *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r14
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r14
  common::milog::MiLogStream *v37; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+26h] [rbp-37Ah] BYREF
  bool is_handle_uri; // [rsp+27h] [rbp-379h]
  unsigned int SessionId; // [rsp+28h] [rbp-378h] BYREF
  int v; // [rsp+2Ch] [rbp-374h] BYREF
  boost::asio::mutable_buffers_1 buffers; // [rsp+30h] [rbp-370h] BYREF
  common::milog::MiLogStream v46; // [rsp+40h] [rbp-360h] BYREF
  std::string val; // [rsp+60h] [rbp-340h] BYREF
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > v48; // [rsp+80h] [rbp-320h] BYREF
  char v49[752]; // [rsp+B0h] [rbp-2F0h] BYREF

  v4 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(704LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 8 6 lag:61 64 8 17 content_length:83 96 8 27 content_length_remaining:84 128 16 8 timer:63 "
                        "160 16 5 ec:65 192 128 12 beast_req:90 352 280 4 p:66";
  *(_QWORD *)(v4 + 16) = HttpSession::onRecv;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862730] = -218959118;
  v6[536862739] = -218103808;
  v6[536862740] = -202116109;
  v6[536862741] = -202116109;
  NowMs = common::tools::TimeUtils::getNowMs();
  if ( *(_BYTE *)(((unsigned __int64)&this->create_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->create_time_ms_, data, NowMs);
  *(_QWORD *)(v4 + 32) = NowMs - this->create_time_ms_;
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v4 + 128));
  *(_DWORD *)(v4 + 160) = 0;
  *(_BYTE *)(v4 + 164) = 0;
  *(_QWORD *)(v4 + 168) = &boost::system::detail::cat_holder<void>::system_category_instance;
  boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::parser((boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char> > *const)(v4 + 352));
  boost::beast::http::basic_parser<true>::eager((boost::beast::http::basic_parser<true> *const)(v4 + 352), 1);
  buffers = boost::asio::buffer(data, len);
  boost::beast::http::basic_parser<true>::put<boost::asio::mutable_buffers_1>(
    (boost::beast::http::basic_parser<true> *const)(v4 + 352),
    &buffers,
    (boost::beast::error_code *)(v4 + 160));
  if ( boost::system::error_code::operator bool((const boost::system::error_code *const)(v4 + 160)) )
  {
    common::milog::MiLogStream::create(
      &v46,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/http_session.cpp",
      "onRecv",
      73);
    v8 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v46,
           (const char (*)[30])"recv error http request from ");
    *(_QWORD *)(v4 + 96) = common::minet::AServerSession::getClientIp(this);
    v9 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v8, (const char *const *)(v4 + 96));
    v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" ec: ");
    boost::system::error_code::message[abi:cxx11](&val, (const boost::system::error_code *const)(v4 + 160));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v46);
    boost::system::error_code::error_code<boost::beast::http::error>(
      (boost::system::error_code *const)&buffers,
      need_more,
      0LL);
    if ( boost::system::operator==(
           (const boost::system::error_code *)(v4 + 160),
           (const boost::system::error_code *)&buffers) )
    {
      v11 = 11;
    }
    else
    {
      boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
        &v48,
        p_yield);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&val, "Error Request.", &__a);
      HttpSession::sendErrorRsp(this, 0xC8u, &val, &v48);
      std::string::~string(&val);
      std::allocator<char>::~allocator(&__a);
      boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v48);
      v11 = 1;
    }
  }
  else if ( !boost::beast::http::basic_parser<true>::is_done((const boost::beast::http::basic_parser<true> *const)(v4 + 352)) )
  {
    v12 = boost::beast::http::basic_parser<true>::content_length((const boost::beast::http::basic_parser<true> *const)(v4 + 352));
    LODWORD(buffers.data_) = *(_DWORD *)&v12.m_initialized;
    buffers.size_ = v12.m_storage;
    v = 0;
    *(_QWORD *)(v4 + 64) = boost::optional<unsigned long>::value_or<int>(
                             (boost::optional<long unsigned int> *const)&buffers,
                             &v);
    v13 = boost::beast::http::basic_parser<true>::content_length_remaining((const boost::beast::http::basic_parser<true> *const)(v4 + 352));
    LODWORD(buffers.data_) = *(_DWORD *)&v13.m_initialized;
    buffers.size_ = v13.m_storage;
    v = 0;
    *(_QWORD *)(v4 + 96) = boost::optional<unsigned long>::value_or<int>(
                             (boost::optional<long unsigned int> *const)&buffers,
                             &v);
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/http_session.cpp",
      "onRecv",
      85);
    v14 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            (common::milog::MiLogStream *const)&val,
            (const char (*)[34])"parser.is_done is false, session:");
    v = common::minet::AServerSession::getSessionId(this);
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)&v);
    v16 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v15, (const char (*)[17])" content_length:");
    v17 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v16,
            (const unsigned __int64 *)(v4 + 64));
    v18 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            v17,
            (const char (*)[27])" content_length_remaining:");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v18, (const unsigned __int64 *)(v4 + 96));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    v11 = 11;
  }
  else
  {
    v19 = boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::get((boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char> > *const)(v4 + 352));
    boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::message(
      (boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const)(v4 + 192),
      v19);
    if ( common::minet::http_client::HttpUtils::initHttpRequest(
           (const common::minet::http_client::BeastHttpRequest *)(v4 + 192),
           &this->request_,
           0) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/network/http_session.cpp",
        "onRecv",
        93);
      v20 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              (common::milog::MiLogStream *const)&val,
              (const char (*)[25])"parse request fails, ip:");
      *(_QWORD *)(v4 + 96) = common::minet::AServerSession::getClientIp(this);
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v20, (const char *const *)(v4 + 96));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
        &v48,
        p_yield);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&val, "Error Request.", &__a);
      HttpSession::sendErrorRsp(this, 0xC8u, &val, &v48);
      std::string::~string(&val);
      std::allocator<char>::~allocator(&__a);
      boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v48);
      v11 = 1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v46,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/network/http_session.cpp",
        "onRecv",
        97);
      v21 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v46, (const char (*)[9])"target: ");
      buffers = (boost::asio::mutable_buffers_1)boost::beast::http::header<true,boost::beast::http::basic_fields<std::allocator<char>>>::target((const boost::beast::http::header<true,boost::beast::http::basic_fields<std::allocator<char> > > *const)(v4 + 192));
      std::allocator<char>::allocator(&__a);
      boost::basic_string_view<char,std::char_traits<char>>::to_string<std::allocator<char>>(
        &val,
        (const boost::basic_string_view<char,std::char_traits<char> > *const)&buffers,
        &__a);
      v22 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, &val);
      v23 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v22, (const char (*)[10])" session:");
      v = common::minet::AServerSession::getSessionId(this);
      v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)&v);
      v25 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v24, (const char (*)[8])" body: ");
      v26 = boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::body[abi:cxx11]((boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const)(v4 + 192));
      *(_QWORD *)(v4 + 96) = std::string::c_str(v26);
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v25, (const char *const *)(v4 + 96));
      std::string::~string(&val);
      std::allocator<char>::~allocator(&__a);
      common::milog::MiLogStream::~MiLogStream(&v46);
      if ( std::operator==<char>(&this->request_.uri, "alive") )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/network/http_session.cpp",
          "onRecv",
          101);
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          (common::milog::MiLogStream *const)&val,
          (const char (*)[23])"receive alive request!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
          &v48,
          p_yield);
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>(&val, "alive", &__a);
        HttpSession::sendTextRsp(this, 0xC8u, &val, &v48);
        std::string::~string(&val);
        std::allocator<char>::~allocator(&__a);
        boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v48);
        v11 = 1;
      }
      else
      {
        is_handle_uri = 1;
        if ( std::operator==<char>(&this->request_.uri, "getregiontier") )
        {
          boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
            &v48,
            p_yield);
          HttpSession::processGetRegionTie(this, &v48);
          boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v48);
        }
        else if ( std::operator==<char>(&this->request_.uri, "recharge") )
        {
          boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
            &v48,
            p_yield);
          HttpSession::processRecharge(this, &v48);
          boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v48);
        }
        else
        {
          is_handle_uri = 0;
          boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
            &v48,
            p_yield);
          std::allocator<char>::allocator(&__a);
          std::string::basic_string<std::allocator<char>>(&val, "Error Request uri.", &__a);
          HttpSession::sendErrorRsp(this, 0xC8u, &val, &v48);
          std::string::~string(&val);
          std::allocator<char>::~allocator(&__a);
          boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v48);
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&val,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/network/http_session.cpp",
            "onRecv",
            119);
          v27 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  (common::milog::MiLogStream *const)&val,
                  (const char (*)[17])"Not support uri:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v27, &this->request_.uri);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        }
        if ( is_handle_uri && *(__int64 *)(v4 + 32) > 1000 )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&val,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/network/http_session.cpp",
            "onRecv",
            124);
          v28 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                  (common::milog::MiLogStream *const)&val,
                  (const char (*)[56])"recv is late, maybe req too much,need more server, lag:");
          v29 = common::milog::MiLogStream::operator<<<long,(long *)0>(v28, (const __int64 *)(v4 + 32));
          common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v29, (const char (*)[3])"ms");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/network/http_session.cpp",
          "onRecv",
          127);
        v30 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                (common::milog::MiLogStream *const)&val,
                (const char (*)[11])"remote_ip:");
        *(_QWORD *)(v4 + 96) = common::minet::AServerSession::getClientIp(this);
        v31 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v30, (const char *const *)(v4 + 96));
        v32 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v31, (const char (*)[6])" uri:");
        v33 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v32, &this->request_.uri);
        v34 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v33, (const char (*)[10])" session:");
        SessionId = common::minet::AServerSession::getSessionId(this);
        v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &SessionId);
        v36 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v35, (const char (*)[12])", timecost:");
        v = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v4 + 128));
        v37 = common::milog::MiLogStream::operator<<<int,(int *)0>(v36, &v);
        common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v37, (const char (*)[3])"us");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        v11 = 1;
      }
    }
    boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::~message((boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const)(v4 + 192));
  }
  boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::~parser((boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char> > *const)(v4 + 352));
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v4 + 128));
  result = v11;
  if ( v49 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF804C) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8054) = 0;
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
  }
  return result;
};

// Line 133: range 000000000CA869B4-000000000CA870CF
void __cdecl HttpSession::processGetRegionTie(HttpSession *const this, boost::asio::yield_context *p_yield)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  Json::Value_0 *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  Json::Value_0 *v8; // rax
  Json::Value_0 *v9; // rax
  Json::Value *v10; // rax
  Json::Value *v11; // rax
  Json::Value_0 *v12; // rax
  bool is_internal; // [rsp+1Bh] [rbp-275h]
  int32_t ret; // [rsp+1Ch] [rbp-274h]
  std::map<std::string,std::string>::iterator __for_begin; // [rsp+20h] [rbp-270h] BYREF
  std::map<std::string,std::string>::iterator __for_end; // [rsp+28h] [rbp-268h] BYREF
  std::map<std::string,std::string> *__for_range; // [rsp+30h] [rbp-260h]
  const std::pair<const std::string,std::string > *v18; // [rsp+38h] [rbp-258h]
  std::tuple_element<0,const std::pair<const std::string,std::string > >::type *product_id; // [rsp+40h] [rbp-250h]
  std::tuple_element<1,const std::pair<const std::string,std::string > >::type *price_tier; // [rsp+48h] [rbp-248h]
  std::shared_ptr<Config> v21; // [rsp+50h] [rbp-240h] BYREF
  common::milog::MiLogStream v22; // [rsp+60h] [rbp-230h] BYREF
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > v23; // [rsp+80h] [rbp-210h] BYREF
  char v24[480]; // [rsp+B0h] [rbp-1E0h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL, p_yield);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 40 8 body:134 128 40 16 product_info:143 208 40 8 elem:146 288 40 8 data:151 368 48 15 product_map:138";
  *(_QWORD *)(v2 + 16) = HttpSession::processGetRegionTie;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862725] = -218959360;
  v4[536862726] = 62194;
  v4[536862727] = -234881024;
  v4[536862728] = -218959118;
  v4[536862730] = -218959360;
  v4[536862731] = 62194;
  v4[536862733] = -202116109;
  Json::Value::Value(v2 + 48, 0LL);
  Json::Value::Value((Json::Value *)(v2 + 288), 0);
  v5 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 48), "retcode");
  Json::Value::operator=(v5, (Json::Value_0 *)(v2 + 288));
  Json::Value::~Value((Json::Value_0 *const)(v2 + 288));
  ServiceBox::findService<OaserverService>();
  OaserverService::getConfig((OaserverService *const)&v21);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
  is_internal = Config::isInternalServer(v6);
  std::shared_ptr<Config>::~shared_ptr(&v21);
  std::map<std::string,std::string>::map((std::map<std::string,std::string> *const)(v2 + 368));
  ServiceBox::findService<OaserverService>();
  OaserverService::getConfig((OaserverService *const)&v21);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
  ret = ShopmallExcelConfigMgr::findDisplayProductTierMap(
          &v7->design_config.txt_config_mgr.shopmall_config_mgr,
          is_internal,
          (std::map<std::string,std::string> *)(v2 + 368));
  std::shared_ptr<Config>::~shared_ptr(&v21);
  if ( ret )
  {
    Json::Value::Value((Json::Value *)(v2 + 288), -1);
    v12 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 48), "retcode");
    Json::Value::operator=(v12, (Json::Value_0 *)(v2 + 288));
    Json::Value::~Value((Json::Value_0 *const)(v2 + 288));
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/http_session.cpp",
      "processGetRegionTie",
      158);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v22,
      (const char (*)[32])"findDisplayProductTierMap fails");
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  else
  {
    Json::Value::Value(v2 + 128, 0LL);
    __for_range = (std::map<std::string,std::string> *)(v2 + 368);
    __for_begin._M_node = std::map<std::string,std::string>::begin((std::map<std::string,std::string> *const)(v2 + 368))._M_node;
    __for_end._M_node = std::map<std::string,std::string>::end((std::map<std::string,std::string> *const)(v2 + 368))._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v18 = std::_Rb_tree_iterator<std::pair<std::string const,std::string>>::operator*(&__for_begin);
      product_id = std::get<0ul,std::string const,std::string>(v18);
      price_tier = (std::tuple_element<1,const std::pair<const std::string,std::string > >::type *)std::get<1ul,std::string const,std::string>(v18);
      Json::Value::Value(v2 + 208, 0LL);
      Json::Value::Value(v2 + 288, product_id);
      v8 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 208), "good_id");
      Json::Value::operator=(v8, (Json::Value_0 *)(v2 + 288));
      Json::Value::~Value((Json::Value_0 *const)(v2 + 288));
      Json::Value::Value(v2 + 288, price_tier);
      v9 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 208), "tier");
      Json::Value::operator=(v9, (Json::Value_0 *)(v2 + 288));
      Json::Value::~Value((Json::Value_0 *const)(v2 + 288));
      Json::Value::append((Json::Value *)(v2 + 128), (const Json::Value *)(v2 + 208));
      Json::Value::~Value((Json::Value_0 *const)(v2 + 208));
      std::_Rb_tree_iterator<std::pair<std::string const,std::string>>::operator++(&__for_begin);
    }
    Json::Value::Value(v2 + 288, 0LL);
    v10 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 288), "product_info");
    Json::Value::operator=(v10);
    v11 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 48), "data");
    Json::Value::operator=(v11);
    Json::Value::~Value((Json::Value_0 *const)(v2 + 288));
    Json::Value::~Value((Json::Value_0 *const)(v2 + 128));
  }
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
    &v23,
    p_yield);
  HttpSession::sendHttp(this, (const Json::Value *)(v2 + 48), &v23);
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v23);
  std::map<std::string,std::string>::~map((std::map<std::string,std::string> *const)(v2 + 368));
  Json::Value::~Value((Json::Value_0 *const)(v2 + 48));
  if ( v24 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
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
  }
};

// Line 166: range 000000000CA870D0-000000000CA8769A
void __cdecl HttpSession::processRecharge(HttpSession *const this, boost::asio::yield_context *p_yield)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  Json::Value_0 *v5; // rax
  Json::Value *v6; // rax
  std::_Rb_tree_iterator<std::pair<int const,std::string > >::pointer v7; // rax
  Json::Value_0 *v8; // rax
  std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  int NowMs; // ecx
  __int64 v11; // rdx
  OaserverService *v12; // rax
  std::allocator<char> v13; // [rsp+16h] [rbp-1EAh] BYREF
  std::allocator<char> __a; // [rsp+17h] [rbp-1E9h] BYREF
  std::_Rb_tree_iterator<std::pair<int const,std::string > >::_Self __y; // [rsp+18h] [rbp-1E8h] BYREF
  std::string label_key; // [rsp+20h] [rbp-1E0h] BYREF
  std::string label_value; // [rsp+40h] [rbp-1C0h] BYREF
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > v18; // [rsp+60h] [rbp-1A0h] BYREF
  char v19[368]; // [rsp+90h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL, p_yield);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 11 retcode:169 48 8 8 iter:174 80 40 15 detail_data:168 160 40 8 body:171 240 40 10 holder:188";
  *(_QWORD *)(v2 + 16) = HttpSession::processRecharge;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862728] = -218103808;
  v4[536862729] = -202116109;
  Json::Value::Value(v2 + 80, 0LL);
  *(_DWORD *)(v2 + 32) = HttpSession::processOrderReqeust(this, (Json::Value *)(v2 + 80));
  Json::Value::Value(v2 + 160, 0LL);
  Json::Value::Value((Json::Value *)(v2 + 240), *(_DWORD *)(v2 + 32));
  v5 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "retcode");
  Json::Value::operator=(v5, (Json::Value_0 *)(v2 + 240));
  Json::Value::~Value((Json::Value_0 *const)(v2 + 240));
  v6 = (Json::Value *)Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "data");
  Json::Value::operator=(v6);
  *(std::map<int,std::string>::iterator *)(v2 + 48) = std::map<int,std::string>::find(
                                                        &HttpSession::retcode_map[abi:cxx11],
                                                        (const std::map<int,std::string>::key_type *)(v2 + 32));
  __y._M_node = std::map<int,std::string>::end(&HttpSession::retcode_map[abi:cxx11])._M_node;
  if ( std::operator!=((const std::_Rb_tree_iterator<std::pair<int const,std::string > >::_Self *)(v2 + 48), &__y) )
  {
    v7 = std::_Rb_tree_iterator<std::pair<int const,std::string>>::operator->((const std::_Rb_tree_iterator<std::pair<int const,std::string > > *const)(v2 + 48));
    Json::Value::Value(v2 + 240, &v7->second);
  }
  else
  {
    Json::Value::Value((Json::Value *)(v2 + 240), "error");
  }
  v8 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 160), "message");
  Json::Value::operator=(v8, (Json::Value_0 *)(v2 + 240));
  Json::Value::~Value((Json::Value_0 *const)(v2 + 240));
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
    &v18,
    p_yield);
  HttpSession::sendHttp(this, (const Json::Value *)(v2 + 160), &v18);
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v18);
  if ( !*(_DWORD *)(v2 + 32) )
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&label_value, "SuccRechargeTimeCost", &__a);
    std::allocator<char>::allocator(&v13);
    std::string::basic_string<std::allocator<char>>(&label_key, "Name", &v13);
    MonitorReportUtils::ContextHolder::ContextHolder(
      (MonitorReportUtils::ContextHolder *const)(v2 + 240),
      &label_key,
      &label_value);
    std::string::~string(&label_key);
    std::allocator<char>::~allocator(&v13);
    std::string::~string(&label_value);
    std::allocator<char>::~allocator(&__a);
    v9 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
    NowMs = common::tools::TimeUtils::getNowMs();
    v11 = *(unsigned __int8 *)(((unsigned __int64)&this->create_time_ms_ >> 3) + 0x7FFF8000);
    if ( (_BYTE)v11 )
      __asan_report_load8(&this->create_time_ms_, &label_key, v11);
    MonitorReport::addValue(v9, MONITOR_SUCC_RECHARGE_TIMECOST, NowMs - this->create_time_ms_);
    MonitorReportUtils::ContextHolder::~ContextHolder((MonitorReportUtils::ContextHolder *const)(v2 + 240));
  }
  v12 = ServiceBox::findService<OaserverService>();
  OaserverService::incProcessRechargeNum(v12);
  Json::Value::~Value((Json::Value_0 *const)(v2 + 160));
  Json::Value::~Value((Json::Value_0 *const)(v2 + 80));
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 197: range 000000000CA8769C-000000000CA883BD
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl HttpSession::processOrderReqeust(HttpSession *const this, Json::Value *data)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rbx
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // r14
  Json::Value_0 *v8; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  common::milog::MiLogStream *v34; // rax
  std::string dataa; // [rsp+0h] [rbp-6C0h] OVERLAPPED BYREF
  common::milog::MiLogStream v37; // [rsp+20h] [rbp-6A0h] BYREF
  Json::Value_0 other; // [rsp+40h] [rbp-680h] BYREF
  char v39[1616]; // [rsp+70h] [rbp-650h] BYREF

  dataa._M_string_length = (std::string::size_type)this;
  dataa._M_dataplus._M_p = (std::string::pointer)data;
  v2 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1568LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 1 10 holder:212 48 4 7 ret:205 64 4 12 order_id:251 80 16 9 timer:250 112 592 9 order:204 8"
                        "32 600 7 row:222";
  *(_QWORD *)(v2 + 16) = HttpSession::processOrderReqeust;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = 61956;
  v4[536862723] = 62194;
  v4[536862742] = -218959118;
  v4[536862743] = -218959118;
  v4[536862744] = -218959118;
  v4[536862745] = -218959118;
  v4[536862764] = -218103808;
  v4[536862765] = -202116109;
  v4[536862766] = -202116109;
  v4[536862767] = -202116109;
  v4[536862768] = -202116109;
  if ( !HttpSession::isSignValid((const HttpSession *const)dataa._M_string_length) )
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/http_session.cpp",
      "processOrderReqeust",
      200);
    v5 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v37,
           (const char (*)[27])"sign is invalid!, session:");
    *((_DWORD *)&dataa._anon_0._M_allocated_capacity + 3) = common::minet::AServerSession::getSessionId((const common::minet::AServerSession *const)dataa._M_string_length);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v5,
      (const unsigned int *)&dataa._anon_0._M_allocated_capacity + 3);
    common::milog::MiLogStream::~MiLogStream(&v37);
    v6 = 2;
  }
  else
  {
    Order::Order((Order *const)(v2 + 112));
    *(_DWORD *)(v2 + 48) = HttpSession::createOrder((HttpSession *const)dataa._M_string_length, (Order *)(v2 + 112));
    if ( *(_DWORD *)(v2 + 48) )
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/network/http_session.cpp",
        "processOrderReqeust",
        208);
      v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             &v37,
             (const char (*)[28])"createOrder fails, session:");
      *((_DWORD *)&dataa._anon_0._M_allocated_capacity + 3) = common::minet::AServerSession::getSessionId((const common::minet::AServerSession *const)dataa._M_string_length);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v7,
        (const unsigned int *)&dataa._anon_0._M_allocated_capacity + 3);
      common::milog::MiLogStream::~MiLogStream(&v37);
      v6 = *(_DWORD *)(v2 + 48);
    }
    else
    {
      std::allocator<char>::allocator((char *)&dataa._anon_0._M_allocated_capacity + 7);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)&v37,
        byte_1A31C760,
        (const std::allocator<char> *)&dataa._anon_0._M_allocated_capacity + 7);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 1u, dataa);
      std::string::~string(&v37);
      std::allocator<char>::~allocator((char *)&dataa._anon_0._M_allocated_capacity + 7);
      Json::Value::Value(&other, v2 + 288);
      v8 = Json::Value::operator[]((Json::Value_0 *const)dataa._M_dataplus._M_p, "delivery_no");
      Json::Value::operator=(v8, &other);
      Json::Value::~Value(&other);
      *(_DWORD *)(v2 + 48) = HttpSession::checkOrderValid(
                               (const HttpSession *const)dataa._M_string_length,
                               (const Order *)(v2 + 112));
      if ( *(_DWORD *)(v2 + 48) )
      {
        common::milog::MiLogStream::create(
          &v37,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/network/http_session.cpp",
          "processOrderReqeust",
          218);
        v9 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
               &v37,
               (const char (*)[32])"checkOrderValid fails, session:");
        *((_DWORD *)&dataa._anon_0._M_allocated_capacity + 3) = common::minet::AServerSession::getSessionId((const common::minet::AServerSession *const)dataa._M_string_length);
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)&dataa._anon_0._M_allocated_capacity + 3);
        v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" trade_no:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, (const std::string *)(v2 + 288));
        common::milog::MiLogStream::~MiLogStream(&v37);
        v6 = *(_DWORD *)(v2 + 48);
      }
      else
      {
        TableOrderData::TableOrderData((TableOrderData *const)(v2 + 832));
        *(_DWORD *)(v2 + 832) = 0;
        *(_DWORD *)(v2 + 836) = *(_DWORD *)(v2 + 116);
        std::string::operator=(v2 + 840, v2 + 120);
        std::string::operator=(v2 + 872, v2 + 152);
        *(_DWORD *)(v2 + 904) = *(_DWORD *)(v2 + 184);
        *(_DWORD *)(v2 + 908) = *(_DWORD *)(v2 + 188);
        std::string::operator=(v2 + 912, v2 + 192);
        std::string::operator=(v2 + 944, v2 + 224);
        std::string::operator=(v2 + 976, v2 + 256);
        std::string::operator=(v2 + 1008, v2 + 288);
        *(_DWORD *)(v2 + 1040) = *(_DWORD *)(v2 + 320);
        *(_DWORD *)(v2 + 1044) = *(_DWORD *)(v2 + 360);
        std::string::operator=(v2 + 1048, v2 + 368);
        std::string::operator=(v2 + 1080, v2 + 400);
        std::string::operator=(v2 + 1112, v2 + 432);
        std::string::operator=(v2 + 1184, v2 + 328);
        std::string::operator=(v2 + 1144, v2 + 464);
        *(_DWORD *)(v2 + 1176) = *(_DWORD *)(v2 + 496);
        std::string::operator=(v2 + 1216, v2 + 504);
        *(_DWORD *)(v2 + 1248) = *(_DWORD *)(v2 + 536);
        *(_DWORD *)(v2 + 1252) = *(_DWORD *)(v2 + 540);
        std::string::operator=(v2 + 1264, v2 + 544);
        std::string::operator=(v2 + 1296, v2 + 576);
        std::string::operator=(v2 + 1328, v2 + 608);
        std::string::operator=(v2 + 1360, v2 + 640);
        std::string::operator=(v2 + 1392, v2 + 672);
        common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 80));
        *(_DWORD *)(v2 + 64) = 0;
        *(_DWORD *)(v2 + 48) = MysqlOpOrder::insertOrder((const TableOrderData *)(v2 + 832), (uint32_t *)(v2 + 64));
        if ( *(_DWORD *)(v2 + 48) )
        {
          if ( *(_DWORD *)(v2 + 48) == 24 )
          {
            common::milog::MiLogStream::create(
              &v37,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/network/http_session.cpp",
              "processOrderReqeust",
              258);
            v12 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    &v37,
                    (const char (*)[17])"insertOrder uid:");
            v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v12,
                    (const unsigned int *)(v2 + 116));
            v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" trade_no:");
            v15 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                    v14,
                    (const std::string *)(v2 + 288));
            common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v15,
              (const char (*)[21])" RET_MYSQL_DUPLICATE");
            common::milog::MiLogStream::~MiLogStream(&v37);
            v6 = 0;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v37,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/network/http_session.cpp",
              "processOrderReqeust",
              261);
            v16 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    &v37,
                    (const char (*)[17])"insertOrder uid:");
            v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v16,
                    (const unsigned int *)(v2 + 116));
            v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])" trade_no:");
            v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                    v18,
                    (const std::string *)(v2 + 288));
            v20 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])"fails:");
            common::milog::MiLogStream::operator<<<int,(int *)0>(v20, (const int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v37);
            v6 = *(_DWORD *)(v2 + 48);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v37,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/network/http_session.cpp",
            "processOrderReqeust",
            264);
          v21 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v37,
                  (const char (*)[30])"----[perf] insertOrder cost: ");
          *((_DWORD *)&dataa._anon_0._M_allocated_capacity + 2) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 80));
          v22 = common::milog::MiLogStream::operator<<<int,(int *)0>(
                  v21,
                  (const int *)&dataa._anon_0._M_allocated_capacity + 2);
          v23 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v22, (const char (*)[12])"us session:");
          *((_DWORD *)&dataa._anon_0._M_allocated_capacity + 3) = common::minet::AServerSession::getSessionId((const common::minet::AServerSession *const)dataa._M_string_length);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v23,
            (const unsigned int *)&dataa._anon_0._M_allocated_capacity + 3);
          common::milog::MiLogStream::~MiLogStream(&v37);
          *(_DWORD *)(v2 + 112) = *(_DWORD *)(v2 + 64);
          common::milog::MiLogStream::create(
            &v37,
            &common::milog::MiLogDefault::default_log_obj_,
            2u,
            "./src/network/http_session.cpp",
            "processOrderReqeust",
            268);
          v24 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                  &v37,
                  (const char (*)[23])"insertOrder order_uid:");
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v24,
                  (const unsigned int *)(v2 + 64));
          v26 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v25, (const char (*)[6])" uid:");
          v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v26,
                  (const unsigned int *)(v2 + 116));
          v28 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v27, (const char (*)[11])" trade_no:");
          v29 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                  v28,
                  (const std::string *)(v2 + 288));
          v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v29,
                  (const unsigned int *)(v2 + 360));
          v31 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v30, (const char (*)[2])":");
          v32 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                  v31,
                  (const std::string *)(v2 + 368));
          v33 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v32, (const char (*)[10])" session:");
          *((_DWORD *)&dataa._anon_0._M_allocated_capacity + 3) = common::minet::AServerSession::getSessionId((const common::minet::AServerSession *const)dataa._M_string_length);
          v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v33,
                  (const unsigned int *)&dataa._anon_0._M_allocated_capacity + 3);
          common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v34, (const char (*)[6])" succ");
          common::milog::MiLogStream::~MiLogStream(&v37);
          HttpSession::logOrderAddStateLog((HttpSession *const)dataa._M_string_length, (const Order *)(v2 + 112));
          HttpSession::notifyGameserver((const HttpSession *const)dataa._M_string_length, (const Order *)(v2 + 112));
          v6 = 0;
        }
        common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 80));
        TableOrderData::~TableOrderData((TableOrderData *const)(v2 + 832));
      }
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
    }
    Order::~Order((Order *const)(v2 + 112));
  }
  if ( v39 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80B0) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80B8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80C0) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1568LL, v39);
  }
  return v6;
};

// Line 280: range 000000000CA883BE-000000000CA88928
bool __cdecl HttpSession::isSignValid(const HttpSession *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  bool v4; // r14
  OaserverService *v6; // rsi
  std::string *p_recharge_pub_key; // r14
  const EVP_MD *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  bool result; // al
  std::allocator<char> __a; // [rsp+12h] [rbp-12Eh] BYREF
  bool is_valid; // [rsp+13h] [rbp-12Dh]
  unsigned int val; // [rsp+14h] [rbp-12Ch] BYREF
  std::map<std::string,std::string>::const_iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::map<std::string,std::string>::const_iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  const std::string *sign; // [rsp+28h] [rbp-118h]
  const std::map<std::string,std::string> *__for_range; // [rsp+30h] [rbp-110h]
  const std::pair<const std::string,std::string > *v22; // [rsp+38h] [rbp-108h]
  std::tuple_element<0,const std::pair<const std::string,std::string > >::type *key; // [rsp+40h] [rbp-100h]
  std::tuple_element<1,const std::pair<const std::string,std::string > >::type *value; // [rsp+48h] [rbp-F8h]
  std::string __x; // [rsp+50h] [rbp-F0h] BYREF
  char v26[208]; // [rsp+70h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 8 8 iter:281 64 16 14 config_ptr:305 96 32 16 sign_content:289";
  *(_QWORD *)(v1 + 16) = HttpSession::isSignValid;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__x, "sign", &__a);
  *(std::map<std::string,std::string>::const_iterator *)(v1 + 32) = std::map<std::string,std::string>::find(
                                                                      &this->request_.param_map,
                                                                      &__x);
  std::string::~string(&__x);
  std::allocator<char>::~allocator(&__a);
  __for_end._M_node = std::map<std::string,std::string>::end(&this->request_.param_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > >::_Self *)(v1 + 32),
         &__for_end) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&__x,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/http_session.cpp",
      "isSignValid",
      284);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
      (common::milog::MiLogStream *const)&__x,
      (const char (*)[19])"Not found sign key");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
    v4 = 0;
  }
  else
  {
    sign = &std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > > *const)(v1 + 32))->second;
    std::string::basic_string(v1 + 96);
    __for_range = &this->request_.param_map;
    __for_begin._M_node = std::map<std::string,std::string>::begin(&this->request_.param_map)._M_node;
    __for_end._M_node = std::map<std::string,std::string>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v22 = std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>::operator*(&__for_begin);
      key = std::get<0ul,std::string const,std::string>(v22);
      value = (std::tuple_element<1,const std::pair<const std::string,std::string > >::type *)std::get<1ul,std::string const,std::string>(v22);
      if ( !(unsigned __int8)std::string::empty(key) && !std::operator==<char>("sign", key) )
      {
        if ( (unsigned __int8)std::string::empty(v1 + 96) != 1 )
          std::string::append(v1 + 96, "&");
        std::string::append(v1 + 96, key);
        std::string::append(v1 + 96, "=");
        std::string::append(v1 + 96, value);
      }
      std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>::operator++(&__for_begin);
    }
    v6 = ServiceBox::findService<OaserverService>();
    OaserverService::getConfig((OaserverService *const)(v1 + 64));
    p_recharge_pub_key = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64))->recharge_pub_key;
    v8 = (const EVP_MD *)EVP_sha256(v1 + 64, v6);
    is_valid = common::tools::RsaUtils::isSignValid(v8, (const std::string *)(v1 + 96), sign, p_recharge_pub_key);
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&__x,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/http_session.cpp",
      "isSignValid",
      307);
    v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
           (common::milog::MiLogStream *const)&__x,
           (const char (*)[15])"sign_content: ");
    v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, (const std::string *)(v1 + 96));
    v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" is_valid: ");
    v12 = common::milog::MiLogStream::operator<<(v11, is_valid);
    v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])" session:");
    val = common::minet::AServerSession::getSessionId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
    v4 = is_valid;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 64));
    std::string::~string((void *)(v1 + 96));
  }
  result = v4;
  if ( v26 == (char *)v1 )
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

// Line 314: range 000000000CA8892A-000000000CA8BADD
int32_t __cdecl HttpSession::createOrder(HttpSession *const this, Order *order)
{
  std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > >::_Self *v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > >::pointer v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > >::pointer v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > >::pointer v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > >::pointer v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > >::pointer v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > >::pointer v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > >::pointer v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > >::pointer v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > >::pointer v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > >::pointer v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > >::pointer v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > >::pointer v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > >::pointer v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > >::pointer v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > >::pointer v74; // rax
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > >::pointer v77; // rax
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > >::pointer v80; // rax
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > >::pointer v83; // rax
  common::milog::MiLogStream *v84; // rax
  common::milog::MiLogStream *v85; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > >::pointer v86; // rax
  common::milog::MiLogStream *v87; // rax
  common::milog::MiLogStream *v88; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > >::pointer v89; // rax
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > >::pointer v92; // rax
  common::milog::MiLogStream *v93; // rax
  common::milog::MiLogStream *v94; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > >::pointer v95; // rax
  common::milog::MiLogStream *v96; // rax
  common::milog::MiLogStream *v97; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > >::pointer v98; // rax
  common::milog::MiLogStream *v99; // rax
  common::milog::MiLogStream *v100; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > >::pointer v101; // rax
  common::milog::MiLogStream *v102; // rax
  common::milog::MiLogStream *v103; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > >::pointer v104; // rax
  common::milog::MiLogStream *v105; // rax
  common::milog::MiLogStream *v106; // rax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-A1h] BYREF
  std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > >::_Self __y; // [rsp+20h] [rbp-A0h] BYREF
  const std::map<std::string,std::string> *param_map; // [rsp+28h] [rbp-98h]
  std::string __x; // [rsp+30h] [rbp-90h] BYREF
  char v111[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > >::_Self *)v111;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > >::_Self *)v3;
  }
  v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > >::_Base_ptr)"1 32 8 8 iter:382";
  v2[2]._M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > >::_Base_ptr)HttpSession::createOrder;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  param_map = &this->request_.param_map;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__x, off_1A3AC5E0[0], &__a);
  v2[4]._M_node = std::map<std::string,std::string>::find(param_map, &__x)._M_node;
  std::string::~string(&__x);
  std::allocator<char>::~allocator(&__a);
  __y._M_node = std::map<std::string,std::string>::end(param_map)._M_node;
  if ( std::operator==(v2 + 4, &__y) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&__x,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/http_session.cpp",
      "createOrder",
      333);
    v5 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
           (common::milog::MiLogStream *const)&__x,
           (const char (*)[6])"key: ");
    v6 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v5, off_1A3AC5E0);
    common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v6, (const char (*)[11])" not found");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
    result = 1;
  }
  else
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>::operator->(v2 + 4);
    if ( common::tools::ConvertUtils::convertTo<unsigned int>(&v8->second, &order->uid, 0) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__x,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/network/http_session.cpp",
        "createOrder",
        333);
      v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
             (common::milog::MiLogStream *const)&__x,
             (const char (*)[6])"key: ");
      v10 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v9, off_1A3AC5E0);
      common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v10, (const char (*)[15])" convert fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
      result = 1;
    }
    else
    {
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&__x, aProductId_0[0], &__a);
      v2[4]._M_node = std::map<std::string,std::string>::find(param_map, &__x)._M_node;
      std::string::~string(&__x);
      std::allocator<char>::~allocator(&__a);
      __y._M_node = std::map<std::string,std::string>::end(param_map)._M_node;
      if ( std::operator==(v2 + 4, &__y) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&__x,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/network/http_session.cpp",
          "createOrder",
          334);
        v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                (common::milog::MiLogStream *const)&__x,
                (const char (*)[6])"key: ");
        v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, "product_id");
        common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])" not found");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
        result = 1;
      }
      else
      {
        v13 = std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>::operator->(v2 + 4);
        if ( common::tools::ConvertUtils::convertTo(&v13->second, &order->product_id, 0) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&__x,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/network/http_session.cpp",
            "createOrder",
            334);
          v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                  (common::milog::MiLogStream *const)&__x,
                  (const char (*)[6])"key: ");
          v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, "product_id");
          common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v15, (const char (*)[15])" convert fails");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
          result = 1;
        }
        else
        {
          std::allocator<char>::allocator(&__a);
          std::string::basic_string<std::allocator<char>>(&__x, aProductName[0], &__a);
          v2[4]._M_node = std::map<std::string,std::string>::find(param_map, &__x)._M_node;
          std::string::~string(&__x);
          std::allocator<char>::~allocator(&__a);
          __y._M_node = std::map<std::string,std::string>::end(param_map)._M_node;
          if ( std::operator==(v2 + 4, &__y) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&__x,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/network/http_session.cpp",
              "createOrder",
              335);
            v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                    (common::milog::MiLogStream *const)&__x,
                    (const char (*)[6])"key: ");
            v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v16, "product_name");
            common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])" not found");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
            result = 1;
          }
          else
          {
            v18 = std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>::operator->(v2 + 4);
            if ( common::tools::ConvertUtils::convertTo(&v18->second, &order->product_name, 0) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&__x,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/network/http_session.cpp",
                "createOrder",
                335);
              v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                      (common::milog::MiLogStream *const)&__x,
                      (const char (*)[6])"key: ");
              v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v19, "product_name");
              common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v20, (const char (*)[15])" convert fails");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
              result = 1;
            }
            else
            {
              std::allocator<char>::allocator(&__a);
              std::string::basic_string<std::allocator<char>>(&__x, aProductNum[0], &__a);
              v2[4]._M_node = std::map<std::string,std::string>::find(param_map, &__x)._M_node;
              std::string::~string(&__x);
              std::allocator<char>::~allocator(&__a);
              __y._M_node = std::map<std::string,std::string>::end(param_map)._M_node;
              if ( std::operator==(v2 + 4, &__y) )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&__x,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/network/http_session.cpp",
                  "createOrder",
                  336);
                v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                        (common::milog::MiLogStream *const)&__x,
                        (const char (*)[6])"key: ");
                v22 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v21, "product_num");
                common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v22, (const char (*)[11])" not found");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
                result = 1;
              }
              else
              {
                v23 = std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>::operator->(v2 + 4);
                if ( common::tools::ConvertUtils::convertTo<unsigned int>(&v23->second, &order->product_num, 0) )
                {
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)&__x,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/network/http_session.cpp",
                    "createOrder",
                    336);
                  v24 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                          (common::milog::MiLogStream *const)&__x,
                          (const char (*)[6])"key: ");
                  v25 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v24, "product_num");
                  common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v25,
                    (const char (*)[15])" convert fails");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
                  result = 1;
                }
                else
                {
                  std::allocator<char>::allocator(&__a);
                  std::string::basic_string<std::allocator<char>>(&__x, aTotalFee[0], &__a);
                  v2[4]._M_node = std::map<std::string,std::string>::find(param_map, &__x)._M_node;
                  std::string::~string(&__x);
                  std::allocator<char>::~allocator(&__a);
                  __y._M_node = std::map<std::string,std::string>::end(param_map)._M_node;
                  if ( std::operator==(v2 + 4, &__y) )
                  {
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)&__x,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/network/http_session.cpp",
                      "createOrder",
                      337);
                    v26 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                            (common::milog::MiLogStream *const)&__x,
                            (const char (*)[6])"key: ");
                    v27 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v26, "total_fee");
                    common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v27,
                      (const char (*)[11])" not found");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
                    result = 1;
                  }
                  else
                  {
                    v28 = std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>::operator->(v2 + 4);
                    if ( common::tools::ConvertUtils::convertTo(&v28->second, &order->total_fee, 0) )
                    {
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)&__x,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/network/http_session.cpp",
                        "createOrder",
                        337);
                      v29 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                              (common::milog::MiLogStream *const)&__x,
                              (const char (*)[6])"key: ");
                      v30 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v29, "total_fee");
                      common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                        v30,
                        (const char (*)[15])" convert fails");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
                      result = 1;
                    }
                    else
                    {
                      std::allocator<char>::allocator(&__a);
                      std::string::basic_string<std::allocator<char>>(&__x, aCurrency[0], &__a);
                      v2[4]._M_node = std::map<std::string,std::string>::find(param_map, &__x)._M_node;
                      std::string::~string(&__x);
                      std::allocator<char>::~allocator(&__a);
                      __y._M_node = std::map<std::string,std::string>::end(param_map)._M_node;
                      if ( std::operator==(v2 + 4, &__y) )
                      {
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)&__x,
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/network/http_session.cpp",
                          "createOrder",
                          338);
                        v31 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                (common::milog::MiLogStream *const)&__x,
                                (const char (*)[6])"key: ");
                        v32 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v31, "currency");
                        common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                          v32,
                          (const char (*)[11])" not found");
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
                        result = 1;
                      }
                      else
                      {
                        v33 = std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>::operator->(v2 + 4);
                        if ( common::tools::ConvertUtils::convertTo(&v33->second, &order->currency, 0) )
                        {
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)&__x,
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/network/http_session.cpp",
                            "createOrder",
                            338);
                          v34 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                  (common::milog::MiLogStream *const)&__x,
                                  (const char (*)[6])"key: ");
                          v35 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v34, "currency");
                          common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                            v35,
                            (const char (*)[15])" convert fails");
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
                          result = 1;
                        }
                        else
                        {
                          std::allocator<char>::allocator(&__a);
                          std::string::basic_string<std::allocator<char>>(&__x, aTradeNo_0[0], &__a);
                          v2[4]._M_node = std::map<std::string,std::string>::find(param_map, &__x)._M_node;
                          std::string::~string(&__x);
                          std::allocator<char>::~allocator(&__a);
                          __y._M_node = std::map<std::string,std::string>::end(param_map)._M_node;
                          if ( std::operator==(v2 + 4, &__y) )
                          {
                            common::milog::MiLogStream::create(
                              (common::milog::MiLogStream *)&__x,
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/network/http_session.cpp",
                              "createOrder",
                              339);
                            v36 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                    (common::milog::MiLogStream *const)&__x,
                                    (const char (*)[6])"key: ");
                            v37 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v36, "trade_no");
                            common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                              v37,
                              (const char (*)[11])" not found");
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
                            result = 1;
                          }
                          else
                          {
                            v38 = std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>::operator->(v2 + 4);
                            if ( common::tools::ConvertUtils::convertTo(&v38->second, &order->trade_no, 0) )
                            {
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)&__x,
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/network/http_session.cpp",
                                "createOrder",
                                339);
                              v39 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                      (common::milog::MiLogStream *const)&__x,
                                      (const char (*)[6])"key: ");
                              v40 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v39, "trade_no");
                              common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                                v40,
                                (const char (*)[15])" convert fails");
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
                              result = 1;
                            }
                            else
                            {
                              std::allocator<char>::allocator(&__a);
                              std::string::basic_string<std::allocator<char>>(&__x, aTradeTime_0[0], &__a);
                              v2[4]._M_node = std::map<std::string,std::string>::find(param_map, &__x)._M_node;
                              std::string::~string(&__x);
                              std::allocator<char>::~allocator(&__a);
                              __y._M_node = std::map<std::string,std::string>::end(param_map)._M_node;
                              if ( std::operator==(v2 + 4, &__y) )
                              {
                                common::milog::MiLogStream::create(
                                  (common::milog::MiLogStream *)&__x,
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "./src/network/http_session.cpp",
                                  "createOrder",
                                  340);
                                v41 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                        (common::milog::MiLogStream *const)&__x,
                                        (const char (*)[6])"key: ");
                                v42 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v41, "trade_time");
                                common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                                  v42,
                                  (const char (*)[11])" not found");
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
                                result = 1;
                              }
                              else
                              {
                                v43 = std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>::operator->(v2 + 4);
                                if ( common::tools::ConvertUtils::convertTo<unsigned int>(
                                       &v43->second,
                                       &order->trade_time,
                                       0) )
                                {
                                  common::milog::MiLogStream::create(
                                    (common::milog::MiLogStream *)&__x,
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "./src/network/http_session.cpp",
                                    "createOrder",
                                    340);
                                  v44 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                          (common::milog::MiLogStream *const)&__x,
                                          (const char (*)[6])"key: ");
                                  v45 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                                          v44,
                                          "trade_time");
                                  common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                                    v45,
                                    (const char (*)[15])" convert fails");
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
                                  result = 1;
                                }
                                else
                                {
                                  std::allocator<char>::allocator(&__a);
                                  std::string::basic_string<std::allocator<char>>(&__x, aRegion[0], &__a);
                                  v2[4]._M_node = std::map<std::string,std::string>::find(param_map, &__x)._M_node;
                                  std::string::~string(&__x);
                                  std::allocator<char>::~allocator(&__a);
                                  __y._M_node = std::map<std::string,std::string>::end(param_map)._M_node;
                                  if ( std::operator==(v2 + 4, &__y) )
                                  {
                                    common::milog::MiLogStream::create(
                                      (common::milog::MiLogStream *)&__x,
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      4u,
                                      "./src/network/http_session.cpp",
                                      "createOrder",
                                      341);
                                    v46 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                            (common::milog::MiLogStream *const)&__x,
                                            (const char (*)[6])"key: ");
                                    v47 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v46, "region");
                                    common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                                      v47,
                                      (const char (*)[11])" not found");
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
                                    result = 1;
                                  }
                                  else
                                  {
                                    v48 = std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>::operator->(v2 + 4);
                                    if ( common::tools::ConvertUtils::convertTo(&v48->second, &order->region, 0) )
                                    {
                                      common::milog::MiLogStream::create(
                                        (common::milog::MiLogStream *)&__x,
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        4u,
                                        "./src/network/http_session.cpp",
                                        "createOrder",
                                        341);
                                      v49 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                              (common::milog::MiLogStream *const)&__x,
                                              (const char (*)[6])"key: ");
                                      v50 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v49, "region");
                                      common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                                        v50,
                                        (const char (*)[15])" convert fails");
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
                                      result = 1;
                                    }
                                    else
                                    {
                                      std::allocator<char>::allocator(&__a);
                                      std::string::basic_string<std::allocator<char>>(&__x, aChannelId[0], &__a);
                                      v2[4]._M_node = std::map<std::string,std::string>::find(param_map, &__x)._M_node;
                                      std::string::~string(&__x);
                                      std::allocator<char>::~allocator(&__a);
                                      __y._M_node = std::map<std::string,std::string>::end(param_map)._M_node;
                                      if ( std::operator==(v2 + 4, &__y) )
                                      {
                                        common::milog::MiLogStream::create(
                                          (common::milog::MiLogStream *)&__x,
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          4u,
                                          "./src/network/http_session.cpp",
                                          "createOrder",
                                          342);
                                        v51 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                                (common::milog::MiLogStream *const)&__x,
                                                (const char (*)[6])"key: ");
                                        v52 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                                                v51,
                                                "channel_id");
                                        common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                                          v52,
                                          (const char (*)[11])" not found");
                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
                                        result = 1;
                                      }
                                      else
                                      {
                                        v53 = std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>::operator->(v2 + 4);
                                        if ( common::tools::ConvertUtils::convertTo<unsigned int>(
                                               &v53->second,
                                               &order->channel_id,
                                               0) )
                                        {
                                          common::milog::MiLogStream::create(
                                            (common::milog::MiLogStream *)&__x,
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            4u,
                                            "./src/network/http_session.cpp",
                                            "createOrder",
                                            342);
                                          v54 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                                  (common::milog::MiLogStream *const)&__x,
                                                  (const char (*)[6])"key: ");
                                          v55 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                                                  v54,
                                                  "channel_id");
                                          common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                                            v55,
                                            (const char (*)[15])" convert fails");
                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
                                          result = 1;
                                        }
                                        else
                                        {
                                          std::allocator<char>::allocator(&__a);
                                          std::string::basic_string<std::allocator<char>>(
                                            &__x,
                                            aChannelOrderNo[0],
                                            &__a);
                                          v2[4]._M_node = std::map<std::string,std::string>::find(param_map, &__x)._M_node;
                                          std::string::~string(&__x);
                                          std::allocator<char>::~allocator(&__a);
                                          __y._M_node = std::map<std::string,std::string>::end(param_map)._M_node;
                                          if ( std::operator==(v2 + 4, &__y) )
                                          {
                                            common::milog::MiLogStream::create(
                                              (common::milog::MiLogStream *)&__x,
                                              &common::milog::MiLogDefault::default_log_obj_,
                                              4u,
                                              "./src/network/http_session.cpp",
                                              "createOrder",
                                              343);
                                            v56 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                                    (common::milog::MiLogStream *const)&__x,
                                                    (const char (*)[6])"key: ");
                                            v57 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                                                    v56,
                                                    "channel_order_no");
                                            common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                                              v57,
                                              (const char (*)[11])" not found");
                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
                                            result = 1;
                                          }
                                          else
                                          {
                                            v58 = std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>::operator->(v2 + 4);
                                            if ( common::tools::ConvertUtils::convertTo(
                                                   &v58->second,
                                                   &order->channel_order_no,
                                                   0) )
                                            {
                                              common::milog::MiLogStream::create(
                                                (common::milog::MiLogStream *)&__x,
                                                &common::milog::MiLogDefault::default_log_obj_,
                                                4u,
                                                "./src/network/http_session.cpp",
                                                "createOrder",
                                                343);
                                              v59 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                                      (common::milog::MiLogStream *const)&__x,
                                                      (const char (*)[6])"key: ");
                                              v60 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                                                      v59,
                                                      "channel_order_no");
                                              common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                                                v60,
                                                (const char (*)[15])" convert fails");
                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
                                              result = 1;
                                            }
                                            else
                                            {
                                              std::allocator<char>::allocator(&__a);
                                              std::string::basic_string<std::allocator<char>>(&__x, aPayPlat_0[0], &__a);
                                              v2[4]._M_node = std::map<std::string,std::string>::find(param_map, &__x)._M_node;
                                              std::string::~string(&__x);
                                              std::allocator<char>::~allocator(&__a);
                                              __y._M_node = std::map<std::string,std::string>::end(param_map)._M_node;
                                              if ( std::operator==(v2 + 4, &__y) )
                                              {
                                                common::milog::MiLogStream::create(
                                                  (common::milog::MiLogStream *)&__x,
                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                  4u,
                                                  "./src/network/http_session.cpp",
                                                  "createOrder",
                                                  344);
                                                v61 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                                        (common::milog::MiLogStream *const)&__x,
                                                        (const char (*)[6])"key: ");
                                                v62 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                                                        v61,
                                                        "pay_plat");
                                                common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                                                  v62,
                                                  (const char (*)[11])" not found");
                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
                                                result = 1;
                                              }
                                              else
                                              {
                                                v63 = std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>::operator->(v2 + 4);
                                                if ( common::tools::ConvertUtils::convertTo(
                                                       &v63->second,
                                                       &order->pay_plat,
                                                       0) )
                                                {
                                                  common::milog::MiLogStream::create(
                                                    (common::milog::MiLogStream *)&__x,
                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                    4u,
                                                    "./src/network/http_session.cpp",
                                                    "createOrder",
                                                    344);
                                                  v64 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                                          (common::milog::MiLogStream *const)&__x,
                                                          (const char (*)[6])"key: ");
                                                  v65 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                                                          v64,
                                                          "pay_plat");
                                                  common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                                                    v65,
                                                    (const char (*)[15])" convert fails");
                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
                                                  result = 1;
                                                }
                                                else
                                                {
                                                  std::allocator<char>::allocator(&__a);
                                                  std::string::basic_string<std::allocator<char>>(
                                                    &__x,
                                                    off_1A3AC9E0[0],
                                                    &__a);
                                                  v2[4]._M_node = std::map<std::string,std::string>::find(
                                                                    param_map,
                                                                    &__x)._M_node;
                                                  std::string::~string(&__x);
                                                  std::allocator<char>::~allocator(&__a);
                                                  __y._M_node = std::map<std::string,std::string>::end(param_map)._M_node;
                                                  if ( std::operator==(v2 + 4, &__y) )
                                                  {
                                                    common::milog::MiLogStream::create(
                                                      (common::milog::MiLogStream *)&__x,
                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                      4u,
                                                      "./src/network/http_session.cpp",
                                                      "createOrder",
                                                      345);
                                                    v66 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                                            (common::milog::MiLogStream *const)&__x,
                                                            (const char (*)[6])"key: ");
                                                    v67 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(
                                                            v66,
                                                            off_1A3AC9E0);
                                                    common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                                                      v67,
                                                      (const char (*)[11])" not found");
                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
                                                    result = 1;
                                                  }
                                                  else
                                                  {
                                                    v68 = std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>::operator->(v2 + 4);
                                                    if ( common::tools::ConvertUtils::convertTo(
                                                           &v68->second,
                                                           &order->env,
                                                           0) )
                                                    {
                                                      common::milog::MiLogStream::create(
                                                        (common::milog::MiLogStream *)&__x,
                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                        4u,
                                                        "./src/network/http_session.cpp",
                                                        "createOrder",
                                                        345);
                                                      v69 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                                              (common::milog::MiLogStream *const)&__x,
                                                              (const char (*)[6])"key: ");
                                                      v70 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(
                                                              v69,
                                                              off_1A3AC9E0);
                                                      common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                                                        v70,
                                                        (const char (*)[15])" convert fails");
                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
                                                      result = 1;
                                                    }
                                                    else if ( (unsigned __int8)std::string::empty(&order->trade_no) )
                                                    {
                                                      common::milog::MiLogStream::create(
                                                        (common::milog::MiLogStream *)&__x,
                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                        4u,
                                                        "./src/network/http_session.cpp",
                                                        "createOrder",
                                                        350);
                                                      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                                                        (common::milog::MiLogStream *const)&__x,
                                                        (const char (*)[19])"trade_no is empty!");
                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
                                                      result = 1;
                                                    }
                                                    else
                                                    {
                                                      std::allocator<char>::allocator(&__a);
                                                      std::string::basic_string<std::allocator<char>>(
                                                        &__x,
                                                        aPriceTier_0[0],
                                                        &__a);
                                                      v2[4]._M_node = std::map<std::string,std::string>::find(
                                                                        param_map,
                                                                        &__x)._M_node;
                                                      std::string::~string(&__x);
                                                      std::allocator<char>::~allocator(&__a);
                                                      __y._M_node = std::map<std::string,std::string>::end(param_map)._M_node;
                                                      if ( std::operator!=(v2 + 4, &__y)
                                                        && (v71 = std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>::operator->(v2 + 4),
                                                            common::tools::ConvertUtils::convertTo(
                                                              &v71->second,
                                                              &order->price_tier,
                                                              0)) )
                                                      {
                                                        common::milog::MiLogStream::create(
                                                          (common::milog::MiLogStream *)&__x,
                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                          4u,
                                                          "./src/network/http_session.cpp",
                                                          "createOrder",
                                                          371);
                                                        v72 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                                                (common::milog::MiLogStream *const)&__x,
                                                                (const char (*)[6])"key: ");
                                                        v73 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                                                                v72,
                                                                "price_tier");
                                                        common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                                                          v73,
                                                          (const char (*)[15])" convert fails");
                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
                                                        result = 1;
                                                      }
                                                      else
                                                      {
                                                        std::allocator<char>::allocator(&__a);
                                                        std::string::basic_string<std::allocator<char>>(
                                                          &__x,
                                                          aExtend[0],
                                                          &__a);
                                                        v2[4]._M_node = std::map<std::string,std::string>::find(
                                                                          param_map,
                                                                          &__x)._M_node;
                                                        std::string::~string(&__x);
                                                        std::allocator<char>::~allocator(&__a);
                                                        __y._M_node = std::map<std::string,std::string>::end(param_map)._M_node;
                                                        if ( std::operator!=(v2 + 4, &__y)
                                                          && (v74 = std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>::operator->(v2 + 4),
                                                              common::tools::ConvertUtils::convertTo(
                                                                &v74->second,
                                                                &order->extend,
                                                                0)) )
                                                        {
                                                          common::milog::MiLogStream::create(
                                                            (common::milog::MiLogStream *)&__x,
                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                            4u,
                                                            "./src/network/http_session.cpp",
                                                            "createOrder",
                                                            372);
                                                          v75 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                                                  (common::milog::MiLogStream *const)&__x,
                                                                  (const char (*)[6])"key: ");
                                                          v76 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                                                  v75,
                                                                  "extend");
                                                          common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                                                            v76,
                                                            (const char (*)[15])" convert fails");
                                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
                                                          result = 1;
                                                        }
                                                        else
                                                        {
                                                          std::allocator<char>::allocator(&__a);
                                                          std::string::basic_string<std::allocator<char>>(
                                                            &__x,
                                                            aIsSandbox[0],
                                                            &__a);
                                                          v2[4]._M_node = std::map<std::string,std::string>::find(
                                                                            param_map,
                                                                            &__x)._M_node;
                                                          std::string::~string(&__x);
                                                          std::allocator<char>::~allocator(&__a);
                                                          __y._M_node = std::map<std::string,std::string>::end(param_map)._M_node;
                                                          if ( std::operator!=(v2 + 4, &__y)
                                                            && (v77 = std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>::operator->(v2 + 4),
                                                                common::tools::ConvertUtils::convertTo<unsigned int>(
                                                                  &v77->second,
                                                                  &order->is_sandbox,
                                                                  0)) )
                                                          {
                                                            common::milog::MiLogStream::create(
                                                              (common::milog::MiLogStream *)&__x,
                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                              4u,
                                                              "./src/network/http_session.cpp",
                                                              "createOrder",
                                                              373);
                                                            v78 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                                                    (common::milog::MiLogStream *const)&__x,
                                                                    (const char (*)[6])"key: ");
                                                            v79 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                                                                    v78,
                                                                    "is_sandbox");
                                                            common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                                                              v79,
                                                              (const char (*)[15])" convert fails");
                                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
                                                            result = 1;
                                                          }
                                                          else
                                                          {
                                                            std::allocator<char>::allocator(&__a);
                                                            std::string::basic_string<std::allocator<char>>(
                                                              &__x,
                                                              aCoinNum[0],
                                                              &__a);
                                                            v2[4]._M_node = std::map<std::string,std::string>::find(
                                                                              param_map,
                                                                              &__x)._M_node;
                                                            std::string::~string(&__x);
                                                            std::allocator<char>::~allocator(&__a);
                                                            __y._M_node = std::map<std::string,std::string>::end(param_map)._M_node;
                                                            if ( std::operator!=(v2 + 4, &__y)
                                                              && (v80 = std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>::operator->(v2 + 4),
                                                                  common::tools::ConvertUtils::convertTo<unsigned int>(
                                                                    &v80->second,
                                                                    &order->coin_num,
                                                                    0)) )
                                                            {
                                                              common::milog::MiLogStream::create(
                                                                (common::milog::MiLogStream *)&__x,
                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                4u,
                                                                "./src/network/http_session.cpp",
                                                                "createOrder",
                                                                374);
                                                              v81 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                                                      (common::milog::MiLogStream *const)&__x,
                                                                      (const char (*)[6])"key: ");
                                                              v82 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                                                                      v81,
                                                                      "coin_num");
                                                              common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                                                                v82,
                                                                (const char (*)[15])" convert fails");
                                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
                                                              result = 1;
                                                            }
                                                            else
                                                            {
                                                              std::allocator<char>::allocator(&__a);
                                                              std::string::basic_string<std::allocator<char>>(
                                                                &__x,
                                                                aBonus[0],
                                                                &__a);
                                                              v2[4]._M_node = std::map<std::string,std::string>::find(
                                                                                param_map,
                                                                                &__x)._M_node;
                                                              std::string::~string(&__x);
                                                              std::allocator<char>::~allocator(&__a);
                                                              __y._M_node = std::map<std::string,std::string>::end(param_map)._M_node;
                                                              if ( std::operator!=(v2 + 4, &__y)
                                                                && (v83 = std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>::operator->(v2 + 4),
                                                                    common::tools::ConvertUtils::convertTo(
                                                                      &v83->second,
                                                                      &order->bonus,
                                                                      0)) )
                                                              {
                                                                common::milog::MiLogStream::create(
                                                                  (common::milog::MiLogStream *)&__x,
                                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                                  4u,
                                                                  "./src/network/http_session.cpp",
                                                                  "createOrder",
                                                                  375);
                                                                v84 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                                                        (common::milog::MiLogStream *const)&__x,
                                                                        (const char (*)[6])"key: ");
                                                                v85 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                                                        v84,
                                                                        "bonus");
                                                                common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                                                                  v85,
                                                                  (const char (*)[15])" convert fails");
                                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
                                                                result = 1;
                                                              }
                                                              else
                                                              {
                                                                std::allocator<char>::allocator(&__a);
                                                                std::string::basic_string<std::allocator<char>>(
                                                                  &__x,
                                                                  aBonusNum[0],
                                                                  &__a);
                                                                v2[4]._M_node = std::map<std::string,std::string>::find(
                                                                                  param_map,
                                                                                  &__x)._M_node;
                                                                std::string::~string(&__x);
                                                                std::allocator<char>::~allocator(&__a);
                                                                __y._M_node = std::map<std::string,std::string>::end(param_map)._M_node;
                                                                if ( std::operator!=(v2 + 4, &__y)
                                                                  && (v86 = std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>::operator->(v2 + 4),
                                                                      common::tools::ConvertUtils::convertTo<unsigned int>(
                                                                        &v86->second,
                                                                        &order->bonus_num,
                                                                        0)) )
                                                                {
                                                                  common::milog::MiLogStream::create(
                                                                    (common::milog::MiLogStream *)&__x,
                                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                                    4u,
                                                                    "./src/network/http_session.cpp",
                                                                    "createOrder",
                                                                    376);
                                                                  v87 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                                                          (common::milog::MiLogStream *const)&__x,
                                                                          (const char (*)[6])"key: ");
                                                                  v88 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                                                                          v87,
                                                                          "bonus_num");
                                                                  common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                                                                    v88,
                                                                    (const char (*)[15])" convert fails");
                                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
                                                                  result = 1;
                                                                }
                                                                else
                                                                {
                                                                  std::allocator<char>::allocator(&__a);
                                                                  std::string::basic_string<std::allocator<char>>(
                                                                    &__x,
                                                                    aVipPointNum[0],
                                                                    &__a);
                                                                  v2[4]._M_node = std::map<std::string,std::string>::find(
                                                                                    param_map,
                                                                                    &__x)._M_node;
                                                                  std::string::~string(&__x);
                                                                  std::allocator<char>::~allocator(&__a);
                                                                  __y._M_node = std::map<std::string,std::string>::end(param_map)._M_node;
                                                                  if ( std::operator!=(v2 + 4, &__y)
                                                                    && (v89 = std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>::operator->(v2 + 4),
                                                                        common::tools::ConvertUtils::convertTo<unsigned int>(
                                                                          &v89->second,
                                                                          &order->vip_point_num,
                                                                          0)) )
                                                                  {
                                                                    common::milog::MiLogStream::create(
                                                                      (common::milog::MiLogStream *)&__x,
                                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                                      4u,
                                                                      "./src/network/http_session.cpp",
                                                                      "createOrder",
                                                                      377);
                                                                    v90 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                                                            (common::milog::MiLogStream *const)&__x,
                                                                            (const char (*)[6])"key: ");
                                                                    v91 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                                                            v90,
                                                                            "vip_point_num");
                                                                    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                                                                      v91,
                                                                      (const char (*)[15])" convert fails");
                                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
                                                                    result = 1;
                                                                  }
                                                                  else
                                                                  {
                                                                    std::allocator<char>::allocator(&__a);
                                                                    std::string::basic_string<std::allocator<char>>(
                                                                      &__x,
                                                                      aPayType[0],
                                                                      &__a);
                                                                    v2[4]._M_node = std::map<std::string,std::string>::find(
                                                                                      param_map,
                                                                                      &__x)._M_node;
                                                                    std::string::~string(&__x);
                                                                    std::allocator<char>::~allocator(&__a);
                                                                    __y._M_node = std::map<std::string,std::string>::end(param_map)._M_node;
                                                                    if ( std::operator!=(v2 + 4, &__y)
                                                                      && (v92 = std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>::operator->(v2 + 4),
                                                                          common::tools::ConvertUtils::convertTo(
                                                                            &v92->second,
                                                                            &order->pay_type,
                                                                            0)) )
                                                                    {
                                                                      common::milog::MiLogStream::create(
                                                                        (common::milog::MiLogStream *)&__x,
                                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                                        4u,
                                                                        "./src/network/http_session.cpp",
                                                                        "createOrder",
                                                                        378);
                                                                      v93 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                                                              (common::milog::MiLogStream *const)&__x,
                                                                              (const char (*)[6])"key: ");
                                                                      v94 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                                                                              v93,
                                                                              "pay_type");
                                                                      common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                                                                        v94,
                                                                        (const char (*)[15])" convert fails");
                                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
                                                                      result = 1;
                                                                    }
                                                                    else
                                                                    {
                                                                      std::allocator<char>::allocator(&__a);
                                                                      std::string::basic_string<std::allocator<char>>(
                                                                        &__x,
                                                                        aPayVendor[0],
                                                                        &__a);
                                                                      v2[4]._M_node = std::map<std::string,std::string>::find(
                                                                                        param_map,
                                                                                        &__x)._M_node;
                                                                      std::string::~string(&__x);
                                                                      std::allocator<char>::~allocator(&__a);
                                                                      __y._M_node = std::map<std::string,std::string>::end(param_map)._M_node;
                                                                      if ( std::operator!=(v2 + 4, &__y)
                                                                        && (v95 = std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>::operator->(v2 + 4),
                                                                            common::tools::ConvertUtils::convertTo(
                                                                              &v95->second,
                                                                              &order->pay_vendor,
                                                                              0)) )
                                                                      {
                                                                        common::milog::MiLogStream::create(
                                                                          (common::milog::MiLogStream *)&__x,
                                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                                          4u,
                                                                          "./src/network/http_session.cpp",
                                                                          "createOrder",
                                                                          379);
                                                                        v96 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                                                                (common::milog::MiLogStream *const)&__x,
                                                                                (const char (*)[6])"key: ");
                                                                        v97 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                                                                                v96,
                                                                                "pay_vendor");
                                                                        common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                                                                          v97,
                                                                          (const char (*)[15])" convert fails");
                                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
                                                                        result = 1;
                                                                      }
                                                                      else
                                                                      {
                                                                        std::allocator<char>::allocator(&__a);
                                                                        std::string::basic_string<std::allocator<char>>(
                                                                          &__x,
                                                                          aClientType[0],
                                                                          &__a);
                                                                        v2[4]._M_node = std::map<std::string,std::string>::find(
                                                                                          param_map,
                                                                                          &__x)._M_node;
                                                                        std::string::~string(&__x);
                                                                        std::allocator<char>::~allocator(&__a);
                                                                        __y._M_node = std::map<std::string,std::string>::end(param_map)._M_node;
                                                                        if ( std::operator!=(v2 + 4, &__y)
                                                                          && (v98 = std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>::operator->(v2 + 4),
                                                                              common::tools::ConvertUtils::convertTo(
                                                                                &v98->second,
                                                                                &order->client_type,
                                                                                0)) )
                                                                        {
                                                                          common::milog::MiLogStream::create(
                                                                            (common::milog::MiLogStream *)&__x,
                                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                                            4u,
                                                                            "./src/network/http_session.cpp",
                                                                            "createOrder",
                                                                            380);
                                                                          v99 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                                                                  (common::milog::MiLogStream *const)&__x,
                                                                                  (const char (*)[6])"key: ");
                                                                          v100 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                                                                                   v99,
                                                                                   "client_type");
                                                                          common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                                                                            v100,
                                                                            (const char (*)[15])" convert fails");
                                                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
                                                                          result = 1;
                                                                        }
                                                                        else
                                                                        {
                                                                          std::allocator<char>::allocator(&__a);
                                                                          std::string::basic_string<std::allocator<char>>(
                                                                            &__x,
                                                                            aDevice[0],
                                                                            &__a);
                                                                          v2[4]._M_node = std::map<std::string,std::string>::find(
                                                                                            param_map,
                                                                                            &__x)._M_node;
                                                                          std::string::~string(&__x);
                                                                          std::allocator<char>::~allocator(&__a);
                                                                          __y._M_node = std::map<std::string,std::string>::end(param_map)._M_node;
                                                                          if ( std::operator!=(v2 + 4, &__y)
                                                                            && (v101 = std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>::operator->(v2 + 4),
                                                                                common::tools::ConvertUtils::convertTo(
                                                                                  &v101->second,
                                                                                  &order->device,
                                                                                  0)) )
                                                                          {
                                                                            common::milog::MiLogStream::create(
                                                                              (common::milog::MiLogStream *)&__x,
                                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                                              4u,
                                                                              "./src/network/http_session.cpp",
                                                                              "createOrder",
                                                                              381);
                                                                            v102 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                                                                     (common::milog::MiLogStream *const)&__x,
                                                                                     (const char (*)[6])"key: ");
                                                                            v103 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                                                                     v102,
                                                                                     "device");
                                                                            common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                                                                              v103,
                                                                              (const char (*)[15])" convert fails");
                                                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
                                                                            result = 1;
                                                                          }
                                                                          else
                                                                          {
                                                                            std::allocator<char>::allocator(&__a);
                                                                            std::string::basic_string<std::allocator<char>>(
                                                                              &__x,
                                                                              aClientIp[0],
                                                                              &__a);
                                                                            v2[4]._M_node = std::map<std::string,std::string>::find(
                                                                                              param_map,
                                                                                              &__x)._M_node;
                                                                            std::string::~string(&__x);
                                                                            std::allocator<char>::~allocator(&__a);
                                                                            __y._M_node = std::map<std::string,std::string>::end(param_map)._M_node;
                                                                            if ( std::operator!=(v2 + 4, &__y)
                                                                              && (v104 = std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>::operator->(v2 + 4),
                                                                                  common::tools::ConvertUtils::convertTo(
                                                                                    &v104->second,
                                                                                    &order->client_ip,
                                                                                    0)) )
                                                                            {
                                                                              common::milog::MiLogStream::create(
                                                                                (common::milog::MiLogStream *)&__x,
                                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                                4u,
                                                                                "./src/network/http_session.cpp",
                                                                                "createOrder",
                                                                                382);
                                                                              v105 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                                                                       (common::milog::MiLogStream *const)&__x,
                                                                                       (const char (*)[6])"key: ");
                                                                              v106 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                                                                                       v105,
                                                                                       "client_ip");
                                                                              common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                                                                                v106,
                                                                                (const char (*)[15])" convert fails");
                                                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
                                                                              result = 1;
                                                                            }
                                                                            else
                                                                            {
                                                                              result = 0;
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v111 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,std::string > >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 390: range 000000000CA8BADE-000000000CA8CE26
int32_t __cdecl HttpSession::checkOrderValid(const HttpSession *const this, const Order *order)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  const std::string *v7; // rax
  __gnu_cxx::__enable_if<true,bool>::__type v8; // r15
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  unsigned int v11; // edx
  char v12; // al
  common::milog::MiLogStream *v13; // rax
  const std::string *ProductIdByEntitlementId; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // r15d
  const std::string *ProductIdByCatalogItemId; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v54; // rax
  bool isSandBoxRecharge; // al
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rdx
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+2Ch] [rbp-144h]
  uint32_t mcoin; // [rsp+30h] [rbp-140h]
  uint32_t now; // [rsp+34h] [rbp-13Ch]
  ShopmallExcelConfigMgr *shopmall_config_mgr; // [rsp+38h] [rbp-138h]
  const data::ProductDetailConfig *product_config_ptr; // [rsp+40h] [rbp-130h]
  const std::string *region_name; // [rsp+48h] [rbp-128h]
  std::shared_ptr<Config> v79; // [rsp+50h] [rbp-120h] BYREF
  std::shared_ptr<Config> v80; // [rsp+60h] [rbp-110h] BYREF
  std::shared_ptr<Config> v81; // [rsp+70h] [rbp-100h] BYREF
  common::milog::MiLogStream v82; // [rsp+80h] [rbp-F0h] BYREF
  char v83[208]; // [rsp+A0h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v83;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 24 mcoin_per_point_card:401 64 16 14 config_ptr:391 96 32 14 product_id:417";
  *(_QWORD *)(v3 + 16) = HttpSession::checkOrderValid;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862724] = -202116109;
  ServiceBox::findService<OaserverService>();
  OaserverService::getConfig((OaserverService *const)(v3 + 64));
  ServiceBox::findService<OaserverService>();
  OaserverService::getConfig((OaserverService *const)&v79);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v79);
  v7 = ConstValueExcelConfigMgr::getPointCardProductId[abi:cxx11](&v6->design_config.txt_config_mgr.const_value_config_mgr);
  v8 = std::operator==<char>(&order->product_id, v7);
  std::shared_ptr<Config>::~shared_ptr(&v79);
  if ( !v8 )
  {
    ServiceBox::findService<OaserverService>();
    OaserverService::getConfig((OaserverService *const)&v81);
    shopmall_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v81)->design_config.txt_config_mgr.shopmall_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v81);
    std::string::basic_string(v3 + 96, &order->product_id);
    if ( std::operator==<char>(&order->pay_plat, "sony") )
    {
      ProductIdByEntitlementId = ShopmallExcelConfigMgr::findProductIdByEntitlementId(
                                   shopmall_config_mgr,
                                   &order->product_id);
      std::string::operator=(v3 + 96, ProductIdByEntitlementId);
      if ( (unsigned __int8)std::string::empty(v3 + 96) )
      {
        common::milog::MiLogStream::create(
          &v82,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/network/http_session.cpp",
          "checkOrderValid",
          424);
        v15 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                &v82,
                (const char (*)[52])"findProductIdByEntitlementId fails, entitlement_id:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, &order->product_id);
        common::milog::MiLogStream::~MiLogStream(&v82);
        v2 = 904;
        v16 = 0;
        goto LABEL_54;
      }
    }
    else if ( std::operator==<char>(&order->pay_plat, "epic") )
    {
      ProductIdByCatalogItemId = ShopmallExcelConfigMgr::findProductIdByCatalogItemId(
                                   shopmall_config_mgr,
                                   &order->product_id);
      std::string::operator=(v3 + 96, ProductIdByCatalogItemId);
      if ( (unsigned __int8)std::string::empty(v3 + 96) )
      {
        if ( ShopmallExcelConfigMgr::isShieldCatalogItemId(shopmall_config_mgr, &order->product_id) )
          common::milog::MiLogStream::create(
            &v82,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/network/http_session.cpp",
            "checkOrderValid",
            436);
        else
          common::milog::MiLogStream::create(
            &v82,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/network/http_session.cpp",
            "checkOrderValid",
            440);
        v18 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                &v82,
                (const char (*)[53])"findProductIdByCatalogItemId fails, catalog_item_id:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, &order->product_id);
        common::milog::MiLogStream::~MiLogStream(&v82);
        v2 = 904;
        v16 = 0;
        goto LABEL_54;
      }
    }
    product_config_ptr = ShopmallExcelConfigMgr::findProductDetailConfig(
                           shopmall_config_mgr,
                           (const std::string *)(v3 + 96));
    if ( product_config_ptr )
    {
      ret = HttpSession::checkOrderPriceTier(this, order, product_config_ptr);
      if ( ret )
      {
        common::milog::MiLogStream::create(
          &v82,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/network/http_session.cpp",
          "checkOrderValid",
          454);
        common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
          &v82,
          (const char (*)[26])"checkOrderPriceTier fails");
        common::milog::MiLogStream::~MiLogStream(&v82);
        v2 = ret;
        v16 = 0;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&product_config_ptr->product_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&product_config_ptr->product_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&product_config_ptr->product_type);
        }
        if ( product_config_ptr->product_type == PRODUCT_TYPE_GOOGLE_GIFT_CARD
          && std::operator!=<char>(&order->pay_plat, "googleplay")
          && std::operator!=<char>(&order->pay_plat, "googleplaypc") )
        {
          common::milog::MiLogStream::create(
            &v82,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/network/http_session.cpp",
            "checkOrderValid",
            463);
          v23 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v82, (const char (*)[12])"product_id:");
          v24 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)(v3 + 96));
          v25 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v24, (const char (*)[11])" pay_plat:");
          v26 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, &order->pay_plat);
          common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v26, (const char (*)[12])" not match!");
          common::milog::MiLogStream::~MiLogStream(&v82);
          v2 = 904;
          v16 = 0;
        }
        else
        {
          v16 = 1;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v82,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/network/http_session.cpp",
        "checkOrderValid",
        448);
      v19 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v82,
              (const char (*)[31])"findProductDetailConfig fails:");
      v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, &order->product_id);
      v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v20, (const char (*)[11])" trade_no:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, &order->trade_no);
      common::milog::MiLogStream::~MiLogStream(&v82);
      v2 = 904;
      v16 = 0;
    }
LABEL_54:
    std::string::~string((void *)(v3 + 96));
    if ( v16 != 1 )
      goto LABEL_87;
    goto LABEL_55;
  }
  if ( *(_BYTE *)(((unsigned __int64)&order->product_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&order->product_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&order->product_num);
  }
  if ( !order->product_num )
  {
    common::milog::MiLogStream::create(
      &v82,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/http_session.cpp",
      "checkOrderValid",
      398);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v82,
      (const char (*)[28])"point card product_num is 0");
    common::milog::MiLogStream::~MiLogStream(&v82);
    v2 = 1;
    goto LABEL_87;
  }
  ServiceBox::findService<OaserverService>();
  OaserverService::getConfig((OaserverService *const)&v80);
  v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v80);
  *(_DWORD *)(v3 + 48) = ConstValueExcelConfigMgr::getMcoinPerPointCard(&v9->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v80);
  if ( *(_BYTE *)(((unsigned __int64)&order->product_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&order->product_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&order->product_num);
  }
  if ( order->product_num
    && *(_DWORD *)(v3 + 48)
    && order->product_num * *(_DWORD *)(v3 + 48) / order->product_num != *(_DWORD *)(v3 + 48) )
  {
    common::milog::MiLogStream::create(
      &v82,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/http_session.cpp",
      "checkOrderValid",
      404);
    v10 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
            &v82,
            (const char (*)[55])"product_num * mcoin_per card overflow, mcoin_per_card:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v82);
    v2 = 1;
    goto LABEL_87;
  }
  v11 = *(_DWORD *)(v3 + 48);
  if ( *(_BYTE *)(((unsigned __int64)&order->product_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&order->product_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&order->product_num);
  }
  mcoin = SAFE_MULTIPLY<unsigned int,unsigned int>(order->product_num, v11);
  if ( std::operator==<char>("mcoin", &order->bonus) )
  {
    if ( mcoin )
    {
      if ( *(_BYTE *)(((unsigned __int64)&order->bonus_num >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&order->bonus_num >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&order->bonus_num);
      }
      if ( order->bonus_num && mcoin > order->bonus_num + mcoin )
      {
        v12 = 1;
        goto LABEL_29;
      }
    }
    if ( !mcoin
      && *(_BYTE *)(((unsigned __int64)&order->bonus_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&order->bonus_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&order->bonus_num);
    }
  }
  v12 = 0;
LABEL_29:
  if ( v12 )
  {
    common::milog::MiLogStream::create(
      &v82,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/http_session.cpp",
      "checkOrderValid",
      410);
    v13 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
            &v82,
            (const char (*)[73])"product_num * mcoin_per + order.bonus_num card overflow, mcoin_per_card:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v82);
    v2 = 1;
    goto LABEL_87;
  }
LABEL_55:
  v27 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&v27->sdk_env >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v27->sdk_env >> 3) + 0x7FFF8000) <= 3 )
  {
    v27 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v27->sdk_env);
  }
  if ( !v27->sdk_env && std::operator!=<char>(&order->env, "prod") )
  {
    common::milog::MiLogStream::create(
      &v82,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/http_session.cpp",
      "checkOrderValid",
      471);
    v29 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v82, (const char (*)[18])"order product_id:");
    v30 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v29, &order->product_id);
    v31 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v30, (const char (*)[11])" trade_no:");
    v32 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v31, &order->trade_no);
    v33 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v32, (const char (*)[10])" sdk_env:");
    v34 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &v34->sdk_env);
    v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v35, (const char (*)[16])" but order.env:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v36, &order->env);
    common::milog::MiLogStream::~MiLogStream(&v82);
    v2 = 1;
  }
  else
  {
    v37 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v37->sdk_env >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v37->sdk_env >> 3) + 0x7FFF8000) <= 3 )
    {
      v37 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v37->sdk_env);
    }
    if ( v37->sdk_env == 2 && std::string::find(&order->env, "prod-", 0LL) )
    {
      common::milog::MiLogStream::create(
        &v82,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/network/http_session.cpp",
        "checkOrderValid",
        478);
      v39 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              &v82,
              (const char (*)[18])"order product_id:");
      v40 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v39, &order->product_id);
      v41 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v40, (const char (*)[11])" trade_no:");
      v42 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v41, &order->trade_no);
      v43 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v42, (const char (*)[10])" sdk_env:");
      v44 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &v44->sdk_env);
      v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v45, (const char (*)[16])" but order.env:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v46, &order->env);
      common::milog::MiLogStream::~MiLogStream(&v82);
      v2 = 1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&order->is_sandbox >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&order->is_sandbox >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&order->is_sandbox);
      }
      if ( order->is_sandbox
        && (v47 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64)),
            !Config::isSandBoxRecharge(v47)) )
      {
        common::milog::MiLogStream::create(
          &v82,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/network/http_session.cpp",
          "checkOrderValid",
          486);
        v49 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                &v82,
                (const char (*)[18])"order product_id:");
        v50 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v49, &order->product_id);
        v51 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v50, (const char (*)[11])" trade_no:");
        v52 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v51, &order->trade_no);
        v53 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                v52,
                (const char (*)[20])" isSandBoxRecharge:");
        v54 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        isSandBoxRecharge = Config::isSandBoxRecharge(v54);
        v56 = common::milog::MiLogStream::operator<<(v53, isSandBoxRecharge);
        v57 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                v56,
                (const char (*)[23])" but order.is_sandbox:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, &order->is_sandbox);
        common::milog::MiLogStream::~MiLogStream(&v82);
        v2 = 904;
      }
      else
      {
        v58 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        region_name = ConfigBase::getRegionName[abi:cxx11](v58);
        if ( std::operator!=<char>(&order->region, region_name) )
        {
          common::milog::MiLogStream::create(
            &v82,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/network/http_session.cpp",
            "checkOrderValid",
            495);
          v59 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v82, (const char (*)[5])"uid:");
          v60 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, &order->uid);
          v61 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v60, (const char (*)[11])" trade_no:");
          v62 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v61, &order->trade_no);
          v63 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v62, (const char (*)[2])" ");
          v64 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v63, &order->region);
          v65 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v64, (const char (*)[3])"!=");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v65, region_name);
          common::milog::MiLogStream::~MiLogStream(&v82);
          v2 = 1;
        }
        else
        {
          now = common::tools::TimeUtils::getNow();
          if ( *(_BYTE *)(((unsigned __int64)&order->trade_time >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&order->trade_time >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&order->trade_time);
          }
          if ( now <= order->trade_time || now - order->trade_time <= 0x1E13380 )
          {
            v2 = 0;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v82,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/network/http_session.cpp",
              "checkOrderValid",
              503);
            v66 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v82, (const char (*)[6])"uid: ");
            v67 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v66, &order->uid);
            v68 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v67, (const char (*)[11])" trade_no:");
            v69 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v68, &order->trade_no);
            v70 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v69,
                    (const char (*)[13])" trade_time:");
            v71 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v70, &order->trade_time);
            common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v71,
              (const char (*)[18])" early than 1year");
            common::milog::MiLogStream::~MiLogStream(&v82);
            v2 = 4;
          }
        }
      }
    }
  }
LABEL_87:
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
  result = v2;
  if ( v83 == (char *)v3 )
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
  return result;
};

// Line 510: range 000000000CA8CE28-000000000CA8D33D
int32_t __cdecl HttpSession::checkOrderPriceTier(
        const HttpSession *const this,
        const Order *order,
        const data::ProductDetailConfig *product_config)
{
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  const data::ProductMcoinDetailConfig *mcoin_config_ptr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v28; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v29; // [rsp+40h] [rbp-30h] BYREF

  if ( (unsigned __int8)std::string::empty(&order->price_tier) )
  {
    if ( std::operator!=<char>(&order->pay_plat, off_1A3AD560)
      && std::operator!=<char>(&order->pay_plat, "googleplay")
      && std::operator!=<char>(&order->pay_plat, "sony")
      && std::operator!=<char>(&order->pay_plat, "samsungiap")
      && std::operator!=<char>(&order->pay_plat, "epic")
      && std::operator!=<char>(&order->pay_plat, "googleplaypc") )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/network/http_session.cpp",
        "checkOrderPriceTier",
        516);
      v4 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             &v29,
             (const char (*)[18])"order product_id:");
      v5 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, &order->product_id);
      v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v5, (const char (*)[11])" trade_no:");
      v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &order->trade_no);
      v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             v7,
             (const char (*)[32])" price_tier is empty, pay_plat:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &order->pay_plat);
      common::milog::MiLogStream::~MiLogStream(&v29);
      return 1;
    }
    return 0;
  }
  if ( !std::operator!=<char>(&order->price_tier, &product_config->price_tier) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&product_config->product_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&product_config->product_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&product_config->product_type);
  }
  if ( product_config->product_type != PRODUCT_TYPE_HCOIN )
    goto LABEL_25;
  ServiceBox::findService<OaserverService>();
  OaserverService::getConfig((OaserverService *const)&v28);
  v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
  mcoin_config_ptr = ShopmallExcelConfigMgr::findProductMcoinDetailConfig(
                       &v10->design_config.txt_config_mgr.shopmall_config_mgr,
                       &order->product_id);
  std::shared_ptr<Config>::~shared_ptr(&v28);
  if ( !mcoin_config_ptr )
    goto LABEL_25;
  if ( *(char *)(((unsigned __int64)&mcoin_config_ptr->is_audit >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&mcoin_config_ptr->is_audit);
  if ( mcoin_config_ptr->is_audit && std::operator==<char>(&order->price_tier, &mcoin_config_ptr->audit_display_tier) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/http_session.cpp",
      "checkOrderPriceTier",
      531);
    v12 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            &v29,
            (const char (*)[19])"order product_id: ");
    v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, &order->product_id);
    v14 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v13, (const char (*)[14])" order tier: ");
    v15 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, &order->price_tier);
    v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v15, (const char (*)[14])" price tier: ");
    v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, &product_config->price_tier);
    v18 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            v17,
            (const char (*)[22])" audit display tier: ");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, &mcoin_config_ptr->audit_display_tier);
    common::milog::MiLogStream::~MiLogStream(&v29);
    return 0;
  }
  else
  {
LABEL_25:
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/http_session.cpp",
      "checkOrderPriceTier",
      538);
    v19 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v29, (const char (*)[18])"order product_id:");
    v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, &order->product_id);
    v21 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v20, (const char (*)[7])" tier:");
    v22 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, &order->price_tier);
    v23 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v22, (const char (*)[18])" but config tier:");
    v24 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, &product_config->price_tier);
    v25 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v24, (const char (*)[11])" trade_no:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, &order->trade_no);
    common::milog::MiLogStream::~MiLogStream(&v29);
    return 904;
  }
};

// Line 546: range 000000000CA8D33E-000000000CA8DB66
void __cdecl HttpSession::notifyGameserver(const HttpSession *const this, const Order *order)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  google::protobuf::uint32 Now; // edx
  common::minet::Packet *v6; // rax
  OaserverService *v7; // r14
  unsigned __int64 v8; // rdx
  common::minet::Packet *v9; // rcx
  common::minet::Packet *v10; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  void (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  proto::Order *proto_order; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  char v18[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 packet_ptr:547 64 32 10 notify:553";
  *(_QWORD *)(v2 + 16) = HttpSession::notifyGameserver;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/http_session.cpp",
      "notifyGameserver",
      550);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[19])"createPacket fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
  }
  else
  {
    proto::RechargeOrderNotify::RechargeOrderNotify((proto::RechargeOrderNotify *const)(v2 + 64));
    proto_order = proto::RechargeOrderNotify::mutable_order((proto::RechargeOrderNotify *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)order >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)order >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(order);
    }
    proto::Order::set_id(proto_order, order->id);
    if ( *(_BYTE *)(((unsigned __int64)&order->uid >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)order + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&order->uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&order->uid);
    }
    proto::Order::set_uid(proto_order, order->uid);
    proto::Order::set_product_id(proto_order, &order->product_id);
    proto::Order::set_product_name(proto_order, &order->product_name);
    if ( *(_BYTE *)(((unsigned __int64)&order->product_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&order->product_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&order->product_num);
    }
    proto::Order::set_product_num(proto_order, order->product_num);
    if ( *(_BYTE *)(((unsigned __int64)&order->coin_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)order + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&order->coin_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&order->coin_num);
    }
    proto::Order::set_coin_num(proto_order, order->coin_num);
    proto::Order::set_total_fee(proto_order, &order->total_fee);
    proto::Order::set_currency(proto_order, &order->currency);
    proto::Order::set_price_tier(proto_order, &order->price_tier);
    proto::Order::set_trade_no(proto_order, &order->trade_no);
    if ( *(_BYTE *)(((unsigned __int64)&order->trade_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&order->trade_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&order->trade_time);
    }
    proto::Order::set_trade_time(proto_order, order->trade_time);
    if ( *(_BYTE *)(((unsigned __int64)&order->channel_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&order->channel_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&order->channel_id);
    }
    proto::Order::set_channel_id(proto_order, order->channel_id);
    proto::Order::set_channel_order_no(proto_order, &order->channel_order_no);
    proto::Order::set_pay_plat(proto_order, &order->pay_plat);
    proto::Order::set_extend(proto_order, &order->extend);
    Now = common::tools::TimeUtils::getNow();
    proto::Order::set_create_time(proto_order, Now);
    proto::Order::set_bonus(proto_order, &order->bonus);
    if ( *(_BYTE *)(((unsigned __int64)&order->bonus_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&order->bonus_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&order->bonus_num);
    }
    proto::Order::set_bonus_num(proto_order, order->bonus_num);
    if ( *(_BYTE *)(((unsigned __int64)&order->vip_point_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)order - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&order->vip_point_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&order->vip_point_num);
    }
    proto::Order::set_vip_point_num(proto_order, order->vip_point_num);
    proto::Order::set_pay_type(proto_order, &order->pay_type);
    proto::Order::set_pay_vendor(proto_order, &order->pay_vendor);
    proto::Order::set_client_type(proto_order, &order->client_type);
    proto::Order::set_device(proto_order, &order->device);
    proto::Order::set_client_ip(proto_order, &order->client_ip);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setProto<proto::RechargeOrderNotify>(v6, (const proto::RechargeOrderNotify *)(v2 + 64));
    v7 = ServiceBox::findService<OaserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v7, (common::minet::PacketPtr)__PAIR128__(v8, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&order->uid >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)order + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&order->uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&order->uid);
    }
    common::minet::Packet::setUserId(v9, order->uid);
    v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v10, 3u);
    v11 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v12 = v11;
    v13 = *(unsigned __int8 *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
    if ( (_BYTE)v13 )
      __asan_report_load8(v11, 3LL, v13);
    v14 = (unsigned __int64)(v12->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8(v12->_vptr_NetworkMgrBase + 8, 3LL, v12->_vptr_NetworkMgrBase + 8);
    v15 = *(void (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v15(v12, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    proto::RechargeOrderNotify::~RechargeOrderNotify((proto::RechargeOrderNotify *const)(v2 + 64));
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  if ( v18 == (char *)v2 )
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
};

// Line 589: range 000000000CA8DB68-000000000CA8E033
void __cdecl HttpSession::logOrderAddStateLog(HttpSession *const this, const Order *order)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rcx
  std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rcx
  std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rcx
  std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rcx
  std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  OaserverService *v20; // r14
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+10h] [rbp-80h] BYREF
  char v22[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 11 log_ptr:590";
  *(_QWORD *)(v2 + 16) = HttpSession::logOrderAddStateLog;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto_log::OrderLogBodyAdd>();
  v5 = std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)order >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)order >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(order);
  }
  proto_log::OrderLogBodyAdd::set_order_id(v5, order->id);
  v6 = std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&order->uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)order + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&order->uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&order->uid);
  }
  proto_log::OrderLogBodyAdd::set_uid(v6, order->uid);
  v7 = std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  proto_log::OrderLogBodyAdd::set_product_id(v7, &order->product_id);
  v8 = std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  proto_log::OrderLogBodyAdd::set_product_name(v8, &order->product_name);
  v9 = std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&order->product_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&order->product_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&order->product_num);
  }
  proto_log::OrderLogBodyAdd::set_product_num(v9, order->product_num);
  v10 = std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&order->coin_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)order + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&order->coin_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&order->coin_num);
  }
  proto_log::OrderLogBodyAdd::set_coin_num(v10, order->coin_num);
  v11 = std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  proto_log::OrderLogBodyAdd::set_total_fee(v11, &order->total_fee);
  v12 = std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  proto_log::OrderLogBodyAdd::set_currency(v12, &order->currency);
  v13 = std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  proto_log::OrderLogBodyAdd::set_price_tier(v13, &order->price_tier);
  v14 = std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  proto_log::OrderLogBodyAdd::set_trade_no(v14, &order->trade_no);
  v15 = std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&order->trade_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&order->trade_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&order->trade_time);
  }
  proto_log::OrderLogBodyAdd::set_trade_time(v15, order->trade_time);
  v16 = std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&order->channel_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&order->channel_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&order->channel_id);
  }
  proto_log::OrderLogBodyAdd::set_channel_id(v16, order->channel_id);
  v17 = std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  proto_log::OrderLogBodyAdd::set_channel_order_no(v17, &order->channel_order_no);
  v18 = std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  proto_log::OrderLogBodyAdd::set_pay_plat(v18, &order->pay_plat);
  v19 = std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::OrderLogBodyAdd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  proto_log::OrderLogBodyAdd::set_extend(v19, &order->extend);
  v20 = ServiceBox::findService<OaserverService>();
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::OrderLogBodyAdd,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::OrderLogBodyAdd> *)(v2 + 32));
  OaserverService::printStatLog(v20, &p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<proto_log::OrderLogBodyAdd>::~shared_ptr((std::shared_ptr<proto_log::OrderLogBodyAdd> *const)(v2 + 32));
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 611: range 000000000CA8E034-000000000CA8E364
int32_t __cdecl HttpSession::sendTextRsp(
        HttpSession *const this,
        uint32_t status,
        std::string *p_body,
        boost::asio::yield_context *p_yield)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::map<std::string,std::string>::mapped_type *v7; // rax
  std::remove_reference<std::string&>::type *v8; // rax
  int32_t v9; // r14d
  boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor> *Socket; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-C1h] BYREF
  boost::asio::mutable_buffers_1 buffers; // [rsp+30h] [rbp-C0h] BYREF
  std::string __k; // [rsp+40h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 32 16 response_str:616";
  *(_QWORD *)(v4 + 16) = HttpSession::sendTextRsp;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450888) = -202116109;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "Content-Type", &__a);
  v7 = std::map<std::string,std::string>::operator[](&this->response_.head_map, &__k);
  std::string::operator=(v7, "text/html;charset=UTF-8");
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  if ( *(_BYTE *)(((unsigned __int64)&this->response_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->response_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->response_, "text/html;charset=UTF-8");
  }
  this->response_.status = status;
  v8 = std::move<std::string &>(p_body);
  std::string::operator=(&this->response_.body, v8);
  std::string::basic_string(v4 + 32);
  if ( common::minet::http_client::HttpUtils::serializeHttpResponse(&this->response_, (std::string *)(v4 + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&__k,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/http_session.cpp",
      "sendTextRsp",
      619);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
      (common::milog::MiLogStream *const)&__k,
      (const char (*)[18])"serializeTo fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__k);
    v9 = -1;
  }
  else
  {
    buffers = boost::asio::buffer<char,std::char_traits<char>,std::allocator<char>>((std::string *)(v4 + 32));
    Socket = common::minet::AServerSession::getSocket(this);
    boost::asio::async_write<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::mutable_buffers_1,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>> &>(
      Socket,
      &buffers,
      p_yield,
      0LL);
    v9 = 0;
  }
  std::string::~string((void *)(v4 + 32));
  result = v9;
  if ( v17 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
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

// Line 628: range 000000000CA8E366-000000000CA8E64D
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl HttpSession::sendErrorRsp(
        HttpSession *const this,
        uint32_t status,
        std::string *p_message,
        boost::asio::yield_context *p_yield)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  int32_t v7; // r14d
  boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor> *Socket; // rax
  int32_t result; // eax
  boost::asio::mutable_buffers_1 buffers; // [rsp+20h] [rbp-C0h] BYREF
  std::string v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 32 16 response_str:632";
  *(_QWORD *)(v4 + 16) = HttpSession::sendErrorRsp;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->response_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->response_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->response_, *(_QWORD *)&status);
  }
  this->response_.status = status;
  std::operator+<char>((std::string *)(v4 + 32), "{\"retcode\": -1, \"message\": \"", p_message);
  std::operator+<char>(&v13, (std::string *)(v4 + 32), "\"}");
  std::string::operator=(&this->response_.body, &v13);
  std::string::~string(&v13);
  std::string::~string((void *)(v4 + 32));
  std::string::basic_string(v4 + 32);
  if ( common::minet::http_client::HttpUtils::serializeHttpResponse(&this->response_, (std::string *)(v4 + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/http_session.cpp",
      "sendErrorRsp",
      635);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
      (common::milog::MiLogStream *const)&v13,
      (const char (*)[18])"serializeTo fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v13);
    v7 = -1;
  }
  else
  {
    buffers = boost::asio::buffer<char,std::char_traits<char>,std::allocator<char>>((std::string *)(v4 + 32));
    Socket = common::minet::AServerSession::getSocket(this);
    boost::asio::async_write<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::mutable_buffers_1,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>> &>(
      Socket,
      &buffers,
      p_yield,
      0LL);
    v7 = 0;
  }
  std::string::~string((void *)(v4 + 32));
  result = v7;
  if ( v14 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
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

// Line 644: range 000000000CA8E64E-000000000CA8E963
int32_t __cdecl HttpSession::sendHttp(
        HttpSession *const this,
        const Json::Value *body,
        boost::asio::yield_context *p_yield)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // rbx
  int32_t v6; // r14d
  boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor> *Socket; // rax
  int32_t result; // eax
  boost::asio::mutable_buffers_1 buffers; // [rsp+20h] [rbp-120h] BYREF
  Json::String v11; // [rsp+30h] [rbp-110h] BYREF
  char v12[240]; // [rsp+50h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 32 16 response_str:649 112 48 10 writer:645";
  *(_QWORD *)(v3 + 16) = HttpSession::sendHttp;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -219021312;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  Json::FastWriter::FastWriter((Json::FastWriter *const)(v3 + 112));
  Json::FastWriter::write[abi:cxx11](&v11, (Json::FastWriter *const)(v3 + 112), body);
  std::string::operator=(&this->response_.body, &v11);
  std::string::~string(&v11);
  if ( *(_BYTE *)(((unsigned __int64)&this->response_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->response_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->response_, &v11);
  }
  this->response_.status = 200;
  std::string::basic_string(v3 + 48);
  if ( common::minet::http_client::HttpUtils::serializeHttpResponse(&this->response_, (std::string *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/http_session.cpp",
      "sendHttp",
      652);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
      (common::milog::MiLogStream *const)&v11,
      (const char (*)[18])"serializeTo fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v11);
    v6 = -1;
  }
  else
  {
    buffers = boost::asio::buffer<char,std::char_traits<char>,std::allocator<char>>((std::string *)(v3 + 48));
    Socket = common::minet::AServerSession::getSocket(this);
    boost::asio::async_write<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::mutable_buffers_1,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>> &>(
      Socket,
      &buffers,
      p_yield,
      0LL);
    v6 = 0;
  }
  std::string::~string((void *)(v3 + 48));
  Json::FastWriter::~FastWriter((Json::FastWriter *const)(v3 + 112));
  result = v6;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
