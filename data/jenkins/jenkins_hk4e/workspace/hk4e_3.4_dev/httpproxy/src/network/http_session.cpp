// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/httpproxy/src/network/http_session.cpp

// Line 17: range 000000000C6DDC5E-000000000C6DDE00
void __cdecl HttpSession::SocketGuard::~SocketGuard(HttpSession::SocketGuard *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  common::milog::MiLogStream *v4; // r14
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-B0h] BYREF
  std::string val; // [rsp+30h] [rbp-90h] BYREF
  char v7[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 5 ec:19";
  *(_QWORD *)(v1 + 16) = HttpSession::SocketGuard::~SocketGuard;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  *(_DWORD *)(v1 + 32) = 0;
  *(_BYTE *)(v1 + 36) = 0;
  *(_QWORD *)(v1 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>::close(
    &this->sock,
    (boost::system::error_code *)(v1 + 32));
  if ( boost::system::error_code::operator bool((const boost::system::error_code *const)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/http_session.cpp",
      "~SocketGuard",
      23);
    v4 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v5, (const char (*)[15])"sock close ec:");
    boost::system::error_code::message[abi:cxx11](&val, (const boost::system::error_code *const)(v1 + 32));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor>::~basic_stream_socket(&this->sock);
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 31: range 000000000C6DDE02-000000000C6DF369
int32_t __cdecl HttpSession::onRecv(
        HttpSession *const this,
        char *data,
        uint32_t len,
        boost::asio::yield_context *p_yield)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char> >::value_type *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >::value_type *v17; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >::value_type *v23; // rax
  boost::asio::io_context *IoContext; // rax
  unsigned __int16 v25; // r14
  common::milog::MiLogStream *v26; // r14
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  common::milog::MiLogStream *v33; // r14
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // r14
  common::milog::MiLogStream *v40; // r14
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // r14
  boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor> *Socket; // rax
  common::milog::MiLogStream *v48; // r14
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // r14
  common::milog::MiLogStream *v51; // r14
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // r14
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // r14
  boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >::value_type *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // r14
  common::milog::MiLogStream *v59; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+2Bh] [rbp-445h] BYREF
  int v64; // [rsp+2Ch] [rbp-444h] BYREF
  char *val; // [rsp+30h] [rbp-440h] BYREF
  unsigned __int64 consume_bytes; // [rsp+38h] [rbp-438h]
  boost::asio::mutable_buffers_1 buffers; // [rsp+40h] [rbp-430h] BYREF
  boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> peer_endpoint; // [rsp+50h] [rbp-420h] BYREF
  common::milog::MiLogStream v69; // [rsp+70h] [rbp-400h] BYREF
  std::string body; // [rsp+90h] [rbp-3E0h] BYREF
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > handler; // [rsp+B0h] [rbp-3C0h] BYREF
  char v72[912]; // [rsp+E0h] [rbp-390h] BYREF

  v4 = (unsigned __int64)v72;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(864LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 48 2 14 server_port:58 64 16 8 timer:32 96 16 5 ec:34 128 32 12 server_ip:57 192 48 8 guard:69"
                        " 272 48 14 read_buffer:95 352 128 11 response:96 512 280 9 parser:35";
  *(_QWORD *)(v4 + 16) = HttpSession::onRecv;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234688015;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862725] = -218959118;
  v6[536862727] = -219021312;
  v6[536862728] = 62194;
  v6[536862730] = -218959118;
  v6[536862735] = -218959118;
  v6[536862744] = -218103808;
  v6[536862745] = -202116109;
  v6[536862746] = -202116109;
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v4 + 64));
  *(_DWORD *)(v4 + 96) = 0;
  *(_BYTE *)(v4 + 100) = 0;
  *(_QWORD *)(v4 + 104) = &boost::system::detail::cat_holder<void>::system_category_instance;
  boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::parser((boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char> > *const)(v4 + 512));
  boost::beast::http::basic_parser<true>::eager((boost::beast::http::basic_parser<true> *const)(v4 + 512), 1);
  buffers = boost::asio::buffer(data, len);
  consume_bytes = boost::beast::http::basic_parser<true>::put<boost::asio::mutable_buffers_1>(
                    (boost::beast::http::basic_parser<true> *const)(v4 + 512),
                    &buffers,
                    (boost::beast::error_code *)(v4 + 96));
  if ( boost::system::error_code::operator bool((const boost::system::error_code *const)(v4 + 96)) )
  {
    boost::system::error_code::error_code<boost::beast::http::error>(
      (boost::system::error_code *const)&buffers,
      need_more,
      0LL);
    if ( boost::system::operator==(
           (const boost::system::error_code *)(v4 + 96),
           (const boost::system::error_code *)&buffers) )
    {
      v7 = 11;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v69,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/network/http_session.cpp",
        "onRecv",
        47);
      v8 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v69,
             (const char (*)[30])"recv error http request from ");
      val = (char *)common::minet::AServerSession::getClientIp(this);
      v9 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v8, (const char *const *)&val);
      v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" ec: ");
      boost::system::error_code::message[abi:cxx11](&body, (const boost::system::error_code *const)(v4 + 96));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &body);
      std::string::~string(&body);
      common::milog::MiLogStream::~MiLogStream(&v69);
      boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
        &handler,
        p_yield);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&body, "Error Request.", &__a);
      HttpSession::sendResponse(this, bad_request, &body, &handler);
      std::string::~string(&body);
      std::allocator<char>::~allocator(&__a);
      boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&handler);
      v7 = 1;
    }
  }
  else
  {
    v11 = boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::get((boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char> > *const)(v4 + 512));
    boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::operator=(
      &this->request_,
      v11);
    HttpSession::parseTarget(this);
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&body,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/http_session.cpp",
      "onRecv",
      55);
    v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
            (common::milog::MiLogStream *const)&body,
            (const char (*)[12])"client_ip: ");
    val = (char *)common::minet::AServerSession::getClientIp(this);
    v13 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v12, (const char *const *)&val);
    v14 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])" uri: ");
    buffers = (boost::asio::mutable_buffers_1)boost::beast::http::header<true,boost::beast::http::basic_fields<std::allocator<char>>>::target(&this->request_);
    v15 = common::milog::MiLogStream::operator<<<boost::basic_string_view<char,std::char_traits<char>>,(boost::basic_string_view<char,std::char_traits<char>>*)0>(
            v14,
            (const boost::basic_string_view<char,std::char_traits<char> > *)&buffers);
    v16 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v15, (const char (*)[8])" body: ");
    v17 = boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::body[abi:cxx11](&this->request_);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, v17);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&body);
    std::string::basic_string(v4 + 128);
    if ( HttpSession::findServerAddress(this, (std::string *)(v4 + 128), (uint16_t *)(v4 + 48)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&body,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/network/http_session.cpp",
        "onRecv",
        61);
      v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
              (common::milog::MiLogStream *const)&body,
              (const char (*)[9])"client: ");
      val = (char *)common::minet::AServerSession::getClientIp(this);
      v19 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v18, (const char *const *)&val);
      v20 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              v19,
              (const char (*)[34])" findServerIpPort failed target: ");
      buffers = (boost::asio::mutable_buffers_1)boost::beast::http::header<true,boost::beast::http::basic_fields<std::allocator<char>>>::target(&this->request_);
      v21 = common::milog::MiLogStream::operator<<<boost::basic_string_view<char,std::char_traits<char>>,(boost::basic_string_view<char,std::char_traits<char>>*)0>(
              v20,
              (const boost::basic_string_view<char,std::char_traits<char> > *)&buffers);
      v22 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v21, (const char (*)[8])" body: ");
      v23 = boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::body[abi:cxx11](&this->request_);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, v23);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&body);
      boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
        &handler,
        p_yield);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&body, "Find Destination Failed", &__a);
      HttpSession::sendResponse(this, bad_request, &body, &handler);
      std::string::~string(&body);
      std::allocator<char>::~allocator(&__a);
      boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&handler);
      v7 = 1;
    }
    else
    {
      IoContext = common::minet::AServerSession::getIoContext(this);
      HttpSession::SocketGuard::SocketGuard((HttpSession::SocketGuard *const)(v4 + 192), IoContext);
      boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::operator[](
        &handler,
        p_yield,
        (boost::system::error_code *)(v4 + 96));
      v25 = *(_WORD *)(v4 + 48);
      boost::asio::ip::address::from_string((boost::asio::ip::address *)&body, (const std::string *)(v4 + 128));
      boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>::basic_endpoint(
        &peer_endpoint,
        (const boost::asio::ip::address *)&body,
        v25);
      boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>::async_connect<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>(
        (boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor> *const)(v4 + 192),
        &peer_endpoint,
        &handler);
      boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&handler);
      if ( boost::system::error_code::operator bool((const boost::system::error_code *const)(v4 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v69,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/network/http_session.cpp",
          "onRecv",
          73);
        v26 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v69, (const char (*)[9])"client: ");
        val = (char *)common::minet::AServerSession::getClientIp(this);
        v27 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v26, (const char *const *)&val);
        v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v27,
                (const char (*)[16])" async_connect ");
        v29 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v28, (const std::string *)(v4 + 128));
        v30 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v29, (const char (*)[2])":");
        v31 = common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(
                v30,
                (const unsigned __int16 *)(v4 + 48));
        v32 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v31, (const char (*)[10])" failed: ");
        boost::system::error_code::message[abi:cxx11](&body, (const boost::system::error_code *const)(v4 + 96));
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v32, &body);
        std::string::~string(&body);
        common::milog::MiLogStream::~MiLogStream(&v69);
        boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
          &handler,
          p_yield);
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>(&body, "Connect Region Server Failed", &__a);
        HttpSession::sendResponse(this, internal_server_error, &body, &handler);
        std::string::~string(&body);
        std::allocator<char>::~allocator(&__a);
        boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&handler);
        v7 = 1;
      }
      else if ( HttpSession::initServerSockOption(this, (boost::asio::ip::tcp::socket *)(v4 + 192)) )
      {
        boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
          &handler,
          p_yield);
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>(&body, "initServerSockOption Failed", &__a);
        HttpSession::sendResponse(this, internal_server_error, &body, &handler);
        std::string::~string(&body);
        std::allocator<char>::~allocator(&__a);
        boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&handler);
        v7 = 1;
      }
      else
      {
        boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::operator[](
          &handler,
          p_yield,
          (boost::system::error_code *)(v4 + 96));
        boost::beast::http::async_write<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>(
          (boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor> *)(v4 + 192),
          &this->request_,
          &handler);
        boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&handler);
        if ( boost::system::error_code::operator bool((const boost::system::error_code *const)(v4 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v69,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/network/http_session.cpp",
            "onRecv",
            89);
          v33 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v69, (const char (*)[8])"client ");
          val = (char *)common::minet::AServerSession::getClientIp(this);
          v34 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v33, (const char *const *)&val);
          v35 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v34, (const char (*)[9])" region ");
          v36 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                  v35,
                  (const std::string *)(v4 + 128));
          v37 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v36, (const char (*)[2])":");
          v38 = common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(
                  v37,
                  (const unsigned __int16 *)(v4 + 48));
          v39 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  v38,
                  (const char (*)[22])" async_write failed: ");
          boost::system::error_code::message[abi:cxx11](&body, (const boost::system::error_code *const)(v4 + 96));
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v39, &body);
          std::string::~string(&body);
          common::milog::MiLogStream::~MiLogStream(&v69);
          boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
            &handler,
            p_yield);
          std::allocator<char>::allocator(&__a);
          std::string::basic_string<std::allocator<char>>(&body, "Forward Request Failed", &__a);
          HttpSession::sendResponse(this, internal_server_error, &body, &handler);
          std::string::~string(&body);
          std::allocator<char>::~allocator(&__a);
          boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&handler);
          v7 = 1;
        }
        else
        {
          boost::beast::basic_flat_buffer<std::allocator<char>>::basic_flat_buffer((boost::beast::basic_flat_buffer<std::allocator<char> > *const)(v4 + 272));
          boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::message((boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const)(v4 + 352));
          boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::operator[](
            &handler,
            p_yield,
            (boost::system::error_code *)(v4 + 96));
          boost::beast::http::async_read<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>(
            (boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor> *)(v4 + 192),
            (boost::beast::basic_flat_buffer<std::allocator<char> > *)(v4 + 272),
            (boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *)(v4 + 352),
            &handler);
          boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&handler);
          if ( boost::system::error_code::operator bool((const boost::system::error_code *const)(v4 + 96)) )
          {
            common::milog::MiLogStream::create(
              &v69,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/network/http_session.cpp",
              "onRecv",
              100);
            v40 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v69, (const char (*)[8])"client ");
            val = (char *)common::minet::AServerSession::getClientIp(this);
            v41 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v40, (const char *const *)&val);
            v42 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v41, (const char (*)[9])" region ");
            v43 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                    v42,
                    (const std::string *)(v4 + 128));
            v44 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v43, (const char (*)[2])":");
            v45 = common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(
                    v44,
                    (const unsigned __int16 *)(v4 + 48));
            v46 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    v45,
                    (const char (*)[21])" async_read failed: ");
            boost::system::error_code::message[abi:cxx11](&body, (const boost::system::error_code *const)(v4 + 96));
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v46, &body);
            std::string::~string(&body);
            common::milog::MiLogStream::~MiLogStream(&v69);
            boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
              &handler,
              p_yield);
            std::allocator<char>::allocator(&__a);
            std::string::basic_string<std::allocator<char>>(&body, "Read Region Server Failed", &__a);
            HttpSession::sendResponse(this, internal_server_error, &body, &handler);
            std::string::~string(&body);
            std::allocator<char>::~allocator(&__a);
            boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&handler);
            v7 = 1;
          }
          else
          {
            boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::operator[](
              &handler,
              p_yield,
              (boost::system::error_code *)(v4 + 96));
            Socket = common::minet::AServerSession::getSocket(this);
            boost::beast::http::async_write<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>(
              Socket,
              (const boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *)(v4 + 352),
              &handler);
            boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&handler);
            if ( boost::system::error_code::operator bool((const boost::system::error_code *const)(v4 + 96)) )
            {
              common::milog::MiLogStream::create(
                &v69,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/network/http_session.cpp",
                "onRecv",
                109);
              v48 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v69, (const char (*)[8])"client ");
              val = (char *)common::minet::AServerSession::getClientIp(this);
              v49 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v48, (const char *const *)&val);
              v50 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                      v49,
                      (const char (*)[31])" async_write response failed: ");
              boost::system::error_code::message[abi:cxx11](&body, (const boost::system::error_code *const)(v4 + 96));
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v50, &body);
              std::string::~string(&body);
              common::milog::MiLogStream::~MiLogStream(&v69);
              v7 = 1;
            }
            else
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&body,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/network/http_session.cpp",
                "onRecv",
                113);
              v51 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      (common::milog::MiLogStream *const)&body,
                      (const char (*)[12])"client_ip: ");
              val = (char *)common::minet::AServerSession::getClientIp(this);
              v52 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v51, (const char *const *)&val);
              v53 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v52, (const char (*)[7])" uri: ");
              buffers = (boost::asio::mutable_buffers_1)boost::beast::http::header<true,boost::beast::http::basic_fields<std::allocator<char>>>::target(&this->request_);
              v54 = common::milog::MiLogStream::operator<<<boost::basic_string_view<char,std::char_traits<char>>,(boost::basic_string_view<char,std::char_traits<char>>*)0>(
                      v53,
                      (const boost::basic_string_view<char,std::char_traits<char> > *)&buffers);
              v55 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v54, (const char (*)[8])" body: ");
              v56 = boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::body[abi:cxx11](&this->request_);
              v57 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v55, v56);
              v58 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v57,
                      (const char (*)[12])" timecost= ");
              v64 = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v4 + 64));
              v59 = common::milog::MiLogStream::operator<<<int,(int *)0>(v58, &v64);
              common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v59, (const char (*)[4])off_19EF1220);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&body);
              v7 = 0;
            }
          }
          boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::~message((boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const)(v4 + 352));
          boost::beast::basic_flat_buffer<std::allocator<char>>::~basic_flat_buffer((boost::beast::basic_flat_buffer<std::allocator<char> > *const)(v4 + 272));
        }
      }
      HttpSession::SocketGuard::~SocketGuard((HttpSession::SocketGuard *const)(v4 + 192));
    }
    std::string::~string((void *)(v4 + 128));
  }
  boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::~parser((boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char> > *const)(v4 + 512));
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v4 + 64));
  result = v7;
  if ( v72 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF803C) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8060) = 0LL;
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
  return result;
};

// Line 120: range 000000000C6DF36A-000000000C6DF444
int32_t __cdecl HttpSession::findServerAddress(HttpSession *const this, std::string *ip_0, uint16_t *port)
{
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<char>(&this->uri_, off_19EF1260) )
    return HttpSession::findMuipServerAddress(this, ip_0, port);
  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/network/http_session.cpp",
    "findServerAddress",
    128);
  v4 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
         &v6,
         (const char (*)[35])"findServerAddress failed for uri: ");
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, &this->uri_);
  common::milog::MiLogStream::~MiLogStream(&v6);
  return -1;
};

// Line 133: range 000000000C6DF446-000000000C6DF71B
int32_t __cdecl HttpSession::findMuipServerAddress(HttpSession *const this, std::string *ip_0, uint16_t *port)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t MuipServerAddress; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-C1h] BYREF
  std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Self __y; // [rsp+30h] [rbp-C0h] BYREF
  const std::string *region; // [rsp+38h] [rbp-B8h]
  std::string __x; // [rsp+40h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 8 iter:134 64 16 14 config_ptr:142";
  *(_QWORD *)(v3 + 16) = HttpSession::findMuipServerAddress;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202178560;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__x, "region", &__a);
  *(std::map<std::string,std::string>::iterator *)(v3 + 32) = std::map<std::string,std::string>::find(
                                                                &this->para_map_,
                                                                &__x);
  std::string::~string(&__x);
  std::allocator<char>::~allocator(&__a);
  __y._M_node = std::map<std::string,std::string>::end(&this->para_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Self *)(v3 + 32),
         &__y) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&__x,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/http_session.cpp",
      "findMuipServerAddress",
      137);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
      (common::milog::MiLogStream *const)&__x,
      (const char (*)[24])"Find region para failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
    MuipServerAddress = -1;
  }
  else
  {
    region = &std::_Rb_tree_iterator<std::pair<std::string const,std::string>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,std::string > > *const)(v3 + 32))->second;
    ServiceBox::findService<HttpProxyService>();
    HttpProxyService::getConfig((HttpProxyService *const)(v3 + 64));
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    MuipServerAddress = Config::findMuipServerAddress(v7, region, ip_0, port);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
  }
  result = MuipServerAddress;
  if ( v14 == (char *)v3 )
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

// Line 147: range 000000000C6DF71C-000000000C6DFC1A
void __cdecl HttpSession::parseTarget(HttpSession *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::remove_reference<std::string >::type *v4; // rax
  boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >::value_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::allocator<char> a; // [rsp+1Fh] [rbp-E1h] BYREF
  std::string::size_type slash_pos; // [rsp+20h] [rbp-E0h]
  std::string::size_type question_pos; // [rsp+28h] [rbp-D8h]
  boost::basic_string_view<char,std::char_traits<char> > v10; // [rsp+30h] [rbp-D0h] BYREF
  std::string p_para_str; // [rsp+40h] [rbp-C0h] BYREF
  char v12[160]; // [rsp+60h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 10 method:150 64 32 10 target:167";
  *(_QWORD *)(v1 + 16) = HttpSession::parseTarget;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862723] = -202116109;
  std::string::clear(&this->uri_);
  std::map<std::string,std::string>::clear(&this->para_map_);
  *(_DWORD *)(v1 + 48) = boost::beast::http::header<true,boost::beast::http::basic_fields<std::allocator<char>>>::method(&this->request_);
  if ( *(_DWORD *)(v1 + 48) == 2 )
  {
    v10 = boost::beast::http::header<true,boost::beast::http::basic_fields<std::allocator<char>>>::target(&this->request_);
    std::allocator<char>::allocator(&a);
    boost::basic_string_view<char,std::char_traits<char>>::to_string<std::allocator<char>>(
      (std::string *)(v1 + 64),
      &v10,
      &a);
    std::allocator<char>::~allocator(&a);
    slash_pos = std::string::find(v1 + 64, 47LL, 0LL);
    if ( slash_pos != -1LL )
    {
      question_pos = std::string::find(v1 + 64, 63LL, slash_pos);
      if ( question_pos != -1LL )
      {
        std::string::substr(&p_para_str, v1 + 64, slash_pos + 1, question_pos - slash_pos - 1);
        std::string::operator=(&this->uri_, &p_para_str);
        std::string::~string(&p_para_str);
        std::string::substr(&p_para_str, v1 + 64, question_pos + 1, -1LL);
        HttpSession::parseHttpParaStr(this, &p_para_str);
        std::string::~string(&p_para_str);
      }
    }
    std::string::~string((void *)(v1 + 64));
  }
  else if ( *(_DWORD *)(v1 + 48) == 4 )
  {
    v10 = boost::beast::http::header<true,boost::beast::http::basic_fields<std::allocator<char>>>::target(&this->request_);
    std::allocator<char>::allocator(&a);
    boost::basic_string_view<char,std::char_traits<char>>::to_string<std::allocator<char>>(
      (std::string *)(v1 + 64),
      &v10,
      &a);
    std::allocator<char>::~allocator(&a);
    std::string::substr(&p_para_str, v1 + 64, 1LL, -1LL);
    v4 = std::move<std::string>(&p_para_str);
    std::string::operator=(&this->uri_, v4);
    std::string::~string(&p_para_str);
    v5 = boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::body[abi:cxx11](&this->request_);
    std::string::basic_string(&p_para_str, v5);
    HttpSession::parseHttpParaStr(this, &p_para_str);
    std::string::~string(&p_para_str);
    std::string::~string((void *)(v1 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&p_para_str,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/http_session.cpp",
      "parseTarget",
      174);
    v6 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           (common::milog::MiLogStream *const)&p_para_str,
           (const char (*)[26])"Not support such method: ");
    common::milog::MiLogStream::operator<<<boost::beast::http::verb,(boost::beast::http::verb*)0>(
      v6,
      (const boost::beast::http::verb *)(v1 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_para_str);
  }
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 180: range 000000000C6DFC1C-000000000C6E031B
void __cdecl HttpSession::parseHttpParaStr(HttpSession *const this, std::string *p_para_str)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  common::milog::MiLogStream *v6; // rdx
  bool v7; // r14
  common::milog::MiLogStream *v8; // rax
  _BOOL4 v9; // r14d
  common::milog::MiLogStream *v10; // rax
  const std::string *v11; // rax
  const std::string *v12; // rax
  std::string *v13; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<const std::string,std::string > >,bool> v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  int v18; // r14d
  std::allocator<char> __a; // [rsp+1Fh] [rbp-191h] BYREF
  std::vector<std::string>::iterator __for_begin; // [rsp+20h] [rbp-190h] BYREF
  std::vector<std::string>::iterator __for_end; // [rsp+28h] [rbp-188h] BYREF
  std::vector<std::string> *__for_range; // [rsp+30h] [rbp-180h]
  const std::string *param_str; // [rsp+38h] [rbp-178h]
  std::string sep; // [rsp+40h] [rbp-170h] BYREF
  char v25[336]; // [rsp+60h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 24 13 param_vec:181 96 24 17 key_value_vec:189 160 32 7 key:202 224 32 7 val:203";
  *(_QWORD *)(v2 + 16) = HttpSession::parseHttpParaStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 32));
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&sep, "&", &__a);
  v5 = common::tools::StringUtils::splitToList(p_para_str, &sep, (std::vector<std::string> *)(v2 + 32), 1) != 0;
  std::string::~string(&sep);
  std::allocator<char>::~allocator(&__a);
  if ( v5 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&sep,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/http_session.cpp",
      "parseHttpParaStr",
      184);
    v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           (common::milog::MiLogStream *const)&sep,
           (const char (*)[28])"splitToList fail. para_str:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, p_para_str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&sep);
  }
  else
  {
    __for_range = (std::vector<std::string> *)(v2 + 32);
    __for_begin._M_current = std::vector<std::string>::begin((std::vector<std::string> *const)(v2 + 32))._M_current;
    __for_end._M_current = std::vector<std::string>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(&__for_begin, &__for_end) )
    {
      param_str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*(&__for_begin);
      std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 96));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&sep, "=", &__a);
      v7 = common::tools::StringUtils::splitToList(param_str, &sep, (std::vector<std::string> *)(v2 + 96), 1) != 0;
      std::string::~string(&sep);
      std::allocator<char>::~allocator(&__a);
      if ( v7 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&sep,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/network/http_session.cpp",
          "parseHttpParaStr",
          192);
        v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
               (common::milog::MiLogStream *const)&sep,
               (const char (*)[29])"splitToList fail. param_str:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, param_str);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&sep);
        v9 = 0;
      }
      else if ( std::vector<std::string>::size((const std::vector<std::string> *const)(v2 + 96)) == 2 )
      {
        v11 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v2 + 96), 0LL);
        common::tools::StringUtils::urlDecode((std::string *)(v2 + 160), v11);
        v12 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v2 + 96), 1uLL);
        common::tools::StringUtils::urlDecode((std::string *)(v2 + 224), v12);
        v14 = std::map<std::string,std::string>::emplace<std::string&,std::string&>(
                &this->para_map_,
                (std::string *)(v2 + 160),
                (std::string *)(v2 + 224),
                (std::string *)&this->para_map_,
                v13);
        if ( !v14.second )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&sep,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/network/http_session.cpp",
            "parseHttpParaStr",
            206);
          v15 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  (common::milog::MiLogStream *const)&sep,
                  (const char (*)[15])"duplicate key:");
          v16 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                  v15,
                  (const std::string *)(v2 + 160));
          v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v16, (const char (*)[11])" para_str:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, p_para_str);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&sep);
          v18 = 0;
        }
        else
        {
          v18 = 1;
        }
        std::string::~string((void *)(v2 + 224));
        std::string::~string((void *)(v2 + 160));
        v9 = v18 == 1;
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&sep,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/network/http_session.cpp",
          "parseHttpParaStr",
          198);
        v10 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                (common::milog::MiLogStream *const)&sep,
                (const char (*)[36])"key_value_vec size != 2. param_str:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, param_str);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&sep);
        v9 = 0;
      }
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 96));
      if ( !v9 )
        break;
      __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++(&__for_begin);
    }
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 32));
  if ( v25 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
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
};

// Line 214: range 000000000C6E031C-000000000C6E0545
int32_t __cdecl HttpSession::initServerSockOption(HttpSession *const this, boost::asio::ip::tcp::socket *sock)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  int32_t result; // eax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-D0h] BYREF
  std::string val; // [rsp+30h] [rbp-B0h] BYREF
  char v9[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 10 option:216 64 16 6 ec:215";
  *(_QWORD *)(v2 + 16) = HttpSession::initServerSockOption;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 64) = 0;
  *(_BYTE *)(v2 + 68) = 0;
  *(_QWORD *)(v2 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
  boost::asio::detail::socket_option::boolean<6,1>::boolean(
    (boost::asio::detail::socket_option::boolean<6,1> *const)(v2 + 48),
    1);
  boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>::set_option<boost::asio::detail::socket_option::boolean<6,1>>(
    sock,
    (const boost::asio::detail::socket_option::boolean<6,1> *)(v2 + 48),
    (boost::system::error_code *)(v2 + 64));
  if ( boost::system::error_code::operator bool((const boost::system::error_code *const)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/http_session.cpp",
      "initServerSockOption",
      220);
    v5 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v7,
           (const char (*)[22])"set no_delay failed: ");
    boost::system::error_code::message[abi:cxx11](&val, (const boost::system::error_code *const)(v2 + 64));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v7);
    result = -1;
  }
  else
  {
    boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::executor>::non_blocking(sock, 1);
    result = 0;
  }
  if ( v9 == (char *)v2 )
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

// Line 246: range 000000000C6E0546-000000000C6E099D
int32_t __cdecl HttpSession::sendResponse(
        HttpSession *const this,
        boost::beast::http::status status,
        const std::string *body,
        boost::asio::yield_context *p_yield)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >::value_type *v7; // rdx
  unsigned int v8; // eax
  bool v9; // al
  const char (*v10)[24]; // rdx
  boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor> *Socket; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  int32_t result; // eax
  int v18; // [rsp+24h] [rbp-3ACh] BYREF
  char *val; // [rsp+28h] [rbp-3A8h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-3A0h] BYREF
  std::string v21; // [rsp+50h] [rbp-380h] BYREF
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > handler; // [rsp+70h] [rbp-360h] BYREF
  boost::beast::string_param value; // [rsp+A0h] [rbp-330h] BYREF
  char v24[272]; // [rsp+2C0h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 6 ec:258 64 128 12 response:247";
  *(_QWORD *)(v4 + 16) = HttpSession::sendResponse;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862726] = -202116109;
  boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::message((boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const)(v4 + 64));
  boost::beast::http::header<false,boost::beast::http::basic_fields<std::allocator<char>>>::result(
    (boost::beast::http::header<false,boost::beast::http::basic_fields<std::allocator<char> > > *const)(v4 + 64),
    status);
  v7 = boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::body[abi:cxx11]((boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const)(v4 + 64));
  std::string::operator=(v7, body);
  boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::prepare_payload((boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const)(v4 + 64));
  v8 = boost::beast::http::header<true,boost::beast::http::basic_fields<std::allocator<char>>>::version(&this->request_);
  boost::beast::http::header<false,boost::beast::http::basic_fields<std::allocator<char>>>::version(
    (boost::beast::http::header<false,boost::beast::http::basic_fields<std::allocator<char> > > *const)(v4 + 64),
    v8);
  v9 = boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::keep_alive(&this->request_);
  boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::keep_alive(
    (boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const)(v4 + 64),
    v9);
  v18 = 1;
  boost::beast::string_param::string_param<int>(&value, &v18, &v18);
  boost::beast::http::basic_fields<std::allocator<char>>::set(
    (boost::beast::http::basic_fields<std::allocator<char> > *const)(v4 + 64),
    server,
    &value);
  boost::beast::string_param::~string_param(&value);
  boost::beast::string_param::string_param<char [24]>(&value, (const char (*)[24])"text/html;charset=UTF-8", v10);
  boost::beast::http::basic_fields<std::allocator<char>>::set(
    (boost::beast::http::basic_fields<std::allocator<char> > *const)(v4 + 64),
    content_type,
    &value);
  boost::beast::string_param::~string_param(&value);
  *(_DWORD *)(v4 + 32) = 0;
  *(_BYTE *)(v4 + 36) = 0;
  *(_QWORD *)(v4 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::operator[](
    &handler,
    p_yield,
    (boost::system::error_code *)(v4 + 32));
  Socket = common::minet::AServerSession::getSocket(this);
  boost::beast::http::async_write<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>(
    Socket,
    (const boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *)(v4 + 64),
    &handler);
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&handler);
  if ( boost::system::error_code::operator bool((const boost::system::error_code *const)(v4 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/http_session.cpp",
      "sendResponse",
      262);
    v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v20, (const char (*)[18])"send response to ");
    val = (char *)common::minet::AServerSession::getClientIp(this);
    v13 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v12, (const char *const *)&val);
    v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" ec: ");
    boost::system::error_code::message[abi:cxx11](&v21, (const boost::system::error_code *const)(v4 + 32));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, &v21);
    std::string::~string(&v21);
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::~message((boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const)(v4 + 64));
  result = 0;
  if ( v24 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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
  return result;
};
