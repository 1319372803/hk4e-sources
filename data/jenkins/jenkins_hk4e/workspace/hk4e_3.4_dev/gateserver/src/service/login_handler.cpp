// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gateserver/src/service/login_handler.cpp

// Line 31: range 000000000C7627DC-000000000C7630AD
int32_t __cdecl LoginHandler::addPacketFuncToMap(
        LoginHandler *const this,
        PacketFuncMap *push_packet_func_map,
        PacketFuncMap *push_fail_packet_func_map,
        PacketFuncMap *process_packet_func_map)
{
  LoginHandler **v4; // r8
  const std::_Placeholder<1> *v5; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v7; // rax
  LoginHandler **v8; // r8
  const std::_Placeholder<1> *v9; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v10; // rax
  LoginHandler **v11; // r8
  const std::_Placeholder<1> *v12; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v13; // rax
  LoginHandler **v14; // r8
  const std::_Placeholder<1> *v15; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v16; // rax
  LoginHandler **v17; // r8
  const std::_Placeholder<1> *v18; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v19; // rax
  LoginHandler **v20; // r8
  const std::_Placeholder<1> *v21; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v22; // rax
  __m128i v23; // [rsp+0h] [rbp-100h] BYREF
  __m128i v24; // [rsp+10h] [rbp-F0h] BYREF
  __m128i v25; // [rsp+20h] [rbp-E0h] BYREF
  __m128i v26; // [rsp+30h] [rbp-D0h] BYREF
  PacketFuncMap *process_packet_func_mapa; // [rsp+40h] [rbp-C0h]
  PacketFuncMap *push_fail_packet_func_mapa; // [rsp+48h] [rbp-B8h]
  PacketFuncMap *push_packet_func_mapa; // [rsp+50h] [rbp-B0h]
  LoginHandler *thisa; // [rsp+58h] [rbp-A8h]
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+6Ch] [rbp-94h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v32; // [rsp+70h] [rbp-90h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+78h] [rbp-88h] BYREF
  int (*__f[2])(LoginHandler *, std::shared_ptr<common::minet::Packet>); // [rsp+80h] [rbp-80h] BYREF
  std::_Bind_helper<false,int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>),LoginHandler*,const std::_Placeholder<1>&>::type v35; // [rsp+90h] [rbp-70h] BYREF
  common::milog::MiLogStream v36; // [rsp+B0h] [rbp-50h] BYREF

  thisa = this;
  push_packet_func_mapa = push_packet_func_map;
  push_fail_packet_func_mapa = push_fail_packet_func_map;
  process_packet_func_mapa = process_packet_func_map;
  __x = 172;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v32._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
  if ( std::operator!=(&v32, &__y) )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/login_handler.cpp",
      "addPacketFuncToMap",
      32);
    common::milog::MiLogStream::operator()(&v36, "can not add repeat process func for cmd_id=%u", 172LL);
    common::milog::MiLogStream::~MiLogStream(&v36);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
    v23.m128i_i64[0] = (__int64)LoginHandler::onGetPlayerTokenReq;
    v23.m128i_i64[1] = 0LL;
    *(__m128i *)__f = _mm_load_si128(&v23);
    std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>),LoginHandler*,std::_Placeholder<1> const&>(
      &v35,
      __f,
      (LoginHandler **)&__y,
      (const std::_Placeholder<1> *)&std::placeholders::_1,
      v4,
      v5);
    __x = 172;
    v7 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_mapa,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>) ()(LoginHandler*,std::_Placeholder<1>)>>(
      v7,
      &v35);
    __x = 198;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_mapa,
                    &__x)._M_node;
    v32._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
    if ( std::operator!=(&v32, &__y) )
    {
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/service/login_handler.cpp",
        "addPacketFuncToMap",
        33);
      common::milog::MiLogStream::operator()(&v36, "can not add repeat process func for cmd_id=%u", 198LL);
      common::milog::MiLogStream::~MiLogStream(&v36);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
      v24.m128i_i64[0] = (__int64)LoginHandler::onGetPlayerTokenRsp;
      v24.m128i_i64[1] = 0LL;
      *(__m128i *)__f = _mm_load_si128(&v24);
      std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>),LoginHandler*,std::_Placeholder<1> const&>(
        &v35,
        __f,
        (LoginHandler **)&__y,
        (const std::_Placeholder<1> *)&std::placeholders::_1,
        v8,
        v9);
      __x = 198;
      v10 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
              process_packet_func_mapa,
              &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>) ()(LoginHandler*,std::_Placeholder<1>)>>(
        v10,
        &v35);
      __x = 112;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_mapa,
                      &__x)._M_node;
      v32._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
      if ( std::operator!=(&v32, &__y) )
      {
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/service/login_handler.cpp",
          "addPacketFuncToMap",
          34);
        common::milog::MiLogStream::operator()(&v36, "can not add repeat process func for cmd_id=%u", 112LL);
        common::milog::MiLogStream::~MiLogStream(&v36);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
        v25.m128i_i64[0] = (__int64)LoginHandler::onPlayerLoginReq;
        v25.m128i_i64[1] = 0LL;
        *(__m128i *)__f = _mm_load_si128(&v25);
        std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>),LoginHandler*,std::_Placeholder<1> const&>(
          &v35,
          __f,
          (LoginHandler **)&__y,
          (const std::_Placeholder<1> *)&std::placeholders::_1,
          v11,
          v12);
        __x = 112;
        v13 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                process_packet_func_mapa,
                &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>) ()(LoginHandler*,std::_Placeholder<1>)>>(
          v13,
          &v35);
        __x = 135;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_mapa,
                        &__x)._M_node;
        v32._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
        if ( std::operator!=(&v32, &__y) )
        {
          common::milog::MiLogStream::create(
            &v36,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/service/login_handler.cpp",
            "addPacketFuncToMap",
            35);
          common::milog::MiLogStream::operator()(&v36, "can not add repeat process func for cmd_id=%u", 135LL);
          common::milog::MiLogStream::~MiLogStream(&v36);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
          v26.m128i_i64[0] = (__int64)LoginHandler::onPlayerLoginRsp;
          v26.m128i_i64[1] = 0LL;
          *(__m128i *)__f = _mm_load_si128(&v26);
          std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>),LoginHandler*,std::_Placeholder<1> const&>(
            &v35,
            __f,
            (LoginHandler **)&__y,
            (const std::_Placeholder<1> *)&std::placeholders::_1,
            v14,
            v15);
          __x = 135;
          v16 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                  process_packet_func_mapa,
                  &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>) ()(LoginHandler*,std::_Placeholder<1>)>>(
            v16,
            &v35);
          __x = 10173;
          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                          process_packet_func_mapa,
                          &__x)._M_node;
          v32._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
          if ( std::operator!=(&v32, &__y) )
          {
            common::milog::MiLogStream::create(
              &v36,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/service/login_handler.cpp",
              "addPacketFuncToMap",
              36);
            common::milog::MiLogStream::operator()(&v36, "can not add repeat process func for cmd_id=%u", 10173LL);
            common::milog::MiLogStream::~MiLogStream(&v36);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
            __f[0] = (int (*)(LoginHandler *, std::shared_ptr<common::minet::Packet>))LoginHandler::onDisconnectClientNotify;
            __f[1] = 0LL;
            std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>),LoginHandler*,std::_Placeholder<1> const&>(
              &v35,
              __f,
              (LoginHandler **)&__y,
              (const std::_Placeholder<1> *)&std::placeholders::_1,
              v17,
              v18);
            __x = 10173;
            v19 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                    process_packet_func_mapa,
                    &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>) ()(LoginHandler*,std::_Placeholder<1>)>>(
              v19,
              &v35);
            __x = 10021;
            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                            process_packet_func_mapa,
                            &__x)._M_node;
            v32._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
            if ( std::operator!=(&v32, &__y) )
            {
              common::milog::MiLogStream::create(
                &v36,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/service/login_handler.cpp",
                "addPacketFuncToMap",
                37);
              common::milog::MiLogStream::operator()(&v36, "can not add repeat process func for cmd_id=%u", 10021LL);
              common::milog::MiLogStream::~MiLogStream(&v36);
              return -1;
            }
            else
            {
              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
              __f[0] = (int (*)(LoginHandler *, std::shared_ptr<common::minet::Packet>))LoginHandler::onPlayerTransferNotify;
              __f[1] = 0LL;
              std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>),LoginHandler*,std::_Placeholder<1> const&>(
                &v35,
                __f,
                (LoginHandler **)&__y,
                (const std::_Placeholder<1> *)&std::placeholders::_1,
                v20,
                v21);
              __x = 10021;
              v22 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                      process_packet_func_mapa,
                      &__x);
              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>) ()(LoginHandler*,std::_Placeholder<1>)>>(
                v22,
                &v35);
              return 0;
            }
          }
        }
      }
    }
  }
};

// Line 44: range 000000000C7631FC-000000000C763A32
int32_t __cdecl LoginHandler::onGetPlayerTokenReq(LoginHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v5; // rax
  GateserverApp *v6; // rax
  uint32_t AppId; // eax
  TracingMgr *v8; // r14
  SpanContextGuardMgr *v9; // rax
  const jaegertracing::SpanContext *v10; // rax
  common::minet::Packet *v11; // r14
  GateserverService *v12; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t v14; // eax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int32_t v17; // r14d
  common::minet::Packet *v18; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // r14
  unsigned __int64 v22; // rax
  unsigned int (__fastcall *v23)(std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, opentracing::v3::string_view *); // r15
  bool v24; // r14
  int32_t result; // eax
  opentracing::v3::string_view operation_name; // [rsp+20h] [rbp-2D0h] BYREF
  std::function<void(std::shared_ptr<jaegertracing::Span>&)> p_fini_func; // [rsp+30h] [rbp-2C0h] BYREF
  opentracing::v3::Value value; // [rsp+50h] [rbp-2A0h] BYREF
  char v29[624]; // [rsp+80h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 4 6 ret:45 48 4 13 session_id:63 64 16 14 session_ptr:64 96 16 17 rsp_packet_ptr:80 128 32 "
                        "15 span_ctx_str:57 192 56 13 span_proxy:46 288 216 6 rsp:78";
  *(_QWORD *)(v2 + 16) = LoginHandler::onGetPlayerTokenReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -234881024;
  v4[536862728] = -218959118;
  v4[536862735] = -218103808;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  *(_DWORD *)(v2 + 32) = 0;
  std::function<void ()(std::shared_ptr<jaegertracing::Span> &)>::function<LoginHandler::onGetPlayerTokenReq(std::shared_ptr<common::minet::Packet>)::{lambda(std::shared_ptr<jaegertracing::Span> &)#1},void,void>(
    &p_fini_func,
    (LoginHandler::onGetPlayerTokenReq::<lambda(SpanPtr&)>)(v2 + 32));
  opentracing::v3::string_view::string_view(&operation_name, "onGetPlayerTokenReq");
  v5 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  SpanProxy::SpanProxy((SpanProxy *const)(v2 + 192), v5, operation_name, 0LL, 6u, &p_fini_func);
  std::function<void ()(std::shared_ptr<jaegertracing::Span> &)>::~function(&p_fini_func);
  v6 = Singleton<GateserverApp>::instance();
  AppId = AppBase::getAppId((AppBase *const)v6);
  common::tools::AppIdUtils::getAppIdStr[abi:cxx11]((std::string *)&p_fini_func, AppId);
  opentracing::v3::Value::Value(&value, (std::string *)&p_fini_func);
  opentracing::v3::string_view::string_view(&operation_name, "app_id");
  SpanProxy::SetTag((SpanProxy *const)(v2 + 192), operation_name, &value);
  opentracing::v3::Value::~Value(&value);
  std::string::~string(&p_fini_func);
  std::string::basic_string(v2 + 128);
  v8 = std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::tracing_mgr_ptr);
  v9 = SpanContextGuardMgr::instance();
  v10 = SpanContextGuardMgr::back(v9);
  TracingMgr::inject(v8, v10, (std::string *)(v2 + 128));
  v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  std::string::basic_string(&p_fini_func, v2 + 128);
  common::minet::Packet::setSpanContextStr(v11, (std::string *)&p_fini_func);
  std::string::~string(&p_fini_func);
  v12 = ServiceBox::findService<GateserverService>();
  ExternalMonitorReportMgr::addGetTokenValue(&v12->external_monitor_report_mgr);
  v13 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  *(_DWORD *)(v2 + 48) = common::minet::Packet::getUserSessionId(v13);
  v14 = (unsigned int)ServiceBox::findService<GateserverService>();
  GateserverService::findPlayerSession((GateserverService *const)(v2 + 64), v14);
  if ( std::operator==<PlayerSession>(0LL, (const std::shared_ptr<PlayerSession> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&p_fini_func,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/login_handler.cpp",
      "onGetPlayerTokenReq",
      67);
    v15 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            (common::milog::MiLogStream *const)&p_fini_func,
            (const char (*)[20])"findPlayerSession: ");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v16, (const char (*)[8])" failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_fini_func);
    *(_DWORD *)(v2 + 32) = -1;
    v17 = *(_DWORD *)(v2 + 32);
  }
  else
  {
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      (std::shared_ptr<common::minet::Packet> *const)&operation_name,
      p_packet_ptr);
    *(_DWORD *)(v2 + 32) = LoginHandler::getPlayerToken(
                             this,
                             (PlayerSessionPtr *)(v2 + 64),
                             (common::minet::PacketPtr *)&operation_name,
                             (SpanProxy *)(v2 + 192));
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&operation_name);
    if ( *(_DWORD *)(v2 + 32) && *(_DWORD *)(v2 + 32) != 38 )
    {
      proto::GetPlayerTokenRsp::GetPlayerTokenRsp((proto::GetPlayerTokenRsp *const)(v2 + 288));
      proto::GetPlayerTokenRsp::set_retcode((proto::GetPlayerTokenRsp *const)(v2 + 288), *(_DWORD *)(v2 + 32));
      common::minet::PacketUtils::createPacket<proto::GetPlayerTokenRsp>((const proto::GetPlayerTokenRsp *)(v2 + 96));
      if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 96)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&p_fini_func,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/service/login_handler.cpp",
          "onGetPlayerTokenReq",
          83);
        common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
          (common::milog::MiLogStream *const)&p_fini_func,
          (const char (*)[21])"create packet failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_fini_func);
        v17 = *(_DWORD *)(v2 + 32);
      }
      else
      {
        v18 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        v19 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        common::minet::Packet::copyHead(v18, v19);
        v20 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v21 = v20;
        if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v20);
        v22 = (unsigned __int64)(v21->_vptr_KcpSession + 5);
        if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v21->_vptr_KcpSession + 5);
        v23 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, opentracing::v3::string_view *))v22;
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          (std::shared_ptr<common::minet::Packet> *const)&operation_name,
          (const std::shared_ptr<common::minet::Packet> *)(v2 + 96));
        v24 = v23(v21, &operation_name) != 0;
        std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&operation_name);
        if ( v24 )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&p_fini_func,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/service/login_handler.cpp",
            "onGetPlayerTokenReq",
            91);
          common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            (common::milog::MiLogStream *const)&p_fini_func,
            (const char (*)[31])"session_ptr->sendPacket failed");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_fini_func);
        }
        v17 = *(_DWORD *)(v2 + 32);
      }
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 96));
      proto::GetPlayerTokenRsp::~GetPlayerTokenRsp((proto::GetPlayerTokenRsp *const)(v2 + 288));
    }
    else
    {
      v17 = *(_DWORD *)(v2 + 32);
    }
  }
  std::shared_ptr<PlayerSession>::~shared_ptr((std::shared_ptr<PlayerSession> *const)(v2 + 64));
  std::string::~string((void *)(v2 + 128));
  SpanProxy::~SpanProxy((SpanProxy *const)(v2 + 192));
  result = v17;
  if ( v29 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
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
  return result;
};

// Line 47: range 000000000C7630AE-000000000C7631FA
void __cdecl LoginHandler::onGetPlayerTokenReq(std::shared_ptr<common::minet::Packet>)::{lambda(std::shared_ptr&<jaegertracing::Span>)#1}::operator()(
        const LoginHandler::onGetPlayerTokenReq::<lambda(SpanPtr&)> *const __closure,
        SpanPtr *span_ptr)
{
  int32_t *ret; // rdx
  int32_t *v3; // rdx
  TracingMgr *v4; // rdi
  int *v5; // rdx
  bool is_error; // [rsp+1Fh] [rbp-1h]

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
    v3 = __closure->__ret;
    if ( *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) != 0
      && (char)(((__int64)__closure->__ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(__closure->__ret);
    }
    is_error = *v3 != 38;
    v4 = std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::tracing_mgr_ptr);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    {
      v4 = (TracingMgr *)__closure;
      __asan_report_load8(__closure);
    }
    v5 = __closure->__ret;
    if ( *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) != 0
      && (char)(((__int64)__closure->__ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) )
    {
      v4 = (TracingMgr *)__closure->__ret;
      __asan_report_load4(__closure->__ret);
    }
    TracingMgr::finishSpan(v4, span_ptr, *v5, is_error);
  }
};

// Line 98: range 000000000C763C4A-000000000C7651DE
int32_t __cdecl LoginHandler::getPlayerToken(
        LoginHandler *const this,
        PlayerSessionPtr *session_ptr,
        common::minet::PacketPtr *p_packet_ptr,
        SpanProxy *root_span_proxy)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v7; // rax
  int32_t v9; // r13d
  common::milog::MiLogStream *v10; // r13
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r13
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r13
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r13
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r13
  const std::string *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r13
  const std::string *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r13
  unsigned int v26; // eax
  unsigned int v27; // eax
  const std::string *v28; // rax
  int v29; // eax
  common::milog::MiLogStream *v31; // r13
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r13
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // r13
  const std::string *v36; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  bool isDevSdkAccount; // r13
  char v40; // al
  common::milog::MiLogStream *v41; // r13
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // r13
  const std::string *v44; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // r13
  uint32_t v46; // r8d
  common::milog::MiLogStream *v47; // r13
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // r13
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  const std::string *v51; // rax
  const std::string *v52; // rax
  common::milog::MiLogStream *v54; // r13
  const std::string *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // r13
  const std::string *v58; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v59; // rax
  common::milog::MiLogStream *v60; // r13
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // r13
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // r13
  const std::string *v65; // rax
  common::milog::MiLogStream *v66; // rax
  PlayerSession *v67; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v68; // rax
  uint32_t v69; // eax
  uint32_t v71; // eax
  uint32_t v72; // eax
  AccountSdkMgr *p_account_sdk_mgr; // r13
  const std::string *v74; // r13
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v75; // rax
  const std::string *v76; // rax
  common::milog::MiLogStream *v77; // r13
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v78; // rax
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // r13
  const std::string *v81; // rax
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // r13
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v84; // rax
  const std::string *v85; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v86; // rax
  uint32_t v87; // eax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v88; // rax
  const std::string *v89; // rax
  common::minet::Packet *v90; // r13
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v91; // rax
  common::milog::MiLogStream *v92; // r13
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v93; // rax
  common::milog::MiLogStream *v94; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v95; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v96; // r13
  unsigned __int64 v97; // rax
  void (__fastcall *v98)(std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, opentracing::v3::string_view *); // r15
  int32_t result; // eax
  unsigned int val; // [rsp+3Ch] [rbp-3B4h] BYREF
  unsigned int v103; // [rsp+40h] [rbp-3B0h] BYREF
  unsigned int v104; // [rsp+44h] [rbp-3ACh] BYREF
  unsigned int v105; // [rsp+48h] [rbp-3A8h] BYREF
  unsigned int Uid; // [rsp+4Ch] [rbp-3A4h] BYREF
  uint32_t last_token_req_time; // [rsp+50h] [rbp-3A0h]
  uint32_t now; // [rsp+54h] [rbp-39Ch]
  const proto::GetPlayerTokenReq *req; // [rsp+58h] [rbp-398h]
  opentracing::v3::string_view operation_name; // [rsp+60h] [rbp-390h] BYREF
  LoginHandler::getPlayerToken::<lambda(SdkRetcode, const AccountSdkMgr::SdkRspParam&)> p___f; // [rsp+70h] [rbp-380h] BYREF
  std::function<void(std::shared_ptr<jaegertracing::Span>&)> p_fini_func; // [rsp+90h] [rbp-360h] BYREF
  opentracing::v3::Value value; // [rsp+B0h] [rbp-340h] BYREF
  char v114[784]; // [rsp+E0h] [rbp-310h] BYREF

  v4 = (unsigned __int64)v114;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(736LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 48 4 6 ret:99 64 16 11 req_ptr:113 96 16 18 rsp_packet_ptr:202 128 32 13 client_ip:170 192 56 "
                        "14 span_proxy:100 288 120 9 param:185 448 216 7 rsp:198";
  *(_QWORD *)(v4 + 16) = LoginHandler::getPlayerToken;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862725] = -218959118;
  v6[536862727] = -234881024;
  v6[536862728] = -218959118;
  v6[536862732] = -234881024;
  v6[536862733] = -218959118;
  v6[536862740] = -218103808;
  v6[536862741] = -202116109;
  v6[536862742] = -202116109;
  *(_DWORD *)(v4 + 48) = 0;
  std::function<void ()(std::shared_ptr<jaegertracing::Span> &)>::function<LoginHandler::getPlayerToken(std::shared_ptr&<PlayerSession>,std::shared_ptr<common::minet::Packet>,SpanProxy &)::{lambda(std::shared_ptr<jaegertracing::Span> &)#1},void,void>(
    &p_fini_func,
    (LoginHandler::getPlayerToken::<lambda(SpanPtr&)>)(v4 + 48));
  opentracing::v3::string_view::string_view(&operation_name, "getPlayerToken");
  v7 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  SpanProxy::SpanProxy((SpanProxy *const)(v4 + 192), v7, operation_name, 0LL, 0, &p_fini_func);
  std::function<void ()(std::shared_ptr<jaegertracing::Span> &)>::~function(&p_fini_func);
  if ( std::operator==<PlayerSession>(0LL, session_ptr) || std::operator==<common::minet::Packet>(0LL, p_packet_ptr) )
  {
    *(_DWORD *)(v4 + 48) = -1;
    v9 = *(_DWORD *)(v4 + 48);
  }
  else
  {
    std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    common::minet::Packet::getConstProto<proto::GetPlayerTokenReq>((common::minet::Packet *const)(v4 + 64));
    if ( std::operator==<proto::GetPlayerTokenReq const>(
           (const std::shared_ptr<const proto::GetPlayerTokenReq> *)(v4 + 64),
           0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&p_fini_func,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/login_handler.cpp",
        "getPlayerToken",
        113);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)&p_fini_func,
        "get GetPlayerTokenReq failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_fini_func);
      v9 = -1;
    }
    else
    {
      req = std::__shared_ptr_access<proto::GetPlayerTokenReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&p_fini_func,
        &common::milog::MiLogDefault::default_log_obj_,
        5u,
        "./src/service/login_handler.cpp",
        "getPlayerToken",
        114);
      v10 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              (common::milog::MiLogStream *const)&p_fini_func,
              (const char (*)[33])"onGetPlayerTokenReq session_id: ");
      v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      val = common::minet::Packet::getUserSessionId(v11);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v12, (const char (*)[14])" channel_id: ");
      v103 = proto::GetPlayerTokenReq::channel_id(req);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &v103);
      v15 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v14, (const char (*)[17])" sub_channel_id:");
      v104 = proto::GetPlayerTokenReq::sub_channel_id(req);
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &v104);
      v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v16, (const char (*)[16])" account_type: ");
      v105 = proto::GetPlayerTokenReq::account_type(req);
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &v105);
      v19 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v18, (const char (*)[15])" account_uid: ");
      v20 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
      v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, v20);
      v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v21, (const char (*)[16])" account_token:");
      v23 = proto::GetPlayerTokenReq::account_token[abi:cxx11](req);
      v24 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, v23);
      v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v24, (const char (*)[16])" platform_type:");
      Uid = proto::GetPlayerTokenReq::platform_type(req);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &Uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_fini_func);
      v26 = proto::GetPlayerTokenReq::uid(req);
      opentracing::v3::Value::Value<unsigned int,(void *)0>(&value, v26);
      opentracing::v3::string_view::string_view(&operation_name, off_1A0E5B60);
      SpanProxy::SetTag(root_span_proxy, operation_name, &value);
      opentracing::v3::Value::~Value(&value);
      v27 = proto::GetPlayerTokenReq::account_type(req);
      opentracing::v3::Value::Value<unsigned int,(void *)0>(&value, v27);
      opentracing::v3::string_view::string_view(&operation_name, "account_type");
      SpanProxy::SetTag(root_span_proxy, operation_name, &value);
      opentracing::v3::Value::~Value(&value);
      v28 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
      opentracing::v3::Value::Value(&value, v28);
      opentracing::v3::string_view::string_view(&operation_name, "account_uid");
      SpanProxy::SetTag(root_span_proxy, operation_name, &value);
      opentracing::v3::Value::~Value(&value);
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        (std::shared_ptr<common::minet::Packet> *const)&operation_name,
        p_packet_ptr);
      LOBYTE(v25) = !LoginHandler::isAccountValidLogin(this, (common::minet::PacketPtr *)&operation_name);
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&operation_name);
      if ( (_BYTE)v25 )
      {
        *(_DWORD *)(v4 + 48) = -1;
        v9 = *(_DWORD *)(v4 + 48);
      }
      else if ( proto::GetPlayerTokenReq::platform_type(req) > 0xF
             || (v29 = proto::GetPlayerTokenReq::platform_type(req), !proto::PlatformType_IsValid(v29)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&p_fini_func,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/service/login_handler.cpp",
          "getPlayerToken",
          131);
        v31 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                (common::milog::MiLogStream *const)&p_fini_func,
                (const char (*)[18])"invalid platform:");
        v105 = proto::GetPlayerTokenReq::platform_type(req);
        v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &v105);
        v33 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v32, (const char (*)[15])" account_type:");
        Uid = proto::GetPlayerTokenReq::account_type(req);
        v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &Uid);
        v35 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v34, (const char (*)[14])" account_uid:");
        v36 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v35, v36);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_fini_func);
        *(_DWORD *)(v4 + 48) = -1;
        v9 = *(_DWORD *)(v4 + 48);
      }
      else
      {
        v37 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr);
        if ( PlayerSession::getUid(v37) )
        {
          v74 = proto::GetPlayerTokenReq::account_token[abi:cxx11](req);
          v75 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr);
          v76 = PlayerSession::getAccountToken[abi:cxx11](v75);
          if ( std::operator!=<char>(v76, v74) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&p_fini_func,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/service/login_handler.cpp",
              "getPlayerToken",
              195);
            v77 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                    (common::milog::MiLogStream *const)&p_fini_func,
                    (const char (*)[6])"uid: ");
            v78 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr);
            Uid = PlayerSession::getUid(v78);
            v79 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v77, &Uid);
            v80 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v79,
                    (const char (*)[16])"token not fit: ");
            v81 = proto::GetPlayerTokenReq::account_token[abi:cxx11](req);
            v82 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v80, v81);
            v83 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v82, (const char (*)[2])" ");
            v84 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr);
            v85 = PlayerSession::getAccountToken[abi:cxx11](v84);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v83, v85);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_fini_func);
            *(_DWORD *)(v4 + 48) = -1;
            v9 = *(_DWORD *)(v4 + 48);
          }
          else
          {
            proto::GetPlayerTokenRsp::GetPlayerTokenRsp((proto::GetPlayerTokenRsp *const)(v4 + 448));
            proto::GetPlayerTokenRsp::set_retcode((proto::GetPlayerTokenRsp *const)(v4 + 448), 0);
            v86 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr);
            v87 = PlayerSession::getUid(v86);
            proto::GetPlayerTokenRsp::set_uid((proto::GetPlayerTokenRsp *const)(v4 + 448), v87);
            v88 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr);
            v89 = PlayerSession::getAccountToken[abi:cxx11](v88);
            proto::GetPlayerTokenRsp::set_token((proto::GetPlayerTokenRsp *const)(v4 + 448), v89);
            common::minet::PacketUtils::createPacket<proto::GetPlayerTokenRsp>((const proto::GetPlayerTokenRsp *)(v4 + 96));
            if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v4 + 96)) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&p_fini_func,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/service/login_handler.cpp",
                "getPlayerToken",
                205);
              common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                (common::milog::MiLogStream *const)&p_fini_func,
                (const char (*)[21])"create packet failed");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_fini_func);
              *(_DWORD *)(v4 + 48) = -1;
              v9 = *(_DWORD *)(v4 + 48);
            }
            else
            {
              v90 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
              v91 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
              common::minet::Packet::copyHead(v90, v91);
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&p_fini_func,
                &common::milog::MiLogDefault::default_log_obj_,
                5u,
                "./src/service/login_handler.cpp",
                "getPlayerToken",
                211);
              v92 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
                      (common::milog::MiLogStream *const)&p_fini_func,
                      (const char (*)[5])"uid=");
              v93 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr);
              Uid = PlayerSession::getUid(v93);
              v94 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v92, &Uid);
              common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                v94,
                (const char (*)[54])" resend token req, just create a succ rsp back to him");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_fini_func);
              v95 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr);
              v96 = v95;
              if ( *(_BYTE *)(((unsigned __int64)v95 >> 3) + 0x7FFF8000) )
                __asan_report_load8(v95);
              v97 = (unsigned __int64)(v96->_vptr_KcpSession + 5);
              if ( *(_BYTE *)((v97 >> 3) + 0x7FFF8000) )
                __asan_report_load8(v96->_vptr_KcpSession + 5);
              v98 = *(void (__fastcall **)(std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, opentracing::v3::string_view *))v97;
              std::shared_ptr<common::minet::Packet>::shared_ptr(
                (std::shared_ptr<common::minet::Packet> *const)&operation_name,
                (const std::shared_ptr<common::minet::Packet> *)(v4 + 96));
              v98(v96, &operation_name);
              std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&operation_name);
              *(_DWORD *)(v4 + 48) = 38;
              v9 = *(_DWORD *)(v4 + 48);
            }
            std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 96));
            proto::GetPlayerTokenRsp::~GetPlayerTokenRsp((proto::GetPlayerTokenRsp *const)(v4 + 448));
          }
        }
        else
        {
          ServiceBox::findService<GateserverService>();
          GateserverService::getConfig((GateserverService *const)&operation_name);
          v38 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&operation_name);
          isDevSdkAccount = Config::isDevSdkAccount(v38);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&operation_name);
          if ( isDevSdkAccount
            && (!proto::GetPlayerTokenReq::uid(req) && proto::GetPlayerTokenReq::account_type(req)
              ? (v40 = 0)
              : (v40 = 1),
                v40) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&p_fini_func,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/service/login_handler.cpp",
              "getPlayerToken",
              143);
            v41 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    (common::milog::MiLogStream *const)&p_fini_func,
                    (const char (*)[32])"ignore sdk account check, uid: ");
            Uid = proto::GetPlayerTokenReq::uid(req);
            v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &Uid);
            v43 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v42, (const char (*)[7])" aid: ");
            v44 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v43, v44);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_fini_func);
            v45 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
            std::shared_ptr<common::minet::Packet>::shared_ptr(
              (std::shared_ptr<common::minet::Packet> *const)&operation_name,
              p_packet_ptr);
            *(_DWORD *)(v4 + 48) = NetworkMgrBase::sendPacketToTargetService(
                                     v45,
                                     (common::minet::PacketPtr)__PAIR128__(3LL, &operation_name),
                                     0,
                                     v46);
            v9 = *(_DWORD *)(v4 + 48);
            std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&operation_name);
          }
          else if ( proto::GetPlayerTokenReq::uid(req) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&p_fini_func,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/service/login_handler.cpp",
              "getPlayerToken",
              150);
            v47 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                    (common::milog::MiLogStream *const)&p_fini_func,
                    (const char (*)[23])"Not support req.uid():");
            v105 = proto::GetPlayerTokenReq::uid(req);
            v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, &v105);
            v49 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v48,
                    (const char (*)[13])" session_id:");
            v50 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr);
            Uid = common::minet::KcpSession::getSessionId(v50);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, &Uid);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_fini_func);
            *(_DWORD *)(v4 + 48) = 12;
            v9 = *(_DWORD *)(v4 + 48);
          }
          else
          {
            v51 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
            if ( (unsigned __int8)std::string::empty(v51)
              || (v52 = proto::GetPlayerTokenReq::account_token[abi:cxx11](req), (unsigned __int8)std::string::empty(v52)) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&p_fini_func,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/service/login_handler.cpp",
                "getPlayerToken",
                155);
              v54 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                      (common::milog::MiLogStream *const)&p_fini_func,
                      (const char (*)[20])"empty account_uid: ");
              v55 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
              v56 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v54, v55);
              v57 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v56, (const char (*)[9])" token: ");
              v58 = proto::GetPlayerTokenReq::account_token[abi:cxx11](req);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v57, v58);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_fini_func);
              *(_DWORD *)(v4 + 48) = 16;
              v9 = *(_DWORD *)(v4 + 48);
            }
            else
            {
              v59 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr);
              last_token_req_time = PlayerSession::getLastTokenReqTime(v59);
              now = common::tools::TimeUtils::getNow();
              if ( last_token_req_time && now < last_token_req_time + 60 )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&p_fini_func,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/service/login_handler.cpp",
                  "getPlayerToken",
                  164);
                v60 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        (common::milog::MiLogStream *const)&p_fini_func,
                        (const char (*)[13])"channel_id: ");
                v105 = proto::GetPlayerTokenReq::channel_id(req);
                v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, &v105);
                v62 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        v61,
                        (const char (*)[16])" account_type: ");
                Uid = proto::GetPlayerTokenReq::account_type(req);
                v63 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, &Uid);
                v64 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                        v63,
                        (const char (*)[15])" account_uid: ");
                v65 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
                v66 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v64, v65);
                common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  v66,
                  (const char (*)[24])" wait for http response");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_fini_func);
                *(_DWORD *)(v4 + 48) = -1;
                v9 = *(_DWORD *)(v4 + 48);
              }
              else
              {
                v67 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr);
                PlayerSession::setLastTokenReqTime(v67, now);
                v68 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr);
                common::minet::KcpSession::get_remote_ip_str[abi:cxx11]((std::string *)(v4 + 128), v68);
                v69 = proto::GetPlayerTokenReq::platform_type(req);
                if ( TxtConfigMgr::isCloudPlatform(v69) && proto::GetPlayerTokenReq::cloud_client_ip(req) )
                {
                  v71 = proto::GetPlayerTokenReq::cloud_client_ip(req);
                  v72 = htonl(v71);
                  common::tools::NetUtils::inetNtoa[abi:cxx11]((std::string *)&p_fini_func, v72);
                  std::string::operator=(v4 + 128, &p_fini_func);
                  std::string::~string(&p_fini_func);
                }
                p_account_sdk_mgr = &ServiceBox::findService<GateserverService>()->account_sdk_mgr;
                p___f.__this = this;
                std::shared_ptr<common::minet::Packet>::shared_ptr(&p___f.__packet_ptr, p_packet_ptr);
                std::function<int ()(SdkRetcode,AccountSdkMgr::SdkRspParam const&)>::function<LoginHandler::getPlayerToken(std::shared_ptr<PlayerSession> &,std::shared_ptr<common::minet::Packet>,SpanProxy &)::{lambda(SdkRetcode,AccountSdkMgr::SdkRspParam const&)#2},void,void>(
                  (std::function<int(SdkRetcode,const AccountSdkMgr::SdkRspParam&)> *const)&p_fini_func,
                  &p___f);
                std::shared_ptr<common::minet::Packet>::shared_ptr(
                  (std::shared_ptr<common::minet::Packet> *const)&operation_name,
                  p_packet_ptr);
                *(_DWORD *)(v4 + 48) = AccountSdkMgr::asyncCheckSdkAccount(
                                         p_account_sdk_mgr,
                                         (common::minet::PacketPtr *)&operation_name,
                                         (const std::string *)(v4 + 128),
                                         (std::function<int(SdkRetcode,const AccountSdkMgr::SdkRspParam&)> *)&p_fini_func);
                std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&operation_name);
                std::function<int ()(SdkRetcode,AccountSdkMgr::SdkRspParam const&)>::~function((std::function<int(SdkRetcode,const AccountSdkMgr::SdkRspParam&)> *const)&p_fini_func);
                LoginHandler::getPlayerToken(std::shared_ptr<PlayerSession> &,std::shared_ptr<common::minet::Packet>,SpanProxy &)::{lambda(SdkRetcode,AccountSdkMgr::SdkRspParam const&)#2}::~SdkRspParam(&p___f);
                if ( *(_DWORD *)(v4 + 48) )
                {
                  AccountSdkMgr::SdkRspParam::SdkRspParam((AccountSdkMgr::SdkRspParam *const)(v4 + 288));
                  std::shared_ptr<common::minet::Packet>::shared_ptr(
                    (std::shared_ptr<common::minet::Packet> *const)&operation_name,
                    p_packet_ptr);
                  *(_DWORD *)(v4 + 48) = LoginHandler::onAsynCheckCallback(
                                           this,
                                           (common::minet::PacketPtr *)&operation_name,
                                           GIVEUP,
                                           (const AccountSdkMgr::SdkRspParam *)(v4 + 288));
                  v9 = *(_DWORD *)(v4 + 48);
                  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&operation_name);
                  AccountSdkMgr::SdkRspParam::~SdkRspParam((AccountSdkMgr::SdkRspParam *const)(v4 + 288));
                }
                else
                {
                  *(_DWORD *)(v4 + 48) = 0;
                  v9 = *(_DWORD *)(v4 + 48);
                }
                std::string::~string((void *)(v4 + 128));
              }
            }
          }
        }
      }
    }
    std::shared_ptr<proto::GetPlayerTokenReq const>::~shared_ptr((std::shared_ptr<const proto::GetPlayerTokenReq> *const)(v4 + 64));
  }
  SpanProxy::~SpanProxy((SpanProxy *const)(v4 + 192));
  result = v9;
  if ( v114 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8058) = 0;
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

// Line 101: range 000000000C763A34-000000000C763B8A
void __cdecl LoginHandler::getPlayerToken(std::shared_ptr<PlayerSession> &,std::shared_ptr<common::minet::Packet>,SpanProxy &)::{lambda(std::shared_ptr&<jaegertracing::Span>)#1}::operator()(
        const LoginHandler::getPlayerToken::<lambda(SpanPtr&)> *const __closure,
        SpanPtr *span_ptr)
{
  int32_t *ret; // rdx
  bool v3; // si
  int32_t *v4; // rdx
  TracingMgr *v5; // rdi
  int *v6; // rdx
  bool is_error; // [rsp+1Fh] [rbp-1h]

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  ret = __closure->__ret;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__ret);
  }
  v3 = *ret != 0;
  v4 = __closure->__ret;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__ret);
  }
  is_error = v3 && *v4 != 38;
  v5 = std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::tracing_mgr_ptr);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    v5 = (TracingMgr *)__closure;
    __asan_report_load8(__closure);
  }
  v6 = __closure->__ret;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) )
  {
    v5 = (TracingMgr *)__closure->__ret;
    __asan_report_load4(__closure->__ret);
  }
  TracingMgr::finishSpan(v5, span_ptr, *v6, is_error);
};

// Line 179: range 000000000C763B8C-000000000C763C29
int __cdecl LoginHandler::getPlayerToken(std::shared_ptr<PlayerSession> &,std::shared_ptr<common::minet::Packet>,SpanProxy &)::{lambda(SdkRetcode,AccountSdkMgr::SdkRspParam const&)#2}::operator()(
        const LoginHandler::getPlayerToken::<lambda(SdkRetcode, const AccountSdkMgr::SdkRspParam&)> *const __closure,
        SdkRetcode retcode,
        const AccountSdkMgr::SdkRspParam *param)
{
  LoginHandler *this; // rbx
  std::shared_ptr<common::minet::Packet> p_packet_ptr; // [rsp+20h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  this = __closure->__this;
  std::shared_ptr<common::minet::Packet>::shared_ptr(&p_packet_ptr, &__closure->__packet_ptr);
  LODWORD(this) = LoginHandler::onAsynCheckCallback(this, &p_packet_ptr, retcode, param);
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
  return (int)this;
};

// Line 179: range 000000000C77431A-000000000C774397
void __cdecl LoginHandler::getPlayerToken(std::shared_ptr<PlayerSession> &,std::shared_ptr<common::minet::Packet>,SpanProxy &)::{lambda(SdkRetcode,AccountSdkMgr::SdkRspParam const&)#2}::SdkRspParam(
        LoginHandler::getPlayerToken::<lambda(SdkRetcode, const AccountSdkMgr::SdkRspParam&)> *const this,
        LoginHandler::getPlayerToken::<lambda(SdkRetcode, const AccountSdkMgr::SdkRspParam&)> *a2)
{
  LoginHandler *v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(a2);
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->__this = v2;
  std::shared_ptr<common::minet::Packet>::shared_ptr(&this->__packet_ptr, &a2->__packet_ptr);
};

// Line 179: range 000000000C774462-000000000C7744DF
void __cdecl LoginHandler::getPlayerToken(std::shared_ptr<PlayerSession> &,std::shared_ptr<common::minet::Packet>,SpanProxy &)::{lambda(SdkRetcode,AccountSdkMgr::SdkRspParam const&)#2}::SdkRspParam(
        LoginHandler::getPlayerToken::<lambda(SdkRetcode, const AccountSdkMgr::SdkRspParam&)> *const this,
        const LoginHandler::getPlayerToken::<lambda(SdkRetcode, const AccountSdkMgr::SdkRspParam&)> *a2)
{
  LoginHandler *v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(a2);
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->__this = v2;
  std::shared_ptr<common::minet::Packet>::shared_ptr(&this->__packet_ptr, &a2->__packet_ptr);
};

// Line 179: range 000000000C763C2A-000000000C763C48
void __cdecl LoginHandler::getPlayerToken(std::shared_ptr<PlayerSession> &,std::shared_ptr<common::minet::Packet>,SpanProxy &)::{lambda(SdkRetcode,AccountSdkMgr::SdkRspParam const&)#2}::~SdkRspParam(
        LoginHandler::getPlayerToken::<lambda(SdkRetcode, const AccountSdkMgr::SdkRspParam&)> *const this)
{
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&this->__packet_ptr);
};

// Line 217: range 000000000C7651E0-000000000C76682C
int32_t __cdecl LoginHandler::onAsynCheckCallback(
        LoginHandler *const this,
        common::minet::PacketPtr *p_packet_ptr,
        SdkRetcode retcode,
        const AccountSdkMgr::SdkRspParam *param)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v7; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t v9; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int32_t v12; // r13d
  PlayerSession *v13; // rax
  std::__shared_ptr_access<proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  const char *v16; // r13
  const std::string *v17; // rax
  const char *v18; // rax
  common::milog::MiLogStream *v19; // r13
  const std::string *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r13
  const std::string *v23; // rax
  char v24; // r13
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  uint32_t AccountType; // r15d
  const std::string *v27; // r15
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  bool v29; // r15
  common::milog::MiLogStream *v30; // r13
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r13
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // r13
  const std::string *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // r13
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // r13
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  common::milog::MiLogStream *v45; // r13
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // r13
  const std::string *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // r13
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // r13
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v56; // rax
  google::protobuf::int32 v57; // eax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v59; // r13
  unsigned __int64 v60; // rax
  void (__fastcall *v61)(std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, opentracing::v3::string_view *); // r15
  common::milog::MiLogStream *v62; // r13
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // r13
  const std::string *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // r13
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // r13
  const std::string *v70; // rax
  bool is_guest; // cl
  google::protobuf::uint32 v72; // ecx
  char v73; // al
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v74; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v75; // r13
  unsigned __int64 v76; // rax
  void (__fastcall *v77)(std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, opentracing::v3::string_view *); // r15
  common::milog::MiLogStream *v78; // r13
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // r13
  const std::string *v81; // rax
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // r13
  bool v84; // al
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rcx
  common::milog::MiLogStream *v87; // rax
  common::milog::MiLogStream *v88; // r13
  common::milog::MiLogStream *v89; // rax
  common::milog::MiLogStream *v90; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v91; // rdx
  RetrySDKVerifyConfig *p_retry_sdk_verify_config; // rax
  PlayerSession *v93; // r13
  common::milog::MiLogStream *v94; // r13
  common::milog::MiLogStream *v95; // rax
  common::milog::MiLogStream *v96; // r13
  const std::string *v97; // rax
  common::milog::MiLogStream *v98; // r13
  common::milog::MiLogStream *v99; // rax
  common::milog::MiLogStream *v100; // r13
  const std::string *v101; // rax
  common::milog::MiLogStream *v102; // rax
  common::milog::MiLogStream *v103; // rax
  common::milog::MiLogStream *v104; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v105; // r13
  uint32_t v106; // r8d
  int32_t result; // eax
  bool is_retry_when_http_error; // [rsp+3Bh] [rbp-2B5h]
  unsigned int val; // [rsp+3Ch] [rbp-2B4h] BYREF
  unsigned int v112; // [rsp+40h] [rbp-2B0h] BYREF
  unsigned int Uid; // [rsp+44h] [rbp-2ACh] BYREF
  const proto::GetPlayerTokenReq *req; // [rsp+48h] [rbp-2A8h]
  opentracing::v3::string_view operation_name; // [rsp+50h] [rbp-2A0h] BYREF
  common::milog::MiLogStream v116; // [rsp+60h] [rbp-290h] BYREF
  common::milog::MiLogStream v117; // [rsp+80h] [rbp-270h] BYREF
  char v118[592]; // [rsp+A0h] [rbp-250h] BYREF

  v4 = (unsigned __int64)v118;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(544LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 4 7 ret:218 48 4 14 session_id:221 64 16 15 session_ptr:222 96 16 11 req_ptr:232 128 16 18 "
                        "rsp_packet_ptr:287 160 56 14 span_proxy:219 256 216 7 rsp:284";
  *(_QWORD *)(v4 + 16) = LoginHandler::onAsynCheckCallback;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862726] = -234881024;
  v6[536862727] = -218959118;
  v6[536862734] = -218103808;
  v6[536862735] = -202116109;
  v6[536862736] = -202116109;
  *(_DWORD *)(v4 + 32) = 0;
  opentracing::v3::string_view::string_view(&operation_name, "onAsynCheckCallback");
  v7 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  SpanProxy::SpanProxy((SpanProxy *const)(v4 + 160), v7, operation_name, 0LL, 0, (const int *)(v4 + 32));
  v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  *(_DWORD *)(v4 + 48) = common::minet::Packet::getUserSessionId(v8);
  v9 = (unsigned int)ServiceBox::findService<GateserverService>();
  GateserverService::findPlayerSession((GateserverService *const)(v4 + 64), v9);
  if ( std::operator==<PlayerSession>(0LL, (const std::shared_ptr<PlayerSession> *)(v4 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v117,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/service/login_handler.cpp",
      "onAsynCheckCallback",
      225);
    v10 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            &v117,
            (const char (*)[20])"findPlayerSession: ");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" failed");
    common::milog::MiLogStream::~MiLogStream(&v117);
    *(_DWORD *)(v4 + 32) = -1;
    v12 = *(_DWORD *)(v4 + 32);
  }
  else
  {
    v13 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    PlayerSession::setLastTokenReqTime(v13, 0);
    std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    common::minet::Packet::getProto<proto::GetPlayerTokenReq>((common::minet::Packet *const)(v4 + 96));
    if ( std::operator==<proto::GetPlayerTokenReq>(0LL, (const std::shared_ptr<proto::GetPlayerTokenReq> *)(v4 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v117,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/login_handler.cpp",
        "onAsynCheckCallback",
        235);
      common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
        &v117,
        (const char (*)[46])"getConstProto<proto::GetPlayerTokenReq> fails");
      common::milog::MiLogStream::~MiLogStream(&v117);
      *(_DWORD *)(v4 + 32) = -1;
      v12 = *(_DWORD *)(v4 + 32);
    }
    else
    {
      v14 = std::__shared_ptr_access<proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      proto::GetPlayerTokenReq::set_country_code(v14, &param->country_code);
      v15 = std::__shared_ptr_access<proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      proto::GetPlayerTokenReq::set_birthday(v15, &param->birthday);
      req = std::__shared_ptr_access<proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      common::milog::MiLogStream::create(
        &v117,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/service/login_handler.cpp",
        "onAsynCheckCallback",
        241);
      v16 = (const char *)std::string::c_str(&param->country_code);
      v17 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
      v18 = (const char *)std::string::c_str(v17);
      common::milog::MiLogStream::operator()(&v117, "uid: %s, country code set to <%s>", v18, v16);
      common::milog::MiLogStream::~MiLogStream(&v117);
      common::milog::MiLogStream::create(
        &v117,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/service/login_handler.cpp",
        "onAsynCheckCallback",
        242);
      v19 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v117, (const char (*)[14])"sdk birthday:");
      v20 = proto::GetPlayerTokenReq::birthday[abi:cxx11](req);
      v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, v20);
      v22 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v21, (const char (*)[6])" uid:");
      v23 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, v23);
      common::milog::MiLogStream::~MiLogStream(&v117);
      v24 = 0;
      v25 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      AccountType = PlayerSession::getAccountType(v25);
      v29 = 1;
      if ( AccountType == proto::GetPlayerTokenReq::account_type(req) )
      {
        v27 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
        v28 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        PlayerSession::getAccountUid[abi:cxx11]((std::string *)&v117, v28);
        v24 = 1;
        if ( !std::operator!=<char>((const std::string *)&v117, v27) )
          v29 = 0;
      }
      if ( v24 )
        std::string::~string(&v117);
      if ( v29 )
      {
        common::milog::MiLogStream::create(
          &v116,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/service/login_handler.cpp",
          "onAsynCheckCallback",
          246);
        v30 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                &v116,
                (const char (*)[46])"[LOGIN] AsyncCheckCallback account not match:");
        v31 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        val = common::minet::KcpSession::getSessionId(v31);
        v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &val);
        v33 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v32,
                (const char (*)[19])" req account_type:");
        v112 = proto::GetPlayerTokenReq::account_type(req);
        v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &v112);
        v35 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v34,
                (const char (*)[18])" req account_uid:");
        v36 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
        v37 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v35, v36);
        v38 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                v37,
                (const char (*)[23])" session account_type:");
        v39 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        Uid = PlayerSession::getAccountType(v39);
        v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &Uid);
        v41 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                v40,
                (const char (*)[22])" session account_uid:");
        v42 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        PlayerSession::getAccountUid[abi:cxx11]((std::string *)&v117, v42);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v41, (const std::string *)&v117);
        std::string::~string(&v117);
        common::milog::MiLogStream::~MiLogStream(&v116);
        *(_DWORD *)(v4 + 32) = -1;
        v12 = *(_DWORD *)(v4 + 32);
      }
      else
      {
        v43 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        if ( PlayerSession::getUid(v43) && retcode == FAIL )
        {
          common::milog::MiLogStream::create(
            &v116,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/service/login_handler.cpp",
            "onAsynCheckCallback",
            254);
          v45 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  &v116,
                  (const char (*)[17])"old req.account ");
          val = proto::GetPlayerTokenReq::account_type(req);
          v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, &val);
          v47 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v46, (const char (*)[2])":");
          v48 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
          v49 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v47, v48);
          v50 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v49, (const char (*)[11])" retcode: ");
          v112 = retcode;
          v51 = common::milog::MiLogStream::operator<<<int,(int *)0>(v50, (const int *)&v112);
          v52 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  v51,
                  (const char (*)[34])" but cur session is login!, uid: ");
          v53 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          Uid = PlayerSession::getUid(v53);
          v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, &Uid);
          v55 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v54, (const char (*)[2])" ");
          v56 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          PlayerSession::getAccountUid[abi:cxx11]((std::string *)&v117, v56);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v55, (const std::string *)&v117);
          std::string::~string(&v117);
          common::milog::MiLogStream::~MiLogStream(&v116);
          *(_DWORD *)(v4 + 32) = -1;
          v12 = *(_DWORD *)(v4 + 32);
        }
        else if ( retcode == FAIL )
        {
          proto::GetPlayerTokenRsp::GetPlayerTokenRsp((proto::GetPlayerTokenRsp *const)(v4 + 256));
          if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(param);
          }
          v57 = LoginHandler::converToProtoRetcode(this, FAIL, param->retcode);
          proto::GetPlayerTokenRsp::set_retcode((proto::GetPlayerTokenRsp *const)(v4 + 256), v57);
          proto::GetPlayerTokenRsp::set_msg((proto::GetPlayerTokenRsp *const)(v4 + 256), &param->msg);
          common::minet::PacketUtils::createPacket<proto::GetPlayerTokenRsp>((const proto::GetPlayerTokenRsp *)(v4 + 128));
          if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v4 + 128)) )
          {
            common::milog::MiLogStream::create(
              &v117,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/service/login_handler.cpp",
              "onAsynCheckCallback",
              269);
            common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              &v117,
              (const char (*)[21])"create packet failed");
            common::milog::MiLogStream::~MiLogStream(&v117);
            *(_DWORD *)(v4 + 32) = -1;
            v12 = *(_DWORD *)(v4 + 32);
          }
          else
          {
            v58 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            v59 = v58;
            if ( *(_BYTE *)(((unsigned __int64)v58 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v58);
            v60 = (unsigned __int64)(v59->_vptr_KcpSession + 5);
            if ( *(_BYTE *)((v60 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v59->_vptr_KcpSession + 5);
            v61 = *(void (__fastcall **)(std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, opentracing::v3::string_view *))v60;
            std::shared_ptr<common::minet::Packet>::shared_ptr(
              (std::shared_ptr<common::minet::Packet> *const)&operation_name,
              (const std::shared_ptr<common::minet::Packet> *)(v4 + 128));
            v61(v59, &operation_name);
            std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&operation_name);
            common::milog::MiLogStream::create(
              &v117,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/service/login_handler.cpp",
              "onAsynCheckCallback",
              273);
            v62 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    &v117,
                    (const char (*)[15])"account_type: ");
            Uid = proto::GetPlayerTokenReq::account_type(req);
            v63 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, &Uid);
            v64 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v63,
                    (const char (*)[15])" account_uid: ");
            v65 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
            v66 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v64, v65);
            common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v66,
              (const char (*)[21])" sdk_retcode is FAIL");
            common::milog::MiLogStream::~MiLogStream(&v117);
            if ( proto::GetPlayerTokenRsp::retcode((const proto::GetPlayerTokenRsp *const)(v4 + 256)) )
            {
              common::milog::MiLogStream::create(
                &v117,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/service/login_handler.cpp",
                "onAsynCheckCallback",
                276);
              v67 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                      &v117,
                      (const char (*)[34])"[LOGIN] OnGetPlayerToken retcode:");
              Uid = proto::GetPlayerTokenRsp::retcode((const proto::GetPlayerTokenRsp *const)(v4 + 256));
              v68 = common::milog::MiLogStream::operator<<<int,(int *)0>(v67, (const int *)&Uid);
              v69 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v68,
                      (const char (*)[14])" account_uid:");
              v70 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v69, v70);
              common::milog::MiLogStream::~MiLogStream(&v117);
            }
            *(_DWORD *)(v4 + 32) = -1;
            v12 = *(_DWORD *)(v4 + 32);
          }
          std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 128));
          proto::GetPlayerTokenRsp::~GetPlayerTokenRsp((proto::GetPlayerTokenRsp *const)(v4 + 256));
        }
        else
        {
          if ( retcode )
            goto LABEL_43;
          is_guest = proto::GetPlayerTokenReq::is_guest(req);
          if ( *(char *)(((unsigned __int64)&param->is_guest >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&param->is_guest);
          if ( is_guest != param->is_guest )
            goto LABEL_42;
          v72 = proto::GetPlayerTokenReq::account_type(req);
          if ( *(_BYTE *)(((unsigned __int64)&param->account_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)param + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->account_type >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(&param->account_type);
          }
          if ( v72 == param->account_type )
LABEL_43:
            v73 = 0;
          else
LABEL_42:
            v73 = 1;
          if ( v73 )
          {
            proto::GetPlayerTokenRsp::GetPlayerTokenRsp((proto::GetPlayerTokenRsp *const)(v4 + 256));
            proto::GetPlayerTokenRsp::set_retcode((proto::GetPlayerTokenRsp *const)(v4 + 256), 35);
            common::minet::PacketUtils::createPacket<proto::GetPlayerTokenRsp>((const proto::GetPlayerTokenRsp *)(v4 + 128));
            if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v4 + 128)) )
            {
              common::milog::MiLogStream::create(
                &v117,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/service/login_handler.cpp",
                "onAsynCheckCallback",
                290);
              common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                &v117,
                (const char (*)[21])"create packet failed");
              common::milog::MiLogStream::~MiLogStream(&v117);
              *(_DWORD *)(v4 + 32) = -1;
              v12 = *(_DWORD *)(v4 + 32);
            }
            else
            {
              v74 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
              v75 = v74;
              if ( *(_BYTE *)(((unsigned __int64)v74 >> 3) + 0x7FFF8000) )
                __asan_report_load8(v74);
              v76 = (unsigned __int64)(v75->_vptr_KcpSession + 5);
              if ( *(_BYTE *)((v76 >> 3) + 0x7FFF8000) )
                __asan_report_load8(v75->_vptr_KcpSession + 5);
              v77 = *(void (__fastcall **)(std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, opentracing::v3::string_view *))v76;
              std::shared_ptr<common::minet::Packet>::shared_ptr(
                (std::shared_ptr<common::minet::Packet> *const)&operation_name,
                (const std::shared_ptr<common::minet::Packet> *)(v4 + 128));
              v77(v75, &operation_name);
              std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&operation_name);
              common::milog::MiLogStream::create(
                &v117,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/service/login_handler.cpp",
                "onAsynCheckCallback",
                294);
              v78 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      &v117,
                      (const char (*)[15])"account_type: ");
              v112 = proto::GetPlayerTokenReq::account_type(req);
              v79 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v78, &v112);
              v80 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      v79,
                      (const char (*)[15])" account_uid: ");
              v81 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
              v82 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v80, v81);
              v83 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      v82,
                      (const char (*)[15])" req.is_quest:");
              v84 = proto::GetPlayerTokenReq::is_guest(req);
              v85 = common::milog::MiLogStream::operator<<(v83, v84);
              v86 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      v85,
                      (const char (*)[16])" but sdk guest:");
              if ( *(char *)(((unsigned __int64)&param->is_guest >> 3) + 0x7FFF8000) < 0 )
                __asan_report_load1(&param->is_guest);
              v87 = common::milog::MiLogStream::operator<<(v86, param->is_guest);
              v88 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                      v87,
                      (const char (*)[19])" req.account_type:");
              Uid = proto::GetPlayerTokenReq::account_type(req);
              v89 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v88, &Uid);
              v90 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                      v89,
                      (const char (*)[23])" but sdk account_type:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v90, &param->account_type);
              common::milog::MiLogStream::~MiLogStream(&v117);
              *(_DWORD *)(v4 + 32) = -1;
              v12 = *(_DWORD *)(v4 + 32);
            }
            std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 128));
            proto::GetPlayerTokenRsp::~GetPlayerTokenRsp((proto::GetPlayerTokenRsp *const)(v4 + 256));
          }
          else
          {
            if ( retcode )
            {
              ServiceBox::findService<GateserverService>();
              GateserverService::getConfig((GateserverService *const)&operation_name);
              v91 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&operation_name);
              p_retry_sdk_verify_config = &v91->retry_sdk_verify_config;
              if ( *(_BYTE *)(((unsigned __int64)p_retry_sdk_verify_config >> 3) + 0x7FFF8000) != 0
                && ((unsigned __int8)p_retry_sdk_verify_config & 7) >= *(_BYTE *)(((unsigned __int64)p_retry_sdk_verify_config >> 3)
                                                                                + 0x7FFF8000) )
              {
                __asan_report_load1(p_retry_sdk_verify_config);
              }
              is_retry_when_http_error = v91->retry_sdk_verify_config.is_retry_when_http_error;
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&operation_name);
              if ( is_retry_when_http_error )
              {
                v93 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
                std::shared_ptr<common::minet::Packet>::shared_ptr(
                  (std::shared_ptr<common::minet::Packet> *const)&operation_name,
                  p_packet_ptr);
                PlayerSession::setRetrySdkVerify(v93, (common::minet::PacketPtr *)&operation_name);
                std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&operation_name);
                common::milog::MiLogStream::create(
                  &v117,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/service/login_handler.cpp",
                  "onAsynCheckCallback",
                  308);
                v94 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                        &v117,
                        (const char (*)[61])"[SDK] sdk verify error, goto background retry. account_type=");
                Uid = proto::GetPlayerTokenReq::account_type(req);
                v95 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v94, &Uid);
                v96 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v95,
                        (const char (*)[14])" account_uid=");
                v97 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v96, v97);
                common::milog::MiLogStream::~MiLogStream(&v117);
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v117,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/service/login_handler.cpp",
                  "onAsynCheckCallback",
                  313);
                v98 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                        &v117,
                        (const char (*)[15])"account_type: ");
                v112 = proto::GetPlayerTokenReq::account_type(req);
                v99 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v98, &v112);
                v100 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                         v99,
                         (const char (*)[15])" account_uid: ");
                v101 = proto::GetPlayerTokenReq::account_uid[abi:cxx11](req);
                v102 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v100, v101);
                v103 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                         v102,
                         (const char (*)[11])" retcode: ");
                Uid = retcode;
                v104 = common::milog::MiLogStream::operator<<<int,(int *)0>(v103, (const int *)&Uid);
                common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  v104,
                  (const char (*)[31])" giveup Check and go on login!");
                common::milog::MiLogStream::~MiLogStream(&v117);
              }
            }
            v105 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
            std::shared_ptr<common::minet::Packet>::shared_ptr(
              (std::shared_ptr<common::minet::Packet> *const)&operation_name,
              p_packet_ptr);
            v12 = NetworkMgrBase::sendPacketToTargetService(
                    v105,
                    (common::minet::PacketPtr)__PAIR128__(3LL, &operation_name),
                    0,
                    v106);
            std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&operation_name);
          }
        }
      }
    }
    std::shared_ptr<proto::GetPlayerTokenReq>::~shared_ptr((std::shared_ptr<proto::GetPlayerTokenReq> *const)(v4 + 96));
  }
  std::shared_ptr<PlayerSession>::~shared_ptr((std::shared_ptr<PlayerSession> *const)(v4 + 64));
  SpanProxy::~SpanProxy((SpanProxy *const)(v4 + 160));
  result = v12;
  if ( v118 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8040) = 0;
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
    *(_DWORD *)((v4 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 323: range 000000000C766932-000000000C767A55
int32_t __cdecl LoginHandler::onGetPlayerTokenRsp(LoginHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  TracingMgr *v5; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  const jaegertracing::SpanContext *v7; // r14
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v8; // rax
  int32_t v9; // r14d
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  const std::string *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  const std::string *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  const std::string *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  uint32_t v36; // eax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  char v39; // r14
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  uint32_t AccountType; // r15d
  const std::string *v42; // r15
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  bool v44; // r15
  common::milog::MiLogStream *v45; // r14
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // r14
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // r14
  const std::string *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // r14
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // r14
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v57; // rax
  common::milog::MiLogStream *v58; // r14
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v59; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v60; // r14
  unsigned __int64 v61; // rax
  PlayerSession *v62; // r14
  uint32_t v63; // eax
  PlayerSession *v64; // r14
  const std::string *v65; // rax
  PlayerSession *v66; // r14
  uint32_t v67; // eax
  PlayerSession *v68; // r14
  const std::string *v69; // rax
  PlayerSession *v70; // r14
  uint32_t v71; // eax
  PlayerSession *v72; // r14
  uint32_t v73; // eax
  PlayerSession *v74; // r14
  const std::string *v75; // rax
  PlayerSession *v76; // r14
  uint32_t v77; // eax
  PlayerSession *v78; // r14
  uint32_t v79; // eax
  PlayerSession *v80; // r14
  bool is_guest; // al
  PlayerSession *v82; // r14
  uint32_t v83; // eax
  PlayerSession *v84; // r14
  const std::string *v85; // rax
  PlayerSession *v86; // r14
  uint32_t v87; // eax
  PlayerSession *v88; // r14
  const std::string *v89; // rax
  PlayerSession *v90; // r14
  std::remove_reference<std::string&>::type *v91; // rax
  uint32_t v92; // eax
  PlayerSession *v93; // rax
  PlayerSession *v94; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v95; // rax
  void (__fastcall *v96)(std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, opentracing::v3::string_view *); // r15
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-1ECh] BYREF
  unsigned int v99; // [rsp+28h] [rbp-1E8h] BYREF
  unsigned int v100; // [rsp+2Ch] [rbp-1E4h] BYREF
  unsigned int v101; // [rsp+30h] [rbp-1E0h] BYREF
  unsigned int SessionId; // [rsp+34h] [rbp-1DCh] BYREF
  unsigned int v103; // [rsp+38h] [rbp-1D8h] BYREF
  unsigned int v104; // [rsp+3Ch] [rbp-1D4h] BYREF
  proto::GetPlayerTokenRsp *rsp_0; // [rsp+40h] [rbp-1D0h]
  uint64_t secret_key_seed; // [rsp+48h] [rbp-1C8h]
  opentracing::v3::string_view operation_name; // [rsp+50h] [rbp-1C0h] BYREF
  char v108[432]; // [rsp+60h] [rbp-1B0h] BYREF

  v2 = (unsigned __int64)v108;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 4 7 ret:324 48 4 14 session_id:341 64 8 17 root_span_ctx:325 96 16 11 rsp_ptr:334 128 16 15"
                        " session_ptr:342 160 32 14 secret_key:384 224 32 29 client_version_random_key:388 288 56 14 span_proxy:326";
  *(_QWORD *)(v2 + 16) = LoginHandler::onGetPlayerTokenRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218103808;
  v4[536862731] = -202116109;
  *(_DWORD *)(v2 + 32) = 0;
  v5 = std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::tracing_mgr_ptr);
  v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getSpanContextStr[abi:cxx11]((std::string *)(v2 + 224), v6);
  TracingMgr::extract(
    v2 + 64,
    v5,
    (std::__shared_ptr<opentracing::v3::Tracer,(__gnu_cxx::_Lock_policy)2>::element_type *)(v2 + 224));
  std::string::~string((void *)(v2 + 224));
  std::function<void ()(std::shared_ptr<jaegertracing::Span> &)>::function<LoginHandler::onGetPlayerTokenRsp(std::shared_ptr<common::minet::Packet>)::{lambda(std::shared_ptr<jaegertracing::Span> &)#1},void,void>(
    (std::function<void(std::shared_ptr<jaegertracing::Span>&)> *const)(v2 + 224),
    (LoginHandler::onGetPlayerTokenRsp::<lambda(SpanPtr&)>)(v2 + 32));
  v7 = std::unique_ptr<jaegertracing::SpanContext>::get((const std::unique_ptr<jaegertracing::SpanContext> *const)(v2 + 64));
  opentracing::v3::string_view::string_view(&operation_name, "onGetPlayerTokenRsp");
  v8 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  SpanProxy::SpanProxy(
    (SpanProxy *const)(v2 + 288),
    v8,
    operation_name,
    v7,
    0,
    (std::function<void(std::shared_ptr<jaegertracing::Span>&)> *)(v2 + 224));
  std::function<void ()(std::shared_ptr<jaegertracing::Span> &)>::~function((std::function<void(std::shared_ptr<jaegertracing::Span>&)> *const)(v2 + 224));
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getProto<proto::GetPlayerTokenRsp>((common::minet::Packet *const)(v2 + 96));
  if ( std::operator==<proto::GetPlayerTokenRsp>((const std::shared_ptr<proto::GetPlayerTokenRsp> *)(v2 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/login_handler.cpp",
      "onGetPlayerTokenRsp",
      334);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v2 + 224),
      "get GetPlayerTokenRsp failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    v9 = -1;
    goto LABEL_30;
  }
  rsp_0 = std::__shared_ptr_access<proto::GetPlayerTokenRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetPlayerTokenRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v2 + 224),
    &common::milog::MiLogDefault::default_log_obj_,
    5u,
    "./src/service/login_handler.cpp",
    "onGetPlayerTokenRsp",
    336);
  v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          (common::milog::MiLogStream *const)(v2 + 224),
          (const char (*)[32])"onGetPlayerTokenRsp session_id:");
  v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  val = common::minet::Packet::getUserSessionId(v11);
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
  v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
  v99 = proto::GetPlayerTokenRsp::uid(rsp_0);
  v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &v99);
  v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])" channel_id:");
  v100 = proto::GetPlayerTokenRsp::channel_id(rsp_0);
  v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &v100);
  v17 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v16, (const char (*)[17])" sub_channel_id:");
  v101 = proto::GetPlayerTokenRsp::sub_channel_id(rsp_0);
  v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &v101);
  v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" tag:");
  *(_DWORD *)(v2 + 48) = proto::GetPlayerTokenRsp::tag(rsp_0);
  v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v2 + 48));
  v21 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v20, (const char (*)[15])" country_code:");
  v22 = proto::GetPlayerTokenRsp::country_code[abi:cxx11](rsp_0);
  v23 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, v22);
  v24 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v23, (const char (*)[11])" birthday:");
  v25 = proto::GetPlayerTokenRsp::birthday[abi:cxx11](rsp_0);
  v26 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v24, v25);
  v27 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v26, (const char (*)[15])" account_type:");
  SessionId = proto::GetPlayerTokenRsp::account_type(rsp_0);
  v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &SessionId);
  v29 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v28, (const char (*)[14])" account_uid:");
  v30 = proto::GetPlayerTokenRsp::account_uid[abi:cxx11](rsp_0);
  v31 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v29, v30);
  v32 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v31, (const char (*)[6])" ret:");
  v103 = proto::GetPlayerTokenRsp::retcode(rsp_0);
  v33 = common::milog::MiLogStream::operator<<<int,(int *)0>(v32, (const int *)&v103);
  v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v33, (const char (*)[16])" platform_type:");
  v104 = proto::GetPlayerTokenRsp::platform_type(rsp_0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &v104);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
  v35 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  *(_DWORD *)(v2 + 48) = common::minet::Packet::getUserSessionId(v35);
  v36 = (unsigned int)ServiceBox::findService<GateserverService>();
  GateserverService::findPlayerSession((GateserverService *const)(v2 + 128), v36);
  if ( !std::operator==<PlayerSession>(0LL, (const std::shared_ptr<PlayerSession> *)(v2 + 128)) )
  {
    if ( !proto::GetPlayerTokenRsp::retcode(rsp_0) )
    {
      v39 = 0;
      v40 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      AccountType = PlayerSession::getAccountType(v40);
      v44 = 1;
      if ( AccountType == proto::GetPlayerTokenRsp::account_type(rsp_0) )
      {
        v42 = proto::GetPlayerTokenRsp::account_uid[abi:cxx11](rsp_0);
        v43 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        PlayerSession::getAccountUid[abi:cxx11]((std::string *)(v2 + 224), v43);
        v39 = 1;
        if ( !std::operator!=<char>((const std::string *)(v2 + 224), v42) )
          v44 = 0;
      }
      if ( v39 )
        std::string::~string((void *)(v2 + 224));
      if ( v44 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 160),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/service/login_handler.cpp",
          "onGetPlayerTokenRsp",
          354);
        v45 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                (common::milog::MiLogStream *const)(v2 + 160),
                (const char (*)[45])"[LOGIN] GetPlayerTokenRsp account not match:");
        v46 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        SessionId = common::minet::KcpSession::getSessionId(v46);
        v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, &SessionId);
        v48 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v47,
                (const char (*)[19])" rsp account_type:");
        v103 = proto::GetPlayerTokenRsp::account_type(rsp_0);
        v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, &v103);
        v50 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v49,
                (const char (*)[18])" rsp account_uid:");
        v51 = proto::GetPlayerTokenRsp::account_uid[abi:cxx11](rsp_0);
        v52 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v50, v51);
        v53 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                v52,
                (const char (*)[23])" session account_type:");
        v54 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        v104 = PlayerSession::getAccountType(v54);
        v55 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, &v104);
        v56 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                v55,
                (const char (*)[22])" session account_uid:");
        v57 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        PlayerSession::getAccountUid[abi:cxx11]((std::string *)(v2 + 224), v57);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v56, (const std::string *)(v2 + 224));
        std::string::~string((void *)(v2 + 224));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(v2 + 32) = -1;
        v9 = *(_DWORD *)(v2 + 32);
        goto LABEL_29;
      }
      secret_key_seed = LoginHandler::genSecretSeed(this, rsp_0);
      if ( proto::GetPlayerTokenRsp::retcode(rsp_0) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 224),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/service/login_handler.cpp",
          "onGetPlayerTokenRsp",
          364);
        v58 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v2 + 224),
                (const char (*)[28])"gen SecretSeed failed, uid:");
        v104 = proto::GetPlayerTokenRsp::uid(rsp_0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, &v104);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
        v59 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        v60 = v59;
        if ( *(_BYTE *)(((unsigned __int64)v59 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v59);
        v61 = (unsigned __int64)(v60->_vptr_KcpSession + 5);
        if ( *(_BYTE *)((v61 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v60->_vptr_KcpSession + 5);
LABEL_28:
        v96 = *(void (__fastcall **)(std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, opentracing::v3::string_view *))v61;
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          (std::shared_ptr<common::minet::Packet> *const)&operation_name,
          p_packet_ptr);
        v96(v60, &operation_name);
        std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&operation_name);
        *(_DWORD *)(v2 + 32) = proto::GetPlayerTokenRsp::retcode(rsp_0);
        v9 = *(_DWORD *)(v2 + 32);
        goto LABEL_29;
      }
      v62 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      v63 = proto::GetPlayerTokenRsp::uid(rsp_0);
      PlayerSession::setUid(v62, v63);
      v64 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      v65 = proto::GetPlayerTokenRsp::token[abi:cxx11](rsp_0);
      PlayerSession::setAccountToken(v64, v65);
      v66 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      v67 = proto::GetPlayerTokenRsp::account_type(rsp_0);
      PlayerSession::setAccountType(v66, v67);
      v68 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      v69 = proto::GetPlayerTokenRsp::account_uid[abi:cxx11](rsp_0);
      std::string::basic_string(v2 + 224, v69);
      PlayerSession::setAccountUid(v68, (std::string *)(v2 + 224));
      std::string::~string((void *)(v2 + 224));
      v70 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      v71 = proto::GetPlayerTokenRsp::gm_uid(rsp_0);
      PlayerSession::setGmUid(v70, v71);
      v72 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      v73 = proto::GetPlayerTokenRsp::platform_type(rsp_0);
      PlayerSession::setPlatformType(v72, v73);
      v74 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      v75 = proto::GetPlayerTokenRsp::psn_id[abi:cxx11](rsp_0);
      PlayerSession::setPsnId(v74, v75);
      v76 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      v77 = proto::GetPlayerTokenRsp::channel_id(rsp_0);
      PlayerSession::setChannelId(v76, v77);
      v78 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      v79 = proto::GetPlayerTokenRsp::sub_channel_id(rsp_0);
      PlayerSession::setSubChannelId(v78, v79);
      v80 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      is_guest = proto::GetPlayerTokenRsp::is_guest(rsp_0);
      PlayerSession::setGuest(v80, is_guest);
      v82 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      v83 = proto::GetPlayerTokenRsp::tag(rsp_0);
      PlayerSession::setTag(v82, v83);
      v84 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      v85 = proto::GetPlayerTokenRsp::country_code[abi:cxx11](rsp_0);
      PlayerSession::setCountryCode(v84, v85);
      v86 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      v87 = proto::GetPlayerTokenRsp::reg_platform(rsp_0);
      PlayerSession::setRegPlatform(v86, v87);
      v88 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      v89 = proto::GetPlayerTokenRsp::birthday[abi:cxx11](rsp_0);
      PlayerSession::setBirthday(v88, v89);
      std::string::basic_string(v2 + 160);
      LoginHandler::genSecretKeyWithSeed(this, secret_key_seed, (std::string *)(v2 + 160));
      v90 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      v91 = std::move<std::string &>((std::string *)(v2 + 160));
      std::string::basic_string(v2 + 224, v91);
      PlayerSession::setSecretKey(v90, (std::string *)(v2 + 224));
      std::string::~string((void *)(v2 + 224));
      std::string::basic_string(v2 + 224);
      v92 = proto::GetPlayerTokenRsp::uid(rsp_0);
      LoginHandler::genClientVersionRandomKey(this, (std::string *)(v2 + 224), v92);
      v93 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      PlayerSession::setClientVersionRandomKey(v93, (std::string *)(v2 + 224));
      proto::GetPlayerTokenRsp::set_client_version_random_key(rsp_0, (const std::string *)(v2 + 224));
      v94 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      PlayerSession::genAntiOfflineCmdBufferOnGetTokenRsp(v94, rsp_0);
      proto::GetPlayerTokenRsp::clear_extra_bin_data(rsp_0);
      std::string::~string((void *)(v2 + 224));
      std::string::~string((void *)(v2 + 160));
    }
    v95 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    v60 = v95;
    if ( *(_BYTE *)(((unsigned __int64)v95 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v95);
    v61 = (unsigned __int64)(v60->_vptr_KcpSession + 5);
    if ( *(_BYTE *)((v61 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v60->_vptr_KcpSession + 5);
    goto LABEL_28;
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v2 + 224),
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/service/login_handler.cpp",
    "onGetPlayerTokenRsp",
    345);
  v37 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
          (common::milog::MiLogStream *const)(v2 + 224),
          (const char (*)[20])"findPlayerSession: ");
  v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, (const unsigned int *)(v2 + 48));
  common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v38, (const char (*)[8])" failed");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
  *(_DWORD *)(v2 + 32) = -1;
  v9 = *(_DWORD *)(v2 + 32);
LABEL_29:
  std::shared_ptr<PlayerSession>::~shared_ptr((std::shared_ptr<PlayerSession> *const)(v2 + 128));
LABEL_30:
  std::shared_ptr<proto::GetPlayerTokenRsp>::~shared_ptr((std::shared_ptr<proto::GetPlayerTokenRsp> *const)(v2 + 96));
  SpanProxy::~SpanProxy((SpanProxy *const)(v2 + 288));
  std::unique_ptr<jaegertracing::SpanContext>::~unique_ptr((std::unique_ptr<jaegertracing::SpanContext> *const)(v2 + 64));
  result = v9;
  if ( v108 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
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
  }
  return result;
};

// Line 327: range 000000000C76682E-000000000C766931
void __cdecl LoginHandler::onGetPlayerTokenRsp(std::shared_ptr<common::minet::Packet>)::{lambda(std::shared_ptr&<jaegertracing::Span>)#1}::operator()(
        const LoginHandler::onGetPlayerTokenRsp::<lambda(SpanPtr&)> *const __closure,
        SpanPtr *span_ptr)
{
  int *ret; // rdx
  TracingMgr *v3; // rdi
  int *v4; // rdx
  bool is_error; // [rsp+1Fh] [rbp-1h]

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  ret = __closure->__ret;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__ret);
  }
  is_error = *ret != 0;
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
  TracingMgr::finishSpanToRoot(v3, span_ptr, *v4, is_error);
};

// Line 403: range 000000000C767A56-000000000C76888D
uint64_t __cdecl LoginHandler::genSecretSeed(LoginHandler *const this, proto::GetPlayerTokenRsp *rsp_0)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::string *v5; // rax
  unsigned __int64 v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  uint64_t v10; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v15; // r14
  uint32_t v16; // eax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  unsigned __int64 v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  std::string *p_server_private_key; // r14
  const EVP_MD *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  uint64_t result; // rax
  char v43; // [rsp+1Fh] [rbp-281h] BYREF
  unsigned int value; // [rsp+20h] [rbp-280h] BYREF
  unsigned int val; // [rsp+24h] [rbp-27Ch] BYREF
  DbDeployConfigMgr *db_deploy_config_mgr; // [rsp+28h] [rbp-278h]
  const data::DbRegionConfig *region_config_ptr; // [rsp+30h] [rbp-270h]
  const data::DbRsakeyConfig *rsa_config_ptr; // [rsp+38h] [rbp-268h]
  std::shared_ptr<Config> v49; // [rsp+40h] [rbp-260h] BYREF
  common::milog::MiLogStream v50; // [rsp+50h] [rbp-250h] BYREF
  char v51[560]; // [rsp+70h] [rbp-230h] BYREF

  v2 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 32 8 15 server_rand:408 64 8 15 client_rand:409 96 8 19 net_server_rand:460 128 32 21 base64_c"
                        "lient_key:405 192 32 29 encrypted_client_rand_key:407 256 32 18 client_key_str:443 320 32 18 ser"
                        "ver_key_str:461 384 32 29 encrypted_server_rand_key:463 448 32 12 sign_str:473";
  *(_QWORD *)(v2 + 16) = LoginHandler::genSecretSeed;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -202116109;
  proto::GetPlayerTokenRsp::set_retcode(rsp_0, -1);
  v5 = proto::GetPlayerTokenRsp::server_rand_key[abi:cxx11](rsp_0);
  std::string::basic_string(v2 + 128, v5);
  proto::GetPlayerTokenRsp::clear_server_rand_key(rsp_0);
  common::tools::StringUtils::base64Decode((std::string *)(v2 + 192), (const std::string *)(v2 + 128));
  v6 = (unsigned __int64)common::tools::RandomUtils::rand<unsigned int>() << 32;
  *(_QWORD *)(v2 + 32) = v6 | common::tools::TimeUtils::getNow();
  *(_QWORD *)(v2 + 64) = 0LL;
  if ( (unsigned __int64)std::string::length(v2 + 192) <= 0x200 )
  {
    ServiceBox::findService<GateserverService>();
    GateserverService::getConfig((GateserverService *const)&v49);
    db_deploy_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49)->db_config_mgr.db_deploy_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v49);
    ServiceBox::findService<GateserverService>();
    GateserverService::getConfig((GateserverService *const)&v49);
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49);
    region_config_ptr = DbDeployConfigMgr::findDbRegionConfig(db_deploy_config_mgr, &v11->region_name);
    std::shared_ptr<Config>::~shared_ptr(&v49);
    if ( region_config_ptr )
    {
      value = proto::GetPlayerTokenRsp::key_id(rsp_0);
      if ( !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
              &region_config_ptr->rsa_key_set,
              &value)
        && (val = 0,
            !common::tools::MiscUtils::isContains<std::set<unsigned int> const,int>(
               &region_config_ptr->rsa_key_set,
               (const int *)&val)) )
      {
        common::milog::MiLogStream::create(
          &v50,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/service/login_handler.cpp",
          "genSecretSeed",
          427);
        v15 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v50,
                (const char (*)[33])"this region is not allow key_id:");
        val = proto::GetPlayerTokenRsp::key_id(rsp_0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v50);
        v10 = *(_QWORD *)(v2 + 32);
      }
      else
      {
        v16 = proto::GetPlayerTokenRsp::key_id(rsp_0);
        rsa_config_ptr = DbDeployConfigMgr::findDbRsakeyConfig(db_deploy_config_mgr, v16);
        if ( !rsa_config_ptr
          || (unsigned __int8)std::string::empty(&rsa_config_ptr->client_public_key)
          || (unsigned __int8)std::string::empty(&rsa_config_ptr->server_private_key) )
        {
          common::milog::MiLogStream::create(
            &v50,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/service/login_handler.cpp",
            "genSecretSeed",
            435);
          v18 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v50, (const char (*)[8])"key_id:");
          val = proto::GetPlayerTokenRsp::key_id(rsp_0);
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
          common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            v19,
            (const char (*)[34])" config not found or key is empty");
          common::milog::MiLogStream::~MiLogStream(&v50);
          proto::GetPlayerTokenRsp::set_secret_key_seed(rsp_0, *(_QWORD *)(v2 + 32));
          proto::GetPlayerTokenRsp::set_retcode(rsp_0, 0);
          v10 = *(_QWORD *)(v2 + 32);
        }
        else
        {
          std::string::basic_string(v2 + 256);
          if ( common::tools::RsaUtils::privateDecryp(
                 &rsa_config_ptr->server_private_key,
                 (const std::string *)(v2 + 192),
                 (std::string *)(v2 + 256)) >= 0 )
          {
            if ( (unsigned __int64)std::string::length(v2 + 256) > 7 )
            {
              v26 = std::string::data(v2 + 256);
              if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
                __asan_report_load8(v26);
              *(_QWORD *)(v2 + 64) = *(_QWORD *)v26;
              *(_QWORD *)(v2 + 64) = common::tools::NetUtils::ntohll(*(_QWORD *)(v2 + 64));
              *(_QWORD *)(v2 + 96) = common::tools::NetUtils::htonll(*(_QWORD *)(v2 + 32));
              std::allocator<char>::allocator(&v43);
              std::string::basic_string(v2 + 320, v2 + 96, 8LL, &v43);
              std::allocator<char>::~allocator(&v43);
              std::string::basic_string(v2 + 384);
              if ( common::tools::RsaUtils::publicEncryp(
                     &rsa_config_ptr->client_public_key,
                     (const std::string *)(v2 + 320),
                     (std::string *)(v2 + 384)) >= 0 )
              {
                common::tools::StringUtils::base64Encode((std::string *)&v50, (const std::string *)(v2 + 384));
                proto::GetPlayerTokenRsp::set_server_rand_key(rsp_0, (std::string *)&v50);
                std::string::~string(&v50);
                std::string::basic_string(v2 + 448);
                p_server_private_key = &rsa_config_ptr->server_private_key;
                v31 = (const EVP_MD *)EVP_sha256();
                if ( common::tools::RsaUtils::privateSign(
                       v31,
                       p_server_private_key,
                       (const std::string *)(v2 + 320),
                       (std::string *)(v2 + 448)) >= 0 )
                {
                  proto::GetPlayerTokenRsp::set_sign(rsp_0, (const std::string *)(v2 + 448));
                  proto::GetPlayerTokenRsp::set_retcode(rsp_0, 0);
                  common::milog::MiLogStream::create(
                    &v50,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/service/login_handler.cpp",
                    "genSecretSeed",
                    483);
                  v35 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                          &v50,
                          (const char (*)[22])"client_encrypted_key:");
                  v36 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                          v35,
                          (const std::string *)(v2 + 128));
                  v37 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                          v36,
                          (const char (*)[14])" client_rand:");
                  v38 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                          v37,
                          (const unsigned __int64 *)(v2 + 64));
                  v39 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                          v38,
                          (const char (*)[14])" server_sign:");
                  v40 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                          v39,
                          (const std::string *)(v2 + 448));
                  v41 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                          v40,
                          (const char (*)[14])" server_rand:");
                  common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                    v41,
                    (const unsigned __int64 *)(v2 + 32));
                  common::milog::MiLogStream::~MiLogStream(&v50);
                  v10 = *(_QWORD *)(v2 + 64) ^ *(_QWORD *)(v2 + 32);
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v50,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/service/login_handler.cpp",
                    "genSecretSeed",
                    476);
                  v32 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                          &v50,
                          (const char (*)[40])"server private sign failed, server_key:");
                  v33 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                          v32,
                          (const std::string *)(v2 + 320));
                  v34 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v33, (const char (*)[6])" uid:");
                  val = proto::GetPlayerTokenRsp::uid(rsp_0);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &val);
                  common::milog::MiLogStream::~MiLogStream(&v50);
                  v10 = *(_QWORD *)(v2 + 32);
                }
                std::string::~string((void *)(v2 + 448));
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v50,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/service/login_handler.cpp",
                  "genSecretSeed",
                  467);
                v27 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                        &v50,
                        (const char (*)[41])"client public encryp failed, server_key:");
                v28 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                        v27,
                        (const std::string *)(v2 + 320));
                v29 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v28, (const char (*)[6])" uid:");
                val = proto::GetPlayerTokenRsp::uid(rsp_0);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &val);
                common::milog::MiLogStream::~MiLogStream(&v50);
                v10 = *(_QWORD *)(v2 + 32);
              }
              std::string::~string((void *)(v2 + 384));
              std::string::~string((void *)(v2 + 320));
            }
            else
            {
              common::milog::MiLogStream::create(
                &v50,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/service/login_handler.cpp",
                "genSecretSeed",
                452);
              v23 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                      &v50,
                      (const char (*)[32])"client_rand_key is not uint64: ");
              v24 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                      v23,
                      (const std::string *)(v2 + 256));
              v25 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v24, (const char (*)[6])" uid:");
              val = proto::GetPlayerTokenRsp::uid(rsp_0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
              common::milog::MiLogStream::~MiLogStream(&v50);
              v10 = *(_QWORD *)(v2 + 32);
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v50,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/service/login_handler.cpp",
              "genSecretSeed",
              447);
            v20 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    &v50,
                    (const char (*)[31])"client_rand_key decryp failed:");
            v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                    v20,
                    (const std::string *)(v2 + 192));
            v22 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v21, (const char (*)[6])" uid:");
            val = proto::GetPlayerTokenRsp::uid(rsp_0);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
            common::milog::MiLogStream::~MiLogStream(&v50);
            v10 = *(_QWORD *)(v2 + 32);
          }
          std::string::~string((void *)(v2 + 256));
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v50,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/login_handler.cpp",
        "genSecretSeed",
        422);
      v12 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v50,
              (const char (*)[35])"can't find region config, region: ");
      ServiceBox::findService<GateserverService>();
      GateserverService::getConfig((GateserverService *const)&v49);
      v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, &v13->region_name);
      std::shared_ptr<Config>::~shared_ptr(&v49);
      common::milog::MiLogStream::~MiLogStream(&v50);
      v10 = *(_QWORD *)(v2 + 32);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v50,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/login_handler.cpp",
      "genSecretSeed",
      413);
    v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v50,
           (const char (*)[29])"client_rand_key is too long:");
    v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, (const std::string *)(v2 + 192));
    v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" uid:");
    val = proto::GetPlayerTokenRsp::uid(rsp_0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v50);
    v10 = *(_QWORD *)(v2 + 32);
  }
  std::string::~string((void *)(v2 + 192));
  std::string::~string((void *)(v2 + 128));
  result = v10;
  if ( v51 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF803C) = 0;
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
  }
  return result;
};

// Line 490: range 000000000C768990-000000000C7691C8
int32_t __cdecl LoginHandler::onPlayerLoginReq(LoginHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v5; // rax
  GateserverApp *v6; // rax
  uint32_t AppId; // eax
  TracingMgr *v8; // r14
  SpanContextGuardMgr *v9; // rax
  const jaegertracing::SpanContext *v10; // rax
  common::minet::Packet *v11; // r14
  GateserverService *v12; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t v14; // eax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int32_t v17; // r14d
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // r14
  unsigned __int64 v20; // rax
  unsigned int (__fastcall *v21)(std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, opentracing::v3::string_view *); // r15
  bool v22; // r14
  int32_t result; // eax
  opentracing::v3::string_view operation_name; // [rsp+20h] [rbp-370h] BYREF
  std::function<void(std::shared_ptr<jaegertracing::Span>&)> p_fini_func; // [rsp+30h] [rbp-360h] BYREF
  opentracing::v3::Value value; // [rsp+50h] [rbp-340h] BYREF
  char v27[784]; // [rsp+80h] [rbp-310h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(736LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 4 7 ret:491 48 4 14 session_id:508 64 16 15 session_ptr:509 96 16 18 rsp_packet_ptr:525 128"
                        " 32 16 span_ctx_str:502 192 56 14 span_proxy:492 288 376 7 rsp:523";
  *(_QWORD *)(v2 + 16) = LoginHandler::onPlayerLoginReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -234881024;
  v4[536862728] = -218959118;
  v4[536862740] = -218103808;
  v4[536862741] = -202116109;
  v4[536862742] = -202116109;
  *(_DWORD *)(v2 + 32) = 0;
  std::function<void ()(std::shared_ptr<jaegertracing::Span> &)>::function<LoginHandler::onPlayerLoginReq(std::shared_ptr<common::minet::Packet>)::{lambda(std::shared_ptr<jaegertracing::Span> &)#1},void,void>(
    &p_fini_func,
    (LoginHandler::onPlayerLoginReq::<lambda(SpanPtr&)>)(v2 + 32));
  opentracing::v3::string_view::string_view(&operation_name, "onPlayerLoginReq");
  v5 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  SpanProxy::SpanProxy((SpanProxy *const)(v2 + 192), v5, operation_name, 0LL, 5u, &p_fini_func);
  std::function<void ()(std::shared_ptr<jaegertracing::Span> &)>::~function(&p_fini_func);
  v6 = Singleton<GateserverApp>::instance();
  AppId = AppBase::getAppId((AppBase *const)v6);
  common::tools::AppIdUtils::getAppIdStr[abi:cxx11]((std::string *)&p_fini_func, AppId);
  opentracing::v3::Value::Value(&value, (std::string *)&p_fini_func);
  opentracing::v3::string_view::string_view(&operation_name, "app_id");
  SpanProxy::SetTag((SpanProxy *const)(v2 + 192), operation_name, &value);
  opentracing::v3::Value::~Value(&value);
  std::string::~string(&p_fini_func);
  std::string::basic_string(v2 + 128);
  v8 = std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::tracing_mgr_ptr);
  v9 = SpanContextGuardMgr::instance();
  v10 = SpanContextGuardMgr::back(v9);
  TracingMgr::inject(v8, v10, (std::string *)(v2 + 128));
  v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  std::string::basic_string(&p_fini_func, v2 + 128);
  common::minet::Packet::setSpanContextStr(v11, (std::string *)&p_fini_func);
  std::string::~string(&p_fini_func);
  v12 = ServiceBox::findService<GateserverService>();
  ExternalMonitorReportMgr::addLoginValue(&v12->external_monitor_report_mgr);
  v13 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  *(_DWORD *)(v2 + 48) = common::minet::Packet::getUserSessionId(v13);
  v14 = (unsigned int)ServiceBox::findService<GateserverService>();
  GateserverService::findPlayerSession((GateserverService *const)(v2 + 64), v14);
  if ( std::operator==<PlayerSession>(0LL, (const std::shared_ptr<PlayerSession> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&p_fini_func,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/login_handler.cpp",
      "onPlayerLoginReq",
      512);
    v15 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            (common::milog::MiLogStream *const)&p_fini_func,
            (const char (*)[20])"findPlayerSession: ");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v16, (const char (*)[8])" failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_fini_func);
    *(_DWORD *)(v2 + 32) = -1;
    v17 = *(_DWORD *)(v2 + 32);
  }
  else
  {
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      (std::shared_ptr<common::minet::Packet> *const)&operation_name,
      p_packet_ptr);
    *(_DWORD *)(v2 + 32) = LoginHandler::playerLogin(
                             this,
                             (const PlayerSessionPtr *)(v2 + 64),
                             (common::minet::PacketPtr *)&operation_name,
                             (SpanProxy *)(v2 + 192));
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&operation_name);
    if ( *(_DWORD *)(v2 + 32) )
    {
      proto::PlayerLoginRsp::PlayerLoginRsp((proto::PlayerLoginRsp *const)(v2 + 288));
      proto::PlayerLoginRsp::set_retcode((proto::PlayerLoginRsp *const)(v2 + 288), *(_DWORD *)(v2 + 32));
      common::minet::PacketUtils::createPacket<proto::PlayerLoginRsp>((const proto::PlayerLoginRsp *)(v2 + 96));
      if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 96)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&p_fini_func,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/service/login_handler.cpp",
          "onPlayerLoginReq",
          528);
        common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
          (common::milog::MiLogStream *const)&p_fini_func,
          (const char (*)[21])"create packet failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_fini_func);
        v17 = -1;
      }
      else
      {
        v18 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v19 = v18;
        if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v18);
        v20 = (unsigned __int64)(v19->_vptr_KcpSession + 5);
        if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v19->_vptr_KcpSession + 5);
        v21 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, opentracing::v3::string_view *))v20;
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          (std::shared_ptr<common::minet::Packet> *const)&operation_name,
          (const std::shared_ptr<common::minet::Packet> *)(v2 + 96));
        v22 = v21(v19, &operation_name) != 0;
        std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&operation_name);
        if ( v22 )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&p_fini_func,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/service/login_handler.cpp",
            "onPlayerLoginReq",
            533);
          common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            (common::milog::MiLogStream *const)&p_fini_func,
            (const char (*)[31])"session_ptr->sendPacket failed");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_fini_func);
          v17 = -1;
        }
        else
        {
          *(_DWORD *)(v2 + 32) = proto::PlayerLoginRsp::retcode((const proto::PlayerLoginRsp *const)(v2 + 288));
          v17 = *(_DWORD *)(v2 + 32);
        }
      }
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 96));
      proto::PlayerLoginRsp::~PlayerLoginRsp((proto::PlayerLoginRsp *const)(v2 + 288));
    }
    else
    {
      *(_DWORD *)(v2 + 32) = 0;
      v17 = *(_DWORD *)(v2 + 32);
    }
  }
  std::shared_ptr<PlayerSession>::~shared_ptr((std::shared_ptr<PlayerSession> *const)(v2 + 64));
  std::string::~string((void *)(v2 + 128));
  SpanProxy::~SpanProxy((SpanProxy *const)(v2 + 192));
  result = v17;
  if ( v27 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8058) = 0;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8058) = -168430091;
  }
  return result;
};

// Line 493: range 000000000C76888E-000000000C76898F
void __cdecl LoginHandler::onPlayerLoginReq(std::shared_ptr<common::minet::Packet>)::{lambda(std::shared_ptr&<jaegertracing::Span>)#1}::operator()(
        const LoginHandler::onPlayerLoginReq::<lambda(SpanPtr&)> *const __closure,
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

// Line 541: range 000000000C7691CA-000000000C76A2D2
int32_t __cdecl LoginHandler::playerLogin(
        LoginHandler *const this,
        const PlayerSessionPtr *session_ptr,
        common::minet::PacketPtr *p_packet_ptr,
        SpanProxy *root_span_proxy)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v7; // rax
  int32_t v8; // r13d
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  const std::string *v11; // r13
  const std::string *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r13
  const std::string *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r13
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  const std::string *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r13
  const std::string *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r13
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  PlayerSession *v30; // rax
  google::protobuf::uint32 v31; // r13d
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  common::milog::MiLogStream *v33; // r13
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // r13
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  uint32_t PlatformType; // eax
  uint32_t v39; // eax
  const std::string *v40; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  const std::string *v42; // rax
  common::milog::MiLogStream *v43; // r13
  const std::string *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // r13
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  const std::string *v48; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  const std::string *v50; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v51; // rax
  const std::string *v52; // r13
  const std::string *v53; // rax
  common::milog::MiLogStream *v54; // r13
  const std::string *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // r13
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rax
  const std::string *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // r13
  const std::string *v62; // rax
  PlayerSession *v63; // rax
  common::milog::MiLogStream *v64; // rax
  PlayerSession *v65; // r13
  const std::string *v66; // r15
  const std::string *v67; // rax
  common::milog::MiLogStream *v68; // rax
  GateserverService *v69; // r13
  LoginHandler **v70; // r9
  int32_t result; // eax
  LoginHandler **v72; // [rsp+0h] [rbp-280h]
  const std::_Placeholder<1> *v73; // [rsp+0h] [rbp-280h]
  std::_Placeholder<1> *v74; // [rsp+8h] [rbp-278h]
  const std::_Placeholder<2> *v75; // [rsp+8h] [rbp-278h]
  __m128i v76; // [rsp+10h] [rbp-270h] BYREF
  __m128i v77; // [rsp+20h] [rbp-260h] BYREF
  SpanProxy *root_span_proxya; // [rsp+30h] [rbp-250h]
  common::minet::PacketPtr *p_packet_ptra; // [rsp+38h] [rbp-248h]
  const PlayerSessionPtr *session_ptra; // [rsp+40h] [rbp-240h]
  LoginHandler *thisa; // [rsp+48h] [rbp-238h]
  unsigned int v82; // [rsp+50h] [rbp-230h] BYREF
  unsigned int val; // [rsp+54h] [rbp-22Ch] BYREF
  uint32_t now; // [rsp+58h] [rbp-228h]
  uint32_t last_login_req_time; // [rsp+5Ch] [rbp-224h]
  LoginHandler *v86; // [rsp+60h] [rbp-220h] BYREF
  LoginHandler *v87; // [rsp+68h] [rbp-218h] BYREF
  proto::PlayerLoginReq *req; // [rsp+70h] [rbp-210h]
  const SecurityConfig *security_config; // [rsp+78h] [rbp-208h]
  int (*v90[2])(LoginHandler *, std::shared_ptr<common::minet::Packet>, std::any); // [rsp+80h] [rbp-200h] BYREF
  int (*__f[2])(LoginHandler *, std::shared_ptr<common::minet::Packet>, std::any, int); // [rsp+90h] [rbp-1F0h] BYREF
  std::shared_ptr<common::minet::Packet> v92; // [rsp+A0h] [rbp-1E0h] BYREF
  opentracing::v3::string_view operation_name; // [rsp+B0h] [rbp-1D0h] BYREF
  std::_Bind_helper<false,int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>,std::any),LoginHandler*,const std::_Placeholder<1>&,const std::_Placeholder<2>&>::type v94; // [rsp+C0h] [rbp-1C0h] BYREF
  std::_Bind_helper<false,int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>,std::any,int),LoginHandler*,const std::_Placeholder<1>&,const std::_Placeholder<2>&,const std::_Placeholder<3>&>::type p___f; // [rsp+E0h] [rbp-1A0h] BYREF
  std::function<int(std::shared_ptr<common::minet::Packet>,std::any)> v96; // [rsp+100h] [rbp-180h] BYREF
  std::function<int(std::shared_ptr<common::minet::Packet>,std::any,int)> packet_ptr; // [rsp+120h] [rbp-160h] BYREF
  opentracing::v3::Value value; // [rsp+140h] [rbp-140h] BYREF
  std::_Placeholder<1> v99[272]; // [rsp+170h] [rbp-110h] BYREF

  thisa = this;
  session_ptra = session_ptr;
  p_packet_ptra = p_packet_ptr;
  root_span_proxya = root_span_proxy;
  v4 = (unsigned __int64)v99;
  v74 = v99;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 4 7 ret:542 48 4 7 uid:550 64 16 11 req_ptr:557 96 16 19 status_data_ptr:630 128 56 14 span_proxy:543";
  *(_QWORD *)(v4 + 16) = LoginHandler::playerLogin;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862725] = -218103808;
  v6[536862726] = -202116109;
  *(_DWORD *)(v4 + 32) = 0;
  opentracing::v3::string_view::string_view(&operation_name, "playerLogin");
  v7 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  SpanProxy::SpanProxy((SpanProxy *const)(v4 + 128), v7, operation_name, 0LL, 0, (const int *)(v4 + 32));
  if ( std::operator==<PlayerSession>(session_ptra, 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&packet_ptr,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/login_handler.cpp",
      "playerLogin",
      547);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
      (common::milog::MiLogStream *const)&packet_ptr,
      (const char (*)[20])"session_ptr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&packet_ptr);
    *(_DWORD *)(v4 + 32) = -1;
    v8 = *(_DWORD *)(v4 + 32);
    goto LABEL_38;
  }
  v9 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptra);
  *(_DWORD *)(v4 + 48) = PlayerSession::getUid(v9);
  opentracing::v3::Value::Value<unsigned int,(void *)0>(&value, *(_DWORD *)(v4 + 48));
  opentracing::v3::string_view::string_view(&operation_name, off_1A0E5B60);
  SpanProxy::SetTag(root_span_proxya, operation_name, &value);
  opentracing::v3::Value::~Value(&value);
  if ( !*(_DWORD *)(v4 + 48) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&packet_ptr,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/login_handler.cpp",
      "playerLogin",
      554);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      (common::milog::MiLogStream *const)&packet_ptr,
      (const char (*)[34])"getUid is 0, GetPlayerToken first");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&packet_ptr);
    *(_DWORD *)(v4 + 32) = -1;
    v8 = *(_DWORD *)(v4 + 32);
    goto LABEL_38;
  }
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptra);
  common::minet::Packet::getProto<proto::PlayerLoginReq>((common::minet::Packet *const)(v4 + 64));
  if ( std::operator==<proto::PlayerLoginReq>((const std::shared_ptr<proto::PlayerLoginReq> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&packet_ptr,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/login_handler.cpp",
      "playerLogin",
      557);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&packet_ptr, "get PlayerLoginReq failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&packet_ptr);
    v8 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::PlayerLoginReq,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerLoginReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    v10 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptra);
    v11 = PlayerSession::getAccountToken[abi:cxx11](v10);
    v12 = proto::PlayerLoginReq::token[abi:cxx11](req);
    if ( std::operator!=<char>(v12, v11) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&packet_ptr,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/login_handler.cpp",
        "playerLogin",
        560);
      v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
              (common::milog::MiLogStream *const)&packet_ptr,
              (const char (*)[6])"uid: ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 48));
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v14, (const char (*)[16])"token not fit: ");
      v16 = proto::PlayerLoginReq::token[abi:cxx11](req);
      v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, v16);
      v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])" ");
      v19 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptra);
      v20 = PlayerSession::getAccountToken[abi:cxx11](v19);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, v20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&packet_ptr);
      *(_DWORD *)(v4 + 32) = -1;
      v8 = *(_DWORD *)(v4 + 32);
    }
    else if ( proto::PlayerLoginReq::target_uid(req) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&packet_ptr,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/login_handler.cpp",
        "playerLogin",
        565);
      v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
              (common::milog::MiLogStream *const)&packet_ptr,
              (const char (*)[6])"uid: ");
      v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v4 + 48));
      v23 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v22,
              (const char (*)[22])"target_uid is not 0: ");
      v24 = proto::PlayerLoginReq::token[abi:cxx11](req);
      v25 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, v24);
      v26 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v25, (const char (*)[13])" target_uid:");
      val = proto::PlayerLoginReq::target_uid(req);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&packet_ptr);
      *(_DWORD *)(v4 + 32) = -1;
      v8 = *(_DWORD *)(v4 + 32);
    }
    else
    {
      now = common::tools::TimeUtils::getNow();
      v27 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptra);
      last_login_req_time = PlayerSession::getLastLoginReqTime(v27);
      if ( !last_login_req_time || now >= last_login_req_time + 60 )
      {
        v30 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptra);
        PlayerSession::setLastLoginReqTime(v30, now);
        v31 = proto::PlayerLoginReq::platform_type(req);
        v32 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptra);
        if ( v31 != PlayerSession::getPlatformType(v32) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&packet_ptr,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/service/login_handler.cpp",
            "playerLogin",
            583);
          v33 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                  (common::milog::MiLogStream *const)&packet_ptr,
                  (const char (*)[64])"different platform_type in TokenReq and LoginReq! in login_req:");
          v82 = proto::PlayerLoginReq::platform_type(req);
          v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &v82);
          v35 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  v34,
                  (const char (*)[24])" going to change it to:");
          v36 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptra);
          val = PlayerSession::getPlatformType(v36);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &val);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&packet_ptr);
          v37 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptra);
          PlatformType = PlayerSession::getPlatformType(v37);
          proto::PlayerLoginReq::set_platform_type(req, PlatformType);
        }
        v39 = proto::PlayerLoginReq::platform_type(req);
        if ( TxtConfigMgr::isPsnPlatform(v39) )
        {
          v40 = proto::PlayerLoginReq::psn_id[abi:cxx11](req);
          if ( (unsigned __int8)std::string::empty(v40) )
          {
            v41 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptra);
            v42 = PlayerSession::getPsnId[abi:cxx11](v41);
            if ( (unsigned __int8)std::string::empty(v42) != 1 )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&packet_ptr,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/service/login_handler.cpp",
                "playerLogin",
                594);
              v43 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                      (common::milog::MiLogStream *const)&packet_ptr,
                      (const char (*)[54])"different psn_id in TokenReq and LoginReq, login_req:");
              v44 = proto::PlayerLoginReq::psn_id[abi:cxx11](req);
              v45 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v43, v44);
              v46 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                      v45,
                      (const char (*)[24])" going to change it to:");
              v47 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptra);
              v48 = PlayerSession::getPsnId[abi:cxx11](v47);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v46, v48);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&packet_ptr);
              v49 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptra);
              v50 = PlayerSession::getPsnId[abi:cxx11](v49);
              proto::PlayerLoginReq::set_psn_id(req, v50);
            }
            else
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&packet_ptr,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/service/login_handler.cpp",
                "playerLogin",
                600);
              common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                (common::milog::MiLogStream *const)&packet_ptr,
                (const char (*)[41])"psn id LoginReq and TokenReq both empty!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&packet_ptr);
            }
          }
          else
          {
            v51 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptra);
            v52 = PlayerSession::getPsnId[abi:cxx11](v51);
            v53 = proto::PlayerLoginReq::psn_id[abi:cxx11](req);
            if ( std::operator!=<char>(v53, v52) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&packet_ptr,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/service/login_handler.cpp",
                "playerLogin",
                606);
              v54 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
                      (common::milog::MiLogStream *const)&packet_ptr,
                      (const char (*)[5])"uid:");
              v55 = proto::PlayerLoginReq::account_uid[abi:cxx11](req);
              v56 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v54, v55);
              v57 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                      v56,
                      (const char (*)[37])" psnid is different! TokenReq psnId:");
              v58 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptra);
              v59 = PlayerSession::getPsnId[abi:cxx11](v58);
              v60 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v57, v59);
              v61 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                      v60,
                      (const char (*)[17])" LoginReq psnId:");
              v62 = proto::PlayerLoginReq::psn_id[abi:cxx11](req);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v61, v62);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&packet_ptr);
              *(_DWORD *)(v4 + 32) = 12;
              v8 = *(_DWORD *)(v4 + 32);
              goto LABEL_37;
            }
          }
        }
        v63 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptra);
        if ( PlayerSession::verifyAntiOfflineReplyOnLoginReq(v63, req) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&packet_ptr,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/service/login_handler.cpp",
            "playerLogin",
            615);
          v64 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                  (common::milog::MiLogStream *const)&packet_ptr,
                  (const char (*)[44])"verifyAntiOfflineReplyOnLoginReq fail, uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v64, (const unsigned int *)(v4 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&packet_ptr);
          *(_DWORD *)(v4 + 32) = 36;
          v8 = *(_DWORD *)(v4 + 32);
        }
        else
        {
          v65 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptra);
          v66 = proto::PlayerLoginReq::client_verison_hash[abi:cxx11](req);
          v67 = proto::PlayerLoginReq::client_version[abi:cxx11](req);
          if ( !PlayerSession::verifyClientVersionHash(v65, v67, v66) )
            goto LABEL_33;
          ServiceBox::findService<GateserverService>();
          GateserverService::getConfig((GateserverService *const)&operation_name);
          security_config = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&operation_name)->security_config;
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&operation_name);
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&packet_ptr,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/service/login_handler.cpp",
            "playerLogin",
            622);
          v68 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  (common::milog::MiLogStream *const)&packet_ptr,
                  (const char (*)[35])"verifyClientVersionHash fail, uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v68, (const unsigned int *)(v4 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&packet_ptr);
          if ( *(_BYTE *)(((unsigned __int64)&security_config->is_check_client_verion_hash_fail_forbid_login >> 3)
                        + 0x7FFF8000) != 0
            && (((unsigned __int8)security_config + 99) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_check_client_verion_hash_fail_forbid_login >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load1(&security_config->is_check_client_verion_hash_fail_forbid_login);
          }
          if ( security_config->is_check_client_verion_hash_fail_forbid_login )
          {
            *(_DWORD *)(v4 + 32) = 40;
            v8 = *(_DWORD *)(v4 + 32);
          }
          else
          {
LABEL_33:
            common::tools::perf::make_shared<proto::PlayerStatusRedisData>();
            if ( std::operator==<proto::PlayerStatusRedisData>(
                   (const std::shared_ptr<proto::PlayerStatusRedisData> *)(v4 + 96),
                   0LL) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&packet_ptr,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/service/login_handler.cpp",
                "playerLogin",
                633);
              common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                (common::milog::MiLogStream *const)&packet_ptr,
                (const char (*)[24])"status_data_ptr is null");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&packet_ptr);
              *(_DWORD *)(v4 + 32) = -1;
            }
            else
            {
              v69 = ServiceBox::findService<GateserverService>();
              std::any::any<std::shared_ptr<proto::PlayerStatusRedisData> &,std::shared_ptr<proto::PlayerStatusRedisData>,std::any::_Manager_external<std::shared_ptr<proto::PlayerStatusRedisData>>,true,true>(
                (std::any *const)&operation_name,
                (std::shared_ptr<proto::PlayerStatusRedisData> *)(v4 + 96));
              std::shared_ptr<common::minet::Packet>::shared_ptr(&v92, p_packet_ptra);
              v87 = thisa;
              v76.m128i_i64[0] = (__int64)LoginHandler::asyncQueryPlayerStatusCallback;
              v76.m128i_i64[1] = 0LL;
              *(__m128i *)__f = _mm_load_si128(&v76);
              std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>,std::any,int),LoginHandler*,std::_Placeholder<1> const&,std::_Placeholder const&<2>,std::_Placeholder const&<3>>(
                &p___f,
                __f,
                &v87,
                (const std::_Placeholder<1> *)&std::placeholders::_1,
                (const std::_Placeholder<2> *)&std::placeholders::_2,
                (const std::_Placeholder<3> *)&std::placeholders::_3,
                v72,
                v99,
                (const std::_Placeholder<2> *)LoginHandler::asyncQueryPlayerStatusCallback,
                0LL);
              std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any,int)>::function<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>,std::any,int) ()(LoginHandler*,std::_Placeholder<1>,std::_Placeholder<2>,std::_Placeholder<3>)>,void,void>(
                &packet_ptr,
                &p___f);
              v86 = thisa;
              v77.m128i_i64[0] = (__int64)LoginHandler::asyncQueryPlayerStatus;
              v77.m128i_i64[1] = 0LL;
              *(__m128i *)v90 = _mm_load_si128(&v77);
              std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>,std::any),LoginHandler*,std::_Placeholder<1> const&,std::_Placeholder const&<2>>(
                &v94,
                v90,
                &v86,
                (const std::_Placeholder<1> *)&std::placeholders::_1,
                (const std::_Placeholder<2> *)&std::placeholders::_2,
                v70,
                v73,
                v75);
              std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any)>::function<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>,std::any) ()(LoginHandler*,std::_Placeholder<1>,std::_Placeholder<2>)>,void,void>(
                &v96,
                &v94);
              *(_DWORD *)(v4 + 32) = ServiceBase::pushAsyncTask(
                                       v69,
                                       (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &v96),
                                       (std::any)__PAIR128__(&operation_name, &v92));
              std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any)>::~function(&v96);
              std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any,int)>::~function(&packet_ptr);
              std::shared_ptr<common::minet::Packet>::~shared_ptr(&v92);
              std::any::~any((std::any *const)&operation_name);
            }
            v8 = *(_DWORD *)(v4 + 32);
            std::shared_ptr<proto::PlayerStatusRedisData>::~shared_ptr((std::shared_ptr<proto::PlayerStatusRedisData> *const)(v4 + 96));
          }
        }
        goto LABEL_37;
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&packet_ptr,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/login_handler.cpp",
        "playerLogin",
        576);
      v28 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
              (common::milog::MiLogStream *const)&packet_ptr,
              (const char (*)[6])"uid: ");
      v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        v29,
        (const char (*)[24])" wait for redis result!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&packet_ptr);
      *(_DWORD *)(v4 + 32) = 14;
      v8 = *(_DWORD *)(v4 + 32);
    }
  }
LABEL_37:
  std::shared_ptr<proto::PlayerLoginReq>::~shared_ptr((std::shared_ptr<proto::PlayerLoginReq> *const)(v4 + 64));
LABEL_38:
  SpanProxy::~SpanProxy((SpanProxy *const)(v4 + 128));
  result = v8;
  if ( v74 == (std::_Placeholder<1> *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8014) = 0LL;
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

// Line 649: range 000000000C76A2D4-000000000C76A9CD
int32_t __cdecl LoginHandler::asyncQueryPlayerStatus(
        LoginHandler *const this,
        common::minet::PacketPtr *p_packet_ptr,
        std::any *p_context)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  TracingMgr *v6; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  const jaegertracing::SpanContext *v8; // r14
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v9; // rax
  std::size_t v10; // r14
  const std::type_info *v11; // rax
  const char *v12; // r14
  const std::type_info *v13; // rax
  const char *v14; // rax
  int32_t v15; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<proto::PlayerStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  int32_t result; // eax
  opentracing::v3::string_view operation_name; // [rsp+30h] [rbp-160h] BYREF
  std::string in_str; // [rsp+40h] [rbp-150h] BYREF
  char v24[304]; // [rsp+60h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 1 12 is_exist:664 64 4 7 ret:650 80 4 7 uid:663 96 8 17 root_span_ctx:651 128 16 19 status_"
                        "data_ptr:655 160 56 14 span_proxy:652";
  *(_QWORD *)(v3 + 16) = LoginHandler::asyncQueryPlayerStatus;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  *(_DWORD *)(v3 + 64) = 0;
  v6 = std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::tracing_mgr_ptr);
  v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getSpanContextStr[abi:cxx11](&in_str, v7);
  TracingMgr::extract(
    v3 + 96,
    v6,
    (std::__shared_ptr<opentracing::v3::Tracer,(__gnu_cxx::_Lock_policy)2>::element_type *)&in_str);
  std::string::~string(&in_str);
  v8 = std::unique_ptr<jaegertracing::SpanContext>::get((const std::unique_ptr<jaegertracing::SpanContext> *const)(v3 + 96));
  opentracing::v3::string_view::string_view(&operation_name, "asyncQueryPlayerStatus");
  v9 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  SpanProxy::SpanProxy((SpanProxy *const)(v3 + 160), v9, operation_name, v8, 0, (const int *)(v3 + 64));
  v10 = std::type_info::hash_code((const std::type_info *const)&`typeinfo for'std::shared_ptr<proto::PlayerStatusRedisData>);
  v11 = std::any::type(p_context);
  if ( v10 == std::type_info::hash_code(v11) )
  {
    std::shared_ptr<proto::PlayerStatusRedisData>::shared_ptr(
      (std::shared_ptr<proto::PlayerStatusRedisData> *const)(v3 + 128),
      0LL);
    std::any_cast<std::shared_ptr<proto::PlayerStatusRedisData>>((std::any *)&operation_name);
    std::shared_ptr<proto::PlayerStatusRedisData>::operator=(
      (std::shared_ptr<proto::PlayerStatusRedisData> *const)(v3 + 128),
      (std::shared_ptr<proto::PlayerStatusRedisData> *)&operation_name);
    std::shared_ptr<proto::PlayerStatusRedisData>::~shared_ptr((std::shared_ptr<proto::PlayerStatusRedisData> *const)&operation_name);
    if ( std::operator==<proto::PlayerStatusRedisData>(
           0LL,
           (const std::shared_ptr<proto::PlayerStatusRedisData> *)(v3 + 128)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&in_str,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/login_handler.cpp",
        "asyncQueryPlayerStatus",
        658);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        (common::milog::MiLogStream *const)&in_str,
        (const char (*)[27])"status_data_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
      *(_DWORD *)(v3 + 64) = -1;
      v15 = *(_DWORD *)(v3 + 64);
    }
    else
    {
      v16 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      *(_DWORD *)(v3 + 80) = common::minet::Packet::getUserId(v16);
      *(_BYTE *)(v3 + 48) = 0;
      v17 = std::__shared_ptr_access<proto::PlayerStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      if ( RedisOpPlayerStatus::getPlayerStatus(*(_DWORD *)(v3 + 80), v17, (bool *)(v3 + 48)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&in_str,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/service/login_handler.cpp",
          "asyncQueryPlayerStatus",
          667);
        v18 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                (common::milog::MiLogStream *const)&in_str,
                (const char (*)[30])"getPlayerStatus failed, uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
        *(_DWORD *)(v3 + 64) = -1;
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&in_str,
          &common::milog::MiLogDefault::default_log_obj_,
          5u,
          "./src/service/login_handler.cpp",
          "asyncQueryPlayerStatus",
          671);
        v19 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                (common::milog::MiLogStream *const)&in_str,
                (const char (*)[37])"[LOGIN] queryPlayerStatus succ uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
        *(_DWORD *)(v3 + 64) = 0;
      }
      v15 = *(_DWORD *)(v3 + 64);
    }
    std::shared_ptr<proto::PlayerStatusRedisData>::~shared_ptr((std::shared_ptr<proto::PlayerStatusRedisData> *const)(v3 + 128));
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&in_str,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/login_handler.cpp",
      "asyncQueryPlayerStatus",
      655);
    v12 = std::type_info::name((const std::type_info *const)&`typeinfo for'std::shared_ptr<proto::PlayerStatusRedisData>);
    v13 = std::any::type(p_context);
    v14 = std::type_info::name(v13);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&in_str,
      "bad any_cast from any.type=%s to type=%s",
      v14,
      v12);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
    v15 = -1;
  }
  SpanProxy::~SpanProxy((SpanProxy *const)(v3 + 160));
  std::unique_ptr<jaegertracing::SpanContext>::~unique_ptr((std::unique_ptr<jaegertracing::SpanContext> *const)(v3 + 96));
  result = v15;
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 678: range 000000000C76AAFA-000000000C76B726
int32_t __cdecl LoginHandler::asyncQueryPlayerStatusCallback(
        LoginHandler *const this,
        common::minet::PacketPtr *p_packet_ptr,
        std::any *p_context,
        int32_t retcode)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  TracingMgr *v7; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  const jaegertracing::SpanContext *v9; // r14
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v10; // rax
  std::size_t v11; // r14
  const std::type_info *v12; // rax
  const char *v13; // r14
  const std::type_info *v14; // rax
  const char *v15; // rax
  int32_t v16; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  uint32_t v18; // eax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  uint32_t Uid; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  PlayerSession *v29; // rax
  std::__shared_ptr_access<proto::PlayerStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r14
  std::__shared_ptr_access<proto::PlayerStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // r14
  unsigned __int64 v40; // rax
  void (__fastcall *v41)(std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, opentracing::v3::string_view *); // r15
  int32_t result; // eax
  unsigned int val; // [rsp+38h] [rbp-368h] BYREF
  unsigned int SessionId; // [rsp+3Ch] [rbp-364h] BYREF
  unsigned __int64 v47; // [rsp+40h] [rbp-360h] BYREF
  std::any __any; // [rsp+50h] [rbp-350h] BYREF
  opentracing::v3::string_view operation_name; // [rsp+60h] [rbp-340h] BYREF
  std::string in_str; // [rsp+70h] [rbp-330h] BYREF
  char v51[784]; // [rsp+90h] [rbp-310h] BYREF

  v4 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(736LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 32 4 7 ret:681 48 4 14 session_id:706 64 8 17 root_span_ctx:682 96 16 19 status_data_ptr:698 1"
                        "28 16 15 session_ptr:707 160 16 20 login_packet_ptr:734 192 56 14 span_proxy:683 288 376 13 login_rsp:732";
  *(_QWORD *)(v4 + 16) = LoginHandler::asyncQueryPlayerStatusCallback;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862727] = -234881024;
  v6[536862728] = -218959118;
  v6[536862740] = -218103808;
  v6[536862741] = -202116109;
  v6[536862742] = -202116109;
  *(_DWORD *)(v4 + 32) = -1;
  v7 = std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::tracing_mgr_ptr);
  v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getSpanContextStr[abi:cxx11](&in_str, v8);
  TracingMgr::extract(
    v4 + 64,
    v7,
    (std::__shared_ptr<opentracing::v3::Tracer,(__gnu_cxx::_Lock_policy)2>::element_type *)&in_str);
  std::string::~string(&in_str);
  std::function<void ()(std::shared_ptr<jaegertracing::Span> &)>::function<LoginHandler::asyncQueryPlayerStatusCallback(std::shared_ptr<common::minet::Packet>,std::any,int)::{lambda(std::shared_ptr<jaegertracing::Span> &)#1},void,void>(
    (std::function<void(std::shared_ptr<jaegertracing::Span>&)> *const)&in_str,
    (LoginHandler::asyncQueryPlayerStatusCallback::<lambda(SpanPtr&)>)(v4 + 32));
  v9 = std::unique_ptr<jaegertracing::SpanContext>::get((const std::unique_ptr<jaegertracing::SpanContext> *const)(v4 + 64));
  opentracing::v3::string_view::string_view(&operation_name, "asyncQueryPlayerStatusCallback");
  v10 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  SpanProxy::SpanProxy(
    (SpanProxy *const)(v4 + 192),
    v10,
    operation_name,
    v9,
    0,
    (std::function<void(std::shared_ptr<jaegertracing::Span>&)> *)&in_str);
  std::function<void ()(std::shared_ptr<jaegertracing::Span> &)>::~function((std::function<void(std::shared_ptr<jaegertracing::Span>&)> *const)&in_str);
  v11 = std::type_info::hash_code((const std::type_info *const)&`typeinfo for'std::shared_ptr<proto::PlayerStatusRedisData>);
  v12 = std::any::type(p_context);
  if ( v11 == std::type_info::hash_code(v12) )
  {
    std::shared_ptr<proto::PlayerStatusRedisData>::shared_ptr(
      (std::shared_ptr<proto::PlayerStatusRedisData> *const)(v4 + 96),
      0LL);
    std::any_cast<std::shared_ptr<proto::PlayerStatusRedisData>>(&__any);
    std::shared_ptr<proto::PlayerStatusRedisData>::operator=(
      (std::shared_ptr<proto::PlayerStatusRedisData> *const)(v4 + 96),
      (std::shared_ptr<proto::PlayerStatusRedisData> *)&__any);
    std::shared_ptr<proto::PlayerStatusRedisData>::~shared_ptr((std::shared_ptr<proto::PlayerStatusRedisData> *const)&__any);
    if ( std::operator==<proto::PlayerStatusRedisData>(
           0LL,
           (const std::shared_ptr<proto::PlayerStatusRedisData> *)(v4 + 96)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&in_str,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/login_handler.cpp",
        "asyncQueryPlayerStatusCallback",
        701);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        (common::milog::MiLogStream *const)&in_str,
        (const char (*)[27])"status_data_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
      *(_DWORD *)(v4 + 32) = -1;
      v16 = *(_DWORD *)(v4 + 32);
    }
    else
    {
      v17 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      *(_DWORD *)(v4 + 48) = common::minet::Packet::getUserSessionId(v17);
      v18 = (unsigned int)ServiceBox::findService<GateserverService>();
      GateserverService::findPlayerSession((GateserverService *const)(v4 + 128), v18);
      if ( std::operator==<PlayerSession>(0LL, (const std::shared_ptr<PlayerSession> *)(v4 + 128)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&in_str,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/service/login_handler.cpp",
          "asyncQueryPlayerStatusCallback",
          710);
        v19 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                (common::milog::MiLogStream *const)&in_str,
                (const char (*)[20])"findPlayerSession: ");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v20, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
        *(_DWORD *)(v4 + 32) = -1;
        v16 = *(_DWORD *)(v4 + 32);
      }
      else
      {
        v21 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        Uid = PlayerSession::getUid(v21);
        v23 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        if ( Uid == common::minet::Packet::getUserId(v23) )
        {
          v29 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
          PlayerSession::setLastLoginReqTime(v29, 0);
          if ( retcode )
            goto LABEL_15;
          v30 = std::__shared_ptr_access<proto::PlayerStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          *(_DWORD *)(v4 + 32) = LoginHandler::queryPlayerStatusResult(
                                   this,
                                   (const PlayerSessionPtr *)(v4 + 128),
                                   p_packet_ptr,
                                   v30);
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&in_str,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/service/login_handler.cpp",
            "asyncQueryPlayerStatusCallback",
            724);
          v31 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  (common::milog::MiLogStream *const)&in_str,
                  (const char (*)[42])"[LOGIN] queryPlayerStatusResult retcode: ");
          v32 = common::milog::MiLogStream::operator<<<int,(int *)0>(v31, (const int *)(v4 + 32));
          v33 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v32, (const char (*)[11])" session: ");
          v34 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
          SessionId = common::minet::KcpSession::getSessionId(v34);
          v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &SessionId);
          v36 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v35,
                  (const char (*)[14])" login_rand: ");
          v37 = std::__shared_ptr_access<proto::PlayerStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          v47 = proto::PlayerStatusRedisData::login_rand(v37);
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v36, &v47);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
          if ( *(_DWORD *)(v4 + 32) )
          {
LABEL_15:
            proto::PlayerLoginRsp::PlayerLoginRsp((proto::PlayerLoginRsp *const)(v4 + 288));
            proto::PlayerLoginRsp::set_retcode((proto::PlayerLoginRsp *const)(v4 + 288), *(_DWORD *)(v4 + 32));
            common::minet::PacketUtils::createPacket<proto::PlayerLoginRsp>((const proto::PlayerLoginRsp *)(v4 + 160));
            if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v4 + 160)) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&in_str,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/service/login_handler.cpp",
                "asyncQueryPlayerStatusCallback",
                737);
              common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                (common::milog::MiLogStream *const)&in_str,
                (const char (*)[21])"create packet failed");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
              v16 = -1;
            }
            else
            {
              v38 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
              v39 = v38;
              if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
                __asan_report_load8(v38);
              v40 = (unsigned __int64)(v39->_vptr_KcpSession + 5);
              if ( *(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
                __asan_report_load8(v39->_vptr_KcpSession + 5);
              v41 = *(void (__fastcall **)(std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, opentracing::v3::string_view *))v40;
              std::shared_ptr<common::minet::Packet>::shared_ptr(
                (std::shared_ptr<common::minet::Packet> *const)&operation_name,
                (const std::shared_ptr<common::minet::Packet> *)(v4 + 160));
              v41(v39, &operation_name);
              std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&operation_name);
              *(_DWORD *)(v4 + 32) = proto::PlayerLoginRsp::retcode((const proto::PlayerLoginRsp *const)(v4 + 288));
              v16 = *(_DWORD *)(v4 + 32);
            }
            std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 160));
            proto::PlayerLoginRsp::~PlayerLoginRsp((proto::PlayerLoginRsp *const)(v4 + 288));
          }
          else
          {
            *(_DWORD *)(v4 + 32) = 0;
            v16 = *(_DWORD *)(v4 + 32);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&in_str,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/service/login_handler.cpp",
            "asyncQueryPlayerStatusCallback",
            715);
          v24 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                  (common::milog::MiLogStream *const)&in_str,
                  (const char (*)[13])"session uid:");
          v25 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
          val = PlayerSession::getUid(v25);
          v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
          v27 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  v26,
                  (const char (*)[21])" but packet_ptr uid:");
          v28 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
          SessionId = common::minet::Packet::getUserId(v28);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &SessionId);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
          *(_DWORD *)(v4 + 32) = -1;
          v16 = *(_DWORD *)(v4 + 32);
        }
      }
      std::shared_ptr<PlayerSession>::~shared_ptr((std::shared_ptr<PlayerSession> *const)(v4 + 128));
    }
    std::shared_ptr<proto::PlayerStatusRedisData>::~shared_ptr((std::shared_ptr<proto::PlayerStatusRedisData> *const)(v4 + 96));
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&in_str,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/login_handler.cpp",
      "asyncQueryPlayerStatusCallback",
      698);
    v13 = std::type_info::name((const std::type_info *const)&`typeinfo for'std::shared_ptr<proto::PlayerStatusRedisData>);
    v14 = std::any::type(p_context);
    v15 = std::type_info::name(v14);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&in_str,
      "bad any_cast from any.type=%s to type=%s",
      v15,
      v13);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
    v16 = -1;
  }
  SpanProxy::~SpanProxy((SpanProxy *const)(v4 + 192));
  std::unique_ptr<jaegertracing::SpanContext>::~unique_ptr((std::unique_ptr<jaegertracing::SpanContext> *const)(v4 + 64));
  result = v16;
  if ( v51 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8058) = 0;
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

// Line 684: range 000000000C76A9CE-000000000C76AAF9
void __cdecl LoginHandler::asyncQueryPlayerStatusCallback(std::shared_ptr<common::minet::Packet>,std::any,int)::{lambda(std::shared_ptr&<jaegertracing::Span>)#1}::operator()(
        const LoginHandler::asyncQueryPlayerStatusCallback::<lambda(SpanPtr&)> *const __closure,
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
    TracingMgr::finishSpan(v5, span_ptr, 0, 0);
  }
};

// Line 747: range 000000000C76B728-000000000C76C7CA
int32_t __cdecl LoginHandler::queryPlayerStatusResult(
        LoginHandler *const this,
        const PlayerSessionPtr *session_ptr,
        const common::minet::PacketPtr *req_packet_ptr,
        const proto::PlayerStatusRedisData *status_data)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v7; // rax
  int32_t v9; // r14d
  GateserverService *v10; // rax
  common::milog::MiLogStream *v11; // r14
  GateserverService *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  PlayerSession *v24; // rax
  common::minet::Packet *v25; // rax
  google::protobuf::uint64 v26; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  bool isEditor; // al
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  uint32_t AccountType; // eax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  uint32_t GmUid; // eax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  uint32_t Token; // eax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  bool isGuest; // al
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  uint32_t ChannelId; // eax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  uint32_t SubChannelId; // eax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  uint32_t Tag; // eax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  uint32_t RegPlatform; // eax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  const proto::PlayerExtraBinData *PlayerExtraBinData; // r14
  std::string *v49; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  const std::string *v51; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  uint32_t remote_port; // eax
  common::minet::Packet *v54; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v55; // rax
  PlayerSession *v56; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v57; // r15
  uint32_t v58; // r14d
  uint32_t v59; // r8d
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // r14
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v63; // rax
  common::minet::Packet *v64; // rax
  PlayerSession *v65; // r14
  common::milog::MiLogStream *v66; // r14
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // r14
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v72; // rax
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // r14
  const std::string *v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // r14
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // r14
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // r14
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // r14
  common::milog::MiLogStream *v84; // rax
  common::milog::MiLogStream *v85; // r14
  const std::string *v86; // rax
  int32_t result; // eax
  unsigned int v90; // [rsp+34h] [rbp-2BCh] BYREF
  unsigned int SessionId; // [rsp+38h] [rbp-2B8h] BYREF
  unsigned int v92; // [rsp+3Ch] [rbp-2B4h] BYREF
  proto::PlayerStatusType v93; // [rsp+40h] [rbp-2B0h] BYREF
  proto::PlayerStatusType Uid; // [rsp+44h] [rbp-2ACh] BYREF
  unsigned __int64 val; // [rsp+48h] [rbp-2A8h] BYREF
  opentracing::v3::string_view operation_name; // [rsp+50h] [rbp-2A0h] BYREF
  common::milog::MiLogStream v97; // [rsp+60h] [rbp-290h] BYREF
  common::milog::MiLogStream v98; // [rsp+80h] [rbp-270h] BYREF
  char v99[592]; // [rsp+A0h] [rbp-250h] BYREF

  v4 = (unsigned __int64)v99;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(544LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 4 7 ret:748 48 4 15 new_game_id:757 64 16 17 gs_packet_ptr:807 96 56 14 span_proxy:749 192 "
                        "280 20 cached_login_req:784";
  *(_QWORD *)(v4 + 16) = LoginHandler::queryPlayerStatusResult;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -219021312;
  v6[536862724] = -234881024;
  v6[536862725] = -218959118;
  v6[536862734] = -218103808;
  v6[536862735] = -202116109;
  v6[536862736] = -202116109;
  *(_DWORD *)(v4 + 32) = 0;
  opentracing::v3::string_view::string_view(&operation_name, "queryPlayerStatusResult");
  v7 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  SpanProxy::SpanProxy((SpanProxy *const)(v4 + 96), v7, operation_name, 0LL, 0, (const int *)(v4 + 32));
  if ( std::operator==<PlayerSession>(session_ptr, 0LL) || std::operator==<common::minet::Packet>(req_packet_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v98,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/login_handler.cpp",
      "queryPlayerStatusResult",
      753);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v98, (const char (*)[14])"invalid input");
    common::milog::MiLogStream::~MiLogStream(&v98);
    *(_DWORD *)(v4 + 32) = -1;
    v9 = *(_DWORD *)(v4 + 32);
    goto LABEL_29;
  }
  *(_DWORD *)(v4 + 48) = 0;
  if ( proto::PlayerStatusRedisData::status(status_data) )
  {
    if ( proto::PlayerStatusRedisData::status(status_data) != PLAYER_STATUS_ONLINE )
    {
      common::milog::MiLogStream::create(
        &v98,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/login_handler.cpp",
        "queryPlayerStatusResult",
        770);
      v16 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              &v98,
              (const char (*)[21])"Not support status: ");
      Uid = proto::PlayerStatusRedisData::status(status_data);
      common::milog::MiLogStream::operator<<<proto::PlayerStatusType,(proto::PlayerStatusType*)0>(v16, &Uid);
      common::milog::MiLogStream::~MiLogStream(&v98);
      *(_DWORD *)(v4 + 32) = -1;
      v9 = *(_DWORD *)(v4 + 32);
      goto LABEL_29;
    }
    *(_DWORD *)(v4 + 48) = proto::PlayerStatusRedisData::gameserver_id(status_data);
    common::milog::MiLogStream::create(
      &v98,
      &common::milog::MiLogDefault::default_log_obj_,
      5u,
      "./src/service/login_handler.cpp",
      "queryPlayerStatusResult",
      766);
    v13 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            &v98,
            (const char (*)[23])"[LOGIN] online, game: ");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 48));
    v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v14, (const char (*)[14])" login_rand: ");
    val = proto::PlayerStatusRedisData::login_rand(status_data);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v15, &val);
    common::milog::MiLogStream::~MiLogStream(&v98);
  }
  else
  {
    v10 = ServiceBox::findService<GateserverService>();
    *(_DWORD *)(v4 + 48) = GateserverService::chooseGameserverId(v10);
    common::milog::MiLogStream::create(
      &v97,
      &common::milog::MiLogDefault::default_log_obj_,
      5u,
      "./src/service/login_handler.cpp",
      "queryPlayerStatusResult",
      761);
    v11 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            &v97,
            (const char (*)[35])"[LOGIN] offline, and choose game: ");
    v12 = ServiceBox::findService<GateserverService>();
    GateserverService::getGameServerDesc[abi:cxx11]((std::string *)&v98, v12, *(_DWORD *)(v4 + 48));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, (const std::string *)&v98);
    std::string::~string(&v98);
    common::milog::MiLogStream::~MiLogStream(&v97);
  }
  if ( *(_DWORD *)(v4 + 48) )
  {
    v24 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr);
    PlayerSession::setGameserverId(v24, *(_DWORD *)(v4 + 48));
    proto::PlayerLoginReq::PlayerLoginReq((proto::PlayerLoginReq *const)(v4 + 192));
    v25 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)req_packet_ptr);
    if ( common::minet::Packet::getProto<proto::PlayerLoginReq>(v25, (proto::PlayerLoginReq *)(v4 + 192)) )
    {
      common::milog::MiLogStream::create(
        &v98,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/login_handler.cpp",
        "queryPlayerStatusResult",
        787);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        &v98,
        (const char (*)[32])"req_packet_ptr->getProto failed");
      common::milog::MiLogStream::~MiLogStream(&v98);
      *(_DWORD *)(v4 + 32) = -1;
      v9 = *(_DWORD *)(v4 + 32);
    }
    else
    {
      v26 = proto::PlayerStatusRedisData::login_rand(status_data);
      proto::PlayerLoginReq::set_login_rand((proto::PlayerLoginReq *const)(v4 + 192), v26);
      v27 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr);
      isEditor = PlayerSession::isEditor(v27);
      proto::PlayerLoginReq::set_is_editor((proto::PlayerLoginReq *const)(v4 + 192), isEditor);
      v29 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr);
      AccountType = PlayerSession::getAccountType(v29);
      proto::PlayerLoginReq::set_account_type((proto::PlayerLoginReq *const)(v4 + 192), AccountType);
      v31 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr);
      PlayerSession::getAccountUid[abi:cxx11]((std::string *)&v98, v31);
      proto::PlayerLoginReq::set_account_uid((proto::PlayerLoginReq *const)(v4 + 192), (std::string *)&v98);
      std::string::~string(&v98);
      v32 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr);
      GmUid = PlayerSession::getGmUid(v32);
      proto::PlayerLoginReq::set_gm_uid((proto::PlayerLoginReq *const)(v4 + 192), GmUid);
      v34 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr);
      Token = common::minet::KcpSession::getToken(v34);
      proto::PlayerLoginReq::set_client_token((proto::PlayerLoginReq *const)(v4 + 192), Token);
      v36 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr);
      isGuest = PlayerSession::isGuest(v36);
      proto::PlayerLoginReq::set_is_guest((proto::PlayerLoginReq *const)(v4 + 192), isGuest);
      v38 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr);
      ChannelId = PlayerSession::getChannelId(v38);
      proto::PlayerLoginReq::set_channel_id((proto::PlayerLoginReq *const)(v4 + 192), ChannelId);
      v40 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr);
      SubChannelId = PlayerSession::getSubChannelId(v40);
      proto::PlayerLoginReq::set_sub_channel_id((proto::PlayerLoginReq *const)(v4 + 192), SubChannelId);
      v42 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr);
      Tag = PlayerSession::getTag(v42);
      proto::PlayerLoginReq::set_tag((proto::PlayerLoginReq *const)(v4 + 192), Tag);
      v44 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr);
      PlayerSession::getCountryCode[abi:cxx11]((std::string *)&v98, v44);
      proto::PlayerLoginReq::set_country_code((proto::PlayerLoginReq *const)(v4 + 192), (std::string *)&v98);
      std::string::~string(&v98);
      v45 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr);
      RegPlatform = PlayerSession::getRegPlatform(v45);
      proto::PlayerLoginReq::set_reg_platform((proto::PlayerLoginReq *const)(v4 + 192), RegPlatform);
      v47 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr);
      PlayerExtraBinData = PlayerSession::getPlayerExtraBinData(v47);
      v49 = proto::PlayerLoginReq::mutable_extra_bin_data[abi:cxx11]((proto::PlayerLoginReq *const)(v4 + 192));
      google::protobuf::MessageLite::SerializeToString(PlayerExtraBinData, v49);
      v50 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr);
      v51 = PlayerSession::getBirthday[abi:cxx11](v50);
      proto::PlayerLoginReq::set_birthday((proto::PlayerLoginReq *const)(v4 + 192), v51);
      v52 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr);
      remote_port = common::minet::KcpSession::get_remote_port(v52);
      proto::PlayerLoginReq::set_client_port((proto::PlayerLoginReq *const)(v4 + 192), remote_port);
      common::minet::PacketUtils::createPacket<proto::PlayerLoginReq>((const proto::PlayerLoginReq *)(v4 + 64));
      if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v4 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v98,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/service/login_handler.cpp",
          "queryPlayerStatusResult",
          810);
        common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
          &v98,
          (const char (*)[37])"createPacket(cached_login_req) fails");
        common::milog::MiLogStream::~MiLogStream(&v98);
        *(_DWORD *)(v4 + 32) = -1;
        v9 = *(_DWORD *)(v4 + 32);
      }
      else
      {
        v54 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        v55 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)req_packet_ptr);
        if ( common::minet::Packet::copyHead(v54, v55) )
        {
          common::milog::MiLogStream::create(
            &v98,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/service/login_handler.cpp",
            "queryPlayerStatusResult",
            815);
          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v98,
            (const char (*)[30])"gs_packet_ptr->copyHead fails");
          common::milog::MiLogStream::~MiLogStream(&v98);
          *(_DWORD *)(v4 + 32) = -1;
          v9 = *(_DWORD *)(v4 + 32);
        }
        else
        {
          v56 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr);
          PlayerSession::initPacketHead(v56, req_packet_ptr);
          v57 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
          v58 = *(_DWORD *)(v4 + 48);
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            (std::shared_ptr<common::minet::Packet> *const)&operation_name,
            (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
          LOBYTE(v58) = (unsigned int)NetworkMgrBase::sendPacketToTargetService(
                                        v57,
                                        (common::minet::PacketPtr)__PAIR128__(3LL, &operation_name),
                                        v58,
                                        v59) != 0;
          std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&operation_name);
          if ( (_BYTE)v58 )
          {
            common::milog::MiLogStream::create(
              &v98,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/service/login_handler.cpp",
              "queryPlayerStatusResult",
              822);
            v60 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                    &v98,
                    (const char (*)[47])"sendPacketToTargetService failed, new_game_id:");
            v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v60,
                    (const unsigned int *)(v4 + 48));
            v62 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v61, (const char (*)[6])" uid:");
            v63 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr);
            Uid = PlayerSession::getUid(v63);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, (const unsigned int *)&Uid);
            common::milog::MiLogStream::~MiLogStream(&v98);
            *(_DWORD *)(v4 + 32) = -1;
          }
          else
          {
            proto::PlayerLoginReq::clear_extra_bin_data((proto::PlayerLoginReq *const)(v4 + 192));
            v64 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)req_packet_ptr);
            common::minet::Packet::setProto<proto::PlayerLoginReq>(v64, (const proto::PlayerLoginReq *)(v4 + 192));
            v65 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr);
            std::shared_ptr<common::minet::Packet>::shared_ptr(
              (std::shared_ptr<common::minet::Packet> *const)&operation_name,
              req_packet_ptr);
            PlayerSession::cacheLoginReq(v65, (common::minet::PacketPtr *)&operation_name);
            std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&operation_name);
            common::milog::MiLogStream::create(
              &v98,
              &common::milog::MiLogDefault::default_log_obj_,
              5u,
              "./src/service/login_handler.cpp",
              "queryPlayerStatusResult",
              830);
            v66 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    &v98,
                    (const char (*)[36])"[LOGIN] send LoginReq to game uid: ");
            v67 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr);
            v90 = PlayerSession::getUid(v67);
            v68 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v66, &v90);
            v69 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v68, (const char (*)[11])" game_id: ");
            v70 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v69,
                    (const unsigned int *)(v4 + 48));
            v71 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v70, (const char (*)[11])" session: ");
            v72 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr);
            SessionId = common::minet::KcpSession::getSessionId(v72);
            v73 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v71, &SessionId);
            v74 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v73,
                    (const char (*)[15])" device_name: ");
            v75 = proto::PlayerLoginReq::device_name[abi:cxx11]((const proto::PlayerLoginReq *const)(v4 + 192));
            v76 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v74, v75);
            v77 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v76,
                    (const char (*)[13])" login_rand:");
            val = proto::PlayerStatusRedisData::login_rand(status_data);
            v78 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v77, &val);
            v79 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v78,
                    (const char (*)[13])" channel_id:");
            v92 = proto::PlayerLoginReq::channel_id((const proto::PlayerLoginReq *const)(v4 + 192));
            v80 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v79, &v92);
            v81 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v80,
                    (const char (*)[17])" sub_channel_id:");
            v93 = proto::PlayerLoginReq::sub_channel_id((const proto::PlayerLoginReq *const)(v4 + 192));
            v82 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v81,
                    (const unsigned int *)&v93);
            v83 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v82, (const char (*)[6])" tag:");
            Uid = proto::PlayerLoginReq::tag((const proto::PlayerLoginReq *const)(v4 + 192));
            v84 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v83,
                    (const unsigned int *)&Uid);
            v85 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v84,
                    (const char (*)[16])" country code: ");
            v86 = proto::PlayerLoginReq::country_code[abi:cxx11]((const proto::PlayerLoginReq *const)(v4 + 192));
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v85, v86);
            common::milog::MiLogStream::~MiLogStream(&v98);
            *(_DWORD *)(v4 + 32) = 0;
          }
          v9 = *(_DWORD *)(v4 + 32);
        }
      }
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
    }
    proto::PlayerLoginReq::~PlayerLoginReq((proto::PlayerLoginReq *const)(v4 + 192));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v98,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/login_handler.cpp",
      "queryPlayerStatusResult",
      775);
    v17 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v98, (const char (*)[14])"[LOGIN] uid: ");
    v18 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr);
    v92 = PlayerSession::getUid(v18);
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &v92);
    v20 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v19, (const char (*)[10])" status: ");
    v93 = proto::PlayerStatusRedisData::status(status_data);
    v21 = common::milog::MiLogStream::operator<<<proto::PlayerStatusType,(proto::PlayerStatusType*)0>(v20, &v93);
    v22 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
            v21,
            (const char (*)[37])" find gameserver_id failed session: ");
    v23 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)session_ptr);
    Uid = common::minet::KcpSession::getSessionId(v23);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)&Uid);
    common::milog::MiLogStream::~MiLogStream(&v98);
    *(_DWORD *)(v4 + 32) = -1;
    v9 = *(_DWORD *)(v4 + 32);
  }
LABEL_29:
  SpanProxy::~SpanProxy((SpanProxy *const)(v4 + 96));
  result = v9;
  if ( v99 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8040) = 0;
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
    *(_DWORD *)((v4 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 841: range 000000000C76C8D0-000000000C76D1D5
int32_t __cdecl LoginHandler::onPlayerLoginRsp(LoginHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  TracingMgr *v5; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  const jaegertracing::SpanContext *v7; // r14
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v8; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t v10; // eax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int32_t v13; // r14d
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t Uid; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  PlayerSession *v22; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // r14
  unsigned __int64 v25; // rax
  unsigned int (__fastcall *v26)(std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, opentracing::v3::string_view *); // r15
  bool v27; // r14
  common::milog::MiLogStream *v28; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // r14
  int32_t result; // eax
  unsigned __int16 CmdId; // [rsp+2Eh] [rbp-172h] BYREF
  unsigned int val; // [rsp+30h] [rbp-170h] BYREF
  unsigned int UserId; // [rsp+34h] [rbp-16Ch] BYREF
  const proto::PlayerLoginRsp *rsp_0; // [rsp+38h] [rbp-168h]
  opentracing::v3::string_view operation_name; // [rsp+40h] [rbp-160h] BYREF
  std::string in_str; // [rsp+50h] [rbp-150h] BYREF
  char v46[304]; // [rsp+70h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 7 ret:842 48 4 14 session_id:852 64 8 17 root_span_ctx:843 96 16 15 session_ptr:853 128 1"
                        "6 11 rsp_ptr:864 160 56 14 span_proxy:844";
  *(_QWORD *)(v2 + 16) = LoginHandler::onPlayerLoginRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  *(_DWORD *)(v2 + 32) = 0;
  v5 = std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TracingMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::tracing_mgr_ptr);
  v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getSpanContextStr[abi:cxx11](&in_str, v6);
  TracingMgr::extract(
    v2 + 64,
    v5,
    (std::__shared_ptr<opentracing::v3::Tracer,(__gnu_cxx::_Lock_policy)2>::element_type *)&in_str);
  std::string::~string(&in_str);
  std::function<void ()(std::shared_ptr<jaegertracing::Span> &)>::function<LoginHandler::onPlayerLoginRsp(std::shared_ptr<common::minet::Packet>)::{lambda(std::shared_ptr<jaegertracing::Span> &)#1},void,void>(
    (std::function<void(std::shared_ptr<jaegertracing::Span>&)> *const)&in_str,
    (LoginHandler::onPlayerLoginRsp::<lambda(SpanPtr&)>)(v2 + 32));
  v7 = std::unique_ptr<jaegertracing::SpanContext>::get((const std::unique_ptr<jaegertracing::SpanContext> *const)(v2 + 64));
  opentracing::v3::string_view::string_view(&operation_name, "onPlayerLoginRsp");
  v8 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  SpanProxy::SpanProxy(
    (SpanProxy *const)(v2 + 160),
    v8,
    operation_name,
    v7,
    0,
    (std::function<void(std::shared_ptr<jaegertracing::Span>&)> *)&in_str);
  std::function<void ()(std::shared_ptr<jaegertracing::Span> &)>::~function((std::function<void(std::shared_ptr<jaegertracing::Span>&)> *const)&in_str);
  v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  *(_DWORD *)(v2 + 48) = common::minet::Packet::getUserSessionId(v9);
  v10 = (unsigned int)ServiceBox::findService<GateserverService>();
  GateserverService::findPlayerSession((GateserverService *const)(v2 + 96), v10);
  if ( std::operator==<PlayerSession>(0LL, (const std::shared_ptr<PlayerSession> *)(v2 + 96)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&in_str,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/service/login_handler.cpp",
      "onPlayerLoginRsp",
      856);
    v11 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            (common::milog::MiLogStream *const)&in_str,
            (const char (*)[20])"findPlayerSession: ");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v12, (const char (*)[8])" failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
    *(_DWORD *)(v2 + 32) = -1;
    v13 = *(_DWORD *)(v2 + 32);
  }
  else
  {
    v14 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    Uid = PlayerSession::getUid(v14);
    v16 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    if ( Uid == common::minet::Packet::getUserId(v16) )
    {
      std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      common::minet::Packet::getConstProto<proto::PlayerLoginRsp>((common::minet::Packet *const)(v2 + 128));
      if ( std::operator==<proto::PlayerLoginRsp const>(
             (const std::shared_ptr<const proto::PlayerLoginRsp> *)(v2 + 128),
             0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&in_str,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/service/login_handler.cpp",
          "onPlayerLoginRsp",
          864);
        common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&in_str, "get PlayerLoginRsp failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
        v13 = -1;
      }
      else
      {
        rsp_0 = std::__shared_ptr_access<proto::PlayerLoginRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerLoginRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        if ( !proto::PlayerLoginRsp::retcode(rsp_0) )
        {
          v22 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          PlayerSession::setIsFinishLogin(v22, 1);
        }
        v23 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        v24 = v23;
        if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v23);
        v25 = (unsigned __int64)(v24->_vptr_KcpSession + 5);
        if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v24->_vptr_KcpSession + 5);
        v26 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, opentracing::v3::string_view *))v25;
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          (std::shared_ptr<common::minet::Packet> *const)&operation_name,
          p_packet_ptr);
        v27 = v26(v24, &operation_name) != 0;
        std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&operation_name);
        if ( v27 )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&in_str,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/service/login_handler.cpp",
            "onPlayerLoginRsp",
            874);
          v28 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  (common::milog::MiLogStream *const)&in_str,
                  (const char (*)[24])"sendPacket failed uid: ");
          v29 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
          UserId = common::minet::Packet::getUserId(v29);
          v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &UserId);
          v31 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v30, (const char (*)[10])" cmd_id: ");
          v32 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
          CmdId = common::minet::Packet::getCmdId(v32);
          common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(v31, &CmdId);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
          *(_DWORD *)(v2 + 32) = -1;
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&in_str,
            &common::milog::MiLogDefault::default_log_obj_,
            5u,
            "./src/service/login_handler.cpp",
            "onPlayerLoginRsp",
            879);
          v33 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  (common::milog::MiLogStream *const)&in_str,
                  (const char (*)[42])"[LOGIN] send LoginRsp to client session: ");
          v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v33,
                  (const unsigned int *)(v2 + 48));
          v35 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v34, (const char (*)[7])" uid: ");
          v36 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
          val = common::minet::Packet::getUserId(v36);
          v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &val);
          v38 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v37, (const char (*)[11])" rsp ret: ");
          UserId = proto::PlayerLoginRsp::retcode(rsp_0);
          common::milog::MiLogStream::operator<<<int,(int *)0>(v38, (const int *)&UserId);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
          *(_DWORD *)(v2 + 32) = proto::PlayerLoginRsp::retcode(rsp_0);
        }
        v13 = *(_DWORD *)(v2 + 32);
      }
      std::shared_ptr<proto::PlayerLoginRsp const>::~shared_ptr((std::shared_ptr<const proto::PlayerLoginRsp> *const)(v2 + 128));
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&in_str,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/service/login_handler.cpp",
        "onPlayerLoginRsp",
        861);
      v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
              (common::milog::MiLogStream *const)&in_str,
              (const char (*)[13])"session uid:");
      v18 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      val = PlayerSession::getUid(v18);
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
      v20 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v19,
              (const char (*)[21])" but packet_ptr uid:");
      v21 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      UserId = common::minet::Packet::getUserId(v21);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &UserId);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&in_str);
      *(_DWORD *)(v2 + 32) = -1;
      v13 = *(_DWORD *)(v2 + 32);
    }
  }
  std::shared_ptr<PlayerSession>::~shared_ptr((std::shared_ptr<PlayerSession> *const)(v2 + 96));
  SpanProxy::~SpanProxy((SpanProxy *const)(v2 + 160));
  std::unique_ptr<jaegertracing::SpanContext>::~unique_ptr((std::unique_ptr<jaegertracing::SpanContext> *const)(v2 + 64));
  result = v13;
  if ( v46 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 845: range 000000000C76C7CC-000000000C76C8CF
void __cdecl LoginHandler::onPlayerLoginRsp(std::shared_ptr<common::minet::Packet>)::{lambda(std::shared_ptr&<jaegertracing::Span>)#1}::operator()(
        const LoginHandler::onPlayerLoginRsp::<lambda(SpanPtr&)> *const __closure,
        SpanPtr *span_ptr)
{
  int *ret; // rdx
  TracingMgr *v3; // rdi
  int *v4; // rdx
  bool is_error; // [rsp+1Fh] [rbp-1h]

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  ret = __closure->__ret;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__ret);
  }
  is_error = *ret != 0;
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
  TracingMgr::finishSpanToRoot(v3, span_ptr, *v4, is_error);
};

// Line 887: range 000000000C76D1D6-000000000C76DA06
int32_t __cdecl LoginHandler::onDisconnectClientNotify(
        LoginHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t v6; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t Uid; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  common::milog::MiLogStream *v26; // rax
  google::protobuf::uint32 v27; // eax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // r14
  unsigned __int64 v30; // rax
  void (__fastcall *v31)(std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  GateserverService *v32; // r14
  PlayerSession *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+20h] [rbp-150h] BYREF
  unsigned int UserId; // [rsp+24h] [rbp-14Ch] BYREF
  const proto::DisconnectClientNotify *notify; // [rsp+28h] [rbp-148h]
  std::shared_ptr<common::minet::Packet> v44; // [rsp+30h] [rbp-140h] BYREF
  common::milog::MiLogStream v45; // [rsp+40h] [rbp-130h] BYREF
  char v46[272]; // [rsp+60h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 14 session_id:888 64 16 15 session_ptr:889 96 16 14 notify_ptr:902 128 16 20 to_client_pa"
                        "cket:914 160 24 20 to_client_notify:912";
  *(_QWORD *)(v2 + 16) = LoginHandler::onDisconnectClientNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  *(_DWORD *)(v2 + 48) = common::minet::Packet::getUserSessionId(v5);
  v6 = (unsigned int)ServiceBox::findService<GateserverService>();
  GateserverService::findPlayerSession((GateserverService *const)(v2 + 64), v6);
  if ( std::operator==<PlayerSession>(0LL, (const std::shared_ptr<PlayerSession> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/service/login_handler.cpp",
      "onDisconnectClientNotify",
      893);
    v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v45,
           (const char (*)[20])"findPlayerSession: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])" failed");
    common::milog::MiLogStream::~MiLogStream(&v45);
    v9 = -1;
  }
  else
  {
    v10 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    Uid = PlayerSession::getUid(v10);
    v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    if ( Uid == common::minet::Packet::getUserId(v12) )
    {
      std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      common::minet::Packet::getConstProto<proto::DisconnectClientNotify>((common::minet::Packet *const)(v2 + 96));
      if ( std::operator==<proto::DisconnectClientNotify const>(
             (const std::shared_ptr<const proto::DisconnectClientNotify> *)(v2 + 96),
             0LL) )
      {
        common::milog::MiLogStream::create(
          &v45,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/service/login_handler.cpp",
          "onDisconnectClientNotify",
          902);
        common::milog::MiLogStream::operator()(&v45, "get DisconnectClientNotify failed");
        common::milog::MiLogStream::~MiLogStream(&v45);
        v9 = -1;
      }
      else
      {
        notify = std::__shared_ptr_access<proto::DisconnectClientNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::DisconnectClientNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( proto::DisconnectClientNotify::data(notify) == 8
          && (v20 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64)),
              !PlayerSession::getIsFinishLogin(v20)) )
        {
          common::milog::MiLogStream::create(
            &v45,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/service/login_handler.cpp",
            "onDisconnectClientNotify",
            906);
          v22 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  &v45,
                  (const char (*)[14])"cur session: ");
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v22,
                  (const unsigned int *)(v2 + 48));
          v24 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v23, (const char (*)[7])" uid: ");
          v25 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          UserId = PlayerSession::getUid(v25);
          v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &UserId);
          common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            v26,
            (const char (*)[21])" login not finished!");
          common::milog::MiLogStream::~MiLogStream(&v45);
          v9 = -1;
        }
        else
        {
          proto::ServerDisconnectClientNotify::ServerDisconnectClientNotify((proto::ServerDisconnectClientNotify *const)(v2 + 160));
          v27 = proto::DisconnectClientNotify::data(notify);
          proto::ServerDisconnectClientNotify::set_data((proto::ServerDisconnectClientNotify *const)(v2 + 160), v27);
          common::minet::PacketUtils::createPacket<proto::ServerDisconnectClientNotify>((const proto::ServerDisconnectClientNotify *)(v2 + 128));
          v28 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v29 = v28;
          if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v28);
          v30 = (unsigned __int64)(v29->_vptr_KcpSession + 5);
          if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v29->_vptr_KcpSession + 5);
          v31 = *(void (__fastcall **)(std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v30;
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            &v44,
            (const std::shared_ptr<common::minet::Packet> *)(v2 + 128));
          v31(v29, &v44);
          std::shared_ptr<common::minet::Packet>::~shared_ptr(&v44);
          v32 = ServiceBox::findService<GateserverService>();
          LODWORD(v31) = proto::DisconnectClientNotify::data(notify);
          v33 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          GateserverService::disconnect(v32, v33, (uint32_t)v31);
          common::milog::MiLogStream::create(
            &v45,
            &common::milog::MiLogDefault::default_log_obj_,
            5u,
            "./src/service/login_handler.cpp",
            "onDisconnectClientNotify",
            921);
          v34 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                  &v45,
                  (const char (*)[41])"[LOGIN] DisconnectClientNotify session: ");
          v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v34,
                  (const unsigned int *)(v2 + 48));
          v36 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v35, (const char (*)[7])" uid: ");
          v37 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
          val = common::minet::Packet::getUserId(v37);
          v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &val);
          v39 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v38, (const char (*)[8])" data: ");
          UserId = proto::DisconnectClientNotify::data(notify);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &UserId);
          common::milog::MiLogStream::~MiLogStream(&v45);
          v9 = 0;
          std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 128));
          proto::ServerDisconnectClientNotify::~ServerDisconnectClientNotify((proto::ServerDisconnectClientNotify *const)(v2 + 160));
        }
      }
      std::shared_ptr<proto::DisconnectClientNotify const>::~shared_ptr((std::shared_ptr<const proto::DisconnectClientNotify> *const)(v2 + 96));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/service/login_handler.cpp",
        "onDisconnectClientNotify",
        898);
      v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v45, (const char (*)[14])"cur session: ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
      v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])" uid: ");
      v16 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      val = PlayerSession::getUid(v16);
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
      v18 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v17,
              (const char (*)[18])" notify user_id: ");
      v19 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      UserId = common::minet::Packet::getUserId(v19);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &UserId);
      common::milog::MiLogStream::~MiLogStream(&v45);
      v9 = -1;
    }
  }
  std::shared_ptr<PlayerSession>::~shared_ptr((std::shared_ptr<PlayerSession> *const)(v2 + 64));
  result = v9;
  if ( v46 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
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

// Line 929: range 000000000C76DA08-000000000C76EB5E
int32_t __cdecl LoginHandler::onPlayerTransferNotify(LoginHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t v7; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  LoginHandler **v28; // r9
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  GateserverService *v32; // r14
  PlayerSession *v33; // rax
  PlayerSession *v34; // rax
  PlayerSession *v35; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  bool isEditor; // al
  common::minet::Packet *v38; // rax
  PlayerSession *v39; // rax
  common::minet::Packet *v40; // rax
  common::minet::Packet *v41; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // r14
  uint32_t v43; // r8d
  common::milog::MiLogStream *v44; // r14
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // r14
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // r14
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // r14
  const std::string *v55; // rax
  common::milog::MiLogStream *v56; // rax
  int32_t result; // eax
  LoginHandler **v58; // [rsp+0h] [rbp-380h]
  const std::_Placeholder<1> *v59; // [rsp+0h] [rbp-380h]
  uint32_t Uid; // [rsp+8h] [rbp-378h]
  GateserverService *v61; // [rsp+8h] [rbp-378h]
  ServiceBase *v62; // [rsp+8h] [rbp-378h]
  ServiceBase *const v63; // [rsp+8h] [rbp-378h]
  __m128i v64; // [rsp+10h] [rbp-370h] BYREF
  common::minet::PacketPtr *p_packet_ptra; // [rsp+20h] [rbp-360h]
  LoginHandler *thisa; // [rsp+28h] [rbp-358h]
  unsigned int val; // [rsp+38h] [rbp-348h] BYREF
  unsigned int SessionId; // [rsp+3Ch] [rbp-344h] BYREF
  uint32_t new_game_id; // [rsp+40h] [rbp-340h]
  int32_t ret; // [rsp+44h] [rbp-33Ch]
  LoginHandler *v71; // [rsp+48h] [rbp-338h] BYREF
  LoginHandler *v72; // [rsp+50h] [rbp-330h] BYREF
  const proto::PlayerTransferNotify *notify; // [rsp+58h] [rbp-328h]
  int (*v74[2])(LoginHandler *, std::shared_ptr<common::minet::Packet>, std::any); // [rsp+60h] [rbp-320h] BYREF
  int (*__f[2])(LoginHandler *, std::shared_ptr<common::minet::Packet>, std::any, int); // [rsp+70h] [rbp-310h] BYREF
  std::any context; // [rsp+80h] [rbp-300h] BYREF
  std::_Bind_helper<false,int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>,std::any),LoginHandler*,const std::_Placeholder<1>&,const std::_Placeholder<2>&>::type v77; // [rsp+90h] [rbp-2F0h] BYREF
  std::_Bind_helper<false,int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>,std::any,int),LoginHandler*,const std::_Placeholder<1>&,const std::_Placeholder<2>&,const std::_Placeholder<3>&>::type p___f; // [rsp+B0h] [rbp-2D0h] BYREF
  std::function<int(std::shared_ptr<common::minet::Packet>,std::any)> v79; // [rsp+D0h] [rbp-2B0h] BYREF
  std::string packet_ptr; // [rsp+F0h] [rbp-290h] BYREF
  LoginHandler *v81[78]; // [rsp+110h] [rbp-270h] BYREF

  thisa = this;
  p_packet_ptra = p_packet_ptr;
  v2 = (unsigned __int64)v81;
  v58 = v81;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 4 14 session_id:932 64 4 7 uid:946 80 4 25 target_home_owner_uid:978 96 16 14 notify_ptr:93"
                        "0 128 16 15 session_ptr:933 160 16 19 status_data_ptr:961 192 16 19 req_packet_ptr:1003 224 280 "
                        "20 cached_login_req:992";
  *(_QWORD *)(v2 + 16) = LoginHandler::onPlayerTransferNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862735] = -218103808;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptra);
  common::minet::Packet::getConstProto<proto::PlayerTransferNotify>((common::minet::Packet *const)(v2 + 96));
  if ( std::operator==<proto::PlayerTransferNotify const>(
         (const std::shared_ptr<const proto::PlayerTransferNotify> *)(v2 + 96),
         0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&packet_ptr,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/login_handler.cpp",
      "onPlayerTransferNotify",
      930);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&packet_ptr,
      "get PlayerTransferNotify failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&packet_ptr);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::PlayerTransferNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerTransferNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptra);
    *(_DWORD *)(v2 + 48) = common::minet::Packet::getUserSessionId(v6);
    v7 = (unsigned int)ServiceBox::findService<GateserverService>();
    GateserverService::findPlayerSession((GateserverService *const)(v2 + 128), v7);
    if ( std::operator==<PlayerSession>(0LL, (const std::shared_ptr<PlayerSession> *)(v2 + 128)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&packet_ptr,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/login_handler.cpp",
        "onPlayerTransferNotify",
        936);
      v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             (common::milog::MiLogStream *const)&packet_ptr,
             (const char (*)[31])"[TRANSFER] findPlayerSession: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&packet_ptr);
      v5 = -1;
    }
    else
    {
      v10 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      Uid = PlayerSession::getUid(v10);
      v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptra);
      if ( Uid == common::minet::Packet::getUserId(v11) )
      {
        v19 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        *(_DWORD *)(v2 + 64) = PlayerSession::getUid(v19);
        if ( *(_DWORD *)(v2 + 64) )
        {
          if ( proto::PlayerTransferNotify::transfer_uid(notify) == *(_DWORD *)(v2 + 64) )
          {
            if ( proto::PlayerTransferNotify::target_uid(notify) )
            {
              common::tools::perf::make_shared<proto::PlayerStatusRedisData>();
              if ( std::operator==<proto::PlayerStatusRedisData>(
                     (const std::shared_ptr<proto::PlayerStatusRedisData> *)(v2 + 160),
                     0LL) )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&packet_ptr,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/service/login_handler.cpp",
                  "onPlayerTransferNotify",
                  964);
                common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  (common::milog::MiLogStream *const)&packet_ptr,
                  (const char (*)[24])"status_data_ptr is null");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&packet_ptr);
                v5 = -1;
              }
              else
              {
                v61 = ServiceBox::findService<GateserverService>();
                std::any::any<std::shared_ptr<proto::PlayerStatusRedisData> &,std::shared_ptr<proto::PlayerStatusRedisData>,std::any::_Manager_external<std::shared_ptr<proto::PlayerStatusRedisData>>,true,true>(
                  &context,
                  (std::shared_ptr<proto::PlayerStatusRedisData> *)(v2 + 160));
                std::shared_ptr<common::minet::Packet>::shared_ptr(
                  (std::shared_ptr<common::minet::Packet> *const)(v2 + 192),
                  p_packet_ptra);
                v72 = thisa;
                v64.m128i_i64[0] = (__int64)LoginHandler::asyncQueryTransferTargetStatusCallback;
                v64.m128i_i64[1] = 0LL;
                *(__m128i *)__f = _mm_load_si128(&v64);
                std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>,std::any,int),LoginHandler*,std::_Placeholder<1> const&,std::_Placeholder const&<2>,std::_Placeholder const&<3>>(
                  &p___f,
                  __f,
                  &v72,
                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                  (const std::_Placeholder<2> *)&std::placeholders::_2,
                  (const std::_Placeholder<3> *)&std::placeholders::_3,
                  v81,
                  (const std::_Placeholder<1> *)v61,
                  (const std::_Placeholder<2> *)LoginHandler::asyncQueryTransferTargetStatusCallback,
                  0LL);
                std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any,int)>::function<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>,std::any,int) ()(LoginHandler*,std::_Placeholder<1>,std::_Placeholder<2>,std::_Placeholder<3>)>,void,void>(
                  (std::function<int(std::shared_ptr<common::minet::Packet>,std::any,int)> *const)&packet_ptr,
                  &p___f);
                v71 = thisa;
                v74[0] = (int (*)(LoginHandler *, std::shared_ptr<common::minet::Packet>, std::any))LoginHandler::asyncQueryTransferTargetStatus;
                v74[1] = 0LL;
                std::bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>,std::any),LoginHandler*,std::_Placeholder<1> const&,std::_Placeholder const&<2>>(
                  &v77,
                  v74,
                  &v71,
                  (const std::_Placeholder<1> *)&std::placeholders::_1,
                  (const std::_Placeholder<2> *)&std::placeholders::_2,
                  v28,
                  v59,
                  (const std::_Placeholder<2> *)v62);
                std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any)>::function<std::_Bind<int (LoginHandler::*)(std::shared_ptr<common::minet::Packet>,std::any) ()(LoginHandler*,std::_Placeholder<1>,std::_Placeholder<2>)>,void,void>(
                  &v79,
                  &v77);
                ret = ServiceBase::pushAsyncTask(
                        v63,
                        (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &v79),
                        (std::any)__PAIR128__(&context, v2 + 192));
                std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any)>::~function(&v79);
                std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any,int)>::~function((std::function<int(std::shared_ptr<common::minet::Packet>,std::any,int)> *const)&packet_ptr);
                std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 192));
                std::any::~any(&context);
                v5 = ret;
              }
              std::shared_ptr<proto::PlayerStatusRedisData>::~shared_ptr((std::shared_ptr<proto::PlayerStatusRedisData> *const)(v2 + 160));
            }
            else if ( proto::PlayerTransferNotify::target_home_owner_uid(notify) )
            {
              *(_DWORD *)(v2 + 80) = proto::PlayerTransferNotify::target_home_owner_uid(notify);
              new_game_id = proto::PlayerTransferNotify::target_home_gameserver_id(notify);
              if ( new_game_id )
              {
                v34 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                PlayerSession::setGameserverId(v34, new_game_id);
                proto::PlayerLoginReq::PlayerLoginReq((proto::PlayerLoginReq *const)(v2 + 224));
                v35 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                if ( PlayerSession::getCachedLoginReq(v35, (proto::PlayerLoginReq *)(v2 + 224)) )
                {
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)&packet_ptr,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/service/login_handler.cpp",
                    "onPlayerTransferNotify",
                    995);
                  common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                    (common::milog::MiLogStream *const)&packet_ptr,
                    (const char (*)[43])"[TRANSFER] req_packet_ptr->getProto failed");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&packet_ptr);
                  v5 = -1;
                }
                else
                {
                  proto::PlayerLoginReq::set_login_rand((proto::PlayerLoginReq *const)(v2 + 224), 0LL);
                  v36 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                  isEditor = PlayerSession::isEditor(v36);
                  proto::PlayerLoginReq::set_is_editor((proto::PlayerLoginReq *const)(v2 + 224), isEditor);
                  proto::PlayerLoginReq::set_target_home_owner_uid(
                    (proto::PlayerLoginReq *const)(v2 + 224),
                    *(_DWORD *)(v2 + 80));
                  proto::PlayerLoginReq::set_is_transfer((proto::PlayerLoginReq *const)(v2 + 224), 1);
                  common::minet::PacketUtils::createPacket<proto::PlayerLoginReq>((const proto::PlayerLoginReq *)(v2 + 192));
                  if ( std::operator==<common::minet::Packet>(
                         (const std::shared_ptr<common::minet::Packet> *)(v2 + 192),
                         0LL) )
                  {
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)&packet_ptr,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/service/login_handler.cpp",
                      "onPlayerTransferNotify",
                      1006);
                    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                      (common::milog::MiLogStream *const)&packet_ptr,
                      (const char (*)[19])"createPacket fails");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&packet_ptr);
                    v5 = -1;
                  }
                  else
                  {
                    v38 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
                    if ( common::minet::Packet::setProto<proto::PlayerLoginReq>(
                           v38,
                           (const proto::PlayerLoginReq *)(v2 + 224)) )
                    {
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)&packet_ptr,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/service/login_handler.cpp",
                        "onPlayerTransferNotify",
                        1011);
                      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                        (common::milog::MiLogStream *const)&packet_ptr,
                        (const char (*)[27])"[TRANSFER] setProto failed");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&packet_ptr);
                      v5 = -1;
                    }
                    else
                    {
                      v39 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                      PlayerSession::initPacketHead(v39, (const common::minet::PacketPtr *)(v2 + 192));
                      v40 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
                      common::minet::Packet::setUserId(v40, *(_DWORD *)(v2 + 64));
                      v41 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
                      common::minet::Packet::setHomeUserId(v41, *(_DWORD *)(v2 + 80));
                      v42 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
                      std::shared_ptr<common::minet::Packet>::shared_ptr(
                        (std::shared_ptr<common::minet::Packet> *const)&context,
                        (const std::shared_ptr<common::minet::Packet> *)(v2 + 192));
                      LOBYTE(v42) = (unsigned int)NetworkMgrBase::sendPacketToTargetService(
                                                    v42,
                                                    (common::minet::PacketPtr)__PAIR128__(3LL, &context),
                                                    new_game_id,
                                                    v43) != 0;
                      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&context);
                      if ( (_BYTE)v42 )
                      {
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)&packet_ptr,
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/service/login_handler.cpp",
                          "onPlayerTransferNotify",
                          1020);
                        common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                          (common::milog::MiLogStream *const)&packet_ptr,
                          (const char (*)[44])"[TRANSFER] sendPacketToTargetService failed");
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&packet_ptr);
                        v5 = -1;
                      }
                      else
                      {
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)&v79,
                          &common::milog::MiLogDefault::default_log_obj_,
                          5u,
                          "./src/service/login_handler.cpp",
                          "onPlayerTransferNotify",
                          1024);
                        v44 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                (common::milog::MiLogStream *const)&v79,
                                (const char (*)[39])"[TRANSFER] send LoginReq to game uid: ");
                        v45 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                        val = PlayerSession::getUid(v45);
                        v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, &val);
                        v47 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                                v46,
                                (const char (*)[18])" target_home_uid:");
                        v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v47,
                                (const unsigned int *)(v2 + 80));
                        v49 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                                v48,
                                (const char (*)[12])" gs_app_id:");
                        common::tools::AppIdUtils::getAppIdStr[abi:cxx11](&packet_ptr, new_game_id);
                        v50 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v49, &packet_ptr);
                        v51 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                                v50,
                                (const char (*)[11])" session: ");
                        v52 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                        SessionId = common::minet::KcpSession::getSessionId(v52);
                        v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, &SessionId);
                        v54 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                                v53,
                                (const char (*)[15])" device_name: ");
                        v55 = proto::PlayerLoginReq::device_name[abi:cxx11]((const proto::PlayerLoginReq *const)(v2 + 224));
                        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v54, v55);
                        std::string::~string(&packet_ptr);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v79);
                        v5 = 0;
                      }
                    }
                  }
                  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 192));
                }
                proto::PlayerLoginReq::~PlayerLoginReq((proto::PlayerLoginReq *const)(v2 + 224));
              }
              else
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&packet_ptr,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/service/login_handler.cpp",
                  "onPlayerTransferNotify",
                  982);
                v29 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                        (common::milog::MiLogStream *const)&packet_ptr,
                        (const char (*)[48])"[TRANSFER] target_home_gameserver_id is 0. uid:");
                v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v29,
                        (const unsigned int *)(v2 + 64));
                v31 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                        v30,
                        (const char (*)[24])" target_home_owner_uid:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v31,
                  (const unsigned int *)(v2 + 80));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&packet_ptr);
                v32 = ServiceBox::findService<GateserverService>();
                v33 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                GateserverService::disconnect(v32, v33, 0xBu);
                v5 = -1;
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&packet_ptr,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/service/login_handler.cpp",
                "onPlayerTransferNotify",
                1031);
              v56 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                      (common::milog::MiLogStream *const)&packet_ptr,
                      (const char (*)[65])"[TRANSFER] target_uid and target_home_owner_uid are both 0. uid:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v56,
                (const unsigned int *)(v2 + 64));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&packet_ptr);
              v5 = -1;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&packet_ptr,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/service/login_handler.cpp",
              "onPlayerTransferNotify",
              955);
            v23 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                    (common::milog::MiLogStream *const)&packet_ptr,
                    (const char (*)[49])"[TRANSFER] session_uid and tranfer_uid not match");
            v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v23,
                    (const unsigned int *)(v2 + 48));
            v25 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v24,
                    (const char (*)[14])" session_uid:");
            v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v25,
                    (const unsigned int *)(v2 + 64));
            v27 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v26,
                    (const char (*)[14])" tranfer_uid:");
            SessionId = proto::PlayerTransferNotify::transfer_uid(notify);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &SessionId);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&packet_ptr);
            v5 = -1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&packet_ptr,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/service/login_handler.cpp",
            "onPlayerTransferNotify",
            949);
          v20 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  (common::milog::MiLogStream *const)&packet_ptr,
                  (const char (*)[45])"[TRANSFER] getUid is 0, GetPlayerToken first");
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v20,
                  (const unsigned int *)(v2 + 48));
          v22 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v21, (const char (*)[6])" uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v2 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&packet_ptr);
          v5 = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&packet_ptr,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/service/login_handler.cpp",
          "onPlayerTransferNotify",
          941);
        v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                (common::milog::MiLogStream *const)&packet_ptr,
                (const char (*)[14])"cur session: ");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v2 + 48));
        v14 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])" uid: ");
        v15 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        val = PlayerSession::getUid(v15);
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
        v17 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v16,
                (const char (*)[18])" notify user_id: ");
        v18 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptra);
        SessionId = common::minet::Packet::getUserId(v18);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &SessionId);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&packet_ptr);
        v5 = -1;
      }
    }
    std::shared_ptr<PlayerSession>::~shared_ptr((std::shared_ptr<PlayerSession> *const)(v2 + 128));
  }
  std::shared_ptr<proto::PlayerTransferNotify const>::~shared_ptr((std::shared_ptr<const proto::PlayerTransferNotify> *const)(v2 + 96));
  result = v5;
  if ( v58 == (LoginHandler **)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
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
  return result;
};

// Line 1039: range 000000000C76EB60-000000000C76EF3E
void __fastcall LoginHandler::genSecretKeyWithSeed(
        LoginHandler *const this,
        uint64_t secret_key_seed,
        std::string *secret_key)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // rbx
  common::milog::MiLogStream *v6; // rax
  std::mersenne_twister_engine<long unsigned int,64,312,156,31,13043109905998158313,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704,43,6364136223846793005>::result_type v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rdi
  uint32_t i; // [rsp+24h] [rbp-1B8Ch]
  std::mersenne_twister_engine<long unsigned int,64,312,156,31,13043109905998158313,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704,43,6364136223846793005>::result_type random; // [rsp+28h] [rbp-1B88h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-1B80h] BYREF
  char v14[7008]; // [rsp+50h] [rbp-1B60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_7(6976LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 8 13 rand_num:1058 80 8 20 secret_key_seed:1038 112 2504 8 rng:1051 2752 4096 19 secret_key_buf:1043";
  *(_QWORD *)(v3 + 16) = LoginHandler::genSecretKeyWithSeed;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862801] = -234881024;
  v5[536862802] = -218959118;
  v5[536862803] = -218959118;
  v5[536862804] = -218959118;
  v5[536862805] = -218959118;
  v5[536862934] = -202116109;
  v5[536862935] = -202116109;
  v5[536862936] = -202116109;
  v5[536862937] = -202116109;
  *(_QWORD *)(v3 + 80) = secret_key_seed;
  common::milog::MiLogStream::create(
    &v13,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/service/login_handler.cpp",
    "genSecretKeyWithSeed",
    1040);
  v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
         &v13,
         (const char (*)[39])"genSecretKeyWithSeed secret_key_seed: ");
  common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, (const unsigned __int64 *)(v3 + 80));
  common::milog::MiLogStream::~MiLogStream(&v13);
  *(_QWORD *)(v3 + 2752) = 0LL;
  *(_QWORD *)(v3 + 2760) = 0LL;
  memset((void *)(v3 + 2768), 0, 0xFF0uLL);
  std::mersenne_twister_engine<unsigned long,64ul,312ul,156ul,31ul,13043109905998158313ul,29ul,6148914691236517205ul,17ul,8202884508482404352ul,37ul,18444473444759240704ul,43ul,6364136223846793005ul>::mersenne_twister_engine(
    (std::mersenne_twister_engine<long unsigned int,64,312,156,31,13043109905998158313,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704,43,6364136223846793005> *const)(v3 + 112),
    *(_QWORD *)(v3 + 80));
  v7 = std::mersenne_twister_engine<unsigned long,64ul,312ul,156ul,31ul,13043109905998158313ul,29ul,6148914691236517205ul,17ul,8202884508482404352ul,37ul,18444473444759240704ul,43ul,6364136223846793005ul>::operator()((std::mersenne_twister_engine<long unsigned int,64,312,156,31,13043109905998158313,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704,43,6364136223846793005> *const)(v3 + 112));
  std::mersenne_twister_engine<unsigned long,64ul,312ul,156ul,31ul,13043109905998158313ul,29ul,6148914691236517205ul,17ul,8202884508482404352ul,37ul,18444473444759240704ul,43ul,6364136223846793005ul>::mersenne_twister_engine(
    (std::mersenne_twister_engine<long unsigned int,64,312,156,31,13043109905998158313,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704,43,6364136223846793005> *const)(v3 + 112),
    v7);
  std::mersenne_twister_engine<unsigned long,64ul,312ul,156ul,31ul,13043109905998158313ul,29ul,6148914691236517205ul,17ul,8202884508482404352ul,37ul,18444473444759240704ul,43ul,6364136223846793005ul>::operator()((std::mersenne_twister_engine<long unsigned int,64,312,156,31,13043109905998158313,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704,43,6364136223846793005> *const)(v3 + 112));
  for ( i = 0; i <= 0x1FF; ++i )
  {
    random = std::mersenne_twister_engine<unsigned long,64ul,312ul,156ul,31ul,13043109905998158313ul,29ul,6148914691236517205ul,17ul,8202884508482404352ul,37ul,18444473444759240704ul,43ul,6364136223846793005ul>::operator()((std::mersenne_twister_engine<long unsigned int,64,312,156,31,13043109905998158313,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704,43,6364136223846793005> *const)(v3 + 112));
    *(_QWORD *)(v3 + 48) = common::tools::NetUtils::htonll(random);
    v8 = v3 + 2752 + 8LL * i;
    v9 = *(_QWORD *)(v3 + 48);
    if ( (char)((v3 - 64 + 8 * i) & 7) >= *(_BYTE *)((v8 >> 3) + 0x7FFF8000) && *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((v8 + 7) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 64 + 8 * i + 7) & 7) >= *(_BYTE *)(((v8 + 7) >> 3) + 0x7FFF8000) )
    {
      v9 = v3 + 2752 + 8LL * i;
      __asan_report_store_n(v8, 8LL);
    }
    *(_QWORD *)v8 = v9;
  }
  std::string::clear(secret_key);
  std::string::assign(secret_key, v3 + 2752, 4096LL);
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8144) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF814C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8154) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8358) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8360) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_7(v3, 6976LL, v14);
  }
};

// Line 1067: range 000000000C76EF40-000000000C76F226
void __fastcall LoginHandler::genClientVersionRandomKey(
        LoginHandler *const this,
        std::string *random_hash,
        uint32_t uid)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  int val; // [rsp+2Ch] [rbp-F4h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-F0h] BYREF
  char v15[208]; // [rsp+50h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 8 uid:1066 64 16 10 timer:1069 96 32 15 random_str:1070";
  *(_QWORD *)(v3 + 16) = LoginHandler::genClientVersionRandomKey;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 48) = uid;
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v3 + 64));
  common::tools::RandomUtils::generateUuid[abi:cxx11]((std::string *)(v3 + 96));
  if ( (unsigned __int64)std::string::size(v3 + 96) <= 0xF )
  {
    std::string::operator=(random_hash, v3 + 96);
  }
  else
  {
    v6 = std::string::size(v3 + 96);
    std::string::substr(&v14, v3 + 96, v6 - 16, 16LL);
    std::string::operator=(random_hash, &v14);
    std::string::~string(&v14);
  }
  common::milog::MiLogStream::create(
    &v14,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/service/login_handler.cpp",
    "genClientVersionRandomKey",
    1079);
  v7 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v14, (const char (*)[17])"gen random hash:");
  v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, random_hash);
  v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" uid:");
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
  v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" timecost:");
  val = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v3 + 64));
  common::milog::MiLogStream::operator<<<int,(int *)0>(v11, &val);
  common::milog::MiLogStream::~MiLogStream(&v14);
  std::string::~string((void *)(v3 + 96));
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v3 + 64));
  if ( v15 == (char *)v3 )
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

// Line 1086: range 000000000C76F228-000000000C76F88B
int32_t __cdecl LoginHandler::asyncQueryTransferTargetStatus(
        LoginHandler *const this,
        common::minet::PacketPtr *p_packet_ptr,
        std::any *p_context)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::size_t v6; // r14
  const std::type_info *v7; // rax
  const char *v8; // rbx
  const std::type_info *v9; // rax
  const char *v10; // rax
  int32_t v11; // r14d
  std::__shared_ptr_access<proto::PlayerStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-F4h] BYREF
  const proto::PlayerTransferNotify *notify; // [rsp+38h] [rbp-E8h]
  std::any __any; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-D0h] BYREF
  char v24[176]; // [rsp+70h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 1 13 is_exist:1099 48 4 15 target_uid:1098 64 16 20 status_data_ptr:1088 96 16 15 notify_ptr:1095";
  *(_QWORD *)(v3 + 16) = LoginHandler::asyncQueryTransferTargetStatus;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  v6 = std::type_info::hash_code((const std::type_info *const)&`typeinfo for'std::shared_ptr<proto::PlayerStatusRedisData>);
  v7 = std::any::type(p_context);
  if ( v6 == std::type_info::hash_code(v7) )
  {
    std::shared_ptr<proto::PlayerStatusRedisData>::shared_ptr(
      (std::shared_ptr<proto::PlayerStatusRedisData> *const)(v3 + 64),
      0LL);
    std::any_cast<std::shared_ptr<proto::PlayerStatusRedisData>>(&__any);
    std::shared_ptr<proto::PlayerStatusRedisData>::operator=(
      (std::shared_ptr<proto::PlayerStatusRedisData> *const)(v3 + 64),
      (std::shared_ptr<proto::PlayerStatusRedisData> *)&__any);
    std::shared_ptr<proto::PlayerStatusRedisData>::~shared_ptr((std::shared_ptr<proto::PlayerStatusRedisData> *const)&__any);
    if ( std::operator==<proto::PlayerStatusRedisData>(
           0LL,
           (const std::shared_ptr<proto::PlayerStatusRedisData> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/login_handler.cpp",
        "asyncQueryTransferTargetStatus",
        1091);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        &v23,
        (const char (*)[27])"status_data_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v23);
      v11 = -1;
    }
    else
    {
      std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      common::minet::Packet::getConstProto<proto::PlayerTransferNotify>((common::minet::Packet *const)(v3 + 96));
      if ( std::operator==<proto::PlayerTransferNotify const>(
             (const std::shared_ptr<const proto::PlayerTransferNotify> *)(v3 + 96),
             0LL) )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/service/login_handler.cpp",
          "asyncQueryTransferTargetStatus",
          1095);
        common::milog::MiLogStream::operator()(&v23, "get PlayerTransferNotify failed");
        common::milog::MiLogStream::~MiLogStream(&v23);
        v11 = -1;
      }
      else
      {
        notify = std::__shared_ptr_access<proto::PlayerTransferNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerTransferNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        *(_DWORD *)(v3 + 48) = proto::PlayerTransferNotify::target_uid(notify);
        *(_BYTE *)(v3 + 32) = 0;
        v12 = std::__shared_ptr_access<proto::PlayerStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( RedisOpPlayerStatus::getPlayerStatus(*(_DWORD *)(v3 + 48), v12, (bool *)(v3 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/service/login_handler.cpp",
            "asyncQueryTransferTargetStatus",
            1102);
          v13 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                  &v23,
                  (const char (*)[37])"getPlayerStatus failed, target_uid: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v23);
          v11 = -1;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            5u,
            "./src/service/login_handler.cpp",
            "asyncQueryTransferTargetStatus",
            1106);
          v14 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                  &v23,
                  (const char (*)[40])"[TRANSFER] queryPlayerStatus succ uid: ");
          v15 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
          val = common::minet::Packet::getUserId(v15);
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
          v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v16, (const char (*)[13])" target_uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v23);
          v11 = 0;
        }
      }
      std::shared_ptr<proto::PlayerTransferNotify const>::~shared_ptr((std::shared_ptr<const proto::PlayerTransferNotify> *const)(v3 + 96));
    }
    std::shared_ptr<proto::PlayerStatusRedisData>::~shared_ptr((std::shared_ptr<proto::PlayerStatusRedisData> *const)(v3 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/login_handler.cpp",
      "asyncQueryTransferTargetStatus",
      1088);
    v8 = std::type_info::name((const std::type_info *const)&`typeinfo for'std::shared_ptr<proto::PlayerStatusRedisData>);
    v9 = std::any::type(p_context);
    v10 = std::type_info::name(v9);
    common::milog::MiLogStream::operator()(&v23, "bad any_cast from any.type=%s to type=%s", v10, v8);
    common::milog::MiLogStream::~MiLogStream(&v23);
    v11 = -1;
  }
  result = v11;
  if ( v24 == (char *)v3 )
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

// Line 1113: range 000000000C76F88C-000000000C770A21
__int64 __fastcall LoginHandler::asyncQueryTransferTargetStatusCallback(
        LoginHandler *const this,
        const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *p_packet_ptr,
        std::any *p_context,
        int32_t retcode)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::size_t v7; // r14
  const std::type_info *v8; // rax
  const char *v9; // rbx
  const std::type_info *v10; // rax
  const char *v11; // rax
  unsigned int v12; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t v14; // eax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  GateserverService *v21; // r14
  PlayerSession *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  GateserverService *v26; // r14
  PlayerSession *v27; // rax
  common::milog::MiLogStream *v28; // r14
  GateserverService *v29; // rax
  common::milog::MiLogStream *v30; // r14
  common::milog::MiLogStream *v31; // r14
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r14
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // r14
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  PlayerSession *v40; // rax
  PlayerSession *v41; // rax
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  bool isEditor; // al
  common::minet::Packet *v44; // rax
  PlayerSession *v45; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // r15
  uint32_t v47; // r14d
  uint32_t v48; // r8d
  common::milog::MiLogStream *v49; // r14
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // r14
  std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // r14
  const std::string *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // r14
  __int64 result; // rax
  unsigned int v66; // [rsp+34h] [rbp-31Ch] BYREF
  proto::PlayerStatusType Uid; // [rsp+38h] [rbp-318h] BYREF
  proto::PlayerStatusType val; // [rsp+3Ch] [rbp-314h] BYREF
  unsigned __int64 v69; // [rsp+40h] [rbp-310h] BYREF
  proto::PlayerStatusRedisData *status_data; // [rsp+50h] [rbp-300h]
  const proto::PlayerTransferNotify *notify; // [rsp+58h] [rbp-2F8h]
  std::any __any; // [rsp+60h] [rbp-2F0h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+70h] [rbp-2E0h] BYREF
  common::milog::MiLogStream v74; // [rsp+80h] [rbp-2D0h] BYREF
  common::milog::MiLogStream v75; // [rsp+A0h] [rbp-2B0h] BYREF
  char v76[656]; // [rsp+C0h] [rbp-290h] BYREF

  v4 = (unsigned __int64)v76;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(608LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 48 4 8 uid:1126 64 4 15 target_uid:1127 80 4 15 session_id:1130 96 4 16 new_game_id:1148 112 "
                        "4 12 retcode:1112 128 16 20 status_data_ptr:1115 160 16 15 notify_ptr:1124 192 16 16 session_ptr"
                        ":1131 224 16 19 req_packet_ptr:1189 256 280 21 cached_login_req:1178";
  *(_QWORD *)(v4 + 16) = LoginHandler::asyncQueryTransferTargetStatusCallback;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = -219021312;
  v6[536862727] = -219021312;
  v6[536862736] = -218103808;
  v6[536862737] = -202116109;
  v6[536862738] = -202116109;
  *(_DWORD *)(v4 + 112) = retcode;
  v7 = std::type_info::hash_code((const std::type_info *const)&`typeinfo for'std::shared_ptr<proto::PlayerStatusRedisData>);
  v8 = std::any::type(p_context);
  if ( v7 == std::type_info::hash_code(v8) )
  {
    std::shared_ptr<proto::PlayerStatusRedisData>::shared_ptr(
      (std::shared_ptr<proto::PlayerStatusRedisData> *const)(v4 + 128),
      0LL);
    std::any_cast<std::shared_ptr<proto::PlayerStatusRedisData>>(&__any);
    std::shared_ptr<proto::PlayerStatusRedisData>::operator=(
      (std::shared_ptr<proto::PlayerStatusRedisData> *const)(v4 + 128),
      (std::shared_ptr<proto::PlayerStatusRedisData> *)&__any);
    std::shared_ptr<proto::PlayerStatusRedisData>::~shared_ptr((std::shared_ptr<proto::PlayerStatusRedisData> *const)&__any);
    if ( std::operator==<proto::PlayerStatusRedisData>(
           0LL,
           (const std::shared_ptr<proto::PlayerStatusRedisData> *)(v4 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v75,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/login_handler.cpp",
        "asyncQueryTransferTargetStatusCallback",
        1118);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        &v75,
        (const char (*)[35])"[TRANSFER] status_data_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v75);
      v12 = -1;
    }
    else
    {
      status_data = std::__shared_ptr_access<proto::PlayerStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerStatusRedisData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
      std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_packet_ptr);
      common::minet::Packet::getConstProto<proto::PlayerTransferNotify>((common::minet::Packet *const)(v4 + 160));
      if ( std::operator==<proto::PlayerTransferNotify const>(
             (const std::shared_ptr<const proto::PlayerTransferNotify> *)(v4 + 160),
             0LL) )
      {
        common::milog::MiLogStream::create(
          &v75,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/service/login_handler.cpp",
          "asyncQueryTransferTargetStatusCallback",
          1124);
        common::milog::MiLogStream::operator()(&v75, "get PlayerTransferNotify failed");
        common::milog::MiLogStream::~MiLogStream(&v75);
        v12 = -1;
      }
      else
      {
        notify = std::__shared_ptr_access<proto::PlayerTransferNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::PlayerTransferNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        *(_DWORD *)(v4 + 48) = proto::PlayerTransferNotify::transfer_uid(notify);
        *(_DWORD *)(v4 + 64) = proto::PlayerTransferNotify::target_uid(notify);
        v13 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_packet_ptr);
        *(_DWORD *)(v4 + 80) = common::minet::Packet::getUserSessionId(v13);
        v14 = (unsigned int)ServiceBox::findService<GateserverService>();
        GateserverService::findPlayerSession((GateserverService *const)(v4 + 192), v14);
        if ( std::operator==<PlayerSession>(0LL, (const std::shared_ptr<PlayerSession> *)(v4 + 192)) )
        {
          common::milog::MiLogStream::create(
            &v75,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/service/login_handler.cpp",
            "asyncQueryTransferTargetStatusCallback",
            1134);
          v15 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  &v75,
                  (const char (*)[31])"[TRANSFER] findPlayerSession: ");
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v15,
                  (const unsigned int *)(v4 + 80));
          v17 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v16,
                  (const char (*)[14])" failed, uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 48));
          common::milog::MiLogStream::~MiLogStream(&v75);
          v12 = -1;
        }
        else if ( *(_DWORD *)(v4 + 112) )
        {
          common::milog::MiLogStream::create(
            &v75,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/service/login_handler.cpp",
            "asyncQueryTransferTargetStatusCallback",
            1142);
          v18 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v75,
                  (const char (*)[30])"[TRANSFER] retcode not zero: ");
          v19 = common::milog::MiLogStream::operator<<<int,(int *)0>(v18, (const int *)(v4 + 112));
          v20 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v19,
                  (const char (*)[14])" failed, uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v4 + 48));
          common::milog::MiLogStream::~MiLogStream(&v75);
          v21 = ServiceBox::findService<GateserverService>();
          v22 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
          GateserverService::disconnect(v21, v22, 0xBu);
          v12 = *(_DWORD *)(v4 + 112);
        }
        else
        {
          *(_DWORD *)(v4 + 96) = 0;
          if ( proto::PlayerStatusRedisData::status(status_data) )
          {
            if ( proto::PlayerStatusRedisData::status(status_data) == PLAYER_STATUS_ONLINE )
            {
              *(_DWORD *)(v4 + 96) = proto::PlayerStatusRedisData::gameserver_id(status_data);
              common::milog::MiLogStream::create(
                &v74,
                &common::milog::MiLogDefault::default_log_obj_,
                5u,
                "./src/service/login_handler.cpp",
                "asyncQueryTransferTargetStatusCallback",
                1158);
              v28 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                      &v74,
                      (const char (*)[33])"[TRANSFER] target_online, game: ");
              v29 = ServiceBox::findService<GateserverService>();
              GateserverService::getGameServerDesc[abi:cxx11]((std::string *)&v75, v29, *(_DWORD *)(v4 + 96));
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v28, (const std::string *)&v75);
              std::string::~string(&v75);
              common::milog::MiLogStream::~MiLogStream(&v74);
              if ( *(_DWORD *)(v4 + 96) )
              {
                v40 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
                PlayerSession::setGameserverId(v40, *(_DWORD *)(v4 + 96));
                proto::PlayerLoginReq::PlayerLoginReq((proto::PlayerLoginReq *const)(v4 + 256));
                v41 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
                if ( PlayerSession::getCachedLoginReq(v41, (proto::PlayerLoginReq *)(v4 + 256)) )
                {
                  common::milog::MiLogStream::create(
                    &v75,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/service/login_handler.cpp",
                    "asyncQueryTransferTargetStatusCallback",
                    1181);
                  common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                    &v75,
                    (const char (*)[43])"[TRANSFER] req_packet_ptr->getProto failed");
                  common::milog::MiLogStream::~MiLogStream(&v75);
                  v12 = -1;
                }
                else
                {
                  proto::PlayerLoginReq::set_login_rand((proto::PlayerLoginReq *const)(v4 + 256), 0LL);
                  v42 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
                  isEditor = PlayerSession::isEditor(v42);
                  proto::PlayerLoginReq::set_is_editor((proto::PlayerLoginReq *const)(v4 + 256), isEditor);
                  proto::PlayerLoginReq::set_target_uid((proto::PlayerLoginReq *const)(v4 + 256), *(_DWORD *)(v4 + 64));
                  proto::PlayerLoginReq::set_is_transfer((proto::PlayerLoginReq *const)(v4 + 256), 1);
                  common::minet::PacketUtils::createPacket<proto::PlayerLoginReq>((const proto::PlayerLoginReq *)(v4 + 224));
                  if ( std::operator==<common::minet::Packet>(
                         (const std::shared_ptr<common::minet::Packet> *)(v4 + 224),
                         0LL) )
                  {
                    common::milog::MiLogStream::create(
                      &v75,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/service/login_handler.cpp",
                      "asyncQueryTransferTargetStatusCallback",
                      1192);
                    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                      &v75,
                      (const char (*)[19])"createPacket fails");
                    common::milog::MiLogStream::~MiLogStream(&v75);
                    v12 = -1;
                  }
                  else
                  {
                    v44 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
                    if ( common::minet::Packet::setProto<proto::PlayerLoginReq>(
                           v44,
                           (const proto::PlayerLoginReq *)(v4 + 256)) )
                    {
                      common::milog::MiLogStream::create(
                        &v75,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/service/login_handler.cpp",
                        "asyncQueryTransferTargetStatusCallback",
                        1197);
                      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                        &v75,
                        (const char (*)[27])"[TRANSFER] setProto failed");
                      common::milog::MiLogStream::~MiLogStream(&v75);
                      v12 = -1;
                    }
                    else
                    {
                      v45 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
                      PlayerSession::initPacketHead(v45, (const common::minet::PacketPtr *)(v4 + 224));
                      v46 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
                      v47 = *(_DWORD *)(v4 + 96);
                      std::shared_ptr<common::minet::Packet>::shared_ptr(
                        &packet_ptr,
                        (const std::shared_ptr<common::minet::Packet> *)(v4 + 224));
                      LOBYTE(v47) = (unsigned int)NetworkMgrBase::sendPacketToTargetService(
                                                    v46,
                                                    (common::minet::PacketPtr)__PAIR128__(3LL, &packet_ptr),
                                                    v47,
                                                    v48) != 0;
                      std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
                      if ( (_BYTE)v47 )
                      {
                        common::milog::MiLogStream::create(
                          &v75,
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/service/login_handler.cpp",
                          "asyncQueryTransferTargetStatusCallback",
                          1204);
                        common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                          &v75,
                          (const char (*)[44])"[TRANSFER] sendPacketToTargetService failed");
                        common::milog::MiLogStream::~MiLogStream(&v75);
                        v12 = -1;
                      }
                      else
                      {
                        common::milog::MiLogStream::create(
                          &v75,
                          &common::milog::MiLogDefault::default_log_obj_,
                          5u,
                          "./src/service/login_handler.cpp",
                          "asyncQueryTransferTargetStatusCallback",
                          1208);
                        v49 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                &v75,
                                (const char (*)[39])"[TRANSFER] send LoginReq to game uid: ");
                        v50 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
                        Uid = PlayerSession::getUid(v50);
                        v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v49,
                                (const unsigned int *)&Uid);
                        v52 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                                v51,
                                (const char (*)[12])"target_uid:");
                        v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v52,
                                (const unsigned int *)(v4 + 64));
                        v54 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                                v53,
                                (const char (*)[11])" game_id: ");
                        v55 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v54,
                                (const unsigned int *)(v4 + 96));
                        v56 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                                v55,
                                (const char (*)[11])" session: ");
                        v57 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
                        val = common::minet::KcpSession::getSessionId(v57);
                        v58 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v56,
                                (const unsigned int *)&val);
                        v59 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                                v58,
                                (const char (*)[15])" device_name: ");
                        v60 = proto::PlayerLoginReq::device_name[abi:cxx11]((const proto::PlayerLoginReq *const)(v4 + 256));
                        v61 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v59, v60);
                        v62 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                v61,
                                (const char (*)[14])", login_rand:");
                        v69 = proto::PlayerStatusRedisData::login_rand(status_data);
                        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v62, &v69);
                        common::milog::MiLogStream::~MiLogStream(&v75);
                        v12 = 0;
                      }
                    }
                  }
                  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 224));
                }
                proto::PlayerLoginReq::~PlayerLoginReq((proto::PlayerLoginReq *const)(v4 + 256));
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v75,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/service/login_handler.cpp",
                  "asyncQueryTransferTargetStatusCallback",
                  1169);
                v31 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                        &v75,
                        (const char (*)[17])"[TRANSFER] uid: ");
                v32 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
                v66 = PlayerSession::getUid(v32);
                v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &v66);
                v34 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        v33,
                        (const char (*)[13])" target_uid:");
                v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v34,
                        (const unsigned int *)(v4 + 64));
                v36 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                        v35,
                        (const char (*)[10])" status: ");
                Uid = proto::PlayerStatusRedisData::status(status_data);
                v37 = common::milog::MiLogStream::operator<<<proto::PlayerStatusType,(proto::PlayerStatusType*)0>(
                        v36,
                        &Uid);
                v38 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                        v37,
                        (const char (*)[37])" find gameserver_id failed session: ");
                v39 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
                val = common::minet::KcpSession::getSessionId(v39);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, (const unsigned int *)&val);
                common::milog::MiLogStream::~MiLogStream(&v75);
                v12 = -1;
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v75,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/service/login_handler.cpp",
                "asyncQueryTransferTargetStatusCallback",
                1163);
              v30 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                      &v75,
                      (const char (*)[21])"Not support status: ");
              val = proto::PlayerStatusRedisData::status(status_data);
              common::milog::MiLogStream::operator<<<proto::PlayerStatusType,(proto::PlayerStatusType*)0>(v30, &val);
              common::milog::MiLogStream::~MiLogStream(&v75);
              v12 = -1;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v75,
              &common::milog::MiLogDefault::default_log_obj_,
              5u,
              "./src/service/login_handler.cpp",
              "asyncQueryTransferTargetStatusCallback",
              1151);
            v23 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    &v75,
                    (const char (*)[32])"[TRANSFER] target_offline, uid:");
            v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v23,
                    (const unsigned int *)(v4 + 48));
            v25 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v24,
                    (const char (*)[13])" target_uid:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v4 + 64));
            common::milog::MiLogStream::~MiLogStream(&v75);
            v26 = ServiceBox::findService<GateserverService>();
            v27 = std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<PlayerSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
            GateserverService::disconnect(v26, v27, 0xBu);
            v12 = -1;
          }
        }
        std::shared_ptr<PlayerSession>::~shared_ptr((std::shared_ptr<PlayerSession> *const)(v4 + 192));
      }
      std::shared_ptr<proto::PlayerTransferNotify const>::~shared_ptr((std::shared_ptr<const proto::PlayerTransferNotify> *const)(v4 + 160));
    }
    std::shared_ptr<proto::PlayerStatusRedisData>::~shared_ptr((std::shared_ptr<proto::PlayerStatusRedisData> *const)(v4 + 128));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v75,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/login_handler.cpp",
      "asyncQueryTransferTargetStatusCallback",
      1115);
    v9 = std::type_info::name((const std::type_info *const)&`typeinfo for'std::shared_ptr<proto::PlayerStatusRedisData>);
    v10 = std::any::type(p_context);
    v11 = std::type_info::name(v10);
    common::milog::MiLogStream::operator()(&v75, "bad any_cast from any.type=%s to type=%s", v11, v9);
    common::milog::MiLogStream::~MiLogStream(&v75);
    v12 = -1;
  }
  result = v12;
  if ( v76 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8048) = 0;
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
    *(_DWORD *)((v4 >> 3) + 0x7FFF8048) = -168430091;
  }
  return result;
};

// Line 1216: range 000000000C770A22-000000000C770A50
proto::Retcode __cdecl LoginHandler::converToProtoRetcode(
        LoginHandler *const this,
        SdkRetcode sdk_retcode,
        int32_t i_retcode)
{
  if ( sdk_retcode != FAIL )
    return 0;
  if ( i_retcode == -108 )
    return 26;
  return 12;
};

// Line 1234: range 000000000C770A52-000000000C770E2A
bool __cdecl LoginHandler::isAccountValidLogin(LoginHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool v5; // r14
  uint32_t v6; // eax
  const std::string *v7; // rax
  const std::string *v8; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  const std::string *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  const std::string *v16; // rax
  const std::string *v17; // rdx
  common::milog::MiLogStream *v18; // r14
  const std::string *v19; // rax
  common::milog::MiLogStream *v20; // rax
  bool result; // al
  unsigned int val; // [rsp+14h] [rbp-9Ch] BYREF
  const proto::GetPlayerTokenReq *req; // [rsp+18h] [rbp-98h]
  common::milog::MiLogStream v24; // [rsp+20h] [rbp-90h] BYREF
  char v25[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 req_ptr:1235";
  *(_QWORD *)(v2 + 16) = LoginHandler::isAccountValidLogin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetPlayerTokenReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetPlayerTokenReq const>(
         (const std::shared_ptr<const proto::GetPlayerTokenReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/login_handler.cpp",
      "isAccountValidLogin",
      1235);
    common::milog::MiLogStream::operator()(&v24, "get GetPlayerTokenReq failed");
    common::milog::MiLogStream::~MiLogStream(&v24);
    v5 = 1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::GetPlayerTokenReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetPlayerTokenReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v6 = proto::GetPlayerTokenReq::platform_type(req);
    if ( !TxtConfigMgr::isPsnPlatform(v6) )
      goto LABEL_15;
    v7 = proto::GetPlayerTokenReq::psn_id[abi:cxx11](req);
    if ( (unsigned __int8)std::string::empty(v7)
      || (v8 = proto::GetPlayerTokenReq::online_id[abi:cxx11](req), (unsigned __int8)std::string::empty(v8)) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/login_handler.cpp",
        "isAccountValidLogin",
        1252);
      v10 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v24,
              (const char (*)[29])"psn login but lack info uid:");
      val = proto::GetPlayerTokenReq::uid(req);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" psn_id:");
      v13 = proto::GetPlayerTokenReq::psn_id[abi:cxx11](req);
      v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, v13);
      v15 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])" online_id:");
      v16 = proto::GetPlayerTokenReq::online_id[abi:cxx11](req);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, v16);
      common::milog::MiLogStream::~MiLogStream(&v24);
    }
    v17 = proto::GetPlayerTokenReq::psn_region[abi:cxx11](req);
    if ( !LoginHandler::canPsnLogin(this, v17) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/login_handler.cpp",
        "isAccountValidLogin",
        1257);
      v18 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v24, (const char (*)[13])"psn_region: ");
      v19 = proto::GetPlayerTokenReq::psn_region[abi:cxx11](req);
      v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, v19);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        v20,
        (const char (*)[26])" can't login this region!");
      common::milog::MiLogStream::~MiLogStream(&v24);
      v5 = 0;
    }
    else
    {
LABEL_15:
      v5 = 1;
    }
  }
  std::shared_ptr<proto::GetPlayerTokenReq const>::~shared_ptr((std::shared_ptr<const proto::GetPlayerTokenReq> *const)(v2 + 32));
  result = v5;
  if ( v25 == (char *)v2 )
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

// Line 1266: range 000000000C770E4A-000000000C7712C0
bool __cdecl LoginHandler::canPsnLogin(LoginHandler *const this, const std::string *psn_region)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  bool v5; // r14
  std::string *p_region_name; // rdx
  common::milog::MiLogStream *v7; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  __gnu_cxx::__normal_iterator<char*,std::string > v9; // r15
  __gnu_cxx::__normal_iterator<char*,std::string > v10; // r14
  __gnu_cxx::__normal_iterator<char*,std::string > v11; // rax
  LoginHandler::canPsnLogin::<lambda(unsigned char)> v12; // cl
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  bool result; // al
  const DbDeployConfigMgr *db_deploy_config_mgr; // [rsp+20h] [rbp-D0h]
  const data::DbRegionConfig *region_config_ptr; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v18; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 21 upper_psn_region:1284";
  *(_QWORD *)(v2 + 16) = LoginHandler::canPsnLogin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( (unsigned __int8)std::string::empty(psn_region) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/service/login_handler.cpp",
      "canPsnLogin",
      1270);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v19, (const char (*)[20])"psn region is empty");
    common::milog::MiLogStream::~MiLogStream(&v19);
    v5 = 0;
  }
  else
  {
    ServiceBox::findService<GateserverService>();
    GateserverService::getConfig((GateserverService *const)&v18);
    db_deploy_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->db_config_mgr.db_deploy_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v18);
    ServiceBox::findService<GateserverService>();
    GateserverService::getConfig((GateserverService *const)&v18);
    p_region_name = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->region_name;
    region_config_ptr = DbDeployConfigMgr::findDbRegionConfig(db_deploy_config_mgr, p_region_name);
    std::shared_ptr<Config>::~shared_ptr(&v18);
    if ( region_config_ptr )
    {
      std::string::basic_string(v2 + 32, psn_region);
      v9._M_current = (char *)std::string::begin(v2 + 32);
      v10._M_current = (char *)std::string::end(v2 + 32);
      v11._M_current = (char *)std::string::begin(v2 + 32);
      std::transform<__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>,LoginHandler::canPsnLogin(std::string const&)::{lambda(unsigned char)#1}>(
        v11,
        v10,
        v9,
        v12);
      if ( common::tools::MiscUtils::isContains<std::set<std::string> const,std::string>(
             &region_config_ptr->psn_region_set,
             (const std::string *)(v2 + 32)) )
      {
        v5 = 1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/service/login_handler.cpp",
          "canPsnLogin",
          1289);
        v13 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v19,
                (const char (*)[49])"psn region can't login this region, psn_region: ");
        v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, (const std::string *)(v2 + 32));
        common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
          v14,
          (const char (*)[26])" try use DEFAULT to login");
        common::milog::MiLogStream::~MiLogStream(&v19);
        v5 = common::tools::MiscUtils::isContains<std::set<std::string> const,char [8]>(
               &region_config_ptr->psn_region_set,
               (const char (*)[8])"DEFAULT");
      }
      std::string::~string((void *)(v2 + 32));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/service/login_handler.cpp",
        "canPsnLogin",
        1279);
      v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v19,
             (const char (*)[35])"can't find region config, region: ");
      ServiceBox::findService<GateserverService>();
      GateserverService::getConfig((GateserverService *const)&v18);
      v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &v8->region_name);
      std::shared_ptr<Config>::~shared_ptr(&v18);
      common::milog::MiLogStream::~MiLogStream(&v19);
      v5 = 0;
    }
  }
  result = v5;
  if ( v20 == (char *)v2 )
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

// Line 1286: range 000000000C770E2C-000000000C770E49
unsigned __int8 __cdecl LoginHandler::canPsnLogin(std::string const&)::{lambda(unsigned char)#1}::operator()(
        const LoginHandler::canPsnLogin::<lambda(unsigned char)> *const __closure,
        unsigned __int8 c)
{
  return toupper(c);
};

// Line 1293: range 000000000C78E32A-000000000C78E33E
void __cdecl GLOBAL__sub_I_merge_merge_gateserver_app_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 1293: range 000000000C774E34-000000000C78E329
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority);
