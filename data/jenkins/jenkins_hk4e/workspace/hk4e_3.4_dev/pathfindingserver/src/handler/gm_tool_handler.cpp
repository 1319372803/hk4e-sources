// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/handler/gm_tool_handler.cpp

// Line 31: range 000000000CB65C6E-000000000CB66309
int32_t __cdecl GMToolHandler::addPacketFuncToMap(
        GMToolHandler *const this,
        PacketFuncMap *push_packet_func_map,
        PacketFuncMap *push_fail_packet_func_map,
        PacketFuncMap *process_packet_func_map)
{
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v5; // rax
  GMToolHandler **v6; // r8
  const std::_Placeholder<1> *v7; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v8; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v9; // rax
  GMToolHandler **v10; // r8
  const std::_Placeholder<1> *v11; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v12; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v13; // rax
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+2Ch] [rbp-94h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v16; // [rsp+30h] [rbp-90h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+38h] [rbp-88h] BYREF
  int (*__f)(GMToolHandler *, std::shared_ptr<common::minet::Packet>); // [rsp+40h] [rbp-80h] BYREF
  __int64 v19; // [rsp+48h] [rbp-78h]
  std::_Bind_helper<false,int (GMToolHandler::*)(std::shared_ptr<common::minet::Packet>),GMToolHandler*,const std::_Placeholder<1>&>::type v20; // [rsp+50h] [rbp-70h] BYREF
  common::milog::MiLogStream v21; // [rsp+70h] [rbp-50h] BYREF

  __x = 2361;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v16._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
  if ( std::operator!=(&v16, &__y) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/gm_tool_handler.cpp",
      "addPacketFuncToMap",
      32);
    common::milog::MiLogStream::operator()(&v21, "can not add repeat process func for cmd_id=%u", 2361LL);
    common::milog::MiLogStream::~MiLogStream(&v21);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
    __x = 2361;
    v5 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_map,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<GMToolHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}>(
      v5,
      (GMToolHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
    __x = 2329;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_map,
                    &__x)._M_node;
    v16._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
    if ( std::operator!=(&v16, &__y) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/gm_tool_handler.cpp",
        "addPacketFuncToMap",
        33);
      common::milog::MiLogStream::operator()(&v21, "can not add repeat process func for cmd_id=%u", 2329LL);
      common::milog::MiLogStream::~MiLogStream(&v21);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
      __f = (int (*)(GMToolHandler *, std::shared_ptr<common::minet::Packet>))GMToolHandler::onGMShowObstacleRsp;
      v19 = 0LL;
      std::bind<int (GMToolHandler::*)(std::shared_ptr<common::minet::Packet>),GMToolHandler*,std::_Placeholder<1> const&>(
        &v20,
        &__f,
        (GMToolHandler **)&__y,
        (const std::_Placeholder<1> *)&std::placeholders::_1,
        v6,
        v7);
      __x = 2329;
      v8 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_map,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (GMToolHandler::*)(std::shared_ptr<common::minet::Packet>) ()(GMToolHandler*,std::_Placeholder<1>)>>(
        v8,
        &v20);
      __x = 2357;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_map,
                      &__x)._M_node;
      v16._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
      if ( std::operator!=(&v16, &__y) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/gm_tool_handler.cpp",
          "addPacketFuncToMap",
          34);
        common::milog::MiLogStream::operator()(&v21, "can not add repeat process func for cmd_id=%u", 2357LL);
        common::milog::MiLogStream::~MiLogStream(&v21);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
        __x = 2357;
        v9 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
               process_packet_func_map,
               &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<GMToolHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}>(
          v9,
          (GMToolHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
        __x = 2400;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_map,
                        &__x)._M_node;
        v16._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
        if ( std::operator!=(&v16, &__y) )
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/gm_tool_handler.cpp",
            "addPacketFuncToMap",
            35);
          common::milog::MiLogStream::operator()(&v21, "can not add repeat process func for cmd_id=%u", 2400LL);
          common::milog::MiLogStream::~MiLogStream(&v21);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
          __f = (int (*)(GMToolHandler *, std::shared_ptr<common::minet::Packet>))GMToolHandler::onGMShowNavMeshRsp;
          v19 = 0LL;
          std::bind<int (GMToolHandler::*)(std::shared_ptr<common::minet::Packet>),GMToolHandler*,std::_Placeholder<1> const&>(
            &v20,
            &__f,
            (GMToolHandler **)&__y,
            (const std::_Placeholder<1> *)&std::placeholders::_1,
            v10,
            v11);
          __x = 2400;
          v12 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                  process_packet_func_map,
                  &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (GMToolHandler::*)(std::shared_ptr<common::minet::Packet>) ()(GMToolHandler*,std::_Placeholder<1>)>>(
            v12,
            &v20);
          __x = 2316;
          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                          process_packet_func_map,
                          &__x)._M_node;
          v16._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
          if ( std::operator!=(&v16, &__y) )
          {
            common::milog::MiLogStream::create(
              &v21,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/gm_tool_handler.cpp",
              "addPacketFuncToMap",
              36);
            common::milog::MiLogStream::operator()(&v21, "can not add repeat process func for cmd_id=%u", 2316LL);
            common::milog::MiLogStream::~MiLogStream(&v21);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
            __x = 2316;
            v13 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                    process_packet_func_map,
                    &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<GMToolHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}>(
              v13,
              (GMToolHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
            return 0;
          }
        }
      }
    }
  }
};

// Line 32: range 000000000CB64CC2-000000000CB6536D
int __cdecl GMToolHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator()(
        const GMToolHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // r14d
  GMToolHandler *this; // r14
  common::minet::Packet *v7; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  const proto::PacketHead *Head; // rax
  common::milog::MiLogStream *v10; // rax
  common::minet::Packet *v11; // rax
  common::minet::Packet *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  unsigned __int64 v15; // rax
  __int64 (__fastcall *v16)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  int result; // eax
  unsigned __int16 val; // [rsp+2Ah] [rbp-116h] BYREF
  int ret; // [rsp+2Ch] [rbp-114h]
  const proto::GMShowObstacleReq *req; // [rsp+30h] [rbp-110h]
  proto::GMShowObstacleRsp *rsp_0; // [rsp+38h] [rbp-108h]
  std::shared_ptr<common::minet::Packet> v25; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v26; // [rsp+50h] [rbp-F0h] BYREF
  char v27[208]; // [rsp+70h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 13 error_code:32 64 16 10 req_ptr:32 96 16 10 rsp_ptr:32 128 16 17 rsp_packet_ptr:32";
  *(_QWORD *)(v2 + 16) = GMToolHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GMShowObstacleReq>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::GMShowObstacleReq const>(
         (const std::shared_ptr<const proto::GMShowObstacleReq> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/gm_tool_handler.cpp",
      "operator()",
      32);
    common::milog::MiLogStream::operator()(&v26, "get proto failed");
    common::milog::MiLogStream::~MiLogStream(&v26);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::GMShowObstacleReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GMShowObstacleReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::tools::perf::make_shared<proto::GMShowObstacleRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GMShowObstacleRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GMShowObstacleRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto::GMShowObstacleRsp::set_retcode(rsp_0, -1);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure, 0xFFFFFFFFLL);
    this = __closure->__this;
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v25, p_packet_ptr);
    ret = GMToolHandler::onGMShowObstacleReq(this, &v25, req, rsp_0);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v25);
    proto::GMShowObstacleRsp::set_retcode(rsp_0, ret);
    common::minet::PacketUtils::createPacket<proto::GMShowObstacleRsp>((const proto::GMShowObstacleRsp *)(v2 + 128));
    if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/gm_tool_handler.cpp",
        "operator()",
        32);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v26, (const char (*)[22])"create packet failed!");
      common::milog::MiLogStream::~MiLogStream(&v26);
      v5 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      Head = common::minet::Packet::getHead(v8);
      *(_DWORD *)(v2 + 48) = common::minet::Packet::copyHead(v7, Head);
      if ( *(_DWORD *)(v2 + 48) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/gm_tool_handler.cpp",
          "operator()",
          32);
        v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                &v26,
                (const char (*)[28])"copyHead fails! error code:");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v26);
        v5 = *(_DWORD *)(v2 + 48);
      }
      else
      {
        v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        common::minet::Packet::setSourceService(v11, 0xEu);
        v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        common::minet::Packet::setTargetService(v12, 2u);
        v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
        v14 = v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v13, 2LL);
        v15 = (unsigned __int64)(v14->_vptr_NetworkMgrBase + 8);
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          v15 = __asan_report_load8(v14->_vptr_NetworkMgrBase + 8, 2LL);
        v16 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v15;
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          &v25,
          (const std::shared_ptr<common::minet::Packet> *)(v2 + 128));
        *(_DWORD *)(v2 + 48) = v16(v14, &v25);
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&v25);
        if ( *(_DWORD *)(v2 + 48) )
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/gm_tool_handler.cpp",
            "operator()",
            32);
          v17 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  &v26,
                  (const char (*)[47])"sendRspPacketToGateService failed: error code:");
          common::milog::MiLogStream::operator<<<int,(int *)0>(v17, (const int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v26);
          v5 = *(_DWORD *)(v2 + 48);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/gm_tool_handler.cpp",
            "operator()",
            32);
          v18 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  &v26,
                  (const char (*)[25])"send rsp packet cmdid = ");
          v19 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          val = common::minet::Packet::getCmdId(v19);
          common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(v18, &val);
          common::milog::MiLogStream::~MiLogStream(&v26);
          v5 = proto::GMShowObstacleRsp::retcode(rsp_0);
        }
      }
    }
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 128));
    std::shared_ptr<proto::GMShowObstacleRsp>::~shared_ptr((std::shared_ptr<proto::GMShowObstacleRsp> *const)(v2 + 96));
  }
  std::shared_ptr<proto::GMShowObstacleReq const>::~shared_ptr((std::shared_ptr<const proto::GMShowObstacleReq> *const)(v2 + 64));
  result = v5;
  if ( v27 == (char *)v2 )
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

// Line 34: range 000000000CB6536E-000000000CB65A19
int __cdecl GMToolHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator()(
        const GMToolHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // r14d
  GMToolHandler *this; // r14
  common::minet::Packet *v7; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  const proto::PacketHead *Head; // rax
  common::milog::MiLogStream *v10; // rax
  common::minet::Packet *v11; // rax
  common::minet::Packet *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  unsigned __int64 v15; // rax
  __int64 (__fastcall *v16)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  int result; // eax
  unsigned __int16 val; // [rsp+2Ah] [rbp-116h] BYREF
  int ret; // [rsp+2Ch] [rbp-114h]
  const proto::GMShowNavMeshReq *req; // [rsp+30h] [rbp-110h]
  proto::GMShowNavMeshRsp *rsp_0; // [rsp+38h] [rbp-108h]
  std::shared_ptr<common::minet::Packet> v25; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v26; // [rsp+50h] [rbp-F0h] BYREF
  char v27[208]; // [rsp+70h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 13 error_code:34 64 16 10 req_ptr:34 96 16 10 rsp_ptr:34 128 16 17 rsp_packet_ptr:34";
  *(_QWORD *)(v2 + 16) = GMToolHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GMShowNavMeshReq>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::GMShowNavMeshReq const>(
         (const std::shared_ptr<const proto::GMShowNavMeshReq> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/gm_tool_handler.cpp",
      "operator()",
      34);
    common::milog::MiLogStream::operator()(&v26, "get proto failed");
    common::milog::MiLogStream::~MiLogStream(&v26);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::GMShowNavMeshReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GMShowNavMeshReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::tools::perf::make_shared<proto::GMShowNavMeshRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GMShowNavMeshRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GMShowNavMeshRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto::GMShowNavMeshRsp::set_retcode(rsp_0, -1);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure, 0xFFFFFFFFLL);
    this = __closure->__this;
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v25, p_packet_ptr);
    ret = GMToolHandler::onGMShowNavMeshReq(this, &v25, req, rsp_0);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v25);
    proto::GMShowNavMeshRsp::set_retcode(rsp_0, ret);
    common::minet::PacketUtils::createPacket<proto::GMShowNavMeshRsp>((const proto::GMShowNavMeshRsp *)(v2 + 128));
    if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/gm_tool_handler.cpp",
        "operator()",
        34);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v26, (const char (*)[22])"create packet failed!");
      common::milog::MiLogStream::~MiLogStream(&v26);
      v5 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      Head = common::minet::Packet::getHead(v8);
      *(_DWORD *)(v2 + 48) = common::minet::Packet::copyHead(v7, Head);
      if ( *(_DWORD *)(v2 + 48) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/gm_tool_handler.cpp",
          "operator()",
          34);
        v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                &v26,
                (const char (*)[28])"copyHead fails! error code:");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v26);
        v5 = *(_DWORD *)(v2 + 48);
      }
      else
      {
        v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        common::minet::Packet::setSourceService(v11, 0xEu);
        v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        common::minet::Packet::setTargetService(v12, 2u);
        v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
        v14 = v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v13, 2LL);
        v15 = (unsigned __int64)(v14->_vptr_NetworkMgrBase + 8);
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          v15 = __asan_report_load8(v14->_vptr_NetworkMgrBase + 8, 2LL);
        v16 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v15;
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          &v25,
          (const std::shared_ptr<common::minet::Packet> *)(v2 + 128));
        *(_DWORD *)(v2 + 48) = v16(v14, &v25);
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&v25);
        if ( *(_DWORD *)(v2 + 48) )
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/gm_tool_handler.cpp",
            "operator()",
            34);
          v17 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  &v26,
                  (const char (*)[47])"sendRspPacketToGateService failed: error code:");
          common::milog::MiLogStream::operator<<<int,(int *)0>(v17, (const int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v26);
          v5 = *(_DWORD *)(v2 + 48);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/gm_tool_handler.cpp",
            "operator()",
            34);
          v18 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  &v26,
                  (const char (*)[25])"send rsp packet cmdid = ");
          v19 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          val = common::minet::Packet::getCmdId(v19);
          common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(v18, &val);
          common::milog::MiLogStream::~MiLogStream(&v26);
          v5 = proto::GMShowNavMeshRsp::retcode(rsp_0);
        }
      }
    }
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 128));
    std::shared_ptr<proto::GMShowNavMeshRsp>::~shared_ptr((std::shared_ptr<proto::GMShowNavMeshRsp> *const)(v2 + 96));
  }
  std::shared_ptr<proto::GMShowNavMeshReq const>::~shared_ptr((std::shared_ptr<const proto::GMShowNavMeshReq> *const)(v2 + 64));
  result = v5;
  if ( v27 == (char *)v2 )
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

// Line 36: range 000000000CB65A1A-000000000CB65C6D
int __cdecl GMToolHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator()(
        const GMToolHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  proto::NavMeshStatsNotify *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::minet::Packet *v5; // rax
  int v6; // r14d
  GMToolHandler *this; // r14
  int result; // eax
  std::shared_ptr<common::minet::Packet> v9; // [rsp+10h] [rbp-E0h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-D0h] BYREF
  char v11[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (proto::NavMeshStatsNotify *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (proto::NavMeshStatsNotify *)v3;
  }
  v2->_vptr_MessageLite = (int (**)(...))1102416563;
  v2->_internal_metadata_.ptr_ = "1 48 48 9 notify:36";
  v2->infos_.arena_ = (google::protobuf::Arena *)GMToolHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &,std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator();
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  proto::NavMeshStatsNotify::NavMeshStatsNotify(v2 + 1);
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  if ( common::minet::Packet::getProto<proto::NavMeshStatsNotify>(v5, v2 + 1) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/gm_tool_handler.cpp",
      "operator()",
      36);
    common::milog::MiLogStream::operator()(&v10, "get proto failed");
    common::milog::MiLogStream::~MiLogStream(&v10);
    v6 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure, &v2[1]);
    this = __closure->__this;
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v9, p_packet_ptr);
    v6 = GMToolHandler::onNavMeshStatsNotify(this, &v9, v2 + 1);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v9);
  }
  proto::NavMeshStatsNotify::~NavMeshStatsNotify(v2 + 1);
  result = v6;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    v2->_vptr_MessageLite = (int (**)(...))1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 41: range 000000000CB6678E-000000000CB66964
int32_t __cdecl GMToolHandler::onGMShowObstacleReq(
        GMToolHandler *const this,
        common::minet::PacketPtr *p_packet_ptr,
        const proto::GMShowObstacleReq *req,
        proto::GMShowObstacleRsp *rsp_0)
{
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  PathfindingService *v5; // rax
  std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  const std::shared_ptr<StaticNavMesh> *StaticNavMesh; // rax
  DynamicUniqueTokenType uid; // [rsp+2Ch] [rbp-44h]
  PathfindingThreadLocal *tl; // [rsp+30h] [rbp-40h]
  DynamicNavMesh *dynamic_nav_mesh; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-30h] BYREF

  v4 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  uid = common::minet::Packet::getUserId(v4);
  v5 = ServiceBox::findService<PathfindingService>();
  tl = PathfindingService::getThreadLocal(v5);
  v6 = std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&tl->dynamic_navmesh_mgr);
  dynamic_nav_mesh = NavMeshManager::GetDynamicNavMesh(v6, uid);
  if ( dynamic_nav_mesh )
  {
    StaticNavMesh = DynamicNavMesh::GetStaticNavMesh(dynamic_nav_mesh);
    if ( std::operator==<StaticNavMesh>(StaticNavMesh, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/gm_tool_handler.cpp",
        "onGMShowObstacleReq",
        56);
      common::milog::MiLogStream::operator()(&v13, "uid:%u can't find static nav_mesh", uid);
      common::milog::MiLogStream::~MiLogStream(&v13);
      return 6001;
    }
    else
    {
      std::function<bool ()(NavMeshObstacle const*)>::function<GMToolHandler::onGMShowObstacleReq(std::shared_ptr<common::minet::Packet>,proto::GMShowObstacleReq const&,proto::GMShowObstacleRsp &)::{lambda(NavMeshObstacle const*)#1},void,void>(
        (std::function<bool(const NavMeshObstacle*)> *const)&v13,
        (GMToolHandler::onGMShowObstacleReq::<lambda(const NavMeshObstacle*)>)rsp_0);
      DynamicNavMesh::ForeachNavMeshObstacle(
        dynamic_nav_mesh,
        (const DynamicNavMesh::ForeachNavMeshObstacleCallbackHandle *)&v13);
      std::function<bool ()(NavMeshObstacle const*)>::~function((std::function<bool(const NavMeshObstacle*)> *const)&v13);
      return 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/gm_tool_handler.cpp",
      "onGMShowObstacleReq",
      50);
    common::milog::MiLogStream::operator()(&v13, "uid:%u can't find dynamic_nav_mesh", uid);
    common::milog::MiLogStream::~MiLogStream(&v13);
    return 6001;
  }
};

// Line 61: range 000000000CB6630A-000000000CB6678D
bool __cdecl GMToolHandler::onGMShowObstacleReq(std::shared_ptr<common::minet::Packet>,proto::GMShowObstacleReq const&,proto::GMShowObstacleRsp &)::{lambda(NavMeshObstacle const*)#1}::operator()(
        const GMToolHandler::onGMShowObstacleReq::<lambda(const NavMeshObstacle*)> *const __closure,
        const NavMeshObstacle *obstacle)
{
  int Handle; // edx
  uint64_t VersionTimeStamp; // rdx
  const Vector3f *Position; // rax
  const Quaternionf *v5; // rax
  proto::GMObstacleInfo *pb_obstacle_ptr; // [rsp+18h] [rbp-48h]
  proto::Vector *center; // [rsp+20h] [rbp-40h]
  const Vector3f *v_center; // [rsp+28h] [rbp-38h]
  proto::Vector3Int *extents; // [rsp+30h] [rbp-30h]
  proto::MathQuaternion *rotation; // [rsp+40h] [rbp-20h]
  const Quaternionf *q_rotation; // [rsp+48h] [rbp-18h]
  Vector3f WorldExtents; // [rsp+54h] [rbp-Ch] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure, obstacle);
  pb_obstacle_ptr = proto::GMShowObstacleRsp::add_obstacles(__closure->__rsp);
  Handle = NavMeshObstacle::GetHandle(obstacle);
  proto::GMObstacleInfo::set_obstacle_id(pb_obstacle_ptr, Handle);
  if ( NavMeshObstacle::GetShape(obstacle) )
    proto::GMObstacleInfo::set_shape(pb_obstacle_ptr, ObstacleInfo_ShapeType_OBSTACLE_SHAPE_BOX);
  else
    proto::GMObstacleInfo::set_shape(pb_obstacle_ptr, ObstacleInfo_ShapeType_OBSTACLE_SHAPE_CAPSULE);
  VersionTimeStamp = NavMeshObstacle::GetVersionTimeStamp(obstacle);
  proto::GMObstacleInfo::set_timestamp(pb_obstacle_ptr, VersionTimeStamp);
  center = proto::GMObstacleInfo::mutable_center(pb_obstacle_ptr);
  Position = NavMeshObstacle::GetPosition(obstacle);
  v_center = Position;
  if ( *(_BYTE *)(((unsigned __int64)Position >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)Position & 7) + 3) >= *(_BYTE *)(((unsigned __int64)Position >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(Position);
  }
  proto::Vector::set_x(center, v_center->x);
  if ( *(_BYTE *)(((unsigned __int64)&v_center->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v_center + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v_center->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v_center->y);
  }
  proto::Vector::set_y(center, v_center->y);
  if ( *(_BYTE *)(((unsigned __int64)&v_center->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v_center + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v_center->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v_center->z);
  }
  proto::Vector::set_z(center, v_center->z);
  extents = proto::GMObstacleInfo::mutable_extents(pb_obstacle_ptr);
  WorldExtents = NavMeshObstacle::GetWorldExtents(obstacle);
  if ( *(_BYTE *)(((unsigned __int64)&WorldExtents >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)&WorldExtents & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&WorldExtents >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&WorldExtents);
  }
  proto::Vector3Int::set_x(extents, (int)(float)(100.0 * WorldExtents.x));
  if ( *(_BYTE *)(((unsigned __int64)&WorldExtents.y >> 3) + 0x7FFF8000) != 0
    && (char)((((unsigned __int8)&WorldExtents + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&WorldExtents.y >> 3)
                                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(&WorldExtents.y);
  }
  proto::Vector3Int::set_y(extents, (int)(float)(100.0 * WorldExtents.y));
  if ( *(_BYTE *)(((unsigned __int64)&WorldExtents.z >> 3) + 0x7FFF8000) != 0
    && (char)((((unsigned __int8)&WorldExtents + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&WorldExtents.z >> 3)
                                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(&WorldExtents.z);
  }
  proto::Vector3Int::set_z(extents, (int)(float)(100.0 * WorldExtents.z));
  rotation = proto::GMObstacleInfo::mutable_rotation(pb_obstacle_ptr);
  v5 = NavMeshObstacle::GetRotation(obstacle);
  q_rotation = v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v5);
  }
  proto::MathQuaternion::set_x(rotation, q_rotation->x);
  if ( *(_BYTE *)(((unsigned __int64)&q_rotation->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)q_rotation + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q_rotation->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&q_rotation->y);
  }
  proto::MathQuaternion::set_y(rotation, q_rotation->y);
  if ( *(_BYTE *)(((unsigned __int64)&q_rotation->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)q_rotation + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q_rotation->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&q_rotation->z);
  }
  proto::MathQuaternion::set_z(rotation, q_rotation->z);
  if ( *(_BYTE *)(((unsigned __int64)&q_rotation->w >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)q_rotation + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q_rotation->w >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&q_rotation->w);
  }
  proto::MathQuaternion::set_w(rotation, q_rotation->w);
  return 1;
};

// Line 86: range 000000000CB66966-000000000CB66AF9
int32_t __cdecl GMToolHandler::onGMShowObstacleRsp(GMToolHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  common::minet::Packet *v2; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rbx
  uint32_t v5; // r8d
  uint32_t packet_gate_id; // [rsp+1Ch] [rbp-44h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  v2 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  packet_gate_id = common::minet::Packet::getServiceAppId(v2, 2u);
  if ( packet_gate_id )
  {
    v4 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    std::shared_ptr<common::minet::Packet>::shared_ptr(&packet_ptr, p_packet_ptr);
    LOBYTE(v4) = (unsigned int)NetworkMgrBase::sendPacketToTargetService(
                                 v4,
                                 (common::minet::PacketPtr)__PAIR128__(2LL, &packet_ptr),
                                 packet_gate_id,
                                 v5) != 0;
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( (_BYTE)v4 )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/gm_tool_handler.cpp",
        "onGMShowObstacleRsp",
        97);
      common::milog::MiLogStream::operator()(&v8, "send packet failed");
      common::milog::MiLogStream::~MiLogStream(&v8);
      return -1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/gm_tool_handler.cpp",
      "onGMShowObstacleRsp",
      90);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v8, (const char (*)[20])"gateserver_ip is 0!");
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
};

// Line 105: range 000000000CB66AFA-000000000CB67152
void __cdecl GMToolHandler::fillPbTile(
        GMToolHandler *const this,
        proto::PBNavMeshTile *pb_tile,
        const NavMeshTile *tile,
        bool isOverrideTile,
        DynamicNavMesh *dynamic_nav_mesh)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  const NavMeshDataHeader *header; // rdx
  char v9; // cl
  const NavMeshDataHeader *v10; // rdx
  char v11; // dl
  int v12; // eax
  char v13; // dl
  proto::PBNavMeshTile *pb_tilea; // [rsp+20h] [rbp-C0h]
  unsigned __int8 poly_vec_count; // [rsp+37h] [rbp-A9h]
  int i; // [rsp+38h] [rbp-A8h]
  int i_0; // [rsp+3Ch] [rbp-A4h]
  int j; // [rsp+40h] [rbp-A0h]
  proto::PBNavMeshPoly_EdgeType con; // [rsp+44h] [rbp-9Ch]
  int vec_count; // [rsp+48h] [rbp-98h]
  int polyCount; // [rsp+4Ch] [rbp-94h]
  const NavMeshLink *link; // [rsp+50h] [rbp-90h]
  proto::Vector *pb_vec; // [rsp+58h] [rbp-88h]
  unsigned __int64 base; // [rsp+60h] [rbp-80h]
  unsigned __int64 polyRef; // [rsp+68h] [rbp-78h]
  NavMeshPoly *poly; // [rsp+70h] [rbp-70h]
  proto::PBNavMeshPoly *pb_poly; // [rsp+78h] [rbp-68h]
  char v31[96]; // [rsp+80h] [rbp-60h] BYREF

  pb_tilea = pb_tile;
  v5 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (GMToolHandler *const)64;
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 12 7 vec:112";
  *(_QWORD *)(v5 + 16) = GMToolHandler::fillPbTile;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202177536;
  if ( !tile || !dynamic_nav_mesh )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "tile != nullptr && dynamic_nav_mesh != nullptr",
      "./src/handler/gm_tool_handler.cpp",
      0x6Au,
      "void GMToolHandler::fillPbTile(proto::PBNavMeshTile*, const NavMeshTile*, bool, DynamicNavMesh*)");
  }
  if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
    __asan_report_load8(&tile->header, pb_tile);
  header = tile->header;
  v9 = *(_BYTE *)(((unsigned __int64)&header->vertCount >> 3) + 0x7FFF8000);
  LOBYTE(pb_tile) = v9 != 0;
  if ( v9 != 0 && (char)((((_BYTE)header + 24) & 7) + 3) >= v9 )
    __asan_report_load4(&header->vertCount);
  vec_count = header->vertCount;
  for ( i = 0; i < vec_count; ++i )
  {
    pb_vec = proto::PBNavMeshTile::add_vecs(pb_tilea);
    if ( *(_BYTE *)(((unsigned __int64)&tile->verts >> 3) + 0x7FFF8000) )
      __asan_report_load8(&tile->verts, pb_tile);
    pb_tile = (proto::PBNavMeshTile *)&tile->verts[i];
    *(Vector3f *)(v5 + 32) = TileToWorld(tile, (const Vector3f *)pb_tile);
    proto::Vector::set_x(pb_vec, *(float *)(v5 + 32));
    proto::Vector::set_y(pb_vec, *(float *)(v5 + 36));
    proto::Vector::set_z(pb_vec, *(float *)(v5 + 40));
  }
  base = DynamicNavMesh::GetPolyRefBase(dynamic_nav_mesh, tile);
  if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
    __asan_report_load8(&tile->header, tile);
  v10 = tile->header;
  if ( *(_BYTE *)(((unsigned __int64)&v10->polyCount >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->polyCount >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->polyCount);
  }
  polyCount = v10->polyCount;
  for ( i_0 = 0; i_0 < polyCount; ++i_0 )
  {
    polyRef = base | NavMeshPolyRefHelper::EncodeBasePolyId(0, i_0);
    if ( DynamicNavMesh::IsValidPolyRef(dynamic_nav_mesh, polyRef) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&tile->polys >> 3) + 0x7FFF8000) )
        __asan_report_load8(&tile->polys, polyRef);
      poly = &tile->polys[i_0];
      pb_poly = proto::PBNavMeshTile::add_polys(pb_tilea);
      if ( *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)poly + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&poly->vertCount >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&poly->vertCount);
      }
      poly_vec_count = poly->vertCount;
      for ( j = 0; j < poly_vec_count; ++j )
      {
        v11 = *(_BYTE *)(((unsigned __int64)&poly->verts[j] >> 3) + 0x7FFF8000);
        if ( v11 != 0 && (char)(((2 * j + (_BYTE)poly) & 7) + 1) >= v11 )
          __asan_report_load2(&poly->verts[j]);
        proto::PBNavMeshPoly::add_vects(pb_poly, poly->verts[j]);
        if ( isOverrideTile )
          v12 = 3;
        else
          v12 = 0;
        con = v12;
        v13 = *(_BYTE *)(((unsigned __int64)&poly->neis[j] >> 3) + 0x7FFF8000);
        if ( v13 != 0 && (char)(((2 * j + (_BYTE)poly + 12) & 7) + 1) >= v13 )
          __asan_report_load2(&poly->neis[j]);
        if ( (poly->neis[j] & 0x8000u) != 0 )
        {
          con = PBNavMeshPoly_EdgeType_TILE_BOUND_UNCONNECT;
          for ( link = DynamicNavMesh::GetFirstLink(dynamic_nav_mesh, polyRef);
                link;
                link = DynamicNavMesh::GetNextLink(dynamic_nav_mesh, link) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&link->edge >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)link + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&link->edge >> 3) + 0x7FFF8000) )
            {
              __asan_report_load1(&link->edge);
            }
            if ( j == link->edge )
            {
              con = PBNavMeshPoly_EdgeType_TILE_BOUND;
              break;
            }
          }
        }
        proto::PBNavMeshPoly::add_edge_types(pb_poly, con);
        if ( *(_BYTE *)(((unsigned __int64)&poly->area >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)poly + 29) & 7) >= *(_BYTE *)(((unsigned __int64)&poly->area >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&poly->area);
        }
        proto::PBNavMeshPoly::set_area(pb_poly, poly->area);
      }
    }
  }
  if ( v31 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 154: range 000000000CB671CC-000000000CB679F3
int32_t __cdecl GMToolHandler::onGMShowNavMeshReq(
        GMToolHandler *const this,
        common::minet::PacketPtr *p_packet_ptr,
        const proto::GMShowNavMeshReq *req,
        proto::GMShowNavMeshRsp *rsp_0)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  PathfindingService *v8; // rax
  std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  int32_t v10; // r14d
  const std::shared_ptr<StaticNavMesh> *StaticNavMesh; // rax
  float v12; // xmm0_4
  float v13; // xmm0_4
  std::_List_iterator<std::pair<int,int> >::reference v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // rsi
  int32_t result; // eax
  float inY; // [rsp+8h] [rbp-258h]
  float inYa; // [rsp+8h] [rbp-258h]
  float inZ; // [rsp+Ch] [rbp-254h]
  float inZa; // [rsp+Ch] [rbp-254h]
  std::less<int> comp; // [rsp+3Ah] [rbp-226h] BYREF
  stl_allocator<int,16> a; // [rsp+3Bh] [rbp-225h] BYREF
  uint32_t uid; // [rsp+3Ch] [rbp-224h]
  std::list<std::pair<int,int>>::iterator __for_begin; // [rsp+40h] [rbp-220h] BYREF
  std::list<std::pair<int,int>>::iterator __for_end; // [rsp+48h] [rbp-218h] BYREF
  const NavMeshTile *sourceTile; // [rsp+50h] [rbp-210h]
  PathfindingThreadLocal *tl; // [rsp+58h] [rbp-208h]
  DynamicNavMesh *dynamic_nav_mesh; // [rsp+60h] [rbp-200h]
  const proto::Vector *center_ptr; // [rsp+68h] [rbp-1F8h]
  const proto::Vector *extent_ptr; // [rsp+70h] [rbp-1F0h]
  std::list<std::pair<int,int>> *__for_range; // [rsp+78h] [rbp-1E8h]
  const NavMeshTile *tile; // [rsp+80h] [rbp-1E0h]
  proto::PBNavMeshTile *pb_tile; // [rsp+88h] [rbp-1D8h]
  TileLoc loc; // [rsp+90h] [rbp-1D0h] BYREF
  Vector3f min; // [rsp+98h] [rbp-1C8h] BYREF
  Vector3f max; // [rsp+A4h] [rbp-1BCh] BYREF
  common::milog::MiLogStream v40; // [rsp+B0h] [rbp-1B0h] BYREF
  char v41[400]; // [rsp+D0h] [rbp-190h] BYREF

  v4 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(352LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 8 24 insert_tile_callback:174 64 8 6 it:185 96 12 10 center:179 128 12 10 extent:180 160 24"
                        " 13 locations:172 224 24 10 bounds:181 288 24 17 dirtySurfaces:182";
  *(_QWORD *)(v4 + 16) = GMToolHandler::onGMShowNavMeshReq;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -219020288;
  v6[536862724] = -219020288;
  v6[536862725] = -234881024;
  v6[536862726] = -218959118;
  v6[536862727] = -234881024;
  v6[536862728] = -218959118;
  v6[536862729] = -218103808;
  v6[536862730] = -202116109;
  v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  uid = common::minet::Packet::getUserId(v7);
  v8 = ServiceBox::findService<PathfindingService>();
  tl = PathfindingService::getThreadLocal(v8);
  v9 = std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NavMeshManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&tl->dynamic_navmesh_mgr);
  dynamic_nav_mesh = NavMeshManager::GetDynamicNavMesh(v9, uid);
  if ( dynamic_nav_mesh )
  {
    StaticNavMesh = DynamicNavMesh::GetStaticNavMesh(dynamic_nav_mesh);
    if ( std::operator==<StaticNavMesh>(StaticNavMesh, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/gm_tool_handler.cpp",
        "onGMShowNavMeshReq",
        167);
      common::milog::MiLogStream::operator()(&v40, "uid:%u can't find static nav_mesh", uid);
      common::milog::MiLogStream::~MiLogStream(&v40);
      v10 = 6001;
    }
    else
    {
      std::list<std::pair<int,int>>::list((std::list<std::pair<int,int>> *const)(v4 + 160));
      *(_QWORD *)(v4 + 32) = v4 + 160;
      center_ptr = proto::GMShowNavMeshReq::center(req);
      inZ = proto::Vector::z(center_ptr);
      inY = proto::Vector::y(center_ptr);
      v12 = proto::Vector::x(center_ptr);
      Vector3f::Vector3f((Vector3f *const)(v4 + 96), v12, inY, inZ);
      extent_ptr = proto::GMShowNavMeshReq::extent(req);
      inZa = proto::Vector::z(extent_ptr);
      inYa = proto::Vector::y(extent_ptr);
      v13 = proto::Vector::x(extent_ptr);
      Vector3f::Vector3f((Vector3f *const)(v4 + 128), v13, inYa, inZa);
      max = operator+((const Vector3f *)(v4 + 96), (const Vector3f *)(v4 + 128));
      min = operator-((const Vector3f *)(v4 + 96), (const Vector3f *)(v4 + 128));
      MinMaxAABB::MinMaxAABB((MinMaxAABB *const)(v4 + 224), &min, &max);
      stl_allocator<int,16>::stl_allocator(&a);
      vector_set<int,std::less<int>,stl_allocator<int,16>>::vector_set(
        (vector_set<int,std::less<int>,stl_allocator<int,16> > *const)(v4 + 288),
        &comp,
        &a);
      stl_allocator<int,16>::~stl_allocator(&a);
      DynamicNavMesh::GetSourceTileDataBoundsFast<GMToolHandler::onGMShowNavMeshReq(std::shared_ptr<common::minet::Packet>,proto::GMShowNavMeshReq const&,proto::GMShowNavMeshRsp &)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#1}>(
        dynamic_nav_mesh,
        (const MinMaxAABB *)(v4 + 224),
        (const vector_set<int,std::less<int>,stl_allocator<int,16> > *)(v4 + 288),
        (GMToolHandler::onGMShowNavMeshReq::<lambda(const TileLocation&, const Vector3f&, const Quaternionf&)> *)(v4 + 32));
      __for_range = (std::list<std::pair<int,int>> *)(v4 + 160);
      __for_begin._M_node = std::list<std::pair<int,int>>::begin((std::list<std::pair<int,int>> *const)(v4 + 160))._M_node;
      __for_end._M_node = std::list<std::pair<int,int>>::end(__for_range)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v14 = std::_List_iterator<std::pair<int,int>>::operator*(&__for_begin);
        v15 = v14;
        if ( ((unsigned __int8)v14 & 7) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v14->second + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v14 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v14->second + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(v14, 8LL);
        }
        *(_QWORD *)(v4 + 64) = *v15;
        v16 = (unsigned __int16)*(_DWORD *)(v4 + 64);
        tile = DynamicNavMesh::GetTile(dynamic_nav_mesh, v16, *(_DWORD *)(v4 + 68));
        if ( tile )
        {
          pb_tile = proto::GMShowNavMeshRsp::add_tiles(rsp_0);
          sourceTile = 0LL;
          if ( DynamicNavMesh::IsUseHavokCut(dynamic_nav_mesh) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
              __asan_report_load8(&tile->header, v16);
            loc = std::make_pair<int const&,int const&>(&tile->header->x, &tile->header->y);
            sourceTile = DynamicNavMesh::GetSourceTile(dynamic_nav_mesh, &loc);
            if ( sourceTile == tile )
              sourceTile = 0LL;
          }
          GMToolHandler::fillPbTile(this, pb_tile, tile, sourceTile != 0LL, dynamic_nav_mesh);
          if ( sourceTile )
          {
            pb_tile = proto::GMShowNavMeshRsp::add_tiles(rsp_0);
            GMToolHandler::fillPbTile(this, pb_tile, sourceTile, 0, dynamic_nav_mesh);
          }
        }
        std::_List_iterator<std::pair<int,int>>::operator++(&__for_begin);
      }
      v10 = 0;
      vector_set<int,std::less<int>,stl_allocator<int,16>>::~vector_set((vector_set<int,std::less<int>,stl_allocator<int,16> > *const)(v4 + 288));
      std::list<std::pair<int,int>>::~list((std::list<std::pair<int,int>> *const)(v4 + 160));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/gm_tool_handler.cpp",
      "onGMShowNavMeshReq",
      161);
    common::milog::MiLogStream::operator()(&v40, "uid:%u can't find dynamic_nav_mesh", uid);
    common::milog::MiLogStream::~MiLogStream(&v40);
    v10 = 6001;
  }
  result = v10;
  if ( v41 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 174: range 000000000CB67154-000000000CB671CA
void __cdecl GMToolHandler::onGMShowNavMeshReq(std::shared_ptr<common::minet::Packet>,proto::GMShowNavMeshReq const&,proto::GMShowNavMeshRsp &)::{lambda(TileLocation const&,Vector3f const&,Quaternionf const&)#1}::operator()(
        const GMToolHandler::onGMShowNavMeshReq::<lambda(const TileLocation&, const Vector3f&, const Quaternionf&)> *const __closure,
        const TileLocation *tile,
        const Vector3f *surfPosition,
        const Quaternionf *surfRotation)
{
  std::list<std::pair<int,int>> *locations; // rbx
  std::pair<short unsigned int,int> *v5; // rdx
  std::pair<short unsigned int,int> v6; // [rsp+28h] [rbp-18h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure, tile);
  locations = __closure->__locations;
  v6 = std::make_pair<unsigned short const&,int const&>(&tile->m_SurfaceID, &tile->m_TileDataIndex);
  std::list<std::pair<int,int>>::emplace_back<std::pair<unsigned short,int>>(locations, &v6, v5);
};

// Line 210: range 000000000CB679F4-000000000CB67B87
int32_t __cdecl GMToolHandler::onGMShowNavMeshRsp(GMToolHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  common::minet::Packet *v2; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rbx
  uint32_t v5; // r8d
  uint32_t packet_gate_id; // [rsp+1Ch] [rbp-44h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  v2 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  packet_gate_id = common::minet::Packet::getServiceAppId(v2, 2u);
  if ( packet_gate_id )
  {
    v4 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    std::shared_ptr<common::minet::Packet>::shared_ptr(&packet_ptr, p_packet_ptr);
    LOBYTE(v4) = (unsigned int)NetworkMgrBase::sendPacketToTargetService(
                                 v4,
                                 (common::minet::PacketPtr)__PAIR128__(2LL, &packet_ptr),
                                 packet_gate_id,
                                 v5) != 0;
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( (_BYTE)v4 )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/gm_tool_handler.cpp",
        "onGMShowNavMeshRsp",
        221);
      common::milog::MiLogStream::operator()(&v8, "send packet failed");
      common::milog::MiLogStream::~MiLogStream(&v8);
      return -1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/gm_tool_handler.cpp",
      "onGMShowNavMeshRsp",
      214);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v8, (const char (*)[20])"gateserver_ip is 0!");
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
};

// Line 228: range 000000000CB67B88-000000000CB67D76
int32_t __cdecl GMToolHandler::onNavMeshStatsNotify(
        GMToolHandler *const this,
        common::minet::PacketPtr *p_packet_ptr,
        const proto::NavMeshStatsNotify *notify)
{
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  NavMeshManager *Instance; // rax
  __int64 v6; // r12
  __int64 v7; // rbx
  unsigned int v8; // r14d
  unsigned int v9; // r13d
  const char *v10; // rax
  int i; // [rsp+2Ch] [rbp-84h]
  DynamicUniqueTokenType uid; // [rsp+30h] [rbp-80h]
  int size; // [rsp+34h] [rbp-7Ch]
  __int64 now_time; // [rsp+40h] [rbp-70h]
  const proto::PbNavMeshStatsInfo *info; // [rsp+48h] [rbp-68h]
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-60h] BYREF
  std::string v18; // [rsp+70h] [rbp-40h] BYREF

  v3 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  uid = common::minet::Packet::getUserId(v3);
  Instance = NavMeshManager::GetInstance();
  if ( !NavMeshManager::GetDynamicNavMesh(Instance, uid) )
    return -1;
  now_time = common::tools::TimeUtils::getNow();
  i = 0;
  size = proto::NavMeshStatsNotify::infos_size(notify);
  while ( i < size )
  {
    info = proto::NavMeshStatsNotify::infos(notify, i);
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/handler/gm_tool_handler.cpp",
      "onNavMeshStatsNotify",
      239);
    v6 = (unsigned int)proto::PbNavMeshStatsInfo::no_authority_ai_in_combat(info);
    v7 = (unsigned int)proto::PbNavMeshStatsInfo::authority_ai_in_combat(info);
    v8 = proto::PbNavMeshStatsInfo::total_no_authority_ai(info);
    v9 = proto::PbNavMeshStatsInfo::total_authority_ai(info);
    common::tools::TimeUtils::getStrByTime[abi:cxx11](&v18, now_time - 10 * (size - i - 1));
    v10 = (const char *)std::string::c_str(&v18);
    common::milog::MiLogStream::operator()(
      &v17,
      "[%s]uid total_authority_ai total_no_authority_ai authority_ai_in_combat no_authority_ai_in_combat,%u,%d,%d,%d,%d",
      v10,
      uid,
      v9,
      v8,
      v7,
      v6);
    std::string::~string(&v18);
    common::milog::MiLogStream::~MiLogStream(&v17);
    ++i;
  }
  return 0;
};
