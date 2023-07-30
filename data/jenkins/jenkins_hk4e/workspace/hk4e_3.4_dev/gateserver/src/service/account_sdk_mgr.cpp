// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gateserver/src/service/account_sdk_mgr.cpp

// Line 27: range 000000000C75D13C-000000000C75D2ED
int32_t __cdecl AccountSdkMgr::init(
        AccountSdkMgr *const this,
        uint32_t thread_num,
        uint32_t capacity,
        uint32_t work_thread_index)
{
  std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::pointer v5; // rax
  unsigned __int64 v6; // rdx
  std::unique_ptr<common::minet::http_client::HttpClientMgr> __u; // [rsp+28h] [rbp-38h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

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
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/account_sdk_mgr.cpp",
      "init",
      31);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v10,
      (const char (*)[32])"http_client_mgr_ptr_ is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v10);
    return -1;
  }
  else
  {
    v5 = std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::operator->(&this->http_client_mgr_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v5);
    v6 = (unsigned __int64)(v5->_vptr_HttpClientMgrBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v5->_vptr_HttpClientMgrBase + 2);
    if ( (*(unsigned int (__fastcall **)(std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::pointer, _QWORD, _QWORD, _QWORD))v6)(
           v5,
           thread_num,
           capacity,
           work_thread_index) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/service/account_sdk_mgr.cpp",
        "init",
        36);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        &v10,
        (const char (*)[28])"http_client_mgr_ init fails");
      common::milog::MiLogStream::~MiLogStream(&v10);
      return -1;
    }
    else
    {
      return 0;
    }
  }
};

// Line 43: range 000000000C75E058-000000000C75EA2A
int32_t __cdecl AccountSdkMgr::asyncCheckSdkAccount(
        AccountSdkMgr *const this,
        common::minet::PacketPtr *p_packet_ptr,
        const std::string *client_ip,
        std::function<int(SdkRetcode,const AccountSdkMgr::SdkRspParam&)> *p_cb)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  SpanContextGuardMgr *v7; // rax
  const jaegertracing::SpanContext *v8; // r14
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v9; // rax
  TracingMgr *v10; // r14
  SpanContextGuardMgr *v11; // rax
  const jaegertracing::SpanContext *v12; // rax
  int32_t v13; // r14d
  const std::string *v14; // rax
  const std::string *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::pointer v19; // rax
  _QWORD *p_vptr_HttpClientMgrBase; // r14
  unsigned __int64 v21; // rax
  __int64 (__fastcall *v22)(_QWORD *, unsigned __int64, __int64, _QWORD, _QWORD, std::function<void(std::shared_ptr<jaegertracing::Span>&)> *); // r15
  __suseconds_t v23; // rdx
  unsigned __int64 v24; // rax
  unsigned int *v25; // rdx
  int32_t result; // eax
  google::protobuf::uint32 channel_id; // [rsp+34h] [rbp-3ECh]
  std::__shared_ptr_access<const proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+38h] [rbp-3E8h]
  std::function<void(std::shared_ptr<jaegertracing::Span>&)> p_fini_func; // [rsp+40h] [rbp-3E0h] BYREF
  AccountSdkMgr::asyncCheckSdkAccount::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> p___f; // [rsp+60h] [rbp-3C0h] BYREF
  char v33[784]; // [rsp+110h] [rbp-310h] BYREF

  v4 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(736LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "9 48 4 6 ret:44 64 4 15 account_type:71 80 16 10 req_ptr:68 112 16 8 timer:79 144 32 15 span_ctx"
                        "_str:53 208 32 14 account_uid:72 272 32 11 sdk_host:80 336 56 13 span_proxy:45 432 240 10 request:73";
  *(_QWORD *)(v4 + 16) = AccountSdkMgr::asyncCheckSdkAccount;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = 61956;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862725] = -219021312;
  v6[536862726] = 62194;
  v6[536862727] = -219021312;
  v6[536862728] = 62194;
  v6[536862729] = -219021312;
  v6[536862730] = 62194;
  v6[536862732] = -218959360;
  v6[536862733] = 62194;
  v6[536862741] = -202116109;
  v6[536862742] = -202116109;
  *(_DWORD *)(v4 + 48) = 0;
  std::function<void ()(std::shared_ptr<jaegertracing::Span> &)>::function<AccountSdkMgr::asyncCheckSdkAccount(std::shared_ptr<common::minet::Packet>,std::string const&,std::function<int ()(SdkRetcode,AccountSdkMgr::SdkRspParam const&)>)::{lambda(std::shared_ptr<jaegertracing::Span> &)#1},void,void>(
    &p_fini_func,
    (AccountSdkMgr::asyncCheckSdkAccount::<lambda(SpanPtr&)>)(v4 + 48));
  v7 = SpanContextGuardMgr::instance();
  v8 = SpanContextGuardMgr::front(v7);
  opentracing::v3::string_view::string_view((opentracing::v3::string_view *const)(v4 + 112), "asyncCheckSdkAccount");
  v9 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  SpanProxy::SpanProxy(
    (SpanProxy *const)(v4 + 336),
    v9,
    *(opentracing::v3::string_view *)(v4 + 112),
    v8,
    6u,
    &p_fini_func);
  std::function<void ()(std::shared_ptr<jaegertracing::Span> &)>::~function(&p_fini_func);
  std::string::basic_string(v4 + 144);
  v10 = std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::tracing_mgr_ptr);
  v11 = SpanContextGuardMgr::instance();
  v12 = SpanContextGuardMgr::back(v11);
  TracingMgr::inject(v10, v12, (std::string *)(v4 + 144));
  if ( !std::function<int ()(SdkRetcode,AccountSdkMgr::SdkRspParam const&)>::operator bool(p_cb) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&p_fini_func,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/account_sdk_mgr.cpp",
      "asyncCheckSdkAccount",
      58);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      (common::milog::MiLogStream *const)&p_fini_func,
      (const char (*)[26])"callback function is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_fini_func);
    *(_DWORD *)(v4 + 48) = -1;
    v13 = *(_DWORD *)(v4 + 48);
  }
  else if ( !std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::operator bool(&this->http_client_mgr_ptr_) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&p_fini_func,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/account_sdk_mgr.cpp",
      "asyncCheckSdkAccount",
      64);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      (common::milog::MiLogStream *const)&p_fini_func,
      (const char (*)[29])"http_client_mgr_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_fini_func);
    *(_DWORD *)(v4 + 48) = -1;
    v13 = *(_DWORD *)(v4 + 48);
  }
  else
  {
    std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    common::minet::Packet::getConstProto<proto::GetPlayerTokenReq>((common::minet::Packet *const)(v4 + 80));
    if ( std::operator==<proto::GetPlayerTokenReq const>(
           (const std::shared_ptr<const proto::GetPlayerTokenReq> *)(v4 + 80),
           0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&p_fini_func,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/account_sdk_mgr.cpp",
        "asyncCheckSdkAccount",
        68);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)&p_fini_func,
        "get GetPlayerTokenReq failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_fini_func);
      v13 = -1;
    }
    else
    {
      req = std::__shared_ptr_access<proto::GetPlayerTokenReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
      channel_id = proto::GetPlayerTokenReq::channel_id(req);
      *(_DWORD *)(v4 + 64) = proto::GetPlayerTokenReq::account_type(req);
      v14 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
      std::string::basic_string(v4 + 208, v14);
      common::minet::http_client::HttpRequest::HttpRequest((common::minet::http_client::HttpRequest *const)(v4 + 432));
      v15 = proto::GetPlayerTokenReq::account_token[abi:cxx11](req);
      if ( AccountSdkMgr::getHttpRequest(
             this,
             channel_id,
             (const std::string *)(v4 + 208),
             v15,
             client_ip,
             (common::minet::http_client::HttpRequest *)(v4 + 432)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&p_fini_func,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/service/account_sdk_mgr.cpp",
          "asyncCheckSdkAccount",
          76);
        v16 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                (common::milog::MiLogStream *const)&p_fini_func,
                (const char (*)[37])"getHttpRequest fails, account_type: ");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v4 + 64));
        v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])",");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, (const std::string *)(v4 + 208));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_fini_func);
        *(_DWORD *)(v4 + 48) = -1;
        v13 = *(_DWORD *)(v4 + 48);
      }
      else
      {
        common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v4 + 112));
        std::string::basic_string(v4 + 272, v4 + 432);
        v19 = std::unique_ptr<common::minet::http_client::HttpClientMgrBase>::operator->(&this->http_client_mgr_ptr_);
        p_vptr_HttpClientMgrBase = &v19->_vptr_HttpClientMgrBase;
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v19);
        v21 = *p_vptr_HttpClientMgrBase + 64LL;
        if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
          __asan_report_load8(*p_vptr_HttpClientMgrBase + 64LL);
        v22 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int64, __int64, _QWORD, _QWORD, std::function<void(std::shared_ptr<jaegertracing::Span>&)> *))v21;
        p___f.__this = this;
        std::shared_ptr<common::minet::Packet>::shared_ptr(&p___f.__packet_ptr, p_packet_ptr);
        std::function<int ()(SdkRetcode,AccountSdkMgr::SdkRspParam const&)>::function(&p___f.__cb, p_cb);
        v23 = *(_QWORD *)(v4 + 120);
        p___f.__timer.start_tv_.tv_sec = *(_QWORD *)(v4 + 112);
        p___f.__timer.start_tv_.tv_usec = v23;
        p___f.__account_type = *(_DWORD *)(v4 + 64);
        std::string::basic_string(&p___f.__account_uid, v4 + 208);
        std::string::basic_string(&p___f.__span_ctx_str, v4 + 144);
        std::string::basic_string(&p___f.__sdk_host, v4 + 272);
        std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::function<AccountSdkMgr::asyncCheckSdkAccount(std::shared_ptr<common::minet::Packet>,std::string const&,std::function<int ()(SdkRetcode,std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::SdkRspParam const&)>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse)#2},void,void>(
          (std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&p_fini_func,
          &p___f);
        v24 = ZTWN11ThreadLocal17work_thread_indexE();
        v25 = (unsigned int *)v24;
        if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) != 0 && (char)((v24 & 7) + 3) >= *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
          __asan_report_load4(v24);
        *(_DWORD *)(v4 + 48) = v22(p_vptr_HttpClientMgrBase, v4 + 432, 5LL, *v25, 0LL, &p_fini_func);
        v13 = *(_DWORD *)(v4 + 48);
        std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::~function((std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&p_fini_func);
        AccountSdkMgr::asyncCheckSdkAccount(std::shared_ptr<common::minet::Packet>,std::string const&,std::function<int ()(SdkRetcode,AccountSdkMgr::SdkRspParam const&)>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#2}::~HttpResponse(&p___f);
        std::string::~string((void *)(v4 + 272));
        common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v4 + 112));
      }
      common::minet::http_client::HttpRequest::~HttpRequest((common::minet::http_client::HttpRequest *const)(v4 + 432));
      std::string::~string((void *)(v4 + 208));
    }
    std::shared_ptr<proto::GetPlayerTokenReq const>::~shared_ptr((std::shared_ptr<const proto::GetPlayerTokenReq> *const)(v4 + 80));
  }
  std::string::~string((void *)(v4 + 144));
  SpanProxy::~SpanProxy((SpanProxy *const)(v4 + 336));
  result = v13;
  if ( v33 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8054) = 0LL;
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
    *(_DWORD *)((v4 >> 3) + 0x7FFF8058) = -168430091;
  }
  return result;
};

// Line 46: range 000000000C75D2EE-000000000C75D3EF
void __cdecl AccountSdkMgr::asyncCheckSdkAccount(std::shared_ptr<common::minet::Packet>,std::string const&,std::function<int ()(SdkRetcode,AccountSdkMgr::SdkRspParam const&)>)::{lambda(std::shared_ptr&<jaegertracing::Span>)#1}::operator()(
        const AccountSdkMgr::asyncCheckSdkAccount::<lambda(SpanPtr&)> *const __closure,
        SpanPtr *span_ptr)
{
  int32_t *ret; // rdx
  TracingMgr *v3; // rdi
  int *v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  ret = __closure->__ret;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__ret);
  }
  if ( *ret )
  {
    v3 = std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::tracing_mgr_ptr);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    {
      v3 = (TracingMgr *)__closure;
      __asan_report_load8(__closure);
    }
    v4 = __closure->__ret;
    if ( *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) != 0
      && (char)(((__int64)__closure->__ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) )
    {
      v3 = (TracingMgr *)__closure->__ret;
      __asan_report_load4(__closure->__ret);
    }
    TracingMgr::finishSpan(v3, span_ptr, *v4, 1);
  }
};

// Line 81: range 000000000C773A5C-000000000C773C23
void __cdecl AccountSdkMgr::asyncCheckSdkAccount(std::shared_ptr<common::minet::Packet>,std::string const&,std::function<int ()(SdkRetcode,AccountSdkMgr::SdkRspParam const&)>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#2}::HttpResponse(
        AccountSdkMgr::asyncCheckSdkAccount::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this,
        AccountSdkMgr::asyncCheckSdkAccount::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *a2)
{
  AccountSdkMgr *v2; // rdx
  __suseconds_t tv_usec; // rdx
  uint32_t account_type; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(a2);
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->__this = v2;
  std::shared_ptr<common::minet::Packet>::shared_ptr(&this->__packet_ptr, &a2->__packet_ptr);
  std::function<int ()(SdkRetcode,AccountSdkMgr::SdkRspParam const&)>::function(&this->__cb, &a2->__cb);
  if ( *(_WORD *)(((unsigned __int64)&this->__timer >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->__timer, &a2->__cb);
  if ( *(_WORD *)(((unsigned __int64)&a2->__timer >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->__timer);
  tv_usec = a2->__timer.start_tv_.tv_usec;
  this->__timer.start_tv_.tv_sec = a2->__timer.start_tv_.tv_sec;
  this->__timer.start_tv_.tv_usec = tv_usec;
  if ( *(_BYTE *)(((unsigned __int64)&a2->__account_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->__account_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->__account_type);
  }
  account_type = a2->__account_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->__account_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->__account_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->__account_type);
  }
  this->__account_type = account_type;
  std::string::basic_string(&this->__account_uid, &a2->__account_uid);
  std::string::basic_string(&this->__span_ctx_str, &a2->__span_ctx_str);
  std::string::basic_string(&this->__sdk_host, &a2->__sdk_host);
};

// Line 81: range 000000000C773CEE-000000000C773F2B
void __cdecl AccountSdkMgr::asyncCheckSdkAccount(std::shared_ptr<common::minet::Packet>,std::string const&,std::function<int ()(SdkRetcode,AccountSdkMgr::SdkRspParam const&)>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#2}::HttpResponse(
        AccountSdkMgr::asyncCheckSdkAccount::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this,
        const AccountSdkMgr::asyncCheckSdkAccount::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *a2)
{
  AccountSdkMgr *v2; // rdx
  __suseconds_t tv_usec; // rdx
  uint32_t account_type; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(a2);
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->__this = v2;
  std::shared_ptr<common::minet::Packet>::shared_ptr(&this->__packet_ptr, &a2->__packet_ptr);
  std::function<int ()(SdkRetcode,AccountSdkMgr::SdkRspParam const&)>::function(&this->__cb, &a2->__cb);
  if ( *(_WORD *)(((unsigned __int64)&this->__timer >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->__timer, &a2->__cb);
  if ( *(_WORD *)(((unsigned __int64)&a2->__timer >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->__timer);
  tv_usec = a2->__timer.start_tv_.tv_usec;
  this->__timer.start_tv_.tv_sec = a2->__timer.start_tv_.tv_sec;
  this->__timer.start_tv_.tv_usec = tv_usec;
  if ( *(_BYTE *)(((unsigned __int64)&a2->__account_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->__account_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->__account_type);
  }
  account_type = a2->__account_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->__account_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->__account_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->__account_type);
  }
  this->__account_type = account_type;
  std::string::basic_string(&this->__account_uid, &a2->__account_uid);
  std::string::basic_string(&this->__span_ctx_str, &a2->__span_ctx_str);
  std::string::basic_string(&this->__sdk_host, &a2->__sdk_host);
};

// Line 81: range 000000000C75D51C-000000000C75DFE5
void __cdecl AccountSdkMgr::asyncCheckSdkAccount(std::shared_ptr<common::minet::Packet>,std::string const&,std::function<int ()(SdkRetcode,AccountSdkMgr::SdkRspParam const&)>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#2}::operator()(
        const AccountSdkMgr::asyncCheckSdkAccount::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const __closure,
        common::minet::http_client::HttpRetcode retcode,
        common::minet::http_client::HttpRequest *req,
        common::minet::http_client::HttpResponse *rsp_0)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  TracingMgr *v7; // rax
  const jaegertracing::SpanContext *v8; // r14
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
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
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  SdkRetcode v25; // esi
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  SdkRetcode v40; // esi
  std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  std::allocator<char> __a; // [rsp+26h] [rbp-22Ah] BYREF
  bool is_skip_sdk_verify_when_http_failed; // [rsp+27h] [rbp-229h]
  int val; // [rsp+28h] [rbp-228h] BYREF
  SdkRetcode sdk_ret; // [rsp+2Ch] [rbp-224h]
  opentracing::v3::string_view operation_name; // [rsp+30h] [rbp-220h] BYREF
  std::function<void(std::shared_ptr<jaegertracing::Span>&)> p_fini_func; // [rsp+40h] [rbp-210h] BYREF
  char v64[496]; // [rsp+60h] [rbp-1F0h] BYREF

  v4 = (unsigned __int64)v64;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(448LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 1 12 is_valid:119 48 4 12 http_time:86 64 4 6 ret:88 80 8 18 parent_span_ctx:89 112 40 10 h"
                        "older:141 192 56 13 span_proxy:90 288 120 9 param:103";
  *(_QWORD *)(v4 + 16) = AccountSdkMgr::asyncCheckSdkAccount(std::shared_ptr<common::minet::Packet>,std::string const&,std::function<int ()(SdkRetcode,AccountSdkMgr::SdkRspParam const&)>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#2}::operator();
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556927;
  v6[536862722] = 61956;
  v6[536862722] = -234881024;
  v6[536862723] = 62194;
  v6[536862724] = -234881024;
  v6[536862725] = -218959118;
  v6[536862727] = -234881024;
  v6[536862728] = -218959118;
  v6[536862732] = -218103808;
  v6[536862733] = -202116109;
  *(_DWORD *)(v4 + 48) = common::tools::TimeUtils::Timer::time(&__closure->__timer);
  *(_DWORD *)(v4 + 64) = 0;
  v7 = std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::tracing_mgr_ptr);
  TracingMgr::extract(
    v4 + 80,
    v7,
    (std::__shared_ptr<opentracing::v3::Tracer,(__gnu_cxx::_Lock_policy)2>::element_type *)&__closure->__span_ctx_str);
  std::function<void ()(std::shared_ptr<jaegertracing::Span> &)>::function<AccountSdkMgr::asyncCheckSdkAccount(std::shared_ptr<common::minet::Packet>,std::string const&,std::function<int ()(SdkRetcode,AccountSdkMgr::SdkRspParam const&)>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#2}::operator() const(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse)::{lambda(std::shared_ptr<jaegertracing::Span> &)#1},void,void>(
    &p_fini_func,
    (AccountSdkMgr::asyncCheckSdkAccount::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)>::operator()::<lambda(SpanPtr&)>)(v4 + 64));
  v8 = std::unique_ptr<jaegertracing::SpanContext>::get((const std::unique_ptr<jaegertracing::SpanContext> *const)(v4 + 80));
  opentracing::v3::string_view::string_view(&operation_name, "asyncCheckSdkAccountCallback");
  v9 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  SpanProxy::SpanProxy((SpanProxy *const)(v4 + 192), v9, operation_name, v8, 0, &p_fini_func);
  std::function<void ()(std::shared_ptr<jaegertracing::Span> &)>::~function(&p_fini_func);
  AccountSdkMgr::SdkRspParam::SdkRspParam((AccountSdkMgr::SdkRspParam *const)(v4 + 288));
  *(_BYTE *)(v4 + 400) = 0;
  ServiceBox::findService<GateserverService>();
  GateserverService::getConfig((GateserverService *const)&operation_name);
  v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&operation_name);
  if ( *(_BYTE *)(((unsigned __int64)&v10->is_skip_sdk_verify_when_http_failed >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v10 - 68) & 7) >= *(_BYTE *)(((unsigned __int64)&v10->is_skip_sdk_verify_when_http_failed >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load1(&v10->is_skip_sdk_verify_when_http_failed);
  }
  is_skip_sdk_verify_when_http_failed = v10->is_skip_sdk_verify_when_http_failed;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&operation_name);
  if ( retcode )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&p_fini_func,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/account_sdk_mgr.cpp",
      "operator()",
      108);
    v11 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
            (common::milog::MiLogStream *const)&p_fini_func,
            (const char (*)[52])"[SDK][NETWORK] retcode != http_client::HTTP_SUCCESS");
    v12 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            v11,
            (const char (*)[24])", http req/rsp retcode:");
    val = retcode;
    v13 = common::milog::MiLogStream::operator<<<int,(int *)0>(v12, &val);
    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v13, (const char (*)[16])", account_type:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &__closure->__account_type);
    v16 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v15, (const char (*)[15])", account_uid:");
    v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, &__closure->__account_uid);
    v18 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v17, (const char (*)[12])", req.host:");
    v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, &req->host);
    v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v19, (const char (*)[11])", req.uri:");
    v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, &req->uri);
    v22 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v21, (const char (*)[13])", http_time:");
    v23 = common::milog::MiLogStream::operator<<<int,(int *)0>(v22, (const int *)(v4 + 48));
    v24 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v23, (const char (*)[15])", rsp.status: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &rsp_0->status);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_fini_func);
    if ( is_skip_sdk_verify_when_http_failed )
      v25 = ERROR;
    else
      v25 = FAIL;
    *(_DWORD *)(v4 + 64) = std::function<int ()(SdkRetcode,AccountSdkMgr::SdkRspParam const&)>::operator()(
                             &__closure->__cb,
                             v25,
                             (const AccountSdkMgr::SdkRspParam *)(v4 + 288));
  }
  else
  {
    *(_BYTE *)(v4 + 32) = 0;
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    if ( AccountSdkMgr::parseHttpResponse(
           __closure->__this,
           rsp_0,
           (bool *)(v4 + 32),
           (AccountSdkMgr::SdkRspParam *)(v4 + 288)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&p_fini_func,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/account_sdk_mgr.cpp",
        "operator()",
        122);
      v26 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              (common::milog::MiLogStream *const)&p_fini_func,
              (const char (*)[30])"[SDK] parseHttpResponse fails");
      v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v26, (const char (*)[16])", account_type:");
      v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &__closure->__account_type);
      v29 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v28, (const char (*)[15])", account_uid:");
      v30 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v29, &__closure->__account_uid);
      v31 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v30, (const char (*)[12])", req.host:");
      v32 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v31, &req->host);
      v33 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v32, (const char (*)[11])", req.uri:");
      v34 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v33, &req->uri);
      v35 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v34, (const char (*)[13])", http_time:");
      v36 = common::milog::MiLogStream::operator<<<int,(int *)0>(v35, (const int *)(v4 + 48));
      v37 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v36, (const char (*)[15])", rsp.status: ");
      v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &rsp_0->status);
      v39 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v38, (const char (*)[13])", rsp.body: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v39, &rsp_0->body);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_fini_func);
      if ( is_skip_sdk_verify_when_http_failed )
        v40 = ERROR;
      else
        v40 = FAIL;
      *(_DWORD *)(v4 + 64) = std::function<int ()(SdkRetcode,AccountSdkMgr::SdkRspParam const&)>::operator()(
                               &__closure->__cb,
                               v40,
                               (const AccountSdkMgr::SdkRspParam *)(v4 + 288));
    }
    else
    {
      *(_BYTE *)(v4 + 400) = 1;
      sdk_ret = *(_BYTE *)(v4 + 32) == 0;
      *(_DWORD *)(v4 + 64) = std::function<int ()(SdkRetcode,AccountSdkMgr::SdkRspParam const&)>::operator()(
                               &__closure->__cb,
                               sdk_ret,
                               (const AccountSdkMgr::SdkRspParam *)(v4 + 288));
      if ( *(_BYTE *)(((unsigned __int64)rsp_0 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)rsp_0 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(rsp_0);
      }
      if ( rsp_0->status == 200 )
      {
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&p_fini_func, "sdk_host", &__a);
        MonitorReportUtils::ContextHolder::ContextHolder(
          (MonitorReportUtils::ContextHolder *const)(v4 + 112),
          (const std::string *)&p_fini_func,
          &req->host);
        std::string::~string(&p_fini_func);
        std::allocator<char>::~allocator(&__a);
        v41 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
        MonitorReport::addValue(v41, MONITOR_SDK_HTTP_COST, *(_DWORD *)(v4 + 48));
        MonitorReportUtils::ContextHolder::~ContextHolder((MonitorReportUtils::ContextHolder *const)(v4 + 112));
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&p_fini_func,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/service/account_sdk_mgr.cpp",
          "operator()",
          146);
        v42 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                (common::milog::MiLogStream *const)&p_fini_func,
                (const char (*)[34])"[SDK][NETWORK] http status != 200");
        v43 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v42,
                (const char (*)[17])", account_type: ");
        v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &__closure->__account_type);
        v45 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v44, (const char (*)[15])", account_uid:");
        v46 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v45, &__closure->__account_uid);
        v47 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v46, (const char (*)[12])", req.host:");
        v48 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v47, &req->host);
        v49 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v48, (const char (*)[11])", req.uri:");
        v50 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v49, &req->uri);
        v51 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v50, (const char (*)[13])", http_time:");
        v52 = common::milog::MiLogStream::operator<<<int,(int *)0>(v51, (const int *)(v4 + 48));
        v53 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v52, (const char (*)[15])", rsp.status: ");
        v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, &rsp_0->status);
        v55 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v54, (const char (*)[13])", rsp.body: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v55, &rsp_0->body);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_fini_func);
      }
    }
  }
  AccountSdkMgr::SdkRspParam::~SdkRspParam((AccountSdkMgr::SdkRspParam *const)(v4 + 288));
  SpanProxy::~SpanProxy((SpanProxy *const)(v4 + 192));
  std::unique_ptr<jaegertracing::SpanContext>::~unique_ptr((std::unique_ptr<jaegertracing::SpanContext> *const)(v4 + 80));
  if ( v64 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
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
  }
};

// Line 81: range 000000000C75DFE6-000000000C75E056
void __cdecl AccountSdkMgr::asyncCheckSdkAccount(std::shared_ptr<common::minet::Packet>,std::string const&,std::function<int ()(SdkRetcode,AccountSdkMgr::SdkRspParam const&)>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#2}::~HttpResponse(
        AccountSdkMgr::asyncCheckSdkAccount::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const this)
{
  std::string::~string(&this->__sdk_host);
  std::string::~string(&this->__span_ctx_str);
  std::string::~string(&this->__account_uid);
  common::tools::TimeUtils::Timer::~Timer(&this->__timer);
  std::function<int ()(SdkRetcode,AccountSdkMgr::SdkRspParam const&)>::~function(&this->__cb);
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&this->__packet_ptr);
};

// Line 91: range 000000000C75D3F0-000000000C75D51B
void __cdecl AccountSdkMgr::asyncCheckSdkAccount(std::shared_ptr<common::minet::Packet>,std::string const&,std::function<int ()(SdkRetcode,AccountSdkMgr::SdkRspParam const&)>)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#2}::operator() const(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse)::{lambda(std::shared_ptr&<jaegertracing::Span>)#1}::operator()(
        const AccountSdkMgr::asyncCheckSdkAccount::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)>::operator()::<lambda(SpanPtr&)> *const __closure,
        SpanPtr *span_ptr)
{
  int *ret; // rdx
  TracingMgr *v3; // rdi
  int *v4; // rdx
  TracingMgr *v5; // rdi

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  ret = __closure->__ret;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__ret);
  }
  if ( *ret )
  {
    v3 = std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::tracing_mgr_ptr);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    {
      v3 = (TracingMgr *)__closure;
      __asan_report_load8(__closure);
    }
    v4 = __closure->__ret;
    if ( *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) != 0
      && (char)(((__int64)__closure->__ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) )
    {
      v3 = (TracingMgr *)__closure->__ret;
      __asan_report_load4(__closure->__ret);
    }
    TracingMgr::finishSpanToRoot(v3, span_ptr, *v4, 1);
  }
  else
  {
    v5 = std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::tracing_mgr_ptr);
    TracingMgr::finishSpanToParent(v5, span_ptr, 0, 0);
  }
};

// Line 159: range 000000000C75EA2C-000000000C75F197
int32_t __cdecl AccountSdkMgr::getHttpRequest(
        AccountSdkMgr *const this,
        uint32_t channel_id,
        const std::string *account_uid,
        const std::string *account_token,
        const std::string *client_ip,
        common::minet::http_client::HttpRequest *request)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  Config *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  bool is_ssl; // cl
  std::map<std::string,std::string>::mapped_type *v13; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  uint32_t *p_app_id; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  SdkInfo *p_sdk_info; // rcx
  int32_t v19; // r14d
  common::milog::MiLogStream *v20; // rax
  std::remove_reference<std::string&>::type *v21; // rax
  int32_t result; // eax
  common::minet::http_client::HttpRequest *requestb; // [rsp+0h] [rbp-1D0h]
  int v28; // [rsp+20h] [rbp-1B0h]
  std::allocator<char> __a; // [rsp+3Fh] [rbp-191h] BYREF
  std::string __k; // [rsp+40h] [rbp-190h] BYREF
  char v31[368]; // [rsp+60h] [rbp-170h] BYREF

  v6 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_3(320LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "5 32 4 11 options:186 48 16 14 config_ptr:160 80 32 15 json_string:189 144 40 14 status_ret:190 "
                        "224 64 14 req_config:174";
  *(_QWORD *)(v6 + 16) = AccountSdkMgr::getHttpRequest;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = 61956;
  v8[536862722] = 62194;
  v8[536862723] = -219021312;
  v8[536862724] = 62194;
  v8[536862725] = -234881024;
  v8[536862726] = -218959118;
  v8[536862729] = -202116109;
  ServiceBox::findService<GateserverService>();
  GateserverService::getConfig((GateserverService *const)(v6 + 48));
  v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 48));
  Config::getSDKVerifyHostWithDarkRelease[abi:cxx11](&__k, v9);
  std::string::operator=(request, &__k);
  std::string::~string(&__k);
  v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 48));
  std::string::operator=(&request->port, &v10->sdk_info.port);
  v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 48));
  if ( *(char *)(((unsigned __int64)&v11->sdk_info.is_ssl >> 3) + 0x7FFF8000) < 0 )
    v11 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v11->sdk_info.is_ssl);
  is_ssl = v11->sdk_info.is_ssl;
  if ( *(char *)(((unsigned __int64)&request->is_ssl >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&request->is_ssl);
  request->is_ssl = is_ssl;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__k, "Mi-Forwarded-For", &__a);
  v13 = std::map<std::string,std::string>::operator[](&request->head_map, &__k);
  std::string::operator=(v13, client_ip);
  std::string::~string(&__k);
  std::allocator<char>::~allocator(&__a);
  if ( *(_BYTE *)(((unsigned __int64)&request->method >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&request->method >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&request->method);
  }
  request->method = HTTP_POST;
  v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 48));
  std::string::operator=(&request->uri, &v14->sdk_info.uri);
  proto::SdkAccountReqConfig::SdkAccountReqConfig((proto::SdkAccountReqConfig *const)(v6 + 224));
  v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 48));
  p_app_id = &v15->sdk_info.app_id;
  if ( *(_BYTE *)(((unsigned __int64)p_app_id >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_app_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_app_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_app_id);
  }
  proto::SdkAccountReqConfig::set_app_id((proto::SdkAccountReqConfig *const)(v6 + 224), v15->sdk_info.app_id);
  proto::SdkAccountReqConfig::set_channel_id((proto::SdkAccountReqConfig *const)(v6 + 224), channel_id);
  proto::SdkAccountReqConfig::set_open_id((proto::SdkAccountReqConfig *const)(v6 + 224), account_uid);
  proto::SdkAccountReqConfig::set_combo_token((proto::SdkAccountReqConfig *const)(v6 + 224), account_token);
  v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 48));
  proto::SdkAccountReqConfig::set_region((proto::SdkAccountReqConfig *const)(v6 + 224), &v17->region_name);
  p_sdk_info = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 48))->sdk_info;
  if ( AccountSdkMgr::generateSign(this, p_sdk_info, (proto::SdkAccountReqConfig *)(v6 + 224)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&__k,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/account_sdk_mgr.cpp",
      "getHttpRequest",
      182);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
      (common::milog::MiLogStream *const)&__k,
      (const char (*)[19])"generateSign fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__k);
    v19 = -1;
  }
  else
  {
    google::protobuf::util::JsonPrintOptions::JsonPrintOptions((google::protobuf::util::JsonPrintOptions *const)(v6 + 32));
    *(_BYTE *)(v6 + 33) = 1;
    *(_BYTE *)(v6 + 35) = 1;
    std::string::basic_string(v6 + 80);
    google::protobuf::util::MessageToJsonString(
      (google::protobuf::util::Status *)(v6 + 144),
      (google::protobuf::Message *)(v6 + 224),
      (int)request,
      (void *)client_ip,
      (int)account_token,
      (char)account_uid,
      v28,
      this);
    if ( !google::protobuf::util::Status::ok((const google::protobuf::util::Status *const)(v6 + 144)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__k,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/service/account_sdk_mgr.cpp",
        "getHttpRequest",
        193);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        (common::milog::MiLogStream *const)&__k,
        (const char (*)[26])"MessageToJsonString fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__k);
      v19 = -1;
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__k,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/service/account_sdk_mgr.cpp",
        "getHttpRequest",
        198);
      v20 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
              (common::milog::MiLogStream *const)&__k,
              (const char (*)[15])"request json: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, (const std::string *)(v6 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__k);
      v21 = std::move<std::string &>((std::string *)(v6 + 80));
      std::string::operator=(&requestb->body, v21);
      v19 = 0;
    }
    google::protobuf::util::Status::~Status((google::protobuf::util::Status *const)(v6 + 144));
    std::string::~string((void *)(v6 + 80));
  }
  proto::SdkAccountReqConfig::~SdkAccountReqConfig((proto::SdkAccountReqConfig *const)(v6 + 224));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v6 + 48));
  result = v19;
  if ( v31 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 205: range 000000000C75F198-000000000C75F57A
int32_t __cdecl AccountSdkMgr::generateSign(
        AccountSdkMgr *const this,
        const SdkInfo *sdk_info,
        proto::SdkAccountReqConfig *req_config)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // r14
  unsigned int v7; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // r14
  unsigned int v9; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // r14
  const std::string *v11; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v12; // r14
  const std::string *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  int32_t v19; // r14d
  std::string *v20; // rdx
  int32_t result; // eax
  common::milog::MiLogStream v23; // [rsp+20h] [rbp-130h] BYREF
  char v24[272]; // [rsp+40h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 7 ret:215 64 16 7 oss:207 96 32 7 msg:212 160 32 8 sign:214";
  *(_QWORD *)(v3 + 16) = AccountSdkMgr::generateSign;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 64));
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 64),
         "app_id=");
  v7 = proto::SdkAccountReqConfig::app_id(req_config);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, v7);
  v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 64),
         "&channel_id=");
  v9 = proto::SdkAccountReqConfig::channel_id(req_config);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, v9);
  v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
          (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 64),
          "&combo_token=");
  v11 = proto::SdkAccountReqConfig::combo_token[abi:cxx11](req_config);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, v11);
  v12 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
          (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 64),
          "&open_id=");
  v13 = proto::SdkAccountReqConfig::open_id[abi:cxx11](req_config);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v12, v13);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    (std::string *)(v3 + 96),
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 64));
  std::string::basic_string(v3 + 160);
  *(_DWORD *)(v3 + 48) = common::tools::Sha256SignUtils::genSha256Sign(
                           &sdk_info->key,
                           (const std::string *)(v3 + 96),
                           (std::string *)(v3 + 160));
  if ( *(_DWORD *)(v3 + 48) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/account_sdk_mgr.cpp",
      "generateSign",
      218);
    v14 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            &v23,
            (const char (*)[27])"gen sha256 sign fail, ret:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
    v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" key:");
    v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, &sdk_info->key);
    v18 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v17, (const char (*)[6])" msg:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, (const std::string *)(v3 + 96));
    common::milog::MiLogStream::~MiLogStream(&v23);
    v19 = *(_DWORD *)(v3 + 48);
  }
  else
  {
    v20 = std::move<std::string &>((std::string *)(v3 + 160));
    proto::SdkAccountReqConfig::set_sign(req_config, v20);
    v19 = 0;
  }
  std::string::~string((void *)(v3 + 160));
  std::string::~string((void *)(v3 + 96));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 64));
  result = v19;
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 229: range 000000000C75F57C-000000000C760155
int32_t __cdecl AccountSdkMgr::parseHttpResponse(
        AccountSdkMgr *const this,
        const common::minet::http_client::HttpResponse *response,
        bool *is_valid,
        AccountSdkMgr::SdkRspParam *param)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  const char *v8; // rax
  uint32_t status; // r14d
  const char *v10; // rax
  int v11; // r15d
  uint32_t v12; // r14d
  const char *v13; // rax
  Json::Value_0 *v14; // rax
  bool v15; // cl
  Json::Value_0 *v16; // rax
  Json::Value_0 *v17; // rax
  Json::Value *v18; // rax
  char v19; // dl
  Json::Value_0 *v20; // rax
  Json::Value *v21; // rax
  uint32_t v22; // ecx
  Json::Value_0 *v23; // rax
  Json::Value_0 *v24; // rax
  common::milog::MiLogStream *v25; // rax
  int32_t result; // eax
  std::string *json_str; // [rsp+40h] [rbp-2D0h]
  Json::Value_0 *data; // [rsp+48h] [rbp-2C8h]
  Json::Value_0 *ip_info; // [rsp+50h] [rbp-2C0h]
  Json::String v32; // [rsp+60h] [rbp-2B0h] BYREF
  common::milog::MiLogStream v33; // [rsp+80h] [rbp-290h] BYREF
  char v34[624]; // [rsp+A0h] [rbp-270h] BYREF

  v5 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(576LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 32 32 11 retcode:250 96 32 16 birthday_str:288 160 40 14 root_value:237 240 272 10 reader:236";
  *(_QWORD *)(v5 + 16) = AccountSdkMgr::parseHttpResponse;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862722] = -218959118;
  v7[536862724] = -218959118;
  v7[536862726] = -218959360;
  v7[536862727] = 62194;
  v7[536862736] = -202116109;
  v7[536862737] = -202116109;
  json_str = &response->body;
  common::milog::MiLogStream::create(
    &v33,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/service/account_sdk_mgr.cpp",
    "parseHttpResponse",
    231);
  v8 = (const char *)std::string::c_str(&response->body);
  common::milog::MiLogStream::operator()(&v33, "json_str=%s", v8);
  common::milog::MiLogStream::~MiLogStream(&v33);
  Json::Reader::Reader((Json::Reader *)(v5 + 240));
  Json::Value::Value(v5 + 160, 0LL);
  if ( !Json::Reader::parse((Json::Reader *const)(v5 + 240), &response->body, (Json::Value *)(v5 + 160), 1) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/account_sdk_mgr.cpp",
      "parseHttpResponse",
      240);
    if ( *(_BYTE *)(((unsigned __int64)response >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)response >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(response);
    }
    status = response->status;
    v10 = (const char *)std::string::c_str(json_str);
    common::milog::MiLogStream::operator()(&v33, "parse json failed: %s, status: %u", v10, status);
    common::milog::MiLogStream::~MiLogStream(&v33);
    v4 = -1;
    v11 = 0;
  }
  else if ( !Json::Value::isObject((const Json::Value_0 *const)(v5 + 160)) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/account_sdk_mgr.cpp",
      "parseHttpResponse",
      245);
    if ( *(_BYTE *)(((unsigned __int64)response >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)response >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(response);
    }
    v12 = response->status;
    v13 = (const char *)std::string::c_str(json_str);
    common::milog::MiLogStream::operator()(&v33, "root is not object: %s, status: %u", v13, v12);
    common::milog::MiLogStream::~MiLogStream(&v33);
    v4 = -1;
    v11 = 0;
  }
  else
  {
    v14 = Json::Value::operator[]((Json::Value_0 *const)(v5 + 160), "retcode");
    Json::Value::asString[abi:cxx11]((Json::String *)(v5 + 32), v14);
    v15 = std::operator==<char>("0", (const std::string *)(v5 + 32));
    if ( *(_BYTE *)(((unsigned __int64)is_valid >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)is_valid & 7) >= *(_BYTE *)(((unsigned __int64)is_valid >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(is_valid);
    }
    *is_valid = v15;
    if ( common::tools::StringUtils::strToNum<int>((const std::string *)(v5 + 32), &param->retcode, 1) )
    {
      if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(param);
      }
      param->retcode = -1;
    }
    v16 = Json::Value::operator[]((Json::Value_0 *const)(v5 + 160), "message");
    Json::Value::asString[abi:cxx11](&v32, v16);
    std::string::operator=(&param->msg, &v32);
    std::string::~string(&v32);
    if ( Json::Value::isMember((const Json::Value_0 *const)(v5 + 160), "data") )
    {
      v17 = Json::Value::operator[]((Json::Value_0 *const)(v5 + 160), "data");
      v18 = (Json::Value *)Json::Value::operator[](v17, "guest");
      v19 = Json::Value::asBool(v18);
      if ( *(char *)(((unsigned __int64)&param->is_guest >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&param->is_guest);
      param->is_guest = v19;
      v20 = Json::Value::operator[]((Json::Value_0 *const)(v5 + 160), "data");
      v21 = (Json::Value *)Json::Value::operator[](v20, "account_type");
      v22 = Json::Value::asUInt(v21);
      if ( *(_BYTE *)(((unsigned __int64)&param->account_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)param + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->account_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&param->account_type);
      }
      param->account_type = v22;
      data = Json::Value::operator[]((Json::Value_0 *const)(v5 + 160), "data");
      if ( Json::Value::isMember(data, "ip_info") )
      {
        ip_info = Json::Value::operator[](data, "ip_info");
        if ( Json::Value::isMember(ip_info, "country_code") )
        {
          v23 = Json::Value::operator[](ip_info, "country_code");
          Json::Value::asString[abi:cxx11]((Json::String *)(v5 + 96), v23);
          std::string::operator=(&param->country_code, v5 + 96);
          std::string::~string((void *)(v5 + 96));
        }
        else
        {
          std::string::operator=(&param->country_code, "ZZ");
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/service/account_sdk_mgr.cpp",
            "parseHttpResponse",
            277);
          common::milog::MiLogStream::operator()(&v33, "missing field <country_code>. default to ZZ");
          common::milog::MiLogStream::~MiLogStream(&v33);
        }
      }
      else
      {
        std::string::operator=(&param->country_code, "ZZ");
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/service/account_sdk_mgr.cpp",
          "parseHttpResponse",
          283);
        common::milog::MiLogStream::operator()(&v33, "missing field <ip_info>. default to ZZ");
        common::milog::MiLogStream::~MiLogStream(&v33);
      }
      if ( Json::Value::isMember(data, "birthday") )
      {
        v24 = Json::Value::operator[](data, "birthday");
        Json::Value::asString[abi:cxx11]((Json::String *)(v5 + 96), v24);
        if ( common::tools::TimeUtils::isDayStrValid((const std::string *)(v5 + 96)) )
        {
          std::string::operator=(&param->birthday, v5 + 96);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/service/account_sdk_mgr.cpp",
            "parseHttpResponse",
            295);
          v25 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  &v33,
                  (const char (*)[20])" invalid birthday: ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, (const std::string *)(v5 + 96));
          common::milog::MiLogStream::~MiLogStream(&v33);
        }
        std::string::~string((void *)(v5 + 96));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/service/account_sdk_mgr.cpp",
          "parseHttpResponse",
          300);
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v33, (const char (*)[20])" birthday not exist");
        common::milog::MiLogStream::~MiLogStream(&v33);
      }
    }
    std::string::~string((void *)(v5 + 32));
    v11 = 1;
  }
  Json::Value::~Value((Json::Value_0 *const)(v5 + 160));
  Json::Reader::~Reader((Json::Reader *const)(v5 + 240));
  if ( v11 == 1 )
    v4 = 0;
  result = v4;
  if ( v34 == (char *)v5 )
  {
    *(_DWORD *)((v5 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8040) = 0LL;
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
  }
  return result;
};
