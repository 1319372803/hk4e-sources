// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/handler/mp_handler.cpp

// Line 29: range 000000000DECBF6E-000000000DECC55F
int32_t __cdecl MpHandler::addPacketFuncToMap(
        MpHandler *const this,
        PacketFuncMap *push_packet_func_map,
        PacketFuncMap *push_fail_packet_func_map,
        PacketFuncMap *process_packet_func_map)
{
  MpHandler **v4; // r8
  const std::_Placeholder<1> *v5; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v7; // rax
  MpHandler **v8; // r8
  const std::_Placeholder<1> *v9; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v10; // rax
  MpHandler **v11; // r8
  const std::_Placeholder<1> *v12; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v13; // rax
  MpHandler **v14; // r8
  const std::_Placeholder<1> *v15; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v16; // rax
  __m128i v17; // [rsp+0h] [rbp-E0h] BYREF
  __m128i v18; // [rsp+10h] [rbp-D0h] BYREF
  PacketFuncMap *process_packet_func_mapa; // [rsp+20h] [rbp-C0h]
  PacketFuncMap *push_fail_packet_func_mapa; // [rsp+28h] [rbp-B8h]
  PacketFuncMap *push_packet_func_mapa; // [rsp+30h] [rbp-B0h]
  MpHandler *thisa; // [rsp+38h] [rbp-A8h]
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+4Ch] [rbp-94h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v24; // [rsp+50h] [rbp-90h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+58h] [rbp-88h] BYREF
  int (*__f[2])(MpHandler *, std::shared_ptr<common::minet::Packet>); // [rsp+60h] [rbp-80h] BYREF
  std::_Bind_helper<false,int (MpHandler::*)(std::shared_ptr<common::minet::Packet>),MpHandler*,const std::_Placeholder<1>&>::type v27; // [rsp+70h] [rbp-70h] BYREF
  common::milog::MiLogStream v28; // [rsp+90h] [rbp-50h] BYREF

  thisa = this;
  push_packet_func_mapa = push_packet_func_map;
  push_fail_packet_func_mapa = push_fail_packet_func_map;
  process_packet_func_mapa = process_packet_func_map;
  __x = 10472;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v24._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
  if ( std::operator!=(&v24, &__y) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/mp_handler.cpp",
      "addPacketFuncToMap",
      31);
    common::milog::MiLogStream::operator()(&v28, off_1BB4F780, 10472LL);
    common::milog::MiLogStream::~MiLogStream(&v28);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
    v17.m128i_i64[0] = (__int64)MpHandler::onUpdateMpStatusNotify;
    v17.m128i_i64[1] = 0LL;
    *(__m128i *)__f = _mm_load_si128(&v17);
    std::bind<int (MpHandler::*)(std::shared_ptr<common::minet::Packet>),MpHandler*,std::_Placeholder<1> const&>(
      &v27,
      __f,
      (MpHandler **)&__y,
      (const std::_Placeholder<1> *)&std::placeholders::_1,
      v4,
      v5);
    __x = 10472;
    v7 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_mapa,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MpHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MpHandler*,std::_Placeholder<1>)>>(
      v7,
      &v27);
    __x = 10498;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_mapa,
                    &__x)._M_node;
    v24._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
    if ( std::operator!=(&v24, &__y) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/mp_handler.cpp",
        "addPacketFuncToMap",
        32);
      common::milog::MiLogStream::operator()(&v28, off_1BB4F780, 10498LL);
      common::milog::MiLogStream::~MiLogStream(&v28);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
      v18.m128i_i64[0] = (__int64)MpHandler::onDelMpStatusNotify;
      v18.m128i_i64[1] = 0LL;
      *(__m128i *)__f = _mm_load_si128(&v18);
      std::bind<int (MpHandler::*)(std::shared_ptr<common::minet::Packet>),MpHandler*,std::_Placeholder<1> const&>(
        &v27,
        __f,
        (MpHandler **)&__y,
        (const std::_Placeholder<1> *)&std::placeholders::_1,
        v8,
        v9);
      __x = 10498;
      v10 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
              process_packet_func_mapa,
              &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MpHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MpHandler*,std::_Placeholder<1>)>>(
        v10,
        &v27);
      __x = 10412;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_mapa,
                      &__x)._M_node;
      v24._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
      if ( std::operator!=(&v24, &__y) )
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/mp_handler.cpp",
          "addPacketFuncToMap",
          33);
        common::milog::MiLogStream::operator()(&v28, off_1BB4F780, 10412LL);
        common::milog::MiLogStream::~MiLogStream(&v28);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
        __f[0] = (int (*)(MpHandler *, std::shared_ptr<common::minet::Packet>))MpHandler::onGetPlayerMpStatusListReq;
        __f[1] = 0LL;
        std::bind<int (MpHandler::*)(std::shared_ptr<common::minet::Packet>),MpHandler*,std::_Placeholder<1> const&>(
          &v27,
          __f,
          (MpHandler **)&__y,
          (const std::_Placeholder<1> *)&std::placeholders::_1,
          v11,
          v12);
        __x = 10412;
        v13 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                process_packet_func_mapa,
                &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MpHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MpHandler*,std::_Placeholder<1>)>>(
          v13,
          &v27);
        __x = 10407;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_mapa,
                        &__x)._M_node;
        v24._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
        if ( std::operator!=(&v24, &__y) )
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/mp_handler.cpp",
            "addPacketFuncToMap",
            34);
          common::milog::MiLogStream::operator()(&v28, off_1BB4F780, 10407LL);
          common::milog::MiLogStream::~MiLogStream(&v28);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
          __f[0] = (int (*)(MpHandler *, std::shared_ptr<common::minet::Packet>))MpHandler::onGetPlayerMpStatusInfoReq;
          __f[1] = 0LL;
          std::bind<int (MpHandler::*)(std::shared_ptr<common::minet::Packet>),MpHandler*,std::_Placeholder<1> const&>(
            &v27,
            __f,
            (MpHandler **)&__y,
            (const std::_Placeholder<1> *)&std::placeholders::_1,
            v14,
            v15);
          __x = 10407;
          v16 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                  process_packet_func_mapa,
                  &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (MpHandler::*)(std::shared_ptr<common::minet::Packet>) ()(MpHandler*,std::_Placeholder<1>)>>(
            v16,
            &v27);
          return 0;
        }
      }
    }
  }
};

// Line 39: range 000000000DECC560-000000000DECC755
int32_t __cdecl MpHandler::onUpdateMpStatusNotify(MpHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::minet::Packet *v5; // rax
  int32_t updated; // r14d
  MpService *v7; // rax
  int32_t result; // eax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-D0h] BYREF
  char v10[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 40 9 notify:40";
  *(_QWORD *)(v2 + 16) = MpHandler::onUpdateMpStatusNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  proto::UpdateMpStatusNotify::UpdateMpStatusNotify((proto::UpdateMpStatusNotify *const)(v2 + 48));
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  if ( common::minet::Packet::getProto<proto::UpdateMpStatusNotify>(v5, (proto::UpdateMpStatusNotify *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mp_handler.cpp",
      "onUpdateMpStatusNotify",
      43);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v9, (const char (*)[16])"getProto failed");
    common::milog::MiLogStream::~MiLogStream(&v9);
    updated = -1;
  }
  else
  {
    v7 = ServiceBox::findService<MpService>();
    updated = MpPlayerMgr::updateMpPlayer(&v7->mp_player_mgr, (proto::UpdateMpStatusNotify *)(v2 + 48));
  }
  proto::UpdateMpStatusNotify::~UpdateMpStatusNotify((proto::UpdateMpStatusNotify *const)(v2 + 48));
  result = updated;
  if ( v10 == (char *)v2 )
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

// Line 51: range 000000000DECC756-000000000DECC93F
int32_t __cdecl MpHandler::onDelMpStatusNotify(MpHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::minet::Packet *v5; // rax
  int32_t v6; // r14d
  MpPlayerMgr *p_mp_player_mgr; // r14
  uint32_t v8; // eax
  int32_t result; // eax
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-B0h] BYREF
  char v11[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 9 notify:52";
  *(_QWORD *)(v2 + 16) = MpHandler::onDelMpStatusNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  proto::DelMpStatusNotify::DelMpStatusNotify((proto::DelMpStatusNotify *const)(v2 + 32));
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  if ( common::minet::Packet::getProto<proto::DelMpStatusNotify>(v5, (proto::DelMpStatusNotify *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mp_handler.cpp",
      "onDelMpStatusNotify",
      55);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v10, (const char (*)[16])"getProto failed");
    common::milog::MiLogStream::~MiLogStream(&v10);
    v6 = -1;
  }
  else
  {
    p_mp_player_mgr = &ServiceBox::findService<MpService>()->mp_player_mgr;
    v8 = proto::DelMpStatusNotify::uid((const proto::DelMpStatusNotify *const)(v2 + 32));
    MpPlayerMgr::eraseMpPlayer(p_mp_player_mgr, v8);
    v6 = 0;
  }
  proto::DelMpStatusNotify::~DelMpStatusNotify((proto::DelMpStatusNotify *const)(v2 + 32));
  result = v6;
  if ( v11 == (char *)v2 )
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

// Line 64: range 000000000DECC940-000000000DECD4DB
int32_t __cdecl MpHandler::onGetPlayerMpStatusListReq(MpHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t PlayerMpStatusList; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  MpService *v7; // rax
  MpService *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,MpOnlinePlayerInfo>,false,false>::pointer v10; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,MpOnlinePlayerInfo>,false,false>::pointer v11; // rax
  MpService *v12; // rax
  MpService *v13; // rax
  MpService *v14; // rax
  unsigned int *M_current; // r15
  unsigned int *v16; // r14
  MpService *v17; // rax
  MpService *v18; // rax
  unsigned int *v19; // r15
  unsigned int *v20; // r14
  common::milog::MiLogStream *v21; // r14
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v22; // rax
  _DWORD *v23; // rdx
  MpService *v24; // rax
  MpService *v25; // rax
  common::milog::MiLogStream *v26; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,MpOnlinePlayerInfo>,false,false>::pointer v27; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,MpOnlinePlayerInfo>,false,false>::pointer v29; // rax
  common::milog::MiLogStream *v30; // r14
  MpService *v31; // r14
  int32_t result; // eax
  bool is_ps_player; // [rsp+2Bh] [rbp-205h]
  google::protobuf::int32 retcode; // [rsp+2Ch] [rbp-204h]
  uint32_t remain_count_0; // [rsp+30h] [rbp-200h]
  uint32_t remain_count; // [rsp+34h] [rbp-1FCh]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+38h] [rbp-1F8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+40h] [rbp-1F0h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,MpOnlinePlayerInfo>,false> __y; // [rsp+48h] [rbp-1E8h] BYREF
  const proto::GetPlayerMpStatusListReq *req; // [rsp+50h] [rbp-1E0h]
  proto::GetPlayerMpStatusListRsp *rsp_0; // [rsp+58h] [rbp-1D8h]
  std::vector<unsigned int> *__for_range; // [rsp+60h] [rbp-1D0h]
  proto::OnlinePlayerInfo *online_player_info; // [rsp+68h] [rbp-1C8h]
  std::shared_ptr<proto::GetPlayerMpStatusListRsp> p_rsp_ptr; // [rsp+70h] [rbp-1C0h] BYREF
  common::milog::MiLogStream v45; // [rsp+80h] [rbp-1B0h] BYREF
  char v46[400]; // [rsp+A0h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 32 4 10 cur_uid:70 48 4 7 uid:114 64 8 18 cur_player_iter:71 96 8 8 iter:116 128 16 10 req_ptr"
                        ":65 160 16 10 rsp_ptr:65 192 16 8 timer:81 224 24 18 choosen_uid_vec:80 288 24 18 remain_uid_vec:106";
  *(_QWORD *)(v2 + 16) = MpHandler::onGetPlayerMpStatusListReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -234881024;
  v4[536862728] = -218959118;
  v4[536862729] = -218103808;
  v4[536862730] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetPlayerMpStatusListReq>((common::minet::Packet *const)(v2 + 128));
  if ( std::operator==<proto::GetPlayerMpStatusListReq const>(
         (const std::shared_ptr<const proto::GetPlayerMpStatusListReq> *)(v2 + 128),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mp_handler.cpp",
      "onGetPlayerMpStatusListReq",
      65);
    common::milog::MiLogStream::operator()(&v45, off_1BB4F860);
    common::milog::MiLogStream::~MiLogStream(&v45);
    PlayerMpStatusList = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::GetPlayerMpStatusListReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetPlayerMpStatusListReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    common::tools::perf::make_shared<proto::GetPlayerMpStatusListRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetPlayerMpStatusListRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetPlayerMpStatusListRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
    proto::GetPlayerMpStatusListRsp::set_retcode(rsp_0, -1);
    retcode = -1;
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v2 + 32) = common::minet::Packet::getUserId(v6);
    v7 = ServiceBox::findService<MpService>();
    *(std::unordered_map<unsigned int,MpOnlinePlayerInfo>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,MpOnlinePlayerInfo>::find(
                                                                                    &v7->mp_player_mgr.mp_player_map,
                                                                                    (const std::unordered_map<unsigned int,MpOnlinePlayerInfo>::key_type *)(v2 + 32));
    v8 = ServiceBox::findService<MpService>();
    __y._M_cur = std::unordered_map<unsigned int,MpOnlinePlayerInfo>::end(&v8->mp_player_mgr.mp_player_map)._M_cur;
    if ( std::__detail::operator==<std::pair<unsigned int const,MpOnlinePlayerInfo>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MpOnlinePlayerInfo>,false> *)(v2 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/mp_handler.cpp",
        "onGetPlayerMpStatusListReq",
        74);
      v9 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(&v45, (const char (*)[32])off_1BB564E0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v45);
    }
    else
    {
      v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,MpOnlinePlayerInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,MpOnlinePlayerInfo>,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v10->second.platform_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v10 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->second.platform_type >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&v10->second.platform_type);
      }
      is_ps_player = TxtConfigMgr::isPsnPlatform(v10->second.platform_type);
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 224));
      common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 192));
      v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,MpOnlinePlayerInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,MpOnlinePlayerInfo>,false,false> *const)(v2 + 64));
      if ( *(char *)(((unsigned __int64)&v11->second.is_only_mp_with_ps_player >> 3) + 0x7FFF8000) < 0 )
        v11 = (std::__detail::_Node_iterator<std::pair<unsigned int const,MpOnlinePlayerInfo>,false,false>::pointer)__asan_report_load1(&v11->second.is_only_mp_with_ps_player);
      if ( v11->second.is_only_mp_with_ps_player )
      {
        v12 = ServiceBox::findService<MpService>();
        common::tools::RandomSet<unsigned int>::quickRandomSelect(
          &v12->mp_player_mgr.ps_uid_random_set_,
          0x32u,
          (std::vector<unsigned int> *)(v2 + 224));
      }
      else if ( is_ps_player )
      {
        v13 = ServiceBox::findService<MpService>();
        common::tools::RandomSet<unsigned int>::quickRandomSelect(
          &v13->mp_player_mgr.ps_uid_random_set_,
          0x32u,
          (std::vector<unsigned int> *)(v2 + 224));
        if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 224)) <= 0x31 )
        {
          remain_count = 50 - std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 224));
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 288));
          v14 = ServiceBox::findService<MpService>();
          common::tools::RandomSet<unsigned int>::quickRandomSelect(
            &v14->mp_player_mgr.uid_random_set_,
            remain_count,
            (std::vector<unsigned int> *)(v2 + 288));
          M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 288))._M_current;
          v16 = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 288))._M_current;
          *(std::vector<unsigned int>::iterator *)(v2 + 96) = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 224));
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
            (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__y,
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 96));
          std::vector<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,void>(
            (std::vector<unsigned int> *const)(v2 + 224),
            (std::vector<unsigned int>::const_iterator)__y._M_cur,
            (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v16,
            (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 288));
        }
      }
      else
      {
        v17 = ServiceBox::findService<MpService>();
        common::tools::RandomSet<unsigned int>::quickRandomSelect(
          &v17->mp_player_mgr.uid_random_set_,
          0x32u,
          (std::vector<unsigned int> *)(v2 + 224));
        if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 224)) <= 0x31 )
        {
          remain_count_0 = 50 - std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 224));
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 288));
          v18 = ServiceBox::findService<MpService>();
          common::tools::RandomSet<unsigned int>::quickRandomSelect(
            &v18->mp_player_mgr.ps_uid_random_set_,
            remain_count_0,
            (std::vector<unsigned int> *)(v2 + 288));
          v19 = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 288))._M_current;
          v20 = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 288))._M_current;
          *(std::vector<unsigned int>::iterator *)(v2 + 96) = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 224));
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
            (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__y,
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 96));
          std::vector<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,void>(
            (std::vector<unsigned int> *const)(v2 + 224),
            (std::vector<unsigned int>::const_iterator)__y._M_cur,
            (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v20,
            (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v19);
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 288));
        }
      }
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/handler/mp_handler.cpp",
        "onGetPlayerMpStatusListReq",
        113);
      v21 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v45,
              (const char (*)[28])"[PERF] after randomSelect: ");
      *(_DWORD *)(v2 + 48) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 192));
      common::milog::MiLogStream::operator<<<int,(int *)0>(v21, (const int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v45);
      __for_range = (std::vector<unsigned int> *)(v2 + 224);
      __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 224))._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v22 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
        v23 = v22;
        if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v22);
        }
        *(_DWORD *)(v2 + 48) = *v23;
        v24 = ServiceBox::findService<MpService>();
        *(std::unordered_map<unsigned int,MpOnlinePlayerInfo>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,MpOnlinePlayerInfo>::find(
                                                                                        &v24->mp_player_mgr.mp_player_map,
                                                                                        (const std::unordered_map<unsigned int,MpOnlinePlayerInfo>::key_type *)(v2 + 48));
        v25 = ServiceBox::findService<MpService>();
        __y._M_cur = std::unordered_map<unsigned int,MpOnlinePlayerInfo>::end(&v25->mp_player_mgr.mp_player_map)._M_cur;
        if ( std::__detail::operator==<std::pair<unsigned int const,MpOnlinePlayerInfo>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MpOnlinePlayerInfo>,false> *)(v2 + 96),
               &__y) )
        {
          common::milog::MiLogStream::create(
            &v45,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/mp_handler.cpp",
            "onGetPlayerMpStatusListReq",
            119);
          v26 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                  &v45,
                  (const char (*)[33])"player mp info not exists, uid: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v45);
          break;
        }
        v27 = std::__detail::_Node_iterator<std::pair<unsigned int const,MpOnlinePlayerInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,MpOnlinePlayerInfo>,false,false> *const)(v2 + 96));
        if ( *(char *)(((unsigned __int64)&v27->second.is_only_mp_with_ps_player >> 3) + 0x7FFF8000) < 0 )
          v27 = (std::__detail::_Node_iterator<std::pair<unsigned int const,MpOnlinePlayerInfo>,false,false>::pointer)__asan_report_load1(&v27->second.is_only_mp_with_ps_player);
        if ( !v27->second.is_only_mp_with_ps_player || is_ps_player )
        {
          online_player_info = proto::GetPlayerMpStatusListRsp::add_player_list(rsp_0);
          v29 = std::__detail::_Node_iterator<std::pair<unsigned int const,MpOnlinePlayerInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,MpOnlinePlayerInfo>,false,false> *const)(v2 + 96));
          proto::OnlinePlayerInfo::CopyFrom(online_player_info, &v29->second.online_player_info);
        }
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/handler/mp_handler.cpp",
        "onGetPlayerMpStatusListReq",
        129);
      v30 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              &v45,
              (const char (*)[24])"[PERF] after CopyFrom: ");
      *(_DWORD *)(v2 + 48) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 192));
      common::milog::MiLogStream::operator<<<int,(int *)0>(v30, (const int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v45);
      retcode = 0;
      common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 192));
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 224));
    }
    proto::GetPlayerMpStatusListRsp::set_retcode(rsp_0, retcode);
    v31 = ServiceBox::findService<MpService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      (std::shared_ptr<common::minet::Packet> *const)(v2 + 192),
      p_packet_ptr);
    std::shared_ptr<proto::GetPlayerMpStatusListRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::GetPlayerMpStatusListRsp> *)(v2 + 160));
    PlayerMpStatusList = ServiceBase::sendRsp<proto::GetPlayerMpStatusListRsp>(
                           v31,
                           &p_rsp_ptr,
                           (common::minet::PacketPtr *)(v2 + 192));
    std::shared_ptr<proto::GetPlayerMpStatusListRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 192));
    std::shared_ptr<proto::GetPlayerMpStatusListRsp>::~shared_ptr((std::shared_ptr<proto::GetPlayerMpStatusListRsp> *const)(v2 + 160));
  }
  std::shared_ptr<proto::GetPlayerMpStatusListReq const>::~shared_ptr((std::shared_ptr<const proto::GetPlayerMpStatusListReq> *const)(v2 + 128));
  result = PlayerMpStatusList;
  if ( v46 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 139: range 000000000DECD4DC-000000000DECDD29
int32_t __cdecl MpHandler::onGetPlayerMpStatusInfoReq(MpHandler *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t PlayerMpStatusInfo; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  MpPlayerMgr *v7; // r14
  const std::string *v8; // rax
  common::milog::MiLogStream *v9; // r14
  const std::string *v10; // rax
  MpPlayerMgr *p_mp_player_mgr; // r14
  const std::string *v12; // rax
  MpService *v13; // rax
  MpService *v14; // rax
  common::milog::MiLogStream *v15; // rax
  MpService *v16; // rax
  MpService *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,MpOnlinePlayerInfo>,false,false>::pointer v19; // rax
  MpService *v20; // r14
  int32_t result; // eax
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-154h]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,MpOnlinePlayerInfo>,false> __y; // [rsp+20h] [rbp-150h] BYREF
  const proto::GetPlayerMpStatusInfoReq *req; // [rsp+28h] [rbp-148h]
  proto::GetPlayerMpStatusInfoRsp *rsp_0; // [rsp+30h] [rbp-140h]
  proto::OnlinePlayerInfo *online_player_info; // [rsp+38h] [rbp-138h]
  std::shared_ptr<proto::GetPlayerMpStatusInfoRsp> p_rsp_ptr; // [rsp+40h] [rbp-130h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+50h] [rbp-120h] BYREF
  common::milog::MiLogStream v29; // [rsp+60h] [rbp-110h] BYREF
  char v30[240]; // [rsp+80h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 7 uid:143 48 4 14 target_uid:146 64 8 13 user_iter:185 96 8 15 target_iter:192 128 16 11 "
                        "req_ptr:140 160 16 11 rsp_ptr:140";
  *(_QWORD *)(v2 + 16) = MpHandler::onGetPlayerMpStatusInfoReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetPlayerMpStatusInfoReq>((common::minet::Packet *const)(v2 + 128));
  if ( std::operator==<proto::GetPlayerMpStatusInfoReq const>(
         (const std::shared_ptr<const proto::GetPlayerMpStatusInfoReq> *)(v2 + 128),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/mp_handler.cpp",
      "onGetPlayerMpStatusInfoReq",
      140);
    common::milog::MiLogStream::operator()(&v29, off_1BB4F860);
    common::milog::MiLogStream::~MiLogStream(&v29);
    PlayerMpStatusInfo = -1;
    goto LABEL_24;
  }
  req = std::__shared_ptr_access<proto::GetPlayerMpStatusInfoReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetPlayerMpStatusInfoReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
  common::tools::perf::make_shared<proto::GetPlayerMpStatusInfoRsp>();
  rsp_0 = std::__shared_ptr_access<proto::GetPlayerMpStatusInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetPlayerMpStatusInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
  proto::GetPlayerMpStatusInfoRsp::set_retcode(rsp_0, -1);
  retcode = -1;
  v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  *(_DWORD *)(v2 + 32) = common::minet::Packet::getUserId(v6);
  *(_DWORD *)(v2 + 48) = 0;
  if ( proto::GetPlayerMpStatusInfoReq::player_id_case(req) != kPsnId )
  {
    if ( proto::GetPlayerMpStatusInfoReq::player_id_case(req) == kOnlineId )
    {
      p_mp_player_mgr = &ServiceBox::findService<MpService>()->mp_player_mgr;
      v12 = proto::GetPlayerMpStatusInfoReq::online_id[abi:cxx11](req);
      *(_DWORD *)(v2 + 48) = MpPlayerMgr::findUidByPsnId(p_mp_player_mgr, v12);
      if ( !*(_DWORD *)(v2 + 48) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/mp_handler.cpp",
          "onGetPlayerMpStatusInfoReq",
          162);
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v29, (const char (*)[20])"online id not exist");
        common::milog::MiLogStream::~MiLogStream(&v29);
        proto::GetPlayerMpStatusInfoRsp::set_retcode(rsp_0, 7023);
        goto LABEL_23;
      }
    }
    else
    {
      if ( proto::GetPlayerMpStatusInfoReq::player_id_case(req) != kTargetUid )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/mp_handler.cpp",
          "onGetPlayerMpStatusInfoReq",
          173);
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(&v29, (const char (*)[28])off_1BB56760);
        common::milog::MiLogStream::~MiLogStream(&v29);
        proto::GetPlayerMpStatusInfoRsp::set_retcode(rsp_0, -1);
        goto LABEL_23;
      }
      *(_DWORD *)(v2 + 48) = proto::GetPlayerMpStatusInfoReq::target_uid(req);
    }
LABEL_15:
    if ( *(_DWORD *)(v2 + 48) )
    {
      proto::GetPlayerMpStatusInfoRsp::set_target_uid(rsp_0, *(_DWORD *)(v2 + 48));
      v13 = ServiceBox::findService<MpService>();
      *(std::unordered_map<unsigned int,MpOnlinePlayerInfo>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,MpOnlinePlayerInfo>::find(
                                                                                      &v13->mp_player_mgr.mp_player_map,
                                                                                      (const std::unordered_map<unsigned int,MpOnlinePlayerInfo>::key_type *)(v2 + 32));
      v14 = ServiceBox::findService<MpService>();
      __y._M_cur = std::unordered_map<unsigned int,MpOnlinePlayerInfo>::end(&v14->mp_player_mgr.mp_player_map)._M_cur;
      if ( std::__detail::operator==<std::pair<unsigned int const,MpOnlinePlayerInfo>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MpOnlinePlayerInfo>,false> *)(v2 + 64),
             &__y) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/mp_handler.cpp",
          "onGetPlayerMpStatusInfoReq",
          188);
        v15 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                &v29,
                (const char (*)[37])"[MP] cur user has not mp info, uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v29);
      }
      else
      {
        v16 = ServiceBox::findService<MpService>();
        *(std::unordered_map<unsigned int,MpOnlinePlayerInfo>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,MpOnlinePlayerInfo>::find(
                                                                                        &v16->mp_player_mgr.mp_player_map,
                                                                                        (const std::unordered_map<unsigned int,MpOnlinePlayerInfo>::key_type *)(v2 + 48));
        v17 = ServiceBox::findService<MpService>();
        __y._M_cur = std::unordered_map<unsigned int,MpOnlinePlayerInfo>::end(&v17->mp_player_mgr.mp_player_map)._M_cur;
        if ( std::__detail::operator==<std::pair<unsigned int const,MpOnlinePlayerInfo>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MpOnlinePlayerInfo>,false> *)(v2 + 96),
               &__y) )
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/handler/mp_handler.cpp",
            "onGetPlayerMpStatusInfoReq",
            195);
          v18 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  &v29,
                  (const char (*)[47])"[MP] target user has not mp info, target_uid: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v29);
          proto::GetPlayerMpStatusInfoRsp::set_retcode(rsp_0, 140);
          goto LABEL_23;
        }
        online_player_info = proto::GetPlayerMpStatusInfoRsp::mutable_target_player_info(rsp_0);
        v19 = std::__detail::_Node_iterator<std::pair<unsigned int const,MpOnlinePlayerInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,MpOnlinePlayerInfo>,false,false> *const)(v2 + 96));
        proto::OnlinePlayerInfo::CopyFrom(online_player_info, &v19->second.online_player_info);
        retcode = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/mp_handler.cpp",
        "onGetPlayerMpStatusInfoReq",
        180);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
        &v29,
        (const char (*)[23])"target_uid cannot be 0");
      common::milog::MiLogStream::~MiLogStream(&v29);
    }
    proto::GetPlayerMpStatusInfoRsp::set_retcode(rsp_0, retcode);
    goto LABEL_23;
  }
  v7 = &ServiceBox::findService<MpService>()->mp_player_mgr;
  v8 = proto::GetPlayerMpStatusInfoReq::psn_id[abi:cxx11](req);
  *(_DWORD *)(v2 + 48) = MpPlayerMgr::findUidByPsnId(v7, v8);
  if ( *(_DWORD *)(v2 + 48) )
    goto LABEL_15;
  common::milog::MiLogStream::create(
    &v29,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/handler/mp_handler.cpp",
    "onGetPlayerMpStatusInfoReq",
    152);
  v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v29, (const char (*)[18])"psn_id not exist:");
  v10 = proto::GetPlayerMpStatusInfoReq::psn_id[abi:cxx11](req);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, v10);
  common::milog::MiLogStream::~MiLogStream(&v29);
  proto::GetPlayerMpStatusInfoRsp::set_retcode(rsp_0, 7036);
LABEL_23:
  v20 = ServiceBox::findService<MpService>();
  std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
  std::shared_ptr<proto::GetPlayerMpStatusInfoRsp>::shared_ptr(
    &p_rsp_ptr,
    (const std::shared_ptr<proto::GetPlayerMpStatusInfoRsp> *)(v2 + 160));
  PlayerMpStatusInfo = ServiceBase::sendRsp<proto::GetPlayerMpStatusInfoRsp>(v20, &p_rsp_ptr, &p_req_packet_ptr);
  std::shared_ptr<proto::GetPlayerMpStatusInfoRsp>::~shared_ptr(&p_rsp_ptr);
  std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
  std::shared_ptr<proto::GetPlayerMpStatusInfoRsp>::~shared_ptr((std::shared_ptr<proto::GetPlayerMpStatusInfoRsp> *const)(v2 + 160));
LABEL_24:
  std::shared_ptr<proto::GetPlayerMpStatusInfoReq const>::~shared_ptr((std::shared_ptr<const proto::GetPlayerMpStatusInfoReq> *const)(v2 + 128));
  result = PlayerMpStatusInfo;
  if ( v30 == (char *)v2 )
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
