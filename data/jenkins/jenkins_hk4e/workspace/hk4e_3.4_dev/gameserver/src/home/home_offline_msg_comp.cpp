// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_offline_msg_comp.cpp

// Line 30: range 00000000145A779A-00000000145A7885
int32_t __cdecl HomeOfflineMsgComp::fromBin(HomeOfflineMsgComp *const this, const proto::HomeDataBin *home_data_bin)
{
  uint32_t v2; // edx
  uint32_t v3; // ebx
  const proto::HomeOfflineMsgBin *v4; // rcx
  int32_t idx; // [rsp+1Ch] [rbp-24h]
  const proto::HomeOfflineMsgCompBin *proto_comp; // [rsp+20h] [rbp-20h]
  const proto::HomeOfflineMsgExeBin *msg_bin; // [rsp+28h] [rbp-18h]

  proto_comp = proto::HomeDataBin::offline_msg_bin(home_data_bin);
  v2 = proto::HomeOfflineMsgCompBin::index(proto_comp);
  if ( *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->index_);
  }
  this->index_ = v2;
  std::vector<HomeOfflineMsgExeInfo>::clear(&this->next_offline_msg_vec_);
  for ( idx = 0; idx < proto::HomeOfflineMsgCompBin::next_offline_msg_list_size(proto_comp); ++idx )
  {
    msg_bin = proto::HomeOfflineMsgCompBin::next_offline_msg_list(proto_comp, idx);
    v3 = proto::HomeOfflineMsgExeBin::exe_times(msg_bin);
    v4 = proto::HomeOfflineMsgExeBin::msg(msg_bin);
    HomeOfflineMsgComp::addNextHomeOfflineMsg(this, v4, v3);
  }
  return 0;
};

// Line 45: range 00000000145A7886-00000000145A79D5
int32_t __cdecl HomeOfflineMsgComp::toBin(HomeOfflineMsgComp *const this, proto::HomeDataBin *home_data_bin)
{
  const HomeOfflineMsgExeInfo *v2; // rbx
  proto::HomeOfflineMsgBin *v3; // rax
  std::vector<HomeOfflineMsgExeInfo>::iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::vector<HomeOfflineMsgExeInfo>::iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  proto::HomeOfflineMsgCompBin *proto_comp; // [rsp+20h] [rbp-30h]
  std::vector<HomeOfflineMsgExeInfo> *__for_range; // [rsp+28h] [rbp-28h]
  const HomeOfflineMsgExeInfo *msg_info; // [rsp+30h] [rbp-20h]
  proto::HomeOfflineMsgExeBin *msg_bin; // [rsp+38h] [rbp-18h]

  proto_comp = proto::HomeDataBin::mutable_offline_msg_bin(home_data_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeOfflineMsgCompBin::set_index(proto_comp, this->index_);
  __for_range = &this->next_offline_msg_vec_;
  __for_begin._M_current = std::vector<HomeOfflineMsgExeInfo>::begin(&this->next_offline_msg_vec_)._M_current;
  __for_end._M_current = std::vector<HomeOfflineMsgExeInfo>::end(&this->next_offline_msg_vec_)._M_current;
  while ( __gnu_cxx::operator!=<HomeOfflineMsgExeInfo *,std::vector<HomeOfflineMsgExeInfo>>(&__for_begin, &__for_end) )
  {
    msg_info = __gnu_cxx::__normal_iterator<HomeOfflineMsgExeInfo *,std::vector<HomeOfflineMsgExeInfo>>::operator*(&__for_begin);
    msg_bin = proto::HomeOfflineMsgCompBin::add_next_offline_msg_list(proto_comp);
    v2 = msg_info;
    v3 = proto::HomeOfflineMsgExeBin::mutable_msg(msg_bin);
    proto::HomeOfflineMsgBin::operator=(v3, &v2->msg);
    if ( *(_BYTE *)(((unsigned __int64)&msg_info->exe_times >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&msg_info->exe_times >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::HomeOfflineMsgExeBin::set_exe_times(msg_bin, msg_info->exe_times);
    __gnu_cxx::__normal_iterator<HomeOfflineMsgExeInfo *,std::vector<HomeOfflineMsgExeInfo>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 59: range 00000000145A79D6-00000000145A7A0C
int32_t __cdecl HomeOfflineMsgComp::start(HomeOfflineMsgComp *const this)
{
  HomeOfflineMsgComp::exeNextHomeOfflineMsgVec(this);
  HomeOfflineMsgComp::removeHomeOfflineMsgRedisData(this);
  HomeOfflineMsgComp::getHomeOfflineMsgRedisData(this);
  return 0;
};

// Line 71: range 00000000145A7A0E-00000000145A7B79
void __cdecl HomeOfflineMsgComp::resetByGm(HomeOfflineMsgComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  char v4[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 9 notify:74";
  *(_QWORD *)(v1 + 16) = HomeOfflineMsgComp::resetByGm;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->index_);
  }
  this->index_ = 0;
  proto::ClearHomeOfflineMsgNotify::ClearHomeOfflineMsgNotify((proto::ClearHomeOfflineMsgNotify *const)(v1 + 32));
  HomeOfflineMsgComp::sendProtoToOfflineMsgService<proto::ClearHomeOfflineMsgNotify>(
    this,
    (const proto::ClearHomeOfflineMsgNotify *)(v1 + 32));
  proto::ClearHomeOfflineMsgNotify::~ClearHomeOfflineMsgNotify((proto::ClearHomeOfflineMsgNotify *const)(v1 + 32));
  if ( v4 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 79: range 00000000145A7B7A-00000000145A7DBF
void __cdecl HomeOfflineMsgComp::exeNextHomeOfflineMsgVec(HomeOfflineMsgComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::vector<HomeOfflineMsgExeInfo>::iterator __for_begin; // [rsp+10h] [rbp-A0h] BYREF
  std::vector<HomeOfflineMsgExeInfo>::iterator __for_end; // [rsp+18h] [rbp-98h] BYREF
  std::vector<HomeOfflineMsgExeInfo> *__for_range; // [rsp+20h] [rbp-90h]
  HomeOfflineMsgExeInfo *msg_info; // [rsp+28h] [rbp-88h]
  char v8[128]; // [rsp+30h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 10 msg_vec:80";
  *(_QWORD *)(v1 + 16) = HomeOfflineMsgComp::exeNextHomeOfflineMsgVec;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  std::vector<HomeOfflineMsgExeInfo>::vector((std::vector<HomeOfflineMsgExeInfo> *const)(v1 + 32));
  std::swap<HomeOfflineMsgExeInfo>((std::vector<HomeOfflineMsgExeInfo> *)(v1 + 32), &this->next_offline_msg_vec_);
  std::vector<HomeOfflineMsgExeInfo>::clear(&this->next_offline_msg_vec_);
  __for_range = (std::vector<HomeOfflineMsgExeInfo> *)(v1 + 32);
  __for_begin._M_current = std::vector<HomeOfflineMsgExeInfo>::begin((std::vector<HomeOfflineMsgExeInfo> *const)(v1 + 32))._M_current;
  __for_end._M_current = std::vector<HomeOfflineMsgExeInfo>::end((std::vector<HomeOfflineMsgExeInfo> *const)(v1 + 32))._M_current;
  while ( __gnu_cxx::operator!=<HomeOfflineMsgExeInfo *,std::vector<HomeOfflineMsgExeInfo>>(&__for_begin, &__for_end) )
  {
    msg_info = __gnu_cxx::__normal_iterator<HomeOfflineMsgExeInfo *,std::vector<HomeOfflineMsgExeInfo>>::operator*(&__for_begin);
    if ( HomeOfflineMsgComp::exeHomeOfflineMsg(this, &msg_info->msg) == 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&msg_info->exe_times >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&msg_info->exe_times >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      HomeOfflineMsgComp::addNextHomeOfflineMsg(this, &msg_info->msg, msg_info->exe_times + 1);
    }
    __gnu_cxx::__normal_iterator<HomeOfflineMsgExeInfo *,std::vector<HomeOfflineMsgExeInfo>>::operator++(&__for_begin);
  }
  std::vector<HomeOfflineMsgExeInfo>::~vector((std::vector<HomeOfflineMsgExeInfo> *const)(v1 + 32));
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 94: range 00000000145A7DC0-00000000145A7DDE
int32_t __cdecl HomeOfflineMsgComp::onNewHomeOfflineMsgNotify(HomeOfflineMsgComp *const this)
{
  HomeOfflineMsgComp::getHomeOfflineMsgRedisData(this);
  return 0;
};

// Line 101: range 00000000145A7DE0-00000000145A7F9D
void __cdecl HomeOfflineMsgComp::removeHomeOfflineMsgRedisData(HomeOfflineMsgComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  char v4[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 10 notify:106";
  *(_QWORD *)(v1 + 16) = HomeOfflineMsgComp::removeHomeOfflineMsgRedisData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->index_ )
  {
    proto::RemoveHomeOfflineMsgNotify::RemoveHomeOfflineMsgNotify((proto::RemoveHomeOfflineMsgNotify *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::RemoveHomeOfflineMsgNotify::set_index((proto::RemoveHomeOfflineMsgNotify *const)(v1 + 32), this->index_);
    HomeOfflineMsgComp::sendProtoToOfflineMsgService<proto::RemoveHomeOfflineMsgNotify>(
      this,
      (const proto::RemoveHomeOfflineMsgNotify *)(v1 + 32));
    proto::RemoveHomeOfflineMsgNotify::~RemoveHomeOfflineMsgNotify((proto::RemoveHomeOfflineMsgNotify *const)(v1 + 32));
  }
  if ( v4 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 114: range 00000000145A7F9E-00000000145A8113
void __cdecl HomeOfflineMsgComp::getHomeOfflineMsgRedisData(HomeOfflineMsgComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  char v4[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 7 req:115";
  *(_QWORD *)(v1 + 16) = HomeOfflineMsgComp::getHomeOfflineMsgRedisData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  proto::GetHomeOfflineMsgReq::GetHomeOfflineMsgReq((proto::GetHomeOfflineMsgReq *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::GetHomeOfflineMsgReq::set_index((proto::GetHomeOfflineMsgReq *const)(v1 + 32), this->index_);
  HomeOfflineMsgComp::sendProtoToOfflineMsgService<proto::GetHomeOfflineMsgReq>(
    this,
    (const proto::GetHomeOfflineMsgReq *)(v1 + 32));
  proto::GetHomeOfflineMsgReq::~GetHomeOfflineMsgReq((proto::GetHomeOfflineMsgReq *const)(v1 + 32));
  if ( v4 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 121: range 0000000014653DDC-0000000014654285
void __cdecl HomeOfflineMsgComp::sendProtoToOfflineMsgService<proto::ClearHomeOfflineMsgNotify>(
        HomeOfflineMsgComp *const this,
        const proto::ClearHomeOfflineMsgNotify *proto)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  GameserverService *v5; // r14
  unsigned __int64 v6; // rdx
  GameserverService *v7; // r14
  common::minet::Packet *v8; // r14
  uint32_t HomeUid; // eax
  common::minet::Packet *v10; // r14
  uint32_t v11; // eax
  common::minet::Packet *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  unsigned int (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  bool v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  unsigned int val; // [rsp+2Ch] [rbp-A4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-90h] BYREF
  char v23[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:123";
  *(_QWORD *)(v2 + 16) = HomeOfflineMsgComp::sendProtoToOfflineMsgService<proto::ClearHomeOfflineMsgNotify>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ClearHomeOfflineMsgNotify>((const proto::ClearHomeOfflineMsgNotify *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_offline_msg_comp.cpp",
      "sendProtoToOfflineMsgService",
      126);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v22, (const char (*)[19])"createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  else
  {
    v5 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v5, (common::minet::PacketPtr)__PAIR128__(v6, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v7 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v7, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    HomeUid = Home::getHomeUid(this->home_);
    common::minet::Packet::setUserId(v8, HomeUid);
    v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v11 = Home::getHomeUid(this->home_);
    common::minet::Packet::setHomeUserId(v10, v11);
    v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v12, 9u);
    v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8();
    v15 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v16 = v15(v13, &packet_ptr) != 0;
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( v16 )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_offline_msg_comp.cpp",
        "sendProtoToOfflineMsgService",
        137);
      v17 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              &v22,
              (const char (*)[24])"sendPacket fails, cmd: ");
      v18 = common::milog::MiLogStream::operator<<<proto::ClearHomeOfflineMsgNotify_CmdId,(proto::ClearHomeOfflineMsgNotify_CmdId*)0>(
              v17,
              &proto::ClearHomeOfflineMsgNotify::CMD_ID);
      v19 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v18, (const char (*)[12])" home_uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Home::getHomeUid(this->home_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 121: range 00000000146548CC-0000000014654D75
void __cdecl HomeOfflineMsgComp::sendProtoToOfflineMsgService<proto::GetHomeOfflineMsgReq>(
        HomeOfflineMsgComp *const this,
        const proto::GetHomeOfflineMsgReq *proto)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  GameserverService *v5; // r14
  unsigned __int64 v6; // rdx
  GameserverService *v7; // r14
  common::minet::Packet *v8; // r14
  uint32_t HomeUid; // eax
  common::minet::Packet *v10; // r14
  uint32_t v11; // eax
  common::minet::Packet *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  unsigned int (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  bool v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *HomeOfflineMsgReq_Cmd; // rax
  common::milog::MiLogStream *v19; // r14
  unsigned int val; // [rsp+2Ch] [rbp-A4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-90h] BYREF
  char v23[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:123";
  *(_QWORD *)(v2 + 16) = HomeOfflineMsgComp::sendProtoToOfflineMsgService<proto::GetHomeOfflineMsgReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::GetHomeOfflineMsgReq>((const proto::GetHomeOfflineMsgReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_offline_msg_comp.cpp",
      "sendProtoToOfflineMsgService",
      126);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v22, (const char (*)[19])"createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  else
  {
    v5 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v5, (common::minet::PacketPtr)__PAIR128__(v6, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v7 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v7, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    HomeUid = Home::getHomeUid(this->home_);
    common::minet::Packet::setUserId(v8, HomeUid);
    v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v11 = Home::getHomeUid(this->home_);
    common::minet::Packet::setHomeUserId(v10, v11);
    v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v12, 9u);
    v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8();
    v15 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v16 = v15(v13, &packet_ptr) != 0;
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( v16 )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_offline_msg_comp.cpp",
        "sendProtoToOfflineMsgService",
        137);
      v17 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              &v22,
              (const char (*)[24])"sendPacket fails, cmd: ");
      HomeOfflineMsgReq_Cmd = common::milog::MiLogStream::operator<<<proto::GetHomeOfflineMsgReq_CmdId,(proto::GetHomeOfflineMsgReq_CmdId*)0>(
                                v17,
                                &proto::GetHomeOfflineMsgReq::CMD_ID);
      v19 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
              HomeOfflineMsgReq_Cmd,
              (const char (*)[12])" home_uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Home::getHomeUid(this->home_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 121: range 0000000014654422-00000000146548CB
void __cdecl HomeOfflineMsgComp::sendProtoToOfflineMsgService<proto::RemoveHomeOfflineMsgNotify>(
        HomeOfflineMsgComp *const this,
        const proto::RemoveHomeOfflineMsgNotify *proto)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  GameserverService *v5; // r14
  unsigned __int64 v6; // rdx
  GameserverService *v7; // r14
  common::minet::Packet *v8; // r14
  uint32_t HomeUid; // eax
  common::minet::Packet *v10; // r14
  uint32_t v11; // eax
  common::minet::Packet *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  unsigned int (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  bool v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  unsigned int val; // [rsp+2Ch] [rbp-A4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-90h] BYREF
  char v23[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:123";
  *(_QWORD *)(v2 + 16) = HomeOfflineMsgComp::sendProtoToOfflineMsgService<proto::RemoveHomeOfflineMsgNotify>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::RemoveHomeOfflineMsgNotify>((const proto::RemoveHomeOfflineMsgNotify *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_offline_msg_comp.cpp",
      "sendProtoToOfflineMsgService",
      126);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v22, (const char (*)[19])"createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  else
  {
    v5 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    ServiceBase::setPacketSource(v5, (common::minet::PacketPtr)__PAIR128__(v6, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v7 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    GameserverService::setPacketGameThreadIndex(v7, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    HomeUid = Home::getHomeUid(this->home_);
    common::minet::Packet::setUserId(v8, HomeUid);
    v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v11 = Home::getHomeUid(this->home_);
    common::minet::Packet::setHomeUserId(v10, v11);
    v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v12, 9u);
    v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8();
    v15 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v16 = v15(v13, &packet_ptr) != 0;
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( v16 )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_offline_msg_comp.cpp",
        "sendProtoToOfflineMsgService",
        137);
      v17 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              &v22,
              (const char (*)[24])"sendPacket fails, cmd: ");
      v18 = common::milog::MiLogStream::operator<<<proto::RemoveHomeOfflineMsgNotify_CmdId,(proto::RemoveHomeOfflineMsgNotify_CmdId*)0>(
              v17,
              &proto::RemoveHomeOfflineMsgNotify::CMD_ID);
      v19 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v18, (const char (*)[12])" home_uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Home::getHomeUid(this->home_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 143: range 00000000145A8114-00000000145A88F0
int32_t __cdecl HomeOfflineMsgComp::onGetHomeOfflineMsgRsp(
        HomeOfflineMsgComp *const this,
        const proto::GetHomeOfflineMsgRsp *rsp_0)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  uint32_t index; // r14d
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rbx
  const proto::HomeOfflineMsgBin *v15; // rax
  uint32_t v16; // ecx
  uint32_t v17; // r14d
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  uint32_t v23; // edx
  common::milog::MiLogStream *v24; // r14
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r14
  unsigned int HomeUid; // [rsp+10h] [rbp-100h] BYREF
  int val; // [rsp+14h] [rbp-FCh] BYREF
  int32_t idx; // [rsp+18h] [rbp-F8h]
  uint32_t list_size; // [rsp+1Ch] [rbp-F4h]
  common::milog::MiLogStream v35; // [rsp+20h] [rbp-F0h] BYREF
  common::milog::MiLogStream v36; // [rsp+40h] [rbp-D0h] BYREF
  char v37[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 4 12 home_uid:144 48 48 7 msg:167";
  *(_QWORD *)(v2 + 16) = HomeOfflineMsgComp::onGetHomeOfflineMsgRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v2 + 32) = Home::getHomeUid(this->home_);
  if ( proto::GetHomeOfflineMsgRsp::retcode(rsp_0) )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_offline_msg_comp.cpp",
      "onGetHomeOfflineMsgRsp",
      147);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v36, (const char (*)[16])off_25410140);
    val = proto::GetHomeOfflineMsgRsp::retcode(rsp_0);
    v6 = common::milog::MiLogStream::operator<<<int,(int *)0>(v5, &val);
    v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])" home_uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v36);
    result = proto::GetHomeOfflineMsgRsp::retcode(rsp_0);
  }
  else
  {
    list_size = proto::GetHomeOfflineMsgRsp::offline_msg_list_size(rsp_0);
    if ( list_size )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      index = this->index_;
      if ( index == proto::GetHomeOfflineMsgRsp::last_index(rsp_0) )
      {
        for ( idx = 0; list_size > idx; ++idx )
        {
          v15 = proto::GetHomeOfflineMsgRsp::offline_msg_list(rsp_0, idx);
          proto::HomeOfflineMsgBin::HomeOfflineMsgBin((proto::HomeOfflineMsgBin *const)(v2 + 48), v15);
          v16 = proto::HomeOfflineMsgBin::index((const proto::HomeOfflineMsgBin *const)(v2 + 48));
          if ( *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( v16 <= this->index_ )
          {
            common::milog::MiLogStream::create(
              &v35,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/home/home_offline_msg_comp.cpp",
              "onGetHomeOfflineMsgRsp",
              182);
            v24 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v35, (const char (*)[10])"home_uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            HomeUid = Home::getHomeUid(this->home_);
            v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &HomeUid);
            v26 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v25,
                    (const char (*)[12])" msg.index:");
            val = proto::HomeOfflineMsgBin::index((const proto::HomeOfflineMsgBin *const)(v2 + 48));
            v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v26,
                    (const unsigned int *)&val);
            v28 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v27, (const char (*)[9])" index_:");
            v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &this->index_);
            v30 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v29, (const char (*)[8])" proto:");
            google::protobuf::Message::ShortDebugString[abi:cxx11](
              (std::string *)&v36,
              (google::protobuf::Message *)(v2 + 48));
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v30, (const std::string *)&v36);
            std::string::~string(&v36);
            common::milog::MiLogStream::~MiLogStream(&v35);
          }
          else
          {
            v17 = this->index_ + 1;
            if ( v17 != proto::HomeOfflineMsgBin::index((const proto::HomeOfflineMsgBin *const)(v2 + 48)) )
            {
              common::milog::MiLogStream::create(
                &v36,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/home/home_offline_msg_comp.cpp",
                "onGetHomeOfflineMsgRsp",
                172);
              v18 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      &v36,
                      (const char (*)[10])"home_uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              HomeUid = Home::getHomeUid(this->home_);
              v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &HomeUid);
              v20 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v19, (const char (*)[9])" index_:");
              v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->index_);
              v22 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v21, (const char (*)[3])"->");
              val = proto::HomeOfflineMsgBin::index((const proto::HomeOfflineMsgBin *const)(v2 + 48));
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)&val);
              common::milog::MiLogStream::~MiLogStream(&v36);
            }
            v23 = proto::HomeOfflineMsgBin::index((const proto::HomeOfflineMsgBin *const)(v2 + 48));
            if ( *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_store4(&this->index_);
            }
            this->index_ = v23;
            if ( HomeOfflineMsgComp::exeHomeOfflineMsg(this, (proto::HomeOfflineMsgBin *)(v2 + 48)) == 1 )
              HomeOfflineMsgComp::addNextHomeOfflineMsg(this, (const proto::HomeOfflineMsgBin *)(v2 + 48), 1u);
          }
          proto::HomeOfflineMsgBin::~HomeOfflineMsgBin((proto::HomeOfflineMsgBin *const)(v2 + 48));
        }
        HomeOfflineMsgComp::removeHomeOfflineMsgRedisData(this);
        result = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/home/home_offline_msg_comp.cpp",
          "onGetHomeOfflineMsgRsp",
          160);
        v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v36, (const char (*)[11])"home_uid: ");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v2 + 32));
        v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])" index_: ");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->index_);
        v14 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v13,
                (const char (*)[18])" rsp.last_index: ");
        val = proto::GetHomeOfflineMsgRsp::last_index(rsp_0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)&val);
        common::milog::MiLogStream::~MiLogStream(&v36);
        result = -1;
      }
    }
    else
    {
      result = 0;
    }
  }
  if ( v37 == (char *)v2 )
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
  return result;
};

// Line 190: range 00000000145A88F2-00000000145A8CD2
int32_t __cdecl HomeOfflineMsgComp::exeHomeOfflineMsg(HomeOfflineMsgComp *const this, proto::HomeOfflineMsgBin *msg)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  proto::HomeOfflineMsgBin::DetailCase v5; // eax
  const proto::HomeTestOp *v6; // rdx
  const proto::HomeRestoreDefaultsArrangementOp *v7; // rdx
  const proto::HomeRestoreDefaultsSceneArrangementOp *v8; // rdx
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  int32_t result; // eax
  proto::HomeOfflineMsgBin::DetailCase val; // [rsp+18h] [rbp-B8h] BYREF
  unsigned int HomeUid; // [rsp+1Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v20; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-90h] BYREF
  char v22[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 ret:191";
  *(_QWORD *)(v2 + 16) = HomeOfflineMsgComp::exeHomeOfflineMsg;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = 0;
  v5 = proto::HomeOfflineMsgBin::detail_case(msg);
  if ( v5 == kRestoreDefaultsSceneArrangementOp )
  {
    v8 = proto::HomeOfflineMsgBin::restore_defaults_scene_arrangement_op(msg);
    *(_DWORD *)(v2 + 32) = HomeOfflineMsgComp::restoreDefaultsArrangementOp(this, v8);
  }
  else
  {
    if ( v5 > kRestoreDefaultsSceneArrangementOp )
      goto LABEL_12;
    if ( v5 == kTestOp_0 )
    {
      v6 = proto::HomeOfflineMsgBin::test_op(msg);
      *(_DWORD *)(v2 + 32) = HomeOfflineMsgComp::testOp(this, v6);
      goto LABEL_15;
    }
    if ( v5 == kRestoreDefaultsArrangementOp )
    {
      v7 = proto::HomeOfflineMsgBin::restore_defaults_arrangement_op(msg);
      *(_DWORD *)(v2 + 32) = HomeOfflineMsgComp::restoreDefaultsArrangementOp(this, v7);
    }
    else
    {
LABEL_12:
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_offline_msg_comp.cpp",
        "exeHomeOfflineMsg",
        204);
      v9 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(&v21, (const char (*)[26])off_254103E0);
      val = proto::HomeOfflineMsgBin::detail_case(msg);
      v10 = common::milog::MiLogStream::operator<<<proto::HomeOfflineMsgBin::DetailCase,(proto::HomeOfflineMsgBin::DetailCase*)0>(
              v9,
              &val);
      v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" home_uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      HomeUid = Home::getHomeUid(this->home_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &HomeUid);
      common::milog::MiLogStream::~MiLogStream(&v21);
      *(_DWORD *)(v2 + 32) = -1;
    }
  }
LABEL_15:
  common::milog::MiLogStream::create(
    &v20,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/home/home_offline_msg_comp.cpp",
    "exeHomeOfflineMsg",
    208);
  v12 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v20, (const char (*)[15])"dealwith msg: ");
  google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v21, msg);
  v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v21);
  v14 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])" ret: ");
  v15 = common::milog::MiLogStream::operator<<<int,(int *)0>(v14, (const int *)(v2 + 32));
  v16 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v15, (const char (*)[12])" home_uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  HomeUid = Home::getHomeUid(this->home_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &HomeUid);
  std::string::~string(&v21);
  common::milog::MiLogStream::~MiLogStream(&v20);
  result = *(_DWORD *)(v2 + 32);
  if ( v22 == (char *)v2 )
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

// Line 214: range 00000000145A8CD4-00000000145A8F63
void __fastcall HomeOfflineMsgComp::addNextHomeOfflineMsg(
        HomeOfflineMsgComp *const this,
        const proto::HomeOfflineMsgBin *msg,
        uint32_t exe_times)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  HomeOfflineMsgExeInfo *v6; // rdx
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r13
  unsigned int HomeUid; // [rsp+2Ch] [rbp-F4h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-F0h] BYREF
  std::string val; // [rsp+50h] [rbp-D0h] BYREF
  HomeOfflineMsgExeInfo v16; // [rsp+70h] [rbp-B0h] BYREF
  char v17[112]; // [rsp+B0h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 13 exe_times:213";
  *(_QWORD *)(v3 + 16) = HomeOfflineMsgComp::addNextHomeOfflineMsg;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = exe_times;
  proto::HomeOfflineMsgBin::HomeOfflineMsgBin(&v16.msg, msg);
  v16.exe_times = *(_DWORD *)(v3 + 32);
  std::vector<HomeOfflineMsgExeInfo>::emplace_back<HomeOfflineMsgExeInfo>(&this->next_offline_msg_vec_, &v16, v6);
  HomeOfflineMsgExeInfo::~HomeOfflineMsgExeInfo(&v16);
  common::milog::MiLogStream::create(
    &v14,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/home/home_offline_msg_comp.cpp",
    "addNextHomeOfflineMsg",
    223);
  v7 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v14, (const char (*)[23])off_254104C0);
  google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &msg->google::protobuf::Message);
  v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
  v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])" exe_times: ");
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
  v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" home_uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  HomeUid = Home::getHomeUid(this->home_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &HomeUid);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v14);
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 227: range 00000000145A8F64-00000000145A902B
int32_t __cdecl HomeOfflineMsgComp::testOp(HomeOfflineMsgComp *const this, const proto::HomeTestOp *op)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-50h] BYREF
  std::string val; // [rsp+30h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/home/home_offline_msg_comp.cpp",
    "testOp",
    228);
  v2 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v4, (const char (*)[16])"[TEST] test_op:");
  google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &op->google::protobuf::Message);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v2, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v4);
  return 0;
};

// Line 233: range 00000000145A902C-00000000145A950C
int32_t __cdecl HomeOfflineMsgComp::restoreDefaultsArrangementOp(
        HomeOfflineMsgComp *const this,
        const proto::HomeRestoreDefaultsArrangementOp *op)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 HomeWorld; // rax
  unsigned __int64 v6; // rdx
  const google::protobuf::RepeatedField<unsigned int> *v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  Home *home; // r14
  Player *v11; // rax
  PlayerHomeComp *HomeComp; // rax
  Home *v13; // r14
  Player *v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  int32_t result; // eax
  bool is_included_cur_module; // [rsp+17h] [rbp-D9h]
  HomeSceneComp *scene_comp; // [rsp+18h] [rbp-D8h]
  char v20[208]; // [rsp+20h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 17 cur_module_id:247 64 16 20 owner_player_ptr:257 96 24 17 module_id_vec:245";
  *(_QWORD *)(v2 + 16) = HomeOfflineMsgComp::restoreDefaultsArrangementOp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  is_included_cur_module = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene_comp = Home::getSceneComp(this->home_);
  if ( proto::HomeRestoreDefaultsArrangementOp::is_all_module(op) )
  {
    HomeWorld = (unsigned __int64)HomeSceneComp::getHomeWorld(scene_comp);
    if ( *(_BYTE *)((HomeWorld >> 3) + 0x7FFF8000) )
      HomeWorld = __asan_report_load8();
    v6 = *(_QWORD *)HomeWorld + 120LL;
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      HomeWorld = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, __int64, __int64))v6)(HomeWorld, 5LL, 1LL);
    *(_QWORD *)(v2 + 96) = 0LL;
    *(_QWORD *)(v2 + 104) = 0LL;
    *(_QWORD *)(v2 + 112) = 0LL;
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 96));
    HomeSceneComp::restoreDefaultsArrangementByMuip(scene_comp, 1, (const std::vector<unsigned int> *)(v2 + 96));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 96));
    is_included_cur_module = 1;
  }
  else
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 96));
    v7 = proto::HomeRestoreDefaultsArrangementOp::module_id_list(op);
    common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v7, (std::vector<unsigned int> *)(v2 + 96));
    *(_DWORD *)(v2 + 48) = HomeSceneComp::getCurModuleId(scene_comp);
    if ( common::tools::MiscUtils::isContains<unsigned int>(
           (std::vector<unsigned int> *)(v2 + 96),
           (const unsigned int *)(v2 + 48)) )
    {
      v8 = (unsigned __int64)HomeSceneComp::getHomeWorld(scene_comp);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8();
      v9 = *(_QWORD *)v8 + 120LL;
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, __int64, __int64))v9)(v8, 5LL, 1LL);
    }
    HomeSceneComp::restoreDefaultsArrangementByMuip(scene_comp, 0, (const std::vector<unsigned int> *)(v2 + 96));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 96));
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  home = this->home_;
  Home::getHomeUid(home);
  Home::findPlayer((Home *const)(v2 + 64), (uint32_t)home);
  if ( std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::operator bool((const std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2> *const)(v2 + 64)) )
  {
    v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    HomeComp = Player::getHomeComp(v11);
    PlayerHomeComp::sendFurnitureCurModuleArrangeCountNotify(HomeComp);
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = this->home_;
    v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    Home::notifyHomeComfortInfo(v13, v14);
  }
  if ( is_included_cur_module )
  {
    v15 = (unsigned __int64)HomeSceneComp::getHomeWorld(scene_comp);
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      v15 = __asan_report_load8();
    v16 = *(_QWORD *)v15 + 120LL;
    if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
      v15 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, __int64, __int64))v16)(v15, 5LL, 1LL);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  result = 0;
  if ( v20 == (char *)v2 )
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

// Line 273: range 00000000145A950E-00000000145A97D3
int32_t __cdecl HomeOfflineMsgComp::restoreDefaultsArrangementOp(
        HomeOfflineMsgComp *const this,
        const proto::HomeRestoreDefaultsSceneArrangementOp *op)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  unsigned __int64 HomeWorld; // rax
  unsigned __int64 v6; // rdx
  uint32_t v7; // r14d
  uint32_t v8; // ecx
  Home *home; // r14
  Player *v10; // rax
  PlayerHomeComp *HomeComp; // rax
  Home *v12; // r14
  Player *v13; // rax
  int32_t result; // eax
  uint32_t module_id; // [rsp+10h] [rbp-80h]
  HomeSceneComp *scene_comp; // [rsp+18h] [rbp-78h]
  char v17[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 20 owner_player_ptr:285";
  *(_QWORD *)(v2 + 16) = HomeOfflineMsgComp::restoreDefaultsArrangementOp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  module_id = proto::HomeRestoreDefaultsSceneArrangementOp::module_id(op);
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene_comp = Home::getSceneComp(this->home_);
  if ( HomeSceneComp::getCurModuleId(scene_comp) == module_id )
  {
    HomeWorld = (unsigned __int64)HomeSceneComp::getHomeWorld(scene_comp);
    if ( *(_BYTE *)((HomeWorld >> 3) + 0x7FFF8000) )
      HomeWorld = __asan_report_load8();
    v6 = *(_QWORD *)HomeWorld + 120LL;
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      HomeWorld = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, __int64, __int64))v6)(HomeWorld, 5LL, 1LL);
  }
  v7 = proto::HomeRestoreDefaultsSceneArrangementOp::scene_id(op);
  v8 = proto::HomeRestoreDefaultsSceneArrangementOp::module_id(op);
  HomeSceneComp::restoreDefaultsSceneArrangementByMuip(scene_comp, v8, v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  home = this->home_;
  Home::getHomeUid(home);
  Home::findPlayer((Home *const)(v2 + 32), (uint32_t)home);
  if ( std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::operator bool((const std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2> *const)(v2 + 32)) )
  {
    v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    HomeComp = Player::getHomeComp(v10);
    PlayerHomeComp::sendFurnitureCurModuleArrangeCountNotify(HomeComp);
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v12 = this->home_;
    v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Home::notifyHomeComfortInfo(v12, v13);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  result = 0;
  if ( v17 == (char *)v2 )
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
