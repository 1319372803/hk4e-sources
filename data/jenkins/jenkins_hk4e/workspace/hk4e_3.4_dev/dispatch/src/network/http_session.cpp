// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/dispatch/src/network/http_session.cpp

// Line 27: range 000000000C612ABA-000000000C612B7E
void __cdecl HttpSession::HttpSession(HttpSession *const this, boost::asio::io_context *ioc)
{
  int (**v2)(...); // rdx

  common::minet::AServerSession::AServerSession(this, ioc);
  v2 = (int (**)(...))(&`vtable for'HttpSession + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, ioc);
  this->_vptr_AServerSession = v2;
  common::minet::HttpRequest::HttpRequest(&this->request_, method, uri);
  common::minet::HttpResponse::HttpResponse(&this->response_);
};

// Line 31: range 000000000C612B80-000000000C612BF1
void __cdecl HttpSession::~HttpSession(HttpSession *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HttpSession + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AServerSession = v2;
  common::minet::HttpResponse::~HttpResponse(&this->response_);
  common::minet::HttpRequest::~HttpRequest(&this->request_);
  common::minet::AServerSession::~AServerSession(this);
};

// Line 31: range 000000000C612BF2-000000000C612C1C
void __cdecl HttpSession::~HttpSession(HttpSession *const this)
{
  HttpSession::~HttpSession(this);
  operator delete(this, 0x3B8uLL);
};

// Line 38: range 000000000C612C1E-000000000C6132C7
int32_t __cdecl HttpSession::onRecv(HttpSession *const this, char *data, uint32_t len, boost::asio::yield_context *p_)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  const char *ClientIp; // rax
  const char *v8; // rax
  const std::string *v9; // rax
  common::milog::MiLogStream *v11; // rax
  uint32_t v12; // r15d
  const char *v13; // rax
  __int64 v14; // r14
  const char *v15; // r15
  const char *v16; // rax
  int32_t result; // eax
  const char *v18; // [rsp+8h] [rbp-1A8h]
  std::allocator<char> __a; // [rsp+3Bh] [rbp-175h] BYREF
  int retcode; // [rsp+3Ch] [rbp-174h]
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-170h] BYREF
  std::string v23; // [rsp+60h] [rbp-150h] BYREF
  std::string key; // [rsp+80h] [rbp-130h] BYREF
  common::milog::MiLogStream v25; // [rsp+A0h] [rbp-110h] BYREF
  char v26[240]; // [rsp+C0h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 16 8 timer:39 64 32 11 base_uri:51 128 32 15 response_str:77";
  *(_QWORD *)(v4 + 16) = HttpSession::onRecv;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862723] = -218959118;
  v6[536862725] = -202116109;
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v4 + 32));
  ClientIp = common::minet::AServerSession::getClientIp(this);
  if ( common::minet::HttpRequest::parseFromStr(&this->request_, data, len, ClientIp) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/http_session.cpp",
      "onRecv",
      44);
    v8 = common::minet::AServerSession::getClientIp(this);
    common::milog::MiLogStream::operator()(&v25, "recv error http request from %s", v8);
    common::milog::MiLogStream::~MiLogStream(&v25);
    HttpSession::sendHttp(this, 0x1F4u, "Error Request.");
  }
  else
  {
    retcode = 0;
    v9 = common::minet::HttpRequest::getBaseUri[abi:cxx11](&this->request_);
    std::string::basic_string(v4 + 64, v9);
    if ( !(unsigned int)std::string::compare(v4 + 64, "/query_region_list") )
    {
      retcode = HttpSession::queryRegionList(this);
    }
    else if ( !(unsigned int)std::string::compare(v4 + 64, "/query_cur_region")
           || !(unsigned int)std::string::compare(v4 + 64, "/query_gateserver") )
    {
      retcode = HttpSession::queryCurrRegion(this);
    }
    else if ( !(unsigned int)std::string::compare(v4 + 64, "/query_security_file") )
    {
      retcode = HttpSession::querySecurityFile(this);
    }
    else if ( !(unsigned int)std::string::compare(v4 + 64, "/alive") )
    {
      common::minet::HttpResponse::init(&this->response_, 0xC8u, "{\"retcode\":\"0\", \"msg\":\"alive ok\"}");
    }
    else
    {
      retcode = -1;
      common::minet::HttpResponse::init(&this->response_, 0xC8u, "{\"retcode\":\"-1\", \"msg\":\"system error\"}");
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/network/http_session.cpp",
        "onRecv",
        73);
      v11 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
              &v25,
              (const char (*)[17])"Not support uri:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, (const std::string *)(v4 + 64));
      common::milog::MiLogStream::~MiLogStream(&v25);
    }
    common::minet::HttpResponse::parseToStr[abi:cxx11]((std::string *)(v4 + 128), &this->response_);
    v12 = std::string::length(v4 + 128);
    v13 = (const char *)std::string::c_str(v4 + 128);
    common::minet::AServerSession::send(this, v13, v12);
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/http_session.cpp",
      "onRecv",
      80);
    v14 = (unsigned int)common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v4 + 32));
    v18 = (const char *)std::string::c_str(v4 + 64);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&key, off_19DE5CE0, &__a);
    common::minet::HttpRequest::getPara((std::string *)&v25, &this->request_, &key);
    v15 = (const char *)std::string::c_str(&v25);
    common::minet::HttpRequest::getIp[abi:cxx11](&v23, &this->request_);
    v16 = (const char *)std::string::c_str(&v23);
    common::milog::MiLogStream::operator()(
      &v22,
      "client_ip=%s, uid=%s, uri=%s, retcode=%d, timecost=%dus",
      v16,
      v15,
      v18,
      (unsigned int)retcode,
      v14);
    std::string::~string(&v23);
    std::string::~string(&v25);
    std::string::~string(&key);
    std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::~MiLogStream(&v22);
    std::string::~string((void *)(v4 + 128));
    std::string::~string((void *)(v4 + 64));
  }
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v4 + 32));
  result = 1;
  if ( v26 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
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

// Line 87: range 000000000C6132C8-000000000C6132DA
int32_t __cdecl HttpSession::onConnect(HttpSession *const this, boost::asio::yield_context *p_)
{
  return 0;
};

// Line 93: range 000000000C6132DC-000000000C6132EE
int32_t __cdecl HttpSession::onDisconnect(HttpSession *const this, boost::asio::yield_context *p_)
{
  return 0;
};

// Line 99: range 000000000C6132F0-000000000C613489
int32_t __cdecl HttpSession::sendHttp(HttpSession *const this, uint16_t status, const char *body)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  uint32_t v6; // r15d
  const char *v7; // rax
  int32_t result; // eax
  char v10[144]; // [rsp+20h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 32 16 response_str:101";
  *(_QWORD *)(v3 + 16) = HttpSession::sendHttp;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450888) = -202116109;
  common::minet::HttpResponse::init(&this->response_, status, body);
  common::minet::HttpResponse::parseToStr[abi:cxx11]((std::string *)(v3 + 32), &this->response_);
  v6 = std::string::length(v3 + 32);
  v7 = (const char *)std::string::c_str(v3 + 32);
  common::minet::AServerSession::send(this, v7, v6);
  std::string::~string((void *)(v3 + 32));
  result = 0;
  if ( v10 == (char *)v3 )
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

// Line 110: range 000000000C61348A-000000000C6142D9
int32_t __cdecl HttpSession::queryRegionList(HttpSession *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rdx
  char v5; // cl
  common::minet::HttpRequest *p_request; // rsi
  __int64 v7; // rcx
  common::milog::MiLogStream *v8; // rax
  const data::DbRegionConfig **v9; // rax
  const data::DbRegionConfig **v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  bool v18; // al
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  const char *v35; // rax
  int32_t v36; // r14d
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-2F1h] BYREF
  std::vector<const data::DbRegionConfig*>::iterator __for_begin; // [rsp+20h] [rbp-2F0h] BYREF
  std::vector<const data::DbRegionConfig*>::iterator __for_end; // [rsp+28h] [rbp-2E8h] BYREF
  const DbDeployConfigMgr *db_deploy_config_mgr; // [rsp+30h] [rbp-2E0h]
  const data::DbClientConfig *client_config_ptr; // [rsp+38h] [rbp-2D8h]
  std::vector<const data::DbRegionConfig*> *__for_range; // [rsp+40h] [rbp-2D0h]
  std::vector<const data::DbRegionConfig*> *__for_range_0; // [rsp+48h] [rbp-2C8h]
  const data::DbRegionConfig *region_config_ptr_0; // [rsp+50h] [rbp-2C0h]
  const data::DbRegionConfig *region_config_ptr; // [rsp+58h] [rbp-2B8h]
  std::string key; // [rsp+60h] [rbp-2B0h] BYREF
  char v48[656]; // [rsp+80h] [rbp-290h] BYREF

  v1 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(608LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "9 48 4 14 channel_id:117 64 16 14 config_ptr:112 96 24 21 region_config_vec:140 160 32 11 versio"
                        "n:116 224 32 8 body:200 288 32 13 proto_str:216 352 32 14 psn_region:137 416 40 10 status:204 49"
                        "6 72 19 region_list_rsp:114";
  *(_QWORD *)(v1 + 16) = HttpSession::queryRegionList;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -234881024;
  v3[536862724] = -218959118;
  v3[536862726] = -218959118;
  v3[536862728] = -218959118;
  v3[536862730] = -218959118;
  v3[536862732] = -218959118;
  v3[536862734] = -218959360;
  v3[536862735] = 62194;
  v3[536862737] = -218103808;
  v3[536862738] = -202116109;
  ServiceBox::findService<DispatchService>();
  DispatchService::getConfig((DispatchService *const)(v1 + 64));
  db_deploy_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64))->db_deploy_config_mgr;
  proto::QueryRegionListHttpRsp::QueryRegionListHttpRsp((proto::QueryRegionListHttpRsp *const)(v1 + 496));
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&key, "version", &__a);
  p_request = &this->request_;
  common::minet::HttpRequest::getPara((std::string *)(v1 + 160), &this->request_, &key);
  std::string::~string(&key);
  std::allocator<char>::~allocator(&__a);
  *(_DWORD *)(v1 + 48) = HttpSession::getChannelId(this);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  v5 = *(_BYTE *)(((unsigned __int64)&v4->is_forbid_first_dispatch >> 3) + 0x7FFF8000);
  LOBYTE(p_request) = v5 != 0;
  v7 = (v5 != 0) & (unsigned __int8)((((unsigned __int8)v4 + 124) & 7) >= v5);
  if ( (_BYTE)v7 )
    __asan_report_load1(&v4->is_forbid_first_dispatch, p_request, v4, v7);
  if ( v4->is_forbid_first_dispatch )
  {
    proto::QueryRegionListHttpRsp::set_retcode((proto::QueryRegionListHttpRsp *const)(v1 + 496), 8);
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&key,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/http_session.cpp",
      "queryRegionList",
      124);
    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
      (common::milog::MiLogStream *const)&key,
      (const char (*)[48])"query_region_list is forbidden in this dispatch");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&key);
  }
  else
  {
    client_config_ptr = DbDeployConfigMgr::findDbClientConfig(db_deploy_config_mgr, (const std::string *)(v1 + 160));
    if ( client_config_ptr )
    {
      HttpSession::getPsnRegion[abi:cxx11]((std::string *)(v1 + 352), this);
      std::vector<data::DbRegionConfig const*>::vector((std::vector<const data::DbRegionConfig*> *const)(v1 + 96));
      DbDeployConfigMgr::findBindRegionConfigVec(
        db_deploy_config_mgr,
        (const std::string *)(v1 + 160),
        *(_DWORD *)(v1 + 48),
        (std::vector<const data::DbRegionConfig*> *)(v1 + 96));
      __for_range = (std::vector<const data::DbRegionConfig*> *)(v1 + 96);
      __for_begin._M_current = std::vector<data::DbRegionConfig const*>::begin((std::vector<const data::DbRegionConfig*> *const)(v1 + 96))._M_current;
      __for_end._M_current = std::vector<data::DbRegionConfig const*>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<data::DbRegionConfig const**,std::vector<data::DbRegionConfig const*>>(
                &__for_begin,
                &__for_end) )
      {
        v9 = __gnu_cxx::__normal_iterator<data::DbRegionConfig const**,std::vector<data::DbRegionConfig const*>>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
          v9 = (const data::DbRegionConfig **)__asan_report_load8(v9);
        region_config_ptr = *v9;
        if ( region_config_ptr )
        {
          if ( !HttpSession::isPsPlatform(this)
            || HttpSession::canPsnRegionLogin(this, (const std::string *)(v1 + 352), region_config_ptr) )
          {
            HttpSession::addRegionSimpleInfoOnRegionListRsp(
              this,
              (proto::QueryRegionListHttpRsp *)(v1 + 496),
              region_config_ptr);
          }
        }
        __gnu_cxx::__normal_iterator<data::DbRegionConfig const**,std::vector<data::DbRegionConfig const*>>::operator++(&__for_begin);
      }
      if ( HttpSession::isPsPlatform(this)
        && (unsigned __int8)std::string::empty(v1 + 352) != 1
        && !proto::QueryRegionListHttpRsp::region_list_size((const proto::QueryRegionListHttpRsp *const)(v1 + 496)) )
      {
        __for_range_0 = (std::vector<const data::DbRegionConfig*> *)(v1 + 96);
        __for_begin._M_current = std::vector<data::DbRegionConfig const*>::begin((std::vector<const data::DbRegionConfig*> *const)(v1 + 96))._M_current;
        __for_end._M_current = std::vector<data::DbRegionConfig const*>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<data::DbRegionConfig const**,std::vector<data::DbRegionConfig const*>>(
                  &__for_begin,
                  &__for_end) )
        {
          v12 = __gnu_cxx::__normal_iterator<data::DbRegionConfig const**,std::vector<data::DbRegionConfig const*>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
            v12 = (const data::DbRegionConfig **)__asan_report_load8(v12);
          region_config_ptr_0 = *v12;
          if ( region_config_ptr_0
            && common::tools::MiscUtils::isContains<std::set<std::string> const,char [8]>(
                 &region_config_ptr_0->psn_region_set,
                 (const char (*)[8])"DEFAULT") )
          {
            HttpSession::addRegionSimpleInfoOnRegionListRsp(
              this,
              (proto::QueryRegionListHttpRsp *)(v1 + 496),
              region_config_ptr_0);
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&key,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/network/http_session.cpp",
              "queryRegionList",
              170);
            v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    (common::milog::MiLogStream *const)&key,
                    (const char (*)[13])byte_19DE5FE0);
            v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                    v13,
                    (const std::string *)(v1 + 352));
            v15 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    v14,
                    (const char (*)[32])byte_19DE6020);
            v16 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                    v15,
                    (const std::string *)(v1 + 160));
            v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v16,
                    (const char (*)[13])" channel_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v1 + 48));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&key);
            break;
          }
          __gnu_cxx::__normal_iterator<data::DbRegionConfig const**,std::vector<data::DbRegionConfig const*>>::operator++(&__for_begin);
        }
      }
      proto::QueryRegionListHttpRsp::set_client_secret_key(
        (proto::QueryRegionListHttpRsp *const)(v1 + 496),
        &client_config_ptr->client_secret_key);
      proto::QueryRegionListHttpRsp::set_client_custom_config_encrypted(
        (proto::QueryRegionListHttpRsp *const)(v1 + 496),
        &client_config_ptr->client_custom_config_str_encrypted);
      v18 = DbDeployConfigMgr::enablePcLogin(db_deploy_config_mgr, *(_DWORD *)(v1 + 48));
      proto::QueryRegionListHttpRsp::set_enable_login_pc((proto::QueryRegionListHttpRsp *const)(v1 + 496), v18);
      if ( proto::QueryRegionListHttpRsp::region_list_size((const proto::QueryRegionListHttpRsp *const)(v1 + 496)) )
      {
        proto::QueryRegionListHttpRsp::set_retcode((proto::QueryRegionListHttpRsp *const)(v1 + 496), 0);
      }
      else
      {
        proto::QueryRegionListHttpRsp::set_retcode((proto::QueryRegionListHttpRsp *const)(v1 + 496), -1);
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&key,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/network/http_session.cpp",
          "queryRegionList",
          188);
        v19 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                (common::milog::MiLogStream *const)&key,
                (const char (*)[45])"Not found binded region for client_version: ");
        v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, (const std::string *)(v1 + 160));
        v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v20, (const char (*)[14])" channel_id: ");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(v1 + 48));
        v23 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v22, (const char (*)[14])" psn_region: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)(v1 + 352));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&key);
      }
      std::vector<data::DbRegionConfig const*>::~vector((std::vector<const data::DbRegionConfig*> *const)(v1 + 96));
      std::string::~string((void *)(v1 + 352));
    }
    else
    {
      proto::QueryRegionListHttpRsp::set_retcode((proto::QueryRegionListHttpRsp *const)(v1 + 496), -1);
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&key,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/network/http_session.cpp",
        "queryRegionList",
        133);
      v8 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)&key,
             (const char (*)[27])"Not found client_version: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v1 + 160));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&key);
    }
  }
  std::string::basic_string(v1 + 224);
  if ( std::operator==<char>("Sub_PS4CB1.0.4", (const std::string *)(v1 + 160)) )
  {
    google::protobuf::util::MessageToJsonString(
      (google::protobuf::util::Status *)(v1 + 416),
      (const google::protobuf::Message *)(v1 + 496),
      (std::string *)(v1 + 224));
    if ( google::protobuf::util::Status::ok((const google::protobuf::util::Status *const)(v1 + 416)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&key,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/network/http_session.cpp",
        "queryRegionList",
        207);
      v24 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
              (common::milog::MiLogStream *const)&key,
              (const char (*)[10])"version: ");
      v25 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v24, (const std::string *)(v1 + 160));
      v26 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v25, (const char (*)[8])" body: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, (const std::string *)(v1 + 224));
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&key,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/network/http_session.cpp",
        "queryRegionList",
        211);
      v27 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              (common::milog::MiLogStream *const)&key,
              (const char (*)[37])"MessageToJsonString fails, version: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v27, (const std::string *)(v1 + 160));
    }
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&key);
    google::protobuf::util::Status::~Status((google::protobuf::util::Status *const)(v1 + 416));
  }
  else
  {
    std::string::basic_string(v1 + 288);
    if ( google::protobuf::MessageLite::SerializeToString(
           (const google::protobuf::MessageLite *const)(v1 + 496),
           (std::string *)(v1 + 288)) )
    {
      common::tools::StringUtils::base64Encode(&key, (const std::string *)(v1 + 288));
      std::string::operator=(v1 + 224, &key);
      std::string::~string(&key);
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 352),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/network/http_session.cpp",
        "queryRegionList",
        221);
      v28 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
              (common::milog::MiLogStream *const)(v1 + 352),
              (const char (*)[10])"version: ");
      v29 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v28, (const std::string *)(v1 + 160));
      v30 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v29, (const char (*)[13])" channel_id:");
      v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v1 + 48));
      v32 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v31, (const char (*)[8])" body: ");
      google::protobuf::Message::ShortDebugString[abi:cxx11](&key, (google::protobuf::Message *)(v1 + 496));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v32, &key);
      std::string::~string(&key);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 352));
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&key,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/network/http_session.cpp",
        "queryRegionList",
        225);
      v33 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
              (common::milog::MiLogStream *const)&key,
              (const char (*)[10])"version: ");
      v34 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v33, (const std::string *)(v1 + 160));
      common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
        v34,
        (const char (*)[40])"region_list_rsp.SerializeToString fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&key);
    }
    std::string::~string((void *)(v1 + 288));
  }
  v35 = (const char *)std::string::c_str(v1 + 224);
  common::minet::HttpResponse::init(&this->response_, 0xC8u, v35);
  v36 = proto::QueryRegionListHttpRsp::retcode((const proto::QueryRegionListHttpRsp *const)(v1 + 496));
  std::string::~string((void *)(v1 + 224));
  std::string::~string((void *)(v1 + 160));
  proto::QueryRegionListHttpRsp::~QueryRegionListHttpRsp((proto::QueryRegionListHttpRsp *const)(v1 + 496));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 64));
  result = v36;
  if ( v48 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8044) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8048) = -168430091;
  }
  return result;
};

// Line 235: range 000000000C6142DA-000000000C614938
int32_t __cdecl HttpSession::queryCurrRegion(HttpSession *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  proto::RegionInfo *v4; // rax
  common::milog::MiLogStream *v5; // r14
  const char *v6; // rax
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r15
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  const char *v13; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Bh] [rbp-215h] BYREF
  int32_t retcode; // [rsp+1Ch] [rbp-214h]
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-210h] BYREF
  std::string v18; // [rsp+40h] [rbp-1F0h] BYREF
  std::string key; // [rsp+60h] [rbp-1D0h] BYREF
  common::milog::MiLogStream v20; // [rsp+80h] [rbp-1B0h] BYREF
  std::string val; // [rsp+A0h] [rbp-190h] BYREF
  char v22[368]; // [rsp+C0h] [rbp-170h] BYREF

  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(320LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 16 14 config_ptr:237 80 32 8 body:250 144 32 13 proto_str:251 208 80 19 curr_region_rsp:240";
  *(_QWORD *)(v1 + 16) = HttpSession::queryCurrRegion;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862723] = -219021312;
  v3[536862724] = 62194;
  v3[536862725] = -219021312;
  v3[536862726] = 62194;
  v3[536862729] = -202116109;
  ServiceBox::findService<DispatchService>();
  DispatchService::getConfig((DispatchService *const)(v1 + 48));
  proto::QueryCurrRegionHttpRsp::QueryCurrRegionHttpRsp((proto::QueryCurrRegionHttpRsp *const)(v1 + 208));
  HttpSession::getCurrRegionInfo(this, (proto::QueryCurrRegionHttpRsp *)(v1 + 208));
  retcode = proto::QueryCurrRegionHttpRsp::retcode((const proto::QueryCurrRegionHttpRsp *const)(v1 + 208));
  if ( retcode )
  {
    v4 = proto::QueryCurrRegionHttpRsp::mutable_region_info((proto::QueryCurrRegionHttpRsp *const)(v1 + 208));
    proto::RegionInfo::clear_secret_key(v4);
  }
  std::string::basic_string(v1 + 80);
  std::string::basic_string(v1 + 144);
  if ( !google::protobuf::MessageLite::SerializeToString(
          (const google::protobuf::MessageLite *const)(v1 + 208),
          (std::string *)(v1 + 144)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/http_session.cpp",
      "queryCurrRegion",
      254);
    v5 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           &v20,
           (const char (*)[57])"cur_region_rsp serialize to string failed, debug_string:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, (google::protobuf::Message *)(v1 + 208));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v20);
    v6 = (const char *)std::string::c_str(v1 + 80);
    common::minet::HttpResponse::init(&this->response_, 0xC8u, v6);
    v7 = proto::QueryCurrRegionHttpRsp::retcode((const proto::QueryCurrRegionHttpRsp *const)(v1 + 208));
  }
  else
  {
    if ( HttpSession::encryptRegionInfo(this, retcode, (const std::string *)(v1 + 144), (std::string *)(v1 + 80)) )
    {
      common::tools::StringUtils::base64Encode(&val, (const std::string *)(v1 + 144));
      std::string::operator=(v1 + 80, &val);
      std::string::~string(&val);
    }
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/http_session.cpp",
      "queryCurrRegion",
      269);
    v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v17, (const char (*)[11])"client_ip:");
    common::minet::HttpRequest::getIp[abi:cxx11](&v18, &this->request_);
    v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &v18);
    v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])" version: ");
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&key, "version", &__a);
    common::minet::HttpRequest::getPara((std::string *)&v20, &this->request_, &key);
    v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)&v20);
    v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])" body:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, (google::protobuf::Message *)(v1 + 208));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, &val);
    std::string::~string(&val);
    std::string::~string(&v20);
    std::string::~string(&key);
    std::allocator<char>::~allocator(&__a);
    std::string::~string(&v18);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v13 = (const char *)std::string::c_str(v1 + 80);
    common::minet::HttpResponse::init(&this->response_, 0xC8u, v13);
    v7 = proto::QueryCurrRegionHttpRsp::retcode((const proto::QueryCurrRegionHttpRsp *const)(v1 + 208));
  }
  std::string::~string((void *)(v1 + 144));
  std::string::~string((void *)(v1 + 80));
  proto::QueryCurrRegionHttpRsp::~QueryCurrRegionHttpRsp((proto::QueryCurrRegionHttpRsp *const)(v1 + 208));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 48));
  result = v7;
  if ( v22 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 275: range 000000000C61493A-000000000C6155E1
int32_t __cdecl HttpSession::encryptRegionInfo(
        HttpSession *const this,
        int32_t retcode,
        const std::string *proto_str,
        std::string *body)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int32_t v7; // r14d
  bool v8; // r14
  common::milog::MiLogStream *v9; // r15
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  const std::string *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v16; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  std::string *p_server_private_key; // r14
  const EVP_MD *v25; // rdi
  common::milog::MiLogStream *v26; // rdx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  Json::Value_0 *v32; // rax
  Json::Value_0 *v33; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+3Bh] [rbp-275h] BYREF
  int value; // [rsp+3Ch] [rbp-274h] BYREF
  const data::DbRegionConfig *region_config_ptr; // [rsp+40h] [rbp-270h]
  const data::DbRsakeyConfig *rsa_config_ptr; // [rsp+48h] [rbp-268h]
  std::string v41; // [rsp+50h] [rbp-260h] BYREF
  std::string str; // [rsp+70h] [rbp-240h] BYREF
  Json::Value_0 other; // [rsp+90h] [rbp-220h] BYREF
  char v44[496]; // [rsp+C0h] [rbp-1F0h] BYREF

  v4 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(448LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 48 4 10 key_id:281 64 16 14 config_ptr:276 96 32 19 cur_region_name:295 160 32 8 sign:323 224 "
                        "32 15 encrypt_str:330 288 40 8 json:336 368 48 15 json_writer:340";
  *(_QWORD *)(v4 + 16) = HttpSession::encryptRegionInfo;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862724] = -218959118;
  v6[536862726] = -218959118;
  v6[536862728] = -218959118;
  v6[536862730] = -218959360;
  v6[536862731] = 62194;
  v6[536862733] = -202116109;
  ServiceBox::findService<DispatchService>();
  DispatchService::getConfig((DispatchService *const)(v4 + 64));
  if ( std::operator==<Config>(0LL, (const std::shared_ptr<Config> *)(v4 + 64)) )
  {
    v7 = -1;
  }
  else
  {
    *(_DWORD *)(v4 + 48) = 0;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v4 + 224), "key_id", &__a);
    common::minet::HttpRequest::getPara(&str, &this->request_, (const std::string *)(v4 + 224));
    v8 = common::tools::StringUtils::strToNum<unsigned int>(&str, (unsigned int *)(v4 + 48), 1) != 0;
    std::string::~string(&str);
    std::string::~string((void *)(v4 + 224));
    std::allocator<char>::~allocator(&__a);
    if ( v8 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 160),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/network/http_session.cpp",
        "encryptRegionInfo",
        284);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v4 + 160),
             (const char (*)[16])"invalid key_id:");
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v4 + 224), "key_id", &__a);
      common::minet::HttpRequest::getPara(&str, &this->request_, (const std::string *)(v4 + 224));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &str);
      std::string::~string(&str);
      std::string::~string((void *)(v4 + 224));
      std::allocator<char>::~allocator(&__a);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 160));
      v7 = -1;
    }
    else if ( *(_DWORD *)(v4 + 48) || !retcode )
    {
      v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      v11 = ConfigBase::getRegionName[abi:cxx11](v10);
      std::string::basic_string(v4 + 96, v11);
      v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      region_config_ptr = DbDeployConfigMgr::findDbRegionConfig(
                            &v12->db_deploy_config_mgr,
                            (const std::string *)(v4 + 96));
      if ( region_config_ptr )
      {
        if ( !retcode
          && !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
                &region_config_ptr->rsa_key_set,
                (const unsigned int *)(v4 + 48))
          && (value = 0,
              !common::tools::MiscUtils::isContains<std::set<unsigned int> const,int>(
                 &region_config_ptr->rsa_key_set,
                 &value)) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&str,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/network/http_session.cpp",
            "encryptRegionInfo",
            306);
          v16 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                  (common::milog::MiLogStream *const)&str,
                  (const char (*)[33])"this region is not allow key_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v4 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&str);
          v7 = -1;
        }
        else
        {
          v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          rsa_config_ptr = DbDeployConfigMgr::findDbRsakeyConfig(&v17->db_deploy_config_mgr, *(_DWORD *)(v4 + 48));
          if ( rsa_config_ptr )
          {
            if ( (unsigned __int8)std::string::empty(&rsa_config_ptr->client_public_key)
              || (unsigned __int8)std::string::empty(&rsa_config_ptr->server_private_key) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&str,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/network/http_session.cpp",
                "encryptRegionInfo",
                319);
              v21 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                      (common::milog::MiLogStream *const)&str,
                      (const char (*)[19])"client_public_key:");
              v22 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                      v21,
                      &rsa_config_ptr->client_public_key);
              v23 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                      v22,
                      (const char (*)[21])" server_private_key:");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                v23,
                &rsa_config_ptr->server_private_key);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&str);
              v7 = -1;
            }
            else
            {
              std::string::basic_string(v4 + 160);
              p_server_private_key = &rsa_config_ptr->server_private_key;
              v25 = (const EVP_MD *)EVP_sha256();
              if ( common::tools::RsaUtils::privateSign(v25, p_server_private_key, proto_str, (std::string *)(v4 + 160)) >= 0 )
              {
                std::string::basic_string(v4 + 224);
                if ( common::tools::RsaUtils::publicEncryp(
                       &rsa_config_ptr->client_public_key,
                       proto_str,
                       (std::string *)(v4 + 224)) >= 0 )
                {
                  Json::Value::Value(v4 + 288, 0LL);
                  common::tools::StringUtils::base64Encode(&str, (const std::string *)(v4 + 224));
                  Json::Value::Value(&other, &str);
                  v32 = Json::Value::operator[]((Json::Value_0 *const)(v4 + 288), "content");
                  Json::Value::operator=(v32, &other);
                  Json::Value::~Value(&other);
                  std::string::~string(&str);
                  Json::Value::Value(&other, v4 + 160);
                  v33 = Json::Value::operator[]((Json::Value_0 *const)(v4 + 288), "sign");
                  Json::Value::operator=(v33, &other);
                  Json::Value::~Value(&other);
                  Json::FastWriter::FastWriter((Json::FastWriter *const)(v4 + 368));
                  Json::FastWriter::write[abi:cxx11](
                    &str,
                    (Json::FastWriter *const)(v4 + 368),
                    (const Json::Value *)(v4 + 288));
                  std::string::operator=(body, &str);
                  std::string::~string(&str);
                  v7 = 0;
                  Json::FastWriter::~FastWriter((Json::FastWriter *const)(v4 + 368));
                  Json::Value::~Value((Json::Value_0 *const)(v4 + 288));
                }
                else
                {
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)&str,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/network/http_session.cpp",
                    "encryptRegionInfo",
                    333);
                  v29 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                          (common::milog::MiLogStream *const)&str,
                          (const char (*)[37])"encrypt proto_str failed, proto_str:");
                  v30 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v29, proto_str);
                  v31 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                          v30,
                          (const char (*)[9])" key_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v31,
                    (const unsigned int *)(v4 + 48));
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&str);
                  v7 = -1;
                }
                std::string::~string((void *)(v4 + 224));
              }
              else
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&str,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/network/http_session.cpp",
                  "encryptRegionInfo",
                  326);
                v26 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                        (common::milog::MiLogStream *const)&str,
                        (const char (*)[36])"encrypt hash_str failed, proto_str:");
                v27 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, proto_str);
                v28 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v27, (const char (*)[9])" key_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v28,
                  (const unsigned int *)(v4 + 48));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&str);
                v7 = -1;
              }
              std::string::~string((void *)(v4 + 160));
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&str,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/network/http_session.cpp",
              "encryptRegionInfo",
              313);
            v18 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    (common::milog::MiLogStream *const)&str,
                    (const char (*)[21])"find rsa config for ");
            v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v18,
                    (const unsigned int *)(v4 + 48));
            common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v19, (const char (*)[8])" failed");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&str);
            v7 = -1;
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&str,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/network/http_session.cpp",
          "encryptRegionInfo",
          299);
        v13 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                (common::milog::MiLogStream *const)&str,
                (const char (*)[24])"find region config for ");
        v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, (const std::string *)(v4 + 96));
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v14, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&str);
        v7 = -1;
      }
      std::string::~string((void *)(v4 + 96));
    }
    else
    {
      common::tools::StringUtils::base64Encode(&v41, proto_str);
      std::string::operator=(body, &v41);
      std::string::~string(&v41);
      v7 = 0;
    }
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 64));
  result = v7;
  if ( v44 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8034) = 0;
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
  return result;
};

// Line 346: range 000000000C6155E2-000000000C616B7C
void __cdecl HttpSession::getCurrRegionInfo(HttpSession *const this, proto::QueryCurrRegionHttpRsp *curr_region_rsp)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  const std::string *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r15
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
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  const std::string *v28; // rax
  char v29; // al
  uint32_t v30; // ecx
  const std::string *v31; // rax
  common::milog::MiLogStream *v32; // r14
  const std::string *v33; // rax
  common::milog::MiLogStream *v34; // rax
  google::protobuf::int64 v35; // r14
  const google::protobuf::Timestamp *v36; // rax
  google::protobuf::int64 v37; // r14
  const google::protobuf::Timestamp *v38; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  uint32_t v41; // ecx
  const google::protobuf::Timestamp *v42; // rax
  google::protobuf::uint32 v43; // eax
  const google::protobuf::Timestamp *v44; // rax
  google::protobuf::uint32 v45; // eax
  const std::string *v46; // rax
  uint32_t v47; // ecx
  common::milog::MiLogStream *v48; // rax
  google::protobuf::int64 v49; // r14
  const google::protobuf::Timestamp *v50; // rax
  google::protobuf::int64 v51; // r14
  const google::protobuf::Timestamp *v52; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // rax
  uint32_t v55; // ecx
  const google::protobuf::Timestamp *v56; // rax
  google::protobuf::uint32 v57; // eax
  const google::protobuf::Timestamp *v58; // rax
  google::protobuf::uint32 v59; // eax
  const std::string *v60; // rax
  uint32_t v61; // ecx
  common::milog::MiLogStream *v62; // rax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-2F1h] BYREF
  uint32_t cur_time; // [rsp+30h] [rbp-2F0h]
  uint32_t cur_time_0; // [rsp+34h] [rbp-2ECh]
  const DbDeployConfigMgr *db_deploy_config_mgr; // [rsp+38h] [rbp-2E8h]
  const data::DbRegionConfig *region_config_ptr; // [rsp+40h] [rbp-2E0h]
  const data::DbClientConfig *client_config_ptr; // [rsp+48h] [rbp-2D8h]
  const data::DbClientChannelIdConfig *client_channel_id_config_ptr; // [rsp+50h] [rbp-2D0h]
  const proto::ForceUpdateConfig *force_update_config; // [rsp+58h] [rbp-2C8h]
  proto::ForceUpdateInfo *force_update_info; // [rsp+60h] [rbp-2C0h]
  proto::RegionInfo *region_info; // [rsp+68h] [rbp-2B8h]
  const proto::StopServerConfig *stop_config; // [rsp+70h] [rbp-2B0h]
  proto::StopServerInfo *stop_server_info; // [rsp+78h] [rbp-2A8h]
  const proto::StopServerConfig *region_stop_config; // [rsp+80h] [rbp-2A0h]
  proto::StopServerInfo *stop_server_info_0; // [rsp+88h] [rbp-298h]
  common::milog::MiLogStream v77; // [rsp+90h] [rbp-290h] BYREF
  char v78[624]; // [rsp+B0h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v78;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 48 4 14 channel_id:352 64 4 18 sub_channel_id:353 80 4 12 platform:379 96 16 14 config_ptr:34"
                        "7 128 32 19 cur_region_name:350 192 32 18 client_version:351 256 32 16 platform_str:372 320 32 2"
                        "1 dispatch_seed_str:373 384 32 6 ip:426 448 32 7 msg:473 512 32 15 content_msg:457";
  *(_QWORD *)(v2 + 16) = HttpSession::getCurrRegionInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
  ServiceBox::findService<DispatchService>();
  DispatchService::getConfig((DispatchService *const)(v2 + 96));
  db_deploy_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96))->db_deploy_config_mgr;
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  v6 = ConfigBase::getRegionName[abi:cxx11](v5);
  std::string::basic_string(v2 + 128, v6);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 512), "version", &__a);
  common::minet::HttpRequest::getPara((std::string *)(v2 + 192), &this->request_, (const std::string *)(v2 + 512));
  std::string::~string((void *)(v2 + 512));
  std::allocator<char>::~allocator(&__a);
  *(_DWORD *)(v2 + 48) = HttpSession::getChannelId(this);
  *(_DWORD *)(v2 + 64) = HttpSession::getSubChannelId(this);
  region_config_ptr = DbDeployConfigMgr::findDbRegionConfig(db_deploy_config_mgr, (const std::string *)(v2 + 128));
  client_config_ptr = DbDeployConfigMgr::findDbClientConfig(db_deploy_config_mgr, (const std::string *)(v2 + 192));
  client_channel_id_config_ptr = DbDeployConfigMgr::findDbClientChannelIdConfig(
                                   db_deploy_config_mgr,
                                   (const std::string *)(v2 + 192),
                                   *(_DWORD *)(v2 + 48),
                                   *(_DWORD *)(v2 + 64));
  if ( client_config_ptr )
  {
    if ( region_config_ptr )
    {
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 512), "platform", &__a);
      common::minet::HttpRequest::getPara((std::string *)(v2 + 256), &this->request_, (const std::string *)(v2 + 512));
      std::string::~string((void *)(v2 + 512));
      std::allocator<char>::~allocator(&__a);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 512), "dispatchSeed", &__a);
      common::minet::HttpRequest::getPara((std::string *)(v2 + 320), &this->request_, (const std::string *)(v2 + 512));
      std::string::~string((void *)(v2 + 512));
      std::allocator<char>::~allocator(&__a);
      common::milog::MiLogStream::create(
        &v77,
        &common::milog::MiLogDefault::default_log_obj_,
        5u,
        "./src/network/http_session.cpp",
        "getCurrRegionInfo",
        374);
      v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             &v77,
             (const char (*)[18])"request version: ");
      v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, (const std::string *)(v2 + 192));
      v11 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])" lang: ");
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 384), "lang", &__a);
      common::minet::HttpRequest::getPara((std::string *)(v2 + 448), &this->request_, (const std::string *)(v2 + 384));
      v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, (const std::string *)(v2 + 448));
      v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])" platform: ");
      v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, (const std::string *)(v2 + 256));
      v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])" channel_id:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 48));
      v17 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v16, (const char (*)[17])" sub_channel_id:");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 64));
      v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v18, (const char (*)[16])" dispatch_seed:");
      v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, (const std::string *)(v2 + 320));
      v21 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v20, (const char (*)[17])" from client_ip:");
      common::minet::HttpRequest::getIp[abi:cxx11]((std::string *)(v2 + 512), &this->request_);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, (const std::string *)(v2 + 512));
      std::string::~string((void *)(v2 + 512));
      std::string::~string((void *)(v2 + 448));
      std::string::~string((void *)(v2 + 384));
      std::allocator<char>::~allocator(&__a);
      common::milog::MiLogStream::~MiLogStream(&v77);
      *(_DWORD *)(v2 + 80) = 0;
      if ( common::tools::StringUtils::strToNum<unsigned int>(
             (const std::string *)(v2 + 256),
             (unsigned int *)(v2 + 80),
             1) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 512),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/network/http_session.cpp",
          "getCurrRegionInfo",
          382);
        v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                (common::milog::MiLogStream *const)(v2 + 512),
                (const char (*)[11])"platform: ");
        v23 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v23, (const char (*)[16])" strToNum fails");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
        proto::QueryCurrRegionHttpRsp::set_retcode(curr_region_rsp, 1);
      }
      else if ( (unsigned __int8)std::string::empty(&client_config_ptr->dispatch_seed) != 1
             && std::operator!=<char>((const std::string *)(v2 + 320), &client_config_ptr->dispatch_seed) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 512),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/network/http_session.cpp",
          "getCurrRegionInfo",
          390);
        v25 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                (common::milog::MiLogStream *const)(v2 + 512),
                (const char (*)[25])"expected dispatch seed: ");
        v26 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                v25,
                &client_config_ptr->dispatch_seed);
        v27 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v26, (const char (*)[6])" get:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v27, (const std::string *)(v2 + 320));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
        proto::QueryCurrRegionHttpRsp::set_retcode(curr_region_rsp, 1);
      }
      else if ( !DbDeployConfigMgr::isClientBindRegion(
                   db_deploy_config_mgr,
                   (const std::string *)(v2 + 192),
                   *(_DWORD *)(v2 + 48),
                   (const std::string *)(v2 + 128)) )
      {
        proto::QueryCurrRegionHttpRsp::set_retcode(curr_region_rsp, 1);
        proto::QueryCurrRegionHttpRsp::set_msg(curr_region_rsp, "Not match region");
      }
      else if ( client_channel_id_config_ptr
             && ((force_update_config = &client_channel_id_config_ptr->force_update_config,
                  v28 = proto::ForceUpdateConfig::url[abi:cxx11](&client_channel_id_config_ptr->force_update_config),
                  (unsigned __int8)std::string::empty(v28) == 1)
              && !proto::ForceUpdateConfig::text_id(force_update_config)
               ? (v29 = 0)
               : (v29 = 1),
                 v29) )
      {
        proto::QueryCurrRegionHttpRsp::set_retcode(curr_region_rsp, 20);
        std::string::basic_string(v2 + 448);
        v30 = proto::ForceUpdateConfig::text_id(force_update_config);
        HttpSession::findMultiLangText(this, v30, (std::string *)(v2 + 448));
        proto::QueryCurrRegionHttpRsp::set_msg(curr_region_rsp, (const std::string *)(v2 + 448));
        force_update_info = proto::QueryCurrRegionHttpRsp::mutable_force_udpate(curr_region_rsp);
        v31 = proto::ForceUpdateConfig::url[abi:cxx11](force_update_config);
        proto::ForceUpdateInfo::set_force_update_url(force_update_info, v31);
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 512),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/network/http_session.cpp",
          "getCurrRegionInfo",
          416);
        v32 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                (common::milog::MiLogStream *const)(v2 + 512),
                (const char (*)[18])"force_update_url:");
        v33 = proto::ForceUpdateInfo::force_update_url[abi:cxx11](force_update_info);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v32, v33);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
        std::string::~string((void *)(v2 + 448));
      }
      else
      {
        region_info = proto::QueryCurrRegionHttpRsp::mutable_region_info(curr_region_rsp);
        HttpSession::fillRegionInfoProto(this, *(_DWORD *)(v2 + 80), region_config_ptr, region_info);
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 512), "miHoYoCloudClientIP", &__a);
        common::minet::HttpRequest::getHead((std::string *)(v2 + 384), &this->request_, (const std::string *)(v2 + 512));
        std::string::~string((void *)(v2 + 512));
        std::allocator<char>::~allocator(&__a);
        if ( (unsigned __int8)std::string::empty(v2 + 384) )
        {
          common::minet::HttpRequest::getIp[abi:cxx11]((std::string *)(v2 + 512), &this->request_);
          std::string::operator=(v2 + 384, v2 + 512);
          std::string::~string((void *)(v2 + 512));
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 512),
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/network/http_session.cpp",
            "getCurrRegionInfo",
            433);
          v34 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  (common::milog::MiLogStream *const)(v2 + 512),
                  (const char (*)[21])"miHoYoCloudClientIP:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v34, (const std::string *)(v2 + 384));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
        }
        cur_time = common::tools::TimeUtils::getNow();
        if ( !client_channel_id_config_ptr )
          goto LABEL_39;
        stop_config = &client_channel_id_config_ptr->stop_server_config;
        cur_time_0 = common::tools::TimeUtils::getNow();
        v35 = cur_time_0;
        v36 = proto::StopServerConfig::begin_time(stop_config);
        if ( v35 > google::protobuf::Timestamp::seconds(v36)
          && (v37 = cur_time_0,
              v38 = proto::StopServerConfig::end_time(stop_config),
              v37 < google::protobuf::Timestamp::seconds(v38))
          && !DbDeployConfigMgr::isLoginWhiteIp(db_deploy_config_mgr, (const std::string *)(v2 + 384))
          && (v39 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96)),
              !data::DbStopServerLoginWhiteIpConfigMgr::isIpInWhiteList(
                 &v39->stop_server_login_white_ip_config_mgr,
                 (const std::string *)(v2 + 384))) )
        {
          proto::QueryCurrRegionHttpRsp::set_retcode(curr_region_rsp, 11);
          std::string::basic_string(v2 + 448);
          v41 = proto::StopServerConfig::text_id(stop_config);
          HttpSession::findMultiLangText(this, v41, (std::string *)(v2 + 448));
          proto::QueryCurrRegionHttpRsp::set_msg(curr_region_rsp, (const std::string *)(v2 + 448));
          stop_server_info = proto::QueryCurrRegionHttpRsp::mutable_stop_server(curr_region_rsp);
          v42 = proto::StopServerConfig::begin_time(stop_config);
          v43 = google::protobuf::Timestamp::seconds(v42);
          proto::StopServerInfo::set_stop_begin_time(stop_server_info, v43);
          v44 = proto::StopServerConfig::end_time(stop_config);
          v45 = google::protobuf::Timestamp::seconds(v44);
          proto::StopServerInfo::set_stop_end_time(stop_server_info, v45);
          v46 = proto::StopServerConfig::url[abi:cxx11](stop_config);
          proto::StopServerInfo::set_url(stop_server_info, v46);
          if ( proto::StopServerConfig::content_text_id(stop_config) )
          {
            std::string::basic_string(v2 + 512);
            v47 = proto::StopServerConfig::content_text_id(stop_config);
            HttpSession::findMultiLangText(this, v47, (std::string *)(v2 + 512));
            proto::StopServerInfo::set_content_msg(stop_server_info, (const std::string *)(v2 + 512));
            std::string::~string((void *)(v2 + 512));
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 512),
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/network/http_session.cpp",
            "getCurrRegionInfo",
            461);
          v48 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  (common::milog::MiLogStream *const)(v2 + 512),
                  (const char (*)[15])"req client ip:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v48, (const std::string *)(v2 + 384));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
          std::string::~string((void *)(v2 + 448));
        }
        else
        {
LABEL_39:
          region_stop_config = &region_config_ptr->stop_server_config;
          v49 = cur_time;
          v50 = proto::StopServerConfig::begin_time(&region_config_ptr->stop_server_config);
          if ( v49 > google::protobuf::Timestamp::seconds(v50)
            && (v51 = cur_time,
                v52 = proto::StopServerConfig::end_time(region_stop_config),
                v51 < google::protobuf::Timestamp::seconds(v52))
            && !DbDeployConfigMgr::isLoginWhiteIp(db_deploy_config_mgr, (const std::string *)(v2 + 384))
            && (v53 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96)),
                !data::DbStopServerLoginWhiteIpConfigMgr::isIpInWhiteList(
                   &v53->stop_server_login_white_ip_config_mgr,
                   (const std::string *)(v2 + 384))) )
          {
            proto::QueryCurrRegionHttpRsp::set_retcode(curr_region_rsp, 11);
            std::string::basic_string(v2 + 448);
            v55 = proto::StopServerConfig::text_id(region_stop_config);
            HttpSession::findMultiLangText(this, v55, (std::string *)(v2 + 448));
            proto::QueryCurrRegionHttpRsp::set_msg(curr_region_rsp, (const std::string *)(v2 + 448));
            stop_server_info_0 = proto::QueryCurrRegionHttpRsp::mutable_stop_server(curr_region_rsp);
            v56 = proto::StopServerConfig::begin_time(region_stop_config);
            v57 = google::protobuf::Timestamp::seconds(v56);
            proto::StopServerInfo::set_stop_begin_time(stop_server_info_0, v57);
            v58 = proto::StopServerConfig::end_time(region_stop_config);
            v59 = google::protobuf::Timestamp::seconds(v58);
            proto::StopServerInfo::set_stop_end_time(stop_server_info_0, v59);
            v60 = proto::StopServerConfig::url[abi:cxx11](region_stop_config);
            proto::StopServerInfo::set_url(stop_server_info_0, v60);
            if ( proto::StopServerConfig::content_text_id(region_stop_config) )
            {
              std::string::basic_string(v2 + 512);
              v61 = proto::StopServerConfig::content_text_id(region_stop_config);
              HttpSession::findMultiLangText(this, v61, (std::string *)(v2 + 512));
              proto::StopServerInfo::set_content_msg(stop_server_info_0, (const std::string *)(v2 + 512));
              std::string::~string((void *)(v2 + 512));
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 512),
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/network/http_session.cpp",
              "getCurrRegionInfo",
              487);
            v62 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    (common::milog::MiLogStream *const)(v2 + 512),
                    (const char (*)[15])"req client ip:");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v62, (const std::string *)(v2 + 384));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            std::string::~string((void *)(v2 + 448));
          }
          else
          {
            proto::QueryCurrRegionHttpRsp::set_client_secret_key(curr_region_rsp, &region_config_ptr->client_secret_key);
            proto::QueryCurrRegionHttpRsp::set_region_custom_config_encrypted(
              curr_region_rsp,
              &region_config_ptr->region_custom_config_str_encrypted);
            DbDeployConfigMgr::findClientRegionCustomConfigStrEncrypted(
              (std::string *)(v2 + 512),
              db_deploy_config_mgr,
              (const std::string *)(v2 + 192),
              (const std::string *)(v2 + 128),
              &region_config_ptr->server_secret_key);
            proto::QueryCurrRegionHttpRsp::set_client_region_custom_config_encrypted(
              curr_region_rsp,
              (std::string *)(v2 + 512));
            std::string::~string((void *)(v2 + 512));
            HttpSession::getGateserverInfo(this, curr_region_rsp);
            if ( !proto::QueryCurrRegionHttpRsp::retcode(curr_region_rsp) )
              proto::QueryCurrRegionHttpRsp::set_retcode(curr_region_rsp, 0);
          }
        }
        std::string::~string((void *)(v2 + 384));
      }
      std::string::~string((void *)(v2 + 320));
      std::string::~string((void *)(v2 + 256));
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 512),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/network/http_session.cpp",
        "getCurrRegionInfo",
        366);
      v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
             (common::milog::MiLogStream *const)(v2 + 512),
             (const char (*)[37])"region_config_ptr is nullptr region:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
      proto::QueryCurrRegionHttpRsp::set_retcode(curr_region_rsp, 1);
      proto::QueryCurrRegionHttpRsp::set_msg(curr_region_rsp, "Not Found region config");
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 512),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/http_session.cpp",
      "getCurrRegionInfo",
      359);
    v7 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           (common::milog::MiLogStream *const)(v2 + 512),
           (const char (*)[38])"client_config_ptr is nullptr version:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, (const std::string *)(v2 + 192));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
    proto::QueryCurrRegionHttpRsp::set_retcode(curr_region_rsp, 1);
    proto::QueryCurrRegionHttpRsp::set_msg(curr_region_rsp, "Not Found version config");
  }
  std::string::~string((void *)(v2 + 192));
  std::string::~string((void *)(v2 + 128));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
  if ( v78 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF803C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 509: range 000000000C616B7E-000000000C616F7B
void __cdecl HttpSession::getGateserverInfo(HttpSession *const this, proto::QueryCurrRegionHttpRsp *curr_region_rsp)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  GateserverMgr *p_gateserver_mgr; // r14
  const char *v6; // rax
  int v7; // eax
  common::milog::MiLogStream *v8; // rax
  std::allocator<char> __a; // [rsp+17h] [rbp-199h] BYREF
  proto::RegionInfo *region_info; // [rsp+18h] [rbp-198h]
  std::string key; // [rsp+20h] [rbp-190h] BYREF
  char v12[368]; // [rsp+40h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 32 7 uid:510 112 144 8 info:511";
  *(_QWORD *)(v2 + 16) = HttpSession::getGateserverInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862728] = -202116109;
  v4[536862729] = -202116109;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&key, off_19DE5CE0, &__a);
  common::minet::HttpRequest::getPara((std::string *)(v2 + 48), &this->request_, &key);
  std::string::~string(&key);
  std::allocator<char>::~allocator(&__a);
  GateserverInfo::GateserverInfo((GateserverInfo *const)(v2 + 112));
  p_gateserver_mgr = &ServiceBox::findService<DispatchService>()->gateserver_mgr;
  v6 = (const char *)std::string::c_str(v2 + 48);
  v7 = atoi(v6);
  if ( GateserverMgr::grabGateserver(p_gateserver_mgr, v7, (GateserverInfo *)(v2 + 112)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&key,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/http_session.cpp",
      "getGateserverInfo",
      514);
    v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           (common::milog::MiLogStream *const)&key,
           (const char (*)[31])"grabGateserver failed for uid:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&key);
    proto::QueryCurrRegionHttpRsp::set_msg(curr_region_rsp, "Not found Gateserver");
    proto::QueryCurrRegionHttpRsp::set_retcode(curr_region_rsp, -1);
  }
  else
  {
    region_info = proto::QueryCurrRegionHttpRsp::mutable_region_info(curr_region_rsp);
    proto::RegionInfo::set_gateserver_ip(region_info, (const std::string *)(v2 + 184));
    proto::RegionInfo::set_gateserver_port(region_info, *(unsigned __int16 *)(v2 + 216));
    proto::RegionInfo::set_use_gateserver_domain_name(region_info, *(_BYTE *)(v2 + 218));
    proto::RegionInfo::set_gateserver_domain_name(region_info, (const std::string *)(v2 + 224));
    proto::QueryCurrRegionHttpRsp::set_retcode(curr_region_rsp, 0);
  }
  GateserverInfo::~GateserverInfo((GateserverInfo *const)(v2 + 112));
  std::string::~string((void *)(v2 + 48));
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 529: range 000000000C616F7C-000000000C617A20
void __cdecl HttpSession::fillRegionInfoProto(
        HttpSession *const this,
        uint32_t platform,
        const data::DbRegionConfig *region_config,
        proto::RegionInfo *region_info)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::string *p_resource_url; // rsi
  unsigned __int64 v12; // rax
  _BYTE *v13; // rdx
  char v14; // cl
  __int64 v15; // rcx
  char v16; // al
  std::string *p_resource_url_bak; // rsi
  unsigned __int64 v18; // rax
  _BYTE *v19; // rdx
  char v20; // cl
  __int64 v21; // rcx
  char v22; // al
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  proto::ResVersionConfig *v24; // rdx
  const std::string *v25; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  proto::ResVersionConfig *res_version_config; // rdx
  const std::string *v28; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  common::milog::MiLogStream *v30; // rax
  const proto::ResVersionConfig *res_config_ptr; // [rsp+28h] [rbp-1F8h]
  const proto::ResVersionConfig *next_res_config_ptr; // [rsp+30h] [rbp-1F0h]
  const data::DbAreaConfig *area_config_ptr; // [rsp+38h] [rbp-1E8h]
  std::string value; // [rsp+40h] [rbp-1E0h] BYREF
  char v38[448]; // [rsp+60h] [rbp-1C0h] BYREF

  v4 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(416LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 32 4 18 client_version:547 48 4 26 client_silence_version:547 64 16 14 config_ptr:544 96 32 14"
                        " client_md5:548 160 32 22 client_silence_md5:548 224 32 16 resource_url:564 288 32 20 resource_u"
                        "rl_bak:569 352 32 15 next_branch:592";
  *(_QWORD *)(v4 + 16) = HttpSession::fillRegionInfoProto;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -219021312;
  v6[536862724] = -218959118;
  v6[536862726] = -218959118;
  v6[536862728] = -218959118;
  v6[536862730] = -218959118;
  v6[536862732] = -202116109;
  proto::RegionInfo::set_resource_url(region_info, &region_config->resource_url);
  proto::RegionInfo::set_resource_url_bak(region_info, &region_config->resource_url_bak);
  proto::RegionInfo::set_data_url(region_info, &region_config->data_url);
  proto::RegionInfo::set_data_url_bak(region_info, &region_config->data_url_bak);
  proto::RegionInfo::set_feedback_url(region_info, &region_config->feedback_url);
  proto::RegionInfo::set_bulletin_url(region_info, &region_config->bulletin_url);
  proto::RegionInfo::set_handbook_url(region_info, &region_config->handbook_url);
  proto::RegionInfo::set_area_type(region_info, &region_config->area_type);
  proto::RegionInfo::set_official_community_url(region_info, &region_config->official_community_url);
  proto::RegionInfo::set_pay_callback_url(region_info, &region_config->pay_callback_url);
  proto::RegionInfo::set_secret_key(region_info, &region_config->client_secret_key);
  ServiceBox::findService<DispatchService>();
  DispatchService::getConfig((DispatchService *const)(v4 + 64));
  *(_DWORD *)(v4 + 32) = 0;
  *(_DWORD *)(v4 + 48) = 0;
  std::string::basic_string(v4 + 96);
  std::string::basic_string(v4 + 160);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  ClientVersionConfig::findClientVersionMd5(
    &v7->version_config,
    platform,
    (uint32_t *)(v4 + 32),
    (std::string *)(v4 + 96));
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  ClientVersionConfig::findClientSilenceVersionMd5(
    &v8->version_config,
    platform,
    (uint32_t *)(v4 + 48),
    (std::string *)(v4 + 160));
  proto::RegionInfo::set_client_data_version(region_info, *(_DWORD *)(v4 + 32));
  proto::RegionInfo::set_client_data_md5(region_info, (const std::string *)(v4 + 96));
  proto::RegionInfo::set_client_silence_data_version(region_info, *(_DWORD *)(v4 + 48));
  proto::RegionInfo::set_client_silence_data_md5(region_info, (const std::string *)(v4 + 160));
  v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  ClientVersionConfig::getClientVersionSuffix[abi:cxx11](&value, &v9->version_config);
  proto::RegionInfo::set_client_version_suffix(region_info, &value);
  std::string::~string(&value);
  v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  ClientVersionConfig::getClientSilenceVersionSuffix[abi:cxx11](&value, &v10->version_config);
  proto::RegionInfo::set_client_silence_version_suffix(region_info, &value);
  std::string::~string(&value);
  proto::RegionInfo::set_user_center_url(region_info, &region_config->user_center_url);
  proto::RegionInfo::set_account_bind_url(region_info, &region_config->account_bind_url);
  proto::RegionInfo::set_cdkey_url(region_info, &region_config->cdkey_url);
  proto::RegionInfo::set_privacy_policy_url(region_info, &region_config->privacy_policy_url);
  p_resource_url = &region_config->resource_url;
  std::string::basic_string(v4 + 224, &region_config->resource_url);
  if ( (unsigned __int8)std::string::empty(v4 + 224) == 1 )
    goto LABEL_9;
  v12 = std::string::back(v4 + 224);
  v13 = (_BYTE *)v12;
  v14 = *(_BYTE *)((v12 >> 3) + 0x7FFF8000);
  LOBYTE(p_resource_url) = v14 != 0;
  v15 = (v14 != 0) & (unsigned __int8)((char)(v12 & 7) >= v14);
  if ( (_BYTE)v15 )
    __asan_report_load1(v12, p_resource_url, v12, v15);
  if ( *v13 == 47 )
LABEL_9:
    v16 = 0;
  else
    v16 = 1;
  if ( v16 )
    std::string::operator+=(v4 + 224, "/");
  p_resource_url_bak = &region_config->resource_url_bak;
  std::string::basic_string(v4 + 288, &region_config->resource_url_bak);
  if ( (unsigned __int8)std::string::empty(v4 + 288) == 1 )
    goto LABEL_17;
  v18 = std::string::back(v4 + 288);
  v19 = (_BYTE *)v18;
  v20 = *(_BYTE *)((v18 >> 3) + 0x7FFF8000);
  LOBYTE(p_resource_url_bak) = v20 != 0;
  v21 = (v20 != 0) & (unsigned __int8)((char)(v18 & 7) >= v20);
  if ( (_BYTE)v21 )
    __asan_report_load1(v18, p_resource_url_bak, v18, v21);
  if ( *v19 == 47 )
LABEL_17:
    v22 = 0;
  else
    v22 = 1;
  if ( v22 )
    std::string::operator+=(v4 + 288, "/");
  v23 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  res_config_ptr = ClientVersionConfig::findResVersionConfig(&v23->version_config, platform);
  if ( res_config_ptr )
  {
    v24 = proto::RegionInfo::mutable_res_version_config(region_info);
    proto::ResVersionConfig::operator=(v24, res_config_ptr);
    v25 = proto::ResVersionConfig::branch[abi:cxx11](res_config_ptr);
    std::string::basic_string(v4 + 352, v25);
    if ( (unsigned __int8)std::string::empty(v4 + 352) != 1 )
    {
      std::operator+<char>(&value, (const std::string *)(v4 + 224), (const std::string *)(v4 + 352));
      proto::RegionInfo::set_resource_url(region_info, &value);
      std::string::~string(&value);
      std::operator+<char>(&value, (const std::string *)(v4 + 288), (const std::string *)(v4 + 352));
      proto::RegionInfo::set_resource_url_bak(region_info, &value);
      std::string::~string(&value);
    }
    std::string::~string((void *)(v4 + 352));
  }
  v26 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  next_res_config_ptr = ClientVersionConfig::findNextResVersionConfig(&v26->version_config, platform);
  if ( next_res_config_ptr )
  {
    res_version_config = proto::RegionInfo::mutable_next_res_version_config(region_info);
    proto::ResVersionConfig::operator=(res_version_config, next_res_config_ptr);
    v28 = proto::ResVersionConfig::branch[abi:cxx11](next_res_config_ptr);
    std::string::basic_string(v4 + 352, v28);
    if ( (unsigned __int8)std::string::empty(v4 + 352) != 1 )
    {
      std::operator+<char>(&value, (const std::string *)(v4 + 224), (const std::string *)(v4 + 352));
      proto::RegionInfo::set_next_resource_url(region_info, &value);
      std::string::~string(&value);
    }
    std::string::~string((void *)(v4 + 352));
  }
  v29 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  area_config_ptr = DbDeployConfigMgr::findDbAreaConfig(&v29->db_deploy_config_mgr, &region_config->area_type);
  if ( area_config_ptr )
  {
    proto::RegionInfo::set_game_biz(region_info, &area_config_ptr->business);
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&value,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/http_session.cpp",
      "fillRegionInfoProto",
      603);
    v30 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            (common::milog::MiLogStream *const)&value,
            (const char (*)[38])"area_config not found. area_type_str:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v30, &region_config->area_type);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&value);
  }
  std::string::~string((void *)(v4 + 288));
  std::string::~string((void *)(v4 + 224));
  std::string::~string((void *)(v4 + 160));
  std::string::~string((void *)(v4 + 96));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 64));
  if ( v38 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = -168430091;
  }
};

// Line 612: range 000000000C617A22-000000000C617D62
void __fastcall HttpSession::findMultiLangText(HttpSession *const this, uint32_t text_id, std::string *content)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-F1h] BYREF
  std::string key; // [rsp+30h] [rbp-F0h] BYREF
  char v14[208]; // [rsp+50h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 8 lang:614 48 4 11 text_id:611 64 16 14 config_ptr:619 96 32 12 lang_str:613";
  *(_QWORD *)(v3 + 16) = HttpSession::findMultiLangText;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 48) = text_id;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&key, "lang", &__a);
  common::minet::HttpRequest::getPara((std::string *)(v3 + 96), &this->request_, &key);
  std::string::~string(&key);
  std::allocator<char>::~allocator(&__a);
  *(_DWORD *)(v3 + 32) = 0;
  if ( common::tools::StringUtils::strToNum<unsigned int>((const std::string *)(v3 + 96), (unsigned int *)(v3 + 32), 1) )
    *(_DWORD *)(v3 + 32) = 1;
  ServiceBox::findService<DispatchService>();
  DispatchService::getConfig((DispatchService *const)(v3 + 64));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  if ( DbDeployConfigMgr::findDeployTextmap(
         &v6->db_deploy_config_mgr,
         *(_DWORD *)(v3 + 48),
         *(_DWORD *)(v3 + 32),
         content) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&key,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/http_session.cpp",
      "findMultiLangText",
      622);
    v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           (common::milog::MiLogStream *const)&key,
           (const char (*)[28])"findDeployTextmap text_id: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])" lang: ");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])" failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&key);
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
  std::string::~string((void *)(v3 + 96));
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

// Line 628: range 000000000C617D64-000000000C617F44
bool __cdecl HttpSession::isPsPlatform(HttpSession *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  bool result; // al
  std::allocator<char> __a; // [rsp+1Bh] [rbp-B5h] BYREF
  int ret; // [rsp+1Ch] [rbp-B4h]
  std::string key; // [rsp+20h] [rbp-B0h] BYREF
  std::string str; // [rsp+40h] [rbp-90h] BYREF
  char v9[112]; // [rsp+60h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 17 platform_type:629";
  *(_QWORD *)(v1 + 16) = HttpSession::isPsPlatform;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&key, "platform", &__a);
  common::minet::HttpRequest::getPara(&str, &this->request_, &key);
  ret = common::tools::StringUtils::strToNum<unsigned int>(&str, (unsigned int *)(v1 + 32), 1);
  std::string::~string(&str);
  std::string::~string(&key);
  std::allocator<char>::~allocator(&__a);
  if ( ret )
    result = 0;
  else
    result = *(_DWORD *)(v1 + 32) == 4 || *(_DWORD *)(v1 + 32) == 8;
  if ( v9 == (char *)v1 )
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

// Line 638: range 000000000C617F46-000000000C6180B0
std::string *__cdecl HttpSession::getPsnRegion[abi:cxx11](std::string *retstr, HttpSession *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-31h] BYREF
  std::string key; // [rsp+20h] [rbp-30h] BYREF

  if ( !HttpSession::isPsPlatform(this) )
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(retstr, uri, &__a);
    std::allocator<char>::~allocator(&__a);
  }
  else
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&key, "psn_region", &__a);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                            + 15) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 32LL);
    }
    common::minet::HttpRequest::getPara(retstr, &this->request_, &key);
    std::string::~string(&key);
    std::allocator<char>::~allocator(&__a);
  }
  return retstr;
};

// Line 646: range 000000000C6180B2-000000000C6183D6
uint32_t __cdecl HttpSession::getChannelId(HttpSession *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // r14
  common::milog::MiLogStream *v5; // rax
  uint32_t result; // eax
  std::allocator<char> __a; // [rsp+1Bh] [rbp-D5h] BYREF
  int ret; // [rsp+1Ch] [rbp-D4h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-D0h] BYREF
  std::string key; // [rsp+40h] [rbp-B0h] BYREF
  std::string str; // [rsp+60h] [rbp-90h] BYREF
  char v12[112]; // [rsp+80h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 14 channel_id:647";
  *(_QWORD *)(v1 + 16) = HttpSession::getChannelId;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&key, "channel_id", &__a);
  common::minet::HttpRequest::getPara(&str, &this->request_, &key);
  ret = common::tools::StringUtils::strToNum<unsigned int>(&str, (unsigned int *)(v1 + 32), 1);
  std::string::~string(&str);
  std::string::~string(&key);
  std::allocator<char>::~allocator(&__a);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/http_session.cpp",
      "getChannelId",
      651);
    v4 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v9, (const char (*)[13])"channel_id: ");
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&key, "channel_id", &__a);
    common::minet::HttpRequest::getPara(&str, &this->request_, &key);
    v5 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, &str);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v5, (const char (*)[16])" strToNum fails");
    std::string::~string(&str);
    std::string::~string(&key);
    std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = std::numeric_limits<unsigned int>::max();
  }
  else
  {
    result = *(_DWORD *)(v1 + 32);
  }
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

// Line 660: range 000000000C6183D8-000000000C6186FC
uint32_t __cdecl HttpSession::getSubChannelId(HttpSession *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // r14
  common::milog::MiLogStream *v5; // rax
  uint32_t result; // eax
  std::allocator<char> __a; // [rsp+1Bh] [rbp-D5h] BYREF
  int ret; // [rsp+1Ch] [rbp-D4h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-D0h] BYREF
  std::string key; // [rsp+40h] [rbp-B0h] BYREF
  std::string str; // [rsp+60h] [rbp-90h] BYREF
  char v12[112]; // [rsp+80h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 18 sub_channel_id:661";
  *(_QWORD *)(v1 + 16) = HttpSession::getSubChannelId;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&key, "sub_channel_id", &__a);
  common::minet::HttpRequest::getPara(&str, &this->request_, &key);
  ret = common::tools::StringUtils::strToNum<unsigned int>(&str, (unsigned int *)(v1 + 32), 1);
  std::string::~string(&str);
  std::string::~string(&key);
  std::allocator<char>::~allocator(&__a);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/http_session.cpp",
      "getSubChannelId",
      665);
    v4 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v9, (const char (*)[17])"sub_channel_id: ");
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&key, "sub_channel_id", &__a);
    common::minet::HttpRequest::getPara(&str, &this->request_, &key);
    v5 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, &str);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v5, (const char (*)[16])" strToNum fails");
    std::string::~string(&str);
    std::string::~string(&key);
    std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = std::numeric_limits<unsigned int>::max();
  }
  else
  {
    result = *(_DWORD *)(v1 + 32);
  }
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

// Line 675: range 000000000C61871C-000000000C61892F
bool __cdecl HttpSession::canPsnRegionLogin(
        HttpSession *const this,
        const std::string *psn_region,
        const data::DbRegionConfig *region_config)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  bool v6; // r14
  __gnu_cxx::__normal_iterator<char*,std::string > v7; // r15
  __gnu_cxx::__normal_iterator<char*,std::string > v8; // r14
  __gnu_cxx::__normal_iterator<char*,std::string > v9; // rax
  HttpSession::canPsnRegionLogin::<lambda(unsigned char)> v10; // cl
  bool result; // al
  char v13[144]; // [rsp+20h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 32 20 upper_psn_region:684";
  *(_QWORD *)(v3 + 16) = HttpSession::canPsnRegionLogin;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450888) = -202116109;
  if ( (unsigned __int8)std::string::empty(psn_region) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/http_session.cpp",
      "canPsnRegionLogin",
      679);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
      (common::milog::MiLogStream *const)(v3 + 32),
      (const char (*)[20])"psn_region is empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 32));
    v6 = 0;
  }
  else
  {
    std::string::basic_string(v3 + 32, psn_region);
    v7._M_current = (char *)std::string::begin(v3 + 32);
    v8._M_current = (char *)std::string::end(v3 + 32);
    v9._M_current = (char *)std::string::begin(v3 + 32);
    std::transform<__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>,HttpSession::canPsnRegionLogin(std::string const&,data::DbRegionConfig const&)::{lambda(unsigned char)#1}>(
      v9,
      v8,
      v7,
      v10);
    v6 = common::tools::MiscUtils::isContains<std::set<std::string> const,std::string>(
           &region_config->psn_region_set,
           (const std::string *)(v3 + 32));
    std::string::~string((void *)(v3 + 32));
  }
  result = v6;
  if ( v13 == (char *)v3 )
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

// Line 686: range 000000000C6186FE-000000000C61871B
unsigned __int8 __cdecl HttpSession::canPsnRegionLogin(std::string const&,data::DbRegionConfig const&)::{lambda(unsigned char)#1}::operator()(
        const HttpSession::canPsnRegionLogin::<lambda(unsigned char)> *const __closure,
        unsigned __int8 c)
{
  return toupper(c);
};

// Line 693: range 000000000C618930-000000000C6189B5
void __cdecl HttpSession::addRegionSimpleInfoOnRegionListRsp(
        HttpSession *const this,
        proto::QueryRegionListHttpRsp *region_list_rsp,
        const data::DbRegionConfig *region_config)
{
  proto::RegionSimpleInfo *region_info; // [rsp+28h] [rbp-8h]

  region_info = proto::QueryRegionListHttpRsp::add_region_list(region_list_rsp);
  proto::RegionSimpleInfo::set_name(region_info, &region_config->name);
  proto::RegionSimpleInfo::set_title(region_info, &region_config->title);
  proto::RegionSimpleInfo::set_type(region_info, &region_config->region_type);
  proto::RegionSimpleInfo::set_dispatch_url(region_info, &region_config->dispatch_url);
};

// Line 702: range 000000000C6189B6-000000000C618EA1
int32_t __cdecl HttpSession::querySecurityFile(HttpSession *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  char *v4; // rsi
  int32_t v5; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  char v7; // cl
  __int64 v8; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  const char *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-121h] BYREF
  unsigned __int64 val; // [rsp+20h] [rbp-120h] BYREF
  const DbDeployConfigMgr *db_deploy_config_mgr; // [rsp+28h] [rbp-118h]
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-110h] BYREF
  char v20[240]; // [rsp+50h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 16 14 config_ptr:704 64 32 12 file_key:718 128 32 13 file_data:719";
  *(_QWORD *)(v1 + 16) = HttpSession::querySecurityFile;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862723] = -218959118;
  v3[536862725] = -202116109;
  ServiceBox::findService<DispatchService>();
  DispatchService::getConfig((DispatchService *const)(v1 + 32));
  v4 = (char *)(v1 + 32);
  if ( std::operator==<Config>(0LL, (const std::shared_ptr<Config> *)(v1 + 32)) )
  {
    v5 = 1;
  }
  else
  {
    db_deploy_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32))->db_deploy_config_mgr;
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    v7 = *(_BYTE *)(((unsigned __int64)&v6->is_forbid_first_dispatch >> 3) + 0x7FFF8000);
    LOBYTE(v4) = v7 != 0;
    v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)v6 + 124) & 7) >= v7);
    if ( (_BYTE)v8 )
      __asan_report_load1(&v6->is_forbid_first_dispatch, v4, v6, v8);
    if ( v6->is_forbid_first_dispatch )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/network/http_session.cpp",
        "querySecurityFile",
        713);
      common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
        &v19,
        (const char (*)[50])"query_security_file is forbidden in this dispatch");
      common::milog::MiLogStream::~MiLogStream(&v19);
      v5 = 8;
    }
    else
    {
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v19, "file_key", &__a);
      common::minet::HttpRequest::getPara((std::string *)(v1 + 64), &this->request_, (const std::string *)&v19);
      std::string::~string(&v19);
      std::allocator<char>::~allocator(&__a);
      std::string::basic_string(v1 + 128);
      if ( !DbDeployConfigMgr::findSecurityFile(
              db_deploy_config_mgr,
              (const std::string *)(v1 + 64),
              (std::string *)(v1 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/network/http_session.cpp",
          "querySecurityFile",
          722);
        v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v19, (const char (*)[11])" file key:");
        v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, (const std::string *)(v1 + 64));
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" not exist.");
        common::milog::MiLogStream::~MiLogStream(&v19);
        v5 = 5;
      }
      else
      {
        v11 = (const char *)std::string::c_str(v1 + 128);
        common::minet::HttpResponse::init(&this->response_, 0xC8u, v11);
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/network/http_session.cpp",
          "querySecurityFile",
          727);
        v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v19, (const char (*)[11])" file key:");
        v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)(v1 + 64));
        v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])", length: ");
        val = std::string::length(v1 + 128);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v14, &val);
        common::milog::MiLogStream::~MiLogStream(&v19);
        v5 = 0;
      }
      std::string::~string((void *)(v1 + 128));
      std::string::~string((void *)(v1 + 64));
    }
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 32));
  result = v5;
  if ( v20 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
