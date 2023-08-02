// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/muipserver/src/network/http_session.cpp

// Line 19: range 000000000CBF3F5C-000000000CBF4B53
int32_t __cdecl HttpSession::onRecv(
        HttpSession *const this,
        char *data,
        uint32_t len,
        boost::asio::yield_context *p_yield)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  int32_t v10; // r14d
  boost::optional<long unsigned int> v11; // rax
  boost::optional<long unsigned int> v12; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char> >::value_type *v18; // rax
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >::value_type *v25; // rax
  common::milog::MiLogStream *v26; // r14
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r14
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+2Bh] [rbp-355h] BYREF
  int v; // [rsp+2Ch] [rbp-354h] BYREF
  boost::asio::mutable_buffers_1 buffers; // [rsp+30h] [rbp-350h] BYREF
  common::milog::MiLogStream v37; // [rsp+40h] [rbp-340h] BYREF
  std::string val; // [rsp+60h] [rbp-320h] BYREF
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > v39; // [rsp+80h] [rbp-300h] BYREF
  char v40[720]; // [rsp+B0h] [rbp-2D0h] BYREF

  v4 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(672LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 32 8 17 content_length:40 64 8 27 content_length_remaining:41 96 16 8 timer:20 128 16 5 ec:22 "
                        "160 128 12 beast_req:47 320 280 4 p:23";
  *(_QWORD *)(v4 + 16) = HttpSession::onRecv;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862729] = -218959118;
  v6[536862738] = -218103808;
  v6[536862739] = -202116109;
  v6[536862740] = -202116109;
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v4 + 96));
  *(_DWORD *)(v4 + 128) = 0;
  *(_BYTE *)(v4 + 132) = 0;
  *(_QWORD *)(v4 + 136) = &boost::system::detail::cat_holder<void>::system_category_instance;
  boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::parser((boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char> > *const)(v4 + 320));
  boost::beast::http::basic_parser<true>::eager((boost::beast::http::basic_parser<true> *const)(v4 + 320), 1);
  buffers = boost::asio::buffer(data, len);
  boost::beast::http::basic_parser<true>::put<boost::asio::mutable_buffers_1>(
    (boost::beast::http::basic_parser<true> *const)(v4 + 320),
    &buffers,
    (boost::beast::error_code *)(v4 + 128));
  if ( boost::system::error_code::operator bool((const boost::system::error_code *const)(v4 + 128)) )
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/http_session.cpp",
      "onRecv",
      30);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v37,
           (const char (*)[30])"recv error http request from ");
    *(_QWORD *)(v4 + 64) = common::minet::AServerSession::getClientIp(this);
    v8 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)(v4 + 64));
    v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" ec: ");
    boost::system::error_code::message[abi:cxx11](&val, (const boost::system::error_code *const)(v4 + 128));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v37);
    boost::system::error_code::error_code<boost::beast::http::error>(
      (boost::system::error_code *const)&buffers,
      need_more,
      0LL);
    if ( boost::system::operator==(
           (const boost::system::error_code *)(v4 + 128),
           (const boost::system::error_code *)&buffers) )
    {
      v10 = 11;
    }
    else
    {
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&val, "Error Request.", &__a);
      HttpSession::sendHttp(this, internal_server_error, &val);
      std::string::~string(&val);
      std::allocator<char>::~allocator(&__a);
      v10 = 1;
    }
  }
  else if ( !boost::beast::http::basic_parser<true>::is_done((const boost::beast::http::basic_parser<true> *const)(v4 + 320)) )
  {
    v11 = boost::beast::http::basic_parser<true>::content_length((const boost::beast::http::basic_parser<true> *const)(v4 + 320));
    LODWORD(buffers.data_) = *(_DWORD *)&v11.m_initialized;
    buffers.size_ = v11.m_storage;
    v = 0;
    *(_QWORD *)(v4 + 32) = boost::optional<unsigned long>::value_or<int>(
                             (boost::optional<long unsigned int> *const)&buffers,
                             &v);
    v12 = boost::beast::http::basic_parser<true>::content_length_remaining((const boost::beast::http::basic_parser<true> *const)(v4 + 320));
    LODWORD(buffers.data_) = *(_DWORD *)&v12.m_initialized;
    buffers.size_ = v12.m_storage;
    v = 0;
    *(_QWORD *)(v4 + 64) = boost::optional<unsigned long>::value_or<int>(
                             (boost::optional<long unsigned int> *const)&buffers,
                             &v);
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/http_session.cpp",
      "onRecv",
      42);
    v13 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            (common::milog::MiLogStream *const)&val,
            (const char (*)[34])"parser.is_done is false, session:");
    v = common::minet::AServerSession::getSessionId(this);
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)&v);
    v15 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v14, (const char (*)[17])" content_length:");
    v16 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v15,
            (const unsigned __int64 *)(v4 + 32));
    v17 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            v16,
            (const char (*)[27])" content_length_remaining:");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v17, (const unsigned __int64 *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    v10 = 11;
  }
  else
  {
    v18 = boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::get((boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char> > *const)(v4 + 320));
    boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::message(
      (boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const)(v4 + 160),
      v18);
    if ( common::minet::http_client::HttpUtils::initHttpRequest(
           (const common::minet::http_client::BeastHttpRequest *)(v4 + 160),
           &this->request_,
           0) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/network/http_session.cpp",
        "onRecv",
        50);
      v19 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              (common::milog::MiLogStream *const)&val,
              (const char (*)[25])"parse request fails, ip:");
      *(_QWORD *)(v4 + 64) = common::minet::AServerSession::getClientIp(this);
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v19, (const char *const *)(v4 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&val, "Error Request.", &__a);
      HttpSession::sendHttp(this, internal_server_error, &val);
      std::string::~string(&val);
      std::allocator<char>::~allocator(&__a);
      v10 = 1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/network/http_session.cpp",
        "onRecv",
        54);
      v20 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v37, (const char (*)[9])"target: ");
      buffers = (boost::asio::mutable_buffers_1)boost::beast::http::header<true,boost::beast::http::basic_fields<std::allocator<char>>>::target((const boost::beast::http::header<true,boost::beast::http::basic_fields<std::allocator<char> > > *const)(v4 + 160));
      std::allocator<char>::allocator(&__a);
      boost::basic_string_view<char,std::char_traits<char>>::to_string<std::allocator<char>>(
        &val,
        (const boost::basic_string_view<char,std::char_traits<char> > *const)&buffers,
        &__a);
      v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, &val);
      v22 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v21, (const char (*)[10])" session:");
      v = common::minet::AServerSession::getSessionId(this);
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)&v);
      v24 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v23, (const char (*)[7])" body:");
      v25 = boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::body[abi:cxx11]((boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const)(v4 + 160));
      *(_QWORD *)(v4 + 64) = std::string::c_str(v25);
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v24, (const char *const *)(v4 + 64));
      std::string::~string(&val);
      std::allocator<char>::~allocator(&__a);
      common::milog::MiLogStream::~MiLogStream(&v37);
      if ( std::operator==<char>(&this->request_.uri, "alive") )
      {
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>(&val, "alive", &__a);
        HttpSession::sendHttp(this, ok, &val);
        std::string::~string(&val);
        std::allocator<char>::~allocator(&__a);
      }
      else
      {
        boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
          &v39,
          p_yield);
        RequestHandler::processRequest(&this->handler_, &this->request_, &this->response_, &v39);
        boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v39);
        boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
          &v39,
          p_yield);
        HttpSession::sendHttp(this, &v39);
        boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v39);
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/network/http_session.cpp",
          "onRecv",
          69);
        v26 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                (common::milog::MiLogStream *const)&val,
                (const char (*)[11])"remote_ip:");
        *(_QWORD *)(v4 + 64) = common::minet::AServerSession::getClientIp(this);
        v27 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v26, (const char *const *)(v4 + 64));
        v28 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v27, (const char (*)[7])", uri:");
        v29 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v28, &this->request_.uri);
        v30 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v29, (const char (*)[12])", timecost:");
        v = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v4 + 96));
        common::milog::MiLogStream::operator<<<int,(int *)0>(v30, &v);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      }
      v10 = 1;
    }
    boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::~message((boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const)(v4 + 160));
  }
  boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::~parser((boost::beast::http::parser<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char> > *const)(v4 + 320));
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v4 + 96));
  result = v10;
  if ( v40 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8050) = 0;
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
    *(_DWORD *)((v4 >> 3) + 0x7FFF8050) = -168430091;
  }
  return result;
};

// Line 75: range 000000000CBF4B54-000000000CBF4B66
int32_t __cdecl HttpSession::onConnect(HttpSession *const this, boost::asio::yield_context *p_)
{
  return 0;
};

// Line 81: range 000000000CBF4B68-000000000CBF4B7A
int32_t __cdecl HttpSession::onDisconnect(HttpSession *const this, boost::asio::yield_context *p_)
{
  return 0;
};

// Line 87: range 000000000CBF4B7C-000000000CBF4E8C
int32_t __cdecl HttpSession::sendHttp(
        HttpSession *const this,
        boost::beast::http::status status,
        const std::string *body)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::map<std::string,std::string>::mapped_type *v6; // rax
  int32_t v7; // r14d
  uint32_t v8; // r15d
  const char *v9; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-B1h] BYREF
  std::string __k; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 32 15 response_str:92";
  *(_QWORD *)(v3 + 16) = HttpSession::sendHttp;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450888) = -202116109;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "Content-Type", &__a);
  v6 = std::map<std::string,std::string>::operator[](&this->response_.head_map, &__k);
  std::string::operator=(v6, "text/html;charset=UTF-8");
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  if ( *(_BYTE *)(((unsigned __int64)&this->response_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->response_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->response_, "text/html;charset=UTF-8");
  }
  this->response_.status = status;
  std::string::operator=(&this->response_.body, body);
  std::string::basic_string(v3 + 32);
  if ( common::minet::http_client::HttpUtils::serializeHttpResponse(&this->response_, (std::string *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&__k,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/http_session.cpp",
      "sendHttp",
      95);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
      (common::milog::MiLogStream *const)&__k,
      (const char (*)[18])"serializeTo fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__k);
    v7 = -1;
  }
  else
  {
    v8 = std::string::length(v3 + 32);
    v9 = (const char *)std::string::c_str(v3 + 32);
    common::minet::AServerSession::send(this, v9, v8);
    v7 = 0;
  }
  std::string::~string((void *)(v3 + 32));
  result = v7;
  if ( v14 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
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

// Line 103: range 000000000CBF4E8E-000000000CBF508C
int32_t __cdecl HttpSession::sendHttp(HttpSession *const this, boost::asio::yield_context *p_yield)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor> *Socket; // rax
  int32_t result; // eax
  boost::asio::mutable_buffers_1 buffers; // [rsp+10h] [rbp-C0h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-B0h] BYREF
  char v10[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 16 response_str:104";
  *(_QWORD *)(v2 + 16) = HttpSession::sendHttp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  std::string::basic_string(v2 + 32);
  if ( common::minet::http_client::HttpUtils::serializeHttpResponse(&this->response_, (std::string *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/http_session.cpp",
      "sendHttp",
      107);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v9, (const char (*)[18])"serializeTo fails");
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    buffers = boost::asio::buffer<char,std::char_traits<char>,std::allocator<char>>((std::string *)(v2 + 32));
    Socket = common::minet::AServerSession::getSocket(this);
    boost::asio::async_write<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor>,boost::asio::mutable_buffers_1,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>> &>(
      Socket,
      &buffers,
      p_yield,
      0LL);
    v5 = 0;
  }
  std::string::~string((void *)(v2 + 32));
  result = v5;
  if ( v10 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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
